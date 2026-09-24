/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ClearBoardResult$$get_isNoReward RVA 0x2151874 =====

undefined4 FUN_02161874(undefined4 param_1)

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
  iVar1 = func_0x0229f06c(0xb518,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb518,0);
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
  iVar1 = func_0x02161900(param_1);
  if ((iVar1 < 1) && (iVar1 = func_0x02161954(param_1), iVar1 < 1)) {
    iVar1 = func_0x021619a8(param_1);
    uVar3 = 0;
    if (iVar1 < 1) {
      uVar3 = 1;
    }
  }
  return uVar3;
}



// ===== FAT.Merge.ClearBoardResult$$CalculateTotalGem RVA 0x2151900 =====

undefined4 FUN_02161900(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb519,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb519,0);
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
  return 0;
}



// ===== FAT.Merge.ClearBoardResult$$CalculateTotalEnergy RVA 0x2151954 =====

undefined4 FUN_02161954(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb51a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb51a,0);
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
  return 0;
}



// ===== FAT.Merge.ClearBoardResult$$CalculateTotalMergeCoin RVA 0x21519a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_021619a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_02161b18 + 0x21619c0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02161b1c + 0x21619d4));
    func_0x01384978(*(undefined4 *)(_UNK_02161b20 + 0x21619e0));
    func_0x01384978(*(undefined4 *)(_UNK_02161b24 + 0x21619ec));
    func_0x01384978(*(undefined4 *)(_UNK_02161b28 + 0x21619f8));
    *pcVar3 = '\x01';
  }
  iVar4 = 0;
  iVar1 = func_0x0229f06c(0xb51b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb51b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    iStack_24 = uStack_3c;
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
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = 0;
  puVar7 = *(undefined4 **)(_UNK_02161b2c + 0x2161a60);
  while( true ) {
    iVar6 = *(int *)(param_1 + 8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar6 + 0xc) <= iVar4) break;
    iVar6 = *(int *)(param_1 + 8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x03381218(&uStack_30,iVar6,iVar4,*puVar7);
    iVar4 = iVar4 + 1;
    iVar1 = iStack_28 + iVar1;
  }
  iVar4 = 0;
  puVar7 = *(undefined4 **)(_UNK_02161b30 + 0x2161ac0);
  while( true ) {
    iVar6 = *(int *)(param_1 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar6 + 0xc) <= iVar4) break;
    iVar6 = *(int *)(param_1 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x03384220(&uStack_30,iVar6,iVar4,*puVar7);
    iVar4 = iVar4 + 1;
    iVar1 = iStack_24 + iVar1;
  }
  return iVar1;
}



// ===== FAT.Merge.ClearBoardResult$$ToString RVA 0x2151b34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02161b34(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
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
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_02161c70 + 0x2161b4c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02161c74 + 0x2161b60));
    func_0x01384978(*(undefined4 *)(_UNK_02161c78 + 0x2161b6c));
    func_0x01384978(*(undefined4 *)(_UNK_02161c7c + 0x2161b78));
    func_0x01384978(*(undefined4 *)(_UNK_02161c80 + 0x2161b84));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0xb51c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb51c,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar5,&uStack_30,uVar3,0,0);
    func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return;
  }
  uStack_1c = FUN_021619a8(param_1);
  uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_02161c84 + 0x2161bec),&uStack_1c);
  uVar7 = **(undefined4 **)(_UNK_02161c88 + 0x2161c14);
  if (*(int *)(param_1 + 8) != 0) {
    uVar5 = func_0x02fc4010(*(int *)(param_1 + 8),**(undefined4 **)(_UNK_02161c8c + 0x2161c24));
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar2 = func_0x02fc4518(*(int *)(param_1 + 0xc),**(undefined4 **)(_UNK_02161c90 + 0x2161c4c));
  }
  uStack_20 = 0;
  func_0x02450228(uVar7,uVar3,uVar5,uVar2);
  return;
}



