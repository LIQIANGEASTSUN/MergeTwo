/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ActivityCastle$$get_Valid RVA 0x285d74c =====

uint FUN_0286d74c(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x5801,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5801,0);
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
  return (uint)(*(int *)(param_1 + 0x3c) != 0);
}



// ===== FAT.ActivityCastle$$get_Visual RVA 0x285d7a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0286d7a8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5802,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5802,0);
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
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== FAT.ActivityCastle$$get_VisualMain RVA 0x285d7fc =====

void FUN_0286d7fc(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x50);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ActivityCastle$$get_VisualEnd RVA 0x285d810 =====

void FUN_0286d810(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x5c);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ActivityCastle$$get_VisualBegin RVA 0x285d824 =====

void FUN_0286d824(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x68);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ActivityCastle$$get_Complete RVA 0x285d838 =====

undefined4 FUN_0286d838(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x5803,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5803,0);
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
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  return 0;
}



// ===== FAT.ActivityCastle$$get_Claimed RVA 0x285d88c =====

undefined1 FUN_0286d88c(int param_1)

{
  return *(undefined1 *)(param_1 + 0x6c);
}



// ===== FAT.ActivityCastle$$set_Claimed RVA 0x285d894 =====

void FUN_0286d894(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x6c) = param_2;
  return;
}



// ===== FAT.ActivityCastle$$get_Score RVA 0x285d89c =====

undefined4 FUN_0286d89c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5804,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5804,0);
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
  return *(undefined4 *)(param_1 + 0x74);
}



// ===== FAT.ActivityCastle$$get_ScorePhase RVA 0x285d8f0 =====

undefined4 FUN_0286d8f0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5805,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5805,0);
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
  return *(undefined4 *)(param_1 + 0x78);
}



// ===== FAT.ActivityCastle$$.ctor RVA 0x285d944 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0286d944(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_0286dbf4 + 0x286d960);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0286dbf8 + 0x286d974));
    func_0x01384978(*(undefined4 *)(_UNK_0286dbfc + 0x286d980));
    func_0x01384978(*(undefined4 *)(_UNK_0286dc00 + 0x286d98c));
    func_0x01384978(*(undefined4 *)(_UNK_0286dc04 + 0x286d998));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_0286dc08 + 0x286d9b0);
  uStack_28 = 0;
  iVar1 = *piVar5;
  uStack_20 = 0;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x02b64854(&uStack_38,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x348),0);
  iVar1 = *piVar5;
  *(undefined4 *)(param_1 + 0x50) = uStack_30;
  *(ulonglong *)(param_1 + 0x48) = CONCAT44(uStack_34,uStack_38);
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x02b64854(&uStack_48,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x344),0);
  iVar1 = *piVar5;
  *(undefined4 *)(param_1 + 0x5c) = uStack_40;
  *(ulonglong *)(param_1 + 0x54) = CONCAT44(uStack_44,uStack_48);
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  func_0x02b64854(&uStack_58,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x340),0);
  puVar2 = *(undefined4 **)(_UNK_0286dc0c + 0x286da6c);
  *(undefined4 *)(param_1 + 0x68) = uStack_50;
  *(ulonglong *)(param_1 + 0x60) = CONCAT44(uStack_54,uStack_58);
  uVar3 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar3,**(undefined4 **)(_UNK_0286dc10 + 0x286da88));
  puVar2 = *(undefined4 **)(_UNK_0286dc14 + 0x286da9c);
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  uVar3 = func_0x01384be4(*puVar2);
  func_0x0215c6b0(uVar3,0);
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  func_0x02b4dc04(param_1,0);
  *(int **)(param_1 + 0x10) = param_2;
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar3 = (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(*param_2 + 0x104));
  iVar1 = func_0x017bc458(uVar3,0);
  *(int *)(param_1 + 0x3c) = iVar1;
  if (iVar1 != 0) {
    uStack_28 = *(undefined8 *)(param_1 + 0x48);
    uStack_20 = *(undefined4 *)(param_1 + 0x50);
    func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x20),param_1,0,0,0);
    iVar1 = *(int *)(param_1 + 0x3c);
    uStack_28 = *(undefined8 *)(param_1 + 0x54);
    uStack_20 = *(undefined4 *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x24),param_1,0,0,0);
    uStack_28 = *(undefined8 *)(param_1 + 0x60);
    uStack_20 = *(undefined4 *)(param_1 + 0x68);
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x28),param_1,0,0,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar3 = *(undefined4 *)(param_1 + 0x84);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbb930(iVar1,uVar3,0);
  }
  return;
}



// ===== FAT.ActivityCastle$$SaveSetup RVA 0x285dc18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0286dc18(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 *puVar9;
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
  
  pcVar8 = (char *)(_UNK_0286dda8 + 0x286dc30);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0286ddac + 0x286dc44));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5806,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5806,0);
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
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  piVar6 = *(int **)(param_2 + 0x28);
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar7 = func_0x01c23578(1,*(undefined4 *)(*(int *)(param_1 + 0x40) + 0xc),0);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    func_0x03652b00(piVar6,uVar7,**(undefined4 **)(_UNK_0286ddb0 + 0x286dce0));
  }
  uVar7 = func_0x01c23578(2,*(undefined4 *)(param_1 + 0x74),0);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  puVar9 = *(undefined4 **)(_UNK_0286ddb4 + 0x286dd1c);
  func_0x03652b00(piVar6,uVar7,*puVar9);
  uVar7 = func_0x01c23578(3,*(undefined4 *)(param_1 + 0x78),0);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  func_0x03652b00(piVar6,uVar7,*puVar9);
  uVar7 = func_0x01c23ac8(4,*(undefined1 *)(param_1 + 0x7c),0);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  func_0x03652b00(piVar6,uVar7,*puVar9);
  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar8 = (char *)(_UNK_0215b6e0 + 0x215b5dc);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215b6e4 + 0x215b5f0),piVar6,1000,0);
    *pcVar8 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x5807,0);
  if (iVar5 != 0) {
    iVar5 = func_0x0229f13c(0x5807,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x0217b868(iVar5,iVar1,piVar6,1000);
    return;
  }
  uVar7 = func_0x01c23578(1000,*(undefined4 *)(iVar1 + 0x20),0);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar6;
  uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_0215b6e8 + 0x215b67c)) {
        puVar9 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xd0);
        goto LAB_0215b6c4;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar2 != 0);
  }
  puVar9 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_0215b6e8 + 0x215b67c),2);
