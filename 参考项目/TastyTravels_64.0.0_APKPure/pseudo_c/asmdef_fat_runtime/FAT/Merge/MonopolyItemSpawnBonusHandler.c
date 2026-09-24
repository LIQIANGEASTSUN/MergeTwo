/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.MonopolyItemSpawnBonusHandler$$.ctor RVA 0x214aa18 =====

void FUN_0215aa18(int param_1,undefined4 param_2)

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
  
  FUN_021552f4();
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



// ===== FAT.Merge.MonopolyItemSpawnBonusHandler$$Serialize RVA 0x214aa38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215aa38(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  
  pcVar7 = (char *)(_UNK_0215abe0 + 0x215aa58);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215abe4 + 0x215aa6c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8651,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8651,0);
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
  piVar8 = *(int **)(_UNK_0215abe8 + 0x215aaf8);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar4 = *piVar8;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar4) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xd0);
        goto LAB_0215ab40;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,iVar4,2);
LAB_0215ab40:
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
        goto LAB_0215abc4;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,iVar4,2);
LAB_0215abc4:
                    /* WARNING: Could not recover jumptable at 0x0215abdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(param_2,uVar2,puVar3[1]);
  return;
}



// ===== FAT.Merge.MonopolyItemSpawnBonusHandler$$Deserialize RVA 0x214abec =====

void FUN_0215abec(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x8658,0);
  if (iVar1 == 0) {
    uVar2 = func_0x01c23c30(param_3,param_2,0);
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    uVar2 = func_0x01c23c30(param_3 + 1,param_2,0);
    *(undefined4 *)(param_1 + 0x20) = uVar2;
  }
  else {
    iVar1 = func_0x0229f13c(0x8658,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.MonopolyItemSpawnBonusHandler$$IsValid RVA 0x214ac80 =====

undefined4 FUN_0215ac80(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4b2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4b2,0);
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
    uVar5 = func_0x0245496c(&uStack_30,0,0);
    return uVar5;
  }
  piVar2 = *(int **)(param_1 + 0x14);
  if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0215ace8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*piVar2 + 0x108))(piVar2,*(undefined4 *)(*piVar2 + 0x10c));
    return uVar5;
  }
  return 0;
}



// ===== FAT.Merge.MonopolyItemSpawnBonusHandler$$IsValidForContext RVA 0x214acf4 =====

undefined4 FUN_0215acf4(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb4b3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4b3,0);
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
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  return 1;
}



// ===== FAT.Merge.MonopolyItemSpawnBonusHandler$$GetActivityCostId RVA 0x214ad50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215ad50(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0215ae24 + 0x215ad68);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215ae28 + 0x215ad7c));
    func_0x01384978(*(undefined4 *)(_UNK_0215ae2c + 0x215ad88));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4b4,0);
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
      func_0x03507d38(&uStack_18,*(undefined4 *)(iVar1 + 0x14),
                      **(undefined4 **)(_UNK_0215ae30 + 0x215adfc));
    }
    return uStack_14;
  }
  iVar1 = func_0x0229f13c(0xb4b4,0);
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



// ===== FAT.Merge.MonopolyItemSpawnBonusHandler$$EnsureOutputMap RVA 0x214ae34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215ae34(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  pcVar4 = (char *)(_UNK_0215b0e8 + 0x215ae4c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215b0ec + 0x215ae60));
    func_0x01384978(*(undefined4 *)(_UNK_0215b0f0 + 0x215ae6c));
    func_0x01384978(*(undefined4 *)(_UNK_0215b0f4 + 0x215ae78));
    func_0x01384978(*(undefined4 *)(_UNK_0215b0f8 + 0x215ae84));
    func_0x01384978(*(undefined4 *)(_UNK_0215b0fc + 0x215ae90));
    func_0x01384978(*(undefined4 *)(_UNK_0215b100 + 0x215ae9c));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0xb4b5,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      iVar7 = *(int *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0xc) = 0;
      iVar1 = iVar7;
      if (iVar7 == 0) {
        func_0x01384bf0();
        iVar1 = *(int *)(param_1 + 0x10);
      }
      iVar3 = *(int *)(iVar7 + 0x10);
      *(undefined4 *)(iVar7 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      iVar5 = *(int *)(param_1 + 0x14);
      *(int *)(iVar7 + 0x10) = iVar3 + 1;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x01ad5324(iVar5,iVar1,0);
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01ad5914(iVar1,(undefined4 *)(param_1 + 0x18),(undefined4 *)(param_1 + 0x1c),0);
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01ad5a48(&uStack_50,iVar1,0);
      *(undefined4 *)(param_1 + 0x28) = uStack_50;
      *(undefined4 *)(param_1 + 0x2c) = uStack_4c;
      if (*(int *)(param_1 + 0x20) == 0) {
        uVar2 = func_0x0215b118();
        *(undefined4 *)(param_1 + 0x20) = uVar2;
      }
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0245100c(&uStack_50,iVar1,**(undefined4 **)(_UNK_0215b104 + 0x215b004));
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      puVar6 = *(undefined4 **)(_UNK_0215b108 + 0x215b02c);
      do {
        iVar1 = func_0x03f4d7a4(&uStack_38,*puVar6);
      } while (iVar1 != 0);
      func_0x03f4d7a0(&uStack_38,**(undefined4 **)(_UNK_0215b10c + 0x215b048));
      if (*(int *)(param_1 + 0x10) == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb4b5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.Merge.MonopolyItemSpawnBonusHandler$$_RandInRange RVA 0x214b118 =====

int FUN_0215b118(int param_1,int param_2)

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
  iVar1 = func_0x0229f06c(0xb4b6,0);
  if (iVar1 != 0) {
    iVar3 = func_0x0229f13c(0xb4b6,0);
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



// ===== FAT.Merge.MonopolyItemSpawnBonusHandler$$GetRewardReason RVA 0x214b1b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215b1b0(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_0215b250 + 0x215b1c4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215b254 + 0x215b1d8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4b7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4b7,0);
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
  piVar3 = *(int **)(_UNK_0215b258 + 0x215b230);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x328);
}



// ===== FAT.Merge.MonopolyItemSpawnBonusHandler$$GetFlyType RVA 0x214b25c =====

undefined4 FUN_0215b25c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4b8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4b8,0);
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
  return 0x44;
}



// ===== FAT.Merge.MonopolyItemSpawnBonusHandler$$OnItemSpawned RVA 0x214b2b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215b2b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar4 = func_0x0229f06c(0xb4b9,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0xb4b9,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    uStack_28 = param_4;
    func_0x02179974(iVar4,param_1,param_2,param_3);
    return;
  }
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_01acd210 + 0x1accea0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acd214 + 0x1acceb4),param_2,param_3,0);
    func_0x01384978(*(undefined4 *)(_UNK_01acd218 + 0x1accec0));
    func_0x01384978(*(undefined4 *)(_UNK_01acd21c + 0x1accecc));
    func_0x01384978(*(undefined4 *)(_UNK_01acd220 + 0x1acced8));
    func_0x01384978(*(undefined4 *)(_UNK_01acd224 + 0x1accee4));
    func_0x01384978(*(undefined4 *)(_UNK_01acd228 + 0x1accef0));
    func_0x01384978(*(undefined4 *)(_UNK_01acd22c + 0x1accefc));
    func_0x01384978(*(undefined4 *)(_UNK_01acd230 + 0x1accf08));
    func_0x01384978(*(undefined4 *)(_UNK_01acd234 + 0x1accf14));
    func_0x01384978(*(undefined4 *)(_UNK_01acd238 + 0x1accf20));
    func_0x01384978(*(undefined4 *)(_UNK_01acd23c + 0x1accf2c));
    func_0x01384978(*(undefined4 *)(_UNK_01acd240 + 0x1accf38));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8675,0);
  if (iVar1 == 0) {
    func_0x02b489c0(&uStack_30,iVar4,0);
    uVar6 = uStack_2c;
    uVar3 = uStack_30;
    piVar2 = (int *)func_0x01384be4(**(undefined4 **)(_UNK_01acd244 + 0x1accfb8));
    func_0x029f3744(piVar2,0);
    func_0x01998f3c(piVar2,0);
    uVar3 = func_0x029f279c(uVar3,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acd248 + 0x1acd004),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(uVar6,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acd24c + 0x1acd034),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(uStack_28,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acd250 + 0x1acd064),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x4c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x01dbb000(iVar4,0);
    uVar6 = **(undefined4 **)(_UNK_01acd254 + 0x1acd0bc);
    uVar3 = 0;
    if (iVar4 != 0) {
      iVar4 = FUN_02139cf4(iVar4,0);
      uVar3 = 0;
      if (iVar4 != 0) {
        uStack_2c = 0;
        uStack_30 = 0;
        func_0x03507d38(&uStack_30,*(undefined4 *)(iVar4 + 8),
                        **(undefined4 **)(_UNK_01acd258 + 0x1acd0e0));
        uVar3 = uStack_2c;
      }
    }
    uVar3 = func_0x029f279c(uVar3,0);
    (**(code **)(*piVar2 + 0x100))(piVar2,uVar6,uVar3,*(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(param_2,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acd25c + 0x1acd144),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = FUN_02157e88(param_2,0);
    uVar3 = func_0x029f279c(uVar3,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acd260 + 0x1acd17c),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(param_3,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acd264 + 0x1acd1ac),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = (**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
    if (*(int *)(**(int **)(_UNK_01acd268 + 0x1acd1e0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01998df4(**(undefined4 **)(_UNK_01acd26c + 0x1acd204),uVar3,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x8675,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,iVar4,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.MonopolyItemSpawnBonusHandler$$TryProcessPity RVA 0x214b348 =====

undefined4 FUN_0215b348(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = func_0x0229f06c(0xb4ba,0);
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
        iVar1 = FUN_0215b118(param_1[10],param_1[0xb]);
        param_1[8] = iVar1;
        uVar2 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb4ba,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0229da30(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.Merge.MonopolyItemSpawnBonusHandler$$OnAfterSpawn RVA 0x214b43c =====

void FUN_0215b43c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0xb4bb,0);
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
    iVar1 = func_0x0229f13c(0xb4bb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c9080(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.MonopolyItemSpawnBonusHandler$$<>iFixBaseProxy_IsValidForContext RVA 0x214b4dc =====

undefined4 thunk_FUN_02156548(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb46c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb46c,0);
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
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  return 1;
}



// ===== FAT.Merge.MonopolyItemSpawnBonusHandler$$<>iFixBaseProxy_OnItemSpawned RVA 0x214b4e0 =====

void FUN_0215b4e0(void)

{
  FUN_02155d3c();
  return;
}



// ===== FAT.Merge.MonopolyItemSpawnBonusHandler$$<>iFixBaseProxy_TryProcessPity RVA 0x214b4f4 =====

void FUN_0215b4f4(void)

{
  FUN_02155c48();
  return;
}



// ===== FAT.Merge.MonopolyItemSpawnBonusHandler$$<>iFixBaseProxy_OnAfterSpawn RVA 0x214b508 =====

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


