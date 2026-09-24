/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ActivityMonopolyBoard$$get_Valid RVA 0x1ab9648 =====

void FUN_01ac9648(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8646,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8646,0);
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
                    /* WARNING: Could not recover jumptable at 0x01ac96b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x130))(piVar3,*(undefined4 *)(*piVar3 + 0x134));
  return;
}



// ===== FAT.ActivityMonopolyBoard$$get_BoardRes RVA 0x1ab96bc =====

void FUN_01ac96bc(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  *param_1 = *(undefined4 *)(param_2 + 0x44);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityMonopolyBoard$$get_LoadingRes RVA 0x1ab96d0 =====

void FUN_01ac96d0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x50);
  *param_1 = *(undefined4 *)(param_2 + 0x4c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityMonopolyBoard$$get_StartPopup RVA 0x1ab96e4 =====

void FUN_01ac96e4(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x5c);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ActivityMonopolyBoard$$get_EndPopup RVA 0x1ab96f8 =====

void FUN_01ac96f8(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x68);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ActivityMonopolyBoard$$get_ConvertPopup RVA 0x1ab970c =====

void FUN_01ac970c(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x74);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ActivityMonopolyBoard$$get_MilestoneRes RVA 0x1ab9720 =====

void FUN_01ac9720(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x7c);
  *param_1 = *(undefined4 *)(param_2 + 0x78);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityMonopolyBoard$$get_LoopTipsRes RVA 0x1ab972c =====

void FUN_01ac972c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x84);
  *param_1 = *(undefined4 *)(param_2 + 0x80);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityMonopolyBoard$$get_RoundFinishTipRes RVA 0x1ab9738 =====

void FUN_01ac9738(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  *param_1 = *(undefined4 *)(param_2 + 0x88);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityMonopolyBoard$$get_HelpRes RVA 0x1ab9744 =====

void FUN_01ac9744(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x94);
  *param_1 = *(undefined4 *)(param_2 + 0x90);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityMonopolyBoard$$get_Visual RVA 0x1ab9750 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ac9750(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8647,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8647,0);
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



// ===== FAT.ActivityMonopolyBoard$$.ctor RVA 0x1ab97a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ac97a4(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_01ac9c44 + 0x1ac97c0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ac9c48 + 0x1ac97d4));
    func_0x01384978(*(undefined4 *)(_UNK_01ac9c4c + 0x1ac97e0));
    func_0x01384978(*(undefined4 *)(_UNK_01ac9c50 + 0x1ac97ec));
    func_0x01384978(*(undefined4 *)(_UNK_01ac9c54 + 0x1ac97f8));
    func_0x01384978(*(undefined4 *)(_UNK_01ac9c58 + 0x1ac9804));
    func_0x01384978(*(undefined4 *)(_UNK_01ac9c5c + 0x1ac9810));
    func_0x01384978(*(undefined4 *)(_UNK_01ac9c60 + 0x1ac981c));
    func_0x01384978(*(undefined4 *)(_UNK_01ac9c64 + 0x1ac9828));
    func_0x01384978(*(undefined4 *)(_UNK_01ac9c68 + 0x1ac9834));
    func_0x01384978(*(undefined4 *)(_UNK_01ac9c6c + 0x1ac9840));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_01ac9c70 + 0x1ac9874);
  iVar2 = *piVar7;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar7;
  }
  uStack_2c = 0;
  uStack_30 = 0;
  func_0x02b644a0(&uStack_30,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x940),0);
  *(undefined4 *)(param_1 + 0x44) = uStack_30;
  *(undefined4 *)(param_1 + 0x48) = uStack_2c;
  uStack_34 = 0;
  uStack_38 = 0;
  func_0x02b644a0(&uStack_38,*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x93c),0);
  *(undefined4 *)(param_1 + 0x4c) = uStack_38;
  *(undefined4 *)(param_1 + 0x50) = uStack_34;
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x02b64854(&uStack_48,*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x944),0);
  iVar2 = *piVar7;
  *(undefined4 *)(param_1 + 0x5c) = uStack_40;
  *(ulonglong *)(param_1 + 0x54) = CONCAT44(uStack_44,uStack_48);
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  func_0x02b64854(&uStack_58,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x948),0);
  iVar2 = *piVar7;
  *(undefined4 *)(param_1 + 0x68) = uStack_50;
  *(ulonglong *)(param_1 + 0x60) = CONCAT44(uStack_54,uStack_58);
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  func_0x02b64854(&uStack_68,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x94c),0);
  iVar2 = *piVar7;
  *(undefined4 *)(param_1 + 0x74) = uStack_60;
  *(ulonglong *)(param_1 + 0x6c) = CONCAT44(uStack_64,uStack_68);
  uStack_6c = 0;
  uStack_70 = 0;
  func_0x02b644a0(&uStack_70,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x950),0);
  uStack_74 = 0;
  *(undefined4 *)(param_1 + 0x78) = uStack_70;
  *(undefined4 *)(param_1 + 0x7c) = uStack_6c;
  uStack_78 = 0;
  func_0x02b644a0(&uStack_78,*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x954),0);
  uStack_7c = 0;
  *(undefined4 *)(param_1 + 0x80) = uStack_78;
  *(undefined4 *)(param_1 + 0x84) = uStack_74;
  uStack_80 = 0;
  func_0x02b644a0(&uStack_80,*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x960),0);
  uStack_84 = 0;
  *(undefined4 *)(param_1 + 0x88) = uStack_80;
  *(undefined4 *)(param_1 + 0x8c) = uStack_7c;
  uStack_88 = 0;
  func_0x02b644a0(&uStack_88,*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0x958),0);
  *(undefined4 *)(param_1 + 0x90) = uStack_88;
  *(undefined4 *)(param_1 + 0x94) = uStack_84;
  puVar6 = *(undefined4 **)(_UNK_01ac9c74 + 0x1ac9a40);
  uVar3 = func_0x01384be4(*puVar6);
  puVar8 = *(undefined4 **)(_UNK_01ac9c78 + 0x1ac9a54);
  func_0x0328e950(uVar3,*puVar8);
  pcVar5 = (char *)(_UNK_01ac9c7c + 0x1ac9a64);
  cVar1 = *pcVar5;
  uVar10 = **(undefined4 **)(_UNK_01ac9c80 + 0x1ac9a74);
  *(undefined4 *)(param_1 + 0xb8) = uVar3;
  *(undefined4 *)(param_1 + 0xbc) = uVar10;
  if (cVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ac9c84 + 0x1ac9a88));
    *pcVar5 = '\x01';
  }
  iVar2 = **(int **)(_UNK_01ac9c88 + 0x1ac9aa4);
  puVar4 = *(undefined8 **)(iVar2 + 0x5c);
  uVar11 = *puVar4;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(puVar4 + 1);
  *(undefined8 *)(param_1 + 200) = uVar11;
  puVar4 = *(undefined8 **)(iVar2 + 0x5c);
  uVar3 = *puVar6;
  uVar11 = *puVar4;
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(puVar4 + 1);
  *(undefined4 *)(param_1 + 0xe0) = 0x3d75c28f;
  *(undefined8 *)(param_1 + 0xd4) = uVar11;
  uVar3 = func_0x01384be4(uVar3);
  func_0x0328e950(uVar3,*puVar8);
  uVar10 = *puVar6;
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  uVar3 = func_0x01384be4(uVar10);
  func_0x0328e950(uVar3,*puVar8);
  puVar9 = *(undefined4 **)(_UNK_01ac9c8c + 0x1ac9b10);
  *(undefined4 *)(param_1 + 0xe8) = uVar3;
  *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  uVar3 = func_0x01384a00(*puVar9,6);
  puVar8 = *(undefined4 **)(_UNK_01ac9c90 + 0x1ac9b24);
  *(undefined4 *)(param_1 + 0xf8) = uVar3;
  uVar3 = func_0x01384be4(*puVar8);
  puVar6 = *(undefined4 **)(_UNK_01ac9c94 + 0x1ac9b40);
  func_0x024509b4(uVar3,*puVar6);
  uVar10 = *puVar8;
  *(undefined4 *)(param_1 + 0x104) = uVar3;
  uVar3 = func_0x01384be4(uVar10);
  func_0x024509b4(uVar3,*puVar6);
  uVar10 = *puVar9;
  *(undefined4 *)(param_1 + 0x108) = uVar3;
  uVar3 = func_0x01384a00(uVar10,6);
  puVar6 = *(undefined4 **)(_UNK_01ac9c98 + 0x1ac9b78);
  *(undefined4 *)(param_1 + 0x110) = uVar3;
  uVar3 = func_0x01384be4(*puVar6);
  func_0x03258eb8(uVar3,**(undefined4 **)(_UNK_01ac9c9c + 0x1ac9b94));
  *(undefined4 *)(param_1 + 0x114) = uVar3;
  func_0x02b4dc04(param_1,0);
  *(int **)(param_1 + 0x10) = param_2;
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar3 = (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(*param_2 + 0x104));
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x01cab990(iVar2,uVar3,0);
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  func_0x01ac9ca4(param_1);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01ac9ca0 + 0x1ac9c24));
  func_0x0215aa18(uVar3,param_1,0);
  *(undefined4 *)(param_1 + 0xb0) = uVar3;
  return;
}



// ===== FAT.ActivityMonopolyBoard$$RefreshTheme RVA 0x1ab9ca4 =====

void FUN_01ac9ca4(int param_1)

{
  int iVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_2c = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x866d,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
    uStack_28 = *(undefined8 *)(param_1 + 0x54);
    uStack_20 = *(undefined4 *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x44),param_1,0,0,0);
    iVar1 = *(int *)(param_1 + 0x3c);
    uStack_28 = *(undefined8 *)(param_1 + 0x60);
    uStack_20 = *(undefined4 *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x24),param_1,0,0,0);
    iVar1 = *(int *)(param_1 + 0x3c);
    uStack_28 = *(undefined8 *)(param_1 + 0x6c);
    uStack_20 = *(undefined4 *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x2c),param_1,0,0,0);
    iVar1 = *(int *)(param_1 + 0x3c);
    uStack_30 = *(undefined4 *)(param_1 + 0x44);
    uStack_2c = *(undefined4 *)(param_1 + 0x48);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_30,*(undefined4 *)(iVar1 + 0x3c),0);
    iVar1 = *(int *)(param_1 + 0x3c);
    uStack_30 = *(undefined4 *)(param_1 + 0x4c);
    uStack_2c = *(undefined4 *)(param_1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_30,*(undefined4 *)(iVar1 + 0x38),0);
    iVar1 = *(int *)(param_1 + 0x3c);
    uStack_30 = *(undefined4 *)(param_1 + 0x90);
    uStack_2c = *(undefined4 *)(param_1 + 0x94);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_30,*(undefined4 *)(iVar1 + 0x30),0);
    uStack_30 = *(undefined4 *)(param_1 + 0x78);
    uStack_2c = *(undefined4 *)(param_1 + 0x7c);
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_30,*(undefined4 *)(iVar1 + 0x40),0);
    iVar1 = *(int *)(param_1 + 0x3c);
    uStack_30 = *(undefined4 *)(param_1 + 0x80);
    uStack_2c = *(undefined4 *)(param_1 + 0x84);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_30,*(undefined4 *)(iVar1 + 0x18),0);
  }
  else {
    iVar1 = func_0x0229f13c(0x866d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$FAT.IBoardActivityHandbook.CheckIsBoardItem RVA 0x1ab9eb4 =====

uint FUN_01ac9eb4(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x8649,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 0x1c);
    }
    return (uint)(iVar1 == param_2);
  }
  iVar1 = func_0x0229f13c(0x8649,0);
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



// ===== FAT.ActivityMonopolyBoard$$FAT.IBoardActivityHandbook.OnNewItemUnlock RVA 0x1ab9f28 =====

void FUN_01ac9f28(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x864a,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x864a,0);
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



// ===== FAT.ActivityMonopolyBoard$$FAT.IBoardActivityHandbook.OnNewItemShow RVA 0x1ab9f74 =====

void FUN_01ac9f74(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x864b,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x864b,0);
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



// ===== FAT.ActivityMonopolyBoard$$CheckClaimBoardCategoryReward RVA 0x1ab9fc8 =====

undefined4 FUN_01ac9fc8(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x864c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x864c,0);
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
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  return 0;
}



// ===== FAT.ActivityMonopolyBoard$$CheckClaimBoardHandBookAllReward RVA 0x1aba024 =====

undefined4 FUN_01aca024(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x864d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x864d,0);
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



// ===== FAT.ActivityMonopolyBoard$$ProcessAllUnlockReward RVA 0x1aba078 =====

undefined4 FUN_01aca078(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x864e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x864e,0);
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



// ===== FAT.ActivityMonopolyBoard$$SaveSetup RVA 0x1aba0cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aca0cc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
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
  
  pcVar7 = (char *)(_UNK_01aca3e8 + 0x1aca0e4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aca3ec + 0x1aca0f8));
    func_0x01384978(*(undefined4 *)(_UNK_01aca3f0 + 0x1aca104));
    func_0x01384978(*(undefined4 *)(_UNK_01aca3f4 + 0x1aca110));
    func_0x01384978(*(undefined4 *)(_UNK_01aca3f8 + 0x1aca11c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x864f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x864f,0);
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
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar9,&uStack_38,uVar4,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  piVar5 = *(int **)(param_2 + 0x28);
  uVar9 = func_0x01c23578(0,*(undefined4 *)(param_1 + 0x9c),0);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  puVar10 = *(undefined4 **)(_UNK_01aca3fc + 0x1aca1b0);
  func_0x03652b00(piVar5,uVar9,*puVar10);
  uVar9 = func_0x01c23578(1,*(undefined4 *)(param_1 + 0xec),0);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  func_0x03652b00(piVar5,uVar9,*puVar10);
  uVar9 = func_0x01c23578(2,*(undefined4 *)(param_1 + 0xf0),0);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  func_0x03652b00(piVar5,uVar9,*puVar10);
  uVar9 = func_0x01c23578(3,*(undefined4 *)(param_1 + 0xf4),0);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  func_0x03652b00(piVar5,uVar9,*puVar10);
  iVar1 = 4;
  do {
    iVar6 = *(int *)(param_1 + 0xf8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar6 + 0xc) <= iVar1 - 4U) {
      func_0x01384bf4();
    }
    uVar9 = func_0x01c23578(iVar1,*(undefined4 *)(iVar6 + iVar1 * 4),0);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    func_0x03652b00(piVar5,uVar9,*puVar10);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 10);
  uVar9 = func_0x01c23578(10,*(undefined4 *)(param_1 + 0xfc),0);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar9 = func_0x03652b00(piVar5,uVar9,*puVar10);
  iVar6 = *(int *)(param_1 + 0x114);
  iVar1 = iVar6;
  if (iVar6 == 0) {
    func_0x01384bf0(uVar9,0);
    iVar1 = *(int *)(param_1 + 0x114);
  }
  iVar8 = 0;
  *(undefined4 *)(iVar6 + 0xc) = 0;
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  func_0x01aca404(param_1,iVar1);
  puVar12 = *(undefined4 **)(_UNK_01aca400 + 0x1aca318);
  do {
    iVar1 = *(int *)(param_1 + 0x114);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    uVar9 = 0;
    if (iVar8 < iVar1) {
      iVar6 = *(int *)(param_1 + 0x114);
      if (iVar6 == 0) {
        func_0x01384bf0(iVar1,0);
      }
      uVar9 = func_0x03259410(iVar6,iVar8,*puVar12);
    }
    uVar9 = func_0x01c23578(iVar8 + 0xb,uVar9,0);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    func_0x03652b00(piVar5,uVar9,*puVar10);
    iVar8 = iVar8 + 1;
  } while (iVar8 != 7);
  uVar9 = func_0x01c23578(0x12,*(undefined4 *)(param_1 + 0x10c),0);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  func_0x03652b00(piVar5,uVar9,*puVar10);
  iVar1 = *(int *)(param_1 + 0xb0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_0215abe0 + 0x215aa58);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215abe4 + 0x215aa6c),piVar5,1000,0);
    *pcVar7 = '\x01';
  }
  iVar6 = func_0x0229f06c(0x8651,0);
  if (iVar6 != 0) {
    iVar6 = func_0x0229f13c(0x8651,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x0217b868(iVar6,iVar1,piVar5,1000);
    return;
  }
  uVar9 = func_0x01c23578(1000,*(undefined4 *)(iVar1 + 0x24),0);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar6 = *piVar5;
  piVar11 = *(int **)(_UNK_0215abe8 + 0x215aaf8);
  uVar2 = (uint)*(ushort *)(iVar6 + 0xb6);
  iVar8 = *piVar11;
  if (uVar2 != 0) {
    piVar3 = (int *)(*(int *)(iVar6 + 0x58) + 4);
    do {
      if (piVar3[-1] == iVar8) {
        puVar10 = (undefined4 *)(iVar6 + *piVar3 * 8 + 0xd0);
        goto LAB_0215ab40;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar2 != 0);
  }
  puVar10 = (undefined4 *)func_0x014002dc(piVar5,iVar8,2);
LAB_0215ab40:
  (*(code *)*puVar10)(piVar5,uVar9,puVar10[1]);
  uVar9 = func_0x01c23578(0x3e9,*(undefined4 *)(iVar1 + 0x20),0);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar5;
  iVar6 = *piVar11;
  uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar2 != 0) {
    piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar11[-1] == iVar6) {
        puVar10 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xd0);
        goto LAB_0215abc4;
      }
      uVar2 = uVar2 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar2 != 0);
  }
  puVar10 = (undefined4 *)func_0x014002dc(piVar5,iVar6,2);
LAB_0215abc4:
                    /* WARNING: Could not recover jumptable at 0x0215abdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar10)(piVar5,uVar9,puVar10[1]);
  return;
}



// ===== FAT.ActivityMonopolyBoard$$EncodeKeyGridHits RVA 0x1aba404 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aca404(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined8 uStack_30;
  
  pcVar4 = (char *)(_UNK_01aca75c + 0x1aca420);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aca760 + 0x1aca434));
    func_0x01384978(*(undefined4 *)(_UNK_01aca764 + 0x1aca440));
    func_0x01384978(*(undefined4 *)(_UNK_01aca768 + 0x1aca44c));
    func_0x01384978(*(undefined4 *)(_UNK_01aca76c + 0x1aca458));
    func_0x01384978(*(undefined4 *)(_UNK_01aca770 + 0x1aca464));
    func_0x01384978(*(undefined4 *)(_UNK_01aca774 + 0x1aca470));
    func_0x01384978(*(undefined4 *)(_UNK_01aca778 + 0x1aca47c));
    func_0x01384978(*(undefined4 *)(_UNK_01aca77c + 0x1aca488));
    func_0x01384978(*(undefined4 *)(_UNK_01aca780 + 0x1aca494));
    func_0x01384978(*(undefined4 *)(_UNK_01aca784 + 0x1aca4a0));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_44 = 0;
  iVar1 = func_0x0229f06c(0x8650,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
    iVar2 = *(int *)(param_1 + 0x100);
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x34);
    }
    if ((iVar2 != 0 && iVar1 != 0) &&
       (iVar1 = func_0x02450594(iVar1,**(undefined4 **)(_UNK_01aca788 + 0x1aca558)), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x100);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02450598(&uStack_60,iVar1,**(undefined4 **)(_UNK_01aca78c + 0x1aca598));
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      uStack_38 = uStack_58;
      iStack_34 = iStack_54;
      uStack_30 = uStack_50;
      while (iVar2 = func_0x01475638(&uStack_40,**(undefined4 **)(_UNK_01aca79c + 0x1aca5c4)),
            iVar1 = iStack_34, iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 0x104);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x02450590(iVar2,iVar1,&uStack_44,**(undefined4 **)(_UNK_01aca790 + 0x1aca5f4))
        ;
        uVar5 = uStack_44;
        if (iVar2 == 0) {
          uVar5 = 0;
        }
        if (*(int *)(**(int **)(_UNK_01aca794 + 0x1aca618) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x0148ab08(0,uVar5,0);
        iVar8 = *(int *)(param_2 + 8);
        uVar6 = *(uint *)(param_2 + 0xc);
        piVar3 = *(int **)(_UNK_01aca798 + 0x1aca664);
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        iVar7 = *piVar3;
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar2 = iVar1 * 100 + iVar2;
        if (uVar6 < *(uint *)(iVar8 + 0xc)) {
          *(uint *)(param_2 + 0xc) = uVar6 + 1;
          *(int *)(iVar8 + uVar6 * 4 + 0x10) = iVar2;
        }
        else {
          func_0x0325970c(param_2,iVar2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
        }
      }
      func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01aca7a0 + 0x1aca6bc));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8650,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$LoadSetup RVA 0x1aba7ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aca7ac(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
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
  
  pcVar4 = (char *)(_UNK_01acaa80 + 0x1aca7c8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acaa84 + 0x1aca7dc));
    func_0x01384978(*(undefined4 *)(_UNK_01acaa88 + 0x1aca7e8));
    func_0x01384978(*(undefined4 *)(_UNK_01acaa8c + 0x1aca7f4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8652,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8652,0);
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
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar3,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(param_2 + 0x28);
  uVar8 = func_0x01c23c30(0,iVar7,0);
  *(undefined4 *)(param_1 + 0x9c) = uVar8;
  uVar8 = func_0x01c23c30(1,iVar7,0);
  *(undefined4 *)(param_1 + 0xec) = uVar8;
  uVar8 = func_0x01c23c30(2,iVar7,0);
  *(undefined4 *)(param_1 + 0xf0) = uVar8;
  uVar8 = func_0x01c23c30(3,iVar7,0);
  *(undefined4 *)(param_1 + 0xf4) = uVar8;
  iVar1 = 4;
  do {
    iVar9 = *(int *)(param_1 + 0xf8);
    uVar8 = func_0x01c23c30(iVar1,iVar7,0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar9 + 0xc) <= iVar1 - 4U) {
      func_0x01384bf4();
    }
    *(undefined4 *)(iVar9 + iVar1 * 4) = uVar8;
    bVar12 = iVar1 != 9;
    iVar1 = iVar1 + 1;
  } while (bVar12);
  uVar8 = func_0x01c23c30(10,iVar7,0);
  iVar1 = *(int *)(param_1 + 0x114);
  *(undefined4 *)(param_1 + 0xfc) = uVar8;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = 0xb;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  do {
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar7 + 0xc) <= iVar9) goto LAB_01aca9ec;
    iVar1 = func_0x01c23c30(iVar9,iVar7,0);
    if (iVar1 != 0) {
      iVar5 = *(int *)(param_1 + 0x114);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar5 + 8);
      uVar10 = *(uint *)(iVar5 + 0xc);
      piVar2 = *(int **)(_UNK_01acaa90 + 0x1aca998);
      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
      iVar11 = *piVar2;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      if (uVar10 < *(uint *)(iVar6 + 0xc)) {
        *(uint *)(iVar5 + 0xc) = uVar10 + 1;
        *(int *)(iVar6 + uVar10 * 4 + 0x10) = iVar1;
      }
      else {
        func_0x0325970c(iVar5,iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38)
                       );
      }
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0x12);
  iVar9 = 0x12;
LAB_01aca9ec:
  uVar8 = func_0x01c23c30(iVar9,iVar7,0);
  *(undefined4 *)(param_1 + 0x10c) = uVar8;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  uVar8 = *(undefined4 *)(param_1 + 0x9c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar8 = func_0x01cab9f4(iVar1,uVar8,0);
  *(undefined4 *)(param_1 + 0x40) = uVar8;
  func_0x01acaa94(param_1);
  func_0x01acabe8(param_1,*(undefined4 *)(param_1 + 0x114));
  iVar1 = *(int *)(param_1 + 0xb0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = func_0x0229f06c(0x8658,0,1000,0);
  if (iVar9 == 0) {
    uVar8 = func_0x01c23c30(1000,iVar7,0);
    *(undefined4 *)(iVar1 + 0x24) = uVar8;
    uVar8 = func_0x01c23c30(0x3e9,iVar7,0);
    *(undefined4 *)(iVar1 + 0x20) = uVar8;
  }
  else {
    iVar9 = func_0x0229f13c(0x8658,0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar9,iVar1,iVar7,1000);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$RefreshBoardData RVA 0x1abaa94 =====

/* WARNING: Removing unreachable block (ram,0x01ad2d58) */
/* WARNING: Removing unreachable block (ram,0x01ad2d4c) */
/* WARNING: Removing unreachable block (ram,0x01ad210c) */
/* WARNING: Removing unreachable block (ram,0x01ad1ea8) */
/* WARNING: Removing unreachable block (ram,0x01ad1eb4) */
/* WARNING: Removing unreachable block (ram,0x01ad29a4) */
/* WARNING: Removing unreachable block (ram,0x01ad29b0) */
/* WARNING: Removing unreachable block (ram,0x01ad3284) */
/* WARNING: Removing unreachable block (ram,0x01ad3294) */
/* WARNING: Removing unreachable block (ram,0x01ad243c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01acaa94(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 *puVar17;
  int *piVar18;
  int *piVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  int iVar22;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  
  pcVar12 = (char *)(_UNK_01acabd8 + 0x1acaaa8);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acabdc + 0x1acaabc));
    func_0x01384978(*(undefined4 *)(_UNK_01acabe0 + 0x1acaac8));
    *pcVar12 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x8654,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8654,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_30 = 0;
    iStack_20 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    uStack_2c = uStack_44;
    uStack_28 = (undefined4)uStack_40;
    uStack_24 = uStack_40._4_4_;
    iStack_20 = iStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar13 = *(int *)(iVar2 + 8);
    uVar15 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 2;
    if (iVar2 == 0) {
      uVar9 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar13,uVar15,&iStack_30,uVar9);
    return;
  }
  iVar13 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0xec);
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  iVar13 = *(int *)(iVar13 + 0x28);
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  iVar14 = *(int *)(param_1 + 0x40);
  iVar13 = *(int *)(iVar13 + 0xc);
  if (iVar14 == 0) {
    func_0x01384bf0();
  }
  if (iVar2 < iVar13) {
    iVar2 = *(int *)(iVar14 + 0x28);
    uVar15 = *(undefined4 *)(param_1 + 0xec);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar15 = func_0x0364c9b8(iVar2,uVar15,**(undefined4 **)(_UNK_01acabe4 + 0x1acab78));
  }
  else {
    uVar15 = *(undefined4 *)(iVar14 + 0x18);
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01caba58(iVar2,uVar15,0);
  pcVar12 = (char *)(_UNK_01ad2878 + 0x1ad18ac);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad287c + 0x1ad18c0));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2880 + 0x1ad18cc));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2884 + 0x1ad18d8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2888 + 0x1ad18e4));
    func_0x01384978(*(undefined4 *)(_UNK_01ad288c + 0x1ad18f0));
    func_0x01384978(*(undefined4 *)(_UNK_01ad28f4 + 0x1ad18fc));
    func_0x01384978(*(undefined4 *)(_UNK_01ad28f8 + 0x1ad1908));
    func_0x01384978(*(undefined4 *)(_UNK_01ad28fc + 0x1ad1914));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2900 + 0x1ad1920));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2904 + 0x1ad192c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2908 + 0x1ad1938));
    func_0x01384978(*(undefined4 *)(_UNK_01ad290c + 0x1ad1944));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2910 + 0x1ad1950));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2914 + 0x1ad195c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2918 + 0x1ad1968));
    func_0x01384978(*(undefined4 *)(_UNK_01ad291c + 0x1ad1974));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2920 + 0x1ad1980));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2924 + 0x1ad198c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2928 + 0x1ad1998));
    func_0x01384978(*(undefined4 *)(_UNK_01ad292c + 0x1ad19a4));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2930 + 0x1ad19b0));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2934 + 0x1ad19bc));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2938 + 0x1ad19c8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad293c + 0x1ad19d4));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2940 + 0x1ad19e0));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2944 + 0x1ad19ec));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2948 + 0x1ad19f8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad294c + 0x1ad1a04));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2950 + 0x1ad1a10));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2954 + 0x1ad1a1c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2958 + 0x1ad1a28));
    func_0x01384978(*(undefined4 *)(_UNK_01ad295c + 0x1ad1a34));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2960 + 0x1ad1a40));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2964 + 0x1ad1a4c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2968 + 0x1ad1a58));
    func_0x01384978(*(undefined4 *)(_UNK_01ad296c + 0x1ad1a64));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2970 + 0x1ad1a70));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2974 + 0x1ad1a7c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2978 + 0x1ad1a88));
    *pcVar12 = '\x01';
  }
  uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_60 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  iStack_30 = 0;
  iStack_34 = 0;
  iStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_4c = uStack_64;
  iStack_48 = uStack_60;
  uStack_44 = uStack_5c;
  iVar13 = func_0x0229f06c(0x8656,0);
  if (iVar13 == 0) {
    iVar13 = func_0x01384be4(**(undefined4 **)(_UNK_01ad2b04 + 0x1ad1b2c));
    func_0x01ad39a8();
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar15 = *(undefined4 *)(iVar2 + 0x18);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    uVar10 = *(undefined4 *)(iVar2 + 0x2c);
    uVar9 = *(undefined4 *)(iVar2 + 0x3c);
    iVar14 = *(int *)(**(int **)(_UNK_01ad2b08 + 0x1ad1b64) + 0x74);
    *(undefined4 *)(iVar13 + 8) = uVar15;
    *(undefined4 *)(iVar13 + 0xc) = uVar9;
    if (iVar14 == 0) {
      func_0x01384ab4();
    }
    uVar15 = func_0x0148ab08(0,uVar10,0);
    iVar14 = *(int *)(iVar2 + 0x14);
    uVar1 = *(undefined1 *)(iVar2 + 0x24);
    *(undefined4 *)(iVar13 + 0x10) = uVar15;
    *(undefined1 *)(iVar13 + 0x2c) = uVar1;
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    puVar17 = *(undefined4 **)(_UNK_01ad2b7c + 0x1ad1bcc);
    uVar15 = func_0x0364c9b8(iVar14,0,*puVar17);
    iVar14 = *(int *)(iVar2 + 0x14);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    uVar9 = func_0x0364c9b8(iVar14,1,*puVar17);
    *(undefined4 *)(iVar13 + 0x18) = uVar15;
    *(undefined4 *)(iVar13 + 0x1c) = uVar9;
    iVar14 = *(int *)(iVar2 + 0x1c);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    uVar15 = func_0x0364c9b8(iVar14,0,*puVar17);
    iVar14 = *(int *)(iVar2 + 0x1c);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    uVar9 = func_0x0364c9b8(iVar14,1,*puVar17);
    *(undefined4 *)(iVar13 + 0x24) = uVar9;
    *(undefined4 *)(iVar13 + 0x20) = uVar15;
    iVar14 = *(int *)(iVar2 + 0x30);
    *(int *)(param_1 + 0x100) = iVar13;
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x03653608(iVar14,**(undefined4 **)(_UNK_01ad2b80 + 0x1ad1c70));
    piVar18 = *(int **)(_UNK_01ad2b84 + 0x1ad1c88);
    piVar19 = *(int **)(_UNK_01ad2b88 + 0x1ad1c90);
LAB_01ad1c8c:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar13 = *piVar3;
    uVar7 = (uint)*(ushort *)(iVar13 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar13 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01ad2b8c + 0x1ad1ca8)) {
          puVar17 = (undefined4 *)(iVar13 + *piVar8 * 8 + 0xc0);
          goto LAB_01ad1cf0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar17 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad2b8c + 0x1ad1ca8),0);
LAB_01ad1cf0:
    iVar13 = (*(code *)*puVar17)(piVar3,puVar17[1]);
    if (iVar13 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar13 = *piVar3;
      uVar7 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_01ad2cb4 + 0x1ad1d24)) {
            puVar17 = (undefined4 *)(iVar13 + *piVar8 * 8 + 0xc0);
            goto LAB_01ad1d6c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar17 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad2cb4 + 0x1ad1d24),0);
LAB_01ad1d6c:
      uVar15 = (*(code *)*puVar17)(piVar3,puVar17[1]);
      iVar13 = *(int *)(param_1 + 0x100);
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      iVar13 = *(int *)(iVar13 + 0x14);
      if (*(int *)(*piVar18 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar15 = func_0x02565a88(uVar15,0);
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      iVar14 = *(int *)(iVar13 + 8);
      uVar7 = *(uint *)(iVar13 + 0xc);
      iVar22 = *piVar19;
      *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      if (uVar7 < *(uint *)(iVar14 + 0xc)) {
        *(uint *)(iVar13 + 0xc) = uVar7 + 1;
        *(undefined4 *)(iVar14 + uVar7 * 4 + 0x10) = uVar15;
      }
      else {
        func_0x0328f170(iVar13,uVar15,
                        *(undefined4 *)(*(int *)(*(int *)(iVar22 + 0x10) + 0x60) + 0x38));
      }
      goto LAB_01ad1c8c;
    }
    if (piVar3 != (int *)0x0) {
      iVar13 = *piVar3;
      uVar7 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_01ad2d24 + 0x1ad1e48)) {
            puVar17 = (undefined4 *)(iVar13 + *piVar8 * 8 + 0xc0);
            goto LAB_01ad1e90;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar17 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad2d24 + 0x1ad1e48),0);
LAB_01ad1e90:
      (*(code *)*puVar17)(piVar3,puVar17[1]);
    }
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar2 + 0x40);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x03653608(iVar13,**(undefined4 **)(_UNK_01ad2e7c + 0x1ad1ee8));
LAB_01ad1ef4:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar13 = *piVar3;
    uVar7 = (uint)*(ushort *)(iVar13 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar13 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01ad2e80 + 0x1ad1f10)) {
          puVar17 = (undefined4 *)(iVar13 + *piVar8 * 8 + 0xc0);
          goto LAB_01ad1f58;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar17 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad2e80 + 0x1ad1f10),0);
LAB_01ad1f58:
    iVar13 = (*(code *)*puVar17)(piVar3,puVar17[1]);
    if (iVar13 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar13 = *piVar3;
      uVar7 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_01ad2f6c + 0x1ad1f8c)) {
            puVar17 = (undefined4 *)(iVar13 + *piVar8 * 8 + 0xc0);
            goto LAB_01ad1fd4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar17 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad2f6c + 0x1ad1f8c),0);
LAB_01ad1fd4:
      uVar15 = (*(code *)*puVar17)(piVar3,puVar17[1]);
      iVar13 = *(int *)(param_1 + 0x100);
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      iVar13 = *(int *)(iVar13 + 0x14);
      if (*(int *)(*piVar18 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar15 = func_0x02565a88(uVar15,0);
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      iVar14 = *(int *)(iVar13 + 8);
      uVar7 = *(uint *)(iVar13 + 0xc);
      iVar22 = *piVar19;
      *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      if (uVar7 < *(uint *)(iVar14 + 0xc)) {
        *(uint *)(iVar13 + 0xc) = uVar7 + 1;
        *(undefined4 *)(iVar14 + uVar7 * 4 + 0x10) = uVar15;
      }
      else {
        func_0x0328f170(iVar13,uVar15,
                        *(undefined4 *)(*(int *)(*(int *)(iVar22 + 0x10) + 0x60) + 0x38));
      }
      goto LAB_01ad1ef4;
    }
    if (piVar3 != (int *)0x0) {
      iVar13 = *piVar3;
      uVar7 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar18[-1] == **(int **)(_UNK_01ad2fd8 + 0x1ad20ac)) {
            puVar17 = (undefined4 *)(iVar13 + *piVar18 * 8 + 0xc0);
            goto LAB_01ad20f4;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar7 != 0);
      }
      puVar17 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad2fd8 + 0x1ad20ac),0);
LAB_01ad20f4:
      (*(code *)*puVar17)(piVar3,puVar17[1]);
    }
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar2 + 0x4c);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x03653608(iVar13,**(undefined4 **)(_UNK_01ad30c8 + 0x1ad2140));
LAB_01ad214c:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar13 = *piVar3;
    uVar7 = (uint)*(ushort *)(iVar13 + 0xb6);
    if (uVar7 != 0) {
      piVar18 = (int *)(*(int *)(iVar13 + 0x58) + 4);
      do {
        if (piVar18[-1] == **(int **)(_UNK_01ad3140 + 0x1ad216c)) {
          puVar17 = (undefined4 *)(iVar13 + *piVar18 * 8 + 0xc0);
          goto LAB_01ad21b4;
        }
        uVar7 = uVar7 - 1;
        piVar18 = piVar18 + 2;
      } while (uVar7 != 0);
    }
    puVar17 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad3140 + 0x1ad216c),0);
LAB_01ad21b4:
    iVar13 = (*(code *)*puVar17)(piVar3,puVar17[1]);
    if (iVar13 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar13 = *piVar3;
      uVar7 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar18[-1] == **(int **)(_UNK_01ad31cc + 0x1ad21ec)) {
            puVar17 = (undefined4 *)(iVar13 + *piVar18 * 8 + 0xc0);
            goto LAB_01ad2234;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar7 != 0);
      }
      puVar17 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad31cc + 0x1ad21ec),0);
LAB_01ad2234:
      iVar13 = (*(code *)*puVar17)(piVar3,puVar17[1]);
      uStack_2c = 0;
      uStack_28 = 0;
      iStack_30 = 0;
      if (*(char *)(_UNK_01ad3248 + 0x1ad2258) == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01ad324c + 0x1ad2278));
        *(undefined1 *)(_UNK_01ad3250 + 0x1ad2288) = 1;
      }
      if (iVar13 == 0) {
        uVar7 = 0;
        iVar14 = 0;
      }
      else {
        iVar14 = func_0x0148d698(iVar13,0);
        uVar7 = *(uint *)(iVar13 + 8);
      }
      uVar4 = func_0x01adfe1c(iVar14,uVar7,0x3a,**(undefined4 **)(_UNK_01ad3254 + 0x1ad22bc));
      if ((int)uVar4 < 0) {
        piVar18 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01ad3544 + 0x1ad2550),1);
        if (piVar18 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar13 != 0) &&
           (iVar14 = func_0x01384ab8(iVar13,*(undefined4 *)(*piVar18 + 0x20)), iVar14 == 0)) {
          uVar15 = func_0x01384c10();
          func_0x01384aa0(uVar15,0);
        }
        if (piVar18[3] == 0) {
          func_0x01384bf4();
        }
        piVar18[4] = iVar13;
        if (*(int *)(**(int **)(_UNK_01ad35a0 + 0x1ad25b4) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2f28(**(undefined4 **)(_UNK_01ad35a4 + 0x1ad25d0),piVar18,0);
      }
      else {
        iVar22 = **(int **)(_UNK_01ad3258 + 0x1ad22e8);
        if (uVar7 <= uVar4) {
          func_0x0145b368(0);
        }
        if ((*(ushort *)(*(int *)(iVar22 + 0x10) + 0xbd) & 1) == 0) {
          func_0x014001f0();
        }
        uVar11 = uVar7 - (uVar4 + 1);
        iVar22 = iVar14 + (uVar4 + 1) * 2;
        uVar5 = func_0x01adfe1c(iVar22,uVar11,0x3a,**(undefined4 **)(_UNK_01ad325c + 0x1ad2320));
        if ((int)uVar5 < 0) {
          piVar18 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01ad35e4 + 0x1ad25ec),1);
          if (piVar18 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar13 != 0) &&
             (iVar14 = func_0x01384ab8(iVar13,*(undefined4 *)(*piVar18 + 0x20)), iVar14 == 0)) {
            uVar15 = func_0x01384c10();
            func_0x01384aa0(uVar15,0);
          }
          if (piVar18[3] == 0) {
            func_0x01384bf4();
          }
          piVar18[4] = iVar13;
          if (*(int *)(**(int **)(_UNK_01ad3614 + 0x1ad2650) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x028c2f28(**(undefined4 **)(_UNK_01ad3618 + 0x1ad266c),piVar18,0);
        }
        else {
          iVar16 = **(int **)(_UNK_01ad3340 + 0x1ad234c);
          if (uVar7 < uVar4) {
            func_0x0145b368(0);
          }
          if ((*(ushort *)(*(int *)(iVar16 + 0x10) + 0xbd) & 1) == 0) {
            func_0x014001f0();
          }
          iVar16 = **(int **)(_UNK_01ad3370 + 0x1ad237c);
          if ((uVar7 <= uVar4) || (uVar11 < uVar5)) {
            func_0x0145b368(0);
          }
          if ((*(ushort *)(*(int *)(iVar16 + 0x10) + 0xbd) & 1) == 0) {
            func_0x014001f0();
          }
          iVar16 = **(int **)(_UNK_01ad33a4 + 0x1ad23b0);
          uVar11 = uVar4 + uVar5 + 2;
          if (uVar7 < uVar11) {
            func_0x0145b368(0);
          }
          if ((*(ushort *)(*(int *)(iVar16 + 0x10) + 0xbd) & 1) == 0) {
            func_0x014001f0();
          }
          iVar16 = func_0x024509d0(iVar14,uVar4,&uStack_2c,0);
          if (iVar16 == 0) {
            piVar18 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01ad3674 + 0x1ad2688),1);
            if (piVar18 == (int *)0x0) {
              func_0x01384bf0();
            }
            if ((iVar13 != 0) &&
               (iVar14 = func_0x01384ab8(iVar13,*(undefined4 *)(*piVar18 + 0x20)), iVar14 == 0)) {
              uVar15 = func_0x01384c10();
              func_0x01384aa0(uVar15,0);
            }
            if (piVar18[3] == 0) {
              func_0x01384bf4();
            }
            piVar18[4] = iVar13;
            if (*(int *)(**(int **)(_UNK_01ad36e0 + 0x1ad26ec) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x028c2f28(**(undefined4 **)(_UNK_01ad36e4 + 0x1ad2708),piVar18,0);
          }
          else {
            iVar22 = func_0x024509d0(iVar22,uVar5,&iStack_30,0);
            if (iVar22 == 0) {
              piVar18 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01ad36e8 + 0x1ad2724),1);
              if (piVar18 == (int *)0x0) {
                func_0x01384bf0();
              }
              if ((iVar13 != 0) &&
                 (iVar14 = func_0x01384ab8(iVar13,*(undefined4 *)(*piVar18 + 0x20)), iVar14 == 0)) {
                uVar15 = func_0x01384c10();
                func_0x01384aa0(uVar15,0);
              }
              if (piVar18[3] == 0) {
                func_0x01384bf4();
              }
              piVar18[4] = iVar13;
              if (*(int *)(**(int **)(_UNK_01ad3780 + 0x1ad2788) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x028c2f28(**(undefined4 **)(_UNK_01ad3784 + 0x1ad27a4),piVar18,0);
            }
            else {
              iVar14 = func_0x024509d0(iVar14 + uVar11 * 2,uVar7 - uVar11,&uStack_28,0);
              uVar15 = uStack_28;
              uVar7 = uStack_2c;
              if (iVar14 == 0) {
                piVar18 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01ad37b0 + 0x1ad27c0),1);
                if (piVar18 == (int *)0x0) {
                  func_0x01384bf0();
                }
                if ((iVar13 != 0) &&
                   (iVar14 = func_0x01384ab8(iVar13,*(undefined4 *)(*piVar18 + 0x20)), iVar14 == 0))
                {
                  uVar15 = func_0x01384c10();
                  func_0x01384aa0(uVar15,0);
                }
                if (piVar18[3] == 0) {
                  func_0x01384bf4();
                }
                piVar18[4] = iVar13;
                if (*(int *)(**(int **)(_UNK_01ad380c + 0x1ad2824) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                func_0x028c2f28(**(undefined4 **)(_UNK_01ad3810 + 0x1ad2840),piVar18,0);
              }
              else {
                iVar14 = *(int *)(param_1 + 0x100);
                iVar13 = iVar14;
                if (iVar14 == 0) {
                  func_0x01384bf0();
                  iVar13 = *(int *)(param_1 + 0x100);
                }
                iVar22 = iStack_30;
                uVar4 = *(int *)(iVar14 + 8) - 1;
                uVar4 = uVar4 & ~((int)uVar4 >> 0x1f);
                if ((int)uVar7 <= (int)uVar4) {
                  uVar4 = uVar7;
                }
                if ((int)uVar7 < 0) {
                  uVar4 = 0;
                }
                iVar14 = iVar13;
                if (iVar13 == 0) {
                  func_0x01384bf0();
                  iVar14 = *(int *)(param_1 + 0x100);
                }
                iVar13 = *(int *)(iVar13 + 0xc) + -1;
                if (iVar22 <= iVar13) {
                  iVar13 = iVar22;
                }
                if (iVar22 < 0) {
                  iVar13 = 0;
                }
                if (iVar14 == 0) {
                  func_0x01384bf0();
                }
                iVar14 = *(int *)(iVar14 + 0x28);
                if (iVar14 == 0) {
                  func_0x01384bf0();
                }
                iVar22 = *(int *)(iVar14 + 8);
                uVar7 = *(uint *)(iVar14 + 0xc);
                piVar18 = *(int **)(_UNK_01ad3500 + 0x1ad250c);
                *(int *)(iVar14 + 0x10) = *(int *)(iVar14 + 0x10) + 1;
                iVar16 = *piVar18;
                if (iVar22 == 0) {
                  func_0x01384bf0();
                }
                if (uVar7 < *(uint *)(iVar22 + 0xc)) {
                  *(uint *)(iVar14 + 0xc) = uVar7 + 1;
                  iVar22 = iVar22 + uVar7 * 0xc;
                  *(undefined4 *)(iVar22 + 0x10) = uVar15;
                  *(uint *)(iVar22 + 0x14) = uVar4;
                  *(int *)(iVar22 + 0x18) = iVar13;
                }
                else {
                  func_0x0331f86c(iVar14,uVar15,uVar4,iVar13,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar16 + 0x10) + 0x60) + 0x38));
                }
              }
            }
          }
        }
      }
      goto LAB_01ad214c;
    }
    if (piVar3 != (int *)0x0) {
      iVar13 = *piVar3;
      uVar7 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar18[-1] == **(int **)(_UNK_01ad3878 + 0x1ad28b4)) {
            puVar17 = (undefined4 *)(iVar13 + *piVar18 * 8 + 0xc0);
            goto LAB_01ad298c;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar7 != 0);
      }
      puVar17 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad3878 + 0x1ad28b4),0);
LAB_01ad298c:
      (*(code *)*puVar17)(piVar3,puVar17[1]);
    }
    iVar13 = *(int *)(param_1 + 0x100);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar13 + 0x34);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    func_0x024509cc(iVar13,**(undefined4 **)(_UNK_01ad3914 + 0x1ad29e8));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar2 + 0x28);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x03653608(iVar13,**(undefined4 **)(_UNK_01ad3918 + 0x1ad2a1c));
LAB_01ad2a30:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar13 = *piVar3;
    uVar7 = (uint)*(ushort *)(iVar13 + 0xb6);
    if (uVar7 != 0) {
      piVar18 = (int *)(*(int *)(iVar13 + 0x58) + 4);
      do {
        if (piVar18[-1] == **(int **)(_UNK_01ad391c + 0x1ad2a4c)) {
          puVar17 = (undefined4 *)(iVar13 + *piVar18 * 8 + 0xc0);
          goto LAB_01ad2a94;
        }
        uVar7 = uVar7 - 1;
        piVar18 = piVar18 + 2;
      } while (uVar7 != 0);
    }
    puVar17 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad391c + 0x1ad2a4c),0);
LAB_01ad2a94:
    iVar13 = (*(code *)*puVar17)(piVar3,puVar17[1]);
    if (iVar13 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar13 = *piVar3;
      uVar7 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar18[-1] == **(int **)(_UNK_01ad3924 + 0x1ad2ac8)) {
            puVar17 = (undefined4 *)(iVar13 + *piVar18 * 8 + 0xc0);
            goto LAB_01ad2b18;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar7 != 0);
      }
      puVar17 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad3924 + 0x1ad2ac8),0);
LAB_01ad2b18:
      iVar13 = (*(code *)*puVar17)(piVar3,puVar17[1]);
      if (*(char *)(_UNK_01ad3928 + 0x1ad2b38) == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01ad392c + 0x1ad2b4c));
        *(undefined1 *)(_UNK_01ad3930 + 0x1ad2b5c) = 1;
      }
      if (iVar13 == 0) {
        uVar7 = 0;
        iVar14 = 0;
      }
      else {
        iVar14 = func_0x0148d698(iVar13,0);
        uVar7 = *(uint *)(iVar13 + 8);
      }
      uVar4 = func_0x01adfe1c(iVar14,uVar7,0x3a,**(undefined4 **)(_UNK_01ad3934 + 0x1ad2ba4));
      iStack_38 = 0;
      iStack_34 = 0;
      if (-1 < (int)uVar4) {
        iVar13 = **(int **)(_UNK_01ad3938 + 0x1ad2bd8);
        if (uVar7 < uVar4) {
          func_0x0145b368(0);
        }
        if ((*(ushort *)(*(int *)(iVar13 + 0x10) + 0xbd) & 1) == 0) {
          func_0x014001f0();
        }
        func_0x024509d0(iVar14,uVar4,&iStack_34,0);
        iVar13 = **(int **)(_UNK_01ad393c + 0x1ad2c1c);
        if (uVar7 <= uVar4) {
          func_0x0145b368(0);
        }
        if ((*(ushort *)(*(int *)(iVar13 + 0x10) + 0xbd) & 1) == 0) {
          func_0x014001f0();
        }
        func_0x024509d0(iVar14 + (uVar4 + 1) * 2,uVar7 - (uVar4 + 1),&iStack_38,0);
        iVar13 = iStack_34;
        if (0 < iStack_34) {
          iVar13 = iStack_38;
          iVar14 = iStack_38;
        }
        if (0 < iVar13) {
          iVar13 = *(int *)(param_1 + 0x100);
          if (iVar13 == 0) {
            func_0x01384bf0();
            iVar14 = iStack_38;
          }
          iVar22 = iStack_34;
          iVar13 = *(int *)(iVar13 + 0x34);
          if (iVar13 == 0) {
            func_0x01384bf0();
          }
          func_0x0245025c(iVar13,iVar22,iVar14,**(undefined4 **)(_UNK_01ad3940 + 0x1ad2ca0));
        }
      }
      goto LAB_01ad2a30;
    }
    puVar17 = *(undefined4 **)(_UNK_01ad3944 + 0x1ad2cd0);
    puVar21 = *(undefined4 **)(_UNK_01ad3948 + 0x1ad2cd8);
    if (piVar3 != (int *)0x0) {
      iVar13 = *piVar3;
      uVar7 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar18[-1] == **(int **)(_UNK_01ad394c + 0x1ad2ce8)) {
            puVar6 = (undefined4 *)(iVar13 + *piVar18 * 8 + 0xc0);
            goto LAB_01ad2d34;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad394c + 0x1ad2ce8),0);
LAB_01ad2d34:
      (*(code *)*puVar6)(piVar3,puVar6[1]);
    }
    iVar13 = *(int *)(param_1 + 0x100);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar13 + 0x38);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    func_0x024509cc(iVar13,*puVar17);
    iVar13 = *(int *)(param_1 + 0x100);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar13 + 0x34);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar13 = func_0x02450594(iVar13,**(undefined4 **)(_UNK_01ad3950 + 0x1ad2dc0));
    if (0 < iVar13) {
      iVar13 = *(int *)(param_1 + 0x100);
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      iVar13 = *(int *)(iVar13 + 0x34);
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      func_0x02450598(&uStack_80,iVar13,**(undefined4 **)(_UNK_01ad3954 + 0x1ad2e04));
      uStack_50 = uStack_80;
      uStack_4c = uStack_7c;
      iStack_48 = uStack_78;
      uStack_44 = uStack_74;
      uStack_40 = uStack_70;
      puVar17 = *(undefined4 **)(_UNK_01ad3958 + 0x1ad2e30);
      while (iVar13 = func_0x01475638(&uStack_50,*puVar17), uVar7 = uStack_44, iVar13 != 0) {
        iVar13 = *(int *)(param_1 + 0x100);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar13 = *(int *)(iVar13 + 0x38);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        func_0x0245025c(iVar13,uVar7,0,*puVar21);
      }
      func_0x0245059c(&uStack_50,**(undefined4 **)(_UNK_01ad3960 + 0x1ad2e90));
      iVar13 = *(int *)(param_1 + 0x100);
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      iVar13 = *(int *)(iVar13 + 0x28);
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      func_0x03320714(&uStack_80,iVar13,**(undefined4 **)(_UNK_01ad396c + 0x1ad2ecc));
      uStack_68 = uStack_80;
      uStack_64 = uStack_7c;
      uStack_60 = uStack_78;
      uStack_5c = uStack_74;
      uStack_58 = uStack_70;
      puVar17 = *(undefined4 **)(_UNK_01ad3970 + 0x1ad2ef4);
      puVar6 = *(undefined4 **)(_UNK_01ad3974 + 0x1ad2efc);
      puVar20 = *(undefined4 **)(_UNK_01ad3978 + 0x1ad2f04);
      while (iVar13 = func_0x01472198(&uStack_68,*puVar17), uVar15 = uStack_5c, iVar13 != 0) {
        iVar13 = *(int *)(param_1 + 0x100);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar13 = *(int *)(iVar13 + 0x34);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar13 = func_0x02450998(iVar13,uVar15,*puVar6);
        if (iVar13 != 0) {
          iVar13 = *(int *)(param_1 + 0x100);
          if (iVar13 == 0) {
            func_0x01384bf0();
            iVar14 = iRam00000038;
            iVar13 = *(int *)(param_1 + 0x100);
            if (iVar13 == 0) {
              iVar13 = 0;
              func_0x01384bf0();
            }
          }
          else {
            iVar14 = *(int *)(iVar13 + 0x38);
          }
          iVar13 = *(int *)(iVar13 + 0x38);
          if (iVar13 == 0) {
            func_0x01384bf0();
          }
          iVar13 = func_0x0245099c(iVar13,uVar15,*puVar20);
          if (iVar14 == 0) {
            func_0x01384bf0();
          }
          func_0x0245025c(iVar14,uVar15,iVar13 + 1,*puVar21);
        }
      }
      func_0x024509e0(&uStack_68,**(undefined4 **)(_UNK_01ad3980 + 0x1ad2fe8));
    }
    iVar13 = *(int *)(param_1 + 0x100);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar13 + 0x30);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar13 + 0xc) = 0;
    *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x20);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_01ad3988 + 0x1ad3054));
    piVar18 = *(int **)(_UNK_01ad398c + 0x1ad306c);
    piVar19 = *(int **)(_UNK_01ad3990 + 0x1ad3074);
LAB_01ad3070:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01ad3998 + 0x1ad308c)) {
          puVar17 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_01ad30d8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar17 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad3998 + 0x1ad308c),0);
LAB_01ad30d8:
    iVar2 = (*(code *)*puVar17)(piVar3,puVar17[1]);
    if (iVar2 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar8[-1] == *piVar18) {
            puVar17 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
            goto LAB_01ad3150;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar17 = (undefined4 *)func_0x014002dc(piVar3,*piVar18,0);
LAB_01ad3150:
      uVar15 = (*(code *)*puVar17)(piVar3,puVar17[1]);
      iVar2 = *(int *)(param_1 + 0x100);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x30);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar13 = *(int *)(iVar2 + 8);
      uVar7 = *(uint *)(iVar2 + 0xc);
      iVar14 = *piVar19;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      if (uVar7 < *(uint *)(iVar13 + 0xc)) {
        *(uint *)(iVar2 + 0xc) = uVar7 + 1;
        *(undefined4 *)(iVar13 + uVar7 * 4 + 0x10) = uVar15;
      }
      else {
        func_0x0325970c(iVar2,uVar15,
                        *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38));
      }
      goto LAB_01ad3070;
    }
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
      uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar7 != 0) {
        piVar18 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar18[-1] == **(int **)(_UNK_01ad399c + 0x1ad320c)) {
            puVar17 = (undefined4 *)(iVar2 + *piVar18 * 8 + 0xc0);
            goto LAB_01ad326c;
          }
          uVar7 = uVar7 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar7 != 0);
      }
      puVar17 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad399c + 0x1ad320c),0);
LAB_01ad326c:
      (*(code *)*puVar17)(piVar3,puVar17[1]);
    }
    puVar17 = *(undefined4 **)(_UNK_01ad39a0 + 0x1ad32a0);
    iVar2 = *(int *)(param_1 + 0x104);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x024509cc(iVar2,*puVar17);
    iVar2 = *(int *)(param_1 + 0x108);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x024509cc(iVar2,*puVar17);
    *(undefined4 *)(param_1 + 0x10c) = 0;
    uVar7 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x110);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar2 + 0xc) <= uVar7) {
        func_0x01384bf4();
      }
      iVar13 = uVar7 * 4;
      uVar7 = uVar7 + 1;
      *(undefined4 *)(iVar2 + iVar13 + 0x10) = 0;
    } while (uVar7 != 6);
  }
  else {
    iVar13 = func_0x0229f13c(0x8656,0);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar13,param_1,iVar2,0,0);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$DecodeKeyGridHits RVA 0x1ababe8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01acabe8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  
  pcVar4 = (char *)(_UNK_01acae64 + 0x1acac04);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acae68 + 0x1acac18));
    func_0x01384978(*(undefined4 *)(_UNK_01acae6c + 0x1acac24));
    func_0x01384978(*(undefined4 *)(_UNK_01acae70 + 0x1acac30));
    func_0x01384978(*(undefined4 *)(_UNK_01acae74 + 0x1acac3c));
    func_0x01384978(*(undefined4 *)(_UNK_01acae78 + 0x1acac48));
    func_0x01384978(*(undefined4 *)(_UNK_01acae7c + 0x1acac54));
    func_0x01384978(*(undefined4 *)(_UNK_01acae80 + 0x1acac60));
    func_0x01384978(*(undefined4 *)(_UNK_01acae84 + 0x1acac6c));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0x8657,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x104);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x024509cc(iVar2,**(undefined4 **)(_UNK_01acae88 + 0x1acace4));
    if (param_2 != 0) {
      iVar2 = *(int *)(param_2 + 0xc);
    }
    if (param_2 != 0 && iVar2 != 0) {
      func_0x0325a3b4(&uStack_48,param_2,**(undefined4 **)(_UNK_01acae8c + 0x1acad10));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      puVar5 = *(undefined4 **)(_UNK_01acae90 + 0x1acad2c);
      piVar6 = *(int **)(_UNK_01acae94 + 0x1acad34);
      puVar7 = *(undefined4 **)(_UNK_01acae98 + 0x1acad3c);
      while (iVar2 = func_0x01470118(&uStack_38,*puVar5), uVar1 = uStack_2c, iVar2 != 0) {
        bVar8 = SBORROW4(uStack_2c,1);
        iVar2 = uStack_2c - 1;
        if (0 < (int)uStack_2c) {
          bVar8 = SBORROW4(uStack_2c,100);
          iVar2 = uStack_2c - 100;
        }
        if (iVar2 < 0 == bVar8) {
          iVar2 = *(int *)(param_1 + 0x104);
          if (*(int *)(*piVar6 + 0x74) == 0) {
            func_0x01384ab4();
          }
          uVar3 = func_0x0148ab08(0,uVar1 % 100,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x0245025c(iVar2,uVar1 / 100,uVar3,*puVar7);
        }
      }
      func_0x02450828(&uStack_38,**(undefined4 **)(_UNK_01acae9c + 0x1acadcc));
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x8657,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$SetupFresh RVA 0x1abaea8 =====

void FUN_01acaea8(int param_1)

{
  int iVar1;
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
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x8659,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(param_1 + 0x3c);
    iVar1 = *(int *)(iVar1 + 0x2c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar2 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x01cf6408(iVar1,uVar5,0);
    *(undefined4 *)(param_1 + 0x9c) = uVar5;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    uVar5 = *(undefined4 *)(param_1 + 0x9c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x01cab9f4(iVar1,uVar5,0);
    *(undefined4 *)(param_1 + 0x40) = uVar5;
    func_0x01acaff0(param_1,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xfc);
    uVar5 = *(undefined4 *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = 0;
    func_0x01e7437c(iVar1,uVar5,0,0);
    iVar1 = func_0x0229f06c(0x865f,0);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xf0) = 0;
      *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
      *(undefined4 *)(param_1 + 0xf4) = 0;
      FUN_01acaa94(param_1);
      iVar1 = *(int *)(param_1 + 0xb0);
      *(undefined4 *)(param_1 + 0xfc) = 0;
      if (iVar1 == 0) {
        return;
      }
      iVar2 = func_0x0229f06c(0x5b3,0);
      if (iVar2 == 0) {
        *(undefined1 *)(iVar1 + 0xc) = 1;
        return;
      }
      iVar2 = func_0x0229f13c(0x5b3,0);
      param_1 = iVar1;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x865f,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x8659,0);
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
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.ActivityMonopolyBoard$$InitWorld RVA 0x1abaff0 =====

/* WARNING: Removing unreachable block (ram,0x01acb558) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01acaff0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
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
  
  pcVar8 = (char *)(_UNK_01acb6cc + 0x1acb00c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acb6d0 + 0x1acb020));
    func_0x01384978(*(undefined4 *)(_UNK_01acb6d4 + 0x1acb02c));
    func_0x01384978(*(undefined4 *)(_UNK_01acb6d8 + 0x1acb038));
    func_0x01384978(*(undefined4 *)(_UNK_01acb6dc + 0x1acb044));
    func_0x01384978(*(undefined4 *)(_UNK_01acb6e0 + 0x1acb050));
    func_0x01384978(*(undefined4 *)(_UNK_01acb6e4 + 0x1acb05c));
    func_0x01384978(*(undefined4 *)(_UNK_01acb6e8 + 0x1acb068));
    func_0x01384978(*(undefined4 *)(_UNK_01acb6ec + 0x1acb074));
    func_0x01384978(*(undefined4 *)(_UNK_01acb6f0 + 0x1acb080));
    func_0x01384978(*(undefined4 *)(_UNK_01acb6f4 + 0x1acb08c));
    func_0x01384978(*(undefined4 *)(_UNK_01acb6f8 + 0x1acb098));
    func_0x01384978(*(undefined4 *)(_UNK_01acb6fc + 0x1acb0a4));
    func_0x01384978(*(undefined4 *)(_UNK_01acb700 + 0x1acb0b0));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x865a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x865a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar9,uVar11,&uStack_38,uVar7,0,0);
    return;
  }
  iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01acb704 + 0x1acb110));
  func_0x02143488(iVar9,0);
  uVar11 = func_0x01384be4(**(undefined4 **)(_UNK_01acb708 + 0x1acb12c));
  func_0x024500b4(uVar11,param_1,**(undefined4 **)(_UNK_01acb70c + 0x1acb148),0);
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01acb710 + 0x1acb15c));
  func_0x0214d6c8(iVar1,uVar11,0,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0214e900(iVar1,iVar9,0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x02141f58(iVar9,iVar1,0);
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(iVar2 + 0x4c);
  iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01acb714 + 0x1acb1d0));
  func_0x01db7f44(iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar2 + 8) = 0xc;
  *(int *)(iVar2 + 0xc) = iVar9;
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  func_0x01db7f4c(iVar10,iVar2,0);
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  uVar11 = func_0x01acda28(param_1);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_48 = 0;
  uStack_44 = 0;
  func_0x01db8438(iVar2,iVar9,uVar11,param_2 == 0);
  if (param_2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(param_1 + 0x40);
    iVar2 = *(int *)(iVar2 + 0x40);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar10 + 0x20);
    iStack_2c = iVar1;
    iStack_28 = iVar9;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x0364c2b4(iVar10,**(undefined4 **)(_UNK_01acb718 + 0x1acb2ec));
    piVar12 = *(int **)(_UNK_01acb71c + 0x1acb308);
    piVar13 = *(int **)(_UNK_01acb720 + 0x1acb310);
    do {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar12) {
            puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01acb368;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar12,0);
LAB_01acb368:
      iVar10 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      iVar9 = iStack_28;
      iVar1 = iStack_2c;
      if (iVar10 == 0) goto LAB_01acb4d4;
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_01acb724 + 0x1acb39c)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01acb3e4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01acb724 + 0x1acb39c),0);
LAB_01acb3e4:
      uVar11 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      uVar7 = func_0x01acbb30(param_1);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01cdef00(iVar2,uVar7,0,0);
      iVar1 = *piVar13;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar13;
      }
      uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x328);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = **(undefined4 **)(_UNK_01acb728 + 0x1acb45c);
      uStack_34 = **(undefined4 **)(_UNK_01acb72c + 0x1acb468);
      uStack_3c = 0x59;
      uStack_30 = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uVar11 = func_0x01cdcbac(iVar2,uVar11,1,uVar7);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01cdf088(iVar2,uVar11,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01cdefd0(iVar2,0);
    } while( true );
  }
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x0214a9e8(iVar9,param_2,0,0);
  goto LAB_01acb560;
LAB_01acb4d4:
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar12[-1] == **(int **)(_UNK_01acb730 + 0x1acb4f8)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0xc0);
          goto LAB_01acb540;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01acb730 + 0x1acb4f8),0);
LAB_01acb540:
    (*(code *)*puVar4)(piVar3,puVar4[1]);
  }
LAB_01acb560:
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  uVar11 = *(undefined4 *)(param_1 + 0xb0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbb930(iVar2,uVar11,0);
  uVar11 = func_0x01384be4(**(undefined4 **)(_UNK_01acb734 + 0x1acb5a8));
  func_0x02c05f90(uVar11,param_1,3,0);
  *(undefined4 *)(param_1 + 0xb4) = uVar11;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x02142104(iVar9,param_1,0);
  *(int *)(param_1 + 0xa8) = iVar9;
  *(int *)(param_1 + 0xac) = iVar1;
  return;
}



// ===== FAT.ActivityMonopolyBoard$$StartNewRound RVA 0x1abb73c =====

void FUN_01acb73c(int param_1)

{
  int iVar1;
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
  
  iVar1 = func_0x0229f06c(0x865f,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    FUN_01acaa94(param_1);
    iVar1 = *(int *)(param_1 + 0xb0);
    *(undefined4 *)(param_1 + 0xfc) = 0;
    if (iVar1 == 0) {
      return;
    }
    iVar2 = func_0x0229f06c(0x5b3,0);
    if (iVar2 == 0) {
      *(undefined1 *)(iVar1 + 0xc) = 1;
      return;
    }
    iVar2 = func_0x0229f13c(0x5b3,0);
    param_1 = iVar1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x865f,0);
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
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.ActivityMonopolyBoard$$Open RVA 0x1abb7c8 =====

void FUN_01acb7c8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8660,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8660,0);
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
  func_0x02b57d14(param_1,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
                  *(undefined4 *)(param_1 + 0x44));
  return;
}



// ===== FAT.ActivityMonopolyBoard$$TryPopup RVA 0x1abb844 =====

void FUN_01acb844(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x8662,0);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x5c);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x01e7437c(param_2,uVar2,param_3,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x8662,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$WhenEnd RVA 0x1abb8dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01acb8dc(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_01acbb08 + 0x1acb8f4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acbb0c + 0x1acb908));
    func_0x01384978(*(undefined4 *)(_UNK_01acbb10 + 0x1acb914));
    func_0x01384978(*(undefined4 *)(_UNK_01acbb14 + 0x1acb920));
    func_0x01384978(*(undefined4 *)(_UNK_01acbb18 + 0x1acb92c));
    func_0x01384978(*(undefined4 *)(_UNK_01acbb1c + 0x1acb938));
    *pcVar2 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x8663,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xfc);
    uVar3 = *(undefined4 *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e7437c(iVar1,uVar3,0,0,0);
    if (*(int *)(**(int **)(_UNK_01acbb20 + 0x1acb9e8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x028c8d78(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0302a7c0(&uStack_20,iVar1,&iStack_24,**(undefined4 **)(_UNK_01acbb24 + 0x1acba24));
    iVar1 = iStack_24;
    uVar3 = func_0x01acbb30(param_1);
    uVar3 = func_0x02c0389c(iVar1,uVar3,0);
    func_0x01acbb84(param_1,uVar3);
    iVar1 = iStack_24;
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) < 1) {
      func_0x03633b24(&uStack_20,**(undefined4 **)(_UNK_01acbb2c + 0x1acbaf0));
    }
    else {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = *(undefined4 *)(param_1 + 0x74);
      iVar1 = *(int *)(iVar1 + 0xfc);
      uStack_30 = uStack_20;
      uStack_2c = uStack_1c;
      uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_01acbb28 + 0x1acbaa4),&uStack_30);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e7437c(iVar1,uVar4,0,uVar3,0);
    }
    func_0x01acbe20(param_1);
  }
  else {
    iVar1 = func_0x0229f13c(0x8663,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$get_World RVA 0x1abbb30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01acbb30(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x865d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x865d,0);
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
  return *(undefined4 *)(param_1 + 0xa8);
}



// ===== FAT.ActivityMonopolyBoard$$Track_Event_Monopoly_End_Collect RVA 0x1abbb84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01acbb84(undefined4 param_1,int param_2)

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
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01acbddc + 0x1acbba0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acbde0 + 0x1acbbb4));
    func_0x01384978(*(undefined4 *)(_UNK_01acbde4 + 0x1acbbc0));
    func_0x01384978(*(undefined4 *)(_UNK_01acbde8 + 0x1acbbcc));
    func_0x01384978(*(undefined4 *)(_UNK_01acbdec + 0x1acbbd8));
    func_0x01384978(*(undefined4 *)(_UNK_01acbdf0 + 0x1acbbe4));
    func_0x01384978(*(undefined4 *)(_UNK_01acbdf4 + 0x1acbbf0));
    func_0x01384978(*(undefined4 *)(_UNK_01acbdf8 + 0x1acbbfc));
    func_0x01384978(*(undefined4 *)(_UNK_01acbdfc + 0x1acbc08));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8665,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8665,0);
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
  func_0x02b489c0(&uStack_2c,param_1,0);
  piVar2 = (int *)func_0x01384be4(**(undefined4 **)(_UNK_01acbe00 + 0x1acbc7c));
  func_0x029f3744(piVar2,0);
  func_0x01998f3c(piVar2,0);
  uVar6 = func_0x029f279c(uStack_2c,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  (**(code **)(*piVar2 + 0x100))
            (piVar2,**(undefined4 **)(_UNK_01acbe04 + 0x1acbcc8),uVar6,
             *(undefined4 *)(*piVar2 + 0x104));
  uVar6 = func_0x029f279c(uStack_28,0);
  (**(code **)(*piVar2 + 0x100))
            (piVar2,**(undefined4 **)(_UNK_01acbe08 + 0x1acbcf8),uVar6,
             *(undefined4 *)(*piVar2 + 0x104));
  uVar6 = func_0x029f279c(uStack_24,0);
  (**(code **)(*piVar2 + 0x100))
            (piVar2,**(undefined4 **)(_UNK_01acbe0c + 0x1acbd28),uVar6,
             *(undefined4 *)(*piVar2 + 0x104));
  uVar6 = **(undefined4 **)(_UNK_01acbe10 + 0x1acbd48);
  if (param_2 == 0) {
    param_2 = **(int **)(**(int **)(_UNK_01acbe14 + 0x1acbd58) + 0x5c);
  }
  uVar3 = func_0x029f23f4(param_2,0);
  (**(code **)(*piVar2 + 0x100))(piVar2,uVar6,uVar3,*(undefined4 *)(*piVar2 + 0x104));
  uVar6 = (**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
  if (*(int *)(**(int **)(_UNK_01acbe18 + 0x1acbdac) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x01998df4(**(undefined4 **)(_UNK_01acbe1c + 0x1acbdd0),uVar6,0);
  return;
}



// ===== FAT.ActivityMonopolyBoard$$Cleanup RVA 0x1abbe20 =====

void FUN_01acbe20(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8667,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8667,0);
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
  if (*(int *)(param_1 + 0xb0) != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar4 = *(undefined4 *)(param_1 + 0xb0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbba60(iVar1,uVar4,0);
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  iVar1 = FUN_01acbb30(param_1);
  if (iVar1 != 0) {
    func_0x021421a8(iVar1,param_1,0);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  uVar4 = FUN_01acbb30(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbc0ec(iVar1,uVar4,0);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  return;
}



// ===== FAT.ActivityMonopolyBoard$$WhenReset RVA 0x1abbf34 =====

void FUN_01acbf34(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8668,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x8667,0);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0xb0) != 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x4c);
        uVar4 = *(undefined4 *)(param_1 + 0xb0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01dbba60(iVar1,uVar4,0);
        *(undefined4 *)(param_1 + 0xb0) = 0;
      }
      *(undefined4 *)(param_1 + 0xb4) = 0;
      iVar1 = FUN_01acbb30(param_1);
      if (iVar1 != 0) {
        func_0x021421a8(iVar1,param_1,0);
      }
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      uVar4 = FUN_01acbb30(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01dbc0ec(iVar1,uVar4,0);
      *(undefined4 *)(param_1 + 0xa8) = 0;
      *(undefined4 *)(param_1 + 0xac) = 0;
      return;
    }
    iVar1 = func_0x0229f13c(0x8667,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8668,0);
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



// ===== FAT.ActivityMonopolyBoard$$BoardEntryAsset RVA 0x1abbf8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01acbf8c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01acc054 + 0x1acbfa4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acc058 + 0x1acbfb8));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x8669,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = func_0x02b617fc(iVar1,0);
    func_0x02b63e8c(&uStack_18,**(undefined4 **)(_UNK_01acc05c + 0x1acc03c),&uStack_14,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x8669,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityMonopolyBoard$$FAT.IBoardArchive.get_Feature RVA 0x1abc060 =====

undefined4 FUN_01acc060(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x866a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x866a,0);
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
  return 0x70;
}



// ===== FAT.ActivityMonopolyBoard$$FAT.IBoardArchive.SetBoardData RVA 0x1abc0b4 =====

/* WARNING: Removing unreachable block (ram,0x01acb558) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01acc0b4(int param_1,int param_2)

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
  int iVar10;
  undefined4 uVar11;
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
  
  iVar4 = func_0x0229f06c(0x866b,0);
  if (iVar4 == 0) {
    iVar4 = FUN_01acbb30(param_1);
    if (iVar4 != 0) {
      return;
    }
    pcVar8 = (char *)(_UNK_01acb6cc + 0x1acb00c);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01acb6d0 + 0x1acb020));
      func_0x01384978(*(undefined4 *)(_UNK_01acb6d4 + 0x1acb02c));
      func_0x01384978(*(undefined4 *)(_UNK_01acb6d8 + 0x1acb038));
      func_0x01384978(*(undefined4 *)(_UNK_01acb6dc + 0x1acb044));
      func_0x01384978(*(undefined4 *)(_UNK_01acb6e0 + 0x1acb050));
      func_0x01384978(*(undefined4 *)(_UNK_01acb6e4 + 0x1acb05c));
      func_0x01384978(*(undefined4 *)(_UNK_01acb6e8 + 0x1acb068));
      func_0x01384978(*(undefined4 *)(_UNK_01acb6ec + 0x1acb074));
      func_0x01384978(*(undefined4 *)(_UNK_01acb6f0 + 0x1acb080));
      func_0x01384978(*(undefined4 *)(_UNK_01acb6f4 + 0x1acb08c));
      func_0x01384978(*(undefined4 *)(_UNK_01acb6f8 + 0x1acb098));
      func_0x01384978(*(undefined4 *)(_UNK_01acb6fc + 0x1acb0a4));
      func_0x01384978(*(undefined4 *)(_UNK_01acb700 + 0x1acb0b0));
      *pcVar8 = '\x01';
    }
    iVar4 = func_0x0229f06c(0x865a,0);
    if (iVar4 == 0) {
      iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01acb704 + 0x1acb110));
      func_0x02143488(iVar9,0);
      uVar11 = func_0x01384be4(**(undefined4 **)(_UNK_01acb708 + 0x1acb12c));
      func_0x024500b4(uVar11,param_1,**(undefined4 **)(_UNK_01acb70c + 0x1acb148),0);
      iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01acb710 + 0x1acb15c));
      func_0x0214d6c8(iVar4,uVar11,0,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0214e900(iVar4,iVar9,0);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      func_0x02141f58(iVar9,iVar4,0);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar10 = *(int *)(iVar1 + 0x4c);
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01acb714 + 0x1acb1d0));
      func_0x01db7f44(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar1 + 8) = 0xc;
      *(int *)(iVar1 + 0xc) = iVar9;
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      func_0x01db7f4c(iVar10,iVar1,0);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      uVar11 = func_0x01acda28(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_48 = 0;
      uStack_44 = 0;
      func_0x01db8438(iVar1,iVar9,uVar11,param_2 == 0);
      if (param_2 == 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar10 = *(int *)(param_1 + 0x40);
        iVar1 = *(int *)(iVar1 + 0x40);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = *(int *)(iVar10 + 0x20);
        iStack_2c = iVar4;
        iStack_28 = iVar9;
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        piVar2 = (int *)func_0x0364c2b4(iVar10,**(undefined4 **)(_UNK_01acb718 + 0x1acb2ec));
        piVar12 = *(int **)(_UNK_01acb71c + 0x1acb308);
        piVar13 = *(int **)(_UNK_01acb720 + 0x1acb310);
        do {
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar4 = *piVar2;
          uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar12) {
                puVar3 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xc0);
                goto LAB_01acb368;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_01acb368:
          iVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
          iVar9 = iStack_28;
          iVar4 = iStack_2c;
          if (iVar10 == 0) goto LAB_01acb4d4;
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar4 = *piVar2;
          uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
            do {
              if (piVar6[-1] == **(int **)(_UNK_01acb724 + 0x1acb39c)) {
                puVar3 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xc0);
                goto LAB_01acb3e4;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01acb724 + 0x1acb39c),0);
LAB_01acb3e4:
          uVar11 = (*(code *)*puVar3)(piVar2,puVar3[1]);
          uVar7 = FUN_01acbb30(param_1);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x01cdef00(iVar1,uVar7,0,0);
          iVar4 = *piVar13;
          if (*(int *)(iVar4 + 0x74) == 0) {
            func_0x01384ab4();
            iVar4 = *piVar13;
          }
          uVar7 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x328);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uStack_38 = **(undefined4 **)(_UNK_01acb728 + 0x1acb45c);
          uStack_34 = **(undefined4 **)(_UNK_01acb72c + 0x1acb468);
          uStack_3c = 0x59;
          uStack_30 = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0;
          uVar11 = func_0x01cdcbac(iVar1,uVar11,1,uVar7);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x01cdf088(iVar1,uVar11,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x01cdefd0(iVar1,0);
        } while( true );
      }
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      func_0x0214a9e8(iVar9,param_2,0,0);
      goto LAB_01acb560;
    }
    iVar4 = func_0x0229f13c(0x865a,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar4 = func_0x0229f13c(0x866b,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
  }
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
  if (*(int *)(iVar4 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar9 = *(int *)(iVar4 + 8);
  uVar11 = *(undefined4 *)(iVar4 + 0xc);
  iVar4 = *(int *)(iVar4 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 3;
  if (iVar4 == 0) {
    uVar7 = 2;
  }
  func_0x0245495c(iVar9,uVar11,&uStack_38,uVar7,0,0);
  return;
LAB_01acb4d4:
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar12[-1] == **(int **)(_UNK_01acb730 + 0x1acb4f8)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
          goto LAB_01acb540;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01acb730 + 0x1acb4f8),0);
LAB_01acb540:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
LAB_01acb560:
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  uVar11 = *(undefined4 *)(param_1 + 0xb0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbb930(iVar1,uVar11,0);
  uVar11 = func_0x01384be4(**(undefined4 **)(_UNK_01acb734 + 0x1acb5a8));
  func_0x02c05f90(uVar11,param_1,3,0);
  *(undefined4 *)(param_1 + 0xb4) = uVar11;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x02142104(iVar9,param_1,0);
  *(int *)(param_1 + 0xa8) = iVar9;
  *(int *)(param_1 + 0xac) = iVar4;
  return;
}



// ===== FAT.ActivityMonopolyBoard$$FAT.IBoardArchive.FillBoardData RVA 0x1abc128 =====

/* WARNING: Possible PIC construction at 0x02147e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02147e08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01acc128(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int unaff_r4;
  char *pcVar11;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar12;
  undefined4 uVar13;
  undefined4 unaff_r7;
  undefined4 *puVar14;
  undefined4 *unaff_r8;
  int unaff_r9;
  uint uVar15;
  int unaff_r10;
  undefined4 *puVar16;
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
  
  iVar1 = func_0x0229f06c(0x866c,0);
  if (iVar1 == 0) {
    param_1 = FUN_01acbb30(param_1);
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
    iVar1 = func_0x0229f06c(0x5c6c,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar13 = *(undefined4 *)(iVar1 + 8);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(param_2 + 0x38) = uVar13;
      uVar17 = func_0x02140d24(param_1);
      uVar17 = func_0x01458584((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),1000,0);
      *(undefined8 *)(param_2 + 0x30) = uVar17;
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
      uVar13 = *(undefined4 *)(param_1 + 0x94);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(param_1 + 0x50);
      *(undefined4 *)(param_2 + 0x3c) = uVar13;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x021139b0(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 0x54);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02148958(iVar1,param_2);
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02139e7c(iVar1,param_2);
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
      func_0x02110804(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x020dc720(iVar1,aiStack_28,0);
      iVar1 = aiStack_28[0];
      iStack_b4 = param_2;
      if (iVar6 != 0) {
        if (aiStack_28[0] == 0) {
          func_0x01384bf0();
        }
        func_0x0325a3b4(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488bc + 0x2147fe8));
        uStack_38 = uStack_b0;
        uStack_34 = uStack_ac;
        uStack_30 = uStack_a8;
        uStack_2c = uStack_a4;
        puVar3 = *(undefined4 **)(_UNK_021488c0 + 0x2148004);
        puVar14 = *(undefined4 **)(_UNK_021488c4 + 0x214800c);
        while (iVar1 = func_0x03f597e0(unaff_r8,*puVar3), uVar7 = uStack_2c, iVar1 != 0) {
          iVar1 = *(int *)(param_2 + 0x6c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0364baf8(iVar1,uVar7,*puVar14);
        }
        func_0x03f597dc(&uStack_38,**(undefined4 **)(_UNK_021488c8 + 0x2148050));
      }
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x40);
      uVar17 = func_0x02140d24(param_1);
      uVar7 = *(uint *)(param_1 + 0x44);
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar13 = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_2 + 0x44) = uVar13;
      uVar17 = func_0x01458584((uint)uVar17 - uVar7,
                               (int)((ulonglong)uVar17 >> 0x20) -
                               (((int)uVar7 >> 0x1f) + (uint)((uint)uVar17 < uVar7)),1000,0);
      *(undefined8 *)(param_2 + 0x10) = uVar17;
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
        uVar15 = 0;
        uStack_48 = uStack_b0;
        uStack_44 = uStack_ac;
        uStack_40 = uStack_a8;
        uStack_3c = uStack_a4;
        puVar3 = *(undefined4 **)(_UNK_021488d4 + 0x2148104);
        while (iVar1 = func_0x03f5a2cc(&uStack_48,*puVar3), iVar1 != 0) {
          uVar4 = uStack_3c & 0x3f;
          uVar8 = uVar4 - 0x20;
          uVar5 = 1 << uVar4;
          if (-1 < (int)uVar8) {
            uVar5 = 0;
          }
          uVar7 = uVar5 | uVar7;
          uVar5 = 1 >> (0x20 - uVar4 & 0xff);
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
      iVar1 = *(int *)(param_1 + 0x9c);
      iStack_b8 = param_1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488e4 + 0x2148190));
      uStack_60 = uStack_b0;
      uStack_5c = uStack_ac;
      uStack_58 = uStack_a8;
      uStack_54 = uStack_a4;
      uStack_50 = uStack_a0;
      puVar14 = *(undefined4 **)(_UNK_021488e8 + 0x21481bc);
      puVar3 = *(undefined4 **)(_UNK_021488ec + 0x21481c4);
      while (iVar1 = func_0x03f9b324(&uStack_60,*puVar14), uVar7 = uStack_54, iVar1 != 0) {
        iVar1 = (int)uStack_50;
        iVar12 = *(int *)(iStack_b4 + 0x50);
        iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_021488f4 + 0x21481ec));
        func_0x01797598(iVar6,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148a58(iVar1);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar6 + 0x10) = uVar13;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148aac(iVar1);
        *(undefined4 *)(iVar6 + 0xc) = uVar13;
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar12,uVar7,iVar6,*puVar3);
      }
      func_0x03f9b464(&uStack_60,**(undefined4 **)(_UNK_021488f8 + 0x214826c));
      iVar1 = *(int *)(iStack_b8 + 0x98);
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
      puVar14 = *(undefined4 **)(_UNK_02148908 + 0x21482d0);
      puVar16 = *(undefined4 **)(_UNK_0214890c + 0x21482d8);
      while (iVar1 = func_0x03f9b324(&uStack_78,*puVar3), uVar7 = uStack_6c, iVar1 != 0) {
        iVar1 = (int)uStack_68;
        uVar13 = func_0x01384be4(*puVar14);
        FUN_01798ae4(uVar13,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02148b00(iVar1,uVar13);
        iVar1 = *(int *)(iStack_b4 + 0x58);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar1,uVar7,uVar13,*puVar16);
      }
      func_0x03f9b464(&uStack_78,**(undefined4 **)(_UNK_02148914 + 0x2148354));
      iVar6 = iStack_b4;
      iVar1 = iStack_b8;
      uVar13 = **(undefined4 **)(_UNK_0214891c + 0x2148368);
      *(int *)(iStack_b8 + 0xa4) = iStack_b4;
      uVar13 = func_0x01384be4(uVar13);
      func_0x03ccb96c(uVar13,iVar1,**(undefined4 **)(_UNK_02148920 + 0x2148390),0);
      func_0x021475dc(iVar1,uVar13,0x7fffffff);
      iVar12 = *(int *)(iVar1 + 0x68);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_b0,iVar12,**(undefined4 **)(_UNK_02148924 + 0x21483d0));
      uStack_88 = uStack_b0;
      uStack_84 = uStack_ac;
      uStack_80 = uStack_a8;
      uStack_7c = uStack_a4;
      puVar3 = *(undefined4 **)(_UNK_02148928 + 0x21483ec);
      puVar14 = *(undefined4 **)(_UNK_0214892c + 0x21483f4);
      while (iVar12 = func_0x03f5f428(&uStack_88,*puVar3), uVar7 = uStack_7c, iVar12 != 0) {
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
      iVar6 = *(int *)(iVar1 + 0x34);
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
      puVar3 = *(undefined4 **)(_UNK_02148944 + 0x21484c8);
      while (iVar6 = func_0x03f9b9f8(&uStack_98,*puVar3), iVar6 != 0) {
        if (uStack_8c != 0) {
          func_0x02148de8(iVar1);
        }
      }
      func_0x03f9b9f4(&uStack_98,**(undefined4 **)(_UNK_0214894c + 0x21484fc));
      return;
    }
    iVar1 = func_0x0229f13c(0x5c6c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2147e08;
    unaff_r4 = iVar1;
    unaff_r9 = param_2;
    unaff_r10 = param_1;
    register0x00000054 = (BADSPACEBASE *)&iStack_b8;
  }
  else {
    iVar1 = func_0x0229f13c(0x866c,0);
    if (iVar1 == 0) {
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
  iVar6 = *(int *)(iVar1 + 0x10);
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
  iVar6 = *(int *)(iVar1 + 8);
  uVar13 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar10 = 3;
  if (iVar1 == 0) {
    uVar10 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar6,uVar13,(undefined1 *)((int)register0x00000054 + -0x38),uVar10);
  return;
}



// ===== FAT.ActivityMonopolyBoard$$GetMilestones RVA 0x1abc1a0 =====

/* WARNING: Removing unreachable block (ram,0x01acc4f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01acc1a0(int param_1)

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
  int *piVar10;
  int iVar11;
  int *piVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01acc5d4 + 0x1acc1b8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acc5d8 + 0x1acc1cc));
    func_0x01384978(*(undefined4 *)(_UNK_01acc5dc + 0x1acc1d8));
    func_0x01384978(*(undefined4 *)(_UNK_01acc5e0 + 0x1acc1e4));
    func_0x01384978(*(undefined4 *)(_UNK_01acc5e4 + 0x1acc1f0));
    func_0x01384978(*(undefined4 *)(_UNK_01acc5e8 + 0x1acc1fc));
    func_0x01384978(*(undefined4 *)(_UNK_01acc5ec + 0x1acc208));
    func_0x01384978(*(undefined4 *)(_UNK_01acc5f0 + 0x1acc214));
    func_0x01384978(*(undefined4 *)(_UNK_01acc5f4 + 0x1acc220));
    func_0x01384978(*(undefined4 *)(_UNK_01acc5f8 + 0x1acc22c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8671,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8671,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar7 = (char *)(_UNK_0225b23c + 0x225b15c);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0225b240 + 0x225b170),param_1,0);
      *pcVar7 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
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
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0225b244 + 0x225b22c));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01acc5fc + 0x1acc288));
  func_0x0328e950(iVar1,**(undefined4 **)(_UNK_01acc600 + 0x1acc29c));
  iVar8 = *(int *)(param_1 + 0x40);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0x28);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0364c2b4(iVar8,**(undefined4 **)(_UNK_01acc604 + 0x1acc2d0));
  piVar10 = *(int **)(_UNK_01acc608 + 0x1acc2e8);
  piVar12 = *(int **)(_UNK_01acc60c + 0x1acc2f0);
LAB_01acc2ec:
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar10) {
        puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
        goto LAB_01acc348;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01acc348:
  iVar8 = (*(code *)*puVar3)(piVar2,puVar3[1]);
  if (iVar8 != 0) {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01acc610 + 0x1acc37c)) {
          puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
          goto LAB_01acc3c4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01acc610 + 0x1acc37c),0);
LAB_01acc3c4:
    uVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (*(int *)(**(int **)(_UNK_01acc614 + 0x1acc3e4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar9 = func_0x036a1750(uVar9,**(undefined4 **)(_UNK_01acc618 + 0x1acc400));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar1 + 8);
    uVar4 = *(uint *)(iVar1 + 0xc);
    iVar11 = *piVar12;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    if (uVar4 < *(uint *)(iVar8 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar4 + 1;
      *(undefined4 *)(iVar8 + uVar4 * 4 + 0x10) = uVar9;
    }
    else {
      func_0x0328f170(iVar1,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
    }
    goto LAB_01acc2ec;
  }
  if (piVar2 != (int *)0x0) {
    iVar8 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01acc61c + 0x1acc494)) {
          puVar3 = (undefined4 *)(iVar8 + *piVar10 * 8 + 0xc0);
          goto LAB_01acc4dc;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01acc61c + 0x1acc494),0);
LAB_01acc4dc:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  return iVar1;
}



// ===== FAT.ActivityMonopolyBoard$$GetTrophyIndex RVA 0x1abc624 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01acc624(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
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
  
  pcVar7 = (char *)(_UNK_01acc6dc + 0x1acc63c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acc6e0 + 0x1acc650));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8672,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = **(int **)(_UNK_01acc6e4 + 0x1acc6d0);
    pcVar7 = (char *)(_UNK_0364c680 + 0x364c568);
    if (*pcVar7 == '\0') {
      func_0x02457d54(*(undefined4 *)(_UNK_0364c684 + 0x364c57c));
      *pcVar7 = '\x01';
    }
    func_0x03031db0(param_2,**(undefined4 **)(_UNK_0364c688 + 0x364c598),
                    *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x80));
    iVar3 = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0xc);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x02457d84();
    }
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x02457d48();
    }
    iVar6 = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0xc);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x02457d84();
    }
    uVar2 = 0xffffffff;
    if (0 < *(int *)(iVar1 + 0xc)) {
      uVar5 = 0;
      piVar9 = (int *)**(undefined4 **)(iVar6 + 0x5c);
      do {
        iVar6 = *(int *)(iVar1 + 8);
        if (iVar6 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar6 + 0xc) <= uVar5) {
          func_0x02457d5c();
        }
        uVar8 = *(undefined4 *)(iVar6 + uVar5 * 4 + 0x10);
        if (piVar9 == (int *)0x0) {
          func_0x02457d50();
        }
        iVar6 = (**(code **)(*piVar9 + 0x100))
                          (piVar9,uVar8,param_2,*(undefined4 *)(*piVar9 + 0x104));
        uVar2 = uVar5;
      } while ((iVar6 == 0) &&
              (uVar5 = uVar5 + 1, uVar2 = 0xffffffff, (int)uVar5 < *(int *)(iVar1 + 0xc)));
    }
    return uVar2;
  }
  iVar1 = func_0x0229f13c(0x8672,0);
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
  iVar6 = *(int *)(iVar1 + 8);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar6,uVar8,&uStack_38,uVar4,0,0);
  uVar2 = func_0x0245498c(&uStack_38,0,0);
  return uVar2;
}



// ===== FAT.ActivityMonopolyBoard$$Track_Event_Monopoly_Roll RVA 0x1abc6e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01acc6e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01acca78 + 0x1acc708);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acca7c + 0x1acc720));
    func_0x01384978(*(undefined4 *)(_UNK_01acca80 + 0x1acc72c));
    func_0x01384978(*(undefined4 *)(_UNK_01acca84 + 0x1acc738));
    func_0x01384978(*(undefined4 *)(_UNK_01acca88 + 0x1acc744));
    func_0x01384978(*(undefined4 *)(_UNK_01acca8c + 0x1acc750));
    func_0x01384978(*(undefined4 *)(_UNK_01acca90 + 0x1acc75c));
    func_0x01384978(*(undefined4 *)(_UNK_01acca94 + 0x1acc768));
    func_0x01384978(*(undefined4 *)(_UNK_01acca98 + 0x1acc774));
    func_0x01384978(*(undefined4 *)(_UNK_01acca9c + 0x1acc780));
    func_0x01384978(*(undefined4 *)(_UNK_01accaa0 + 0x1acc78c));
    func_0x01384978(*(undefined4 *)(_UNK_01accaa4 + 0x1acc798));
    func_0x01384978(*(undefined4 *)(_UNK_01accaa8 + 0x1acc7a4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8673,0);
  if (iVar1 == 0) {
    uVar5 = 0;
    func_0x02b489c0(&uStack_30,param_1,0);
    piVar2 = (int *)func_0x01384be4(**(undefined4 **)(_UNK_01accaac + 0x1acc838));
    func_0x029f3744(piVar2,0);
    func_0x01998f3c(piVar2,0);
    uVar3 = func_0x029f279c(uStack_30,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01accab0 + 0x1acc884),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(uStack_2c,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01accab4 + 0x1acc8b4),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(uStack_28,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01accab8 + 0x1acc8e4),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(param_4,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01accabc + 0x1acc914),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(param_5,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01accac0 + 0x1acc944),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = **(undefined4 **)(_UNK_01accac4 + 0x1acc964);
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x1c);
    }
    uVar5 = func_0x029f279c(uVar5,0);
    (**(code **)(*piVar2 + 0x100))(piVar2,uVar3,uVar5,*(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(1,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01accac8 + 0x1acc9b4),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(param_2,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01accacc + 0x1acc9e4),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(param_3,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01accad0 + 0x1acca14),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = (**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
    if (*(int *)(**(int **)(_UNK_01accad4 + 0x1acca48) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01998df4(**(undefined4 **)(_UNK_01accad8 + 0x1acca6c),uVar3,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x8673,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02191e44(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$Track_Event_Monopoly_Milestone RVA 0x1abcadc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01accadc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01acce24 + 0x1accafc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acce28 + 0x1accb14));
    func_0x01384978(*(undefined4 *)(_UNK_01acce2c + 0x1accb20));
    func_0x01384978(*(undefined4 *)(_UNK_01acce30 + 0x1accb2c));
    func_0x01384978(*(undefined4 *)(_UNK_01acce34 + 0x1accb38));
    func_0x01384978(*(undefined4 *)(_UNK_01acce38 + 0x1accb44));
    func_0x01384978(*(undefined4 *)(_UNK_01acce3c + 0x1accb50));
    func_0x01384978(*(undefined4 *)(_UNK_01acce40 + 0x1accb5c));
    func_0x01384978(*(undefined4 *)(_UNK_01acce44 + 0x1accb68));
    func_0x01384978(*(undefined4 *)(_UNK_01acce48 + 0x1accb74));
    func_0x01384978(*(undefined4 *)(_UNK_01acce4c + 0x1accb80));
    func_0x01384978(*(undefined4 *)(_UNK_01acce50 + 0x1accb8c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8674,0);
  if (iVar1 == 0) {
    func_0x02b489c0(&uStack_30,param_1,0);
    piVar2 = (int *)func_0x01384be4(**(undefined4 **)(_UNK_01acce54 + 0x1accc14));
    func_0x029f3744(piVar2,0);
    func_0x01998f3c(piVar2,0);
    uVar3 = func_0x029f279c(uStack_30,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acce58 + 0x1accc60),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(uStack_2c,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acce5c + 0x1accc90),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(uStack_28,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acce60 + 0x1acccc0),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(param_2,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acce64 + 0x1acccf0),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(param_3,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acce68 + 0x1accd20),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar5 = **(undefined4 **)(_UNK_01acce6c + 0x1accd3c);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x1c);
    }
    uVar3 = func_0x029f279c(uVar3,0);
    (**(code **)(*piVar2 + 0x100))(piVar2,uVar5,uVar3,*(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(1,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acce70 + 0x1accd90),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f2858(param_4,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acce74 + 0x1accdc0),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = (**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
    if (*(int *)(**(int **)(_UNK_01acce78 + 0x1accdf4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01998df4(**(undefined4 **)(_UNK_01acce7c + 0x1acce18),uVar3,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x8674,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0219834c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$TrackTapGetItem RVA 0x1abce80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01acce80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01acd210 + 0x1accea0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acd214 + 0x1acceb4));
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
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8675,0);
  if (iVar1 == 0) {
    func_0x02b489c0(&uStack_30,param_1,0);
    uVar5 = uStack_2c;
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
    uVar3 = func_0x029f279c(uVar5,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acd24c + 0x1acd034),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(uStack_28,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acd250 + 0x1acd064),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01dbb000(iVar1,0);
    uVar5 = **(undefined4 **)(_UNK_01acd254 + 0x1acd0bc);
    uVar3 = 0;
    if (iVar1 != 0) {
      iVar1 = func_0x02139cf4(iVar1,0);
      uVar3 = 0;
      if (iVar1 != 0) {
        uStack_2c = 0;
        uStack_30 = 0;
        func_0x03507d38(&uStack_30,*(undefined4 *)(iVar1 + 8),
                        **(undefined4 **)(_UNK_01acd258 + 0x1acd0e0));
        uVar3 = uStack_2c;
      }
    }
    uVar3 = func_0x029f279c(uVar3,0);
    (**(code **)(*piVar2 + 0x100))(piVar2,uVar5,uVar3,*(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(param_2,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acd25c + 0x1acd144),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x02157e88(param_2,0);
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
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$TrackOrderGetItem RVA 0x1abd270 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01acd270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01acd644 + 0x1acd290);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acd648 + 0x1acd2a8));
    func_0x01384978(*(undefined4 *)(_UNK_01acd64c + 0x1acd2b4));
    func_0x01384978(*(undefined4 *)(_UNK_01acd650 + 0x1acd2c0));
    func_0x01384978(*(undefined4 *)(_UNK_01acd654 + 0x1acd2cc));
    func_0x01384978(*(undefined4 *)(_UNK_01acd658 + 0x1acd2d8));
    func_0x01384978(*(undefined4 *)(_UNK_01acd65c + 0x1acd2e4));
    func_0x01384978(*(undefined4 *)(_UNK_01acd660 + 0x1acd2f0));
    func_0x01384978(*(undefined4 *)(_UNK_01acd664 + 0x1acd2fc));
    func_0x01384978(*(undefined4 *)(_UNK_01acd668 + 0x1acd308));
    func_0x01384978(*(undefined4 *)(_UNK_01acd66c + 0x1acd314));
    func_0x01384978(*(undefined4 *)(_UNK_01acd670 + 0x1acd320));
    func_0x01384978(*(undefined4 *)(_UNK_01acd674 + 0x1acd32c));
    func_0x01384978(*(undefined4 *)(_UNK_01acd678 + 0x1acd338));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8676,0);
  if (iVar1 == 0) {
    func_0x02b489c0(&uStack_30,param_1,0);
    uVar5 = uStack_2c;
    uVar3 = uStack_30;
    piVar2 = (int *)func_0x01384be4(**(undefined4 **)(_UNK_01acd67c + 0x1acd3bc));
    func_0x029f3744(piVar2,0);
    func_0x01998f3c(piVar2,0);
    uVar3 = func_0x029f279c(uVar3,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acd680 + 0x1acd408),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(uVar5,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acd684 + 0x1acd438),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(uStack_28,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acd688 + 0x1acd468),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01dbb000(iVar1,0);
    uVar5 = **(undefined4 **)(_UNK_01acd68c + 0x1acd4c0);
    uVar3 = 0;
    if (iVar1 != 0) {
      iVar1 = func_0x02139cf4(iVar1,0);
      uVar3 = 0;
      if (iVar1 != 0) {
        uStack_2c = 0;
        uStack_30 = 0;
        func_0x03507d38(&uStack_30,*(undefined4 *)(iVar1 + 8),
                        **(undefined4 **)(_UNK_01acd690 + 0x1acd4e4));
        uVar3 = uStack_2c;
      }
    }
    uVar3 = func_0x029f279c(uVar3,0);
    (**(code **)(*piVar2 + 0x100))(piVar2,uVar5,uVar3,*(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(param_2,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acd694 + 0x1acd548),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x02157e88(param_2,0);
    uVar3 = func_0x029f279c(uVar3,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acd698 + 0x1acd580),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(param_3,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acd69c + 0x1acd5b0),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = func_0x029f279c(param_4,0);
    (**(code **)(*piVar2 + 0x100))
              (piVar2,**(undefined4 **)(_UNK_01acd6a0 + 0x1acd5e0),uVar3,
               *(undefined4 *)(*piVar2 + 0x104));
    uVar3 = (**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
    if (*(int *)(**(int **)(_UNK_01acd6a4 + 0x1acd614) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01998df4(**(undefined4 **)(_UNK_01acd6a8 + 0x1acd638),uVar3,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x8676,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179c40(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$get_showDiceDebugButton RVA 0x1abd6ac =====

undefined1 FUN_01acd6ac(int param_1)

{
  return *(undefined1 *)(param_1 + 0xa0);
}



// ===== FAT.ActivityMonopolyBoard$$set_showDiceDebugButton RVA 0x1abd6b4 =====

void FUN_01acd6b4(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xa0) = param_2;
  return;
}



// ===== FAT.ActivityMonopolyBoard$$GetActiveActivity RVA 0x1abd6bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_01acd6bc(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  int *piStack_14;
  
  pcVar5 = (char *)(_UNK_01acd7cc + 0x1acd6d0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acd7d0 + 0x1acd6e4));
    *pcVar5 = '\x01';
  }
  piStack_14 = (int *)0x0;
  iVar2 = func_0x0229f06c(0x8677,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xd8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02b3c518(iVar2,0x56,&piStack_14,0);
    piVar1 = (int *)0x0;
    if (iVar2 != 0) {
      piVar1 = piStack_14;
    }
    piVar3 = (int *)0x0;
    if (iVar2 != 0 && piVar1 != (int *)0x0) {
      uVar4 = (uint)*(byte *)(**(int **)(_UNK_01acd7d4 + 0x1acd7a0) + 0xb8);
      if ((uVar4 <= *(byte *)(*piVar1 + 0xb8)) &&
         (piVar3 = piVar1,
         *(int *)(*(int *)(*piVar1 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_01acd7d4 + 0x1acd7a0)
         )) {
        piVar3 = (int *)0x0;
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x8677,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x0225b248(iVar2,0);
  }
  return piVar3;
}



// ===== FAT.ActivityMonopolyBoard$$DebugSetStage RVA 0x1abd7d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01acd7d8(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_01acd8b0 + 0x1acd7ec);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acd8b4 + 0x1acd800));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x8678,0);
  if (iVar3 == 0) {
    iVar3 = FUN_01acd6bc();
    if (iVar3 == 0) {
      return;
    }
    if (*(int *)(**(int **)(_UNK_01acd8b8 + 0x1acd868) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar8 = func_0x02566298(param_1,0);
    *(undefined4 *)(iVar3 + 0xec) = uVar8;
    *(undefined4 *)(iVar3 + 0xf0) = 0;
    *(undefined4 *)(iVar3 + 0xf4) = 0;
    FUN_01acaa94(iVar3);
    iVar7 = *(int *)(iVar3 + 0x114);
    pcVar6 = (char *)(_UNK_01acae64 + 0x1acac04);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01acae68 + 0x1acac18));
      func_0x01384978(*(undefined4 *)(_UNK_01acae6c + 0x1acac24));
      func_0x01384978(*(undefined4 *)(_UNK_01acae70 + 0x1acac30));
      func_0x01384978(*(undefined4 *)(_UNK_01acae74 + 0x1acac3c));
      func_0x01384978(*(undefined4 *)(_UNK_01acae78 + 0x1acac48));
      func_0x01384978(*(undefined4 *)(_UNK_01acae7c + 0x1acac54));
      func_0x01384978(*(undefined4 *)(_UNK_01acae80 + 0x1acac60));
      func_0x01384978(*(undefined4 *)(_UNK_01acae84 + 0x1acac6c));
      *pcVar6 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iVar2 = func_0x0229f06c(0x8657,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar3 + 0x104);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x024509cc(iVar2,**(undefined4 **)(_UNK_01acae88 + 0x1acace4));
      if (iVar7 != 0) {
        iVar2 = *(int *)(iVar7 + 0xc);
      }
      if (iVar7 != 0 && iVar2 != 0) {
        func_0x0325a3b4(&uStack_48,iVar7,**(undefined4 **)(_UNK_01acae8c + 0x1acad10));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar5 = *(undefined4 **)(_UNK_01acae90 + 0x1acad2c);
        piVar9 = *(int **)(_UNK_01acae94 + 0x1acad34);
        puVar10 = *(undefined4 **)(_UNK_01acae98 + 0x1acad3c);
        while (iVar7 = func_0x01470118(&uStack_38,*puVar5), uVar1 = uStack_2c, iVar7 != 0) {
          bVar11 = SBORROW4(uStack_2c,1);
          iVar7 = uStack_2c - 1;
          if (0 < (int)uStack_2c) {
            bVar11 = SBORROW4(uStack_2c,100);
            iVar7 = uStack_2c - 100;
          }
          if (iVar7 < 0 == bVar11) {
            iVar7 = *(int *)(iVar3 + 0x104);
            if (*(int *)(*piVar9 + 0x74) == 0) {
              func_0x01384ab4();
            }
            uVar8 = func_0x0148ab08(0,uVar1 % 100,0);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            func_0x0245025c(iVar7,uVar1 / 100,uVar8,*puVar10);
          }
        }
        func_0x02450828(&uStack_38,**(undefined4 **)(_UNK_01acae9c + 0x1acadcc));
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x8657,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x02174108(iVar2,iVar3,iVar7,0);
    }
    return;
  }
  iVar3 = func_0x0229f13c(0x8678,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
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
  func_0x01485278(&uStack_30,param_1,0);
  iVar7 = *(int *)(iVar3 + 8);
  uVar8 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar3 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_30,uVar4,0,0);
  return;
}



// ===== FAT.ActivityMonopolyBoard$$DebugSetLap RVA 0x1abd8bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01acd8bc(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_01acd970 + 0x1acd8d0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acd974 + 0x1acd8e4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8679,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8679,0);
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
  iVar1 = FUN_01acd6bc();
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_01acd978 + 0x1acd94c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar5 = func_0x02566298(param_1,0);
    *(undefined4 *)(iVar1 + 0xf0) = uVar5;
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$DebugSwitchDiceButton RVA 0x1abd97c =====

void FUN_01acd97c(void)

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
  
  iVar1 = func_0x0229f06c(0x867a,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01acd6bc();
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0xa0) = 1;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x867a,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar2 = 0;
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
    uVar2 = 0;
    if (*(int *)(iVar1 + 0x10) != 0) {
      uVar2 = 1;
    }
  }
  iVar4 = *(int *)(iVar1 + 8);
  uVar3 = *(undefined4 *)(iVar1 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.ActivityMonopolyBoard$$get_Tracer RVA 0x1abd9d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01acd9d4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x867c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x867c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021b6424 + 0x21b6344);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021b6428 + 0x21b6358),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021b642c + 0x21b6414));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0xac);
}



// ===== FAT.ActivityMonopolyBoard$$get_BoardId RVA 0x1abda28 =====

undefined4 FUN_01acda28(int param_1)

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
  iVar1 = func_0x0229f06c(0x865c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x865c,0);
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
    uVar3 = func_0x0245498c(&uStack_30,0,0);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x14);
  }
  return uVar3;
}



// ===== FAT.ActivityMonopolyBoard$$get_rewardFlyDuration RVA 0x1abda8c =====

undefined4 FUN_01acda8c(int param_1)

{
  return *(undefined4 *)(param_1 + 0xa4);
}



// ===== FAT.ActivityMonopolyBoard$$set_rewardFlyDuration RVA 0x1abda94 =====

void FUN_01acda94(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa4) = param_2;
  return;
}



// ===== FAT.ActivityMonopolyBoard$$get_singleRewardFlyDur RVA 0x1abda9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_01acda9c(undefined4 param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_01acdb60 + 0x1acdab0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acdb64 + 0x1acdac4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x867d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x867d,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3,0,0);
    fVar2 = (float)func_0x024549ac(&uStack_30,0,0);
    return fVar2;
  }
  piVar4 = *(int **)(_UNK_01acdb68 + 0x1acdb1c);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(float *)(iVar1 + 0x28) + *(float *)(iVar1 + 0x2c) + *(float *)(iVar1 + 0x24);
}



// ===== FAT.ActivityMonopolyBoard$$EnterBoard RVA 0x1abdb6c =====

void FUN_01acdb6c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x867e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x867e,0);
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
  func_0x02b57d14(param_1,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
                  *(undefined4 *)(param_1 + 0x44));
  return;
}



// ===== FAT.ActivityMonopolyBoard$$LeaveBoard RVA 0x1abdbe8 =====

void FUN_01acdbe8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x867f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x867f,0);
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
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = 0;
  func_0x02b57fac(param_1,*(undefined4 *)(iVar1 + 0xc),0,0);
  return;
}



// ===== FAT.ActivityMonopolyBoard$$EnterMonopolyBoard RVA 0x1abdc70 =====

void FUN_01acdc70(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8680,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x867e,0);
    if (iVar1 == 0) {
      uStack_18 = 0;
      uStack_14 = 0;
      func_0x02b57d14(param_1,*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
                      *(undefined4 *)(param_1 + 0x44));
      return;
    }
    iVar1 = func_0x0229f13c(0x867e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8680,0);
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



// ===== FAT.ActivityMonopolyBoard$$ExitMonopolyBoard RVA 0x1abdcc8 =====

void FUN_01acdcc8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8681,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x867f,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_18 = 0;
      func_0x02b57fac(param_1,*(undefined4 *)(iVar1 + 0xc),0,0);
      return;
    }
    iVar1 = func_0x0229f13c(0x867f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8681,0);
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



// ===== FAT.ActivityMonopolyBoard$$FAT.IActivityOrderHandler.OnPreUpdate RVA 0x1abdd20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01acdd20(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar11 = (char *)(_UNK_01ace1f4 + 0x1acdd40);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ace1f8 + 0x1acdd58));
    func_0x01384978(*(undefined4 *)(_UNK_01ace1fc + 0x1acdd64));
    func_0x01384978(*(undefined4 *)(_UNK_01ace200 + 0x1acdd70));
    func_0x01384978(*(undefined4 *)(_UNK_01ace204 + 0x1acdd7c));
    *pcVar11 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar1 = func_0x0229f06c(0x8682,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8682,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021d2b64(iVar1,param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 0x24);
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0xc);
  }
  if (iVar3 == 0 || iVar1 == 0) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar10[-1] == **(int **)(_UNK_01ace208 + 0x1acde30)) {
        puVar4 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0x268);
        goto LAB_01acde78;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01ace208 + 0x1acde30),0x35);
LAB_01acde78:
  iVar1 = (*(code *)*puVar4)(param_2,puVar4[1]);
  if (iVar1 != 0) {
    return 0;
  }
  piVar10 = *(int **)(_UNK_01ace20c + 0x1acdea0);
  uStack_2c = 0;
  uStack_28 = 0;
  iVar1 = *piVar10;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar10;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01e4b23c(iVar1,param_2,0);
  if (iVar1 == 0) {
LAB_01acdf40:
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
      uVar2 = func_0x01e3e5b8(0,0xc,0);
      func_0x01384bf0();
    }
    else {
      uVar2 = func_0x01e3e5b8(param_2,0xc,0);
    }
    uVar5 = func_0x01e3e5b8(param_2,0xd,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(param_1 + 0x40);
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x24);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x0364c9b8(iVar3,0,**(undefined4 **)(_UNK_01ace210 + 0x1acdfdc));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x01cabb20(iVar1,uVar6,0);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x14);
    }
    if (iVar3 != 0 && iVar1 != 0) {
      iVar1 = func_0x01ace218(param_1,uVar5,&uStack_28,&uStack_2c);
    }
    else {
      iVar1 = func_0x01ace64c(param_1,uVar2,&uStack_28,&uStack_2c);
    }
    if (iVar1 == 0) {
      return 0;
    }
    piVar10 = *(int **)(_UNK_01ace214 + 0x1ace05c);
    iVar1 = *piVar10;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar10;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x10);
    uVar6 = func_0x02b449f8(param_1,0);
    uVar5 = uStack_28;
    uVar2 = uStack_2c;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e4b8f0(iVar1,param_2,uVar6,uVar2,uVar5,0);
    uVar2 = 1;
  }
  else {
    iVar1 = *piVar10;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar10;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar1 = func_0x01e4b2b0(iVar1,param_2,0);
    iVar3 = func_0x02b449f8(param_1,0);
    if (iVar1 != iVar3) goto LAB_01acdf40;
  }
  uVar5 = func_0x02b449f8(param_1,0);
  iVar1 = func_0x01e4b758(param_2,uVar5,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar3 = func_0x01e4b23c(0,param_2,0);
    if (iVar3 != 0) {
      func_0x01384bf0();
      goto LAB_01ace120;
    }
  }
  else {
    iVar3 = func_0x01e4b23c(iVar1,param_2,0);
    if (iVar3 != 0) {
LAB_01ace120:
      uVar5 = 0;
      iVar3 = func_0x01e4b2b0(iVar1,param_2,0);
      iVar7 = func_0x02b449f8(param_1,0);
      if (iVar3 == iVar7) goto LAB_01ace1e0;
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
  func_0x01e4b3b8(&uStack_34,iVar3,param_2,0);
  uStack_28 = uStack_34;
  uStack_2c = uStack_30;
  uVar8 = func_0x02b449f8(param_1,0);
  uVar6 = uStack_28;
  uVar5 = uStack_2c;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4ba84(iVar1,param_2,uVar8,uVar5,uVar6,0);
  uVar5 = 1;
LAB_01ace1e0:
  iVar1 = func_0x01f2a218(0);
  if (iVar1 != 0) {
    uVar2 = uVar5;
  }
  return uVar2;
}



// ===== FAT.ActivityMonopolyBoard$$GetOrderRewardBR_MonopolyAct RVA 0x1abe218 =====

/* WARNING: Removing unreachable block (ram,0x01ace50c) */
/* WARNING: Removing unreachable block (ram,0x01ace51c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ace218(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined8 uVar12;
  
  pcVar7 = (char *)(_UNK_01ace624 + 0x1ace238);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ace628 + 0x1ace250));
    func_0x01384978(*(undefined4 *)(_UNK_01ace62c + 0x1ace25c));
    func_0x01384978(*(undefined4 *)(_UNK_01ace630 + 0x1ace268));
    func_0x01384978(*(undefined4 *)(_UNK_01ace634 + 0x1ace274));
    *pcVar7 = '\x01';
  }
  uVar8 = 0;
  iVar1 = func_0x0229f06c(0x8684,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x40);
    *param_3 = 0;
    *param_4 = 0;
    if (iVar1 != 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(param_1 + 0x40);
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0x24);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      piVar2 = (int *)func_0x0364c2b4(iVar9,**(undefined4 **)(_UNK_01ace638 + 0x1ace330));
      piVar10 = *(int **)(_UNK_01ace63c + 0x1ace348);
      piVar11 = *(int **)(_UNK_01ace640 + 0x1ace350);
LAB_01ace34c:
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar9 = *piVar2;
      uVar8 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar8 != 0) {
        piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
            goto LAB_01ace3a8;
          }
          uVar8 = uVar8 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01ace3a8:
      iVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar9 != 0) {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar9 = *piVar2;
        uVar8 = (uint)*(ushort *)(iVar9 + 0xb6);
        if (uVar8 != 0) {
          piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar11) {
              puVar3 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
              goto LAB_01ace41c;
            }
            uVar8 = uVar8 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01ace41c:
        uVar4 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar12 = func_0x01cabb20(iVar1,uVar4,0);
        iVar9 = (int)((ulonglong)uVar12 >> 0x20);
        iVar5 = (int)uVar12;
        if (iVar5 != 0) {
          iVar9 = *(int *)(iVar5 + 0x14);
        }
        if ((iVar5 != 0 && iVar9 != 0) && (*(int *)(iVar5 + 0x18) <= param_2)) {
          *param_3 = *(int *)(iVar5 + 0x20);
          iVar9 = func_0x01457ae8(param_2,*(undefined4 *)(iVar5 + 0x14));
          if (iVar9 < 2) {
            iVar9 = 1;
          }
          *param_4 = iVar9;
        }
        goto LAB_01ace34c;
      }
      if (piVar2 != (int *)0x0) {
        iVar1 = *piVar2;
        uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar10[-1] == **(int **)(_UNK_01ace644 + 0x1ace4ac)) {
              puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
              goto LAB_01ace4f4;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01ace644 + 0x1ace4ac),0);
LAB_01ace4f4:
        (*(code *)*puVar3)(piVar2,puVar3[1]);
      }
      if (*param_3 < 1) {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)(0 < *param_4);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8684,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x02182904(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar8;
}



// ===== FAT.ActivityMonopolyBoard$$GetOrderRewardBR_Monopoly RVA 0x1abe64c =====

/* WARNING: Removing unreachable block (ram,0x01ace940) */
/* WARNING: Removing unreachable block (ram,0x01ace950) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ace64c(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined8 uVar12;
  
  pcVar7 = (char *)(_UNK_01acea58 + 0x1ace66c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acea5c + 0x1ace684));
    func_0x01384978(*(undefined4 *)(_UNK_01acea60 + 0x1ace690));
    func_0x01384978(*(undefined4 *)(_UNK_01acea64 + 0x1ace69c));
    func_0x01384978(*(undefined4 *)(_UNK_01acea68 + 0x1ace6a8));
    *pcVar7 = '\x01';
  }
  uVar8 = 0;
  iVar1 = func_0x0229f06c(0x8685,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x40);
    *param_3 = 0;
    *param_4 = 0;
    if (iVar1 != 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(param_1 + 0x40);
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0x24);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      piVar2 = (int *)func_0x0364c2b4(iVar9,**(undefined4 **)(_UNK_01acea6c + 0x1ace764));
      piVar10 = *(int **)(_UNK_01acea70 + 0x1ace77c);
      piVar11 = *(int **)(_UNK_01acea74 + 0x1ace784);
LAB_01ace780:
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar9 = *piVar2;
      uVar8 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar8 != 0) {
        piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
            goto LAB_01ace7dc;
          }
          uVar8 = uVar8 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01ace7dc:
      iVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar9 != 0) {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar9 = *piVar2;
        uVar8 = (uint)*(ushort *)(iVar9 + 0xb6);
        if (uVar8 != 0) {
          piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
          do {
            if (piVar6[-1] == *piVar11) {
              puVar3 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
              goto LAB_01ace850;
            }
            uVar8 = uVar8 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01ace850:
        uVar4 = (*(code *)*puVar3)(piVar2,puVar3[1]);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar12 = func_0x01cabb20(iVar1,uVar4,0);
        iVar9 = (int)((ulonglong)uVar12 >> 0x20);
        iVar5 = (int)uVar12;
        if (iVar5 != 0) {
          iVar9 = *(int *)(iVar5 + 0x1c);
        }
        if ((iVar5 != 0 && iVar9 != 0) && (*(int *)(iVar5 + 0x24) <= param_2)) {
          *param_3 = *(int *)(iVar5 + 0x20);
          iVar9 = func_0x01457ae8(param_2,*(undefined4 *)(iVar5 + 0x1c));
          if (iVar9 < 2) {
            iVar9 = 1;
          }
          *param_4 = iVar9;
        }
        goto LAB_01ace780;
      }
      if (piVar2 != (int *)0x0) {
        iVar1 = *piVar2;
        uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar10[-1] == **(int **)(_UNK_01acea78 + 0x1ace8e0)) {
              puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
              goto LAB_01ace928;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01acea78 + 0x1ace8e0),0);
LAB_01ace928:
        (*(code *)*puVar3)(piVar2,puVar3[1]);
      }
      if (*param_3 < 1) {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)(0 < *param_4);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8685,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x02182904(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar8;
}



// ===== FAT.ActivityMonopolyBoard$$FAT.IActivityOrderHandler.OnPostUpdate RVA 0x1abea80 =====

undefined4 FUN_01acea80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x8686,0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x8686,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021d2b64(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.ActivityMonopolyBoard$$Roll RVA 0x1abeaf4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aceaf4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_01acec58 + 0x1aceb10);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acec5c + 0x1aceb24));
    func_0x01384978(*(undefined4 *)(_UNK_01acec60 + 0x1aceb30));
    func_0x01384978(*(undefined4 *)(_UNK_01acec64 + 0x1aceb3c));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x8687,0);
  if (iVar2 == 0) {
    func_0x01acec70(&uStack_30,param_2);
    uVar1 = uStack_30;
    iVar2 = *(int *)(param_2 + 0x100);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x28);
    uVar5 = *(undefined4 *)(param_2 + 0xf4);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0331f4f8(&uStack_30,iVar2,uVar5,**(undefined4 **)(_UNK_01acec68 + 0x1acebe4));
    uVar5 = 0;
    if (*(int *)(param_2 + 0x40) != 0) {
      iVar2 = *(int *)(*(int *)(param_2 + 0x40) + 0x28);
      uVar5 = 0;
      if (iVar2 != 0) {
        uVar5 = *(undefined4 *)(iVar2 + 0xc);
      }
    }
    FUN_01acc6e8(param_2,uVar1,uStack_30,*(int *)(param_2 + 0xec) + 1,uVar5);
    puVar3 = *(undefined4 **)(_UNK_01acec6c + 0x1acec40);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x038fd264(param_1,uVar1,uStack_2c,*puVar3);
  }
  else {
    iVar2 = func_0x0229f13c(0x8687,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0217edb0(&uStack_30,iVar2,param_2,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$MovePlayer RVA 0x1abec70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01acec70(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_r1;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int unaff_r8;
  int iVar9;
  int iStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_01acf058 + 0x1acec8c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acf05c + 0x1aceca0));
    func_0x01384978(*(undefined4 *)(_UNK_01acf060 + 0x1acecac));
    func_0x01384978(*(undefined4 *)(_UNK_01acf064 + 0x1acecb8));
    func_0x01384978(*(undefined4 *)(_UNK_01acf068 + 0x1acecc4));
    func_0x01384978(*(undefined4 *)(_UNK_01acf06c + 0x1acecd0));
    func_0x01384978(*(undefined4 *)(_UNK_01acf070 + 0x1acecdc));
    *pcVar6 = '\x01';
  }
  iStack_28 = 0;
  iStack_2c = 0;
  iVar1 = func_0x0229f06c(0x8688,0);
  if (iVar1 == 0) {
    iVar2 = func_0x01ad3b44(param_2);
    iVar7 = *(int *)(param_2 + 0x100);
    iVar1 = iVar2;
    if (iVar7 != 0) {
      iVar1 = *(int *)(iVar7 + 0x28);
      unaff_r8 = iVar2;
    }
    if ((iVar7 != 0 && iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0xc), iVar1 != 0)) {
      iVar2 = *(int *)(param_2 + 0xf4);
      if (unaff_r8 < 1) {
        iStack_40 = 0;
      }
      else {
        iStack_40 = 0;
        iVar7 = 1;
        puVar3 = *(undefined4 **)(_UNK_01acf078 + 0x1acedd0);
        do {
          func_0x01458344(iVar2 + iVar7,iVar1);
          if (extraout_r1 == 0) {
            iVar8 = *(int *)(param_2 + 0x100);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            if (*(int *)(iVar8 + 0x10) < 1) {
              iVar8 = *(int *)(param_2 + 0x100);
              if (iVar8 == 0) {
                func_0x01384bf0();
              }
              if (*(int *)(iVar8 + 0x14) != 0) {
                iVar8 = *(int *)(param_2 + 0x100);
                if (iVar8 == 0) {
                  func_0x01384bf0();
                }
                iVar8 = *(int *)(iVar8 + 0x14);
                if (iVar8 == 0) {
                  func_0x01384bf0();
                }
                iVar4 = iStack_40;
                if (0 < *(int *)(iVar8 + 0xc)) {
                  iVar4 = iVar7;
                }
                if (iStack_40 == 0) {
                  iStack_40 = iVar4;
                }
              }
            }
          }
          iVar8 = *(int *)(param_2 + 0x100);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar8 = *(int *)(iVar8 + 0x28);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          func_0x0331f4f8(&uStack_38,iVar8,extraout_r1,*puVar3);
          uVar5 = uStack_38;
          iVar8 = func_0x01ad524c(param_2,uStack_38,uStack_34,uStack_30);
          if (iVar8 != 0) {
            iVar8 = *(int *)(param_2 + 0x108);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            iVar4 = func_0x02450590(iVar8,uVar5,&iStack_28,
                                    **(undefined4 **)(_UNK_01acf07c + 0x1aceee4));
            iVar9 = 1;
            if (iVar4 != 0) {
              iVar9 = iStack_28 + 1;
            }
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            func_0x0245025c(iVar8,uVar5,iVar9,**(undefined4 **)(_UNK_01acf080 + 0x1acef1c));
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 <= unaff_r8);
        iVar7 = *(int *)(param_2 + 0x100);
      }
      iVar2 = iVar2 + unaff_r8;
      iVar8 = func_0x01457ae8(iVar2,iVar1);
      iVar2 = iVar2 - iVar8 * iVar1;
      *(int *)(param_2 + 0xf0) = iVar8 + *(int *)(param_2 + 0xf0);
      *(int *)(param_2 + 0xf4) = iVar2;
      if (iVar7 == 0) {
        func_0x01384bf0();
        iVar2 = *(int *)(param_2 + 0xf4);
      }
      iVar1 = *(int *)(iVar7 + 0x28);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0331f4f8(&uStack_38,iVar1,iVar2,**(undefined4 **)(_UNK_01acf084 + 0x1acefb4));
      iVar1 = func_0x01ad524c(param_2,uStack_38,uStack_34,uStack_30);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_2 + 0x104);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x02450590(iVar1,uStack_38,&iStack_2c,
                                **(undefined4 **)(_UNK_01acf088 + 0x1acf004));
        iVar7 = 1;
        if (iVar2 != 0) {
          iVar7 = iStack_2c + 1;
        }
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0245025c(iVar1,uStack_38,iVar7,**(undefined4 **)(_UNK_01acf08c + 0x1acf03c));
      }
      puVar3 = *(undefined4 **)(_UNK_01acf090 + 0x1acf054);
    }
    else {
      unaff_r8 = 0;
      iStack_40 = -1;
      puVar3 = *(undefined4 **)(_UNK_01acf074 + 0x1aced7c);
    }
    uVar5 = *puVar3;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x038fd264(param_1,unaff_r8,iStack_40,uVar5);
  }
  else {
    iVar1 = func_0x0229f13c(0x8688,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217edb0(&uStack_38,iVar1,param_2,0);
    *param_1 = uStack_38;
    param_1[1] = uStack_34;
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$Settle RVA 0x1abf094 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01acf094(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0x8691,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8691,0);
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
    uStack_34 = iStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  if (param_2 != 0) {
    func_0x01acf110(param_1);
  }
  func_0x01acf848(param_1);
  pcVar5 = (char *)(_UNK_01ad030c + 0x1acfd78);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad0310 + 0x1acfd8c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0314 + 0x1acfd98));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0318 + 0x1acfda4));
    func_0x01384978(*(undefined4 *)(_UNK_01ad031c + 0x1acfdb0));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0320 + 0x1acfdbc));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0324 + 0x1acfdc8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0328 + 0x1acfdd4));
    func_0x01384978(*(undefined4 *)(_UNK_01ad032c + 0x1acfde0));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0330 + 0x1acfdec));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0334 + 0x1acfdf8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0338 + 0x1acfe04));
    func_0x01384978(*(undefined4 *)(_UNK_01ad033c + 0x1acfe10));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x86a0,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xb8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar7) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar7,0);
    }
    if (*(int *)(param_1 + 0x100) != 0) {
      iVar7 = *(int *)(*(int *)(param_1 + 0x100) + 0x10);
      bVar12 = SBORROW4(iVar7,1);
      iVar1 = iVar7 + -1;
      if (0 < iVar7) {
        bVar12 = SBORROW4(*(int *)(param_1 + 0xf0),iVar7);
        iVar1 = *(int *)(param_1 + 0xf0) - iVar7;
      }
      if (iVar1 < 0 == bVar12) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar7 = *(int *)(iVar1 + 0x40);
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar8 = func_0x01db7b78(iVar1,0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x01cdef00(iVar7,uVar8,0,0);
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar7 = *(int *)(param_1 + 0x100);
        iVar1 = *(int *)(iVar1 + 0x40);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar7 = *(int *)(iVar7 + 0x14);
        iStack_4c = param_1;
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&uStack_48,iVar7,**(undefined4 **)(_UNK_01ad0340 + 0x1acff98));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        iStack_2c = iStack_3c;
        piVar11 = *(int **)(_UNK_01ad0344 + 0x1acffbc);
        while (iVar2 = func_0x0145b12c(&uStack_38,**(undefined4 **)(_UNK_01ad0354 + 0x1acffc4)),
              iVar7 = iStack_2c, iVar2 != 0) {
          if (iStack_2c == 0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar11;
          uVar4 = *(undefined4 *)(iVar7 + 8);
          uVar8 = *(undefined4 *)(iVar7 + 0xc);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar11;
          }
          uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x328);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uStack_50 = 0;
          uVar8 = func_0x01cdcbac(iVar1,uVar4,uVar8,uVar6,0,0,0,400,
                                  **(undefined4 **)(_UNK_01ad0348 + 0x1ad0024),
                                  **(undefined4 **)(_UNK_01ad034c + 0x1ad0030));
          iVar7 = *(int *)(iStack_4c + 0xb8);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar7 + 8);
          uVar10 = *(uint *)(iVar7 + 0xc);
          piVar3 = *(int **)(_UNK_01ad0350 + 0x1ad0098);
          *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
          iVar9 = *piVar3;
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (uVar10 < *(uint *)(iVar2 + 0xc)) {
            *(uint *)(iVar7 + 0xc) = uVar10 + 1;
            *(undefined4 *)(iVar2 + uVar10 * 4 + 0x10) = uVar8;
          }
          else {
            func_0x0328f170(iVar7,uVar8,
                            *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
          }
        }
        func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01ad0358 + 0x1ad00ec));
        iVar7 = func_0x01c24918(0);
        iVar1 = iStack_4c;
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar7 = *(int *)(iVar7 + 0x40);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar9 = 0;
        func_0x01cdefd0(iVar7,0);
        iVar2 = *(int *)(iVar1 + 0x40);
        iVar7 = 0;
        if (iVar2 != 0) {
          iVar7 = *(int *)(iVar2 + 0x28);
        }
        if (iVar2 != 0 && iVar7 != 0) {
          iVar9 = *(int *)(iVar7 + 0xc);
          iVar7 = *(int *)(iVar1 + 0xec) + 1;
          bVar12 = iVar9 <= iVar7;
          if (iVar9 < 1) {
            bVar12 = false;
          }
        }
        else {
          bVar12 = false;
          iVar7 = *(int *)(iVar1 + 0xec) + 1;
        }
        FUN_01accadc(iVar1,iVar7,iVar9,bVar12);
        if (*(int *)(**(int **)(_UNK_01ad0364 + 0x1ad0194) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar7 = func_0x0300d558(**(undefined4 **)(_UNK_01ad0368 + 0x1ad01b0));
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x028c3fd8(iVar7,0);
        iVar2 = *(int *)(iVar1 + 0x40);
        iVar7 = *(int *)(iVar1 + 0xec);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x28);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar2 + 0xc) <= iVar7 + 1) {
          iVar7 = *(int *)(iVar1 + 0x3c);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          if (*(char *)(iVar7 + 0x34) != '\0') {
            *(int *)(iVar1 + 0xec) = *(int *)(iVar1 + 0xec) + 1;
            iVar7 = func_0x01c24918(0);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            iVar7 = *(int *)(iVar7 + 0xd8);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            func_0x02b49350(iVar7,iVar1,0,0);
            return;
          }
        }
        FUN_01acb73c(iVar1);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x86a0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$SettleGoReward RVA 0x1abf110 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01acf110(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  float fVar14;
  float fVar15;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  
  pcVar5 = (char *)(_UNK_01acf7bc + 0x1acf130);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acf7c0 + 0x1acf144));
    func_0x01384978(*(undefined4 *)(_UNK_01acf7c4 + 0x1acf150));
    func_0x01384978(*(undefined4 *)(_UNK_01acf7c8 + 0x1acf15c));
    func_0x01384978(*(undefined4 *)(_UNK_01acf7cc + 0x1acf168));
    func_0x01384978(*(undefined4 *)(_UNK_01acf7d0 + 0x1acf174));
    func_0x01384978(*(undefined4 *)(_UNK_01acf7d4 + 0x1acf180));
    func_0x01384978(*(undefined4 *)(_UNK_01acf7d8 + 0x1acf18c));
    func_0x01384978(*(undefined4 *)(_UNK_01acf7dc + 0x1acf198));
    func_0x01384978(*(undefined4 *)(_UNK_01acf7e0 + 0x1acf1a4));
    func_0x01384978(*(undefined4 *)(_UNK_01acf7e4 + 0x1acf1b0));
    func_0x01384978(*(undefined4 *)(_UNK_01acf7e8 + 0x1acf1bc));
    func_0x01384978(*(undefined4 *)(_UNK_01acf7ec + 0x1acf1c8));
    func_0x01384978(*(undefined4 *)(_UNK_01acf7f0 + 0x1acf1d4));
    func_0x01384978(*(undefined4 *)(_UNK_01acf7f4 + 0x1acf1e0));
    func_0x01384978(*(undefined4 *)(_UNK_01acf7f8 + 0x1acf1ec));
    func_0x01384978(*(undefined4 *)(_UNK_01acf7fc + 0x1acf1f8));
    func_0x01384978(*(undefined4 *)(_UNK_01acf800 + 0x1acf204));
    func_0x01384978(*(undefined4 *)(_UNK_01acf804 + 0x1acf210));
    *pcVar5 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_3c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  iVar1 = func_0x0229f06c(0x8693,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xe8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar4) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
    }
    iVar1 = *(int *)(param_1 + 0x100);
    fVar14 = *(float *)(param_1 + 0xc4);
    if ((((iVar1 != 0) && (*(int *)(iVar1 + 0x10) < 1)) && (*(int *)(iVar1 + 0x14) != 0)) &&
       (0 < *(int *)(*(int *)(iVar1 + 0x14) + 0xc))) {
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01acf808 + 0x1acf39c));
      func_0x03258eb8(iVar1,**(undefined4 **)(_UNK_01acf80c + 0x1acf3b0));
      iVar4 = *(int *)(param_1 + 0x100);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar4 + 0x14);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_58,iVar4,**(undefined4 **)(_UNK_01acf810 + 0x1acf3f0));
      uStack_48 = uStack_58;
      uStack_44 = uStack_54;
      uStack_40 = uStack_50;
      iStack_3c = iStack_4c;
      piVar13 = *(int **)(_UNK_01acf814 + 0x1acf410);
      while (iVar3 = func_0x0145b12c(&uStack_48,**(undefined4 **)(_UNK_01acf818 + 0x1acf418)),
            iVar4 = iStack_3c, iVar3 != 0) {
        iVar3 = 0;
        while( true ) {
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar4 + 0xc) <= iVar3) break;
          uVar2 = *(undefined4 *)(iVar4 + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar1 + 8);
          uVar12 = *(uint *)(iVar1 + 0xc);
          iVar8 = *piVar13;
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          if (uVar12 < *(uint *)(iVar11 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar12 + 1;
            *(undefined4 *)(iVar11 + uVar12 * 4 + 0x10) = uVar2;
          }
          else {
            func_0x0325970c(iVar1,uVar2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
          }
          iVar3 = iVar3 + 1;
        }
      }
      func_0x0145b14c(&uStack_48,**(undefined4 **)(_UNK_01acf820 + 0x1acf4c8));
      if ((*(int *)(param_1 + 0xa8) != 0) &&
         (iVar4 = func_0x02139cf4(*(int *)(param_1 + 0xa8),0), iVar4 != 0)) {
        iVar4 = func_0x020d80e4(0x1d,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar3 = 0;
        *(int *)(iVar4 + 0x1c) = param_1;
        while( true ) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar1 + 0xc) <= iVar3) break;
          uVar2 = func_0x03259410(iVar1,iVar3,**(undefined4 **)(_UNK_01acf828 + 0x1acf544));
          uVar7 = *(undefined4 *)(param_1 + 200);
          uVar9 = *(undefined4 *)(param_1 + 0xcc);
          uVar6 = *(undefined4 *)(param_1 + 0xd0);
          if (*(int *)(**(int **)(_UNK_01acf82c + 0x1acf55c) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x01dd7838(uVar2,uVar7,uVar9,uVar6,fVar14,0);
          iVar8 = *(int *)(param_1 + 0xa8);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar8 = func_0x02139cf4(iVar8,0);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar8 = func_0x020e2888(iVar8,uVar2,0x12,iVar4,0);
          if (iVar8 == 0) {
            if (*(int *)(**(int **)(_UNK_01acf830 + 0x1acf5f8) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x01dd7dfc(0);
            iVar8 = func_0x01c24918(0);
            piVar13 = *(int **)(_UNK_01acf834 + 0x1acf62c);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *piVar13;
            iVar8 = *(int *)(iVar8 + 0x40);
            if (*(int *)(iVar11 + 0x74) == 0) {
              func_0x01384ab4();
              iVar11 = *piVar13;
            }
            uVar6 = *(undefined4 *)(*(int *)(iVar11 + 0x5c) + 0x328);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            uVar2 = func_0x01cdcbac(iVar8,uVar2,1,uVar6,0,0,0,0x148,
                                    **(undefined4 **)(_UNK_01acf838 + 0x1acf674),
                                    **(undefined4 **)(_UNK_01acf83c + 0x1acf680),0);
            iVar8 = *(int *)(param_1 + 0xe8);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(iVar8 + 8);
            uVar12 = *(uint *)(iVar8 + 0xc);
            piVar13 = *(int **)(_UNK_01acf840 + 0x1acf6e0);
            *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
            iVar10 = *piVar13;
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            if (uVar12 < *(uint *)(iVar11 + 0xc)) {
              *(uint *)(iVar8 + 0xc) = uVar12 + 1;
              *(undefined4 *)(iVar11 + uVar12 * 4 + 0x10) = uVar2;
            }
            else {
              func_0x0328f170(iVar8,uVar2,
                              *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
            }
          }
          else {
            fVar14 = fVar14 + *(float *)(param_1 + 0xe0);
          }
          iVar3 = iVar3 + 1;
        }
      }
    }
    iVar1 = *(int *)(param_1 + 0xe8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01acf844 + 0x1acf2ec));
      uVar2 = func_0x01ad036c(param_1,fVar14,*(undefined4 *)(param_1 + 200),
                              *(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0),
                              *(undefined4 *)(param_1 + 0xe8));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01c36290(iVar1,uVar2,0);
    }
    iVar1 = *(int *)(param_1 + 0xe8);
    fVar15 = *(float *)(param_1 + 0xc4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01ad0464(param_1,fVar14 - fVar15,0 < *(int *)(iVar1 + 0xc));
  }
  else {
    iVar1 = func_0x0229f13c(0x8693,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$SettleNormalReward RVA 0x1abf848 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01acf848(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  int iStack_48;
  undefined4 auStack_44 [3];
  
  pcVar4 = (char *)(_UNK_01acfd0c + 0x1acf868);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01acfd10 + 0x1acf87c));
    func_0x01384978(*(undefined4 *)(_UNK_01acfd14 + 0x1acf888));
    func_0x01384978(*(undefined4 *)(_UNK_01acfd18 + 0x1acf894));
    func_0x01384978(*(undefined4 *)(_UNK_01acfd1c + 0x1acf8a0));
    func_0x01384978(*(undefined4 *)(_UNK_01acfd20 + 0x1acf8ac));
    func_0x01384978(*(undefined4 *)(_UNK_01acfd24 + 0x1acf8b8));
    func_0x01384978(*(undefined4 *)(_UNK_01acfd28 + 0x1acf8c4));
    func_0x01384978(*(undefined4 *)(_UNK_01acfd2c + 0x1acf8d0));
    func_0x01384978(*(undefined4 *)(_UNK_01acfd30 + 0x1acf8dc));
    func_0x01384978(*(undefined4 *)(_UNK_01acfd34 + 0x1acf8e8));
    func_0x01384978(*(undefined4 *)(_UNK_01acfd38 + 0x1acf8f4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x869d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x869d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(&iStack_48,0,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffd0,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffd0,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar10,&stack0xffffffd0,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xe4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar6) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar6,0);
  }
  iVar1 = *(int *)(param_1 + 0x100);
  fVar13 = *(float *)(param_1 + 0xc0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x28);
  uVar10 = *(undefined4 *)(param_1 + 0xf4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0331f4f8(auStack_44,iVar1,uVar10,**(undefined4 **)(_UNK_01acfd3c + 0x1acf9c8));
  iVar1 = func_0x01ad051c(auStack_44[0]);
  if ((((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) && (*(int *)(param_1 + 0xa8) != 0)) &&
     (iVar6 = func_0x02139cf4(*(int *)(param_1 + 0xa8),0), iVar6 != 0)) {
    iVar6 = func_0x020d80e4(0x1d,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar1 + 0xc);
    *(int *)(iVar6 + 0x1c) = param_1;
    if (0 < iVar2) {
      iVar11 = 0;
      iVar2 = iVar6;
      iStack_48 = iVar1;
      do {
        uVar10 = func_0x03259410(iStack_48,iVar11,**(undefined4 **)(_UNK_01acfd40 + 0x1acfa58));
        uVar5 = *(undefined4 *)(param_1 + 0xd4);
        uVar3 = *(undefined4 *)(param_1 + 0xd8);
        uVar7 = *(undefined4 *)(param_1 + 0xdc);
        if (*(int *)(**(int **)(_UNK_01acfd44 + 0x1acfa70) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x01dd7838(uVar10,uVar5,uVar3,uVar7,fVar13,0);
        iVar1 = *(int *)(param_1 + 0xa8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02139cf4(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x020e2888(iVar1,uVar10,0x12,iVar6,0);
        if (iVar1 == 0) {
          iVar6 = iVar2;
          if (*(int *)(**(int **)(_UNK_01acfd48 + 0x1acfb0c) + 0x74) == 0) {
            func_0x01384ab4();
            iVar6 = iVar2;
          }
          func_0x01dd7dfc(0);
          iVar1 = func_0x01c24918(0);
          piVar8 = *(int **)(_UNK_01acfd4c + 0x1acfb40);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar8;
          iVar1 = *(int *)(iVar1 + 0x40);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar8;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x328);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar10 = func_0x01cdcbac(iVar1,uVar10,1,uVar3,0,0,0,0x173,
                                   **(undefined4 **)(_UNK_01acfd50 + 0x1acfb8c),
                                   **(undefined4 **)(_UNK_01acfd54 + 0x1acfb98),0);
          iVar1 = *(int *)(param_1 + 0xe4);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar1 + 8);
          uVar9 = *(uint *)(iVar1 + 0xc);
          piVar8 = *(int **)(_UNK_01acfd58 + 0x1acfbfc);
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          iVar12 = *piVar8;
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (uVar9 < *(uint *)(iVar2 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar9 + 1;
            *(undefined4 *)(iVar2 + uVar9 * 4 + 0x10) = uVar10;
            iVar2 = iVar6;
          }
          else {
            func_0x0328f170(iVar1,uVar10,
                            *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
            iVar2 = iVar6;
          }
        }
        else {
          fVar13 = fVar13 + *(float *)(param_1 + 0xe0);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(iStack_48 + 0xc));
    }
  }
  iVar1 = *(int *)(param_1 + 0xe4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar1 + 0xc)) {
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01acfd5c + 0x1acfc80));
    uVar10 = func_0x01ad036c(param_1,fVar13,*(undefined4 *)(param_1 + 0xd4),
                             *(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),
                             *(undefined4 *)(param_1 + 0xe4));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01c36290(iVar1,uVar10,0);
  }
  iVar1 = *(int *)(param_1 + 0xe4);
  fVar14 = *(float *)(param_1 + 0xc0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01ad0464(param_1,fVar13 - fVar14,0 < *(int *)(iVar1 + 0xc));
  return;
}



// ===== FAT.ActivityMonopolyBoard$$CheckFinalReward RVA 0x1abfd60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01acfd60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  bool bVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_01ad030c + 0x1acfd78);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad0310 + 0x1acfd8c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0314 + 0x1acfd98));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0318 + 0x1acfda4));
    func_0x01384978(*(undefined4 *)(_UNK_01ad031c + 0x1acfdb0));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0320 + 0x1acfdbc));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0324 + 0x1acfdc8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0328 + 0x1acfdd4));
    func_0x01384978(*(undefined4 *)(_UNK_01ad032c + 0x1acfde0));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0330 + 0x1acfdec));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0334 + 0x1acfdf8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0338 + 0x1acfe04));
    func_0x01384978(*(undefined4 *)(_UNK_01ad033c + 0x1acfe10));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x86a0,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xb8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar5) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar5,0);
    }
    if (*(int *)(param_1 + 0x100) != 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x100) + 0x10);
      bVar12 = SBORROW4(iVar5,1);
      iVar1 = iVar5 + -1;
      if (0 < iVar5) {
        bVar12 = SBORROW4(*(int *)(param_1 + 0xf0),iVar5);
        iVar1 = *(int *)(param_1 + 0xf0) - iVar5;
      }
      if (iVar1 < 0 == bVar12) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar1 + 0x40);
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar2 = func_0x01db7b78(iVar1,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x01cdef00(iVar5,uVar2,0,0);
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(param_1 + 0x100);
        iVar1 = *(int *)(iVar1 + 0x40);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0x14);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&uStack_48,iVar5,**(undefined4 **)(_UNK_01ad0340 + 0x1acff98));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        iStack_2c = iStack_3c;
        piVar11 = *(int **)(_UNK_01ad0344 + 0x1acffbc);
        while (iVar3 = func_0x0145b12c(&uStack_38,**(undefined4 **)(_UNK_01ad0354 + 0x1acffc4)),
              iVar5 = iStack_2c, iVar3 != 0) {
          if (iStack_2c == 0) {
            func_0x01384bf0();
          }
          iVar3 = *piVar11;
          uVar8 = *(undefined4 *)(iVar5 + 8);
          uVar2 = *(undefined4 *)(iVar5 + 0xc);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar11;
          }
          uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x328);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar2 = func_0x01cdcbac(iVar1,uVar8,uVar2,uVar7,0,0,0,400,
                                  **(undefined4 **)(_UNK_01ad0348 + 0x1ad0024),
                                  **(undefined4 **)(_UNK_01ad034c + 0x1ad0030),0);
          iVar5 = *(int *)(param_1 + 0xb8);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar5 + 8);
          uVar10 = *(uint *)(iVar5 + 0xc);
          piVar4 = *(int **)(_UNK_01ad0350 + 0x1ad0098);
          *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
          iVar9 = *piVar4;
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (uVar10 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(iVar5 + 0xc) = uVar10 + 1;
            *(undefined4 *)(iVar3 + uVar10 * 4 + 0x10) = uVar2;
          }
          else {
            func_0x0328f170(iVar5,uVar2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
          }
        }
        func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01ad0358 + 0x1ad00ec));
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x40);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar3 = 0;
        func_0x01cdefd0(iVar1,0);
        iVar5 = *(int *)(param_1 + 0x40);
        iVar1 = 0;
        if (iVar5 != 0) {
          iVar1 = *(int *)(iVar5 + 0x28);
        }
        if (iVar5 != 0 && iVar1 != 0) {
          iVar3 = *(int *)(iVar1 + 0xc);
          iVar1 = *(int *)(param_1 + 0xec) + 1;
          bVar12 = iVar3 <= iVar1;
          if (iVar3 < 1) {
            bVar12 = false;
          }
        }
        else {
          bVar12 = false;
          iVar1 = *(int *)(param_1 + 0xec) + 1;
        }
        FUN_01accadc(param_1,iVar1,iVar3,bVar12);
        if (*(int *)(**(int **)(_UNK_01ad0364 + 0x1ad0194) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01ad0368 + 0x1ad01b0));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x028c3fd8(iVar1,0);
        iVar5 = *(int *)(param_1 + 0x40);
        iVar1 = *(int *)(param_1 + 0xec);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0x28);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar5 + 0xc) <= iVar1 + 1) {
          iVar1 = *(int *)(param_1 + 0x3c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (*(char *)(iVar1 + 0x34) != '\0') {
            *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
            iVar1 = func_0x01c24918(0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 0xd8);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x02b49350(iVar1,param_1,0,0);
            return;
          }
        }
        FUN_01acb73c(param_1);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x86a0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$CoDelayReward RVA 0x1ac036c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01ad036c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01ad0458 + 0x1ad0394);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad045c + 0x1ad03ac));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8694,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ad0460 + 0x1ad0420));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 0x10) = param_2;
    *(undefined4 *)(iVar1 + 0x18) = param_3;
    *(undefined4 *)(iVar1 + 0x1c) = param_4;
    *(undefined4 *)(iVar1 + 0x20) = param_5;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0x14) = param_6;
  }
  else {
    iVar1 = func_0x0229f13c(0x8694,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02259494(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return iVar1;
}



// ===== FAT.ActivityMonopolyBoard$$SetRewardFlyDuration RVA 0x1ac0464 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad0464(int param_1,float param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = func_0x0229f06c(0x869b,0);
  if (iVar1 == 0) {
    fVar4 = *(float *)(param_1 + 0xa4);
    fVar2 = (float)FUN_01acda9c(param_1);
    fVar3 = _UNK_01ad0514;
    if (param_3 != 0) {
      fVar3 = _UNK_01ad0518;
    }
    fVar3 = fVar3 + fVar2 + param_2;
    if (fVar3 < fVar4) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0xa4) = fVar3;
  }
  else {
    iVar1 = func_0x0229f13c(0x869b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c8b38(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$GetRandomDropsFromGrid RVA 0x1ac051c =====

/* WARNING: Removing unreachable block (ram,0x01ad0ad4) */
/* WARNING: Removing unreachable block (ram,0x01ad0ae4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01ad051c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  char *pcVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined8 uVar17;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar13 = (char *)(_UNK_01ad0eb4 + 0x1ad0534);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad0eb8 + 0x1ad0548));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0ebc + 0x1ad0554));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0ec0 + 0x1ad0560));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0ec4 + 0x1ad056c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0ec8 + 0x1ad0578));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0ecc + 0x1ad0584));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0ed0 + 0x1ad0590));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0ed4 + 0x1ad059c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0ed8 + 0x1ad05a8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0edc + 0x1ad05b4));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0ee0 + 0x1ad05c0));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0ee4 + 0x1ad05cc));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0ee8 + 0x1ad05d8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0eec + 0x1ad05e4));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0ef0 + 0x1ad05f0));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0ef4 + 0x1ad05fc));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0ef8 + 0x1ad0608));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0efc + 0x1ad0614));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0f00 + 0x1ad0620));
    func_0x01384978(*(undefined4 *)(_UNK_01ad0f04 + 0x1ad062c));
    *pcVar13 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  uStack_40 = 0;
  iStack_30 = 0;
  iStack_2c = 0;
  iVar3 = func_0x0229f06c(0x869e,0);
  if (iVar3 == 0) {
    iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01ad0f08 + 0x1ad06a4));
    func_0x03258eb8(iVar3,**(undefined4 **)(_UNK_01ad0f0c + 0x1ad06b8));
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0xc);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar17 = func_0x01cababc(iVar4,param_1,0);
    iVar14 = (int)uVar17;
    iVar4 = 0;
    iVar1 = (int)((ulonglong)uVar17 >> 0x20);
    if (iVar14 != 0) {
      iVar4 = *(int *)(iVar14 + 0x14);
      iVar1 = iVar14;
    }
    if (iVar14 != 0 && iVar4 != 0) {
      iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01ad0f10 + 0x1ad072c));
      func_0x02450660(iVar4,**(undefined4 **)(_UNK_01ad0f14 + 0x1ad0740));
      iVar14 = *(int *)(iVar1 + 0x14);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      piVar5 = (int *)func_0x03653608(iVar14,**(undefined4 **)(_UNK_01ad0f18 + 0x1ad0768));
LAB_01ad0778:
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar14 = *piVar5;
      uVar11 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar12[-1] == **(int **)(_UNK_01ad0f40 + 0x1ad0794)) {
            puVar6 = (undefined4 *)(iVar14 + *piVar12 * 8 + 0xc0);
            goto LAB_01ad07dc;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01ad0f40 + 0x1ad0794),0);
LAB_01ad07dc:
      iVar14 = (*(code *)*puVar6)(piVar5,puVar6[1]);
      if (iVar14 != 0) {
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *piVar5;
        uVar11 = (uint)*(ushort *)(iVar14 + 0xb6);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(int *)(iVar14 + 0x58) + 4);
          do {
            if (piVar12[-1] == **(int **)(_UNK_01ad0f1c + 0x1ad0810)) {
              puVar6 = (undefined4 *)(iVar14 + *piVar12 * 8 + 0xc0);
              goto LAB_01ad0858;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01ad0f1c + 0x1ad0810),0);
LAB_01ad0858:
        iVar14 = (*(code *)*puVar6)(piVar5,puVar6[1]);
        if (*(char *)(_UNK_01ad0f20 + 0x1ad0878) == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01ad0f24 + 0x1ad088c));
          *(undefined1 *)(_UNK_01ad0f28 + 0x1ad089c) = 1;
        }
        if (iVar14 == 0) {
          iVar7 = 0;
          uVar11 = 0;
        }
        else {
          iVar7 = func_0x0148d698(iVar14,0);
          uVar11 = *(uint *)(iVar14 + 8);
        }
        uVar8 = func_0x01adfe1c(iVar7,uVar11,0x3a,**(undefined4 **)(_UNK_01ad0f2c + 0x1ad08d0));
        if ((int)uVar8 < 0) {
          func_0x024509d0(iVar7,uVar11,&iStack_28,0);
          iStack_2c = 1;
        }
        else {
          iVar14 = **(int **)(_UNK_01ad0f30 + 0x1ad08fc);
          if (uVar11 < uVar8) {
            func_0x0145b368(0);
          }
          if ((*(ushort *)(*(int *)(iVar14 + 0x10) + 0xbd) & 1) == 0) {
            func_0x014001f0();
          }
          func_0x024509d0(iVar7,uVar8,&iStack_28,0);
          iVar14 = **(int **)(_UNK_01ad0f34 + 0x1ad0940);
          if (uVar11 <= uVar8) {
            func_0x0145b368(0);
          }
          if ((*(ushort *)(*(int *)(iVar14 + 0x10) + 0xbd) & 1) == 0) {
            func_0x014001f0();
          }
          func_0x024509d0(iVar7 + (uVar8 + 1) * 2,uVar11 - (uVar8 + 1),&iStack_2c,0);
        }
        iVar14 = iStack_28;
        if (0 < iStack_28) {
          iVar14 = iStack_2c;
        }
        if (0 < iVar14) {
          uStack_54 = 0;
          uStack_58 = 0;
          func_0x038fd264(&uStack_58,iStack_28,iStack_2c,
                          **(undefined4 **)(_UNK_01ad0f38 + 0x1ad09bc));
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          uVar2 = uStack_54;
          uVar15 = uStack_58;
          iVar14 = *(int *)(iVar4 + 8);
          uVar11 = *(uint *)(iVar4 + 0xc);
          piVar12 = *(int **)(_UNK_01ad0f3c + 0x1ad0a04);
          *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
          iVar7 = *piVar12;
          if (iVar14 == 0) {
            func_0x01384bf0();
          }
          if (uVar11 < *(uint *)(iVar14 + 0xc)) {
            *(uint *)(iVar4 + 0xc) = uVar11 + 1;
            iVar14 = iVar14 + uVar11 * 8;
            *(undefined4 *)(iVar14 + 0x10) = uVar15;
            *(undefined4 *)(iVar14 + 0x14) = uVar2;
          }
          else {
            func_0x024501b4(iVar4,uVar15,uVar2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
          }
        }
        goto LAB_01ad0778;
      }
      if (piVar5 != (int *)0x0) {
        iVar14 = *piVar5;
        uVar11 = (uint)*(ushort *)(iVar14 + 0xb6);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(int *)(iVar14 + 0x58) + 4);
          do {
            if (piVar12[-1] == **(int **)(_UNK_01ad0f44 + 0x1ad0a74)) {
              puVar6 = (undefined4 *)(iVar14 + *piVar12 * 8 + 0xc0);
              goto LAB_01ad0abc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01ad0f44 + 0x1ad0a74),0);
LAB_01ad0abc:
        (*(code *)*puVar6)(piVar5,puVar6[1]);
      }
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar4 + 0xc) != 0) {
        func_0x024505e0(&uStack_58,iVar4,**(undefined4 **)(_UNK_01ad0f48 + 0x1ad0b18));
        iVar14 = 0;
        iStack_30 = iStack_48;
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        puVar6 = *(undefined4 **)(_UNK_01ad0f4c + 0x1ad0b48);
        while (iVar7 = func_0x0146e998(&uStack_40,*puVar6), iVar7 != 0) {
          iVar14 = iVar14 + iStack_30;
        }
        func_0x024505e4(&uStack_40,**(undefined4 **)(_UNK_01ad0f54 + 0x1ad0b70));
        iVar7 = 0;
        while( true ) {
          uVar15 = *(undefined4 *)(iVar1 + 0x18);
          if (*(int *)(**(int **)(_UNK_01ad0f70 + 0x1ad0b94) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar9 = func_0x0148ab08(1,uVar15,0);
          if (iVar9 <= iVar7) break;
          iVar9 = func_0x02450284(1,iVar14 + 1,0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x024505e0(&uStack_58,iVar4,**(undefined4 **)(_UNK_01ad0f60 + 0x1ad0bf8));
          iVar16 = 0;
          uStack_40 = uStack_58;
          uStack_3c = uStack_54;
          uStack_38 = uStack_50;
          uStack_34 = uStack_4c;
          iStack_30 = iStack_48;
          do {
            iVar10 = func_0x0146e998(&uStack_40,*puVar6);
            uVar15 = uStack_34;
            if (iVar10 == 0) goto LAB_01ad0cb0;
            iVar16 = iVar16 + iStack_30;
          } while (iVar16 < iVar9);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar16 = *(int *)(iVar3 + 8);
          uVar11 = *(uint *)(iVar3 + 0xc);
          piVar5 = *(int **)(_UNK_01ad0f64 + 0x1ad0c6c);
          *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
          iVar9 = *piVar5;
          if (iVar16 == 0) {
            func_0x01384bf0();
          }
          if (uVar11 < *(uint *)(iVar16 + 0xc)) {
            *(uint *)(iVar3 + 0xc) = uVar11 + 1;
            *(undefined4 *)(iVar16 + uVar11 * 4 + 0x10) = uVar15;
          }
          else {
            func_0x0325970c(iVar3,uVar15,
                            *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
          }
LAB_01ad0cb0:
          func_0x024505e4(&uStack_40,**(undefined4 **)(_UNK_01ad0f68 + 0x1ad0cbc));
          iVar7 = iVar7 + 1;
        }
      }
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x869e,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0225b6bc(iVar3,param_1,0);
  }
  return iVar3;
}



// ===== FAT.ActivityMonopolyBoard.<CoDelayReward>d__112$$.ctor RVA 0x1ac0f78 =====

void FUN_01ad0f78(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.ActivityMonopolyBoard$$GetStageFinishRewards RVA 0x1ac0f94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ad0f94(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x86a1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x86a1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021cb2a0 + 0x21cb1c0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021cb2a4 + 0x21cb1d4),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021cb2a8 + 0x21cb290));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0xb8);
}



// ===== FAT.ActivityMonopolyBoard$$FAT.Merge.IExternalOutput.CanUseItem RVA 0x1ac0fe8 =====

uint FUN_01ad0fe8(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x86a2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x86a2,0);
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
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x1c);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0210e2d4(param_2,0);
  return (uint)(iVar1 == iVar4);
}



// ===== FAT.ActivityMonopolyBoard$$FAT.Merge.IExternalOutput.TrySpawnItem RVA 0x1ac1078 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ad1078(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 auStack_28 [8];
  
  pcVar3 = (char *)(_UNK_01ad1180 + 0x1ad1098);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad1184 + 0x1ad10b0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x86a3,0);
  if (iVar1 == 0) {
    *param_4 = 0;
    *param_3 = 0xffffffff;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_01ad1188 + 0x1ad1138));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0211b24c(iVar1,0);
    if (iVar1 != 0) {
      func_0x01ad118c(auStack_28,param_1);
    }
    uVar2 = (uint)(iVar1 != 0);
  }
  else {
    iVar1 = func_0x0229f13c(0x86a3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x022365c4(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.ActivityMonopolyBoard$$OnUseItem RVA 0x1ac118c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad118c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_01ad1300 + 0x1ad11a8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad1304 + 0x1ad11bc));
    func_0x01384978(*(undefined4 *)(_UNK_01ad1308 + 0x1ad11c8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad130c + 0x1ad11d4));
    func_0x01384978(*(undefined4 *)(_UNK_01ad1310 + 0x1ad11e0));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x86a4,0);
  if (iVar2 == 0) {
    FUN_01aceaf4(&uStack_28,param_2);
    iVar2 = iStack_24;
    uVar1 = uStack_28;
    if (*(int *)(**(int **)(_UNK_01ad1314 + 0x1ad1250) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0300d558(**(undefined4 **)(_UNK_01ad1318 + 0x1ad1274));
    puVar6 = *(undefined4 **)(_UNK_01ad131c + 0x1ad1298);
    iStack_24 = 0;
    uStack_28 = 0;
    func_0x038fd264(&uStack_28,uVar1,iVar2,*puVar6);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0349bae4(iVar3,uStack_28,iStack_24,**(undefined4 **)(_UNK_01ad1320 + 0x1ad12c0));
    FUN_01acf094(param_2,0 < iVar2);
    uVar4 = *puVar6;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x038fd264(param_1,uVar1,iVar2,uVar4);
  }
  else {
    iVar2 = func_0x0229f13c(0x86a4,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0217edb0(&uStack_28,iVar2,param_2,0);
    *param_1 = uStack_28;
    param_1[1] = iStack_24;
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$SetGoRewardAnim RVA 0x1ac1324 =====

void FUN_01ad1324(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x86a5,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc4) = param_2;
    *(undefined4 *)(param_1 + 200) = param_3;
    *(undefined4 *)(param_1 + 0xcc) = param_4;
    *(undefined4 *)(param_1 + 0xd0) = param_5;
  }
  else {
    iVar1 = func_0x0229f13c(0x86a5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02253a20(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$SetRewardAnim RVA 0x1ac13ac =====

void FUN_01ad13ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x86a6,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc0) = param_2;
    *(undefined4 *)(param_1 + 0xd4) = param_3;
    *(undefined4 *)(param_1 + 0xd8) = param_4;
    *(undefined4 *)(param_1 + 0xdc) = param_5;
  }
  else {
    iVar1 = func_0x0229f13c(0x86a6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02253a20(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$FAT.Merge.ISpawnEffectWithTrail.AddTrail RVA 0x1ac1434 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad1434(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_01ad15d0 + 0x1ad1454);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad15d4 + 0x1ad1468));
    func_0x01384978(*(undefined4 *)(_UNK_01ad15d8 + 0x1ad1474));
    func_0x01384978(*(undefined4 *)(_UNK_01ad15dc + 0x1ad1480));
    func_0x01384978(*(undefined4 *)(_UNK_01ad15e0 + 0x1ad148c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad15e4 + 0x1ad1498));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x86a7,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ad15e8 + 0x1ad14fc));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_01ad15ec + 0x1ad1524);
    *(undefined4 *)(iVar1 + 8) = param_2;
    *(int *)(iVar1 + 0xc) = param_1;
    uVar3 = *puVar2;
    *(undefined4 *)(iVar1 + 0x10) = param_3;
    iVar4 = func_0x034aaa34(uVar3);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x01ee906c(iVar4,4,0);
    iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_01ad15f0 + 0x1ad1568));
    uVar6 = *(undefined4 *)(param_1 + 0xbc);
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01ad15f4 + 0x1ad1580));
    func_0x02450194(uVar5,iVar1,**(undefined4 **)(_UNK_01ad15f8 + 0x1ad159c),0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0244a2c0(iVar4,uVar6,uVar3,uVar5,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x86a7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard.<>c__DisplayClass119_0$$.ctor RVA 0x1ac15fc =====

void FUN_01ad15fc(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityMonopolyBoard$$CheckIsShowRedPoint RVA 0x1ac1604 =====

uint FUN_01ad1604(undefined4 param_1,int *param_2)

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
  
  iVar4 = 0;
  iVar1 = func_0x0229f06c(0x86ad,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x86ad,0);
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
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,1,0);
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    *param_2 = iVar1;
    uVar2 = func_0x0245496c(&uStack_38,1,0);
    return uVar2;
  }
  iVar1 = FUN_01acbb30(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_01acbb30(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x02141d1c(iVar1,0);
  }
  *param_2 = iVar4;
  return (uint)(0 < iVar4);
}



// ===== FAT.ActivityMonopolyBoard$$_OnBoardItemChange RVA 0x1ac16a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad16a8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
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
  
  iVar1 = func_0x0229f06c(0x865b,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0xb4);
    if (param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x785a,0);
    if (iVar1 == 0) {
      pcVar7 = (char *)(_UNK_02c062e4 + 0x2c061d4);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02c062e8 + 0x2c061e8));
        *pcVar7 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x785b,0);
      if (iVar1 == 0) {
        piVar8 = *(int **)(param_1 + 8);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar8;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_02c062ec + 0x2c06254)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 200);
              goto LAB_02c0629c;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_02c062ec + 0x2c06254),1);
LAB_02c0629c:
        iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
        if (iVar1 == 0) {
          return;
        }
        if (*(char *)(param_1 + 0x14) != '\0') {
          return;
        }
        iVar1 = func_0x02c067c8(param_1);
        if (iVar1 != 0) {
          *(undefined1 *)(param_1 + 0x14) = 1;
          *(undefined4 *)(param_1 + 0x10) = 0;
        }
        return;
      }
      iVar1 = func_0x0229f13c(0x785b,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x785a,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x865b,0);
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
  iVar6 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar6,uVar9,&uStack_30,uVar4,0,0);
  return;
}



// ===== FAT.ActivityMonopolyBoard$$FAT.IActivityUpdate.ActivityUpdate RVA 0x1ac1710 =====

void FUN_01ad1710(int param_1,float param_2)

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
  
  iVar1 = func_0x0229f06c(0x86ae,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0xb4);
    if (param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x78a6,0,0);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x14) != '\0') {
        param_2 = *(float *)(param_1 + 0x10) + param_2;
        *(float *)(param_1 + 0x10) = param_2;
        if (param_2 <= 1.0) {
          return;
        }
        func_0x02c06384(param_1);
        *(undefined1 *)(param_1 + 0x14) = 0;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x78a6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x86ae,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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



// ===== FAT.ActivityMonopolyBoard$$FAT.IBoardExtremeAdapter.GetBoard RVA 0x1ac1784 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ad1784(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x86af,0);
  if (iVar1 == 0) {
    param_1 = FUN_01acbb30(param_1);
    if (param_1 == 0) {
      return 0;
    }
    iVar1 = func_0x0229f06c(0x142,0);
    if (iVar1 == 0) {
      return *(undefined4 *)(param_1 + 0x4c);
    }
    iVar1 = func_0x0229f13c(0x142,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x86af,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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



// ===== FAT.ActivityMonopolyBoard$$FAT.IBoardExtremeAdapter.CanCheckExtreme RVA 0x1ac17f4 =====

undefined4 FUN_01ad17f4(undefined4 param_1)

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
  iVar1 = func_0x0229f06c(0x86b0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x86b0,0);
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
  iVar1 = FUN_01acbb30(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_01acbb30(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02139cf4(iVar1,0);
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = 1;
    }
  }
  return uVar3;
}



// ===== FAT.ActivityMonopolyBoard$$BuildBoardData RVA 0x1ac188c =====

/* WARNING: Removing unreachable block (ram,0x01ad2d58) */
/* WARNING: Removing unreachable block (ram,0x01ad2d4c) */
/* WARNING: Removing unreachable block (ram,0x01ad210c) */
/* WARNING: Removing unreachable block (ram,0x01ad1ea8) */
/* WARNING: Removing unreachable block (ram,0x01ad1eb4) */
/* WARNING: Removing unreachable block (ram,0x01ad29a4) */
/* WARNING: Removing unreachable block (ram,0x01ad29b0) */
/* WARNING: Removing unreachable block (ram,0x01ad3284) */
/* WARNING: Removing unreachable block (ram,0x01ad3294) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad188c(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 *puVar16;
  int *piVar17;
  int *piVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  int iVar21;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
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
  int iStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  pcVar11 = (char *)(_UNK_01ad2878 + 0x1ad18ac);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad287c + 0x1ad18c0));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2880 + 0x1ad18cc));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2884 + 0x1ad18d8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2888 + 0x1ad18e4));
    func_0x01384978(*(undefined4 *)(_UNK_01ad288c + 0x1ad18f0));
    func_0x01384978(*(undefined4 *)(_UNK_01ad28f4 + 0x1ad18fc));
    func_0x01384978(*(undefined4 *)(_UNK_01ad28f8 + 0x1ad1908));
    func_0x01384978(*(undefined4 *)(_UNK_01ad28fc + 0x1ad1914));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2900 + 0x1ad1920));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2904 + 0x1ad192c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2908 + 0x1ad1938));
    func_0x01384978(*(undefined4 *)(_UNK_01ad290c + 0x1ad1944));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2910 + 0x1ad1950));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2914 + 0x1ad195c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2918 + 0x1ad1968));
    func_0x01384978(*(undefined4 *)(_UNK_01ad291c + 0x1ad1974));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2920 + 0x1ad1980));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2924 + 0x1ad198c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2928 + 0x1ad1998));
    func_0x01384978(*(undefined4 *)(_UNK_01ad292c + 0x1ad19a4));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2930 + 0x1ad19b0));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2934 + 0x1ad19bc));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2938 + 0x1ad19c8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad293c + 0x1ad19d4));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2940 + 0x1ad19e0));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2944 + 0x1ad19ec));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2948 + 0x1ad19f8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad294c + 0x1ad1a04));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2950 + 0x1ad1a10));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2954 + 0x1ad1a1c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2958 + 0x1ad1a28));
    func_0x01384978(*(undefined4 *)(_UNK_01ad295c + 0x1ad1a34));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2960 + 0x1ad1a40));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2964 + 0x1ad1a4c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2968 + 0x1ad1a58));
    func_0x01384978(*(undefined4 *)(_UNK_01ad296c + 0x1ad1a64));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2970 + 0x1ad1a70));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2974 + 0x1ad1a7c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad2978 + 0x1ad1a88));
    *pcVar11 = '\x01';
  }
  uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  iStack_30 = 0;
  iStack_34 = 0;
  iStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_4c = uStack_64;
  uStack_48 = uStack_60;
  uStack_44 = uStack_5c;
  iVar2 = func_0x0229f06c(0x8656,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01ad2b04 + 0x1ad1b2c));
    func_0x01ad39a8();
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar14 = *(undefined4 *)(param_2 + 0x18);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar12 = *(undefined4 *)(param_2 + 0x2c);
    uVar7 = *(undefined4 *)(param_2 + 0x3c);
    iVar8 = *(int *)(**(int **)(_UNK_01ad2b08 + 0x1ad1b64) + 0x74);
    *(undefined4 *)(iVar2 + 8) = uVar14;
    *(undefined4 *)(iVar2 + 0xc) = uVar7;
    if (iVar8 == 0) {
      func_0x01384ab4();
    }
    uVar14 = func_0x0148ab08(0,uVar12,0);
    iVar8 = *(int *)(param_2 + 0x14);
    uVar1 = *(undefined1 *)(param_2 + 0x24);
    *(undefined4 *)(iVar2 + 0x10) = uVar14;
    *(undefined1 *)(iVar2 + 0x2c) = uVar1;
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    puVar16 = *(undefined4 **)(_UNK_01ad2b7c + 0x1ad1bcc);
    uVar14 = func_0x0364c9b8(iVar8,0,*puVar16);
    iVar8 = *(int *)(param_2 + 0x14);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x0364c9b8(iVar8,1,*puVar16);
    *(undefined4 *)(iVar2 + 0x18) = uVar14;
    *(undefined4 *)(iVar2 + 0x1c) = uVar7;
    iVar8 = *(int *)(param_2 + 0x1c);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar14 = func_0x0364c9b8(iVar8,0,*puVar16);
    iVar8 = *(int *)(param_2 + 0x1c);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x0364c9b8(iVar8,1,*puVar16);
    *(undefined4 *)(iVar2 + 0x24) = uVar7;
    *(undefined4 *)(iVar2 + 0x20) = uVar14;
    iVar8 = *(int *)(param_2 + 0x30);
    *(int *)(param_1 + 0x100) = iVar2;
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x03653608(iVar8,**(undefined4 **)(_UNK_01ad2b80 + 0x1ad1c70));
    piVar17 = *(int **)(_UNK_01ad2b84 + 0x1ad1c88);
    piVar18 = *(int **)(_UNK_01ad2b88 + 0x1ad1c90);
LAB_01ad1c8c:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01ad2b8c + 0x1ad1ca8)) {
          puVar16 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
          goto LAB_01ad1cf0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar9 != 0);
    }
    puVar16 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad2b8c + 0x1ad1ca8),0);
LAB_01ad1cf0:
    iVar2 = (*(code *)*puVar16)(piVar3,puVar16[1]);
    if (iVar2 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01ad2cb4 + 0x1ad1d24)) {
            puVar16 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
            goto LAB_01ad1d6c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar9 != 0);
      }
      puVar16 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad2cb4 + 0x1ad1d24),0);
LAB_01ad1d6c:
      uVar14 = (*(code *)*puVar16)(piVar3,puVar16[1]);
      iVar2 = *(int *)(param_1 + 0x100);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x14);
      if (*(int *)(*piVar17 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar14 = func_0x02565a88(uVar14,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar2 + 8);
      uVar9 = *(uint *)(iVar2 + 0xc);
      iVar21 = *piVar18;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      if (uVar9 < *(uint *)(iVar8 + 0xc)) {
        *(uint *)(iVar2 + 0xc) = uVar9 + 1;
        *(undefined4 *)(iVar8 + uVar9 * 4 + 0x10) = uVar14;
      }
      else {
        func_0x0328f170(iVar2,uVar14,
                        *(undefined4 *)(*(int *)(*(int *)(iVar21 + 0x10) + 0x60) + 0x38));
      }
      goto LAB_01ad1c8c;
    }
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01ad2d24 + 0x1ad1e48)) {
            puVar16 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
            goto LAB_01ad1e90;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar9 != 0);
      }
      puVar16 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad2d24 + 0x1ad1e48),0);
LAB_01ad1e90:
      (*(code *)*puVar16)(piVar3,puVar16[1]);
    }
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(param_2 + 0x40);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x03653608(iVar2,**(undefined4 **)(_UNK_01ad2e7c + 0x1ad1ee8));
LAB_01ad1ef4:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01ad2e80 + 0x1ad1f10)) {
          puVar16 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
          goto LAB_01ad1f58;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar9 != 0);
    }
    puVar16 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad2e80 + 0x1ad1f10),0);
LAB_01ad1f58:
    iVar2 = (*(code *)*puVar16)(piVar3,puVar16[1]);
    if (iVar2 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01ad2f6c + 0x1ad1f8c)) {
            puVar16 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
            goto LAB_01ad1fd4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar9 != 0);
      }
      puVar16 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad2f6c + 0x1ad1f8c),0);
LAB_01ad1fd4:
      uVar14 = (*(code *)*puVar16)(piVar3,puVar16[1]);
      iVar2 = *(int *)(param_1 + 0x100);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x14);
      if (*(int *)(*piVar17 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar14 = func_0x02565a88(uVar14,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar2 + 8);
      uVar9 = *(uint *)(iVar2 + 0xc);
      iVar21 = *piVar18;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      if (uVar9 < *(uint *)(iVar8 + 0xc)) {
        *(uint *)(iVar2 + 0xc) = uVar9 + 1;
        *(undefined4 *)(iVar8 + uVar9 * 4 + 0x10) = uVar14;
      }
      else {
        func_0x0328f170(iVar2,uVar14,
                        *(undefined4 *)(*(int *)(*(int *)(iVar21 + 0x10) + 0x60) + 0x38));
      }
      goto LAB_01ad1ef4;
    }
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar17 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar17[-1] == **(int **)(_UNK_01ad2fd8 + 0x1ad20ac)) {
            puVar16 = (undefined4 *)(iVar2 + *piVar17 * 8 + 0xc0);
            goto LAB_01ad20f4;
          }
          uVar9 = uVar9 - 1;
          piVar17 = piVar17 + 2;
        } while (uVar9 != 0);
      }
      puVar16 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad2fd8 + 0x1ad20ac),0);
LAB_01ad20f4:
      (*(code *)*puVar16)(piVar3,puVar16[1]);
    }
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(param_2 + 0x4c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x03653608(iVar2,**(undefined4 **)(_UNK_01ad30c8 + 0x1ad2140));
LAB_01ad214c:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar17[-1] == **(int **)(_UNK_01ad3140 + 0x1ad216c)) {
          puVar16 = (undefined4 *)(iVar2 + *piVar17 * 8 + 0xc0);
          goto LAB_01ad21b4;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar16 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad3140 + 0x1ad216c),0);
LAB_01ad21b4:
    iVar2 = (*(code *)*puVar16)(piVar3,puVar16[1]);
    if (iVar2 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar17 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar17[-1] == **(int **)(_UNK_01ad31cc + 0x1ad21ec)) {
            puVar16 = (undefined4 *)(iVar2 + *piVar17 * 8 + 0xc0);
            goto LAB_01ad2234;
          }
          uVar9 = uVar9 - 1;
          piVar17 = piVar17 + 2;
        } while (uVar9 != 0);
      }
      puVar16 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad31cc + 0x1ad21ec),0);
LAB_01ad2234:
      iVar2 = (*(code *)*puVar16)(piVar3,puVar16[1]);
      uStack_2c = 0;
      uStack_28 = 0;
      iStack_30 = 0;
      if (*(char *)(_UNK_01ad3248 + 0x1ad2258) == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01ad324c + 0x1ad2278));
        *(undefined1 *)(_UNK_01ad3250 + 0x1ad2288) = 1;
      }
      if (iVar2 == 0) {
        uVar9 = 0;
        iVar8 = 0;
      }
      else {
        iVar8 = func_0x0148d698(iVar2,0);
        uVar9 = *(uint *)(iVar2 + 8);
      }
      uVar4 = func_0x01adfe1c(iVar8,uVar9,0x3a,**(undefined4 **)(_UNK_01ad3254 + 0x1ad22bc));
      if ((int)uVar4 < 0) {
        piVar17 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01ad3544 + 0x1ad2550),1);
        if (piVar17 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar2 != 0) &&
           (iVar8 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar17 + 0x20)), iVar8 == 0)) {
          uVar14 = func_0x01384c10();
          func_0x01384aa0(uVar14,0);
        }
        if (piVar17[3] == 0) {
          func_0x01384bf4();
        }
        piVar17[4] = iVar2;
        if (*(int *)(**(int **)(_UNK_01ad35a0 + 0x1ad25b4) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2f28(**(undefined4 **)(_UNK_01ad35a4 + 0x1ad25d0),piVar17,0);
      }
      else {
        iVar21 = **(int **)(_UNK_01ad3258 + 0x1ad22e8);
        if (uVar9 <= uVar4) {
          func_0x0145b368(0);
        }
        if ((*(ushort *)(*(int *)(iVar21 + 0x10) + 0xbd) & 1) == 0) {
          func_0x014001f0();
        }
        uVar13 = uVar9 - (uVar4 + 1);
        iVar21 = iVar8 + (uVar4 + 1) * 2;
        uVar5 = func_0x01adfe1c(iVar21,uVar13,0x3a,**(undefined4 **)(_UNK_01ad325c + 0x1ad2320));
        if ((int)uVar5 < 0) {
          piVar17 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01ad35e4 + 0x1ad25ec),1);
          if (piVar17 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar2 != 0) &&
             (iVar8 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar17 + 0x20)), iVar8 == 0)) {
            uVar14 = func_0x01384c10();
            func_0x01384aa0(uVar14,0);
          }
          if (piVar17[3] == 0) {
            func_0x01384bf4();
          }
          piVar17[4] = iVar2;
          if (*(int *)(**(int **)(_UNK_01ad3614 + 0x1ad2650) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x028c2f28(**(undefined4 **)(_UNK_01ad3618 + 0x1ad266c),piVar17,0);
        }
        else {
          iVar15 = **(int **)(_UNK_01ad3340 + 0x1ad234c);
          if (uVar9 < uVar4) {
            func_0x0145b368(0);
          }
          if ((*(ushort *)(*(int *)(iVar15 + 0x10) + 0xbd) & 1) == 0) {
            func_0x014001f0();
          }
          iVar15 = **(int **)(_UNK_01ad3370 + 0x1ad237c);
          if ((uVar9 <= uVar4) || (uVar13 < uVar5)) {
            func_0x0145b368(0);
          }
          if ((*(ushort *)(*(int *)(iVar15 + 0x10) + 0xbd) & 1) == 0) {
            func_0x014001f0();
          }
          iVar15 = **(int **)(_UNK_01ad33a4 + 0x1ad23b0);
          uVar13 = uVar4 + uVar5 + 2;
          if (uVar9 < uVar13) {
            func_0x0145b368(0);
          }
          if ((*(ushort *)(*(int *)(iVar15 + 0x10) + 0xbd) & 1) == 0) {
            func_0x014001f0();
          }
          iVar15 = func_0x024509d0(iVar8,uVar4,&uStack_2c,0);
          if (iVar15 == 0) {
            piVar17 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01ad3674 + 0x1ad2688),1);
            if (piVar17 == (int *)0x0) {
              func_0x01384bf0();
            }
            if ((iVar2 != 0) &&
               (iVar8 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar17 + 0x20)), iVar8 == 0)) {
              uVar14 = func_0x01384c10();
              func_0x01384aa0(uVar14,0);
            }
            if (piVar17[3] == 0) {
              func_0x01384bf4();
            }
            piVar17[4] = iVar2;
            if (*(int *)(**(int **)(_UNK_01ad36e0 + 0x1ad26ec) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x028c2f28(**(undefined4 **)(_UNK_01ad36e4 + 0x1ad2708),piVar17,0);
          }
          else {
            iVar21 = func_0x024509d0(iVar21,uVar5,&iStack_30,0);
            if (iVar21 == 0) {
              piVar17 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01ad36e8 + 0x1ad2724),1);
              if (piVar17 == (int *)0x0) {
                func_0x01384bf0();
              }
              if ((iVar2 != 0) &&
                 (iVar8 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar17 + 0x20)), iVar8 == 0)) {
                uVar14 = func_0x01384c10();
                func_0x01384aa0(uVar14,0);
              }
              if (piVar17[3] == 0) {
                func_0x01384bf4();
              }
              piVar17[4] = iVar2;
              if (*(int *)(**(int **)(_UNK_01ad3780 + 0x1ad2788) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x028c2f28(**(undefined4 **)(_UNK_01ad3784 + 0x1ad27a4),piVar17,0);
            }
            else {
              iVar8 = func_0x024509d0(iVar8 + uVar13 * 2,uVar9 - uVar13,&uStack_28,0);
              if (iVar8 == 0) {
                piVar17 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01ad37b0 + 0x1ad27c0),1);
                if (piVar17 == (int *)0x0) {
                  func_0x01384bf0();
                }
                if ((iVar2 != 0) &&
                   (iVar8 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar17 + 0x20)), iVar8 == 0)) {
                  uVar14 = func_0x01384c10();
                  func_0x01384aa0(uVar14,0);
                }
                if (piVar17[3] == 0) {
                  func_0x01384bf4();
                }
                piVar17[4] = iVar2;
                if (*(int *)(**(int **)(_UNK_01ad380c + 0x1ad2824) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                func_0x028c2f28(**(undefined4 **)(_UNK_01ad3810 + 0x1ad2840),piVar17,0);
              }
              else {
                if (param_3 != 0) {
                  (**(code **)(param_3 + 0xc))
                            (&uStack_80,*(undefined4 *)(param_3 + 0x20),uStack_28,
                             *(undefined4 *)(param_3 + 0x14));
                }
                uVar14 = uStack_28;
                uVar9 = uStack_2c;
                iVar8 = *(int *)(param_1 + 0x100);
                iVar2 = iVar8;
                if (iVar8 == 0) {
                  func_0x01384bf0();
                  iVar2 = *(int *)(param_1 + 0x100);
                }
                iVar21 = iStack_30;
                uVar4 = *(int *)(iVar8 + 8) - 1;
                uVar4 = uVar4 & ~((int)uVar4 >> 0x1f);
                if ((int)uVar9 <= (int)uVar4) {
                  uVar4 = uVar9;
                }
                if ((int)uVar9 < 0) {
                  uVar4 = 0;
                }
                iVar8 = iVar2;
                if (iVar2 == 0) {
                  func_0x01384bf0();
                  iVar8 = *(int *)(param_1 + 0x100);
                }
                iVar2 = *(int *)(iVar2 + 0xc) + -1;
                if (iVar21 <= iVar2) {
                  iVar2 = iVar21;
                }
                if (iVar21 < 0) {
                  iVar2 = 0;
                }
                if (iVar8 == 0) {
                  func_0x01384bf0();
                }
                iVar8 = *(int *)(iVar8 + 0x28);
                if (iVar8 == 0) {
                  func_0x01384bf0();
                }
                iVar21 = *(int *)(iVar8 + 8);
                uVar9 = *(uint *)(iVar8 + 0xc);
                piVar17 = *(int **)(_UNK_01ad3500 + 0x1ad250c);
                *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
                iVar15 = *piVar17;
                if (iVar21 == 0) {
                  func_0x01384bf0();
                }
                if (uVar9 < *(uint *)(iVar21 + 0xc)) {
                  *(uint *)(iVar8 + 0xc) = uVar9 + 1;
                  iVar21 = iVar21 + uVar9 * 0xc;
                  *(undefined4 *)(iVar21 + 0x10) = uVar14;
                  *(uint *)(iVar21 + 0x14) = uVar4;
                  *(int *)(iVar21 + 0x18) = iVar2;
                }
                else {
                  func_0x0331f86c(iVar8,uVar14,uVar4,iVar2,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
                }
              }
            }
          }
        }
      }
      goto LAB_01ad214c;
    }
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar17 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar17[-1] == **(int **)(_UNK_01ad3878 + 0x1ad28b4)) {
            puVar16 = (undefined4 *)(iVar2 + *piVar17 * 8 + 0xc0);
            goto LAB_01ad298c;
          }
          uVar9 = uVar9 - 1;
          piVar17 = piVar17 + 2;
        } while (uVar9 != 0);
      }
      puVar16 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad3878 + 0x1ad28b4),0);
LAB_01ad298c:
      (*(code *)*puVar16)(piVar3,puVar16[1]);
    }
    iVar2 = *(int *)(param_1 + 0x100);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x34);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x024509cc(iVar2,**(undefined4 **)(_UNK_01ad3914 + 0x1ad29e8));
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(param_2 + 0x28);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x03653608(iVar2,**(undefined4 **)(_UNK_01ad3918 + 0x1ad2a1c));
LAB_01ad2a30:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar9 != 0) {
      piVar17 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar17[-1] == **(int **)(_UNK_01ad391c + 0x1ad2a4c)) {
          puVar16 = (undefined4 *)(iVar2 + *piVar17 * 8 + 0xc0);
          goto LAB_01ad2a94;
        }
        uVar9 = uVar9 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar9 != 0);
    }
    puVar16 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad391c + 0x1ad2a4c),0);
LAB_01ad2a94:
    iVar2 = (*(code *)*puVar16)(piVar3,puVar16[1]);
    if (iVar2 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar17 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar17[-1] == **(int **)(_UNK_01ad3924 + 0x1ad2ac8)) {
            puVar16 = (undefined4 *)(iVar2 + *piVar17 * 8 + 0xc0);
            goto LAB_01ad2b18;
          }
          uVar9 = uVar9 - 1;
          piVar17 = piVar17 + 2;
        } while (uVar9 != 0);
      }
      puVar16 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad3924 + 0x1ad2ac8),0);
LAB_01ad2b18:
      iVar2 = (*(code *)*puVar16)(piVar3,puVar16[1]);
      if (*(char *)(_UNK_01ad3928 + 0x1ad2b38) == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01ad392c + 0x1ad2b4c));
        *(undefined1 *)(_UNK_01ad3930 + 0x1ad2b5c) = 1;
      }
      if (iVar2 == 0) {
        uVar9 = 0;
        iVar8 = 0;
      }
      else {
        iVar8 = func_0x0148d698(iVar2,0);
        uVar9 = *(uint *)(iVar2 + 8);
      }
      uVar4 = func_0x01adfe1c(iVar8,uVar9,0x3a,**(undefined4 **)(_UNK_01ad3934 + 0x1ad2ba4));
      iStack_38 = 0;
      iStack_34 = 0;
      if (-1 < (int)uVar4) {
        iVar2 = **(int **)(_UNK_01ad3938 + 0x1ad2bd8);
        if (uVar9 < uVar4) {
          func_0x0145b368(0);
        }
        if ((*(ushort *)(*(int *)(iVar2 + 0x10) + 0xbd) & 1) == 0) {
          func_0x014001f0();
        }
        func_0x024509d0(iVar8,uVar4,&iStack_34,0);
        iVar2 = **(int **)(_UNK_01ad393c + 0x1ad2c1c);
        if (uVar9 <= uVar4) {
          func_0x0145b368(0);
        }
        if ((*(ushort *)(*(int *)(iVar2 + 0x10) + 0xbd) & 1) == 0) {
          func_0x014001f0();
        }
        func_0x024509d0(iVar8 + (uVar4 + 1) * 2,uVar9 - (uVar4 + 1),&iStack_38,0);
        iVar2 = iStack_34;
        if (0 < iStack_34) {
          iVar2 = iStack_38;
          iVar8 = iStack_38;
        }
        if (0 < iVar2) {
          iVar2 = *(int *)(param_1 + 0x100);
          if (iVar2 == 0) {
            func_0x01384bf0();
            iVar8 = iStack_38;
          }
          iVar21 = iStack_34;
          iVar2 = *(int *)(iVar2 + 0x34);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x0245025c(iVar2,iVar21,iVar8,**(undefined4 **)(_UNK_01ad3940 + 0x1ad2ca0));
        }
      }
      goto LAB_01ad2a30;
    }
    puVar16 = *(undefined4 **)(_UNK_01ad3944 + 0x1ad2cd0);
    puVar20 = *(undefined4 **)(_UNK_01ad3948 + 0x1ad2cd8);
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar17 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar17[-1] == **(int **)(_UNK_01ad394c + 0x1ad2ce8)) {
            puVar6 = (undefined4 *)(iVar2 + *piVar17 * 8 + 0xc0);
            goto LAB_01ad2d34;
          }
          uVar9 = uVar9 - 1;
          piVar17 = piVar17 + 2;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad394c + 0x1ad2ce8),0);
LAB_01ad2d34:
      (*(code *)*puVar6)(piVar3,puVar6[1]);
    }
    iVar2 = *(int *)(param_1 + 0x100);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x38);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x024509cc(iVar2,*puVar16);
    iVar2 = *(int *)(param_1 + 0x100);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x34);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02450594(iVar2,**(undefined4 **)(_UNK_01ad3950 + 0x1ad2dc0));
    if (0 < iVar2) {
      iVar2 = *(int *)(param_1 + 0x100);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x34);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x02450598(&uStack_80,iVar2,**(undefined4 **)(_UNK_01ad3954 + 0x1ad2e04));
      uStack_50 = uStack_80;
      uStack_4c = uStack_7c;
      uStack_48 = uStack_78;
      uStack_44 = uStack_74;
      uStack_40 = uStack_70;
      puVar16 = *(undefined4 **)(_UNK_01ad3958 + 0x1ad2e30);
      while (iVar2 = func_0x01475638(&uStack_50,*puVar16), uVar14 = uStack_44, iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 0x100);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x38);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0245025c(iVar2,uVar14,0,*puVar20);
      }
      func_0x0245059c(&uStack_50,**(undefined4 **)(_UNK_01ad3960 + 0x1ad2e90));
      iVar2 = *(int *)(param_1 + 0x100);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x28);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x03320714(&uStack_80,iVar2,**(undefined4 **)(_UNK_01ad396c + 0x1ad2ecc));
      uStack_68 = uStack_80;
      uStack_64 = uStack_7c;
      uStack_60 = uStack_78;
      uStack_5c = uStack_74;
      uStack_58 = uStack_70;
      puVar16 = *(undefined4 **)(_UNK_01ad3970 + 0x1ad2ef4);
      puVar6 = *(undefined4 **)(_UNK_01ad3974 + 0x1ad2efc);
      puVar19 = *(undefined4 **)(_UNK_01ad3978 + 0x1ad2f04);
      while (iVar2 = func_0x01472198(&uStack_68,*puVar16), uVar14 = uStack_5c, iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 0x100);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x34);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x02450998(iVar2,uVar14,*puVar6);
        if (iVar2 != 0) {
          iVar2 = *(int *)(param_1 + 0x100);
          if (iVar2 == 0) {
            func_0x01384bf0();
            iVar8 = iRam00000038;
            iVar2 = *(int *)(param_1 + 0x100);
            if (iVar2 == 0) {
              iVar2 = 0;
              func_0x01384bf0();
            }
          }
          else {
            iVar8 = *(int *)(iVar2 + 0x38);
          }
          iVar2 = *(int *)(iVar2 + 0x38);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x0245099c(iVar2,uVar14,*puVar19);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          func_0x0245025c(iVar8,uVar14,iVar2 + 1,*puVar20);
        }
      }
      func_0x024509e0(&uStack_68,**(undefined4 **)(_UNK_01ad3980 + 0x1ad2fe8));
    }
    iVar2 = *(int *)(param_1 + 0x100);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x30);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(param_2 + 0x20);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_01ad3988 + 0x1ad3054));
    piVar17 = *(int **)(_UNK_01ad398c + 0x1ad306c);
    piVar18 = *(int **)(_UNK_01ad3990 + 0x1ad3074);
LAB_01ad3070:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01ad3998 + 0x1ad308c)) {
          puVar16 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
          goto LAB_01ad30d8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar9 != 0);
    }
    puVar16 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad3998 + 0x1ad308c),0);
LAB_01ad30d8:
    iVar2 = (*(code *)*puVar16)(piVar3,puVar16[1]);
    if (iVar2 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar10[-1] == *piVar17) {
            puVar16 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
            goto LAB_01ad3150;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar9 != 0);
      }
      puVar16 = (undefined4 *)func_0x014002dc(piVar3,*piVar17,0);
LAB_01ad3150:
      uVar14 = (*(code *)*puVar16)(piVar3,puVar16[1]);
      iVar2 = *(int *)(param_1 + 0x100);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x30);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar2 + 8);
      uVar9 = *(uint *)(iVar2 + 0xc);
      iVar21 = *piVar18;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      if (uVar9 < *(uint *)(iVar8 + 0xc)) {
        *(uint *)(iVar2 + 0xc) = uVar9 + 1;
        *(undefined4 *)(iVar8 + uVar9 * 4 + 0x10) = uVar14;
      }
      else {
        func_0x0325970c(iVar2,uVar14,
                        *(undefined4 *)(*(int *)(*(int *)(iVar21 + 0x10) + 0x60) + 0x38));
      }
      goto LAB_01ad3070;
    }
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar17 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar17[-1] == **(int **)(_UNK_01ad399c + 0x1ad320c)) {
            puVar16 = (undefined4 *)(iVar2 + *piVar17 * 8 + 0xc0);
            goto LAB_01ad326c;
          }
          uVar9 = uVar9 - 1;
          piVar17 = piVar17 + 2;
        } while (uVar9 != 0);
      }
      puVar16 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ad399c + 0x1ad320c),0);
LAB_01ad326c:
      (*(code *)*puVar16)(piVar3,puVar16[1]);
    }
    puVar16 = *(undefined4 **)(_UNK_01ad39a0 + 0x1ad32a0);
    iVar2 = *(int *)(param_1 + 0x104);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x024509cc(iVar2,*puVar16);
    iVar2 = *(int *)(param_1 + 0x108);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x024509cc(iVar2,*puVar16);
    *(undefined4 *)(param_1 + 0x10c) = 0;
    uVar9 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x110);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar2 + 0xc) <= uVar9) {
        func_0x01384bf4();
      }
      iVar8 = uVar9 * 4;
      uVar9 = uVar9 + 1;
      *(undefined4 *)(iVar2 + iVar8 + 0x10) = 0;
    } while (uVar9 != 6);
  }
  else {
    iVar2 = func_0x0229f13c(0x8656,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar2,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard.MonopolyBoardData$$.ctor RVA 0x1ac39a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad39a8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  pcVar4 = (char *)(_UNK_01ad3b00 + 0x1ad39bc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad3b04 + 0x1ad39d0));
    func_0x01384978(*(undefined4 *)(_UNK_01ad3b08 + 0x1ad39dc));
    func_0x01384978(*(undefined4 *)(_UNK_01ad3b0c + 0x1ad39e8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad3b10 + 0x1ad39f4));
    func_0x01384978(*(undefined4 *)(_UNK_01ad3b14 + 0x1ad3a00));
    func_0x01384978(*(undefined4 *)(_UNK_01ad3b18 + 0x1ad3a0c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad3b1c + 0x1ad3a18));
    func_0x01384978(*(undefined4 *)(_UNK_01ad3b20 + 0x1ad3a24));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ad3b24 + 0x1ad3a38));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01ad3b28 + 0x1ad3a4c));
  puVar2 = *(undefined4 **)(_UNK_01ad3b2c + 0x1ad3a60);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0331efa0(uVar1,**(undefined4 **)(_UNK_01ad3b30 + 0x1ad3a78));
  puVar2 = *(undefined4 **)(_UNK_01ad3b34 + 0x1ad3a8c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03258eb8(uVar1,**(undefined4 **)(_UNK_01ad3b38 + 0x1ad3aa4));
  puVar2 = *(undefined4 **)(_UNK_01ad3b3c + 0x1ad3ab8);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  puVar5 = *(undefined4 **)(_UNK_01ad3b40 + 0x1ad3ad0);
  func_0x024509b4(uVar1,*puVar5);
  uVar3 = *puVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x024509b4(uVar1,*puVar5);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityMonopolyBoard$$GetDiceResult RVA 0x1ac3b44 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x01ad4838: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01ad483c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01ad3b44(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  int iVar3;
  undefined4 uVar4;
  char *unaff_r4;
  uint uVar5;
  uint uVar6;
  int unaff_r5;
  char *pcVar7;
  undefined4 *unaff_r6;
  int iVar8;
  undefined4 uVar9;
  uint unaff_r7;
  int iVar10;
  undefined4 *puVar11;
  undefined4 unaff_r8;
  int iVar12;
  int *piVar13;
  undefined4 unaff_lr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iVar1 = func_0x0229f06c(0x8689,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8689,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_0217493c:
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
    *(uint *)((int)register0x00000054 + -0xc) = unaff_r7;
    *(undefined4 **)((int)register0x00000054 + -0x10) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
    *(char **)((int)register0x00000054 + -0x18) = unaff_r4;
    *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)register0x00000054 + -0x24) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
    func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
    iVar3 = *(int *)(iVar1 + 0x10);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
    func_0x0245495c(iVar3,uVar9,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
    iVar1 = func_0x0245498c((undefined1 *)((int)register0x00000054 + -0x30),0,0);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar1 + 0x2c) != '\0') {
    pcVar7 = (char *)(_UNK_01ad3d00 + 0x1ad3c00);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01ad3d04 + 0x1ad3c14));
      func_0x01384978(*(undefined4 *)(_UNK_01ad3d08 + 0x1ad3c20));
      *pcVar7 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x868a,0);
    if (iVar1 == 0) {
      iVar3 = *(int *)(param_1 + 0x100);
      iVar1 = iVar3;
      if (iVar3 == 0) {
        func_0x01384bf0();
        iVar1 = *(int *)(param_1 + 0x100);
        if (iVar1 == 0) {
          func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      iVar10 = *(int *)(iVar1 + 0x30);
      uVar9 = *(undefined4 *)(param_1 + 0xfc);
      iVar1 = *(int *)(iVar3 + 0x30);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      uVar4 = *(undefined4 *)(iVar10 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01458344(uVar9,uVar4);
      iVar1 = func_0x03259410(iVar1,extraout_r1,**(undefined4 **)(_UNK_01ad3d0c + 0x1ad3ccc));
      *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
      if (iVar1 < 1) {
        return 1;
      }
      if (5 < iVar1) {
        iVar1 = 6;
      }
      return iVar1;
    }
    iVar1 = func_0x0229f13c(0x868a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_0217493c;
  }
  iVar1 = *(int *)(param_1 + 0x10c);
  if (0 < iVar1) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
    return iVar1;
  }
  iVar1 = func_0x01ad3d10(param_1);
  if (0 < iVar1) {
    return iVar1;
  }
  unaff_r4 = (char *)(_UNK_01ad4cf4 + 0x1ad4788);
  if (*unaff_r4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad4cf8 + 0x1ad479c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad4cfc + 0x1ad47a8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad4d00 + 0x1ad47b4));
    func_0x01384978(*(undefined4 *)(_UNK_01ad4d04 + 0x1ad47c0));
    func_0x01384978(*(undefined4 *)(_UNK_01ad4d08 + 0x1ad47cc));
    func_0x01384978(*(undefined4 *)(_UNK_01ad4d0c + 0x1ad47d8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad4d10 + 0x1ad47e4));
    *unaff_r4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  unaff_r6 = &uStack_38;
  unaff_r7 = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x868f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x868f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1ad483c;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)&uStack_48;
    goto SUB_0217493c;
  }
  iVar1 = func_0x01384a00(**(undefined4 **)(_UNK_01ad4d14 + 0x1ad4854),6);
  iVar3 = iVar1 + 0x10;
  do {
    iVar10 = *(int *)(param_1 + 0xf8);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar10 + 0xc) <= unaff_r7) {
      func_0x01384bf4();
    }
    uVar9 = *(undefined4 *)(iVar10 + unaff_r7 * 4 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar1 + 0xc) <= unaff_r7) {
      func_0x01384bf4();
    }
    *(undefined4 *)(iVar3 + unaff_r7 * 4) = uVar9;
    unaff_r7 = unaff_r7 + 1;
  } while (unaff_r7 != 6);
  iVar10 = 0;
  uVar5 = 0;
  do {
    if (*(uint *)(iVar1 + 0xc) <= uVar5) {
      func_0x01384bf4();
    }
    iVar8 = uVar5 * 4;
    uVar5 = uVar5 + 1;
    iVar10 = *(int *)(iVar3 + iVar8) + iVar10;
  } while (uVar5 != 6);
  if (0 < iVar10) goto LAB_01ad4bf0;
  iVar10 = *(int *)(param_1 + 0x100);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
LAB_01ad4a58:
    uVar5 = 0;
    do {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar5) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar3 + uVar5 * 4) = 3;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 6);
  }
  else {
    iVar10 = *(int *)(param_1 + 0x100);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar10 + 0x30);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar10 + 0xc) < 1) goto LAB_01ad4a58;
    uVar5 = 0;
    do {
      if (*(uint *)(iVar1 + 0xc) <= uVar5) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar3 + uVar5 * 4) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 6);
    iVar10 = *(int *)(param_1 + 0x100);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar10 + 0x30);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    func_0x0325a3b4(&uStack_48,iVar10,**(undefined4 **)(_UNK_01ad4d18 + 0x1ad498c));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar11 = *(undefined4 **)(_UNK_01ad4d1c + 0x1ad49a8);
    while (iVar10 = func_0x01470118(unaff_r6,*puVar11), iVar10 != 0) {
      uVar5 = iStack_2c - 1;
      if (uVar5 < 6) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar5) {
          func_0x01384bf4();
        }
        iVar10 = iVar1 + uVar5 * 4;
        *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
      }
    }
    func_0x02450828(&uStack_38,**(undefined4 **)(_UNK_01ad4d20 + 0x1ad4a04));
  }
  uVar5 = 0;
  piVar13 = *(int **)(_UNK_01ad4d24 + 0x1ad4aa0);
  do {
    iVar10 = *(int *)(param_1 + 0x110);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar10 + 0xc) <= uVar5) {
      func_0x01384bf4();
    }
    if (0 < *(int *)(iVar10 + uVar5 * 4 + 0x10)) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar5) {
        func_0x01384bf4();
      }
      iVar10 = *(int *)(iVar3 + uVar5 * 4);
      iVar8 = *(int *)(param_1 + 0x110);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar8 + 0xc) <= uVar5) {
        func_0x01384bf4();
      }
      iVar8 = *(int *)(iVar8 + uVar5 * 4 + 0x10);
      if (*(int *)(*piVar13 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar9 = func_0x0148ab08(0,iVar10 - iVar8,0);
      if (*(uint *)(iVar1 + 0xc) <= uVar5) {
        func_0x01384bf4();
      }
      iVar10 = *(int *)(param_1 + 0x110);
      *(undefined4 *)(iVar3 + uVar5 * 4) = uVar9;
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar10 + 0xc) <= uVar5) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar10 + uVar5 * 4 + 0x10) = 0;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 != 6);
  iVar10 = 0;
  uVar5 = 0;
  do {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar5) {
      func_0x01384bf4();
    }
    iVar8 = uVar5 * 4;
    uVar5 = uVar5 + 1;
    iVar10 = *(int *)(iVar3 + iVar8) + iVar10;
  } while (uVar5 != 6);
  if (iVar10 < 1) {
    uVar5 = 0;
    do {
      if (*(uint *)(iVar1 + 0xc) <= uVar5) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar3 + uVar5 * 4) = 3;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 6);
    iVar10 = 0x12;
  }
LAB_01ad4bf0:
  iVar12 = 1;
  iVar8 = 0;
  iVar10 = func_0x02450284(1,iVar10 + 1,0);
  piVar13 = (int *)(iVar1 + 0xc);
  uVar5 = 0xffffffff;
  do {
    uVar6 = uVar5;
    if (uVar6 == 5) goto LAB_01ad4c60;
    uVar5 = uVar6 + 1;
    if (*(uint *)(iVar1 + 0xc) <= uVar5) {
      func_0x01384bf4();
    }
    piVar13 = piVar13 + 1;
    iVar2 = *piVar13;
    iVar8 = iVar2 + iVar8;
  } while (iVar8 < iVar10);
  if (*(uint *)(iVar1 + 0xc) <= uVar5) {
    func_0x01384bf4();
    iVar2 = *piVar13;
  }
  iVar12 = uVar6 + 2;
  *piVar13 = iVar2 + -1;
LAB_01ad4c60:
  uVar5 = 0;
  do {
    iVar10 = *(int *)(param_1 + 0xf8);
    if (*(uint *)(iVar1 + 0xc) <= uVar5) {
      func_0x01384bf4();
    }
    uVar9 = *(undefined4 *)(iVar3 + uVar5 * 4);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar10 + 0xc) <= uVar5) {
      func_0x01384bf4();
    }
    iVar8 = uVar5 * 4;
    uVar5 = uVar5 + 1;
    *(undefined4 *)(iVar10 + iVar8 + 0x10) = uVar9;
  } while (uVar5 != 6);
  return iVar12;
}



// ===== FAT.ActivityMonopolyBoard$$GetFixRouteResult RVA 0x1ac3bec =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01ad3bec(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  pcVar3 = (char *)(_UNK_01ad3d00 + 0x1ad3c00);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad3d04 + 0x1ad3c14));
    func_0x01384978(*(undefined4 *)(_UNK_01ad3d08 + 0x1ad3c20));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x868a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x868a,0);
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
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  iVar4 = *(int *)(param_1 + 0x100);
  iVar1 = iVar4;
  if (iVar4 == 0) {
    func_0x01384bf0();
    iVar1 = *(int *)(param_1 + 0x100);
    if (iVar1 == 0) {
      func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar6 = *(int *)(iVar1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0xfc);
  iVar1 = *(int *)(iVar4 + 0x30);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(iVar6 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01458344(uVar5,uVar2);
  iVar1 = func_0x03259410(iVar1,extraout_r1,**(undefined4 **)(_UNK_01ad3d0c + 0x1ad3ccc));
  *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
  if (0 < iVar1) {
    if (5 < iVar1) {
      iVar1 = 6;
    }
    return iVar1;
  }
  return 1;
}



// ===== FAT.ActivityMonopolyBoard$$TryGetForcedDiceForGuarantee RVA 0x1ac3d10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_01ad3d10(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar8 = (char *)(_UNK_01ad46b0 + 0x1ad3d28);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad46b4 + 0x1ad3d3c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad46b8 + 0x1ad3d48));
    func_0x01384978(*(undefined4 *)(_UNK_01ad46bc + 0x1ad3d54));
    func_0x01384978(*(undefined4 *)(_UNK_01ad46c0 + 0x1ad3d60));
    func_0x01384978(*(undefined4 *)(_UNK_01ad46c4 + 0x1ad3d6c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad46c8 + 0x1ad3d78));
    func_0x01384978(*(undefined4 *)(_UNK_01ad46cc + 0x1ad3d84));
    func_0x01384978(*(undefined4 *)(_UNK_01ad46d0 + 0x1ad3d90));
    func_0x01384978(*(undefined4 *)(_UNK_01ad46d4 + 0x1ad3d9c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad46d8 + 0x1ad3da8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad46dc + 0x1ad3db4));
    func_0x01384978(*(undefined4 *)(_UNK_01ad46e0 + 0x1ad3dc0));
    func_0x01384978(*(undefined4 *)(_UNK_01ad46e4 + 0x1ad3dcc));
    func_0x01384978(*(undefined4 *)(_UNK_01ad46e8 + 0x1ad3dd8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad46ec + 0x1ad3de4));
    func_0x01384978(*(undefined4 *)(_UNK_01ad46f0 + 0x1ad3df0));
    func_0x01384978(*(undefined4 *)(_UNK_01ad46f4 + 0x1ad3dfc));
    func_0x01384978(*(undefined4 *)(_UNK_01ad46f8 + 0x1ad3e08));
    func_0x01384978(*(undefined4 *)(_UNK_01ad46fc + 0x1ad3e14));
    func_0x01384978(*(undefined4 *)(_UNK_01ad4700 + 0x1ad3e20));
    func_0x01384978(*(undefined4 *)(_UNK_01ad4704 + 0x1ad3e2c));
    *pcVar8 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_78 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  iStack_44 = 0;
  iStack_48 = 0;
  iStack_4c = 0;
  iVar1 = func_0x0229f06c(0x868b,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x100);
    if ((((iVar1 != 0) && (0 < *(int *)(iVar1 + 0x10))) && (*(int *)(iVar1 + 0x34) != 0)) &&
       (iVar1 = func_0x02450594(*(int *)(iVar1 + 0x34),**(undefined4 **)(_UNK_01ad4708 + 0x1ad3ed4))
       , iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x100);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02450598(&uStack_68,iVar1,**(undefined4 **)(_UNK_01ad470c + 0x1ad3f18));
      uStack_40 = uStack_68;
      uStack_3c = uStack_64;
      uStack_38 = uStack_60;
      uStack_34 = uStack_5c;
      uStack_78 = 0;
      uStack_30 = uStack_58;
      uStack_7c = 0x7fffffff;
      while (iVar1 = func_0x01475638(&uStack_40,**(undefined4 **)(_UNK_01ad471c + 0x1ad3f5c)),
            uVar14 = uStack_34, iVar1 != 0) {
        iVar6 = *(int *)(param_1 + 0x100);
        iVar1 = (int)uStack_30;
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar6 + 0x38);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x02450590(iVar6,uVar14,&iStack_44,**(undefined4 **)(_UNK_01ad4710 + 0x1ad3fa4)
                               );
        if ((0 < iStack_44) && (iVar6 == 1)) {
          iVar6 = *(int *)(param_1 + 0x100);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar4 = iStack_44;
          iVar11 = *(int *)(param_1 + 0x104);
          iVar6 = *(int *)(iVar6 + 0x10);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x02450590(iVar11,uVar14,&iStack_48,
                                  **(undefined4 **)(_UNK_01ad4714 + 0x1ad3ffc));
          iVar12 = *(int *)(param_1 + 0x108);
          iVar11 = iStack_48;
          if (iVar2 == 0) {
            iVar11 = 0;
          }
          if (iVar12 == 0) {
            func_0x01384bf0();
          }
          iVar12 = func_0x02450590(iVar12,uVar14,&iStack_4c,
                                   **(undefined4 **)(_UNK_01ad4718 + 0x1ad4034));
          iVar2 = iStack_4c;
          if (iVar12 == 0) {
            iVar2 = 0;
          }
          iVar12 = func_0x01ad4d30(param_1,uVar14);
          func_0x01ad4e78(&uStack_68,param_1,uVar14);
          if (((iVar11 < iVar1) && ((iVar4 * iVar6 - iVar2) - iVar12 < iVar1 - iVar11)) &&
             (uVar3 = func_0x01ad5100(param_1,uVar14), 0 < (int)uVar3 && (int)uVar3 < (int)uStack_7c
             )) {
            uStack_7c = uVar3;
            uStack_78 = uVar3;
          }
        }
      }
      func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01ad4720 + 0x1ad40e0));
      if ((int)uStack_78 < 1) {
        uStack_78 = 0;
      }
      else {
        iVar1 = func_0x01384a00(**(undefined4 **)(_UNK_01ad472c + 0x1ad4104),6);
        uVar3 = 0;
        do {
          iVar6 = *(int *)(param_1 + 0xf8);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          if (*(uint *)(iVar6 + 0xc) <= uVar3) {
            func_0x01384bf4();
          }
          uVar14 = *(undefined4 *)(iVar6 + uVar3 * 4 + 0x10);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar3) {
            func_0x01384bf4();
          }
          *(undefined4 *)(iVar1 + 0x10 + uVar3 * 4) = uVar14;
          uVar3 = uVar3 + 1;
        } while (uVar3 != 6);
        iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ad4730 + 0x1ad4174));
        func_0x024509e4(iVar6,**(undefined4 **)(_UNK_01ad4734 + 0x1ad4184));
        iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01ad4738 + 0x1ad4198));
        func_0x0244f8a8(iVar4,**(undefined4 **)(_UNK_01ad473c + 0x1ad41ac));
        uVar3 = uStack_78 - 1;
        if (uVar3 < 6) {
          if (*(uint *)(iVar1 + 0xc) <= uVar3) {
            func_0x01384bf4();
          }
          if (0 < *(int *)(iVar1 + uVar3 * 4 + 0x10)) {
            uStack_68 = uStack_78;
            uVar14 = func_0x01384abc(**(undefined4 **)(_UNK_01ad4740 + 0x1ad41f4),&uStack_68);
            uVar14 = func_0x0244f6a0(**(undefined4 **)(_UNK_01ad4744 + 0x1ad4210),uVar14,0);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            iVar11 = func_0x0244f8b0(iVar4,uVar14,**(undefined4 **)(_UNK_01ad4748 + 0x1ad4234));
            if (iVar11 != 0) {
              uStack_64 = 0;
              uStack_68 = 0;
              uStack_60 = 0;
              func_0x03922868(&uStack_68,uStack_78,0,1,**(undefined4 **)(_UNK_01ad474c + 0x1ad425c))
              ;
              if (iVar6 == 0) {
                func_0x01384bf0();
              }
              uVar15 = uStack_60;
              uVar14 = uStack_64;
              uVar7 = uStack_68;
              iVar11 = *(int *)(iVar6 + 8);
              uVar9 = *(uint *)(iVar6 + 0xc);
              iVar2 = **(int **)(_UNK_01ad4750 + 0x1ad42a8);
              *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              if (uVar9 < *(uint *)(iVar11 + 0xc)) {
                *(uint *)(iVar6 + 0xc) = uVar9 + 1;
                iVar11 = iVar11 + uVar9 * 0xc;
                *(uint *)(iVar11 + 0x10) = uVar7;
                *(undefined4 *)(iVar11 + 0x14) = uVar14;
                *(uint *)(iVar11 + 0x18) = uVar15;
              }
              else {
                func_0x024509e8(iVar6,uVar7,uVar14,uVar15,
                                *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
              }
            }
          }
        }
        uVar15 = uStack_78 - 2;
        puVar13 = *(undefined4 **)(_UNK_01ad4754 + 0x1ad4344);
        uVar7 = 0;
        do {
          uVar9 = uVar7 + 1;
          if (uVar15 < 6) {
            uVar16 = uVar15 + 1;
            if (uVar16 == uVar9) {
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              if (*(uint *)(iVar1 + 0xc) <= uVar7) {
                func_0x01384bf4();
              }
              if (1 < *(int *)(iVar1 + uVar7 * 4 + 0x10)) {
LAB_01ad43ec:
                uStack_68 = uVar16;
                if ((int)uVar9 < (int)uVar16) {
                  uStack_68 = uVar9;
                }
                uVar7 = uVar16;
                if ((int)uVar16 < (int)uVar9) {
                  uVar7 = uVar9;
                }
                uVar14 = func_0x01384abc(*puVar13,&uStack_68);
                uStack_6c = uVar7;
                uVar5 = func_0x01384abc(*puVar13,&uStack_6c);
                uVar14 = func_0x0244f690(**(undefined4 **)(_UNK_01ad4758 + 0x1ad443c),uVar14,uVar5,0
                                        );
                if (iVar4 == 0) {
                  func_0x01384bf0();
                }
                iVar11 = func_0x0244f8b0(iVar4,uVar14,**(undefined4 **)(_UNK_01ad475c + 0x1ad4460));
                if (iVar11 != 0) {
                  uStack_64 = 0;
                  uStack_68 = 0;
                  uStack_60 = 0;
                  func_0x03922868(&uStack_68,uVar9,uVar16,0,
                                  **(undefined4 **)(_UNK_01ad4760 + 0x1ad4488));
                  if (iVar6 == 0) {
                    func_0x01384bf0();
                  }
                  uVar16 = uStack_60;
                  uVar14 = uStack_64;
                  uVar7 = uStack_68;
                  iVar11 = *(int *)(iVar6 + 8);
                  uVar10 = *(uint *)(iVar6 + 0xc);
                  iVar2 = **(int **)(_UNK_01ad4764 + 0x1ad44d8);
                  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
                  if (iVar11 == 0) {
                    func_0x01384bf0();
                  }
                  if (uVar10 < *(uint *)(iVar11 + 0xc)) {
                    *(uint *)(iVar6 + 0xc) = uVar10 + 1;
                    iVar11 = iVar11 + uVar10 * 0xc;
                    *(uint *)(iVar11 + 0x10) = uVar7;
                    *(undefined4 *)(iVar11 + 0x14) = uVar14;
                    *(uint *)(iVar11 + 0x18) = uVar16;
                  }
                  else {
                    func_0x024509e8(iVar6,uVar7,uVar14,uVar16,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                  puVar13 = *(undefined4 **)(_UNK_01ad4768 + 0x1ad4554);
                }
              }
            }
            else {
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              if (*(uint *)(iVar1 + 0xc) <= uVar7) {
                func_0x01384bf4();
              }
              if (0 < *(int *)(iVar1 + uVar7 * 4 + 0x10)) {
                if (*(uint *)(iVar1 + 0xc) <= uVar15) {
                  func_0x01384bf4();
                }
                if (0 < *(int *)(iVar1 + uStack_78 * 4 + 8 + uVar7 * -4)) goto LAB_01ad43ec;
              }
            }
          }
          uVar15 = uVar15 - 1;
          uVar7 = uVar9;
        } while (uVar9 != 6);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar6 + 0xc) < 1) {
          iVar1 = *(int *)(param_1 + 0x110);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (*(uint *)(iVar1 + 0xc) <= uVar3) {
            func_0x01384bf4();
          }
          iVar1 = iVar1 + uVar3 * 4;
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        }
        else {
          uVar14 = func_0x02450284(0,*(int *)(iVar6 + 0xc),0);
          func_0x024509ec(&uStack_68,iVar6,uVar14,**(undefined4 **)(_UNK_01ad476c + 0x1ad45a4));
          uStack_78 = uStack_68;
          if ((uStack_60 & 1) == 0) {
            *(undefined4 *)(param_1 + 0x10c) = uStack_64;
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x868b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_78 = func_0x0217493c(iVar1,param_1,0);
  }
  return uStack_78;
}



// ===== FAT.ActivityMonopolyBoard$$GetRandomRouteResult RVA 0x1ac4770 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01ad4770(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar3 = (char *)(_UNK_01ad4cf4 + 0x1ad4788);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad4cf8 + 0x1ad479c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad4cfc + 0x1ad47a8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad4d00 + 0x1ad47b4));
    func_0x01384978(*(undefined4 *)(_UNK_01ad4d04 + 0x1ad47c0));
    func_0x01384978(*(undefined4 *)(_UNK_01ad4d08 + 0x1ad47cc));
    func_0x01384978(*(undefined4 *)(_UNK_01ad4d0c + 0x1ad47d8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad4d10 + 0x1ad47e4));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar8 = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x868f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x868f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0217493c(iVar1,param_1,0);
    return iVar1;
  }
  iVar1 = func_0x01384a00(**(undefined4 **)(_UNK_01ad4d14 + 0x1ad4854),6);
  iVar12 = iVar1 + 0x10;
  do {
    iVar4 = *(int *)(param_1 + 0xf8);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar8) {
      func_0x01384bf4();
    }
    uVar5 = *(undefined4 *)(iVar4 + uVar8 * 4 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar8) {
      func_0x01384bf4();
    }
    *(undefined4 *)(iVar12 + uVar8 * 4) = uVar5;
    uVar8 = uVar8 + 1;
  } while (uVar8 != 6);
  iVar4 = 0;
  uVar8 = 0;
  do {
    if (*(uint *)(iVar1 + 0xc) <= uVar8) {
      func_0x01384bf4();
    }
    iVar7 = uVar8 * 4;
    uVar8 = uVar8 + 1;
    iVar4 = *(int *)(iVar12 + iVar7) + iVar4;
  } while (uVar8 != 6);
  if (0 < iVar4) goto LAB_01ad4bf0;
  iVar4 = *(int *)(param_1 + 0x100);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar4 + 0x30) == 0) {
LAB_01ad4a58:
    uVar8 = 0;
    do {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar8) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar12 + uVar8 * 4) = 3;
      uVar8 = uVar8 + 1;
    } while (uVar8 != 6);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x100);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x30);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar4 + 0xc) < 1) goto LAB_01ad4a58;
    uVar8 = 0;
    do {
      if (*(uint *)(iVar1 + 0xc) <= uVar8) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar12 + uVar8 * 4) = 0;
      uVar8 = uVar8 + 1;
    } while (uVar8 != 6);
    iVar4 = *(int *)(param_1 + 0x100);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x30);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0325a3b4(&uStack_48,iVar4,**(undefined4 **)(_UNK_01ad4d18 + 0x1ad498c));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar9 = *(undefined4 **)(_UNK_01ad4d1c + 0x1ad49a8);
    while (iVar4 = func_0x01470118(&uStack_38,*puVar9), iVar4 != 0) {
      uVar8 = iStack_2c - 1;
      if (uVar8 < 6) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar8) {
          func_0x01384bf4();
        }
        iVar4 = iVar1 + uVar8 * 4;
        *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
      }
    }
    func_0x02450828(&uStack_38,**(undefined4 **)(_UNK_01ad4d20 + 0x1ad4a04));
  }
  uVar8 = 0;
  piVar11 = *(int **)(_UNK_01ad4d24 + 0x1ad4aa0);
  do {
    iVar4 = *(int *)(param_1 + 0x110);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar8) {
      func_0x01384bf4();
    }
    if (0 < *(int *)(iVar4 + uVar8 * 4 + 0x10)) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar8) {
        func_0x01384bf4();
      }
      iVar4 = *(int *)(iVar12 + uVar8 * 4);
      iVar7 = *(int *)(param_1 + 0x110);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar7 + 0xc) <= uVar8) {
        func_0x01384bf4();
      }
      iVar7 = *(int *)(iVar7 + uVar8 * 4 + 0x10);
      if (*(int *)(*piVar11 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar5 = func_0x0148ab08(0,iVar4 - iVar7,0);
      if (*(uint *)(iVar1 + 0xc) <= uVar8) {
        func_0x01384bf4();
      }
      iVar4 = *(int *)(param_1 + 0x110);
      *(undefined4 *)(iVar12 + uVar8 * 4) = uVar5;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar4 + 0xc) <= uVar8) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar4 + uVar8 * 4 + 0x10) = 0;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 6);
  iVar4 = 0;
  uVar8 = 0;
  do {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar8) {
      func_0x01384bf4();
    }
    iVar7 = uVar8 * 4;
    uVar8 = uVar8 + 1;
    iVar4 = *(int *)(iVar12 + iVar7) + iVar4;
  } while (uVar8 != 6);
  if (iVar4 < 1) {
    uVar8 = 0;
    do {
      if (*(uint *)(iVar1 + 0xc) <= uVar8) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar12 + uVar8 * 4) = 3;
      uVar8 = uVar8 + 1;
    } while (uVar8 != 6);
    iVar4 = 0x12;
  }
LAB_01ad4bf0:
  iVar10 = 1;
  iVar7 = 0;
  iVar4 = func_0x02450284(1,iVar4 + 1,0);
  piVar11 = (int *)(iVar1 + 0xc);
  uVar8 = 0xffffffff;
  do {
    uVar6 = uVar8;
    if (uVar6 == 5) goto LAB_01ad4c60;
    uVar8 = uVar6 + 1;
    if (*(uint *)(iVar1 + 0xc) <= uVar8) {
      func_0x01384bf4();
    }
    piVar11 = piVar11 + 1;
    iVar2 = *piVar11;
    iVar7 = iVar2 + iVar7;
  } while (iVar7 < iVar4);
  if (*(uint *)(iVar1 + 0xc) <= uVar8) {
    func_0x01384bf4();
    iVar2 = *piVar11;
  }
  iVar10 = uVar6 + 2;
  *piVar11 = iVar2 + -1;
LAB_01ad4c60:
  uVar8 = 0;
  do {
    iVar4 = *(int *)(param_1 + 0xf8);
    if (*(uint *)(iVar1 + 0xc) <= uVar8) {
      func_0x01384bf4();
    }
    uVar5 = *(undefined4 *)(iVar12 + uVar8 * 4);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar8) {
      func_0x01384bf4();
    }
    iVar7 = uVar8 * 4;
    uVar8 = uVar8 + 1;
    *(undefined4 *)(iVar4 + iVar7 + 0x10) = uVar5;
  } while (uVar8 != 6);
  return iVar10;
}



// ===== FAT.ActivityMonopolyBoard$$CountPossibleKeyHitsNextRollForKey RVA 0x1ac4d30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01ad4d30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_r10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01ad4e68 + 0x1ad4d4c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad4e6c + 0x1ad4d60));
    func_0x01384978(*(undefined4 *)(_UNK_01ad4e70 + 0x1ad4d6c));
    *pcVar4 = '\x01';
  }
  iVar5 = 0;
  iVar1 = func_0x0229f06c(0x868c,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x100);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x28);
      if (iVar2 != 0) {
        unaff_r10 = *(int *)(iVar2 + 0xc);
      }
      if (iVar2 != 0 && unaff_r10 != 0) {
        iVar2 = 1;
        iVar5 = 0;
        while( true ) {
          func_0x01458344(iVar2 + *(int *)(param_1 + 0xf4),unaff_r10);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x28);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0331f4f8(&iStack_30,iVar1,extraout_r1,**(undefined4 **)(_UNK_01ad4e74 + 0x1ad4e40))
          ;
          if (iStack_30 == param_2) {
            iVar5 = iVar5 + 1;
          }
          if (iVar2 == 6) break;
          iVar2 = iVar2 + 1;
          iVar1 = *(int *)(param_1 + 0x100);
        }
      }
    }
    return iVar5;
  }
  iVar1 = func_0x0229f13c(0x868c,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  iStack_30 = iStack_48;
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
  iVar1 = func_0x0245498c(&uStack_38,0,0);
  return iVar1;
}



// ===== FAT.ActivityMonopolyBoard$$ComputeRemainingOpportunityForKey RVA 0x1ac4e78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad4e78(undefined8 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_01ad50dc + 0x1ad4e98);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad50e0 + 0x1ad4eac));
    func_0x01384978(*(undefined4 *)(_UNK_01ad50e4 + 0x1ad4eb8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad50e8 + 0x1ad4ec4));
    func_0x01384978(*(undefined4 *)(_UNK_01ad50ec + 0x1ad4ed0));
    *pcVar7 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x868d,0);
  if (iVar1 == 0) {
    iVar8 = *(int *)(param_2 + 0x100);
    iVar1 = 0;
    if (iVar8 != 0) {
      iVar1 = *(int *)(iVar8 + 0x28);
    }
    if ((iVar8 != 0 && iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0xc), iVar1 != 0)) {
      iVar6 = 0;
      iVar4 = *(int *)(param_2 + 0xf4);
      puVar2 = *(undefined4 **)(_UNK_01ad50f4 + 0x1ad4fbc);
      while( true ) {
        iVar4 = iVar4 + 1;
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if (iVar1 <= iVar4) break;
        iVar8 = *(int *)(iVar8 + 0x28);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        func_0x0331f4f8(&iStack_38,iVar8,iVar4,*puVar2);
        iVar8 = *(int *)(param_2 + 0x100);
        if (iStack_38 == param_3) {
          iVar6 = iVar6 + 1;
        }
      }
      if (*(int *)(iVar8 + 0x10) < 1) {
        uVar5 = 1;
      }
      else {
        iVar1 = *(int *)(param_2 + 0x100);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar5 = *(int *)(iVar1 + 0x10) + ~*(uint *)(param_2 + 0xf0);
        uVar5 = uVar5 & ~((int)uVar5 >> 0x1f);
      }
      iVar1 = *(int *)(param_2 + 0x100);
      iStack_28 = 0;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0x38) != 0) {
        iVar1 = *(int *)(param_2 + 0x100);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x38);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02450590(iVar1,param_3,&iStack_28,**(undefined4 **)(_UNK_01ad50f8 + 0x1ad509c));
      }
      puVar2 = *(undefined4 **)(_UNK_01ad50fc + 0x1ad50b4);
      *(undefined4 *)param_1 = 0;
      uVar3 = *puVar2;
      iVar1 = iStack_28 * uVar5 + iVar6;
      *(undefined4 *)((int)param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 1) = 0;
    }
    else {
      iVar6 = 0;
      iVar1 = 0;
      puVar2 = *(undefined4 **)(_UNK_01ad50f0 + 0x1ad4f6c);
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)((int)param_1 + 4) = 0;
      uVar3 = *puVar2;
      *(undefined4 *)(param_1 + 1) = 0;
      uVar5 = 0;
    }
    func_0x03923edc(param_1,uVar5,iVar6,iVar1,uVar3);
  }
  else {
    iVar1 = func_0x0229f13c(0x868d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021cd050(&iStack_38,iVar1,param_2,param_3,0);
    *(undefined4 *)(param_1 + 1) = uStack_30;
    *param_1 = CONCAT44(uStack_34,iStack_38);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$FindNearestKeyDistance1to6 RVA 0x1ac5100 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01ad5100(int param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int unaff_r11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01ad523c + 0x1ad511c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad5240 + 0x1ad5130));
    func_0x01384978(*(undefined4 *)(_UNK_01ad5244 + 0x1ad513c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x868e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x868e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = iStack_48;
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
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x100);
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0x28);
    if (iVar4 != 0) {
      unaff_r11 = *(int *)(iVar4 + 0xc);
    }
    if (iVar4 != 0 && unaff_r11 != 0) {
      iVar4 = 1;
      puVar6 = *(undefined4 **)(_UNK_01ad5248 + 0x1ad51d4);
      while( true ) {
        func_0x01458344(iVar4 + *(int *)(param_1 + 0xf4),unaff_r11);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x28);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0331f4f8(&iStack_30,iVar1,extraout_r1,*puVar6);
        if (iStack_30 == param_2) {
          return iVar4;
        }
        if (iVar4 == 6) break;
        iVar4 = iVar4 + 1;
        iVar1 = *(int *)(param_1 + 0x100);
      }
    }
  }
  return 0;
}



// ===== FAT.ActivityMonopolyBoard$$IsKeyCell RVA 0x1ac524c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ad524c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01ad5318 + 0x1ad526c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad531c + 0x1ad5284));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8690,0);
  if (iVar1 == 0) {
    iVar3 = *(int *)(param_1 + 0x100);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x34);
    }
    if (iVar3 != 0 && iVar1 != 0) {
      uVar2 = func_0x03d5a510(iVar1,param_2,
                              *(undefined4 *)
                               (*(int *)(*(int *)(**(int **)(_UNK_01ad5320 + 0x1ad5308) + 0x10) +
                                        0x60) + 0x84));
      return ~uVar2 >> 0x1f;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x8690,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0225b45c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.ActivityMonopolyBoard$$GetMonopolySpawnOutputsOne RVA 0x1ac5324 =====

/* WARNING: Removing unreachable block (ram,0x01ad56b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad5324(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
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
  
  pcVar8 = (char *)(_UNK_01ad5794 + 0x1ad5340);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad5798 + 0x1ad5354));
    func_0x01384978(*(undefined4 *)(_UNK_01ad579c + 0x1ad5360));
    func_0x01384978(*(undefined4 *)(_UNK_01ad57a0 + 0x1ad536c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad57a4 + 0x1ad5378));
    func_0x01384978(*(undefined4 *)(_UNK_01ad57a8 + 0x1ad5384));
    func_0x01384978(*(undefined4 *)(_UNK_01ad57ac + 0x1ad5390));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x86b1,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x86b1,0);
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
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar2 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar7,0,0);
    return;
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  iVar2 = *param_2;
  uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_01ad57b0 + 0x1ad53fc)) {
        puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xd8);
        goto LAB_01ad5444;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01ad57b0 + 0x1ad53fc),3);
LAB_01ad5444:
  (*(code *)*puVar3)(param_2,puVar3[1]);
  iVar2 = func_0x01ad57d0(param_1);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = *(int *)(iVar2 + 0x38);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar5 = (int *)func_0x03653608(iVar2,**(undefined4 **)(_UNK_01ad57b4 + 0x1ad5480));
  piVar11 = *(int **)(_UNK_01ad57b8 + 0x1ad549c);
  do {
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
          goto LAB_01ad54f4;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar5,*piVar11,0);
LAB_01ad54f4:
    iVar2 = (*(code *)*puVar3)(piVar5,puVar3[1]);
    if (iVar2 == 0) break;
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01ad57bc + 0x1ad5528)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
          goto LAB_01ad5570;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01ad57bc + 0x1ad5528),0);
LAB_01ad5570:
    uVar10 = (*(code *)*puVar3)(piVar5,puVar3[1]);
    if (*(int *)(**(int **)(_UNK_01ad57c0 + 0x1ad5590) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_30,uVar10,0);
    uVar1 = uStack_28;
    uVar7 = uStack_2c;
    uVar10 = uStack_30;
    iVar2 = *param_2;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01ad57c4 + 0x1ad55cc)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xd0);
          goto LAB_01ad5614;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01ad57c4 + 0x1ad55cc),2);
LAB_01ad5614:
    uStack_38 = puVar3[1];
    (*(code *)*puVar3)(param_2,uVar10,uVar7,uVar1);
  } while( true );
  if (piVar5 != (int *)0x0) {
    iVar2 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_01ad57c8 + 0x1ad5654)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
          goto LAB_01ad569c;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_01ad57c8 + 0x1ad5654),0);
LAB_01ad569c:
    (*(code *)*puVar3)(piVar5,puVar3[1]);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$GetCurrentStageConfig RVA 0x1ac57d0 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ad57d0(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r4;
  char *pcVar6;
  int iVar7;
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
  
  pcVar6 = (char *)(_UNK_01ad5904 + 0x1ad57e4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad5908 + 0x1ad57f8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad590c + 0x1ad5804));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x86b2,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x86b2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_0225b8c0 + 0x225b7e0);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0225b8c4 + 0x225b7f4),param_1,0);
      *pcVar6 = '\x01';
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
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
    func_0x0245495c(iVar7,uVar9,&uStack_30,uVar5);
    uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0225b8c8 + 0x225b8b0));
    return uVar9;
  }
  iVar7 = *(int *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0xec);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar7 + 0x28);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(param_1 + 0x40);
  iVar7 = *(int *)(iVar7 + 0xc);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  if (iVar2 < iVar7) {
    iVar2 = *(int *)(iVar8 + 0x28);
    uVar9 = *(undefined4 *)(param_1 + 0xec);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar9 = func_0x0364c9b8(iVar2,uVar9,**(undefined4 **)(_UNK_01ad5910 + 0x1ad58b4));
  }
  else {
    uVar9 = *(undefined4 *)(iVar8 + 0x18);
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = func_0x0229f06c(0x8655,0,0);
  if (iVar7 == 0) {
    pcVar6 = (char *)(_UNK_0185ecb0 + 0x185ec54);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0185ecb4 + 0x185ec68),0);
      func_0x01384978(*(undefined4 *)(_UNK_0185ecb8 + 0x185ec74));
      *pcVar6 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_0185ecbc + 0x185ec88) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = **(int **)(_UNK_0185ecc0 + 0x185eca4);
    iVar2 = *(int *)(iVar7 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x02457d48();
    }
    iVar2 = *(int *)(iVar7 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    piVar3 = (int *)func_0x0369fa64(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0xe8));
    if (piVar3 == (int *)0x0) {
      func_0x02457d50();
    }
    iVar2 = *(int *)(iVar7 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x02457d84();
    }
    iVar7 = *(int *)(*(int *)(iVar2 + 0x60) + 0xf4);
    uStack_28 = 0;
    uStack_2c = 0;
    (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
    iVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
    if (iVar2 != 0) {
      unaff_r4 = piVar3[0x11];
    }
    bVar1 = true;
    iVar8 = 0;
    if (iVar2 != 0 && unaff_r4 != 0) {
      iVar4 = func_0x03d66780(unaff_r4,uVar9,&uStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68));
      uVar5 = uStack_28;
      bVar1 = false;
      iVar8 = unaff_r4;
      if (iVar4 != 0) {
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return uStack_28;
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar5,*(undefined4 *)(*piVar3 + 0x13c));
        return uStack_28;
      }
    }
    if ((piVar3[0x12] == 0) ||
       (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar9,
                                *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
       iVar4 == 0)) {
      uStack_2c = 0;
      iVar4 = (**(code **)(*piVar3 + 0x1a0))
                        (piVar3,uVar9,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4));
      uVar5 = uStack_2c;
      if (iVar4 != 0) {
        if (iVar2 != 0) {
          if (bVar1) {
            if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd) & 1)
                == 0) {
              func_0x02457d84();
            }
            iVar8 = func_0x02457d58();
            func_0x03d63f04(iVar8,4,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74))
            ;
            piVar3[0x11] = iVar8;
          }
          if (iVar8 == 0) {
            func_0x02457d50();
          }
          func_0x03d6491c(iVar8,uVar9,uVar5,
                          *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x78));
        }
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return uVar5;
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar5,*(undefined4 *)(*piVar3 + 0x13c));
        return uVar5;
      }
      iVar2 = piVar3[0x12];
      if (iVar2 == 0) {
        if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd) & 1) == 0)
        {
          func_0x02457d84();
        }
        iVar2 = func_0x02457d58();
        func_0x0421ec60(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x144));
        piVar3[0x12] = iVar2;
        if (iVar2 == 0) {
          func_0x02457d50();
          iVar2 = 0;
        }
      }
      func_0x04220004(iVar2,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x148));
    }
    func_0x0369fb50(piVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x134));
    return 0;
  }
  iVar7 = func_0x0229f13c(0x8655,0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_0225b134 + 0x225b040);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0225b138 + 0x225b054),iVar2,uVar9,0);
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
  if (*(int *)(iVar7 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar2,0);
  func_0x01485238(&uStack_38,uVar9,0);
  iVar8 = *(int *)(iVar7 + 8);
  uVar9 = *(undefined4 *)(iVar7 + 0xc);
  iVar2 = *(int *)(iVar7 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar8,uVar9,&uStack_38,uVar5,0,0);
  uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0225b13c + 0x225b124));
  return uVar9;
}



// ===== FAT.ActivityMonopolyBoard$$TryGetMonopolyOutputFixedOne RVA 0x1ac5914 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ad5914(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01ad5a3c + 0x1ad5934);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad5a40 + 0x1ad5948));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x86b3,0);
  if (iVar1 == 0) {
    *param_2 = 0;
    *param_3 = 0;
    iVar1 = FUN_01ad57d0(param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar1 + 0x34);
      if (*(int *)(**(int **)(_UNK_01ad5a44 + 0x1ad59c8) + 0x74) == 0) {
        func_0x01384ab4(**(int **)(_UNK_01ad5a44 + 0x1ad59c8));
      }
      iVar1 = func_0x02565a88(uVar3,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *param_2 = *(int *)(iVar1 + 8);
      iVar1 = *(int *)(iVar1 + 0xc);
      *param_3 = iVar1;
      uVar2 = (uint)(0 < iVar1 && 0 < *param_2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x86b3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021cc06c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.ActivityMonopolyBoard$$GetWithOutputTimeRange RVA 0x1ac5a48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad5a48(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01ad5bd8 + 0x1ad5a64);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad5bdc + 0x1ad5a78));
    func_0x01384978(*(undefined4 *)(_UNK_01ad5be0 + 0x1ad5a84));
    func_0x01384978(*(undefined4 *)(_UNK_01ad5be4 + 0x1ad5a90));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x86b4,0);
  if (iVar1 == 0) {
    pcVar2 = (char *)FUN_01ad57d0(param_2);
    iVar1 = 0;
    if (pcVar2 != (char *)0x0) {
      iVar1 = *(int *)(pcVar2 + 0x50);
      pcVar5 = pcVar2;
    }
    if ((pcVar2 != (char *)0x0 && iVar1 != 0) && (iVar6 = *(int *)(iVar1 + 0xc), 0 < iVar6)) {
      puVar7 = *(undefined4 **)(_UNK_01ad5bec + 0x1ad5b4c);
      iVar1 = func_0x0364c9b8(iVar1,0,*puVar7);
      iVar3 = iVar1;
      if (iVar6 == 1) {
        puVar7 = *(undefined4 **)(_UNK_01ad5bf0 + 0x1ad5b6c);
        *param_1 = 0;
        param_1[1] = 0;
        uVar4 = *puVar7;
      }
      else {
        iVar6 = *(int *)(pcVar5 + 0x50);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x0364c9b8(iVar6,1,*puVar7);
        *param_1 = 0;
        param_1[1] = 0;
        if (iVar1 <= iVar6) {
          iVar3 = iVar6;
          iVar6 = iVar1;
        }
        iVar1 = iVar6;
        uVar4 = **(undefined4 **)(_UNK_01ad5bf4 + 0x1ad5bc8);
      }
    }
    else {
      iVar1 = 0;
      uVar4 = **(undefined4 **)(_UNK_01ad5be8 + 0x1ad5b18);
      *param_1 = 0;
      param_1[1] = 0;
      iVar3 = 0;
    }
    func_0x038fd264(param_1,iVar1,iVar3,uVar4);
  }
  else {
    iVar1 = func_0x0229f13c(0x86b4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217edb0(&uStack_28,iVar1,param_2,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$get_CurrentStageConfigForUI RVA 0x1ac5bf8 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ad5bf8(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r4;
  int iVar6;
  int iVar7;
  char *pcVar8;
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
  int iStack_24;
  int iStack_20;
  int iStack_18;
  
  iVar2 = func_0x0229f06c(0x86b5,0);
  if (iVar2 == 0) {
    pcVar8 = (char *)(_UNK_01ad5904 + 0x1ad57e4);
    iStack_18 = unaff_r4;
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01ad5908 + 0x1ad57f8));
      func_0x01384978(*(undefined4 *)(_UNK_01ad590c + 0x1ad5804));
      *pcVar8 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x86b2,0);
    if (iVar2 == 0) {
      iVar6 = *(int *)(param_1 + 0x40);
      iVar2 = *(int *)(param_1 + 0xec);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0x28);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(param_1 + 0x40);
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      if (iVar2 < iVar6) {
        iVar2 = *(int *)(iVar7 + 0x28);
        uVar9 = *(undefined4 *)(param_1 + 0xec);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar9 = func_0x0364c9b8(iVar2,uVar9,**(undefined4 **)(_UNK_01ad5910 + 0x1ad58b4));
      }
      else {
        uVar9 = *(undefined4 *)(iVar7 + 0x18);
      }
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x0229f06c(0x8655,0,0);
      if (iVar6 != 0) {
        iVar6 = func_0x0229f13c(0x8655,0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iStack_20 = iStack_18;
        pcVar8 = (char *)(_UNK_0225b134 + 0x225b040);
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_0225b138 + 0x225b054),iVar2,uVar9,0);
          *pcVar8 = '\x01';
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
        if (*(int *)(iVar6 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar6 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar2,0);
        func_0x01485238(&uStack_38,uVar9,0);
        iVar7 = *(int *)(iVar6 + 8);
        uVar9 = *(undefined4 *)(iVar6 + 0xc);
        iVar2 = *(int *)(iVar6 + 0x10);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uVar5 = 3;
        if (iVar2 == 0) {
          uVar5 = 2;
        }
        func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
        uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0225b13c + 0x225b124));
        return uVar9;
      }
      pcVar8 = (char *)(_UNK_0185ecb0 + 0x185ec54);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_0185ecb4 + 0x185ec68),0);
        func_0x01384978(*(undefined4 *)(_UNK_0185ecb8 + 0x185ec74));
        *pcVar8 = '\x01';
      }
      if (*(int *)(**(int **)(_UNK_0185ecbc + 0x185ec88) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar6 = **(int **)(_UNK_0185ecc0 + 0x185eca4);
      iVar2 = *(int *)(iVar6 + 0x10);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x02457d84();
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x02457d84();
      }
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x02457d48();
      }
      iVar2 = *(int *)(iVar6 + 0x10);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x02457d84();
      }
      piVar3 = (int *)func_0x0369fa64(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0xe8));
      if (piVar3 == (int *)0x0) {
        func_0x02457d50();
      }
      iVar2 = *(int *)(iVar6 + 0x10);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x02457d84();
      }
      iVar6 = *(int *)(*(int *)(iVar2 + 0x60) + 0xf4);
      uStack_28 = 0;
      uStack_2c = 0;
      iStack_24 = iStack_18;
      (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
      iVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
      if (iVar2 != 0) {
        iStack_18 = piVar3[0x11];
      }
      bVar1 = true;
      iVar7 = 0;
      if (iVar2 != 0 && iStack_18 != 0) {
        iVar4 = func_0x03d66780(iStack_18,uVar9,&uStack_28,
                                *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x68));
        uVar5 = uStack_28;
        bVar1 = false;
        iVar7 = iStack_18;
        if (iVar4 != 0) {
          iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
          if (iVar2 == 0) {
            return uStack_28;
          }
          (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar5,*(undefined4 *)(*piVar3 + 0x13c));
          return uStack_28;
        }
      }
      if ((piVar3[0x12] == 0) ||
         (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar9,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x13c)),
         iVar4 == 0)) {
        uStack_2c = 0;
        iVar4 = (**(code **)(*piVar3 + 0x1a0))
                          (piVar3,uVar9,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4));
        uVar5 = uStack_2c;
        if (iVar4 != 0) {
          if (iVar2 != 0) {
            if (bVar1) {
              if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x40) + 0xbd) & 1)
                  == 0) {
                func_0x02457d84();
              }
              iVar7 = func_0x02457d58();
              func_0x03d63f04(iVar7,4,*(undefined4 *)
                                       (*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x74));
              piVar3[0x11] = iVar7;
            }
            if (iVar7 == 0) {
              func_0x02457d50();
            }
            func_0x03d6491c(iVar7,uVar9,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x78));
          }
          iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
          if (iVar2 == 0) {
            return uVar5;
          }
          (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar5,*(undefined4 *)(*piVar3 + 0x13c));
          return uVar5;
        }
        iVar2 = piVar3[0x12];
        if (iVar2 == 0) {
          if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x48) + 0xbd) & 1) ==
              0) {
            func_0x02457d84();
          }
          iVar2 = func_0x02457d58();
          func_0x0421ec60(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x144));
          piVar3[0x12] = iVar2;
          if (iVar2 == 0) {
            func_0x02457d50();
            iVar2 = 0;
          }
        }
        func_0x04220004(iVar2,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x148)
                       );
      }
      func_0x0369fb50(piVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x134))
      ;
      return 0;
    }
    iVar2 = func_0x0229f13c(0x86b2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x86b5,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar8 = (char *)(_UNK_0225b8c0 + 0x225b7e0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0225b8c4 + 0x225b7f4),param_1,0);
    *pcVar8 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iStack_20 = 0;
  func_0x0245494c(&uStack_48,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  iStack_24 = uStack_3c;
  iStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar6 = *(int *)(iVar2 + 8);
  uVar9 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar6,uVar9,&uStack_30,uVar5);
  uVar9 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0225b8c8 + 0x225b8b0));
  return uVar9;
}



// ===== FAT.ActivityMonopolyBoard$$GetGridRes RVA 0x1ac5c50 =====

void FUN_01ad5c50(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar1 = func_0x0229f06c(0x86b6,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0x100);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01ad5d04(&uStack_30,iVar1,param_3,param_4);
    func_0x01ad60ac(&uStack_30,param_2,uStack_30);
  }
  else {
    iVar1 = func_0x0229f13c(0x86b6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0225bb6c(&uStack_30,iVar1,param_2,param_3,param_4,0);
  }
  *param_1 = uStack_30;
  param_1[1] = uStack_2c;
  return;
}



// ===== FAT.ActivityMonopolyBoard.MonopolyBoardData$$GetCell RVA 0x1ac5d04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad5d04(undefined8 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  pcVar5 = (char *)(_UNK_01ad6060 + 0x1ad5d24);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad6064 + 0x1ad5d3c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad6068 + 0x1ad5d48));
    func_0x01384978(*(undefined4 *)(_UNK_01ad606c + 0x1ad5d54));
    func_0x01384978(*(undefined4 *)(_UNK_01ad6070 + 0x1ad5d60));
    func_0x01384978(*(undefined4 *)(_UNK_01ad6074 + 0x1ad5d6c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad6078 + 0x1ad5d78));
    func_0x01384978(*(undefined4 *)(_UNK_01ad607c + 0x1ad5d84));
    func_0x01384978(*(undefined4 *)(_UNK_01ad6080 + 0x1ad5d90));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_38 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x86b7,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03320714(&iStack_50,iVar1,**(undefined4 **)(_UNK_01ad6084 + 0x1ad5e40));
    iStack_38 = iStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    puVar6 = *(undefined4 **)(_UNK_01ad6088 + 0x1ad5e68);
    do {
      iVar1 = func_0x01472198(&iStack_38,*puVar6);
      uVar4 = uStack_2c;
      if (iVar1 == 0) {
        func_0x024509e0(&iStack_38,**(undefined4 **)(_UNK_01ad608c + 0x1ad5eb8));
        piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01ad6094 + 0x1ad5ed0),2);
        puVar6 = *(undefined4 **)(_UNK_01ad6098 + 0x1ad5ee8);
        iStack_50 = param_3;
        iVar1 = func_0x01384abc(*puVar6,&iStack_50);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar1 != 0) &&
           (iVar3 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
          uVar4 = func_0x01384c10();
          func_0x01384aa0(uVar4,0);
        }
        if (piVar2[3] == 0) {
          func_0x01384bf4();
        }
        piVar2[4] = iVar1;
        iStack_54 = param_4;
        iVar1 = func_0x01384abc(*puVar6,&iStack_54);
        if ((iVar1 != 0) &&
           (iVar3 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
          uVar4 = func_0x01384c10();
          func_0x01384aa0(uVar4,0);
        }
        if ((uint)piVar2[3] < 2) {
          func_0x01384bf4();
        }
        piVar2[5] = iVar1;
        if (*(int *)(**(int **)(_UNK_01ad609c + 0x1ad5fa0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2f28(**(undefined4 **)(_UNK_01ad60a0 + 0x1ad5fc8),piVar2,0);
        *(undefined4 *)param_1 = 0;
        *(undefined4 *)((int)param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 1) = 0;
        return;
      }
      iVar1 = (int)uStack_28;
      if ((int)uStack_28 == param_3) {
        iVar1 = uStack_28._4_4_;
      }
    } while ((int)uStack_28 != param_3 || iVar1 != param_4);
    func_0x024509e0(&iStack_38,**(undefined4 **)(_UNK_01ad60a8 + 0x1ad5e98));
    *(undefined4 *)param_1 = uVar4;
    *(int *)((int)param_1 + 4) = param_3;
    *(int *)(param_1 + 1) = param_4;
  }
  else {
    iVar1 = func_0x0229f13c(0x86b7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0225b8cc(&iStack_50,iVar1,param_2,param_3,param_4,0);
    *(undefined4 *)(param_1 + 1) = uStack_48;
    *param_1 = CONCAT44(uStack_4c,iStack_50);
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$GetGridRes RVA 0x1ac60ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad60ac(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01ad61bc + 0x1ad60cc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad61c0 + 0x1ad60e0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x86b8,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01cababc(iVar1,param_3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = *(undefined4 *)(iVar1 + 0x1c);
    uVar2 = *(undefined4 *)(iVar1 + 0x20);
    uVar4 = **(undefined4 **)(_UNK_01ad61c4 + 0x1ad619c);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x0390b3bc(param_1,uVar2,uVar3,uVar4);
  }
  else {
    iVar1 = func_0x0229f13c(0x86b8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0225ba38(&uStack_20,iVar1,param_2,param_3,0);
    *param_1 = uStack_20;
    param_1[1] = uStack_1c;
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$GetCurrentLapTarget RVA 0x1ac61c8 =====

undefined4 FUN_01ad61c8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x86b9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x86b9,0);
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
  iVar1 = *(int *)(param_1 + 0x100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x10);
}



// ===== FAT.ActivityMonopolyBoard$$GetCurrentLap RVA 0x1ac622c =====

undefined4 FUN_01ad622c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x86ba,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x86ba,0);
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
  return *(undefined4 *)(param_1 + 0xf0);
}



// ===== FAT.ActivityMonopolyBoard$$GetCurrentcurStage RVA 0x1ac6280 =====

undefined4 FUN_01ad6280(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x86bb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x86bb,0);
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
  return *(undefined4 *)(param_1 + 0xec);
}



// ===== FAT.ActivityMonopolyBoard$$GetCurrentPathOrder RVA 0x1ac62d4 =====

undefined4 FUN_01ad62d4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x86bc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x86bc,0);
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
  return *(undefined4 *)(param_1 + 0xf4);
}



// ===== FAT.ActivityMonopolyBoard$$GetBoardSize RVA 0x1ac6328 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad6328(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar5 = (char *)(_UNK_01ad6414 + 0x1ad6344);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad6418 + 0x1ad6358));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x86bd,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0x100);
    if (iVar1 == 0) {
      uVar2 = 0;
      uVar3 = 0;
      uVar4 = **(undefined4 **)(_UNK_01ad641c + 0x1ad63f8);
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar1 + 0xc);
      uVar4 = **(undefined4 **)(_UNK_01ad6420 + 0x1ad63cc);
      uVar2 = *(undefined4 *)(iVar1 + 8);
      *param_1 = 0;
      param_1[1] = 0;
    }
    func_0x038fd264(param_1,uVar2,uVar3,uVar4);
  }
  else {
    iVar1 = func_0x0229f13c(0x86bd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217edb0(&uStack_18,iVar1,param_2,0);
    *param_1 = uStack_18;
    param_1[1] = uStack_14;
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard$$GetCurrentCoord RVA 0x1ac6424 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad6424(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pcVar3 = (char *)(_UNK_01ad6524 + 0x1ad6440);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad6528 + 0x1ad6454));
    func_0x01384978(*(undefined4 *)(_UNK_01ad652c + 0x1ad6460));
    *pcVar3 = '\x01';
  }
  uVar5 = func_0x0229f06c(0x86be,0);
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar5 == 0) {
    iVar2 = *(int *)(param_2 + 0x100);
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x28);
    }
    if ((iVar2 == 0 || iVar1 == 0) || (*(int *)(iVar1 + 0xc) == 0)) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    iVar4 = *(int *)(param_2 + 0xf4);
    iVar2 = *(int *)(iVar1 + 0xc) + -1;
    if (iVar4 <= iVar2) {
      iVar2 = iVar4;
    }
    if (iVar4 < 0) {
      iVar2 = 0;
    }
    func_0x0331f4f8(&uStack_20,iVar1,iVar2,**(undefined4 **)(_UNK_01ad6530 + 0x1ad6500));
    uStack_20 = uStack_1c;
    uStack_1c = uStack_18;
  }
  else {
    iVar1 = func_0x0229f13c(0x86be,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0218000c(&uStack_20,iVar1,param_2,0);
  }
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  return;
}



// ===== FAT.ActivityMonopolyBoard$$TryGetCell RVA 0x1ac6534 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ad6534(int param_1,int param_2,int param_3,undefined4 *param_4,undefined1 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_01ad66c4 + 0x1ad6554);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad66c8 + 0x1ad656c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad66cc + 0x1ad6578));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x86bf,0);
  if (iVar1 == 0) {
    *param_4 = 0;
    *param_5 = 0;
    iVar1 = *(int *)(param_1 + 0x100);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x28);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0xc);
      }
      if (iVar2 != 0 && iVar3 != 0) {
        iVar3 = 0;
        puVar6 = *(undefined4 **)(_UNK_01ad66d0 + 0x1ad6624);
        while( true ) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x28);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar1 + 0xc) <= iVar3) {
            return 0;
          }
          iVar1 = *(int *)(param_1 + 0x100);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x28);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0331f4f8(&uStack_30,iVar1,iVar3,*puVar6);
          iVar1 = iStack_2c;
          if (iStack_2c == param_2) {
            iVar1 = iStack_28;
          }
          if (iStack_2c == param_2 && iVar1 == param_3) break;
          iVar1 = *(int *)(param_1 + 0x100);
          iVar3 = iVar3 + 1;
        }
        *param_4 = uStack_30;
        uVar5 = 1;
        *param_5 = iVar3 == 0;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x86bf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x0222adac(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return uVar5;
}



// ===== FAT.ActivityMonopolyBoard$$IsPityGrid RVA 0x1ac66d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ad66d4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_01ad6894 + 0x1ad66f4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad6898 + 0x1ad6708));
    func_0x01384978(*(undefined4 *)(_UNK_01ad689c + 0x1ad6714));
    func_0x01384978(*(undefined4 *)(_UNK_01ad68a0 + 0x1ad6720));
    func_0x01384978(*(undefined4 *)(_UNK_01ad68a4 + 0x1ad672c));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x86c0,0);
  if (iVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x100);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x34);
    }
    if ((iVar2 != 0 && iVar1 != 0) &&
       (iVar1 = func_0x02450594(iVar1,**(undefined4 **)(_UNK_01ad68a8 + 0x1ad67b4)), iVar1 != 0)) {
      iVar1 = 0;
      puVar5 = *(undefined4 **)(_UNK_01ad68ac + 0x1ad67d4);
      do {
        iVar2 = *(int *)(param_1 + 0x100);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x28);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar2 + 0xc) <= iVar1) {
          return 0;
        }
        iVar2 = *(int *)(param_1 + 0x100);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x28);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0331f4f8(&uStack_2c,iVar2,iVar1,*puVar5);
        iVar1 = iVar1 + 1;
        iVar2 = iStack_28;
        if (iStack_28 == param_2) {
          iVar2 = iStack_24;
        }
      } while (iStack_28 != param_2 || iVar2 != param_3);
      iVar1 = *(int *)(param_1 + 0x100);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x02450998(iVar1,uStack_2c,**(undefined4 **)(_UNK_01ad68b0 + 0x1ad687c));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x86c0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
  }
  return uVar4;
}



// ===== FAT.ActivityMonopolyBoard$$GetPityRemainTimes RVA 0x1ac68b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ad68b4(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  
  pcVar4 = (char *)(_UNK_01ad6abc + 0x1ad68d4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad6ac0 + 0x1ad68e8));
    func_0x01384978(*(undefined4 *)(_UNK_01ad6ac4 + 0x1ad68f4));
    func_0x01384978(*(undefined4 *)(_UNK_01ad6ac8 + 0x1ad6900));
    func_0x01384978(*(undefined4 *)(_UNK_01ad6acc + 0x1ad690c));
    *pcVar4 = '\x01';
  }
  uStack_28 = 0;
  iStack_2c = 0;
  iVar1 = func_0x0229f06c(0x86c1,0);
  if (iVar1 == 0) {
    iVar3 = *(int *)(param_1 + 0x100);
    uVar2 = 0xffffffff;
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x34);
    }
    if ((iVar3 != 0 && iVar1 != 0) &&
       (iVar1 = func_0x02450594(iVar1,**(undefined4 **)(_UNK_01ad6ad0 + 0x1ad69a4)), iVar1 != 0)) {
      iVar1 = 0;
      puVar5 = *(undefined4 **)(_UNK_01ad6ad4 + 0x1ad69c4);
      do {
        iVar3 = *(int *)(param_1 + 0x100);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0x28);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar3 + 0xc) <= iVar1) {
          return 0xffffffff;
        }
        iVar3 = *(int *)(param_1 + 0x100);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0x28);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x0331f4f8(&uStack_38,iVar3,iVar1,*puVar5);
        iVar1 = iVar1 + 1;
        iVar3 = iStack_34;
        if (iStack_34 == param_2) {
          iVar3 = iStack_30;
        }
      } while (iStack_34 != param_2 || iVar3 != param_3);
      iVar1 = *(int *)(param_1 + 0x100);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      puVar5 = *(undefined4 **)(_UNK_01ad6ad8 + 0x1ad6a74);
      iVar1 = func_0x02450590(iVar1,uStack_38,&uStack_28,*puVar5);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x104);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02450590(iVar1,uStack_38,&iStack_2c,*puVar5);
        if (iVar1 != 0) {
          uStack_28 = uStack_28 - iStack_2c;
        }
        uVar2 = uStack_28 & ~((int)uStack_28 >> 0x1f);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x86c1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02180128(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.ActivityMonopolyBoard$$<>iFixBaseProxy_get_Valid RVA 0x1ac6adc =====

void FUN_01ad6adc(int param_1)

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



// ===== FAT.ActivityMonopolyBoard$$<>iFixBaseProxy_get_Visual RVA 0x1ac6ae4 =====

undefined4 FUN_01ad6ae4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.ActivityMonopolyBoard$$<>iFixBaseProxy_SetupFresh RVA 0x1ac6aec =====

void FUN_01ad6aec(undefined4 param_1)

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



// ===== FAT.ActivityMonopolyBoard$$<>iFixBaseProxy_TryPopup RVA 0x1ac6af4 =====

void FUN_01ad6af4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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



// ===== FAT.ActivityMonopolyBoard$$<>iFixBaseProxy_WhenEnd RVA 0x1ac6afc =====

void FUN_01ad6afc(undefined4 param_1)

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



// ===== FAT.ActivityMonopolyBoard$$<>iFixBaseProxy_WhenReset RVA 0x1ac6b04 =====

void FUN_01ad6b04(undefined4 param_1)

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



// ===== FAT.ActivityMonopolyBoard.MonopolyBoardData$$GetCell RVA 0x1ac6b0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad6b0c(undefined8 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  pcVar2 = (char *)(_UNK_01ad6bdc + 0x1ad6b2c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad6be0 + 0x1ad6b40));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x86c2,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0331f4f8(&uStack_28,iVar1,param_3,**(undefined4 **)(_UNK_01ad6be4 + 0x1ad6bbc));
  }
  else {
    iVar1 = func_0x0229f13c(0x86c2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0225bcd4(&uStack_28,iVar1,param_2,param_3,0);
  }
  *(undefined4 *)(param_1 + 1) = uStack_20;
  *param_1 = uStack_28;
  return;
}



// ===== FAT.ActivityMonopolyBoard.<>c__DisplayClass119_0$$<FAT.Merge.ISpawnEffectWithTrail.AddTrail>b__0 RVA 0x1ac6be8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad6be8(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_01ad6f88 + 0x1ad6c04);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad6f8c + 0x1ad6c18));
    func_0x01384978(*(undefined4 *)(_UNK_01ad6f90 + 0x1ad6c24));
    func_0x01384978(*(undefined4 *)(_UNK_01ad6f94 + 0x1ad6c30));
    func_0x01384978(*(undefined4 *)(_UNK_01ad6f98 + 0x1ad6c3c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad6f9c + 0x1ad6c48));
    func_0x01384978(*(undefined4 *)(_UNK_01ad6fa0 + 0x1ad6c54));
    func_0x01384978(*(undefined4 *)(_UNK_01ad6fa4 + 0x1ad6c60));
    func_0x01384978(*(undefined4 *)(_UNK_01ad6fa8 + 0x1ad6c6c));
    func_0x01384978(*(undefined4 *)(_UNK_01ad6fac + 0x1ad6c78));
    func_0x01384978(*(undefined4 *)(_UNK_01ad6fb0 + 0x1ad6c84));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ad6fb4 + 0x1ad6c98));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 8) = param_2;
  *(int *)(iVar1 + 0x14) = param_1;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(param_2,0,0);
  iVar3 = *(int *)(iVar1 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x024504c0(iVar3,0);
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0244fc34(iVar4,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_2c,iVar4,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x024503d4(iVar3,uStack_2c,uStack_28,uStack_24,0);
  iVar3 = *(int *)(iVar1 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x02fe27b8(iVar3,**(undefined4 **)(_UNK_01ad6fb8 + 0x1ad6d84));
  if (*(int *)(**(int **)(_UNK_01ad6fbc + 0x1ad6d9c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar4 = func_0x0244fb8c(iVar3,0,0);
  if (iVar4 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02fe26b4(iVar3,**(undefined4 **)(_UNK_01ad6fc0 + 0x1ad6de0));
  }
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(iVar4 + 0xbc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0266fcac(iVar3,uVar5,0x40800000,0);
  iVar3 = *(int *)(iVar1 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x024504c0(iVar3,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x02450178(iVar3,**(undefined4 **)(_UNK_01ad6fc4 + 0x1ad6e60),0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0244ffd4(iVar3,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar3,1,0);
  iVar3 = func_0x02cebcfc(*(undefined4 *)(param_1 + 0x10),0);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    iVar3 = iVar4;
    if (iVar4 == 0) {
      func_0x01384bf0();
      iVar3 = *(int *)(param_1 + 0x10);
    }
    puVar6 = *(undefined4 **)(_UNK_01ad6fc8 + 0x1ad6edc);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar4 + 0x44);
    uVar5 = func_0x01384be4(*puVar6);
    func_0x02ce3d80(uVar5,iVar1,**(undefined4 **)(_UNK_01ad6fcc + 0x1ad6f00),0);
    func_0x0309eb60(iVar3,uVar5,**(undefined4 **)(_UNK_01ad6fd0 + 0x1ad6f18));
    iVar4 = *(int *)(param_1 + 0x10);
    iVar3 = iVar4;
    if (iVar4 == 0) {
      func_0x01384bf0();
      iVar3 = *(int *)(param_1 + 0x10);
    }
    uVar5 = *puVar6;
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar4 + 0x4c);
    uVar5 = func_0x01384be4(uVar5);
    func_0x02ce3d80(uVar5,iVar1,**(undefined4 **)(_UNK_01ad6fd4 + 0x1ad6f60),0);
    func_0x0309ead4(iVar3,uVar5,**(undefined4 **)(_UNK_01ad6fd8 + 0x1ad6f78));
  }
  return;
}



// ===== FAT.ActivityMonopolyBoard.<>c__DisplayClass119_1$$.ctor RVA 0x1ac6fdc =====

void FUN_01ad6fdc(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityMonopolyBoard.<>c__DisplayClass119_1$$<FAT.Merge.ISpawnEffectWithTrail.AddTrail>b__1 RVA 0x1ac6fe4 =====

void FUN_01ad6fe4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450114(iVar1,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar1,1,0);
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x024504c0(iVar1,0);
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0244fc34(iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_24,iVar2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x024503d4(iVar1,uStack_24,uStack_20,uStack_1c,0);
  return;
}



// ===== FAT.ActivityMonopolyBoard.<>c__DisplayClass119_1$$<FAT.Merge.ISpawnEffectWithTrail.AddTrail>b__2 RVA 0x1ac70f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad70f0(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_01ad7204 + 0x1ad7104);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad7208 + 0x1ad7118));
    func_0x01384978(*(undefined4 *)(_UNK_01ad720c + 0x1ad7124));
    *pcVar2 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  }
  uVar3 = *(undefined4 *)(param_1 + 8);
  if (*(int *)(**(int **)(_UNK_01ad7210 + 0x1ad7154) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar3,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x024504c0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450178(iVar1,**(undefined4 **)(_UNK_01ad7214 + 0x1ad71bc),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,0,0);
  return;
}



// ===== FAT.ActivityMonopolyBoard.<CoDelayReward>d__112$$System.IDisposable.Dispose RVA 0x1ac7218 =====

void FUN_01ad7218(void)

{
  return;
}



// ===== FAT.ActivityMonopolyBoard.<CoDelayReward>d__112$$MoveNext RVA 0x1ac721c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ad721c(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  pcVar4 = (char *)(_UNK_01ad730c + 0x1ad7234);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ad7310 + 0x1ad7248));
    func_0x01384978(*(undefined4 *)(_UNK_01ad7314 + 0x1ad7254));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    uVar6 = *(undefined4 *)(param_1 + 0x18);
    uVar7 = *(undefined4 *)(param_1 + 0x1c);
    uVar8 = *(undefined4 *)(param_1 + 0x20);
    iVar3 = **(int **)(_UNK_01ad731c + 0x1ad72c4);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar5 = 0;
    func_0x020718d0(uVar2,uVar6,uVar7,uVar8,0,0,0);
  }
  else {
    uVar5 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      puVar1 = *(undefined4 **)(_UNK_01ad7318 + 0x1ad7284);
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar2 = func_0x01384be4(*puVar1);
      func_0x0245031c(uVar2,uVar6,0);
      uVar5 = 1;
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar5;
}



// ===== FAT.ActivityMonopolyBoard.<CoDelayReward>d__112$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x1ac7320 =====

undefined4 FUN_01ad7320(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.ActivityMonopolyBoard.<CoDelayReward>d__112$$System.Collections.IEnumerator.Reset RVA 0x1ac7328 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad7328(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x01384988(*(undefined4 *)(_UNK_01ad7364 + 0x1ad7338));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(_UNK_01ad7368 + 0x1ad7354));
  func_0x01384aa0(uVar1,uVar2);
  func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.ActivityMonopolyBoard.<CoDelayReward>d__112$$System.Collections.IEnumerator.get_Current RVA 0x1ac736c =====

undefined4 FUN_01ad736c(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


