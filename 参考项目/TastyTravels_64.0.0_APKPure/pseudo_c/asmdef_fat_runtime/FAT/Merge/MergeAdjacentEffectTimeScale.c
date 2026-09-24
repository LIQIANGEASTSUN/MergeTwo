/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.MergeAdjacentEffectTimeScale$$Reset RVA 0x20fd528 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0210d528(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  pcVar4 = (char *)(_UNK_0210d760 + 0x210d548);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210d764 + 0x210d560));
    func_0x01384978(*(undefined4 *)(_UNK_0210d768 + 0x210d56c));
    func_0x01384978(*(undefined4 *)(_UNK_0210d76c + 0x210d578));
    func_0x01384978(*(undefined4 *)(_UNK_0210d770 + 0x210d584));
    func_0x01384978(*(undefined4 *)(_UNK_0210d774 + 0x210d590));
    func_0x01384978(*(undefined4 *)(_UNK_0210d778 + 0x210d59c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5bc0,0);
  if (iVar1 == 0) {
    FUN_0210cf10(param_1,param_2,param_3);
    param_3 = param_3 * param_2;
    puVar5 = *(undefined4 **)(_UNK_0210d77c + 0x210d614);
    *(int *)(param_1 + 0x28) = param_4;
    uVar2 = func_0x01384a00(*puVar5,param_3);
    uVar3 = *puVar5;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    uVar2 = func_0x01384a00(uVar3,param_3);
    uVar3 = *puVar5;
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    uVar2 = func_0x01384a00(uVar3,param_3);
    iVar1 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d7a7e4(iVar1,**(undefined4 **)(_UNK_0210d780 + 0x210d668));
    if (*(char *)(param_1 + 0x24) == '\0') {
      puVar5 = *(undefined4 **)(_UNK_0210d784 + 0x210d688);
      uVar2 = func_0x01384be4(*puVar5);
      func_0x03ccb96c(uVar2,param_1,**(undefined4 **)(_UNK_0210d788 + 0x210d6a4),0);
      if (param_4 == 0) {
        func_0x01384bf0();
      }
      FUN_020da3c0(param_4,uVar2,0);
      uVar2 = func_0x01384be4(*puVar5);
      func_0x03ccb96c(uVar2,param_1,**(undefined4 **)(_UNK_0210d78c + 0x210d6e8),0);
      if (param_4 == 0) {
        func_0x01384bf0();
      }
      FUN_020da260(param_4,uVar2,0);
      uVar2 = func_0x01384be4(*puVar5);
      func_0x03ccb96c(uVar2,param_1,**(undefined4 **)(_UNK_0210d790 + 0x210d72c),0);
      if (param_4 == 0) {
        func_0x01384bf0();
      }
      FUN_020d88a0(param_4,uVar2,0);
      *(undefined1 *)(param_1 + 0x24) = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5bc0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179974(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.MergeAdjacentEffectTimeScale$$Deserialize RVA 0x20fd794 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0210d794(int param_1,int param_2)

{
  undefined4 uVar1;
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
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar2 = func_0x0229f06c(0x5c67,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5c67,0);
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
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    uVar6 = func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return uVar6;
  }
  pcVar5 = (char *)(_UNK_0210da14 + 0x210d814);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210da18 + 0x210d828));
    func_0x01384978(*(undefined4 *)(_UNK_0210da1c + 0x210d834));
    func_0x01384978(*(undefined4 *)(_UNK_0210da20 + 0x210d840));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5bc3,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5bc3,0);
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
    uVar6 = func_0x0245496c(&uStack_38,0,0);
    return uVar6;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x0210e5f4(param_2);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x03d7a854(iVar2,uVar6,**(undefined4 **)(_UNK_0210da24 + 0x210d8cc));
  uVar6 = 0;
  if ((iVar2 == 0) && (iVar2 = func_0x0210e648(param_1,param_2), iVar2 != 0)) {
    iVar2 = *(int *)(param_1 + 0x20);
    if (param_2 == 0) {
      func_0x01384bf0();
      uVar6 = func_0x0210e5f4(0);
      func_0x01384bf0();
    }
    else {
      uVar6 = func_0x0210e5f4(param_2);
    }
    FUN_0210cd7c(&uStack_28,param_2);
    uVar1 = uStack_24;
    uVar3 = uStack_28;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = **(undefined4 **)(_UNK_0210da28 + 0x210d95c);
    func_0x03d7a5b8(iVar2,uVar6,uVar3,uVar1);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    FUN_0210cd7c(&uStack_28,param_2);
    func_0x0210e76c(param_1,uStack_28,uStack_24);
    iVar2 = *(int *)(param_1 + 0x20);
    if (param_2 == 0) {
      func_0x01384bf0();
      uVar6 = func_0x0210e5f4(0);
      func_0x01384bf0();
    }
    else {
      uVar6 = func_0x0210e5f4(param_2);
    }
    FUN_0210cd7c(&uStack_28,param_2);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = **(undefined4 **)(_UNK_0210da2c + 0x210d9f8);
    func_0x03d7a588(iVar2,uVar6,uStack_28,uStack_24);
    uVar6 = 1;
  }
  return uVar6;
}



