/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ActivityFishing$$get_Conf RVA 0x2903c30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02913c30(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5b6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0218f450 + 0x218f370);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0218f454 + 0x218f384),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0218f458 + 0x218f440));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0xc4);
}



// ===== FAT.ActivityFishing$$get_ConfDetail RVA 0x2903c84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02913c84(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5bb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5bb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0218f660 + 0x218f580);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0218f664 + 0x218f594),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0218f668 + 0x218f650));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0xcc);
}



// ===== FAT.ActivityFishing$$get_ConfMilestoneCur RVA 0x2903cd8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02913cd8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5b9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0218f558 + 0x218f478);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0218f55c + 0x218f48c),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0218f560 + 0x218f548));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 200);
}



// ===== FAT.ActivityFishing$$get_RarityInfo RVA 0x2903d2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02913d2c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ffb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ffb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0223a074 + 0x2239f94);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0223a078 + 0x2239fa8),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0223a07c + 0x223a064));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0xd0);
}



// ===== FAT.ActivityFishing$$get_World RVA 0x2903d80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02913d80(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ffc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ffc,0);
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
  return *(undefined4 *)(param_1 + 0xb8);
}



// ===== FAT.ActivityFishing$$get_FishInfoList RVA 0x2903dd4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02913dd4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ffd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ffd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0223a17c + 0x223a09c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0223a180 + 0x223a0b0),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0223a184 + 0x223a16c));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0xd4);
}



// ===== FAT.ActivityFishing$$get_TokenId RVA 0x2903e28 =====

undefined4 FUN_02913e28(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x5b5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b5,0);
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
  iVar1 = FUN_02913c30(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x58);
}



// ===== FAT.ActivityFishing$$get_MilestoneIdx RVA 0x2903e94 =====

undefined4 FUN_02913e94(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5be,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5be,0);
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
  return *(undefined4 *)(param_1 + 0xa0);
}



// ===== FAT.ActivityFishing$$get_RewardMilestoneIdx RVA 0x2903ee8 =====

undefined4 FUN_02913ee8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ffe,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ffe,0);
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
  return *(undefined4 *)(param_1 + 0xac);
}



// ===== FAT.ActivityFishing$$get_CurToken RVA 0x2903f3c =====

undefined4 FUN_02913f3c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5b7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b7,0);
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
  return *(undefined4 *)(param_1 + 0xa4);
}



// ===== FAT.ActivityFishing$$get_MaxToken RVA 0x2903f90 =====

undefined4 FUN_02913f90(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x5b8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b8,0);
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
  iVar1 = FUN_02913cd8(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x34);
}



// ===== FAT.ActivityFishing$$get_IsFinalMilestone RVA 0x2903ffc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02913ffc(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_029140b4 + 0x2914010);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029140b8 + 0x2914024));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5ba,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5ba,0);
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
  iVar4 = *(int *)(param_1 + 0xa0);
  iVar2 = FUN_02913c84(param_1);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x24);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  return (uint)(*(int *)(iVar2 + 0xc) + -1 <= iVar4);
}



// ===== FAT.ActivityFishing$$get_ExtraCatchCount RVA 0x29040bc =====

undefined4 FUN_029140bc(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x5fff,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5fff,0);
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
  iVar1 = FUN_02913c30(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x2c);
}



// ===== FAT.ActivityFishing$$get_Visual RVA 0x2904128 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02914128(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6000,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6000,0);
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
  return *(undefined4 *)(param_1 + 0x48);
}



// ===== FAT.ActivityFishing$$get_VisualBoard RVA 0x290417c =====

void FUN_0291417c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  *param_1 = *(undefined4 *)(param_2 + 0x44);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityFishing$$get_VisualHelp RVA 0x2904190 =====

void FUN_02914190(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x50);
  *param_1 = *(undefined4 *)(param_2 + 0x4c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityFishing$$get_VisualCollect RVA 0x29041a4 =====

void FUN_029141a4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x58);
  *param_1 = *(undefined4 *)(param_2 + 0x54);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityFishing$$get_VisualGet RVA 0x29041b8 =====

void FUN_029141b8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x60);
  *param_1 = *(undefined4 *)(param_2 + 0x5c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityFishing$$get_VisualTip RVA 0x29041cc =====

void FUN_029141cc(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x68);
  *param_1 = *(undefined4 *)(param_2 + 100);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityFishing$$get_VisualLoading RVA 0x29041e0 =====

void FUN_029141e0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x70);
  *param_1 = *(undefined4 *)(param_2 + 0x6c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityFishing$$get_VisualEnd RVA 0x29041f4 =====

void FUN_029141f4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x78);
  *param_1 = *(undefined4 *)(param_2 + 0x74);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityFishing$$get_VisualConvert RVA 0x2904208 =====

void FUN_02914208(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x80);
  *param_1 = *(undefined4 *)(param_2 + 0x7c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityFishing$$get_VisualMilestone RVA 0x290421c =====

void FUN_0291421c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x88);
  *param_1 = *(undefined4 *)(param_2 + 0x84);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityFishing$$get_StartPopup RVA 0x2904230 =====

void FUN_02914230(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x94);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ActivityFishing$$.ctor RVA 0x2904244 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02914244(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
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
  
  pcVar4 = (char *)(_UNK_02914734 + 0x2914260);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02914738 + 0x2914274));
    func_0x01384978(*(undefined4 *)(_UNK_0291473c + 0x2914280));
    func_0x01384978(*(undefined4 *)(_UNK_02914740 + 0x291428c));
    func_0x01384978(*(undefined4 *)(_UNK_02914744 + 0x2914298));
    func_0x01384978(*(undefined4 *)(_UNK_02914748 + 0x29142a4));
    func_0x01384978(*(undefined4 *)(_UNK_0291474c + 0x29142b0));
    func_0x01384978(*(undefined4 *)(_UNK_02914750 + 0x29142bc));
    func_0x01384978(*(undefined4 *)(_UNK_02914754 + 0x29142c8));
    func_0x01384978(*(undefined4 *)(_UNK_02914758 + 0x29142d4));
    func_0x01384978(*(undefined4 *)(_UNK_0291475c + 0x29142e0));
    func_0x01384978(*(undefined4 *)(_UNK_02914760 + 0x29142ec));
    func_0x01384978(*(undefined4 *)(_UNK_02914764 + 0x29142f8));
    func_0x01384978(*(undefined4 *)(_UNK_02914768 + 0x2914304));
    func_0x01384978(*(undefined4 *)(_UNK_0291476c + 0x2914310));
    func_0x01384978(*(undefined4 *)(_UNK_02914770 + 0x291431c));
    func_0x01384978(*(undefined4 *)(_UNK_02914774 + 0x2914328));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02914778 + 0x2914378));
  func_0x02b635c4(uVar1,0);
  piVar8 = *(int **)(_UNK_0291477c + 0x2914398);
  iVar2 = *piVar8;
  iVar3 = *(int *)(iVar2 + 0x74);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  if (iVar3 == 0) {
    func_0x01384ab4();
    iVar2 = *piVar8;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x588);
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02914780 + 0x29143c0));
  func_0x02b63ca4(uVar1,uVar6,0);
  uStack_2c = 0;
  uStack_30 = 0;
  uVar6 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x594);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  func_0x02b644a0(&uStack_30,uVar6,0);
  *(undefined4 *)(param_1 + 0x44) = uStack_30;
  *(undefined4 *)(param_1 + 0x48) = uStack_2c;
  uStack_34 = 0;
  uStack_38 = 0;
  func_0x02b644a0(&uStack_38,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x590),0);
  *(undefined4 *)(param_1 + 0x4c) = uStack_38;
  *(undefined4 *)(param_1 + 0x50) = uStack_34;
  uStack_3c = 0;
  uStack_40 = 0;
  func_0x02b644a0(&uStack_40,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x59c),0);
  *(undefined4 *)(param_1 + 0x54) = uStack_40;
  *(undefined4 *)(param_1 + 0x58) = uStack_3c;
  uStack_44 = 0;
  uStack_48 = 0;
  func_0x02b644a0(&uStack_48,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x5a0),0);
  *(undefined4 *)(param_1 + 0x5c) = uStack_48;
  *(undefined4 *)(param_1 + 0x60) = uStack_44;
  uStack_4c = 0;
  uStack_50 = 0;
  func_0x02b644a0(&uStack_50,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x5ac),0);
  *(undefined4 *)(param_1 + 100) = uStack_50;
  *(undefined4 *)(param_1 + 0x68) = uStack_4c;
  uStack_54 = 0;
  uStack_58 = 0;
  func_0x02b644a0(&uStack_58,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x5b0),0);
  *(undefined4 *)(param_1 + 0x6c) = uStack_58;
  *(undefined4 *)(param_1 + 0x70) = uStack_54;
  uStack_5c = 0;
  uStack_60 = 0;
  func_0x02b644a0(&uStack_60,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x588),0);
  *(undefined4 *)(param_1 + 0x74) = uStack_60;
  *(undefined4 *)(param_1 + 0x78) = uStack_5c;
  uStack_64 = 0;
  uStack_68 = 0;
  func_0x02b644a0(&uStack_68,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x58c),0);
  *(undefined4 *)(param_1 + 0x7c) = uStack_68;
  *(undefined4 *)(param_1 + 0x80) = uStack_64;
  uStack_6c = 0;
  uStack_70 = 0;
  func_0x02b644a0(&uStack_70,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x5a4),0);
  *(undefined4 *)(param_1 + 0x84) = uStack_70;
  *(undefined4 *)(param_1 + 0x88) = uStack_6c;
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x02b64854(&uStack_80,*(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x598),0);
  puVar5 = *(undefined4 **)(_UNK_02914784 + 0x29145b8);
  *(undefined4 *)(param_1 + 0x94) = uStack_78;
  *(ulonglong *)(param_1 + 0x8c) = CONCAT44(uStack_7c,uStack_80);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x01ea074c(uVar1,0);
  uVar6 = *puVar5;
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  uVar1 = func_0x01384be4(uVar6);
  func_0x01ea074c(uVar1,0);
  puVar5 = *(undefined4 **)(_UNK_02914788 + 0x29145f8);
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  uVar1 = func_0x01384be4(*puVar5);
  func_0x0443c630(uVar1,**(undefined4 **)(_UNK_0291478c + 0x2914614));
  puVar5 = *(undefined4 **)(_UNK_02914790 + 0x291462c);
  *(undefined4 *)(param_1 + 0xb0) = uVar1;
  *(undefined4 *)(param_1 + 0xb4) = 10000;
  uVar1 = func_0x01384be4(*puVar5);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_02914794 + 0x2914648));
  puVar5 = *(undefined4 **)(_UNK_02914798 + 0x291465c);
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  uVar1 = func_0x01384be4(*puVar5);
  puVar7 = *(undefined4 **)(_UNK_0291479c + 0x2914674);
  func_0x0328e950(uVar1,*puVar7);
  uVar6 = *puVar5;
  *(undefined4 *)(param_1 + 0xd8) = uVar1;
  uVar1 = func_0x01384be4(uVar6);
  func_0x0328e950(uVar1,*puVar7);
  puVar5 = *(undefined4 **)(_UNK_029147a0 + 0x291469c);
  *(undefined4 *)(param_1 + 0xdc) = uVar1;
  uVar1 = func_0x01384be4(*puVar5);
  func_0x04419ad8(uVar1,**(undefined4 **)(_UNK_029147a4 + 0x29146b4));
  puVar5 = *(undefined4 **)(_UNK_029147a8 + 0x29146c8);
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  uVar1 = func_0x01384be4(*puVar5);
  func_0x04463ff8(uVar1,**(undefined4 **)(_UNK_029147ac + 0x29146e0));
  puVar5 = *(undefined4 **)(_UNK_029147b0 + 0x29146f4);
  *(undefined4 *)(param_1 + 0xe4) = uVar1;
  uVar1 = func_0x01384be4(*puVar5);
  func_0x0421ec60(uVar1,**(undefined4 **)(_UNK_029147b4 + 0x291470c));
  *(undefined4 *)(param_1 + 0xe8) = uVar1;
  func_0x02b4dc04(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ===== FAT.ActivityFishing$$Open RVA 0x29047b8 =====

void FUN_029147b8(int param_1)

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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x6002,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6002,0);
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
  uStack_18 = 0;
  uStack_14 = 0;
  func_0x02b57d14(param_1,*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),
                  *(undefined4 *)(param_1 + 0x44));
  return;
}



// ===== FAT.ActivityFishing$$Close RVA 0x2904834 =====

void FUN_02914834(int param_1)

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
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x6004,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6004,0);
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
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = 0;
  func_0x02b57fac(param_1,*(undefined4 *)(iVar1 + 0xc),0,0);
  return;
}



// ===== FAT.ActivityFishing$$LoadSetup RVA 0x29048bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029148bc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
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
  
  pcVar6 = (char *)(_UNK_02914a48 + 0x29148d8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02914a4c + 0x29148ec));
    func_0x01384978(*(undefined4 *)(_UNK_02914a50 + 0x29148f8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6005,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6005,0);
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
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x28);
  iVar4 = 0;
  uVar5 = func_0x01c23c30(0,iVar1,0);
  *(undefined4 *)(param_1 + 0xa0) = uVar5;
  uVar5 = func_0x01c23c30(1,iVar1,0);
  *(undefined4 *)(param_1 + 0xa4) = uVar5;
  uVar5 = func_0x01c23c30(2,iVar1,0);
  *(undefined4 *)(param_1 + 0xa8) = uVar5;
  uVar5 = func_0x01c23c30(3,iVar1,0);
  *(undefined4 *)(param_1 + 0xac) = uVar5;
  func_0x02914a58(param_1);
  func_0x02914b68(param_1);
  puVar7 = *(undefined4 **)(_UNK_02914a54 + 0x29149cc);
  while( true ) {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar4) break;
    iVar2 = func_0x03653d1c(iVar1,iVar4,*puVar7);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(param_1 + 0xb4) < *(int *)(iVar2 + 0xc)) {
      func_0x01458344();
      func_0x02914e0c(param_1,extraout_r1,(int)*(uint *)(iVar2 + 0x10) >> 0x10,
                      *(uint *)(iVar2 + 0x10) & 0xffff);
    }
    iVar4 = iVar4 + 1;
  }
  func_0x02914fcc(param_1);
  pcVar6 = (char *)(_UNK_02915100 + 0x2915038);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02915104 + 0x291504c));
    *pcVar6 = '\x01';
  }
  uVar8 = func_0x0229f06c(0x6019,0);
  iVar1 = (int)((ulonglong)uVar8 >> 0x20);
  if ((int)uVar8 == 0) {
    iVar4 = *(int *)(param_1 + 0xcc);
    if (iVar4 != 0) {
      iVar1 = *(int *)(param_1 + 200);
    }
    if (iVar4 != 0 && iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x1c);
      iVar1 = *(int *)(iVar4 + 0x2c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      iVar4 = iVar1;
      if (0 < iVar1) {
        iVar4 = iVar2;
      }
      if (iVar4 < 1) {
        if (iVar2 < 1) {
          if (iVar1 < 1) {
            uVar5 = 0;
          }
          else {
            uVar5 = 2;
          }
        }
        else {
          uVar5 = 1;
        }
      }
      else {
        uVar5 = 3;
      }
      *(undefined4 *)(param_1 + 0xf0) = uVar5;
      return;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x6019,0);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3);
  return;
}



// ===== FAT.ActivityFishing$$InitConf RVA 0x2904a58 =====

