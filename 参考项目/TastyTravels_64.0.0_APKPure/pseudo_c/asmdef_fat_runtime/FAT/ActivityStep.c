/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ActivityStep$$get_Valid RVA 0x2acdcd4 =====

uint FUN_02addcd4(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x7158,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7158,0);
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



// ===== FAT.ActivityStep$$get_Visual RVA 0x2acdd30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02addd30(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7159,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7159,0);
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



// ===== FAT.ActivityStep$$get_VisualMain RVA 0x2acdd84 =====

void FUN_02addd84(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x4c);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ActivityStep$$get_VisualEnd RVA 0x2acdd98 =====

void FUN_02addd98(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x58);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ActivityStep$$get_VisualComplete RVA 0x2acddac =====

void FUN_02adddac(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x60);
  *param_1 = *(undefined4 *)(param_2 + 0x5c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityStep$$get_TaskIndex RVA 0x2acddc0 =====

undefined4 FUN_02adddc0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x70);
}



// ===== FAT.ActivityStep$$set_TaskIndex RVA 0x2acddc8 =====

void FUN_02adddc8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x70) = param_2;
  return;
}



// ===== FAT.ActivityStep$$get_VisualIndex RVA 0x2acddd0 =====

undefined4 FUN_02adddd0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



// ===== FAT.ActivityStep$$set_VisualIndex RVA 0x2acddd8 =====

void FUN_02adddd8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x74) = param_2;
  return;
}



// ===== FAT.ActivityStep$$get_Complete RVA 0x2acdde0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02addde0(int param_1)

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
  
  pcVar5 = (char *)(_UNK_02adde7c + 0x2adddf4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02adde80 + 0x2adde08));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x715b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x715b,0);
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
  iVar4 = *(int *)(param_1 + 100);
  iVar2 = *(int *)(param_1 + 0x70);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  return (uint)(*(int *)(iVar4 + 0xc) <= iVar2);
}



// ===== FAT.ActivityStep$$get_Claimed RVA 0x2acde84 =====

undefined1 FUN_02adde84(int param_1)

{
  return *(undefined1 *)(param_1 + 0x78);
}



// ===== FAT.ActivityStep$$set_Claimed RVA 0x2acde8c =====

void FUN_02adde8c(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x78) = param_2;
  return;
}



// ===== FAT.ActivityStep$$get_DecorateScore RVA 0x2acde94 =====

undefined4 FUN_02adde94(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x715d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x715d,0);
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
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x14);
}



// ===== FAT.ActivityStep$$.ctor RVA 0x2acdef8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02addef8(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_02ade274 + 0x2addf14);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ade278 + 0x2addf28));
    func_0x01384978(*(undefined4 *)(_UNK_02ade27c + 0x2addf34));
    func_0x01384978(*(undefined4 *)(_UNK_02ade280 + 0x2addf40));
    func_0x01384978(*(undefined4 *)(_UNK_02ade284 + 0x2addf4c));
    func_0x01384978(*(undefined4 *)(_UNK_02ade288 + 0x2addf58));
    func_0x01384978(*(undefined4 *)(_UNK_02ade28c + 0x2addf64));
    func_0x01384978(*(undefined4 *)(_UNK_02ade290 + 0x2addf70));
    func_0x01384978(*(undefined4 *)(_UNK_02ade294 + 0x2addf7c));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_02ade298 + 0x2addf94);
  uStack_1c = 0;
  uStack_20 = 0;
  iVar1 = *piVar5;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x02b64854(&uStack_48,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x188),0);
  iVar1 = *piVar5;
  *(undefined4 *)(param_1 + 0x4c) = uStack_40;
  *(ulonglong *)(param_1 + 0x44) = CONCAT44(uStack_44,uStack_48);
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  func_0x02b64854(&uStack_58,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 400),0);
  iVar1 = *piVar5;
  *(undefined4 *)(param_1 + 0x58) = uStack_50;
  *(ulonglong *)(param_1 + 0x50) = CONCAT44(uStack_54,uStack_58);
  uStack_5c = 0;
  uStack_60 = 0;
  func_0x02b644a0(&uStack_60,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x18c),0);
  puVar2 = *(undefined4 **)(_UNK_02ade29c + 0x2ade060);
  *(undefined4 *)(param_1 + 0x60) = uStack_5c;
  *(undefined4 *)(param_1 + 0x5c) = uStack_60;
  uVar3 = func_0x01384be4(*puVar2);
  func_0x03328108(uVar3,**(undefined4 **)(_UNK_02ade2a0 + 0x2ade07c));
  puVar2 = *(undefined4 **)(_UNK_02ade2a4 + 0x2ade090);
  *(undefined4 *)(param_1 + 100) = uVar3;
  uVar3 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar3,**(undefined4 **)(_UNK_02ade2a8 + 0x2ade0a8));
  puVar2 = *(undefined4 **)(_UNK_02ade2ac + 0x2ade0bc);
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  uVar3 = func_0x01384be4(*puVar2);
  func_0x0215c6b0(uVar3,0);
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  func_0x02b4dc04(param_1,0);
  *(int **)(param_1 + 0x10) = param_2;
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar3 = (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(*param_2 + 0x104));
  iVar1 = func_0x0181fb18(uVar3,0);
  *(int *)(param_1 + 0x3c) = iVar1;
  if (iVar1 != 0) {
    uStack_30 = *(undefined8 *)(param_1 + 0x44);
    uStack_28 = *(undefined4 *)(param_1 + 0x4c);
    func_0x02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x24),param_1,0,1,0);
    iVar1 = *(int *)(param_1 + 0x3c);
    uStack_30 = *(undefined8 *)(param_1 + 0x50);
    uStack_28 = *(undefined4 *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x40),param_1,0,0,0);
    iVar1 = *(int *)(param_1 + 0x3c);
    uStack_38 = *(undefined4 *)(param_1 + 0x5c);
    uStack_34 = *(undefined4 *)(param_1 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_38,*(undefined4 *)(iVar1 + 0x18),0);
    iVar1 = *(int *)(param_1 + 0x48);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = func_0x02b617fc(iVar1,0);
    iVar1 = func_0x02b63e8c(&uStack_1c,**(undefined4 **)(_UNK_02ade2b0 + 0x2ade1ec),&uStack_20,0);
    uVar3 = uStack_20;
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_02ade2b4 + 0x2ade20c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar3 = func_0x025550ec(uVar3,0);
      *(undefined4 *)(param_1 + 0x68) = uVar3;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar3 = *(undefined4 *)(param_1 + 0x7c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbb930(iVar1,uVar3,0);
  }
  return;
}



// ===== FAT.ActivityStep$$SaveSetup RVA 0x2ace2b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ade2b8(int param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_02ade3e0 + 0x2ade2d0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ade3e4 + 0x2ade2e4));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x715e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x715e,0);
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
  uVar7 = func_0x01c23578(1,*(undefined4 *)(param_1 + 0x70),0);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  puVar9 = *(undefined4 **)(_UNK_02ade3e8 + 0x2ade378);
  func_0x03652b00(piVar6,uVar7,*puVar9);
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar7 = func_0x01c23578(2,*(undefined4 *)(*(int *)(param_1 + 0x40) + 0xc),0);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    func_0x03652b00(piVar6,uVar7,*puVar9);
  }
  iVar1 = *(int *)(param_1 + 0x7c);
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



// ===== FAT.ActivityStep$$LoadSetup RVA 0x2ace3ec =====