// ===== FAT.Merge.MergeAdjacentEffectTimeScale$$_TryApplyTimeScaleEffect RVA 0x20fd7f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0210d7f8(int param_1,int param_2)

{
  undefined4 uVar1;
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
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_0210da14 + 0x210d814);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210da18 + 0x210d828));
    func_0x01384978(*(undefined4 *)(_UNK_0210da1c + 0x210d834));
    func_0x01384978(*(undefined4 *)(_UNK_0210da20 + 0x210d840));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5bc3,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5bc3,0);
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
    uVar6 = func_0x0245496c(&uStack_38,0,0);
    return uVar6;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x0210e5f4(param_2);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x03d7a854(iVar2,uVar6,**(undefined4 **)(_UNK_0210da24 + 0x210d8cc));
  uVar6 = 0;
  if ((iVar2 == 0) && (iVar2 = func_0x0210e648(param_1,param_2), iVar2 != 0)) {
    iVar2 = *(int *)(param_1 + 0x20);
    if (param_2 == 0) {
      func_0x01384bf0();
      uVar6 = func_0x0210e5f4(0);
      func_0x01384bf0();
    }
    else {
      uVar6 = func_0x0210e5f4(param_2);
    }
    FUN_0210cd7c(&uStack_28,param_2);
    uVar1 = uStack_24;
    uVar3 = uStack_28;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = **(undefined4 **)(_UNK_0210da28 + 0x210d95c);
    func_0x03d7a5b8(iVar2,uVar6,uVar3,uVar1);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    FUN_0210cd7c(&uStack_28,param_2);
    func_0x0210e76c(param_1,uStack_28,uStack_24);
    iVar2 = *(int *)(param_1 + 0x20);
    if (param_2 == 0) {
      func_0x01384bf0();
      uVar6 = func_0x0210e5f4(0);
      func_0x01384bf0();
    }
    else {
      uVar6 = func_0x0210e5f4(param_2);
    }
    FUN_0210cd7c(&uStack_28,param_2);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = **(undefined4 **)(_UNK_0210da2c + 0x210d9f8);
    func_0x03d7a588(iVar2,uVar6,uStack_28,uStack_24);
    uVar6 = 1;
  }
  return uVar6;
}



// ===== FAT.Merge.MergeAdjacentEffectTimeScale$$TriggerUseTimeScaleSource RVA 0x20fda30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0210da30(int param_1,int param_2)

{
  undefined4 uVar1;
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
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar2 = func_0x0229f06c(0x9e3c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9e3c,0);
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
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    uVar6 = func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return uVar6;
  }
  pcVar5 = (char *)(_UNK_0210da14 + 0x210d814);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210da18 + 0x210d828));
    func_0x01384978(*(undefined4 *)(_UNK_0210da1c + 0x210d834));
    func_0x01384978(*(undefined4 *)(_UNK_0210da20 + 0x210d840));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5bc3,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5bc3,0);
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
    uVar6 = func_0x0245496c(&uStack_38,0,0);
    return uVar6;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x0210e5f4(param_2);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x03d7a854(iVar2,uVar6,**(undefined4 **)(_UNK_0210da24 + 0x210d8cc));
  uVar6 = 0;
  if ((iVar2 == 0) && (iVar2 = func_0x0210e648(param_1,param_2), iVar2 != 0)) {
    iVar2 = *(int *)(param_1 + 0x20);
    if (param_2 == 0) {
      func_0x01384bf0();
      uVar6 = func_0x0210e5f4(0);
      func_0x01384bf0();
    }
    else {
      uVar6 = func_0x0210e5f4(param_2);
    }
    FUN_0210cd7c(&uStack_28,param_2);
    uVar1 = uStack_24;
    uVar3 = uStack_28;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = **(undefined4 **)(_UNK_0210da28 + 0x210d95c);
    func_0x03d7a5b8(iVar2,uVar6,uVar3,uVar1);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    FUN_0210cd7c(&uStack_28,param_2);
    func_0x0210e76c(param_1,uStack_28,uStack_24);
    iVar2 = *(int *)(param_1 + 0x20);
    if (param_2 == 0) {
      func_0x01384bf0();
      uVar6 = func_0x0210e5f4(0);
      func_0x01384bf0();
    }
    else {
      uVar6 = func_0x0210e5f4(param_2);
    }
    FUN_0210cd7c(&uStack_28,param_2);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = **(undefined4 **)(_UNK_0210da2c + 0x210d9f8);
    func_0x03d7a588(iVar2,uVar6,uStack_28,uStack_24);
    uVar6 = 1;
  }
  return uVar6;
}



