/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.AreaBoardItemSpawnBonusHandler$$IsValid RVA 0x2145268 =====

undefined4 FUN_02155268(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0xb45d,0);
  if (iVar1 == 0) {
    param_1 = (int *)param_1[5];
    if (param_1 == (int *)0x0) {
      return 0;
    }
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
    iVar1 = func_0x0229f13c(0xb45d,0);
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



// ===== FAT.Merge.AreaBoardItemSpawnBonusHandler$$.ctor RVA 0x21452d4 =====

void FUN_021552d4(int param_1,undefined4 param_2)

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
  
  func_0x021552f4();
  *(undefined4 *)(param_1 + 0x14) = param_2;
  iVar1 = func_0x0229f06c(0x5b3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b3,0);
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
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// ===== FAT.Merge.AreaBoardItemSpawnBonusHandler$$Serialize RVA 0x21453e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021553e0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  
  pcVar7 = (char *)(_UNK_02155588 + 0x2155400);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215558c + 0x2155414));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7833,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7833,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,param_1,param_2,param_3,0);
    return;
  }
  uVar2 = func_0x01c23578(param_3,*(undefined4 *)(param_1 + 0x24),0);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  piVar8 = *(int **)(_UNK_02155590 + 0x21554a0);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar4 = *piVar8;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar4) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xd0);
        goto LAB_021554e8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,iVar4,2);
LAB_021554e8:
  (*(code *)*puVar3)(param_2,uVar2,puVar3[1]);
  uVar2 = func_0x01c23578(param_3 + 1,*(undefined4 *)(param_1 + 0x20),0);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  iVar4 = *piVar8;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar8[-1] == iVar4) {
        puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xd0);
        goto LAB_0215556c;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,iVar4,2);