/* WARNING: Removing unreachable block (ram,0x02916dac) */
/* WARNING: Removing unreachable block (ram,0x02916da0) */
/* WARNING: Removing unreachable block (ram,0x02917164) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02914a58(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 unaff_s16;
  undefined4 uVar16;
  undefined4 uVar17;
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
  
  iVar1 = func_0x0229f06c(0x6006,0);
  if (iVar1 == 0) {
    piVar12 = *(int **)(param_1 + 0x10);
    if (piVar12 == (int *)0x0) {
      func_0x01384bf0();
    }
    uVar15 = (**(code **)(*piVar12 + 0x100))(piVar12,*(undefined4 *)(*piVar12 + 0x104));
    uVar15 = func_0x017eb9d8(uVar15,0);
    iVar1 = *(int *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0xc4) = uVar15;
    if (iVar1 < 1) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(param_1 + 0xc4);
      iVar1 = *(int *)(iVar1 + 0x2c);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      uVar15 = *(undefined4 *)(iVar11 + 0x38);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01cf6408(iVar1,uVar15,0);
      *(int *)(param_1 + 0xa8) = iVar1;
    }
    iVar1 = func_0x017ec80c(iVar1,0);
    *(int *)(param_1 + 0xcc) = iVar1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02915f0c(param_1,*(undefined4 *)(iVar1 + 0x18));
    pcVar10 = (char *)(_UNK_02917334 + 0x2916938);
    uStack_38 = unaff_s16;
    if (*pcVar10 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02917338 + 0x291694c));
      func_0x01384978(*(undefined4 *)(_UNK_0291733c + 0x2916958));
      func_0x01384978(*(undefined4 *)(_UNK_02917340 + 0x2916964));
      func_0x01384978(*(undefined4 *)(_UNK_02917344 + 0x2916970));
      func_0x01384978(*(undefined4 *)(_UNK_02917348 + 0x291697c));
      func_0x01384978(*(undefined4 *)(_UNK_0291734c + 0x2916988));
      func_0x01384978(*(undefined4 *)(_UNK_02917350 + 0x2916994));
      func_0x01384978(*(undefined4 *)(_UNK_02917354 + 0x29169a0));
      func_0x01384978(*(undefined4 *)(_UNK_02917358 + 0x29169ac));
      func_0x01384978(*(undefined4 *)(_UNK_0291735c + 0x29169b8));
      func_0x01384978(*(undefined4 *)(_UNK_02917360 + 0x29169c4));
      func_0x01384978(*(undefined4 *)(_UNK_02917364 + 0x29169d0));
      func_0x01384978(*(undefined4 *)(_UNK_02917368 + 0x29169dc));
      func_0x01384978(*(undefined4 *)(_UNK_0291736c + 0x29169e8));
      func_0x01384978(*(undefined4 *)(_UNK_02917370 + 0x29169f4));
      func_0x01384978(*(undefined4 *)(_UNK_02917374 + 0x2916a00));
      func_0x01384978(*(undefined4 *)(_UNK_02917378 + 0x2916a0c));
      func_0x01384978(*(undefined4 *)(_UNK_0291737c + 0x2916a18));
      func_0x01384978(*(undefined4 *)(_UNK_02917380 + 0x2916a24));
      *pcVar10 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x5c0,0);
    if (iVar1 == 0) {
      iVar11 = *(int *)(param_1 + 0xcc);
      iVar1 = param_1;
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(iVar11 + 0x24);
      iVar13 = *(int *)(param_1 + 0xa0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      if (iVar13 < *(int *)(iVar11 + 0xc)) {
        iVar13 = *(int *)(iVar1 + 0xa0);
      }
      else {
        iVar13 = *(int *)(iVar11 + 0xc) + -1;
      }
      iVar14 = iVar1;
      uVar15 = func_0x0364c9b8(iVar11,iVar13,**(undefined4 **)(_UNK_02917384 + 0x2916ad0));
      uVar15 = func_0x017ed640(uVar15,0);
      *(undefined4 *)(iVar1 + 200) = uVar15;
      func_0x02917eb0(iVar1);
      iVar11 = *(int *)(iVar1 + 0xe0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar11 + 0xc) = 0;
      iVar1 = *(int *)(iVar1 + 200);
      *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar12 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_02917388 + 0x2916b3c));
LAB_02916b4c:
      if (piVar12 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar12;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_0291739c + 0x2916b68)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_02916bb0;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar12,**(int **)(_UNK_0291739c + 0x2916b68),0);
LAB_02916bb0:
      iVar1 = (*(code *)*puVar2)(piVar12,puVar2[1]);
      if (iVar1 != 0) {
        if (piVar12 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar12;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar9[-1] == **(int **)(_UNK_0291738c + 0x2916be4)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
              goto LAB_02916c2c;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar12,**(int **)(_UNK_0291738c + 0x2916be4),0);
LAB_02916c2c:
        uVar15 = (*(code *)*puVar2)(piVar12,puVar2[1]);
        if (*(int *)(**(int **)(_UNK_02917390 + 0x2916c4c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x02566088(&uStack_48,uVar15,0);
        uVar8 = uStack_44;
        uVar15 = uStack_48;
        iVar1 = *(int *)(iVar14 + 0xe0);
        uStack_44 = 0;
        uStack_48 = 0;
        func_0x038fd264(&uStack_48,uVar15,uVar8,**(undefined4 **)(_UNK_02917394 + 0x2916c8c));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar8 = uStack_44;
        uVar15 = uStack_48;
        iVar11 = *(int *)(iVar1 + 8);
        uVar7 = *(uint *)(iVar1 + 0xc);
        piVar9 = *(int **)(_UNK_02917398 + 0x2916cd0);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        iVar13 = *piVar9;
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        if (uVar7 < *(uint *)(iVar11 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar7 + 1;
          iVar11 = iVar11 + uVar7 * 8;
          *(undefined4 *)(iVar11 + 0x10) = uVar15;
          *(undefined4 *)(iVar11 + 0x14) = uVar8;
        }
        else {
          func_0x0441a364(iVar1,uVar15,uVar8,
                          *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
        }
        goto LAB_02916b4c;
      }
      if (piVar12 != (int *)0x0) {
        iVar1 = *piVar12;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar9[-1] == **(int **)(_UNK_029173a0 + 0x2916d40)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
              goto LAB_02916d88;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar12,**(int **)(_UNK_029173a0 + 0x2916d40),0);
LAB_02916d88:
        (*(code *)*puVar2)(piVar12,puVar2[1]);
      }
      iVar11 = *(int *)(iVar14 + 0xe4);
      iVar1 = iVar14;
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar11 + 0xc) = 0;
      iVar13 = *(int *)(iVar14 + 200);
      *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(iVar13 + 0x24);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      piVar12 = (int *)func_0x0364c2b4(iVar11,**(undefined4 **)(_UNK_029173a4 + 0x2916e08));
      uVar15 = 0;
      uVar8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uVar16 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uVar17 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
LAB_02916e18:
      piVar9 = piVar12;
      if (piVar12 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar11 = *piVar12;
      uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          if (piVar12[-1] == **(int **)(_UNK_029173d0 + 0x2916e38)) {
            puVar2 = (undefined4 *)(iVar11 + *piVar12 * 8 + 0xc0);
            goto LAB_02916e80;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_029173d0 + 0x2916e38),0);
LAB_02916e80:
      iVar11 = (*(code *)*puVar2)(piVar9,puVar2[1]);
      if (iVar11 != 0) {
        iVar11 = func_0x01384be4(**(undefined4 **)(_UNK_029173ac + 0x2916ea4));
        func_0x04874ed4(iVar11,0);
        piVar12 = piVar9;
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar13 = *piVar9;
        uVar7 = (uint)*(ushort *)(iVar13 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar13 + 0x58) + 4);
          do {
            if (piVar9[-1] == **(int **)(_UNK_029173b0 + 0x2916ed4)) {
              puVar2 = (undefined4 *)(iVar13 + *piVar9 * 8 + 0xc0);
              goto LAB_02916f1c;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar12,**(int **)(_UNK_029173b0 + 0x2916ed4),0);
LAB_02916f1c:
        uVar3 = (*(code *)*puVar2)(piVar12,puVar2[1]);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        uVar4 = **(undefined4 **)(_UNK_029173b4 + 0x2916f48);
        iVar13 = *(int *)(iVar1 + 0xd4);
        *(undefined4 *)(iVar11 + 8) = uVar3;
        uVar3 = func_0x01384be4(uVar4);
        func_0x035b0208(uVar3,iVar11,**(undefined4 **)(_UNK_029173b8 + 0x2916f68),0);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar13 = func_0x0328f838(iVar13,uVar3,**(undefined4 **)(_UNK_029173bc + 0x2916f90));
        uVar3 = *(undefined4 *)(iVar11 + 8);
        iVar11 = *(int *)(iVar1 + 0xe4);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar14 = *(int *)(iVar13 + 0x34);
        uVar4 = *(undefined4 *)(iVar13 + 0x24);
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x0364c9b8(iVar14,0,**(undefined4 **)(_UNK_029173c0 + 0x2916fd8));
        iVar13 = *(int *)(iVar13 + 0x34);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        uVar6 = func_0x0364c9b8(iVar13,1,**(undefined4 **)(_UNK_029173c4 + 0x2917004));
        uStack_48 = uVar15;
        uStack_44 = uVar8;
        uStack_40 = uVar16;
        uStack_3c = uVar17;
        func_0x0394a080(&uStack_48,uVar3,uVar4,uVar5,uVar6,
                        **(undefined4 **)(_UNK_029173c8 + 0x2917020));
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        uVar6 = uStack_3c;
        uVar5 = uStack_40;
        uVar4 = uStack_44;
        uVar3 = uStack_48;
        iVar13 = *(int *)(iVar11 + 8);
        uVar7 = *(uint *)(iVar11 + 0xc);
        iVar14 = **(int **)(_UNK_029173cc + 0x2917068);
        *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        if (uVar7 < *(uint *)(iVar13 + 0xc)) {
          *(uint *)(iVar11 + 0xc) = uVar7 + 1;
          iVar13 = iVar13 + uVar7 * 0x10;
          *(undefined4 *)(iVar13 + 0x10) = uVar3;
          *(undefined4 *)(iVar13 + 0x14) = uVar4;
          *(undefined4 *)(iVar13 + 0x18) = uVar5;
          *(undefined4 *)(iVar13 + 0x1c) = uVar6;
        }
        else {
          func_0x044648c4(iVar11,uVar3,uVar4,uVar5,uVar6,
                          *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38));
        }
        goto LAB_02916e18;
      }
      if (piVar9 != (int *)0x0) {
        iVar1 = *piVar9;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar12[-1] == **(int **)(_UNK_029173d4 + 0x29170fc)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
              goto LAB_0291714c;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_029173d4 + 0x29170fc),0);
LAB_0291714c:
        (*(code *)*puVar2)(piVar9,puVar2[1]);
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x5c0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6006,0);
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
  iVar11 = *(int *)(iVar1 + 8);
  uVar15 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar8 = 2;
  if (iVar1 == 0) {
    uVar8 = 1;
  }
  func_0x0245495c(iVar11,uVar15,&uStack_30,uVar8,0,0);
  return;
}



// ===== FAT.ActivityFishing$$InitTheme RVA 0x2904b68 =====

void FUN_02914b68(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_40 = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x600d,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xc4);
    uStack_30 = *(undefined4 *)(param_1 + 0x44);
    uStack_2c = *(undefined4 *)(param_1 + 0x48);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_30,*(undefined4 *)(iVar1 + 0x14),0);
    uStack_30 = *(undefined4 *)(param_1 + 0x54);
    uStack_2c = *(undefined4 *)(param_1 + 0x58);
    func_0x02b64540(&uStack_30,*(undefined4 *)(iVar1 + 0x28),0);
    uStack_30 = *(undefined4 *)(param_1 + 0x5c);
    uStack_2c = *(undefined4 *)(param_1 + 0x60);
    func_0x02b64540(&uStack_30,*(undefined4 *)(iVar1 + 0x50),0);
    uStack_30 = *(undefined4 *)(param_1 + 100);
    uStack_2c = *(undefined4 *)(param_1 + 0x68);
    func_0x02b64540(&uStack_30,*(undefined4 *)(iVar1 + 0x34),0);
    uStack_30 = *(undefined4 *)(param_1 + 0x6c);
    uStack_2c = *(undefined4 *)(param_1 + 0x70);
    func_0x02b64540(&uStack_30,*(undefined4 *)(iVar1 + 0x44),0);
    uStack_30 = *(undefined4 *)(param_1 + 0x74);
    uStack_2c = *(undefined4 *)(param_1 + 0x78);
    func_0x02b64540(&uStack_30,*(undefined4 *)(iVar1 + 0x20),0);
    uStack_30 = *(undefined4 *)(param_1 + 0x4c);
    uStack_2c = *(undefined4 *)(param_1 + 0x50);
    func_0x02b64540(&uStack_30,*(undefined4 *)(iVar1 + 0x3c),0);
    uStack_38 = *(undefined4 *)(param_1 + 0x94);
    uStack_40 = *(undefined8 *)(param_1 + 0x8c);
    func_0x02b64928(&uStack_40,*(undefined4 *)(iVar1 + 0x54),param_1,0,1,0);
    iVar2 = *(int *)(param_1 + 0x3c);
    uVar5 = *(undefined4 *)(param_1 + 0x40);
    uVar3 = *(undefined4 *)(iVar1 + 0x20);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02b61a50(iVar2,uVar3,uVar5,0);
    if (iVar2 != 0) {
      piVar4 = *(int **)(param_1 + 0x98);
      uVar3 = *(undefined4 *)(param_1 + 0x3c);
      uVar5 = *(undefined4 *)(param_1 + 0x40);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar4 + 0x128))(piVar4,param_1,uVar3,uVar5,0,0,*(undefined4 *)(*piVar4 + 300));
    }
    uStack_30 = *(undefined4 *)(param_1 + 0x7c);
    uStack_2c = *(undefined4 *)(param_1 + 0x80);
    func_0x02b64540(&uStack_30,*(undefined4 *)(iVar1 + 0x24),0);
    uStack_30 = *(undefined4 *)(param_1 + 0x84);
    uStack_2c = *(undefined4 *)(param_1 + 0x88);
    func_0x02b64540(&uStack_30,*(undefined4 *)(iVar1 + 0x48),0);
    piVar4 = *(int **)(param_1 + 0x9c);
    uVar5 = *(undefined4 *)(param_1 + 0x7c);
    uVar3 = *(undefined4 *)(param_1 + 0x80);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar4 + 0x128))(piVar4,param_1,uVar3,uVar5,0,0,*(undefined4 *)(*piVar4 + 300));
  }
  else {
    iVar1 = func_0x0229f13c(0x600d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityFishing$$AddNewFish RVA 0x2904e0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02914e0c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02914fb0 + 0x2914e2c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02914fb4 + 0x2914e44));
    func_0x01384978(*(undefined4 *)(_UNK_02914fb8 + 0x2914e50));
    func_0x01384978(*(undefined4 *)(_UNK_02914fbc + 0x2914e5c));
    *pcVar5 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x6016,0);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0xe8);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x04220004(iVar4,param_2,**(undefined4 **)(_UNK_02914fc0 + 0x2914ed4));
    iVar4 = *(int *)(param_1 + 0xb0);
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x03923edc(&uStack_30,param_2,param_3,param_4,**(undefined4 **)(_UNK_02914fc4 + 0x2914ef4))
    ;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = uStack_28;
    uVar2 = uStack_2c;
    uVar1 = uStack_30;
    iVar6 = *(int *)(iVar4 + 8);
    uVar7 = *(uint *)(iVar4 + 0xc);
    iVar8 = **(int **)(_UNK_02914fc8 + 0x2914f40);
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (uVar7 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar4 + 0xc) = uVar7 + 1;
      iVar6 = iVar6 + uVar7 * 0xc;
      *(undefined4 *)(iVar6 + 0x10) = uVar1;
      *(undefined4 *)(iVar6 + 0x14) = uVar2;
      *(undefined4 *)(iVar6 + 0x18) = uVar3;
    }
    else {
      func_0x0443cefc(iVar4,uVar1,uVar2,uVar3,
                      *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
    }
  }
  else {
    iVar4 = func_0x0229f13c(0x6016,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x02179c40(iVar4,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ActivityFishing$$RefreshOutputType RVA 0x2904fcc =====

void FUN_02914fcc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6017,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6017,0);
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
  *(undefined4 *)(param_1 + 0xec) = 1;
  return;
}



// ===== FAT.ActivityFishing$$RefreshOutputMethod RVA 0x2905024 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02915024(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
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
  
  pcVar4 = (char *)(_UNK_02915100 + 0x2915038);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02915104 + 0x291504c));
    *pcVar4 = '\x01';
  }
  uVar7 = func_0x0229f06c(0x6019,0);
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  if ((int)uVar7 != 0) {
    iVar1 = func_0x0229f13c(0x6019,0);
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
  iVar3 = *(int *)(param_1 + 0xcc);
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1 + 200);
  }
  if (iVar3 != 0 && iVar1 != 0) {
    iVar6 = *(int *)(iVar1 + 0x1c);
    iVar1 = *(int *)(iVar3 + 0x2c);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar6 + 0xc);
    iVar3 = iVar1;
    if (0 < iVar1) {
      iVar3 = iVar6;
    }
    if (iVar3 < 1) {
      if (iVar6 < 1) {
        if (iVar1 < 1) {
          uVar5 = 0;
        }
        else {
          uVar5 = 2;
        }
      }
      else {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 3;
    }
    *(undefined4 *)(param_1 + 0xf0) = uVar5;
    return;
  }
  return;
}



// ===== FAT.ActivityFishing$$SaveSetup RVA 0x2905108 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02915108(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined8 uStack_28;
  
  pcVar3 = (char *)(_UNK_029153ec + 0x2915124);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029153f0 + 0x2915138));
    func_0x01384978(*(undefined4 *)(_UNK_029153f4 + 0x2915144));
    func_0x01384978(*(undefined4 *)(_UNK_029153f8 + 0x2915150));
    func_0x01384978(*(undefined4 *)(_UNK_029153fc + 0x291515c));
    func_0x01384978(*(undefined4 *)(_UNK_02915400 + 0x2915168));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x601b,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x28);
    uVar2 = func_0x01c23578(0,*(undefined4 *)(param_1 + 0xa0),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar6 = *(undefined4 **)(_UNK_02915404 + 0x291521c);
    func_0x03652b00(iVar1,uVar2,*puVar6);
    uVar2 = func_0x01c23578(1,*(undefined4 *)(param_1 + 0xa4),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar6);
    uVar2 = func_0x01c23578(2,*(undefined4 *)(param_1 + 0xa8),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar6);
    uVar2 = func_0x01c23578(3,*(undefined4 *)(param_1 + 0xac),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar6);
    iVar5 = *(int *)(param_1 + 0xb0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x0443dda4(&uStack_50,iVar5,**(undefined4 **)(_UNK_02915408 + 0x29152d4));
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = iStack_44;
    uStack_28 = uStack_40;
    puVar4 = *(undefined4 **)(_UNK_0291540c + 0x29152fc);
    while (iVar5 = func_0x03f4d7a4(&uStack_38,*puVar4), iVar5 != 0) {
      uVar2 = func_0x01c23578(*(int *)(param_1 + 0xb4) + iStack_2c,
                              uStack_28._4_4_ | (int)uStack_28 << 0x10,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar1,uVar2,*puVar6);
    }
    func_0x03f4d7a0(&uStack_38,**(undefined4 **)(_UNK_02915410 + 0x2915358));
  }
  else {
    iVar1 = func_0x0229f13c(0x601b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ActivityFishing$$SetupFresh RVA 0x290541c =====

void FUN_0291541c(int param_1)

{
  int iVar1;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x601c,0);
  if (iVar1 == 0) {
    FUN_02914a58(param_1);
    FUN_02914b68(param_1);
    FUN_02914fcc(param_1);
    FUN_02915024(param_1);
    func_0x029154c4(param_1,0);
    uStack_20 = *(undefined8 *)(param_1 + 0x8c);
    uStack_18 = *(undefined4 *)(param_1 + 0x94);
    func_0x02b64cc4(&uStack_20,0,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x601c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityFishing$$InitWorld RVA 0x29054c4 =====

/* WARNING: Removing unreachable block (ram,0x029159e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029154c4(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_02915b00 + 0x29154e0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02915b04 + 0x29154f4));
    func_0x01384978(*(undefined4 *)(_UNK_02915b08 + 0x2915500));
    func_0x01384978(*(undefined4 *)(_UNK_02915b0c + 0x291550c));
    func_0x01384978(*(undefined4 *)(_UNK_02915b10 + 0x2915518));
    func_0x01384978(*(undefined4 *)(_UNK_02915b14 + 0x2915524));
    func_0x01384978(*(undefined4 *)(_UNK_02915b18 + 0x2915530));
    func_0x01384978(*(undefined4 *)(_UNK_02915b1c + 0x291553c));
    func_0x01384978(*(undefined4 *)(_UNK_02915b20 + 0x2915548));
    func_0x01384978(*(undefined4 *)(_UNK_02915b24 + 0x2915554));
    func_0x01384978(*(undefined4 *)(_UNK_02915b28 + 0x2915560));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x601d,0);
  if (iVar2 != 0) {
    iVar3 = func_0x0229f13c(0x601d,0);
    iVar2 = param_1;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02915b2c + 0x29155c0));
  func_0x02143488(iVar3,0);
  iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02915b30 + 0x29155dc));
  func_0x0214d6c8(iVar2,0,0,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0214e900(iVar2,iVar3,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x02141f58(iVar3,iVar2,0);
  iVar9 = func_0x01c24918(0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar9 + 0x4c);
  iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_02915b34 + 0x2915650));
  func_0x01db7f44(iVar9,0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar9 + 8) = 4;
  *(int *)(iVar9 + 0xc) = iVar3;
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x01db7f4c(iVar11,iVar9,0);
  iVar9 = func_0x01c24918(0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(param_1 + 0xcc);
  iVar9 = *(int *)(iVar9 + 0x4c);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar10 = *(undefined4 *)(iVar11 + 0x14);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uStack_48 = 0;
  uStack_44 = 0;
  func_0x01db8438(iVar9,iVar3,uVar10,param_2 == (int *)0x0);
  if (param_2 == (int *)0x0) {
    iVar9 = func_0x01c24918(0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar9 + 0x40);
    iVar9 = FUN_02913c84(param_1);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0x20);
    iStack_2c = iVar2;
    iStack_28 = iVar3;
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    piVar5 = (int *)func_0x0364c2b4(iVar9,**(undefined4 **)(_UNK_02915b38 + 0x291577c));
    piVar12 = *(int **)(_UNK_02915b3c + 0x2915798);
    piVar13 = *(int **)(_UNK_02915b40 + 0x29157a0);
    do {
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar5;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar12) {
            puVar1 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_029157f8;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(piVar5,*piVar12,0);
LAB_029157f8:
      iVar9 = (*(code *)*puVar1)(piVar5,puVar1[1]);
      iVar3 = iStack_28;
      iVar2 = iStack_2c;
      if (iVar9 == 0) goto LAB_02915964;
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar5;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_02915b44 + 0x291582c)) {
            puVar1 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_02915874;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02915b44 + 0x291582c),0);
LAB_02915874:
      uVar10 = (*(code *)*puVar1)(piVar5,puVar1[1]);
      uVar6 = FUN_02913d80(param_1);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x01cdef00(iVar11,uVar6,0,0);
      iVar2 = *piVar13;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar13;
      }
      uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 600);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = **(undefined4 **)(_UNK_02915b48 + 0x29158ec);
      uStack_34 = **(undefined4 **)(_UNK_02915b4c + 0x29158f8);
      uStack_3c = 0x10d;
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uVar10 = func_0x01cdcbac(iVar11,uVar10,1,uVar6);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x01cdf088(iVar11,uVar10,0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x01cdefd0(iVar11,0);
    } while( true );
  }
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0214a9e8(iVar3,param_2,0,0);
  goto LAB_029159f0;
LAB_02915964:
  if (piVar5 != (int *)0x0) {
    iVar9 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar12[-1] == **(int **)(_UNK_02915b50 + 0x2915988)) {
          puVar1 = (undefined4 *)(iVar9 + *piVar12 * 8 + 0xc0);
          goto LAB_029159d0;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_02915b50 + 0x2915988),0);
LAB_029159d0:
    (*(code *)*puVar1)(piVar5,puVar1[1]);
  }
LAB_029159f0:
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x02142104(iVar3,param_1,0);
  *(int *)(param_1 + 0xb8) = iVar3;
  *(int *)(param_1 + 0xbc) = iVar2;
  pcVar8 = (char *)(_UNK_029174c4 + 0x29173f0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029174c8 + 0x2917404));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6020,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6020,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar3,uVar10,&uStack_30,uVar6);
    return;
  }
  iVar2 = func_0x0291b244(param_1);
  if (iVar2 == 0) {
    return;
  }
  uVar10 = func_0x01384be4(**(undefined4 **)(_UNK_029174cc + 0x291746c));
  func_0x02157acc(uVar10,param_1,0);
  *(undefined4 *)(param_1 + 0xc0) = uVar10;
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  param_2 = *(int **)(param_1 + 0xc0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar8 = (char *)(_UNK_01dbba4c + 0x1dbb948);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbba50 + 0x1dbb95c),param_2,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dbba54 + 0x1dbb968));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x16b4,0);
  if (iVar3 == 0) {
    iVar2 = func_0x02f6252c(*(undefined4 *)(iVar2 + 0x34),param_2,
                            **(undefined4 **)(_UNK_01dbba58 + 0x1dbb9c8));
    if (param_2 == (int *)0x0 || iVar2 == 0) {
      return;
    }
    iVar2 = *param_2;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01dbba5c + 0x1dbb9f0)) {
          puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xd0);
          goto LAB_01dbba38;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01dbba5c + 0x1dbb9f0),2);
LAB_01dbba38:
                    /* WARNING: Could not recover jumptable at 0x01dbba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)(param_2,puVar1[1]);
    return;
  }
  iVar3 = func_0x0229f13c(0x16b4,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
SUB_02174108:
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  iStack_2c = uStack_44;
  iStack_28 = uStack_40;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar2,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar9 = *(int *)(iVar3 + 8);
  uVar10 = *(undefined4 *)(iVar3 + 0xc);
  iVar2 = *(int *)(iVar3 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 3;
  if (iVar2 == 0) {
    uVar6 = 2;
  }
  func_0x0245495c(iVar9,uVar10,&uStack_38,uVar6,0,0);
  return;
}



// ===== FAT.ActivityFishing$$WhenReset RVA 0x2905b58 =====

void FUN_02915b58(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6021,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x6022,0);
    if (iVar1 == 0) {
      func_0x02917738(param_1);
      iVar1 = FUN_02913d80(param_1);
      if (iVar1 != 0) {
        func_0x021421a8(iVar1,param_1,0);
      }
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      uVar4 = FUN_02913d80(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01dbc0ec(iVar1,uVar4,0);
      *(undefined4 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      return;
    }
    iVar1 = func_0x0229f13c(0x6022,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6021,0);
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
  return;
}



// ===== FAT.ActivityFishing$$Cleanup RVA 0x2905bb0 =====

void FUN_02915bb0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6022,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6022,0);
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
  func_0x02917738(param_1);
  iVar1 = FUN_02913d80(param_1);
  if (iVar1 != 0) {
    func_0x021421a8(iVar1,param_1,0);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  uVar4 = FUN_02913d80(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbc0ec(iVar1,uVar4,0);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return;
}



// ===== FAT.ActivityFishing$$WhenEnd RVA 0x2905c74 =====

void FUN_02915c74(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6024,0);
  if (iVar1 == 0) {
    func_0x02915cd4(param_1);
    iVar1 = func_0x0229f06c(0x6022,0);
    if (iVar1 == 0) {
      func_0x02917738(param_1);
      iVar1 = FUN_02913d80(param_1);
      if (iVar1 != 0) {
        func_0x021421a8(iVar1,param_1,0);
      }
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      uVar4 = FUN_02913d80(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01dbc0ec(iVar1,uVar4,0);
      *(undefined4 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      return;
    }
    iVar1 = func_0x0229f13c(0x6022,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6024,0);
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
  return;
}



// ===== FAT.ActivityFishing$$EndConvert RVA 0x2905cd4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02915cd4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_02915ee4 + 0x2915cec);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02915ee8 + 0x2915d00));
    func_0x01384978(*(undefined4 *)(_UNK_02915eec + 0x2915d0c));
    func_0x01384978(*(undefined4 *)(_UNK_02915ef0 + 0x2915d18));
    func_0x01384978(*(undefined4 *)(_UNK_02915ef4 + 0x2915d24));
    func_0x01384978(*(undefined4 *)(_UNK_02915ef8 + 0x2915d30));
    *pcVar4 = '\x01';
  }
  uStack_14 = 0;
  uStack_18 = 0;
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x6025,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xfc);
    uVar5 = *(undefined4 *)(param_1 + 0x98);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e7437c(iVar1,uVar5,0,0,0);
    if (*(int *)(**(int **)(_UNK_02915efc + 0x2915de0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x028c8d78(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0302a7c0(&uStack_18,iVar1,&iStack_1c,**(undefined4 **)(_UNK_02915f00 + 0x2915e1c));
    iVar2 = func_0x029177d4(param_1,iStack_1c);
    iVar1 = iStack_1c;
    if (iVar2 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar1 + 0xc)) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar3 = *(undefined4 *)(param_1 + 0x9c);
        iVar1 = *(int *)(iVar1 + 0xfc);
        uStack_28 = uStack_18;
        uStack_24 = uStack_14;
        uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_02915f04 + 0x2915e88),&uStack_28);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e7437c(iVar1,uVar3,0,uVar5,0);
        return;
      }
    }
    func_0x03633b24(&uStack_18,**(undefined4 **)(_UNK_02915f08 + 0x2915ed4));
  }
  else {
    iVar1 = func_0x0229f13c(0x6025,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityFishing$$InitFish RVA 0x2905f0c =====

/* WARNING: Removing unreachable block (ram,0x02916320) */
/* WARNING: Removing unreachable block (ram,0x02916314) */
/* WARNING: Removing unreachable block (ram,0x02916578) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02915f0c(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int aiStack_34 [4];
  
  pcVar10 = (char *)(_UNK_02916884 + 0x2915f28);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02916888 + 0x2915f3c));
    func_0x01384978(*(undefined4 *)(_UNK_0291688c + 0x2915f48));
    func_0x01384978(*(undefined4 *)(_UNK_02916890 + 0x2915f54));
    func_0x01384978(*(undefined4 *)(_UNK_02916894 + 0x2915f60));
    func_0x01384978(*(undefined4 *)(_UNK_02916898 + 0x2915f6c));
    func_0x01384978(*(undefined4 *)(_UNK_0291689c + 0x2915f78));
    func_0x01384978(*(undefined4 *)(_UNK_029168a0 + 0x2915f84));
    func_0x01384978(*(undefined4 *)(_UNK_029168a4 + 0x2915f90));
    func_0x01384978(*(undefined4 *)(_UNK_029168a8 + 0x2915f9c));
    func_0x01384978(*(undefined4 *)(_UNK_029168ac + 0x2915fa8));
    func_0x01384978(*(undefined4 *)(_UNK_029168b0 + 0x2915fb4));
    func_0x01384978(*(undefined4 *)(_UNK_029168b4 + 0x2915fc0));
    func_0x01384978(*(undefined4 *)(_UNK_029168b8 + 0x2915fcc));
    func_0x01384978(*(undefined4 *)(_UNK_029168bc + 0x2915fd8));
    func_0x01384978(*(undefined4 *)(_UNK_029168c0 + 0x2915fe4));
    func_0x01384978(*(undefined4 *)(_UNK_029168c4 + 0x2915ff0));
    func_0x01384978(*(undefined4 *)(_UNK_029168c8 + 0x2915ffc));
    func_0x01384978(*(undefined4 *)(_UNK_029168cc + 0x2916008));
    *pcVar10 = '\x01';
  }
  aiStack_34[2] = 0;
  aiStack_34[1] = 0;
  aiStack_34[0] = 0;
  iVar2 = func_0x0229f06c(0x6007,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6007,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0xd4);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar2 + 0xc);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (0 < iVar6) {
    func_0x0484e5ec(*(undefined4 *)(iVar2 + 8),0,iVar6,0);
  }
  if (*(int *)(**(int **)(_UNK_029168d0 + 0x29160b8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x028c8d78(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0302a45c(aiStack_34 + 1,iVar2,aiStack_34,**(undefined4 **)(_UNK_029168d4 + 0x29160f4));
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *param_2;
  uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_029168d8 + 0x2916118)) {
        puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
        goto LAB_02916160;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_029168d8 + 0x2916118),0);
LAB_02916160:
  piVar8 = (int *)(*(code *)*puVar3)(param_2,puVar3[1]);
  piVar13 = *(int **)(_UNK_029168dc + 0x2916180);
  piVar11 = *(int **)(_UNK_029168e0 + 0x2916188);
  puVar3 = *(undefined4 **)(_UNK_029168e4 + 0x2916190);
  do {
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar8;
    iVar6 = *piVar13;
    uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar6) {
          puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_029161e8;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar8,iVar6,0);
LAB_029161e8:
    iVar2 = (*(code *)*puVar4)(piVar8,puVar4[1]);
    if (iVar2 == 0) break;
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar8;
    uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar11) {
          puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_0291625c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar8,*piVar11,0);
LAB_0291625c:
    uVar5 = (*(code *)*puVar4)(piVar8,puVar4[1]);
    iVar2 = aiStack_34[0];
    if (aiStack_34[0] == 0) {
      func_0x01384bf0();
    }
    func_0x04220004(iVar2,uVar5,*puVar3);
  } while( true );
  if (piVar8 != (int *)0x0) {
    iVar2 = *piVar8;
    uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_029168e8 + 0x29162b4)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
          goto LAB_029162fc;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_029168e8 + 0x29162b4),0);
LAB_029162fc:
    (*(code *)*puVar3)(piVar8,puVar3[1]);
  }
  iVar2 = func_0x0183824c(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar8 = (int *)func_0x034658b4(iVar2,**(undefined4 **)(_UNK_029168ec + 0x291634c));
LAB_0291635c:
  if (piVar8 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar8;
  iVar6 = *piVar13;
  uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar7 != 0) {
    piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar11[-1] == iVar6) {
        puVar3 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
        goto LAB_029163b8;
      }
      uVar7 = uVar7 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar8,iVar6,0);
LAB_029163b8:
  iVar2 = (*(code *)*puVar3)(piVar8,puVar3[1]);
  if (iVar2 != 0) {
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar8;
    uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_029168f4 + 0x29163ec)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
          goto LAB_02916434;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_029168f4 + 0x29163ec),0);
LAB_02916434:
    (*(code *)*puVar3)(&uStack_40,piVar8,puVar3[1]);
    iVar2 = aiStack_34[0];
    uVar1 = uStack_3c;
    uVar5 = uStack_40;
    if (aiStack_34[0] == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0421f3b0(iVar2,uVar5,**(undefined4 **)(_UNK_029168f8 + 0x291646c));
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0xd4);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar2 + 8);
      uVar7 = *(uint *)(iVar2 + 0xc);
      piVar11 = *(int **)(_UNK_029168fc + 0x29164b4);
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      iVar12 = *piVar11;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      if (uVar7 < *(uint *)(iVar6 + 0xc)) {
        *(uint *)(iVar2 + 0xc) = uVar7 + 1;
        *(undefined4 *)(iVar6 + uVar7 * 4 + 0x10) = uVar1;
      }
      else {
        func_0x0328f170(iVar2,uVar1,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38)
                       );
      }
    }
    goto LAB_0291635c;
  }
  if (piVar8 != (int *)0x0) {
    iVar2 = *piVar8;
    uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_02916900 + 0x2916518)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
          goto LAB_02916560;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_02916900 + 0x2916518),0);
LAB_02916560:
    (*(code *)*puVar3)(piVar8,puVar3[1]);
  }
  piVar8 = *(int **)(_UNK_02916904 + 0x291658c);
  iVar2 = *piVar8;
  iVar6 = *(int *)(param_1 + 0xd4);
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4(iVar2);
    iVar2 = *piVar8;
  }
  iVar12 = *(int *)(*(int *)(iVar2 + 0x5c) + 4);
  if (iVar12 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4(iVar2);
      iVar2 = *piVar8;
    }
    uVar5 = **(undefined4 **)(iVar2 + 0x5c);
    iVar12 = func_0x01384be4(**(undefined4 **)(_UNK_02916908 + 0x29165e8));
    func_0x03c751dc(iVar12,uVar5,**(undefined4 **)(_UNK_0291690c + 0x29165fc),0);
    *(int *)(*(int *)(*piVar8 + 0x5c) + 4) = iVar12;
  }
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  func_0x03290edc(iVar6,iVar12,**(undefined4 **)(_UNK_02916910 + 0x2916630));
  func_0x028c98a0(aiStack_34 + 1,0);
  return;
}



// ===== FAT.ActivityFishing$$RefreshMilestone RVA 0x2906918 =====

/* WARNING: Removing unreachable block (ram,0x02916dac) */
/* WARNING: Removing unreachable block (ram,0x02916da0) */
/* WARNING: Removing unreachable block (ram,0x02917164) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02916918(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar11 = (char *)(_UNK_02917334 + 0x2916938);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02917338 + 0x291694c));
    func_0x01384978(*(undefined4 *)(_UNK_0291733c + 0x2916958));
    func_0x01384978(*(undefined4 *)(_UNK_02917340 + 0x2916964));
    func_0x01384978(*(undefined4 *)(_UNK_02917344 + 0x2916970));
    func_0x01384978(*(undefined4 *)(_UNK_02917348 + 0x291697c));
    func_0x01384978(*(undefined4 *)(_UNK_0291734c + 0x2916988));
    func_0x01384978(*(undefined4 *)(_UNK_02917350 + 0x2916994));
    func_0x01384978(*(undefined4 *)(_UNK_02917354 + 0x29169a0));
    func_0x01384978(*(undefined4 *)(_UNK_02917358 + 0x29169ac));
    func_0x01384978(*(undefined4 *)(_UNK_0291735c + 0x29169b8));
    func_0x01384978(*(undefined4 *)(_UNK_02917360 + 0x29169c4));
    func_0x01384978(*(undefined4 *)(_UNK_02917364 + 0x29169d0));
    func_0x01384978(*(undefined4 *)(_UNK_02917368 + 0x29169dc));
    func_0x01384978(*(undefined4 *)(_UNK_0291736c + 0x29169e8));
    func_0x01384978(*(undefined4 *)(_UNK_02917370 + 0x29169f4));
    func_0x01384978(*(undefined4 *)(_UNK_02917374 + 0x2916a00));
    func_0x01384978(*(undefined4 *)(_UNK_02917378 + 0x2916a0c));
    func_0x01384978(*(undefined4 *)(_UNK_0291737c + 0x2916a18));
    func_0x01384978(*(undefined4 *)(_UNK_02917380 + 0x2916a24));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c0,0);
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
    iVar12 = *(int *)(iVar1 + 8);
    uVar15 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 2;
    if (iVar1 == 0) {
      uVar9 = 1;
    }
    func_0x0245495c(iVar12,uVar15,&uStack_30,uVar9,0,0);
    return;
  }
  iVar12 = *(int *)(param_1 + 0xcc);
  iVar1 = param_1;
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(iVar12 + 0x24);
  iVar13 = *(int *)(param_1 + 0xa0);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  if (iVar13 < *(int *)(iVar12 + 0xc)) {
    iVar13 = *(int *)(iVar1 + 0xa0);
  }
  else {
    iVar13 = *(int *)(iVar12 + 0xc) + -1;
  }
  iVar14 = iVar1;
  uVar15 = func_0x0364c9b8(iVar12,iVar13,**(undefined4 **)(_UNK_02917384 + 0x2916ad0));
  uVar15 = func_0x017ed640(uVar15,0);
  *(undefined4 *)(iVar1 + 200) = uVar15;
  func_0x02917eb0(iVar1);
  iVar12 = *(int *)(iVar1 + 0xe0);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar12 + 0xc) = 0;
  iVar1 = *(int *)(iVar1 + 200);
  *(int *)(iVar12 + 0x10) = *(int *)(iVar12 + 0x10) + 1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_02917388 + 0x2916b3c));
LAB_02916b4c:
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar8 != 0) {
    piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar10[-1] == **(int **)(_UNK_0291739c + 0x2916b68)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
        goto LAB_02916bb0;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0291739c + 0x2916b68),0);
LAB_02916bb0:
  iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  if (iVar1 != 0) {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_0291738c + 0x2916be4)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
          goto LAB_02916c2c;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0291738c + 0x2916be4),0);
LAB_02916c2c:
    uVar15 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (*(int *)(**(int **)(_UNK_02917390 + 0x2916c4c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_48,uVar15,0);
    uVar9 = uStack_44;
    uVar15 = uStack_48;
    iVar1 = *(int *)(iVar14 + 0xe0);
    uStack_44 = 0;
    uStack_48 = 0;
    func_0x038fd264(&uStack_48,uVar15,uVar9,**(undefined4 **)(_UNK_02917394 + 0x2916c8c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar9 = uStack_44;
    uVar15 = uStack_48;
    iVar12 = *(int *)(iVar1 + 8);
    uVar8 = *(uint *)(iVar1 + 0xc);
    piVar10 = *(int **)(_UNK_02917398 + 0x2916cd0);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    iVar13 = *piVar10;
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    if (uVar8 < *(uint *)(iVar12 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar8 + 1;
      iVar12 = iVar12 + uVar8 * 8;
      *(undefined4 *)(iVar12 + 0x10) = uVar15;
      *(undefined4 *)(iVar12 + 0x14) = uVar9;
    }
    else {
      func_0x0441a364(iVar1,uVar15,uVar9,
                      *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
    }
    goto LAB_02916b4c;
  }
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_029173a0 + 0x2916d40)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
          goto LAB_02916d88;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_029173a0 + 0x2916d40),0);
LAB_02916d88:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  iVar12 = *(int *)(iVar14 + 0xe4);
  iVar1 = iVar14;
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar12 + 0xc) = 0;
  iVar13 = *(int *)(iVar14 + 200);
  *(int *)(iVar12 + 0x10) = *(int *)(iVar12 + 0x10) + 1;
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(iVar13 + 0x24);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0364c2b4(iVar12,**(undefined4 **)(_UNK_029173a4 + 0x2916e08));
  uVar15 = 0;
  uVar9 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar16 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar17 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
LAB_02916e18:
  piVar10 = piVar2;
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar2;
  uVar8 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar8 != 0) {
    piVar2 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar2[-1] == **(int **)(_UNK_029173d0 + 0x2916e38)) {
        puVar3 = (undefined4 *)(iVar12 + *piVar2 * 8 + 0xc0);
        goto LAB_02916e80;
      }
      uVar8 = uVar8 - 1;
      piVar2 = piVar2 + 2;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_029173d0 + 0x2916e38),0);
LAB_02916e80:
  iVar12 = (*(code *)*puVar3)(piVar10,puVar3[1]);
  if (iVar12 != 0) {
    iVar12 = func_0x01384be4(**(undefined4 **)(_UNK_029173ac + 0x2916ea4));
    func_0x04874ed4(iVar12,0);
    piVar2 = piVar10;
    if (piVar10 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar13 = *piVar10;
    uVar8 = (uint)*(ushort *)(iVar13 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar13 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_029173b0 + 0x2916ed4)) {
          puVar3 = (undefined4 *)(iVar13 + *piVar10 * 8 + 0xc0);
          goto LAB_02916f1c;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_029173b0 + 0x2916ed4),0);
LAB_02916f1c:
    uVar4 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar5 = **(undefined4 **)(_UNK_029173b4 + 0x2916f48);
    iVar13 = *(int *)(iVar1 + 0xd4);
    *(undefined4 *)(iVar12 + 8) = uVar4;
    uVar4 = func_0x01384be4(uVar5);
    func_0x035b0208(uVar4,iVar12,**(undefined4 **)(_UNK_029173b8 + 0x2916f68),0);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar13 = func_0x0328f838(iVar13,uVar4,**(undefined4 **)(_UNK_029173bc + 0x2916f90));
    uVar4 = *(undefined4 *)(iVar12 + 8);
    iVar12 = *(int *)(iVar1 + 0xe4);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar14 = *(int *)(iVar13 + 0x34);
    uVar5 = *(undefined4 *)(iVar13 + 0x24);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x0364c9b8(iVar14,0,**(undefined4 **)(_UNK_029173c0 + 0x2916fd8));
    iVar13 = *(int *)(iVar13 + 0x34);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x0364c9b8(iVar13,1,**(undefined4 **)(_UNK_029173c4 + 0x2917004));
    uStack_48 = uVar15;
    uStack_44 = uVar9;
    uStack_40 = uVar16;
    uStack_3c = uVar17;
    func_0x0394a080(&uStack_48,uVar4,uVar5,uVar6,uVar7,**(undefined4 **)(_UNK_029173c8 + 0x2917020))
    ;
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar7 = uStack_3c;
    uVar6 = uStack_40;
    uVar5 = uStack_44;
    uVar4 = uStack_48;
    iVar13 = *(int *)(iVar12 + 8);
    uVar8 = *(uint *)(iVar12 + 0xc);
    iVar14 = **(int **)(_UNK_029173cc + 0x2917068);
    *(int *)(iVar12 + 0x10) = *(int *)(iVar12 + 0x10) + 1;
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    if (uVar8 < *(uint *)(iVar13 + 0xc)) {
      *(uint *)(iVar12 + 0xc) = uVar8 + 1;
      iVar13 = iVar13 + uVar8 * 0x10;
      *(undefined4 *)(iVar13 + 0x10) = uVar4;
      *(undefined4 *)(iVar13 + 0x14) = uVar5;
      *(undefined4 *)(iVar13 + 0x18) = uVar6;
      *(undefined4 *)(iVar13 + 0x1c) = uVar7;
    }
    else {
      func_0x044648c4(iVar12,uVar4,uVar5,uVar6,uVar7,
                      *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38));
    }
    goto LAB_02916e18;
  }
  if (piVar10 != (int *)0x0) {
    iVar1 = *piVar10;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_029173d4 + 0x29170fc)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_0291714c;
        }
        uVar8 = uVar8 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_029173d4 + 0x29170fc),0);
LAB_0291714c:
    (*(code *)*puVar3)(piVar10,puVar3[1]);
  }
  return;
}



// ===== FAT.ActivityFishing$$_RefreshSpawnBonusHandler RVA 0x29073dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029173dc(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
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
  
  pcVar9 = (char *)(_UNK_029174c4 + 0x29173f0);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029174c8 + 0x2917404));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6020,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6020,0);
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
    iVar7 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar10,&uStack_30,uVar5);
    return;
  }
  iVar2 = func_0x0291b244(param_1);
  if (iVar2 == 0) {
    return;
  }
  uVar10 = func_0x01384be4(**(undefined4 **)(_UNK_029174cc + 0x291746c));
  func_0x02157acc(uVar10,param_1,0);
  *(undefined4 *)(param_1 + 0xc0) = uVar10;
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  piVar6 = *(int **)(param_1 + 0xc0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_01dbba4c + 0x1dbb948);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbba50 + 0x1dbb95c),piVar6,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dbba54 + 0x1dbb968));
    *pcVar9 = '\x01';
  }
  iVar7 = func_0x0229f06c(0x16b4,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0x16b4,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,piVar6,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar7 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485278(&uStack_38,piVar6,0);
    iVar8 = *(int *)(iVar7 + 8);
    uVar10 = *(undefined4 *)(iVar7 + 0xc);
    iVar2 = *(int *)(iVar7 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  iVar2 = func_0x02f6252c(*(undefined4 *)(iVar2 + 0x34),piVar6,
                          **(undefined4 **)(_UNK_01dbba58 + 0x1dbb9c8));
  if (piVar6 == (int *)0x0 || iVar2 == 0) {
    return;
  }
  iVar2 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dbba5c + 0x1dbb9f0)) {
        puVar1 = (undefined4 *)(iVar2 + *piVar4 * 8 + 0xd0);
        goto LAB_01dbba38;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01dbba5c + 0x1dbb9f0),2);
LAB_01dbba38:
                    /* WARNING: Could not recover jumptable at 0x01dbba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(piVar6,puVar1[1]);
  return;
}



// ===== FAT.ActivityFishing$$FillMilestoneRewards RVA 0x29074d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_029174d0(int param_1,int param_2)

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
  
  pcVar5 = (char *)(_UNK_029175f0 + 0x29174e8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029175f4 + 0x29174fc));
    func_0x01384978(*(undefined4 *)(_UNK_029175f8 + 0x2917508));
    func_0x01384978(*(undefined4 *)(_UNK_029175fc + 0x2917514));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x602c,0);
  if (iVar1 == 0) {
    iVar3 = *(int *)(param_1 + 0xd8);
    iVar1 = iVar3;
    if (iVar3 == 0) {
      func_0x01384bf0();
      iVar1 = *(int *)(param_1 + 0xd8);
    }
    uVar4 = *(undefined4 *)(iVar3 + 0xc);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0328f380(param_2,iVar1,**(undefined4 **)(_UNK_02917600 + 0x29175a0));
    iVar1 = *(int *)(param_1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar3) {
      func_0x0484e5ec(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x602c,0);
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
  uVar4 = func_0x0245498c(&uStack_38,0,0);
  return uVar4;
}



// ===== FAT.ActivityFishing$$FillConvertRewards RVA 0x2907604 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02917604(int param_1,int param_2)

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
  
  pcVar5 = (char *)(_UNK_02917724 + 0x291761c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02917728 + 0x2917630));
    func_0x01384978(*(undefined4 *)(_UNK_0291772c + 0x291763c));
    func_0x01384978(*(undefined4 *)(_UNK_02917730 + 0x2917648));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x602d,0);
  if (iVar1 == 0) {
    iVar3 = *(int *)(param_1 + 0xdc);
    iVar1 = iVar3;
    if (iVar3 == 0) {
      func_0x01384bf0();
      iVar1 = *(int *)(param_1 + 0xdc);
    }
    uVar4 = *(undefined4 *)(iVar3 + 0xc);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0328f380(param_2,iVar1,**(undefined4 **)(_UNK_02917734 + 0x29176d4));
    iVar1 = *(int *)(param_1 + 0xdc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar3) {
      func_0x0484e5ec(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x602d,0);
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
  uVar4 = func_0x0245498c(&uStack_38,0,0);
  return uVar4;
}



// ===== FAT.ActivityFishing$$_ClearSpawnBonusHandler RVA 0x2907738 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02917738(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
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
  
  iVar2 = func_0x0229f06c(0x6023,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6023,0);
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
    iVar7 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar10,&uStack_30,uVar5);
    return;
  }
  iVar2 = func_0x0291b244(param_1);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  piVar6 = *(int **)(param_1 + 0xc0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_01dbbb8c + 0x1dbba78);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbbb90 + 0x1dbba8c),piVar6,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dbbb94 + 0x1dbba98));
    *pcVar9 = '\x01';
  }
  iVar7 = func_0x0229f06c(0x23f,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0x23f,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,piVar6,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar7 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485278(&uStack_38,piVar6,0);
    iVar8 = *(int *)(iVar7 + 8);
    uVar10 = *(undefined4 *)(iVar7 + 0xc);
    iVar2 = *(int *)(iVar7 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  iVar2 = *(int *)(iVar2 + 0x34);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x03290900(iVar2,piVar6,**(undefined4 **)(_UNK_01dbbb98 + 0x1dbbb08));
  if (piVar6 == (int *)0x0 || iVar2 == 0) {
    return;
  }
  iVar2 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dbbb9c + 0x1dbbb30)) {
        puVar1 = (undefined4 *)(iVar2 + *piVar4 * 8 + 0xd8);
        goto LAB_01dbbb78;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01dbbb9c + 0x1dbbb30),3);
LAB_01dbbb78:
                    /* WARNING: Could not recover jumptable at 0x01dbbb88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(piVar6,puVar1[1]);
  return;
}



// ===== FAT.ActivityFishing$$CollectAllBoardReward RVA 0x29077d4 =====

/* WARNING: Removing unreachable block (ram,0x02917c7c) */
/* WARNING: Removing unreachable block (ram,0x02917c34) */
/* WARNING: Removing unreachable block (ram,0x02917c40) */
/* WARNING: Removing unreachable block (ram,0x02917c98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_029177d4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_02917e38 + 0x29177f0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02917e3c + 0x2917804));
    func_0x01384978(*(undefined4 *)(_UNK_02917e40 + 0x2917810));
    func_0x01384978(*(undefined4 *)(_UNK_02917e44 + 0x291781c));
    func_0x01384978(*(undefined4 *)(_UNK_02917e48 + 0x2917828));
    func_0x01384978(*(undefined4 *)(_UNK_02917e4c + 0x2917834));
    func_0x01384978(*(undefined4 *)(_UNK_02917e50 + 0x2917840));
    func_0x01384978(*(undefined4 *)(_UNK_02917e54 + 0x291784c));
    func_0x01384978(*(undefined4 *)(_UNK_02917e58 + 0x2917858));
    func_0x01384978(*(undefined4 *)(_UNK_02917e5c + 0x2917864));
    func_0x01384978(*(undefined4 *)(_UNK_02917e60 + 0x2917870));
    func_0x01384978(*(undefined4 *)(_UNK_02917e64 + 0x291787c));
    func_0x01384978(*(undefined4 *)(_UNK_02917e68 + 0x2917888));
    func_0x01384978(*(undefined4 *)(_UNK_02917e6c + 0x2917894));
    func_0x01384978(*(undefined4 *)(_UNK_02917e70 + 0x29178a0));
    func_0x01384978(*(undefined4 *)(_UNK_02917e74 + 0x29178ac));
    *pcVar4 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar5 = 0;
  uStack_50 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  iVar2 = func_0x0229f06c(0x6026,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02917e78 + 0x2917938));
    func_0x04874ed4(iVar2,0);
    iVar3 = FUN_02913d80(param_1);
    if (param_2 != 0 && iVar3 != 0) {
      piVar6 = *(int **)(_UNK_02917e7c + 0x2917968);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar3 = func_0x028c8d78(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      puVar7 = *(undefined4 **)(_UNK_02917e80 + 0x29179b8);
      func_0x0302a45c(&uStack_30,iVar3,(undefined4 *)(iVar2 + 8),*puVar7);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar3 = func_0x028c8d78(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a45c(&uStack_68,iVar3,(int *)(iVar2 + 0xc),*puVar7);
      uStack_34 = uStack_64;
      uStack_38 = uStack_68;
      iVar3 = FUN_02913d80(param_1);
      uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02917e84 + 0x2917a34));
      func_0x03ccb96c(uVar5,iVar2,**(undefined4 **)(_UNK_02917e88 + 0x2917a48),0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x021475dc(iVar3,uVar5,5,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar2 + 0xc);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x03d5a200(&uStack_68,iVar3,**(undefined4 **)(_UNK_02917e8c + 0x2917aac));
      uStack_50 = uStack_68;
      uStack_4c = uStack_64;
      uStack_48 = uStack_60;
      uStack_44 = uStack_5c;
      uStack_40 = uStack_58;
      while (iVar3 = func_0x03f9975c(&uStack_50,**(undefined4 **)(_UNK_02917ea4 + 0x2917ae4)),
            uVar5 = uStack_44, iVar3 != 0) {
        uVar1 = (undefined4)uStack_40;
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(iVar3 + 0x40);
        iVar3 = **(int **)(_UNK_02917e90 + 0x2917b1c);
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = **(int **)(_UNK_02917e94 + 0x2917b3c);
        }
        uVar10 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x24);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x01cdcbac(iVar8,uVar5,uVar1,uVar10,0,0,0,0x298,
                                **(undefined4 **)(_UNK_02917e98 + 0x2917b5c),
                                **(undefined4 **)(_UNK_02917e9c + 0x2917b68),0);
        iVar8 = *(int *)(param_2 + 8);
        uVar9 = *(uint *)(param_2 + 0xc);
        piVar6 = *(int **)(_UNK_02917ea0 + 0x2917bbc);
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        iVar3 = *piVar6;
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if (uVar9 < *(uint *)(iVar8 + 0xc)) {
          *(uint *)(param_2 + 0xc) = uVar9 + 1;
          *(undefined4 *)(iVar8 + uVar9 * 4 + 0x10) = uVar5;
        }
        else {
          func_0x0328f170(param_2,uVar5,
                          *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
        }
      }
      func_0x03f9989c(&uStack_50,**(undefined4 **)(_UNK_02917ea8 + 0x2917c18));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x02172d9c(*(undefined4 *)(iVar2 + 8),0);
      func_0x019b528c(param_1,uVar5,0);
      uVar5 = 1;
      func_0x028c98a0(&uStack_38,0);
      func_0x028c98a0(&uStack_30,0);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x6026,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x021734d8(iVar2,param_1,param_2,0);
  }
  return uVar5;
}



// ===== FAT.ActivityFishing$$_SetBonusHandlerDirty RVA 0x2907eb0 =====

void FUN_02917eb0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5c1,0);
  if (iVar1 == 0) {
    iVar3 = func_0x0291b244(param_1);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0xc0);
    }
    param_1 = iVar1;
    if (iVar3 == 0 || param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x5b3,0);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      return;
    }
    iVar1 = func_0x0229f13c(0x5b3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5c1,0);
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
  return;
}



// ===== FAT.ActivityFishing.<>c__DisplayClass98_0$$.ctor RVA 0x2907f20 =====

void FUN_02917f20(void)

{
  return;
}



// ===== FAT.ActivityFishing$$CheckIsShowRedPoint RVA 0x2907f28 =====

undefined4 FUN_02917f28(undefined4 param_1,undefined4 *param_2)

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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x602e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x602e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_28 = uStack_40;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    func_0x01485238(&uStack_38,0,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x014852b8(&uStack_38,0,0);
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
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,1,0);
    uVar4 = func_0x0245498c(&uStack_38,0,0);
    *param_2 = uVar4;
    uVar4 = func_0x0245496c(&uStack_38,1,0);
    return uVar4;
  }
  *param_2 = 0;
  iVar1 = func_0x02b48934(param_1,0);
  if ((iVar1 != 0) && (iVar1 = FUN_02913d80(param_1), iVar1 != 0)) {
    iVar1 = FUN_02913d80(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02141d1c(iVar1,0);
    uVar4 = 1;
    *param_2 = uVar2;
  }
  return uVar4;
}



// ===== FAT.ActivityFishing$$AddToken RVA 0x2907fdc =====

/* WARNING: Possible PIC construction at 0x02918248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02918290: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0291824c) */
/* WARNING: Removing unreachable block (ram,0x02918294) */
/* WARNING: Removing unreachable block (ram,0x029182a8) */
/* WARNING: Removing unreachable block (ram,0x029182ac) */
/* WARNING: Removing unreachable block (ram,0x029182b8) */
/* WARNING: Removing unreachable block (ram,0x029182c8) */
/* WARNING: Removing unreachable block (ram,0x029182e4) */
/* WARNING: Removing unreachable block (ram,0x029182f8) */
/* WARNING: Removing unreachable block (ram,0x029182fc) */
/* WARNING: Removing unreachable block (ram,0x02918308) */
/* WARNING: Removing unreachable block (ram,0x0291830c) */
/* WARNING: Removing unreachable block (ram,0x02b49350) */
/* WARNING: Removing unreachable block (ram,0x02b49378) */
/* WARNING: Removing unreachable block (ram,0x02b4938c) */
/* WARNING: Removing unreachable block (ram,0x02b493dc) */
/* WARNING: Removing unreachable block (ram,0x02b4941c) */
/* WARNING: Removing unreachable block (ram,0x02b49420) */
/* WARNING: Removing unreachable block (ram,0x02b49434) */
/* WARNING: Removing unreachable block (ram,0x02b4095c) */
/* WARNING: Removing unreachable block (ram,0x02b40984) */
/* WARNING: Removing unreachable block (ram,0x02b409b0) */
/* WARNING: Removing unreachable block (ram,0x02b40a00) */
/* WARNING: Removing unreachable block (ram,0x02b40a0c) */
/* WARNING: Removing unreachable block (ram,0x02b40a10) */
/* WARNING: Removing unreachable block (ram,0x02b40a28) */
/* WARNING: Removing unreachable block (ram,0x02b40a2c) */
/* WARNING: Removing unreachable block (ram,0x02b40a30) */
/* WARNING: Removing unreachable block (ram,0x02b40a70) */
/* WARNING: Removing unreachable block (ram,0x02b40a90) */
/* WARNING: Removing unreachable block (ram,0x02b40a94) */
/* WARNING: Removing unreachable block (ram,0x02b40ab0) */
/* WARNING: Removing unreachable block (ram,0x02b40ab4) */
/* WARNING: Removing unreachable block (ram,0x02b409c4) */
/* WARNING: Removing unreachable block (ram,0x02b409e0) */
/* WARNING: Removing unreachable block (ram,0x02b409e4) */
/* WARNING: Removing unreachable block (ram,0x02b40ac8) */
/* WARNING: Removing unreachable block (ram,0x02b493a0) */
/* WARNING: Removing unreachable block (ram,0x02b493bc) */
/* WARNING: Removing unreachable block (ram,0x02b493c0) */
/* WARNING: Removing unreachable block (ram,0x02b4944c) */
/* WARNING: Removing unreachable block (ram,0x02918254) */
/* WARNING: Removing unreachable block (ram,0x02918264) */
/* WARNING: Removing unreachable block (ram,0x02918268) */
/* WARNING: Removing unreachable block (ram,0x02918284) */
/* WARNING: Removing unreachable block (ram,0x02918288) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02917fdc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_48;
  int iStack_44;
  int *piStack_40;
  int iStack_3c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_02918330 + 0x2917ffc);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02918334 + 0x2918010));
    func_0x01384978(*(undefined4 *)(_UNK_02918338 + 0x291801c));
    func_0x01384978(*(undefined4 *)(_UNK_0291833c + 0x2918028));
    func_0x01384978(*(undefined4 *)(_UNK_02918340 + 0x2918034));
    func_0x01384978(*(undefined4 *)(_UNK_02918344 + 0x2918040));
    func_0x01384978(*(undefined4 *)(_UNK_02918348 + 0x291804c));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5b4,0);
  if (iVar2 == 0) {
    iVar2 = FUN_02913e28(param_1);
    if (iVar2 == param_2) {
      iVar2 = FUN_02913f3c(param_1);
      iVar3 = FUN_02913f90(param_1);
      if ((iVar2 < iVar3) || (iVar2 = FUN_02913ffc(param_1), iVar2 == 0)) {
        iVar3 = FUN_02913f3c(param_1);
        iVar3 = iVar3 + param_3;
        iVar2 = FUN_02913f90(param_1);
        do {
          if (iVar3 < iVar2) {
LAB_029181c0:
            piVar6 = *(int **)(_UNK_02918354 + 0x29181cc);
            *(int *)(param_1 + 0xa4) = iVar3;
            iVar2 = *piVar6;
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar6;
            }
            func_0x019a4b9c(param_2,param_3,iVar3,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x25c));
            piVar6 = *(int **)(_UNK_02918358 + 0x2918210);
            if (*(int *)(*piVar6 + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_0291835c + 0x291822c));
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            piStack_40 = (int *)param_1;
            iStack_3c = iVar2;
            iVar1 = func_0x0229f06c(0x3f,0);
            if (iVar1 != 0) {
              iVar1 = func_0x0229f13c(0x3f,0);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iStack_44 = iStack_3c;
              iStack_48 = (int)piStack_40;
              uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              uStack_60 = 0;
              uStack_50 = 0;
              piStack_40 = piVar6;
              iStack_3c = iVar3;
              func_0x0245494c(&uStack_78,0,0);
              uStack_60 = uStack_78;
              uStack_5c = uStack_74;
              uStack_58 = uStack_70;
              uStack_54 = uStack_6c;
              uStack_50 = uStack_68;
              if (*(int *)(iVar1 + 0x10) != 0) {
                func_0x01485278(&uStack_60,*(int *)(iVar1 + 0x10),0);
              }
              func_0x01485278(&uStack_60,iVar2,0);
              iVar3 = *(int *)(iVar1 + 8);
              uVar4 = *(undefined4 *)(iVar1 + 0xc);
              iVar2 = *(int *)(iVar1 + 0x10);
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              uVar5 = 2;
              if (iVar2 == 0) {
                uVar5 = 1;
              }
              func_0x0245495c(iVar3,uVar4,&uStack_60,uVar5,0,0);
              return;
            }
            iVar2 = *(int *)(iVar2 + 8);
            if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(iVar2 + 0xc))
                        (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
              return;
            }
            return;
          }
          func_0x029183b8(param_1);
          iVar2 = FUN_02913ffc(param_1);
          if (iVar2 != 0) {
            iVar3 = FUN_02913f90(param_1);
            goto LAB_029181c0;
          }
          *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
          FUN_02916918(param_1);
          iVar2 = FUN_02913f90(param_1);
        } while( true );
      }
      uStack_24 = FUN_02913f3c(param_1);
      puVar7 = *(undefined4 **)(_UNK_0291834c + 0x29180f8);
      uVar4 = func_0x01384abc(*puVar7,&uStack_24);
      uStack_28 = FUN_02913f90(param_1);
      uVar5 = func_0x01384abc(*puVar7,&uStack_28);
      uVar4 = func_0x0467272c(**(undefined4 **)(_UNK_02918350 + 0x291813c),uVar4,uVar5,0);
      func_0x02918364(param_1,uVar4);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5b4,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar2,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.ActivityFishing$$_Info RVA 0x2908364 =====

void FUN_02918364(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5bc,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5bc,0);
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



// ===== FAT.ActivityFishing$$AddMilestoneReward RVA 0x29083b8 =====

/* WARNING: Removing unreachable block (ram,0x02918810) */
/* WARNING: Removing unreachable block (ram,0x0291881c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029183b8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_02918998 + 0x29183d0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0291899c + 0x29183e4));
    func_0x01384978(*(undefined4 *)(_UNK_029189a0 + 0x29183f0));
    func_0x01384978(*(undefined4 *)(_UNK_029189a4 + 0x29183fc));
    func_0x01384978(*(undefined4 *)(_UNK_029189a8 + 0x2918408));
    func_0x01384978(*(undefined4 *)(_UNK_029189ac + 0x2918414));
    func_0x01384978(*(undefined4 *)(_UNK_029189b0 + 0x2918420));
    func_0x01384978(*(undefined4 *)(_UNK_029189b4 + 0x291842c));
    func_0x01384978(*(undefined4 *)(_UNK_029189b8 + 0x2918438));
    func_0x01384978(*(undefined4 *)(_UNK_029189bc + 0x2918444));
    func_0x01384978(*(undefined4 *)(_UNK_029189c0 + 0x2918450));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5bd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5bd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar6,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar1 + 0x40);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar10 = func_0x01db7b78(iVar1,0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x01cdef00(iVar9,uVar10,0,0);
  iVar1 = *(int *)(param_1 + 200);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x28);
  iStack_28 = param_1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_029189c4 + 0x2918544));
LAB_02918554:
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_029189e4 + 0x2918570)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
        goto LAB_029185b8;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_029189e4 + 0x2918570),0);
LAB_029185b8:
  iVar4 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  iVar1 = iStack_28;
  if (iVar4 != 0) {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_029189c8 + 0x29185ec)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_02918634;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_029189c8 + 0x29185ec),0);
LAB_02918634:
    uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (*(int *)(**(int **)(_UNK_029189cc + 0x2918654) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x02565a88(uVar10,0);
    iVar4 = *(int *)(iStack_28 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar10 = *(undefined4 *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = **(int **)(_UNK_029189d0 + 0x2918694);
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = **(int **)(_UNK_029189d4 + 0x29186b8);
    }
    uVar11 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x25c);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uStack_38 = **(undefined4 **)(_UNK_029189d8 + 0x29186d8);
    uStack_34 = **(undefined4 **)(_UNK_029189dc + 0x29186e4);
    uStack_3c = 0x191;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uVar10 = func_0x01cdcbac(iVar9,uVar10,uVar6,uVar11);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar4 + 8);
    uVar5 = *(uint *)(iVar4 + 0xc);
    piVar7 = *(int **)(_UNK_029189e0 + 0x2918744);
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
    iVar12 = *piVar7;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (uVar5 < *(uint *)(iVar1 + 0xc)) {
      *(uint *)(iVar4 + 0xc) = uVar5 + 1;
      *(undefined4 *)(iVar1 + uVar5 * 4 + 0x10) = uVar10;
    }
    else {
      func_0x0328f170(iVar4,uVar10,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38))
      ;
    }
    goto LAB_02918554;
  }
  if (piVar2 != (int *)0x0) {
    iVar4 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_029189e8 + 0x29187b0)) {
          puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
          goto LAB_029187f8;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_029189e8 + 0x29187b0),0);
LAB_029187f8:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x01cdefd0(iVar9,0);
  uVar10 = FUN_02913e94(iVar1);
  *(undefined4 *)(iVar1 + 0xac) = uVar10;
  uVar10 = FUN_02913e94(iVar1);
  iVar9 = FUN_02913c84(iVar1);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar9 + 0x24);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar6 = *(undefined4 *)(iVar9 + 0xc);
  iVar9 = FUN_02913c84(iVar1);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uStack_48 = 0;
  func_0x019b5124(iVar1,uVar10,uVar6,*(undefined4 *)(iVar9 + 0x1c));
  return;
}



// ===== FAT.ActivityFishing$$FAT.IBoardEntry.BoardEntryAsset RVA 0x29089f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_029189f0(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_02918ab8 + 0x2918a08);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02918abc + 0x2918a1c));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x602f,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = func_0x02b617fc(iVar1,0);
    func_0x02b63e8c(&uStack_18,**(undefined4 **)(_UNK_02918ac0 + 0x2918aa0),&uStack_14,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x602f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityFishing$$FAT.IBoardArchive.get_Feature RVA 0x2908ac4 =====

undefined4 FUN_02918ac4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x6030,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6030,0);
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
  return 0x42;
}



// ===== FAT.ActivityFishing$$FAT.IBoardArchive.SetBoardData RVA 0x2908b18 =====

/* WARNING: Possible PIC construction at 0x028c2820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028c2824) */
/* WARNING: Removing unreachable block (ram,0x028c31dc) */
/* WARNING: Removing unreachable block (ram,0x029159e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02918b18(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int unaff_r4;
  int iVar7;
  int unaff_r5;
  undefined4 uVar8;
  int iVar9;
  int unaff_r6;
  char *pcVar10;
  int unaff_r7;
  undefined4 unaff_r8;
  int *piVar11;
  int *piVar12;
  int *unaff_r9;
  int *piVar13;
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
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  
  pcVar10 = (char *)(_UNK_02918bcc + 0x2918b30);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02918bd0 + 0x2918b44));
    *pcVar10 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x6031,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x6031,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  iVar3 = FUN_02913d80(param_1);
  if (iVar3 == 0) {
    pcVar10 = (char *)(_UNK_02915b00 + 0x29154e0);
    if (*pcVar10 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02915b04 + 0x29154f4));
      func_0x01384978(*(undefined4 *)(_UNK_02915b08 + 0x2915500));
      func_0x01384978(*(undefined4 *)(_UNK_02915b0c + 0x291550c));
      func_0x01384978(*(undefined4 *)(_UNK_02915b10 + 0x2915518));
      func_0x01384978(*(undefined4 *)(_UNK_02915b14 + 0x2915524));
      func_0x01384978(*(undefined4 *)(_UNK_02915b18 + 0x2915530));
      func_0x01384978(*(undefined4 *)(_UNK_02915b1c + 0x291553c));
      func_0x01384978(*(undefined4 *)(_UNK_02915b20 + 0x2915548));
      func_0x01384978(*(undefined4 *)(_UNK_02915b24 + 0x2915554));
      func_0x01384978(*(undefined4 *)(_UNK_02915b28 + 0x2915560));
      *pcVar10 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x601d,0);
    if (iVar3 != 0) {
      iVar3 = func_0x0229f13c(0x601d,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02174108;
    }
    iVar7 = func_0x01384be4(**(undefined4 **)(_UNK_02915b2c + 0x29155c0));
    func_0x02143488(iVar7,0);
    iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02915b30 + 0x29155dc));
    func_0x0214d6c8(iVar3,0,0,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0214e900(iVar3,iVar7,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x02141f58(iVar7,iVar3,0);
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar2 + 0x4c);
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02915b34 + 0x2915650));
    func_0x01db7f44(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar2 + 8) = 4;
    *(int *)(iVar2 + 0xc) = iVar7;
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    func_0x01db7f4c(iVar9,iVar2,0);
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(param_1 + 0xcc);
    iVar2 = *(int *)(iVar2 + 0x4c);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar8 = *(undefined4 *)(iVar9 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_48 = 0;
    uStack_44 = 0;
    func_0x01db8438(iVar2,iVar7,uVar8,param_2 == (int *)0x0);
    if (param_2 == (int *)0x0) {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar2 + 0x40);
      iVar2 = FUN_02913c84(param_1);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x20);
      iStack_2c = iVar3;
      iStack_28 = iVar7;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar11 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_02915b38 + 0x291577c));
      piVar12 = *(int **)(_UNK_02915b3c + 0x2915798);
      piVar13 = *(int **)(_UNK_02915b40 + 0x29157a0);
      do {
        if (piVar11 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar11;
        uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar4 != 0) {
          piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar12) {
              puVar1 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
              goto LAB_029157f8;
            }
            uVar4 = uVar4 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined4 *)func_0x014002dc(piVar11,*piVar12,0);
LAB_029157f8:
        iVar2 = (*(code *)*puVar1)(piVar11,puVar1[1]);
        iVar7 = iStack_28;
        iVar3 = iStack_2c;
        if (iVar2 == 0) goto LAB_02915964;
        if (piVar11 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar11;
        uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar4 != 0) {
          piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_02915b44 + 0x291582c)) {
              puVar1 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
              goto LAB_02915874;
            }
            uVar4 = uVar4 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_02915b44 + 0x291582c),0);
LAB_02915874:
        uVar8 = (*(code *)*puVar1)(piVar11,puVar1[1]);
        uVar5 = FUN_02913d80(param_1);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        func_0x01cdef00(iVar9,uVar5,0,0);
        iVar3 = *piVar13;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar13;
        }
        uVar5 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 600);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        iStack_38 = **(int **)(_UNK_02915b48 + 0x29158ec);
        uStack_34 = **(undefined4 **)(_UNK_02915b4c + 0x29158f8);
        uStack_3c = 0x10d;
        uStack_30 = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        uVar8 = func_0x01cdcbac(iVar9,uVar8,1,uVar5);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        func_0x01cdf088(iVar9,uVar8,0);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        func_0x01cdefd0(iVar9,0);
      } while( true );
    }
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x0214a9e8(iVar7,param_2,0,0);
    goto LAB_029159f0;
  }
  param_2 = (int *)**(undefined4 **)(_UNK_02918bd4 + 0x2918bb0);
  pcVar10 = (char *)(_UNK_02918ca8 + 0x2918bf0);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02918cac + 0x2918c04));
    func_0x01384978(*(undefined4 *)(_UNK_02918cb0 + 0x2918c10));
    *pcVar10 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x6032,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x6032,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  param_1 = func_0x046634e0(**(undefined4 **)(_UNK_02918cb4 + 0x2918c74),param_2,0);
  if (*(int *)(**(int **)(_UNK_02918cb8 + 0x2918c88) + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar10 = (char *)(_UNK_028c29e4 + 0x28c2958);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c29e8 + 0x28c296c),0);
    *pcVar10 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x46,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x46,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  if (*(int *)(**(int **)(_UNK_028c29ec + 0x28c29c4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar10 = (char *)(_UNK_028c2868 + 0x28c26ec);
  iStack_20 = unaff_r4;
  iStack_1c = unaff_r5;
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c286c + 0x28c2700));
    *pcVar10 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x14,0);
  if (iVar3 != 0) {
    iVar2 = func_0x0229f13c(0x14,0);
    iVar3 = iStack_20;
    iVar7 = iStack_1c;
    if (iVar2 == 0) {
      func_0x01384bf0();
      iVar3 = iStack_20;
      iVar7 = iStack_1c;
    }
    goto LAB_02174038;
  }
  piVar11 = *(int **)(_UNK_028c2870 + 0x28c275c);
  iVar3 = *piVar11;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar11;
  }
  if (**(int **)(iVar3 + 0x5c) < 1) {
LAB_028c2848:
    iVar7 = param_1;
    param_1 = iStack_20;
    iVar2 = iStack_1c;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      param_1 = iStack_20;
      iVar2 = iStack_1c;
    }
  }
  else {
    if (param_1 == 0) {
      func_0x01384bf0();
      iVar3 = *piVar11;
    }
    iVar7 = *(int *)(param_1 + 8);
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar11;
    }
    iVar2 = **(int **)(iVar3 + 0x5c);
    if (iVar7 <= iVar2) goto LAB_028c2848;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = **(int **)(*piVar11 + 0x5c);
    }
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 < 1) {
      return;
    }
    unaff_r6 = 0;
    if (iVar3 < iVar2) {
      iVar2 = iVar3;
    }
    unaff_r7 = func_0x04673af4(param_1,0,iVar2,0);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x01384ab4();
    }
    unaff_lr = 0x28c2824;
    iVar7 = unaff_r7;
    unaff_r8 = 4;
    unaff_r9 = piVar11;
    register0x00000054 = (BADSPACEBASE *)&iStack_20;
  }
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r6;
  *(int *)((int)register0x00000054 + -0xc) = iVar2;
  *(int *)((int)register0x00000054 + -0x10) = param_1;
  pcVar10 = (char *)(_UNK_028c3238 + 0x28c3124);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c323c + 0x28c3138));
    *pcVar10 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x15,0);
  if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x028c319c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_028c31a0 + _UNK_028c31ac))();
    return;
  }
  iVar2 = func_0x0229f13c(0x15,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  unaff_r6 = *(int *)((int)register0x00000054 + -8);
  unaff_lr = *(int *)((int)register0x00000054 + -4);
  param_1 = iVar7;
  iVar3 = *(int *)((int)register0x00000054 + -0x10);
  iVar7 = *(int *)((int)register0x00000054 + -0xc);
LAB_02174038:
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(int **)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = iVar7;
  *(int *)((int)register0x00000054 + -0x20) = iVar3;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_1,0);
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
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),4,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar3 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar3 == 0) {
    uVar5 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar7,uVar8,(undefined1 *)((int)register0x00000054 + -0x38),uVar5);
  return;
LAB_02915964:
  if (piVar11 != (int *)0x0) {
    iVar2 = *piVar11;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar12[-1] == **(int **)(_UNK_02915b50 + 0x2915988)) {
          puVar1 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0xc0);
          goto LAB_029159d0;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_02915b50 + 0x2915988),0);
LAB_029159d0:
    (*(code *)*puVar1)(piVar11,puVar1[1]);
  }
LAB_029159f0:
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  func_0x02142104(iVar7,param_1,0);
  *(int *)(param_1 + 0xb8) = iVar7;
  *(int *)(param_1 + 0xbc) = iVar3;
  pcVar10 = (char *)(_UNK_029174c4 + 0x29173f0);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029174c8 + 0x2917404));
    *pcVar10 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x6020,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x6020,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    iStack_20 = iStack_38;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar3 == 0) {
      uVar5 = 1;
    }
    iStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar5);
    return;
  }
  iVar3 = func_0x0291b244(param_1);
  if (iVar3 == 0) {
    return;
  }
  uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_029174cc + 0x291746c));
  func_0x02157acc(uVar8,param_1,0);
  *(undefined4 *)(param_1 + 0xc0) = uVar8;
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar3 + 0x4c);
  param_2 = *(int **)(param_1 + 0xc0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  pcVar10 = (char *)(_UNK_01dbba4c + 0x1dbb948);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbba50 + 0x1dbb95c),param_2,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dbba54 + 0x1dbb968));
    *pcVar10 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x16b4,0);
  if (iVar3 == 0) {
    iVar3 = func_0x02f6252c(*(undefined4 *)(iVar7 + 0x34),param_2,
                            **(undefined4 **)(_UNK_01dbba58 + 0x1dbb9c8));
    if (param_2 == (int *)0x0 || iVar3 == 0) {
      return;
    }
    iVar3 = *param_2;
    uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_01dbba5c + 0x1dbb9f0)) {
          puVar1 = (undefined4 *)(iVar3 + *piVar11 * 8 + 0xd0);
          goto LAB_01dbba38;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01dbba5c + 0x1dbb9f0),2);
LAB_01dbba38:
                    /* WARNING: Could not recover jumptable at 0x01dbba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar1)(param_2,puVar1[1]);
    return;
  }
  iVar3 = func_0x0229f13c(0x16b4,0);
  param_1 = iVar7;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
SUB_02174108:
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_38 = 0;
  iStack_28 = 0;
  func_0x0245494c(&iStack_50,0,param_2,0);
  iStack_38 = iStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  iStack_2c = uStack_44;
  iStack_28 = uStack_40;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&iStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&iStack_38,param_1,0);
  func_0x01485278(&iStack_38,param_2,0);
  iVar7 = *(int *)(iVar3 + 8);
  uVar8 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar3 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar7,uVar8,&iStack_38,uVar5,0,0);
  return;
}



// ===== FAT.ActivityFishing$$_Error RVA 0x2908bd8 =====

/* WARNING: Possible PIC construction at 0x028c2820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028c2824) */
/* WARNING: Removing unreachable block (ram,0x028c31dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02918bd8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_r5;
  undefined4 uVar7;
  int unaff_r6;
  char *pcVar8;
  int unaff_r7;
  undefined4 unaff_r8;
  int *piVar9;
  int *unaff_r9;
  undefined4 unaff_r10;
  int unaff_lr;
  undefined4 uStack_50;
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
  
  pcVar8 = (char *)(_UNK_02918ca8 + 0x2918bf0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02918cac + 0x2918c04));
    func_0x01384978(*(undefined4 *)(_UNK_02918cb0 + 0x2918c10));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6032,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6032,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    iStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485278(&iStack_38,param_2,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&iStack_38,uVar3,0,0);
    return;
  }
  iVar2 = func_0x046634e0(**(undefined4 **)(_UNK_02918cb4 + 0x2918c74),param_2,0);
  if (*(int *)(**(int **)(_UNK_02918cb8 + 0x2918c88) + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar8 = (char *)(_UNK_028c29e4 + 0x28c2958);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c29e8 + 0x28c296c),0);
    *pcVar8 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x46,0);
  if (iVar5 != 0) {
    iVar5 = func_0x0229f13c(0x46,0);
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
    func_0x01485278(&uStack_30,iVar2,0);
    iVar4 = *(int *)(iVar5 + 8);
    uVar7 = *(undefined4 *)(iVar5 + 0xc);
    iVar2 = *(int *)(iVar5 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar7,&uStack_30,uVar3);
    return;
  }
  if (*(int *)(**(int **)(_UNK_028c29ec + 0x28c29c4) + 0x74) == 0) {
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
    iVar1 = func_0x0229f13c(0x14,0);
    iVar5 = iStack_20;
    iVar4 = iStack_1c;
    iVar6 = iStack_18;
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar5 = iStack_20;
      iVar4 = iStack_1c;
      iVar6 = iStack_18;
    }
    goto LAB_02174038;
  }
  piVar9 = *(int **)(_UNK_028c2870 + 0x28c275c);
  iVar5 = *piVar9;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x01384ab4();
    iVar5 = *piVar9;
  }
  if (**(int **)(iVar5 + 0x5c) < 1) {
LAB_028c2848:
    iVar4 = iVar2;
    iVar2 = iStack_20;
    iVar6 = iStack_1c;
    iVar1 = iStack_18;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = iStack_20;
      iVar6 = iStack_1c;
      iVar1 = iStack_18;
    }
  }
  else {
    if (iVar2 == 0) {
      func_0x01384bf0();
      iVar5 = *piVar9;
    }
    iVar4 = *(int *)(iVar2 + 8);
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4();
      iVar5 = *piVar9;
    }
    iVar6 = **(int **)(iVar5 + 0x5c);
    if (iVar4 <= iVar6) goto LAB_028c2848;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4();
      iVar6 = **(int **)(*piVar9 + 0x5c);
    }
    iVar5 = *(int *)(iVar2 + 8);
    if (iVar5 < 1) {
      return;
    }
    if (iVar5 < iVar6) {
      iVar6 = iVar5;
    }
    unaff_r7 = func_0x04673af4(iVar2,0,iVar6,0);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x01384ab4();
    }
    unaff_lr = 0x28c2824;
    iVar4 = unaff_r7;
    iVar1 = 0;
    unaff_r8 = 4;
    unaff_r9 = piVar9;
    register0x00000054 = (BADSPACEBASE *)&iStack_20;
  }
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = iVar1;
  *(int *)((int)register0x00000054 + -0xc) = iVar6;
  *(int *)((int)register0x00000054 + -0x10) = iVar2;
  pcVar8 = (char *)(_UNK_028c3238 + 0x28c3124);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c323c + 0x28c3138));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x15,0);
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x028c319c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_028c31a0 + _UNK_028c31ac))();
    return;
  }
  iVar1 = func_0x0229f13c(0x15,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  unaff_lr = *(int *)((int)register0x00000054 + -4);
  iVar2 = iVar4;
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
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,iVar2,0);
  iVar5 = *(int *)(iVar1 + 0x10);
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
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),4,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar2,0);
  iVar5 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar2 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar2 == 0) {
    uVar3 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar5,uVar7,(undefined1 *)((int)register0x00000054 + -0x38),uVar3);
  return;
}



// ===== FAT.ActivityFishing$$FAT.IBoardArchive.FillBoardData RVA 0x2908cbc =====

/* WARNING: Possible PIC construction at 0x02147e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02147e08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02918cbc(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  char *pcVar11;
  int unaff_r4;
  undefined4 unaff_r5;
  int iVar12;
  undefined4 uVar13;
  undefined4 unaff_r6;
  undefined4 *puVar14;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  uint uVar15;
  int unaff_r9;
  undefined4 *puVar16;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined8 uVar17;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  int aiStack_28 [4];
  
  iVar4 = func_0x0229f06c(0x6033,0);
  if (iVar4 == 0) {
    param_1 = FUN_02913d80(param_1);
    if (param_1 == 0) {
      return;
    }
    pcVar11 = (char *)(_UNK_0214881c + 0x2147b9c);
    if (*pcVar11 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02148820 + 0x2147bb0),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_02148824 + 0x2147bbc));
      func_0x01384978(*(undefined4 *)(_UNK_02148828 + 0x2147bc8));
      func_0x01384978(*(undefined4 *)(_UNK_0214882c + 0x2147bd4));
      func_0x01384978(*(undefined4 *)(_UNK_02148830 + 0x2147be0));
      func_0x01384978(*(undefined4 *)(_UNK_02148834 + 0x2147bec));
      func_0x01384978(*(undefined4 *)(_UNK_02148838 + 0x2147bf8));
      func_0x01384978(*(undefined4 *)(_UNK_0214883c + 0x2147c04));
      func_0x01384978(*(undefined4 *)(_UNK_02148840 + 0x2147c10));
      func_0x01384978(*(undefined4 *)(_UNK_02148844 + 0x2147c1c));
      func_0x01384978(*(undefined4 *)(_UNK_02148848 + 0x2147c28));
      func_0x01384978(*(undefined4 *)(_UNK_0214884c + 0x2147c34));
      func_0x01384978(*(undefined4 *)(_UNK_02148850 + 0x2147c40));
      func_0x01384978(*(undefined4 *)(_UNK_02148854 + 0x2147c4c));
      func_0x01384978(*(undefined4 *)(_UNK_02148858 + 0x2147c58));
      func_0x01384978(*(undefined4 *)(_UNK_0214885c + 0x2147c64));
      func_0x01384978(*(undefined4 *)(_UNK_02148860 + 0x2147c70));
      func_0x01384978(*(undefined4 *)(_UNK_02148864 + 0x2147c7c));
      func_0x01384978(*(undefined4 *)(_UNK_02148868 + 0x2147c88));
      func_0x01384978(*(undefined4 *)(_UNK_0214886c + 0x2147c94));
      func_0x01384978(*(undefined4 *)(_UNK_02148870 + 0x2147ca0));
      func_0x01384978(*(undefined4 *)(_UNK_02148874 + 0x2147cac));
      func_0x01384978(*(undefined4 *)(_UNK_02148878 + 0x2147cb8));
      func_0x01384978(*(undefined4 *)(_UNK_0214887c + 0x2147cc4));
      func_0x01384978(*(undefined4 *)(_UNK_02148880 + 0x2147cd0));
      func_0x01384978(*(undefined4 *)(_UNK_02148884 + 0x2147cdc));
      func_0x01384978(*(undefined4 *)(_UNK_02148888 + 0x2147ce8));
      func_0x01384978(*(undefined4 *)(_UNK_0214888c + 0x2147cf4));
      func_0x01384978(*(undefined4 *)(_UNK_02148890 + 0x2147d00));
      func_0x01384978(*(undefined4 *)(_UNK_02148894 + 0x2147d0c));
      func_0x01384978(*(undefined4 *)(_UNK_02148898 + 0x2147d18));
      func_0x01384978(*(undefined4 *)(_UNK_0214889c + 0x2147d24));
      func_0x01384978(*(undefined4 *)(_UNK_021488a0 + 0x2147d30));
      func_0x01384978(*(undefined4 *)(_UNK_021488a4 + 0x2147d3c));
      func_0x01384978(*(undefined4 *)(_UNK_021488a8 + 0x2147d48));
      func_0x01384978(*(undefined4 *)(_UNK_021488ac + 0x2147d54));
      func_0x01384978(*(undefined4 *)(_UNK_021488b0 + 0x2147d60));
      func_0x01384978(*(undefined4 *)(_UNK_021488b4 + 0x2147d6c));
      *pcVar11 = '\x01';
    }
    uStack_94 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_90 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_8c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_60 = 0;
    unaff_r8 = &uStack_38;
    uStack_78 = 0;
    aiStack_28[0] = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_38 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    uStack_48 = 0;
    uStack_84 = uStack_94;
    uStack_80 = uStack_90;
    uStack_7c = uStack_8c;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    uStack_5c = uStack_94;
    uStack_58 = uStack_90;
    uStack_54 = uStack_8c;
    uStack_44 = uStack_94;
    uStack_40 = uStack_90;
    uStack_3c = uStack_8c;
    uStack_34 = uStack_94;
    uStack_30 = uStack_90;
    uStack_2c = uStack_8c;
    iVar4 = func_0x0229f06c(0x5c6c,0);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x4c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar13 = *(undefined4 *)(iVar4 + 8);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(param_2 + 0x38) = uVar13;
      uVar17 = func_0x02140d24(param_1);
      uVar17 = func_0x01458584((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),1000,0);
      *(undefined8 *)(param_2 + 0x30) = uVar17;
      piVar1 = (int *)func_0x021566f4(0);
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar4 = *piVar1;
      uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_021488b8 + 0x2147e74)) {
            puVar2 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
            goto LAB_02147ebc;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_021488b8 + 0x2147e74),0);
LAB_02147ebc:
      (*(code *)*puVar2)(piVar1,puVar2[1]);
      uVar13 = *(undefined4 *)(param_1 + 0x94);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(param_1 + 0x50);
      *(undefined4 *)(param_2 + 0x3c) = uVar13;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x021139b0(iVar4,param_2,0);
      iVar4 = *(int *)(param_1 + 0x54);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x02148958(iVar4,param_2);
      iVar4 = *(int *)(param_1 + 0x58);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x02139e7c(iVar4,param_2);
      iVar4 = *(int *)(param_1 + 0x5c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0215ea7c(iVar4,param_2,0);
      iVar4 = *(int *)(param_1 + 0x60);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x01db6828(iVar4,param_2,0);
      iVar4 = *(int *)(param_1 + 100);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x02110804(iVar4,param_2,0);
      iVar4 = *(int *)(param_1 + 0x4c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x020dc720(iVar4,aiStack_28,0);
      iVar4 = aiStack_28[0];
      iStack_b4 = param_2;
      if (iVar6 != 0) {
        if (aiStack_28[0] == 0) {
          func_0x01384bf0();
        }
        func_0x0325a3b4(&uStack_b0,iVar4,**(undefined4 **)(_UNK_021488bc + 0x2147fe8));
        uStack_38 = uStack_b0;
        uStack_34 = uStack_ac;
        uStack_30 = uStack_a8;
        uStack_2c = uStack_a4;
        puVar2 = *(undefined4 **)(_UNK_021488c0 + 0x2148004);
        puVar14 = *(undefined4 **)(_UNK_021488c4 + 0x214800c);
        while (iVar4 = func_0x03f597e0(unaff_r8,*puVar2), uVar7 = uStack_2c, iVar4 != 0) {
          iVar4 = *(int *)(param_2 + 0x6c);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x0364baf8(iVar4,uVar7,*puVar14);
        }
        func_0x03f597dc(&uStack_38,**(undefined4 **)(_UNK_021488c8 + 0x2148050));
      }
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x40);
      uVar17 = func_0x02140d24(param_1);
      uVar7 = *(uint *)(param_1 + 0x44);
      iVar4 = *(int *)(param_1 + 0x6c);
      uVar13 = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_2 + 0x44) = uVar13;
      uVar17 = func_0x01458584((uint)uVar17 - uVar7,
                               (int)((ulonglong)uVar17 >> 0x20) -
                               (((int)uVar7 >> 0x1f) + (uint)((uint)uVar17 < uVar7)),1000,0);
      *(undefined8 *)(param_2 + 0x10) = uVar17;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar4 + 0x10)) {
        iVar4 = *(int *)(param_1 + 0x6c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x02454910(&uStack_b0,iVar4,**(undefined4 **)(_UNK_021488d0 + 0x21480dc));
        uVar7 = 0;
        uVar15 = 0;
        uStack_48 = uStack_b0;
        uStack_44 = uStack_ac;
        uStack_40 = uStack_a8;
        uStack_3c = uStack_a4;
        puVar2 = *(undefined4 **)(_UNK_021488d4 + 0x2148104);
        while (iVar4 = func_0x03f5a2cc(&uStack_48,*puVar2), iVar4 != 0) {
          uVar3 = uStack_3c & 0x3f;
          uVar8 = uVar3 - 0x20;
          uVar5 = 1 << uVar3;
          if (-1 < (int)uVar8) {
            uVar5 = 0;
          }
          uVar7 = uVar5 | uVar7;
          uVar5 = 1 >> (0x20 - uVar3 & 0xff);
          if (-1 < (int)uVar8) {
            uVar5 = 1 << (uVar8 & 0xff);
          }
          uVar15 = uVar5 | uVar15;
        }
        func_0x03f5a2c8(&uStack_48,**(undefined4 **)(_UNK_021488dc + 0x214814c));
        if (iStack_b4 == 0) {
          func_0x01384bf0();
        }
        *(uint *)(param_2 + 0x48) = uVar7;
        *(uint *)(param_2 + 0x4c) = uVar15;
      }
      iVar4 = *(int *)(param_1 + 0x9c);
      iStack_b8 = param_1;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_b0,iVar4,**(undefined4 **)(_UNK_021488e4 + 0x2148190));
      uStack_60 = uStack_b0;
      uStack_5c = uStack_ac;
      uStack_58 = uStack_a8;
      uStack_54 = uStack_a4;
      uStack_50 = uStack_a0;
      puVar14 = *(undefined4 **)(_UNK_021488e8 + 0x21481bc);
      puVar2 = *(undefined4 **)(_UNK_021488ec + 0x21481c4);
      while (iVar4 = func_0x03f9b324(&uStack_60,*puVar14), uVar7 = uStack_54, iVar4 != 0) {
        iVar4 = (int)uStack_50;
        iVar12 = *(int *)(iStack_b4 + 0x50);
        iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_021488f4 + 0x21481ec));
        func_0x01797598(iVar6,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148a58(iVar4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar6 + 0x10) = uVar13;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148aac(iVar4);
        *(undefined4 *)(iVar6 + 0xc) = uVar13;
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar12,uVar7,iVar6,*puVar2);
      }
      func_0x03f9b464(&uStack_60,**(undefined4 **)(_UNK_021488f8 + 0x214826c));
      iVar4 = *(int *)(iStack_b8 + 0x98);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_b0,iVar4,**(undefined4 **)(_UNK_02148900 + 0x214829c));
      uStack_78 = uStack_b0;
      uStack_74 = uStack_ac;
      uStack_70 = uStack_a8;
      uStack_6c = uStack_a4;
      uStack_68 = uStack_a0;
      puVar2 = *(undefined4 **)(_UNK_02148904 + 0x21482c8);
      puVar14 = *(undefined4 **)(_UNK_02148908 + 0x21482d0);
      puVar16 = *(undefined4 **)(_UNK_0214890c + 0x21482d8);
      while (iVar4 = func_0x03f9b324(&uStack_78,*puVar2), uVar7 = uStack_6c, iVar4 != 0) {
        iVar4 = (int)uStack_68;
        uVar13 = func_0x01384be4(*puVar14);
        func_0x01798ae4(uVar13,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x02148b00(iVar4,uVar13);
        iVar4 = *(int *)(iStack_b4 + 0x58);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar4,uVar7,uVar13,*puVar16);
      }
      func_0x03f9b464(&uStack_78,**(undefined4 **)(_UNK_02148914 + 0x2148354));
      iVar6 = iStack_b4;
      iVar4 = iStack_b8;
      uVar13 = **(undefined4 **)(_UNK_0214891c + 0x2148368);
      *(int *)(iStack_b8 + 0xa4) = iStack_b4;
      uVar13 = func_0x01384be4(uVar13);
      func_0x03ccb96c(uVar13,iVar4,**(undefined4 **)(_UNK_02148920 + 0x2148390),0);
      func_0x021475dc(iVar4,uVar13,0x7fffffff);
      iVar12 = *(int *)(iVar4 + 0x68);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_b0,iVar12,**(undefined4 **)(_UNK_02148924 + 0x21483d0));
      uStack_88 = uStack_b0;
      uStack_84 = uStack_ac;
      uStack_80 = uStack_a8;
      uStack_7c = uStack_a4;
      puVar2 = *(undefined4 **)(_UNK_02148928 + 0x21483ec);
      puVar14 = *(undefined4 **)(_UNK_0214892c + 0x21483f4);
      while (iVar12 = func_0x03f5f428(&uStack_88,*puVar2), uVar7 = uStack_7c, iVar12 != 0) {
        iVar12 = *(int *)(iVar6 + 0x5c);
        if (uStack_7c == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x0210e5f4(uVar7,0);
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        func_0x0364baf8(iVar12,uVar13,*puVar14);
      }
      func_0x03f5f424(&uStack_88,**(undefined4 **)(_UNK_02148934 + 0x2148454));
      iVar6 = *(int *)(iVar4 + 0x34);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x03d6476c(iVar6,**(undefined4 **)(_UNK_0214893c + 0x2148488));
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x0382ab5c(&uStack_98,iVar6,**(undefined4 **)(_UNK_02148940 + 0x21484b4));
      puVar2 = *(undefined4 **)(_UNK_02148944 + 0x21484c8);
      while (iVar6 = func_0x03f9b9f8(&uStack_98,*puVar2), iVar6 != 0) {
        if (uStack_8c != 0) {
          func_0x02148de8(iVar4);
        }
      }
      func_0x03f9b9f4(&uStack_98,**(undefined4 **)(_UNK_0214894c + 0x21484fc));
      return;
    }
    iVar4 = func_0x0229f13c(0x5c6c,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2147e08;
    unaff_r4 = iVar4;
    unaff_r9 = param_2;
    unaff_r10 = param_1;
    register0x00000054 = (BADSPACEBASE *)&iStack_b8;
  }
  else {
    iVar4 = func_0x0229f13c(0x6033,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r10;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 **)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_r5;
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
  iVar6 = *(int *)(iVar4 + 0x10);
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
  if (iVar6 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar6,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar6 = *(int *)(iVar4 + 8);
  uVar13 = *(undefined4 *)(iVar4 + 0xc);
  iVar4 = *(int *)(iVar4 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar10 = 3;
  if (iVar4 == 0) {
    uVar10 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar6,uVar13,(undefined1 *)((int)register0x00000054 + -0x38),uVar10);
  return;
}



// ===== FAT.ActivityFishing$$FAT.Merge.IExternalOutput.CanUseItem RVA 0x2908d34 =====

uint FUN_02918d34(undefined4 param_1,int param_2)

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
  
  iVar2 = func_0x0229f06c(0x6034,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6034,0);
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
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0210e2d4(param_2,0);
  iVar4 = FUN_02913c30(param_1);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  return (uint)(iVar2 == *(int *)(iVar4 + 0x30));
}



// ===== FAT.ActivityFishing$$FAT.Merge.IExternalOutput.TrySpawnItem RVA 0x2908dd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02918dd0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_029190bc + 0x2918df0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029190c0 + 0x2918e08));
    func_0x01384978(*(undefined4 *)(_UNK_029190c4 + 0x2918e14));
    func_0x01384978(*(undefined4 *)(_UNK_029190c8 + 0x2918e20));
    func_0x01384978(*(undefined4 *)(_UNK_029190cc + 0x2918e2c));
    func_0x01384978(*(undefined4 *)(_UNK_029190d0 + 0x2918e38));
    func_0x01384978(*(undefined4 *)(_UNK_029190d4 + 0x2918e44));
    func_0x01384978(*(undefined4 *)(_UNK_029190d8 + 0x2918e50));
    func_0x01384978(*(undefined4 *)(_UNK_029190dc + 0x2918e5c));
    func_0x01384978(*(undefined4 *)(_UNK_029190e0 + 0x2918e68));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6035,0);
  if (iVar1 == 0) {
    *param_4 = 0;
    *param_3 = 0xffffffff;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_029190e4 + 0x2918eec));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0211b24c(iVar1,0);
    if (iVar1 == 0) {
      uVar2 = func_0x020d8024(0,0x17,0);
      *param_4 = uVar2;
      piVar6 = *(int **)(_UNK_029190e8 + 0x2918f44);
      uVar2 = *(undefined4 *)(param_1 + 0xe0);
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar6;
      }
      iVar5 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
      if (iVar5 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar6;
        }
        uVar4 = **(undefined4 **)(iVar1 + 0x5c);
        iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_029190ec + 0x2918f90));
        func_0x03a068fc(iVar5,uVar4,**(undefined4 **)(_UNK_029190f0 + 0x2918fb0),0);
        *(int *)(*(int *)(*piVar6 + 0x5c) + 8) = iVar5;
      }
      func_0x02fbd288(&uStack_2c,uVar2,iVar5,0,**(undefined4 **)(_UNK_029190f4 + 0x2918fdc));
      iVar1 = **(int **)(_UNK_029190f8 + 0x2918ff4);
      *param_3 = uStack_2c;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0204f2f0(&uStack_2c,0x28,0);
      uVar2 = *param_3;
      if (*(int *)(**(int **)(_UNK_029190fc + 0x2919034) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01dd7838(uVar2,uStack_2c,uStack_28,uStack_24,0xbf800000,0);
      if (*(int *)(**(int **)(_UNK_02919100 + 0x2919074) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02919104 + 0x2919090));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x028c3fd8(iVar1,0);
    }
    else {
      func_0x02919108(param_1);
    }
    uVar2 = 1;
  }
  else {
    iVar1 = func_0x0229f13c(0x6035,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x022365c4(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.ActivityFishing$$GenerateFish RVA 0x2909108 =====

/* WARNING: Removing unreachable block (ram,0x02919604) */
/* WARNING: Removing unreachable block (ram,0x029199f4) */
/* WARNING: Removing unreachable block (ram,0x02919a00) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02919108(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uStack_c0;
  int iStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int aiStack_44 [8];
  
  pcVar11 = (char *)(_UNK_02919c18 + 0x2919128);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02919c1c + 0x291913c));
    func_0x01384978(*(undefined4 *)(_UNK_02919c20 + 0x2919148));
    func_0x01384978(*(undefined4 *)(_UNK_02919c24 + 0x2919154));
    func_0x01384978(*(undefined4 *)(_UNK_02919c28 + 0x2919160));
    func_0x01384978(*(undefined4 *)(_UNK_02919c2c + 0x291916c));
    func_0x01384978(*(undefined4 *)(_UNK_02919c30 + 0x2919178));
    func_0x01384978(*(undefined4 *)(_UNK_02919c34 + 0x2919184));
    func_0x01384978(*(undefined4 *)(_UNK_02919c38 + 0x2919190));
    func_0x01384978(*(undefined4 *)(_UNK_02919c3c + 0x291919c));
    func_0x01384978(*(undefined4 *)(_UNK_02919c40 + 0x29191a8));
    func_0x01384978(*(undefined4 *)(_UNK_02919c44 + 0x29191b4));
    func_0x01384978(*(undefined4 *)(_UNK_02919c48 + 0x29191c0));
    func_0x01384978(*(undefined4 *)(_UNK_02919c4c + 0x29191cc));
    func_0x01384978(*(undefined4 *)(_UNK_02919c50 + 0x29191d8));
    func_0x01384978(*(undefined4 *)(_UNK_02919c54 + 0x29191e4));
    func_0x01384978(*(undefined4 *)(_UNK_02919c58 + 0x29191f0));
    func_0x01384978(*(undefined4 *)(_UNK_02919c5c + 0x29191fc));
    func_0x01384978(*(undefined4 *)(_UNK_02919c60 + 0x2919208));
    func_0x01384978(*(undefined4 *)(_UNK_02919c64 + 0x2919214));
    func_0x01384978(*(undefined4 *)(_UNK_02919c68 + 0x2919220));
    func_0x01384978(*(undefined4 *)(_UNK_02919c6c + 0x291922c));
    func_0x01384978(*(undefined4 *)(_UNK_02919c70 + 0x2919238));
    func_0x01384978(*(undefined4 *)(_UNK_02919c74 + 0x2919244));
    func_0x01384978(*(undefined4 *)(_UNK_02919c78 + 0x2919250));
    func_0x01384978(*(undefined4 *)(_UNK_02919c7c + 0x291925c));
    func_0x01384978(*(undefined4 *)(_UNK_02919c80 + 0x2919268));
    func_0x01384978(*(undefined4 *)(_UNK_02919c84 + 0x2919274));
    *pcVar11 = '\x01';
  }
  uStack_74 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_70 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_6c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_60 = 0;
  uStack_54 = (ulonglong)uStack_74 << 0x20;
  _uStack_4c = CONCAT44(uStack_6c,uStack_70);
  uStack_78 = 0;
  iStack_ac = 0;
  aiStack_44[2] = 0;
  aiStack_44[1] = 0;
  aiStack_44[0] = 0;
  uStack_68 = 0;
  uStack_5c = uStack_74;
  uStack_58 = uStack_70;
  iVar2 = func_0x0229f06c(0x6036,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02919c88 + 0x291930c));
    func_0x04874ed4(iVar2,0);
    iVar3 = FUN_02913f3c(param_1);
    iVar4 = FUN_02913f90(param_1);
    if (iVar4 <= iVar3) {
      iStack_ac = FUN_02913ffc(param_1);
    }
    if (*(int *)(**(int **)(_UNK_02919c8c + 0x2919350) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x028c8d78(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0302a45c(aiStack_44 + 1,iVar3,aiStack_44,**(undefined4 **)(_UNK_02919c90 + 0x291938c));
    iVar3 = *(int *)(param_1 + 0xe4);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x04465798(&uStack_98,iVar3,**(undefined4 **)(_UNK_02919c94 + 0x29193b4));
    uVar14 = 0;
    uVar15 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_54._0_4_ = uStack_8c;
    uStack_54._4_4_ = uStack_88;
    uStack_4c = uStack_84;
    uStack_48 = uStack_80;
    uStack_60 = uStack_98;
    uStack_5c = uStack_94;
    uStack_58 = uStack_90;
LAB_029193e0:
    while (iVar4 = func_0x03f4ff3c(&uStack_60,**(undefined4 **)(_UNK_02919ca8 + 0x29193ec)),
          iVar3 = aiStack_44[0], uVar1 = uStack_48, uVar13 = uStack_4c, uVar19 = uStack_54._4_4_,
          uVar9 = (undefined4)uStack_54, iVar4 != 0) {
      if (iStack_ac == 0) goto LAB_029194ac;
      uStack_98 = uVar14;
      uStack_94 = uVar15;
      uStack_90 = uVar7;
      uStack_8c = uVar8;
      func_0x0394a080(&uStack_98,(undefined4)uStack_54,uStack_54._4_4_,uStack_4c,uStack_48,
                      **(undefined4 **)(_UNK_02919c98 + 0x2919424));
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar13 = uStack_8c;
      uVar19 = uStack_90;
      uVar20 = uStack_94;
      uVar9 = uStack_98;
      iVar4 = *(int *)(iVar3 + 8);
      uVar17 = *(uint *)(iVar3 + 0xc);
      iVar18 = **(int **)(_UNK_02919c9c + 0x2919470);
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (uVar17 < *(uint *)(iVar4 + 0xc)) {
        *(uint *)(iVar3 + 0xc) = uVar17 + 1;
        iVar4 = iVar4 + uVar17 * 0x10;
        *(undefined4 *)(iVar4 + 0x10) = uVar9;
        goto LAB_02919578;
      }
      func_0x044648c4(iVar3,uVar9,uVar20,uVar19,uVar13,
                      *(undefined4 *)(*(int *)(*(int *)(iVar18 + 0x10) + 0x60) + 0x38));
    }
    func_0x03f4ff38(&uStack_60,**(undefined4 **)(_UNK_02919cac + 0x29195f4));
    iVar3 = aiStack_44[0];
    if (aiStack_44[0] == 0) {
      func_0x01384bf0();
    }
    iVar4 = aiStack_44[0];
    if (*(int *)(iVar3 + 0xc) == 0) {
      FUN_02918bd8(param_1,**(undefined4 **)(_UNK_02919cb0 + 0x29197cc));
    }
    else {
      piVar16 = *(int **)(_UNK_02919cb8 + 0x2919634);
      iVar3 = *piVar16;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4(iVar3);
        iVar3 = *piVar16;
      }
      iVar18 = *(int *)(*(int *)(iVar3 + 0x5c) + 0xc);
      if (iVar18 == 0) {
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4(iVar3);
          iVar3 = *piVar16;
        }
        uVar14 = **(undefined4 **)(iVar3 + 0x5c);
        iVar18 = func_0x01384be4(**(undefined4 **)(_UNK_02919cbc + 0x291968c));
        func_0x03a06ecc(iVar18,uVar14,**(undefined4 **)(_UNK_02919cc0 + 0x29196a0),0);
        *(int *)(*(int *)(*piVar16 + 0x5c) + 0xc) = iVar18;
      }
      func_0x02fbe900(&uStack_a8,iVar4,iVar18,0,**(undefined4 **)(_UNK_02919cc4 + 0x29196c8));
      uStack_98 = uStack_a8;
      uStack_94 = uStack_a4;
      uStack_90 = uStack_a0;
      uStack_8c = uStack_9c;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      puVar6 = (undefined4 *)(iVar2 + 8);
      *puVar6 = uStack_98;
      *(uint *)(iVar2 + 0xc) = uStack_94;
      *(undefined4 *)(iVar2 + 0x10) = uStack_90;
      *(undefined4 *)(iVar2 + 0x14) = uStack_8c;
      uVar14 = func_0x02450284(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 0x14),0);
      iVar3 = *(int *)(param_1 + 0xb0);
      uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_02919cc8 + 0x2919738));
      func_0x035ac004(uVar7,iVar2,**(undefined4 **)(_UNK_02919ccc + 0x291974c),0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x0443d93c(iVar3,uVar7,**(undefined4 **)(_UNK_02919cd0 + 0x2919774));
      if (iVar4 < 0) {
        uVar15 = 0;
        uVar7 = 0;
      }
      else {
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x0443cb88(&uStack_98,iVar3,iVar4,**(undefined4 **)(_UNK_02919cd4 + 0x29197a4));
        uVar7 = uStack_90;
        uVar15 = uStack_94;
      }
      iVar4 = func_0x0291a4c8(param_1,*puVar6,uVar15);
      iVar5 = uVar15 + 1;
      iVar18 = func_0x0291a4c8(param_1,*puVar6);
      if (iVar4 < iVar18) {
        uVar8 = FUN_02913e28(param_1);
        FUN_02917fdc(param_1,uVar8,iVar18 - iVar4);
        uStack_c0 = 0;
        func_0x019b4fe4(param_1,*puVar6,iVar18,0);
      }
      else {
        iVar10 = func_0x0291a460(param_1,*puVar6);
        uStack_c0 = 0;
        if (iVar4 == iVar10) {
          uStack_c0 = 1;
          func_0x0291a95c(param_1,*puVar6);
        }
      }
      uVar8 = *puVar6;
      if (*(int *)(**(int **)(_UNK_02919cd8 + 0x29198a4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar9 = func_0x04825cf4(uVar14,uVar7,0);
      func_0x0291afec(param_1,uVar8,iVar5,uVar9);
      uVar8 = *puVar6;
      if (*(int *)(**(int **)(_UNK_02919cdc + 0x29198f8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar10 = func_0x0300d558(**(undefined4 **)(_UNK_02919ce0 + 0x291991c));
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      func_0x034a0084(iVar10,uVar8,uVar14,uVar7,uVar15,iVar5,iVar4,iVar18,
                      **(undefined4 **)(_UNK_02919ce4 + 0x291993c));
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0443dda4(&uStack_98,iVar3,**(undefined4 **)(_UNK_02919ce8 + 0x2919980));
      iVar3 = 0;
      uStack_68 = CONCAT44(uStack_84,uStack_88);
      uStack_78 = uStack_98;
      uStack_74 = uStack_94;
      uStack_70 = uStack_90;
      uStack_6c = uStack_8c;
      puVar12 = *(undefined4 **)(_UNK_02919cec + 0x29199b4);
      while (iVar4 = func_0x03f4d7a4(&uStack_78,*puVar12), iVar4 != 0) {
        iVar3 = (int)uStack_68 + iVar3;
      }
      func_0x03f4d7a0(&uStack_78,**(undefined4 **)(_UNK_02919cf0 + 0x29199e4));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x019b4e8c(param_1,*puVar6,iVar5,iVar3,uStack_c0,0);
    }
    func_0x028c98a0(aiStack_44 + 1,0);
  }
  else {
    iVar2 = func_0x0229f13c(0x6036,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
LAB_029194ac:
  iVar4 = func_0x02919dac(param_1,(undefined4)uStack_54);
  iVar18 = func_0x02919f64(param_1,uVar9);
  iVar5 = FUN_029140bc(param_1);
  iVar3 = aiStack_44[0];
  if (iVar4 < iVar5 + iVar18) {
    uStack_98 = uVar14;
    uStack_94 = uVar15;
    uStack_90 = uVar7;
    uStack_8c = uVar8;
    func_0x0394a080(&uStack_98,uVar9,uVar19,uVar13,uVar1,
                    **(undefined4 **)(_UNK_02919ca0 + 0x29194f4));
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar13 = uStack_8c;
    uVar19 = uStack_90;
    uVar20 = uStack_94;
    uVar9 = uStack_98;
    iVar4 = *(int *)(iVar3 + 8);
    uVar17 = *(uint *)(iVar3 + 0xc);
    iVar18 = **(int **)(_UNK_02919ca4 + 0x2919540);
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (uVar17 < *(uint *)(iVar4 + 0xc)) {
      *(uint *)(iVar3 + 0xc) = uVar17 + 1;
      iVar4 = iVar4 + uVar17 * 0x10;
      *(undefined4 *)(iVar4 + 0x10) = uVar9;
LAB_02919578:
      *(uint *)(iVar4 + 0x14) = uVar20;
      *(undefined4 *)(iVar4 + 0x18) = uVar19;
      *(undefined4 *)(iVar4 + 0x1c) = uVar13;
    }
    else {
      func_0x044648c4(iVar3,uVar9,uVar20,uVar19,uVar13,
                      *(undefined4 *)(*(int *)(*(int *)(iVar18 + 0x10) + 0x60) + 0x38));
    }
  }
  goto LAB_029193e0;
}



// ===== FAT.ActivityFishing$$IsFishUnlocked RVA 0x2909cf8 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02919cf8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint extraout_r1;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_02919da0 + 0x2919d10);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02919da4 + 0x2919d24));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x604a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x604a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar5,0,0);
    uVar8 = func_0x0245496c(&uStack_38,0,0);
    return uVar8;
  }
  iVar1 = *(int *)(param_1 + 0xe8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_28 = **(int **)(_UNK_02919da8 + 0x2919d94);
  if (*(int *)(iVar1 + 8) != 0) {
    iVar7 = func_0x04222a4c(iVar1,param_2,
                            *(undefined4 *)(*(int *)(*(int *)(iStack_28 + 0x10) + 0x60) + 0x58));
    iVar12 = *(int *)(iVar1 + 8);
    iVar10 = *(int *)(iVar1 + 0xc);
    iStack_2c = iVar1;
    if (iVar12 == 0) {
      func_0x02457d50();
      func_0x02457d50();
    }
    uVar11 = *(uint *)(iVar12 + 0xc);
    func_0x02457e94(iVar7,uVar11);
    if (uVar11 <= extraout_r1) {
      func_0x02457d5c();
    }
    uVar11 = *(int *)(iVar12 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar11) {
      iVar1 = 0;
      iStack_30 = iVar7;
      do {
        if (iVar10 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar11) {
          func_0x02457d5c();
        }
        iVar12 = iVar10 + uVar11 * 0xc;
        if (*(int *)(iVar12 + 0x10) == iVar7) {
          piVar13 = *(int **)(iStack_2c + 0x1c);
          if (*(uint *)(iVar10 + 0xc) <= uVar11) {
            func_0x02457d5c();
          }
          uVar8 = *(undefined4 *)(iVar12 + 0x18);
          if (piVar13 == (int *)0x0) {
            func_0x02457d50();
          }
          iVar7 = *(int *)(*(int *)(*(int *)(iStack_28 + 0x10) + 0x60) + 0x10);
          if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
            iVar7 = func_0x02457d84(iVar7);
          }
          iVar2 = *piVar13;
          uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar4 != 0) {
            piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar6[-1] == iVar7) {
                puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
                goto LAB_0421f510;
              }
              uVar4 = uVar4 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined4 *)func_0x02457d88(piVar13,iVar7,0);
LAB_0421f510:
          iVar2 = (*(code *)*puVar3)(piVar13,uVar8,param_2,puVar3[1]);
          iVar7 = iStack_30;
          if (iVar2 != 0) {
            return 1;
          }
        }
        if (iVar10 == 0) {
          func_0x02457d50();
        }
        if ((int)*(uint *)(iVar10 + 0xc) <= iVar1) {
          func_0x02457d6c(*(undefined4 *)(_UNK_0421f5c4 + 0x421f590));
          uVar8 = func_0x02457d58();
          uVar5 = func_0x02457d6c(*(undefined4 *)(_UNK_0421f5c8 + 0x421f5a4));
          func_0x04824950(uVar8,uVar5,0);
          func_0x02457d90(uVar8,iStack_28);
          func_0x02457d94();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar11) {
          func_0x02457d5c();
        }
        uVar11 = *(uint *)(iVar12 + 0x14);
        iVar1 = iVar1 + 1;
      } while (uVar11 < 0x80000000);
    }
  }
  return 0;
}



// ===== FAT.ActivityFishing$$GetFishCaughtCount RVA 0x2909dac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02919dac(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
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
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_02919f30 + 0x2919dc8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02919f34 + 0x2919ddc));
    func_0x01384978(*(undefined4 *)(_UNK_02919f38 + 0x2919de8));
    func_0x01384978(*(undefined4 *)(_UNK_02919f3c + 0x2919df4));
    func_0x01384978(*(undefined4 *)(_UNK_02919f40 + 0x2919e00));
    func_0x01384978(*(undefined4 *)(_UNK_02919f44 + 0x2919e0c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6039,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6039,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
    uVar6 = func_0x0245498c(&uStack_38,0,0);
    return uVar6;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02919f48 + 0x2919e6c));
  func_0x04874ed4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar2 = *(undefined4 **)(_UNK_02919f4c + 0x2919e94);
  iVar5 = *(int *)(param_1 + 0xb0);
  *(undefined4 *)(iVar1 + 8) = param_2;
  uVar6 = func_0x01384be4(*puVar2);
  func_0x035ac004(uVar6,iVar1,**(undefined4 **)(_UNK_02919f50 + 0x2919ebc),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0443d93c(iVar5,uVar6,**(undefined4 **)(_UNK_02919f54 + 0x2919ee0));
  uVar6 = 0;
  if (-1 < iVar1) {
    iVar5 = *(int *)(param_1 + 0xb0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x0443cb88(auStack_24,iVar5,iVar1,**(undefined4 **)(_UNK_02919f58 + 0x2919f18));
    uVar6 = uStack_20;
  }
  return uVar6;
}



// ===== FAT.ActivityFishing.<>c__DisplayClass110_0$$.ctor RVA 0x2909f5c =====

void FUN_02919f5c(void)

{
  return;
}



// ===== FAT.ActivityFishing$$GetFishMaxStarRequireCount RVA 0x2909f64 =====

/* WARNING: Removing unreachable block (ram,0x0291a32c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02919f64(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0x603c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x603c,0);
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
    iStack_30 = iStack_48;
    iStack_2c = uStack_44;
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
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  pcVar8 = (char *)(_UNK_0291a408 + 0x2919fec);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0291a40c + 0x291a000));
    func_0x01384978(*(undefined4 *)(_UNK_0291a410 + 0x291a00c));
    func_0x01384978(*(undefined4 *)(_UNK_0291a414 + 0x291a018));
    func_0x01384978(*(undefined4 *)(_UNK_0291a418 + 0x291a024));
    func_0x01384978(*(undefined4 *)(_UNK_0291a41c + 0x291a030));
    func_0x01384978(*(undefined4 *)(_UNK_0291a420 + 0x291a03c));
    func_0x01384978(*(undefined4 *)(_UNK_0291a424 + 0x291a048));
    func_0x01384978(*(undefined4 *)(_UNK_0291a428 + 0x291a054));
    func_0x01384978(*(undefined4 *)(_UNK_0291a42c + 0x291a060));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x603d,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0291a430 + 0x291a0c4));
    func_0x04874ed4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 8) = param_2;
    uVar9 = FUN_02913dd4(param_1);
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_0291a434 + 0x291a0fc));
    func_0x041cf488(uVar5,iVar1,**(undefined4 **)(_UNK_0291a438 + 0x291a118),0);
    iVar1 = func_0x02fb9768(uVar9,uVar5,**(undefined4 **)(_UNK_0291a43c + 0x291a130));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_0291a440 + 0x291a164));
    piVar10 = *(int **)(_UNK_0291a444 + 0x291a184);
    piVar11 = *(int **)(_UNK_0291a448 + 0x291a18c);
    iVar1 = 0;
    do {
      iVar7 = iVar1;
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_0291a1e8;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_0291a1e8:
      iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar1 == 0) break;
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_0291a44c + 0x291a220)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_0291a268;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0291a44c + 0x291a220),0);
LAB_0291a268:
      uVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (*(int *)(*piVar11 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02566088(&iStack_30,uVar9,0);
      iVar1 = iStack_2c + iVar7;
    } while (iStack_30 <= 0x7fffffff);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_0291a450 + 0x291a2cc)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
            goto LAB_0291a314;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0291a450 + 0x291a2cc),0);
LAB_0291a314:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x603d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_38 = 0;
    iVar7 = func_0x02180128(iVar1,param_1,param_2,0x7fffffff);
  }
  return iVar7;
}



// ===== FAT.ActivityFishing$$CalcFishStarRequireCount RVA 0x2909fcc =====

/* WARNING: Removing unreachable block (ram,0x0291a32c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02919fcc(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  int iStack_30;
  int iStack_2c;
  
  pcVar9 = (char *)(_UNK_0291a408 + 0x2919fec);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0291a40c + 0x291a000));
    func_0x01384978(*(undefined4 *)(_UNK_0291a410 + 0x291a00c));
    func_0x01384978(*(undefined4 *)(_UNK_0291a414 + 0x291a018));
    func_0x01384978(*(undefined4 *)(_UNK_0291a418 + 0x291a024));
    func_0x01384978(*(undefined4 *)(_UNK_0291a41c + 0x291a030));
    func_0x01384978(*(undefined4 *)(_UNK_0291a420 + 0x291a03c));
    func_0x01384978(*(undefined4 *)(_UNK_0291a424 + 0x291a048));
    func_0x01384978(*(undefined4 *)(_UNK_0291a428 + 0x291a054));
    func_0x01384978(*(undefined4 *)(_UNK_0291a42c + 0x291a060));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x603d,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0291a430 + 0x291a0c4));
    func_0x04874ed4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 8) = param_2;
    uVar3 = FUN_02913dd4(param_1);
    uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_0291a434 + 0x291a0fc));
    func_0x041cf488(uVar4,iVar1,**(undefined4 **)(_UNK_0291a438 + 0x291a118),0);
    iVar1 = func_0x02fb9768(uVar3,uVar4,**(undefined4 **)(_UNK_0291a43c + 0x291a130));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar5 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_0291a440 + 0x291a164));
    piVar10 = *(int **)(_UNK_0291a444 + 0x291a184);
    piVar11 = *(int **)(_UNK_0291a448 + 0x291a18c);
    iVar1 = 0;
    do {
      iVar2 = iVar1;
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar5;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == *piVar10) {
            puVar6 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
            goto LAB_0291a1e8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined4 *)func_0x014002dc(piVar5,*piVar10,0);
LAB_0291a1e8:
      iVar1 = (*(code *)*puVar6)(piVar5,puVar6[1]);
      if (iVar1 == 0) break;
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar5;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_0291a44c + 0x291a220)) {
            puVar6 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
            goto LAB_0291a268;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_0291a44c + 0x291a220),0);
LAB_0291a268:
      uVar3 = (*(code *)*puVar6)(piVar5,puVar6[1]);
      if (*(int *)(*piVar11 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02566088(&iStack_30,uVar3,0);
      iVar1 = iStack_2c + iVar2;
    } while (iStack_30 <= param_3);
    if (piVar5 != (int *)0x0) {
      iVar1 = *piVar5;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_0291a450 + 0x291a2cc)) {
            puVar6 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
            goto LAB_0291a314;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_0291a450 + 0x291a2cc),0);
LAB_0291a314:
      (*(code *)*puVar6)(piVar5,puVar6[1]);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x603d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02180128(iVar1,param_1,param_2,param_3,0);
  }
  return iVar2;
}



// ===== FAT.ActivityFishing.<>c__DisplayClass112_0$$.ctor RVA 0x290a458 =====

void FUN_0291a458(void)

{
  return;
}



// ===== FAT.ActivityFishing$$GetFishMaxStar RVA 0x290a460 =====

/* WARNING: Removing unreachable block (ram,0x0291a828) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0291a460(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0x6043,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6043,0);
    if (iVar1 == 0) {
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
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar5,0,0);
    uVar8 = func_0x0245498c(&uStack_38,0,0);
    return uVar8;
  }
  iVar1 = 0x7fffffff;
  pcVar9 = (char *)(_UNK_0291a904 + 0x291a4e8);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0291a908 + 0x291a4fc));
    func_0x01384978(*(undefined4 *)(_UNK_0291a90c + 0x291a508));
    func_0x01384978(*(undefined4 *)(_UNK_0291a910 + 0x291a514));
    func_0x01384978(*(undefined4 *)(_UNK_0291a914 + 0x291a520));
    func_0x01384978(*(undefined4 *)(_UNK_0291a918 + 0x291a52c));
    func_0x01384978(*(undefined4 *)(_UNK_0291a91c + 0x291a538));
    func_0x01384978(*(undefined4 *)(_UNK_0291a920 + 0x291a544));
    func_0x01384978(*(undefined4 *)(_UNK_0291a924 + 0x291a550));
    func_0x01384978(*(undefined4 *)(_UNK_0291a928 + 0x291a55c));
    *pcVar9 = '\x01';
  }
  iVar7 = func_0x0229f06c(0x6040,0);
  if (iVar7 == 0) {
    iVar7 = func_0x01384be4(**(undefined4 **)(_UNK_0291a92c + 0x291a5c0));
    func_0x04874ed4(iVar7,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar7 + 8) = param_2;
    uVar8 = FUN_02913dd4(param_1);
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_0291a930 + 0x291a5f8));
    func_0x041cf488(uVar5,iVar7,**(undefined4 **)(_UNK_0291a934 + 0x291a614),0);
    iVar7 = func_0x02fb9768(uVar8,uVar5,**(undefined4 **)(_UNK_0291a938 + 0x291a62c));
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar7 + 0x30);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x03653608(iVar7,**(undefined4 **)(_UNK_0291a93c + 0x291a660));
    piVar10 = *(int **)(_UNK_0291a940 + 0x291a680);
    piVar11 = *(int **)(_UNK_0291a944 + 0x291a688);
    piVar12 = *(int **)(_UNK_0291a948 + 0x291a690);
    uVar8 = 0;
LAB_0291a68c:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar7 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xc0);
          goto LAB_0291a6e8;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_0291a6e8:
    iVar7 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar7 != 0) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar7 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar11) {
            puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xc0);
            goto LAB_0291a75c;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_0291a75c:
      uVar5 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (*(int *)(*piVar12 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02566088(&uStack_30,uVar5,0);
      if (iStack_2c <= iVar1) {
        iVar1 = iVar1 - iStack_2c;
        uVar8 = uStack_30;
      }
      goto LAB_0291a68c;
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_0291a94c + 0x291a7c8)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
            goto LAB_0291a810;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0291a94c + 0x291a7c8),0);
LAB_0291a810:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6040,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_38 = 0;
    uVar8 = func_0x02180128(iVar1,param_1,param_2,0x7fffffff);
  }
  return uVar8;
}



// ===== FAT.ActivityFishing$$CalcFishStarByCount RVA 0x290a4c8 =====

/* WARNING: Removing unreachable block (ram,0x0291a828) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0291a4c8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar8 = (char *)(_UNK_0291a904 + 0x291a4e8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0291a908 + 0x291a4fc));
    func_0x01384978(*(undefined4 *)(_UNK_0291a90c + 0x291a508));
    func_0x01384978(*(undefined4 *)(_UNK_0291a910 + 0x291a514));
    func_0x01384978(*(undefined4 *)(_UNK_0291a914 + 0x291a520));
    func_0x01384978(*(undefined4 *)(_UNK_0291a918 + 0x291a52c));
    func_0x01384978(*(undefined4 *)(_UNK_0291a91c + 0x291a538));
    func_0x01384978(*(undefined4 *)(_UNK_0291a920 + 0x291a544));
    func_0x01384978(*(undefined4 *)(_UNK_0291a924 + 0x291a550));
    func_0x01384978(*(undefined4 *)(_UNK_0291a928 + 0x291a55c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6040,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0291a92c + 0x291a5c0));
    func_0x04874ed4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 8) = param_2;
    uVar2 = FUN_02913dd4(param_1);
    uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_0291a930 + 0x291a5f8));
    func_0x041cf488(uVar3,iVar1,**(undefined4 **)(_UNK_0291a934 + 0x291a614),0);
    iVar1 = func_0x02fb9768(uVar2,uVar3,**(undefined4 **)(_UNK_0291a938 + 0x291a62c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar4 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_0291a93c + 0x291a660));
    piVar9 = *(int **)(_UNK_0291a940 + 0x291a680);
    piVar10 = *(int **)(_UNK_0291a944 + 0x291a688);
    piVar11 = *(int **)(_UNK_0291a948 + 0x291a690);
    uVar2 = 0;
LAB_0291a68c:
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar4;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar9) {
          puVar5 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_0291a6e8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar9,0);
LAB_0291a6e8:
    iVar1 = (*(code *)*puVar5)(piVar4,puVar5[1]);
    if (iVar1 != 0) {
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar4;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar10) {
            puVar5 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
            goto LAB_0291a75c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar10,0);
LAB_0291a75c:
      uVar3 = (*(code *)*puVar5)(piVar4,puVar5[1]);
      if (*(int *)(*piVar11 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02566088(&uStack_30,uVar3,0);
      if (iStack_2c <= param_3) {
        param_3 = param_3 - iStack_2c;
        uVar2 = uStack_30;
      }
      goto LAB_0291a68c;
    }
    if (piVar4 != (int *)0x0) {
      iVar1 = *piVar4;
      uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_0291a94c + 0x291a7c8)) {
            puVar5 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_0291a810;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0291a94c + 0x291a7c8),0);
LAB_0291a810:
      (*(code *)*puVar5)(piVar4,puVar5[1]);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6040,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02180128(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.ActivityFishing.<>c__DisplayClass114_0$$.ctor RVA 0x290a954 =====

void FUN_0291a954(void)

{
  return;
}



// ===== FAT.ActivityFishing$$ConvertFish RVA 0x290a95c =====

/* WARNING: Removing unreachable block (ram,0x0291ae20) */
/* WARNING: Removing unreachable block (ram,0x0291ae14) */
/* WARNING: Removing unreachable block (ram,0x0291ae78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0291a95c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
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
  
  pcVar9 = (char *)(_UNK_0291af60 + 0x291a978);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0291af64 + 0x291a98c));
    func_0x01384978(*(undefined4 *)(_UNK_0291af68 + 0x291a998));
    func_0x01384978(*(undefined4 *)(_UNK_0291af6c + 0x291a9a4));
    func_0x01384978(*(undefined4 *)(_UNK_0291af70 + 0x291a9b0));
    func_0x01384978(*(undefined4 *)(_UNK_0291af74 + 0x291a9bc));
    func_0x01384978(*(undefined4 *)(_UNK_0291af78 + 0x291a9c8));
    func_0x01384978(*(undefined4 *)(_UNK_0291af7c + 0x291a9d4));
    func_0x01384978(*(undefined4 *)(_UNK_0291af80 + 0x291a9e0));
    func_0x01384978(*(undefined4 *)(_UNK_0291af84 + 0x291a9ec));
    func_0x01384978(*(undefined4 *)(_UNK_0291af88 + 0x291a9f8));
    func_0x01384978(*(undefined4 *)(_UNK_0291af8c + 0x291aa04));
    func_0x01384978(*(undefined4 *)(_UNK_0291af90 + 0x291aa10));
    func_0x01384978(*(undefined4 *)(_UNK_0291af94 + 0x291aa1c));
    func_0x01384978(*(undefined4 *)(_UNK_0291af98 + 0x291aa28));
    func_0x01384978(*(undefined4 *)(_UNK_0291af9c + 0x291aa34));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6044,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6044,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0291afa0 + 0x291aa94));
  func_0x04874ed4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 8) = param_2;
  uVar10 = FUN_02913dd4(param_1);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_0291afa4 + 0x291aacc));
  func_0x041cf488(uVar5,iVar1,**(undefined4 **)(_UNK_0291afa8 + 0x291aae8),0);
  iVar1 = func_0x02fb9768(uVar10,uVar5,**(undefined4 **)(_UNK_0291afac + 0x291ab00));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x2c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_0291afb0 + 0x291ab34));
LAB_0291ab44:
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_0291afd0 + 0x291ab60)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_0291aba8;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0291afd0 + 0x291ab60),0);
LAB_0291aba8:
  iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  if (iVar1 != 0) {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_0291afb4 + 0x291abdc)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_0291ac24;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0291afb4 + 0x291abdc),0);
LAB_0291ac24:
    uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (*(int *)(**(int **)(_UNK_0291afb8 + 0x291ac44) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x02565a88(uVar10,0);
    iVar11 = *(int *)(param_1 + 0xdc);
    iVar8 = func_0x01c24918(0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar8 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar10 = *(undefined4 *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = **(int **)(_UNK_0291afbc + 0x291ac9c);
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = **(int **)(_UNK_0291afc0 + 0x291acc0);
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x260);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = **(undefined4 **)(_UNK_0291afc4 + 0x291ace0);
    uStack_2c = **(undefined4 **)(_UNK_0291afc8 + 0x291acec);
    uStack_34 = 0x21a;
    uStack_28 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uVar10 = func_0x01cdcbac(iVar8,uVar10,uVar5,uVar7);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar11 + 8);
    uVar4 = *(uint *)(iVar11 + 0xc);
    piVar6 = *(int **)(_UNK_0291afcc + 0x291ad4c);
    *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
    iVar8 = *piVar6;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (uVar4 < *(uint *)(iVar1 + 0xc)) {
      *(uint *)(iVar11 + 0xc) = uVar4 + 1;
      *(undefined4 *)(iVar1 + uVar4 * 4 + 0x10) = uVar10;
    }
    else {
      func_0x0328f170(iVar11,uVar10,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38))
      ;
    }
    goto LAB_0291ab44;
  }
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_0291afd4 + 0x291adb4)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_0291adfc;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0291afd4 + 0x291adb4),0);
LAB_0291adfc:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  if (*(int *)(**(int **)(_UNK_0291afd8 + 0x291ae34) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_0291afdc + 0x291ae50));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar8 = func_0x0229f06c(0x3f,0);
  if (iVar8 == 0) {
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  iVar8 = func_0x0229f13c(0x3f,0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar8 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar8 + 0x10),0);
  }
  func_0x01485278(&uStack_30,iVar1,0);
  iVar11 = *(int *)(iVar8 + 8);
  uVar10 = *(undefined4 *)(iVar8 + 0xc);
  iVar1 = *(int *)(iVar8 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar11,uVar10,&uStack_30,uVar5);
  return;
}



// ===== FAT.ActivityFishing.<>c__DisplayClass115_0$$.ctor RVA 0x290afe4 =====

void FUN_0291afe4(void)

{
  return;
}



// ===== FAT.ActivityFishing$$UpdateFishCaughtInfo RVA 0x290afec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0291afec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_0291b1d8 + 0x291b00c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0291b1dc + 0x291b024));
    func_0x01384978(*(undefined4 *)(_UNK_0291b1e0 + 0x291b030));
    func_0x01384978(*(undefined4 *)(_UNK_0291b1e4 + 0x291b03c));
    func_0x01384978(*(undefined4 *)(_UNK_0291b1e8 + 0x291b048));
    func_0x01384978(*(undefined4 *)(_UNK_0291b1ec + 0x291b054));
    func_0x01384978(*(undefined4 *)(_UNK_0291b1f0 + 0x291b060));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6047,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0291b1f4 + 0x291b0c8));
    func_0x04874ed4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_0291b1f8 + 0x291b0f0);
    iVar5 = *(int *)(param_1 + 0xb0);
    *(undefined4 *)(iVar1 + 8) = param_2;
    uVar3 = func_0x01384be4(*puVar2);
    func_0x035ac004(uVar3,iVar1,**(undefined4 **)(_UNK_0291b1fc + 0x291b114),0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x0443d93c(iVar5,uVar3,**(undefined4 **)(_UNK_0291b200 + 0x291b138));
    if (iVar5 < 0) {
      FUN_02914e0c(param_1,*(undefined4 *)(iVar1 + 8),param_3,param_4);
    }
    else {
      iVar6 = *(int *)(param_1 + 0xb0);
      uStack_2c = 0;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x03923edc(&uStack_30,*(undefined4 *)(iVar1 + 8),param_3,param_4,
                      **(undefined4 **)(_UNK_0291b204 + 0x291b160));
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x0443cbe8(iVar6,iVar5,uStack_30,uStack_2c,uStack_28,
                      **(undefined4 **)(_UNK_0291b208 + 0x291b1a8));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6047,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179c40(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ActivityFishing.<>c__DisplayClass116_0$$.ctor RVA 0x290b20c =====

void FUN_0291b20c(void)

{
  return;
}



// ===== FAT.ActivityFishing.<>c__DisplayClass118_0$$.ctor RVA 0x290b214 =====

void FUN_0291b214(void)

{
  return;
}



// ===== FAT.ActivityFishing.<>c__DisplayClass119_0$$.ctor RVA 0x290b21c =====

void FUN_0291b21c(void)

{
  return;
}



// ===== FAT.ActivityFishing$$get_OutputType RVA 0x290b224 =====

undefined4 FUN_0291b224(int param_1)

{
  return *(undefined4 *)(param_1 + 0xec);
}



// ===== FAT.ActivityFishing$$set_OutputType RVA 0x290b22c =====

void FUN_0291b22c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xec) = param_2;
  return;
}



// ===== FAT.ActivityFishing$$get_OutputMethod RVA 0x290b234 =====

undefined4 FUN_0291b234(int param_1)

{
  return *(undefined4 *)(param_1 + 0xf0);
}



// ===== FAT.ActivityFishing$$set_OutputMethod RVA 0x290b23c =====

void FUN_0291b23c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf0) = param_2;
  return;
}



// ===== FAT.ActivityFishing$$_IsEnergyMethod RVA 0x290b244 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0291b244(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
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
  
  iVar1 = func_0x0229f06c(0x5c2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c2,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4);
    uVar7 = func_0x0245496c(&uStack_30,0,0);
    return uVar7;
  }
  pcVar8 = (char *)(_UNK_02c05e40 + 0x2c05d5c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c05e44 + 0x2c05d70),1,0);
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5a9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5a9,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar4,0,0);
    uVar7 = func_0x0245496c(&uStack_38,0,0);
    return uVar7;
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02c05e48 + 0x2c05dd8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xe8);
        goto LAB_02c05e28;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02c05e48 + 0x2c05dd8),5);
LAB_02c05e28:
                    /* WARNING: Could not recover jumptable at 0x02c05e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*(code *)*puVar2)(param_1,1,puVar2[1]);
  return uVar7;
}



// ===== FAT.ActivityFishing$$FAT.IActivityOrderHandler.OnPreUpdate RVA 0x290b2a4 =====

undefined4 FUN_0291b2a4(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 unaff_r5;
  undefined4 uVar9;
  int *piVar10;
  uint *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint auStack_38 [3];
  uint uStack_2c;
  undefined4 uStack_28;
  
  puVar11 = auStack_38;
  pcVar8 = (char *)(iRam0291b5e0 + 0x291b2c4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(iRam0291b5e4 + 0x291b2dc));
    func_0x01384978(*(undefined4 *)(iRam0291b5e8 + 0x291b2e8));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x604b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x604b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    auStack_38[1] = 0;
    auStack_38[0] = param_4;
    uVar2 = func_0x021d2b64(iVar1,param_1,param_2,param_3);
    return uVar2;
  }
  if (param_1[0x33] == 0) {
    return 0;
  }
  uVar2 = func_0x02b449f8(param_1,0);
  iVar1 = func_0x01e4b758(param_2,uVar2,0);
  piVar10 = *(int **)(iRam0291b5ec + 0x291b380);
  iVar3 = *piVar10;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar10;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x01e4b23c(iVar3,param_2,0);
  if (iVar3 == 0) {
LAB_0291b418:
    iVar4 = param_1[0x33];
    iVar3 = iVar4;
    if (iVar4 == 0) {
      func_0x01384bf0();
      iVar3 = param_1[0x33];
      bVar13 = iVar3 == 0;
      bVar12 = true;
      if (bVar13) {
        piVar10 = (int *)func_0x01384bf0();
        bVar14 = false;
        bVar15 = bVar12;
        if (bVar13) {
          bVar15 = true;
          piVar10 = (int *)(-0x3fffffcd - (!bVar12 + 0x291b5e8));
          bVar14 = piVar10 == (int *)0x0;
        }
        bVar13 = false;
        bVar12 = bVar15;
        if (bVar14) {
          bVar12 = 0xa0000001 < param_4 || param_4 + 0x5fffffff < (uint)bVar15;
          puVar11 = (uint *)(param_4 - (!bVar15 + 0xa0000001));
          bVar13 = param_4 == !bVar15 + 0xa0000001;
        }
        bVar14 = false;
        bVar15 = bVar12;
        if (bVar13) {
          bVar15 = 0x80000001 < param_4 || param_4 + 0x7fffffff < (uint)bVar12;
          puVar11 = (uint *)(param_4 - (!bVar12 + 0x80000001));
          bVar14 = param_4 == !bVar12 + 0x80000001;
        }
        bVar13 = false;
        bVar12 = bVar15;
        if (bVar14) {
          bVar12 = 0x8000000c < param_4 || param_4 + 0x7ffffff4 < (uint)bVar15;
          puVar11 = (uint *)(param_4 - (!bVar15 + 0x8000000c));
          bVar13 = param_4 == !bVar15 + 0x8000000c;
        }
        if (bVar13) {
          puVar11 = (uint *)(param_4 - !bVar12);
        }
        *(undefined4 *)((int)puVar11 + -4) = 0x291b5e0;
        *(int **)((int)puVar11 + -8) = param_1;
        *(undefined4 *)((int)puVar11 + -0xc) = unaff_r5;
        puVar5 = (undefined4 *)((int)puVar11 + -0x10);
        *puVar5 = 0;
        iVar3 = func_0x0229f06c(0x604c,0);
        if (iVar3 != 0) {
          iVar3 = func_0x0229f13c(0x604c,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar2 = *puVar5;
          uVar9 = *(undefined4 *)((int)puVar11 + -0xc);
          *(undefined4 *)((int)puVar11 + -4) = *(undefined4 *)((int)puVar11 + -4);
          *(int *)((int)puVar11 + -8) = iVar1;
          *(uint *)((int)puVar11 + -0xc) = param_4;
          *puVar5 = param_3;
          *(undefined4 *)((int)puVar11 + -0x14) = uVar9;
          *(undefined4 *)((int)puVar11 + -0x18) = uVar2;
          *(undefined4 *)((int)puVar11 + -0x30) = 0;
          *(undefined4 *)((int)puVar11 + -0x2c) =
               *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          *(undefined4 *)((int)puVar11 + -0x28) =
               *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          *(undefined4 *)((int)puVar11 + -0x24) =
               *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          *(undefined4 *)((int)puVar11 + -0x20) = 0;
          func_0x0245494c((undefined4 *)((int)puVar11 + -0x48),0,0);
          iVar1 = *(int *)(iVar3 + 0x10);
          *(undefined4 *)((int)puVar11 + -0x30) = *(undefined4 *)((int)puVar11 + -0x48);
          *(undefined4 *)((int)puVar11 + -0x2c) = *(undefined4 *)((int)puVar11 + -0x44);
          *(undefined4 *)((int)puVar11 + -0x28) = *(undefined4 *)((int)puVar11 + -0x40);
          *(undefined4 *)((int)puVar11 + -0x24) = *(undefined4 *)((int)puVar11 + -0x3c);
          *(undefined4 *)((int)puVar11 + -0x20) = *(undefined4 *)((int)puVar11 + -0x38);
          if (iVar1 != 0) {
            func_0x01485278((undefined1 *)((int)puVar11 + -0x30),iVar1,0);
          }
          func_0x01485278((undefined1 *)((int)puVar11 + -0x30),piVar10,0);
          iVar4 = *(int *)(iVar3 + 8);
          uVar2 = *(undefined4 *)(iVar3 + 0xc);
          iVar1 = *(int *)(iVar3 + 0x10);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          uVar9 = 2;
          if (iVar1 == 0) {
            uVar9 = 1;
          }
          *(undefined4 *)((int)puVar11 + -0x50) = 0;
          *(undefined4 *)((int)puVar11 + -0x4c) = 0;
          func_0x0245495c(iVar4,uVar2,(undefined1 *)((int)puVar11 + -0x30),uVar9);
          uVar2 = func_0x0245496c((undefined1 *)((int)puVar11 + -0x30),0,0);
          return uVar2;
        }
                    /* WARNING: Could not recover jumptable at 0x0291b654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*piVar10 + 0x108))(piVar10,*(undefined4 *)(*piVar10 + 0x10c));
        return uVar2;
      }
    }
    uVar9 = *(undefined4 *)(iVar3 + 0x28);
    uVar2 = *(undefined4 *)(iVar4 + 0x2c);
    iVar3 = *param_1;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(iRam0291b5f0 + 0x291b444)) {
          puVar5 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xf0);
          goto LAB_0291b498;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(param_1,**(int **)(iRam0291b5f0 + 0x291b444),6);
LAB_0291b498:
    auStack_38[0] = puVar5[1];
    iVar3 = (*(code *)*puVar5)(param_1,param_2,uVar2,uVar9);
    param_3 = 1;
    if (iVar3 == 0) {
      return 0;
    }
  }
  else {
    iVar3 = *piVar10;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar10;
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    param_3 = 0;
    iVar3 = func_0x01e4b2b0(iVar3,param_2,0);
    iVar4 = func_0x02b449f8(param_1,0);
    if (iVar3 != iVar4) goto LAB_0291b418;
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar3 = func_0x01e4b23c(0,param_2,0);
    if (iVar3 != 0) {
      func_0x01384bf0();
      goto LAB_0291b50c;
    }
  }
  else {
    iVar3 = func_0x01e4b23c(iVar1,param_2,0);
    if (iVar3 != 0) {
LAB_0291b50c:
      uVar2 = 0;
      iVar3 = func_0x01e4b2b0(iVar1,param_2,0);
      iVar4 = func_0x02b449f8(param_1,0);
      if (iVar3 == iVar4) goto LAB_0291b5bc;
    }
  }
  iVar3 = *piVar10;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar10;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4b3b8(&uStack_2c,iVar3,param_2,0);
  uVar2 = func_0x02b449f8(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  auStack_38[0] = uStack_2c;
  auStack_38[1] = 0;
  func_0x01e4ba84(iVar1,param_2,uVar2,uStack_28);
  uVar2 = 1;
LAB_0291b5bc:
  iVar1 = func_0x01f2a218(0);
  if (iVar1 != 0) {
    param_3 = uVar2;
  }
  return param_3;
}



// ===== FAT.ActivityFishing$$FAT.IBoardActivityOutput.IsValidForOrder RVA 0x290b5f4 =====

void FUN_0291b5f4(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x604c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x604c,0);
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
    func_0x0245496c(&uStack_30,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0291b654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  return;
}



// ===== FAT.ActivityFishing$$FAT.IBoardActivityOutput.GetFlyType RVA 0x290b658 =====

undefined4 FUN_0291b658(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x604d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x604d,0);
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
  return 0x27;
}



// ===== FAT.ActivityFishing$$FAT.IBoardActivityOutput.GetReasonString RVA 0x290b6ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0291b6ac(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_0291b74c + 0x291b6c0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0291b750 + 0x291b6d4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x604e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x604e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_0221b1d4 + 0x221b0f4);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0221b1d8 + 0x221b108),param_1,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0221b1dc + 0x221b1c4));
    return uVar6;
  }
  piVar3 = *(int **)(_UNK_0291b754 + 0x291b72c);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x254);
}



// ===== FAT.ActivityFishing$$FAT.IBoardActivityOutput.TrackOrderGetItem RVA 0x290b758 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0291b758(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_0291b8a4 + 0x291b778);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0291b8a8 + 0x291b790));
    func_0x01384978(*(undefined4 *)(_UNK_0291b8ac + 0x291b79c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x604f,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01dbb000(iVar1,0);
    uVar4 = 0;
    if (iVar1 != 0) {
      iVar1 = func_0x02139cf4(iVar1,0);
      uVar4 = 0;
      if (iVar1 != 0) {
        uStack_24 = 0;
        uStack_28 = 0;
        func_0x03507d38(&uStack_28,*(undefined4 *)(iVar1 + 8),
                        **(undefined4 **)(_UNK_0291b8b0 + 0x291b858));
        uVar4 = uStack_24;
      }
    }
    uVar2 = func_0x02157e88(param_2,0);
    func_0x019b550c(param_1,uVar4,param_2,uVar2,param_3,param_4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x604f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179c40(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ActivityFishing$$<>iFixBaseProxy_get_Visual RVA 0x290b8b4 =====

undefined4 FUN_0291b8b4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.ActivityFishing$$<>iFixBaseProxy_SetupFresh RVA 0x290b8bc =====

void FUN_0291b8bc(undefined4 param_1)

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



// ===== FAT.ActivityFishing$$<>iFixBaseProxy_WhenReset RVA 0x290b8c4 =====

void FUN_0291b8c4(undefined4 param_1)

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



// ===== FAT.ActivityFishing$$<>iFixBaseProxy_WhenEnd RVA 0x290b8cc =====

void FUN_0291b8cc(undefined4 param_1)

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



// ===== FAT.ActivityFishing.<>c$$.cctor RVA 0x290b8d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0291b8d4(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0291b92c + 0x291b8e4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0291b930 + 0x291b8f8));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0291b934 + 0x291b90c);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x04874ed4(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.ActivityFishing.<>c$$.ctor RVA 0x290b938 =====

void FUN_0291b938(void)

{
  return;
}



// ===== FAT.ActivityFishing.<>c$$<InitFish>b__92_0 RVA 0x290b940 =====

uint FUN_0291b940(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_3 + 0xc) <= *(int *)(param_2 + 0xc)) {
    return (uint)(*(int *)(param_3 + 0xc) < *(int *)(param_2 + 0xc));
  }
  return 0xffffffff;
}



// ===== FAT.ActivityFishing.<>c$$<FAT.Merge.IExternalOutput.TrySpawnItem>b__108_0 RVA 0x290b978 =====

undefined4 FUN_0291b978(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  return param_3;
}



// ===== FAT.ActivityFishing.<>c$$<GenerateFish>b__118_0 RVA 0x290b980 =====

undefined4 FUN_0291b980(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  return param_3;
}



// ===== FAT.ActivityFishing.<>c__DisplayClass110_0$$<GetFishCaughtCount>b__0 RVA 0x290b988 =====

bool FUN_0291b988(int param_1,int param_2)

{
  return param_2 == *(int *)(param_1 + 8);
}



// ===== FAT.ActivityFishing.<>c__DisplayClass112_0$$<CalcFishStarRequireCount>b__0 RVA 0x290b99c =====

bool FUN_0291b99c(int param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(int *)(param_2 + 0xc) == *(int *)(param_1 + 8);
}



// ===== FAT.ActivityFishing.<>c__DisplayClass114_0$$<CalcFishStarByCount>b__0 RVA 0x290b9cc =====

bool FUN_0291b9cc(int param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(int *)(param_2 + 0xc) == *(int *)(param_1 + 8);
}



// ===== FAT.ActivityFishing.<>c__DisplayClass115_0$$<ConvertFish>b__0 RVA 0x290b9fc =====

bool FUN_0291b9fc(int param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(int *)(param_2 + 0xc) == *(int *)(param_1 + 8);
}



// ===== FAT.ActivityFishing.<>c__DisplayClass116_0$$<UpdateFishCaughtInfo>b__0 RVA 0x290ba2c =====

bool FUN_0291ba2c(int param_1,int param_2)

{
  return param_2 == *(int *)(param_1 + 8);
}



// ===== FAT.ActivityFishing.<>c__DisplayClass118_0$$<GenerateFish>b__1 RVA 0x290ba40 =====

bool FUN_0291ba40(int param_1,int param_2)

{
  return param_2 == *(int *)(param_1 + 8);
}



// ===== FAT.ActivityFishing.<>c__DisplayClass119_0$$<CollectAllBoardReward>b__0 RVA 0x290ba54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0291ba54(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iStack_20;
  int iStack_1c;
  
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  pcVar6 = (char *)(_UNK_02172c2c + 0x2172a00);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02172c30 + 0x2172a14),uVar4,uVar5,0);
    func_0x01384978(*(undefined4 *)(_UNK_02172c34 + 0x2172a20));
    *pcVar6 = '\x01';
  }
  iStack_1c = 0;
  iStack_20 = 0;
  iVar1 = func_0x0229f06c(0x6029,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6029,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_2,uVar4,uVar5,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02feb690(param_2,&iStack_1c,0,**(undefined4 **)(_UNK_02172c38 + 0x2172aa4));
  iVar1 = iStack_1c;
  if (iVar2 != 0) {
    if (iStack_1c == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0211d748(iVar1,0);
    if (((iVar1 == 1) && (iStack_1c != 0)) && (iVar1 = func_0x0211dc48(iStack_1c,0), iVar1 != 0)) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0210e2d4(param_2,0);
      func_0x02172c40(uVar4,uVar3,1);
      iVar1 = iStack_1c;
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x0211d680(iVar1,0);
      iVar1 = iStack_1c;
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0211d6e4(iVar1,0);
      goto LAB_02172c14;
    }
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02feb690(param_2,&iStack_20,0,**(undefined4 **)(_UNK_02172c3c + 0x2172b7c));
  iVar1 = iStack_20;
  if (iVar2 == 0) {
    return;
  }
  if (iStack_20 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x021372e0(iVar1,0);
  if (iVar1 != 3) {
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x0210e2d4(param_2,0);
  func_0x02172c40(uVar4,uVar3,1);
  iVar1 = iStack_20;
  if (iStack_20 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x02137218(iVar1,0);
  iVar1 = iStack_20;
  if (iStack_20 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x0213727c(iVar1,0);
LAB_02172c14:
  func_0x02172c40(uVar5,uVar4,uVar3);
  return;
}



// ===== FAT.ActivityFishing.<>c__DisplayClass98_0$$<RefreshMilestone>b__0 RVA 0x290ba6c =====

bool FUN_0291ba6c(int param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(int *)(param_2 + 0xc) == *(int *)(param_1 + 8);
}