// ===== FAT.Merge.ClearBoardResult$$.ctor RVA 0x2151c94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02161c94(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02161d50 + 0x2161ca8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02161d54 + 0x2161cbc));
    func_0x01384978(*(undefined4 *)(_UNK_02161d58 + 0x2161cc8));
    func_0x01384978(*(undefined4 *)(_UNK_02161d5c + 0x2161cd4));
    func_0x01384978(*(undefined4 *)(_UNK_02161d60 + 0x2161ce0));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02161d64 + 0x2161cf4));
  func_0x03380cc0(uVar1,**(undefined4 **)(_UNK_02161d68 + 0x2161d08));
  puVar2 = *(undefined4 **)(_UNK_02161d6c + 0x2161d1c);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03383cc8(uVar1,**(undefined4 **)(_UNK_02161d70 + 0x2161d34));
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ClearBoardResult$$<>iFixBaseProxy_ToString RVA 0x2151d74 =====

void FUN_02161d74(undefined4 param_1)

{
  (*(code *)&UNK_048868a4)(param_1,0);
  return;
}



// ===== FAT.Merge.ClearBoardResult.ItemDestroyType$$ToString RVA 0x2151d7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02161d7c(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
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
  
  pcVar4 = (char *)(_UNK_02161e7c + 0x2161d94);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02161e80 + 0x2161da8));
    func_0x01384978(*(undefined4 *)(_UNK_02161e84 + 0x2161db4));
    func_0x01384978(*(undefined4 *)(_UNK_02161e88 + 0x2161dc0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb51d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb51d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0229e544 + 0x229e3e4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0229e548 + 0x229e3f8),param_1,0);
      func_0x01384978(*(undefined4 *)(_UNK_0229e54c + 0x229e404));
      func_0x01384978(*(undefined4 *)(_UNK_0229e550 + 0x229e410));
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = (undefined4)uStack_50;
    uStack_34 = uStack_50._4_4_;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_50 = *param_1;
    uStack_48 = *(undefined4 *)(param_1 + 1);
    uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_0229e554 + 0x229e464),&uStack_50);
    func_0x01485288(&uStack_38,uVar2,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x014852b8(&uStack_38,0,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar2,&uStack_38,uVar3,1,0);
    func_0x02f5fb74(&uStack_60,&uStack_38,0,**(undefined4 **)(_UNK_0229e558 + 0x229e504));
    uStack_48 = uStack_58;
    uStack_50 = uStack_60;
    *(undefined4 *)(param_1 + 1) = uStack_58;
    *param_1 = uStack_60;
    func_0x02f5db90(&uStack_38,1,**(undefined4 **)(_UNK_0229e55c + 0x229e534));
    return;
  }
  uVar5 = *(undefined4 *)param_1;
  uStack_1c = *(undefined4 *)((int)param_1 + 4);
  uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_02161e8c + 0x2161e28),&uStack_1c);
  uStack_20 = *(undefined4 *)(param_1 + 1);
  uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_02161e90 + 0x2161e48),&uStack_20);
  uStack_28 = 0;
  func_0x02450228(**(undefined4 **)(_UNK_02161e94 + 0x2161e6c),uVar5,uVar2,uVar3);
  return;
}



// ===== FAT.Merge.ClearBoardResult.ItemDestroyType$$<>iFixBaseProxy_ToString RVA 0x2151e98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02161e98(undefined8 *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  pcVar2 = (char *)(_UNK_02161f00 + 0x2161eb0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02161f04 + 0x2161ec4));
    *pcVar2 = '\x01';
  }
  uStack_20 = *param_1;
  uStack_18 = *(undefined4 *)(param_1 + 1);
  uVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02161f08 + 0x2161ee0),&uStack_20);
  func_0x02451848(uVar1,0);
  return;
}