// ===== FAT.Merge.MergeAdjacentEffectTimeScale$$CalculateTimeScale RVA 0x20fda94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0210da94(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  uint uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar13 = (char *)(_UNK_0210e21c + 0x210dab0);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210e220 + 0x210dac4));
    func_0x01384978(*(undefined4 *)(_UNK_0210e224 + 0x210dad0));
    func_0x01384978(*(undefined4 *)(_UNK_0210e228 + 0x210dadc));
    func_0x01384978(*(undefined4 *)(_UNK_0210e22c + 0x210dae8));
    func_0x01384978(*(undefined4 *)(_UNK_0210e230 + 0x210daf4));
    *pcVar13 = '\x01';
  }
  iStack_28 = 0;
  iVar2 = func_0x0229f06c(0x5e4b,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03d7a28c(iVar2,**(undefined4 **)(_UNK_0210e234 + 0x210db6c));
    uVar3 = 1;
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
      FUN_0210cd7c(&iStack_30,param_2);
      iVar2 = iStack_30;
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      FUN_0210cd7c(&iStack_30,param_2);
      uVar4 = FUN_0210d114(param_1,iVar2,iStack_2c);
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar2 + 0xc) <= uVar4) {
        func_0x01384bf4();
      }
      uVar9 = *(uint *)(iVar2 + uVar4 * 4 + 0x10);
      if (uVar9 != 0) {
        iVar2 = *(int *)(param_1 + 0x18);
        if (iVar2 == 0) {
          func_0x01384bf0(uVar9);
        }
        if (*(uint *)(iVar2 + 0xc) <= uVar4) {
          func_0x01384bf4();
        }
        iVar2 = *(int *)(iVar2 + uVar4 * 4 + 0x10);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0210e2d4(param_2);
        if (iVar2 == iVar5) {
          iVar2 = *(int *)(param_1 + 0x1c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (*(uint *)(iVar2 + 0xc) <= uVar4) {
            func_0x01384bf4();
          }
          if (0 < *(int *)(iVar2 + uVar4 * 4 + 0x10)) {
            iVar2 = *(int *)(param_1 + 0x1c);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            if (*(uint *)(iVar2 + 0xc) <= uVar4) {
              func_0x01384bf4();
            }
            return *(uint *)(iVar2 + uVar4 * 4 + 0x10);
          }
        }
        uVar3 = 0xffffffff;
        uStack_34 = 1;
        while( true ) {
          iVar2 = *(int *)(param_1 + 0x10);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar2 + 0xc) <= (int)uStack_34) break;
          if ((uVar9 >> (uStack_34 - 1 & 0x1f) & 1) != 0) {
            iVar2 = *(int *)(param_1 + 0x28);
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            FUN_0210cd7c(&iStack_30,param_2);
            iVar5 = iStack_30;
            iVar14 = *(int *)(param_1 + 0x10);
            if (iVar14 == 0) {
              func_0x01384bf0();
            }
            if (*(uint *)(iVar14 + 0xc) <= uStack_34) {
              func_0x01384bf4();
            }
            iVar14 = *(int *)(iVar14 + uStack_34 * 8 + 0x10);
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            FUN_0210cd7c(&iStack_30,param_2);
            iVar1 = iStack_2c;
            iVar15 = *(int *)(param_1 + 0x10);
            if (iVar15 == 0) {
              func_0x01384bf0();
            }
            if (*(uint *)(iVar15 + 0xc) <= uStack_34) {
              func_0x01384bf4();
            }
            iVar15 = *(int *)(iVar15 + uStack_34 * 8 + 0x14);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = FUN_020e81ec(iVar2,iVar14 + iVar5,iVar15 + iVar1,0);
            if ((iVar2 != 0) &&
               (iVar5 = func_0x02feb690(iVar2,&iStack_28,0,
                                        **(undefined4 **)(_UNK_0210e238 + 0x210ddfc)),
               iVar2 = iStack_28, iVar5 != 0)) {
              if (iStack_28 == 0) {
                func_0x01384bf0();
              }
              iVar5 = func_0x0212f4e4(iVar2,0);
              iVar2 = iStack_28;
              if (iVar5 == 6) {
                if (iStack_28 == 0) {
                  func_0x01384bf0();
                }
                piVar6 = (int *)func_0x02132544(iVar2,0);
                if (piVar6 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar2 = *piVar6;
                uVar10 = (uint)*(ushort *)(iVar2 + 0xb6);
                if (uVar10 != 0) {
                  piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                  do {
                    if (piVar11[-1] == **(int **)(_UNK_0210e23c + 0x210de7c)) {
                      puVar7 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
                      goto LAB_0210dee8;
                    }
                    uVar10 = uVar10 - 1;
                    piVar11 = piVar11 + 2;
                  } while (uVar10 != 0);
                }
                puVar7 = (undefined4 *)
                         func_0x014002dc(piVar6,**(int **)(_UNK_0210e23c + 0x210de7c),0);
LAB_0210dee8:
                iVar5 = (*(code *)*puVar7)(piVar6,puVar7[1]);
                iVar2 = iStack_28;
                if (0 < iVar5) {
                  if (iStack_28 == 0) {
                    func_0x01384bf0();
                  }
                  piVar6 = (int *)func_0x02132544(iVar2,0);
                  piVar11 = (int *)func_0x021566f4(0);
                  if (param_2 == 0) {
                    func_0x01384bf0();
                  }
                  uVar8 = func_0x0210e2d4(param_2);
                  if (piVar11 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar2 = *piVar11;
                  uVar10 = (uint)*(ushort *)(iVar2 + 0xb6);
                  if (uVar10 != 0) {
                    piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                    do {
                      if (piVar12[-1] == **(int **)(_UNK_0210e240 + 0x210df60)) {
                        puVar7 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0x118);
                        goto LAB_0210dfa8;
                      }
                      uVar10 = uVar10 - 1;
                      piVar12 = piVar12 + 2;
                    } while (uVar10 != 0);
                  }
                  puVar7 = (undefined4 *)
                           func_0x014002dc(piVar11,**(int **)(_UNK_0210e240 + 0x210df60),0xb);
LAB_0210dfa8:
                  iVar2 = (*(code *)*puVar7)(piVar11,uVar8,puVar7[1]);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  uVar8 = *(undefined4 *)(iVar2 + 0x10);
                  if (piVar6 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar2 = *piVar6;
                  uVar10 = (uint)*(ushort *)(iVar2 + 0xb6);
                  if (uVar10 != 0) {
                    piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                    do {
                      if (piVar11[-1] == **(int **)(_UNK_0210e244 + 0x210dff0)) {
                        puVar7 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xe0);
                        goto LAB_0210e038;
                      }
                      uVar10 = uVar10 - 1;
                      piVar11 = piVar11 + 2;
                    } while (uVar10 != 0);
                  }
                  puVar7 = (undefined4 *)
                           func_0x014002dc(piVar6,**(int **)(_UNK_0210e244 + 0x210dff0),4);
LAB_0210e038:
                  iVar2 = (*(code *)*puVar7)(piVar6,uVar8,puVar7[1]);
                  if (iVar2 == 0) goto LAB_0210dec8;
                }
                iVar2 = iStack_28;
                if (iStack_28 == 0) {
                  func_0x01384bf0();
                }
                piVar6 = (int *)func_0x021325a8(iVar2,0);
                if (piVar6 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar2 = *piVar6;
                uVar10 = (uint)*(ushort *)(iVar2 + 0xb6);
                if (uVar10 != 0) {
                  piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                  do {
                    if (piVar11[-1] == **(int **)(_UNK_0210e248 + 0x210e090)) {
                      puVar7 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
                      goto LAB_0210e0d8;
                    }
                    uVar10 = uVar10 - 1;
                    piVar11 = piVar11 + 2;
                  } while (uVar10 != 0);
                }
                puVar7 = (undefined4 *)
                         func_0x014002dc(piVar6,**(int **)(_UNK_0210e248 + 0x210e090),0);
LAB_0210e0d8:
                iVar5 = (*(code *)*puVar7)(piVar6,0,puVar7[1]);
                iVar2 = iStack_28;
                if ((int)uVar3 < iVar5) {
                  if (iStack_28 == 0) {
                    func_0x01384bf0();
                  }
                  piVar6 = (int *)func_0x021325a8(iVar2,0);
                  if (piVar6 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar2 = *piVar6;
                  uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
                  if (uVar3 != 0) {
                    piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                    do {
                      if (piVar11[-1] == **(int **)(_UNK_0210e24c + 0x210e130)) {
                        puVar7 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
                        goto LAB_0210e178;
                      }
                      uVar3 = uVar3 - 1;
                      piVar11 = piVar11 + 2;
                    } while (uVar3 != 0);
                  }
                  puVar7 = (undefined4 *)
                           func_0x014002dc(piVar6,**(int **)(_UNK_0210e24c + 0x210e130),0);
LAB_0210e178:
                  uVar3 = (*(code *)*puVar7)(piVar6,0,puVar7[1]);
                }
              }
            }
          }
LAB_0210dec8:
          uStack_34 = uStack_34 + 1;
        }
        iVar2 = *(int *)(param_1 + 0x18);
        if (0x7fffffff < uVar3) {
          uVar3 = 1;
        }
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        uVar8 = func_0x0210e2d4(param_2);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar2 + 0xc) <= uVar4) {
          func_0x01384bf4();
        }
        iVar5 = *(int *)(param_1 + 0x1c);
        *(undefined4 *)(iVar2 + uVar4 * 4 + 0x10) = uVar8;
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar5 + 0xc) <= uVar4) {
          func_0x01384bf4();
        }
        *(uint *)(iVar5 + uVar4 * 4 + 0x10) = uVar3;
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5e4b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0217bafc(iVar2,param_1,param_2,0);
  }
  return uVar3;
}



