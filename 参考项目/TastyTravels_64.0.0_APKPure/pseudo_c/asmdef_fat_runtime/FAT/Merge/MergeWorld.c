/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.MergeWorld$$get_activeBoard RVA 0x2129cf4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02139cf4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x142,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x142,0);
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
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== FAT.Merge.MergeWorld$$OnJumpCDItemExpired RVA 0x212a290 =====

uint FUN_0213a290(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5e68,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e68,0);
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
  iVar1 = FUN_02139cf4(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_020dfd3c(iVar1,param_2,0);
  if (iVar1 != 0) {
    func_0x021467e8(param_1,iVar1,0xd);
  }
  return (uint)(iVar1 != 0);
}



// ===== FAT.Merge.MergeWorld$$get_rewardListUnreadCount RVA 0x2130c7c =====

undefined4 FUN_02140c7c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb440,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb440,0);
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
  return *(undefined4 *)(param_1 + 0x94);
}



// ===== FAT.Merge.MergeWorld$$get_lastActiveTime RVA 0x2130cd0 =====

undefined4 FUN_02140cd0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb441,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb441,0);
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
  return *(undefined4 *)(param_1 + 0x80);
}



// ===== FAT.Merge.MergeWorld$$get_lastTickMilli RVA 0x2130d24 =====

int FUN_02140d24(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5c6d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c6d,0);
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
    iVar1 = func_0x0245499c(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x80);
  iVar3 = *(int *)(param_1 + 0x84);
  if ((int)-(iVar3 + (uint)(iVar1 != 0)) < 0 !=
      (SBORROW4(0,iVar3) != SBORROW4(-iVar3,(uint)(iVar1 != 0)))) {
    return iVar1 * 1000;
  }
  return *(int *)(param_1 + 0x78);
}



// ===== FAT.Merge.MergeWorld$$add_onCollectBonus RVA 0x2130da0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02140da0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_02140e44 + 0x2140db8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02140e48 + 0x2140dcc));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_02140e4c + 0x2140de4);
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



// ===== FAT.Merge.MergeWorld$$remove_onCollectBonus RVA 0x2130e50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02140e50(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_02140ef4 + 0x2140e68);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02140ef8 + 0x2140e7c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_02140efc + 0x2140e94);
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



// ===== FAT.Merge.MergeWorld$$add_onCollectTapBonus RVA 0x2130f00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02140f00(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_02140fa4 + 0x2140f18);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02140fa8 + 0x2140f2c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_02140fac + 0x2140f44);
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



// ===== FAT.Merge.MergeWorld$$remove_onCollectTapBonus RVA 0x2130fb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02140fb0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_02141054 + 0x2140fc8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02141058 + 0x2140fdc));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_0214105c + 0x2140ff4);
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



// ===== FAT.Merge.MergeWorld$$add_onRewardListChange RVA 0x2131060 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02141060(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_02141104 + 0x2141078);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02141108 + 0x214108c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_0214110c + 0x21410a4);
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



// ===== FAT.Merge.MergeWorld$$remove_onRewardListChange RVA 0x2131110 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02141110(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_021411b4 + 0x2141128);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021411b8 + 0x214113c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_021411bc + 0x2141154);
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



// ===== FAT.Merge.MergeWorld$$add_onRewardListUnreadChange RVA 0x21311c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021411c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_02141254 + 0x21411d8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02141258 + 0x21411ec));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_0214125c + 0x2141204);
  iVar1 = *(int *)(param_1 + 0x18);
  do {
    piVar2 = (int *)func_0x024507e8(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_02141234:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_02141234;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0x18),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.Merge.MergeWorld$$remove_onRewardListUnreadChange RVA 0x2131260 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02141260(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_021412f4 + 0x2141278);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021412f8 + 0x214128c));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_021412fc + 0x21412a4);
  iVar1 = *(int *)(param_1 + 0x18);
  do {
    piVar2 = (int *)func_0x024507f8(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_021412d4:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_021412d4;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0x18),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.Merge.MergeWorld$$add_onChestWaitFinish RVA 0x2131300 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02141300(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_021413a4 + 0x2141318);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021413a8 + 0x214132c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_021413ac + 0x2141344);
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



// ===== FAT.Merge.MergeWorld$$remove_onChestWaitFinish RVA 0x21313b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021413b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_02141454 + 0x21413c8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02141458 + 0x21413dc));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_0214145c + 0x21413f4);
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



// ===== FAT.Merge.MergeWorld$$add_onChestWaitStart RVA 0x2131460 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02141460(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_02141504 + 0x2141478);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02141508 + 0x214148c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_0214150c + 0x21414a4);
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



// ===== FAT.Merge.MergeWorld$$remove_onChestWaitStart RVA 0x2131510 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02141510(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_021415b4 + 0x2141528);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021415b8 + 0x214153c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_021415bc + 0x2141554);
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



// ===== FAT.Merge.MergeWorld$$add_onSelledItemChange RVA 0x21315c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021415c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_02141664 + 0x21415d8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02141668 + 0x21415ec));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_0214166c + 0x2141604);
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



// ===== FAT.Merge.MergeWorld$$remove_onSelledItemChange RVA 0x2131670 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02141670(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_02141714 + 0x2141688);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02141718 + 0x214169c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_0214171c + 0x21416b4);
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



// ===== FAT.Merge.MergeWorld$$add_onItemEvent RVA 0x2131720 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02141720(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_021417c4 + 0x2141738);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021417c8 + 0x214174c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_021417cc + 0x2141764);
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



// ===== FAT.Merge.MergeWorld$$remove_onItemEvent RVA 0x21317d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021417d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_02141874 + 0x21417e8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02141878 + 0x21417fc));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_0214187c + 0x2141814);
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



// ===== FAT.Merge.MergeWorld$$get_inventory RVA 0x2131880 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02141880(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x146f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x146f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021cb090 + 0x21cafb0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021cb094 + 0x21cafc4),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021cb098 + 0x21cb080));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x50);
}



// ===== FAT.Merge.MergeWorld$$get_configVersion RVA 0x21318d4 =====

undefined4 FUN_021418d4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x22e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x22e,0);
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
  return *(undefined4 *)(param_1 + 0x90);
}



// ===== FAT.Merge.MergeWorld$$get_orderBox RVA 0x2131928 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02141928(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x14aa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x14aa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021cc060 + 0x21cbf80);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021cc064 + 0x21cbf94),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021cc068 + 0x21cc050));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x54);
}



// ===== FAT.Merge.MergeWorld$$get_jumpCD RVA 0x213197c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0214197c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x252,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x252,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0218031c + 0x218023c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02180320 + 0x2180250),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02180324 + 0x218030c));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x58);
}



// ===== FAT.Merge.MergeWorld$$get_tokenMulti RVA 0x21319d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021419d0(int param_1)

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
  
  iVar1 = func_0x0229f06c(599,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(599,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02180424 + 0x2180344);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02180428 + 0x2180358),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0218042c + 0x2180414));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x5c);
}



// ===== FAT.Merge.MergeWorld$$get_rewardStagingArea RVA 0x2131a24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02141a24(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9ac1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ac1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02279ef8 + 0x2279e18);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02279efc + 0x2279e2c),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02279f00 + 0x2279ee8));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x60);
}



// ===== FAT.Merge.MergeWorld$$get_girdReward RVA 0x2131a78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02141a78(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x164b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x164b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021d0ce0 + 0x21d0c00);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021d0ce4 + 0x21d0c14),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021d0ce8 + 0x21d0cd0));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 100);
}



// ===== FAT.Merge.MergeWorld$$get_currentWaitChest RVA 0x2131acc =====

undefined4 FUN_02141acc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x25c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x25c,0);
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



// ===== FAT.Merge.MergeWorld$$get_currentWaitChestTime RVA 0x2131b20 =====

undefined4 FUN_02141b20(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5e77,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e77,0);
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



// ===== FAT.Merge.MergeWorld$$get_undoItem RVA 0x2131b74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02141b74(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ee0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ee0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02180ccc + 0x2180bec);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02180cd0 + 0x2180c00),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02180cd4 + 0x2180cbc));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x88);
}



// ===== FAT.Merge.MergeWorld$$get_nextReward RVA 0x2131bc8 =====

undefined4 FUN_02141bc8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5d83,0);
  if (iVar1 == 0) {
    param_1 = func_0x02141c38(param_1);
    if (param_1 == 0) {
      return 0;
    }
    iVar1 = func_0x0229f06c(0x246,0);
    if (iVar1 == 0) {
      return *(undefined4 *)(param_1 + 0xc);
    }
    iVar1 = func_0x0229f13c(0x246,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5d83,0);
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



// ===== FAT.Merge.MergeWorld$$get_nextRewardItem RVA 0x2131c38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02141c38(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02141d0c + 0x2141c4c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02141d10 + 0x2141c60));
    func_0x01384978(*(undefined4 *)(_UNK_02141d14 + 0x2141c6c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1b18,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1b18,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02180ccc + 0x2180bec);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02180cd0 + 0x2180c00),param_1,0);
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
    uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02180cd4 + 0x2180cbc));
    return uVar6;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(int *)(iVar1 + 0xc) - 1;
    if (*(uint *)(iVar1 + 0xc) <= uVar2) {
      func_0x0484c9cc(0,uVar2,**(undefined4 **)(_UNK_02141d18 + 0x2141cf4));
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar2) {
      func_0x01384bf4();
    }
    return *(undefined4 *)(iVar1 + uVar2 * 4 + 0x10);
  }
  return 0;
}



// ===== FAT.Merge.MergeWorld$$get_rewardCount RVA 0x2131d1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02141d1c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_02141da8 + 0x2141d30);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02141dac + 0x2141d44));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x2ae,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2ae,0);
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
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0xc);
}



// ===== FAT.Merge.MergeWorld$$get_dataTrackName RVA 0x2131db0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02141db0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9d49,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d49,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 8);
}



// ===== FAT.Merge.MergeWorld$$get_currentTracer RVA 0x2131e14 =====

undefined4 FUN_02141e14(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ===== FAT.Merge.MergeWorld$$set_currentTracer RVA 0x2131e1c =====

void FUN_02141e1c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// ===== FAT.Merge.MergeWorld$$get_currentOrderHelper RVA 0x2131e24 =====

undefined4 FUN_02141e24(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ===== FAT.Merge.MergeWorld$$set_currentOrderHelper RVA 0x2131e2c =====

void FUN_02141e2c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// ===== FAT.Merge.MergeWorld$$get_activityHandlers RVA 0x2131e34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02141e34(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9e47,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e47,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02287530 + 0x2287450);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02287534 + 0x2287464),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02287538 + 0x2287520));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0xa0);
}



// ===== FAT.Merge.MergeWorld$$get_isGiftboxUsable RVA 0x2131e88 =====

uint FUN_02141e88(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7f0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7f0,0);
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
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return (uint)(*(char *)(iVar1 + 0xa1) == '\0');
}



// ===== FAT.Merge.MergeWorld$$get_isEquivalentToMain RVA 0x2131ef4 =====

uint FUN_02141ef4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x144,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x144,0);
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
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return (uint)*(byte *)(iVar1 + 0xa0);
}



// ===== FAT.Merge.MergeWorld$$BindTracer RVA 0x2131f58 =====

void FUN_02141f58(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5bb9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5bb9,0);
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
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// ===== FAT.Merge.MergeWorld$$BindOrderHelper RVA 0x2131fb4 =====

void FUN_02141fb4(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x9d4a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d4a,0);
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
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// ===== FAT.Merge.MergeWorld$$FillMergeBonusHandler RVA 0x2132010 =====