LAB_0215b6c4:
                    /* WARNING: Could not recover jumptable at 0x0215b6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar9)(piVar6,uVar7,puVar9[1]);
  return;
}



// ===== FAT.ActivityCastle$$LoadSetup RVA 0x285ddb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0286ddb8(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar2 = func_0x0229f06c(0x5808,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5808,0);
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
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar7 = func_0x01c23c30(1,uVar5,0);
  uVar3 = func_0x01c23c30(2,uVar5,0);
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  uVar3 = func_0x01c23c30(3,uVar5,0);
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  uVar1 = func_0x01c23b88(4,uVar5,0);
  iVar2 = *(int *)(param_1 + 0x84);
  *(undefined1 *)(param_1 + 0x7c) = uVar1;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0215b6ec(iVar2,uVar5,1000,0);
  func_0x0286dec8(param_1,uVar7);
  iVar2 = func_0x0286e0c0(param_1);
  if (iVar2 != 0) {
    if (*(char *)(param_1 + 0x7c) != '\0') {
      return;
    }
    pcVar6 = (char *)(_UNK_0286e3d0 + 0x286e18c);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0286e3d4 + 0x286e1a0));
      func_0x01384978(*(undefined4 *)(_UNK_0286e3d8 + 0x286e1ac));
      func_0x01384978(*(undefined4 *)(_UNK_0286e3dc + 0x286e1b8));
      func_0x01384978(*(undefined4 *)(_UNK_0286e3e0 + 0x286e1c4));
      func_0x01384978(*(undefined4 *)(_UNK_0286e3e4 + 0x286e1d0));
      func_0x01384978(*(undefined4 *)(_UNK_0286e3e8 + 0x286e1dc));
      *pcVar6 = '\x01';
    }
    uStack_1c = 0;
    uStack_20 = 0;
    iStack_24 = 0;
    iVar2 = func_0x0229f06c(0x23e,0);
    if (iVar2 == 0) {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x4c);
      uVar7 = *(undefined4 *)(param_1 + 0x84);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01dbba60(iVar2,uVar7,0);
      if (*(int *)(**(int **)(_UNK_0286e3ec + 0x286e280) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x028c8d78(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a7c0(&uStack_20,iVar2,&iStack_24,**(undefined4 **)(_UNK_0286e3f0 + 0x286e2bc));
      iVar2 = *(int *)(param_1 + 0x3c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar4 = iStack_24;
      piVar8 = *(int **)(_UNK_0286e3f4 + 0x286e2e0);
      uVar7 = *(undefined4 *)(iVar2 + 0x2c);
      iVar2 = *piVar8;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar8;
      }
      uStack_38 = 0;
      func_0x02b4aed4(uVar7,iVar4,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x1dc),0);
      iVar2 = iStack_24;
      *(undefined1 *)(param_1 + 0x7c) = 1;
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar2 + 0xc) < 1) {
        func_0x03633b24(&uStack_20,**(undefined4 **)(_UNK_0286e3fc + 0x286e3c0));
      }
      else {
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar3 = *(undefined4 *)(param_1 + 0x5c);
        iVar2 = *(int *)(iVar2 + 0xfc);
        uStack_30 = uStack_20;
        uStack_2c = uStack_1c;
        uVar7 = func_0x01384abc(**(undefined4 **)(_UNK_0286e3f8 + 0x286e374),&uStack_30);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = 0;
        func_0x01e7437c(iVar2,uVar3,0,uVar7);
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x23e,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x02173f80(iVar2,param_1,0);
    }
    return;
  }
  return;
}



// ===== FAT.ActivityCastle$$SetupDetail RVA 0x285dec8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0286dec8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_0286e09c + 0x286dee4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0286e0a0 + 0x286def8));
    func_0x01384978(*(undefined4 *)(_UNK_0286e0a4 + 0x286df04));
    func_0x01384978(*(undefined4 *)(_UNK_0286e0a8 + 0x286df10));
    func_0x01384978(*(undefined4 *)(_UNK_0286e0ac + 0x286df1c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x580a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x580a,0);
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
  iVar1 = func_0x017bc914(param_2,0);
  *(int *)(param_1 + 0x40) = iVar1;
  if (iVar1 == 0) {
    uStack_1c = param_2;
    uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_0286e0b0 + 0x286e048),&uStack_1c);
    uVar4 = func_0x046604e4(**(undefined4 **)(_UNK_0286e0b4 + 0x286e064),uVar4,0);
    if (*(int *)(**(int **)(_UNK_0286e0b8 + 0x286e078) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar4,0);
  }
  else {
    iVar1 = func_0x0286e0c0(param_1);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x40);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      uVar4 = *(undefined4 *)(param_1 + 0x78);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x0364c9b8(iVar1,uVar4,**(undefined4 **)(_UNK_0286e0bc + 0x286dfcc));
      iVar1 = func_0x017bcdd0(uVar4,0);
      iVar3 = *(int *)(param_1 + 0x84);
      *(int *)(param_1 + 0x44) = iVar1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = *(undefined4 *)(iVar1 + 0xc);
      uVar7 = *(undefined4 *)(iVar1 + 0x34);
      uVar6 = *(undefined4 *)(iVar1 + 0x40);
      uVar2 = *(undefined4 *)(iVar1 + 0x48);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_28 = uVar2;
      func_0x0215b76c(iVar3,uVar4,uVar6,uVar7);
    }
  }
  return;
}



// ===== FAT.ActivityCastle$$IsComplete RVA 0x285e0c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0286e0c0(int param_1)

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
  
  pcVar5 = (char *)(_UNK_0286e16c + 0x286e0d4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0286e170 + 0x286e0e8));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x237,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x237,0);
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
  iVar4 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 0x18);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  return (uint)(*(int *)(iVar4 + 0xc) <= iVar2);
}



// ===== FAT.ActivityCastle$$TryConvert RVA 0x285e174 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0286e174(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_0286e3d0 + 0x286e18c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0286e3d4 + 0x286e1a0));
    func_0x01384978(*(undefined4 *)(_UNK_0286e3d8 + 0x286e1ac));
    func_0x01384978(*(undefined4 *)(_UNK_0286e3dc + 0x286e1b8));
    func_0x01384978(*(undefined4 *)(_UNK_0286e3e0 + 0x286e1c4));
    func_0x01384978(*(undefined4 *)(_UNK_0286e3e4 + 0x286e1d0));
    func_0x01384978(*(undefined4 *)(_UNK_0286e3e8 + 0x286e1dc));
    *pcVar4 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  iStack_24 = 0;
  iVar2 = func_0x0229f06c(0x23e,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x4c);
    uVar5 = *(undefined4 *)(param_1 + 0x84);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbba60(iVar2,uVar5,0);
    if (*(int *)(**(int **)(_UNK_0286e3ec + 0x286e280) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x028c8d78(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0302a7c0(&uStack_20,iVar2,&iStack_24,**(undefined4 **)(_UNK_0286e3f0 + 0x286e2bc));
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = iStack_24;
    piVar6 = *(int **)(_UNK_0286e3f4 + 0x286e2e0);
    uVar5 = *(undefined4 *)(iVar2 + 0x2c);
    iVar2 = *piVar6;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar6;
    }
    func_0x02b4aed4(uVar5,iVar1,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x1dc),0,0);
    iVar2 = iStack_24;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar2 + 0xc) < 1) {
      func_0x03633b24(&uStack_20,**(undefined4 **)(_UNK_0286e3fc + 0x286e3c0));
    }
    else {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = *(undefined4 *)(param_1 + 0x5c);
      iVar2 = *(int *)(iVar2 + 0xfc);
      uStack_30 = uStack_20;
      uStack_2c = uStack_1c;
      uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_0286e3f8 + 0x286e374),&uStack_30);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01e7437c(iVar2,uVar3,0,uVar5,0);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x23e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.ActivityCastle$$SetupFresh RVA 0x285e400 =====

void FUN_0286e400(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x580b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x580b,0);
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
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar1 = *(int *)(iVar1 + 0x2c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = *(undefined4 *)(iVar3 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x01cf6408(iVar1,uVar4,0);
  FUN_0286dec8(param_1,uVar4);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xfc);
  uVar4 = *(undefined4 *)(param_1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = 0;
  func_0x01e7437c(iVar1,uVar4,0,0);
  *(undefined4 *)(param_1 + 0x80) = 1;
  return;
}



// ===== FAT.ActivityCastle$$ResEnumerate RVA 0x285e504 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0286e504(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_0286e5b0 + 0x286e518);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0286e5b4 + 0x286e52c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x580d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x580d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021c7568 + 0x21c7488);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c756c + 0x21c749c),param_1,0);
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
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7570 + 0x21c7558));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0286e5b8 + 0x286e584));
  func_0x0286f864(iVar1,0xfffffffe,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  return iVar1;
}



// ===== FAT.ActivityCastle$$TryPopup RVA 0x285e5bc =====

void FUN_0286e5bc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x5819,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0286e0c0(param_1);
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x80) != 1)) {
      uVar2 = *(undefined4 *)(param_1 + 0x50);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x01e7437c(param_2,uVar2,param_3,0,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5819,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityCastle$$Open RVA 0x285e670 =====

/* WARNING: Possible PIC construction at 0x019a8984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x019a8988) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0286e670(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  int unaff_r5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 unaff_r6;
  char *pcVar8;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
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
  int iStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iVar1 = func_0x0229f06c(0x581a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x581a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
    *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
    *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r4;
    *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)register0x00000054 + -0x24) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
    func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
    iVar4 = *(int *)(iVar1 + 0x10);
    *(undefined4 *)((int)register0x00000054 + -0x30) =
         *(undefined4 *)((int)register0x00000054 + -0x48);
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((int)register0x00000054 + -0x44);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((int)register0x00000054 + -0x40);
    *(undefined4 *)((int)register0x00000054 + -0x24) =
         *(undefined4 *)((int)register0x00000054 + -0x3c);
    *(undefined4 *)((int)register0x00000054 + -0x20) =
         *(undefined4 *)((int)register0x00000054 + -0x38);
    if (iVar4 != 0) {
      func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar4,0);
    }
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
    func_0x0245495c(iVar4,uVar7,(undefined1 *)((int)register0x00000054 + -0x30),uVar5);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  iVar4 = func_0x0229f06c(0x1724,0,0);
  if (iVar4 == 0) {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 0xc);
    pcVar8 = (char *)(_UNK_02b4db08 + 0x2b4d9f0);
    uStack_18 = unaff_r4;
    iStack_14 = unaff_r5;
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b4db0c + 0x2b4da04));
      func_0x01384978(*(undefined4 *)(_UNK_02b4db10 + 0x2b4da10));
      *pcVar8 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x13da,0);
    if (iVar1 == 0) {
      iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_02b4db14 + 0x2b4da6c));
      piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02b4db18 + 0x2b4da84),1);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((param_1 != 0) &&
         (iVar2 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar3 + 0x20)), iVar2 == 0)) {
        uVar7 = func_0x01384c10();
        func_0x01384aa0(uVar7,0);
      }
      if (piVar3[3] == 0) {
        func_0x01384bf4();
      }
      piVar3[4] = param_1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee858c(iVar1,iVar4,piVar3,0);
      iStack_1c = iStack_14;
      uStack_20 = uStack_18;
      pcVar8 = (char *)(_UNK_019a8b30 + 0x19a88e4);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_019a8b34 + 0x19a88f8),0);
        func_0x01384978(*(undefined4 *)(_UNK_019a8b38 + 0x19a8904));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b3c + 0x19a8910));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b40 + 0x19a891c));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b44 + 0x19a8928));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b48 + 0x19a8934));
        *pcVar8 = '\x01';
      }
      uStack_24 = 0;
      uStack_28 = 0;
      iVar1 = func_0x0229f06c(0x94b,0);
      if (iVar1 == 0) {
        piVar3 = *(int **)(_UNK_019a8b4c + 0x19a8998);
        if (*(int *)(*piVar3 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x02f74dec(**(undefined4 **)(_UNK_019a8b50 + 0x19a89b4));
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        func_0x02b489c0(&uStack_38,param_1,0);
        uVar5 = uStack_34;
        uVar7 = uStack_38;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar1 + 0x54) = uStack_30;
        *(undefined4 *)(iVar1 + 0x48) = uVar7;
        *(undefined4 *)(iVar1 + 0x4c) = uVar5;
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        uVar7 = func_0x02b3c4a4(param_1,0);
        *(undefined4 *)(iVar1 + 0x50) = uVar7;
        iVar4 = func_0x01c24918(0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0xc);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar4 + 8) == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(**(int **)(_UNK_019a8b54 + 0x19a8a58) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x024500d4(&uStack_38,0);
        uStack_28 = uStack_38;
        uStack_24 = uStack_34;
        uVar7 = func_0x01486058(&uStack_28,**(undefined4 **)(_UNK_019a8b58 + 0x19a8a84),0);
        *(undefined4 *)(iVar1 + 0x58) = uVar7;
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        uVar6 = 0;
        uVar7 = func_0x02b449f8(param_1,0);
        if (*(int *)(**(int **)(_UNK_019a8b5c + 0x19a8ac8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar4 = func_0x036a1750(uVar7,**(undefined4 **)(_UNK_019a8b60 + 0x19a8ae4));
        if ((iVar4 != 0) && (uVar6 = 0, *(char *)(iVar4 + 0x2c) != '\0')) {
          uVar6 = 1;
        }
        iVar4 = *(int *)(*piVar3 + 0x74);
        *(undefined1 *)(iVar1 + 0x5c) = uVar6;
        if (iVar4 == 0) {
          func_0x01384ab4();
        }
        func_0x019930d8(iVar1,0,0);
        return;
      }
      iVar1 = func_0x0229f13c(0x94b,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      unaff_lr = 0x19a8988;
      unaff_r4 = uStack_18;
      unaff_r5 = iVar1;
      register0x00000054 = (BADSPACEBASE *)&uStack_38;
      goto SUB_02173f80;
    }
    iVar2 = func_0x0229f13c(0x13da,0);
    iVar1 = param_1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x1724,0);
    iVar4 = param_1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar4,0);
  func_0x01485278(&uStack_38,iVar1,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar1 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar4,uVar7,&uStack_38,uVar5,0,0);
  return;
}



// ===== FAT.ActivityCastle$$WhenEnd RVA 0x285e6d0 =====

/* WARNING: Possible PIC construction at 0x0286e230: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0286e234) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0286e6d0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  char *pcVar5;
  int unaff_r5;
  undefined4 uVar6;
  undefined4 unaff_r6;
  int *piVar7;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined4 auStack_38 [2];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar2 = func_0x0229f06c(0x581b,0);
  if (iVar2 == 0) {
    iVar2 = FUN_0286e0c0(param_1);
    cVar1 = '\0';
    if (iVar2 != 0) {
      cVar1 = *(char *)(param_1 + 0x7c);
    }
    if (iVar2 != 0 && cVar1 != '\0') {
      return;
    }
    pcVar5 = (char *)(_UNK_0286e3d0 + 0x286e18c);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0286e3d4 + 0x286e1a0));
      func_0x01384978(*(undefined4 *)(_UNK_0286e3d8 + 0x286e1ac));
      func_0x01384978(*(undefined4 *)(_UNK_0286e3dc + 0x286e1b8));
      func_0x01384978(*(undefined4 *)(_UNK_0286e3e0 + 0x286e1c4));
      func_0x01384978(*(undefined4 *)(_UNK_0286e3e4 + 0x286e1d0));
      func_0x01384978(*(undefined4 *)(_UNK_0286e3e8 + 0x286e1dc));
      *pcVar5 = '\x01';
    }
    uStack_1c = 0;
    uStack_20 = 0;
    iStack_24 = 0;
    iVar2 = func_0x0229f06c(0x23e,0);
    if (iVar2 == 0) {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x4c);
      uVar6 = *(undefined4 *)(param_1 + 0x84);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01dbba60(iVar2,uVar6,0);
      if (*(int *)(**(int **)(_UNK_0286e3ec + 0x286e280) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x028c8d78(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a7c0(&uStack_20,iVar2,&iStack_24,**(undefined4 **)(_UNK_0286e3f0 + 0x286e2bc));
      iVar2 = *(int *)(param_1 + 0x3c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar3 = iStack_24;
      piVar7 = *(int **)(_UNK_0286e3f4 + 0x286e2e0);
      uVar6 = *(undefined4 *)(iVar2 + 0x2c);
      iVar2 = *piVar7;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar7;
      }
      auStack_38[0] = 0;
      func_0x02b4aed4(uVar6,iVar3,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x1dc),0);
      iVar2 = iStack_24;
      *(undefined1 *)(param_1 + 0x7c) = 1;
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar2 + 0xc) < 1) {
        func_0x03633b24(&uStack_20,**(undefined4 **)(_UNK_0286e3fc + 0x286e3c0));
      }
      else {
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar4 = *(undefined4 *)(param_1 + 0x5c);
        iVar2 = *(int *)(iVar2 + 0xfc);
        uStack_30 = uStack_20;
        uStack_2c = uStack_1c;
        uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_0286e3f8 + 0x286e374),&uStack_30);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        auStack_38[0] = 0;
        func_0x01e7437c(iVar2,uVar4,0,uVar6);
      }
      return;
    }
    iVar2 = func_0x0229f13c(0x23e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x286e234;
    unaff_r4 = param_1;
    unaff_r5 = iVar2;
    register0x00000054 = (BADSPACEBASE *)auStack_38;
  }
  else {
    iVar2 = func_0x0229f13c(0x581b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar3 = *(int *)(iVar2 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar3 = *(int *)(iVar2 + 8);
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar3,uVar6,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
  return;
}



// ===== FAT.ActivityCastle$$AddMilestoneScore RVA 0x285e744 =====

/* WARNING: Removing unreachable block (ram,0x0286ed30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0286e744(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int extraout_r2;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(iRam0286f120 + 0x286e760);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(iRam0286f124 + 0x286e774));
    func_0x01384978(*(undefined4 *)(iRam0286f128 + 0x286e780));
    func_0x01384978(*(undefined4 *)(iRam0286f12c + 0x286e78c));
    func_0x01384978(*(undefined4 *)(iRam0286f130 + 0x286e798));
    func_0x01384978(*(undefined4 *)(iRam0286f134 + 0x286e7a4));
    func_0x01384978(*(undefined4 *)(iRam0286f138 + 0x286e7b0));
    func_0x01384978(*(undefined4 *)(iRam0286f13c + 0x286e7bc));
    func_0x01384978(*(undefined4 *)(iRam0286f140 + 0x286e7c8));
    func_0x01384978(*(undefined4 *)(iRam0286f144 + 0x286e7d4));
    func_0x01384978(*(undefined4 *)(iRam0286f148 + 0x286e7e0));
    func_0x01384978(*(undefined4 *)(iRam0286f14c + 0x286e7ec));
    func_0x01384978(*(undefined4 *)(iRam0286f150 + 0x286e7f8));
    func_0x01384978(*(undefined4 *)(iRam0286f154 + 0x286e804));
    func_0x01384978(*(undefined4 *)(iRam0286f158 + 0x286e810));
    func_0x01384978(*(undefined4 *)(iRam0286f15c + 0x286e81c));
    func_0x01384978(*(undefined4 *)(iRam0286f160 + 0x286e828));
    func_0x01384978(*(undefined4 *)(iRam0286f164 + 0x286e834));
    func_0x01384978(*(undefined4 *)(iRam0286f168 + 0x286e840));
    func_0x01384978(*(undefined4 *)(iRam0286f16c + 0x286e84c));
    func_0x01384978(*(undefined4 *)(iRam0286f170 + 0x286e858));
    func_0x01384978(*(undefined4 *)(iRam0286f174 + 0x286e864));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x235,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x235,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485238(&iStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    iStack_58 = 0;
    iStack_54 = 0;
    iVar1 = func_0x0245495c(iVar9,uVar11,&iStack_38,uVar5);
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(iRam0286f178 + 0x286e8c4));
  func_0x0286f3cc(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 0xc) = param_1;
  uStack_2c = iVar1;
  iVar1 = FUN_0286e0c0(param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar9 = *(int *)(param_1 + 0x74);
  iVar1 = **(int **)(iRam0286f17c + 0x286e90c);
  *(int *)(uStack_2c + 8) = iVar9;
  *(int *)(param_1 + 0x74) = iVar9 + param_2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(iRam0286f180 + 0x286e93c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0349e110(iVar1,param_2,**(undefined4 **)(iRam0286f184 + 0x286e960));
LAB_0286e96c:
  iVar9 = *(int *)(param_1 + 0x44);
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar9 + 0x2c);
  if (iVar1 < iVar9) {
    return iVar9;
  }
  iVar1 = FUN_0286e0c0(param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(iRam0286f188 + 0x286e9a8));
  func_0x0286f3d4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(param_1 + 0x44);
  iVar10 = *(int *)(param_1 + 0x74);
  *(uint *)(iVar1 + 0xc) = uStack_2c;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(param_1 + 0x70);
  *(int *)(param_1 + 0x74) = iVar10 - *(int *)(iVar9 + 0x2c);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar8 + 0xc);
  *(undefined4 *)(iVar8 + 0xc) = 0;
  *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
  if (0 < iVar9) {
    func_0x0484e5ec(*(undefined4 *)(iVar8 + 8),0,iVar9,0);
  }
  iVar9 = *(int *)(param_1 + 0x44);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar9 + 0x20);
  iStack_28 = iVar1;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x03653608(iVar9,**(undefined4 **)(iRam0286f18c + 0x286ea58));
LAB_0286ea64:
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(iRam0286f1ac + 0x286ea80)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_0286eac8;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam0286f1ac + 0x286ea80),0);
LAB_0286eac8:
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
        if (piVar6[-1] == **(int **)(iRam0286f190 + 0x286eafc)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_0286eb44;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam0286f190 + 0x286eafc),0);
LAB_0286eb44:
    uVar11 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (*(int *)(**(int **)(iRam0286f194 + 0x286eb64) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x02565a88(uVar11,0);
    iVar9 = func_0x01c24918(0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = **(int **)(iRam0286f198 + 0x286ebb8);
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = **(int **)(iRam0286f19c + 0x286ebdc);
    }
    uVar12 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x1e0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iStack_38 = **(int **)(iRam0286f1a0 + 0x286ebfc);
    uStack_34 = **(undefined4 **)(iRam0286f1a4 + 0x286ec08);
    uStack_3c = 0xa6;
    uStack_30 = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uVar11 = func_0x01cdcbac(iVar9,uVar5,uVar11,uVar12);
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar1 + 8);
    uVar4 = *(uint *)(iVar1 + 0xc);
    piVar6 = *(int **)(iRam0286f1a8 + 0x286ec6c);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    iVar10 = *piVar6;
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    if (uVar4 < *(uint *)(iVar9 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar4 + 1;
      *(undefined4 *)(iVar9 + uVar4 * 4 + 0x10) = uVar11;
    }
    else {
      func_0x0328f170(iVar1,uVar11,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38))
      ;
    }
    goto LAB_0286ea64;
  }
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(iRam0286f1b0 + 0x286ecd0)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_0286ed18;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam0286f1b0 + 0x286ecd0),0);
LAB_0286ed18:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  iVar9 = *(int *)(param_1 + 0x40);
  iVar1 = *(int *)(param_1 + 0x78) + 1;
  *(int *)(param_1 + 0x78) = iVar1;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar9 + 0x18);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(param_1 + 0x40);
  piVar2 = *(int **)(iVar9 + 0xc);
  iVar9 = iVar10;
  if (iVar10 == 0) {
    func_0x01384bf0();
    iVar9 = *(int *)(param_1 + 0x40);
    if (iVar9 == 0) goto LAB_0286f08c;
  }
  iVar9 = *(int *)(iVar9 + 0x18);
  iVar8 = *(int *)(param_1 + 0x78);
  uVar11 = *(undefined4 *)(iVar10 + 0x14);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uStack_48 = 1;
  uStack_44 = (uint)(iVar8 == *(int *)(iVar9 + 0xc));
  uStack_40 = 0;
  func_0x019b4d28(param_1,iVar1,piVar2,uVar11);
  if (*(int *)(**(int **)(iRam0286f1b4 + 0x286eddc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar9 = func_0x0300d558(**(undefined4 **)(iRam0286f1b8 + 0x286edf8));
  iVar1 = iStack_28;
  uVar11 = *(undefined4 *)(param_1 + 0x44);
  uVar5 = *(undefined4 *)(param_1 + 0x70);
  uVar12 = *(undefined4 *)(param_1 + 0x74);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uStack_48 = **(undefined4 **)(iRam0286f1bc + 0x286ee30);
  func_0x034a651c(iVar9,uVar12,uVar5,uVar11);
  iVar9 = func_0x034aaa34(**(undefined4 **)(iRam0286f1c0 + 0x286ee48));
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar9 = func_0x01ee9300(iVar9,0);
  if (iVar9 == 0) {
    iVar9 = func_0x034aaa34(**(undefined4 **)(iRam0286f1c4 + 0x286ee7c));
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    func_0x01ee9374(iVar9,1,0);
  }
  uVar11 = *(undefined4 *)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar3 = *(undefined4 **)(iRam0286f1c8 + 0x286eebc);
  *(undefined4 *)(iVar1 + 8) = uVar11;
  iVar9 = func_0x03668dfc(*puVar3);
  uVar11 = func_0x0286f3dc(iVar1,0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x01c36290(iVar9,uVar11,0);
  iVar9 = *(int *)(param_1 + 0x40);
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(iVar9 + 0x18);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  if (iVar1 < *(int *)(iVar9 + 0xc)) {
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    uVar11 = *(undefined4 *)(param_1 + 0x78);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar11 = func_0x0364c9b8(iVar1,uVar11,**(undefined4 **)(iRam0286f1cc + 0x286ef58));
    iVar9 = func_0x017bcdd0(uVar11,0);
    iVar1 = *(int *)(param_1 + 0x84);
    *(int *)(param_1 + 0x44) = iVar9;
    if (iVar9 == 0) {
      func_0x01384bf0();
      piVar2 = piRam0000000c;
      iVar9 = *(int *)(param_1 + 0x44);
      if (iVar9 != 0) goto LAB_0286efd8;
      func_0x01384bf0();
      uVar11 = uRam00000040;
      iVar9 = *(int *)(param_1 + 0x44);
      iVar10 = iVar9;
      if (iVar9 == 0) {
        func_0x01384bf0();
        iVar10 = *(int *)(param_1 + 0x44);
        if (*(int *)(param_1 + 0x44) == 0) goto LAB_0286f08c;
      }
    }
    else {
      piVar2 = *(int **)(iVar9 + 0xc);
LAB_0286efd8:
      uVar11 = *(undefined4 *)(iVar9 + 0x40);
      iVar10 = iVar9;
    }
    uVar12 = *(undefined4 *)(iVar10 + 0x48);
    uVar5 = *(undefined4 *)(iVar9 + 0x34);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_48 = uVar12;
    func_0x0215b76c(iVar1,piVar2,uVar11,uVar5);
  }
  else {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar11 = *(undefined4 *)(param_1 + 0x84);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbba60(iVar1,uVar11,0);
  }
  goto LAB_0286e96c;
LAB_0286f08c:
  iVar9 = func_0x01384bf0();
  if (piVar2 != (int *)0x0) {
    iVar10 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(iRam0286f1d0 + 0x286f0ac)) {
          puVar3 = (undefined4 *)(iVar10 + *piVar6 * 8 + 0xc0);
          goto LAB_0286f0f4;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam0286f1d0 + 0x286f0ac),0);
LAB_0286f0f4:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  uVar14 = iVar1 == 0;
  uVar13 = 1;
  if (!(bool)uVar14) {
    func_0x01384bec(iVar1);
  }
  func_0x01459844(iVar9);
  iVar10 = func_0x01062280();
  if ((bool)uVar14) {
    iVar1 = 0x20000 - (extraout_r2 + (uint)!(bool)uVar13);
    iVar9 = 0xdc00 - ((0x600 - ((0x60 - ((0xa0 - (iVar9 + (uint)!(bool)uVar13)) +
                                        (uint)!(bool)uVar13)) + (uint)!(bool)uVar13)) +
                     (uint)!(bool)uVar13);
  }
  uStack_4c = 0x286f120;
  pcVar7 = (char *)(_UNK_0286f2cc + 0x286f1ec);
  iStack_58 = iVar9;
  iStack_54 = iVar1;
  iStack_50 = param_1;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0286f2d0 + 0x286f200));
    func_0x01384978(*(undefined4 *)(_UNK_0286f2d4 + 0x286f20c));
    *pcVar7 = '\x01';
  }
  iStack_5c = 0;
  iVar1 = func_0x0229f06c(0x581c,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar10 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_60 = func_0x02b617fc(iVar1,0);
    func_0x02b63e8c(&uStack_60,**(undefined4 **)(_UNK_0286f2d8 + 0x286f290),&iStack_5c,0);
    iVar1 = func_0x0467229c(iStack_5c,0);
    if (iVar1 != 0) {
      iStack_5c = **(int **)(_UNK_0286f2dc + 0x286f2bc);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x581c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_5c = func_0x02173e78(iVar1,iVar10,0);
  }
  return iStack_5c;
}



// ===== FAT.ActivityCastle$$BoardEntryAsset RVA 0x285f1d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0286f1d4(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_0286f2cc + 0x286f1ec);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0286f2d0 + 0x286f200));
    func_0x01384978(*(undefined4 *)(_UNK_0286f2d4 + 0x286f20c));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x581c,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = func_0x02b617fc(iVar1,0);
    func_0x02b63e8c(&uStack_18,**(undefined4 **)(_UNK_0286f2d8 + 0x286f290),&uStack_14,0);
    iVar1 = func_0x0467229c(uStack_14,0);
    if (iVar1 != 0) {
      uStack_14 = **(undefined4 **)(_UNK_0286f2dc + 0x286f2bc);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x581c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityCastle$$get_BoardEntryVisible RVA 0x285f2e0 =====

uint FUN_0286f2e0(undefined4 param_1)

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
  
  iVar2 = func_0x0229f06c(0x581d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x581d,0);
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
  uVar1 = FUN_0286e0c0(param_1);
  return uVar1 ^ 1;
}



// ===== FAT.ActivityCastle$$get_EntryVisible RVA 0x285f33c =====

uint FUN_0286f33c(undefined4 param_1)

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
  
  iVar2 = func_0x0229f06c(0x581e,0);
  if (iVar2 == 0) {
    iVar2 = func_0x0229f06c(0x581d,0);
    if (iVar2 == 0) {
      uVar1 = FUN_0286e0c0(param_1);
      return uVar1 ^ 1;
    }
    iVar2 = func_0x0229f13c(0x581d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x581e,0);
    if (iVar2 == 0) {
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



// ===== FAT.ActivityCastle$$<>iFixBaseProxy_get_Valid RVA 0x285f394 =====

void FUN_0286f394(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
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
  
  iVar1 = func_0x0229f06c(0x127,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x127,0);
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
    func_0x0245496c(&uStack_30,0,0);
    return;
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x02b4cb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x130))(piVar3,*(undefined4 *)(*piVar3 + 0x134));
  return;
}



// ===== FAT.ActivityCastle$$<>iFixBaseProxy_get_Visual RVA 0x285f39c =====

undefined4 FUN_0286f39c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.ActivityCastle$$<>iFixBaseProxy_SetupFresh RVA 0x285f3a4 =====

void FUN_0286f3a4(undefined4 param_1)

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



// ===== FAT.ActivityCastle$$<>iFixBaseProxy_ResEnumerate RVA 0x285f3ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0286f3ac(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x3189,0);
  if (iVar1 == 0) {
    param_1 = (int *)(**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02b61df8 + 0x2b61d5c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b61dfc + 0x2b61d70),0);
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x1395,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b61e00 + 0x2b61dc8));
      func_0x04874ed4(iVar1,0);
      *(undefined4 *)(iVar1 + 8) = 0xfffffffe;
      uVar5 = func_0x048799ac(0);
      *(undefined4 *)(iVar1 + 0x14) = uVar5;
      *(int **)(iVar1 + 0x18) = param_1;
      return iVar1;
    }
    iVar1 = func_0x0229f13c(0x1395,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x3189,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar4 = (char *)(_UNK_021c7568 + 0x21c7488);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021c756c + 0x21c749c),param_1,0);
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
  iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7570 + 0x21c7558));
  return iVar1;
}



// ===== FAT.ActivityCastle$$<>iFixBaseProxy_TryPopup RVA 0x285f3b4 =====

void FUN_0286f3b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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



// ===== FAT.ActivityCastle$$<>iFixBaseProxy_WhenEnd RVA 0x285f3bc =====

void FUN_0286f3bc(undefined4 param_1)

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



// ===== FAT.ActivityCastle$$<>iFixBaseProxy_get_EntryVisible RVA 0x285f3c4 =====

uint FUN_0286f3c4(int *param_1)

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
  
  iVar2 = func_0x0229f06c(0x1ae3,0);
  if (iVar2 == 0) {
    param_1 = (int *)(**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229f06c(0x1ae4,0);
    if (iVar2 == 0) {
      return (uint)(param_1[3] != 0);
    }
    iVar2 = func_0x0229f13c(0x1ae4,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x1ae3,0);
    if (iVar2 == 0) {
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



// ===== FAT.ActivityCastle.<>c__DisplayClass42_0$$.ctor RVA 0x285f3cc =====

void FUN_0286f3cc(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityCastle.<>c__DisplayClass42_1$$.ctor RVA 0x285f3d4 =====

void FUN_0286f3d4(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityCastle.<>c__DisplayClass42_1$$<AddMilestoneScore>g__Enumerator|0 RVA 0x285f3dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0286f3dc(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0286f43c + 0x286f3f0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0286f440 + 0x286f404));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0286f444 + 0x286f418));
  func_0x0244f5a0(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ===== FAT.ActivityCastle.<>c__DisplayClass42_1.<<AddMilestoneScore>g__Enumerator|0>d$$.ctor RVA 0x285f448 =====

void FUN_0286f448(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.ActivityCastle.<>c__DisplayClass42_1.<<AddMilestoneScore>g__Enumerator|0>d$$System.IDisposable.Dispose RVA 0x285f464 =====

void FUN_0286f464(void)

{
  return;
}



// ===== FAT.ActivityCastle.<>c__DisplayClass42_1.<<AddMilestoneScore>g__Enumerator|0>d$$MoveNext RVA 0x285f468 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0286f468(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_0286f7ec + 0x286f480);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0286f7f0 + 0x286f494));
    func_0x01384978(*(undefined4 *)(_UNK_0286f7f4 + 0x286f4a0));
    func_0x01384978(*(undefined4 *)(_UNK_0286f7f8 + 0x286f4ac));
    func_0x01384978(*(undefined4 *)(_UNK_0286f7fc + 0x286f4b8));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    iVar8 = *(int *)(param_1 + 0x10);
    puVar1 = *(undefined4 **)(_UNK_0286f804 + 0x286f524);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    piVar3 = (int *)func_0x01384a00(*puVar1,3);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar8 + 8);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar7 != 0) && (iVar4 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)
       ) {
      uVar6 = func_0x01384c10();
      func_0x01384aa0(uVar6,0);
    }
    if (piVar3[3] == 0) {
      func_0x01384bf4();
    }
    piVar3[4] = iVar7;
    iVar7 = *(int *)(iVar8 + 0xc);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = *(undefined4 *)(iVar7 + 8);
    iVar7 = func_0x01384abc(**(undefined4 **)(_UNK_0286f808 + 0x286f5b0),&uStack_1c);
    if ((iVar7 != 0) && (iVar4 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)
       ) {
      uVar6 = func_0x01384c10();
      func_0x01384aa0(uVar6,0);
    }
    if ((uint)piVar3[3] < 2) {
      func_0x01384bf4();
    }
    piVar3[5] = iVar7;
    iVar7 = *(int *)(iVar8 + 0xc);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar7 + 0xc);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar7 + 0x70);
    if ((iVar7 != 0) && (iVar4 = func_0x01384ab8(iVar7,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)
       ) {
      uVar6 = func_0x01384c10();
      func_0x01384aa0(uVar6,0);
    }
    if ((uint)piVar3[3] < 3) {
      func_0x01384bf4();
    }
    piVar3[6] = iVar7;
    iVar7 = func_0x01c24918(0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar8 + 0xc);
    iVar7 = *(int *)(iVar7 + 0xfc);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0xc);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(iVar4 + 0x50);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x01e7437c(iVar7,uVar6,0,piVar3,0);
    iVar7 = *(int *)(iVar8 + 0xc);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar7 + 0xc);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = FUN_0286e0c0(iVar7,0);
    if (iVar7 != 0) {
      iVar7 = *(int *)(iVar8 + 0xc);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(iVar7 + 0xc);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      FUN_0286e174(iVar7,0);
      iVar7 = func_0x01c24918(0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar8 + 0xc);
      iVar8 = *(int *)(iVar7 + 0xd8);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar6 = *(undefined4 *)(iVar4 + 0xc);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x02b49350(iVar8,uVar6,0,0);
    }
    puVar1 = *(undefined4 **)(_UNK_0286f80c + 0x286f788);
    iVar8 = func_0x034aaa34(*puVar1);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 0;
    iVar8 = func_0x01ee9300(iVar8,0);
    if (iVar8 != 0) {
      iVar8 = func_0x034aaa34(*puVar1);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar6 = 0;
      func_0x01ee9374(iVar8,0,0);
    }
  }
  else {
    uVar6 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      puVar1 = *(undefined4 **)(_UNK_0286f800 + 0x286f4e8);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar2 = func_0x01384be4(*puVar1);
      func_0x0245031c(uVar2,0x3fc00000,0);
      uVar6 = 1;
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar6;
}



// ===== FAT.ActivityCastle.<>c__DisplayClass42_1.<<AddMilestoneScore>g__Enumerator|0>d$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x285f810 =====

undefined4 FUN_0286f810(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.ActivityCastle.<>c__DisplayClass42_1.<<AddMilestoneScore>g__Enumerator|0>d$$System.Collections.IEnumerator.Reset RVA 0x285f818 =====

undefined4 FUN_0286f818(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  func_0x01384988(*(undefined4 *)(iRam0286f854 + 0x286f828));
  uVar1 = func_0x01384be4();
  func_0x04827f0c(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam0286f858 + 0x286f844));
  func_0x01384aa0(uVar1,uVar2);
  iVar3 = func_0x01384928();
  return *(undefined4 *)(iVar3 + 0xc);
}



// ===== FAT.ActivityCastle.<>c__DisplayClass42_1.<<AddMilestoneScore>g__Enumerator|0>d$$System.Collections.IEnumerator.get_Current RVA 0x285f85c =====

undefined4 FUN_0286f85c(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.ActivityCastle.<ResEnumerate>d__37$$.ctor RVA 0x285f864 =====

void FUN_0286f864(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  uVar1 = func_0x0245057c(0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}



// ===== FAT.ActivityCastle.<ResEnumerate>d__37$$System.IDisposable.Dispose RVA 0x285f88c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0286f88c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  uVar3 = *(int *)(param_1 + 8) + 5;
  if (8 < uVar3) {
    return;
  }
  if ((1 << (uVar3 & 0xff) & 0x44U) != 0) {
    pcVar5 = (char *)(_UNK_028700e0 + 0x2870040);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_028700e4 + 0x2870054));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_028700e8 + 0x2870080)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto LAB_028700cc;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_028700e8 + 0x2870080),0);
LAB_028700cc:
                    /* WARNING: Could not recover jumptable at 0x028700dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  }
  if ((1 << (uVar3 & 0xff) & 0x82U) != 0) {
    pcVar5 = (char *)(_UNK_028701a0 + 0x2870100);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_028701a4 + 0x2870114));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_028701a8 + 0x2870140)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto LAB_0287018c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_028701a8 + 0x2870140),0);
LAB_0287018c:
                    /* WARNING: Could not recover jumptable at 0x0287019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  }
  if ((1 << (uVar3 & 0xff) & 0x101U) == 0) {
    return;
  }
  pcVar5 = (char *)(_UNK_02870260 + 0x28701c0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02870264 + 0x28701d4));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_02870268 + 0x2870200)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_0287024c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02870268 + 0x2870200),0);
LAB_0287024c:
                    /* WARNING: Could not recover jumptable at 0x0287025c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ActivityCastle.<ResEnumerate>d__37$$MoveNext RVA 0x285f8d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0286f8d8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_0286fff8 + 0x286f8f0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0286fffc + 0x286f904));
    func_0x01384978(*(undefined4 *)(_UNK_02870000 + 0x286f910));
    func_0x01384978(*(undefined4 *)(_UNK_02870004 + 0x286f91c));
    *pcVar6 = '\x01';
  }
  uVar8 = 0;
  piVar7 = *(int **)(param_1 + 0x18);
  uStack_30 = 0;
  iStack_28 = 0;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = (**(code **)(*piVar7 + 0x108))(piVar7,*(undefined4 *)(*piVar7 + 0x10c));
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = (**(code **)(*piVar7 + 0x118))(piVar7,*(undefined4 *)(*piVar7 + 0x11c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar5 = (int *)func_0x02b61d48(iVar1,0);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_0286f9e0 + _UNK_02870008)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x0286fa58;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_0286f9e0 + _UNK_02870008),0);
code_r0x0286fa58:
    piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    *(int **)(param_1 + 0x1c) = piVar5;
    break;
  case 1:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    break;
  case 2:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    goto code_r0x0286fc44;
  case 3:
    piVar7 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffb;
    goto code_r0x0286fe08;
  default:
    goto LAB_0286ff2c;
  }
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar5;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(&UNK_0286fa94 + _UNK_02870010)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto code_r0x0286fadc;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_0286fa94 + _UNK_02870010),0);
code_r0x0286fadc:
  iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
  if (iVar1 == 0) {
    func_0x0287002c(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iStack_28 = piVar7[0x17];
    uStack_30 = *(undefined8 *)(piVar7 + 0x15);
    piVar5 = (int *)func_0x02b64af8(&uStack_30,0);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_0286fba8 + _UNK_02870014)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x0286fc24;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_0286fba8 + _UNK_02870014),0);
code_r0x0286fc24:
    piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    *(int **)(param_1 + 0x1c) = piVar5;
code_r0x0286fc44:
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_0286fc60 + _UNK_0287001c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x0286fca8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_0286fc60 + _UNK_0287001c),0);
code_r0x0286fca8:
    iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
    if (iVar1 == 0) {
      func_0x028700ec(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iStack_28 = piVar7[0x1a];
      uStack_30 = *(undefined8 *)(piVar7 + 0x18);
      piVar7 = (int *)func_0x02b64af8(&uStack_30,0);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar7;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(&UNK_0286fd74 + _UNK_02870020)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto code_r0x0286fde8;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(&UNK_0286fd74 + _UNK_02870020),0);
code_r0x0286fde8:
      piVar7 = (int *)(*(code *)*puVar2)(piVar7,puVar2[1]);
      *(undefined4 *)(param_1 + 8) = 0xfffffffb;
      *(int **)(param_1 + 0x1c) = piVar7;
code_r0x0286fe08:
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar7;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(&UNK_0286fe24 + _UNK_02870028)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto code_r0x0286fe6c;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(&UNK_0286fe24 + _UNK_02870028),0);
code_r0x0286fe6c:
      iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
      if (iVar1 == 0) {
        func_0x028701ac(param_1);
        *(undefined4 *)(param_1 + 0x1c) = 0;
        return 0;
      }
      piVar7 = *(int **)(param_1 + 0x1c);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar7;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(&UNK_0286fea4 + _UNK_02870024)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto code_r0x0286ff00;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(&UNK_0286fea4 + _UNK_02870024),0);
code_r0x0286ff00:
      (*(code *)*puVar2)(&uStack_38,piVar7,puVar2[1]);
      uVar8 = 3;
    }
    else {
      piVar7 = *(int **)(param_1 + 0x1c);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar7;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(&UNK_0286fce0 + _UNK_02870018)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto code_r0x0286fdbc;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(&UNK_0286fce0 + _UNK_02870018),0);
code_r0x0286fdbc:
      (*(code *)*puVar2)(&uStack_38,piVar7,puVar2[1]);
      uVar8 = 2;
    }
    *(undefined4 *)(param_1 + 0xc) = uStack_38;
    *(undefined4 *)(param_1 + 8) = uVar8;
  }
  else {
    piVar7 = *(int **)(param_1 + 0x1c);
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(&UNK_0286fb14 + _UNK_0287000c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto code_r0x0286fbf0;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(&UNK_0286fb14 + _UNK_0287000c),0);
code_r0x0286fbf0:
    (*(code *)*puVar2)(&uStack_38,piVar7,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0xc) = uStack_38;
  }
  uVar8 = 1;
  *(undefined4 *)(param_1 + 0x10) = uStack_34;
LAB_0286ff2c:
  return uVar8;
}



// ===== FAT.ActivityCastle.<ResEnumerate>d__37$$<>m__Finally1 RVA 0x286002c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0287002c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_028700e0 + 0x2870040);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028700e4 + 0x2870054));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_028700e8 + 0x2870080)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_028700cc;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_028700e8 + 0x2870080),0);
LAB_028700cc:
                    /* WARNING: Could not recover jumptable at 0x028700dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ActivityCastle.<ResEnumerate>d__37$$<>m__Finally2 RVA 0x28600ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028700ec(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_028701a0 + 0x2870100);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028701a4 + 0x2870114));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_028701a8 + 0x2870140)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_0287018c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_028701a8 + 0x2870140),0);
LAB_0287018c:
                    /* WARNING: Could not recover jumptable at 0x0287019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ActivityCastle.<ResEnumerate>d__37$$<>m__Finally3 RVA 0x28601ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028701ac(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_02870260 + 0x28701c0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02870264 + 0x28701d4));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_02870268 + 0x2870200)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_0287024c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02870268 + 0x2870200),0);
LAB_0287024c:
                    /* WARNING: Could not recover jumptable at 0x0287025c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ActivityCastle.<ResEnumerate>d__37$$System.Collections.Generic.IEnumerator<(System.String,EL.Resource.AssetTag)>.get_Current RVA 0x286026c =====

void FUN_0287026c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *param_1 = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityCastle.<ResEnumerate>d__37$$System.Collections.IEnumerator.Reset RVA 0x2860280 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02870280(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  func_0x01384988(*(undefined4 *)(iRam028702bc + 0x2870290));
  uVar1 = func_0x01384be4();
  func_0x04827f0c(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam028702c0 + 0x28702ac));
  func_0x01384aa0(uVar1,uVar2);
  iVar3 = func_0x01384928();
  pcVar4 = (char *)(_UNK_02870320 + 0x28702dc);
  uStack_18 = uVar1;
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02870324 + 0x28702f0));
    *pcVar4 = '\x01';
  }
  uStack_20 = *(undefined4 *)(iVar3 + 0xc);
  uStack_1c = *(undefined4 *)(iVar3 + 0x10);
  func_0x01384abc(**(undefined4 **)(_UNK_02870328 + 0x287030c),&uStack_20);
  return;
}



// ===== FAT.ActivityCastle.<ResEnumerate>d__37$$System.Collections.IEnumerator.get_Current RVA 0x28602c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028702c4(int param_1)

{
  char *pcVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_02870320 + 0x28702dc);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02870324 + 0x28702f0));
    *pcVar1 = '\x01';
  }
  uStack_18 = *(undefined4 *)(param_1 + 0xc);
  uStack_14 = *(undefined4 *)(param_1 + 0x10);
  func_0x01384abc(**(undefined4 **)(_UNK_02870328 + 0x287030c),&uStack_18);
  return;
}



// ===== FAT.ActivityCastle.<ResEnumerate>d__37$$System.Collections.Generic.IEnumerable<(System.String,EL.Resource.AssetTag)>.GetEnumerator RVA 0x286032c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0287032c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_028703cc + 0x2870340);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028703d0 + 0x2870354));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x0245057c(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_028703d4 + 0x2870398));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x0245057c(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}



// ===== FAT.ActivityCastle.<ResEnumerate>d__37$$System.Collections.IEnumerable.GetEnumerator RVA 0x28603d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_0287032c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_028703cc + 0x2870340);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028703d0 + 0x2870354));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x0245057c(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_028703d4 + 0x2870398));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x0245057c(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}


