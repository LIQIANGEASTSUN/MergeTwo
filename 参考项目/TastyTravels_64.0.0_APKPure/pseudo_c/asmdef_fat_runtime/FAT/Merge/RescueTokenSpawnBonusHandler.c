/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.RescueTokenSpawnBonusHandler$$get_PityCounter RVA 0x214c7fc =====

undefined4 FUN_0215c7fc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ===== FAT.Merge.RescueTokenSpawnBonusHandler$$set_PityCounter RVA 0x214c804 =====

void FUN_0215c804(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



// ===== FAT.Merge.RescueTokenSpawnBonusHandler$$get_PityThreshold RVA 0x214c80c =====

undefined4 FUN_0215c80c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ===== FAT.Merge.RescueTokenSpawnBonusHandler$$set_PityThreshold RVA 0x214c814 =====

void FUN_0215c814(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// ===== FAT.Merge.RescueTokenSpawnBonusHandler$$.ctor RVA 0x214c81c =====

void FUN_0215c81c(int param_1,undefined4 param_2)

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



// ===== FAT.Merge.RescueTokenSpawnBonusHandler$$IsValid RVA 0x214c83c =====

undefined4 FUN_0215c83c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4c4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4c4,0);
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
                    /* WARNING: Could not recover jumptable at 0x0215c8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*piVar2 + 0x108))(piVar2,*(undefined4 *)(*piVar2 + 0x10c));
    return uVar5;
  }
  return 0;
}



// ===== FAT.Merge.RescueTokenSpawnBonusHandler$$IsValidForContext RVA 0x214c8b0 =====

undefined4 FUN_0215c8b0(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb4c5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4c5,0);
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



// ===== FAT.Merge.RescueTokenSpawnBonusHandler$$GetActivityCostId RVA 0x214c90c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215c90c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0215c9e0 + 0x215c924);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215c9e4 + 0x215c938));
    func_0x01384978(*(undefined4 *)(_UNK_0215c9e8 + 0x215c944));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4c6,0);
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_1 + 0x14);
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0x4c);
    }
    uStack_14 = 0;
    if (iVar4 != 0 && iVar1 != 0) {
      uStack_14 = 0;
      uStack_18 = 0;
      func_0x03507d38(&uStack_18,*(undefined4 *)(iVar1 + 0x18),
                      **(undefined4 **)(_UNK_0215c9ec + 0x215c9b8));
    }
    return uStack_14;
  }
  iVar1 = func_0x0229f13c(0xb4c6,0);
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



// ===== FAT.Merge.RescueTokenSpawnBonusHandler$$EnsureOutputMap RVA 0x214c9f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215c9f0(int param_1)

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
  
  pcVar4 = (char *)(_UNK_0215cb4c + 0x215ca08);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215cb50 + 0x215ca1c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4c7,0);
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
      func_0x01b0d4d0(iVar7,iVar1,0);
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01b0d73c(iVar1,(undefined4 *)(param_1 + 0x18),(undefined4 *)(param_1 + 0x1c),0);
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01b0d874(&uStack_20,iVar1,0);
      *(undefined4 *)(param_1 + 0x20) = uStack_20;
      *(undefined4 *)(param_1 + 0x24) = uStack_1c;
      if (*(int *)(param_1 + 0x2c) == 0) {
        uVar6 = func_0x0215cb54();
        *(undefined4 *)(param_1 + 0x2c) = uVar6;
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0xb4c7,0);
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



// ===== FAT.Merge.RescueTokenSpawnBonusHandler$$_RandInRange RVA 0x214cb54 =====

int FUN_0215cb54(int param_1,int param_2)

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
  iVar1 = func_0x0229f06c(0xb4c8,0);
  if (iVar1 != 0) {
    iVar3 = func_0x0229f13c(0xb4c8,0);
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



// ===== FAT.Merge.RescueTokenSpawnBonusHandler$$GetRewardReason RVA 0x214cbec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215cbec(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_0215cc8c + 0x215cc00);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215cc90 + 0x215cc14));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4c9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4c9,0);
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
  piVar3 = *(int **)(_UNK_0215cc94 + 0x215cc6c);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x37c);
}



// ===== FAT.Merge.RescueTokenSpawnBonusHandler$$GetFlyType RVA 0x214cc98 =====

undefined4 FUN_0215cc98(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4ca,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4ca,0);
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
  return 0x56;
}



// ===== FAT.Merge.RescueTokenSpawnBonusHandler$$TryProcessPity RVA 0x214ccec =====

undefined4 FUN_0215ccec(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0xb4cb,0);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
    iVar2 = param_1[6];
    iVar1 = iVar2;
    if (0 < iVar2) {
      iVar1 = param_1[7];
    }
    if (0 < iVar1) {
      iVar3 = param_1[0xb];
      bVar5 = SBORROW4(iVar3,1);
      iVar1 = iVar3 + -1;
      if (0 < iVar3) {
        bVar5 = SBORROW4(param_1[10],iVar3);
        iVar1 = param_1[10] - iVar3;
      }
      if (iVar1 < 0 == bVar5) {
        *param_3 = iVar2;
        *param_4 = param_1[7];
        iVar1 = FUN_0215cb54(param_1[8],param_1[9]);
        uVar4 = 1;
        param_1[0xb] = iVar1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb4cb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0229da30(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar4;
}



// ===== FAT.Merge.RescueTokenSpawnBonusHandler$$OnItemSpawned RVA 0x214cdc0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215cdc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_0215cf9c + 0x215cde0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215cfa0 + 0x215cdf8));
    func_0x01384978(*(undefined4 *)(_UNK_0215cfa4 + 0x215ce04));
    func_0x01384978(*(undefined4 *)(_UNK_0215cfa8 + 0x215ce10));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4cc,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01b0bd40(iVar1,0);
    iVar6 = *(int *)(param_1 + 0x14);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar6 + 0x50);
    iVar6 = 0;
    if (iVar2 != 0) {
      iVar6 = *(int *)(iVar2 + 0x34);
    }
    uVar9 = 0;
    if (iVar2 != 0 && iVar6 != 0) {
      uStack_2c = 0;
      uStack_30 = 0;
      func_0x03507d38(&uStack_30,*(undefined4 *)(iVar6 + 0xc),
                      **(undefined4 **)(_UNK_0215cfac + 0x215cebc));
      uVar9 = uStack_2c;
    }
    iVar6 = *(int *)(param_1 + 0x14);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x01b062d8(iVar6,0);
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x01b0633c(iVar2,0);
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01b06950(iVar2,0);
    iVar7 = *(int *)(param_1 + 0x14);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x01b05c10(iVar7,0);
    func_0x02314a3c(iVar6,iVar1 + 1,uVar9,uVar3,uVar4,iVar2 + 1,uVar5,param_2,param_3,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xb4cc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179974(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.RescueTokenSpawnBonusHandler$$OnAfterSpawn RVA 0x214cfb0 =====

void FUN_0215cfb0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0xb4cd,0);
  if (iVar1 == 0) {
    if (0 < *(int *)(param_1 + 0x18)) {
      iVar1 = *(int *)(param_1 + 0x1c);
      if (0 < iVar1) {
        iVar1 = *(int *)(param_1 + 0x2c);
      }
      if (0 < iVar1) {
        if (param_2 == 0) {
          iVar1 = *(int *)(param_1 + 0x28) + 1;
        }
        else {
          iVar1 = 0;
        }
        *(int *)(param_1 + 0x28) = iVar1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb4cd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c9080(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.RescueTokenSpawnBonusHandler$$<>iFixBaseProxy_IsValidForContext RVA 0x214d050 =====

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



// ===== FAT.Merge.RescueTokenSpawnBonusHandler$$<>iFixBaseProxy_TryProcessPity RVA 0x214d054 =====

void FUN_0215d054(void)

{
  FUN_02155c48();
  return;
}



// ===== FAT.Merge.RescueTokenSpawnBonusHandler$$<>iFixBaseProxy_OnItemSpawned RVA 0x214d068 =====

void FUN_0215d068(void)

{
  FUN_02155d3c();
  return;
}



// ===== FAT.Merge.RescueTokenSpawnBonusHandler$$<>iFixBaseProxy_OnAfterSpawn RVA 0x214d07c =====

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