/* WARNING: Removing unreachable block (ram,0x032907dc) */
/* WARNING: Removing unreachable block (ram,0x032907ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02142010(int param_1,int *param_2)

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
  
  pcVar12 = (char *)(_UNK_021420f8 + 0x2142028);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021420fc + 0x214203c));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9ea6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ea6,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01cc0100(iVar1,6,0);
  if (iVar1 == 0) {
    return;
  }
  piVar10 = *(int **)(param_1 + 0x38);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar6 = param_2[3];
  iVar1 = *(int *)(*(int *)(*(int *)(**(int **)(_UNK_02142100 + 0x21420ec) + 0x10) + 0x60) + 0x48);
  pcVar12 = (char *)(_UNK_032908e8 + 0x3290348);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_032908ec + 0x3290360));
    func_0x01384978(*(undefined4 *)(_UNK_032908f0 + 0x329036c));
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
            goto LAB_03290618;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar10,iVar11,0);
LAB_03290618:
      piVar10 = (int *)(*(code *)*puVar4)(piVar10,puVar4[1]);
      piVar2 = *(int **)(_UNK_032908f4 + 0x3290638);
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
              goto LAB_03290690;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar10,*piVar2,0);
LAB_03290690:
        iVar11 = (*(code *)*puVar4)(piVar10,puVar4[1]);
        if (iVar11 == 0) goto LAB_0329075c;
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
              goto LAB_03290724;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar10,iVar11,0);
LAB_03290724:
        uVar13 = (*(code *)*puVar4)(piVar10,puVar4[1]);
        func_0x032900e0(param_2,uVar6,uVar13,
                        *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xa4));
        uVar6 = uVar6 + 1;
      } while( true );
    }
    func_0x032910b0(param_2,piVar10,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x20))
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
          goto LAB_032904c0;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar11,0);
LAB_032904c0:
    iVar11 = (*(code *)*puVar4)(piVar2,puVar4[1]);
    if (0 < iVar11) {
      func_0x0328f754(param_2,param_2[3] + iVar11,
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
              goto LAB_032905e4;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,5);
LAB_032905e4:
        (*(code *)*puVar4)(piVar2,iVar3,uVar6,puVar4[1]);
      }
      param_2[3] = param_2[3] + iVar11;
    }
  }
LAB_0329080c:
  param_2[4] = param_2[4] + 1;
  return;
LAB_0329075c:
  if (piVar10 != (int *)0x0) {
    iVar1 = *piVar10;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_032908f8 + 0x329077c)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_032907c4;
        }
        uVar6 = uVar6 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_032908f8 + 0x329077c),0);
LAB_032907c4:
    (*(code *)*puVar4)(piVar10,puVar4[1]);
  }
  goto LAB_0329080c;
}



// ===== FAT.Merge.MergeWorld$$RegisterActivityHandler RVA 0x2132104 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02142104(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
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
  
  pcVar9 = (char *)(_UNK_0214219c + 0x214211c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021421a0 + 0x2142130));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5bec,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5bec,0);
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
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    uVar10 = func_0x0245495c(iVar8,uVar10,&uStack_38,uVar6,0,0);
    return uVar10;
  }
  iVar1 = **(int **)(_UNK_021421a4 + 0x2142190);
  piVar2 = *(int **)(param_1 + 0xa0);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  uVar10 = 0;
  if (piVar2 != (int *)0x0) {
    iVar8 = **(int **)(iVar1 + 0x1c);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = func_0x014001f0(iVar8);
    }
    iVar3 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar8) {
          puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xe0);
          goto LAB_02f625c8;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar8,4);
LAB_02f625c8:
    iVar8 = (*(code *)*puVar4)(piVar2,param_2,puVar4[1]);
    if (iVar8 == 0) {
      iVar1 = **(int **)(iVar1 + 0x1c);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0(iVar1);
      }
      iVar8 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar1) {
            puVar4 = (undefined4 *)(iVar8 + *piVar7 * 8 + 0xd0);
            goto LAB_02f62650;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,2);
LAB_02f62650:
      (*(code *)*puVar4)(piVar2,param_2,puVar4[1]);
      uVar10 = 1;
    }
  }
  return uVar10;
}



// ===== FAT.Merge.MergeWorld$$UnregisterActivityHandler RVA 0x21321a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_021421a8(int param_1,undefined4 param_2)

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
  undefined4 uStack_18;
  
  pcVar5 = (char *)(_UNK_02142250 + 0x21421c0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02142254 + 0x21421d4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5b56,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xa0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = *(undefined4 *)
                 (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(**(int **)(_UNK_02142258 + 0x2142244)
                                                              + 0x10) + 0x60) + 0x5c) + 0x10) + 0x60
                          ) + 0xa0);
    uVar2 = func_0x030ffc18(*(undefined4 *)(iVar1 + 8),param_2,0,*(undefined4 *)(iVar1 + 0xc));
    if (-1 < (int)uVar2) {
      func_0x03290bd4(iVar1,uVar2);
    }
    return ~uVar2 >> 0x1f;
  }
  iVar1 = func_0x0229f13c(0x5b56,0);
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
  uVar2 = func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
  return uVar2;
}



// ===== FAT.Merge.MergeWorld$$GetInterlaceRandomForId RVA 0x213225c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0214225c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_02142634 + 0x214227c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02142638 + 0x2142290));
    func_0x01384978(*(undefined4 *)(_UNK_0214263c + 0x214229c));
    func_0x01384978(*(undefined4 *)(_UNK_02142640 + 0x21422a8));
    func_0x01384978(*(undefined4 *)(_UNK_02142644 + 0x21422b4));
    func_0x01384978(*(undefined4 *)(_UNK_02142648 + 0x21422c0));
    func_0x01384978(*(undefined4 *)(_UNK_0214264c + 0x21422cc));
    func_0x01384978(*(undefined4 *)(_UNK_02142650 + 0x21422d8));
    func_0x01384978(*(undefined4 *)(_UNK_02142654 + 0x21422e4));
    *pcVar8 = '\x01';
  }
  iStack_2c = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0x5c53,0);
  if (iVar2 == 0) {
    iStack_28 = 0;
    piVar3 = (int *)func_0x021566f4(0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_02142658 + 0x2142378)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0x110);
          goto LAB_021423c0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02142658 + 0x2142378),10);
LAB_021423c0:
    iVar2 = (*(code *)*puVar4)(piVar3,param_2,puVar4[1]);
    iVar9 = *(int *)(param_1 + 0x98);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = func_0x03d66780(iVar9,param_2,&iStack_28,**(undefined4 **)(_UNK_0214265c + 0x21423fc));
    if (iVar9 == 0) {
      if (param_3 == 0xd) {
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x34);
        if (iVar2 != 0) {
          iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_02142660 + 0x214243c));
          func_0x02142674();
          piVar3 = *(int **)(_UNK_02142664 + 0x2142454);
          iVar5 = *piVar3;
          iStack_28 = iVar9;
          if (*(int *)(iVar5 + 0x74) == 0) {
            func_0x01384ab4();
            iVar5 = *piVar3;
          }
          iVar9 = **(int **)(iVar5 + 0x5c);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          func_0x0359c380(&uStack_38,iVar9,&iStack_2c,**(undefined4 **)(_UNK_02142668 + 0x2142494));
          iVar9 = 0;
          piVar3 = *(int **)(_UNK_0214266c + 0x21424ac);
          while( true ) {
            iVar5 = *(int *)(iVar2 + 0x1c);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            iVar11 = iStack_28;
            iVar1 = iStack_2c;
            if (*(int *)(iVar5 + 0xc) <= iVar9) break;
            if (iStack_2c == 0) {
              func_0x01384bf0();
            }
            iVar5 = *(int *)(iVar1 + 8);
            uVar6 = *(uint *)(iVar1 + 0xc);
            iVar11 = *piVar3;
            *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            if (uVar6 < *(uint *)(iVar5 + 0xc)) {
              *(uint *)(iVar1 + 0xc) = uVar6 + 1;
              *(int *)(iVar5 + uVar6 * 4 + 0x10) = iVar9;
            }
            else {
              func_0x0325970c(iVar1,iVar9,
                              *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
            }
            iVar9 = iVar9 + 1;
          }
          uVar10 = *(undefined4 *)(iVar2 + 0x28);
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          func_0x021427bc(iVar11,iVar1,uVar10);
          func_0x028c98a0(&uStack_38,0);
        }
      }
      iVar2 = iStack_28;
      if (iStack_28 == 0) {
        iStack_28 = 0;
      }
      else {
        iVar9 = *(int *)(param_1 + 0x98);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        func_0x03d6491c(iVar9,param_2,iVar2,**(undefined4 **)(_UNK_02142670 + 0x21425a0));
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5c53,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_28 = func_0x0223558c(iVar2,param_1,param_2,param_3,0);
  }
  return iStack_28;
}



// ===== FAT.Merge.MergeWorld$$GetRandomListForId RVA 0x2132c70 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02142c70(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  int aiStack_3c [4];
  int iStack_2c;
  int iStack_28;
  
  pcVar12 = (char *)(_UNK_021431a8 + 0x2142c90);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021431ac + 0x2142ca4));
    func_0x01384978(*(undefined4 *)(_UNK_021431b0 + 0x2142cb0));
    func_0x01384978(*(undefined4 *)(_UNK_021431b4 + 0x2142cbc));
    func_0x01384978(*(undefined4 *)(_UNK_021431b8 + 0x2142cc8));
    func_0x01384978(*(undefined4 *)(_UNK_021431bc + 0x2142cd4));
    func_0x01384978(*(undefined4 *)(_UNK_021431c0 + 0x2142ce0));
    func_0x01384978(*(undefined4 *)(_UNK_021431c4 + 0x2142cec));
    func_0x01384978(*(undefined4 *)(_UNK_021431c8 + 0x2142cf8));
    func_0x01384978(*(undefined4 *)(_UNK_021431cc + 0x2142d04));
    func_0x01384978(*(undefined4 *)(_UNK_021431d0 + 0x2142d10));
    func_0x01384978(*(undefined4 *)(_UNK_021431d4 + 0x2142d1c));
    func_0x01384978(*(undefined4 *)(_UNK_021431d8 + 0x2142d28));
    func_0x01384978(*(undefined4 *)(_UNK_021431dc + 0x2142d34));
    *pcVar12 = '\x01';
  }
  iStack_28 = 0;
  iStack_2c = 0;
  aiStack_3c[2] = 0;
  aiStack_3c[1] = 0;
  iVar2 = func_0x0229f06c(0x5c52,0);
  if (iVar2 == 0) {
    iVar13 = *(int *)(param_1 + 0x9c);
    iVar2 = param_2;
    if (param_3 == 7) {
      iVar2 = param_2 + -12000000;
    }
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar13 = func_0x03d66780(iVar13,iVar2,&iStack_28,**(undefined4 **)(_UNK_021431e0 + 0x2142dd4));
    if (iVar13 == 0) {
      piVar3 = (int *)func_0x021566f4(0);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar13 = *piVar3;
      uVar8 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_021431e4 + 0x2142e0c)) {
            puVar4 = (undefined4 *)(iVar13 + *piVar9 * 8 + 0x130);
            goto LAB_02142e54;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_021431e4 + 0x2142e0c),0xe);
LAB_02142e54:
      iVar13 = (*(code *)*puVar4)(piVar3,param_2,puVar4[1]);
      if (iVar13 != 0) {
        aiStack_3c[0] = param_2;
        uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_021431e8 + 0x2142e84),aiStack_3c);
        uVar5 = func_0x0244f6a0(**(undefined4 **)(_UNK_021431ec + 0x2142ea0),uVar5,0);
        iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_021431f0 + 0x2142eb4));
        func_0x02143214(iVar6,uVar5);
        piVar3 = *(int **)(_UNK_021431f4 + 0x2142ed0);
        iVar7 = *piVar3;
        iStack_28 = iVar6;
        if (*(int *)(iVar7 + 0x74) == 0) {
          func_0x01384ab4();
          iVar7 = *piVar3;
        }
        iVar6 = **(int **)(iVar7 + 0x5c);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0359c380(aiStack_3c + 1,iVar6,&iStack_2c,**(undefined4 **)(_UNK_021431f8 + 0x2142f18)
                       );
        iVar6 = 0;
        iVar7 = 1;
        while( true ) {
          iVar10 = *(int *)(iVar13 + 0x14);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar1 = iStack_2c;
          if (*(int *)(iVar10 + 0xc) <= iVar6) break;
          iVar10 = func_0x01384be4(**(undefined4 **)(_UNK_021431fc + 0x2142f54));
          func_0x0244f5a0(iVar10,0);
          iVar11 = *(int *)(iVar13 + 0x14);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar5 = func_0x0364c9b8(iVar11,iVar6,**(undefined4 **)(_UNK_02143200 + 0x2142f80));
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar13 + 0x18);
          *(undefined4 *)(iVar10 + 8) = uVar5;
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar5 = func_0x0364c9b8(iVar11,iVar7 + -1,**(undefined4 **)(_UNK_02143204 + 0x2142fbc));
          iVar11 = *(int *)(iVar13 + 0x18);
          *(undefined4 *)(iVar10 + 0xc) = uVar5;
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar5 = func_0x0364c9b8(iVar11,iVar7,**(undefined4 **)(_UNK_02143208 + 0x2142fe8));
          *(undefined4 *)(iVar10 + 0x10) = uVar5;
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar1 + 8);
          uVar8 = *(uint *)(iVar1 + 0xc);
          piVar3 = *(int **)(_UNK_0214320c + 0x2143024);
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          iVar14 = *piVar3;
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          if (uVar8 < *(uint *)(iVar11 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar8 + 1;
            *(int *)(iVar11 + uVar8 * 4 + 0x10) = iVar10;
          }
          else {
            func_0x0328f170(iVar1,iVar10,
                            *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38));
          }
          iVar7 = iVar7 + 2;
          iVar6 = iVar6 + 1;
        }
        if (iStack_2c == 0) {
          func_0x01384bf0();
        }
        iVar6 = iStack_28;
        iVar13 = iStack_2c;
        if (0 < *(int *)(iVar1 + 0xc)) {
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          func_0x02143384(iVar6,iVar13);
        }
        func_0x028c98a0(aiStack_3c + 1,0);
      }
      iVar13 = iStack_28;
      if (iStack_28 == 0) {
        iStack_28 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x9c);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x03d64944(iVar6,iVar2,iVar13,**(undefined4 **)(_UNK_02143210 + 0x21430f0));
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5c52,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_28 = func_0x02235458(iVar2,param_1,param_2,param_3,0);
  }
  return iStack_28;
}



// ===== FAT.Merge.MergeWorld$$.ctor RVA 0x2133488 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02143488(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined8 uVar14;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar7 = (char *)(_UNK_02143b9c + 0x21434a0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02143ba0 + 0x21434b4));
    func_0x01384978(*(undefined4 *)(_UNK_02143ba4 + 0x21434c0));
    func_0x01384978(*(undefined4 *)(_UNK_02143ba8 + 0x21434cc));
    func_0x01384978(*(undefined4 *)(_UNK_02143bac + 0x21434d8));
    func_0x01384978(*(undefined4 *)(_UNK_02143bb0 + 0x21434e4));
    func_0x01384978(*(undefined4 *)(_UNK_02143bb4 + 0x21434f0));
    func_0x01384978(*(undefined4 *)(_UNK_02143bb8 + 0x21434fc));
    func_0x01384978(*(undefined4 *)(_UNK_02143bbc + 0x2143508));
    func_0x01384978(*(undefined4 *)(_UNK_02143bc0 + 0x2143514));
    func_0x01384978(*(undefined4 *)(_UNK_02143bc4 + 0x2143520));
    func_0x01384978(*(undefined4 *)(_UNK_02143bc8 + 0x214352c));
    func_0x01384978(*(undefined4 *)(_UNK_02143bcc + 0x2143538));
    func_0x01384978(*(undefined4 *)(_UNK_02143bd0 + 0x2143544));
    func_0x01384978(*(undefined4 *)(_UNK_02143bd4 + 0x2143550));
    func_0x01384978(*(undefined4 *)(_UNK_02143bd8 + 0x214355c));
    func_0x01384978(*(undefined4 *)(_UNK_02143bdc + 0x2143568));
    func_0x01384978(*(undefined4 *)(_UNK_02143be0 + 0x2143574));
    func_0x01384978(*(undefined4 *)(_UNK_02143be4 + 0x2143580));
    func_0x01384978(*(undefined4 *)(_UNK_02143be8 + 0x214358c));
    func_0x01384978(*(undefined4 *)(_UNK_02143bec + 0x2143598));
    func_0x01384978(*(undefined4 *)(_UNK_02143bf0 + 0x21435a4));
    func_0x01384978(*(undefined4 *)(_UNK_02143bf4 + 0x21435b0));
    func_0x01384978(*(undefined4 *)(_UNK_02143bf8 + 0x21435bc));
    func_0x01384978(*(undefined4 *)(_UNK_02143bfc + 0x21435c8));
    func_0x01384978(*(undefined4 *)(_UNK_02143c00 + 0x21435d4));
    func_0x01384978(*(undefined4 *)(_UNK_02143c04 + 0x21435e0));
    func_0x01384978(*(undefined4 *)(_UNK_02143c08 + 0x21435ec));
    func_0x01384978(*(undefined4 *)(_UNK_02143c0c + 0x21435f8));
    func_0x01384978(*(undefined4 *)(_UNK_02143c10 + 0x2143604));
    func_0x01384978(*(undefined4 *)(_UNK_02143c14 + 0x2143610));
    func_0x01384978(*(undefined4 *)(_UNK_02143c18 + 0x214361c));
    func_0x01384978(*(undefined4 *)(_UNK_02143c1c + 0x2143628));
    *pcVar7 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_24 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02143c20 + 0x2143644));
  func_0x02454908(uVar2,**(undefined4 **)(_UNK_02143c24 + 0x214365c));
  puVar3 = *(undefined4 **)(_UNK_02143c28 + 0x2143670);
  *(undefined4 *)(param_1 + 8) = uVar2;
  uVar2 = func_0x01384be4(*puVar3);
  func_0x0328e950(uVar2,**(undefined4 **)(_UNK_02143c2c + 0x2143688));
  puVar3 = *(undefined4 **)(_UNK_02143c30 + 0x214369c);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  uVar2 = func_0x01384be4(*puVar3);
  FUN_02140c20();
  puVar8 = *(undefined4 **)(_UNK_02143c34 + 0x21436b8);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  uVar2 = func_0x01384be4(*puVar8);
  puVar10 = *(undefined4 **)(_UNK_02143c38 + 0x21436d0);
  func_0x0328e950(uVar2,*puVar10);
  puVar3 = *(undefined4 **)(_UNK_02143c3c + 0x21436e0);
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  uVar2 = func_0x01384be4(*puVar3);
  func_0x024519bc(uVar2,**(undefined4 **)(_UNK_02143c40 + 0x21436f8));
  uVar4 = *puVar8;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  uVar2 = func_0x01384be4(uVar4);
  func_0x0328e950(uVar2,*puVar10);
  puVar3 = *(undefined4 **)(_UNK_02143c44 + 0x2143724);
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  uVar2 = func_0x01384be4(*puVar3);
  func_0x03d63eec(uVar2,**(undefined4 **)(_UNK_02143c48 + 0x214373c));
  puVar3 = *(undefined4 **)(_UNK_02143c4c + 0x2143750);
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  uVar2 = func_0x01384be4(*puVar3);
  func_0x03d63eec(uVar2,**(undefined4 **)(_UNK_02143c50 + 0x2143768));
  puVar3 = *(undefined4 **)(_UNK_02143c54 + 0x214377c);
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  uVar2 = func_0x01384be4(*puVar3);
  func_0x0328e950(uVar2,**(undefined4 **)(_UNK_02143c58 + 0x2143794));
  uVar4 = *puVar8;
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  uVar2 = func_0x01384be4(uVar4);
  func_0x0328e950(uVar2,*puVar10);
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  func_0x0244f5a0(param_1,0);
  iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02143c5c + 0x21437d0));
  func_0x02143ca4();
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar3 = *(undefined4 **)(_UNK_02143c60 + 0x21437f4);
  *(int *)(param_1 + 0x34) = iVar5;
  *(int *)(iVar5 + 8) = param_1;
  uVar2 = func_0x01384be4(*puVar3);
  FUN_02113618(uVar2,iVar5,0);
  puVar3 = *(undefined4 **)(_UNK_02143c64 + 0x214381c);
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  uVar2 = func_0x01384be4(*puVar3);
  FUN_020da7d4(uVar2,param_1,0);
  puVar3 = *(undefined4 **)(_UNK_02143c68 + 0x2143840);
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  uVar2 = func_0x01384be4(*puVar3);
  func_0x02143d30(uVar2,param_1);
  puVar3 = *(undefined4 **)(_UNK_02143c6c + 0x2143860);
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  iVar5 = func_0x01384be4(*puVar3);
  func_0x0244f5a0(iVar5,0);
  puVar3 = *(undefined4 **)(_UNK_02143c70 + 0x2143880);
  *(int *)(param_1 + 0x58) = iVar5;
  *(int *)(iVar5 + 0x14) = param_1;
  uVar2 = func_0x01384be4(*puVar3);
  func_0x0215e848(uVar2,param_1,0);
  puVar3 = *(undefined4 **)(_UNK_02143c74 + 0x21438a8);
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  uVar2 = func_0x01384be4(*puVar3);
  func_0x01db6794(uVar2,param_1,0);
  puVar3 = *(undefined4 **)(_UNK_02143c78 + 0x21438cc);
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  uVar2 = func_0x01384be4(*puVar3);
  FUN_0210f814(uVar2,param_1,0);
  puVar3 = *(undefined4 **)(_UNK_02143c7c + 0x21438f0);
  *(undefined4 *)(param_1 + 100) = uVar2;
  iVar5 = func_0x03668dfc(*puVar3);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar14 = func_0x01c357f0(iVar5,0);
  iVar5 = *(int *)(param_1 + 0x38);
  puVar3 = *(undefined4 **)(_UNK_02143c80 + 0x214392c);
  *(undefined8 *)(param_1 + 0x78) = uVar14;
  uVar2 = func_0x01384be4(*puVar3);
  func_0x0244f5a0(uVar2,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar5 + 8);
  uVar9 = *(uint *)(iVar5 + 0xc);
  piVar12 = *(int **)(_UNK_02143c84 + 0x214396c);
  *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
  iVar13 = *piVar12;
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  if (uVar9 < *(uint *)(iVar11 + 0xc)) {
    *(uint *)(iVar5 + 0xc) = uVar9 + 1;
    *(undefined4 *)(iVar11 + uVar9 * 4 + 0x10) = uVar2;
  }
  else {
    func_0x0328f170(iVar5,uVar2,*(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
  }
  iVar5 = *(int *)(param_1 + 0x38);
  uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02143c88 + 0x21439bc));
  func_0x0244f5a0(uVar2,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar5 + 8);
  uVar9 = *(uint *)(iVar5 + 0xc);
  iVar13 = *piVar12;
  *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  if (uVar9 < *(uint *)(iVar11 + 0xc)) {
    *(uint *)(iVar5 + 0xc) = uVar9 + 1;
    *(undefined4 *)(iVar11 + uVar9 * 4 + 0x10) = uVar2;
  }
  else {
    func_0x0328f170(iVar5,uVar2,*(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
  }
  iVar5 = *(int *)(param_1 + 0x38);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x0328fe1c(&uStack_30,iVar5,**(undefined4 **)(_UNK_02143c8c + 0x2143a5c));
  puVar3 = *(undefined4 **)(_UNK_02143c90 + 0x2143a70);
  piVar12 = *(int **)(_UNK_02143c94 + 0x2143a78);
  do {
    iVar5 = func_0x03f5f428(&uStack_30,*puVar3);
    piVar1 = piStack_24;
    if (iVar5 == 0) {
      func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_02143c98 + 0x2143b08));
      return;
    }
    if (piStack_24 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar5 = *piVar1;
    uVar9 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar9 != 0) {
      piVar6 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar12) {
          puVar8 = (undefined4 *)(iVar5 + *piVar6 * 8 + 0xd0);
          goto LAB_02143ae8;
        }
        uVar9 = uVar9 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined4 *)func_0x014002dc(piVar1,*piVar12,2);
LAB_02143ae8:
    (*(code *)*puVar8)(piVar1,puVar8[1]);
  } while( true );
}



// ===== FAT.Merge.MergeWorld.MergeWorldInternal$$.ctor RVA 0x2133ca4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02143ca4(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02143d1c + 0x2143cb8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02143d20 + 0x2143ccc));
    func_0x01384978(*(undefined4 *)(_UNK_02143d24 + 0x2143cd8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02143d28 + 0x2143cec));
  func_0x03d63eec(uVar1,**(undefined4 **)(_UNK_02143d2c + 0x2143d00));
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.MergeWorld$$UnRegisterConfigMergeBonusHandler RVA 0x2133dc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02143dc4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  
  pcVar7 = (char *)(_UNK_0214409c + 0x2143ddc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021440a0 + 0x2143df0));
    func_0x01384978(*(undefined4 *)(_UNK_021440a4 + 0x2143dfc));
    func_0x01384978(*(undefined4 *)(_UNK_021440a8 + 0x2143e08));
    func_0x01384978(*(undefined4 *)(_UNK_021440ac + 0x2143e14));
    func_0x01384978(*(undefined4 *)(_UNK_021440b0 + 0x2143e20));
    func_0x01384978(*(undefined4 *)(_UNK_021440b4 + 0x2143e2c));
    func_0x01384978(*(undefined4 *)(_UNK_021440b8 + 0x2143e38));
    func_0x01384978(*(undefined4 *)(_UNK_021440bc + 0x2143e44));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0x7554,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x38);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_48,iVar2,**(undefined4 **)(_UNK_021440c0 + 0x2143ec0));
    uVar3 = 0;
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    piStack_2c = piStack_3c;
    puVar8 = *(undefined4 **)(_UNK_021440c4 + 0x2143ee0);
    piVar10 = *(int **)(_UNK_021440c8 + 0x2143ee8);
    piVar9 = *(int **)(_UNK_021440cc + 0x2143ef0);
    while (iVar2 = func_0x03f5f428(&uStack_38,*puVar8), piVar1 = piStack_2c, iVar2 != 0) {
      if (piStack_2c != (int *)0x0) {
        iVar2 = *piStack_2c;
        uVar5 = (uint)*(byte *)(*piVar10 + 0xb8);
        if ((uVar5 <= *(byte *)(iVar2 + 0xb8)) &&
           (*(int *)(*(int *)(iVar2 + 100) + uVar5 * 4 + -4) == *piVar10)) {
          uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar9) {
                puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xd8);
                goto LAB_02143f88;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piStack_2c,*piVar9,3);
LAB_02143f88:
          (*(code *)*puVar4)(piVar1,puVar4[1]);
          iVar2 = *(int *)(param_1 + 0x38);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar3 = func_0x0328ffbc(iVar2,piVar1,**(undefined4 **)(_UNK_021440d0 + 0x2143fb8));
        }
      }
    }
    func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_021440d4 + 0x2143fd8));
    iVar2 = *(int *)(param_1 + 0x38);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03290bd4(iVar2,uVar3,**(undefined4 **)(_UNK_021440dc + 0x2144000));
  }
  else {
    iVar2 = func_0x0229f13c(0x7554,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.Merge.MergeWorld$$UnRegisterBubbleMergeBonusHandler RVA 0x21340e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021440e4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  
  pcVar7 = (char *)(_UNK_021443bc + 0x21440fc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021443c0 + 0x2144110));
    func_0x01384978(*(undefined4 *)(_UNK_021443c4 + 0x214411c));
    func_0x01384978(*(undefined4 *)(_UNK_021443c8 + 0x2144128));
    func_0x01384978(*(undefined4 *)(_UNK_021443cc + 0x2144134));
    func_0x01384978(*(undefined4 *)(_UNK_021443d0 + 0x2144140));
    func_0x01384978(*(undefined4 *)(_UNK_021443d4 + 0x214414c));
    func_0x01384978(*(undefined4 *)(_UNK_021443d8 + 0x2144158));
    func_0x01384978(*(undefined4 *)(_UNK_021443dc + 0x2144164));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0x7555,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x38);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_48,iVar2,**(undefined4 **)(_UNK_021443e0 + 0x21441e0));
    uVar3 = 0;
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    piStack_2c = piStack_3c;
    puVar8 = *(undefined4 **)(_UNK_021443e4 + 0x2144200);
    piVar10 = *(int **)(_UNK_021443e8 + 0x2144208);
    piVar9 = *(int **)(_UNK_021443ec + 0x2144210);
    while (iVar2 = func_0x03f5f428(&uStack_38,*puVar8), piVar1 = piStack_2c, iVar2 != 0) {
      if (piStack_2c != (int *)0x0) {
        iVar2 = *piStack_2c;
        uVar5 = (uint)*(byte *)(*piVar10 + 0xb8);
        if ((uVar5 <= *(byte *)(iVar2 + 0xb8)) &&
           (*(int *)(*(int *)(iVar2 + 100) + uVar5 * 4 + -4) == *piVar10)) {
          uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar9) {
                puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xd8);
                goto LAB_021442a8;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piStack_2c,*piVar9,3);
LAB_021442a8:
          (*(code *)*puVar4)(piVar1,puVar4[1]);
          iVar2 = *(int *)(param_1 + 0x38);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar3 = func_0x0328ffbc(iVar2,piVar1,**(undefined4 **)(_UNK_021443f0 + 0x21442d8));
        }
      }
    }
    func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_021443f4 + 0x21442f8));
    iVar2 = *(int *)(param_1 + 0x38);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03290bd4(iVar2,uVar3,**(undefined4 **)(_UNK_021443fc + 0x2144320));
  }
  else {
    iVar2 = func_0x0229f13c(0x7555,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.Merge.MergeWorld$$SetWorldParam RVA 0x2134404 =====

void FUN_02144404(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb442,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb442,0);
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
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}



// ===== FAT.Merge.MergeWorld$$SetConfigVersion RVA 0x2134460 =====

void FUN_02144460(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x9d4d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d4d,0);
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
  *(undefined4 *)(param_1 + 0x90) = param_2;
  return;
}



// ===== FAT.Merge.MergeWorld$$ConsumeNextItemId RVA 0x21344bc =====

void FUN_021444bc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x266,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x266,0);
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
    func_0x0245498c(&uStack_30,0,0);
    return;
  }
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return;
}



// ===== FAT.Merge.MergeWorld$$FinishDisposeItem RVA 0x2134518 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02144518(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_02144724 + 0x2144530);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02144728 + 0x2144544));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x251,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x251,0);
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
  iVar1 = FUN_0214197c(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_021399d4(iVar1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = FUN_0210e5f4(param_2,0);
  if (iVar1 == iVar5) {
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_0213a204(iVar1);
  }
  else {
    iVar1 = FUN_021419d0(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0215e630(iVar1,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = FUN_0210e5f4(param_2,0);
    if (iVar1 == iVar5) {
      iVar1 = *(int *)(param_1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0215ee0c(iVar1,0);
    }
    else {
      iVar1 = FUN_02141acc(param_1);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar5 = FUN_0210e5f4(param_2,0);
      if (iVar1 == iVar5) {
        func_0x02144730(param_1,0);
      }
    }
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  FUN_021170fc(param_2,0);
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 8);
  uVar8 = *(uint *)(iVar1 + 0xc);
  piVar2 = *(int **)(_UNK_0214472c + 0x21446dc);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar5 = *piVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  if (uVar8 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar8 + 1;
    *(int *)(iVar6 + uVar8 * 4 + 0x10) = param_2;
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
  *(int *)(iVar5 + uVar8 * 4 + 0x10) = param_2;
  return;
}



// ===== FAT.Merge.MergeWorld$$SetWaitChest RVA 0x2134730 =====

void FUN_02144730(int param_1,int param_2)

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
  
  iVar3 = 0;
  iVar1 = func_0x0229f06c(0x25d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x25d,0);
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
  if (param_2 != 0) {
    iVar3 = FUN_0210e5f4(param_2,0);
  }
  iVar1 = iVar3;
  if (param_1 == 0) {
    iVar1 = func_0x01384bf0();
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x40) = iVar3;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (param_2 == 0 || iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x021447dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.Merge.MergeWorld$$SetSoldItem RVA 0x21347e0 =====

void FUN_021447e0(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5fe6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5fe6,0);
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
  iVar1 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x88) = param_2;
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02144858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.Merge.MergeWorld$$GrabSelledItem RVA 0x2134860 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02144860(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  pcVar8 = (char *)(_UNK_02144bc4 + 0x2144878);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02144bc8 + 0x214488c));
    func_0x01384978(*(undefined4 *)(_UNK_02144bcc + 0x2144898));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb317,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb317,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02180ccc + 0x2180bec);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02180cd0 + 0x2180c00),param_1,0);
      *pcVar8 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    iStack_24 = uStack_3c;
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
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar7,0,0);
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02180cd4 + 0x2180cbc));
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 == 0) {
    return 0;
  }
  uVar10 = FUN_0210e2d4(iVar1,0);
  func_0x02167570(&iStack_28,uVar10,0);
  if (0 < iStack_24) {
    if (iStack_28 == 0x1f) {
      piVar2 = (int *)func_0x021566f4(0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar9 = *piVar2;
      piVar11 = *(int **)(_UNK_02144bd0 + 0x2144954);
      uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
      iVar4 = *piVar11;
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar4) {
            puVar3 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0x160);
            goto LAB_0214499c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,0x14);
LAB_0214499c:
      iVar9 = (*(code *)*puVar3)(piVar2,iStack_24,puVar3[1]);
      if (iVar9 != 0) {
        piVar2 = (int *)func_0x021566f4(0);
        piVar6 = *(int **)(_UNK_02144bd4 + 0x21449d0);
        iVar9 = *piVar6;
        if (*(int *)(iVar9 + 0x74) == 0) {
          func_0x01384ab4();
          iVar9 = *piVar6;
        }
        uVar10 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0xac);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar9 = *piVar2;
        iVar4 = *piVar11;
        uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
        if (uVar5 != 0) {
          piVar11 = (int *)(*(int *)(iVar9 + 0x58) + 4);
          do {
            if (piVar11[-1] == iVar4) {
              puVar3 = (undefined4 *)(iVar9 + *piVar11 * 8 + 0x168);
              goto LAB_02144b84;
            }
            uVar5 = uVar5 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,0x15);
LAB_02144b84:
        iVar9 = (*(code *)*puVar3)(piVar2,iStack_24,uVar10,puVar3[1]);
        if (iVar9 == 0) {
          return 0;
        }
        goto LAB_02144ba8;
      }
    }
    piVar2 = (int *)func_0x021566f4(0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar9 = *piVar2;
    piVar11 = *(int **)(_UNK_02144bd8 + 0x2144a64);
    uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
    iVar4 = *piVar11;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar4) {
          puVar3 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0x1a0);
          goto LAB_02144aac;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,0x1c);
LAB_02144aac:
    iVar9 = (*(code *)*puVar3)(piVar2,iStack_24,puVar3[1]);
    if (iVar9 == 0) {
      return 0;
    }
    piVar2 = (int *)func_0x021566f4(0);
    piVar6 = *(int **)(_UNK_02144bdc + 0x2144ae4);
    iVar9 = *piVar6;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = *piVar6;
    }
    uVar10 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0xac);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar9 = *piVar2;
    iVar4 = *piVar11;
    uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar11[-1] == iVar4) {
          puVar3 = (undefined4 *)(iVar9 + *piVar11 * 8 + 0x1a8);
          goto LAB_02144b5c;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,0x1d);
LAB_02144b5c:
    (*(code *)*puVar3)(piVar2,iStack_24,uVar10,puVar3[1]);
  }
LAB_02144ba8:
  FUN_021447e0(param_1,0);
  return iVar1;
}



// ===== FAT.Merge.MergeWorld$$GetItem RVA 0x2134be0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02144be0(int param_1,int param_2)

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
  
  iVar2 = func_0x0229f06c(0x5e53,0);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x4c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 0;
    iVar2 = func_0x0229f06c(0x6e0,0,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x80);
      while( true ) {
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar5) {
          return 0;
        }
        if (*(uint *)(iVar2 + 0xc) <= uVar5) {
          func_0x01384bf4();
        }
        iVar4 = *(int *)(iVar2 + 0x10 + uVar5 * 4);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        if ((*(int *)(iVar4 + 8) != 0) &&
           (iVar1 = FUN_0210e5f4(*(int *)(iVar4 + 8),0), iVar1 == param_2)) break;
        uVar5 = uVar5 + 1;
      }
      return *(undefined4 *)(iVar4 + 8);
    }
    iVar2 = func_0x0229f13c(0x6e0,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5e53,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,param_2,0);
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
  uVar6 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02182b74 + 0x2182b5c));
  return uVar6;
}



// ===== FAT.Merge.MergeWorld$$AddReward RVA 0x2134c58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02144c58(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02144d78 + 0x2144c78);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02144d7c + 0x2144c8c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x2a9,0);
  if (iVar1 == 0) {
    uVar2 = FUN_021444bc(param_1);
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02144d80 + 0x2144cfc));
    FUN_02116fb0(iVar1,uVar2,param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
      FUN_021195d0(0,param_2,0);
      func_0x01384bf0();
    }
    else {
      FUN_021195d0(iVar1,param_2,0);
    }
    FUN_021177d0(iVar1,0,0,0);
    func_0x02144d84(param_1,iVar1,param_3);
  }
  else {
    iVar1 = func_0x0229f13c(0x2a9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x021826b0(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}



// ===== FAT.Merge.MergeWorld$$AddReward RVA 0x2134d84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02144d84(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  pcVar6 = (char *)(_UNK_02144f5c + 0x2144da4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02144f60 + 0x2144db8));
    func_0x01384978(*(undefined4 *)(_UNK_02144f64 + 0x2144dc4));
    func_0x01384978(*(undefined4 *)(_UNK_02144f68 + 0x2144dd0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x2aa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2aa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02175630(iVar1,param_1,param_2,param_3,0);
    return;
  }
  if (param_3 == 0) {
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      iVar1 = *(int *)(param_1 + 0x68);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x032900e0(iVar1,0,param_2,**(undefined4 **)(_UNK_02144f70 + 0x2144e70));
      goto LAB_02144ef0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar1 + 8);
  uVar4 = *(uint *)(iVar1 + 0xc);
  piVar3 = *(int **)(_UNK_02144f6c + 0x2144eac);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar8 = *piVar3;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  if (uVar4 < *(uint *)(iVar7 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar4 + 1;
    *(int *)(iVar7 + uVar4 * 4 + 0x10) = param_2;
  }
  else {
    func_0x0328f170(iVar1,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
  }
LAB_02144ef0:
  func_0x02144f74(param_1,1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 0;
  uVar2 = FUN_0210e2d4(param_2,0);
  iVar1 = *(int *)(param_1 + 0x68);
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x4c) + 8);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0199f04c(uVar2,1,uVar5,*(undefined4 *)(iVar1 + 0xc),0);
  return;
}



// ===== FAT.Merge.MergeWorld$$_OnRewardListChange RVA 0x2134f74 =====

void FUN_02144f74(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x2ab,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2ab,0);
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
  uVar2 = *(int *)(param_1 + 0x94) - 1;
  uVar2 = uVar2 & ~((int)uVar2 >> 0x1f);
  if (param_2 != 0) {
    uVar2 = *(int *)(param_1 + 0x94) + 1;
  }
  func_0x0214cd50(param_1,uVar2);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02145004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.Merge.MergeWorld$$SortRewardList RVA 0x213500c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214500c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
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
  
  pcVar3 = (char *)(_UNK_02145160 + 0x2145020);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02145164 + 0x2145034));
    func_0x01384978(*(undefined4 *)(_UNK_02145168 + 0x2145040));
    func_0x01384978(*(undefined4 *)(_UNK_0214516c + 0x214504c));
    func_0x01384978(*(undefined4 *)(_UNK_02145170 + 0x2145058));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb443,0);
  if (iVar1 == 0) {
    piVar7 = *(int **)(_UNK_02145174 + 0x21450b0);
    iVar4 = *(int *)(param_1 + 0x68);
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar7;
    }
    iVar5 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
    if (iVar5 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar7;
      }
      uVar6 = **(undefined4 **)(iVar1 + 0x5c);
      iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02145178 + 0x21450fc));
      func_0x03c751dc(iVar5,uVar6,**(undefined4 **)(_UNK_0214517c + 0x214511c),0);
      *(int *)(*(int *)(*piVar7 + 0x5c) + 4) = iVar5;
    }
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x03290edc(iVar4,iVar5,**(undefined4 **)(_UNK_02145180 + 0x214514c));
    iVar1 = func_0x0229f06c(0xb447,0);
    if (iVar1 == 0) {
      iVar1 = func_0x0229f06c(0x2ac,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x2ac,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,0,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485238(&uStack_38,0,0);
        iVar4 = *(int *)(iVar1 + 8);
        uVar6 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar2 = 3;
        if (iVar1 == 0) {
          uVar2 = 2;
        }
        func_0x0245495c(iVar4,uVar6,&uStack_38,uVar2,0,0);
        return;
      }
      if (*(int *)(param_1 + 0x94) != 0) {
        iVar1 = *(int *)(param_1 + 0x18);
        *(undefined4 *)(param_1 + 0x94) = 0;
        if (iVar1 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0214cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
        return;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0xb447,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb443,0);
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
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2);
  return;
}



// ===== FAT.Merge.MergeWorld$$SetRewardListRead RVA 0x2135184 =====

void FUN_02145184(int param_1)

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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xb447,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb447,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2);
    return;
  }
  iVar1 = func_0x0229f06c(0x2ac,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2ac,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,0,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,0,0);
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
  if (*(int *)(param_1 + 0x94) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x94) = 0;
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0214cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.Merge.MergeWorld$$FindRewardIndex RVA 0x21351e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_021451e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
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
  
  pcVar3 = (char *)(_UNK_0214530c + 0x21451f8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02145310 + 0x214520c));
    func_0x01384978(*(undefined4 *)(_UNK_02145314 + 0x2145218));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1491,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1491,0);
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
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar2,0,0);
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  iVar1 = 1;
  iVar5 = -1;
  puVar8 = *(undefined4 **)(_UNK_02145318 + 0x214527c);
  while( true ) {
    iVar4 = *(int *)(param_1 + 0x68);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar7 = iVar1 + -1;
    if (*(int *)(iVar4 + 0xc) <= iVar7) {
      return -1;
    }
    iVar4 = *(int *)(param_1 + 0x68);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0328eea8(iVar4,iVar7,*puVar8);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = FUN_0210e2d4(iVar4,0);
    if (iVar4 == param_2) break;
    iVar1 = iVar1 + 1;
  }
  if (-1 < iVar7) {
    iVar5 = *(int *)(param_1 + 0x68);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0xc) - iVar1;
  }
  return iVar5;
}



// ===== FAT.Merge.MergeWorld$$FindRewardCount RVA 0x213531c =====

/* WARNING: Removing unreachable block (ram,0x02f930ac) */
/* WARNING: Removing unreachable block (ram,0x02f93540) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0214531c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int extraout_r2;
  undefined *extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  undefined4 uVar8;
  int *piVar9;
  int unaff_r5;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
  code *pcVar14;
  undefined1 *puVar15;
  int unaff_r8;
  int *piVar16;
  int *unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined1 *puVar17;
  undefined1 *puVar18;
  int iVar19;
  undefined1 uVar20;
  bool bVar21;
  bool bVar22;
  undefined8 uVar23;
  ulonglong uVar24;
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
  undefined1 auStack_20 [12];
  
  pcVar12 = (char *)(_UNK_02145438 + 0x2145334);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214543c + 0x2145348));
    func_0x01384978(*(undefined4 *)(_UNK_02145440 + 0x2145354));
    func_0x01384978(*(undefined4 *)(_UNK_02145444 + 0x2145360));
    func_0x01384978(*(undefined4 *)(_UNK_02145448 + 0x214536c));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x94fd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94fd,0);
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
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0214544c + 0x21453c8));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar2 = *(undefined4 **)(_UNK_02145450 + 0x21453f0);
  piVar10 = *(int **)(param_1 + 0x68);
  *(undefined4 *)(iVar1 + 8) = param_2;
  iVar11 = func_0x01384be4(*puVar2);
  func_0x0244f8d0(iVar11,iVar1,**(undefined4 **)(_UNK_02145454 + 0x2145414),0);
  iVar1 = **(int **)(_UNK_02145458 + 0x214542c);
  puVar18 = auStack_20;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f930c0 + 0x2f92d48));
    func_0x01384978(*(undefined4 *)(iRam02f930c4 + 0x2f92d54));
    if (*(int *)(iVar1 + 0x1c) == 0) {
      func_0x0140024c(iVar1);
    }
  }
  if (piVar10 == (int *)0x0) {
    uVar13 = *(undefined4 *)(iRam02f930c8 + 0x2f92fc4);
  }
  else {
    if (iVar11 != 0) {
      iVar5 = **(int **)(iVar1 + 0x1c);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = func_0x014001f0(iVar5);
      }
      iVar3 = *piVar10;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          unaff_r5 = piVar9[-1];
          if (unaff_r5 == iVar5) {
            puVar2 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
            goto LAB_02f92de4;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar10,iVar5,0);
LAB_02f92de4:
      piVar10 = (int *)(*(code *)*puVar2)(piVar10,puVar2[1]);
      unaff_r8 = 0;
      unaff_r9 = *(int **)(iRam02f930d0 + 0x2f92e08);
LAB_02f92e04:
      do {
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar5 = *piVar10;
        uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            unaff_r5 = piVar9[-1];
            if (unaff_r5 == *unaff_r9) {
              puVar2 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0xc0);
              goto LAB_02f92e60;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar10,*unaff_r9,0);
LAB_02f92e60:
        iVar5 = (*(code *)*puVar2)(piVar10,puVar2[1]);
        if (iVar5 == 0) {
          iVar1 = 0;
          goto LAB_02f92f30;
        }
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(*(int *)(iVar1 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
          iVar5 = func_0x014001f0(iVar5);
        }
        iVar3 = *piVar10;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            unaff_r5 = piVar9[-1];
            if (unaff_r5 == iVar5) {
              puVar2 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
              goto LAB_02f92ef0;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar10,iVar5,0);
LAB_02f92ef0:
        uVar13 = (*(code *)*puVar2)(piVar10,puVar2[1]);
        iVar5 = (**(code **)(iVar11 + 0xc))
                          (*(undefined4 *)(iVar11 + 0x20),uVar13,*(undefined4 *)(iVar11 + 0x14));
      } while (iVar5 == 0);
      if (unaff_r8 != 0x7fffffff) {
        unaff_r8 = unaff_r8 + 1;
        goto LAB_02f92e04;
      }
      goto LAB_02f92fe4;
    }
    uVar13 = *(undefined4 *)(iRam02f930cc + 0x2f92fd0);
  }
  uVar13 = func_0x01384988(uVar13);
  uVar13 = func_0x04a21c20(uVar13,0);
  func_0x01384aa0(uVar13,iVar1);
  func_0x01384928();
LAB_02f92fe4:
  uVar13 = func_0x01384bf8();
  func_0x01384aa0(uVar13,iVar1);
  uVar23 = func_0x01384928();
  uVar13 = (undefined4)uVar23;
  if ((int)((ulonglong)uVar23 >> 0x20) != 1) {
    if (piVar10 != (int *)0x0) {
      iVar1 = *piVar10;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          unaff_r5 = piVar9[-1];
          if (unaff_r5 == **(int **)(iRam02f930d8 + 0x2f9304c)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_02f93094;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(iRam02f930d8 + 0x2f9304c),0);
LAB_02f93094:
      (*(code *)*puVar2)(piVar10,puVar2[1]);
    }
    uVar20 = 1;
    func_0x01459844(uVar13);
    uVar23 = func_0x01062280();
    iVar1 = (int)((ulonglong)uVar23 >> 0x20);
    piVar9 = (int *)uVar23;
    bVar21 = false;
    if ((bool)uVar20) {
      unaff_r5 = -0x2f9309e;
      iVar1 = (int)&UNK_00ac0000 - (int)piVar9;
      bVar21 = iVar1 == 0;
    }
    bVar22 = false;
    if (bVar21) {
      puVar18 = (undefined1 *)(-(int)piVar9 + -0x80000000);
      bVar22 = -(int)piVar9 == -0x80000000;
    }
    bVar21 = false;
    if (bVar22) {
      unaff_r9 = (int *)(0x4000 - extraout_r2);
      bVar21 = unaff_r9 == (int *)0x0;
    }
    bVar22 = false;
    if (bVar21) {
      iVar1 = 0x3e00000 - (int)piVar9;
      bVar22 = iVar1 == 0;
    }
    if (bVar22) {
      piVar10 = (int *)0xfd06d780;
    }
    *(undefined4 *)(puVar18 + -4) = 0x2f930c0;
    *(undefined4 *)(puVar18 + -8) = unaff_r11;
    *(undefined4 *)(puVar18 + -0xc) = unaff_r10;
    *(int **)(puVar18 + -0x10) = unaff_r9;
    *(int *)(puVar18 + -0x14) = unaff_r8;
    *(undefined4 *)(puVar18 + -0x18) = uVar13;
    *(undefined4 *)(puVar18 + -0x1c) = 0;
    *(int *)(puVar18 + -0x20) = unaff_r5;
    *(int **)(puVar18 + -0x24) = piVar10;
    puVar17 = puVar18 + -8;
    *(int *)(puVar18 + -0x38) = iVar1;
    *(undefined4 *)(puVar18 + -0x2c) = **(undefined4 **)(iRam02f93554 + 0x2f93100);
    piVar10 = *(int **)(extraout_r2 + 0x1c);
    if (piVar10 == (int *)0x0) {
      func_0x01384978(*(undefined4 *)(iRam02f93558 + 0x2f9311c));
      func_0x01384978(*(undefined4 *)(iRam02f9355c + 0x2f93128));
      piVar10 = *(int **)(extraout_r2 + 0x1c);
      if (piVar10 == (int *)0x0) {
        func_0x0140024c(extraout_r2);
        piVar10 = *(int **)(extraout_r2 + 0x1c);
      }
    }
    iVar1 = *(int *)(piVar10[5] + 0x84);
    uVar7 = iVar1 + 7U & 0xfffffff8;
    puVar15 = puVar18 + (-0x40 - uVar7);
    puVar2 = (undefined4 *)(puVar15 + -uVar7);
    piVar16 = (int *)((int)puVar2 - uVar7);
    func_0x0145894c(piVar16,iVar1);
    if (piVar9 == (int *)0x0) goto LAB_02f93450;
    if (*(int *)(puVar18 + -0x38) == 0) {
      uVar13 = *(undefined4 *)(iRam02f93564 + 0x2f93468);
      goto LAB_02f93464;
    }
    iVar11 = *piVar10;
    if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
      iVar11 = func_0x014001f0(iVar11);
    }
    iVar5 = *piVar9;
    uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar10[-1] == iVar11) {
          puVar4 = (undefined4 *)(iVar5 + *piVar10 * 8 + 0xc0);
          goto LAB_02f931f0;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar9,iVar11,0);
LAB_02f931f0:
    piVar10 = (int *)(*(code *)*puVar4)(piVar9,puVar4[1]);
    iVar11 = 0;
    do {
      *(int *)(puVar18 + -0x3c) = iVar11;
      do {
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar11 = *piVar10;
        uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar11 + 0x58) + 4);
          do {
            if (piVar9[-1] == **(int **)(iRam02f93568 + 0x2f93228)) {
              puVar4 = (undefined4 *)(iVar11 + *piVar9 * 8 + 0xc0);
              goto LAB_02f93270;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(iRam02f93568 + 0x2f93228),0);
LAB_02f93270:
        iVar11 = (*(code *)*puVar4)(piVar10,puVar4[1]);
        if (iVar11 == 0) {
          iVar1 = 0;
          goto LAB_02f933ac;
        }
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(*(int *)(extraout_r2 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
          iVar11 = func_0x014001f0(iVar11);
        }
        iVar5 = *piVar10;
        uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar9[-1] == iVar11) {
              iVar11 = iVar5 + *piVar9 * 8 + 0xc0;
              goto LAB_02f93300;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        iVar11 = func_0x014002dc(piVar10,iVar11,0);
LAB_02f93300:
        iVar11 = *(int *)(iVar11 + 4);
        *(undefined1 **)(puVar18 + -0x34) = puVar15;
        uVar13 = *(undefined4 *)(iVar11 + 4);
        pcVar14 = *(code **)(iVar11 + 8);
        *(undefined1 **)((int)piVar16 + -8) = puVar15;
        (*pcVar14)(uVar13,iVar11,piVar10,puVar18 + -0x34);
        func_0x01458934(piVar16,puVar15,iVar1);
        func_0x01458934(puVar2,piVar16,iVar1);
        puVar6 = *(undefined4 **)(*(int *)(extraout_r2 + 0x1c) + 0x18);
        puVar4 = puVar2;
        if (-1 < *(int *)(*(int *)(*(int *)(extraout_r2 + 0x1c) + 0x14) + 0x14)) {
          puVar4 = (undefined4 *)*puVar2;
        }
        uVar13 = *puVar6;
        pcVar14 = (code *)puVar6[2];
        *(undefined4 **)(puVar18 + -0x34) = puVar4;
        *(undefined1 **)((int)piVar16 + -8) = puVar18 + -0x2d;
        (*pcVar14)(uVar13,puVar6,*(undefined4 *)(puVar18 + -0x38),puVar18 + -0x34);
      } while (puVar18[-0x2d] == '\0');
      if (*(int *)(puVar18 + -0x3c) == 0x7fffffff) goto LAB_02f9347c;
      iVar11 = *(int *)(puVar18 + -0x3c) + 1;
    } while( true );
  }
  piVar9 = (int *)func_0x0145b008(uVar13);
  iVar1 = *piVar9;
  func_0x0145b0f8();
LAB_02f92f30:
  if (piVar10 != (int *)0x0) {
    iVar11 = *piVar10;
    uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(iRam02f930d4 + 0x2f92f48)) {
          puVar2 = (undefined4 *)(iVar11 + *piVar9 * 8 + 0xc0);
          goto LAB_02f92f90;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(iRam02f930d4 + 0x2f92f48),0);
LAB_02f92f90:
    (*(code *)*puVar2)(piVar10,puVar2[1]);
  }
  if (iVar1 != 0) {
    func_0x01384bec(iVar1);
  }
  return unaff_r8;
LAB_02f9347c:
  while( true ) {
    uVar13 = func_0x01384bf8();
    func_0x01384aa0(uVar13,extraout_r2);
    uVar23 = func_0x01384928();
    iVar1 = (int)uVar23;
    if ((int)((ulonglong)uVar23 >> 0x20) != 1) break;
    piVar9 = (int *)func_0x0145b008(iVar1);
    iVar1 = *piVar9;
    func_0x0145b0f8();
LAB_02f933ac:
    if (piVar10 != (int *)0x0) {
      iVar11 = *piVar10;
      uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar11 + 0x58) + 4);
        do {
          puVar15 = (undefined1 *)piVar9[-1];
          if (puVar15 == (undefined1 *)**(int **)(iRam02f9356c + 0x2f933c4)) {
            puVar2 = (undefined4 *)(iVar11 + *piVar9 * 8 + 0xc0);
            goto LAB_02f9340c;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined4 *)
               func_0x014002dc(piVar10,(undefined1 *)**(int **)(iRam02f9356c + 0x2f933c4),0);
LAB_02f9340c:
      (*(code *)*puVar2)(piVar10,puVar2[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    if (**(int **)(iRam02f93570 + 0x2f93438) == *(int *)(puVar18 + -0x2c)) {
      return *(int *)(puVar18 + -0x3c);
    }
    func_0x0145b028(*(int *)(puVar18 + -0x3c));
LAB_02f93450:
    uVar13 = *(undefined4 *)(iRam02f93560 + 0x2f9345c);
LAB_02f93464:
    uVar13 = func_0x01384988(uVar13);
    uVar13 = func_0x04a21c20(uVar13,0);
    func_0x01384aa0(uVar13,extraout_r2);
    func_0x01384928();
  }
  if (piVar10 != (int *)0x0) {
    iVar11 = *piVar10;
    uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        puVar15 = (undefined1 *)piVar9[-1];
        if (puVar15 == (undefined1 *)**(int **)(iRam02f93574 + 0x2f934e0)) {
          puVar2 = (undefined4 *)(iVar11 + *piVar9 * 8 + 0xc0);
          goto LAB_02f93528;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)
             func_0x014002dc(piVar10,(undefined1 *)**(int **)(iRam02f93574 + 0x2f934e0),0);
LAB_02f93528:
    (*(code *)*puVar2)(piVar10,puVar2[1]);
  }
  uVar20 = 1;
  func_0x01459844(iVar1);
  uVar24 = func_0x01062280();
  iVar5 = (int)(uVar24 >> 0x20);
  iVar11 = (int)uVar24;
  bVar21 = false;
  if ((bool)uVar20) {
    piVar10 = (int *)0xfd06f7ac;
    iVar5 = -0x28000000 - iVar11;
    bVar21 = iVar5 == 0;
  }
  bVar22 = false;
  if ((bVar21 && iVar11 == 0x1c00) && extraout_r2_00 == &UNK_02a00000) {
    iVar5 = 0x60000003 - iVar11;
    bVar22 = iVar5 == 0;
  }
  if (bVar22) {
    piVar10 = (int *)0xfd42caac;
  }
  *(undefined4 *)((int)piVar16 + -4) = 0x2f93554;
  *(undefined1 **)((int)piVar16 + -8) = puVar17;
  *(undefined4 *)((int)piVar16 + -0xc) = 0;
  *(int *)((int)piVar16 + -0x10) = (int)piVar10;
  if (*(int *)(iVar5 + 0x1c) == 0) {
    func_0x0140024c(iVar5);
  }
  if (iVar11 == 0) {
    uVar13 = func_0x01384988(*(undefined4 *)(iRam02f935d8 + 0x2f935c4));
    uVar13 = func_0x04a21c20(uVar13,0);
    func_0x01384aa0(uVar13,iVar5);
    uVar24 = func_0x01384928();
    iVar11 = (int)(uVar24 >> 0x20);
    *(undefined4 *)((int)piVar16 + -0x14) = 0x2f935d8;
    *(undefined1 **)((int)piVar16 + -0x18) = puVar17;
    *(undefined4 *)((int)piVar16 + -0x1c) = 0;
    piVar10 = (int *)((int)piVar16 + -0x20);
    *piVar10 = iVar5;
    if (*(int *)(iVar11 + 0x1c) == 0) {
      func_0x0140024c(iVar11);
    }
    if ((int)uVar24 == 0) {
      uVar13 = func_0x01384988(*(undefined4 *)(iRam02f9363c + 0x2f93628));
      uVar13 = func_0x04a21c20(uVar13,0);
      func_0x01384aa0(uVar13,iVar11);
      uVar23 = func_0x01384928();
      iVar5 = (int)((ulonglong)uVar23 >> 0x20);
      *(undefined4 *)((int)piVar16 + -0x24) = 0x2f9363c;
      *(undefined1 **)((int)piVar16 + -0x28) = puVar17;
      *(undefined4 *)((int)piVar16 + -0x2c) = 0;
      *(int *)((int)piVar16 + -0x30) = iVar11;
      if (*(int *)(iVar5 + 0x1c) == 0) {
        func_0x0140024c(iVar5);
      }
      if ((int)uVar23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02f93680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar1 = (*(code *)**(undefined4 **)(*(int *)(iVar5 + 0x1c) + 4))((int)uVar23,0);
        return iVar1;
      }
      uVar13 = func_0x01384988(*(undefined4 *)(iRam02f936a4 + 0x2f93690));
      uVar13 = func_0x04a21c20(uVar13,0);
      func_0x01384aa0(uVar13,iVar5);
      uVar24 = func_0x01384928();
      *(undefined4 *)((int)piVar16 + -0x34) = 0x2f936a4;
      *(int *)((int)piVar16 + -0x38) = iVar1;
      *(undefined4 *)((int)piVar16 + -0x3c) = 0;
      piVar10 = (int *)((int)piVar16 + -0x40);
      *piVar10 = iVar5;
      if (*(int *)(extraout_r2_01 + 0x1c) == 0) {
        func_0x0140024c(extraout_r2_01);
      }
      if ((int)uVar24 == 0) {
        uVar13 = func_0x01384988(*(undefined4 *)(iRam02f9370c + 0x2f936f8));
        uVar13 = func_0x04a21c20(uVar13,0);
        func_0x01384aa0(uVar13,extraout_r2_01);
        uVar23 = func_0x01384928();
        iVar3 = (int)((ulonglong)uVar23 >> 0x20);
        *(undefined4 *)((int)piVar16 + -0x44) = 0x2f9370c;
        *(undefined4 *)((int)piVar16 + -0x48) = 0;
        *(int *)((int)piVar16 + -0x4c) = (int)(uVar24 >> 0x20);
        piVar16 = (int *)((int)piVar16 + -0x50);
        *piVar16 = extraout_r2_01;
        if (*(int *)(extraout_r2_02 + 0x1c) == 0) {
          func_0x0140024c(extraout_r2_02);
        }
        if ((int)uVar23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02f93754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar1 = (*(code *)**(undefined4 **)(*(int *)(extraout_r2_02 + 0x1c) + 8))
                            ((int)uVar23,iVar3);
          return iVar1;
        }
        uVar13 = func_0x01384988(*(undefined4 *)(iRam02f93778 + 0x2f93764));
        uVar13 = func_0x04a21c20(uVar13,0);
        func_0x01384aa0(uVar13,extraout_r2_02);
        iVar19 = 0x2f93778;
        uVar24 = func_0x01384928();
        iVar1 = 0;
        iVar11 = extraout_r2_03;
        iVar5 = extraout_r2_02;
        goto LAB_02f9377c;
      }
      iVar11 = *(int *)(*(int *)(extraout_r2_01 + 0x1c) + 8);
      iVar5 = *piVar10;
      iVar3 = *(int *)((int)piVar16 + -0x3c);
      iVar1 = *(int *)((int)piVar16 + -0x38);
      iVar19 = *(int *)((int)piVar16 + -0x34);
    }
    else {
      uVar24 = uVar24 & 0xffffffff;
      iVar11 = *(int *)(*(int *)(iVar11 + 0x1c) + 4);
      iVar5 = *piVar10;
      iVar3 = *(int *)((int)piVar16 + -0x1c);
      puVar17 = *(undefined1 **)((int)piVar16 + -0x18);
      iVar19 = *(int *)((int)piVar16 + -0x14);
    }
    piVar10[3] = iVar19;
    piVar10[2] = (int)puVar17;
    piVar10[1] = (int)puVar15;
    *piVar10 = iVar1;
    piVar10[-1] = iVar3;
    piVar10[-2] = iVar5;
    piVar10 = *(int **)(iVar11 + 0x1c);
    if (piVar10 == (int *)0x0) {
      func_0x0140024c(iVar11);
      piVar10 = *(int **)(iVar11 + 0x1c);
    }
    if ((*(ushort *)(*piVar10 + 0xbd) & 1) == 0) {
      func_0x014001f0();
    }
    iVar1 = func_0x01384be4();
    func_0x0320b024(iVar1,0xfffffffe,*(undefined4 *)(*(int *)(iVar11 + 0x1c) + 4));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar1 + 0x18) = (int)(uVar24 >> 0x20);
    *(int *)(iVar1 + 0x20) = (int)uVar24;
    return iVar1;
  }
  uVar24 = uVar24 & 0xffffffff;
  iVar11 = *(int *)(*(int *)(iVar5 + 0x1c) + 4);
  iVar5 = *(int *)((int)piVar16 + -0x10);
  iVar3 = *(int *)((int)piVar16 + -0xc);
  puVar17 = *(undefined1 **)((int)piVar16 + -8);
  iVar19 = *(int *)((int)piVar16 + -4);
LAB_02f9377c:
  piVar16[-1] = iVar19;
  piVar16[-2] = (int)puVar17;
  piVar16[-3] = (int)puVar15;
  piVar16[-4] = iVar1;
  piVar16[-5] = iVar3;
  piVar16[-6] = iVar5;
  piVar10 = *(int **)(iVar11 + 0x1c);
  if (piVar10 == (int *)0x0) {
    func_0x0140024c(iVar11);
    piVar10 = *(int **)(iVar11 + 0x1c);
  }
  if ((*(ushort *)(*piVar10 + 0xbd) & 1) == 0) {
    func_0x014001f0();
  }
  iVar1 = func_0x01384be4();
  func_0x0320aac8(iVar1,0xfffffffe,*(undefined4 *)(*(int *)(iVar11 + 0x1c) + 4));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 0x18) = (int)(uVar24 >> 0x20);
  *(int *)(iVar1 + 0x20) = (int)uVar24;
  return iVar1;
}



// ===== FAT.Merge.MergeWorld.<>c__DisplayClass124_0$$.ctor RVA 0x213545c =====

void FUN_0214545c(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.MergeWorld$$PeekRewardByIdx RVA 0x2135464 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02145464(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
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
  
  pcVar5 = (char *)(_UNK_02145544 + 0x214547c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02145548 + 0x2145490));
    func_0x01384978(*(undefined4 *)(_UNK_0214554c + 0x214549c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x14a9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x14a9,0);
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
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar2,0,0);
    uVar6 = func_0x0245498c(&uStack_38,0,0);
    return uVar6;
  }
  iVar4 = *(int *)(param_1 + 0x68);
  iVar1 = iVar4;
  if (iVar4 == 0) {
    func_0x01384bf0();
    iVar1 = *(int *)(param_1 + 0x68);
  }
  iVar1 = func_0x03003ef0(iVar1,*(int *)(iVar4 + 0xc) + ~param_2,2,
                          **(undefined4 **)(_UNK_02145550 + 0x2145518));
  if (iVar1 == 0) {
    return 0;
  }
  iVar4 = func_0x0229f06c(0x246,0);
  if (iVar4 == 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  iVar4 = func_0x0229f13c(0x246,0);
  if (iVar4 == 0) {
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
  if (*(int *)(iVar4 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar4 + 0x10),0);
  }
  func_0x01485278(&uStack_30,iVar1,0);
  iVar3 = *(int *)(iVar4 + 8);
  uVar6 = *(undefined4 *)(iVar4 + 0xc);
  iVar1 = *(int *)(iVar4 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar3,uVar6,&uStack_30,uVar2);
  uVar6 = func_0x0245498c(&uStack_30,0,0);
  return uVar6;
}



// ===== FAT.Merge.MergeWorld$$PeekNextReward RVA 0x2135554 =====

/* WARNING: Removing unreachable block (ram,0x03004064) */
/* WARNING: Removing unreachable block (ram,0x03004078) */
/* WARNING: Removing unreachable block (ram,0x03004084) */
/* WARNING: Removing unreachable block (ram,0x03004094) */
/* WARNING: Removing unreachable block (ram,0x0300409c) */
/* WARNING: Removing unreachable block (ram,0x030041b8) */
/* WARNING: Removing unreachable block (ram,0x030040a8) */
/* WARNING: Removing unreachable block (ram,0x030040b4) */
/* WARNING: Removing unreachable block (ram,0x030041c4) */
/* WARNING: Removing unreachable block (ram,0x0300405c) */
/* WARNING: Removing unreachable block (ram,0x03004024) */
/* WARNING: Removing unreachable block (ram,0x03004120) */
/* WARNING: Removing unreachable block (ram,0x03004128) */
/* WARNING: Removing unreachable block (ram,0x0300413c) */
/* WARNING: Removing unreachable block (ram,0x03004148) */
/* WARNING: Removing unreachable block (ram,0x03004158) */
/* WARNING: Removing unreachable block (ram,0x03004160) */
/* WARNING: Removing unreachable block (ram,0x0300416c) */
/* WARNING: Removing unreachable block (ram,0x030040cc) */
/* WARNING: Removing unreachable block (ram,0x030040e0) */
/* WARNING: Removing unreachable block (ram,0x030040ec) */
/* WARNING: Removing unreachable block (ram,0x030040fc) */
/* WARNING: Removing unreachable block (ram,0x03004104) */
/* WARNING: Removing unreachable block (ram,0x03004188) */
/* WARNING: Removing unreachable block (ram,0x03004110) */
/* WARNING: Removing unreachable block (ram,0x0300411c) */
/* WARNING: Removing unreachable block (ram,0x03004178) */
/* WARNING: Removing unreachable block (ram,0x03004194) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02145554(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
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
  
  pcVar8 = (char *)(_UNK_02145610 + 0x2145568);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02145614 + 0x214557c));
    func_0x01384978(*(undefined4 *)(_UNK_02145618 + 0x2145588));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa863,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa863,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_02180ccc + 0x2180bec);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02180cd0 + 0x2180c00),param_1,0);
      *pcVar8 = '\x01';
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
    iVar10 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_30,uVar7,0,0);
    uVar11 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02180cd4 + 0x2180cbc));
    return uVar11;
  }
  piVar9 = *(int **)(param_1 + 0x68);
  piVar2 = piVar9;
  if (piVar9 == (int *)0x0) {
    func_0x01384bf0();
    piVar2 = *(int **)(param_1 + 0x68);
  }
  iVar1 = piVar9[3] + -1;
  iVar10 = **(int **)(_UNK_0214561c + 0x2145604);
  if (*(int *)(iVar10 + 0x1c) == 0) {
    func_0x0140024c(iVar10);
  }
  if (piVar2 != (int *)0x0) {
    iVar5 = *(int *)(*(int *)(iVar10 + 0x1c) + 4);
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = func_0x014001f0(iVar5);
    }
    iVar3 = *piVar2;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar5) {
          puVar4 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
          goto LAB_03003f8c;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar5,0);
LAB_03003f8c:
    iVar5 = (*(code *)*puVar4)(piVar2,puVar4[1]);
    if ((iVar5 != 0) && (-1 < iVar1)) {
      iVar5 = *(int *)(*(int *)(iVar10 + 0x1c) + 4);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = func_0x014001f0(iVar5);
      }
      iVar3 = *piVar2;
      uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar9[-1] == iVar5) {
            puVar4 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
            goto LAB_03004034;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar5,0);
LAB_03004034:
      iVar5 = (*(code *)*puVar4)(piVar2,puVar4[1]);
      if (iVar1 < iVar5) {
        iVar10 = **(int **)(iVar10 + 0x1c);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x014001f0(iVar10);
        }
        iVar5 = *piVar2;
        uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar9[-1] == iVar10) {
              puVar4 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0xc0);
              goto LAB_03004244;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar10,0);
LAB_03004244:
                    /* WARNING: Could not recover jumptable at 0x03004258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (*(code *)*puVar4)(piVar2,iVar1,puVar4[1]);
        return uVar11;
      }
    }
  }
  return 0;
}



// ===== FAT.Merge.MergeWorld$$ConsumeRewardByIdx RVA 0x2135620 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02145620(int param_1,uint param_2)

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
  
  pcVar4 = (char *)(_UNK_0214575c + 0x2145638);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02145760 + 0x214564c));
    func_0x01384978(*(undefined4 *)(_UNK_02145764 + 0x2145658));
    func_0x01384978(*(undefined4 *)(_UNK_02145768 + 0x2145664));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x14ac,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x14ac,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02182b6c + 0x2182a78);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02182b70 + 0x2182a8c),param_1,param_2,0);
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
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02182b74 + 0x2182b5c));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 0;
  iVar1 = *(int *)(iVar1 + 0xc) + ~param_2;
  if (-1 < iVar1) {
    iVar3 = *(int *)(param_1 + 0x68);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 < *(int *)(iVar3 + 0xc)) {
      iVar3 = *(int *)(param_1 + 0x68);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x0328eea8(iVar3,iVar1,**(undefined4 **)(_UNK_0214576c + 0x2145714));
      iVar3 = *(int *)(param_1 + 0x68);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x03290bd4(iVar3,iVar1,**(undefined4 **)(_UNK_02145770 + 0x2145740));
      FUN_02144f74(param_1,0);
    }
  }
  return uVar5;
}



// ===== FAT.Merge.MergeWorld$$PeekNextFixedCategoryOutputIdx RVA 0x2135774 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02145774(undefined4 param_1,undefined4 param_2)

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
  undefined4 auStack_1c [2];
  
  pcVar8 = (char *)(_UNK_021458a8 + 0x214578c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021458ac + 0x21457a0));
    func_0x01384978(*(undefined4 *)(_UNK_021458b0 + 0x21457ac));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x14a2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x14a2,0);
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
    uVar9 = func_0x0245498c(&uStack_38,0,0);
    return uVar9;
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
      if (piVar5[-1] == **(int **)(_UNK_021458b4 + 0x2145824)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xe8);
        goto LAB_0214586c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021458b4 + 0x2145824),5);
LAB_0214586c:
  piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  iVar1 = **(int **)(_UNK_021458b8 + 0x2145894);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  auStack_1c[0] = 0;
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar5[-1] == iVar1) {
        puVar3 = (undefined4 *)(iVar7 + *piVar5 * 8 + 0xf8);
        goto LAB_02f7c0c8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,7);
LAB_02f7c0c8:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,auStack_1c,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.Merge.MergeWorld$$ConsumeNextFixedCategoryOutputIdx RVA 0x21358bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_021458bc(undefined4 param_1,undefined4 param_2)

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
  
  pcVar8 = (char *)(_UNK_02145a80 + 0x21458d4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02145a84 + 0x21458e8));
    func_0x01384978(*(undefined4 *)(_UNK_02145a88 + 0x21458f4));
    func_0x01384978(*(undefined4 *)(_UNK_02145a8c + 0x2145900));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9deb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9deb,0);
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
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
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
      if (piVar5[-1] == **(int **)(_UNK_02145a90 + 0x2145978)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xe8);
        goto LAB_021459c0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02145a90 + 0x2145978),5);
LAB_021459c0:
  piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
  if (piVar2 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = func_0x02f7c01c(piVar2,param_2,0,**(undefined4 **)(_UNK_02145a94 + 0x21459f0));
    iVar7 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_02145a98 + 0x2145a10)) {
          puVar3 = (undefined4 *)(iVar7 + *piVar5 * 8 + 200);
          goto LAB_02145a60;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02145a98 + 0x2145a10),1);
LAB_02145a60:
    (*(code *)*puVar3)(piVar2,param_2,iVar1 + 1,puVar3[1]);
  }
  return iVar1;
}



// ===== FAT.Merge.MergeWorld$$PeekNextFixedItemOutpuIdx RVA 0x2135a9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02145a9c(undefined4 param_1,undefined4 param_2)

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
  undefined4 auStack_1c [2];
  
  pcVar8 = (char *)(_UNK_02145bd0 + 0x2145ab4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02145bd4 + 0x2145ac8));
    func_0x01384978(*(undefined4 *)(_UNK_02145bd8 + 0x2145ad4));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x14a1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x14a1,0);
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
    uVar9 = func_0x0245498c(&uStack_38,0,0);
    return uVar9;
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
      if (piVar5[-1] == **(int **)(_UNK_02145bdc + 0x2145b4c)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xe0);
        goto LAB_02145b94;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02145bdc + 0x2145b4c),4);
LAB_02145b94:
  piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  iVar1 = **(int **)(_UNK_02145be0 + 0x2145bbc);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  auStack_1c[0] = 0;
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar5[-1] == iVar1) {
        puVar3 = (undefined4 *)(iVar7 + *piVar5 * 8 + 0xf8);
        goto LAB_02f7c0c8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,7);
LAB_02f7c0c8:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,auStack_1c,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.Merge.MergeWorld$$ConsumeNextFixedItemOutputIdx RVA 0x2135be4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02145be4(undefined4 param_1,undefined4 param_2)

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
  
  pcVar8 = (char *)(_UNK_02145da8 + 0x2145bfc);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02145dac + 0x2145c10));
    func_0x01384978(*(undefined4 *)(_UNK_02145db0 + 0x2145c1c));
    func_0x01384978(*(undefined4 *)(_UNK_02145db4 + 0x2145c28));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9de7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9de7,0);
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
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
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
      if (piVar5[-1] == **(int **)(_UNK_02145db8 + 0x2145ca0)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xe0);
        goto LAB_02145ce8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02145db8 + 0x2145ca0),4);
LAB_02145ce8:
  piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
  if (piVar2 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = func_0x02f7c01c(piVar2,param_2,0,**(undefined4 **)(_UNK_02145dbc + 0x2145d18));
    iVar7 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_02145dc0 + 0x2145d38)) {
          puVar3 = (undefined4 *)(iVar7 + *piVar5 * 8 + 200);
          goto LAB_02145d88;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02145dc0 + 0x2145d38),1);
LAB_02145d88:
    (*(code *)*puVar3)(piVar2,param_2,iVar1 + 1,puVar3[1]);
  }
  return iVar1;
}



// ===== FAT.Merge.MergeWorld$$Update RVA 0x2135dc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02145dc4(int param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar9 = (char *)(_UNK_0214622c + 0x2145de0);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02146230 + 0x2145df4));
    func_0x01384978(*(undefined4 *)(_UNK_02146234 + 0x2145e00));
    func_0x01384978(*(undefined4 *)(_UNK_02146238 + 0x2145e0c));
    func_0x01384978(*(undefined4 *)(_UNK_0214623c + 0x2145e18));
    func_0x01384978(*(undefined4 *)(_UNK_02146240 + 0x2145e24));
    func_0x01384978(*(undefined4 *)(_UNK_02146244 + 0x2145e30));
    func_0x01384978(*(undefined4 *)(_UNK_02146248 + 0x2145e3c));
    *pcVar9 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar2 = func_0x0229f06c(0x5e42,0);
  if (iVar2 == 0) {
    piVar3 = (int *)func_0x021566f4(0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    piVar12 = *(int **)(_UNK_0214624c + 0x2145ec4);
    uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
    iVar6 = *piVar12;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar6) {
          puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_02145f0c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar6,0);
LAB_02145f0c:
    puVar11 = (uint *)(param_1 + 0x80);
    uVar13 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    *(undefined8 *)(param_1 + 0x78) = uVar13;
    if (0 < *(int *)(param_1 + 0x8c)) {
      param_2 = *(int *)(param_1 + 0x8c) * 1000 + param_2;
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
    if ((int)(uint)(*puVar11 == 0) <= *(int *)(param_1 + 0x84)) {
      piVar3 = (int *)func_0x021566f4(0);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      iVar6 = *piVar12;
      uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar12[-1] == iVar6) {
            puVar4 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0xc0);
            goto LAB_02145fc4;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar6,0);
LAB_02145fc4:
      uVar13 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      uVar7 = *puVar11;
      iVar2 = *(int *)(param_1 + 0x84);
      lVar1 = (ulonglong)uVar7 * 0xfffffc18;
      uVar10 = (uint)lVar1;
      uVar5 = uVar10 + (uint)uVar13;
      *puVar11 = 0;
      *(undefined4 *)(param_1 + 0x84) = 0;
      iVar6 = iVar2 * -1000 + ((int)((ulonglong)lVar1 >> 0x20) - uVar7) +
              (int)((ulonglong)uVar13 >> 0x20) + (uint)CARRY4(uVar10,(uint)uVar13);
      iVar2 = ((int)param_2 >> 0x1f) + iVar6 + (uint)CARRY4(param_2,uVar5);
      uVar7 = param_2 + uVar5;
      if ((int)-(iVar6 + (uint)(uVar5 != 0)) < 0 ==
          (SBORROW4(0,iVar6) != SBORROW4(-iVar6,(uint)(uVar5 != 0)))) {
        uVar7 = param_2;
        iVar2 = (int)param_2 >> 0x1f;
      }
      param_2 = uVar7;
      if ((int)(uint)(param_2 < 0x40000000) <= iVar2) {
        param_2 = 0x3fffffff;
      }
    }
    iVar2 = *(int *)(param_1 + 0x4c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    FUN_020ed918(iVar2,param_2,0);
    iVar2 = *(int *)(param_1 + 0x50);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    FUN_02114958(iVar2,param_2,0);
    iVar2 = *(int *)(param_1 + 0x54);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02146264(iVar2,param_2);
    iVar2 = *(int *)(param_1 + 0x58);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    FUN_02139f7c(iVar2,param_2);
    iVar2 = *(int *)(param_1 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0215eb7c(iVar2,param_2,0);
    iVar2 = *(int *)(param_1 + 0x70);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar2 + 0xc)) {
      iVar2 = *(int *)(param_1 + 0x70);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_30,iVar2,**(undefined4 **)(_UNK_02146250 + 0x2146108));
      puVar4 = *(undefined4 **)(_UNK_02146254 + 0x214611c);
      while (iVar6 = func_0x03f5f428(&uStack_30,*puVar4), iVar2 = iStack_24, iVar6 != 0) {
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        FUN_02117154(iVar2,0);
      }
      func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_02146258 + 0x2146158));
      iVar2 = *(int *)(param_1 + 0x70);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar2 + 0xc);
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      if (0 < iVar6) {
        func_0x0145b1dc(*(undefined4 *)(iVar2 + 8),0,iVar6,0);
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5e42,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.MergeWorld$$ForwardChestWaitTime RVA 0x21362f4 =====

void FUN_021462f4(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x5e4f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e4f,0);
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
    func_0x0245498c(&uStack_38,0,0);
    return;
  }
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + param_2;
  return;
}



// ===== FAT.Merge.MergeWorld$$SetCurrentChestOpen RVA 0x2136358 =====

void FUN_02146358(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5e52,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e52,0);
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
  uVar4 = FUN_02144be0(param_1,*(undefined4 *)(param_1 + 0x40));
  FUN_02144730(param_1,0);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x021463e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),uVar4,*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.Merge.MergeWorld$$UseBonusItem RVA 0x21363e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021463e8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
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
  
  pcVar8 = (char *)(_UNK_021467a0 + 0x2146404);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021467a4 + 0x2146418));
    func_0x01384978(*(undefined4 *)(_UNK_021467a8 + 0x2146424));
    func_0x01384978(*(undefined4 *)(_UNK_021467ac + 0x2146430));
    func_0x01384978(*(undefined4 *)(_UNK_021467b0 + 0x214643c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x75e9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75e9,0);
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar7,0,0);
    uVar10 = func_0x0245496c(&uStack_38,0,0);
    return uVar10;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_021467b4 + 0x21464ac));
  piVar2 = (int *)func_0x021566f4(0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar9 = *piVar2;
  piVar11 = *(int **)(_UNK_021467b8 + 0x21464e0);
  uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
  iVar4 = *piVar11;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar4) {
        puVar3 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0x240);
        goto LAB_02146528;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,0x30);
LAB_02146528:
  (*(code *)*puVar3)(piVar2,param_2,7,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar9 = FUN_0211d748(0,0);
    if (iVar9 != 1) {
      func_0x01384bf0();
      goto LAB_02146598;
    }
    piVar2 = (int *)func_0x021566f4(0);
LAB_021465d4:
    func_0x01384bf0();
    uVar10 = FUN_0211d680(iVar1,0);
    func_0x01384bf0();
  }
  else {
    iVar9 = FUN_0211d748(iVar1,0);
    if (iVar9 == 1) {
      piVar2 = (int *)func_0x021566f4(0);
    }
    else {
LAB_02146598:
      iVar9 = FUN_0211d748(iVar1,0);
      if (iVar9 != 4) {
        iVar9 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
          uVar10 = FUN_0211d748(0,0);
          func_0x01384bf0();
          uVar7 = FUN_0211d680(0,0);
          func_0x01384bf0();
        }
        else {
          uVar10 = FUN_0211d748(iVar1,0);
          uVar7 = FUN_0211d680(iVar1,0);
        }
        uStack_30 = FUN_0211d6e4(iVar1,0);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        uStack_2c = **(undefined4 **)(_UNK_021467c0 + 0x2146774);
        func_0x0245490c(iVar9,param_2,uVar10,uVar7);
        uVar10 = 0;
        goto LAB_02146790;
      }
      piVar2 = (int *)func_0x021566f4(0);
      if (iVar1 == 0) goto LAB_021465d4;
    }
    uVar10 = FUN_0211d680(iVar1,0);
  }
  uVar7 = FUN_0211d6e4(iVar1,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar9 = *piVar2;
  iVar4 = *piVar11;
  uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(int *)(iVar9 + 0x58) + 4);
    do {
      if (piVar11[-1] == iVar4) {
        puVar3 = (undefined4 *)(iVar9 + *piVar11 * 8 + 0x150);
        goto LAB_02146688;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,0x12);
LAB_02146688:
  uVar10 = (*(code *)*puVar3)(piVar2,uVar10,uVar7,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar7 = FUN_02123568(iVar1,0);
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_021467bc + 0x21466cc));
  func_0x0244f5a0(iVar1,0);
  iVar9 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x14) = uVar10;
  *(undefined4 *)(iVar1 + 8) = uVar7;
  if (iVar9 != 0) {
    (**(code **)(iVar9 + 0xc))(*(undefined4 *)(iVar9 + 0x20),iVar1,*(undefined4 *)(iVar9 + 0x14));
  }
  uVar10 = 8;
LAB_02146790:
  func_0x021467e8(param_1,param_2,uVar10);
  return 1;
}



// ===== FAT.Merge.MergeWorld.BonusClaimRewardData$$.ctor RVA 0x21367c4 =====

void FUN_021467c4(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.Merge.MergeWorld$$_DisposeItem RVA 0x21367e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_021467e8(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar9 = (char *)(_UNK_02146984 + 0x2146808);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02146988 + 0x214681c));
    func_0x01384978(*(undefined4 *)(_UNK_0214698c + 0x2146828));
    *pcVar9 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x5e65,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x5e65,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar5 = func_0x02182cac(iVar4,param_1,param_2,param_3);
    return uVar5;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar4 = FUN_0210cd28(0,0);
    if (iVar4 == 0) goto LAB_021468f8;
    func_0x01384bf0();
  }
  else {
    iVar4 = FUN_0210cd28(param_2,0);
    if (iVar4 == 0) {
LAB_021468f8:
      iVar4 = *(int *)(param_1 + 0x68);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x0328f4d8(iVar4,param_2,**(undefined4 **)(_UNK_02146990 + 0x2146918));
      if (iVar4 != 0) {
        iVar4 = *(int *)(param_1 + 0x68);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x030ffc18(*(undefined4 *)(iVar4 + 8),param_2,0,*(undefined4 *)(iVar4 + 0xc));
        if (-1 < (int)uVar5) {
          func_0x03290bd4(iVar4,uVar5);
        }
        return ~uVar5 >> 0x1f;
      }
      iVar4 = *(int *)(param_1 + 0x50);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      pcVar9 = (char *)(_UNK_02115098 + 0x2114e1c);
      if (*pcVar9 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_0211509c + 0x2114e30),param_2,param_3,0);
        func_0x01384978(*(undefined4 *)(_UNK_021150a0 + 0x2114e3c));
        func_0x01384978(*(undefined4 *)(_UNK_021150a4 + 0x2114e48));
        func_0x01384978(*(undefined4 *)(_UNK_021150a8 + 0x2114e54));
        func_0x01384978(*(undefined4 *)(_UNK_021150ac + 0x2114e60));
        *pcVar9 = '\x01';
      }
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_30 = 0;
      iVar3 = func_0x0229f06c(0x2b7,0);
      if (iVar3 == 0) {
        iVar3 = FUN_02112078(iVar4,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&uStack_40,iVar3,**(undefined4 **)(_UNK_021150b0 + 0x2114ef4));
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        uStack_28 = uStack_38;
        iStack_24 = iStack_34;
        puVar7 = *(undefined4 **)(_UNK_021150b4 + 0x2114f10);
        do {
          iVar3 = func_0x03f5f428(&uStack_30,*puVar7);
          if (iVar3 == 0) goto LAB_02114fe8;
        } while ((iStack_24 == 0) || (iVar3 = FUN_021150c8(iStack_24,param_2), iVar3 == 0));
        piVar8 = *(int **)(iVar4 + 0x10);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar4 = *piVar8;
        uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_021150b8 + 0x2114f5c)) {
              puVar7 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xc0);
              goto LAB_02114fa4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_021150b8 + 0x2114f5c),0);
LAB_02114fa4:
        iVar4 = (*(code *)*puVar7)(piVar8,puVar7[1]);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = FUN_02139cf4(iVar4,0);
        if (iVar4 != 0) {
          FUN_020ddd78(iVar4,param_2,param_3,0);
        }
LAB_02114fe8:
        uVar5 = func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_021150bc + 0x2114ff4));
      }
      else {
        iVar3 = func_0x0229f13c(0x2b7,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x02182cac(iVar3,iVar4,param_2,param_3,0);
      }
      return uVar5;
    }
  }
  iVar4 = FUN_0210cd28(param_2,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_020dd720 + 0x20dd580);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dd724 + 0x20dd594),param_2,param_3,0);
    func_0x01384978(*(undefined4 *)(_UNK_020dd728 + 0x20dd5a0));
    func_0x01384978(*(undefined4 *)(_UNK_020dd72c + 0x20dd5ac));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x248,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x248,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    uVar5 = func_0x021808e8(iVar3,iVar4,param_2,param_3);
    return uVar5;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar3 = FUN_0210cd28(0,0);
    if (iVar3 != iVar4) {
      func_0x01384bf0();
      goto LAB_020dd640;
    }
  }
  else {
    iVar3 = FUN_0210cd28(param_2,0);
    if (iVar3 != iVar4) {
LAB_020dd640:
      uStack_1c = FUN_0210e5f4(param_2,0);
      puVar7 = *(undefined4 **)(_UNK_020dd730 + 0x20dd65c);
      uVar1 = func_0x01384abc(*puVar7,&uStack_1c);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = FUN_0210e2d4(param_2,0);
      uVar2 = func_0x01384abc(*puVar7,&uStack_20);
      uVar1 = func_0x0244f690(**(undefined4 **)(_UNK_020dd734 + 0x20dd6b4),uVar1,uVar2,0);
      if (*(int *)(**(int **)(_UNK_020dd738 + 0x20dd6c8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar1,0);
      return 0;
    }
  }
  FUN_020dd73c(iVar4,param_2,1,param_3);
  FUN_020dd8f4(iVar4,param_2,param_2,param_3);
  return 1;
}



// ===== FAT.Merge.MergeWorld$$UseTapBonusItem RVA 0x2136998 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02146998(int param_1,int param_2)

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
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_02146c84 + 0x21469b4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02146c88 + 0x21469c8));
    func_0x01384978(*(undefined4 *)(_UNK_02146c8c + 0x21469d4));
    func_0x01384978(*(undefined4 *)(_UNK_02146c90 + 0x21469e0));
    func_0x01384978(*(undefined4 *)(_UNK_02146c94 + 0x21469ec));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8592,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8592,0);
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
  }
  iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_02146c98 + 0x2146a5c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar8 = FUN_021372e0(iVar1,0);
  if (iVar8 == 3) {
    piVar2 = (int *)func_0x021566f4(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
      uVar9 = FUN_02137218(0,0);
      func_0x01384bf0();
    }
    else {
      uVar9 = FUN_02137218(iVar1,0);
    }
    uVar6 = FUN_0213727c(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_02146c9c + 0x2146b24)) {
          puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0x150);
          goto LAB_02146bec;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02146c9c + 0x2146b24),0x12);
LAB_02146bec:
    uVar9 = (*(code *)*puVar3)(piVar2,uVar9,uVar6,puVar3[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = FUN_02123568(iVar1,0);
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02146ca0 + 0x2146c30));
    func_0x0244f5a0(iVar1,0);
    iVar8 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(iVar1 + 0x14) = uVar9;
    *(undefined4 *)(iVar1 + 8) = uVar6;
    if (iVar8 != 0) {
      (**(code **)(iVar8 + 0xc))(*(undefined4 *)(iVar8 + 0x20),iVar1,*(undefined4 *)(iVar8 + 0x14));
    }
    uVar9 = 9;
  }
  else {
    iVar8 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
      uVar9 = FUN_021372e0(0,0);
      func_0x01384bf0();
      uVar6 = FUN_02137218(0,0);
      func_0x01384bf0();
    }
    else {
      uVar9 = FUN_021372e0(iVar1,0);
      uVar6 = FUN_02137218(iVar1,0);
    }
    uStack_28 = FUN_0213727c(iVar1,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = **(undefined4 **)(_UNK_02146ca4 + 0x2146bc0);
    func_0x0245490c(iVar8,param_2,uVar9,uVar6);
    uVar9 = 0;
  }
  FUN_021467e8(param_1,param_2,uVar9);
  return 1;
}



// ===== FAT.Merge.MergeWorld$$UseOrderBoxItem RVA 0x2136ca8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02146ca8(int param_1,int param_2)

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
  
  pcVar7 = (char *)(_UNK_02146e88 + 0x2146cc0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02146e8c + 0x2146cd4));
    func_0x01384978(*(undefined4 *)(_UNK_02146e90 + 0x2146ce0));
    func_0x01384978(*(undefined4 *)(_UNK_02146e94 + 0x2146cec));
    func_0x01384978(*(undefined4 *)(_UNK_02146e98 + 0x2146cf8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5e64,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e64,0);
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
  iVar1 = *(int *)(param_1 + 0x54);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 0;
  uVar9 = FUN_0210e2d4(param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02146eac(iVar1,uVar9,0);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_02146e9c + 0x2146d9c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02146ea0 + 0x2146db8));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349eb38(iVar1,param_2,**(undefined4 **)(_UNK_02146ea4 + 0x2146ddc));
    piVar2 = (int *)func_0x021566f4(0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_02146ea8 + 0x2146e0c)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x240);
          goto LAB_02146e54;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02146ea8 + 0x2146e0c),0x30);
LAB_02146e54:
    (*(code *)*puVar3)(piVar2,param_2,9,puVar3[1]);
    FUN_021467e8(param_1,param_2,0xc);
    uVar6 = 1;
  }
  return uVar6;
}



// ===== FAT.Merge.MergeWorld$$UseJumpCDItem RVA 0x2137034 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02147034(int param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_021471b8 + 0x214704c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021471bc + 0x2147060));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1511,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1511,0);
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
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
    uVar9 = func_0x0245496c(&uStack_38,0,0);
    return uVar9;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_02139d48(iVar1,param_2);
  uVar9 = 0;
  if (iVar1 != 0) {
    if (param_2 == 0) {
      func_0x01384bf0(0);
    }
    uVar9 = FUN_0210e2d4(param_2,0);
    func_0x0199f3dc(uVar9,0,0);
    iVar1 = FUN_02139cf4(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_020ec450(iVar1,param_2,0);
    piVar2 = (int *)func_0x021566f4(0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_021471c0 + 0x2147150)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x240);
          goto LAB_02147198;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021471c0 + 0x2147150),0x30);
LAB_02147198:
    (*(code *)*puVar3)(piVar2,param_2,10,puVar3[1]);
    uVar9 = 1;
  }
  return uVar9;
}



// ===== FAT.Merge.MergeWorld$$OnTokenMultiItemExpired RVA 0x21371c4 =====

uint FUN_021471c4(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5e6c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e6c,0);
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
  iVar1 = FUN_02139cf4(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_020dfd3c(iVar1,param_2,0);
  if (iVar1 != 0) {
    FUN_021467e8(param_1,iVar1,0x10);
  }
  return (uint)(iVar1 != 0);
}



// ===== FAT.Merge.MergeWorld$$UseTokenMultiItem RVA 0x2137268 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02147268(int param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_021473f0 + 0x2147280);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021473f4 + 0x2147294));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1517,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1517,0);
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
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
    uVar9 = func_0x0245496c(&uStack_38,0,0);
    return uVar9;
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar9 = 0;
  iVar1 = func_0x0215e948(iVar1,param_2,0);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar9 = FUN_0210e2d4(param_2,0);
    func_0x0199f3dc(uVar9,0,0);
    iVar1 = FUN_02139cf4(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_020ec53c(iVar1,param_2,0);
    piVar2 = (int *)func_0x021566f4(0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_021473f8 + 0x2147384)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x240);
          goto LAB_021473cc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021473f8 + 0x2147384),0x30);
LAB_021473cc:
    (*(code *)*puVar3)(piVar2,param_2,0x10,puVar3[1]);
    uVar9 = 1;
  }
  return uVar9;
}



// ===== FAT.Merge.MergeWorld$$CollectActivityEnergy RVA 0x21373fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_021473fc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_021475c8 + 0x214741c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021475cc + 0x2147430));
    func_0x01384978(*(undefined4 *)(_UNK_021475d0 + 0x214743c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb448,0);
  if (iVar1 == 0) {
    piVar2 = (int *)func_0x021566f4(0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar9 = *(undefined4 *)(param_2 + 0x14);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_021475d4 + 0x21474cc)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x150);
          goto LAB_02147514;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021475d4 + 0x21474cc),0x12);
LAB_02147514:
    uVar9 = (*(code *)*puVar3)(piVar2,0x20,uVar9,puVar3[1]);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar4 = FUN_02123568(param_2,0);
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_021475d8 + 0x2147558));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 0x14) = uVar9;
    *(undefined4 *)(iVar1 + 8) = uVar4;
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    FUN_0210cd7c(&uStack_28,param_3,0);
    *(undefined4 *)(iVar1 + 0xc) = uStack_28;
    *(undefined4 *)(iVar1 + 0x10) = uStack_24;
    iVar5 = *(int *)(param_1 + 0xc);
    if (iVar5 != 0) {
      (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar5 + 0x20),iVar1,*(undefined4 *)(iVar5 + 0x14));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb448,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229d588(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}



// ===== FAT.Merge.MergeWorld$$WalkAllItem RVA 0x21375dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021475dc(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_021477f8 + 0x21475fc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021477fc + 0x2147610));
    func_0x01384978(*(undefined4 *)(_UNK_02147800 + 0x214761c));
    func_0x01384978(*(undefined4 *)(_UNK_02147804 + 0x2147628));
    func_0x01384978(*(undefined4 *)(_UNK_02147808 + 0x2147634));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0xf44,0);
  if (iVar1 == 0) {
    if ((param_3 & 1) != 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_020dba14(iVar1,param_2,0);
    }
    if ((param_3 & 2) != 0) {
      iVar1 = *(int *)(param_1 + 0x50);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_021131f8(iVar1,param_2,0);
    }
    if ((param_3 & 4) != 0) {
      iVar1 = *(int *)(param_1 + 0x68);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_28,iVar1,**(undefined4 **)(_UNK_0214780c + 0x2147714));
      puVar2 = *(undefined4 **)(_UNK_02147810 + 0x2147728);
      while (iVar1 = func_0x03f5f428(&uStack_28,*puVar2), iVar1 != 0) {
        if (param_2 != 0) {
          (**(code **)(param_2 + 0xc))
                    (*(undefined4 *)(param_2 + 0x20),uStack_1c,*(undefined4 *)(param_2 + 0x14));
        }
      }
      func_0x03f5f424(&uStack_28,**(undefined4 **)(_UNK_02147814 + 0x2147764));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xf44,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021b6430(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.MergeWorld$$IsComponentDisable RVA 0x2137820 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02147820(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint extraout_r1;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
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
  
  pcVar8 = (char *)(_UNK_021478c8 + 0x2147838);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021478cc + 0x214784c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb449,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb449,0);
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
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_28 = **(int **)(_UNK_021478d0 + 0x21478bc);
  if (*(int *)(iVar1 + 8) != 0) {
    iVar7 = func_0x042268e0(iVar1,param_2,
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
          uVar9 = *(undefined4 *)(iVar12 + 0x18);
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
                goto LAB_042233a4;
              }
              uVar4 = uVar4 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar4 != 0);
          }
          puVar3 = (undefined4 *)func_0x02457d88(piVar13,iVar7,0);
LAB_042233a4:
          iVar2 = (*(code *)*puVar3)(piVar13,uVar9,param_2,puVar3[1]);
          iVar7 = iStack_30;
          if (iVar2 != 0) {
            return 1;
          }
        }
        if (iVar10 == 0) {
          func_0x02457d50();
        }
        if ((int)*(uint *)(iVar10 + 0xc) <= iVar1) {
          func_0x02457d6c(*(undefined4 *)(_UNK_04223458 + 0x4223424));
          uVar9 = func_0x02457d58();
          uVar5 = func_0x02457d6c(*(undefined4 *)(_UNK_0422345c + 0x4223438));
          func_0x04824950(uVar9,uVar5,0);
          func_0x02457d90(uVar9,iStack_28);
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



// ===== FAT.Merge.MergeWorld$$DisableComponent RVA 0x21378d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021478d4(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_02147a58 + 0x21478f4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02147a5c + 0x2147908));
    func_0x01384978(*(undefined4 *)(_UNK_02147a60 + 0x2147914));
    func_0x01384978(*(undefined4 *)(_UNK_02147a64 + 0x2147920));
    func_0x01384978(*(undefined4 *)(_UNK_02147a68 + 0x214792c));
    func_0x01384978(*(undefined4 *)(_UNK_02147a6c + 0x2147938));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x93cf,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02147a70 + 0x21479a0));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(param_1 + 0x6c);
    *(char *)(iVar1 + 0xc) = (char)param_3;
    *(undefined4 *)(iVar1 + 8) = param_2;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (param_3 == 0) {
      func_0x024519c4(iVar3,param_2,**(undefined4 **)(_UNK_02147a78 + 0x2147a08));
    }
    else {
      func_0x024519c0(iVar3,param_2,**(undefined4 **)(_UNK_02147a74 + 0x21479ec));
    }
    iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02147a7c + 0x2147a1c));
    func_0x03ccb96c(iVar3,iVar1,**(undefined4 **)(_UNK_02147a80 + 0x2147a38),0);
    pcVar2 = (char *)(_UNK_021477f8 + 0x21475fc);
    if (*pcVar2 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021477fc + 0x2147610));
      func_0x01384978(*(undefined4 *)(_UNK_02147800 + 0x214761c));
      func_0x01384978(*(undefined4 *)(_UNK_02147804 + 0x2147628));
      func_0x01384978(*(undefined4 *)(_UNK_02147808 + 0x2147634));
      *pcVar2 = '\x01';
    }
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_28 = 0;
    iVar1 = func_0x0229f06c(0xf44,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_020dba14(iVar1,iVar3,0);
      iVar1 = *(int *)(param_1 + 0x50);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_021131f8(iVar1,iVar3,0);
      iVar1 = *(int *)(param_1 + 0x68);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_28,iVar1,**(undefined4 **)(_UNK_0214780c + 0x2147714));
      puVar4 = *(undefined4 **)(_UNK_02147810 + 0x2147728);
      while (iVar1 = func_0x03f5f428(&uStack_28,*puVar4), iVar1 != 0) {
        if (iVar3 != 0) {
          (**(code **)(iVar3 + 0xc))
                    (*(undefined4 *)(iVar3 + 0x20),uStack_1c,*(undefined4 *)(iVar3 + 0x14));
        }
      }
      func_0x03f5f424(&uStack_28,**(undefined4 **)(_UNK_02147814 + 0x2147764));
    }
    else {
      iVar1 = func_0x0229f13c(0xf44,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x021b6430(iVar1,param_1,iVar3,0x7fffffff,0);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x93cf,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = 0;
  func_0x02269548(iVar1,param_1,param_2,param_3);
  return;
}



// ===== FAT.Merge.MergeWorld.<>c__DisplayClass147_0$$.ctor RVA 0x2137a84 =====

void FUN_02147a84(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.MergeWorld$$PostProcessItemComponent RVA 0x2137a8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02147a8c(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
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
  
  pcVar8 = (char *)(_UNK_02147b74 + 0x2147aac);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02147b78 + 0x2147ac0));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x291,0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x6c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x024519b8(iVar3,param_2,**(undefined4 **)(_UNK_02147b7c + 0x2147b38));
    if (iVar3 != 0) {
      if (param_3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0229f06c(0x292,0,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0x292,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,0,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar3 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_3,0);
        func_0x01485228(&uStack_38,0,0);
        iVar6 = *(int *)(iVar3 + 8);
        uVar7 = *(undefined4 *)(iVar3 + 0xc);
        iVar3 = *(int *)(iVar3 + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar4 = 3;
        if (iVar3 == 0) {
          uVar4 = 2;
        }
        func_0x0245495c(iVar6,uVar7,&uStack_38,uVar4,0,0);
        return;
      }
      if ((char)param_3[3] == '\0') {
        return;
      }
      *(undefined1 *)(param_3 + 3) = 0;
      uVar5 = 0;
      iVar3 = func_0x0229f06c(0x27a,0);
      if (iVar3 == 0) {
        iVar3 = FUN_02123568(param_3);
        if (iVar3 != 0) {
          uVar5 = (**(code **)(*param_3 + 0x138))
                            (param_3,(char)param_3[3],*(undefined4 *)(*param_3 + 0x13c));
        }
        if (*(byte *)((int)param_3 + 0xd) == uVar5) {
          return;
        }
        *(char *)((int)param_3 + 0xd) = (char)uVar5;
        piVar2 = (int *)FUN_02123568(param_3);
        if (piVar2 == (int *)0x0) {
          return;
        }
        iVar3 = func_0x0229f06c(0x27d,0,0);
        if (iVar3 == 0) {
          if ((char)piVar2[0x14] != '\0') {
            return;
          }
          iVar3 = FUN_0210cd28(piVar2);
          if (iVar3 == 0) {
            return;
          }
          piVar1 = (int *)FUN_0210cd28(piVar2);
          if (piVar1 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x0229f06c(0x27e,0,0);
          if (iVar3 == 0) {
            iVar3 = piVar1[0xf];
            if (iVar3 == 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x020eaa64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(iVar3 + 0xc))
                      (*(undefined4 *)(iVar3 + 0x20),piVar2,*(undefined4 *)(iVar3 + 0x14));
            return;
          }
          iVar3 = func_0x0229f13c(0x27e,0);
          param_3 = piVar2;
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
        }
        else {
          iVar3 = func_0x0229f13c(0x27d,0);
          piVar1 = piVar2;
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
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
        if (*(int *)(iVar3 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
        }
        func_0x01485278(&uStack_38,piVar1,0);
        func_0x01485278(&uStack_38,param_3,0);
        iVar6 = *(int *)(iVar3 + 8);
        uVar7 = *(undefined4 *)(iVar3 + 0xc);
        iVar3 = *(int *)(iVar3 + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar4 = 3;
        if (iVar3 == 0) {
          uVar4 = 2;
        }
        func_0x0245495c(iVar6,uVar7,&uStack_38,uVar4,0,0);
        return;
      }
      iVar3 = func_0x0229f13c(0x27a,0);
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
      func_0x01485278(&uStack_30,param_3,0);
      iVar6 = *(int *)(iVar3 + 8);
      uVar7 = *(undefined4 *)(iVar3 + 0xc);
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar4 = 2;
      if (iVar3 == 0) {
        uVar4 = 1;
      }
      uStack_50 = 0;
      uStack_4c = 0;
      func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4);
      return;
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x291,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x0218194c(iVar3,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.Merge.MergeWorld$$Serialize RVA 0x2137b80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02147b80(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
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
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_0214881c + 0x2147b9c);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02148820 + 0x2147bb0));
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
    *pcVar10 = '\x01';
  }
  uStack_94 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_90 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_8c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_60 = 0;
  uStack_78 = 0;
  iStack_28 = 0;
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
  iVar1 = func_0x0229f06c(0x5c6c,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar11 = *(undefined4 *)(iVar1 + 8);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(param_2 + 0x38) = uVar11;
    uVar16 = FUN_02140d24(param_1);
    uVar16 = func_0x01458584((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),1000,0);
    *(undefined8 *)(param_2 + 0x30) = uVar16;
    piVar2 = (int *)func_0x021566f4(0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_021488b8 + 0x2147e74)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_02147ebc;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021488b8 + 0x2147e74),0);
LAB_02147ebc:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
    uVar11 = *(undefined4 *)(param_1 + 0x94);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_1 + 0x50);
    *(undefined4 *)(param_2 + 0x3c) = uVar11;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_021139b0(iVar1,param_2,0);
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02148958(iVar1,param_2);
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02139e7c(iVar1,param_2);
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0215ea7c(iVar1,param_2,0);
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01db6828(iVar1,param_2,0);
    iVar1 = *(int *)(param_1 + 100);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02110804(iVar1,param_2,0);
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = FUN_020dc720(iVar1,&iStack_28,0);
    iVar1 = iStack_28;
    if (iVar4 != 0) {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      func_0x0325a3b4(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488bc + 0x2147fe8));
      uStack_38 = uStack_b0;
      uStack_34 = uStack_ac;
      uStack_30 = uStack_a8;
      uStack_2c = uStack_a4;
      puVar3 = *(undefined4 **)(_UNK_021488c0 + 0x2148004);
      puVar13 = *(undefined4 **)(_UNK_021488c4 + 0x214800c);
      while (iVar1 = func_0x03f597e0(&uStack_38,*puVar3), uVar7 = uStack_2c, iVar1 != 0) {
        iVar1 = *(int *)(param_2 + 0x6c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0364baf8(iVar1,uVar7,*puVar13);
      }
      func_0x03f597dc(&uStack_38,**(undefined4 **)(_UNK_021488c8 + 0x2148050));
    }
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x40);
    uVar16 = FUN_02140d24(param_1);
    uVar7 = *(uint *)(param_1 + 0x44);
    iVar1 = *(int *)(param_1 + 0x6c);
    uVar11 = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_2 + 0x44) = uVar11;
    uVar16 = func_0x01458584((uint)uVar16 - uVar7,
                             (int)((ulonglong)uVar16 >> 0x20) -
                             (((int)uVar7 >> 0x1f) + (uint)((uint)uVar16 < uVar7)),1000,0);
    *(undefined8 *)(param_2 + 0x10) = uVar16;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0x10)) {
      iVar1 = *(int *)(param_1 + 0x6c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02454910(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488d0 + 0x21480dc));
      uVar7 = 0;
      uVar14 = 0;
      uStack_48 = uStack_b0;
      uStack_44 = uStack_ac;
      uStack_40 = uStack_a8;
      uStack_3c = uStack_a4;
      puVar3 = *(undefined4 **)(_UNK_021488d4 + 0x2148104);
      while (iVar1 = func_0x03f5a2cc(&uStack_48,*puVar3), iVar1 != 0) {
        uVar5 = uStack_3c & 0x3f;
        uVar8 = uVar5 - 0x20;
        uVar6 = 1 << uVar5;
        if (-1 < (int)uVar8) {
          uVar6 = 0;
        }
        uVar7 = uVar6 | uVar7;
        uVar6 = 1 >> (0x20 - uVar5 & 0xff);
        if (-1 < (int)uVar8) {
          uVar6 = 1 << (uVar8 & 0xff);
        }
        uVar14 = uVar6 | uVar14;
      }
      func_0x03f5a2c8(&uStack_48,**(undefined4 **)(_UNK_021488dc + 0x214814c));
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      *(uint *)(param_2 + 0x48) = uVar7;
      *(uint *)(param_2 + 0x4c) = uVar14;
    }
    iVar1 = *(int *)(param_1 + 0x9c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d64e30(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488e4 + 0x2148190));
    uStack_60 = uStack_b0;
    uStack_5c = uStack_ac;
    uStack_58 = uStack_a8;
    uStack_54 = uStack_a4;
    uStack_50 = uStack_a0;
    puVar13 = *(undefined4 **)(_UNK_021488e8 + 0x21481bc);
    puVar3 = *(undefined4 **)(_UNK_021488ec + 0x21481c4);
    while (iVar1 = func_0x03f9b324(&uStack_60,*puVar13), uVar7 = uStack_54, iVar1 != 0) {
      iVar1 = (int)uStack_50;
      iVar12 = *(int *)(param_2 + 0x50);
      iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_021488f4 + 0x21481ec));
      func_0x01797598(iVar4,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar11 = func_0x02148a58(iVar1);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar4 + 0x10) = uVar11;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar11 = func_0x02148aac(iVar1);
      *(undefined4 *)(iVar4 + 0xc) = uVar11;
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x03464bac(iVar12,uVar7,iVar4,*puVar3);
    }
    func_0x03f9b464(&uStack_60,**(undefined4 **)(_UNK_021488f8 + 0x214826c));
    iVar1 = *(int *)(param_1 + 0x98);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d64e30(&uStack_b0,iVar1,**(undefined4 **)(_UNK_02148900 + 0x214829c));
    uStack_78 = uStack_b0;
    uStack_74 = uStack_ac;
    uStack_70 = uStack_a8;
    uStack_6c = uStack_a4;
    uStack_68 = uStack_a0;
    puVar3 = *(undefined4 **)(_UNK_02148904 + 0x21482c8);
    puVar13 = *(undefined4 **)(_UNK_02148908 + 0x21482d0);
    puVar15 = *(undefined4 **)(_UNK_0214890c + 0x21482d8);
    while (iVar1 = func_0x03f9b324(&uStack_78,*puVar3), uVar7 = uStack_6c, iVar1 != 0) {
      iVar1 = (int)uStack_68;
      uVar11 = func_0x01384be4(*puVar13);
      func_0x01798ae4(uVar11,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02148b00(iVar1,uVar11);
      iVar1 = *(int *)(param_2 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03464bac(iVar1,uVar7,uVar11,*puVar15);
    }
    func_0x03f9b464(&uStack_78,**(undefined4 **)(_UNK_02148914 + 0x2148354));
    uVar11 = **(undefined4 **)(_UNK_0214891c + 0x2148368);
    *(int *)(param_1 + 0xa4) = param_2;
    uVar11 = func_0x01384be4(uVar11);
    func_0x03ccb96c(uVar11,param_1,**(undefined4 **)(_UNK_02148920 + 0x2148390),0);
    FUN_021475dc(param_1,uVar11,0x7fffffff);
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_b0,iVar1,**(undefined4 **)(_UNK_02148924 + 0x21483d0));
    uStack_88 = uStack_b0;
    uStack_84 = uStack_ac;
    uStack_80 = uStack_a8;
    uStack_7c = uStack_a4;
    puVar3 = *(undefined4 **)(_UNK_02148928 + 0x21483ec);
    puVar13 = *(undefined4 **)(_UNK_0214892c + 0x21483f4);
    while (iVar1 = func_0x03f5f428(&uStack_88,*puVar3), uVar7 = uStack_7c, iVar1 != 0) {
      iVar1 = *(int *)(param_2 + 0x5c);
      if (uStack_7c == 0) {
        func_0x01384bf0();
      }
      uVar11 = FUN_0210e5f4(uVar7,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0364baf8(iVar1,uVar11,*puVar13);
    }
    func_0x03f5f424(&uStack_88,**(undefined4 **)(_UNK_02148934 + 0x2148454));
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d6476c(iVar1,**(undefined4 **)(_UNK_0214893c + 0x2148488));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0382ab5c(&uStack_98,iVar1,**(undefined4 **)(_UNK_02148940 + 0x21484b4));
    puVar3 = *(undefined4 **)(_UNK_02148944 + 0x21484c8);
    while (iVar1 = func_0x03f9b9f8(&uStack_98,*puVar3), iVar1 != 0) {
      if (uStack_8c != 0) {
        func_0x02148de8(param_1);
      }
    }
    func_0x03f9b9f4(&uStack_98,**(undefined4 **)(_UNK_0214894c + 0x21484fc));
  }
  else {
    iVar1 = func_0x0229f13c(0x5c6c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.MergeWorld$$_SerializeItem RVA 0x2138de8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02148de8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
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
  
  pcVar4 = (char *)(_UNK_02148ee4 + 0x2148e00);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02148ee8 + 0x2148e14));
    func_0x01384978(*(undefined4 *)(_UNK_02148eec + 0x2148e20));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c78,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c78,0);
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
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02148ef0 + 0x2148e7c));
  func_0x017a1b20(uVar5,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  FUN_02117de4(param_2,uVar5,0);
  iVar1 = *(int *)(param_1 + 0xa4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x28);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = **(int **)(_UNK_02148ef4 + 0x2148ed8);
  pcVar4 = (char *)(_UNK_03652bac + 0x3652b1c);
  if (*pcVar4 == '\0') {
    func_0x02457d54(*(undefined4 *)(_UNK_03652bb0 + 0x3652b30));
    *pcVar4 = '\x01';
  }
  func_0x03031dbc(uVar5,**(undefined4 **)(_UNK_03652bb4 + 0x3652b4c),
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
  *(undefined4 *)(iVar3 + uVar6 * 4 + 0x10) = uVar5;
  return;
}



// ===== FAT.Merge.MergeWorld$$TriggerItemEvent RVA 0x2138ef8 =====

void FUN_02148ef8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x25f,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02148f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))
                (*(undefined4 *)(iVar1 + 0x20),param_2,param_3,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x25f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02180430(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.MergeWorld$$SetSkipSeconds RVA 0x2138f90 =====

void FUN_02148f90(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x9e39,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e39,0);
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
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + param_2;
  return;
}



// ===== FAT.Merge.MergeWorld$$AddPriorityConsumeItem RVA 0x2138ff4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02148ff4(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_021490e8 + 0x214900c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021490ec + 0x2149020));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9eb7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9eb7,0);
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
  iVar1 = *(int *)(param_1 + 0xa8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 8);
  uVar8 = *(uint *)(iVar1 + 0xc);
  piVar2 = *(int **)(_UNK_021490f0 + 0x21490a0);
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



// ===== FAT.Merge.MergeWorld$$ClearPriorityConsumeItem RVA 0x21390f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021490f4(int param_1)

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
  
  pcVar3 = (char *)(_UNK_021491b0 + 0x2149108);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021491b4 + 0x214911c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x147b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x147b,0);
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
    return;
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar4) {
    (*(code *)&SUB_0484e5ec)(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
    return;
  }
  return;
}



// ===== FAT.Merge.MergeWorld$$TryConsumeOrderItem RVA 0x21391b8 =====

/* WARNING: Removing unreachable block (ram,0x02149dc8) */
/* WARNING: Removing unreachable block (ram,0x021499fc) */
/* WARNING: Removing unreachable block (ram,0x02149de4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021491b8(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 *puVar11;
  bool bVar12;
  int iVar13;
  undefined4 uStack_88;
  int iStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int aiStack_34 [4];
  
  pcVar10 = (char *)(_UNK_0214a088 + 0x21491dc);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214a08c + 0x21491f0));
    func_0x01384978(*(undefined4 *)(_UNK_0214a090 + 0x21491fc));
    func_0x01384978(*(undefined4 *)(_UNK_0214a094 + 0x2149208));
    func_0x01384978(*(undefined4 *)(_UNK_0214a098 + 0x2149214));
    func_0x01384978(*(undefined4 *)(_UNK_0214a09c + 0x2149220));
    func_0x01384978(*(undefined4 *)(_UNK_0214a0a0 + 0x214922c));
    func_0x01384978(*(undefined4 *)(_UNK_0214a0a4 + 0x2149238));
    func_0x01384978(*(undefined4 *)(_UNK_0214a0a8 + 0x2149244));
    func_0x01384978(*(undefined4 *)(_UNK_0214a0ac + 0x2149250));
    func_0x01384978(*(undefined4 *)(_UNK_0214a0b0 + 0x214925c));
    func_0x01384978(*(undefined4 *)(_UNK_0214a0b4 + 0x2149268));
    func_0x01384978(*(undefined4 *)(_UNK_0214a0b8 + 0x2149274));
    func_0x01384978(*(undefined4 *)(_UNK_0214a0bc + 0x2149280));
    func_0x01384978(*(undefined4 *)(_UNK_0214a0c0 + 0x214928c));
    func_0x01384978(*(undefined4 *)(_UNK_0214a0c4 + 0x2149298));
    func_0x01384978(*(undefined4 *)(_UNK_0214a0c8 + 0x21492a4));
    func_0x01384978(*(undefined4 *)(_UNK_0214a0cc + 0x21492b0));
    func_0x01384978(*(undefined4 *)(_UNK_0214a0d0 + 0x21492bc));
    func_0x01384978(*(undefined4 *)(_UNK_0214a0d4 + 0x21492c8));
    func_0x01384978(*(undefined4 *)(_UNK_0214a0d8 + 0x21492d4));
    func_0x01384978(*(undefined4 *)(_UNK_0214a0dc + 0x21492e0));
    func_0x01384978(*(undefined4 *)(_UNK_0214a0e0 + 0x21492ec));
    func_0x01384978(*(undefined4 *)(_UNK_0214a0e4 + 0x21492f8));
    *pcVar10 = '\x01';
  }
  iStack_64 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_5c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  aiStack_34[2] = 0;
  aiStack_34[1] = 0;
  aiStack_34[0] = 0;
  iStack_3c = 0;
  uStack_40 = 0;
  iStack_44 = 0;
  iStack_4c = 0;
  uStack_50 = 0;
  iStack_54 = 0;
  uStack_68 = 0;
  iVar2 = func_0x0229f06c(0x1466,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x1466,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021cb09c(iVar2,param_1,param_2,param_3,param_4,0);
    return uVar3;
  }
  if (*(int *)(**(int **)(_UNK_0214a0e8 + 0x2149398) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x028c8d78(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
    func_0x0302a45c(aiStack_34 + 1,0,aiStack_34,**(undefined4 **)(_UNK_0214a0f0 + 0x21493f8));
    func_0x01384bf0();
  }
  else {
    func_0x0302a45c(aiStack_34 + 1,iVar2,aiStack_34,**(undefined4 **)(_UNK_0214a0ec + 0x21493d0));
  }
  puVar11 = *(undefined4 **)(_UNK_0214a0f4 + 0x2149414);
  func_0x0302a45c(&uStack_88,iVar2,&iStack_44,*puVar11);
  iStack_3c = iStack_84;
  uStack_40 = uStack_88;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0302a45c(&uStack_88,iVar2,&iStack_54,*puVar11);
  iStack_4c = iStack_84;
  uStack_50 = uStack_88;
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *param_2;
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_0214a0f8 + 0x2149480)) {
        puVar11 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
        goto LAB_021494cc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar11 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_0214a0f8 + 0x2149480),0);
LAB_021494cc:
  piVar7 = (int *)(*(code *)*puVar11)(param_2,puVar11[1]);
  do {
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar7;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_0214a0fc + 0x2149500)) {
          puVar11 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_02149548;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar11 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_0214a0fc + 0x2149500),0);
LAB_02149548:
    iVar4 = (*(code *)*puVar11)(piVar7,puVar11[1]);
    iVar2 = iStack_44;
    if (iVar4 == 0) {
      bVar12 = true;
      if (param_4 == 0) {
        FUN_021490f4(param_1);
        iVar2 = aiStack_34[0];
        if (aiStack_34[0] == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&uStack_88,iVar2,**(undefined4 **)(_UNK_0214a144 + 0x2149900));
        iVar2 = 0;
        uStack_68 = uStack_88;
        iStack_64 = iStack_84;
        uStack_60 = uStack_80;
        iStack_5c = iStack_7c;
        puVar11 = *(undefined4 **)(_UNK_0214a148 + 0x2149928);
        while (iVar5 = func_0x03f5f428(&uStack_68,*puVar11), iVar4 = iStack_5c, iVar5 != 0) {
          if (iStack_5c == 0) {
            func_0x01384bf0();
          }
          iVar5 = FUN_0210cd28(iVar4,0);
          if (iVar5 == 0) {
            iVar2 = iVar2 + 1;
            iVar5 = FUN_02141880(param_1);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            FUN_02114dfc(iVar5,iVar4,3,0);
            FUN_02148ef8(param_1,iVar4,0xb);
          }
          else {
            iVar5 = FUN_02139cf4(param_1);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            FUN_020dd560(iVar5,iVar4,3,0);
          }
          func_0x0199f5f0(iVar4,0);
        }
        func_0x03f5f424(&uStack_68,**(undefined4 **)(_UNK_0214a14c + 0x21499ec));
        if (0 < iVar2) {
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x74);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x01c8f2dc(iVar2,0);
        }
      }
      goto LAB_02149db0;
    }
    if (iStack_44 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (0 < iVar4) {
      func_0x0145b1dc(*(undefined4 *)(iVar2 + 8),0,iVar4,0);
    }
    iVar2 = iStack_54;
    if (iStack_54 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (0 < iVar4) {
      func_0x0145b1dc(*(undefined4 *)(iVar2 + 8),0,iVar4,0);
    }
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar7;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_0214a100 + 0x21495f4)) {
          puVar11 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_0214963c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar11 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_0214a100 + 0x21495f4),0);
LAB_0214963c:
    (*(code *)*puVar11)(&uStack_88,piVar7,puVar11[1]);
    iVar2 = iStack_84;
    uVar3 = uStack_88;
    func_0x0214a154(param_1,iStack_44,uStack_88);
    iVar4 = iStack_44;
    if (iStack_44 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar4 + 0xc) < iVar2) {
      piVar8 = (int *)func_0x021566f4(0);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar4 = *piVar8;
      uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_0214a104 + 0x21496ac)) {
            puVar11 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xd0);
            goto LAB_021496f4;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar6 != 0);
      }
      puVar11 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_0214a104 + 0x21496ac),2);
LAB_021496f4:
      iVar5 = (*(code *)*puVar11)(piVar8,puVar11[1]);
      iVar4 = iStack_44;
      if (iVar5 == 0) {
        piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0214a118 + 0x2149a54),3);
        puVar11 = *(undefined4 **)(_UNK_0214a11c + 0x2149a6c);
        iVar4 = func_0x01384abc(*puVar11,&uStack_88);
        if (piVar7 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar4 != 0) &&
           (iVar5 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar7 + 0x20)), iVar5 == 0)) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        if (piVar7[3] == 0) {
          func_0x01384bf4();
        }
        iVar5 = iStack_44;
        piVar7[4] = iVar4;
        if (iStack_44 == 0) {
          func_0x01384bf0();
        }
        uStack_6c = *(undefined4 *)(iVar5 + 0xc);
        iVar4 = func_0x01384abc(*puVar11,&uStack_6c);
        if ((iVar4 != 0) &&
           (iVar5 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar7 + 0x20)), iVar5 == 0)) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        if ((uint)piVar7[3] < 2) {
          func_0x01384bf4();
        }
        piVar7[5] = iVar4;
        iStack_70 = iVar2;
        iVar2 = func_0x01384abc(*puVar11,&iStack_70);
        if ((iVar2 != 0) &&
           (iVar4 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        if ((uint)piVar7[3] < 3) {
          func_0x01384bf4();
        }
        piVar7[6] = iVar2;
        if (*(int *)(**(int **)(_UNK_0214a120 + 0x2149b90) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c23bc(**(undefined4 **)(_UNK_0214a124 + 0x2149bac),piVar7,0);
        goto LAB_02149dac;
      }
      if (iStack_44 == 0) {
        func_0x01384bf0();
      }
      iVar5 = iVar2 - *(int *)(iVar4 + 0xc);
      iVar4 = func_0x0214a24c(param_1,iStack_54,uVar3,iVar5);
      if (iVar4 < iVar5) {
        piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0214a108 + 0x2149bcc),4);
        puVar11 = *(undefined4 **)(_UNK_0214a10c + 0x2149be4);
        iVar4 = func_0x01384abc(*puVar11,&uStack_88);
        if (piVar7 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar4 != 0) &&
           (iVar5 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar7 + 0x20)), iVar5 == 0)) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        if (piVar7[3] == 0) {
          func_0x01384bf4();
        }
        iVar5 = iStack_44;
        piVar7[4] = iVar4;
        if (iStack_44 == 0) {
          func_0x01384bf0();
        }
        uStack_6c = *(undefined4 *)(iVar5 + 0xc);
        iVar4 = func_0x01384abc(*puVar11,&uStack_6c);
        if ((iVar4 != 0) &&
           (iVar5 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar7 + 0x20)), iVar5 == 0)) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        if ((uint)piVar7[3] < 2) {
          func_0x01384bf4();
        }
        iVar5 = iStack_54;
        piVar7[5] = iVar4;
        if (iStack_54 == 0) {
          func_0x01384bf0();
        }
        iStack_70 = *(int *)(iVar5 + 0xc);
        iVar4 = func_0x01384abc(*puVar11,&iStack_70);
        if ((iVar4 != 0) &&
           (iVar5 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar7 + 0x20)), iVar5 == 0)) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        if ((uint)piVar7[3] < 3) {
          func_0x01384bf4();
        }
        piVar7[6] = iVar4;
        iStack_74 = iVar2;
        iVar2 = func_0x01384abc(*puVar11,&iStack_74);
        if ((iVar2 != 0) &&
           (iVar4 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        if ((uint)piVar7[3] < 4) {
          func_0x01384bf4();
        }
        piVar7[7] = iVar2;
        uVar3 = func_0x0244f708(**(undefined4 **)(_UNK_0214a110 + 0x2149d70),piVar7,0);
        if (*(int *)(**(int **)(_UNK_0214a114 + 0x2149d8c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2874(uVar3,0);
LAB_02149dac:
        bVar12 = false;
LAB_02149db0:
        func_0x028c98a0(&uStack_50,0);
        func_0x028c98a0(&uStack_40,0);
        func_0x028c98a0(aiStack_34 + 1,0);
        if (!bVar12) {
          return 0;
        }
        return 1;
      }
    }
    iVar4 = iStack_44;
    uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_0214a128 + 0x2149750));
    func_0x03c751dc(uVar3,param_1,**(undefined4 **)(_UNK_0214a12c + 0x2149764),0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x03290edc(iVar4,uVar3,**(undefined4 **)(_UNK_0214a130 + 0x214978c));
    if (0 < iVar2) {
      iVar4 = 0;
      do {
        iVar5 = iStack_44;
        if (iStack_44 == 0) {
          func_0x01384bf0();
        }
        iVar1 = aiStack_34[0];
        iVar13 = iStack_44;
        if (*(int *)(iVar5 + 0xc) <= iVar4) break;
        if (iStack_44 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x0328eea8(iVar13,iVar4,**(undefined4 **)(_UNK_0214a13c + 0x21497e0));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar1 + 8);
        uVar6 = *(uint *)(iVar1 + 0xc);
        piVar8 = *(int **)(_UNK_0214a140 + 0x214981c);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        iVar13 = *piVar8;
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if (uVar6 < *(uint *)(iVar5 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar6 + 1;
          *(undefined4 *)(iVar5 + uVar6 * 4 + 0x10) = uVar3;
        }
        else {
          func_0x0328f170(iVar1,uVar3,
                          *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
        }
        iVar4 = iVar4 + 1;
      } while (iVar2 != iVar4);
    }
    iVar4 = aiStack_34[0];
    iVar2 = iStack_54;
    if (aiStack_34[0] == 0) {
      func_0x01384bf0();
    }
    func_0x0328f380(iVar4,iVar2,**(undefined4 **)(_UNK_0214a134 + 0x214988c));
    if (param_3 != 0) {
      func_0x0328f380(param_3,iStack_54,**(undefined4 **)(_UNK_0214a138 + 0x21498b4));
    }
  } while( true );
}



// ===== FAT.Merge.MergeWorld$$<TryConsumeOrderItem>g__fill_item_board|156_0 RVA 0x213a154 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214a154(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
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
  
  pcVar8 = (char *)(_UNK_0214a230 + 0x214a170);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214a234 + 0x214a184));
    func_0x01384978(*(undefined4 *)(_UNK_0214a238 + 0x214a190));
    func_0x01384978(*(undefined4 *)(_UNK_0214a23c + 0x214a19c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0214a240 + 0x214a1b0));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 8) = param_3;
  *(undefined4 *)(iVar1 + 0xc) = param_2;
  iVar2 = FUN_02139cf4(param_1);
  iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_0214a244 + 0x214a1ec));
  func_0x03ccb96c(iVar3,iVar1,**(undefined4 **)(_UNK_0214a248 + 0x214a208),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0229f06c(0x2a8,0,0);
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
    func_0x0245494c(&uStack_50,0,iVar3,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485278(&uStack_38,iVar3,0);
    iVar2 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar2,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  iVar1 = 4;
  while( true ) {
    iVar5 = *(int *)(iVar2 + 0x80);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar6 = iVar1 - 4;
    if (*(int *)(iVar5 + 0xc) <= (int)uVar6) break;
    iVar5 = *(int *)(iVar2 + 0x80);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar6) {
      func_0x01384bf4();
    }
    iVar5 = *(int *)(iVar5 + iVar1 * 4);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar5 + 8) != 0) {
      iVar5 = *(int *)(iVar2 + 0x80);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar5 + 0xc) <= uVar6) {
        func_0x01384bf4();
      }
      iVar5 = *(int *)(iVar5 + iVar1 * 4);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar7 = *(undefined4 *)(iVar5 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),uVar7,*(undefined4 *)(iVar3 + 0x14));
    }
    iVar1 = iVar1 + 1;
  }
  return;
}



// ===== FAT.Merge.MergeWorld$$<TryConsumeOrderItem>g__fill_item_inventory|156_1 RVA 0x213a24c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214a24c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  
  pcVar7 = (char *)(_UNK_0214a3b4 + 0x214a268);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214a3b8 + 0x214a280));
    func_0x01384978(*(undefined4 *)(_UNK_0214a3bc + 0x214a28c));
    func_0x01384978(*(undefined4 *)(_UNK_0214a3c0 + 0x214a298));
    func_0x01384978(*(undefined4 *)(_UNK_0214a3c4 + 0x214a2a4));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0214a3c8 + 0x214a2b8));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_4;
  *(undefined4 *)(iVar1 + 0x10) = param_3;
  iVar2 = FUN_02141880(param_1);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_0214a3cc + 0x214a2f8));
  func_0x03ccb96c(uVar3,iVar1,**(undefined4 **)(_UNK_0214a3d0 + 0x214a314),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  FUN_021131f8(iVar2,uVar3,0);
  piVar8 = *(int **)(iVar1 + 8);
  if (piVar8 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar8;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_0214a3d4 + 0x214a358)) {
        puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_0214a3a0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_0214a3d4 + 0x214a358),0);
LAB_0214a3a0:
                    /* WARNING: Could not recover jumptable at 0x0214a3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(piVar8,puVar4[1]);
  return;
}



// ===== FAT.Merge.MergeWorld$$RemoveItem RVA 0x213a3d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0214a3d8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
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
  undefined4 auStack_28 [4];
  
  iVar1 = func_0x0229f06c(0x242,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x242,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    auStack_28[0] = uStack_40;
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
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar2,0,0);
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  pcVar3 = (char *)(_UNK_0214a7a0 + 0x214a460);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214a7a4 + 0x214a474));
    func_0x01384978(*(undefined4 *)(_UNK_0214a7a8 + 0x214a480));
    func_0x01384978(*(undefined4 *)(_UNK_0214a7ac + 0x214a48c));
    func_0x01384978(*(undefined4 *)(_UNK_0214a7b0 + 0x214a498));
    func_0x01384978(*(undefined4 *)(_UNK_0214a7b4 + 0x214a4a4));
    func_0x01384978(*(undefined4 *)(_UNK_0214a7b8 + 0x214a4b0));
    *pcVar3 = '\x01';
  }
  auStack_28[0] = 0;
  uStack_2c = 0;
  iVar1 = func_0x0229f06c(0x243,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0214a7bc + 0x214a524));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 8) = param_2;
    *(int *)(iVar1 + 0xc) = param_1;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    iVar4 = FUN_02139cf4(param_1);
    uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_0214a7c0 + 0x214a56c));
    func_0x03ccb96c(uVar6,iVar1,**(undefined4 **)(_UNK_0214a7c4 + 0x214a588),0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    FUN_020dba14(iVar4,uVar6,0);
    iVar4 = *(int *)(param_1 + 0x68);
    uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_0214a7c8 + 0x214a5bc));
    func_0x035b0208(uVar6,iVar1,**(undefined4 **)(_UNK_0214a7cc + 0x214a5d8),0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x03290a28(iVar4,uVar6,**(undefined4 **)(_UNK_0214a7d0 + 0x214a5fc));
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + iVar4;
    if (*(int *)(iVar1 + 0x10) < 1) {
      if (0 < iVar4) {
        FUN_02144f74(param_1,0);
      }
    }
    else if ((0 < iVar4) && (FUN_02144c58(param_1,*(int *)(iVar1 + 0x10),0), iVar4 != 1)) {
      iVar4 = iVar4 + -1;
      do {
        FUN_02144c58(param_1,*(undefined4 *)(iVar1 + 0x10),0);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = 0;
    while( true ) {
      iVar5 = *(int *)(param_1 + 0x50);
      uVar6 = *(undefined4 *)(iVar1 + 8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uStack_30 = 0;
      iVar5 = FUN_021151b8(iVar5,uVar6,auStack_28,&uStack_2c);
      uVar2 = auStack_28[0];
      uVar6 = uStack_2c;
      if (iVar5 == 0) break;
      iVar5 = *(int *)(param_1 + 0x50);
      if (iVar5 == 0) {
        func_0x01384bf0();
        uVar6 = FUN_021138b0(0,uVar2,uVar6,0);
        func_0x01384bf0();
      }
      else {
        uVar6 = FUN_021138b0(iVar5,auStack_28[0],uStack_2c,0);
      }
      FUN_02114dfc(iVar5,uVar6,7,0);
      if (0 < *(int *)(iVar1 + 0x10)) {
        FUN_02144c58(param_1,*(int *)(iVar1 + 0x10),0);
      }
      iVar4 = iVar4 + 1;
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    }
    if (0 < iVar4) {
      iVar4 = func_0x01c24918(0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar4 + 0x74);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x01c8f2dc(iVar4,0);
    }
    iVar4 = *(int *)(iVar1 + 0x14);
    if (0 < iVar4) {
      func_0x019a3ed0(*(undefined4 *)(iVar1 + 8),iVar4,0);
      iVar4 = *(int *)(iVar1 + 0x14);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x243,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = 0;
    iVar4 = func_0x02180128(iVar1,param_1,param_2,0);
  }
  return iVar4;
}



// ===== FAT.Merge.MergeWorld$$ConvertItem RVA 0x213a440 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0214a440(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_0214a7a0 + 0x214a460);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214a7a4 + 0x214a474));
    func_0x01384978(*(undefined4 *)(_UNK_0214a7a8 + 0x214a480));
    func_0x01384978(*(undefined4 *)(_UNK_0214a7ac + 0x214a48c));
    func_0x01384978(*(undefined4 *)(_UNK_0214a7b0 + 0x214a498));
    func_0x01384978(*(undefined4 *)(_UNK_0214a7b4 + 0x214a4a4));
    func_0x01384978(*(undefined4 *)(_UNK_0214a7b8 + 0x214a4b0));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar2 = func_0x0229f06c(0x243,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_0214a7bc + 0x214a524));
    func_0x0244f5a0(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar2 + 8) = param_2;
    *(int *)(iVar2 + 0xc) = param_1;
    *(undefined4 *)(iVar2 + 0x10) = param_3;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    iVar3 = FUN_02139cf4(param_1);
    uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_0214a7c0 + 0x214a56c));
    func_0x03ccb96c(uVar4,iVar2,**(undefined4 **)(_UNK_0214a7c4 + 0x214a588),0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    FUN_020dba14(iVar3,uVar4,0);
    iVar3 = *(int *)(param_1 + 0x68);
    uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_0214a7c8 + 0x214a5bc));
    func_0x035b0208(uVar4,iVar2,**(undefined4 **)(_UNK_0214a7cc + 0x214a5d8),0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03290a28(iVar3,uVar4,**(undefined4 **)(_UNK_0214a7d0 + 0x214a5fc));
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + iVar3;
    if (*(int *)(iVar2 + 0x10) < 1) {
      if (0 < iVar3) {
        FUN_02144f74(param_1,0);
      }
    }
    else if ((0 < iVar3) && (FUN_02144c58(param_1,*(int *)(iVar2 + 0x10),0), iVar3 != 1)) {
      iVar3 = iVar3 + -1;
      do {
        FUN_02144c58(param_1,*(undefined4 *)(iVar2 + 0x10),0);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = 0;
    while( true ) {
      iVar6 = *(int *)(param_1 + 0x50);
      uVar4 = *(undefined4 *)(iVar2 + 8);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = FUN_021151b8(iVar6,uVar4,&uStack_28,&uStack_2c,0);
      uVar1 = uStack_28;
      uVar4 = uStack_2c;
      if (iVar6 == 0) break;
      iVar6 = *(int *)(param_1 + 0x50);
      if (iVar6 == 0) {
        func_0x01384bf0();
        uVar4 = FUN_021138b0(0,uVar1,uVar4,0);
        func_0x01384bf0();
      }
      else {
        uVar4 = FUN_021138b0(iVar6,uStack_28,uStack_2c,0);
      }
      FUN_02114dfc(iVar6,uVar4,7,0);
      if (0 < *(int *)(iVar2 + 0x10)) {
        FUN_02144c58(param_1,*(int *)(iVar2 + 0x10),0);
      }
      iVar3 = iVar3 + 1;
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
    }
    if (0 < iVar3) {
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x74);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x01c8f2dc(iVar3,0);
    }
    iVar3 = *(int *)(iVar2 + 0x14);
    if (0 < iVar3) {
      func_0x019a3ed0(*(undefined4 *)(iVar2 + 8),iVar3,0);
      iVar3 = *(int *)(iVar2 + 0x14);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x243,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02180128(iVar2,param_1,param_2,param_3,0);
  }
  return iVar3;
}



// ===== FAT.Merge.MergeWorld.<>c__DisplayClass158_0$$.ctor RVA 0x213a7d4 =====

void FUN_0214a7d4(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.MergeWorld$$_SortForOrderConsume RVA 0x213a7dc =====

int FUN_0214a7dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x0229f06c(0x1470,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0214a868(param_1,param_2);
    iVar2 = func_0x0214a868(param_1,param_3);
    iVar2 = iVar2 - iVar1;
  }
  else {
    iVar1 = func_0x0229f13c(0x1470,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x021806fc(iVar1,param_1,param_2,param_3,0);
  }
  return iVar2;
}



// ===== FAT.Merge.MergeWorld$$_SortForOrderConsumeScore RVA 0x213a868 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0214a868(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
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
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_0214a9dc + 0x214a884);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214a9e0 + 0x214a898));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1471,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1471,0);
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
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar2,0,0);
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  iVar1 = func_0x02171640(param_2,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = FUN_0210cd28(param_2,0);
  if (iVar4 == 0) {
    iVar4 = 999;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x4c);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    FUN_0210cd7c(&uStack_28,param_2,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    FUN_0210cd7c(&uStack_28,param_2,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = FUN_020ebe6c(iVar4,uStack_28,uStack_24,0);
    iVar4 = 900 - iVar4;
  }
  iVar3 = *(int *)(param_1 + 0xa8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0328ffbc(iVar3,param_2,**(undefined4 **)(_UNK_0214a9e4 + 0x214a9ac));
  iVar4 = iVar1 * 1000 + iVar4;
  if (-1 < iVar3) {
    iVar4 = iVar3 * 1000000 + iVar4 + 1000000;
  }
  return iVar4;
}



// ===== FAT.Merge.MergeWorld$$Deserialize RVA 0x213a9e8 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0214bc3c) */
/* WARNING: Removing unreachable block (ram,0x0214b9ec) */
/* WARNING: Removing unreachable block (ram,0x0214b350) */
/* WARNING: Removing unreachable block (ram,0x0214b344) */
/* WARNING: Removing unreachable block (ram,0x0214b080) */
/* WARNING: Removing unreachable block (ram,0x0214b08c) */
/* WARNING: Removing unreachable block (ram,0x0214b9e0) */
/* WARNING: Removing unreachable block (ram,0x0214bc48) */
/* WARNING: Removing unreachable block (ram,0x0214c20c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214a9e8(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar11 = (char *)(_UNK_0214b97c + 0x214aa08);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214b980 + 0x214aa1c));
    func_0x01384978(*(undefined4 *)(_UNK_0214b984 + 0x214aa28));
    func_0x01384978(*(undefined4 *)(_UNK_0214b988 + 0x214aa34));
    func_0x01384978(*(undefined4 *)(_UNK_0214b98c + 0x214aa40));
    func_0x01384978(*(undefined4 *)(_UNK_0214b990 + 0x214aa4c));
    func_0x01384978(*(undefined4 *)(_UNK_0214b994 + 0x214aa58));
    func_0x01384978(*(undefined4 *)(_UNK_0214b998 + 0x214aa64));
    func_0x01384978(*(undefined4 *)(_UNK_0214b99c + 0x214aa70));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9a0 + 0x214aa7c));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9a4 + 0x214aa88));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9a8 + 0x214aa94));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9ac + 0x214aaa0));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9b0 + 0x214aaac));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9b4 + 0x214aab8));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9b8 + 0x214aac4));
    func_0x01384978(*(undefined4 *)(_UNK_0214bac4 + 0x214aad0));
    func_0x01384978(*(undefined4 *)(_UNK_0214bac8 + 0x214aadc));
    func_0x01384978(*(undefined4 *)(_UNK_0214bacc + 0x214aae8));
    func_0x01384978(*(undefined4 *)(_UNK_0214bad0 + 0x214aaf4));
    func_0x01384978(*(undefined4 *)(_UNK_0214bad4 + 0x214ab00));
    func_0x01384978(*(undefined4 *)(_UNK_0214bad8 + 0x214ab0c));
    func_0x01384978(*(undefined4 *)(_UNK_0214badc + 0x214ab18));
    func_0x01384978(*(undefined4 *)(_UNK_0214bae0 + 0x214ab24));
    func_0x01384978(*(undefined4 *)(_UNK_0214bae4 + 0x214ab30));
    func_0x01384978(*(undefined4 *)(_UNK_0214bae8 + 0x214ab3c));
    func_0x01384978(*(undefined4 *)(_UNK_0214baec + 0x214ab48));
    func_0x01384978(*(undefined4 *)(_UNK_0214baf0 + 0x214ab54));
    func_0x01384978(*(undefined4 *)(_UNK_0214baf4 + 0x214ab60));
    func_0x01384978(*(undefined4 *)(_UNK_0214baf8 + 0x214ab6c));
    func_0x01384978(*(undefined4 *)(_UNK_0214bafc + 0x214ab78));
    func_0x01384978(*(undefined4 *)(_UNK_0214bb7c + 0x214ab84));
    func_0x01384978(*(undefined4 *)(_UNK_0214bb80 + 0x214ab90));
    *pcVar11 = '\x01';
  }
  iStack_3c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_44 = 0;
  iVar2 = func_0x0229f06c(0x5c51,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5c51,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar2,param_1,param_2,param_3,0);
    return;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(param_1 + 0x34);
  iVar2 = *(int *)(iVar2 + 0x38);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(iVar12 + 0xc);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar12,**(undefined4 **)(_UNK_0214bc10 + 0x214ac60));
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar15 = *(uint *)(param_2 + 0x48);
  uVar16 = *(uint *)(param_2 + 0x4c);
  if (uVar15 != 0 || uVar16 != 0) {
    iVar12 = 0;
    puVar14 = *(undefined4 **)(_UNK_0214bc14 + 0x214ac90);
    do {
      if ((uVar15 & 1) != 0) {
        iVar13 = *(int *)(param_1 + 0x6c);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        func_0x024519c0(iVar13,iVar12,*puVar14);
      }
      bVar1 = (byte)uVar16;
      uVar16 = uVar16 >> 1;
      iVar12 = iVar12 + 1;
      uVar15 = (uint)(bVar1 & 1) << 0x1f | uVar15 >> 1;
    } while (uVar15 != 0 || uVar16 != 0);
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar7 = *(undefined4 *)(param_2 + 0x3c);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  uVar8 = *(undefined4 *)(param_2 + 0x34);
  *(int *)(param_1 + 0x80) = *(int *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x84) = uVar8;
  *(undefined4 *)(param_1 + 0x90) = uVar3;
  *(undefined4 *)(param_1 + 0x94) = uVar7;
  if (param_3 != 0) {
    (**(code **)(param_3 + 0xc))(*(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x14));
  }
  piVar4 = (int *)func_0x021566f4(0);
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar4;
  uVar16 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar16 != 0) {
    piVar9 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_0214bcb8 + 0x214ad30)) {
        puVar14 = (undefined4 *)(iVar12 + *piVar9 * 8 + 0xc0);
        goto LAB_0214ad78;
      }
      uVar16 = uVar16 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar16 != 0);
  }
  puVar14 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0214bcb8 + 0x214ad30),0);
LAB_0214ad78:
  (*(code *)*puVar14)(piVar4,puVar14[1]);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar13 = *(int *)(param_1 + 0x9c);
  iVar12 = (*(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x10)) * 1000;
  if (iVar12 < 2) {
    iVar12 = 1;
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0xc);
  *(int *)(param_1 + 0x44) = iVar12;
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar13,**(undefined4 **)(_UNK_0214bd90 + 0x214addc));
  iVar12 = *(int *)(param_2 + 0x50);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x034658b4(iVar12,**(undefined4 **)(_UNK_0214bd94 + 0x214ae00));
  piVar9 = *(int **)(_UNK_0214bd98 + 0x214ae1c);
  puVar14 = *(undefined4 **)(_UNK_0214bd9c + 0x214ae24);
LAB_0214ae20:
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar4;
  uVar16 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar16 != 0) {
    piVar10 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar10[-1] == **(int **)(_UNK_0214bda0 + 0x214ae3c)) {
        puVar5 = (undefined4 *)(iVar12 + *piVar10 * 8 + 0xc0);
        goto LAB_0214ae84;
      }
      uVar16 = uVar16 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar16 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0214bda0 + 0x214ae3c),0);
LAB_0214ae84:
  iVar12 = (*(code *)*puVar5)(piVar4,puVar5[1]);
  if (iVar12 != 0) {
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar4;
    uVar16 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar16 != 0) {
      piVar10 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar10[-1] == *piVar9) {
          puVar5 = (undefined4 *)(iVar12 + *piVar10 * 8 + 0xc0);
          goto LAB_0214aef8;
        }
        uVar16 = uVar16 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar16 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar9,0);
LAB_0214aef8:
    (*(code *)*puVar5)(&uStack_68,piVar4,puVar5[1]);
    iVar12 = iStack_64;
    uVar3 = uStack_68;
    iVar13 = FUN_02142c70(param_1,uStack_68,2);
    if (iVar13 == 0) {
      piVar10 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0214bf34 + 0x214af5c),1);
      uStack_68 = uVar3;
      iVar12 = func_0x01384abc(**(undefined4 **)(_UNK_0214bf64 + 0x214af74),&uStack_68);
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar12 != 0) &&
         (iVar13 = func_0x01384ab8(iVar12,*(undefined4 *)(*piVar10 + 0x20)), iVar13 == 0)) {
        uVar3 = func_0x01384c10();
        func_0x01384aa0(uVar3,0);
      }
      if (piVar10[3] == 0) {
        func_0x01384bf4();
      }
      piVar10[4] = iVar12;
      if (*(int *)(**(int **)(_UNK_0214bfc0 + 0x214afdc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c23bc(*puVar14,piVar10,0);
    }
    else {
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x0214c448(iVar13,*(undefined4 *)(iVar12 + 0xc),*(undefined4 *)(iVar12 + 0x10));
    }
    goto LAB_0214ae20;
  }
  if (piVar4 != (int *)0x0) {
    iVar12 = *piVar4;
    uVar16 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar16 != 0) {
      piVar9 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_0214c004 + 0x214b020)) {
          puVar5 = (undefined4 *)(iVar12 + *piVar9 * 8 + 0xc0);
          goto LAB_0214b068;
        }
        uVar16 = uVar16 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar16 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0214c004 + 0x214b020),0);
LAB_0214b068:
    (*(code *)*puVar5)(piVar4,puVar5[1]);
  }
  iVar12 = *(int *)(param_1 + 0x98);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar12,**(undefined4 **)(_UNK_0214c090 + 0x214b0b0));
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(param_2 + 0x58);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x034658b4(iVar12,**(undefined4 **)(_UNK_0214c0c0 + 0x214b0e4));
  piVar9 = *(int **)(_UNK_0214c0c4 + 0x214b100);
LAB_0214b0fc:
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar4;
  uVar16 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar16 != 0) {
    piVar10 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar10[-1] == **(int **)(_UNK_0214c0c8 + 0x214b118)) {
        puVar5 = (undefined4 *)(iVar12 + *piVar10 * 8 + 0xc0);
        goto LAB_0214b160;
      }
      uVar16 = uVar16 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar16 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0214c0c8 + 0x214b118),0);
LAB_0214b160:
  iVar12 = (*(code *)*puVar5)(piVar4,puVar5[1]);
  if (iVar12 != 0) {
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar4;
    uVar16 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar16 != 0) {
      piVar10 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar10[-1] == *piVar9) {
          puVar5 = (undefined4 *)(iVar12 + *piVar10 * 8 + 0xc0);
          goto LAB_0214b1d4;
        }
        uVar16 = uVar16 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar16 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar9,0);
LAB_0214b1d4:
    (*(code *)*puVar5)(&uStack_68,piVar4,puVar5[1]);
    iVar12 = iStack_64;
    uVar3 = uStack_68;
    iVar13 = FUN_0214225c(param_1,uStack_68,0xd);
    if (iVar13 == 0) {
      piVar10 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0214c218 + 0x214b220),1);
      uStack_68 = uVar3;
      iVar12 = func_0x01384abc(**(undefined4 **)(_UNK_0214c228 + 0x214b238),&uStack_68);
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar12 != 0) &&
         (iVar13 = func_0x01384ab8(iVar12,*(undefined4 *)(*piVar10 + 0x20)), iVar13 == 0)) {
        uVar3 = func_0x01384c10();
        func_0x01384aa0(uVar3,0);
      }
      if (piVar10[3] == 0) {
        func_0x01384bf4();
      }
      piVar10[4] = iVar12;
      if (*(int *)(**(int **)(_UNK_0214c258 + 0x214b2a0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c23bc(*puVar14,piVar10,0);
    }
    else {
      func_0x0214c4c8(iVar13,iVar12);
    }
    goto LAB_0214b0fc;
  }
  if (piVar4 != (int *)0x0) {
    iVar12 = *piVar4;
    uVar16 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar16 != 0) {
      piVar9 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_0214c2b4 + 0x214b2e4)) {
          puVar14 = (undefined4 *)(iVar12 + *piVar9 * 8 + 0xc0);
          goto LAB_0214b32c;
        }
        uVar16 = uVar16 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar16 != 0);
    }
    puVar14 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0214c2b4 + 0x214b2e4),0);
LAB_0214b32c:
    (*(code *)*puVar14)(piVar4,puVar14[1]);
  }
  iVar12 = func_0x01c24918(0);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(iVar12 + 0xc);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x01ca5188(iVar12,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(param_2 + 0x28);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x03653608(iVar12,**(undefined4 **)(_UNK_0214c3b0 + 0x214b3bc));
  do {
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar4;
    uVar16 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar16 != 0) {
      piVar9 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_0214c3dc + 0x214b3e8)) {
          puVar14 = (undefined4 *)(iVar12 + *piVar9 * 8 + 0xc0);
          goto LAB_0214b430;
        }
        uVar16 = uVar16 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar16 != 0);
    }
    puVar14 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0214c3dc + 0x214b3e8),0);
LAB_0214b430:
    iVar12 = (*(code *)*puVar14)(piVar4,puVar14[1]);
    if (iVar12 == 0) {
      iVar2 = 0x15;
      iVar12 = 0;
      goto LAB_0214b574;
    }
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar4;
    uVar16 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar16 != 0) {
      piVar9 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_0214c3b8 + 0x214b464)) {
          puVar14 = (undefined4 *)(iVar12 + *piVar9 * 8 + 0xc0);
          goto LAB_0214b4b4;
        }
        uVar16 = uVar16 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar16 != 0);
    }
    puVar14 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0214c3b8 + 0x214b464),0);
LAB_0214b4b4:
    iVar12 = (*(code *)*puVar14)(piVar4,puVar14[1]);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar7 = *(undefined4 *)(iVar12 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar13 = func_0x01cccae0(iVar2,uVar7,0);
    if ((iVar13 == 0) && (iVar13 = func_0x02168818(*(undefined4 *)(iVar12 + 0x10),0), iVar13 == 0))
    break;
    func_0x0214c9b0(param_1,iVar12,uVar3,&uStack_28);
    iVar13 = *(int *)(param_1 + 0x34);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    uVar7 = uStack_28;
    iVar13 = *(int *)(iVar13 + 0xc);
    uVar8 = *(undefined4 *)(iVar12 + 0xc);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    func_0x03d6491c(iVar13,uVar8,uVar7,**(undefined4 **)(_UNK_0214c3d8 + 0x214b558));
  } while( true );
  uStack_68 = *(undefined4 *)(iVar12 + 0xc);
  uVar3 = func_0x01384988(*(undefined4 *)(_UNK_0214c3bc + 0x214bdb8));
  uVar3 = func_0x01384abc(uVar3,&uStack_68);
  uStack_48 = *(undefined4 *)(iVar12 + 0x10);
  uVar7 = func_0x01384988(*(undefined4 *)(_UNK_0214c3c0 + 0x214bdd8));
  uVar7 = func_0x01384abc(uVar7,&uStack_48);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uStack_4c = *(undefined4 *)(param_2 + 0x38);
  uVar8 = func_0x01384988(*(undefined4 *)(_UNK_0214c3c4 + 0x214be0c));
  uVar8 = func_0x01384abc(uVar8,&uStack_4c);
  uVar6 = func_0x01384988(*(undefined4 *)(_UNK_0214c3c8 + 0x214be24));
  uVar3 = func_0x02450228(uVar6,uVar3,uVar7,uVar8,0);
  iVar2 = func_0x01384988(*(undefined4 *)(_UNK_0214c3cc + 0x214be4c));
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2944(uVar3,0);
  func_0x01384988(*(undefined4 *)(_UNK_0214c3d0 + 0x214be74));
  uVar7 = func_0x01384be4();
  func_0x0244f904(uVar7,uVar3,0);
  uVar3 = func_0x01384988(*(undefined4 *)(_UNK_0214c3d4 + 0x214be94));
  func_0x01384aa0(uVar7,uVar3);
  uVar17 = func_0x01384928();
  if ((int)((ulonglong)uVar17 >> 0x20) != 1) {
    if (piVar4 != (int *)0x0) {
      iVar2 = *piVar4;
      uVar16 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar16 != 0) {
        piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_0214c3ec + 0x214c1ac)) {
            puVar14 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
            goto LAB_0214c1f4;
          }
          uVar16 = uVar16 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar16 != 0);
      }
      puVar14 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0214c3ec + 0x214c1ac),0);
LAB_0214c1f4:
      (*(code *)*puVar14)(piVar4,puVar14[1]);
    }
    func_0x01459844((int)uVar17);
    func_0x01062280();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar9 = (int *)func_0x0145b008((int)uVar17);
  iVar12 = *piVar9;
  iVar2 = 0;
  func_0x0145b0f8();
LAB_0214b574:
  if (piVar4 != (int *)0x0) {
    iVar13 = *piVar4;
    uVar16 = (uint)*(ushort *)(iVar13 + 0xb6);
    if (uVar16 != 0) {
      piVar9 = (int *)(*(int *)(iVar13 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_0214c3e0 + 0x214b590)) {
          puVar14 = (undefined4 *)(iVar13 + *piVar9 * 8 + 0xc0);
          goto LAB_0214b5d8;
        }
        uVar16 = uVar16 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar16 != 0);
    }
    puVar14 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0214c3e0 + 0x214b590),0);
LAB_0214b5d8:
    (*(code *)*puVar14)(piVar4,puVar14[1]);
  }
  if (iVar12 != 0) {
    func_0x01384bec(iVar12);
  }
  if (iVar2 != 0x15 && iVar2 != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64e30(&uStack_68,iVar2,**(undefined4 **)(_UNK_0214c3e4 + 0x214b638));
  uStack_40 = uStack_68;
  iStack_3c = iStack_64;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_30 = uStack_58;
  puVar14 = *(undefined4 **)(_UNK_0214c3e8 + 0x214b664);
  while (iVar2 = func_0x03f9b324(&uStack_40,*puVar14), iVar2 != 0) {
    iVar2 = (int)uStack_30;
    if ((int)uStack_30 == 0) {
      func_0x01384bf0();
    }
    FUN_02117bcc(iVar2,0);
  }
  func_0x03f9b464(&uStack_40,**(undefined4 **)(_UNK_0214c3f0 + 0x214b6a0));
  iVar12 = *(int *)(param_1 + 0x34);
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  uVar3 = *(undefined4 *)(iVar12 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  FUN_02113ec4(iVar2,param_2,uVar3,0);
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0214cca8(iVar2,param_2);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(param_2 + 0x5c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_0214c3f8 + 0x214b728));
  do {
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar4;
    uVar16 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar16 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_0214c428 + 0x214b750)) {
          puVar14 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_0214b798;
        }
        uVar16 = uVar16 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar16 != 0);
    }
    puVar14 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0214c428 + 0x214b750),0);
LAB_0214b798:
    iVar2 = (*(code *)*puVar14)(piVar4,puVar14[1]);
    if (iVar2 == 0) {
      if (piVar4 == (int *)0x0) goto LAB_0214b9d8;
      iVar2 = *piVar4;
      uVar16 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar16 == 0) goto LAB_0214b96c;
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      break;
    }
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar4;
    uVar16 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar16 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_0214c400 + 0x214b7cc)) {
          puVar14 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_0214b814;
        }
        uVar16 = uVar16 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar16 != 0);
    }
    puVar14 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0214c400 + 0x214b7cc),0);
LAB_0214b814:
    uVar3 = (*(code *)*puVar14)(piVar4,puVar14[1]);
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03d66780(iVar2,uVar3,&uStack_44,**(undefined4 **)(_UNK_0214c404 + 0x214b854));
    uVar7 = uStack_44;
    if (iVar2 == 0) {
      uStack_68 = uVar3;
      uVar3 = func_0x01384988(*(undefined4 *)(_UNK_0214c408 + 0x214bccc));
      uVar3 = func_0x01384abc(uVar3,&uStack_68);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uStack_48 = *(undefined4 *)(param_2 + 0x38);
      uVar7 = func_0x01384988(*(undefined4 *)(_UNK_0214c40c + 0x214bd00));
      uVar7 = func_0x01384abc(uVar7,&uStack_48);
      uVar8 = func_0x01384988(*(undefined4 *)(_UNK_0214c410 + 0x214bd18));
      uVar3 = func_0x0244f690(uVar8,uVar3,uVar7,0);
      iVar2 = func_0x01384988(*(undefined4 *)(_UNK_0214c414 + 0x214bd38));
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2944(uVar3,0);
      func_0x01384988(*(undefined4 *)(_UNK_0214c418 + 0x214bd60));
      uVar7 = func_0x01384be4();
      func_0x0244f904(uVar7,uVar3,0);
      uVar3 = func_0x01384988(*(undefined4 *)(_UNK_0214c41c + 0x214bd80));
      func_0x01384aa0(uVar7,uVar3);
      func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = *(int *)(param_1 + 0x68);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar2 + 8);
    uVar16 = *(uint *)(iVar2 + 0xc);
    piVar9 = *(int **)(_UNK_0214c420 + 0x214b8a0);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    iVar12 = *piVar9;
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    if (uVar16 < *(uint *)(iVar13 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar16 + 1;
      *(undefined4 *)(iVar13 + uVar16 * 4 + 0x10) = uVar7;
    }
    else {
      func_0x0328f170(iVar2,uVar7,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
    }
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d66094(iVar2,uVar3,**(undefined4 **)(_UNK_0214c424 + 0x214b910));
  } while( true );
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar9 = piVar9 + 2;
    if (uVar16 == 0) break;
    if (piVar9[-1] == **(int **)(_UNK_0214c42c + 0x214b940)) {
      puVar14 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
      goto LAB_0214b9c8;
    }
  }
LAB_0214b96c:
  puVar14 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0214c42c + 0x214b940),0);
LAB_0214b9c8:
  (*(code *)*puVar14)(piVar4,puVar14[1]);
LAB_0214b9d8:
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(param_1 + 0x34);
  iVar2 = *(int *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x18);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  uVar3 = *(undefined4 *)(iVar12 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  FUN_020daf18(iVar2,uVar3,0);
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_0214c430 + 0x214ba60));
  do {
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar4;
    uVar16 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar16 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_0214c43c + 0x214ba88)) {
          puVar14 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_0214bb0c;
        }
        uVar16 = uVar16 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar16 != 0);
    }
    puVar14 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0214c43c + 0x214ba88),0);
LAB_0214bb0c:
    iVar2 = (*(code *)*puVar14)(piVar4,puVar14[1]);
    if (iVar2 == 0) break;
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar4;
    uVar16 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar16 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_0214c438 + 0x214bb40)) {
          puVar14 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_0214bb90;
        }
        uVar16 = uVar16 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar16 != 0);
    }
    puVar14 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0214c438 + 0x214bb40),0);
LAB_0214bb90:
    uVar3 = (*(code *)*puVar14)(piVar4,puVar14[1]);
    FUN_02144c58(param_1,uVar3,1);
  } while( true );
  if (piVar4 != (int *)0x0) {
    iVar2 = *piVar4;
    uVar16 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar16 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_0214c440 + 0x214bbd4)) {
          puVar14 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_0214bc24;
        }
        uVar16 = uVar16 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar16 != 0);
    }
    puVar14 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0214c440 + 0x214bbd4),0);
LAB_0214bc24:
    (*(code *)*puVar14)(piVar4,puVar14[1]);
  }
  iVar2 = *(int *)(param_1 + 0x58);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  FUN_02139c14(iVar2,param_2);
  iVar2 = *(int *)(param_1 + 0x5c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0215e864(iVar2,param_2,0);
  iVar2 = *(int *)(param_1 + 0x60);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01db6ad4(iVar2,param_2,0);
  return;
}



// ===== FAT.Merge.MergeWorld$$_ReplaceItemFilter RVA 0x213c9b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214c9b0(undefined4 param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iStack_24;
  
  pcVar6 = (char *)(_UNK_0214cc88 + 0x214c9d0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214cc8c + 0x214c9e8));
    func_0x01384978(*(undefined4 *)(_UNK_0214cc90 + 0x214c9f4));
    func_0x01384978(*(undefined4 *)(_UNK_0214cc94 + 0x214ca00));
    *pcVar6 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x5c57,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar7 = *(undefined4 *)(param_2 + 0x10);
    if (param_3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *param_3;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_0214cc98 + 0x214ca90)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xf8);
          goto LAB_0214cad8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_0214cc98 + 0x214ca90),7);
LAB_0214cad8:
    iVar1 = (*(code *)*puVar2)(param_3,uVar7,&iStack_24,puVar2[1]);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = iStack_24;
    if (iVar1 == 0) {
      uVar7 = *(undefined4 *)(param_2 + 0xc);
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0214cca4 + 0x214cc0c));
      FUN_02116fb0(iVar1,uVar7,param_1,0);
      *param_4 = iVar1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_0211828c(iVar1,param_2,0);
    }
    else {
      uVar7 = *(undefined4 *)(param_2 + 0x10);
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      uVar9 = *(undefined4 *)(iVar5 + 0x14);
      if (*(int *)(**(int **)(_UNK_0214cc9c + 0x214cb28) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01997760(uVar7,uVar9,0);
      uVar7 = *(undefined4 *)(param_2 + 0xc);
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0214cca0 + 0x214cb5c));
      FUN_02116fb0(iVar1,uVar7,param_1,0);
      *param_4 = iVar1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_021181f4(iVar1,param_2,0);
      iVar1 = iStack_24;
      if (*(int *)(param_2 + 0x30) == 0) {
        iVar5 = *param_4;
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        uVar7 = *(undefined4 *)(iVar1 + 0x14);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        FUN_021195d0(iVar5,uVar7,0);
      }
      else {
        iVar5 = *(int *)(*(int *)(param_2 + 0x30) + 0x18);
        iVar8 = *param_4;
        if (iVar5 < 2) {
          iVar5 = 1;
        }
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        uVar7 = *(undefined4 *)(iVar1 + 0x14);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        FUN_02119054(iVar8,uVar7,iVar5);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5c57,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02235be0(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.MergeWorld$$_SetRewardListUnread RVA 0x213cd50 =====

void FUN_0214cd50(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x2ac,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2ac,0);
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
  if (*(int *)(param_1 + 0x94) == param_2) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x94) = param_2;
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0214cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.Merge.MergeWorld.<>c__DisplayClass156_0$$.ctor RVA 0x213cdd8 =====

void FUN_0214cdd8(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.MergeWorld.<>c__DisplayClass156_1$$.ctor RVA 0x213cde0 =====

void FUN_0214cde0(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.MergeWorld.MergeWorldInternal$$FAT.Merge.IMergeWorldPrivate.get_world RVA 0x213cde8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0214cde8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb44a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb44a,0);
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
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.Merge.MergeWorld.MergeWorldInternal$$FAT.Merge.IMergeWorldPrivate.GrabUnusedItem RVA 0x213ce3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0214ce3c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0214cf4c + 0x214ce5c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214cf50 + 0x214ce70));
    func_0x01384978(*(undefined4 *)(_UNK_0214cf54 + 0x214ce7c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb44b,0);
  if (iVar1 == 0) {
    *param_3 = 0;
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d66780(iVar1,param_2,param_3,**(undefined4 **)(_UNK_0214cf58 + 0x214cf00));
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0(0);
      }
      func_0x03d66094(iVar1,param_2,**(undefined4 **)(_UNK_0214cf5c + 0x214cf38));
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb44b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021ce7a0(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.Merge.MergeWorld.BonusClaimRewardData$$GrabReward RVA 0x213cf60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0214cf60(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5eff,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5eff,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0217a1dc + 0x217a0fc);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0217a1e0 + 0x217a110),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0217a1e4 + 0x217a1cc));
    return uVar5;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = 0;
  return uVar5;
}



// ===== FAT.Merge.MergeWorld.<>c$$.cctor RVA 0x213cfbc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214cfbc(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0214d014 + 0x214cfcc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214d018 + 0x214cfe0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0214d01c + 0x214cff4);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.Merge.MergeWorld.<>c$$.ctor RVA 0x213d020 =====

void FUN_0214d020(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.MergeWorld.<>c$$<SortRewardList>b__122_0 RVA 0x213d028 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0214d028(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int extraout_r3;
  int iVar10;
  char *pcVar11;
  int *piVar12;
  
  pcVar11 = (char *)(_UNK_0214d22c + 0x214d040);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214d230 + 0x214d054));
    *pcVar11 = '\x01';
  }
  piVar1 = (int *)func_0x021566f4(0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = FUN_0210e2d4(param_2,0);
  if (piVar1 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *piVar1;
  piVar12 = *(int **)(_UNK_0214d234 + 0x214d0a0);
  uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
  iVar6 = *piVar12;
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar9[-1] == iVar6) {
        puVar4 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0x118);
        goto LAB_0214d0e8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,iVar6,0xb);
LAB_0214d0e8:
  iVar3 = (*(code *)*puVar4)(piVar1,uVar2,puVar4[1]);
  piVar1 = (int *)func_0x021566f4(0);
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = FUN_0210e2d4(param_3,0);
  if (piVar1 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar6 = *piVar1;
  iVar7 = *piVar12;
  uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
  if (uVar8 != 0) {
    piVar12 = (int *)(*(int *)(iVar6 + 0x58) + 4);
    do {
      if (piVar12[-1] == iVar7) {
        puVar4 = (undefined4 *)(iVar6 + *piVar12 * 8 + 0x118);
        goto LAB_0214d184;
      }
      uVar8 = uVar8 - 1;
      piVar12 = piVar12 + 2;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar1,iVar7,0xb);
LAB_0214d184:
  iVar6 = (*(code *)*puVar4)(piVar1,uVar2,puVar4[1]);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = FUN_0210e2d4(param_2,0);
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  iVar7 = iVar7 + (short)(iVar7 / 1000000) * -1000000;
  iVar5 = FUN_0210e2d4(param_3,0);
  iVar10 = extraout_r3;
  if (iVar3 != 0) {
    iVar10 = *(int *)(iVar3 + 0x10);
  }
  if (iVar3 != 0) {
    iVar7 = iVar10 * 1000000 + iVar7;
  }
  iVar5 = iVar5 + (short)(((short)(iVar5 / 1000000) + (short)(iVar5 >> 0x1f)) -
                         (short)((longlong)iVar5 * 0x431bde83 >> 0x3f)) * -1000000;
  if (iVar6 != 0) {
    iVar5 = *(int *)(iVar6 + 0x10) * 1000000 + iVar5;
  }
  return iVar7 - iVar5;
}



// ===== FAT.Merge.MergeWorld.<>c__DisplayClass124_0$$<FindRewardCount>b__0 RVA 0x213d238 =====

bool FUN_0214d238(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_0210e2d4(param_2,0);
  return iVar1 == *(int *)(param_1 + 8);
}



// ===== FAT.Merge.MergeWorld.<>c__DisplayClass147_0$$<DisableComponent>b__0 RVA 0x213d270 =====

void FUN_0214d270(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
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
  
  uVar9 = *(undefined4 *)(param_1 + 8);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  piVar5 = (int *)FUN_02119a3c(param_2,uVar9,1,0);
  if (piVar5 == (int *)0x0) {
    return;
  }
  bVar1 = *(char *)(param_1 + 0xc) == '\0';
  iVar3 = func_0x0229f06c(0x292,0,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x292,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,bVar1,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,piVar5,0);
    func_0x01485228(&uStack_38,bVar1,0);
    iVar8 = *(int *)(iVar3 + 8);
    uVar9 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar3 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_38,uVar6,0,0);
    return;
  }
  if ((bool)(char)piVar5[3] != bVar1) {
    *(bool *)(piVar5 + 3) = bVar1;
    uVar7 = 0;
    iVar3 = func_0x0229f06c(0x27a,0);
    if (iVar3 != 0) {
      iVar3 = func_0x0229f13c(0x27a,0);
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
      func_0x01485278(&uStack_30,piVar5,0);
      iVar8 = *(int *)(iVar3 + 8);
      uVar9 = *(undefined4 *)(iVar3 + 0xc);
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar6 = 2;
      if (iVar3 == 0) {
        uVar6 = 1;
      }
      uStack_50 = 0;
      uStack_4c = 0;
      func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6);
      return;
    }
    iVar3 = FUN_02123568(piVar5);
    if (iVar3 != 0) {
      uVar7 = (**(code **)(*piVar5 + 0x138))
                        (piVar5,(char)piVar5[3],*(undefined4 *)(*piVar5 + 0x13c));
    }
    if (*(byte *)((int)piVar5 + 0xd) == uVar7) {
      return;
    }
    *(char *)((int)piVar5 + 0xd) = (char)uVar7;
    piVar4 = (int *)FUN_02123568(piVar5);
    if (piVar4 == (int *)0x0) {
      return;
    }
    iVar3 = func_0x0229f06c(0x27d,0,0);
    if (iVar3 == 0) {
      if ((char)piVar4[0x14] != '\0') {
        return;
      }
      iVar3 = FUN_0210cd28(piVar4);
      if (iVar3 == 0) {
        return;
      }
      piVar2 = (int *)FUN_0210cd28(piVar4);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0229f06c(0x27e,0,0);
      if (iVar3 == 0) {
        iVar3 = piVar2[0xf];
        if (iVar3 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x020eaa64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar3 + 0xc))
                  (*(undefined4 *)(iVar3 + 0x20),piVar4,*(undefined4 *)(iVar3 + 0x14));
        return;
      }
      iVar3 = func_0x0229f13c(0x27e,0);
      piVar5 = piVar4;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar3 = func_0x0229f13c(0x27d,0);
      piVar2 = piVar4;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,piVar5,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,piVar2,0);
    func_0x01485278(&uStack_38,piVar5,0);
    iVar8 = *(int *)(iVar3 + 8);
    uVar9 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar3 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_38,uVar6,0,0);
    return;
  }
  return;
}



// ===== FAT.Merge.MergeWorld.<>c__DisplayClass156_0$$<TryConsumeOrderItem>b__2 RVA 0x213d2c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214d2c4(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0214d3b4 + 0x214d2dc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214d3b8 + 0x214d2f0));
    *pcVar6 = '\x01';
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_0210e2d4(param_2,0);
  if (iVar1 != *(int *)(param_1 + 8)) {
    return;
  }
  iVar1 = func_0x02166c84(param_2,0);
  if (iVar1 == 0) {
    return;
  }
  piVar5 = *(int **)(param_1 + 0xc);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar5;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_0214d3bc + 0x214d350)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
        goto LAB_0214d39c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_0214d3bc + 0x214d350),2);
LAB_0214d39c:
                    /* WARNING: Could not recover jumptable at 0x0214d3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar5,param_2,puVar2[1]);
  return;
}



// ===== FAT.Merge.MergeWorld.<>c__DisplayClass156_1$$<TryConsumeOrderItem>b__3 RVA 0x213d3c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214d3c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_0214d52c + 0x214d3d8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214d530 + 0x214d3ec));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(param_1 + 8);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar7;
  piVar8 = *(int **)(_UNK_0214d534 + 0x214d414);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar3 = *piVar8;
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == iVar3) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
        goto LAB_0214d45c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar7,iVar3,0);
LAB_0214d45c:
  iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
  if (iVar1 < *(int *)(param_1 + 0xc)) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_0210e2d4(param_2,0);
    if ((iVar1 == *(int *)(param_1 + 0x10)) && (iVar1 = func_0x02166d9c(param_2,0), iVar1 != 0)) {
      piVar7 = *(int **)(param_1 + 8);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar7;
      iVar3 = *piVar8;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar3) {
            puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xd0);
            goto LAB_0214d514;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar7,iVar3,2);
LAB_0214d514:
                    /* WARNING: Could not recover jumptable at 0x0214d528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(piVar7,param_2,puVar2[1]);
      return;
    }
  }
  return;
}



// ===== FAT.Merge.MergeWorld.<>c__DisplayClass158_0$$<ConvertItem>b__0 RVA 0x213d538 =====

void FUN_0214d538(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_0210e2d4(param_2,0);
  if (iVar1 == *(int *)(param_1 + 8)) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    FUN_0210cd7c(&uStack_20,param_2,0);
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_02139cf4(iVar1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_020dd560(iVar1,param_2,7,0);
    if (0 < *(int *)(param_1 + 0x10)) {
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_02139cf4(iVar1);
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_020ddf40(iVar1,uVar2,uStack_20,uStack_1c,0,0,0);
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  return;
}



// ===== FAT.Merge.MergeWorld.<>c__DisplayClass158_0$$<ConvertItem>b__1 RVA 0x213d63c =====

bool FUN_0214d63c(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_0210e2d4(param_2,0);
  return iVar1 == *(int *)(param_1 + 8);
}