// ===== FAT.Merge.MergeAdjacentEffectTimeScale$$GetNextTimeScaleItemLifeMilli RVA 0x20fe328 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0210e328(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_50;
  undefined8 uStack_4c;
  int iStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  
  pcVar6 = (char *)(_UNK_0210e5c0 + 0x210e340);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210e5c4 + 0x210e354));
    func_0x01384978(*(undefined4 *)(_UNK_0210e5c8 + 0x210e360));
    func_0x01384978(*(undefined4 *)(_UNK_0210e5cc + 0x210e36c));
    func_0x01384978(*(undefined4 *)(_UNK_0210e5d0 + 0x210e378));
    func_0x01384978(*(undefined4 *)(_UNK_0210e5d4 + 0x210e384));
    func_0x01384978(*(undefined4 *)(_UNK_0210e5d8 + 0x210e390));
    *pcVar6 = '\x01';
  }
  uStack_3c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_40 = 0;
  uStack_34 = (ulonglong)uStack_3c << 0x20;
  uStack_2c = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),uStack_38);
  iStack_44 = 0;
  iVar3 = func_0x0229f06c(0x5e45,0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x20);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x03d7aad0(&uStack_60,iVar3,**(undefined4 **)(_UNK_0210e5dc + 0x210e420));
    uStack_2c = uStack_4c;
    iVar3 = 0x7fffffff;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    uStack_38 = uStack_58;
    uStack_34 = (ulonglong)uStack_50 << 0x20;
    puVar7 = *(undefined4 **)(_UNK_0210e5e0 + 0x210e458);
    while (iVar4 = func_0x03f9eb80(&uStack_40,*puVar7), iVar4 != 0) {
      iVar4 = *(int *)(param_1 + 0x28);
      uVar1 = uStack_34._4_4_;
      uVar2 = (undefined4)uStack_2c;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = FUN_020e81ec(iVar4,uVar1,uVar2,0);
      if ((iVar4 != 0) &&
         (iVar5 = func_0x02feb690(iVar4,&iStack_44,0,**(undefined4 **)(_UNK_0210e5e4 + 0x210e4a8)),
         iVar4 = iStack_44, iVar5 != 0)) {
        if (iStack_44 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0213284c(iVar4,0);
        iVar4 = iStack_44;
        if (iVar5 < iVar3) {
          if (iStack_44 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x0213284c(iVar4,0);
        }
      }
    }
    func_0x03f9ecdc(&uStack_40,**(undefined4 **)(_UNK_0210e5ec + 0x210e510));
  }
  else {
    iVar3 = func_0x0229f13c(0x5e45,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0217493c(iVar3,param_1,0);
  }
  return iVar3;
}



// ===== FAT.Merge.MergeAdjacentEffectTimeScale$$_IsTimeScaleItem RVA 0x20fe648 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0210e648(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_0210e760 + 0x210e664);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210e764 + 0x210e678));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x5bc4,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02feb690(param_2,&iStack_14,0,**(undefined4 **)(_UNK_0210e768 + 0x210e6f0));
    iVar1 = iStack_14;
    if (iVar3 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0212f4e4(iVar1,0);
      iVar1 = iStack_14;
      if (iVar3 == 6) {
        if (iStack_14 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x021326c4(iVar1,0);
        return (uint)(iVar1 != 0);
      }
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x5bc4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021734d8(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.Merge.MergeAdjacentEffectTimeScale$$_SetFlag RVA 0x20fe76c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0210e76c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0210e850 + 0x210e78c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210e854 + 0x210e7a0));
    func_0x01384978(*(undefined4 *)(_UNK_0210e858 + 0x210e7ac));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5bc5,0);
  if (iVar1 == 0) {
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_0210e85c + 0x210e810));
    func_0x03cd3a48(uVar2,param_1,**(undefined4 **)(_UNK_0210e860 + 0x210e82c),0);
    FUN_0210cfe8(param_1,uVar2,param_2,param_3);
  }
  else {
    iVar1 = func_0x0229f13c(0x5bc5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0220cf98(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.MergeAdjacentEffectTimeScale$$_ClearFlag RVA 0x20fe864 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0210e864(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0210e948 + 0x210e884);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210e94c + 0x210e898));
    func_0x01384978(*(undefined4 *)(_UNK_0210e950 + 0x210e8a4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5bcd,0);
  if (iVar1 == 0) {
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_0210e954 + 0x210e908));
    func_0x03cd3a48(uVar2,param_1,**(undefined4 **)(_UNK_0210e958 + 0x210e924),0);
    FUN_0210cfe8(param_1,uVar2,param_2,param_3);
  }
  else {
    iVar1 = func_0x0229f13c(0x5bcd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0220cf98(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.MergeAdjacentEffectTimeScale$$_OnItemEnter RVA 0x20fe95c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0210e95c(undefined4 param_1,int param_2)

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
  undefined1 auStack_20 [12];
  
  pcVar5 = (char *)(_UNK_0210eb70 + 0x210e978);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210eb74 + 0x210e98c));
    func_0x01384978(*(undefined4 *)(_UNK_0210eb78 + 0x210e998));
    func_0x01384978(*(undefined4 *)(_UNK_0210eb7c + 0x210e9a4));
    func_0x01384978(*(undefined4 *)(_UNK_0210eb80 + 0x210e9b0));
    func_0x01384978(*(undefined4 *)(_UNK_0210eb84 + 0x210e9bc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5bc2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5bc2,0);
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
  iVar1 = FUN_0210d7f8(param_1,param_2);
  if (iVar1 != 0) {
    piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0210eb88 + 0x210ea34),2);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    FUN_0210e5f4(param_2);
    iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_0210eb8c + 0x210ea5c),&stack0xffffffec);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar1 != 0) && (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)
       ) {
      uVar6 = func_0x01384c10();
      func_0x01384aa0(uVar6,0);
    }
    if (piVar2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2[4] = iVar1;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    FUN_0210cd7c(auStack_20,param_2);
    iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_0210eb90 + 0x210eae4),auStack_20);
    if ((iVar1 != 0) && (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)
       ) {
      uVar6 = func_0x01384c10();
      func_0x01384aa0(uVar6,0);
    }
    if ((uint)piVar2[3] < 2) {
      func_0x01384bf4();
    }
    piVar2[5] = iVar1;
    if (*(int *)(**(int **)(_UNK_0210eb94 + 0x210eb40) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02450c80(**(undefined4 **)(_UNK_0210eb98 + 0x210eb64),piVar2,0);
  }
  return;
}