LAB_0215556c:
                    /* WARNING: Could not recover jumptable at 0x02155584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(param_2,uVar2,puVar3[1]);
  return;
}



// ===== FAT.Merge.AreaBoardItemSpawnBonusHandler$$Deserialize RVA 0x2145594 =====

void FUN_02155594(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x7838,0);
  if (iVar1 == 0) {
    uVar2 = func_0x01c23c30(param_3,param_2,0);
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    uVar2 = func_0x01c23c30(param_3 + 1,param_2,0);
    *(undefined4 *)(param_1 + 0x20) = uVar2;
  }
  else {
    iVar1 = func_0x0229f13c(0x7838,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.AreaBoardItemSpawnBonusHandler$$GetActivityCostId RVA 0x2145628 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02155628(int param_1)

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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_021556fc + 0x2155640);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02155700 + 0x2155654));
    func_0x01384978(*(undefined4 *)(_UNK_02155704 + 0x2155660));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb45e,0);
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_1 + 0x14);
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0x3c);
    }
    uStack_14 = 0;
    if (iVar4 != 0 && iVar1 != 0) {
      uStack_14 = 0;
      uStack_18 = 0;
      func_0x03507d38(&uStack_18,*(undefined4 *)(iVar1 + 0x18),
                      **(undefined4 **)(_UNK_02155708 + 0x21556d4));
    }
    return uStack_14;
  }
  iVar1 = func_0x0229f13c(0xb45e,0);
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



// ===== FAT.Merge.AreaBoardItemSpawnBonusHandler$$EnsureOutputMap RVA 0x214570c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215570c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
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
  
  pcVar4 = (char *)(_UNK_02155868 + 0x2155724);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215586c + 0x2155738));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb45f,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      iVar5 = *(int *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0xc) = 0;
      iVar1 = iVar5;
      if (iVar5 == 0) {
        func_0x01384bf0();
        iVar1 = *(int *)(param_1 + 0x10);
      }
      iVar2 = *(int *)(iVar5 + 0x10);
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      iVar7 = *(int *)(param_1 + 0x14);
      *(int *)(iVar5 + 0x10) = iVar2 + 1;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x02bc6b0c(iVar7,iVar1,0);
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02bc73ac(iVar1,(undefined4 *)(param_1 + 0x18),(undefined4 *)(param_1 + 0x1c),0);
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02bc755c(&uStack_20,iVar1,0);
      *(undefined4 *)(param_1 + 0x28) = uStack_20;
      *(undefined4 *)(param_1 + 0x2c) = uStack_1c;
      if (*(int *)(param_1 + 0x20) == 0) {
        uVar6 = func_0x02155870();
        *(undefined4 *)(param_1 + 0x20) = uVar6;
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0xb45f,0);
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



// ===== FAT.Merge.AreaBoardItemSpawnBonusHandler$$_RandInRange RVA 0x2145870 =====

int FUN_02155870(int param_1,int param_2)

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
  iVar1 = func_0x0229f06c(0xb460,0);
  if (iVar1 != 0) {
    iVar3 = func_0x0229f13c(0xb460,0);
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
    func_0x01485238(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar1 = *(int *)(iVar3 + 8);
    uVar4 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar3 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar1,uVar4,&uStack_38,uVar2,0,0);
    iVar3 = func_0x0245498c(&uStack_38,0,0);
    return iVar3;
  }
  iVar1 = param_1;
  if (param_1 < 1) {
    iVar1 = param_2 + -1;
  }
  if (iVar1 < 0 == (param_1 < 1 && SBORROW4(param_2,1))) {
    iVar3 = param_2;
    if (param_2 < param_1) {
      iVar3 = param_1;
      param_1 = param_2;
    }
    if (param_1 != iVar3) {
      iVar3 = (*(code *)&UNK_051844bc)(param_1,iVar3 + 1,0);
      return iVar3;
    }
  }
  return iVar3;
}



// ===== FAT.Merge.AreaBoardItemSpawnBonusHandler$$GetRewardReason RVA 0x2145908 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02155908(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
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
  
  pcVar4 = (char *)(_UNK_021559a8 + 0x215591c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021559ac + 0x2155930));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb461,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb461,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0221b1d4 + 0x221b0f4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0221b1d8 + 0x221b108),param_1,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0221b1dc + 0x221b1c4));
    return uVar6;
  }
  piVar3 = *(int **)(_UNK_021559b0 + 0x2155988);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x198);
}



// ===== FAT.Merge.AreaBoardItemSpawnBonusHandler$$GetFlyType RVA 0x21459b4 =====

undefined4 FUN_021559b4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb462,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb462,0);
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
  return 0x4a;
}



// ===== FAT.Merge.AreaBoardItemSpawnBonusHandler$$TryProcessPity RVA 0x2145a08 =====

undefined4 FUN_02155a08(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = func_0x0229f06c(0xb463,0);
  if (iVar1 == 0) {
    iVar1 = param_1[6];
    if (0 < iVar1) {
      iVar1 = param_1[7];
    }
    if (iVar1 < 1) {
      (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
      uVar2 = 0;
    }
    else {
      iVar3 = param_1[8];
      (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
      bVar4 = SBORROW4(iVar3,1);
      iVar1 = iVar3 + -1;
      uVar2 = 0;
      if (0 < iVar3) {
        bVar4 = SBORROW4(param_1[9],param_1[8]);
        iVar1 = param_1[9] - param_1[8];
      }
      if (iVar1 < 0 == bVar4) {
        *param_3 = param_1[6];
        *param_4 = param_1[7];
        iVar1 = FUN_02155870(param_1[10],param_1[0xb]);
        param_1[8] = iVar1;
        uVar2 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb463,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0229da30(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.Merge.AreaBoardItemSpawnBonusHandler$$OnAfterSpawn RVA 0x2145afc =====

void FUN_02155afc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0xb464,0);
  if (iVar1 == 0) {
    if (0 < *(int *)(param_1 + 0x18)) {
      iVar1 = *(int *)(param_1 + 0x1c);
      if (0 < iVar1) {
        iVar1 = *(int *)(param_1 + 0x20);
      }
      if (0 < iVar1) {
        if (param_2 == 0) {
          iVar1 = *(int *)(param_1 + 0x24) + 1;
        }
        else {
          iVar1 = 0;
        }
        *(int *)(param_1 + 0x24) = iVar1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb464,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c9080(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.AreaBoardItemSpawnBonusHandler$$OnItemSpawned RVA 0x2145b9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02155b9c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  iVar1 = func_0x0229f06c(0xb465,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb465,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179974(iVar1,param_1,param_2,param_3,param_4,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_02bc7fec + 0x2bc7ea4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bc7ff0 + 0x2bc7eb8),param_2,param_3,0);
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x78b6,0);
  if (iVar2 == 0) {
    iVar2 = func_0x02bbfc04(iVar1);
    if (iVar2 != 0) {
      iVar5 = *(int *)(iVar2 + 0x50);
      iVar10 = *(int *)(iVar1 + 0x50);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar8 = *(undefined4 *)(iVar2 + 0x24);
      uVar9 = *(undefined4 *)(iVar5 + 0xc);
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x4c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01dbb000(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_02139cf4(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar7 = *(undefined4 *)(iVar2 + 8);
      uVar6 = *(undefined4 *)(iVar1 + 0x44);
      uVar3 = func_0x02157e88(param_2,0);
      func_0x0230d50c(iVar1,iVar10 + 1,uVar9,uVar8,uVar7,1,uVar6,param_2,uVar3,param_3,0);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x78b6,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar2,iVar1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.AreaBoardItemSpawnBonusHandler$$<>iFixBaseProxy_TryProcessPity RVA 0x2145c34 =====

void FUN_02155c34(void)

{
  func_0x02155c48();
  return;
}



// ===== FAT.Merge.AreaBoardItemSpawnBonusHandler$$<>iFixBaseProxy_OnAfterSpawn RVA 0x2145cbc =====

void thunk_FUN_02155cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0xb472,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb472,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c9080(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.AreaBoardItemSpawnBonusHandler$$<>iFixBaseProxy_OnItemSpawned RVA 0x2145d28 =====

void FUN_02155d28(void)

{
  func_0x02155d3c();
  return;
}


