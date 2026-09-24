/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.TrainMissionActivity$$get_World RVA 0x2b774d4 =====

undefined4 FUN_02b874d4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x88);
}



// ===== FAT.TrainMissionActivity$$set_World RVA 0x2b774dc =====

void FUN_02b874dc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x88) = param_2;
  return;
}



// ===== FAT.TrainMissionActivity$$get_WorldTracer RVA 0x2b774e4 =====

undefined4 FUN_02b874e4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8c);
}



// ===== FAT.TrainMissionActivity$$set_WorldTracer RVA 0x2b774ec =====

void FUN_02b874ec(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x8c) = param_2;
  return;
}



// ===== FAT.TrainMissionActivity$$get_Visual RVA 0x2b774f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b874f4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7543,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7543,0);
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
  return *(undefined4 *)(param_1 + 0x94);
}



// ===== FAT.TrainMissionActivity$$get_VisualMain RVA 0x2b77548 =====

void FUN_02b87548(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x94);
  *param_1 = *(undefined4 *)(param_2 + 0x90);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.TrainMissionActivity$$get_VisualHelp RVA 0x2b77554 =====

void FUN_02b87554(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  *param_1 = *(undefined4 *)(param_2 + 0x98);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.TrainMissionActivity$$get_VisualChooseGroup RVA 0x2b77560 =====

void FUN_02b87560(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xa4);
  *param_1 = *(undefined4 *)(param_2 + 0xa0);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.TrainMissionActivity$$get_VisualComplete RVA 0x2b7756c =====

void FUN_02b8756c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xac);
  *param_1 = *(undefined4 *)(param_2 + 0xa8);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.TrainMissionActivity$$get_VisualLoading RVA 0x2b77578 =====

void FUN_02b87578(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xb4);
  *param_1 = *(undefined4 *)(param_2 + 0xb0);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.TrainMissionActivity$$get_VisualPreview RVA 0x2b77584 =====

void FUN_02b87584(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xbc);
  *param_1 = *(undefined4 *)(param_2 + 0xb8);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.TrainMissionActivity$$get_VisualReward RVA 0x2b77590 =====

void FUN_02b87590(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc4);
  *param_1 = *(undefined4 *)(param_2 + 0xc0);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.TrainMissionActivity$$get_VisualItemInfo RVA 0x2b7759c =====

void FUN_02b8759c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xcc);
  *param_1 = *(undefined4 *)(param_2 + 200);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.TrainMissionActivity$$get_StartPopup RVA 0x2b775a8 =====

void FUN_02b875a8(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0xd8);
  *param_1 = uVar1;
  return;
}



// ===== FAT.TrainMissionActivity$$get_EndPopup RVA 0x2b775bc =====

void FUN_02b875bc(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0xe4);
  *param_1 = uVar1;
  return;
}



// ===== FAT.TrainMissionActivity$$get_waitEnterNextChallenge RVA 0x2b775d0 =====

uint FUN_02b875d0(int param_1)

{
  uint uVar1;
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
  
  iVar2 = func_0x0229f06c(0x7545,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7545,0);
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
    uVar1 = func_0x0245496c(&uStack_30,0,0);
    return uVar1;
  }
  return (uint)*(byte *)(param_1 + 0x5c);
}



// ===== FAT.TrainMissionActivity$$get_waitRecycle RVA 0x2b77624 =====

uint FUN_02b87624(int param_1)

{
  uint uVar1;
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
  
  iVar2 = func_0x0229f06c(0x7546,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7546,0);
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
    uVar1 = func_0x0245496c(&uStack_30,0,0);
    return uVar1;
  }
  return (uint)*(byte *)(param_1 + 0x5d);
}



// ===== FAT.TrainMissionActivity$$get_NeedPlayEnterAnim RVA 0x2b77678 =====

uint FUN_02b87678(int param_1)

{
  uint uVar1;
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
  
  iVar2 = func_0x0229f06c(0x7547,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7547,0);
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
    uVar1 = func_0x0245496c(&uStack_30,0,0);
    return uVar1;
  }
  return (uint)*(byte *)(param_1 + 0x5e);
}



// ===== FAT.TrainMissionActivity$$get_challengeIndex RVA 0x2b776cc =====

undefined4 FUN_02b876cc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7548,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7548,0);
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



// ===== FAT.TrainMissionActivity$$get_groupDetailID RVA 0x2b77720 =====

undefined4 FUN_02b87720(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7549,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7549,0);
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



// ===== FAT.TrainMissionActivity$$get_recycleReward RVA 0x2b77774 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b87774(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x754a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x754a,0);
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
  return *(undefined4 *)(param_1 + 0xf8);
}



// ===== FAT.TrainMissionActivity$$get_TrainQueue RVA 0x2b777c8 =====

undefined4 FUN_02b877c8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x2371,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2371,0);
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
  return *(undefined4 *)(param_1 + 0x6c);
}