// ===== FAT.Merge.ClearBoardResult.RewardListDestroyType$$ToString RVA 0x2151f0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02161f0c(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_02162160 + 0x2161f24);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02162164 + 0x2161f38));
    func_0x01384978(*(undefined4 *)(_UNK_02162168 + 0x2161f44));
    func_0x01384978(*(undefined4 *)(_UNK_0216216c + 0x2161f50));
    func_0x01384978(*(undefined4 *)(_UNK_02162170 + 0x2161f5c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb51e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb51e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_0229e6d0 + 0x229e57c);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0229e6d4 + 0x229e590),param_1,0);
      func_0x01384978(*(undefined4 *)(_UNK_0229e6d8 + 0x229e59c));
      func_0x01384978(*(undefined4 *)(_UNK_0229e6dc + 0x229e5a8));
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
    uStack_50 = *param_1;
    uStack_4c = param_1[1];
    uStack_48 = param_1[2];
    uStack_44 = param_1[3];
    uStack_28 = uStack_40;
    uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_0229e6e0 + 0x229e5f0),&uStack_50);
    func_0x01485288(&uStack_38,uVar3,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x014852b8(&uStack_38,0,0);
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
    func_0x0245495c(iVar7,uVar3,&uStack_38,uVar4,1,0);
    func_0x02f5fc20(&uStack_60,&uStack_38,0,**(undefined4 **)(_UNK_0229e6e4 + 0x229e69c));
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    uStack_48 = uStack_58;
    uStack_44 = uStack_54;
    *param_1 = uStack_60;
    param_1[1] = uStack_5c;
    param_1[2] = uStack_58;
    param_1[3] = uStack_54;
    func_0x02f5db90(&uStack_38,1,**(undefined4 **)(_UNK_0229e6e8 + 0x229e6c0));
    return;
  }
  piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02162174 + 0x2161fbc),4);
  uStack_1c = *param_1;
  puVar6 = *(undefined4 **)(_UNK_02162178 + 0x2161fd4);
  iVar1 = func_0x01384abc(*puVar6,&uStack_1c);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  if ((iVar1 != 0) && (iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar7 == 0))
  {
    uVar3 = func_0x01384c10();
    func_0x01384aa0(uVar3,0);
  }
  if (piVar2[3] == 0) {
    func_0x01384bf4();
  }
  piVar2[4] = iVar1;
  uStack_20 = param_1[1];
  iVar1 = func_0x01384abc(*puVar6,&uStack_20);
  if ((iVar1 != 0) && (iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar7 == 0))
  {
    uVar3 = func_0x01384c10();
    func_0x01384aa0(uVar3,0);
  }
  if ((uint)piVar2[3] < 2) {
    func_0x01384bf4();
  }
  piVar2[5] = iVar1;
  uStack_24 = param_1[2];
  iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_0216217c + 0x2162098),&uStack_24);
  if ((iVar1 != 0) && (iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar7 == 0))
  {
    uVar3 = func_0x01384c10();
    func_0x01384aa0(uVar3,0);
  }
  if ((uint)piVar2[3] < 3) {
    func_0x01384bf4();
  }
  piVar2[6] = iVar1;
  uStack_28 = param_1[3];
  iVar1 = func_0x01384abc(*puVar6,&uStack_28);
  if ((iVar1 != 0) && (iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar7 == 0))
  {
    uVar3 = func_0x01384c10();
    func_0x01384aa0(uVar3,0);
  }
  if ((uint)piVar2[3] < 4) {
    func_0x01384bf4();
  }
  piVar2[7] = iVar1;
  func_0x0244f708(**(undefined4 **)(_UNK_02162180 + 0x2162154),piVar2,0);
  return;
}



// ===== FAT.Merge.ClearBoardResult.RewardListDestroyType$$<>iFixBaseProxy_ToString RVA 0x2152184 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02162184(void)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_021621e4 + 0x216219c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021621e8 + 0x21621b0));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384abc(**(undefined4 **)(_UNK_021621ec + 0x21621c8));
  func_0x02451848(uVar1,0);
  return;
}