/* WARNING: Removing unreachable block (ram,0x02ade92c) */
/* WARNING: Removing unreachable block (ram,0x02ade920) */
/* WARNING: Removing unreachable block (ram,0x02adee5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ade3ec(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 unaff_r4;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 unaff_r5;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0x715f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x715f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
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
    func_0x0245495c(iVar9,uVar11,&uStack_38,uVar5,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar11 = func_0x01c23c30(1,uVar5,0);
  *(undefined4 *)(param_1 + 0x70) = uVar11;
  iVar1 = func_0x01c23c30(2,uVar5,0);
  iVar9 = *(int *)(param_1 + 0x7c);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x0215b6ec(iVar9,uVar5,1000,0);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
  pcVar7 = (char *)(_UNK_02adf034 + 0x2ade4d0);
  iStack_30 = param_1;
  uStack_24 = unaff_r4;
  uStack_20 = unaff_r5;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02adf038 + 0x2ade4e4));
    func_0x01384978(*(undefined4 *)(_UNK_02adf03c + 0x2ade4f0));
    func_0x01384978(*(undefined4 *)(_UNK_02adf040 + 0x2ade4fc));
    func_0x01384978(*(undefined4 *)(_UNK_02adf044 + 0x2ade508));
    func_0x01384978(*(undefined4 *)(_UNK_02adf048 + 0x2ade514));
    func_0x01384978(*(undefined4 *)(_UNK_02adf04c + 0x2ade520));
    func_0x01384978(*(undefined4 *)(_UNK_02adf050 + 0x2ade52c));
    func_0x01384978(*(undefined4 *)(_UNK_02adf054 + 0x2ade538));
    func_0x01384978(*(undefined4 *)(_UNK_02adf058 + 0x2ade544));
    func_0x01384978(*(undefined4 *)(_UNK_02adf05c + 0x2ade550));
    func_0x01384978(*(undefined4 *)(_UNK_02adf060 + 0x2ade55c));
    func_0x01384978(*(undefined4 *)(_UNK_02adf064 + 0x2ade568));
    func_0x01384978(*(undefined4 *)(_UNK_02adf068 + 0x2ade574));
    func_0x01384978(*(undefined4 *)(_UNK_02adf06c + 0x2ade580));
    func_0x01384978(*(undefined4 *)(_UNK_02adf070 + 0x2ade58c));
    func_0x01384978(*(undefined4 *)(_UNK_02adf074 + 0x2ade598));
    func_0x01384978(*(undefined4 *)(_UNK_02adf078 + 0x2ade5a4));
    func_0x01384978(*(undefined4 *)(_UNK_02adf07c + 0x2ade5b0));
    func_0x01384978(*(undefined4 *)(_UNK_02adf080 + 0x2ade5bc));
    func_0x01384978(*(undefined4 *)(_UNK_02adf084 + 0x2ade5c8));
    func_0x01384978(*(undefined4 *)(_UNK_02adf088 + 0x2ade5d4));
    func_0x01384978(*(undefined4 *)(_UNK_02adf08c + 0x2ade5e0));
    func_0x01384978(*(undefined4 *)(_UNK_02adf090 + 0x2ade5ec));
    func_0x01384978(*(undefined4 *)(_UNK_02adf094 + 0x2ade5f8));
    func_0x01384978(*(undefined4 *)(_UNK_02adf098 + 0x2ade604));
    *pcVar7 = '\x01';
  }
  iVar9 = func_0x0229f06c(0x7162,0);
  if (iVar9 != 0) {
    iVar9 = func_0x0229f13c(0x7162,0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar10 = iStack_30;
    uStack_1c = uStack_20;
    uStack_20 = uStack_24;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,iVar1,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar9 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar9 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar10,0);
    func_0x01485238(&uStack_38,iVar1,0);
    iVar10 = *(int *)(iVar9 + 8);
    uVar11 = *(undefined4 *)(iVar9 + 0xc);
    iVar1 = *(int *)(iVar9 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_38,uVar5,0,0);
    return;
  }
  if (iVar1 == 0) {
    iVar1 = 3;
  }
  iVar9 = func_0x0181ffd4(iVar1,0);
  *(int *)(iStack_30 + 0x40) = iVar9;
  if (iVar9 == 0) {
    iStack_28 = iVar1;
    uVar11 = func_0x01384abc(**(undefined4 **)(_UNK_02adf09c + 0x2ade8ac),&iStack_28);
    uVar11 = func_0x046604e4(**(undefined4 **)(_UNK_02adf0a0 + 0x2ade8c8),uVar11,0);
    if (*(int *)(**(int **)(_UNK_02adf0a4 + 0x2ade8dc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar11,0);
  }
  else {
    iVar1 = *(int *)(iVar9 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_02adf0a8 + 0x2ade698));
    piVar13 = *(int **)(_UNK_02adf0ac + 0x2ade6b0);
    piVar12 = *(int **)(_UNK_02adf0b0 + 0x2ade6b8);
LAB_02ade6b4:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_02adf0b8 + 0x2ade6d0)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_02ade718;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02adf0b8 + 0x2ade6d0),0);
LAB_02ade718:
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
          if (piVar6[-1] == **(int **)(_UNK_02adf0b4 + 0x2ade74c)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_02ade794;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02adf0b4 + 0x2ade74c),0);
LAB_02ade794:
      uVar11 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (*(int *)(*piVar13 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar11 = func_0x02565a88(uVar11,0);
      iVar1 = *(int *)(iStack_30 + 0x6c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar1 + 8);
      uVar4 = *(uint *)(iVar1 + 0xc);
      iVar10 = *piVar12;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      if (uVar4 < *(uint *)(iVar9 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar4 + 1;
        *(undefined4 *)(iVar9 + uVar4 * 4 + 0x10) = uVar11;
      }
      else {
        func_0x0328f170(iVar1,uVar11,
                        *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
      }
      goto LAB_02ade6b4;
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar12[-1] == **(int **)(_UNK_02adf0bc + 0x2ade860)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
            goto LAB_02ade908;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02adf0bc + 0x2ade860),0);
LAB_02ade908:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
    iVar1 = *(int *)(iStack_30 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_02adf0c0 + 0x2ade964));
LAB_02ade970:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar12[-1] == **(int **)(_UNK_02adf138 + 0x2ade98c)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
          goto LAB_02ade9d4;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02adf138 + 0x2ade98c),0);
LAB_02ade9d4:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 != 0) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar12[-1] == **(int **)(_UNK_02adf0c8 + 0x2adea08)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
            goto LAB_02adea50;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02adf0c8 + 0x2adea08),0);
LAB_02adea50:
      uVar11 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      iVar1 = func_0x01820490(uVar11,0);
      if (iVar1 == 0) {
        uStack_2c = uVar11;
        uVar11 = func_0x01384abc(**(undefined4 **)(_UNK_02adf0cc + 0x2aded64),&uStack_2c);
        uVar11 = func_0x046604e4(**(undefined4 **)(_UNK_02adf0d0 + 0x2aded80),uVar11,0);
        if (*(int *)(**(int **)(_UNK_02adf0d4 + 0x2aded98) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2874(uVar11,0);
      }
      else {
        uVar11 = *(undefined4 *)(iVar1 + 0x30);
        iVar9 = **(int **)(_UNK_02adf0d8 + 0x2adea84);
        if (*(int *)(iVar9 + 0x74) == 0) {
          func_0x01384ab4(iVar9);
          iVar9 = **(int **)(_UNK_02adf0dc + 0x2adeaa8);
        }
        iVar10 = *(int *)(*(int *)(iVar9 + 0x5c) + 4);
        if (iVar10 == 0) {
          if (*(int *)(iVar9 + 0x74) == 0) {
            func_0x01384ab4(iVar9);
            iVar9 = **(int **)(_UNK_02adf0e0 + 0x2adead8);
          }
          uVar5 = **(undefined4 **)(iVar9 + 0x5c);
          iVar10 = func_0x01384be4(**(undefined4 **)(_UNK_02adf0e4 + 0x2adeaec));
          func_0x041cd7ac(iVar10,uVar5,**(undefined4 **)(_UNK_02adf0e8 + 0x2adeb00),0);
          *(int *)(*(int *)(**(int **)(_UNK_02adf0ec + 0x2adeb1c) + 0x5c) + 4) = iVar10;
        }
        uVar11 = func_0x02f9b7b8(uVar11,iVar10,**(undefined4 **)(_UNK_02adf0f0 + 0x2adeb30));
        iVar9 = **(int **)(_UNK_02adf0f4 + 0x2adeb4c);
        if (*(int *)(iVar9 + 0x74) == 0) {
          func_0x01384ab4(iVar9);
          iVar9 = **(int **)(_UNK_02adf0f8 + 0x2adeb6c);
        }
        iVar10 = *(int *)(*(int *)(iVar9 + 0x5c) + 8);
        if (iVar10 == 0) {
          if (*(int *)(iVar9 + 0x74) == 0) {
            func_0x01384ab4(iVar9);
            iVar9 = **(int **)(_UNK_02adf0fc + 0x2adeb9c);
          }
          uVar5 = **(undefined4 **)(iVar9 + 0x5c);
          iVar10 = func_0x01384be4(**(undefined4 **)(_UNK_02adf100 + 0x2adebb0));
          func_0x041cee34(iVar10,uVar5,**(undefined4 **)(_UNK_02adf104 + 0x2adebc4),0);
          *(int *)(*(int *)(**(int **)(_UNK_02adf108 + 0x2adebe0) + 0x5c) + 8) = iVar10;
        }
        uVar11 = func_0x02faa128(uVar11,iVar10,**(undefined4 **)(_UNK_02adf10c + 0x2adebf4));
        uVar11 = func_0x02fb5fb8(uVar11,**(undefined4 **)(_UNK_02adf110 + 0x2adec0c));
        uVar5 = *(undefined4 *)(iVar1 + 0x34);
        iVar9 = **(int **)(_UNK_02adf114 + 0x2adec20);
        if (*(int *)(iVar9 + 0x74) == 0) {
          func_0x01384ab4(iVar9);
          iVar9 = **(int **)(_UNK_02adf118 + 0x2adec44);
        }
        iVar10 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xc);
        if (iVar10 == 0) {
          if (*(int *)(iVar9 + 0x74) == 0) {
            func_0x01384ab4(iVar9);
            iVar9 = **(int **)(_UNK_02adf11c + 0x2adec74);
          }
          uVar8 = **(undefined4 **)(iVar9 + 0x5c);
          iVar10 = func_0x01384be4(**(undefined4 **)(_UNK_02adf120 + 0x2adec88));
          func_0x041cfbf8(iVar10,uVar8,**(undefined4 **)(_UNK_02adf124 + 0x2adec9c),0);
          *(int *)(*(int *)(**(int **)(_UNK_02adf128 + 0x2adecb8) + 0x5c) + 0xc) = iVar10;
        }
        uVar5 = func_0x02fab288(uVar5,iVar10,**(undefined4 **)(_UNK_02adf12c + 0x2adeccc));
        uVar5 = func_0x02fb63f8(uVar5,**(undefined4 **)(_UNK_02adf130 + 0x2adece4));
        iVar9 = *(int *)(iStack_30 + 100);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        iVar10 = *(int *)(iVar9 + 8);
        uVar4 = *(uint *)(iVar9 + 0xc);
        piVar12 = *(int **)(_UNK_02adf134 + 0x2aded20);
        *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
        iVar14 = *piVar12;
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        if (uVar4 < *(uint *)(iVar10 + 0xc)) {
          *(uint *)(iVar9 + 0xc) = uVar4 + 1;
          iVar10 = iVar10 + uVar4 * 0xc;
          *(int *)(iVar10 + 0x10) = iVar1;
          *(undefined4 *)(iVar10 + 0x14) = uVar11;
          *(undefined4 *)(iVar10 + 0x18) = uVar5;
        }
        else {
          uStack_38 = *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38);
          func_0x033289d4(iVar9,iVar1,uVar11,uVar5);
        }
      }
      goto LAB_02ade970;
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar12[-1] == **(int **)(_UNK_02adf13c + 0x2adedfc)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
            goto LAB_02adee44;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02adf13c + 0x2adedfc),0);
LAB_02adee44:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
  }
  return;
}



// ===== FAT.ActivityStep$$SetupDetail RVA 0x2ace4b4 =====

/* WARNING: Removing unreachable block (ram,0x02ade92c) */
/* WARNING: Removing unreachable block (ram,0x02ade920) */
/* WARNING: Removing unreachable block (ram,0x02adee5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ade4b4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_02adf034 + 0x2ade4d0);
  iStack_30 = param_1;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02adf038 + 0x2ade4e4));
    func_0x01384978(*(undefined4 *)(_UNK_02adf03c + 0x2ade4f0));
    func_0x01384978(*(undefined4 *)(_UNK_02adf040 + 0x2ade4fc));
    func_0x01384978(*(undefined4 *)(_UNK_02adf044 + 0x2ade508));
    func_0x01384978(*(undefined4 *)(_UNK_02adf048 + 0x2ade514));
    func_0x01384978(*(undefined4 *)(_UNK_02adf04c + 0x2ade520));
    func_0x01384978(*(undefined4 *)(_UNK_02adf050 + 0x2ade52c));
    func_0x01384978(*(undefined4 *)(_UNK_02adf054 + 0x2ade538));
    func_0x01384978(*(undefined4 *)(_UNK_02adf058 + 0x2ade544));
    func_0x01384978(*(undefined4 *)(_UNK_02adf05c + 0x2ade550));
    func_0x01384978(*(undefined4 *)(_UNK_02adf060 + 0x2ade55c));
    func_0x01384978(*(undefined4 *)(_UNK_02adf064 + 0x2ade568));
    func_0x01384978(*(undefined4 *)(_UNK_02adf068 + 0x2ade574));
    func_0x01384978(*(undefined4 *)(_UNK_02adf06c + 0x2ade580));
    func_0x01384978(*(undefined4 *)(_UNK_02adf070 + 0x2ade58c));
    func_0x01384978(*(undefined4 *)(_UNK_02adf074 + 0x2ade598));
    func_0x01384978(*(undefined4 *)(_UNK_02adf078 + 0x2ade5a4));
    func_0x01384978(*(undefined4 *)(_UNK_02adf07c + 0x2ade5b0));
    func_0x01384978(*(undefined4 *)(_UNK_02adf080 + 0x2ade5bc));
    func_0x01384978(*(undefined4 *)(_UNK_02adf084 + 0x2ade5c8));
    func_0x01384978(*(undefined4 *)(_UNK_02adf088 + 0x2ade5d4));
    func_0x01384978(*(undefined4 *)(_UNK_02adf08c + 0x2ade5e0));
    func_0x01384978(*(undefined4 *)(_UNK_02adf090 + 0x2ade5ec));
    func_0x01384978(*(undefined4 *)(_UNK_02adf094 + 0x2ade5f8));
    func_0x01384978(*(undefined4 *)(_UNK_02adf098 + 0x2ade604));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7162,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7162,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar9 = iStack_30;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar9,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  if (param_2 == 0) {
    param_2 = 3;
  }
  iVar1 = func_0x0181ffd4(param_2,0);
  *(int *)(iStack_30 + 0x40) = iVar1;
  if (iVar1 == 0) {
    iStack_28 = param_2;
    uVar10 = func_0x01384abc(**(undefined4 **)(_UNK_02adf09c + 0x2ade8ac),&iStack_28);
    uVar10 = func_0x046604e4(**(undefined4 **)(_UNK_02adf0a0 + 0x2ade8c8),uVar10,0);
    if (*(int *)(**(int **)(_UNK_02adf0a4 + 0x2ade8dc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar10,0);
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_02adf0a8 + 0x2ade698));
    piVar13 = *(int **)(_UNK_02adf0ac + 0x2ade6b0);
    piVar12 = *(int **)(_UNK_02adf0b0 + 0x2ade6b8);
LAB_02ade6b4:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_02adf0b8 + 0x2ade6d0)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_02ade718;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02adf0b8 + 0x2ade6d0),0);
LAB_02ade718:
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
          if (piVar6[-1] == **(int **)(_UNK_02adf0b4 + 0x2ade74c)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_02ade794;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02adf0b4 + 0x2ade74c),0);
LAB_02ade794:
      uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (*(int *)(*piVar13 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar10 = func_0x02565a88(uVar10,0);
      iVar1 = *(int *)(iStack_30 + 0x6c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar1 + 8);
      uVar4 = *(uint *)(iVar1 + 0xc);
      iVar11 = *piVar12;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      if (uVar4 < *(uint *)(iVar9 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar4 + 1;
        *(undefined4 *)(iVar9 + uVar4 * 4 + 0x10) = uVar10;
      }
      else {
        func_0x0328f170(iVar1,uVar10,
                        *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
      }
      goto LAB_02ade6b4;
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar12[-1] == **(int **)(_UNK_02adf0bc + 0x2ade860)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
            goto LAB_02ade908;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02adf0bc + 0x2ade860),0);
LAB_02ade908:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
    iVar1 = *(int *)(iStack_30 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_02adf0c0 + 0x2ade964));
LAB_02ade970:
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar12[-1] == **(int **)(_UNK_02adf138 + 0x2ade98c)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
          goto LAB_02ade9d4;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02adf138 + 0x2ade98c),0);
LAB_02ade9d4:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 != 0) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar12[-1] == **(int **)(_UNK_02adf0c8 + 0x2adea08)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
            goto LAB_02adea50;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02adf0c8 + 0x2adea08),0);
LAB_02adea50:
      uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      iVar1 = func_0x01820490(uVar10,0);
      if (iVar1 == 0) {
        uStack_2c = uVar10;
        uVar10 = func_0x01384abc(**(undefined4 **)(_UNK_02adf0cc + 0x2aded64),&uStack_2c);
        uVar10 = func_0x046604e4(**(undefined4 **)(_UNK_02adf0d0 + 0x2aded80),uVar10,0);
        if (*(int *)(**(int **)(_UNK_02adf0d4 + 0x2aded98) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2874(uVar10,0);
      }
      else {
        uVar10 = *(undefined4 *)(iVar1 + 0x30);
        iVar9 = **(int **)(_UNK_02adf0d8 + 0x2adea84);
        if (*(int *)(iVar9 + 0x74) == 0) {
          func_0x01384ab4(iVar9);
          iVar9 = **(int **)(_UNK_02adf0dc + 0x2adeaa8);
        }
        iVar11 = *(int *)(*(int *)(iVar9 + 0x5c) + 4);
        if (iVar11 == 0) {
          if (*(int *)(iVar9 + 0x74) == 0) {
            func_0x01384ab4(iVar9);
            iVar9 = **(int **)(_UNK_02adf0e0 + 0x2adead8);
          }
          uVar5 = **(undefined4 **)(iVar9 + 0x5c);
          iVar11 = func_0x01384be4(**(undefined4 **)(_UNK_02adf0e4 + 0x2adeaec));
          func_0x041cd7ac(iVar11,uVar5,**(undefined4 **)(_UNK_02adf0e8 + 0x2adeb00),0);
          *(int *)(*(int *)(**(int **)(_UNK_02adf0ec + 0x2adeb1c) + 0x5c) + 4) = iVar11;
        }
        uVar10 = func_0x02f9b7b8(uVar10,iVar11,**(undefined4 **)(_UNK_02adf0f0 + 0x2adeb30));
        iVar9 = **(int **)(_UNK_02adf0f4 + 0x2adeb4c);
        if (*(int *)(iVar9 + 0x74) == 0) {
          func_0x01384ab4(iVar9);
          iVar9 = **(int **)(_UNK_02adf0f8 + 0x2adeb6c);
        }
        iVar11 = *(int *)(*(int *)(iVar9 + 0x5c) + 8);
        if (iVar11 == 0) {
          if (*(int *)(iVar9 + 0x74) == 0) {
            func_0x01384ab4(iVar9);
            iVar9 = **(int **)(_UNK_02adf0fc + 0x2adeb9c);
          }
          uVar5 = **(undefined4 **)(iVar9 + 0x5c);
          iVar11 = func_0x01384be4(**(undefined4 **)(_UNK_02adf100 + 0x2adebb0));
          func_0x041cee34(iVar11,uVar5,**(undefined4 **)(_UNK_02adf104 + 0x2adebc4),0);
          *(int *)(*(int *)(**(int **)(_UNK_02adf108 + 0x2adebe0) + 0x5c) + 8) = iVar11;
        }
        uVar10 = func_0x02faa128(uVar10,iVar11,**(undefined4 **)(_UNK_02adf10c + 0x2adebf4));
        uVar10 = func_0x02fb5fb8(uVar10,**(undefined4 **)(_UNK_02adf110 + 0x2adec0c));
        uVar5 = *(undefined4 *)(iVar1 + 0x34);
        iVar9 = **(int **)(_UNK_02adf114 + 0x2adec20);
        if (*(int *)(iVar9 + 0x74) == 0) {
          func_0x01384ab4(iVar9);
          iVar9 = **(int **)(_UNK_02adf118 + 0x2adec44);
        }
        iVar11 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xc);
        if (iVar11 == 0) {
          if (*(int *)(iVar9 + 0x74) == 0) {
            func_0x01384ab4(iVar9);
            iVar9 = **(int **)(_UNK_02adf11c + 0x2adec74);
          }
          uVar8 = **(undefined4 **)(iVar9 + 0x5c);
          iVar11 = func_0x01384be4(**(undefined4 **)(_UNK_02adf120 + 0x2adec88));
          func_0x041cfbf8(iVar11,uVar8,**(undefined4 **)(_UNK_02adf124 + 0x2adec9c),0);
          *(int *)(*(int *)(**(int **)(_UNK_02adf128 + 0x2adecb8) + 0x5c) + 0xc) = iVar11;
        }
        uVar5 = func_0x02fab288(uVar5,iVar11,**(undefined4 **)(_UNK_02adf12c + 0x2adeccc));
        uVar5 = func_0x02fb63f8(uVar5,**(undefined4 **)(_UNK_02adf130 + 0x2adece4));
        iVar9 = *(int *)(iStack_30 + 100);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(iVar9 + 8);
        uVar4 = *(uint *)(iVar9 + 0xc);
        piVar12 = *(int **)(_UNK_02adf134 + 0x2aded20);
        *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
        iVar14 = *piVar12;
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        if (uVar4 < *(uint *)(iVar11 + 0xc)) {
          *(uint *)(iVar9 + 0xc) = uVar4 + 1;
          iVar11 = iVar11 + uVar4 * 0xc;
          *(int *)(iVar11 + 0x10) = iVar1;
          *(undefined4 *)(iVar11 + 0x14) = uVar10;
          *(undefined4 *)(iVar11 + 0x18) = uVar5;
        }
        else {
          uStack_38 = *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38);
          func_0x033289d4(iVar9,iVar1,uVar10,uVar5);
        }
      }
      goto LAB_02ade970;
    }
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar12[-1] == **(int **)(_UNK_02adf13c + 0x2adedfc)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
            goto LAB_02adee44;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02adf13c + 0x2adedfc),0);
LAB_02adee44:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
  }
  return;
}



// ===== FAT.ActivityStep$$SetupFresh RVA 0x2acf144 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02adf144(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_02adf2f4 + 0x2adf15c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02adf2f8 + 0x2adf170));
    func_0x01384978(*(undefined4 *)(_UNK_02adf2fc + 0x2adf17c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7168,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7168,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    iStack_24 = iStack_3c;
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_1 + 0x3c);
  iVar1 = *(int *)(iVar1 + 0x2c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(iVar3 + 0x2c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x01cf6408(iVar1,uVar5,0);
  FUN_02ade4b4(param_1,uVar5);
  iVar1 = *(int *)(param_1 + 0x70);
  if (-1 < iVar1) {
    iVar3 = *(int *)(param_1 + 100);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 < *(int *)(iVar3 + 0xc)) {
      iVar1 = *(int *)(param_1 + 100);
      uVar5 = *(undefined4 *)(param_1 + 0x70);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03328660(&iStack_24,iVar1,uVar5,**(undefined4 **)(_UNK_02adf300 + 0x2adf274));
      iVar1 = *(int *)(param_1 + 0x7c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iStack_24 + 0xc);
      if (iVar1 != iVar3) {
        iVar1 = *(int *)(param_1 + 0x7c);
        uVar6 = *(undefined4 *)(iStack_24 + 0x1c);
        uVar2 = *(undefined4 *)(iStack_24 + 0x28);
        uVar5 = *(undefined4 *)(iStack_24 + 0x3c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_30 = uVar5;
        func_0x0215b76c(iVar1,iVar3,uVar2,uVar6);
      }
    }
  }
  return;
}



// ===== FAT.ActivityStep$$ResEnumerate RVA 0x2acf304 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02adf304(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_02adf3b4 + 0x2adf318);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02adf3b8 + 0x2adf32c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7169,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7169,0);
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
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02adf3bc + 0x2adf384));
  func_0x04874ed4(iVar1,0);
  *(undefined4 *)(iVar1 + 8) = 0xfffffffe;
  uVar5 = func_0x048799ac(0);
  *(undefined4 *)(iVar1 + 0x14) = uVar5;
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  return iVar1;
}



// ===== FAT.ActivityStep.<ResEnumerate>d__41$$.ctor RVA 0x2acf3c0 =====

void FUN_02adf3c0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  func_0x04874ed4(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  uVar1 = func_0x048799ac(0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}



// ===== FAT.ActivityStep$$TryPopup RVA 0x2acf3e8 =====

void FUN_02adf3e8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x7177,0);
  if (iVar1 == 0) {
    uStack_20 = *(undefined4 *)(param_1 + 0x4c);
    uStack_28 = *(undefined8 *)(param_1 + 0x44);
    func_0x02b64b60(&uStack_28,param_2,param_3,0,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x7177,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityStep$$Open RVA 0x2acf484 =====

/* WARNING: Possible PIC construction at 0x019a8984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x019a8988) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02adf484(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7178,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7178,0);
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
  iVar1 = *(int *)(param_1 + 0x44);
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



// ===== FAT.ActivityStep$$WhenEnd RVA 0x2acf4e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02adf4e4(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_02adf6c8 + 0x2adf4fc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02adf6cc + 0x2adf510));
    func_0x01384978(*(undefined4 *)(_UNK_02adf6d0 + 0x2adf51c));
    func_0x01384978(*(undefined4 *)(_UNK_02adf6d4 + 0x2adf528));
    func_0x01384978(*(undefined4 *)(_UNK_02adf6d8 + 0x2adf534));
    *pcVar2 = '\x01';
  }
  uStack_24 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x7179,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar3 = *(undefined4 *)(param_1 + 0x7c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbba60(iVar1,uVar3,0);
    if (*(int *)(**(int **)(_UNK_02adf6dc + 0x2adf5dc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x028c8d78(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0302a7c0(auStack_38,iVar1,&uStack_24,**(undefined4 **)(_UNK_02adf6e0 + 0x2adf618));
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = uStack_24;
    piVar5 = *(int **)(_UNK_02adf6e4 + 0x2adf644);
    uVar4 = *(undefined4 *)(iVar1 + 0x28);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar5;
    }
    func_0x02b4aed4(uVar4,uVar3,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xd8),0,0);
    uStack_30 = *(undefined8 *)(param_1 + 0x50);
    uStack_28 = *(undefined4 *)(param_1 + 0x58);
    uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_02adf6e8 + 0x2adf694),auStack_38);
    func_0x02b64cc4(&uStack_30,0,uVar3,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x7179,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityStep$$DebugReset RVA 0x2acf6ec =====

void FUN_02adf6ec(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x717a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x717a,0);
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
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}



// ===== FAT.ActivityStep$$DebugComplete RVA 0x2acf748 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02adf748(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  
  iVar1 = func_0x0229f06c(0x717b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x717b,0);
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
  pcVar6 = (char *)(_UNK_02adf8b8 + 0x2adf7c0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02adf8bc + 0x2adf7d4));
    func_0x01384978(*(undefined4 *)(_UNK_02adf8c0 + 0x2adf7e0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x717c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x717c,0);
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
    func_0x01485258(&uStack_38,0,0);
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
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02adf8c4 + 0x2adf844));
  func_0x04874ed4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar2 = *(undefined4 **)(_UNK_02adf8c8 + 0x2adf86c);
  iVar4 = *(int *)(param_1 + 0x70);
  *(int *)(iVar1 + 0xc) = param_1;
  uVar5 = *puVar2;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(int *)(param_1 + 0x70) = iVar4 + 1;
  iVar4 = func_0x03668dfc(uVar5);
  uVar5 = func_0x02adf8d4(iVar1);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0229f06c(0xcb,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xcb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_021786c4 + 0x21785d0);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021786c8 + 0x21785e4),iVar4,uVar5,0);
      *pcVar6 = '\x01';
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
    func_0x01485278(&uStack_38,iVar4,0);
    func_0x01485278(&uStack_38,uVar5,0);
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
    func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021786cc + 0x21786b4));
    return;
  }
  iVar1 = *(int *)(iVar4 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_0518b080)(iVar1,uVar5,0);
  return;
}



// ===== FAT.ActivityStep$$CompleteTask RVA 0x2acf7a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02adf7a4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  
  pcVar6 = (char *)(_UNK_02adf8b8 + 0x2adf7c0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02adf8bc + 0x2adf7d4));
    func_0x01384978(*(undefined4 *)(_UNK_02adf8c0 + 0x2adf7e0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x717c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x717c,0);
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
    func_0x01485258(&uStack_38,param_2,0);
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
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02adf8c4 + 0x2adf844));
  func_0x04874ed4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar2 = *(undefined4 **)(_UNK_02adf8c8 + 0x2adf86c);
  iVar4 = *(int *)(param_1 + 0x70);
  *(int *)(iVar1 + 0xc) = param_1;
  uVar5 = *puVar2;
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(int *)(param_1 + 0x70) = iVar4 + 1;
  iVar4 = func_0x03668dfc(uVar5);
  uVar5 = func_0x02adf8d4(iVar1);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0229f06c(0xcb,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xcb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_021786c4 + 0x21785d0);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021786c8 + 0x21785e4),iVar4,uVar5,0);
      *pcVar6 = '\x01';
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
    func_0x01485278(&uStack_38,iVar4,0);
    func_0x01485278(&uStack_38,uVar5,0);
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
    func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021786cc + 0x21786b4));
    return;
  }
  iVar1 = *(int *)(iVar4 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_0518b080)(iVar1,uVar5,0);
  return;
}



// ===== FAT.ActivityStep.<>c__DisplayClass47_0$$.ctor RVA 0x2acf8cc =====

void FUN_02adf8cc(void)

{
  return;
}



// ===== FAT.ActivityStep.<>c__DisplayClass47_0$$<CompleteTask>g__Delay|0 RVA 0x2acf8d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02adf8d4(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02adf934 + 0x2adf8e8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02adf938 + 0x2adf8fc));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02adf93c + 0x2adf910));
  func_0x04874ed4(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ===== FAT.ActivityStep$$TryComplete RVA 0x2acf940 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02adf940(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_02adfea8 + 0x2adf958);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02adfeac + 0x2adf96c));
    func_0x01384978(*(undefined4 *)(_UNK_02adfeb0 + 0x2adf978));
    func_0x01384978(*(undefined4 *)(_UNK_02adfeb4 + 0x2adf984));
    func_0x01384978(*(undefined4 *)(_UNK_02adfeb8 + 0x2adf990));
    func_0x01384978(*(undefined4 *)(_UNK_02adfebc + 0x2adf99c));
    func_0x01384978(*(undefined4 *)(_UNK_02adfec0 + 0x2adf9a8));
    func_0x01384978(*(undefined4 *)(_UNK_02adfec4 + 0x2adf9b4));
    func_0x01384978(*(undefined4 *)(_UNK_02adfec8 + 0x2adf9c0));
    func_0x01384978(*(undefined4 *)(_UNK_02adfecc + 0x2adf9cc));
    func_0x01384978(*(undefined4 *)(_UNK_02adfed0 + 0x2adf9d8));
    func_0x01384978(*(undefined4 *)(_UNK_02adfed4 + 0x2adf9e4));
    func_0x01384978(*(undefined4 *)(_UNK_02adfed8 + 0x2adf9f0));
    func_0x01384978(*(undefined4 *)(_UNK_02adfedc + 0x2adf9fc));
    func_0x01384978(*(undefined4 *)(_UNK_02adfee0 + 0x2adfa08));
    func_0x01384978(*(undefined4 *)(_UNK_02adfee4 + 0x2adfa14));
    func_0x01384978(*(undefined4 *)(_UNK_02adfee8 + 0x2adfa20));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x7186,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x78) == '\0') {
      iVar1 = *(int *)(param_1 + 0x40);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x019a9214(param_1,*(undefined4 *)(iVar1 + 0x18),0);
      if (*(int *)(**(int **)(_UNK_02adfeec + 0x2adfab8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02adfef0 + 0x2adfad4));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0349eb38(iVar1,param_1,**(undefined4 **)(_UNK_02adfef4 + 0x2adfaf8));
      if (*(int *)(**(int **)(_UNK_02adfef8 + 0x2adfb0c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x028c8d78(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a7c0(&uStack_48,iVar1,&iStack_28,**(undefined4 **)(_UNK_02adfefc + 0x2adfb4c));
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(param_1 + 0x6c);
      iVar1 = *(int *)(iVar1 + 0x40);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_48,iVar6,**(undefined4 **)(_UNK_02adff00 + 0x2adfba4));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      piVar11 = *(int **)(_UNK_02adff04 + 0x2adfbc8);
      while (iVar2 = func_0x03f5f428(&uStack_38,**(undefined4 **)(_UNK_02adff14 + 0x2adfbd0)),
            iVar6 = iStack_2c, iVar2 != 0) {
        if (iStack_2c == 0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar11;
        uVar8 = *(undefined4 *)(iVar6 + 8);
        uVar5 = *(undefined4 *)(iVar6 + 0xc);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar11;
        }
        uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xd8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x01cdcbac(iVar1,uVar8,uVar5,uVar7,0,0,0,0xc4,
                                **(undefined4 **)(_UNK_02adff08 + 0x2adfc30),
                                **(undefined4 **)(_UNK_02adff0c + 0x2adfc3c),0);
        iVar6 = iStack_28;
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar6 + 8);
        uVar10 = *(uint *)(iVar6 + 0xc);
        piVar3 = *(int **)(_UNK_02adff10 + 0x2adfca0);
        *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
        iVar9 = *piVar3;
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (uVar10 < *(uint *)(iVar2 + 0xc)) {
          *(uint *)(iVar6 + 0xc) = uVar10 + 1;
          *(undefined4 *)(iVar2 + uVar10 * 4 + 0x10) = uVar5;
        }
        else {
          func_0x0328f170(iVar6,uVar5,
                          *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
        }
      }
      func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_02adff18 + 0x2adfcf4));
      iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_02adff20 + 0x2adfd08));
      iVar6 = *(int *)(param_1 + 0x5c);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar5 = *(undefined4 *)(iVar6 + 0xc);
      piVar11 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02adff24 + 0x2adfd34),2);
      if (piVar11 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar11 + 0x20));
      if (iVar6 == 0) {
        uVar8 = func_0x01384c10();
        func_0x01384aa0(uVar8,0);
      }
      if (piVar11[3] == 0) {
        func_0x01384bf4();
      }
      piVar11[4] = param_1;
      iVar6 = func_0x01384abc(**(undefined4 **)(_UNK_02adff28 + 0x2adfd90),&uStack_48);
      if ((iVar6 != 0) &&
         (iVar2 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar11 + 0x20)), iVar2 == 0)) {
        uVar8 = func_0x01384c10();
        func_0x01384aa0(uVar8,0);
      }
      if ((uint)piVar11[3] < 2) {
        func_0x01384bf4();
      }
      piVar11[5] = iVar6;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee858c(iVar1,uVar5,piVar11,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7186,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityStep$$GetOrderThemeRes RVA 0x2acff30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02adff30(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar6 = (char *)(_UNK_02ae0220 + 0x2adff4c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ae0224 + 0x2adff60));
    func_0x01384978(*(undefined4 *)(_UNK_02ae0228 + 0x2adff6c));
    func_0x01384978(*(undefined4 *)(_UNK_02ae022c + 0x2adff78));
    func_0x01384978(*(undefined4 *)(_UNK_02ae0230 + 0x2adff84));
    func_0x01384978(*(undefined4 *)(_UNK_02ae0234 + 0x2adff90));
    func_0x01384978(*(undefined4 *)(_UNK_02ae0238 + 0x2adff9c));
    func_0x01384978(*(undefined4 *)(_UNK_02ae023c + 0x2adffa8));
    func_0x01384978(*(undefined4 *)(_UNK_02ae0240 + 0x2adffb4));
    func_0x01384978(*(undefined4 *)(_UNK_02ae0244 + 0x2adffc0));
    func_0x01384978(*(undefined4 *)(_UNK_02ae0248 + 0x2adffcc));
    func_0x01384978(*(undefined4 *)(_UNK_02ae024c + 0x2adffd8));
    *pcVar6 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x7188,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02ae0250 + 0x2ae003c));
    func_0x04874ed4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 8) = param_1;
    if (param_2 == 0) {
      param_2 = func_0x01384be4(**(undefined4 **)(_UNK_02ae0254 + 0x2ae0148));
      func_0x041cf488(param_2,iVar1,**(undefined4 **)(_UNK_02ae0258 + 0x2ae0168),0);
      iVar3 = func_0x018252fc(param_2,0);
      if (iVar3 != 0) {
        param_2 = *(int *)(iVar3 + 0x10);
      }
      if (iVar3 == 0 || param_2 == 0) {
        uStack_18 = *(undefined4 *)(iVar1 + 8);
        puVar5 = *(undefined4 **)(_UNK_02ae025c + 0x2ae019c);
        uVar2 = func_0x01384abc(*puVar5,&uStack_18);
        uStack_1c = 0;
        uVar4 = func_0x01384abc(*puVar5,&uStack_1c);
        uVar2 = func_0x0467272c(**(undefined4 **)(_UNK_02ae0260 + 0x2ae01d4),uVar2,uVar4,0);
        if (*(int *)(**(int **)(_UNK_02ae0264 + 0x2ae01e8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2874(uVar2,0);
        return **(undefined4 **)(**(int **)(_UNK_02ae0268 + 0x2ae0210) + 0x5c);
      }
    }
    uVar2 = func_0x0181fb18(param_2,0);
    puVar5 = *(undefined4 **)(_UNK_02ae026c + 0x2ae007c);
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
    uVar2 = func_0x01384be4(*puVar5);
    func_0x041cf488(uVar2,iVar1,**(undefined4 **)(_UNK_02ae0270 + 0x2ae00a0),0);
    iVar3 = func_0x018231d8(uVar2,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    piVar8 = *(int **)(_UNK_02ae0274 + 0x2ae00d0);
    iVar7 = *(int *)(iVar3 + 0x14);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar8;
    }
    uVar2 = **(undefined4 **)(iVar3 + 0x5c);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03470a60(iVar7,uVar2,&uStack_14,**(undefined4 **)(_UNK_02ae0278 + 0x2ae0110));
    if (iVar3 == 0) {
      if (*(int *)(iVar1 + 0xc) == 0) {
        uStack_14 = 0;
      }
      else {
        uStack_14 = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x38);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7188,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x021ae998(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityStep.<>c__DisplayClass50_0$$.ctor RVA 0x2ad027c =====

void FUN_02ae027c(void)

{
  return;
}



// ===== FAT.ActivityStep$$FAT.IActivityOrderHandler.HandlerCollected RVA 0x2ad0284 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ae0284(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_02ae03dc + 0x2ae029c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ae03e0 + 0x2ae02b0));
    func_0x01384978(*(undefined4 *)(_UNK_02ae03e4 + 0x2ae02bc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x718c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x718c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    iStack_24 = iStack_3c;
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
  iVar1 = *(int *)(param_1 + 0x70);
  if (-1 < iVar1) {
    iVar3 = *(int *)(param_1 + 100);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 < *(int *)(iVar3 + 0xc)) {
      iVar1 = *(int *)(param_1 + 100);
      uVar5 = *(undefined4 *)(param_1 + 0x70);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03328660(&iStack_24,iVar1,uVar5,**(undefined4 **)(_UNK_02ae03e8 + 0x2ae035c));
      iVar1 = *(int *)(param_1 + 0x7c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iStack_24 + 0xc);
      if (iVar1 != iVar3) {
        iVar1 = *(int *)(param_1 + 0x7c);
        uVar6 = *(undefined4 *)(iStack_24 + 0x1c);
        uVar2 = *(undefined4 *)(iStack_24 + 0x28);
        uVar5 = *(undefined4 *)(iStack_24 + 0x3c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_30 = uVar5;
        func_0x0215b76c(iVar1,iVar3,uVar2,uVar6);
      }
    }
  }
  return;
}



// ===== FAT.ActivityStep$$FAT.IActivityOrderHandler.IsValidForBoard RVA 0x2ad03ec =====

uint FUN_02ae03ec(int param_1,int param_2)

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
  
  iVar2 = func_0x0229f06c(0x718d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x718d,0);
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
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  return (uint)(*(int *)(iVar2 + 0x14) == param_2);
}



// ===== FAT.ActivityStep$$FAT.IActivityOrderGenerator.TryGeneratePassiveOrder RVA 0x2ad0464 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_02ae0464(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 extraout_r2;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 uVar10;
  int aiStack_30 [3];
  
  pcVar6 = (char *)(iRam02ae0768 + 0x2ae0484);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(iRam02ae076c + 0x2ae049c));
    func_0x01384978(*(undefined4 *)(iRam02ae0770 + 0x2ae04a8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x718e,0);
  if (iVar1 == 0) {
    *param_6 = 0;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(param_1 + 0x3c);
    iVar1 = *(int *)(param_2 + 0xc);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    if ((iVar1 == *(int *)(iVar7 + 0x3c)) && (iVar1 = FUN_02addde0(param_1), iVar1 == 0)) {
      iVar1 = *(int *)(param_1 + 100);
      uVar2 = *(undefined4 *)(param_1 + 0x70);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03328660(aiStack_30,iVar1,uVar2,**(undefined4 **)(iRam02ae0774 + 0x2ae0580));
      if (aiStack_30[0] == 0) {
        func_0x01384bf0();
      }
      func_0x01e70fa0(*(undefined4 *)(aiStack_30[0] + 0x30),0);
      iVar1 = func_0x01e72eac(param_3,2,*(undefined4 *)(param_2 + 0xc),
                              *(undefined4 *)(aiStack_30[0] + 0x38));
      *param_6 = iVar1;
      if (iVar1 == 0) {
        func_0x01384bf0();
        iVar1 = *param_6;
        uRam00000018 = 3;
        iVar7 = iVar1;
        if (iVar1 == 0) {
          func_0x01384bf0();
          iVar7 = *param_6;
          if (*param_6 == 0) {
            uVar10 = func_0x01384bf0();
            piVar3 = (int *)((ulonglong)uVar10 >> 0x20);
            iVar1 = (int)uVar10;
            pcVar6 = (char *)(_UNK_02ae091c + 0x2ae079c);
            if (*pcVar6 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_02ae0920 + 0x2ae07b4));
              *pcVar6 = '\x01';
            }
            iVar7 = func_0x0229f06c(0x718f,0);
            if (iVar7 == 0) {
              if (piVar3 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar9 = *(int *)(iVar1 + 0x3c);
              iVar7 = piVar3[5];
              if (iVar9 == 0) {
                func_0x01384bf0();
              }
              if ((iVar7 == *(int *)(iVar9 + 0x3c)) && (iVar7 = FUN_02addde0(iVar1), iVar7 == 0)) {
                iVar7 = *piVar3;
                uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
                if (uVar4 != 0) {
                  piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
                  do {
                    if (piVar5[-1] == **(int **)(_UNK_02ae0924 + 0x2ae0858)) {
                      puVar8 = (undefined4 *)(iVar7 + *piVar5 * 8 + 0x220);
                      goto LAB_02ae08a0;
                    }
                    uVar4 = uVar4 - 1;
                    piVar5 = piVar5 + 2;
                  } while (uVar4 != 0);
                }
                puVar8 = (undefined4 *)
                         func_0x014002dc(piVar3,**(int **)(_UNK_02ae0924 + 0x2ae0858),0x2c);
LAB_02ae08a0:
                iVar7 = (*(code *)*puVar8)(piVar3,puVar8[1]);
                if (iVar7 != 0) {
                  if (piVar3 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar7 = func_0x01e3e5b8(piVar3,1,0);
                  iVar9 = func_0x02b449f8(iVar1,0);
                  if (iVar7 == iVar9) {
                    if (piVar3 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    if (piVar3[4] == 4) {
                      FUN_02adf7a4(iVar1,0x40000000);
                    }
                  }
                }
              }
              uVar2 = 0;
            }
            else {
              iVar7 = func_0x0229f13c(0x718f,0);
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              uVar2 = func_0x021d2b64(iVar7,iVar1,piVar3,extraout_r2);
            }
            return uVar2;
          }
        }
      }
      else {
        *(undefined4 *)(iVar1 + 0x18) = 3;
        iVar7 = iVar1;
      }
      iVar1 = *(int *)(iVar1 + 0x58);
      uVar2 = *(undefined4 *)(iVar7 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *param_6;
      *(undefined4 *)(iVar1 + 0x10) = uVar2;
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar7 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x30);
      uVar2 = func_0x02b449f8(param_1,0);
      uVar2 = func_0x01c23578(1,uVar2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      puVar8 = *(undefined4 **)(iRam02ae0778 + 0x2ae06a0);
      func_0x03652b00(iVar1,uVar2,*puVar8);
      uVar2 = func_0x02b4429c(param_1,0);
      uVar2 = func_0x01c23578(0xe,uVar2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar1,uVar2,*puVar8);
      uVar2 = func_0x01c34eb8(0);
      uVar2 = func_0x01c23578(2,uVar2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar1,uVar2,*puVar8);
      uVar2 = func_0x02b4cec4(param_1,0);
      uVar2 = func_0x01c23578(3,uVar2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar1,uVar2,*puVar8);
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x718e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021f5900(iVar1,param_1,param_2,param_3);
  }
  return uVar2;
}



// ===== FAT.ActivityStep$$FAT.IActivityOrderHandler.OnPreUpdate RVA 0x2ad077c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02ae077c(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  
  pcVar6 = (char *)(_UNK_02ae091c + 0x2ae079c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ae0920 + 0x2ae07b4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x718f,0);
  if (iVar1 == 0) {
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(param_1 + 0x3c);
    iVar1 = param_2[5];
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    if ((iVar1 == *(int *)(iVar7 + 0x3c)) && (iVar1 = FUN_02addde0(param_1), iVar1 == 0)) {
      iVar1 = *param_2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_02ae0924 + 0x2ae0858)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x220);
            goto LAB_02ae08a0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_02ae0924 + 0x2ae0858),0x2c);
LAB_02ae08a0:
      iVar1 = (*(code *)*puVar3)(param_2,puVar3[1]);
      if (iVar1 != 0) {
        if (param_2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01e3e5b8(param_2,1,0);
        iVar7 = func_0x02b449f8(param_1,0);
        if (iVar1 == iVar7) {
          if (param_2 == (int *)0x0) {
            func_0x01384bf0();
          }
          if (param_2[4] == 4) {
            FUN_02adf7a4(param_1,0x40000000);
          }
        }
      }
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x718f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021d2b64(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.ActivityStep$$.cctor RVA 0x2ad0928 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ae0928(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_02ae0984 + 0x2ae0938);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ae0988 + 0x2ae094c));
    func_0x01384978(*(undefined4 *)(_UNK_02ae098c + 0x2ae0958));
    *pcVar1 = '\x01';
  }
  **(undefined4 **)(**(int **)(_UNK_02ae0990 + 0x2ae096c) + 0x5c) =
       **(undefined4 **)(_UNK_02ae0994 + 0x2ae097c);
  return;
}



// ===== FAT.ActivityStep$$<>iFixBaseProxy_get_Valid RVA 0x2ad0998 =====

void FUN_02ae0998(int param_1)

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



// ===== FAT.ActivityStep$$<>iFixBaseProxy_get_Visual RVA 0x2ad09a0 =====

undefined4 FUN_02ae09a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.ActivityStep$$<>iFixBaseProxy_SetupFresh RVA 0x2ad09a8 =====

void FUN_02ae09a8(undefined4 param_1)

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



// ===== FAT.ActivityStep$$<>iFixBaseProxy_ResEnumerate RVA 0x2ad09b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02ae09b0(int *param_1)

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



// ===== FAT.ActivityStep$$<>iFixBaseProxy_TryPopup RVA 0x2ad09b8 =====

void FUN_02ae09b8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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



// ===== FAT.ActivityStep$$<>iFixBaseProxy_WhenEnd RVA 0x2ad09c0 =====

void FUN_02ae09c0(undefined4 param_1)

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



// ===== FAT.ActivityStep.<>c$$.cctor RVA 0x2ad09c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ae09c8(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_02ae0a20 + 0x2ae09d8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ae0a24 + 0x2ae09ec));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_02ae0a28 + 0x2ae0a00);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x04874ed4(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.ActivityStep.<>c$$.ctor RVA 0x2ad0a2c =====

void FUN_02ae0a2c(void)

{
  return;
}



// ===== FAT.ActivityStep.<>c$$<SetupDetail>b__40_0 RVA 0x2ad0a34 =====

undefined4 FUN_02ae0a34(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}



// ===== FAT.ActivityStep.<>c$$<SetupDetail>b__40_1 RVA 0x2ad0a3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ae0a3c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_02ae0ae0 + 0x2ae0a54);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ae0ae4 + 0x2ae0a68));
    func_0x01384978(*(undefined4 *)(_UNK_02ae0ae8 + 0x2ae0a74));
    func_0x01384978(*(undefined4 *)(_UNK_02ae0aec + 0x2ae0a80));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x02f9671c(param_3,**(undefined4 **)(_UNK_02ae0af0 + 0x2ae0a94));
  uVar2 = func_0x02f91180(param_3,**(undefined4 **)(_UNK_02ae0af4 + 0x2ae0aac));
  puVar3 = *(undefined4 **)(_UNK_02ae0af8 + 0x2ae0ac8);
  *param_1 = 0;
  param_1[1] = 0;
  func_0x038fd264(param_1,uVar1,uVar2,*puVar3);
  return;
}



// ===== FAT.ActivityStep.<>c$$<SetupDetail>b__40_2 RVA 0x2ad0afc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02ae0afc(undefined4 param_1,int param_2)

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
  
  pcVar5 = (char *)(_UNK_02ae0b58 + 0x2ae0b10);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ae0b5c + 0x2ae0b24));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02ae0b60 + 0x2ae0b38) + 0x74) == 0) {
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



// ===== FAT.ActivityStep.<>c__DisplayClass47_0.<<CompleteTask>g__Delay|0>d$$.ctor RVA 0x2ad0b64 =====

void FUN_02ae0b64(int param_1,undefined4 param_2)

{
  func_0x04874ed4(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.ActivityStep.<>c__DisplayClass47_0$$<CompleteTask>g__WaitA|1 RVA 0x2ad0b80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ae0b80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_02ae0c78 + 0x2ae0b94);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ae0c7c + 0x2ae0ba8));
    func_0x01384978(*(undefined4 *)(_UNK_02ae0c80 + 0x2ae0bb4));
    func_0x01384978(*(undefined4 *)(_UNK_02ae0c84 + 0x2ae0bc0));
    func_0x01384978(*(undefined4 *)(_UNK_02ae0c88 + 0x2ae0bcc));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02ae0c8c + 0x2ae0be0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02ae0c90 + 0x2ae0bfc));
  uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02ae0c94 + 0x2ae0c10));
  func_0x0478dedc(uVar2,param_1,**(undefined4 **)(_UNK_02ae0c98 + 0x2ae0c2c),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x028beac8(iVar1,uVar2,0);
  piVar3 = *(int **)(param_1 + 0xc);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x02ae0c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x1f8))(piVar3,*(undefined4 *)(*piVar3 + 0x1fc));
  return;
}



// ===== FAT.ActivityStep.<>c__DisplayClass47_0.<<CompleteTask>g__Delay|0>d$$System.IDisposable.Dispose RVA 0x2ad0c9c =====

void FUN_02ae0c9c(void)

{
  return;
}



// ===== FAT.ActivityStep.<>c__DisplayClass47_0.<<CompleteTask>g__Delay|0>d$$MoveNext RVA 0x2ad0ca0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02ae0ca0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  pcVar3 = (char *)(_UNK_02ae0e68 + 0x2ae0cb4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ae0e6c + 0x2ae0cc8));
    func_0x01384978(*(undefined4 *)(_UNK_02ae0e70 + 0x2ae0cd4));
    func_0x01384978(*(undefined4 *)(_UNK_02ae0e74 + 0x2ae0ce0));
    func_0x01384978(*(undefined4 *)(_UNK_02ae0e78 + 0x2ae0cec));
    func_0x01384978(*(undefined4 *)(_UNK_02ae0e7c + 0x2ae0cf8));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xe8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01cf0e70(iVar2,0);
    if (iVar2 == 0) {
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      piVar5 = *(int **)(iVar4 + 0xc);
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar5 + 0x1f8))(piVar5,*(undefined4 *)(*piVar5 + 0x1fc));
      uVar6 = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_02ae0e84 + 0x2ae0db4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_02ae0e88 + 0x2ae0dd0));
      uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02ae0e8c + 0x2ae0de4));
      uVar6 = 0;
      func_0x0478dedc(uVar1,iVar4,**(undefined4 **)(_UNK_02ae0e90 + 0x2ae0e04),0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x028be400(iVar2,uVar1,0);
    }
  }
  else {
    uVar6 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar6 = *(undefined4 *)(iVar4 + 8);
      uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02ae0e80 + 0x2ae0d3c));
      func_0x0245031c(uVar1,uVar6,0);
      uVar6 = 1;
      *(undefined4 *)(param_1 + 0xc) = uVar1;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar6;
}



// ===== FAT.ActivityStep.<>c__DisplayClass47_0.<<CompleteTask>g__Delay|0>d$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x2ad0e94 =====

undefined4 FUN_02ae0e94(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.ActivityStep.<>c__DisplayClass47_0.<<CompleteTask>g__Delay|0>d$$System.Collections.IEnumerator.Reset RVA 0x2ad0e9c =====

undefined4 FUN_02ae0e9c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  func_0x01384988(*(undefined4 *)(iRam02ae0ed8 + 0x2ae0eac));
  uVar1 = func_0x01384be4();
  func_0x04827f0c(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam02ae0edc + 0x2ae0ec8));
  func_0x01384aa0(uVar1,uVar2);
  iVar3 = func_0x01384928();
  return *(undefined4 *)(iVar3 + 0xc);
}



// ===== FAT.ActivityStep.<>c__DisplayClass47_0.<<CompleteTask>g__Delay|0>d$$System.Collections.IEnumerator.get_Current RVA 0x2ad0ee0 =====

undefined4 FUN_02ae0ee0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.ActivityStep.<>c__DisplayClass50_0$$<GetOrderThemeRes>b__1 RVA 0x2ad0ee8 =====

bool FUN_02ae0ee8(int param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  bVar1 = false;
  if (*(int *)(param_2 + 0xc) == *(int *)(param_1 + 8)) {
    bVar1 = *(int *)(param_2 + 0x14) == 0xd;
  }
  return bVar1;
}



// ===== FAT.ActivityStep.<>c__DisplayClass50_0$$<GetOrderThemeRes>b__0 RVA 0x2ad0f24 =====

bool FUN_02ae0f24(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  return iVar1 == *(int *)(iVar2 + 0x24);
}



// ===== FAT.ActivityStep.<ResEnumerate>d__41$$System.IDisposable.Dispose RVA 0x2ad0f64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ae0f64(int param_1)

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
    pcVar5 = (char *)(_UNK_02ae17c0 + 0x2ae1720);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02ae17c4 + 0x2ae1734));
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
        if (piVar4[-1] == **(int **)(_UNK_02ae17c8 + 0x2ae1760)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto LAB_02ae17ac;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02ae17c8 + 0x2ae1760),0);
LAB_02ae17ac:
                    /* WARNING: Could not recover jumptable at 0x02ae17bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  }
  if ((1 << (uVar3 & 0xff) & 0x82U) != 0) {
    pcVar5 = (char *)(_UNK_02ae1880 + 0x2ae17e0);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02ae1884 + 0x2ae17f4));
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
        if (piVar4[-1] == **(int **)(_UNK_02ae1888 + 0x2ae1820)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto LAB_02ae186c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02ae1888 + 0x2ae1820),0);
LAB_02ae186c:
                    /* WARNING: Could not recover jumptable at 0x02ae187c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  }
  if ((1 << (uVar3 & 0xff) & 0x101U) == 0) {
    return;
  }
  pcVar5 = (char *)(_UNK_02ae1940 + 0x2ae18a0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ae1944 + 0x2ae18b4));
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
      if (piVar4[-1] == **(int **)(_UNK_02ae1948 + 0x2ae18e0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02ae192c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02ae1948 + 0x2ae18e0),0);
LAB_02ae192c:
                    /* WARNING: Could not recover jumptable at 0x02ae193c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ActivityStep.<ResEnumerate>d__41$$MoveNext RVA 0x2ad0fb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02ae0fb0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  undefined8 uStack_30;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_02ae16d8 + 0x2ae0fc8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ae16dc + 0x2ae0fdc));
    func_0x01384978(*(undefined4 *)(_UNK_02ae16e0 + 0x2ae0fe8));
    func_0x01384978(*(undefined4 *)(_UNK_02ae16e4 + 0x2ae0ff4));
    *pcVar6 = '\x01';
  }
  uVar7 = 0;
  piVar8 = *(int **)(param_1 + 0x18);
  uStack_30 = 0;
  iStack_28 = 0;
  iStack_34 = 0;
  iStack_38 = 0;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = (**(code **)(*piVar8 + 0x108))(piVar8,*(undefined4 *)(*piVar8 + 0x10c));
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = (**(code **)(*piVar8 + 0x118))(piVar8,*(undefined4 *)(*piVar8 + 0x11c));
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
        if (piVar4[-1] == **(int **)(&UNK_02ae10c0 + _UNK_02ae16e8)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x02ae1138;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_02ae10c0 + _UNK_02ae16e8),0);
code_r0x02ae1138:
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
    goto code_r0x02ae1324;
  case 3:
    piVar8 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffb;
    goto code_r0x02ae14e8;
  default:
    goto LAB_02ae160c;
  }
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar5;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(&UNK_02ae1174 + _UNK_02ae16f0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto code_r0x02ae11bc;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_02ae1174 + _UNK_02ae16f0),0);
code_r0x02ae11bc:
  iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
  if (iVar1 == 0) {
    func_0x02ae170c(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iStack_28 = piVar8[0x16];
    uStack_30 = *(undefined8 *)(piVar8 + 0x14);
    piVar5 = (int *)func_0x02b64af8(&uStack_30,0);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_02ae1288 + _UNK_02ae16f4)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x02ae1304;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_02ae1288 + _UNK_02ae16f4),0);
code_r0x02ae1304:
    piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    *(int **)(param_1 + 0x1c) = piVar5;
code_r0x02ae1324:
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_02ae1340 + _UNK_02ae16fc)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x02ae1388;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_02ae1340 + _UNK_02ae16fc),0);
code_r0x02ae1388:
    iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
    if (iVar1 == 0) {
      func_0x02ae17cc(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iStack_38 = piVar8[0x17];
      iStack_34 = piVar8[0x18];
      piVar8 = (int *)func_0x02b646a0(&iStack_38,0);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar8;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(&UNK_02ae1454 + _UNK_02ae1700)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto code_r0x02ae14c8;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_02ae1454 + _UNK_02ae1700),0);
code_r0x02ae14c8:
      piVar8 = (int *)(*(code *)*puVar2)(piVar8,puVar2[1]);
      *(undefined4 *)(param_1 + 8) = 0xfffffffb;
      *(int **)(param_1 + 0x1c) = piVar8;
code_r0x02ae14e8:
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar8;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(&UNK_02ae1504 + _UNK_02ae1708)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto code_r0x02ae154c;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_02ae1504 + _UNK_02ae1708),0);
code_r0x02ae154c:
      iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
      if (iVar1 == 0) {
        func_0x02ae188c(param_1);
        *(undefined4 *)(param_1 + 0x1c) = 0;
        return 0;
      }
      piVar8 = *(int **)(param_1 + 0x1c);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar8;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(&UNK_02ae1584 + _UNK_02ae1704)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto code_r0x02ae15e0;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_02ae1584 + _UNK_02ae1704),0);
code_r0x02ae15e0:
      (*(code *)*puVar2)(&uStack_40,piVar8,puVar2[1]);
      uVar7 = 3;
    }
    else {
      piVar8 = *(int **)(param_1 + 0x1c);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar8;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(&UNK_02ae13c0 + _UNK_02ae16f8)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto code_r0x02ae149c;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_02ae13c0 + _UNK_02ae16f8),0);
code_r0x02ae149c:
      (*(code *)*puVar2)(&uStack_40,piVar8,puVar2[1]);
      uVar7 = 2;
    }
    *(undefined4 *)(param_1 + 0xc) = uStack_40;
    *(undefined4 *)(param_1 + 8) = uVar7;
  }
  else {
    piVar8 = *(int **)(param_1 + 0x1c);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(&UNK_02ae11f4 + _UNK_02ae16ec)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto code_r0x02ae12d0;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_02ae11f4 + _UNK_02ae16ec),0);
code_r0x02ae12d0:
    (*(code *)*puVar2)(&uStack_40,piVar8,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0xc) = uStack_40;
  }
  uVar7 = 1;
  *(undefined4 *)(param_1 + 0x10) = uStack_3c;
LAB_02ae160c:
  return uVar7;
}



// ===== FAT.ActivityStep.<ResEnumerate>d__41$$<>m__Finally1 RVA 0x2ad170c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ae170c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_02ae17c0 + 0x2ae1720);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ae17c4 + 0x2ae1734));
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
      if (piVar4[-1] == **(int **)(_UNK_02ae17c8 + 0x2ae1760)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02ae17ac;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02ae17c8 + 0x2ae1760),0);
LAB_02ae17ac:
                    /* WARNING: Could not recover jumptable at 0x02ae17bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ActivityStep.<ResEnumerate>d__41$$<>m__Finally2 RVA 0x2ad17cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ae17cc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_02ae1880 + 0x2ae17e0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ae1884 + 0x2ae17f4));
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
      if (piVar4[-1] == **(int **)(_UNK_02ae1888 + 0x2ae1820)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02ae186c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02ae1888 + 0x2ae1820),0);
LAB_02ae186c:
                    /* WARNING: Could not recover jumptable at 0x02ae187c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ActivityStep.<ResEnumerate>d__41$$<>m__Finally3 RVA 0x2ad188c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ae188c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_02ae1940 + 0x2ae18a0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ae1944 + 0x2ae18b4));
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
      if (piVar4[-1] == **(int **)(_UNK_02ae1948 + 0x2ae18e0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02ae192c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02ae1948 + 0x2ae18e0),0);
LAB_02ae192c:
                    /* WARNING: Could not recover jumptable at 0x02ae193c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ActivityStep.<ResEnumerate>d__41$$System.Collections.Generic.IEnumerator<(System.String,EL.Resource.AssetTag)>.get_Current RVA 0x2ad194c =====

void FUN_02ae194c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *param_1 = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityStep.<ResEnumerate>d__41$$System.Collections.IEnumerator.Reset RVA 0x2ad1960 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ae1960(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *unaff_r5;
  char *pcVar4;
  uint unaff_r9;
  undefined1 in_ZR;
  byte in_CY;
  byte bVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  
  func_0x01384988(*(undefined4 *)(iRam02ae199c + 0x2ae1970));
  uVar1 = func_0x01384be4();
  func_0x04827f0c(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam02ae19a0 + 0x2ae198c));
  func_0x01384aa0(uVar1,uVar2);
  iVar3 = func_0x01384928();
  bVar5 = in_CY;
  if ((bool)in_ZR) {
    bVar5 = 0xff7fffff < unaff_r9 || CARRY4(unaff_r9 + 0x800000,(uint)in_CY);
  }
  if ((bool)in_ZR && unaff_r9 + 0x800000 + (uint)in_CY == 0) {
    unaff_r5 = &stack0x000cbff8 + bVar5;
  }
  pcVar4 = (char *)(_UNK_02ae1a00 + 0x2ae19bc);
  uStack_18 = uVar1;
  puStack_14 = unaff_r5;
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ae1a04 + 0x2ae19d0));
    *pcVar4 = '\x01';
  }
  uStack_20 = *(undefined4 *)(iVar3 + 0xc);
  uStack_1c = *(undefined4 *)(iVar3 + 0x10);
  func_0x01384abc(**(undefined4 **)(_UNK_02ae1a08 + 0x2ae19ec),&uStack_20);
  return;
}



// ===== FAT.ActivityStep.<ResEnumerate>d__41$$System.Collections.IEnumerator.get_Current RVA 0x2ad19a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ae19a4(int param_1)

{
  char *pcVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_02ae1a00 + 0x2ae19bc);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ae1a04 + 0x2ae19d0));
    *pcVar1 = '\x01';
  }
  uStack_18 = *(undefined4 *)(param_1 + 0xc);
  uStack_14 = *(undefined4 *)(param_1 + 0x10);
  func_0x01384abc(**(undefined4 **)(_UNK_02ae1a08 + 0x2ae19ec),&uStack_18);
  return;
}



// ===== FAT.ActivityStep.<ResEnumerate>d__41$$System.Collections.Generic.IEnumerable<(System.String,EL.Resource.AssetTag)>.GetEnumerator RVA 0x2ad1a0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02ae1a0c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_02ae1aac + 0x2ae1a20);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ae1ab0 + 0x2ae1a34));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x048799ac(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02ae1ab4 + 0x2ae1a78));
    func_0x04874ed4(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x048799ac(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}



// ===== FAT.ActivityStep.<ResEnumerate>d__41$$System.Collections.IEnumerable.GetEnumerator RVA 0x2ad1ab8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_02ae1a0c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_02ae1aac + 0x2ae1a20);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ae1ab0 + 0x2ae1a34));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x048799ac(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02ae1ab4 + 0x2ae1a78));
    func_0x04874ed4(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x048799ac(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}