// ===== FAT.TrainMissionActivity$$add_Invalidate RVA 0x2b7781c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b8781c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_02b878b0 + 0x2b87834);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b878b4 + 0x2b87848));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_02b878b8 + 0x2b87860);
  iVar1 = *(int *)(param_1 + 0x100);
  do {
    piVar2 = (int *)func_0x0487907c(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_02b87890:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_02b87890;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0x100),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.TrainMissionActivity$$remove_Invalidate RVA 0x2b778bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b878bc(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_02b87950 + 0x2b878d4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b87954 + 0x2b878e8));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_02b87958 + 0x2b87900);
  iVar1 = *(int *)(param_1 + 0x100);
  do {
    piVar2 = (int *)func_0x0487929c(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_02b87930:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_02b87930;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0x100),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.TrainMissionActivity$$.ctor RVA 0x2b7795c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b8795c(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
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
  
  pcVar5 = (char *)(_UNK_02b87ccc + 0x2b87978);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b87cd0 + 0x2b8798c));
    func_0x01384978(*(undefined4 *)(_UNK_02b87cd4 + 0x2b87998));
    func_0x01384978(*(undefined4 *)(_UNK_02b87cd8 + 0x2b879a4));
    func_0x01384978(*(undefined4 *)(_UNK_02b87cdc + 0x2b879b0));
    func_0x01384978(*(undefined4 *)(_UNK_02b87ce0 + 0x2b879bc));
    func_0x01384978(*(undefined4 *)(_UNK_02b87ce4 + 0x2b879c8));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_02b87ce8 + 0x2b87a10);
  iVar1 = *piVar6;
  iVar4 = *(int *)(iVar1 + 0x74);
  *(undefined4 *)(param_1 + 0x74) = 1;
  if (iVar4 == 0) {
    func_0x01384ab4();
    iVar1 = *piVar6;
  }
  uStack_2c = 0;
  uStack_30 = 0;
  FUN_02b644a0(&uStack_30,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x5dc),0);
  uStack_34 = 0;
  *(undefined4 *)(param_1 + 0x90) = uStack_30;
  *(undefined4 *)(param_1 + 0x94) = uStack_2c;
  uStack_38 = 0;
  FUN_02b644a0(&uStack_38,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x5f0),0);
  uStack_3c = 0;
  *(undefined4 *)(param_1 + 0x98) = uStack_38;
  *(undefined4 *)(param_1 + 0x9c) = uStack_34;
  uStack_40 = 0;
  FUN_02b644a0(&uStack_40,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x5e4),0);
  uStack_44 = 0;
  *(undefined4 *)(param_1 + 0xa0) = uStack_40;
  *(undefined4 *)(param_1 + 0xa4) = uStack_3c;
  uStack_48 = 0;
  FUN_02b644a0(&uStack_48,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x5e8),0);
  uStack_4c = 0;
  *(undefined4 *)(param_1 + 0xa8) = uStack_48;
  *(undefined4 *)(param_1 + 0xac) = uStack_44;
  uStack_50 = 0;
  FUN_02b644a0(&uStack_50,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x5f4),0);
  uStack_54 = 0;
  *(undefined4 *)(param_1 + 0xb0) = uStack_50;
  *(undefined4 *)(param_1 + 0xb4) = uStack_4c;
  uStack_58 = 0;
  FUN_02b644a0(&uStack_58,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x5f8),0);
  uStack_5c = 0;
  *(undefined4 *)(param_1 + 0xb8) = uStack_58;
  *(undefined4 *)(param_1 + 0xbc) = uStack_54;
  uStack_60 = 0;
  FUN_02b644a0(&uStack_60,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x600),0);
  uStack_64 = 0;
  *(undefined4 *)(param_1 + 0xc0) = uStack_60;
  *(undefined4 *)(param_1 + 0xc4) = uStack_5c;
  uStack_68 = 0;
  FUN_02b644a0(&uStack_68,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x5fc),0);
  uStack_74 = 0;
  *(undefined4 *)(param_1 + 200) = uStack_68;
  *(undefined4 *)(param_1 + 0xcc) = uStack_64;
  uStack_78 = 0;
  uStack_70 = 0;
  FUN_02b64854(&uStack_78,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x5e0),0);
  iVar1 = *piVar6;
  *(undefined4 *)(param_1 + 0xd8) = uStack_70;
  *(ulonglong *)(param_1 + 0xd0) = CONCAT44(uStack_74,uStack_78);
  uStack_84 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_02b64854(&uStack_88,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x5ec),0);
  puVar7 = *(undefined4 **)(_UNK_02b87cec + 0x2b87c04);
  *(undefined4 *)(param_1 + 0xe4) = uStack_80;
  *(ulonglong *)(param_1 + 0xdc) = CONCAT44(uStack_84,uStack_88);
  uVar2 = func_0x01384be4(*puVar7);
  func_0x02b87d00();
  uVar3 = *puVar7;
  *(undefined4 *)(param_1 + 0xe8) = uVar2;
  uVar2 = func_0x01384be4(uVar3);
  func_0x02b87d00();
  puVar7 = *(undefined4 **)(_UNK_02b87cf0 + 0x2b87c38);
  *(undefined4 *)(param_1 + 0xec) = uVar2;
  uVar2 = func_0x01384be4(*puVar7);
  func_0x0328e950(uVar2,**(undefined4 **)(_UNK_02b87cf4 + 0x2b87c50));
  *(undefined4 *)(param_1 + 0xf0) = uVar2;
  FUN_02b4dc04(param_1,0);
  *(int **)(param_1 + 0x10) = param_2;
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar2 = (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(*param_2 + 0x104));
  if (*(int *)(**(int **)(_UNK_02b87cf8 + 0x2b87c9c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar2 = func_0x036a1750(uVar2,**(undefined4 **)(_UNK_02b87cfc + 0x2b87cb8));
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  return;
}



// ===== FAT.TrainMissionActivity$$get_BadgeAsset RVA 0x2b77e34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b87e34(int *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_02b87f40 + 0x2b87e4c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b87f44 + 0x2b87e60));
    func_0x01384978(*(undefined4 *)(_UNK_02b87f48 + 0x2b87e6c));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x754b,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03470a60(iVar1,**(undefined4 **)(_UNK_02b87f50 + 0x2b87f20),&uStack_14,
                            **(undefined4 **)(_UNK_02b87f4c + 0x2b87f14));
    if (iVar1 == 0) {
      uStack_14 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x754b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.TrainMissionActivity$$get_Feature RVA 0x2b77f54 =====

undefined4 FUN_02b87f54(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x754c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x754c,0);
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
  return 0x5e;
}



// ===== FAT.TrainMissionActivity$$SetupFresh RVA 0x2b77fa8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b87fa8(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02b8811c + 0x2b87fbc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b88120 + 0x2b87fd0));
    func_0x01384978(*(undefined4 *)(_UNK_02b88124 + 0x2b87fdc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x754d,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x5e) = 1;
    func_0x02b8812c(param_1);
    func_0x02b8824c(param_1);
    func_0x02b882ec(param_1);
    func_0x02b883c8(param_1);
    iVar1 = func_0x02b885d0(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) == 1) {
      iVar1 = func_0x02b885d0(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x03259410(iVar1,0,**(undefined4 **)(_UNK_02b88128 + 0x2b880a4));
      func_0x02b88a1c(param_1,uVar5);
    }
    iVar1 = *(int *)(param_1 + 0x80);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0x28)) {
      *(undefined1 *)(param_1 + 0x78) = 1;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xfc);
    uVar5 = *(undefined4 *)(param_1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0229f06c(0x31a,0,0,0);
    if (iVar3 == 0) {
      uVar2 = func_0x01e7e874(iVar1);
      func_0x01e7437c(iVar1,uVar5,uVar2,0);
    }
    else {
      iVar3 = func_0x0229f13c(0x31a,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x02174858(iVar3,iVar1,uVar5,0);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x754d,0);
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



// ===== FAT.TrainMissionActivity$$_RefreshMission RVA 0x2b7812c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b8812c(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02b88230 + 0x2b88140);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b88234 + 0x2b88154));
    func_0x01384978(*(undefined4 *)(_UNK_02b88238 + 0x2b88160));
    func_0x01384978(*(undefined4 *)(_UNK_02b8823c + 0x2b8816c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x754e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x754e,0);
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
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x0364c9b8(iVar1,uVar5,**(undefined4 **)(_UNK_02b88240 + 0x2b881ec));
  if (*(int *)(**(int **)(_UNK_02b88244 + 0x2b88204) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar5 = func_0x036a1750(uVar5,**(undefined4 **)(_UNK_02b88248 + 0x2b88220));
  *(undefined4 *)(param_1 + 0x80) = uVar5;
  return;
}



// ===== FAT.TrainMissionActivity$$_RefreshDetailID RVA 0x2b7824c =====

void FUN_02b8824c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x754f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x754f,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_1 + 0x80);
  iVar1 = *(int *)(iVar1 + 0x2c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = *(undefined4 *)(iVar3 + 0x2c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x01cf6408(iVar1,uVar4,0);
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  return;
}



// ===== FAT.TrainMissionActivity$$_InitWorld RVA 0x2b782ec =====

void FUN_02b882ec(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7550,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7550,0);
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
  func_0x02b8fac0(param_1);
  func_0x02b8fc58(param_1);
  func_0x02b8fd5c(param_1);
  func_0x02b8fdec(param_1);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_1 + 0x80);
  uVar4 = *(undefined4 *)(param_1 + 0x88);
  iVar1 = *(int *)(iVar1 + 0x4c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(iVar3 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = 0;
  uStack_14 = 0;
  func_0x01db8438(iVar1,uVar4,uVar2,1);
  return;
}



// ===== FAT.TrainMissionActivity$$_RefreshTheme RVA 0x2b783c8 =====

void FUN_02b883c8(int param_1)

{
  int iVar1;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_30 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x755d,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x80);
    uStack_20 = *(undefined4 *)(param_1 + 0x90);
    uStack_1c = *(undefined4 *)(param_1 + 0x94);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02b64540(&uStack_20,*(undefined4 *)(iVar1 + 0x40),0);
    iVar1 = *(int *)(param_1 + 0x80);
    uStack_20 = *(undefined4 *)(param_1 + 0x98);
    uStack_1c = *(undefined4 *)(param_1 + 0x9c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02b64540(&uStack_20,*(undefined4 *)(iVar1 + 0x30),0);
    iVar1 = *(int *)(param_1 + 0x80);
    uStack_20 = *(undefined4 *)(param_1 + 0xa0);
    uStack_1c = *(undefined4 *)(param_1 + 0xa4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02b64540(&uStack_20,*(undefined4 *)(iVar1 + 0x1c),0);
    iVar1 = *(int *)(param_1 + 0x80);
    uStack_20 = *(undefined4 *)(param_1 + 0xb0);
    uStack_1c = *(undefined4 *)(param_1 + 0xb4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02b64540(&uStack_20,*(undefined4 *)(iVar1 + 0x3c),0);
    uStack_20 = *(undefined4 *)(param_1 + 0xb8);
    uStack_1c = *(undefined4 *)(param_1 + 0xbc);
    iVar1 = *(int *)(param_1 + 0x80);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02b64540(&uStack_20,*(undefined4 *)(iVar1 + 0x4c),0);
    iVar1 = *(int *)(param_1 + 0x80);
    uStack_20 = *(undefined4 *)(param_1 + 200);
    uStack_1c = *(undefined4 *)(param_1 + 0xcc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02b64540(&uStack_20,*(undefined4 *)(iVar1 + 0x38),0);
    iVar1 = *(int *)(param_1 + 0x80);
    uStack_30 = *(undefined8 *)(param_1 + 0xd0);
    uStack_28 = *(undefined4 *)(param_1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x50),param_1,0,1,0);
    iVar1 = *(int *)(param_1 + 0x80);
    uStack_30 = *(undefined8 *)(param_1 + 0xdc);
    uStack_28 = *(undefined4 *)(param_1 + 0xe4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x24),param_1,0,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x755d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.TrainMissionActivity$$_GetCanChooseGroupDetailID RVA 0x2b785d0 =====

/* WARNING: Removing unreachable block (ram,0x02b888ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b885d0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_02b889cc + 0x2b885e4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b889d0 + 0x2b885f8));
    func_0x01384978(*(undefined4 *)(_UNK_02b889d4 + 0x2b88604));
    func_0x01384978(*(undefined4 *)(_UNK_02b889d8 + 0x2b88610));
    func_0x01384978(*(undefined4 *)(_UNK_02b889dc + 0x2b8861c));
    func_0x01384978(*(undefined4 *)(_UNK_02b889e0 + 0x2b88628));
    func_0x01384978(*(undefined4 *)(_UNK_02b889e4 + 0x2b88634));
    func_0x01384978(*(undefined4 *)(_UNK_02b889e8 + 0x2b88640));
    func_0x01384978(*(undefined4 *)(_UNK_02b889ec + 0x2b8864c));
    func_0x01384978(*(undefined4 *)(_UNK_02b889f0 + 0x2b88658));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7565,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7565,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar7 = (char *)(_UNK_021a9f78 + 0x21a9e98);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021a9f7c + 0x21a9eac),param_1,0);
      *pcVar7 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
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
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021a9f80 + 0x21a9f68));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b889f4 + 0x2b886b0));
  func_0x03258eb8(iVar1,**(undefined4 **)(_UNK_02b889f8 + 0x2b886c4));
  uVar9 = *(undefined4 *)(param_1 + 0x3c);
  if (*(int *)(**(int **)(_UNK_02b889fc + 0x2b886d8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar8 = func_0x036a1750(uVar9,**(undefined4 **)(_UNK_02b88a00 + 0x2b886f8));
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0x18);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0364c2b4(iVar8,**(undefined4 **)(_UNK_02b88a04 + 0x2b8872c));
  piVar10 = *(int **)(_UNK_02b88a08 + 0x2b88744);
  piVar11 = *(int **)(_UNK_02b88a0c + 0x2b8874c);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
          goto LAB_02b887a4;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_02b887a4:
    iVar8 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar8 == 0) goto LAB_02b88874;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
          goto LAB_02b8881c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_02b8881c:
    uVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    iVar8 = func_0x02b900c0(param_1,uVar9);
  } while (iVar8 == 0);
  func_0x02b90230(param_1,iVar1,uVar9);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0325b328(iVar1,**(undefined4 **)(_UNK_02b88a10 + 0x2b8886c));
LAB_02b88874:
  if (piVar2 != (int *)0x0) {
    iVar8 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_02b88a14 + 0x2b8888c)) {
          puVar3 = (undefined4 *)(iVar8 + *piVar10 * 8 + 0xc0);
          goto LAB_02b888d4;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02b88a14 + 0x2b8888c),0);
LAB_02b888d4:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  return iVar1;
}



// ===== FAT.TrainMissionActivity$$ChooseGroup RVA 0x2b78a1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b88a1c(int param_1,undefined4 param_2)

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
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int aiStack_20 [3];
  
  iVar1 = func_0x0229f06c(0x756e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x756e,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485238(&iStack_38,param_2,0);
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
    func_0x0245495c(iVar3,uVar5,&iStack_38,uVar2,0,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x40) = param_2;
  func_0x019b94c8(param_1,param_2,0);
  func_0x02b8ae80(param_1);
  func_0x02b8aee0(param_1);
  pcVar4 = (char *)(_UNK_02b8b140 + 0x2b8af6c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8b144 + 0x2b8af80));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7577,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7577,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    aiStack_20[0] = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    aiStack_20[0] = iStack_38;
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_02b8b148 + 0x2b8b004);
  uVar5 = func_0x0364c9b8(iVar1,0,*puVar6);
  uVar5 = func_0x02c05738(uVar5,1,0);
  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364c9b8(iVar1,1,*puVar6);
  uVar2 = func_0x02c05738(uVar2,1,0);
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02139cf4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  func_0x020ddf40(iVar1,uVar5,0,0);
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02139cf4(iVar1,0);
  iVar3 = *(int *)(param_1 + 0x88);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x02139cf4(iVar3,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x020da680(aiStack_20,iVar3,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  func_0x020ddf40(iVar1,uVar2,0,aiStack_20[0] + -1);
  return;
}



// ===== FAT.TrainMissionActivity$$TryPopup RVA 0x2b78aa0 =====

void FUN_02b88aa0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x7578,0);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0xd8);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x01e7437c(param_2,uVar2,param_3,param_1,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x7578,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.TrainMissionActivity$$SaveSetup RVA 0x2b78b38 =====

/* WARNING: Possible PIC construction at 0x02b88c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88f04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88fe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b8901c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b89058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b89094: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02b8905c) */
/* WARNING: Removing unreachable block (ram,0x02b89084) */
/* WARNING: Removing unreachable block (ram,0x02b89088) */
/* WARNING: Removing unreachable block (ram,0x02b89020) */
/* WARNING: Removing unreachable block (ram,0x02b89048) */
/* WARNING: Removing unreachable block (ram,0x02b8904c) */
/* WARNING: Removing unreachable block (ram,0x02b88fe4) */
/* WARNING: Removing unreachable block (ram,0x02b8900c) */
/* WARNING: Removing unreachable block (ram,0x02b89010) */
/* WARNING: Removing unreachable block (ram,0x02b88f94) */
/* WARNING: Removing unreachable block (ram,0x02b88fb0) */
/* WARNING: Removing unreachable block (ram,0x02b88fb4) */
/* WARNING: Removing unreachable block (ram,0x02b88fd0) */
/* WARNING: Removing unreachable block (ram,0x02b88fd4) */
/* WARNING: Removing unreachable block (ram,0x02b88f44) */
/* WARNING: Removing unreachable block (ram,0x02b88f60) */
/* WARNING: Removing unreachable block (ram,0x02b88f64) */
/* WARNING: Removing unreachable block (ram,0x02b88f80) */
/* WARNING: Removing unreachable block (ram,0x02b88f84) */
/* WARNING: Removing unreachable block (ram,0x02b88f08) */
/* WARNING: Removing unreachable block (ram,0x02b88f30) */
/* WARNING: Removing unreachable block (ram,0x02b88f34) */
/* WARNING: Removing unreachable block (ram,0x02b88ecc) */
/* WARNING: Removing unreachable block (ram,0x02b88ef4) */
/* WARNING: Removing unreachable block (ram,0x02b88ef8) */
/* WARNING: Removing unreachable block (ram,0x02b88e90) */
/* WARNING: Removing unreachable block (ram,0x02b88eb8) */
/* WARNING: Removing unreachable block (ram,0x02b88ebc) */
/* WARNING: Removing unreachable block (ram,0x02b88e40) */
/* WARNING: Removing unreachable block (ram,0x02b88e5c) */
/* WARNING: Removing unreachable block (ram,0x02b88e60) */
/* WARNING: Removing unreachable block (ram,0x02b88e7c) */
/* WARNING: Removing unreachable block (ram,0x02b88e80) */
/* WARNING: Removing unreachable block (ram,0x02b88df0) */
/* WARNING: Removing unreachable block (ram,0x02b88e0c) */
/* WARNING: Removing unreachable block (ram,0x02b88e10) */
/* WARNING: Removing unreachable block (ram,0x02b88e2c) */
/* WARNING: Removing unreachable block (ram,0x02b88e30) */
/* WARNING: Removing unreachable block (ram,0x02b88da0) */
/* WARNING: Removing unreachable block (ram,0x02b88dbc) */
/* WARNING: Removing unreachable block (ram,0x02b88dc0) */
/* WARNING: Removing unreachable block (ram,0x02b88ddc) */
/* WARNING: Removing unreachable block (ram,0x02b88de0) */
/* WARNING: Removing unreachable block (ram,0x02b88d50) */
/* WARNING: Removing unreachable block (ram,0x02b88d6c) */
/* WARNING: Removing unreachable block (ram,0x02b88d70) */
/* WARNING: Removing unreachable block (ram,0x02b88d8c) */
/* WARNING: Removing unreachable block (ram,0x02b88d90) */
/* WARNING: Removing unreachable block (ram,0x02b88d14) */
/* WARNING: Removing unreachable block (ram,0x02b88d3c) */
/* WARNING: Removing unreachable block (ram,0x02b88d40) */
/* WARNING: Removing unreachable block (ram,0x02b88cd8) */
/* WARNING: Removing unreachable block (ram,0x02b88d00) */
/* WARNING: Removing unreachable block (ram,0x02b88d04) */
/* WARNING: Removing unreachable block (ram,0x02b88c9c) */
/* WARNING: Removing unreachable block (ram,0x02b88cc4) */
/* WARNING: Removing unreachable block (ram,0x02b88cc8) */
/* WARNING: Removing unreachable block (ram,0x02b88c60) */
/* WARNING: Removing unreachable block (ram,0x02b88c88) */
/* WARNING: Removing unreachable block (ram,0x02b88c8c) */
/* WARNING: Removing unreachable block (ram,0x02b89098) */
/* WARNING: Removing unreachable block (ram,0x02b890c0) */
/* WARNING: Removing unreachable block (ram,0x02b890c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b88b38(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_38;
  char *pcStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  iVar1 = func_0x0229f06c(0x7579,0);
  if (iVar1 == 0) {
    pcVar4 = (char *)(_UNK_02b890d8 + 0x2b88bb4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b890dc + 0x2b88bc8));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x757a,0);
    if (iVar1 == 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(param_2 + 0x28);
      uVar5 = func_0x01c23ac8(0xffffffff,*(undefined1 *)(param_1 + 0x78),0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = **(int **)(_UNK_02b890e0 + 0x2b88c5c);
      pcVar6 = (char *)(_UNK_03652bac + 0x3652b1c);
      iStack_38 = param_1;
      pcStack_34 = pcVar4;
      iStack_30 = iVar1;
      uStack_2c = uVar5;
      if (*pcVar6 == '\0') {
        func_0x02457d54(*(undefined4 *)(_UNK_03652bb0 + 0x3652b30));
        *pcVar6 = '\x01';
      }
      func_0x03031dbc(uVar5,**(undefined4 **)(_UNK_03652bb4 + 0x3652b4c),
                      *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x80));
      func_0x036529a8(iVar1,*(int *)(iVar1 + 0xc) + 1,
                      *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x3c));
      iVar3 = *(int *)(iVar1 + 8);
      uVar7 = *(uint *)(iVar1 + 0xc);
      *(uint *)(iVar1 + 0xc) = uVar7 + 1;
      if (iVar3 == 0) {
        func_0x02457d50();
      }
      if (*(uint *)(iVar3 + 0xc) <= uVar7) {
        func_0x02457d5c();
      }
      *(undefined4 *)(iVar3 + uVar7 * 4 + 0x10) = uVar5;
      return;
    }
    iVar1 = func_0x0229f13c(0x757a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7579,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcStack_34 = *(char **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_38 = 0;
  func_0x0245494c(&iStack_50,0,param_2,0);
  iStack_38 = iStack_50;
  pcStack_34 = (char *)uStack_4c;
  iStack_30 = uStack_48;
  uStack_2c = uStack_44;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&iStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&iStack_38,param_1,0);
  func_0x01485278(&iStack_38,param_2,0);
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
  func_0x0245495c(iVar3,uVar5,&iStack_38,uVar2,0,0);
  return;
}



// ===== FAT.TrainMissionActivity$$SaveNormalData RVA 0x2b78b9c =====

/* WARNING: Possible PIC construction at 0x02b88c5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88f04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b88fe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b8901c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b89058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b89094: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02b8905c) */
/* WARNING: Removing unreachable block (ram,0x02b89084) */
/* WARNING: Removing unreachable block (ram,0x02b89088) */
/* WARNING: Removing unreachable block (ram,0x02b89020) */
/* WARNING: Removing unreachable block (ram,0x02b89048) */
/* WARNING: Removing unreachable block (ram,0x02b8904c) */
/* WARNING: Removing unreachable block (ram,0x02b88fe4) */
/* WARNING: Removing unreachable block (ram,0x02b8900c) */
/* WARNING: Removing unreachable block (ram,0x02b89010) */
/* WARNING: Removing unreachable block (ram,0x02b88f94) */
/* WARNING: Removing unreachable block (ram,0x02b88fb0) */
/* WARNING: Removing unreachable block (ram,0x02b88fb4) */
/* WARNING: Removing unreachable block (ram,0x02b88fd0) */
/* WARNING: Removing unreachable block (ram,0x02b88fd4) */
/* WARNING: Removing unreachable block (ram,0x02b88f44) */
/* WARNING: Removing unreachable block (ram,0x02b88f60) */
/* WARNING: Removing unreachable block (ram,0x02b88f64) */
/* WARNING: Removing unreachable block (ram,0x02b88f80) */
/* WARNING: Removing unreachable block (ram,0x02b88f84) */
/* WARNING: Removing unreachable block (ram,0x02b88f08) */
/* WARNING: Removing unreachable block (ram,0x02b88f30) */
/* WARNING: Removing unreachable block (ram,0x02b88f34) */
/* WARNING: Removing unreachable block (ram,0x02b88ecc) */
/* WARNING: Removing unreachable block (ram,0x02b88ef4) */
/* WARNING: Removing unreachable block (ram,0x02b88ef8) */
/* WARNING: Removing unreachable block (ram,0x02b88e90) */
/* WARNING: Removing unreachable block (ram,0x02b88eb8) */
/* WARNING: Removing unreachable block (ram,0x02b88ebc) */
/* WARNING: Removing unreachable block (ram,0x02b88e40) */
/* WARNING: Removing unreachable block (ram,0x02b88e5c) */
/* WARNING: Removing unreachable block (ram,0x02b88e60) */
/* WARNING: Removing unreachable block (ram,0x02b88e7c) */
/* WARNING: Removing unreachable block (ram,0x02b88e80) */
/* WARNING: Removing unreachable block (ram,0x02b88df0) */
/* WARNING: Removing unreachable block (ram,0x02b88e0c) */
/* WARNING: Removing unreachable block (ram,0x02b88e10) */
/* WARNING: Removing unreachable block (ram,0x02b88e2c) */
/* WARNING: Removing unreachable block (ram,0x02b88e30) */
/* WARNING: Removing unreachable block (ram,0x02b88da0) */
/* WARNING: Removing unreachable block (ram,0x02b88dbc) */
/* WARNING: Removing unreachable block (ram,0x02b88dc0) */
/* WARNING: Removing unreachable block (ram,0x02b88ddc) */
/* WARNING: Removing unreachable block (ram,0x02b88de0) */
/* WARNING: Removing unreachable block (ram,0x02b88d50) */
/* WARNING: Removing unreachable block (ram,0x02b88d6c) */
/* WARNING: Removing unreachable block (ram,0x02b88d70) */
/* WARNING: Removing unreachable block (ram,0x02b88d8c) */
/* WARNING: Removing unreachable block (ram,0x02b88d90) */
/* WARNING: Removing unreachable block (ram,0x02b88d14) */
/* WARNING: Removing unreachable block (ram,0x02b88d3c) */
/* WARNING: Removing unreachable block (ram,0x02b88d40) */
/* WARNING: Removing unreachable block (ram,0x02b88cd8) */
/* WARNING: Removing unreachable block (ram,0x02b88d00) */
/* WARNING: Removing unreachable block (ram,0x02b88d04) */
/* WARNING: Removing unreachable block (ram,0x02b88c9c) */
/* WARNING: Removing unreachable block (ram,0x02b88cc4) */
/* WARNING: Removing unreachable block (ram,0x02b88cc8) */
/* WARNING: Removing unreachable block (ram,0x02b88c60) */
/* WARNING: Removing unreachable block (ram,0x02b88c88) */
/* WARNING: Removing unreachable block (ram,0x02b88c8c) */
/* WARNING: Removing unreachable block (ram,0x02b89098) */
/* WARNING: Removing unreachable block (ram,0x02b890c0) */
/* WARNING: Removing unreachable block (ram,0x02b890c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b88b9c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_38;
  char *pcStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_02b890d8 + 0x2b88bb4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b890dc + 0x2b88bc8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x757a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x757a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcStack_34 = *(char **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    func_0x0245494c(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    pcStack_34 = (char *)uStack_4c;
    iStack_30 = uStack_48;
    uStack_2c = uStack_44;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485278(&iStack_38,param_2,0);
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
    func_0x0245495c(iVar3,uVar5,&iStack_38,uVar2,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x28);
  uVar5 = func_0x01c23ac8(0xffffffff,*(undefined1 *)(param_1 + 0x78),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = **(int **)(_UNK_02b890e0 + 0x2b88c5c);
  pcVar6 = (char *)(_UNK_03652bac + 0x3652b1c);
  iStack_38 = param_1;
  pcStack_34 = pcVar4;
  iStack_30 = iVar1;
  uStack_2c = uVar5;
  if (*pcVar6 == '\0') {
    func_0x02457d54(*(undefined4 *)(_UNK_03652bb0 + 0x3652b30));
    *pcVar6 = '\x01';
  }
  func_0x03031dbc(uVar5,**(undefined4 **)(_UNK_03652bb4 + 0x3652b4c),
                  *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x80));
  func_0x036529a8(iVar1,*(int *)(iVar1 + 0xc) + 1,
                  *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x3c));
  iVar3 = *(int *)(iVar1 + 8);
  uVar7 = *(uint *)(iVar1 + 0xc);
  *(uint *)(iVar1 + 0xc) = uVar7 + 1;
  if (iVar3 == 0) {
    func_0x02457d50();
  }
  if (*(uint *)(iVar3 + 0xc) <= uVar7) {
    func_0x02457d5c();
  }
  *(undefined4 *)(iVar3 + uVar7 * 4 + 0x10) = uVar5;
  return;
}



// ===== FAT.TrainMissionActivity$$LoadSetup RVA 0x2b790e4 =====

void FUN_02b890e4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x757b,0);
  if (iVar1 == 0) {
    func_0x02b891d8(param_1,param_2);
    FUN_02b8812c(param_1);
    FUN_02b883c8(param_1);
    iVar1 = func_0x02b89470(param_1);
    if (iVar1 == 0) {
      func_0x02b894cc(param_1);
    }
    iVar1 = *(int *)(param_1 + 0xe8);
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
    uVar4 = *(undefined4 *)(param_1 + 0x54);
    uVar2 = *(undefined4 *)(param_1 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b89648(iVar1,uVar5,uVar4,uVar2);
    uVar4 = *(undefined4 *)(param_1 + 0x50);
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    uVar5 = *(undefined4 *)(param_1 + 100);
    iVar1 = *(int *)(param_1 + 0xec);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b89648(iVar1,uVar4,uVar2,uVar5);
    return;
  }
  iVar1 = func_0x0229f13c(0x757b,0);
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



// ===== FAT.TrainMissionActivity$$LoadNormalData RVA 0x2b791d8 =====

void FUN_02b891d8(int param_1,int param_2)

{
  undefined1 uVar1;
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
  
  iVar2 = func_0x0229f06c(0x757c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x757c,0);
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
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x01c23b88(0xffffffff,*(undefined4 *)(param_2 + 0x28),0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x78) = uVar1;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar5 = func_0x01c23c30(iVar2,uVar5,0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar5 = func_0x01c23c30(iVar2,uVar3,0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar5 = func_0x01c23c30(iVar2,uVar3,0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar5 = func_0x01c23c30(iVar2,uVar3,0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar5 = func_0x01c23c30(iVar2,uVar3,0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar5 = func_0x01c23c30(iVar2,uVar3,0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar5 = func_0x01c23c30(iVar2,uVar3,0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x50) = uVar5;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar5 = func_0x01c23c30(iVar2,uVar3,0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar1 = func_0x01c23b88(iVar2,uVar3,0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x5c) = uVar1;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar1 = func_0x01c23b88(iVar2,uVar5,0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x5d) = uVar1;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar1 = func_0x01c23b88(iVar2,uVar5,0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x5e) = uVar1;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar5 = func_0x01c23c30(iVar2,uVar5,0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x60) = uVar5;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar5 = func_0x01c23c30(iVar2,uVar3,0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 100) = uVar5;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar5 = func_0x01c23c30(iVar2,uVar3,0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x68) = uVar5;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar5 = func_0x01c23c30(iVar2,uVar3,0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar5 = func_0x01c23c30(iVar2,uVar3,0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x70) = uVar5;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar5 = func_0x01c23c30(iVar2,uVar3,0);
  *(undefined4 *)(param_1 + 0x74) = uVar5;
  return;
}



// ===== FAT.TrainMissionActivity$$NeedChooseGroup RVA 0x2b79470 =====

uint FUN_02b89470(int param_1)

{
  uint uVar1;
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
  
  iVar2 = func_0x0229f06c(0x757d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x757d,0);
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
    uVar1 = func_0x0245496c(&uStack_30,0,0);
    return uVar1;
  }
  return (uint)(*(int *)(param_1 + 0x40) == 0);
}



// ===== FAT.TrainMissionActivity$$_UpdateChallenge RVA 0x2b794cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b894cc(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02b8961c + 0x2b894e0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b89620 + 0x2b894f4));
    func_0x01384978(*(undefined4 *)(_UNK_02b89624 + 0x2b89500));
    func_0x01384978(*(undefined4 *)(_UNK_02b89628 + 0x2b8950c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8962c + 0x2b89518));
    func_0x01384978(*(undefined4 *)(_UNK_02b89630 + 0x2b89524));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7571,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7571,0);
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
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  if (*(int *)(**(int **)(_UNK_02b89634 + 0x2b8957c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x036a1750(uVar5,**(undefined4 **)(_UNK_02b89638 + 0x2b8959c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  uVar5 = *(undefined4 *)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x0364c9b8(iVar1,uVar5,**(undefined4 **)(_UNK_02b8963c + 0x2b895d8));
  if (*(int *)(**(int **)(_UNK_02b89640 + 0x2b895f0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar5 = func_0x036a1750(uVar5,**(undefined4 **)(_UNK_02b89644 + 0x2b8960c));
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  return;
}



// ===== FAT.TrainMissionActivity$$Open RVA 0x2b7975c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b8975c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
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
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_02b89acc + 0x2b89770);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b89ad0 + 0x2b89784));
    func_0x01384978(*(undefined4 *)(_UNK_02b89ad4 + 0x2b89790));
    func_0x01384978(*(undefined4 *)(_UNK_02b89ad8 + 0x2b8979c));
    func_0x01384978(*(undefined4 *)(_UNK_02b89adc + 0x2b897a8));
    func_0x01384978(*(undefined4 *)(_UNK_02b89ae0 + 0x2b897b4));
    func_0x01384978(*(undefined4 *)(_UNK_02b89ae4 + 0x2b897c0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x757e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x757e,0);
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
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b89ae8 + 0x2b89818));
  func_0x04874ed4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 0x10) = param_1;
  iVar4 = FUN_02b89470(param_1);
  if (iVar4 != 0) {
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_02b89aec + 0x2b89854));
    iVar4 = *(int *)(param_1 + 0xa0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(iVar4 + 0xc);
    piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02b89af0 + 0x2b8987c),1);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar2 + 0x20));
    if (iVar4 == 0) {
      uVar3 = func_0x01384c10();
      func_0x01384aa0(uVar3,0);
    }
    if (piVar2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2[4] = param_1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0229f06c(0xd,0,piVar2,0);
    if (iVar4 == 0) {
      func_0x01ee81d4(iVar1,uVar6,0,piVar2);
    }
    else {
      iVar4 = func_0x0229f13c(0xd,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x02174858(iVar4,iVar1,uVar6,piVar2);
    }
    return;
  }
  iVar4 = *(int *)(param_1 + 0x84);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 0x18);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar8 = *(undefined4 **)(_UNK_02b89af4 + 0x2b89924);
  uVar6 = func_0x0364c9b8(iVar4,0,*puVar8);
  uVar6 = func_0x02c05738(uVar6,1,0);
  iVar4 = *(int *)(param_1 + 0x84);
  *(undefined4 *)(iVar1 + 0xc) = uVar6;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 0x18);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x0364c9b8(iVar4,1,*puVar8);
  uVar6 = func_0x02c05738(uVar6,1,0);
  *(undefined4 *)(iVar1 + 0x18) = uVar6;
  iVar4 = func_0x01c24918(0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(param_1 + 0x84);
  iVar4 = *(int *)(iVar4 + 0x50);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar7 + 0x18);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x0364c9b8(iVar7,0,*puVar8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x01db1884(iVar4,uVar6,0);
  *(undefined4 *)(iVar1 + 8) = uVar6;
  iVar4 = func_0x01c24918(0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(param_1 + 0x84);
  iVar4 = *(int *)(iVar4 + 0x50);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar7 + 0x18);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x0364c9b8(iVar7,1,*puVar8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x01db1884(iVar4,uVar6,0);
  iVar4 = *(int *)(param_1 + 0x88);
  *(undefined4 *)(iVar1 + 0x14) = uVar6;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x02139cf4(iVar4,0);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02b89af8 + 0x2b89a84));
  func_0x03ccb96c(uVar6,iVar1,**(undefined4 **)(_UNK_02b89afc + 0x2b89aa0),0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x020dba14(iVar4,uVar6,0);
  pcVar5 = (char *)(_UNK_02b89d9c + 0x2b89b1c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b89da0 + 0x2b89b30));
    func_0x01384978(*(undefined4 *)(_UNK_02b89da4 + 0x2b89b3c));
    func_0x01384978(*(undefined4 *)(_UNK_02b89da8 + 0x2b89b48));
    func_0x01384978(*(undefined4 *)(_UNK_02b89dac + 0x2b89b54));
    func_0x01384978(*(undefined4 *)(_UNK_02b89db0 + 0x2b89b60));
    func_0x01384978(*(undefined4 *)(_UNK_02b89db4 + 0x2b89b6c));
    func_0x01384978(*(undefined4 *)(_UNK_02b89db8 + 0x2b89b78));
    func_0x01384978(*(undefined4 *)(_UNK_02b89dbc + 0x2b89b84));
    *pcVar5 = '\x01';
  }
  uStack_1c = 0;
  iVar1 = func_0x0229f06c(0x7581,0);
  if (iVar1 == 0) {
    func_0x02b92314();
    iVar1 = func_0x02b92164(&uStack_1c);
    if ((iVar1 != 0) && (iVar1 = func_0x02b9226c(), iVar1 != 0)) {
      uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02b89dc0 + 0x2b89c00));
      func_0x020d7954(uVar6,0);
      if (*(int *)(**(int **)(_UNK_02b89dc4 + 0x2b89c1c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x021616a0(uVar6,0);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xfc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e8007c(iVar1,1,0,0);
      iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_02b89dc8 + 0x2b89c80));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01eeb900(iVar1,0,0);
      iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_02b89dcc + 0x2b89cb0));
      puVar8 = *(undefined4 **)(_UNK_02b89dd0 + 0x2b89cc4);
      uVar6 = func_0x01384be4(*puVar8);
      func_0x0478dedc(uVar6,0,**(undefined4 **)(_UNK_02b89dd4 + 0x2b89ce0),0);
      piVar2 = *(int **)(_UNK_02b89dd8 + 0x2b89cf4);
      iVar4 = *piVar2;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x01384ab4();
        iVar4 = *piVar2;
      }
      iVar7 = *(int *)(*(int *)(iVar4 + 0x5c) + 8);
      if (iVar7 == 0) {
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar2;
        }
        uVar3 = **(undefined4 **)(iVar4 + 0x5c);
        iVar7 = func_0x01384be4(*puVar8);
        func_0x0478dedc(iVar7,uVar3,**(undefined4 **)(_UNK_02b89ddc + 0x2b89d54),0);
        *(int *)(*(int *)(*piVar2 + 0x5c) + 8) = iVar7;
      }
      uVar6 = func_0x02b924e8(uVar6,iVar7);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01c36290(iVar1,uVar6,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7581,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174a08(iVar1,0);
  }
  return;
}



// ===== FAT.TrainMissionActivity.<>c__DisplayClass97_0$$.ctor RVA 0x2b79b00 =====

void FUN_02b89b00(void)

{
  return;
}



// ===== FAT.TrainMissionActivity$$WhenEnd RVA 0x2b79de0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b89de0(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_02b8a528 + 0x2b89df8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8a52c + 0x2b89e0c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8a530 + 0x2b89e18));
    func_0x01384978(*(undefined4 *)(_UNK_02b8a534 + 0x2b89e24));
    func_0x01384978(*(undefined4 *)(_UNK_02b8a538 + 0x2b89e30));
    func_0x01384978(*(undefined4 *)(_UNK_02b8a53c + 0x2b89e3c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8a540 + 0x2b89e48));
    func_0x01384978(*(undefined4 *)(_UNK_02b8a544 + 0x2b89e54));
    func_0x01384978(*(undefined4 *)(_UNK_02b8a548 + 0x2b89e60));
    func_0x01384978(*(undefined4 *)(_UNK_02b8a54c + 0x2b89e6c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8a550 + 0x2b89e78));
    func_0x01384978(*(undefined4 *)(_UNK_02b8a554 + 0x2b89e84));
    func_0x01384978(*(undefined4 *)(_UNK_02b8a558 + 0x2b89e90));
    func_0x01384978(*(undefined4 *)(_UNK_02b8a55c + 0x2b89e9c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8a560 + 0x2b89ea8));
    func_0x01384978(*(undefined4 *)(_UNK_02b8a564 + 0x2b89eb4));
    func_0x01384978(*(undefined4 *)(_UNK_02b8a568 + 0x2b89ec0));
    func_0x01384978(*(undefined4 *)(_UNK_02b8a56c + 0x2b89ecc));
    func_0x01384978(*(undefined4 *)(_UNK_02b8a570 + 0x2b89ed8));
    func_0x01384978(*(undefined4 *)(_UNK_02b8a574 + 0x2b89ee4));
    func_0x01384978(*(undefined4 *)(_UNK_02b8a578 + 0x2b89ef0));
    func_0x01384978(*(undefined4 *)(_UNK_02b8a57c + 0x2b89efc));
    func_0x01384978(*(undefined4 *)(_UNK_02b8a580 + 0x2b89f08));
    *pcVar3 = '\x01';
  }
  uStack_30 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x75c8,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b8a584 + 0x2b89f70));
    func_0x04874ed4(iVar1,0);
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x4c);
    uVar4 = *(undefined4 *)(param_1 + 0x88);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbc0ec(iVar2,uVar4,0);
    iVar2 = FUN_02b89470(param_1);
    if (iVar2 == 0) {
      if (*(char *)(param_1 + 0xfd) == '\0') {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar1 + 0x10) = 0;
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar9 = *(int *)(param_1 + 0x84);
        iVar2 = *(int *)(iVar2 + 0x50);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        iVar9 = *(int *)(iVar9 + 0x18);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        puVar10 = *(undefined4 **)(_UNK_02b8a588 + 0x2b8a064);
        uVar4 = func_0x0364c9b8(iVar9,0,*puVar10);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar4 = func_0x01db1884(iVar2,uVar4,0);
        *(undefined4 *)(iVar1 + 8) = uVar4;
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar9 = *(int *)(param_1 + 0x84);
        iVar2 = *(int *)(iVar2 + 0x50);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        iVar9 = *(int *)(iVar9 + 0x18);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        uVar4 = func_0x0364c9b8(iVar9,1,*puVar10);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar4 = func_0x01db1884(iVar2,uVar4,0);
        puVar10 = *(undefined4 **)(_UNK_02b8a58c + 0x2b8a104);
        *(undefined4 *)(iVar1 + 0xc) = uVar4;
        uVar4 = func_0x01384be4(*puVar10);
        func_0x0328e950(uVar4,**(undefined4 **)(_UNK_02b8a590 + 0x2b8a120));
        iVar2 = *(int *)(param_1 + 0x88);
        *(undefined4 *)(iVar1 + 0x14) = uVar4;
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x02139cf4(iVar2,0);
        puVar10 = *(undefined4 **)(_UNK_02b8a594 + 0x2b8a158);
        uVar4 = func_0x01384be4(*puVar10);
        func_0x03ccb96c(uVar4,iVar1,**(undefined4 **)(_UNK_02b8a598 + 0x2b8a174),0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x020dba14(iVar2,uVar4,0);
        iVar2 = *(int *)(param_1 + 0x88);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x02141880(iVar2,0);
        uVar4 = func_0x01384be4(*puVar10);
        func_0x03ccb96c(uVar4,iVar1,**(undefined4 **)(_UNK_02b8a59c + 0x2b8a1d8),0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar9 = 0;
        func_0x021131f8(iVar2,uVar4,0);
        if (0 < *(int *)(iVar1 + 0x10)) {
          puVar10 = *(undefined4 **)(_UNK_02b8a5a0 + 0x2b8a21c);
          piVar11 = *(int **)(_UNK_02b8a5a4 + 0x2b8a224);
          do {
            iVar2 = *(int *)(param_1 + 0x80);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar2 + 0x20);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            if (*(int *)(iVar2 + 0xc) <= iVar9) goto LAB_02b8a368;
            iVar2 = *(int *)(param_1 + 0x80);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar2 + 0x20);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uVar4 = func_0x03653d1c(iVar2,iVar9,*puVar10);
            if (*(int *)(*piVar11 + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x02566088(&iStack_3c,uVar4,0);
            iVar9 = iVar9 + 1;
          } while (iStack_3c < *(int *)(iVar1 + 0x10));
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          piVar11 = *(int **)(_UNK_02b8a5a8 + 0x2b8a2e4);
          iVar9 = *(int *)(iVar2 + 0x40);
          iVar2 = *piVar11;
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar11;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x2fc);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          uVar4 = func_0x01cdcbac(iVar9,uStack_38,uStack_34,uVar4,0,0,0,0xf9,
                                  **(undefined4 **)(_UNK_02b8a5ac + 0x2b8a324),
                                  **(undefined4 **)(_UNK_02b8a5b0 + 0x2b8a330),0);
          *(undefined4 *)(param_1 + 0xf8) = uVar4;
          *(undefined1 *)(param_1 + 0xfd) = 1;
        }
LAB_02b8a368:
        uStack_28 = *(undefined4 *)(param_1 + 0xe4);
        uStack_30 = *(undefined8 *)(param_1 + 0xdc);
        FUN_02b64cc4(&uStack_30,0,*(undefined4 *)(param_1 + 0xf8),0);
        uVar4 = FUN_02b87720(param_1);
        iVar2 = *(int *)(param_1 + 0x84);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar11 = *(int **)(_UNK_02b8a5b4 + 0x2b8a3b4);
        uVar7 = *(undefined4 *)(iVar1 + 0x14);
        iVar13 = *(int *)(param_1 + 0x74);
        iVar9 = *piVar11;
        uVar12 = *(undefined4 *)(iVar2 + 0x10);
        if (*(int *)(iVar9 + 0x74) == 0) {
          func_0x01384ab4();
          iVar9 = *piVar11;
        }
        iVar2 = *(int *)(*(int *)(iVar9 + 0x5c) + 4);
        if (iVar2 == 0) {
          if (*(int *)(iVar9 + 0x74) == 0) {
            func_0x01384ab4();
            iVar9 = *piVar11;
          }
          uVar5 = **(undefined4 **)(iVar9 + 0x5c);
          iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02b8a5b8 + 0x2b8a408));
          func_0x041cf844(iVar2,uVar5,**(undefined4 **)(_UNK_02b8a5bc + 0x2b8a428),0);
          *(int *)(*(int *)(*piVar11 + 0x5c) + 4) = iVar2;
        }
        uVar7 = func_0x02faabc8(uVar7,iVar2,**(undefined4 **)(_UNK_02b8a5c0 + 0x2b8a44c));
        piVar11 = *(int **)(_UNK_02b8a5c4 + 0x2b8a464);
        if (*(int *)(*piVar11 + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar7 = func_0x030da8b4(uVar7,**(undefined4 **)(_UNK_02b8a5c8 + 0x2b8a484));
        iVar2 = *(int *)(param_1 + 0x24);
        iVar9 = *(int *)(param_1 + 0xf8);
        uVar5 = *(undefined4 *)(iVar1 + 0x10);
        if (iVar9 == 0) {
          uVar6 = **(undefined4 **)(_UNK_02b8a5d4 + 0x2b8a4f8);
        }
        else {
          uVar6 = *(undefined4 *)(iVar9 + 8);
          uVar8 = *(undefined4 *)(iVar9 + 0x10);
          if (*(int *)(*piVar11 + 0x74) == 0) {
            func_0x01384ab4();
          }
          uVar6 = func_0x01a32f1c(**(undefined4 **)(_UNK_02b8a5d0 + 0x2b8a4e4),uVar6,uVar8,
                                  **(undefined4 **)(_UNK_02b8a5cc + 0x2b8a4d8));
        }
        func_0x019b9c28(param_1,uVar4,uVar12,iVar13 + 1,uVar7,uVar5,iVar2 + 1,uVar6,0);
      }
      else {
        uStack_28 = *(undefined4 *)(param_1 + 0xe4);
        uStack_30 = *(undefined8 *)(param_1 + 0xdc);
        FUN_02b64cc4(&uStack_30,0,*(undefined4 *)(param_1 + 0xf8),0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x75c8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.TrainMissionActivity.<>c__DisplayClass98_0$$.ctor RVA 0x2b7a5d8 =====

void FUN_02b8a5d8(void)

{
  return;
}



// ===== FAT.TrainMissionActivity$$SendJumpCDItem RVA 0x2b7a5e0 =====

void FUN_02b8a5e0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x758c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x758c,0);
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
  iVar1 = *(int *)(param_1 + 0x80);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_1 + 0x88);
  uVar4 = *(undefined4 *)(iVar1 + 0x28);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02139cf4(iVar3,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  iVar1 = func_0x020ddf40(iVar1,uVar4,0,1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0210e250(iVar1,0x12,0,0);
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x88);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02147034(iVar3,iVar1,0);
  }
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}



// ===== FAT.TrainMissionActivity$$CheckCanShowRP RVA 0x2b7a6f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02b8a6f4(int param_1)

{
  uint uVar1;
  int iVar2;
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
  
  pcVar4 = (char *)(_UNK_02b8a818 + 0x2b8a708);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8a81c + 0x2b8a71c));
    *pcVar4 = '\x01';
  }
  iVar5 = 0;
  iVar2 = func_0x0229f06c(0x75cc,0);
  if (iVar2 == 0) {
    while( true ) {
      iVar2 = *(int *)(param_1 + 0xe8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar2 + 0xc) <= iVar5) break;
      iVar2 = func_0x02b8a820(param_1,*(undefined4 *)(param_1 + 0xe8),iVar5);
      iVar5 = iVar5 + 1;
      if (iVar2 == 2) {
        return 1;
      }
    }
    iVar2 = 0;
    while( true ) {
      iVar5 = *(int *)(param_1 + 0xec);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0x10);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0xc);
      uVar1 = (uint)(iVar2 < iVar5);
      if (iVar5 <= iVar2) break;
      iVar5 = func_0x02b8a820(param_1,*(undefined4 *)(param_1 + 0xec),iVar2);
      iVar2 = iVar2 + 1;
      if (iVar5 == 2) {
        return uVar1;
      }
    }
    return uVar1;
  }
  iVar2 = func_0x0229f13c(0x75cc,0);
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
  uVar1 = func_0x0245496c(&uStack_30,0,0);
  return uVar1;
}



// ===== FAT.TrainMissionActivity$$CheckMissionState RVA 0x2b7a820 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b8a820(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  
  pcVar8 = (char *)(_UNK_02b8aa64 + 0x2b8a840);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8aa68 + 0x2b8a854));
    func_0x01384978(*(undefined4 *)(_UNK_02b8aa6c + 0x2b8a860));
    func_0x01384978(*(undefined4 *)(_UNK_02b8aa70 + 0x2b8a86c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8aa74 + 0x2b8a878));
    func_0x01384978(*(undefined4 *)(_UNK_02b8aa78 + 0x2b8a884));
    func_0x01384978(*(undefined4 *)(_UNK_02b8aa7c + 0x2b8a890));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x75bf,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b8aa80 + 0x2b8a8f4));
    func_0x04874ed4(iVar1,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    if ((int)(*(uint *)(param_2 + 0xc) & 1 << (param_3 & 0x1f)) < 1) {
      iVar9 = *(int *)(param_1 + 0x8c);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x0214da98(iVar9,0);
      iVar9 = *(int *)(param_2 + 0x10);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x0328eea8(iVar9,param_3,**(undefined4 **)(_UNK_02b8aa84 + 0x2b8a970));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar1 + 8) = uVar2;
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar9 = *piVar3;
      uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_02b8aa88 + 0x2b8a9a8)) {
            puVar4 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xd0);
            goto LAB_02b8a9f0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02b8aa88 + 0x2b8a9a8),2);
LAB_02b8a9f0:
      uVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02b8aa8c + 0x2b8aa10));
      func_0x041cd5a4(uVar5,iVar1,**(undefined4 **)(_UNK_02b8aa90 + 0x2b8aa2c),0);
      iVar1 = func_0x02f858c4(uVar2,uVar5,**(undefined4 **)(_UNK_02b8aa94 + 0x2b8aa44));
      uVar2 = 1;
      if (iVar1 != 0) {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 3;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x75bf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021830f0(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.TrainMissionActivity$$BoardEntryAsset RVA 0x2b7aa98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b8aa98(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_02b8ab84 + 0x2b8aab0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8ab88 + 0x2b8aac4));
    func_0x01384978(*(undefined4 *)(_UNK_02b8ab8c + 0x2b8aad0));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x75cd,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x94);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03470a60(iVar1,**(undefined4 **)(_UNK_02b8ab94 + 0x2b8ab70),&uStack_14,
                    **(undefined4 **)(_UNK_02b8ab90 + 0x2b8ab64));
  }
  else {
    iVar1 = func_0x0229f13c(0x75cd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.TrainMissionActivity$$GetGroupInfo RVA 0x2b7ab98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b8ab98(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_02b8ae30 + 0x2b8abb4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8ae34 + 0x2b8abc8));
    func_0x01384978(*(undefined4 *)(_UNK_02b8ae38 + 0x2b8abd4));
    func_0x01384978(*(undefined4 *)(_UNK_02b8ae3c + 0x2b8abe0));
    func_0x01384978(*(undefined4 *)(_UNK_02b8ae40 + 0x2b8abec));
    func_0x01384978(*(undefined4 *)(_UNK_02b8ae44 + 0x2b8abf8));
    func_0x01384978(*(undefined4 *)(_UNK_02b8ae48 + 0x2b8ac04));
    func_0x01384978(*(undefined4 *)(_UNK_02b8ae4c + 0x2b8ac10));
    func_0x01384978(*(undefined4 *)(_UNK_02b8ae50 + 0x2b8ac1c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8ae54 + 0x2b8ac28));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0x75ce,0);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d64b20(param_2,**(undefined4 **)(_UNK_02b8ae58 + 0x2b8ac9c));
    iVar2 = FUN_02b885d0(param_1);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0325a3b4(&uStack_48,iVar2,**(undefined4 **)(_UNK_02b8ae5c + 0x2b8acd0));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    puVar5 = *(undefined4 **)(_UNK_02b8ae60 + 0x2b8acf0);
    piVar7 = *(int **)(_UNK_02b8ae64 + 0x2b8acf8);
    puVar8 = *(undefined4 **)(_UNK_02b8ae68 + 0x2b8ad00);
    puVar9 = *(undefined4 **)(_UNK_02b8ae6c + 0x2b8ad08);
    puVar6 = *(undefined4 **)(_UNK_02b8ae70 + 0x2b8ad10);
    while (iVar2 = func_0x03f597e0(&uStack_38,*puVar5), uVar1 = uStack_2c, iVar2 != 0) {
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x036a1750(uVar1,*puVar8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x02fb6260(*(undefined4 *)(iVar2 + 0x1c),*puVar9);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64944(param_2,uVar1,uVar3,*puVar6);
    }
    func_0x03f597dc(&uStack_38,**(undefined4 **)(_UNK_02b8ae74 + 0x2b8ad94));
  }
  else {
    iVar2 = func_0x0229f13c(0x75ce,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.TrainMissionActivity$$_ResetChallenge RVA 0x2b7ae80 =====

void FUN_02b8ae80(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x756f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x756f,0);
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
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  return;
}



// ===== FAT.TrainMissionActivity$$_StartNewChallenge RVA 0x2b7aee0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b8aee0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
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
  
  iVar1 = func_0x0229f06c(0x7570,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    FUN_02b894cc(param_1);
    pcVar4 = (char *)(_UNK_02b90738 + 0x2b904f8);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b9073c + 0x2b9050c));
      func_0x01384978(*(undefined4 *)(_UNK_02b90740 + 0x2b90518));
      func_0x01384978(*(undefined4 *)(_UNK_02b90744 + 0x2b90524));
      *pcVar4 = '\x01';
    }
    uVar5 = 0;
    iVar1 = func_0x0229f06c(0x7572,0);
    if (iVar1 == 0) {
      puVar7 = *(undefined4 **)(_UNK_02b90748 + 0x2b90588);
      do {
        iVar1 = *(int *)(param_1 + 0x84);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x20);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar1 + 0xc) <= (int)uVar5) {
          return;
        }
        if ((int)(*(uint *)(param_1 + 0x48) & 1 << (uVar5 & 0x1f)) < 1) {
          iVar1 = *(int *)(param_1 + 0xe8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(param_1 + 0x84);
          iVar1 = *(int *)(iVar1 + 8);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 0x20);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x0364c9b8(iVar3,uVar5,*puVar7);
          if (iVar1 != iVar3) {
            iVar1 = *(int *)(param_1 + 0xec);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar3 = *(int *)(param_1 + 0x84);
            iVar1 = *(int *)(iVar1 + 8);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar3 = *(int *)(iVar3 + 0x20);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar3 = func_0x0364c9b8(iVar3,uVar5,*puVar7);
            if (iVar1 != iVar3) {
              iVar1 = *(int *)(param_1 + 0xe8);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              if (*(int *)(iVar1 + 8) == 0) {
                iVar1 = *(int *)(param_1 + 0x84);
                iVar3 = *(int *)(param_1 + 0xe8);
              }
              else {
                iVar1 = *(int *)(param_1 + 0xec);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                if (*(int *)(iVar1 + 8) != 0) goto LAB_02b90728;
                iVar1 = *(int *)(param_1 + 0x84);
                iVar3 = *(int *)(param_1 + 0xec);
              }
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = *(int *)(iVar1 + 0x20);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uVar6 = func_0x0364c9b8(iVar1,uVar5,*puVar7);
              iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_02b9074c + 0x2b906e4));
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uVar2 = func_0x01c359e8(iVar1,0);
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              FUN_02b89648(iVar3,uVar6,0,uVar2);
            }
          }
        }
LAB_02b90728:
        uVar5 = uVar5 + 1;
      } while( true );
    }
    iVar1 = func_0x0229f13c(0x7572,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7570,0);
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
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar6,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.TrainMissionActivity$$_FillBoardItemByChallenge RVA 0x2b7af54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b8af54(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int aiStack_20 [2];
  
  pcVar4 = (char *)(_UNK_02b8b140 + 0x2b8af6c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8b144 + 0x2b8af80));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7577,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7577,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    aiStack_20[0] = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    aiStack_20[0] = iStack_38;
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
  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_02b8b148 + 0x2b8b004);
  uVar5 = func_0x0364c9b8(iVar1,0,*puVar6);
  uVar5 = func_0x02c05738(uVar5,1,0);
  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364c9b8(iVar1,1,*puVar6);
  uVar2 = func_0x02c05738(uVar2,1,0);
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02139cf4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  func_0x020ddf40(iVar1,uVar5,0,0);
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02139cf4(iVar1,0);
  iVar3 = *(int *)(param_1 + 0x88);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x02139cf4(iVar3,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x020da680(aiStack_20,iVar3,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  func_0x020ddf40(iVar1,uVar2,0,aiStack_20[0] + -1);
  return;
}



// ===== FAT.TrainMissionActivity$$GetCurMilestoneProgress RVA 0x2b7b14c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b8b14c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
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
  
  pcVar5 = (char *)(_UNK_02b8b21c + 0x2b8b160);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8b220 + 0x2b8b174));
    *pcVar5 = '\x01';
  }
  uVar7 = 0;
  iVar1 = func_0x0229f06c(0x75cf,0);
  if (iVar1 == 0) {
    iVar1 = 0;
    while( true ) {
      iVar4 = *(int *)(param_1 + 0x84);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar4 + 0x20);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar4 + 0xc) <= (int)uVar7) break;
      uVar2 = uVar7 & 0x1f;
      uVar7 = uVar7 + 1;
      if (0 < (int)(*(uint *)(param_1 + 0x48) & 1 << uVar2)) {
        iVar1 = iVar1 + 1;
      }
    }
    return iVar1;
  }
  iVar1 = func_0x0229f13c(0x75cf,0);
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
  iVar1 = func_0x0245498c(&uStack_30,0,0);
  return iVar1;
}



// ===== FAT.TrainMissionActivity$$GetCurMilestoneTotal RVA 0x2b7b224 =====

/* WARNING: Removing unreachable block (ram,0x02f930ac) */
/* WARNING: Removing unreachable block (ram,0x02f92934) */
/* WARNING: Removing unreachable block (ram,0x02f9219c) */
/* WARNING: Removing unreachable block (ram,0x02f9199c) */
/* WARNING: Removing unreachable block (ram,0x02f91574) */
/* WARNING: Removing unreachable block (ram,0x02f91dc4) */
/* WARNING: Removing unreachable block (ram,0x02f92568) */
/* WARNING: Removing unreachable block (ram,0x02f92cf0) */
/* WARNING: Removing unreachable block (ram,0x02f93540) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b8b224(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  uint uVar11;
  int extraout_r2;
  undefined *extraout_r2_00;
  char *extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  int extraout_r2_04;
  int extraout_r2_05;
  int extraout_r2_06;
  undefined *extraout_r2_07;
  int extraout_r2_08;
  int extraout_r2_09;
  int extraout_r2_10;
  undefined4 uVar12;
  int iVar13;
  char *pcVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  int unaff_r6;
  code *pcVar17;
  int *piVar18;
  int iVar19;
  int *unaff_r9;
  int *unaff_r10;
  int *piVar20;
  undefined1 *puVar21;
  int iVar22;
  undefined1 uVar23;
  bool bVar24;
  bool bVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  int iStack_a8;
  undefined4 uStack_a4;
  int *piStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  int iStack_90;
  int *piStack_8c;
  int *piStack_88;
  int iStack_84;
  undefined4 uStack_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int *piStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  int *piStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  
  pcVar14 = (char *)(_UNK_02b8b2c0 + 0x2b8b238);
  if (*pcVar14 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8b2c4 + 0x2b8b24c));
    *pcVar14 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x75d0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75d0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    piStack_30 = (int *)0x0;
    iStack_20 = 0;
    func_0x0245494c(&piStack_48,0,0);
    piStack_30 = piStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    uStack_24 = uStack_3c;
    iStack_20 = iStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&piStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&piStack_30,param_1,0);
    iVar13 = *(int *)(iVar1 + 8);
    uVar16 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    uVar12 = 2;
    if (iVar1 == 0) {
      uVar12 = 1;
    }
    func_0x0245495c(iVar13,uVar16,&piStack_30,uVar12);
    iVar1 = func_0x0245498c(&piStack_30,0,0);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar13 = **(int **)(_UNK_02b8b2c8 + 0x2b8b2b4);
  piVar2 = *(int **)(iVar1 + 0x20);
  if (*(int *)(iVar13 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f91588 + 0x2f911a4));
    func_0x01384978(*(undefined4 *)(iRam02f9158c + 0x2f911b0));
    func_0x01384978(*(undefined4 *)(iRam02f91590 + 0x2f911bc));
    if (*(int *)(iVar13 + 0x1c) == 0) {
      func_0x0140024c(iVar13);
    }
  }
  piVar3 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    iVar1 = *(int *)(*(int *)(iVar13 + 0x1c) + 4);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0(iVar1);
    }
    piVar3 = (int *)func_0x01384ab8(piVar2,iVar1);
    if (piVar3 == (int *)0x0) {
      piVar18 = *(int **)(iRam02f91594 + 0x2f91278);
      piVar3 = (int *)func_0x01384ab8(piVar2,*piVar18);
      if (piVar3 == (int *)0x0) {
        iVar1 = **(int **)(iVar13 + 0x1c);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar5 = *piVar2;
        uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar11 != 0) {
          piVar3 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar3[-1] == iVar1) {
              puVar4 = (undefined4 *)(iVar5 + *piVar3 * 8 + 0xc0);
              goto LAB_02f91368;
            }
            uVar11 = uVar11 - 1;
            piVar3 = piVar3 + 2;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,0);
LAB_02f91368:
        piVar3 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
        unaff_r6 = 0;
        piVar2 = *(int **)(iRam02f91598 + 0x2f9138c);
        do {
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar3;
          uVar11 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar11 != 0) {
            piVar18 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar18[-1] == *piVar2) {
                puVar4 = (undefined4 *)(iVar1 + *piVar18 * 8 + 0xc0);
                goto LAB_02f913e4;
              }
              uVar11 = uVar11 - 1;
              piVar18 = piVar18 + 2;
            } while (uVar11 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar2,0);
LAB_02f913e4:
          iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
          if (iVar1 == 0) {
            iVar1 = 0;
            goto LAB_02f91410;
          }
          if (unaff_r6 == 0x7fffffff) goto LAB_02f91498;
          unaff_r6 = unaff_r6 + 1;
        } while( true );
      }
      iVar13 = *piVar3;
      iVar1 = *piVar18;
      uVar11 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar11 != 0) {
        piVar2 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar1) {
            puVar4 = (undefined4 *)(iVar13 + *piVar2 * 8 + 200);
            goto LAB_02f91348;
          }
          uVar11 = uVar11 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar11 != 0);
      }
      uVar16 = 1;
    }
    else {
      iVar1 = *(int *)(*(int *)(iVar13 + 0x1c) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0(iVar1);
      }
      iVar13 = *piVar3;
      uVar11 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar11 != 0) {
        piVar2 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar1) {
            puVar4 = (undefined4 *)(iVar13 + *piVar2 * 8 + 0xc0);
            goto LAB_02f91348;
          }
          uVar11 = uVar11 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar11 != 0);
      }
      uVar16 = 0;
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar1,uVar16);
LAB_02f91348:
                    /* WARNING: Could not recover jumptable at 0x02f91358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    return iVar1;
  }
LAB_02f914a8:
  uVar16 = func_0x01384988(*(undefined4 *)(iRam02f915a4 + 0x2f914b4));
  uVar16 = func_0x04a21c20(uVar16,0);
  func_0x01384aa0(uVar16,iVar13);
  uVar26 = func_0x01384928();
  uVar16 = (undefined4)uVar26;
  if ((int)((ulonglong)uVar26 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar16);
    iVar1 = *piVar2;
    func_0x0145b0f8();
LAB_02f91410:
    if (piVar3 != (int *)0x0) {
      iVar13 = *piVar3;
      uVar11 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar11 != 0) {
        piVar2 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(iRam02f9159c + 0x2f91428)) {
            puVar4 = (undefined4 *)(iVar13 + *piVar2 * 8 + 0xc0);
            goto LAB_02f91470;
          }
          uVar11 = uVar11 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(iRam02f9159c + 0x2f91428),0);
LAB_02f91470:
      (*(code *)*puVar4)(piVar3,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return unaff_r6;
  }
  if (piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
    uVar11 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar11 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r6 = piVar2[-1];
        if (unaff_r6 == **(int **)(iRam02f915a0 + 0x2f91514)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_02f9155c;
        }
        uVar11 = uVar11 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(iRam02f915a0 + 0x2f91514),0);
LAB_02f9155c:
    (*(code *)*puVar4)(piVar3,puVar4[1]);
  }
  uVar23 = 1;
  func_0x01459844(uVar16);
  iVar5 = 0x2f91588;
  uVar26 = func_0x01062280();
  iVar1 = (int)((ulonglong)uVar26 >> 0x20);
  piVar2 = (int *)uVar26;
  bVar24 = (bool)uVar23 && extraout_r2 == 0x7c000;
  if (bVar24) {
    unaff_r6 = -0x2f90d88;
  }
  if (((bVar24 && piVar2 == (int *)0x44000000) && extraout_r2 == 0x2a0000) &&
      piVar2 == (int *)0x40000007) {
    unaff_r6 = -0x2ca1588;
    iVar5 = 0x600 - (int)piVar2;
  }
  uStack_2c = 0;
  piStack_30 = piVar3;
  iStack_28 = unaff_r6;
  uStack_24 = uVar16;
  iStack_20 = iVar13;
  iStack_1c = iVar5;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f919b0 + 0x2f915cc));
    func_0x01384978(*(undefined4 *)(iRam02f919b4 + 0x2f915d8));
    func_0x01384978(*(undefined4 *)(iRam02f919b8 + 0x2f915e4));
    if (*(int *)(iVar1 + 0x1c) == 0) {
      func_0x0140024c(iVar1);
    }
  }
  piVar3 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    iVar13 = *(int *)(*(int *)(iVar1 + 0x1c) + 4);
    if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
      iVar13 = func_0x014001f0(iVar13);
    }
    piVar3 = (int *)func_0x01384ab8(piVar2,iVar13);
    if (piVar3 == (int *)0x0) {
      piVar18 = *(int **)(iRam02f919bc + 0x2f916a0);
      piVar3 = (int *)func_0x01384ab8(piVar2,*piVar18);
      if (piVar3 == (int *)0x0) {
        iVar13 = **(int **)(iVar1 + 0x1c);
        if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
          iVar13 = func_0x014001f0(iVar13);
        }
        iVar5 = *piVar2;
        uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar11 != 0) {
          piVar3 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar3[-1] == iVar13) {
              puVar4 = (undefined4 *)(iVar5 + *piVar3 * 8 + 0xc0);
              goto LAB_02f91790;
            }
            uVar11 = uVar11 - 1;
            piVar3 = piVar3 + 2;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar13,0);
LAB_02f91790:
        piVar3 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
        unaff_r6 = 0;
        piVar2 = *(int **)(iRam02f919c0 + 0x2f917b4);
        do {
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar13 = *piVar3;
          uVar11 = (uint)*(ushort *)(iVar13 + 0xb6);
          if (uVar11 != 0) {
            piVar18 = (int *)(*(int *)(iVar13 + 0x58) + 4);
            do {
              if (piVar18[-1] == *piVar2) {
                puVar4 = (undefined4 *)(iVar13 + *piVar18 * 8 + 0xc0);
                goto LAB_02f9180c;
              }
              uVar11 = uVar11 - 1;
              piVar18 = piVar18 + 2;
            } while (uVar11 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar2,0);
LAB_02f9180c:
          iVar13 = (*(code *)*puVar4)(piVar3,puVar4[1]);
          if (iVar13 == 0) {
            iVar1 = 0;
            goto LAB_02f91838;
          }
          if (unaff_r6 == 0x7fffffff) goto LAB_02f918c0;
          unaff_r6 = unaff_r6 + 1;
        } while( true );
      }
      iVar13 = *piVar3;
      iVar1 = *piVar18;
      uVar11 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar11 != 0) {
        piVar2 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar1) {
            puVar4 = (undefined4 *)(iVar13 + *piVar2 * 8 + 200);
            goto LAB_02f91770;
          }
          uVar11 = uVar11 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar11 != 0);
      }
      uVar16 = 1;
    }
    else {
      iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0(iVar1);
      }
      iVar13 = *piVar3;
      uVar11 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar11 != 0) {
        piVar2 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar1) {
            puVar4 = (undefined4 *)(iVar13 + *piVar2 * 8 + 0xc0);
            goto LAB_02f91770;
          }
          uVar11 = uVar11 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar11 != 0);
      }
      uVar16 = 0;
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar1,uVar16);
LAB_02f91770:
                    /* WARNING: Could not recover jumptable at 0x02f91780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    return iVar1;
  }
LAB_02f918d0:
  uVar16 = func_0x01384988(*(undefined4 *)(iRam02f919cc + 0x2f918dc));
  uVar16 = func_0x04a21c20(uVar16,0);
  func_0x01384aa0(uVar16,iVar1);
  uVar26 = func_0x01384928();
  uVar16 = (undefined4)uVar26;
  if ((int)((ulonglong)uVar26 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar16);
    iVar1 = *piVar2;
    func_0x0145b0f8();
LAB_02f91838:
    if (piVar3 != (int *)0x0) {
      iVar13 = *piVar3;
      uVar11 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar11 != 0) {
        piVar2 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(iRam02f919c4 + 0x2f91850)) {
            puVar4 = (undefined4 *)(iVar13 + *piVar2 * 8 + 0xc0);
            goto LAB_02f91898;
          }
          uVar11 = uVar11 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(iRam02f919c4 + 0x2f91850),0);
LAB_02f91898:
      (*(code *)*puVar4)(piVar3,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return unaff_r6;
  }
  if (piVar3 != (int *)0x0) {
    iVar13 = *piVar3;
    uVar11 = (uint)*(ushort *)(iVar13 + 0xb6);
    if (uVar11 != 0) {
      piVar2 = (int *)(*(int *)(iVar13 + 0x58) + 4);
      do {
        unaff_r6 = piVar2[-1];
        if (unaff_r6 == **(int **)(iRam02f919c8 + 0x2f9193c)) {
          puVar4 = (undefined4 *)(iVar13 + *piVar2 * 8 + 0xc0);
          goto LAB_02f91984;
        }
        uVar11 = uVar11 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(iRam02f919c8 + 0x2f9193c),0);
LAB_02f91984:
    (*(code *)*puVar4)(piVar3,puVar4[1]);
  }
  uVar23 = 1;
  func_0x01459844(uVar16);
  iVar5 = 0x2f919b0;
  uVar26 = func_0x01062280();
  iVar13 = (int)((ulonglong)uVar26 >> 0x20);
  piVar2 = (int *)uVar26;
  bVar24 = (bool)uVar23 && extraout_r2_00 == &UNK_05400000;
  if (bVar24) {
    unaff_r6 = -0x20119b0;
  }
  if (((bVar24 && piVar2 == (int *)0x1c) && extraout_r2_00 == (undefined *)0x20000000) &&
      piVar2 == (int *)0x4c0) {
    unaff_r6 = 0x2206e650;
    iVar5 = 0xf00000 - (int)piVar2;
  }
  uStack_44 = 0;
  piStack_48 = piVar3;
  iStack_40 = unaff_r6;
  uStack_3c = uVar16;
  iStack_38 = iVar1;
  iStack_34 = iVar5;
  if (*(int *)(iVar13 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f91dd8 + 0x2f919f4));
    func_0x01384978(*(undefined4 *)(iRam02f91ddc + 0x2f91a00));
    func_0x01384978(*(undefined4 *)(iRam02f91de0 + 0x2f91a0c));
    if (*(int *)(iVar13 + 0x1c) == 0) {
      func_0x0140024c(iVar13);
    }
  }
  piVar3 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    iVar1 = *(int *)(*(int *)(iVar13 + 0x1c) + 4);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0(iVar1);
    }
    piVar3 = (int *)func_0x01384ab8(piVar2,iVar1);
    if (piVar3 == (int *)0x0) {
      piVar18 = *(int **)(iRam02f91de4 + 0x2f91ac8);
      piVar3 = (int *)func_0x01384ab8(piVar2,*piVar18);
      if (piVar3 == (int *)0x0) {
        iVar1 = **(int **)(iVar13 + 0x1c);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar5 = *piVar2;
        uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar11 != 0) {
          piVar3 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar3[-1] == iVar1) {
              puVar4 = (undefined4 *)(iVar5 + *piVar3 * 8 + 0xc0);
              goto LAB_02f91bb8;
            }
            uVar11 = uVar11 - 1;
            piVar3 = piVar3 + 2;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,0);
LAB_02f91bb8:
        piVar3 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
        unaff_r6 = 0;
        piVar2 = *(int **)(iRam02f91de8 + 0x2f91bdc);
        do {
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar3;
          uVar11 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar11 != 0) {
            piVar18 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar18[-1] == *piVar2) {
                puVar4 = (undefined4 *)(iVar1 + *piVar18 * 8 + 0xc0);
                goto LAB_02f91c34;
              }
              uVar11 = uVar11 - 1;
              piVar18 = piVar18 + 2;
            } while (uVar11 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar2,0);
LAB_02f91c34:
          iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
          if (iVar1 == 0) {
            iVar1 = 0;
            goto LAB_02f91c60;
          }
          if (unaff_r6 == 0x7fffffff) goto LAB_02f91ce8;
          unaff_r6 = unaff_r6 + 1;
        } while( true );
      }
      iVar13 = *piVar3;
      iVar1 = *piVar18;
      uVar11 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar11 != 0) {
        piVar2 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar1) {
            puVar4 = (undefined4 *)(iVar13 + *piVar2 * 8 + 200);
            goto LAB_02f91b98;
          }
          uVar11 = uVar11 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar11 != 0);
      }
      uVar16 = 1;
    }
    else {
      iVar1 = *(int *)(*(int *)(iVar13 + 0x1c) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0(iVar1);
      }
      iVar13 = *piVar3;
      uVar11 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar11 != 0) {
        piVar2 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar1) {
            puVar4 = (undefined4 *)(iVar13 + *piVar2 * 8 + 0xc0);
            goto LAB_02f91b98;
          }
          uVar11 = uVar11 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar11 != 0);
      }
      uVar16 = 0;
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar1,uVar16);
LAB_02f91b98:
                    /* WARNING: Could not recover jumptable at 0x02f91ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    return iVar1;
  }
LAB_02f91cf8:
  uVar16 = func_0x01384988(*(undefined4 *)(iRam02f91df4 + 0x2f91d04));
  uVar16 = func_0x04a21c20(uVar16,0);
  func_0x01384aa0(uVar16,iVar13);
  uVar26 = func_0x01384928();
  uVar16 = (undefined4)uVar26;
  if ((int)((ulonglong)uVar26 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar16);
    iVar1 = *piVar2;
    func_0x0145b0f8();
LAB_02f91c60:
    if (piVar3 != (int *)0x0) {
      iVar13 = *piVar3;
      uVar11 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar11 != 0) {
        piVar2 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(iRam02f91dec + 0x2f91c78)) {
            puVar4 = (undefined4 *)(iVar13 + *piVar2 * 8 + 0xc0);
            goto LAB_02f91cc0;
          }
          uVar11 = uVar11 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(iRam02f91dec + 0x2f91c78),0);
LAB_02f91cc0:
      (*(code *)*puVar4)(piVar3,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return unaff_r6;
  }
  if (piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
    uVar11 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar11 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r6 = piVar2[-1];
        if (unaff_r6 == **(int **)(iRam02f91df0 + 0x2f91d64)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_02f91dac;
        }
        uVar11 = uVar11 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(iRam02f91df0 + 0x2f91d64),0);
LAB_02f91dac:
    (*(code *)*puVar4)(piVar3,puVar4[1]);
  }
  uVar23 = 1;
  func_0x01459844(uVar16);
  uVar26 = func_0x01062280();
  iVar1 = (int)((ulonglong)uVar26 >> 0x20);
  piVar2 = (int *)uVar26;
  bVar24 = false;
  pcVar14 = extraout_r2_01;
  if ((bool)uVar23 && extraout_r2_01 == (char *)0xc0000002) {
    unaff_r6 = -0x32f91dd8;
    pcVar14 = "_ZNSt6__ndk120__throw_system_errorEiPKc" + (0x23 - (int)piVar2);
    bVar24 = pcVar14 == (char *)0x0;
  }
  bVar25 = false;
  if (bVar24 && pcVar14 == (char *)0x16) {
    pcVar14 = (char *)(0x24000 - (int)piVar2);
    bVar25 = pcVar14 == (char *)0x0;
  }
  if (bVar25) {
    unaff_r6 = -0x2f91dbd;
  }
  uStack_68 = 0;
  piStack_6c = piVar3;
  iStack_64 = unaff_r6;
  uStack_60 = uVar16;
  iStack_5c = iVar13;
  if (*(int *)(pcVar14 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f921b0 + 0x2f91e24));
    func_0x01384978(*(undefined4 *)(iRam02f921b4 + 0x2f91e30));
    if (*(int *)(pcVar14 + 0x1c) == 0) {
      func_0x0140024c(pcVar14);
    }
  }
  if (piVar2 == (int *)0x0) {
    uVar16 = *(undefined4 *)(iRam02f921b8 + 0x2f920b4);
LAB_02f920bc:
    uVar16 = func_0x01384988(uVar16);
    uVar16 = func_0x04a21c20(uVar16,0);
    func_0x01384aa0(uVar16,pcVar14);
    func_0x01384928();
  }
  else {
    if (iVar1 == 0) {
      uVar16 = *(undefined4 *)(iRam02f921bc + 0x2f920c0);
      goto LAB_02f920bc;
    }
    iVar13 = **(int **)(pcVar14 + 0x1c);
    if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
      iVar13 = func_0x014001f0(iVar13);
    }
    iVar5 = *piVar2;
    uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar11 != 0) {
      piVar3 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar3[-1] == iVar13) {
          puVar4 = (undefined4 *)(iVar5 + *piVar3 * 8 + 0xc0);
          goto LAB_02f91ec0;
        }
        uVar11 = uVar11 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar13,0);
LAB_02f91ec0:
    piVar2 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
    iVar13 = 0;
    unaff_r9 = &iStack_78;
    unaff_r10 = *(int **)(iRam02f921c0 + 0x2f91ee8);
LAB_02f91ee4:
    do {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar5 = *piVar2;
      uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar11 != 0) {
        piVar3 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar3[-1] == *unaff_r10) {
            puVar4 = (undefined4 *)(iVar5 + *piVar3 * 8 + 0xc0);
            goto LAB_02f91f40;
          }
          uVar11 = uVar11 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,*unaff_r10,0);
LAB_02f91f40:
      iVar5 = (*(code *)*puVar4)(piVar2,puVar4[1]);
      if (iVar5 == 0) {
        iVar1 = 0;
        goto LAB_02f9201c;
      }
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(*(int *)(pcVar14 + 0x1c) + 0xc);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = func_0x014001f0(iVar5);
      }
      iVar6 = *piVar2;
      uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar11 != 0) {
        piVar3 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar3[-1] == iVar5) {
            puVar4 = (undefined4 *)(iVar6 + *piVar3 * 8 + 0xc0);
            goto LAB_02f91fd0;
          }
          uVar11 = uVar11 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar5,0);
LAB_02f91fd0:
      (*(code *)*puVar4)(unaff_r9,piVar2,puVar4[1]);
      uStack_80 = *(undefined4 *)(iVar1 + 0x14);
      iVar5 = (**(code **)(iVar1 + 0xc))
                        (*(undefined4 *)(iVar1 + 0x20),iStack_78,uStack_74,uStack_70);
    } while (iVar5 == 0);
    if (iVar13 != 0x7fffffff) {
      iVar13 = iVar13 + 1;
      goto LAB_02f91ee4;
    }
  }
  uVar16 = func_0x01384bf8();
  func_0x01384aa0(uVar16,pcVar14);
  uVar26 = func_0x01384928();
  uVar16 = (undefined4)uVar26;
  if ((int)((ulonglong)uVar26 >> 0x20) == 1) {
    piVar3 = (int *)func_0x0145b008(uVar16);
    iVar1 = *piVar3;
    func_0x0145b0f8();
LAB_02f9201c:
    if (piVar2 != (int *)0x0) {
      iVar5 = *piVar2;
      uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar11 != 0) {
        piVar3 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar3[-1] == **(int **)(iRam02f921c4 + 0x2f92034)) {
            puVar4 = (undefined4 *)(iVar5 + *piVar3 * 8 + 0xc0);
            goto LAB_02f9207c;
          }
          uVar11 = uVar11 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f921c4 + 0x2f92034),0);
LAB_02f9207c:
      (*(code *)*puVar4)(piVar2,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return iVar13;
  }
  iVar5 = 0;
  if (piVar2 != (int *)0x0) {
    iVar6 = *piVar2;
    uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar11 != 0) {
      piVar3 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        iVar1 = piVar3[-1];
        if (iVar1 == **(int **)(iRam02f921c8 + 0x2f9213c)) {
          puVar4 = (undefined4 *)(iVar6 + *piVar3 * 8 + 0xc0);
          goto LAB_02f92184;
        }
        uVar11 = uVar11 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f921c8 + 0x2f9213c),0);
LAB_02f92184:
    (*(code *)*puVar4)(piVar2,puVar4[1]);
  }
  uVar23 = 1;
  func_0x01459844(uVar16);
  iVar22 = 0x2f921b0;
  uVar26 = func_0x01062280();
  iVar19 = (int)((ulonglong)uVar26 >> 0x20);
  piVar3 = (int *)uVar26;
  bVar24 = false;
  iVar6 = extraout_r2_02;
  if ((bool)uVar23) {
    uVar16 = 0xfd06defc;
    iVar6 = (int)&UNK_03400000 - (int)piVar3;
    bVar24 = iVar6 == 0;
  }
  bVar25 = false;
  if (bVar24) {
    iVar22 = 6 - (int)piVar3;
    bVar25 = iVar22 == 0;
  }
  bVar24 = false;
  if (bVar25) {
    unaff_r10 = (int *)((int)__DT_SYMTAB + (0x3df0 - iVar6));
    bVar24 = unaff_r10 == (int *)0x0;
  }
  bVar25 = false;
  if (bVar24) {
    iVar6 = 0x600000 - (int)piVar3;
    bVar25 = iVar6 == 0;
  }
  if (bVar25) {
    iVar5 = 0x2500 - iVar22;
  }
  piVar20 = &iStack_a8;
  piStack_a0 = piVar2;
  iStack_9c = iVar5;
  uStack_98 = uVar16;
  iStack_94 = iVar1;
  iStack_90 = iVar13;
  piStack_8c = unaff_r9;
  piStack_88 = unaff_r10;
  iStack_84 = iVar22;
  if (*(int *)(iVar6 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f9257c + 0x2f921f8));
    func_0x01384978(*(undefined4 *)(iRam02f92580 + 0x2f92204));
    if (*(int *)(iVar6 + 0x1c) == 0) {
      func_0x0140024c(iVar6);
    }
  }
  if (piVar3 == (int *)0x0) {
    uVar16 = *(undefined4 *)(iRam02f92584 + 0x2f92480);
LAB_02f92488:
    uVar16 = func_0x01384988(uVar16);
    uVar16 = func_0x04a21c20(uVar16,0);
    func_0x01384aa0(uVar16,iVar6);
    func_0x01384928();
  }
  else {
    if (iVar19 == 0) {
      uVar16 = *(undefined4 *)(iRam02f92588 + 0x2f9248c);
      goto LAB_02f92488;
    }
    iVar1 = **(int **)(iVar6 + 0x1c);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0(iVar1);
    }
    iVar13 = *piVar3;
    uVar11 = (uint)*(ushort *)(iVar13 + 0xb6);
    if (uVar11 != 0) {
      piVar2 = (int *)(*(int *)(iVar13 + 0x58) + 4);
      do {
        if (piVar2[-1] == iVar1) {
          puVar4 = (undefined4 *)(iVar13 + *piVar2 * 8 + 0xc0);
          goto LAB_02f92294;
        }
        uVar11 = uVar11 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar1,0);
LAB_02f92294:
    piVar3 = (int *)(*(code *)*puVar4)(piVar3,puVar4[1]);
    iVar13 = 0;
    unaff_r10 = *(int **)(iRam02f9258c + 0x2f922bc);
LAB_02f922b8:
    do {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      uVar11 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar11 != 0) {
        piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar2[-1] == *unaff_r10) {
            puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
            goto LAB_02f92314;
          }
          uVar11 = uVar11 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,*unaff_r10,0);
LAB_02f92314:
      iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (iVar1 == 0) {
        iVar1 = 0;
        goto LAB_02f923e8;
      }
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(*(int *)(iVar6 + 0x1c) + 0xc);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0(iVar1);
      }
      iVar5 = *piVar3;
      uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar11 != 0) {
        piVar2 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar1) {
            puVar4 = (undefined4 *)(iVar5 + *piVar2 * 8 + 0xc0);
            goto LAB_02f923a4;
          }
          uVar11 = uVar11 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar1,0);
LAB_02f923a4:
      (*(code *)*puVar4)(&iStack_a8,piVar3,puVar4[1]);
      iVar1 = (**(code **)(iVar19 + 0xc))
                        (*(undefined4 *)(iVar19 + 0x20),iStack_a8,uStack_a4,
                         *(undefined4 *)(iVar19 + 0x14));
    } while (iVar1 == 0);
    unaff_r9 = &iStack_a8;
    if (iVar13 != 0x7fffffff) {
      iVar13 = iVar13 + 1;
      goto LAB_02f922b8;
    }
  }
  uVar16 = func_0x01384bf8();
  func_0x01384aa0(uVar16,iVar6);
  uVar26 = func_0x01384928();
  uVar16 = (undefined4)uVar26;
  if ((int)((ulonglong)uVar26 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar16);
    iVar1 = *piVar2;
    func_0x0145b0f8();
LAB_02f923e8:
    if (piVar3 != (int *)0x0) {
      iVar5 = *piVar3;
      uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar11 != 0) {
        piVar2 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(iRam02f92590 + 0x2f92400)) {
            puVar4 = (undefined4 *)(iVar5 + *piVar2 * 8 + 0xc0);
            goto LAB_02f92448;
          }
          uVar11 = uVar11 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(iRam02f92590 + 0x2f92400),0);
LAB_02f92448:
      (*(code *)*puVar4)(piVar3,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return iVar13;
  }
  uVar12 = 0;
  if (piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
    uVar11 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar11 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        iVar19 = piVar2[-1];
        if (iVar19 == **(int **)(iRam02f92594 + 0x2f92508)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_02f92550;
        }
        uVar11 = uVar11 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(iRam02f92594 + 0x2f92508),0);
LAB_02f92550:
    (*(code *)*puVar4)(piVar3,puVar4[1]);
  }
  uVar23 = 1;
  func_0x01459844(uVar16);
  uVar26 = func_0x01062280();
  iVar5 = (int)((ulonglong)uVar26 >> 0x20);
  piVar2 = (int *)uVar26;
  bVar24 = false;
  iVar1 = extraout_r2_03;
  if ((bool)uVar23) {
    uVar12 = 0xfd07b284;
    iVar1 = -0xffffffd - (int)piVar2;
    bVar24 = iVar1 == 0;
  }
  bVar25 = false;
  if (bVar24) {
    piVar20 = (int *)(-(int)piVar2 + 0x1300);
    bVar25 = -(int)piVar2 == -0x1300;
  }
  bVar24 = false;
  if (bVar25) {
    unaff_r10 = (int *)(&UNK_02100000 + -iVar1);
    bVar24 = unaff_r10 == (int *)0x0;
  }
  bVar25 = false;
  if (bVar24) {
    iVar1 = 0x10000001 - (int)piVar2;
    bVar25 = iVar1 == 0;
  }
  if (bVar25) {
    uVar12 = 0xfd38da84;
  }
  *(undefined4 *)((int)piVar20 + -4) = 0x2f9257c;
  *(int **)((int)piVar20 + -8) = unaff_r10;
  *(int **)((int)piVar20 + -0xc) = unaff_r9;
  *(int *)((int)piVar20 + -0x10) = iVar13;
  *(int *)((int)piVar20 + -0x14) = iVar19;
  *(undefined4 *)((int)piVar20 + -0x18) = uVar16;
  *(undefined4 *)((int)piVar20 + -0x1c) = uVar12;
  *(int **)((int)piVar20 + -0x20) = piVar3;
  puVar21 = (undefined1 *)((int)piVar20 + -0x28);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f92948 + 0x2f925c4));
    func_0x01384978(*(undefined4 *)(iRam02f9294c + 0x2f925d0));
    if (*(int *)(iVar1 + 0x1c) == 0) {
      func_0x0140024c(iVar1);
    }
  }
  if (piVar2 == (int *)0x0) {
    uVar16 = *(undefined4 *)(iRam02f92950 + 0x2f9284c);
LAB_02f92854:
    uVar16 = func_0x01384988(uVar16);
    uVar16 = func_0x04a21c20(uVar16,0);
    func_0x01384aa0(uVar16,iVar1);
    func_0x01384928();
  }
  else {
    if (iVar5 == 0) {
      uVar16 = *(undefined4 *)(iRam02f92954 + 0x2f92858);
      goto LAB_02f92854;
    }
    iVar13 = **(int **)(iVar1 + 0x1c);
    if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
      iVar13 = func_0x014001f0(iVar13);
    }
    iVar6 = *piVar2;
    uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar11 != 0) {
      piVar3 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar3[-1] == iVar13) {
          puVar4 = (undefined4 *)(iVar6 + *piVar3 * 8 + 0xc0);
          goto LAB_02f92660;
        }
        uVar11 = uVar11 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar13,0);
LAB_02f92660:
    piVar2 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
    iVar13 = 0;
    unaff_r10 = *(int **)(iRam02f92958 + 0x2f92688);
LAB_02f92684:
    do {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar6 = *piVar2;
      uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar11 != 0) {
        piVar3 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar3[-1] == *unaff_r10) {
            puVar4 = (undefined4 *)(iVar6 + *piVar3 * 8 + 0xc0);
            goto LAB_02f926e0;
          }
          uVar11 = uVar11 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,*unaff_r10,0);
LAB_02f926e0:
      iVar6 = (*(code *)*puVar4)(piVar2,puVar4[1]);
      if (iVar6 == 0) {
        iVar1 = 0;
        goto LAB_02f927b4;
      }
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(*(int *)(iVar1 + 0x1c) + 0xc);
      if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
        iVar6 = func_0x014001f0(iVar6);
      }
      iVar19 = *piVar2;
      uVar11 = (uint)*(ushort *)(iVar19 + 0xb6);
      if (uVar11 != 0) {
        piVar3 = (int *)(*(int *)(iVar19 + 0x58) + 4);
        do {
          if (piVar3[-1] == iVar6) {
            puVar4 = (undefined4 *)(iVar19 + *piVar3 * 8 + 0xc0);
            goto LAB_02f92770;
          }
          uVar11 = uVar11 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar6,0);
LAB_02f92770:
      (*(code *)*puVar4)((undefined1 *)((int)piVar20 + -0x28),piVar2,puVar4[1]);
      iVar6 = (**(code **)(iVar5 + 0xc))
                        (*(undefined4 *)(iVar5 + 0x20),*(undefined4 *)((int)piVar20 + -0x28),
                         *(undefined4 *)((int)piVar20 + -0x24),*(undefined4 *)(iVar5 + 0x14));
    } while (iVar6 == 0);
    unaff_r9 = (int *)((int)piVar20 + -0x28);
    if (iVar13 != 0x7fffffff) {
      iVar13 = iVar13 + 1;
      goto LAB_02f92684;
    }
  }
  uVar16 = func_0x01384bf8();
  func_0x01384aa0(uVar16,iVar1);
  uVar26 = func_0x01384928();
  uVar16 = (undefined4)uVar26;
  if ((int)((ulonglong)uVar26 >> 0x20) == 1) {
    piVar3 = (int *)func_0x0145b008(uVar16);
    iVar1 = *piVar3;
    func_0x0145b0f8();
LAB_02f927b4:
    if (piVar2 != (int *)0x0) {
      iVar5 = *piVar2;
      uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar11 != 0) {
        piVar3 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar3[-1] == **(int **)(iRam02f9295c + 0x2f927cc)) {
            puVar4 = (undefined4 *)(iVar5 + *piVar3 * 8 + 0xc0);
            goto LAB_02f92814;
          }
          uVar11 = uVar11 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f9295c + 0x2f927cc),0);
LAB_02f92814:
      (*(code *)*puVar4)(piVar2,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return iVar13;
  }
  iVar1 = 0;
  if (piVar2 != (int *)0x0) {
    iVar6 = *piVar2;
    uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar11 != 0) {
      piVar3 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        iVar5 = piVar3[-1];
        if (iVar5 == **(int **)(iRam02f92960 + 0x2f928d4)) {
          puVar4 = (undefined4 *)(iVar6 + *piVar3 * 8 + 0xc0);
          goto LAB_02f9291c;
        }
        uVar11 = uVar11 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f92960 + 0x2f928d4),0);
LAB_02f9291c:
    (*(code *)*puVar4)(piVar2,puVar4[1]);
  }
  uVar23 = 1;
  func_0x01459844(uVar16);
  uVar26 = func_0x01062280();
  iVar19 = (int)((ulonglong)uVar26 >> 0x20);
  piVar3 = (int *)uVar26;
  bVar24 = false;
  iVar6 = extraout_r2_04;
  if ((bool)uVar23) {
    iVar1 = -0x2f62948;
    iVar6 = 0x30 - (int)piVar3;
    bVar24 = iVar6 == 0;
  }
  bVar25 = false;
  if (bVar24) {
    puVar21 = (undefined1 *)(-(int)piVar3 + 0x200000);
    bVar25 = -(int)piVar3 == -0x200000;
  }
  bVar24 = false;
  if (bVar25) {
    unaff_r10 = (int *)(-0x1ffffffe - iVar6);
    bVar24 = unaff_r10 == (int *)0x0;
  }
  bVar25 = false;
  if (bVar24) {
    iVar19 = 0x1e0 - (int)piVar3;
    bVar25 = iVar19 == 0;
  }
  if (bVar25) {
    iVar1 = 0x3c06d6b8;
  }
  *(undefined4 *)(puVar21 + -4) = 0x2f92948;
  *(char **)(puVar21 + -8) = pcVar14;
  *(int **)(puVar21 + -0xc) = unaff_r9;
  *(int *)(puVar21 + -0x10) = iVar13;
  *(int *)(puVar21 + -0x14) = iVar5;
  *(undefined4 *)(puVar21 + -0x18) = uVar16;
  *(int *)(puVar21 + -0x1c) = iVar1;
  puVar4 = (undefined4 *)(puVar21 + -0x20);
  *puVar4 = piVar2;
  if (*(int *)(iVar6 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f92d04 + 0x2f9298c));
    func_0x01384978(*(undefined4 *)(iRam02f92d08 + 0x2f92998));
    if (*(int *)(iVar6 + 0x1c) == 0) {
      func_0x0140024c(iVar6);
    }
  }
  if (piVar3 == (int *)0x0) {
    uVar16 = *(undefined4 *)(iRam02f92d0c + 0x2f92c08);
LAB_02f92c10:
    uVar16 = func_0x01384988(uVar16);
    uVar16 = func_0x04a21c20(uVar16,0);
    func_0x01384aa0(uVar16,iVar6);
    func_0x01384928();
  }
  else {
    if (iVar19 == 0) {
      uVar16 = *(undefined4 *)(iRam02f92d10 + 0x2f92c14);
      goto LAB_02f92c10;
    }
    iVar13 = **(int **)(iVar6 + 0x1c);
    if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
      iVar13 = func_0x014001f0(iVar13);
    }
    iVar5 = *piVar3;
    uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar11 != 0) {
      piVar2 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        iVar1 = piVar2[-1];
        if (iVar1 == iVar13) {
          puVar7 = (undefined4 *)(iVar5 + *piVar2 * 8 + 0xc0);
          goto LAB_02f92a28;
        }
        uVar11 = uVar11 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined4 *)func_0x014002dc(piVar3,iVar13,0);
LAB_02f92a28:
    piVar3 = (int *)(*(code *)*puVar7)(piVar3,puVar7[1]);
    iVar13 = 0;
    unaff_r9 = *(int **)(iRam02f92d14 + 0x2f92a4c);
LAB_02f92a48:
    do {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar5 = *piVar3;
      uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar11 != 0) {
        piVar2 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          iVar1 = piVar2[-1];
          if (iVar1 == *unaff_r9) {
            puVar7 = (undefined4 *)(iVar5 + *piVar2 * 8 + 0xc0);
            goto LAB_02f92aa4;
          }
          uVar11 = uVar11 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined4 *)func_0x014002dc(piVar3,*unaff_r9,0);
LAB_02f92aa4:
      iVar5 = (*(code *)*puVar7)(piVar3,puVar7[1]);
      if (iVar5 == 0) {
        iVar1 = 0;
        goto LAB_02f92b74;
      }
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(*(int *)(iVar6 + 0x1c) + 0xc);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = func_0x014001f0(iVar5);
      }
      iVar22 = *piVar3;
      uVar11 = (uint)*(ushort *)(iVar22 + 0xb6);
      if (uVar11 != 0) {
        piVar2 = (int *)(*(int *)(iVar22 + 0x58) + 4);
        do {
          iVar1 = piVar2[-1];
          if (iVar1 == iVar5) {
            puVar7 = (undefined4 *)(iVar22 + *piVar2 * 8 + 0xc0);
            goto LAB_02f92b34;
          }
          uVar11 = uVar11 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined4 *)func_0x014002dc(piVar3,iVar5,0);
LAB_02f92b34:
      uVar16 = (*(code *)*puVar7)(piVar3,puVar7[1]);
      iVar5 = (**(code **)(iVar19 + 0xc))
                        (*(undefined4 *)(iVar19 + 0x20),uVar16,*(undefined4 *)(iVar19 + 0x14));
    } while (iVar5 == 0);
    if (iVar13 != 0x7fffffff) {
      iVar13 = iVar13 + 1;
      goto LAB_02f92a48;
    }
  }
  uVar16 = func_0x01384bf8();
  func_0x01384aa0(uVar16,iVar6);
  uVar26 = func_0x01384928();
  uVar16 = (undefined4)uVar26;
  if ((int)((ulonglong)uVar26 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar16);
    iVar1 = *piVar2;
    func_0x0145b0f8();
LAB_02f92b74:
    if (piVar3 != (int *)0x0) {
      iVar5 = *piVar3;
      uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar11 != 0) {
        piVar2 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(iRam02f92d18 + 0x2f92b8c)) {
            puVar4 = (undefined4 *)(iVar5 + *piVar2 * 8 + 0xc0);
            goto LAB_02f92bd4;
          }
          uVar11 = uVar11 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(iRam02f92d18 + 0x2f92b8c),0);
LAB_02f92bd4:
      (*(code *)*puVar4)(piVar3,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return iVar13;
  }
  if (piVar3 != (int *)0x0) {
    iVar5 = *piVar3;
    uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar11 != 0) {
      piVar2 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        iVar1 = piVar2[-1];
        if (iVar1 == **(int **)(iRam02f92d1c + 0x2f92c90)) {
          puVar7 = (undefined4 *)(iVar5 + *piVar2 * 8 + 0xc0);
          goto LAB_02f92cd8;
        }
        uVar11 = uVar11 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(iRam02f92d1c + 0x2f92c90),0);
LAB_02f92cd8:
    (*(code *)*puVar7)(piVar3,puVar7[1]);
  }
  uVar23 = 1;
  func_0x01459844(uVar16);
  uVar26 = func_0x01062280();
  pcVar9 = (char *)((ulonglong)uVar26 >> 0x20);
  piVar2 = (int *)uVar26;
  bVar24 = false;
  if ((bool)uVar23) {
    iVar1 = 0xe06d2fc;
    pcVar9 = (char *)(0x6800 - (int)piVar2);
    bVar24 = pcVar9 == (char *)0x0;
  }
  bVar25 = false;
  if (bVar24) {
    puVar4 = (undefined4 *)(-(int)piVar2 + 0x31000000);
    bVar25 = -(int)piVar2 == -0x31000000;
  }
  bVar24 = false;
  if (bVar25) {
    unaff_r9 = (int *)(0x3f0 - extraout_r2_05);
    bVar24 = unaff_r9 == (int *)0x0;
  }
  bVar25 = false;
  if (bVar24) {
    pcVar9 = "_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE10pubseekposENS_4fposI9mbstate_tEEj"
             + (0x40 - (int)piVar2);
    bVar25 = pcVar9 == (char *)0x0;
  }
  if (bVar25) {
    iVar1 = -0x2f92d00;
  }
  puVar4[-1] = 0x2f92d04;
  puVar4[-2] = pcVar14;
  puVar4[-3] = unaff_r9;
  puVar4[-4] = iVar13;
  puVar4[-5] = uVar16;
  puVar4[-6] = 0;
  puVar4[-7] = iVar1;
  puVar4 = puVar4 + -8;
  *puVar4 = piVar3;
  if (*(int *)(extraout_r2_05 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f930c0 + 0x2f92d48));
    func_0x01384978(*(undefined4 *)(iRam02f930c4 + 0x2f92d54));
    if (*(int *)(extraout_r2_05 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_05);
    }
  }
  if (piVar2 == (int *)0x0) {
    uVar16 = *(undefined4 *)(iRam02f930c8 + 0x2f92fc4);
  }
  else {
    if (pcVar9 != (char *)0x0) {
      iVar13 = **(int **)(extraout_r2_05 + 0x1c);
      if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
        iVar13 = func_0x014001f0(iVar13);
      }
      iVar5 = *piVar2;
      uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar11 != 0) {
        piVar3 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          iVar1 = piVar3[-1];
          if (iVar1 == iVar13) {
            puVar7 = (undefined4 *)(iVar5 + *piVar3 * 8 + 0xc0);
            goto LAB_02f92de4;
          }
          uVar11 = uVar11 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined4 *)func_0x014002dc(piVar2,iVar13,0);
LAB_02f92de4:
      piVar2 = (int *)(*(code *)*puVar7)(piVar2,puVar7[1]);
      iVar13 = 0;
      unaff_r9 = *(int **)(iRam02f930d0 + 0x2f92e08);
LAB_02f92e04:
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar5 = *piVar2;
        uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar11 != 0) {
          piVar3 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            iVar1 = piVar3[-1];
            if (iVar1 == *unaff_r9) {
              puVar7 = (undefined4 *)(iVar5 + *piVar3 * 8 + 0xc0);
              goto LAB_02f92e60;
            }
            uVar11 = uVar11 - 1;
            piVar3 = piVar3 + 2;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined4 *)func_0x014002dc(piVar2,*unaff_r9,0);
LAB_02f92e60:
        iVar5 = (*(code *)*puVar7)(piVar2,puVar7[1]);
        if (iVar5 == 0) {
          iVar1 = 0;
          goto LAB_02f92f30;
        }
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(*(int *)(extraout_r2_05 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
          iVar5 = func_0x014001f0(iVar5);
        }
        iVar6 = *piVar2;
        uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar11 != 0) {
          piVar3 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            iVar1 = piVar3[-1];
            if (iVar1 == iVar5) {
              puVar7 = (undefined4 *)(iVar6 + *piVar3 * 8 + 0xc0);
              goto LAB_02f92ef0;
            }
            uVar11 = uVar11 - 1;
            piVar3 = piVar3 + 2;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined4 *)func_0x014002dc(piVar2,iVar5,0);
LAB_02f92ef0:
        uVar16 = (*(code *)*puVar7)(piVar2,puVar7[1]);
        iVar5 = (**(code **)(pcVar9 + 0xc))
                          (*(undefined4 *)(pcVar9 + 0x20),uVar16,*(undefined4 *)(pcVar9 + 0x14));
      } while (iVar5 == 0);
      if (iVar13 != 0x7fffffff) {
        iVar13 = iVar13 + 1;
        goto LAB_02f92e04;
      }
      goto LAB_02f92fe4;
    }
    uVar16 = *(undefined4 *)(iRam02f930cc + 0x2f92fd0);
  }
  uVar16 = func_0x01384988(uVar16);
  uVar16 = func_0x04a21c20(uVar16,0);
  func_0x01384aa0(uVar16,extraout_r2_05);
  func_0x01384928();
LAB_02f92fe4:
  uVar16 = func_0x01384bf8();
  func_0x01384aa0(uVar16,extraout_r2_05);
  uVar26 = func_0x01384928();
  uVar16 = (undefined4)uVar26;
  if ((int)((ulonglong)uVar26 >> 0x20) != 1) {
    if (piVar2 != (int *)0x0) {
      iVar5 = *piVar2;
      uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar11 != 0) {
        piVar3 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          iVar1 = piVar3[-1];
          if (iVar1 == **(int **)(iRam02f930d8 + 0x2f9304c)) {
            puVar7 = (undefined4 *)(iVar5 + *piVar3 * 8 + 0xc0);
            goto LAB_02f93094;
          }
          uVar11 = uVar11 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f930d8 + 0x2f9304c),0);
LAB_02f93094:
      (*(code *)*puVar7)(piVar2,puVar7[1]);
    }
    uVar23 = 1;
    func_0x01459844(uVar16);
    uVar26 = func_0x01062280();
    iVar5 = (int)((ulonglong)uVar26 >> 0x20);
    piVar3 = (int *)uVar26;
    bVar24 = false;
    if ((bool)uVar23) {
      iVar1 = -0x2f9309e;
      iVar5 = (int)&UNK_00ac0000 - (int)piVar3;
      bVar24 = iVar5 == 0;
    }
    bVar25 = false;
    if (bVar24) {
      puVar4 = (undefined4 *)(-(int)piVar3 + -0x80000000);
      bVar25 = -(int)piVar3 == -0x80000000;
    }
    bVar24 = false;
    if (bVar25) {
      unaff_r9 = (int *)(0x4000 - extraout_r2_06);
      bVar24 = unaff_r9 == (int *)0x0;
    }
    bVar25 = false;
    if (bVar24) {
      iVar5 = 0x3e00000 - (int)piVar3;
      bVar25 = iVar5 == 0;
    }
    if (bVar25) {
      piVar2 = (int *)0xfd06d780;
    }
    puVar4[-1] = 0x2f930c0;
    puVar4[-2] = pcVar14;
    puVar4[-3] = unaff_r10;
    puVar4[-4] = unaff_r9;
    puVar4[-5] = iVar13;
    puVar4[-6] = uVar16;
    puVar4[-7] = 0;
    puVar4[-8] = iVar1;
    puVar4[-9] = piVar2;
    puVar7 = puVar4 + -2;
    puVar4[-0xe] = iVar5;
    puVar4[-0xb] = **(undefined4 **)(iRam02f93554 + 0x2f93100);
    piVar2 = *(int **)(extraout_r2_06 + 0x1c);
    if (piVar2 == (int *)0x0) {
      func_0x01384978(*(undefined4 *)(iRam02f93558 + 0x2f9311c));
      func_0x01384978(*(undefined4 *)(iRam02f9355c + 0x2f93128));
      piVar2 = *(int **)(extraout_r2_06 + 0x1c);
      if (piVar2 == (int *)0x0) {
        func_0x0140024c(extraout_r2_06);
        piVar2 = *(int **)(extraout_r2_06 + 0x1c);
      }
    }
    iVar13 = *(int *)(piVar2[5] + 0x84);
    uVar11 = iVar13 + 7U & 0xfffffff8;
    iVar1 = (int)puVar4 + (-0x40 - uVar11);
    puVar15 = (undefined4 *)(iVar1 - uVar11);
    piVar18 = (int *)((int)puVar15 - uVar11);
    func_0x0145894c(piVar18,iVar13);
    if (piVar3 == (int *)0x0) goto LAB_02f93450;
    if (puVar4[-0xe] == 0) {
      uVar16 = *(undefined4 *)(iRam02f93564 + 0x2f93468);
      goto LAB_02f93464;
    }
    iVar5 = *piVar2;
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = func_0x014001f0(iVar5);
    }
    iVar6 = *piVar3;
    uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar11 != 0) {
      piVar2 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar2[-1] == iVar5) {
          puVar8 = (undefined4 *)(iVar6 + *piVar2 * 8 + 0xc0);
          goto LAB_02f931f0;
        }
        uVar11 = uVar11 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined4 *)func_0x014002dc(piVar3,iVar5,0);
LAB_02f931f0:
    piVar2 = (int *)(*(code *)*puVar8)(piVar3,puVar8[1]);
    iVar5 = 0;
    do {
      puVar4[-0xf] = iVar5;
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar5 = *piVar2;
        uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar11 != 0) {
          piVar3 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar3[-1] == **(int **)(iRam02f93568 + 0x2f93228)) {
              puVar8 = (undefined4 *)(iVar5 + *piVar3 * 8 + 0xc0);
              goto LAB_02f93270;
            }
            uVar11 = uVar11 - 1;
            piVar3 = piVar3 + 2;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f93568 + 0x2f93228),0);
LAB_02f93270:
        iVar5 = (*(code *)*puVar8)(piVar2,puVar8[1]);
        if (iVar5 == 0) {
          iVar13 = 0;
          goto LAB_02f933ac;
        }
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(*(int *)(extraout_r2_06 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
          iVar5 = func_0x014001f0(iVar5);
        }
        iVar6 = *piVar2;
        uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar11 != 0) {
          piVar3 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar3[-1] == iVar5) {
              iVar5 = iVar6 + *piVar3 * 8 + 0xc0;
              goto LAB_02f93300;
            }
            uVar11 = uVar11 - 1;
            piVar3 = piVar3 + 2;
          } while (uVar11 != 0);
        }
        iVar5 = func_0x014002dc(piVar2,iVar5,0);
LAB_02f93300:
        iVar5 = *(int *)(iVar5 + 4);
        puVar4[-0xd] = iVar1;
        uVar16 = *(undefined4 *)(iVar5 + 4);
        pcVar17 = *(code **)(iVar5 + 8);
        *(int *)((int)piVar18 + -8) = iVar1;
        (*pcVar17)(uVar16,iVar5,piVar2,puVar4 + -0xd);
        func_0x01458934(piVar18,iVar1,iVar13);
        func_0x01458934(puVar15,piVar18,iVar13);
        puVar10 = *(undefined4 **)(*(int *)(extraout_r2_06 + 0x1c) + 0x18);
        puVar8 = puVar15;
        if (-1 < *(int *)(*(int *)(*(int *)(extraout_r2_06 + 0x1c) + 0x14) + 0x14)) {
          puVar8 = (undefined4 *)*puVar15;
        }
        uVar16 = *puVar10;
        pcVar17 = (code *)puVar10[2];
        puVar4[-0xd] = puVar8;
        *(int *)((int)piVar18 + -8) = (int)puVar4 + -0x2d;
        (*pcVar17)(uVar16,puVar10,puVar4[-0xe],puVar4 + -0xd);
      } while (*(char *)((int)puVar4 + -0x2d) == '\0');
      if (puVar4[-0xf] == 0x7fffffff) goto LAB_02f9347c;
      iVar5 = puVar4[-0xf] + 1;
    } while( true );
  }
  piVar3 = (int *)func_0x0145b008(uVar16);
  iVar1 = *piVar3;
  func_0x0145b0f8();
LAB_02f92f30:
  if (piVar2 != (int *)0x0) {
    iVar5 = *piVar2;
    uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar11 != 0) {
      piVar3 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(iRam02f930d4 + 0x2f92f48)) {
          puVar4 = (undefined4 *)(iVar5 + *piVar3 * 8 + 0xc0);
          goto LAB_02f92f90;
        }
        uVar11 = uVar11 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f930d4 + 0x2f92f48),0);
LAB_02f92f90:
    (*(code *)*puVar4)(piVar2,puVar4[1]);
  }
  if (iVar1 != 0) {
    func_0x01384bec(iVar1);
  }
  return iVar13;
LAB_02f91498:
  uVar16 = func_0x01384bf8();
  func_0x01384aa0(uVar16,iVar13);
  func_0x01384928();
  goto LAB_02f914a8;
LAB_02f918c0:
  uVar16 = func_0x01384bf8();
  func_0x01384aa0(uVar16,iVar1);
  func_0x01384928();
  goto LAB_02f918d0;
LAB_02f91ce8:
  uVar16 = func_0x01384bf8();
  func_0x01384aa0(uVar16,iVar13);
  func_0x01384928();
  goto LAB_02f91cf8;
LAB_02f9347c:
  while( true ) {
    uVar16 = func_0x01384bf8();
    func_0x01384aa0(uVar16,extraout_r2_06);
    uVar26 = func_0x01384928();
    iVar13 = (int)uVar26;
    if ((int)((ulonglong)uVar26 >> 0x20) != 1) break;
    piVar3 = (int *)func_0x0145b008(iVar13);
    iVar13 = *piVar3;
    func_0x0145b0f8();
LAB_02f933ac:
    if (piVar2 != (int *)0x0) {
      iVar5 = *piVar2;
      uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar11 != 0) {
        piVar3 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          iVar1 = piVar3[-1];
          if (iVar1 == **(int **)(iRam02f9356c + 0x2f933c4)) {
            puVar15 = (undefined4 *)(iVar5 + *piVar3 * 8 + 0xc0);
            goto LAB_02f9340c;
          }
          uVar11 = uVar11 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar11 != 0);
      }
      puVar15 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f9356c + 0x2f933c4),0);
LAB_02f9340c:
      (*(code *)*puVar15)(piVar2,puVar15[1]);
    }
    if (iVar13 != 0) {
      func_0x01384bec(iVar13);
    }
    if (**(int **)(iRam02f93570 + 0x2f93438) == puVar4[-0xb]) {
      return puVar4[-0xf];
    }
    func_0x0145b028(puVar4[-0xf]);
LAB_02f93450:
    uVar16 = *(undefined4 *)(iRam02f93560 + 0x2f9345c);
LAB_02f93464:
    uVar16 = func_0x01384988(uVar16);
    uVar16 = func_0x04a21c20(uVar16,0);
    func_0x01384aa0(uVar16,extraout_r2_06);
    func_0x01384928();
  }
  if (piVar2 != (int *)0x0) {
    iVar5 = *piVar2;
    uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar11 != 0) {
      piVar3 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        iVar1 = piVar3[-1];
        if (iVar1 == **(int **)(iRam02f93574 + 0x2f934e0)) {
          puVar4 = (undefined4 *)(iVar5 + *piVar3 * 8 + 0xc0);
          goto LAB_02f93528;
        }
        uVar11 = uVar11 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f93574 + 0x2f934e0),0);
LAB_02f93528:
    (*(code *)*puVar4)(piVar2,puVar4[1]);
  }
  uVar23 = 1;
  func_0x01459844(iVar13);
  uVar27 = func_0x01062280();
  iVar6 = (int)(uVar27 >> 0x20);
  iVar5 = (int)uVar27;
  bVar24 = false;
  if ((bool)uVar23) {
    piVar2 = (int *)0xfd06f7ac;
    iVar6 = -0x28000000 - iVar5;
    bVar24 = iVar6 == 0;
  }
  bVar25 = false;
  if ((bVar24 && iVar5 == 0x1c00) && extraout_r2_07 == &UNK_02a00000) {
    iVar6 = 0x60000003 - iVar5;
    bVar25 = iVar6 == 0;
  }
  if (bVar25) {
    piVar2 = (int *)0xfd42caac;
  }
  *(undefined4 *)((int)piVar18 + -4) = 0x2f93554;
  *(undefined4 **)((int)piVar18 + -8) = puVar7;
  *(undefined4 *)((int)piVar18 + -0xc) = 0;
  *(int *)((int)piVar18 + -0x10) = (int)piVar2;
  if (*(int *)(iVar6 + 0x1c) == 0) {
    func_0x0140024c(iVar6);
  }
  if (iVar5 == 0) {
    uVar16 = func_0x01384988(*(undefined4 *)(iRam02f935d8 + 0x2f935c4));
    uVar16 = func_0x04a21c20(uVar16,0);
    func_0x01384aa0(uVar16,iVar6);
    uVar27 = func_0x01384928();
    iVar5 = (int)(uVar27 >> 0x20);
    *(undefined4 *)((int)piVar18 + -0x14) = 0x2f935d8;
    *(undefined4 **)((int)piVar18 + -0x18) = puVar7;
    *(undefined4 *)((int)piVar18 + -0x1c) = 0;
    piVar2 = (int *)((int)piVar18 + -0x20);
    *piVar2 = iVar6;
    if (*(int *)(iVar5 + 0x1c) == 0) {
      func_0x0140024c(iVar5);
    }
    if ((int)uVar27 == 0) {
      uVar16 = func_0x01384988(*(undefined4 *)(iRam02f9363c + 0x2f93628));
      uVar16 = func_0x04a21c20(uVar16,0);
      func_0x01384aa0(uVar16,iVar5);
      uVar26 = func_0x01384928();
      iVar6 = (int)((ulonglong)uVar26 >> 0x20);
      *(undefined4 *)((int)piVar18 + -0x24) = 0x2f9363c;
      *(undefined4 **)((int)piVar18 + -0x28) = puVar7;
      *(undefined4 *)((int)piVar18 + -0x2c) = 0;
      *(int *)((int)piVar18 + -0x30) = iVar5;
      if (*(int *)(iVar6 + 0x1c) == 0) {
        func_0x0140024c(iVar6);
      }
      if ((int)uVar26 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02f93680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar1 = (*(code *)**(undefined4 **)(*(int *)(iVar6 + 0x1c) + 4))((int)uVar26,0);
        return iVar1;
      }
      uVar16 = func_0x01384988(*(undefined4 *)(iRam02f936a4 + 0x2f93690));
      uVar16 = func_0x04a21c20(uVar16,0);
      func_0x01384aa0(uVar16,iVar6);
      uVar27 = func_0x01384928();
      *(undefined4 *)((int)piVar18 + -0x34) = 0x2f936a4;
      *(int *)((int)piVar18 + -0x38) = iVar13;
      *(undefined4 *)((int)piVar18 + -0x3c) = 0;
      piVar2 = (int *)((int)piVar18 + -0x40);
      *piVar2 = iVar6;
      if (*(int *)(extraout_r2_08 + 0x1c) == 0) {
        func_0x0140024c(extraout_r2_08);
      }
      if ((int)uVar27 == 0) {
        uVar16 = func_0x01384988(*(undefined4 *)(iRam02f9370c + 0x2f936f8));
        uVar16 = func_0x04a21c20(uVar16,0);
        func_0x01384aa0(uVar16,extraout_r2_08);
        uVar26 = func_0x01384928();
        iVar19 = (int)((ulonglong)uVar26 >> 0x20);
        *(undefined4 *)((int)piVar18 + -0x44) = 0x2f9370c;
        *(undefined4 *)((int)piVar18 + -0x48) = 0;
        *(int *)((int)piVar18 + -0x4c) = (int)(uVar27 >> 0x20);
        piVar18 = (int *)((int)piVar18 + -0x50);
        *piVar18 = extraout_r2_08;
        if (*(int *)(extraout_r2_09 + 0x1c) == 0) {
          func_0x0140024c(extraout_r2_09);
        }
        if ((int)uVar26 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02f93754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar1 = (*(code *)**(undefined4 **)(*(int *)(extraout_r2_09 + 0x1c) + 8))
                            ((int)uVar26,iVar19);
          return iVar1;
        }
        uVar16 = func_0x01384988(*(undefined4 *)(iRam02f93778 + 0x2f93764));
        uVar16 = func_0x04a21c20(uVar16,0);
        func_0x01384aa0(uVar16,extraout_r2_09);
        iVar22 = 0x2f93778;
        uVar27 = func_0x01384928();
        iVar13 = 0;
        iVar5 = extraout_r2_10;
        iVar6 = extraout_r2_09;
        goto LAB_02f9377c;
      }
      iVar5 = *(int *)(*(int *)(extraout_r2_08 + 0x1c) + 8);
      iVar6 = *piVar2;
      iVar19 = *(int *)((int)piVar18 + -0x3c);
      iVar13 = *(int *)((int)piVar18 + -0x38);
      iVar22 = *(int *)((int)piVar18 + -0x34);
    }
    else {
      uVar27 = uVar27 & 0xffffffff;
      iVar5 = *(int *)(*(int *)(iVar5 + 0x1c) + 4);
      iVar6 = *piVar2;
      iVar19 = *(int *)((int)piVar18 + -0x1c);
      puVar7 = *(undefined4 **)((int)piVar18 + -0x18);
      iVar22 = *(int *)((int)piVar18 + -0x14);
    }
    piVar2[3] = iVar22;
    piVar2[2] = (int)puVar7;
    piVar2[1] = iVar1;
    *piVar2 = iVar13;
    piVar2[-1] = iVar19;
    piVar2[-2] = iVar6;
    piVar2 = *(int **)(iVar5 + 0x1c);
    if (piVar2 == (int *)0x0) {
      func_0x0140024c(iVar5);
      piVar2 = *(int **)(iVar5 + 0x1c);
    }
    if ((*(ushort *)(*piVar2 + 0xbd) & 1) == 0) {
      func_0x014001f0();
    }
    iVar1 = func_0x01384be4();
    func_0x0320b024(iVar1,0xfffffffe,*(undefined4 *)(*(int *)(iVar5 + 0x1c) + 4));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar1 + 0x18) = (int)(uVar27 >> 0x20);
    *(int *)(iVar1 + 0x20) = (int)uVar27;
    return iVar1;
  }
  uVar27 = uVar27 & 0xffffffff;
  iVar5 = *(int *)(*(int *)(iVar6 + 0x1c) + 4);
  iVar6 = *(int *)((int)piVar18 + -0x10);
  iVar19 = *(int *)((int)piVar18 + -0xc);
  puVar7 = *(undefined4 **)((int)piVar18 + -8);
  iVar22 = *(int *)((int)piVar18 + -4);
LAB_02f9377c:
  piVar18[-1] = iVar22;
  piVar18[-2] = (int)puVar7;
  piVar18[-3] = iVar1;
  piVar18[-4] = iVar13;
  piVar18[-5] = iVar19;
  piVar18[-6] = iVar6;
  piVar2 = *(int **)(iVar5 + 0x1c);
  if (piVar2 == (int *)0x0) {
    func_0x0140024c(iVar5);
    piVar2 = *(int **)(iVar5 + 0x1c);
  }
  if ((*(ushort *)(*piVar2 + 0xbd) & 1) == 0) {
    func_0x014001f0();
  }
  iVar1 = func_0x01384be4();
  func_0x0320aac8(iVar1,0xfffffffe,*(undefined4 *)(*(int *)(iVar5 + 0x1c) + 4));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 0x18) = (int)(uVar27 >> 0x20);
  *(int *)(iVar1 + 0x20) = (int)uVar27;
  return iVar1;
}



// ===== FAT.TrainMissionActivity$$CompleteTrainMission RVA 0x2b7b2cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b8b2cc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  bool bVar19;
  undefined8 uVar20;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_2c;
  uint uStack_28;
  
  pcVar7 = (char *)(_UNK_02b8bd8c + 0x2b8b2ec);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8bd90 + 0x2b8b300));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bd94 + 0x2b8b30c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bd98 + 0x2b8b318));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bd9c + 0x2b8b324));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bda0 + 0x2b8b330));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bda4 + 0x2b8b33c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bda8 + 0x2b8b348));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bdac + 0x2b8b354));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bdb0 + 0x2b8b360));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bdb4 + 0x2b8b36c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bdb8 + 0x2b8b378));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bdbc + 0x2b8b384));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bdc0 + 0x2b8b390));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bdc4 + 0x2b8b39c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bdc8 + 0x2b8b3a8));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bdcc + 0x2b8b3b4));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bdd0 + 0x2b8b3c0));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bdd4 + 0x2b8b3cc));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bdd8 + 0x2b8b3d8));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bddc + 0x2b8b3e4));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bde0 + 0x2b8b3f0));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bde4 + 0x2b8b3fc));
    func_0x01384978(*(undefined4 *)(_UNK_02b8bde8 + 0x2b8b408));
    *pcVar7 = '\x01';
  }
  uStack_28 = 0;
  iStack_2c = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  iVar1 = func_0x0229f06c(0x75d1,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b8bdec + 0x2b8b488));
    func_0x04874ed4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar3 = *(undefined4 **)(_UNK_02b8bdf0 + 0x2b8b4b0);
    *(undefined4 *)(iVar1 + 8) = param_3;
    iVar2 = func_0x01384be4(*puVar3);
    func_0x0328e950(iVar2,**(undefined4 **)(_UNK_02b8bdf4 + 0x2b8b4c8));
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar8 = *(uint *)(iVar1 + 8);
    iVar12 = *(int *)(param_2 + 0x10);
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 1 << (uVar8 & 0x1f);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    iVar12 = func_0x0328eea8(iVar12,uVar8,**(undefined4 **)(_UNK_02b8bdf8 + 0x2b8b518));
    piVar9 = *(int **)(_UNK_02b8bdfc + 0x2b8b530);
    iVar4 = *piVar9;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar4 = *piVar9;
    }
    iVar4 = **(int **)(iVar4 + 0x5c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_48,iVar4,&iStack_2c,**(undefined4 **)(_UNK_02b8be00 + 0x2b8b570));
    iVar4 = iStack_2c;
    uStack_34 = uStack_44;
    uStack_38 = uStack_48;
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar18 = *(undefined4 *)(iVar12 + 8);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar4 + 8);
    uVar8 = *(uint *)(iVar4 + 0xc);
    piVar9 = *(int **)(_UNK_02b8be04 + 0x2b8b5c8);
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
    iVar10 = *piVar9;
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    if (uVar8 < *(uint *)(iVar13 + 0xc)) {
      *(uint *)(iVar4 + 0xc) = uVar8 + 1;
      iVar13 = iVar13 + uVar8 * 8;
      *(undefined4 *)(iVar13 + 0x10) = uVar18;
      *(undefined4 *)(iVar13 + 0x14) = 1;
    }
    else {
      func_0x0326a8b0(iVar4,uVar18,1,
                      *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
    }
    iVar4 = iStack_2c;
    iVar13 = *(int *)(param_1 + 0x88);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    func_0x021491b8(iVar13,iVar4,0,0,0);
    iVar4 = func_0x02b8be68(param_1,param_2);
    if (iVar4 != 0) {
      func_0x02b8c2f0(param_1);
      func_0x02b8c69c(param_1);
      uVar18 = FUN_02b87720(param_1);
      iVar4 = *(int *)(param_1 + 0x84);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar13 = *(int *)(param_1 + 0xf0);
      iVar10 = *(int *)(param_1 + 0x44);
      uVar11 = *(undefined4 *)(iVar4 + 0x10);
      uVar5 = *(undefined4 *)(param_2 + 8);
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      puVar3 = *(undefined4 **)(_UNK_02b8be08 + 0x2b8b6c8);
      iVar4 = func_0x0328eea8(iVar13,0,*puVar3);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar17 = *(undefined4 *)(iVar4 + 8);
      iVar4 = *(int *)(param_1 + 0xf0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x0328eea8(iVar4,0,*puVar3);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar15 = *(undefined4 *)(iVar4 + 0x10);
      if (*(int *)(**(int **)(_UNK_02b8be0c + 0x2b8b728) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar17 = func_0x01a32f1c(**(undefined4 **)(_UNK_02b8be14 + 0x2b8b754),uVar17,uVar15,
                               **(undefined4 **)(_UNK_02b8be10 + 0x2b8b748));
      func_0x019b97b4(param_1,uVar18,uVar11,iVar10 + 1,uVar5,uVar17,*(undefined4 *)(param_1 + 0x6c),
                      *(int *)(param_1 + 0x24) + 1,0);
    }
    func_0x028c98a0(&uStack_38,0);
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x40);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    piVar9 = *(int **)(_UNK_02b8be18 + 0x2b8b7e4);
    uVar5 = *(undefined4 *)(iVar12 + 0xc);
    uVar18 = *(undefined4 *)(iVar12 + 0x10);
    iVar12 = *piVar9;
    if (*(int *)(iVar12 + 0x74) == 0) {
      func_0x01384ab4();
      iVar12 = *piVar9;
    }
    uVar11 = *(undefined4 *)(*(int *)(iVar12 + 0x5c) + 0x2ec);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar18 = func_0x01cdcbac(iVar4,uVar5,uVar18,uVar11,0,0,0,0x16a,
                             **(undefined4 **)(_UNK_02b8be1c + 0x2b8b82c),
                             **(undefined4 **)(_UNK_02b8be20 + 0x2b8b838),0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar12 = *(int *)(iVar2 + 8);
    uVar8 = *(uint *)(iVar2 + 0xc);
    piVar6 = *(int **)(_UNK_02b8be24 + 0x2b8b894);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    iVar4 = *piVar6;
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    if (uVar8 < *(uint *)(iVar12 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar8 + 1;
      *(undefined4 *)(iVar12 + uVar8 * 4 + 0x10) = uVar18;
    }
    else {
      func_0x0328f170(iVar2,uVar18,*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
    }
    iVar12 = func_0x02b8c8a4(param_2,*(undefined4 *)(iVar1 + 8),&uStack_28,&uStack_3c);
    if (iVar12 != 0) {
      iVar12 = func_0x03668dfc(**(undefined4 **)(_UNK_02b8be28 + 0x2b8b900));
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      uVar20 = func_0x01c359e8(iVar12,0);
      iVar4 = (int)((ulonglong)uVar20 >> 0x20);
      bVar19 = (uint)uVar20 < uStack_28;
      iVar12 = (int)uStack_28 >> 0x1f;
      if ((int)(iVar4 - (iVar12 + (uint)bVar19)) < 0 !=
          (SBORROW4(iVar4,iVar12) != SBORROW4(iVar4 - iVar12,(uint)bVar19))) {
        uVar5 = *(undefined4 *)(param_2 + 0x18);
        uVar18 = func_0x01384be4(**(undefined4 **)(_UNK_02b8be2c + 0x2b8b93c));
        func_0x041cf488(uVar18,iVar1,**(undefined4 **)(_UNK_02b8be30 + 0x2b8b95c),0);
        iVar12 = func_0x02f9ae48(uVar5,uVar18,**(undefined4 **)(_UNK_02b8be34 + 0x2b8b974));
        iVar4 = func_0x01c24918(0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0x40);
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        iVar13 = *piVar9;
        uVar18 = *(undefined4 *)(iVar12 + 0xc);
        uVar5 = *(undefined4 *)(iVar12 + 0x10);
        if (*(int *)(iVar13 + 0x74) == 0) {
          func_0x01384ab4();
          iVar13 = *piVar9;
        }
        uVar11 = *(undefined4 *)(*(int *)(iVar13 + 0x5c) + 0x2f0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar18 = func_0x01cdcbac(iVar4,uVar18,uVar5,uVar11,0,0,0,0x170,
                                 **(undefined4 **)(_UNK_02b8be38 + 0x2b8b9f0),
                                 **(undefined4 **)(_UNK_02b8be3c + 0x2b8b9fc),0);
        iVar12 = *(int *)(iVar2 + 8);
        uVar8 = *(uint *)(iVar2 + 0xc);
        piVar9 = *(int **)(_UNK_02b8be40 + 0x2b8ba4c);
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
        iVar4 = *piVar9;
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        if (uVar8 < *(uint *)(iVar12 + 0xc)) {
          *(uint *)(iVar2 + 0xc) = uVar8 + 1;
          *(undefined4 *)(iVar12 + uVar8 * 4 + 0x10) = uVar18;
        }
        else {
          func_0x0328f170(iVar2,uVar18,
                          *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
        }
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      }
    }
    iVar12 = *(int *)(param_1 + 0x84);
    uVar18 = *(undefined4 *)(param_1 + 0x40);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(param_2 + 0x10);
    uVar17 = *(undefined4 *)(iVar1 + 8);
    iVar13 = *(int *)(param_1 + 0x44);
    uVar5 = *(undefined4 *)(param_2 + 8);
    uVar11 = *(undefined4 *)(iVar12 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    puVar3 = *(undefined4 **)(_UNK_02b8be44 + 0x2b8bafc);
    iVar12 = func_0x0328eea8(iVar4,uVar17,*puVar3);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(param_2 + 0x10);
    uVar15 = *(undefined4 *)(iVar1 + 8);
    uVar17 = *(undefined4 *)(iVar12 + 8);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar12 = func_0x0328eea8(iVar4,uVar15,*puVar3);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(param_2 + 0x10);
    uVar15 = *(undefined4 *)(iVar1 + 8);
    uVar14 = *(undefined4 *)(iVar12 + 0xc);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0328eea8(iVar4,uVar15,*puVar3);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar9 = *(int **)(_UNK_02b8be48 + 0x2b8bb90);
    uVar15 = *(undefined4 *)(iVar1 + 0x10);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar15 = func_0x030dd68c(uVar14,0x3a,uVar15,**(undefined4 **)(_UNK_02b8be4c + 0x2b8bbb8));
    iVar1 = *(int *)(iVar2 + 0xc);
    if (iVar1 < 2) {
      uVar16 = 0xffffffff;
      uVar14 = **(undefined4 **)(_UNK_02b8be50 + 0x2b8bc88);
    }
    else {
      puVar3 = *(undefined4 **)(_UNK_02b8be54 + 0x2b8bbec);
      iVar12 = func_0x0328eea8(iVar2,1,*puVar3);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      uVar14 = *(undefined4 *)(iVar12 + 8);
      iVar12 = func_0x0328eea8(iVar2,1,*puVar3);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      uVar16 = *(undefined4 *)(iVar12 + 0x10);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar14 = func_0x01a32f1c(**(undefined4 **)(_UNK_02b8be5c + 0x2b8bc60),uVar14,uVar16,
                               **(undefined4 **)(_UNK_02b8be58 + 0x2b8bc54));
      uVar16 = 0xffffffff;
      if (1 < *(int *)(iVar2 + 0xc)) {
        uVar16 = *(undefined4 *)(param_1 + 0x68);
      }
    }
    func_0x019b95fc(param_1,uVar18,uVar11,iVar13 + 1,uVar5,uVar17,uVar15,1 < iVar1,uVar14,uVar16,
                    *(int *)(param_1 + 0x24) + 1,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x75d1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02250140(iVar1,param_1,param_2,param_3,0);
  }
  return iVar2;
}



// ===== FAT.TrainMissionActivity.<>c__DisplayClass107_0$$.ctor RVA 0x2b7be60 =====

void FUN_02b8be60(void)

{
  return;
}



// ===== FAT.TrainMissionActivity$$_FinishOrder RVA 0x2b7be68 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b8be68(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_02b8c294 + 0x2b8be84);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8c298 + 0x2b8be98));
    func_0x01384978(*(undefined4 *)(_UNK_02b8c29c + 0x2b8bea4));
    func_0x01384978(*(undefined4 *)(_UNK_02b8c2a0 + 0x2b8beb0));
    func_0x01384978(*(undefined4 *)(_UNK_02b8c2a4 + 0x2b8bebc));
    func_0x01384978(*(undefined4 *)(_UNK_02b8c2a8 + 0x2b8bec8));
    func_0x01384978(*(undefined4 *)(_UNK_02b8c2ac + 0x2b8bed4));
    func_0x01384978(*(undefined4 *)(_UNK_02b8c2b0 + 0x2b8bee0));
    func_0x01384978(*(undefined4 *)(_UNK_02b8c2b4 + 0x2b8beec));
    func_0x01384978(*(undefined4 *)(_UNK_02b8c2b8 + 0x2b8bef8));
    func_0x01384978(*(undefined4 *)(_UNK_02b8c2bc + 0x2b8bf04));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x75d4,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02b90750(param_2);
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x84);
      uVar9 = *(uint *)(param_1 + 0x48);
      if (iVar1 == 0) {
        uVar2 = func_0x01384bf0(0);
      }
      iVar1 = *(int *)(iVar1 + 0x20);
      if (param_2 == 0) {
        uVar2 = func_0x01384bf0(uVar2);
      }
      uVar8 = *(undefined4 *)(param_2 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0(uVar2);
      }
      uVar3 = func_0x0364c54c(iVar1,uVar8,**(undefined4 **)(_UNK_02b8c2c0 + 0x2b8bfc8));
      iVar1 = *(int *)(param_2 + 0x14);
      *(uint *)(param_1 + 0x48) = uVar9 | 1 << (uVar3 & 0x1f);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_48,iVar1,**(undefined4 **)(_UNK_02b8c2c4 + 0x2b8c008));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      while (iVar4 = func_0x03f5f428(&uStack_38,**(undefined4 **)(_UNK_02b8c2dc + 0x2b8c02c)),
            iVar1 = iStack_2c, iVar4 != 0) {
        iVar10 = *(int *)(param_1 + 0xf0);
        iVar4 = func_0x01c24918(0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0x40);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar2 = *(undefined4 *)(iVar1 + 8);
        uVar8 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = **(int **)(_UNK_02b8c2c8 + 0x2b8c07c);
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = **(int **)(_UNK_02b8c2cc + 0x2b8c0a0);
        }
        uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x2f4);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar2 = func_0x01cdcbac(iVar4,uVar2,uVar8,uVar7,0,0,0,0x30e,
                                **(undefined4 **)(_UNK_02b8c2d0 + 0x2b8c0c0),
                                **(undefined4 **)(_UNK_02b8c2d4 + 0x2b8c0cc),0);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar10 + 8);
        uVar9 = *(uint *)(iVar10 + 0xc);
        piVar5 = *(int **)(_UNK_02b8c2d8 + 0x2b8c130);
        *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
        iVar4 = *piVar5;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (uVar9 < *(uint *)(iVar1 + 0xc)) {
          *(uint *)(iVar10 + 0xc) = uVar9 + 1;
          *(undefined4 *)(iVar1 + uVar9 * 4 + 0x10) = uVar2;
        }
        else {
          func_0x0328f170(iVar10,uVar2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
        }
      }
      func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_02b8c2e0 + 0x2b8c184));
      iVar1 = *(int *)(param_1 + 0xe8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(param_2 + 8);
      uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02b8c2e8 + 0x2b8c1bc));
      FUN_02b87d00();
      if (iVar1 == iVar4) {
        *(undefined4 *)(param_1 + 0xe8) = uVar2;
      }
      else {
        *(undefined4 *)(param_1 + 0xec) = uVar2;
      }
      func_0x02b904e0(param_1);
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x75d4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021734d8(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.TrainMissionActivity$$_BeginMilestoneReward RVA 0x2b7c2f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b8c2f0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar7 = (char *)(_UNK_02b8c648 + 0x2b8c308);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8c64c + 0x2b8c31c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8c650 + 0x2b8c328));
    func_0x01384978(*(undefined4 *)(_UNK_02b8c654 + 0x2b8c334));
    func_0x01384978(*(undefined4 *)(_UNK_02b8c658 + 0x2b8c340));
    func_0x01384978(*(undefined4 *)(_UNK_02b8c65c + 0x2b8c34c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8c660 + 0x2b8c358));
    func_0x01384978(*(undefined4 *)(_UNK_02b8c664 + 0x2b8c364));
    func_0x01384978(*(undefined4 *)(_UNK_02b8c668 + 0x2b8c370));
    func_0x01384978(*(undefined4 *)(_UNK_02b8c66c + 0x2b8c37c));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x75d6,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b8c670 + 0x2b8c3e0));
    func_0x0328e950(iVar1,**(undefined4 **)(_UNK_02b8c674 + 0x2b8c3f4));
    func_0x02b8cfa4(param_1,iVar1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_48,iVar1,**(undefined4 **)(_UNK_02b8c678 + 0x2b8c428));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar5 = *(undefined4 **)(_UNK_02b8c67c + 0x2b8c444);
    while (iVar2 = func_0x03f5f428(&uStack_38,*puVar5), iVar1 = iStack_2c, iVar2 != 0) {
      iVar2 = FUN_02b8b14c(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (iVar2 == *(int *)(iVar1 + 0x18)) {
        func_0x02b90818(param_1,iVar1);
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
        uVar3 = FUN_02b87720(param_1);
        iVar2 = *(int *)(param_1 + 0x84);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(param_1 + 0xf4);
        uVar10 = *(undefined4 *)(param_1 + 0x70);
        uVar4 = *(undefined4 *)(iVar1 + 0x10);
        uVar6 = *(undefined4 *)(iVar2 + 0x10);
        if (iVar8 == 0) {
          func_0x01384bf0();
          uVar11 = uRam00000008;
          iVar8 = *(int *)(param_1 + 0xf4);
          if (iVar8 == 0) {
            iVar8 = 0;
            func_0x01384bf0();
          }
        }
        else {
          uVar11 = *(undefined4 *)(iVar8 + 8);
        }
        uVar9 = *(undefined4 *)(iVar8 + 0x10);
        if (*(int *)(**(int **)(_UNK_02b8c680 + 0x2b8c500) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar11 = func_0x01a32f1c(**(undefined4 **)(_UNK_02b8c688 + 0x2b8c52c),uVar11,uVar9,
                                 **(undefined4 **)(_UNK_02b8c684 + 0x2b8c520));
        func_0x019b993c(param_1,uVar3,uVar6,uVar4,uVar10,uVar11,*(int *)(iVar1 + 0x18) == 6,
                        *(int *)(param_1 + 0x24) + 1,0);
        puVar5 = *(undefined4 **)(_UNK_02b8c68c + 0x2b8c584);
      }
    }
    func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_02b8c690 + 0x2b8c590));
  }
  else {
    iVar1 = func_0x0229f13c(0x75d6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.TrainMissionActivity$$_FinishChallenge RVA 0x2b7c69c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b8c69c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02b8c88c + 0x2b8c6b4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8c890 + 0x2b8c6c8));
    func_0x01384978(*(undefined4 *)(_UNK_02b8c894 + 0x2b8c6d4));
    func_0x01384978(*(undefined4 *)(_UNK_02b8c898 + 0x2b8c6e0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x75d9,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xe8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 8) == 0) {
      iVar1 = *(int *)(param_1 + 0xec);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 8) == 0) {
        piVar7 = *(int **)(_UNK_02b8c89c + 0x2b8c774);
        uVar5 = *(undefined4 *)(param_1 + 0x40);
        iVar1 = *(int *)(param_1 + 0x44);
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x01384ab4();
        }
        puVar8 = *(undefined4 **)(_UNK_02b8c8a0 + 0x2b8c798);
        iVar3 = func_0x036a1750(uVar5,*puVar8);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0x18);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (iVar1 + 1 < *(int *)(iVar3 + 0xc)) {
          *(undefined1 *)(param_1 + 0x5c) = 1;
        }
        else {
          *(undefined1 *)(param_1 + 0x5d) = 1;
        }
        uVar5 = FUN_02b87720(param_1);
        iVar1 = *(int *)(param_1 + 0x84);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(param_1 + 0x44);
        uVar6 = *(undefined4 *)(iVar1 + 0x10);
        uVar2 = FUN_02b87720(param_1);
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x036a1750(uVar2,*puVar8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x18);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iStack_2c = *(int *)(param_1 + 0x24) + 1;
        uStack_30 = (uint)(*(int *)(iVar1 + 0xc) <= iVar3 + 1);
        uStack_28 = 0;
        func_0x019b9ac4(param_1,uVar5,uVar6);
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x75d9,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  iStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
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



// ===== FAT.TrainMissionActivity.<>c__DisplayClass108_0$$.ctor RVA 0x2b7caac =====

void FUN_02b8caac(void)

{
  return;
}



// ===== FAT.TrainMissionActivity$$EnterNextChallenge RVA 0x2b7cab4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b8cab4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  pcVar4 = (char *)(_UNK_02b8cd34 + 0x2b8cac8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8cd38 + 0x2b8cadc));
    func_0x01384978(*(undefined4 *)(_UNK_02b8cd3c + 0x2b8cae8));
    func_0x01384978(*(undefined4 *)(_UNK_02b8cd40 + 0x2b8caf4));
    func_0x01384978(*(undefined4 *)(_UNK_02b8cd44 + 0x2b8cb00));
    func_0x01384978(*(undefined4 *)(_UNK_02b8cd48 + 0x2b8cb0c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8cd4c + 0x2b8cb18));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x75dd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75dd,0);
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
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b8cd50 + 0x2b8cb70));
  func_0x04874ed4(iVar1,0);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02b8cd54 + 0x2b8cb8c));
  func_0x0328e950(uVar5,**(undefined4 **)(_UNK_02b8cd58 + 0x2b8cba0));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0x10) = uVar5;
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_1 + 0x84);
  iVar3 = *(int *)(iVar3 + 0x50);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar6 + 0x18);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_02b8cd5c + 0x2b8cc08);
  uVar5 = func_0x0364c9b8(iVar6,0,*puVar7);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x01db1884(iVar3,uVar5,0);
  *(undefined4 *)(iVar1 + 8) = uVar5;
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_1 + 0x84);
  iVar3 = *(int *)(iVar3 + 0x50);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar6 + 0x18);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x0364c9b8(iVar6,1,*puVar7);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x01db1884(iVar3,uVar5,0);
  iVar3 = *(int *)(param_1 + 0x88);
  *(undefined4 *)(iVar1 + 0xc) = uVar5;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x02139cf4(iVar3,0);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02b8cd60 + 0x2b8ccd0));
  func_0x03ccb96c(uVar5,iVar1,**(undefined4 **)(_UNK_02b8cd64 + 0x2b8ccec),0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x020dba14(iVar3,uVar5,0);
  FUN_02b8aee0(param_1);
  func_0x02b8cd70(param_1,*(undefined4 *)(iVar1 + 0x10));
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 1;
  return;
}



// ===== FAT.TrainMissionActivity.<>c__DisplayClass109_0$$.ctor RVA 0x2b7cd68 =====

void FUN_02b8cd68(void)

{
  return;
}



// ===== FAT.TrainMissionActivity$$_RefreshNextChallengeItem RVA 0x2b7cd70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b8cd70(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  pcVar3 = (char *)(_UNK_02b8cf20 + 0x2b8cd8c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8cf24 + 0x2b8cda0));
    func_0x01384978(*(undefined4 *)(_UNK_02b8cf28 + 0x2b8cdac));
    func_0x01384978(*(undefined4 *)(_UNK_02b8cf2c + 0x2b8cdb8));
    func_0x01384978(*(undefined4 *)(_UNK_02b8cf30 + 0x2b8cdc4));
    func_0x01384978(*(undefined4 *)(_UNK_02b8cf34 + 0x2b8cdd0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x75e0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75e0,0);
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
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b8cf38 + 0x2b8ce30));
  func_0x03258eb8(iVar1,**(undefined4 **)(_UNK_02b8cf3c + 0x2b8ce44));
  iVar4 = *(int *)(param_1 + 0x84);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar6 = 0;
  func_0x02c052d8(*(undefined4 *)(iVar4 + 0x18),iVar1,1,0);
  puVar7 = *(undefined4 **)(_UNK_02b8cf40 + 0x2b8ce80);
  while( true ) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(param_2 + 0xc) <= iVar6) break;
    iVar4 = *(int *)(param_1 + 0x88);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x02139cf4(iVar4,0);
    uVar5 = func_0x0328eea8(param_2,iVar6,**(undefined4 **)(_UNK_02b8cf44 + 0x2b8cec4));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x03259410(iVar1,iVar6,*puVar7);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x020e7c44(iVar4,uVar5,uVar2,0);
    iVar6 = iVar6 + 1;
  }
  return;
}



// ===== FAT.TrainMissionActivity$$ChangeAnimState RVA 0x2b7cf48 =====

void FUN_02b8cf48(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x75e1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75e1,0);
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
  *(char *)(param_1 + 0x5e) = (char)param_2;
  return;
}



// ===== FAT.TrainMissionActivity$$GetTrainMilestones RVA 0x2b7cfa4 =====

/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b8cfa4(int param_1,int param_2)

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
  
  pcVar9 = (char *)(_UNK_02b8d3ec + 0x2b8cfc0);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8d3f0 + 0x2b8cfd4));
    func_0x01384978(*(undefined4 *)(_UNK_02b8d3f4 + 0x2b8cfe0));
    func_0x01384978(*(undefined4 *)(_UNK_02b8d3f8 + 0x2b8cfec));
    func_0x01384978(*(undefined4 *)(_UNK_02b8d3fc + 0x2b8cff8));
    func_0x01384978(*(undefined4 *)(_UNK_02b8d400 + 0x2b8d004));
    func_0x01384978(*(undefined4 *)(_UNK_02b8d404 + 0x2b8d010));
    func_0x01384978(*(undefined4 *)(_UNK_02b8d408 + 0x2b8d01c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8d40c + 0x2b8d028));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x75d7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75d7,0);
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
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    uVar8 = func_0x0245495c(iVar7,uVar8,&uStack_38,uVar5,0,0);
    return uVar8;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  if (0 < iVar1) {
    func_0x0484e5ec(*(undefined4 *)(param_2 + 8),0,iVar1,0);
  }
  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_02b8d410 + 0x2b8d0e4));
  piVar10 = *(int **)(_UNK_02b8d414 + 0x2b8d0fc);
  piVar11 = *(int **)(_UNK_02b8d418 + 0x2b8d104);
LAB_02b8d100:
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
        goto LAB_02b8d15c;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_02b8d15c:
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
        if (piVar6[-1] == **(int **)(_UNK_02b8d41c + 0x2b8d190)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_02b8d1d8;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02b8d41c + 0x2b8d190),0);
LAB_02b8d1d8:
    uVar8 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (*(int *)(**(int **)(_UNK_02b8d420 + 0x2b8d1f8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar8 = func_0x036a1750(uVar8,**(undefined4 **)(_UNK_02b8d424 + 0x2b8d214));
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 8);
    uVar4 = *(uint *)(param_2 + 0xc);
    iVar7 = *piVar11;
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (uVar4 < *(uint *)(iVar1 + 0xc)) {
      *(uint *)(param_2 + 0xc) = uVar4 + 1;
      *(undefined4 *)(iVar1 + uVar4 * 4 + 0x10) = uVar8;
    }
    else {
      func_0x0328f170(param_2,uVar8,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38))
      ;
    }
    goto LAB_02b8d100;
  }
  uVar8 = 0;
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_02b8d428 + 0x2b8d2a8)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
          goto LAB_02b8d2f0;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02b8d428 + 0x2b8d2a8),0);
LAB_02b8d2f0:
    uVar8 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  return uVar8;
}



// ===== FAT.TrainMissionActivity$$GetOrderWaitCommitReward RVA 0x2b7d430 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b8d430(int param_1)

{
  int iVar1;
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
  
  pcVar5 = (char *)(_UNK_02b8d560 + 0x2b8d444);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8d564 + 0x2b8d458));
    func_0x01384978(*(undefined4 *)(_UNK_02b8d568 + 0x2b8d464));
    func_0x01384978(*(undefined4 *)(_UNK_02b8d56c + 0x2b8d470));
    func_0x01384978(*(undefined4 *)(_UNK_02b8d570 + 0x2b8d47c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x75e2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75e2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_021cb2a0 + 0x21cb1c0);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021cb2a4 + 0x21cb1d4),param_1,0);
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
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021cb2a8 + 0x21cb290));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b8d574 + 0x2b8d4d4));
  func_0x0328e950(iVar1,**(undefined4 **)(_UNK_02b8d578 + 0x2b8d4e8));
  uVar6 = *(undefined4 *)(param_1 + 0xf0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0328f380(iVar1,uVar6,**(undefined4 **)(_UNK_02b8d57c + 0x2b8d510));
  iVar4 = *(int *)(param_1 + 0xf0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar4 + 0xc);
  *(undefined4 *)(iVar4 + 0xc) = 0;
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  if (0 < iVar2) {
    func_0x0484e5ec(*(undefined4 *)(iVar4 + 8),0,iVar2,0);
  }
  return iVar1;
}



// ===== FAT.TrainMissionActivity$$GetMilestoneWaitCommitReward RVA 0x2b7d580 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b8d580(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x75e3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75e3,0);
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
  uVar5 = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0xf4) = 0;
  return uVar5;
}



// ===== FAT.TrainMissionActivity$$GetRecycleReward RVA 0x2b7d5dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b8d5dc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x75e4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75e4,0);
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
  uVar5 = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  return uVar5;
}



// ===== FAT.TrainMissionActivity$$PutItem RVA 0x2b7d638 =====

/* WARNING: Removing unreachable block (ram,0x02b8da8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b8d638(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_02b8dc80 + 0x2b8d654);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8dc84 + 0x2b8d668));
    func_0x01384978(*(undefined4 *)(_UNK_02b8dc88 + 0x2b8d674));
    func_0x01384978(*(undefined4 *)(_UNK_02b8dc8c + 0x2b8d680));
    func_0x01384978(*(undefined4 *)(_UNK_02b8dc90 + 0x2b8d68c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8dc94 + 0x2b8d698));
    func_0x01384978(*(undefined4 *)(_UNK_02b8dc98 + 0x2b8d6a4));
    *pcVar10 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x75e5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75e5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021734d8(iVar1,param_1,param_2,0);
    return uVar2;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x02feb690(param_2,&iStack_28,0,**(undefined4 **)(_UNK_02b8dc9c + 0x2b8d720));
  iVar1 = iStack_28;
  if (iVar3 != 0) {
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0211d880(iVar1,0);
    if ((iStack_28 != 0 && iVar1 != 0) && (iVar1 = func_0x0211dc48(iStack_28,0), iVar1 != 0)) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0210cd28(param_2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x020e6d84(iVar1,param_2,0);
      return 1;
    }
  }
  iVar1 = func_0x021697d8(param_2,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar1 + 0x10);
    iVar11 = **(int **)(_UNK_02b8dca0 + 0x2b8d944);
    iVar1 = *(int *)(iVar11 + 0x1c);
    if (iVar1 == 0) {
      func_0x0140024c(iVar11);
      iVar1 = *(int *)(iVar11 + 0x1c);
    }
    iVar1 = *(int *)(iVar1 + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0();
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = *(int *)(*(int *)(iVar11 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0();
    }
    uVar2 = **(undefined4 **)(iVar1 + 0x5c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 0x18;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x84);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar4 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_02b8dca4 + 0x2b8d7a4));
    piVar12 = *(int **)(_UNK_02b8dca8 + 0x2b8d7c0);
    piVar13 = *(int **)(_UNK_02b8dcac + 0x2b8d7c8);
    do {
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar4;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == *piVar12) {
            puVar5 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_02b8d820;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar12,0);
LAB_02b8d820:
      iVar1 = (*(code *)*puVar5)(piVar4,puVar5[1]);
      if (iVar1 == 0) {
        uVar7 = 8;
        goto LAB_02b8d9c4;
      }
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar4;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == *piVar13) {
            puVar5 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_02b8d894;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar13,0);
LAB_02b8d894:
      iVar1 = (*(code *)*puVar5)(piVar4,puVar5[1]);
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x50);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x0210e2d4(param_2,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01dd0230(iVar3,uVar2,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
    } while (*(int *)(iVar3 + 0x10) != iVar1);
    uVar7 = 7;
LAB_02b8d9c4:
    if (piVar4 != (int *)0x0) {
      iVar1 = *piVar4;
      uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar12[-1] == **(int **)(_UNK_02b8dcb0 + 0x2b8d9dc)) {
            puVar5 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
            goto LAB_02b8da74;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_02b8dcb0 + 0x2b8d9dc),0);
LAB_02b8da74:
      (*(code *)*puVar5)(piVar4,puVar5[1]);
    }
    if ((uVar7 | 8) != 8) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x88);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02139cf4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x020e82b4(iVar1,param_2,0);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar1 + 0x10);
    iVar11 = **(int **)(_UNK_02b8dcb4 + 0x2b8db10);
    iVar1 = *(int *)(iVar11 + 0x1c);
    if (iVar1 == 0) {
      func_0x0140024c(iVar11);
      iVar1 = *(int *)(iVar11 + 0x1c);
    }
    iVar1 = *(int *)(iVar1 + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0();
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = *(int *)(*(int *)(iVar11 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0();
    }
    uVar2 = **(undefined4 **)(iVar1 + 0x5c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 0x17;
  }
  func_0x01ca1c50(iVar3,uVar6,uVar2,0);
  return 0;
}



// ===== FAT.TrainMissionActivity$$PeekItem RVA 0x2b7dcbc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b8dcbc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uStack_30;
  int iStack_2c;
  int aiStack_28 [2];
  undefined4 uStack_20;
  
  iVar7 = func_0x0229f06c(0x75ef,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0x75ef,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar8 = func_0x0217a5ac(iVar7,param_1,param_2,param_3);
    return uVar8;
  }
  iVar7 = *(int *)(param_1 + 0x88);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = func_0x02139cf4(iVar7,0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_020e8a8c + 0x20e8744);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e8a90 + 0x20e8758),param_2,param_3,0);
    func_0x01384978(*(undefined4 *)(_UNK_020e8a94 + 0x20e8764));
    func_0x01384978(*(undefined4 *)(_UNK_020e8a98 + 0x20e8770));
    func_0x01384978(*(undefined4 *)(_UNK_020e8a9c + 0x20e877c));
    *pcVar9 = '\x01';
  }
  aiStack_28[0] = 0;
  iStack_2c = 0;
  iVar2 = func_0x0229f06c(0x1496,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar7 + 0x98);
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
      uVar8 = func_0x01384abc(**(undefined4 **)(_UNK_020e8aa0 + 0x20e8a08),&uStack_30);
      puVar6 = *(undefined4 **)(_UNK_020e8aa4 + 0x20e8a20);
    }
    else {
      iVar10 = *(int *)(iVar7 + 0x90) / 2;
      iVar1 = *(int *)(iVar7 + 0x8c) / 2;
      iStack_2c = iVar1;
      aiStack_28[0] = iVar10;
      uVar8 = func_0x0210e2d4(iVar4,0);
      uVar5 = func_0x020defc4(iVar7,iVar1,iVar10,uVar8,0,0,0,0);
      func_0x020df144(iVar7,uVar5,&iStack_2c,aiStack_28);
      if (-1 < (int)uVar5) {
        iVar10 = *(int *)(iVar7 + 0x80);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar5) {
          func_0x01384bf4();
        }
        func_0x02117440(iVar4,iVar7,*(undefined4 *)(iVar10 + uVar5 * 4 + 0x10),0);
        func_0x020e8ab4(iVar7,iVar4,0xffffffff,uVar5,iStack_2c,aiStack_28[0],0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x02141880(iVar2,0);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x02114c08(iVar10,param_2,param_3,0);
        iVar10 = *(int *)(iVar7 + 0x38);
        if (iVar10 != 0) {
          (**(code **)(iVar10 + 0xc))
                    (*(undefined4 *)(iVar10 + 0x20),iVar4,*(undefined4 *)(iVar10 + 0x14));
        }
        iVar7 = *(int *)(iVar7 + 0x68);
        if (iVar7 != 0) {
          (**(code **)(iVar7 + 0xc))
                    (*(undefined4 *)(iVar7 + 0x20),iVar4,*(undefined4 *)(iVar7 + 0x14));
        }
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x02148ef8(iVar2,iVar4,3,0);
        uVar8 = func_0x0210e2d4(iVar4,0);
        func_0x019a617c(param_3,uVar8,0,0);
        iVar7 = func_0x01c24918(0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar7 = *(int *)(iVar7 + 0x74);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x01c8f2dc(iVar7,0);
        return 1;
      }
      uVar8 = func_0x01384abc(**(undefined4 **)(_UNK_020e8aac + 0x20e8a30),&uStack_30);
      puVar6 = *(undefined4 **)(_UNK_020e8ab0 + 0x20e8a48);
    }
    uVar3 = 0;
    uVar8 = func_0x0244f6a0(*puVar6,uVar8,0);
    if (*(int *)(**(int **)(_UNK_020e8aa8 + 0x20e8a64) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar8,0);
  }
  else {
    iVar2 = func_0x0229f13c(0x1496,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0217a5ac(iVar2,iVar7,param_2,param_3,0);
  }
  return uVar3;
}



// ===== FAT.TrainMissionActivity$$FinishRoundDebug RVA 0x2b7dd6c =====

void FUN_02b8dd6c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x75f0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75f0,0);
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
  *(undefined1 *)(param_1 + 0x5d) = 1;
  return;
}



// ===== FAT.TrainMissionActivity$$FinishRound RVA 0x2b7ddc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b8ddc4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02b8e504 + 0x2b8dddc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8e508 + 0x2b8ddf0));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e50c + 0x2b8ddfc));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e510 + 0x2b8de08));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e514 + 0x2b8de14));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e518 + 0x2b8de20));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e51c + 0x2b8de2c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e520 + 0x2b8de38));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e524 + 0x2b8de44));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e528 + 0x2b8de50));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e52c + 0x2b8de5c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e530 + 0x2b8de68));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e534 + 0x2b8de74));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e538 + 0x2b8de80));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e53c + 0x2b8de8c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e540 + 0x2b8de98));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e544 + 0x2b8dea4));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e548 + 0x2b8deb0));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e54c + 0x2b8debc));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e550 + 0x2b8dec8));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e554 + 0x2b8ded4));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e558 + 0x2b8dee0));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e55c + 0x2b8deec));
    func_0x01384978(*(undefined4 *)(_UNK_02b8e560 + 0x2b8def8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7592,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7592,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_0224fab4 + 0x224f9d4);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0224fab8 + 0x224f9e8),param_1,0);
      *pcVar6 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_30 = 0;
    func_0x0245494c(&iStack_48,0);
    iStack_30 = iStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar9,&iStack_30,uVar2,0,0);
    uVar9 = func_0x02f5db90(&iStack_30,0,**(undefined4 **)(_UNK_0224fabc + 0x224faa4));
    return uVar9;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b8e564 + 0x2b8df54));
  func_0x04874ed4(iVar1,0);
  puVar10 = *(undefined4 **)(_UNK_02b8e568 + 0x2b8df74);
  uVar9 = func_0x01384be4(*puVar10);
  puVar12 = *(undefined4 **)(_UNK_02b8e56c + 0x2b8df88);
  func_0x0328e950(uVar9,*puVar12);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *puVar10;
  *(undefined4 *)(iVar1 + 0x10) = uVar9;
  uVar9 = func_0x01384be4(uVar2);
  func_0x0328e950(uVar9,*puVar12);
  *(undefined4 *)(iVar1 + 0x14) = uVar9;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  iVar5 = func_0x01c24918(0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_1 + 0x84);
  iVar5 = *(int *)(iVar5 + 0x50);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x18);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  puVar10 = *(undefined4 **)(_UNK_02b8e570 + 0x2b8e008);
  uVar9 = func_0x0364c9b8(iVar3,0,*puVar10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar9 = func_0x01db1884(iVar5,uVar9,0);
  *(undefined4 *)(iVar1 + 8) = uVar9;
  iVar5 = func_0x01c24918(0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_1 + 0x84);
  iVar5 = *(int *)(iVar5 + 0x50);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x18);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar9 = func_0x0364c9b8(iVar3,1,*puVar10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar9 = func_0x01db1884(iVar5,uVar9,0);
  iVar5 = *(int *)(param_1 + 0x88);
  *(undefined4 *)(iVar1 + 0xc) = uVar9;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02139cf4(iVar5,0);
  puVar10 = *(undefined4 **)(_UNK_02b8e574 + 0x2b8e0cc);
  uVar9 = func_0x01384be4(*puVar10);
  func_0x03ccb96c(uVar9,iVar1,**(undefined4 **)(_UNK_02b8e578 + 0x2b8e0e8),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x020dba14(iVar5,uVar9,0);
  iVar5 = *(int *)(param_1 + 0x88);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02141880(iVar5,0);
  uVar9 = func_0x01384be4(*puVar10);
  func_0x03ccb96c(uVar9,iVar1,**(undefined4 **)(_UNK_02b8e57c + 0x2b8e14c),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar3 = 0;
  func_0x021131f8(iVar5,uVar9,0);
  if (0 < *(int *)(iVar1 + 0x18)) {
    puVar10 = *(undefined4 **)(_UNK_02b8e580 + 0x2b8e190);
    piVar4 = *(int **)(_UNK_02b8e584 + 0x2b8e198);
    do {
      iVar5 = *(int *)(param_1 + 0x80);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0x20);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar5 + 0xc) <= iVar3) goto LAB_02b8e2dc;
      iVar5 = *(int *)(param_1 + 0x80);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0x20);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar9 = func_0x03653d1c(iVar5,iVar3,*puVar10);
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02566088(&iStack_30,uVar9,0);
      iVar3 = iVar3 + 1;
    } while (iStack_30 < *(int *)(iVar1 + 0x18));
    iVar5 = func_0x01c24918(0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    piVar4 = *(int **)(_UNK_02b8e588 + 0x2b8e258);
    iVar3 = *(int *)(iVar5 + 0x40);
    iVar5 = *piVar4;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4();
      iVar5 = *piVar4;
    }
    uVar9 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x2fc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iStack_48 = **(int **)(_UNK_02b8e58c + 0x2b8e298);
    uStack_44 = **(undefined4 **)(_UNK_02b8e590 + 0x2b8e2a4);
    uStack_40 = 0;
    uVar9 = func_0x01cdcbac(iVar3,uStack_2c,uStack_28,uVar9,0,0,0,0x212);
    *(undefined4 *)(param_1 + 0xf8) = uVar9;
    *(undefined1 *)(param_1 + 0xfd) = 1;
  }
LAB_02b8e2dc:
  iVar3 = *(int *)(param_1 + 0x7c);
  iVar5 = *(int *)(param_1 + 0x24) + 1;
  *(int *)(param_1 + 0x24) = iVar5;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x14);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  if (iVar5 < *(int *)(iVar3 + 0xc)) {
    *(undefined1 *)(param_1 + 0xfc) = 1;
    func_0x02b8e5c0(param_1);
  }
  else {
    iVar5 = func_0x01c24918(0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0xd8);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x02b49350(iVar5,param_1,0,0);
    uStack_34 = FUN_02b87720(param_1);
    iVar5 = *(int *)(param_1 + 0x84);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    piVar4 = *(int **)(_UNK_02b8e594 + 0x2b8e38c);
    uStack_38 = *(undefined4 *)(param_1 + 0x74);
    uVar9 = *(undefined4 *)(iVar1 + 0x14);
    iVar3 = *piVar4;
    uVar2 = *(undefined4 *)(iVar5 + 0x10);
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar4;
    }
    iVar5 = *(int *)(*(int *)(iVar3 + 0x5c) + 8);
    if (iVar5 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar4;
      }
      uVar7 = **(undefined4 **)(iVar3 + 0x5c);
      iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02b8e598 + 0x2b8e3e4));
      func_0x041cf844(iVar5,uVar7,**(undefined4 **)(_UNK_02b8e59c + 0x2b8e404),0);
      *(int *)(*(int *)(*piVar4 + 0x5c) + 8) = iVar5;
    }
    uVar9 = func_0x02faabc8(uVar9,iVar5,**(undefined4 **)(_UNK_02b8e5a0 + 0x2b8e428));
    piVar4 = *(int **)(_UNK_02b8e5a4 + 0x2b8e440);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar9 = func_0x030e63ac(0x2c,uVar9,**(undefined4 **)(_UNK_02b8e5a8 + 0x2b8e460));
    iVar5 = *(int *)(param_1 + 0xf8);
    uVar13 = *(undefined4 *)(param_1 + 0x24);
    uVar7 = *(undefined4 *)(iVar1 + 0x18);
    if (iVar5 == 0) {
      uVar8 = **(undefined4 **)(_UNK_02b8e5b4 + 0x2b8e4d0);
    }
    else {
      uVar8 = *(undefined4 *)(iVar5 + 8);
      uVar11 = *(undefined4 *)(iVar5 + 0x10);
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar8 = func_0x01a32f1c(**(undefined4 **)(_UNK_02b8e5b0 + 0x2b8e4bc),uVar8,uVar11,
                              **(undefined4 **)(_UNK_02b8e5ac + 0x2b8e4b0));
    }
    iStack_48 = 0;
    func_0x019b9c28(param_1,uStack_34,uVar2,uStack_38,uVar9,uVar7,uVar13,uVar8);
  }
  return *(undefined4 *)(iVar1 + 0x10);
}



// ===== FAT.TrainMissionActivity.<>c__DisplayClass118_0$$.ctor RVA 0x2b7e5b8 =====

void FUN_02b8e5b8(void)

{
  return;
}



// ===== FAT.TrainMissionActivity$$_EnterNextRound RVA 0x2b7e5c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b8e5c0(int *param_1)

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
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0x7596,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7596,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
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
    func_0x0245495c(iVar3,uVar6,&uStack_30,uVar2);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar1 + 0x4c);
  iVar1 = param_1[0x22];
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbc0ec(iVar3,iVar1,0);
  (**(code **)(*param_1 + 0x1a0))(param_1,*(undefined4 *)(*param_1 + 0x1a4));
  *(undefined1 *)((int)param_1 + 0x5d) = 0;
  iVar1 = param_1[9] + 1;
  pcVar5 = (char *)(_UNK_019b9ec8 + 0x19b9dcc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019b9ecc + 0x19b9de0),iVar1,0);
    func_0x01384978(*(undefined4 *)(_UNK_019b9ed0 + 0x19b9dec));
    *pcVar5 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xa01,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xa01,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,iVar1,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,iVar1,0);
    iVar4 = *(int *)(iVar3 + 8);
    uVar6 = *(undefined4 *)(iVar3 + 0xc);
    iVar1 = *(int *)(iVar3 + 0x10);
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
  if (*(int *)(**(int **)(_UNK_019b9ed4 + 0x19b9e4c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar3 = func_0x02f74dec(**(undefined4 **)(_UNK_019b9ed8 + 0x19b9e68));
  if (param_1 == (int *)0x0) {
    func_0x01384bf0();
  }
  FUN_02b489c0(&uStack_24,param_1,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar3 + 0x48) = uStack_24;
  *(undefined4 *)(iVar3 + 0x4c) = uStack_20;
  *(undefined4 *)(iVar3 + 0x50) = uStack_1c;
  *(int *)(iVar3 + 0x54) = iVar1;
  func_0x019930d8(iVar3,0,0);
  return;
}



// ===== FAT.TrainMissionActivity$$GetTotalRewardPreview RVA 0x2b7e67c =====

/* WARNING: Removing unreachable block (ram,0x02b8ef5c) */
/* WARNING: Removing unreachable block (ram,0x02b8f52c) */
/* WARNING: Removing unreachable block (ram,0x02b8ef68) */
/* WARNING: Removing unreachable block (ram,0x02b8ef70) */
/* WARNING: Removing unreachable block (ram,0x02b8f04c) */
/* WARNING: Removing unreachable block (ram,0x02b8f33c) */
/* WARNING: Removing unreachable block (ram,0x02b8f058) */
/* WARNING: Removing unreachable block (ram,0x02b8f348) */
/* WARNING: Removing unreachable block (ram,0x02b8f350) */
/* WARNING: Removing unreachable block (ram,0x02b8f53c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b8e67c(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar11 = (char *)(_UNK_02b8f674 + 0x2b8e694);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8f698 + 0x2b8e6a8));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f69c + 0x2b8e6b4));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f6a0 + 0x2b8e6c0));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f6a4 + 0x2b8e6cc));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f6a8 + 0x2b8e6d8));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f6ac + 0x2b8e6e4));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f6b0 + 0x2b8e6f0));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f6b4 + 0x2b8e6fc));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f6b8 + 0x2b8e708));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f6bc + 0x2b8e714));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f6c0 + 0x2b8e720));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f724 + 0x2b8e72c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f728 + 0x2b8e738));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f72c + 0x2b8e744));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f730 + 0x2b8e750));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f734 + 0x2b8e75c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f738 + 0x2b8e768));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f73c + 0x2b8e774));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f740 + 0x2b8e780));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f744 + 0x2b8e78c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f748 + 0x2b8e798));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f74c + 0x2b8e7a4));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f750 + 0x2b8e7b0));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f7b0 + 0x2b8e7bc));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f7b4 + 0x2b8e7c8));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f7b8 + 0x2b8e7d4));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f7bc + 0x2b8e7e0));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f7c0 + 0x2b8e7ec));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f7c4 + 0x2b8e7f8));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f7fc + 0x2b8e804));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f800 + 0x2b8e810));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f804 + 0x2b8e81c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f808 + 0x2b8e828));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f80c + 0x2b8e834));
    func_0x01384978(*(undefined4 *)(_UNK_02b8f810 + 0x2b8e840));
    *pcVar11 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x75f1,0);
  if (iVar1 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02b8f8a0 + 0x2b8e8b8));
    func_0x03d59324(iVar2,**(undefined4 **)(_UNK_02b8f8a4 + 0x2b8e8cc));
    uVar9 = *(undefined4 *)(param_1 + 0x40);
    if (*(int *)(**(int **)(_UNK_02b8f8d0 + 0x2b8e8e0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x036a1750(uVar9,**(undefined4 **)(_UNK_02b8f8e0 + 0x2b8e900));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_02b8f8e4 + 0x2b8e934));
    piVar14 = *(int **)(_UNK_02b8f8e8 + 0x2b8e94c);
LAB_02b8e948:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar14) {
          puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_02b8e9b0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar14,0);
LAB_02b8e9b0:
    iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar1 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_02b8f9c8 + 0x2b8e9e4)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_02b8ea34;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02b8f9c8 + 0x2b8e9e4),0);
LAB_02b8ea34:
      uVar9 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (*(int *)(**(int **)(_UNK_02b8fa0c + 0x2b8ea54) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x036a1750(uVar9,**(undefined4 **)(_UNK_02b8fa10 + 0x2b8ea70));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(iVar1 + 0x20);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      piVar6 = (int *)func_0x0364c2b4(iVar10,**(undefined4 **)(_UNK_02b8fa14 + 0x2b8eaa8));
LAB_02b8eab4:
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar10 = *piVar6;
      uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar14) {
            puVar4 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
            goto LAB_02b8eb10;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar6,*piVar14,0);
LAB_02b8eb10:
      iVar10 = (*(code *)*puVar4)(piVar6,puVar4[1]);
      if (iVar10 != 0) {
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar10 = *piVar6;
        uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_02b8fa18 + 0x2b8eb4c)) {
              puVar4 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
              goto LAB_02b8eb94;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02b8fa18 + 0x2b8eb4c),0);
LAB_02b8eb94:
        uVar9 = (*(code *)*puVar4)(piVar6,puVar4[1]);
        if (*(int *)(**(int **)(_UNK_02b8fa1c + 0x2b8ebb4) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar10 = func_0x036a1750(uVar9,**(undefined4 **)(_UNK_02b8fa20 + 0x2b8ebd0));
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar9 = *(undefined4 *)(iVar10 + 0x1c);
        iVar10 = **(int **)(_UNK_02b8fa24 + 0x2b8ebf4);
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x01384ab4(iVar10);
          iVar10 = **(int **)(_UNK_02b8fa28 + 0x2b8ec18);
        }
        iVar12 = *(int *)(*(int *)(iVar10 + 0x5c) + 0xc);
        if (iVar12 == 0) {
          if (*(int *)(iVar10 + 0x74) == 0) {
            func_0x01384ab4(iVar10);
            iVar10 = **(int **)(_UNK_02b8fa2c + 0x2b8ec48);
          }
          uVar13 = **(undefined4 **)(iVar10 + 0x5c);
          iVar12 = func_0x01384be4(**(undefined4 **)(_UNK_02b8fa30 + 0x2b8ec5c));
          func_0x041cfbf8(iVar12,uVar13,**(undefined4 **)(_UNK_02b8fa34 + 0x2b8ec70),0);
          *(int *)(*(int *)(**(int **)(_UNK_02b8fa38 + 0x2b8ec8c) + 0x5c) + 0xc) = iVar12;
        }
        piVar7 = (int *)func_0x02fab288(uVar9,iVar12,**(undefined4 **)(_UNK_02b8fa3c + 0x2b8eca0));
        if (piVar7 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar10 = *piVar7;
        uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
          do {
            if (piVar8[-1] == **(int **)(_UNK_02b8fa40 + 0x2b8eccc)) {
              puVar4 = (undefined4 *)(iVar10 + *piVar8 * 8 + 0xc0);
              goto LAB_02b8ed14;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02b8fa40 + 0x2b8eccc),0);
LAB_02b8ed14:
        piVar7 = (int *)(*(code *)*puVar4)(piVar7,puVar4[1]);
LAB_02b8ed28:
        if (piVar7 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar10 = *piVar7;
        uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar14) {
              puVar4 = (undefined4 *)(iVar10 + *piVar8 * 8 + 0xc0);
              goto LAB_02b8ed84;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar7,*piVar14,0);
LAB_02b8ed84:
        iVar10 = (*(code *)*puVar4)(piVar7,puVar4[1]);
        if (iVar10 != 0) {
          if (piVar7 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar10 = *piVar7;
          uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
          if (uVar5 != 0) {
            piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
            do {
              if (piVar8[-1] == **(int **)(_UNK_02b8fa44 + 0x2b8edb8)) {
                puVar4 = (undefined4 *)(iVar10 + *piVar8 * 8 + 0xc0);
                goto LAB_02b8ee00;
              }
              uVar5 = uVar5 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02b8fa44 + 0x2b8edb8),0);
LAB_02b8ee00:
          iVar10 = (*(code *)*puVar4)(piVar7,puVar4[1]);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          uVar9 = *(undefined4 *)(iVar10 + 8);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar12 = func_0x03d59fc8(iVar2,uVar9,**(undefined4 **)(_UNK_02b8fa48 + 0x2b8ee3c));
          uVar9 = *(undefined4 *)(iVar10 + 8);
          if (iVar12 == 0) {
            uVar13 = *(undefined4 *)(iVar10 + 0xc);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x03d59d7c(iVar2,uVar9,uVar13,**(undefined4 **)(_UNK_02b8fa54 + 0x2b8eec8));
          }
          else {
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar12 = func_0x03d59cc4(iVar2,uVar9,**(undefined4 **)(_UNK_02b8fa4c + 0x2b8ee6c));
            iVar10 = *(int *)(iVar10 + 0xc);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x03d59d54(iVar2,uVar9,iVar10 + iVar12,**(undefined4 **)(_UNK_02b8fa50 + 0x2b8ee9c)
                           );
          }
          goto LAB_02b8ed28;
        }
        if (piVar7 != (int *)0x0) {
          iVar10 = *piVar7;
          uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
          if (uVar5 != 0) {
            piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
            do {
              if (piVar8[-1] == **(int **)(_UNK_02b8fa58 + 0x2b8eefc)) {
                puVar4 = (undefined4 *)(iVar10 + *piVar8 * 8 + 0xc0);
                goto LAB_02b8ef44;
              }
              uVar5 = uVar5 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_02b8fa58 + 0x2b8eefc),0);
LAB_02b8ef44:
          (*(code *)*puVar4)(piVar7,puVar4[1]);
        }
        goto LAB_02b8eab4;
      }
      if (piVar6 != (int *)0x0) {
        iVar10 = *piVar6;
        uVar5 = (uint)*(ushort *)(iVar10 + 0xb6);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_02b8fa60 + 0x2b8efe8)) {
              puVar4 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
              goto LAB_02b8f030;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02b8fa60 + 0x2b8efe8),0);
LAB_02b8f030:
        (*(code *)*puVar4)(piVar6,puVar4[1]);
      }
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar6 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_02b8fa64 + 0x2b8f08c));
LAB_02b8f098:
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar6;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar14) {
            puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
            goto LAB_02b8f0f4;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar6,*piVar14,0);
LAB_02b8f0f4:
      iVar1 = (*(code *)*puVar4)(piVar6,puVar4[1]);
      if (iVar1 != 0) {
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar6;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_02b8fa6c + 0x2b8f128)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_02b8f170;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02b8fa6c + 0x2b8f128),0);
LAB_02b8f170:
        uVar9 = (*(code *)*puVar4)(piVar6,puVar4[1]);
        if (*(int *)(**(int **)(_UNK_02b8fa70 + 0x2b8f190) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x036a1750(uVar9,**(undefined4 **)(_UNK_02b8fa74 + 0x2b8f1ac));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar9 = *(undefined4 *)(iVar1 + 0x1c);
        if (*(int *)(**(int **)(_UNK_02b8fa78 + 0x2b8f1d0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x02565a88(uVar9,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar9 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x03d59fc8(iVar2,uVar9,**(undefined4 **)(_UNK_02b8fa7c + 0x2b8f21c));
        uVar9 = *(undefined4 *)(iVar1 + 8);
        if (iVar10 == 0) {
          uVar13 = *(undefined4 *)(iVar1 + 0xc);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x03d59d7c(iVar2,uVar9,uVar13,**(undefined4 **)(_UNK_02b8fa88 + 0x2b8f2a8));
        }
        else {
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar10 = func_0x03d59cc4(iVar2,uVar9,**(undefined4 **)(_UNK_02b8fa80 + 0x2b8f24c));
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x03d59d54(iVar2,uVar9,iVar1 + iVar10,**(undefined4 **)(_UNK_02b8fa84 + 0x2b8f27c));
        }
        goto LAB_02b8f098;
      }
      if (piVar6 != (int *)0x0) {
        iVar1 = *piVar6;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_02b8fa8c + 0x2b8f2dc)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_02b8f324;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02b8fa8c + 0x2b8f2dc),0);
LAB_02b8f324:
        (*(code *)*puVar4)(piVar6,puVar4[1]);
      }
      goto LAB_02b8e948;
    }
    if (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar14 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar14[-1] == **(int **)(_UNK_02b8fa94 + 0x2b8f4c4)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar14 * 8 + 0xc0);
            goto LAB_02b8f514;
          }
          uVar5 = uVar5 - 1;
          piVar14 = piVar14 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02b8fa94 + 0x2b8f4c4),0);
LAB_02b8f514:
      (*(code *)*puVar4)(piVar3,puVar4[1]);
    }
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b8fa98 + 0x2b8f550));
    func_0x0328e950(iVar1,**(undefined4 **)(_UNK_02b8fa9c + 0x2b8f564));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_58,iVar2,**(undefined4 **)(_UNK_02b8faa0 + 0x2b8f58c));
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    puVar4 = *(undefined4 **)(_UNK_02b8faa4 + 0x2b8f5b8);
    piVar3 = *(int **)(_UNK_02b8faa8 + 0x2b8f5c0);
    while (iVar2 = func_0x03f9975c(&uStack_40,*puVar4), uVar9 = uStack_34, iVar2 != 0) {
      uVar13 = (undefined4)uStack_30;
      iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02b8fab0 + 0x2b8f5e4));
      FUN_028ba15c(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar2 + 8) = uVar9;
      *(undefined4 *)(iVar2 + 0xc) = uVar13;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(iVar1 + 8);
      uVar5 = *(uint *)(iVar1 + 0xc);
      iVar12 = *piVar3;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      if (uVar5 < *(uint *)(iVar10 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar5 + 1;
        *(int *)(iVar10 + uVar5 * 4 + 0x10) = iVar2;
      }
      else {
        func_0x0328f170(iVar1,iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38)
                       );
      }
    }
    func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_02b8fab4 + 0x2b8f684));
  }
  else {
    iVar1 = func_0x0229f13c(0x75f1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0218d2e8(iVar1,param_1,0);
  }
  return iVar1;
}



// ===== FAT.TrainMissionActivity$$_CreateWorld RVA 0x2b7fac0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b8fac0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 unaff_r5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
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
  
  pcVar6 = (char *)(_UNK_02b8fc44 + 0x2b8fad4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8fc48 + 0x2b8fae8));
    func_0x01384978(*(undefined4 *)(_UNK_02b8fc4c + 0x2b8faf4));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7551,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7551,0);
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
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar4);
    return;
  }
  uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_02b8fc50 + 0x2b8fb4c));
  func_0x02143488(uVar7,0);
  iVar2 = *(int *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x88) = uVar7;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar2 + 0x34) == '\0') {
    iVar2 = *(int *)(param_1 + 0x88);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02143dc4(iVar2,0);
  }
  iVar2 = *(int *)(param_1 + 0x80);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar2 + 0x35) == '\0') {
    iVar2 = *(int *)(param_1 + 0x88);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x021440e4(iVar2,0);
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar2 + 0x4c);
  iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02b8fc54 + 0x2b8fbf4));
  func_0x01db7f44(iVar2,0);
  uVar7 = *(undefined4 *)(param_1 + 0x88);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar2 + 8) = 9;
  *(undefined4 *)(iVar2 + 0xc) = uVar7;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_01db80d4 + 0x1db7f64);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db80d8 + 0x1db7f78),iVar2,0);
    func_0x01384978(*(undefined4 *)(_UNK_01db80dc + 0x1db7f84));
    func_0x01384978(*(undefined4 *)(_UNK_01db80e0 + 0x1db7f90));
    func_0x01384978(*(undefined4 *)(_UNK_01db80e4 + 0x1db7f9c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5baa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5baa,0);
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
    func_0x0245494c(&uStack_50,0,iVar2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar5,0);
    func_0x01485278(&uStack_38,iVar2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbc0ec(iVar5,*(undefined4 *)(iVar2 + 0xc));
  iVar5 = *(int *)(iVar5 + 0x18);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar5 + 8);
  uVar8 = *(uint *)(iVar5 + 0xc);
  piVar3 = *(int **)(_UNK_01db80e8 + 0x1db8034);
  *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
  iVar9 = *piVar3;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (uVar8 < *(uint *)(iVar1 + 0xc)) {
    *(uint *)(iVar5 + 0xc) = uVar8 + 1;
    *(int *)(iVar1 + uVar8 * 4 + 0x10) = iVar2;
  }
  else {
    func_0x0328f170(iVar5,iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
  }
  if (*(int *)(**(int **)(_UNK_01db80ec + 0x1db8084) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar5 = func_0x0300d558(**(undefined4 **)(_UNK_01db80f0 + 0x1db80a0));
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar5 + 8);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),uVar7,*(undefined4 *)(iVar2 + 0x14));
  return;
}



// ===== FAT.TrainMissionActivity$$_CreateWorldTracer RVA 0x2b7fc58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b8fc58(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02b8fd40 + 0x2b8fc6c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b8fd44 + 0x2b8fc80));
    func_0x01384978(*(undefined4 *)(_UNK_02b8fd48 + 0x2b8fc8c));
    func_0x01384978(*(undefined4 *)(_UNK_02b8fd4c + 0x2b8fc98));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7556,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7556,0);
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
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02b8fd50 + 0x2b8fcf0));
  func_0x0478dedc(uVar5,param_1,**(undefined4 **)(_UNK_02b8fd54 + 0x2b8fd0c),0);
  uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02b8fd58 + 0x2b8fd20));
  func_0x0214d6c8(uVar2,uVar5,0,0);
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  return;
}



// ===== FAT.TrainMissionActivity$$_Bind RVA 0x2b7fd5c =====

void FUN_02b8fd5c(int param_1)

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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x7559,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7559,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2);
    return;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x88);
  iVar1 = *(int *)(param_1 + 0x8c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0214e900(iVar1,uVar5,0);
  iVar1 = *(int *)(param_1 + 0x88);
  uVar5 = *(undefined4 *)(param_1 + 0x8c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0229f06c(0x5bb9,0,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x5bb9,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar5,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485278(&uStack_38,uVar5,0);
    iVar4 = *(int *)(iVar3 + 8);
    uVar5 = *(undefined4 *)(iVar3 + 0xc);
    iVar1 = *(int *)(iVar3 + 0x10);
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
  *(undefined4 *)(iVar1 + 0x2c) = uVar5;
  return;
}



// ===== FAT.TrainMissionActivity$$_CreateInventory RVA 0x2b7fdec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b8fdec(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar5 = func_0x0229f06c(0x755b,0);
  if (iVar5 != 0) {
    iVar5 = func_0x0229f13c(0x755b,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar5 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar5 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar11 = *(int *)(iVar5 + 8);
    uVar12 = *(undefined4 *)(iVar5 + 0xc);
    iVar5 = *(int *)(iVar5 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar5 == 0) {
      uVar7 = 1;
    }
    iVar5 = func_0x0245495c(iVar11,uVar12,&uStack_30,uVar7,0,0);
    return iVar5;
  }
  iVar5 = *(int *)(param_1 + 0x88);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02141880(iVar5,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x02112bc0(iVar5,1,0);
  iVar5 = *(int *)(param_1 + 0x88);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02141880(iVar5,0);
  iVar11 = *(int *)(param_1 + 0x80);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar12 = *(undefined4 *)(iVar11 + 0x54);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  pcVar8 = (char *)(_UNK_02115fa4 + 0x2115cc0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02115fa8 + 0x2115cd4),uVar12,1,0);
    func_0x01384978(*(undefined4 *)(_UNK_02115fac + 0x2115ce0));
    func_0x01384978(*(undefined4 *)(_UNK_02115fb0 + 0x2115cec));
    func_0x01384978(*(undefined4 *)(_UNK_02115fb4 + 0x2115cf8));
    func_0x01384978(*(undefined4 *)(_UNK_02115fb8 + 0x2115d04));
    func_0x01384978(*(undefined4 *)(_UNK_02115fbc + 0x2115d10));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar11 = func_0x0229f06c(0x55d,0);
  if (iVar11 == 0) {
    iVar11 = *(int *)(iVar5 + 8);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d66780(iVar11,1,&iStack_28,**(undefined4 **)(_UNK_02115fc0 + 0x2115d98));
    iVar11 = iStack_28;
    if (iVar1 == 0) {
      piVar13 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02115fc8 + 0x2115ee8),1);
      uStack_2c = 1;
      iVar5 = func_0x01384abc(**(undefined4 **)(_UNK_02115fcc + 0x2115f00),&uStack_2c);
      if (piVar13 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar5 != 0) &&
         (iVar11 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar13 + 0x20)), iVar11 == 0)) {
        uVar12 = func_0x01384c10();
        func_0x01384aa0(uVar12,0);
      }
      if (piVar13[3] == 0) {
        func_0x01384bf4();
      }
      piVar13[4] = iVar5;
      if (*(int *)(**(int **)(_UNK_02115fd0 + 0x2115f64) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar11 = 0;
      func_0x028c2f28(**(undefined4 **)(_UNK_02115fd4 + 0x2115f8c),piVar13,0);
    }
    else {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x02115fd8(iVar11,uVar12);
      if (iVar11 == 0) {
        iVar11 = 0;
      }
      else {
        uVar2 = *(uint *)(iVar11 + 0xc);
        if (0 < (int)uVar2) {
          uVar10 = 0;
          piVar13 = *(int **)(_UNK_02115fc4 + 0x2115dec);
          do {
            if (uVar2 <= uVar10) {
              func_0x01384bf4();
            }
            iVar1 = *(int *)(iVar11 + uVar10 * 4 + 0x10);
            if (iVar1 != 0) {
              piVar9 = *(int **)(iVar5 + 0x10);
              if (piVar9 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar3 = *piVar9;
              uVar2 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar2 != 0) {
                piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  if (piVar6[-1] == *piVar13) {
                    puVar4 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
                    goto LAB_02115e64;
                  }
                  uVar2 = uVar2 - 1;
                  piVar6 = piVar6 + 2;
                } while (uVar2 != 0);
              }
              puVar4 = (undefined4 *)func_0x014002dc(piVar9,*piVar13,0);
LAB_02115e64:
              iVar3 = (*(code *)*puVar4)(piVar9,puVar4[1]);
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              func_0x02144d84(iVar3,iVar1,0,0);
            }
            uVar2 = *(uint *)(iVar11 + 0xc);
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)uVar2);
        }
        iVar5 = *(int *)(iVar5 + 0xc);
        if (iVar5 != 0) {
          uStack_30 = *(undefined4 *)(iVar5 + 0x14);
          (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar5 + 0x20),1,iVar11,0);
        }
      }
    }
  }
  else {
    iVar11 = func_0x0229f13c(0x55d,0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = 0;
    iVar11 = func_0x0218e0a0(iVar11,iVar5,uVar12,1);
  }
  return iVar11;
}



// ===== FAT.TrainMissionActivity$$SetBoardData RVA 0x2b7fecc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0214bc3c) */
/* WARNING: Removing unreachable block (ram,0x0214b9ec) */
/* WARNING: Removing unreachable block (ram,0x0214b350) */
/* WARNING: Removing unreachable block (ram,0x0214b344) */
/* WARNING: Removing unreachable block (ram,0x0214acf8) */
/* WARNING: Removing unreachable block (ram,0x0214b080) */
/* WARNING: Removing unreachable block (ram,0x0214b08c) */
/* WARNING: Removing unreachable block (ram,0x0214b9e0) */
/* WARNING: Removing unreachable block (ram,0x0214bc48) */
/* WARNING: Removing unreachable block (ram,0x0214c20c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b8fecc(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar5 = func_0x0229f06c(0x75f2,0);
  if (iVar5 != 0) {
    iVar5 = func_0x0229f13c(0x75f2,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = 0;
    uStack_30 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8));
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_28 = uStack_40;
    if (*(int *)(iVar5 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar5 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar5 + 8);
    uVar14 = *(undefined4 *)(iVar5 + 0xc);
    iVar5 = *(int *)(iVar5 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar5 == 0) {
      uVar9 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    func_0x0245495c(iVar11,uVar14,&uStack_38,uVar9);
    return;
  }
  if (param_2 == 0) {
    return;
  }
  FUN_02b8fac0(param_1);
  FUN_02b8fc58(param_1);
  FUN_02b8fd5c(param_1);
  iVar5 = func_0x01c24918(0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(param_1 + 0x80);
  uVar14 = *(undefined4 *)(param_1 + 0x88);
  iVar5 = *(int *)(iVar5 + 0x4c);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar9 = *(undefined4 *)(iVar11 + 0x18);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uStack_28 = 0;
  uStack_24 = 0;
  func_0x01db8438(iVar5,uVar14,uVar9,0);
  iVar5 = *(int *)(param_1 + 0x88);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  pcVar10 = (char *)(_UNK_0214b97c + 0x214aa08);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214b980 + 0x214aa1c),param_2,0,0);
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
    *pcVar10 = '\x01';
  }
  iStack_3c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_44 = 0;
  iVar11 = func_0x0229f06c(0x5c51,0);
  if (iVar11 != 0) {
    iVar11 = func_0x0229f13c(0x5c51,0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar11,iVar5,param_2,0,0);
    return;
  }
  iVar11 = func_0x01c24918(0);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(iVar5 + 0x34);
  iVar11 = *(int *)(iVar11 + 0x38);
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
  uVar16 = *(uint *)(param_2 + 0x48);
  uVar17 = *(uint *)(param_2 + 0x4c);
  if (uVar16 != 0 || uVar17 != 0) {
    iVar12 = 0;
    puVar15 = *(undefined4 **)(_UNK_0214bc14 + 0x214ac90);
    do {
      if ((uVar16 & 1) != 0) {
        iVar13 = *(int *)(iVar5 + 0x6c);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        func_0x024519c0(iVar13,iVar12,*puVar15);
      }
      bVar1 = (byte)uVar17;
      uVar17 = uVar17 >> 1;
      iVar12 = iVar12 + 1;
      uVar16 = (uint)(bVar1 & 1) << 0x1f | uVar16 >> 1;
    } while (uVar16 != 0 || uVar17 != 0);
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar9 = *(undefined4 *)(param_2 + 0x3c);
  uVar14 = *(undefined4 *)(param_2 + 0x44);
  uVar6 = *(undefined4 *)(param_2 + 0x34);
  *(int *)(iVar5 + 0x80) = *(int *)(param_2 + 0x30);
  *(undefined4 *)(iVar5 + 0x84) = uVar6;
  *(undefined4 *)(iVar5 + 0x90) = uVar14;
  *(undefined4 *)(iVar5 + 0x94) = uVar9;
  piVar2 = (int *)func_0x021566f4(0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar2;
  uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar17 != 0) {
    piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_0214bcb8 + 0x214ad30)) {
        puVar15 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
        goto LAB_0214ad78;
      }
      uVar17 = uVar17 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar17 != 0);
  }
  puVar15 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0214bcb8 + 0x214ad30),0);
LAB_0214ad78:
  (*(code *)*puVar15)(piVar2,puVar15[1]);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar13 = *(int *)(iVar5 + 0x9c);
  iVar12 = (*(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x10)) * 1000;
  if (iVar12 < 2) {
    iVar12 = 1;
  }
  *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(param_2 + 0xc);
  *(int *)(iVar5 + 0x44) = iVar12;
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar13,**(undefined4 **)(_UNK_0214bd90 + 0x214addc));
  iVar12 = *(int *)(param_2 + 0x50);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x034658b4(iVar12,**(undefined4 **)(_UNK_0214bd94 + 0x214ae00));
  piVar7 = *(int **)(_UNK_0214bd98 + 0x214ae1c);
  puVar15 = *(undefined4 **)(_UNK_0214bd9c + 0x214ae24);
LAB_0214ae20:
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar2;
  uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar17 != 0) {
    piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_0214bda0 + 0x214ae3c)) {
        puVar3 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
        goto LAB_0214ae84;
      }
      uVar17 = uVar17 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar17 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0214bda0 + 0x214ae3c),0);
LAB_0214ae84:
  iVar12 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  if (iVar12 != 0) {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar2;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar7) {
          puVar3 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
          goto LAB_0214aef8;
        }
        uVar17 = uVar17 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar17 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar7,0);
LAB_0214aef8:
    (*(code *)*puVar3)(&uStack_68,piVar2,puVar3[1]);
    iVar12 = iStack_64;
    uVar14 = uStack_68;
    iVar13 = func_0x02142c70(iVar5,uStack_68,2);
    if (iVar13 == 0) {
      piVar8 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0214bf34 + 0x214af5c),1);
      uStack_68 = uVar14;
      iVar12 = func_0x01384abc(**(undefined4 **)(_UNK_0214bf64 + 0x214af74),&uStack_68);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar12 != 0) &&
         (iVar13 = func_0x01384ab8(iVar12,*(undefined4 *)(*piVar8 + 0x20)), iVar13 == 0)) {
        uVar14 = func_0x01384c10();
        func_0x01384aa0(uVar14,0);
      }
      if (piVar8[3] == 0) {
        func_0x01384bf4();
      }
      piVar8[4] = iVar12;
      if (*(int *)(**(int **)(_UNK_0214bfc0 + 0x214afdc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c23bc(*puVar15,piVar8,0);
    }
    else {
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x0214c448(iVar13,*(undefined4 *)(iVar12 + 0xc),*(undefined4 *)(iVar12 + 0x10));
    }
    goto LAB_0214ae20;
  }
  if (piVar2 != (int *)0x0) {
    iVar12 = *piVar2;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c004 + 0x214b020)) {
          puVar3 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b068;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0214c004 + 0x214b020),0);
LAB_0214b068:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  iVar12 = *(int *)(iVar5 + 0x98);
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
  piVar2 = (int *)func_0x034658b4(iVar12,**(undefined4 **)(_UNK_0214c0c0 + 0x214b0e4));
  piVar7 = *(int **)(_UNK_0214c0c4 + 0x214b100);
LAB_0214b0fc:
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar2;
  uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar17 != 0) {
    piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_0214c0c8 + 0x214b118)) {
        puVar3 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
        goto LAB_0214b160;
      }
      uVar17 = uVar17 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar17 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0214c0c8 + 0x214b118),0);
LAB_0214b160:
  iVar12 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  if (iVar12 != 0) {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar2;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar7) {
          puVar3 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
          goto LAB_0214b1d4;
        }
        uVar17 = uVar17 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar17 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar7,0);
LAB_0214b1d4:
    (*(code *)*puVar3)(&uStack_68,piVar2,puVar3[1]);
    iVar12 = iStack_64;
    uVar14 = uStack_68;
    iVar13 = func_0x0214225c(iVar5,uStack_68,0xd);
    if (iVar13 == 0) {
      piVar8 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0214c218 + 0x214b220),1);
      uStack_68 = uVar14;
      iVar12 = func_0x01384abc(**(undefined4 **)(_UNK_0214c228 + 0x214b238),&uStack_68);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar12 != 0) &&
         (iVar13 = func_0x01384ab8(iVar12,*(undefined4 *)(*piVar8 + 0x20)), iVar13 == 0)) {
        uVar14 = func_0x01384c10();
        func_0x01384aa0(uVar14,0);
      }
      if (piVar8[3] == 0) {
        func_0x01384bf4();
      }
      piVar8[4] = iVar12;
      if (*(int *)(**(int **)(_UNK_0214c258 + 0x214b2a0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c23bc(*puVar15,piVar8,0);
    }
    else {
      func_0x0214c4c8(iVar13,iVar12);
    }
    goto LAB_0214b0fc;
  }
  if (piVar2 != (int *)0x0) {
    iVar12 = *piVar2;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c2b4 + 0x214b2e4)) {
          puVar15 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b32c;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0214c2b4 + 0x214b2e4),0);
LAB_0214b32c:
    (*(code *)*puVar15)(piVar2,puVar15[1]);
  }
  iVar12 = func_0x01c24918(0);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(iVar12 + 0xc);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  uVar14 = func_0x01ca5188(iVar12,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(param_2 + 0x28);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x03653608(iVar12,**(undefined4 **)(_UNK_0214c3b0 + 0x214b3bc));
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar2;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c3dc + 0x214b3e8)) {
          puVar15 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b430;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0214c3dc + 0x214b3e8),0);
LAB_0214b430:
    iVar12 = (*(code *)*puVar15)(piVar2,puVar15[1]);
    if (iVar12 == 0) {
      iVar11 = 0x15;
      iVar12 = 0;
      goto LAB_0214b574;
    }
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar2;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c3b8 + 0x214b464)) {
          puVar15 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b4b4;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0214c3b8 + 0x214b464),0);
LAB_0214b4b4:
    iVar12 = (*(code *)*puVar15)(piVar2,puVar15[1]);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar9 = *(undefined4 *)(iVar12 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar13 = func_0x01cccae0(iVar11,uVar9,0);
    if ((iVar13 == 0) && (iVar13 = func_0x02168818(*(undefined4 *)(iVar12 + 0x10),0), iVar13 == 0))
    break;
    func_0x0214c9b0(iVar5,iVar12,uVar14,&uStack_28);
    iVar13 = *(int *)(iVar5 + 0x34);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    uVar9 = uStack_28;
    iVar13 = *(int *)(iVar13 + 0xc);
    uVar6 = *(undefined4 *)(iVar12 + 0xc);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    func_0x03d6491c(iVar13,uVar6,uVar9,**(undefined4 **)(_UNK_0214c3d8 + 0x214b558));
  } while( true );
  uStack_68 = *(undefined4 *)(iVar12 + 0xc);
  uVar14 = func_0x01384988(*(undefined4 *)(_UNK_0214c3bc + 0x214bdb8));
  uVar14 = func_0x01384abc(uVar14,&uStack_68);
  uStack_48 = *(undefined4 *)(iVar12 + 0x10);
  uVar9 = func_0x01384988(*(undefined4 *)(_UNK_0214c3c0 + 0x214bdd8));
  uVar9 = func_0x01384abc(uVar9,&uStack_48);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uStack_4c = *(undefined4 *)(param_2 + 0x38);
  uVar6 = func_0x01384988(*(undefined4 *)(_UNK_0214c3c4 + 0x214be0c));
  uVar6 = func_0x01384abc(uVar6,&uStack_4c);
  uVar4 = func_0x01384988(*(undefined4 *)(_UNK_0214c3c8 + 0x214be24));
  uVar14 = func_0x02450228(uVar4,uVar14,uVar9,uVar6,0);
  iVar11 = func_0x01384988(*(undefined4 *)(_UNK_0214c3cc + 0x214be4c));
  if (*(int *)(iVar11 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2944(uVar14,0);
  func_0x01384988(*(undefined4 *)(_UNK_0214c3d0 + 0x214be74));
  uVar9 = func_0x01384be4();
  func_0x0244f904(uVar9,uVar14,0);
  uVar14 = func_0x01384988(*(undefined4 *)(_UNK_0214c3d4 + 0x214be94));
  func_0x01384aa0(uVar9,uVar14);
  uVar18 = func_0x01384928();
  if ((int)((ulonglong)uVar18 >> 0x20) != 1) {
    if (piVar2 != (int *)0x0) {
      iVar5 = *piVar2;
      uVar17 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar17 != 0) {
        piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_0214c3ec + 0x214c1ac)) {
            puVar15 = (undefined4 *)(iVar5 + *piVar7 * 8 + 0xc0);
            goto LAB_0214c1f4;
          }
          uVar17 = uVar17 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar17 != 0);
      }
      puVar15 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0214c3ec + 0x214c1ac),0);
LAB_0214c1f4:
      (*(code *)*puVar15)(piVar2,puVar15[1]);
    }
    func_0x01459844((int)uVar18);
    func_0x01062280();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar7 = (int *)func_0x0145b008((int)uVar18);
  iVar12 = *piVar7;
  iVar11 = 0;
  func_0x0145b0f8();
LAB_0214b574:
  if (piVar2 != (int *)0x0) {
    iVar13 = *piVar2;
    uVar17 = (uint)*(ushort *)(iVar13 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar13 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c3e0 + 0x214b590)) {
          puVar15 = (undefined4 *)(iVar13 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b5d8;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0214c3e0 + 0x214b590),0);
LAB_0214b5d8:
    (*(code *)*puVar15)(piVar2,puVar15[1]);
  }
  if (iVar12 != 0) {
    func_0x01384bec(iVar12);
  }
  if (iVar11 != 0x15 && iVar11 != 0) {
    return;
  }
  iVar11 = *(int *)(iVar5 + 0x34);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar11 + 0xc);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64e30(&uStack_68,iVar11,**(undefined4 **)(_UNK_0214c3e4 + 0x214b638));
  uStack_30 = (ulonglong)uStack_58;
  uStack_40 = uStack_68;
  iStack_3c = iStack_64;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  puVar15 = *(undefined4 **)(_UNK_0214c3e8 + 0x214b664);
  while (iVar11 = func_0x03f9b324(&uStack_40,*puVar15), iVar11 != 0) {
    iVar11 = (int)uStack_30;
    if ((int)uStack_30 == 0) {
      func_0x01384bf0();
    }
    func_0x02117bcc(iVar11,0);
  }
  func_0x03f9b464(&uStack_40,**(undefined4 **)(_UNK_0214c3f0 + 0x214b6a0));
  iVar12 = *(int *)(iVar5 + 0x34);
  iVar11 = *(int *)(iVar5 + 0x50);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  uVar14 = *(undefined4 *)(iVar12 + 0xc);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x02113ec4(iVar11,param_2,uVar14,0);
  iVar11 = *(int *)(iVar5 + 0x54);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x0214cca8(iVar11,param_2);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(param_2 + 0x5c);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0364c2b4(iVar11,**(undefined4 **)(_UNK_0214c3f8 + 0x214b728));
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar2;
    uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c428 + 0x214b750)) {
          puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b798;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0214c428 + 0x214b750),0);
LAB_0214b798:
    iVar11 = (*(code *)*puVar15)(piVar2,puVar15[1]);
    if (iVar11 == 0) {
      if (piVar2 == (int *)0x0) goto LAB_0214b9d8;
      iVar11 = *piVar2;
      uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar17 == 0) goto LAB_0214b96c;
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      break;
    }
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar2;
    uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c400 + 0x214b7cc)) {
          puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b814;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0214c400 + 0x214b7cc),0);
LAB_0214b814:
    uVar14 = (*(code *)*puVar15)(piVar2,puVar15[1]);
    iVar11 = *(int *)(iVar5 + 0x34);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar11 + 0xc);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = func_0x03d66780(iVar11,uVar14,&uStack_44,**(undefined4 **)(_UNK_0214c404 + 0x214b854));
    uVar9 = uStack_44;
    if (iVar11 == 0) {
      uStack_68 = uVar14;
      uVar14 = func_0x01384988(*(undefined4 *)(_UNK_0214c408 + 0x214bccc));
      uVar14 = func_0x01384abc(uVar14,&uStack_68);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uStack_48 = *(undefined4 *)(param_2 + 0x38);
      uVar9 = func_0x01384988(*(undefined4 *)(_UNK_0214c40c + 0x214bd00));
      uVar9 = func_0x01384abc(uVar9,&uStack_48);
      uVar6 = func_0x01384988(*(undefined4 *)(_UNK_0214c410 + 0x214bd18));
      uVar14 = func_0x0244f690(uVar6,uVar14,uVar9,0);
      iVar5 = func_0x01384988(*(undefined4 *)(_UNK_0214c414 + 0x214bd38));
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2944(uVar14,0);
      func_0x01384988(*(undefined4 *)(_UNK_0214c418 + 0x214bd60));
      uVar9 = func_0x01384be4();
      func_0x0244f904(uVar9,uVar14,0);
      uVar14 = func_0x01384988(*(undefined4 *)(_UNK_0214c41c + 0x214bd80));
      func_0x01384aa0(uVar9,uVar14);
      func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar11 = *(int *)(iVar5 + 0x68);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar11 + 8);
    uVar17 = *(uint *)(iVar11 + 0xc);
    piVar7 = *(int **)(_UNK_0214c420 + 0x214b8a0);
    *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
    iVar12 = *piVar7;
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    if (uVar17 < *(uint *)(iVar13 + 0xc)) {
      *(uint *)(iVar11 + 0xc) = uVar17 + 1;
      *(undefined4 *)(iVar13 + uVar17 * 4 + 0x10) = uVar9;
    }
    else {
      func_0x0328f170(iVar11,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38))
      ;
    }
    iVar11 = *(int *)(iVar5 + 0x34);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar11 + 0xc);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x03d66094(iVar11,uVar14,**(undefined4 **)(_UNK_0214c424 + 0x214b910));
  } while( true );
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar7 = piVar7 + 2;
    if (uVar17 == 0) break;
    if (piVar7[-1] == **(int **)(_UNK_0214c42c + 0x214b940)) {
      puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
      goto LAB_0214b9c8;
    }
  }
LAB_0214b96c:
  puVar15 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0214c42c + 0x214b940),0);
LAB_0214b9c8:
  (*(code *)*puVar15)(piVar2,puVar15[1]);
LAB_0214b9d8:
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(iVar5 + 0x34);
  iVar11 = *(int *)(iVar5 + 0x4c);
  *(undefined4 *)(iVar5 + 0x48) = *(undefined4 *)(param_2 + 0x18);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  uVar14 = *(undefined4 *)(iVar12 + 0xc);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x020daf18(iVar11,uVar14,0);
  iVar11 = *(int *)(param_2 + 0x1c);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0364c2b4(iVar11,**(undefined4 **)(_UNK_0214c430 + 0x214ba60));
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar2;
    uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c43c + 0x214ba88)) {
          puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_0214bb0c;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0214c43c + 0x214ba88),0);
LAB_0214bb0c:
    iVar11 = (*(code *)*puVar15)(piVar2,puVar15[1]);
    if (iVar11 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar2;
    uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c438 + 0x214bb40)) {
          puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_0214bb90;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0214c438 + 0x214bb40),0);
LAB_0214bb90:
    uVar14 = (*(code *)*puVar15)(piVar2,puVar15[1]);
    func_0x02144c58(iVar5,uVar14,1);
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar11 = *piVar2;
    uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c440 + 0x214bbd4)) {
          puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_0214bc24;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0214c440 + 0x214bbd4),0);
LAB_0214bc24:
    (*(code *)*puVar15)(piVar2,puVar15[1]);
  }
  iVar11 = *(int *)(iVar5 + 0x58);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x02139c14(iVar11,param_2);
  iVar11 = *(int *)(iVar5 + 0x5c);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x0215e864(iVar11,param_2,0);
  iVar5 = *(int *)(iVar5 + 0x60);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x01db6ad4(iVar5,param_2,0);
  return;
}



// ===== FAT.TrainMissionActivity$$_OnBoardItemChange RVA 0x2b7ffdc =====

void FUN_02b8ffdc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7557,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7557,0);
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
  iVar1 = *(int *)(param_1 + 0x100);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02b90044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.TrainMissionActivity$$FillBoardData RVA 0x2b8004c =====

/* WARNING: Possible PIC construction at 0x02147e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02147e08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b9004c(int param_1,int param_2)

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
  
  iVar4 = func_0x0229f06c(0x75f3,0);
  if (iVar4 == 0) {
    param_1 = *(int *)(param_1 + 0x88);
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
    iVar4 = func_0x0229f13c(0x75f3,0);
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



// ===== FAT.TrainMissionActivity$$_CheckGroupLevelRequire RVA 0x2b800c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02b900c0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
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
  
  pcVar6 = (char *)(_UNK_02b9021c + 0x2b900d8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b90220 + 0x2b900ec));
    func_0x01384978(*(undefined4 *)(_UNK_02b90224 + 0x2b900f8));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7566,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7566,0);
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
    func_0x01485238(&uStack_38,param_2,0);
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
  if (*(int *)(**(int **)(_UNK_02b90228 + 0x2b90154) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x036a1750(param_2,**(undefined4 **)(_UNK_02b9022c + 0x2b90170));
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    iVar7 = *(int *)(iVar2 + 0x1c);
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x48);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar1 = 0;
    iVar4 = func_0x01dd2c04(iVar4,0);
    if (iVar7 <= iVar4) {
      iVar4 = *(int *)(iVar2 + 0x18);
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x48);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01dd2c04(iVar2,0);
      uVar1 = (uint)(iVar2 <= iVar4);
    }
  }
  return uVar1;
}



// ===== FAT.TrainMissionActivity$$_FillGroupDetailID RVA 0x2b80230 =====

/* WARNING: Removing unreachable block (ram,0x0325ad8c) */
/* WARNING: Removing unreachable block (ram,0x0325ad9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b90230(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
  
  pcVar12 = (char *)(_UNK_02b90490 + 0x2b90250);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b90494 + 0x2b90264));
    func_0x01384978(*(undefined4 *)(_UNK_02b90498 + 0x2b90270));
    func_0x01384978(*(undefined4 *)(_UNK_02b9049c + 0x2b9027c));
    func_0x01384978(*(undefined4 *)(_UNK_02b904a0 + 0x2b90288));
    func_0x01384978(*(undefined4 *)(_UNK_02b904a4 + 0x2b90294));
    func_0x01384978(*(undefined4 *)(_UNK_02b904a8 + 0x2b902a0));
    func_0x01384978(*(undefined4 *)(_UNK_02b904ac + 0x2b902ac));
    func_0x01384978(*(undefined4 *)(_UNK_02b904b0 + 0x2b902b8));
    func_0x01384978(*(undefined4 *)(_UNK_02b904b4 + 0x2b902c4));
    func_0x01384978(*(undefined4 *)(_UNK_02b904b8 + 0x2b902d0));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7567,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7567,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,param_1,param_2,param_3,0);
    return;
  }
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  piVar2 = *(int **)(_UNK_02b904bc + 0x2b90348);
  param_2[3] = 0;
  iVar1 = *piVar2;
  param_2[4] = param_2[4] + 1;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x036a1750(param_3,**(undefined4 **)(_UNK_02b904c0 + 0x2b90374));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar1 + 0x20);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar11 + 0xc) < 4) {
    piVar3 = *(int **)(_UNK_02b904c4 + 0x2b9047c);
    piVar2 = *(int **)(iVar1 + 0x20);
  }
  else {
    piVar2 = *(int **)(_UNK_02b904c8 + 0x2b903b4);
    uVar10 = *(undefined4 *)(iVar1 + 0x20);
    iVar1 = *piVar2;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar2;
    }
    iVar11 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x10);
    if (iVar11 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar2;
      }
      uVar13 = **(undefined4 **)(iVar1 + 0x5c);
      iVar11 = func_0x01384be4(**(undefined4 **)(_UNK_02b904cc + 0x2b90400));
      func_0x041cd6fc(iVar11,uVar13,**(undefined4 **)(_UNK_02b904d0 + 0x2b90420),0);
      *(int *)(*(int *)(*piVar2 + 0x5c) + 0x10) = iVar11;
    }
    uVar10 = func_0x02f9fd10(uVar10,iVar11,**(undefined4 **)(_UNK_02b904d4 + 0x2b90444));
    piVar2 = (int *)func_0x02fb1e30(uVar10,3,**(undefined4 **)(_UNK_02b904d8 + 0x2b90458));
    piVar3 = *(int **)(_UNK_02b904dc + 0x2b90470);
  }
  uVar7 = param_2[3];
  iVar1 = *(int *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x48);
  pcVar12 = (char *)(_UNK_0325ae98 + 0x325a8f8);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0325ae9c + 0x325a910));
    func_0x01384978(*(undefined4 *)(_UNK_0325aea0 + 0x325a91c));
    *pcVar12 = '\x01';
  }
  if (piVar2 == (int *)0x0) {
    func_0x04839ccc(6,0);
  }
  if ((uint)param_2[3] < uVar7) {
    func_0x0484c9cc(0);
  }
  iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
  if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
    iVar11 = func_0x014001f0(iVar11);
  }
  piVar3 = (int *)func_0x01384ab8(piVar2,iVar11);
  if (piVar3 == (int *)0x0) {
    if ((int)uVar7 < param_2[3]) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x10);
      if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
        iVar11 = func_0x014001f0(iVar11);
      }
      iVar4 = *piVar2;
      uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar8 != 0) {
        piVar3 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar3[-1] == iVar11) {
            puVar5 = (undefined4 *)(iVar4 + *piVar3 * 8 + 0xc0);
            goto LAB_0325abc8;
          }
          uVar8 = uVar8 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar2,iVar11,0);
LAB_0325abc8:
      piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
      piVar3 = *(int **)(_UNK_0325aea4 + 0x325abe8);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar11 = *piVar2;
        uVar8 = (uint)*(ushort *)(iVar11 + 0xb6);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(int *)(iVar11 + 0x58) + 4);
          do {
            if (piVar9[-1] == *piVar3) {
              puVar5 = (undefined4 *)(iVar11 + *piVar9 * 8 + 0xc0);
              goto LAB_0325ac40;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_0325ac40:
        iVar11 = (*(code *)*puVar5)(piVar2,puVar5[1]);
        if (iVar11 == 0) goto LAB_0325ad0c;
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x98);
        if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
          iVar11 = func_0x014001f0(iVar11);
        }
        iVar4 = *piVar2;
        uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar9[-1] == iVar11) {
              puVar5 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
              goto LAB_0325acd4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar2,iVar11,0);
LAB_0325acd4:
        uVar10 = (*(code *)*puVar5)(piVar2,puVar5[1]);
        func_0x0325a680(param_2,uVar7,uVar10,
                        *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xa4));
        uVar7 = uVar7 + 1;
      } while( true );
    }
    func_0x0325b5f8(param_2,piVar2,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x20));
  }
  else {
    iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
    if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
      iVar11 = func_0x014001f0(iVar11);
    }
    iVar4 = *piVar3;
    uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar8 != 0) {
      piVar2 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar2[-1] == iVar11) {
          puVar5 = (undefined4 *)(iVar4 + *piVar2 * 8 + 0xc0);
          goto LAB_0325aa70;
        }
        uVar8 = uVar8 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar3,iVar11,0);
LAB_0325aa70:
    iVar11 = (*(code *)*puVar5)(piVar3,puVar5[1]);
    if (0 < iVar11) {
      func_0x03259cec(param_2,param_2[3] + iVar11,
                      *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x3c));
      if ((int)uVar7 < param_2[3]) {
        func_0x0484e904(param_2[2],uVar7,param_2[2],iVar11 + uVar7,param_2[3] - uVar7,0);
      }
      if (param_2 == piVar3) {
        func_0x0484e904(param_2[2],0,param_2[2],uVar7,uVar7,0);
        func_0x0484e904(param_2[2],iVar11 + uVar7,param_2[2],uVar7 << 1,param_2[3] - uVar7,0);
      }
      else {
        iVar4 = param_2[2];
        iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar6 = *piVar3;
        uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar8 != 0) {
          piVar2 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar2[-1] == iVar1) {
              puVar5 = (undefined4 *)(iVar6 + *piVar2 * 8 + 0xe8);
              goto LAB_0325ab94;
            }
            uVar8 = uVar8 - 1;
            piVar2 = piVar2 + 2;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar3,iVar1,5);
LAB_0325ab94:
        (*(code *)*puVar5)(piVar3,iVar4,uVar7,puVar5[1]);
      }
      param_2[3] = param_2[3] + iVar11;
    }
  }
LAB_0325adbc:
  param_2[4] = param_2[4] + 1;
  return;
LAB_0325ad0c:
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_0325aea8 + 0x325ad2c)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_0325ad74;
        }
        uVar7 = uVar7 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0325aea8 + 0x325ad2c),0);
LAB_0325ad74:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  goto LAB_0325adbc;
}



// ===== FAT.TrainMissionActivity$$_UpdateOrder RVA 0x2b804e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b904e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02b90738 + 0x2b904f8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b9073c + 0x2b9050c));
    func_0x01384978(*(undefined4 *)(_UNK_02b90740 + 0x2b90518));
    func_0x01384978(*(undefined4 *)(_UNK_02b90744 + 0x2b90524));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x7572,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7572,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  puVar7 = *(undefined4 **)(_UNK_02b90748 + 0x2b90588);
  do {
    iVar1 = *(int *)(param_1 + 0x84);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) <= (int)uVar5) {
      return;
    }
    if ((int)(*(uint *)(param_1 + 0x48) & 1 << (uVar5 & 0x1f)) < 1) {
      iVar1 = *(int *)(param_1 + 0xe8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(param_1 + 0x84);
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x20);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0364c9b8(iVar3,uVar5,*puVar7);
      if (iVar1 != iVar3) {
        iVar1 = *(int *)(param_1 + 0xec);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(param_1 + 0x84);
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0x20);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x0364c9b8(iVar3,uVar5,*puVar7);
        if (iVar1 != iVar3) {
          iVar1 = *(int *)(param_1 + 0xe8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar1 + 8) == 0) {
            iVar1 = *(int *)(param_1 + 0x84);
            iVar3 = *(int *)(param_1 + 0xe8);
          }
          else {
            iVar1 = *(int *)(param_1 + 0xec);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            if (*(int *)(iVar1 + 8) != 0) goto LAB_02b90728;
            iVar1 = *(int *)(param_1 + 0x84);
            iVar3 = *(int *)(param_1 + 0xec);
          }
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x20);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar6 = func_0x0364c9b8(iVar1,uVar5,*puVar7);
          iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_02b9074c + 0x2b906e4));
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar2 = func_0x01c359e8(iVar1,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          FUN_02b89648(iVar3,uVar6,0,uVar2);
        }
      }
    }
LAB_02b90728:
    uVar5 = uVar5 + 1;
  } while( true );
}



// ===== FAT.TrainMissionActivity$$_BeginMilestoneReward RVA 0x2b80818 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b90818(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
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
  
  pcVar3 = (char *)(_UNK_02b909b8 + 0x2b90834);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b909bc + 0x2b90848));
    func_0x01384978(*(undefined4 *)(_UNK_02b909c0 + 0x2b90854));
    func_0x01384978(*(undefined4 *)(_UNK_02b909c4 + 0x2b90860));
    func_0x01384978(*(undefined4 *)(_UNK_02b909c8 + 0x2b9086c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x75d8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75d8,0);
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
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar2,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar7 = *(undefined4 *)(param_2 + 0x1c);
  if (*(int *)(**(int **)(_UNK_02b909cc + 0x2b908d8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x02565a88(uVar7,0);
  iVar6 = func_0x01c24918(0);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar6 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = *(int **)(_UNK_02b909d0 + 0x2b90930);
  uVar7 = *(undefined4 *)(iVar1 + 8);
  uVar2 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x2f8);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uStack_28 = **(undefined4 **)(_UNK_02b909d4 + 0x2b90974);
  uStack_24 = **(undefined4 **)(_UNK_02b909d8 + 0x2b90980);
  uStack_2c = 0x335;
  uStack_20 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uVar7 = func_0x01cdcbac(iVar6,uVar7,uVar2,uVar5);
  *(undefined4 *)(param_1 + 0xf4) = uVar7;
  return;
}



// ===== FAT.TrainMissionActivity$$CheckIndicator RVA 0x2b809dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b909dc(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_02b90bf8 + 0x2b909fc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b90bfc + 0x2b90a10));
    func_0x01384978(*(undefined4 *)(_UNK_02b90c00 + 0x2b90a1c));
    func_0x01384978(*(undefined4 *)(_UNK_02b90c04 + 0x2b90a28));
    func_0x01384978(*(undefined4 *)(_UNK_02b90c08 + 0x2b90a34));
    func_0x01384978(*(undefined4 *)(_UNK_02b90c0c + 0x2b90a40));
    func_0x01384978(*(undefined4 *)(_UNK_02b90c10 + 0x2b90a4c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x75f4,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b90c14 + 0x2b90ab0));
    func_0x04874ed4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar1 + 0xc) = param_1;
    *param_3 = 0;
    puVar3 = *(undefined4 **)(_UNK_02b90c18 + 0x2b90ae4);
    *(undefined4 *)(iVar1 + 8) = param_2;
    iVar4 = func_0x034aaa34(*puVar3);
    iVar6 = *(int *)(param_1 + 0x90);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar7 = *(undefined4 *)(iVar6 + 0xc);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar4 = func_0x01eea2b8(iVar4,uVar7,0);
    if (iVar4 != 0) {
      iVar4 = *(int *)(param_1 + 0xe8);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      puVar3 = *(undefined4 **)(_UNK_02b90c1c + 0x2b90b48);
      uVar2 = *(undefined4 *)(iVar4 + 0x10);
      uVar7 = func_0x01384be4(*puVar3);
      func_0x041cf488(uVar7,iVar1,**(undefined4 **)(_UNK_02b90c20 + 0x2b90b68),0);
      puVar8 = *(undefined4 **)(_UNK_02b90c24 + 0x2b90b84);
      iVar4 = func_0x02f85c6c(uVar2,uVar7,*puVar8);
      uVar2 = 2;
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_1 + 0xec);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar2 = *(undefined4 *)(iVar4 + 0x10);
        uVar7 = func_0x01384be4(*puVar3);
        func_0x041cf488(uVar7,iVar1,**(undefined4 **)(_UNK_02b90c28 + 0x2b90bd0),0);
        iVar1 = func_0x02f85c6c(uVar2,uVar7,*puVar8);
        uVar2 = 0;
        if (iVar1 != 0) {
          uVar2 = 2;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x75f4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021ca740(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.TrainMissionActivity.<>c__DisplayClass145_0$$.ctor RVA 0x2b80c2c =====

void FUN_02b90c2c(void)

{
  return;
}



// ===== FAT.TrainMissionActivity$$get_ActivityBoardId RVA 0x2b80c34 =====

undefined4 FUN_02b90c34(int param_1)

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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x75f8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75f8,0);
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
  if (*(int *)(param_1 + 0x80) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x18);
  }
  return uVar4;
}



// ===== FAT.TrainMissionActivity$$IsItemNeeded RVA 0x2b80c98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02b90c98(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
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
  
  pcVar4 = (char *)(_UNK_02b90ef8 + 0x2b90cb0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b90efc + 0x2b90cc4));
    func_0x01384978(*(undefined4 *)(_UNK_02b90f00 + 0x2b90cd0));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x75f9,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x75f9,0);
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
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
    uVar1 = func_0x0245496c(&uStack_38,0,0);
    return uVar1;
  }
  iVar2 = *(int *)(param_1 + 0xe8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar2 + 8)) {
    iVar2 = *(int *)(param_1 + 0xe8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_02b90750(iVar2);
    if (iVar2 == 0) {
      iVar2 = 0;
      puVar7 = *(undefined4 **)(_UNK_02b90f04 + 0x2b90e58);
      while( true ) {
        iVar5 = *(int *)(param_1 + 0xe8);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0x10);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar5 + 0xc) <= iVar2) break;
        iVar5 = *(int *)(param_1 + 0xe8);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0x10);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0328eea8(iVar5,iVar2,*puVar7);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if ((*(int *)(iVar5 + 8) == param_2) &&
           (iVar5 = FUN_02b8a820(param_1,*(undefined4 *)(param_1 + 0xe8),iVar2), iVar5 == 1)) {
          return 1;
        }
        iVar2 = iVar2 + 1;
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0xec);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = 0;
  if (0 < *(int *)(iVar2 + 8)) {
    iVar2 = *(int *)(param_1 + 0xec);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_02b90750(iVar2);
    if (iVar2 == 0) {
      iVar2 = 0;
      puVar7 = *(undefined4 **)(_UNK_02b90f08 + 0x2b90dac);
      while( true ) {
        iVar5 = *(int *)(param_1 + 0xec);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0x10);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0xc);
        uVar1 = (uint)(iVar2 < iVar5);
        if (iVar5 <= iVar2) break;
        iVar5 = *(int *)(param_1 + 0xec);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0x10);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0328eea8(iVar5,iVar2,*puVar7);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if ((*(int *)(iVar5 + 8) == param_2) &&
           (iVar5 = FUN_02b8a820(param_1,*(undefined4 *)(param_1 + 0xec),iVar2), iVar5 == 1)) {
          return uVar1;
        }
        iVar2 = iVar2 + 1;
      }
    }
  }
  return uVar1;
}



// ===== FAT.TrainMissionActivity$$JumpTask RVA 0x2b80f0c =====

void FUN_02b90f0c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uStack_28;
  int iStack_20;
  
  iVar1 = func_0x0229f06c(0x75fa,0);
  if (iVar1 == 0) {
    iStack_20 = param_1[0x36];
    uStack_28 = *(undefined8 *)(param_1 + 0x34);
    FUN_02b64d7c(&uStack_28,0);
    (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined4 *)(*param_1 + 0x1fc));
  }
  else {
    iVar1 = func_0x0229f13c(0x75fa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.TrainMissionActivity$$<>iFixBaseProxy_get_Visual RVA 0x2b80fa8 =====

undefined4 FUN_02b90fa8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.TrainMissionActivity$$<>iFixBaseProxy_SetupFresh RVA 0x2b80fb0 =====

void FUN_02b90fb0(undefined4 param_1)

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



// ===== FAT.TrainMissionActivity$$<>iFixBaseProxy_TryPopup RVA 0x2b80fb8 =====

void FUN_02b90fb8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x1aa2,0,param_3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1aa2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.TrainMissionActivity$$<>iFixBaseProxy_WhenEnd RVA 0x2b80fc0 =====

void FUN_02b90fc0(undefined4 param_1)

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



// ===== FAT.TrainMissionActivity.<>c$$.cctor RVA 0x2b80fc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b90fc8(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_02b91020 + 0x2b90fd8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b91024 + 0x2b90fec));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_02b91028 + 0x2b91000);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x04874ed4(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.TrainMissionActivity.<>c$$.ctor RVA 0x2b8102c =====

void FUN_02b9102c(void)

{
  return;
}



// ===== FAT.TrainMissionActivity.<>c$$<WhenEnd>b__98_2 RVA 0x2b81034 =====

undefined4 FUN_02b91034(undefined4 param_1,int param_2)

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
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0229f06c(0x246,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x246,0);
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
    func_0x01485278(&uStack_30,param_2,0);
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
  return *(undefined4 *)(param_2 + 0xc);
}



// ===== FAT.TrainMissionActivity.<>c$$<FinishRound>b__118_2 RVA 0x2b81058 =====

undefined4 FUN_02b91058(undefined4 param_1,int param_2)

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
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0229f06c(0x246,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x246,0);
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
    func_0x01485278(&uStack_30,param_2,0);
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
  return *(undefined4 *)(param_2 + 0xc);
}



// ===== FAT.TrainMissionActivity.<>c$$<GetTotalRewardPreview>b__119_0 RVA 0x2b8107c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b9107c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
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
  undefined4 auStack_1c [3];
  
  pcVar5 = (char *)(_UNK_02b910d8 + 0x2b91090);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b910dc + 0x2b910a4));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02b910e0 + 0x2b910b8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar5 = (char *)(_UNK_02565b58 + 0x2565a9c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02565b5c + 0x2565ab0),0);
    func_0x01384978(*(undefined4 *)(_UNK_02565b60 + 0x2565abc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8e,0);
  if (iVar1 == 0) {
    piVar4 = *(int **)(_UNK_02565b64 + 0x2565b14);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar4;
    }
    piVar4 = *(int **)(*(int *)(iVar1 + 0x5c) + 0xc);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = **(int **)(_UNK_02565b68 + 0x2565b4c);
    auStack_1c[0] = 0;
    uVar6 = 0;
    if (param_2 != 0) {
      iVar3 = piVar4[2];
      if (iVar3 == 0) {
        func_0x02457d50();
      }
      iVar3 = func_0x03e220bc(iVar3,param_2,auStack_1c,
                              *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xc));
      uVar6 = auStack_1c[0];
      if (iVar3 == 0) {
        auStack_1c[0] =
             func_0x02d921e0(*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14));
        iVar3 = (**(code **)(*piVar4 + 0xe0))
                          (piVar4,param_2,auStack_1c,*(undefined4 *)(*piVar4 + 0xe4));
        uVar6 = auStack_1c[0];
        if (iVar3 != 0) {
          iVar3 = piVar4[2];
          if (iVar3 == 0) {
            func_0x02457d50();
          }
          func_0x03e201a8(iVar3,param_2,uVar6,
                          *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x1c));
          uVar6 = auStack_1c[0];
        }
      }
    }
    return uVar6;
  }
  iVar1 = func_0x0229f13c(0x8e,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_021762bc + 0x21761dc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021762c0 + 0x21761f0),param_2,0);
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
  func_0x01485278(&uStack_30,param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar6,&uStack_30,uVar2,0,0);
  uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021762c4 + 0x21762ac));
  return uVar6;
}



// ===== FAT.TrainMissionActivity.<>c$$<_FillGroupDetailID>b__134_0 RVA 0x2b810e4 =====

void FUN_02b910e4(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x0481b734(&uStack_20,0);
  *param_1 = uStack_20;
  param_1[1] = uStack_18;
  return;
}



// ===== FAT.TrainMissionActivity.<>c__DisplayClass107_0$$<CompleteTrainMission>b__0 RVA 0x2b81110 =====

bool FUN_02b91110(int param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return ~*(uint *)(param_1 + 8) + *(int *)(param_2 + 8) == 0;
}



// ===== FAT.TrainMissionActivity.<>c__DisplayClass108_0$$<CheckMissionState>b__0 RVA 0x2b81144 =====

bool FUN_02b91144(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(int *)(iVar1 + 8) == param_2;
}



// ===== FAT.TrainMissionActivity.<>c__DisplayClass109_0$$<EnterNextChallenge>b__0 RVA 0x2b81170 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b91170(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 unaff_r4;
  int iVar3;
  int iVar4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar5;
  int iVar6;
  undefined4 unaff_r7;
  uint uVar7;
  undefined4 unaff_r8;
  undefined4 *puVar8;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_02b912d8 + 0x2b91188);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b912dc + 0x2b9119c));
    func_0x01384978(*(undefined4 *)(_UNK_02b912e0 + 0x2b911a8));
    *pcVar5 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0210e2d4(param_2,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  puVar8 = *(undefined4 **)(_UNK_02b912e4 + 0x2b91200);
  iVar3 = func_0x0364bc1c(iVar3,uVar1,*puVar8);
  uVar1 = extraout_r3;
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar1 = func_0x0210e2d4(param_2,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0364bc1c(iVar3,uVar1,*puVar8);
    uVar1 = extraout_r3_00;
    if (iVar3 == 0) {
      return;
    }
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
    uVar1 = extraout_r3_01;
  }
  iVar6 = *(int *)(iVar3 + 8);
  uVar7 = *(uint *)(iVar3 + 0xc);
  piVar2 = *(int **)(_UNK_02b912e8 + 0x2b91290);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  iVar4 = *piVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
    uVar1 = extraout_r3_02;
  }
  if (uVar7 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar7 + 1;
    *(int *)(iVar6 + uVar7 * 4 + 0x10) = param_2;
    return;
  }
  uVar7 = *(uint *)(iVar3 + 0xc);
  func_0x0328f754(iVar3,uVar7 + 1,
                  *(undefined4 *)
                   (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38) +
                                     0x10) + 0x60) + 0x3c),uVar1,unaff_r4,unaff_r5,unaff_r6,unaff_r7
                  ,unaff_r8,unaff_lr);
  iVar4 = *(int *)(iVar3 + 8);
  *(uint *)(iVar3 + 0xc) = uVar7 + 1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  if (*(uint *)(iVar4 + 0xc) <= uVar7) {
    func_0x01384bf4();
  }
  *(int *)(iVar4 + uVar7 * 4 + 0x10) = param_2;
  return;
}



// ===== FAT.TrainMissionActivity.<>c__DisplayClass118_0$$<FinishRound>b__0 RVA 0x2b812ec =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b912ec(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int aiStack_28 [2];
  
  pcVar2 = (char *)(_UNK_02b91544 + 0x2b91308);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b91548 + 0x2b9131c));
    func_0x01384978(*(undefined4 *)(_UNK_02b9154c + 0x2b91328));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 8);
  aiStack_28[1] = 0;
  aiStack_28[0] = 0;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0210e2d4(param_2,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  puVar4 = *(undefined4 **)(_UNK_02b91550 + 0x2b9138c);
  iVar3 = func_0x0364bc1c(iVar3,uVar1,*puVar4);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar1 = func_0x0210e2d4(param_2,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0364bc1c(iVar3,uVar1,*puVar4);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar3 + 8);
      uVar5 = *(uint *)(iVar3 + 0xc);
      piVar7 = *(int **)(_UNK_02b91554 + 0x2b9141c);
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      iVar8 = *piVar7;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      if (uVar5 < *(uint *)(iVar6 + 0xc)) {
        *(uint *)(iVar3 + 0xc) = uVar5 + 1;
        *(int *)(iVar6 + uVar5 * 4 + 0x10) = param_2;
      }
      else {
        func_0x0328f170(iVar3,param_2,
                        *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
      }
      iVar3 = *(int *)(param_1 + 0x14);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar3 + 8);
      uVar5 = *(uint *)(iVar3 + 0xc);
      iVar8 = *piVar7;
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      if (uVar5 < *(uint *)(iVar6 + 0xc)) {
        *(uint *)(iVar3 + 0xc) = uVar5 + 1;
        *(int *)(iVar6 + uVar5 * 4 + 0x10) = param_2;
      }
      else {
        func_0x0328f170(iVar3,param_2,
                        *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
      }
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x58);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar1 = func_0x0210e2d4(param_2,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x01dc688c(iVar3,uVar1,aiStack_28 + 1,aiStack_28,0);
      *(int *)(param_1 + 0x18) = aiStack_28[0] + *(int *)(param_1 + 0x18);
    }
  }
  return;
}



// ===== FAT.TrainMissionActivity.<>c__DisplayClass118_0$$<FinishRound>b__1 RVA 0x2b81558 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b91558(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int aiStack_28 [2];
  
  pcVar4 = (char *)(_UNK_02b91688 + 0x2b91574);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b9168c + 0x2b91588));
    *pcVar4 = '\x01';
  }
  aiStack_28[1] = 0;
  aiStack_28[0] = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x58);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0210e2d4(param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dc688c(iVar1,uVar2,aiStack_28 + 1,aiStack_28,0);
  iVar1 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x18) = aiStack_28[0] + *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 8);
  uVar7 = *(uint *)(iVar1 + 0xc);
  piVar3 = *(int **)(_UNK_02b91690 + 0x2b9163c);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar5 = *piVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  if (uVar7 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar7 + 1;
    *(int *)(iVar6 + uVar7 * 4 + 0x10) = param_2;
  }
  else {
    func_0x0328f170(iVar1,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
  }
  return;
}



// ===== FAT.TrainMissionActivity.<>c__DisplayClass145_0$$<CheckIndicator>b__0 RVA 0x2b81694 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02b91694(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  
  pcVar3 = (char *)(_UNK_02b91764 + 0x2b916ac);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b91768 + 0x2b916c0));
    *pcVar3 = '\x01';
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = 0;
  if (*(int *)(param_2 + 8) == *(int *)(param_1 + 8)) {
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar4 == 0) {
      uVar1 = func_0x01384bf0(0);
    }
    iVar4 = *(int *)(iVar4 + 0xe8);
    if (iVar4 == 0) {
      uVar1 = func_0x01384bf0(uVar1);
    }
    iVar2 = *(int *)(param_1 + 0xc);
    uVar5 = *(uint *)(iVar4 + 0xc);
    if (iVar2 == 0) {
      uVar1 = func_0x01384bf0(uVar1);
    }
    iVar4 = *(int *)(iVar2 + 0xe8);
    if (iVar4 == 0) {
      uVar1 = func_0x01384bf0(uVar1);
    }
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0(uVar1);
    }
    uVar1 = func_0x0328ffbc(iVar4,param_2,**(undefined4 **)(_UNK_02b9176c + 0x2b9174c));
    uVar1 = ~(uVar5 >> (uVar1 & 0x1f)) & 1;
  }
  return uVar1;
}



// ===== FAT.TrainMissionActivity.<>c__DisplayClass145_0$$<CheckIndicator>b__1 RVA 0x2b81770 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02b91770(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  
  pcVar3 = (char *)(_UNK_02b91840 + 0x2b91788);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b91844 + 0x2b9179c));
    *pcVar3 = '\x01';
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = 0;
  if (*(int *)(param_2 + 8) == *(int *)(param_1 + 8)) {
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar4 == 0) {
      uVar1 = func_0x01384bf0(0);
    }
    iVar4 = *(int *)(iVar4 + 0xec);
    if (iVar4 == 0) {
      uVar1 = func_0x01384bf0(uVar1);
    }
    iVar2 = *(int *)(param_1 + 0xc);
    uVar5 = *(uint *)(iVar4 + 0xc);
    if (iVar2 == 0) {
      uVar1 = func_0x01384bf0(uVar1);
    }
    iVar4 = *(int *)(iVar2 + 0xec);
    if (iVar4 == 0) {
      uVar1 = func_0x01384bf0(uVar1);
    }
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0(uVar1);
    }
    uVar1 = func_0x0328ffbc(iVar4,param_2,**(undefined4 **)(_UNK_02b91848 + 0x2b91828));
    uVar1 = ~(uVar5 >> (uVar1 & 0x1f)) & 1;
  }
  return uVar1;
}



// ===== FAT.TrainMissionActivity.<>c__DisplayClass97_0$$<Open>b__0 RVA 0x2b8184c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b9184c(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_02b91b0c + 0x2b91868);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b91b10 + 0x2b9187c));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0210e2d4(param_2,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  puVar4 = *(undefined4 **)(_UNK_02b91b14 + 0x2b918d4);
  iVar3 = func_0x0364bc1c(iVar3,uVar1,*puVar4);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x14);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar1 = func_0x0210e2d4(param_2,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0364bc1c(iVar3,uVar1,*puVar4);
    if (iVar3 == 0) {
      return;
    }
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0210e2d4(param_2,0);
    if (iVar3 == *(int *)(param_1 + 0x18)) {
      return;
    }
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_28,param_2,0);
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x88);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02139cf4(iVar3,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x020dd560(iVar3,param_2,4,0);
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x88);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02139cf4(iVar3,0);
    uVar1 = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0210e2d4(param_2,0);
    if (iVar3 == *(int *)(param_1 + 0xc)) {
      return;
    }
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_28,param_2,0);
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x88);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02139cf4(iVar3,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x020dd560(iVar3,param_2,4,0);
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x88);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02139cf4(iVar3,0);
    uVar1 = *(undefined4 *)(param_1 + 0xc);
  }
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x020ddf40(iVar3,uVar1,uStack_28,uStack_24,0,0,0);
  return;
}



// ===== FAT.TrainMissionActivity.<>c__DisplayClass98_0$$<WhenEnd>b__0 RVA 0x2b81b18 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b91b18(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int aiStack_20 [2];
  
  pcVar3 = (char *)(_UNK_02b91d04 + 0x2b91b34);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b91d08 + 0x2b91b48));
    func_0x01384978(*(undefined4 *)(_UNK_02b91d0c + 0x2b91b54));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 8);
  aiStack_20[1] = 0;
  aiStack_20[0] = 0;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 0x44);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0210e2d4(param_2,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_02b91d10 + 0x2b91bb8);
  iVar4 = func_0x0364bc1c(iVar4,uVar1,*puVar5);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x44);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar1 = func_0x0210e2d4(param_2,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0364bc1c(iVar4,uVar1,*puVar5);
    if (iVar4 == 0) {
      iVar4 = func_0x01c24918(0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar4 + 0x58);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar1 = func_0x0210e2d4(param_2,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x01dc688c(iVar4,uVar1,aiStack_20 + 1,aiStack_20,0);
      iVar4 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x10) = aiStack_20[0] + *(int *)(param_1 + 0x10);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar4 + 8);
      uVar7 = *(uint *)(iVar4 + 0xc);
      piVar2 = *(int **)(_UNK_02b91d14 + 0x2b91cb8);
      *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
      iVar8 = *piVar2;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      if (uVar7 < *(uint *)(iVar6 + 0xc)) {
        *(uint *)(iVar4 + 0xc) = uVar7 + 1;
        *(int *)(iVar6 + uVar7 * 4 + 0x10) = param_2;
      }
      else {
        func_0x0328f170(iVar4,param_2,
                        *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
      }
    }
  }
  return;
}



// ===== FAT.TrainMissionActivity.<>c__DisplayClass98_0$$<WhenEnd>b__1 RVA 0x2b81d18 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b91d18(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int aiStack_28 [2];
  
  pcVar4 = (char *)(_UNK_02b91e48 + 0x2b91d34);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b91e4c + 0x2b91d48));
    *pcVar4 = '\x01';
  }
  aiStack_28[1] = 0;
  aiStack_28[0] = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x58);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0210e2d4(param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dc688c(iVar1,uVar2,aiStack_28 + 1,aiStack_28,0);
  iVar1 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x10) = aiStack_28[0] + *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 8);
  uVar7 = *(uint *)(iVar1 + 0xc);
  piVar3 = *(int **)(_UNK_02b91e50 + 0x2b91dfc);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar5 = *piVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  if (uVar7 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar7 + 1;
    *(int *)(iVar6 + uVar7 * 4 + 0x10) = param_2;
  }
  else {
    func_0x0328f170(iVar1,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
  }
  return;
}