// ===== FAT.Merge.MergeAdjacentEffectTimeScale$$_OnItemLeave RVA 0x20feb9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0210eb9c(int param_1,int param_2)

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
  undefined4 auStack_28 [3];
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_0210eea0 + 0x210ebb8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210eea4 + 0x210ebcc));
    func_0x01384978(*(undefined4 *)(_UNK_0210eea8 + 0x210ebd8));
    func_0x01384978(*(undefined4 *)(_UNK_0210eeac + 0x210ebe4));
    func_0x01384978(*(undefined4 *)(_UNK_0210eeb0 + 0x210ebf0));
    func_0x01384978(*(undefined4 *)(_UNK_0210eeb4 + 0x210ebfc));
    func_0x01384978(*(undefined4 *)(_UNK_0210eeb8 + 0x210ec08));
    func_0x01384978(*(undefined4 *)(_UNK_0210eebc + 0x210ec14));
    func_0x01384978(*(undefined4 *)(_UNK_0210eec0 + 0x210ec20));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5bcb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5bcb,0);
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
  iVar1 = *(int *)(param_1 + 0x20);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar6 = FUN_0210e5f4(param_2);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03d7a854(iVar1,uVar6,**(undefined4 **)(_UNK_0210eec4 + 0x210ecac));
  if (iVar1 != 0) {
    piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0210eec8 + 0x210eccc),2);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = FUN_0210e5f4(param_2);
    iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_0210eecc + 0x210ecf4),&uStack_1c);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar1 != 0) && (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)
       ) {
      uVar6 = func_0x01384c10();
      func_0x01384aa0(uVar6,0);
    }
    if (piVar2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2[4] = iVar1;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    FUN_0210cd7c(auStack_28,param_2);
    iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_0210eed0 + 0x210ed80),auStack_28);
    if ((iVar1 != 0) && (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)
       ) {
      uVar6 = func_0x01384c10();
      func_0x01384aa0(uVar6,0);
    }
    if ((uint)piVar2[3] < 2) {
      func_0x01384bf4();
    }
    piVar2[5] = iVar1;
    if (*(int *)(**(int **)(_UNK_0210eed4 + 0x210ede0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02450c80(**(undefined4 **)(_UNK_0210eed8 + 0x210ee04),piVar2,0);
    iVar1 = *(int *)(param_1 + 0x20);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar6 = FUN_0210e5f4(param_2);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d7a4dc(&uStack_30,iVar1,uVar6,**(undefined4 **)(_UNK_0210eedc + 0x210ee44));
    FUN_0210e76c(param_1,uStack_30,uStack_2c);
    iVar1 = *(int *)(param_1 + 0x20);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar6 = FUN_0210e5f4(param_2);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d7bd44(iVar1,uVar6,**(undefined4 **)(_UNK_0210eee0 + 0x210ee90));
  }
  return;
}



// ===== FAT.Merge.MergeAdjacentEffectTimeScale$$_OnItemMove RVA 0x20feee4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0210eee4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  
  pcVar5 = (char *)(_UNK_0210f2a8 + 0x210ef00);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210f2ac + 0x210ef14));
    func_0x01384978(*(undefined4 *)(_UNK_0210f2b0 + 0x210ef20));
    func_0x01384978(*(undefined4 *)(_UNK_0210f2b4 + 0x210ef2c));
    func_0x01384978(*(undefined4 *)(_UNK_0210f2b8 + 0x210ef38));
    func_0x01384978(*(undefined4 *)(_UNK_0210f2bc + 0x210ef44));
    func_0x01384978(*(undefined4 *)(_UNK_0210f2c0 + 0x210ef50));
    func_0x01384978(*(undefined4 *)(_UNK_0210f2c4 + 0x210ef5c));
    func_0x01384978(*(undefined4 *)(_UNK_0210f2c8 + 0x210ef68));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5bcc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5bcc,0);
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
  iVar1 = *(int *)(param_1 + 0x20);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar6 = FUN_0210e5f4(param_2);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03d7a854(iVar1,uVar6,**(undefined4 **)(_UNK_0210f2cc + 0x210eff4));
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar6 = FUN_0210e5f4(param_2);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d7a4dc(&uStack_28,iVar1,uVar6,**(undefined4 **)(_UNK_0210f2d0 + 0x210f040));
    FUN_0210e864(param_1,uStack_28,uStack_24);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    FUN_0210cd7c(&uStack_28,param_2);
    FUN_0210e76c(param_1,uStack_28,uStack_24);
    iVar1 = *(int *)(param_1 + 0x20);
    if (param_2 == 0) {
      func_0x01384bf0();
      uVar6 = FUN_0210e5f4(0);
      func_0x01384bf0();
    }
    else {
      uVar6 = FUN_0210e5f4(param_2);
    }
    FUN_0210cd7c(&uStack_28,param_2);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_40 = **(undefined4 **)(_UNK_0210f2d4 + 0x210f0f0);
    func_0x03d7a588(iVar1,uVar6,uStack_28,uStack_24);
    piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0210f2d8 + 0x210f10c),3);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = FUN_0210e5f4(param_2);
    iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_0210f2dc + 0x210f134),&uStack_2c);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar1 != 0) && (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)
       ) {
      uVar6 = func_0x01384c10();
      func_0x01384aa0(uVar6,0);
    }
    if (piVar2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2[4] = iVar1;
    puVar7 = *(undefined4 **)(_UNK_0210f2e0 + 0x210f1a4);
    iVar1 = func_0x01384abc(*puVar7,&uStack_28);
    if ((iVar1 != 0) && (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)
       ) {
      uVar6 = func_0x01384c10();
      func_0x01384aa0(uVar6,0);
    }
    if ((uint)piVar2[3] < 2) {
      func_0x01384bf4();
    }
    piVar2[5] = iVar1;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    FUN_0210cd7c(&uStack_38,param_2);
    iVar1 = func_0x01384abc(*puVar7,&uStack_38);
    if ((iVar1 != 0) && (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)
       ) {
      uVar6 = func_0x01384c10();
      func_0x01384aa0(uVar6,0);
    }
    if ((uint)piVar2[3] < 3) {
      func_0x01384bf4();
    }
    piVar2[6] = iVar1;
    if (*(int *)(**(int **)(_UNK_0210f2e4 + 0x210f278) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02450c80(**(undefined4 **)(_UNK_0210f2e8 + 0x210f29c),piVar2,0);
  }
  return;
}



// ===== FAT.Merge.MergeAdjacentEffectTimeScale$$.ctor RVA 0x20ff2ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0210f2ec(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  undefined4 uVar6;
  
  pcVar5 = (char *)(_UNK_0210f360 + 0x210f300);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210f364 + 0x210f314));
    func_0x01384978(*(undefined4 *)(_UNK_0210f368 + 0x210f320));
    *pcVar5 = '\x01';
  }
  uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_0210f36c + 0x210f334));
  func_0x03d79b28(uVar4,**(undefined4 **)(_UNK_0210f370 + 0x210f348));
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  pcVar5 = (char *)(_UNK_0210d510 + 0x210d39c);
  uVar4 = extraout_r2_00;
  uVar6 = extraout_r3_00;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210d514 + 0x210d3b0));
    *pcVar5 = '\x01';
    uVar4 = extraout_r2;
    uVar6 = extraout_r3;
  }
  iVar1 = func_0x01384a00(**(undefined4 **)(_UNK_0210d518 + 0x210d3c8),9,uVar4,uVar6,unaff_r4,
                          unaff_r5);
  pcVar5 = (char *)(_UNK_0210d51c + 0x210d3dc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210d520 + 0x210d3f0));
    *pcVar5 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_0210d524 + 0x210d408) + 0x5c);
  uVar4 = *puVar2;
  uVar6 = puVar2[1];
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar3 = *(uint *)(iVar1 + 0xc);
  if (uVar3 == 0) {
    func_0x01384bf4();
    uVar3 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x10) = uVar4;
  *(undefined4 *)(iVar1 + 0x14) = uVar6;
  if (uVar3 < 2) {
    func_0x01384bf4();
    uVar3 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x18) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x1c) = 1;
  if (uVar3 < 3) {
    func_0x01384bf4();
    uVar3 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 1;
  if (uVar3 < 4) {
    func_0x01384bf4();
    uVar3 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x28) = 1;
  *(undefined4 *)(iVar1 + 0x2c) = 1;
  if (uVar3 < 5) {
    func_0x01384bf4();
    uVar3 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x30) = 1;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  if (uVar3 < 6) {
    func_0x01384bf4();
    uVar3 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x38) = 1;
  *(undefined4 *)(iVar1 + 0x3c) = 0xffffffff;
  if (uVar3 < 7) {
    func_0x01384bf4();
    uVar3 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0xffffffff;
  if (uVar3 < 8) {
    func_0x01384bf4();
    uVar3 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x48) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x4c) = 0xffffffff;
  if (uVar3 < 9) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x50) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(int *)(param_1 + 0x10) = iVar1;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.MergeAdjacentEffectTimeScale$$<_SetFlag>g___Imp|13_0 RVA 0x20ff374 =====

void FUN_0210f374(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((int)param_2 < 0) {
    return;
  }
  FUN_0210d1a4(param_1,*(undefined4 *)(param_1 + 0x14),param_2,param_3);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(uint *)(iVar1 + 0xc) <= param_2) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + param_2 * 4 + 0x10) = 0xffffffff;
  return;
}



// ===== FAT.Merge.MergeAdjacentEffectTimeScale$$<_ClearFlag>g___Imp|14_0 RVA 0x20ff3d4 =====

void FUN_0210f3d4(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((int)param_2 < 0) {
    return;
  }
  FUN_0210d24c(param_1,*(undefined4 *)(param_1 + 0x14),param_2,param_3);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(uint *)(iVar1 + 0xc) <= param_2) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + param_2 * 4 + 0x10) = 0xffffffff;
  return;
}


