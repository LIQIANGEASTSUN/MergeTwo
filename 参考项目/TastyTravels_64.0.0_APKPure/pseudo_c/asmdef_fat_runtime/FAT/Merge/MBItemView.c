/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.MBItemView$$GetCurrentShadowPosition RVA 0x228f418 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0229f418(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uStack_20;
  int iStack_18;
  int *piStack_14;
  
  pcVar5 = (char *)(_UNK_0229f5f8 + 0x229f434);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0229f5fc + 0x229f448));
    func_0x01384978(*(undefined4 *)(_UNK_0229f600 + 0x229f454));
    func_0x01384978(*(undefined4 *)(_UNK_0229f604 + 0x229f460));
    func_0x01384978(*(undefined4 *)(_UNK_0229f608 + 0x229f46c));
    *pcVar5 = '\x01';
  }
  piStack_14 = (int *)0x0;
  iVar2 = func_0x0229f06c(0xb532);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb532);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0218a848(&uStack_20,iVar2,param_2,0);
    goto LAB_0229f544;
  }
  uVar6 = *(undefined4 *)(param_2 + 0x2c);
  iVar2 = *(int *)(param_2 + 0x40);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x03dd1078(iVar2,uVar6,&piStack_14,**(undefined4 **)(_UNK_0229f60c + 0x229f4ec));
  piVar1 = (int *)0x0;
  if (iVar2 != 0) {
    piVar1 = piStack_14;
  }
  if (iVar2 != 0 && piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    uVar7 = (uint)*(byte *)(**(int **)(_UNK_0229f610 + 0x229f560) + 0xb8);
    uVar4 = (uint)*(byte *)(iVar2 + 0xb8);
    if ((uVar7 <= uVar4) &&
       (*(int *)(*(int *)(iVar2 + 100) + uVar7 * 4 + -4) == **(int **)(_UNK_0229f610 + 0x229f560)))
    {
      uStack_20 = *(undefined8 *)(piVar1 + 6);
      iStack_18 = piVar1[8];
      goto LAB_0229f544;
    }
    uVar7 = (uint)*(byte *)(**(int **)(_UNK_0229f614 + 0x229f594) + 0xb8);
    if ((uVar4 < uVar7) ||
       (*(int *)(*(int *)(iVar2 + 100) + uVar7 * 4 + -4) != **(int **)(_UNK_0229f614 + 0x229f594)))
    {
      uVar7 = (uint)*(byte *)(**(int **)(_UNK_0229f618 + 0x229f5c0) + 0xb8);
      if ((uVar4 < uVar7) ||
         (*(int *)(*(int *)(iVar2 + 100) + uVar7 * 4 + -4) != **(int **)(_UNK_0229f618 + 0x229f5c0))
         ) goto LAB_0229f504;
    }
    uStack_20 = *(undefined8 *)(piVar1 + 3);
    iStack_18 = piVar1[5];
  }
  else {
LAB_0229f504:
    pcVar5 = (char *)(_UNK_0229f61c + 0x229f510);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0229f620 + 0x229f524));
      *pcVar5 = '\x01';
    }
    puVar3 = *(undefined8 **)(**(int **)(_UNK_0229f624 + 0x229f538) + 0x5c);
    uStack_20 = *puVar3;
    iStack_18 = *(int *)(puVar3 + 1);
  }
LAB_0229f544:
  *(int *)(param_1 + 1) = iStack_18;
  *param_1 = uStack_20;
  return;
}



// ===== FAT.Merge.MBItemView$$get_currentStateType RVA 0x228f638 =====

undefined4 FUN_0229f638(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ===== FAT.Merge.MBItemView$$set_currentStateType RVA 0x228f640 =====

void FUN_0229f640(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// ===== FAT.Merge.MBItemView$$get_data RVA 0x228f648 =====

undefined4 FUN_0229f648(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ===== FAT.Merge.MBItemView$$set_data RVA 0x228f650 =====

void FUN_0229f650(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// ===== FAT.Merge.MBItemView$$get_spawnContext RVA 0x228f658 =====

undefined4 FUN_0229f658(int param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



// ===== FAT.Merge.MBItemView$$set_spawnContext RVA 0x228f660 =====

void FUN_0229f660(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}



// ===== FAT.Merge.MBItemView$$get_interactContext RVA 0x228f668 =====

undefined4 FUN_0229f668(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// ===== FAT.Merge.MBItemView$$set_interactContext RVA 0x228f670 =====

void FUN_0229f670(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}



// ===== FAT.Merge.MBItemView$$get_stateChangeContext RVA 0x228f678 =====

undefined4 FUN_0229f678(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ===== FAT.Merge.MBItemView$$set_stateChangeContext RVA 0x228f680 =====

void FUN_0229f680(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}



// ===== FAT.Merge.MBItemView$$get_tapCostComp RVA 0x228f688 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0229f688(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5e8d);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x18);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x5e8e,0);
    if (iVar1 == 0) {
      return *(undefined4 *)(param_1 + 0x10);
    }
    iVar1 = func_0x0229f13c(0x5e8e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5e8d);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar4 = (char *)(_UNK_0218b1e0 + 0x218b100);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0218b1e4 + 0x218b114),param_1,0);
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
  uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0218b1e8 + 0x218b1d0));
  return uVar5;
}



// ===== FAT.Merge.MBItemView$$get_isInBox RVA 0x228f6ec =====

uint FUN_0229f6ec(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x9fd8);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9fd8);
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
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  return (uint)*(byte *)(iVar2 + 0x30);
}



// ===== FAT.Merge.MBItemView$$get_hasNewTip RVA 0x228f748 =====

uint FUN_0229f748(int param_1)

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
  
  iVar2 = func_0x0229f06c(0xa0e4);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa0e4);
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
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  return (uint)*(byte *)(iVar2 + 0x31);
}



// ===== FAT.Merge.MBItemView$$get_hasFlag RVA 0x228f7a4 =====

void FUN_0229f7a4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9f1c);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x24);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x9f1d,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_05189dfc)(iVar1,0);
      return;
    }
    iVar1 = func_0x0229f13c(0x9f1d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9f1c);
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
  func_0x0245496c(&uStack_30,0,0);
  return;
}



// ===== FAT.Merge.MBItemView$$Combo RVA 0x228f808 =====

void FUN_0229f808(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb536);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb536);
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



// ===== FAT.Merge.MBItemView$$SetData RVA 0x228f85c =====

/* WARNING: Possible PIC construction at 0x01e17d28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e17d2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0229f85c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  int iVar5;
  int unaff_r5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 *puVar9;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  bool bVar10;
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
  
  iVar3 = func_0x0229f06c(0x15f8);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x15f8);
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
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x30) = param_2;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  FUN_01e13794(iVar3,param_1,0);
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  FUN_01e100d0(iVar3,param_1,0);
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  FUN_01e165ec(iVar3,param_1,0);
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  FUN_01e0f774(iVar3,param_1,0);
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  FUN_01e1b084(iVar3,param_1,0);
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  FUN_01e0f078(iVar3,param_1,0);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  pcVar6 = (char *)(_UNK_0229fb48 + 0x229f99c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0229fb4c + 0x229f9b0));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x167b);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x167b);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
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
    iVar5 = *(int *)(iVar3 + 0x10);
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
    if (iVar5 != 0) {
      func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar5,0);
    }
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
    func_0x0245495c(iVar5,uVar8,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
    return;
  }
  puVar9 = *(undefined4 **)(_UNK_0229fb50 + 0x229fa00);
  iVar3 = func_0x03668dfc(*puVar9);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x01ddc5c0(iVar3,0);
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = FUN_0210cd28(iVar3,0);
    if (iVar3 != 0) {
      iVar3 = func_0x03668dfc(*puVar9);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x80);
      uVar8 = *(undefined4 *)(param_1 + 0x30);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = (**(code **)(iVar3 + 0xc))
                        (*(undefined4 *)(iVar3 + 0x20),uVar8,*(undefined4 *)(iVar3 + 0x14));
      if (iVar3 != 0) {
        iVar3 = *(int *)(param_1 + 0x14);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        FUN_01e15e9c(iVar3,1,0);
        param_1 = *(int *)(param_1 + 0x20);
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        pcVar6 = (char *)(_UNK_01e17df0 + 0x1e17cbc);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e17df4 + 0x1e17cd0),0);
          func_0x01384978(*(undefined4 *)(_UNK_01e17df8 + 0x1e17cdc));
          *pcVar6 = '\x01';
        }
        iVar3 = func_0x0229f06c(0x1682,0);
        if (iVar3 == 0) {
          iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_01e17dfc + 0x1e17d3c));
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x01ddc5c0(iVar3,0);
          if (iVar3 != 0) {
            iVar3 = *(int *)(param_1 + 0x1c);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar3 = *(int *)(iVar3 + 0x30);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar3 = func_0x02feb690(iVar3,&stack0xffffffec,0,
                                    **(undefined4 **)(_UNK_01e17e00 + 0x1e17d98));
            if (iVar3 != 0) {
              func_0x01384bf0();
              iVar3 = FUN_02123058(0,0);
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              if (*(char *)(iVar3 + 0x2d) != '\0') {
                return;
              }
            }
            FUN_01e17e04(param_1);
          }
          return;
        }
        iVar3 = func_0x0229f13c(0x1682,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        unaff_lr = 0x1e17d2c;
        unaff_r4 = param_1;
        unaff_r5 = iVar3;
        register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
        goto SUB_02173f80;
      }
      iVar3 = func_0x03668dfc(*puVar9);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x84);
      uVar8 = *(undefined4 *)(param_1 + 0x30);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = (**(code **)(iVar3 + 0xc))
                        (*(undefined4 *)(iVar3 + 0x20),uVar8,*(undefined4 *)(iVar3 + 0x14));
      iVar5 = *(int *)(param_1 + 0x14);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      bVar10 = iVar3 != 0;
      pcVar6 = (char *)(_UNK_01e15f78 + 0x1e15eb8);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e15f7c + 0x1e15ecc),bVar10,0);
        *pcVar6 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x167e,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0x167e,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,bVar10,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar3 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar5,0);
        func_0x01485228(&uStack_38,bVar10,0);
        iVar5 = *(int *)(iVar3 + 8);
        uVar8 = *(undefined4 *)(iVar3 + 0xc);
        iVar3 = *(int *)(iVar3 + 0x10);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar4 = 3;
        if (iVar3 == 0) {
          uVar4 = 2;
        }
        func_0x0245495c(iVar5,uVar8,&uStack_38,uVar4,0,0);
        return;
      }
      if (bVar10) {
        uVar8 = 0x3f800000;
      }
      else {
        piVar7 = *(int **)(_UNK_01e15f80 + 0x1e15f3c);
        iVar3 = *piVar7;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar8 = **(undefined4 **)(iVar3 + 0x5c);
      }
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0229f06c(0x167f,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0x167f,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
SUB_0218670c:
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,uVar8,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar3 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar5,0);
        func_0x01485258(&uStack_38,uVar8,0);
        iVar5 = *(int *)(iVar3 + 8);
        uVar8 = *(undefined4 *)(iVar3 + 0xc);
        iVar3 = *(int *)(iVar3 + 0x10);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar4 = 3;
        if (iVar3 == 0) {
          uVar4 = 2;
        }
        func_0x0245495c(iVar5,uVar8,&uStack_38,uVar4,0,0);
        return;
      }
      *(undefined4 *)(iVar5 + 0x44) = uVar8;
      uStack_38 = uVar8;
      if (*(int *)(iVar5 + 0x38) == 1) {
        iVar3 = *(int *)(iVar5 + 0x10);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x0267b6ac(&uStack_30,iVar3,0);
        uVar2 = uStack_28;
        uVar1 = uStack_2c;
        uVar4 = uStack_30;
        iVar3 = *(int *)(iVar5 + 0x10);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = 0;
        func_0x0267b750(iVar3,uVar4,uVar1,uVar2);
        iVar3 = *(int *)(iVar5 + 0x14);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x0267b6ac(&uStack_30,iVar3,0);
        iVar3 = *(int *)(iVar5 + 0x14);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = 0;
        uStack_38 = uVar8;
        func_0x0267b750(iVar3,uStack_30,uStack_2c,uStack_28);
      }
      else if (*(int *)(iVar5 + 0x38) == 2) {
        iVar5 = *(int *)(iVar5 + 0x20);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        pcVar6 = (char *)(_UNK_01e16350 + 0x1e1623c);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e16354 + 0x1e16250));
          *pcVar6 = '\x01';
        }
        iVar3 = func_0x0229f06c(0x1681,0);
        if (iVar3 == 0) {
          uVar8 = *(undefined4 *)(iVar5 + 0x28);
          if (*(int *)(**(int **)(_UNK_01e16358 + 0x1e162b0) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar3 = func_0x0145b1cc(uVar8,0,0);
          if (iVar3 != 0) {
            piVar7 = *(int **)(iVar5 + 0x28);
            if (piVar7 == (int *)0x0) {
              func_0x01384bf0();
            }
            (**(code **)(*piVar7 + 0x170))(&uStack_30,piVar7,*(undefined4 *)(*piVar7 + 0x174));
            piVar7 = *(int **)(iVar5 + 0x28);
            if (piVar7 == (int *)0x0) {
              func_0x01384bf0();
            }
            uStack_34 = *(undefined4 *)(*piVar7 + 0x17c);
            (**(code **)(*piVar7 + 0x178))(piVar7,uStack_30,uStack_2c,uStack_28);
          }
          return;
        }
        iVar3 = func_0x0229f13c(0x1681,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        goto SUB_0218670c;
      }
      return;
    }
  }
  return;
}



// ===== FAT.Merge.MBItemView$$TryApplyFilter RVA 0x228f988 =====

/* WARNING: Possible PIC construction at 0x01e17d28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e17d2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0229f988(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r4;
  int unaff_r5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 *puVar9;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  bool bVar10;
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
  
  pcVar6 = (char *)(_UNK_0229fb48 + 0x229f99c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0229fb4c + 0x229f9b0));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x167b);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x167b);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
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
    iVar4 = *(int *)(iVar3 + 0x10);
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
    iVar4 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar3 == 0) {
      uVar5 = 1;
    }
    *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
    func_0x0245495c(iVar4,uVar8,(undefined1 *)((int)register0x00000054 + -0x30),uVar5);
    return;
  }
  puVar9 = *(undefined4 **)(_UNK_0229fb50 + 0x229fa00);
  iVar3 = func_0x03668dfc(*puVar9);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x01ddc5c0(iVar3,0);
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = FUN_0210cd28(iVar3,0);
    if (iVar3 != 0) {
      iVar3 = func_0x03668dfc(*puVar9);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x80);
      uVar8 = *(undefined4 *)(param_1 + 0x30);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = (**(code **)(iVar3 + 0xc))
                        (*(undefined4 *)(iVar3 + 0x20),uVar8,*(undefined4 *)(iVar3 + 0x14));
      if (iVar3 != 0) {
        iVar3 = *(int *)(param_1 + 0x14);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        FUN_01e15e9c(iVar3,1,0);
        param_1 = *(int *)(param_1 + 0x20);
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        pcVar6 = (char *)(_UNK_01e17df0 + 0x1e17cbc);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e17df4 + 0x1e17cd0),0);
          func_0x01384978(*(undefined4 *)(_UNK_01e17df8 + 0x1e17cdc));
          *pcVar6 = '\x01';
        }
        iVar3 = func_0x0229f06c(0x1682,0);
        if (iVar3 == 0) {
          iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_01e17dfc + 0x1e17d3c));
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x01ddc5c0(iVar3,0);
          if (iVar3 != 0) {
            iVar3 = *(int *)(param_1 + 0x1c);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar3 = *(int *)(iVar3 + 0x30);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar3 = func_0x02feb690(iVar3,&stack0xffffffec,0,
                                    **(undefined4 **)(_UNK_01e17e00 + 0x1e17d98));
            if (iVar3 != 0) {
              func_0x01384bf0();
              iVar3 = FUN_02123058(0,0);
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              if (*(char *)(iVar3 + 0x2d) != '\0') {
                return;
              }
            }
            FUN_01e17e04(param_1);
          }
          return;
        }
        iVar3 = func_0x0229f13c(0x1682,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        unaff_lr = 0x1e17d2c;
        unaff_r4 = param_1;
        unaff_r5 = iVar3;
        register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
        goto SUB_02173f80;
      }
      iVar3 = func_0x03668dfc(*puVar9);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x84);
      uVar8 = *(undefined4 *)(param_1 + 0x30);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = (**(code **)(iVar3 + 0xc))
                        (*(undefined4 *)(iVar3 + 0x20),uVar8,*(undefined4 *)(iVar3 + 0x14));
      iVar4 = *(int *)(param_1 + 0x14);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      bVar10 = iVar3 != 0;
      pcVar6 = (char *)(_UNK_01e15f78 + 0x1e15eb8);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e15f7c + 0x1e15ecc),bVar10,0);
        *pcVar6 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x167e,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0x167e,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,bVar10,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar3 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar4,0);
        func_0x01485228(&uStack_38,bVar10,0);
        iVar4 = *(int *)(iVar3 + 8);
        uVar8 = *(undefined4 *)(iVar3 + 0xc);
        iVar3 = *(int *)(iVar3 + 0x10);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar5 = 3;
        if (iVar3 == 0) {
          uVar5 = 2;
        }
        func_0x0245495c(iVar4,uVar8,&uStack_38,uVar5,0,0);
        return;
      }
      if (bVar10) {
        uVar8 = 0x3f800000;
      }
      else {
        piVar7 = *(int **)(_UNK_01e15f80 + 0x1e15f3c);
        iVar3 = *piVar7;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar8 = **(undefined4 **)(iVar3 + 0x5c);
      }
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0229f06c(0x167f,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0x167f,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
SUB_0218670c:
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,uVar8,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar3 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar4,0);
        func_0x01485258(&uStack_38,uVar8,0);
        iVar4 = *(int *)(iVar3 + 8);
        uVar8 = *(undefined4 *)(iVar3 + 0xc);
        iVar3 = *(int *)(iVar3 + 0x10);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar5 = 3;
        if (iVar3 == 0) {
          uVar5 = 2;
        }
        func_0x0245495c(iVar4,uVar8,&uStack_38,uVar5,0,0);
        return;
      }
      *(undefined4 *)(iVar4 + 0x44) = uVar8;
      uStack_38 = uVar8;
      if (*(int *)(iVar4 + 0x38) == 1) {
        iVar3 = *(int *)(iVar4 + 0x10);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x0267b6ac(&uStack_30,iVar3,0);
        uVar2 = uStack_28;
        uVar1 = uStack_2c;
        uVar5 = uStack_30;
        iVar3 = *(int *)(iVar4 + 0x10);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = 0;
        func_0x0267b750(iVar3,uVar5,uVar1,uVar2);
        iVar3 = *(int *)(iVar4 + 0x14);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x0267b6ac(&uStack_30,iVar3,0);
        iVar3 = *(int *)(iVar4 + 0x14);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = 0;
        uStack_38 = uVar8;
        func_0x0267b750(iVar3,uStack_30,uStack_2c,uStack_28);
      }
      else if (*(int *)(iVar4 + 0x38) == 2) {
        iVar4 = *(int *)(iVar4 + 0x20);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        pcVar6 = (char *)(_UNK_01e16350 + 0x1e1623c);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e16354 + 0x1e16250));
          *pcVar6 = '\x01';
        }
        iVar3 = func_0x0229f06c(0x1681,0);
        if (iVar3 == 0) {
          uVar8 = *(undefined4 *)(iVar4 + 0x28);
          if (*(int *)(**(int **)(_UNK_01e16358 + 0x1e162b0) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar3 = func_0x0145b1cc(uVar8,0,0);
          if (iVar3 != 0) {
            piVar7 = *(int **)(iVar4 + 0x28);
            if (piVar7 == (int *)0x0) {
              func_0x01384bf0();
            }
            (**(code **)(*piVar7 + 0x170))(&uStack_30,piVar7,*(undefined4 *)(*piVar7 + 0x174));
            piVar7 = *(int **)(iVar4 + 0x28);
            if (piVar7 == (int *)0x0) {
              func_0x01384bf0();
            }
            uStack_34 = *(undefined4 *)(*piVar7 + 0x17c);
            (**(code **)(*piVar7 + 0x178))(piVar7,uStack_30,uStack_2c,uStack_28);
          }
          return;
        }
        iVar3 = func_0x0229f13c(0x1681,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        goto SUB_0218670c;
      }
      return;
    }
  }
  return;
}



// ===== FAT.Merge.MBItemView$$ClearData RVA 0x228fb54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0229fb54(int param_1)

{
  int iVar1;
  int *piVar2;
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
  
  pcVar5 = (char *)(_UNK_0229fcec + 0x229fb68);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0229fcf0 + 0x229fb7c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5d94);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5d94);
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
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    iVar4 = *(int *)(param_1 + 0x40);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x03dcf1b0(iVar4,iVar1,**(undefined4 **)(_UNK_0229fcf4 + 0x229fbec));
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar2 + 0xe8))(piVar2,*(undefined4 *)(*piVar2 + 0xec));
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_01e1471c(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_01e10b64(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_01e17458(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_01e0f9d0(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_01e1b3f8(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_01e0f2f0(iVar1,0);
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  func_0x0229fcf8(param_1);
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}



// ===== FAT.Merge.MBItemView$$RemoveFilter RVA 0x228fcf8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0229fcf8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x5da4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01e160d4(iVar1,0);
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x5da6,0);
    if (iVar1 == 0) {
      iVar1 = func_0x0229f06c(0x5da7,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x14);
        pcVar3 = (char *)(_UNK_01e17ff4 + 0x1e17f90);
        if (*pcVar3 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e17ff8 + 0x1e17fa4));
          *pcVar3 = '\x01';
        }
        iVar4 = *(int *)(**(int **)(_UNK_01e17ffc + 0x1e17fbc) + 0x5c);
        uVar5 = *(undefined4 *)(iVar4 + 0xc);
        uVar2 = *(undefined4 *)(iVar4 + 0x10);
        uVar6 = *(undefined4 *)(iVar4 + 0x14);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = 0;
        func_0x024503a4(iVar1,uVar5,uVar2,uVar6);
        return;
      }
      iVar1 = func_0x0229f13c(0x5da7,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x5da6,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5da4);
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



// ===== FAT.Merge.MBItemView$$RefreshOnComponentChange RVA 0x228fd78 =====

/* WARNING: Possible PIC construction at 0x01e17d28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e17d2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0229fd78(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r4;
  char *pcVar6;
  int unaff_r5;
  int *piVar7;
  undefined4 uVar8;
  undefined4 unaff_r6;
  undefined4 *puVar9;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  bool bVar10;
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
  
  iVar3 = func_0x0229f06c(0x9fda);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x14);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    FUN_01e1471c(iVar3,0);
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    FUN_01e10b64(iVar3,0);
    iVar3 = *(int *)(param_1 + 0x20);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    FUN_01e17458(iVar3,0);
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    FUN_01e0f9d0(iVar3,0);
    iVar3 = *(int *)(param_1 + 0x24);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    FUN_01e1b3f8(iVar3,0);
    iVar3 = *(int *)(param_1 + 0x28);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    FUN_01e0f2f0(iVar3,0);
    iVar3 = *(int *)(param_1 + 0x14);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    FUN_01e13794(iVar3,param_1,0);
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    FUN_01e100d0(iVar3,param_1,0);
    iVar3 = *(int *)(param_1 + 0x20);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    FUN_01e165ec(iVar3,param_1,0);
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    FUN_01e0f774(iVar3,param_1,0);
    iVar3 = *(int *)(param_1 + 0x24);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    FUN_01e1b084(iVar3,param_1,0);
    iVar3 = *(int *)(param_1 + 0x28);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    FUN_01e0f078(iVar3,param_1,0);
    pcVar6 = (char *)(_UNK_0229fb48 + 0x229f99c);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0229fb4c + 0x229f9b0));
      *pcVar6 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x167b);
    if (iVar3 == 0) {
      puVar9 = *(undefined4 **)(_UNK_0229fb50 + 0x229fa00);
      iVar3 = func_0x03668dfc(*puVar9);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01ddc5c0(iVar3,0);
      if (iVar3 != 0) {
        iVar3 = *(int *)(param_1 + 0x30);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = FUN_0210cd28(iVar3,0);
        if (iVar3 != 0) {
          iVar3 = func_0x03668dfc(*puVar9);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 0x80);
          uVar8 = *(undefined4 *)(param_1 + 0x30);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = (**(code **)(iVar3 + 0xc))
                            (*(undefined4 *)(iVar3 + 0x20),uVar8,*(undefined4 *)(iVar3 + 0x14));
          if (iVar3 != 0) {
            iVar3 = *(int *)(param_1 + 0x14);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            FUN_01e15e9c(iVar3,1,0);
            param_1 = *(int *)(param_1 + 0x20);
            if (param_1 == 0) {
              func_0x01384bf0();
            }
            pcVar6 = (char *)(_UNK_01e17df0 + 0x1e17cbc);
            if (*pcVar6 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e17df4 + 0x1e17cd0),0);
              func_0x01384978(*(undefined4 *)(_UNK_01e17df8 + 0x1e17cdc));
              *pcVar6 = '\x01';
            }
            iVar3 = func_0x0229f06c(0x1682,0);
            if (iVar3 == 0) {
              iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_01e17dfc + 0x1e17d3c));
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              iVar3 = func_0x01ddc5c0(iVar3,0);
              if (iVar3 != 0) {
                iVar3 = *(int *)(param_1 + 0x1c);
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                iVar3 = *(int *)(iVar3 + 0x30);
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                iVar3 = func_0x02feb690(iVar3,&stack0xffffffec,0,
                                        **(undefined4 **)(_UNK_01e17e00 + 0x1e17d98));
                if (iVar3 != 0) {
                  func_0x01384bf0();
                  iVar3 = FUN_02123058(0,0);
                  if (iVar3 == 0) {
                    func_0x01384bf0();
                  }
                  if (*(char *)(iVar3 + 0x2d) != '\0') {
                    return;
                  }
                }
                FUN_01e17e04(param_1);
              }
              return;
            }
            iVar3 = func_0x0229f13c(0x1682,0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            unaff_lr = 0x1e17d2c;
            unaff_r4 = param_1;
            unaff_r5 = iVar3;
            register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
            goto SUB_02173f80;
          }
          iVar3 = func_0x03668dfc(*puVar9);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 0x84);
          uVar8 = *(undefined4 *)(param_1 + 0x30);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = (**(code **)(iVar3 + 0xc))
                            (*(undefined4 *)(iVar3 + 0x20),uVar8,*(undefined4 *)(iVar3 + 0x14));
          iVar4 = *(int *)(param_1 + 0x14);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          bVar10 = iVar3 != 0;
          pcVar6 = (char *)(_UNK_01e15f78 + 0x1e15eb8);
          if (*pcVar6 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01e15f7c + 0x1e15ecc),bVar10,0);
            *pcVar6 = '\x01';
          }
          iVar3 = func_0x0229f06c(0x167e,0);
          if (iVar3 != 0) {
            iVar3 = func_0x0229f13c(0x167e,0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            uStack_38 = 0;
            uStack_28 = 0;
            func_0x0245494c(&uStack_50,0,bVar10,0);
            uStack_38 = uStack_50;
            uStack_34 = uStack_4c;
            uStack_30 = uStack_48;
            uStack_2c = uStack_44;
            uStack_28 = uStack_40;
            if (*(int *)(iVar3 + 0x10) != 0) {
              func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
            }
            func_0x01485278(&uStack_38,iVar4,0);
            func_0x01485228(&uStack_38,bVar10,0);
            iVar4 = *(int *)(iVar3 + 8);
            uVar8 = *(undefined4 *)(iVar3 + 0xc);
            iVar3 = *(int *)(iVar3 + 0x10);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            uVar5 = 3;
            if (iVar3 == 0) {
              uVar5 = 2;
            }
            func_0x0245495c(iVar4,uVar8,&uStack_38,uVar5,0,0);
            return;
          }
          if (bVar10) {
            uVar8 = 0x3f800000;
          }
          else {
            piVar7 = *(int **)(_UNK_01e15f80 + 0x1e15f3c);
            iVar3 = *piVar7;
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar8 = **(undefined4 **)(iVar3 + 0x5c);
          }
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x0229f06c(0x167f,0);
          if (iVar3 != 0) {
            iVar3 = func_0x0229f13c(0x167f,0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
SUB_0218670c:
            uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            uStack_38 = 0;
            uStack_28 = 0;
            func_0x0245494c(&uStack_50,0,uVar8,0);
            uStack_38 = uStack_50;
            uStack_34 = uStack_4c;
            uStack_30 = uStack_48;
            uStack_2c = uStack_44;
            uStack_28 = uStack_40;
            if (*(int *)(iVar3 + 0x10) != 0) {
              func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
            }
            func_0x01485278(&uStack_38,iVar4,0);
            func_0x01485258(&uStack_38,uVar8,0);
            iVar4 = *(int *)(iVar3 + 8);
            uVar8 = *(undefined4 *)(iVar3 + 0xc);
            iVar3 = *(int *)(iVar3 + 0x10);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            uVar5 = 3;
            if (iVar3 == 0) {
              uVar5 = 2;
            }
            func_0x0245495c(iVar4,uVar8,&uStack_38,uVar5,0,0);
            return;
          }
          *(undefined4 *)(iVar4 + 0x44) = uVar8;
          uStack_38 = uVar8;
          if (*(int *)(iVar4 + 0x38) == 1) {
            iVar3 = *(int *)(iVar4 + 0x10);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            func_0x0267b6ac(&uStack_30,iVar3,0);
            uVar2 = uStack_28;
            uVar1 = uStack_2c;
            uVar5 = uStack_30;
            iVar3 = *(int *)(iVar4 + 0x10);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            uStack_34 = 0;
            func_0x0267b750(iVar3,uVar5,uVar1,uVar2);
            iVar3 = *(int *)(iVar4 + 0x14);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            func_0x0267b6ac(&uStack_30,iVar3,0);
            iVar3 = *(int *)(iVar4 + 0x14);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            uStack_34 = 0;
            uStack_38 = uVar8;
            func_0x0267b750(iVar3,uStack_30,uStack_2c,uStack_28);
          }
          else if (*(int *)(iVar4 + 0x38) == 2) {
            iVar4 = *(int *)(iVar4 + 0x20);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            pcVar6 = (char *)(_UNK_01e16350 + 0x1e1623c);
            if (*pcVar6 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01e16354 + 0x1e16250));
              *pcVar6 = '\x01';
            }
            iVar3 = func_0x0229f06c(0x1681,0);
            if (iVar3 == 0) {
              uVar8 = *(undefined4 *)(iVar4 + 0x28);
              if (*(int *)(**(int **)(_UNK_01e16358 + 0x1e162b0) + 0x74) == 0) {
                func_0x01384ab4();
              }
              iVar3 = func_0x0145b1cc(uVar8,0,0);
              if (iVar3 != 0) {
                piVar7 = *(int **)(iVar4 + 0x28);
                if (piVar7 == (int *)0x0) {
                  func_0x01384bf0();
                }
                (**(code **)(*piVar7 + 0x170))(&uStack_30,piVar7,*(undefined4 *)(*piVar7 + 0x174));
                piVar7 = *(int **)(iVar4 + 0x28);
                if (piVar7 == (int *)0x0) {
                  func_0x01384bf0();
                }
                uStack_34 = *(undefined4 *)(*piVar7 + 0x17c);
                (**(code **)(*piVar7 + 0x178))(piVar7,uStack_30,uStack_2c,uStack_28);
              }
              return;
            }
            iVar3 = func_0x0229f13c(0x1681,0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            goto SUB_0218670c;
          }
          return;
        }
      }
      return;
    }
    iVar3 = func_0x0229f13c(0x167b);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x9fda);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
SUB_02173f80:
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
  iVar4 = *(int *)(iVar3 + 0x10);
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
  iVar4 = *(int *)(iVar3 + 8);
  uVar8 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar3 == 0) {
    uVar5 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar4,uVar8,(undefined1 *)((int)register0x00000054 + -0x30),uVar5);
  return;
}



// ===== FAT.Merge.MBItemView$$RefreshJumpCdState RVA 0x228ff30 =====

/* WARNING: Possible PIC construction at 0x01e16e10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e16e14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0229ff30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  char *pcVar4;
  int unaff_r5;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  int iStack_18;
  int iStack_14;
  
  iVar1 = func_0x0229f06c(0x5f25);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f25);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
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
    iVar2 = *(int *)(iVar1 + 0x10);
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
    if (iVar2 != 0) {
      func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar2,0);
    }
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
    iVar2 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
    func_0x0245495c(iVar2,uVar6,(undefined1 *)((int)register0x00000054 + -0x30),uVar3);
    return;
  }
  param_1 = *(int *)(param_1 + 0x20);
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_01e16ff0 + 0x1e16d94);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e16ff4 + 0x1e16da8),0);
    func_0x01384978(*(undefined4 *)(_UNK_01e16ff8 + 0x1e16db4));
    func_0x01384978(*(undefined4 *)(_UNK_01e16ffc + 0x1e16dc0));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iStack_18 = 0;
  iVar1 = func_0x0229f06c(0x165d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x165d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e16e14;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)&iStack_18;
    goto SUB_02173f80;
  }
  puVar5 = *(undefined4 **)(_UNK_01e17000 + 0x1e16e24);
  iVar1 = func_0x03668dfc(*puVar5);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x78);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_0214197c(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_02139a28(iVar1,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02feb690(iVar1,&iStack_14,0,**(undefined4 **)(_UNK_01e17004 + 0x1e16eac));
    iVar1 = iStack_14;
    if (iVar2 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_02123058(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(char *)(iVar1 + 0x31) != '\0') goto LAB_01e16fcc;
    }
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02feb690(iVar1,&iStack_18,0,**(undefined4 **)(_UNK_01e17008 + 0x1e16f28));
    iVar1 = iStack_18;
    if (iVar2 != 0) {
      if (iStack_18 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_02123568(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_0210e5f4(iVar1,0);
      iVar2 = func_0x03668dfc(*puVar5);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x78);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_0214197c(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_021399d4(iVar2,0);
      if (iVar1 == iVar2) {
LAB_01e16fcc:
        FUN_01e1805c(param_1,0x10);
        return;
      }
    }
  }
  FUN_01e188e4(param_1,0x10);
  return;
}



// ===== FAT.Merge.MBItemView$$RefreshTokenMultiState RVA 0x228ff94 =====

/* WARNING: Possible PIC construction at 0x01e17090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e17094) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0229ff94(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  char *pcVar4;
  int unaff_r5;
  undefined4 uVar5;
  undefined4 unaff_r6;
  undefined4 *puVar6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined1 auStack_20 [4];
  int aiStack_1c [3];
  
  iVar1 = func_0x0229f06c(0x5f30);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01e17214 + 0x1e17024);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e17218 + 0x1e17038),0);
      func_0x01384978(*(undefined4 *)(_UNK_01e1721c + 0x1e17044));
      *pcVar4 = '\x01';
    }
    aiStack_1c[0] = 0;
    iVar1 = func_0x0229f06c(0x165f,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x30);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02feb690(iVar1,aiStack_1c,0,**(undefined4 **)(_UNK_01e17220 + 0x1e170cc));
      iVar1 = aiStack_1c[0];
      if (iVar2 != 0) {
        if (aiStack_1c[0] == 0) {
          func_0x01384bf0();
        }
        uVar5 = FUN_02137ae4(iVar1,0);
        puVar6 = *(undefined4 **)(_UNK_01e17224 + 0x1e17108);
        iVar1 = func_0x03668dfc(*puVar6);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x78);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_021419d0(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = FUN_0215e684(iVar1,0);
        iVar1 = aiStack_1c[0];
        if (iVar2 != 0) {
          if (aiStack_1c[0] == 0) {
            func_0x01384bf0();
          }
          iVar1 = FUN_02123568(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = FUN_0210e5f4(iVar1,0);
          iVar2 = func_0x03668dfc(*puVar6);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x78);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = FUN_021419d0(iVar2,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = FUN_0215e630(iVar2,0);
          if (iVar1 == iVar2) {
            FUN_01e1805c(param_1,uVar5);
            return;
          }
        }
        FUN_01e188e4(param_1,uVar5);
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x165f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e17094;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_20;
  }
  else {
    iVar1 = func_0x0229f13c(0x5f30);
    if (iVar1 == 0) {
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
  iVar2 = *(int *)(iVar1 + 0x10);
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
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar2,uVar5,(undefined1 *)((int)register0x00000054 + -0x30),uVar3);
  return;
}



// ===== FAT.Merge.MBItemView$$AddTokenMultiEffect RVA 0x228fff8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0229fff8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  
  iVar2 = func_0x0229f06c(0x5f32);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01e1a494 + 0x1e1a318);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e1a498 + 0x1e1a32c),0);
      func_0x01384978(*(undefined4 *)(_UNK_01e1a49c + 0x1e1a338));
      *pcVar4 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x5f33,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_01e1a4a0 + 0x1e1a394) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar6 = func_0x01dda730(0x1a,0);
      iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01e1a4a4 + 0x1e1a3c0));
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0243c430(iVar2,uVar6,uVar3,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x024504c0(iVar2,0);
      pcVar4 = (char *)(_UNK_01e1a4a8 + 0x1e1a418);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e1a4ac + 0x1e1a42c));
        *pcVar4 = '\x01';
      }
      puVar1 = *(undefined4 **)(**(int **)(_UNK_01e1a4b0 + 0x1e1a444) + 0x5c);
      uVar7 = *puVar1;
      uVar3 = puVar1[1];
      uVar8 = puVar1[2];
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uStack_28 = 0;
      func_0x0245068c(iVar5,uVar7,uVar3,uVar8);
      pcVar4 = (char *)(_UNK_01dda970 + 0x1dda89c);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01dda974 + 0x1dda8b0),0x40400000,uVar6,0);
        func_0x01384978(*(undefined4 *)(_UNK_01dda978 + 0x1dda8bc));
        *pcVar4 = '\x01';
      }
      iVar5 = func_0x0229f06c(0x5f34,0);
      if (iVar5 == 0) {
        uStack_24 = **(undefined4 **)(_UNK_01dda97c + 0x1dda924);
        uStack_20 = 0xffffffff;
        uStack_1c = uVar6;
        uVar6 = func_0x0244f5f4(&uStack_24,0);
        if (*(int *)(**(int **)(_UNK_01dda980 + 0x1dda948) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x01dda7a0(iVar2,0x40400000,uVar6);
      }
      else {
        iVar5 = func_0x0229f13c(0x5f34,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uStack_28 = 0;
        func_0x02238c78(iVar5,iVar2,0x40400000,uVar6);
      }
      return;
    }
    iVar2 = func_0x0229f13c(0x5f33,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5f32);
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
  return;
}



// ===== FAT.Merge.MBItemView$$RefreshActivityTokenState RVA 0x229005c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a005c(int param_1)

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
  undefined4 auStack_1c [3];
  
  iVar1 = func_0x0229f06c(0x5f3e);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x28);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_01e0f4b0 + 0x1e0f3f8);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e0f4b4 + 0x1e0f40c),0);
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x5f3f,0);
    if (iVar1 == 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x18);
      if (*(int *)(**(int **)(_UNK_01e0f4b8 + 0x1e0f464) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0244fb8c(uVar5,0,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x18);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x30);
        pcVar3 = (char *)(_UNK_01e0f2d4 + 0x1e0f128);
        if (*pcVar3 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e0f2d8 + 0x1e0f13c));
          func_0x01384978(*(undefined4 *)(_UNK_01e0f2dc + 0x1e0f148));
          func_0x01384978(*(undefined4 *)(_UNK_01e0f2e0 + 0x1e0f154));
          *pcVar3 = '\x01';
        }
        auStack_1c[0] = 0;
        iVar4 = func_0x0229f06c(0x1674,0);
        if (iVar4 == 0) {
          FUN_01e0f358(param_1);
          if ((iVar1 != 0) &&
             (iVar1 = func_0x02feb690(iVar1,auStack_1c,0,
                                      **(undefined4 **)(_UNK_01e0f2e4 + 0x1e0f1d0)), iVar1 != 0)) {
            iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e0f2e8 + 0x1e0f1ec));
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 0x78);
            if (iVar1 != 0) {
              uVar5 = 0;
              iVar4 = FUN_021419d0(iVar1,0);
              if (iVar4 == 0) {
                func_0x01384bf0();
              }
              iVar4 = FUN_0215e684(iVar4,0);
              if (iVar4 != 0) {
                iVar4 = FUN_02139cf4(iVar1,0);
                iVar1 = FUN_021419d0(iVar1,0);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                uVar5 = 0;
                uVar2 = FUN_0215e630(iVar1,0);
                if (iVar4 == 0) {
                  func_0x01384bf0();
                }
                iVar1 = FUN_020dfd3c(iVar4,uVar2,0);
                if (iVar1 != 0) {
                  uVar5 = func_0x02feb4f8(iVar1,0,**(undefined4 **)(_UNK_01e0f2ec + 0x1e0f2b0));
                }
              }
              FUN_01e0f510(param_1,auStack_1c[0],uVar5);
            }
          }
        }
        else {
          iVar4 = func_0x0229f13c(0x1674,0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x02174108(iVar4,param_1,iVar1,0);
        }
        return;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x5f3f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5f3e);
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



// ===== FAT.Merge.MBItemView$$GetActivityTokenCtrl RVA 0x22900c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022a00c0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5f3b);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f3b);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02238e58 + 0x2238d78);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02238e5c + 0x2238d8c),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02238e60 + 0x2238e48));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x28);
}



// ===== FAT.Merge.MBItemView$$TryAddGirdRewardPrefab RVA 0x229010c =====

/* WARNING: Possible PIC construction at 0x01e16838: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e1683c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a010c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  char *pcVar5;
  int unaff_r5;
  undefined4 uVar6;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined1 auStack_28 [8];
  int iStack_20;
  undefined4 auStack_1c [3];
  
  iVar2 = func_0x0229f06c(0xa02d);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_01e16978 + 0x1e167bc);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e1697c + 0x1e167d0),0);
      func_0x01384978(*(undefined4 *)(_UNK_01e16980 + 0x1e167dc));
      func_0x01384978(*(undefined4 *)(_UNK_01e16984 + 0x1e167e8));
      *pcVar5 = '\x01';
    }
    auStack_1c[0] = 0;
    iStack_20 = 0;
    iVar2 = func_0x0229f06c(0x164a,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x1c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x30);
      if ((((iVar2 != 0) && (iVar3 = FUN_0210cd28(iVar2,0), iVar3 != 0)) &&
          (iVar3 = FUN_020d83c8(iVar3,0), iVar3 != 0)) &&
         ((iVar3 = FUN_02141a78(iVar3,0), iVar3 != 0 &&
          (iVar2 = FUN_0210f9a4(iVar3,iVar2,auStack_1c,0), iVar2 != 0)))) {
        FUN_01e1805c(param_1,0x1f);
        iVar2 = *(int *)(param_1 + 0x20);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x03dd1078(iVar2,0x1f,&iStack_20,**(undefined4 **)(_UNK_01e16988 + 0x1e168dc));
        iVar2 = iStack_20;
        if (iVar1 != 0) {
          if (iStack_20 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x02fe27b8(iVar2,**(undefined4 **)(_UNK_01e1698c + 0x1e16908));
          if (*(int *)(**(int **)(_UNK_01e16990 + 0x1e16920) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = func_0x0244fb8c(iVar2,0,0);
          uVar6 = auStack_1c[0];
          if (iVar1 == 0) {
            uVar4 = *(undefined4 *)(param_1 + 0x1c);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            FUN_01e18e58(iVar2,iVar3,uVar4,uVar6);
          }
        }
      }
      return;
    }
    iVar2 = func_0x0229f13c(0x164a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e1683c;
    unaff_r4 = param_1;
    unaff_r5 = iVar2;
    register0x00000054 = (BADSPACEBASE *)auStack_28;
  }
  else {
    iVar2 = func_0x0229f13c(0xa02d);
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



// ===== FAT.Merge.MBItemView$$TrySetGirdRewardLocalPos RVA 0x2290170 =====

void FUN_022a0170(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0xa88d);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01e18f80(iVar1,param_2,param_3,param_4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xa88d);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021b96bc(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.MBItemView$$TryPlayGirdRewardTween RVA 0x2290208 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a0208(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_1c;
  
  iVar2 = func_0x0229f06c(0xa887);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa887);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x021a82bc(iVar2,param_1,param_2,param_3,0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar3 = (char *)(_UNK_01e19344 + 0x1e19204);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e19348 + 0x1e19218),param_2,param_3,0);
    func_0x01384978(*(undefined4 *)(_UNK_01e1934c + 0x1e19224));
    func_0x01384978(*(undefined4 *)(_UNK_01e19350 + 0x1e19230));
    *pcVar3 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0xa0a8,0);
  if (iVar1 == 0) {
    iVar2 = *(int *)(iVar2 + 0x20);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03dd1078(iVar2,0x1f,&iStack_1c,**(undefined4 **)(_UNK_01e19354 + 0x1e192b4));
    iVar2 = iStack_1c;
    if (iVar1 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02fe27b8(iVar2,**(undefined4 **)(_UNK_01e19358 + 0x1e192e0));
      if (*(int *)(**(int **)(_UNK_01e1935c + 0x1e192f8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0244fb8c(iVar2,0,0);
      if (iVar1 == 0) {
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        FUN_01e19360(iVar2,param_2,param_3);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa0a8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021a82bc(iVar1,iVar2,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.MBItemView$$TryConsumeGirdReward RVA 0x2290294 =====

/* WARNING: Possible PIC construction at 0x01e19844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e19848) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a0294(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  char *pcVar4;
  int unaff_r5;
  undefined4 uVar5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined1 auStack_18 [4];
  int iStack_14;
  
  iVar1 = func_0x0229f06c(0x9fdb);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01e198f8 + 0x1e197cc);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e198fc + 0x1e197e0),0);
      func_0x01384978(*(undefined4 *)(_UNK_01e19900 + 0x1e197ec));
      func_0x01384978(*(undefined4 *)(_UNK_01e19904 + 0x1e197f8));
      *pcVar4 = '\x01';
    }
    iStack_14 = 0;
    iVar1 = func_0x0229f06c(0x9fdc,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x03dd1078(iVar1,0x1f,&iStack_14,**(undefined4 **)(_UNK_01e19908 + 0x1e19870));
      iVar1 = iStack_14;
      if (iVar2 != 0) {
        if (iStack_14 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02fe27b8(iVar1,**(undefined4 **)(_UNK_01e1990c + 0x1e1989c));
        if (*(int *)(**(int **)(_UNK_01e19910 + 0x1e198b4) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x0244fb8c(iVar1,0,0);
        if (iVar2 == 0) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          FUN_01e19914(iVar1);
        }
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x9fdc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e19848;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar1 = func_0x0229f13c(0x9fdb);
    if (iVar1 == 0) {
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
  iVar2 = *(int *)(iVar1 + 0x10);
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
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar2,uVar5,(undefined1 *)((int)register0x00000054 + -0x30),uVar3);
  return;
}



// ===== FAT.Merge.MBItemView$$TryClickGirdReward RVA 0x22902f8 =====

/* WARNING: Possible PIC construction at 0x01e19a38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e19a3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a02f8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  char *pcVar4;
  int unaff_r5;
  undefined4 uVar5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined1 auStack_18 [4];
  int iStack_14;
  
  iVar1 = func_0x0229f06c(0x9eba);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01e19aec + 0x1e199c0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e19af0 + 0x1e199d4),0);
      func_0x01384978(*(undefined4 *)(_UNK_01e19af4 + 0x1e199e0));
      func_0x01384978(*(undefined4 *)(_UNK_01e19af8 + 0x1e199ec));
      *pcVar4 = '\x01';
    }
    iStack_14 = 0;
    iVar1 = func_0x0229f06c(0x9ebb,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x03dd1078(iVar1,0x1f,&iStack_14,**(undefined4 **)(_UNK_01e19afc + 0x1e19a64));
      iVar1 = iStack_14;
      if (iVar2 != 0) {
        if (iStack_14 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02fe27b8(iVar1,**(undefined4 **)(_UNK_01e19b00 + 0x1e19a90));
        if (*(int *)(**(int **)(_UNK_01e19b04 + 0x1e19aa8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x0244fb8c(iVar1,0,0);
        if (iVar2 == 0) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          FUN_01e19b08(iVar1);
        }
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x9ebb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e19a3c;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar1 = func_0x0229f13c(0x9eba);
    if (iVar1 == 0) {
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
  iVar2 = *(int *)(iVar1 + 0x10);
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
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar2,uVar5,(undefined1 *)((int)register0x00000054 + -0x30),uVar3);
  return;
}



// ===== FAT.Merge.MBItemView$$IsDragging RVA 0x229035c =====

uint FUN_022a035c(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x9f1b);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9f1b);
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
  return (uint)(*(int *)(param_1 + 0x2c) == 2);
}



// ===== FAT.Merge.MBItemView$$IsViewIdle RVA 0x22903b4 =====

uint FUN_022a03b4(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x5e86);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5e86);
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
  return (uint)(*(int *)(param_1 + 0x2c) == 0xc);
}



// ===== FAT.Merge.MBItemView$$IsViewDraggable RVA 0x229040c =====

uint FUN_022a040c(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x9e50);
  if (iVar2 == 0) {
    iVar2 = FUN_022a03b4(param_1);
    uVar1 = 1;
    if (iVar2 == 0) {
      uVar1 = (uint)(*(int *)(param_1 + 0x2c) == 8);
    }
    return uVar1;
  }
  iVar2 = func_0x0229f13c(0x9e50);
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



// ===== FAT.Merge.MBItemView$$IsViewCantSwap RVA 0x2290478 =====

uint FUN_022a0478(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x9eb0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9eb0);
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
  return (uint)((*(uint *)(param_1 + 0x2c) & 0xfffffffd) == 5);
}



// ===== FAT.Merge.MBItemView$$LateUpdate RVA 0x22904d4 =====

/* WARNING: Possible PIC construction at 0x01e13488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e134f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e11fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e1206c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e1209c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e12224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e12254: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e123e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e12410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e12510: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e12414) */
/* WARNING: Removing unreachable block (ram,0x01e123e4) */
/* WARNING: Removing unreachable block (ram,0x01e123f0) */
/* WARNING: Removing unreachable block (ram,0x01e123f4) */
/* WARNING: Removing unreachable block (ram,0x01e12400) */
/* WARNING: Removing unreachable block (ram,0x01e12404) */
/* WARNING: Removing unreachable block (ram,0x01e12258) */
/* WARNING: Removing unreachable block (ram,0x01e12264) */
/* WARNING: Removing unreachable block (ram,0x01e12268) */
/* WARNING: Removing unreachable block (ram,0x01e12274) */
/* WARNING: Removing unreachable block (ram,0x01e12278) */
/* WARNING: Removing unreachable block (ram,0x01e12228) */
/* WARNING: Removing unreachable block (ram,0x01e12234) */
/* WARNING: Removing unreachable block (ram,0x01e12238) */
/* WARNING: Removing unreachable block (ram,0x01e12244) */
/* WARNING: Removing unreachable block (ram,0x01e12248) */
/* WARNING: Removing unreachable block (ram,0x01e120a0) */
/* WARNING: Removing unreachable block (ram,0x01e12070) */
/* WARNING: Removing unreachable block (ram,0x01e1207c) */
/* WARNING: Removing unreachable block (ram,0x01e12080) */
/* WARNING: Removing unreachable block (ram,0x01e1208c) */
/* WARNING: Removing unreachable block (ram,0x01e12090) */
/* WARNING: Removing unreachable block (ram,0x01e11fdc) */
/* WARNING: Removing unreachable block (ram,0x01e120a4) */
/* WARNING: Removing unreachable block (ram,0x01e120ac) */
/* WARNING: Removing unreachable block (ram,0x01e120b0) */
/* WARNING: Removing unreachable block (ram,0x01e120bc) */
/* WARNING: Removing unreachable block (ram,0x01e120c0) */
/* WARNING: Removing unreachable block (ram,0x01e134f4) */
/* WARNING: Removing unreachable block (ram,0x01e1348c) */
/* WARNING: Removing unreachable block (ram,0x01e13494) */
/* WARNING: Removing unreachable block (ram,0x01e13498) */
/* WARNING: Removing unreachable block (ram,0x01e134b4) */
/* WARNING: Removing unreachable block (ram,0x01e134b8) */
/* WARNING: Removing unreachable block (ram,0x01e134d0) */
/* WARNING: Removing unreachable block (ram,0x01e134d4) */
/* WARNING: Removing unreachable block (ram,0x01e134dc) */
/* WARNING: Removing unreachable block (ram,0x01e134e0) */
/* WARNING: Removing unreachable block (ram,0x01e12514) */
/* WARNING: Removing unreachable block (ram,0x01e12518) */
/* WARNING: Removing unreachable block (ram,0x01e12520) */
/* WARNING: Removing unreachable block (ram,0x01e12524) */
/* WARNING: Removing unreachable block (ram,0x01e12530) */
/* WARNING: Removing unreachable block (ram,0x01e12534) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_022a04d4(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  char cVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint uVar7;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 *extraout_r2_01;
  undefined4 *extraout_r2_02;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int extraout_r3_02;
  char *pcVar11;
  int unaff_r4;
  int *piVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  char cVar21;
  byte bVar22;
  uint uVar23;
  bool bVar24;
  undefined8 uVar25;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  uint uStack_20;
  
  iVar3 = func_0x0229f06c(0xb537);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xb537);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    return 0;
  }
  func_0x022a05d4(param_1);
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  FUN_01e0fdd4(iVar3,0);
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  FUN_01e17930(iVar3,0);
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  FUN_01e1b450(iVar3,0);
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = FUN_02116a8c(iVar3,0);
  if (uVar2 != 0) {
    return uVar2;
  }
  if (*(int *)(param_1 + 0x2c) == 0x10) {
    return 0x10;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar16 = func_0x0229f06c(0xa06b,0);
  param_1 = iVar3;
  if (iVar16 != 0) {
    iVar3 = func_0x0229f13c(0xa06b,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  iVar16 = *(int *)(iVar3 + 0x30);
  if (iVar16 == 0) {
    func_0x01384bf0();
  }
  iVar16 = *(int *)(iVar16 + 0x30);
  if (iVar16 == 0) {
    func_0x01384bf0();
  }
  iVar16 = FUN_02116ae0(iVar16,0);
  if (iVar16 == 0) {
    return 0;
  }
  if (*(int *)(iVar3 + 0x40) != 0) {
    iVar16 = func_0x0229f06c(0xa06c,0);
    if (iVar16 != 0) {
      iVar3 = func_0x0229f13c(0xa06c,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02173f80;
    }
    iVar16 = *(int *)(iVar3 + 0x40);
    if (iVar16 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_0211f8ec(iVar16,0);
    if (uVar2 != 0) {
      iVar16 = *(int *)(iVar3 + 0x40);
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      iVar16 = FUN_0211fb6c(iVar16,0);
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      iVar17 = *(int *)(iVar3 + 0x40);
      iVar16 = *(int *)(iVar16 + 0x34);
      if (iVar17 == 0) {
        func_0x01384bf0();
      }
      uStack_28 = FUN_0211fbc0(iVar17,0);
      iVar16 = iVar16 * 1000;
      iStack_24 = (int)uStack_28 >> 0x1f;
      uVar20 = FUN_01e125e0(iVar3,iStack_24,iVar16,iVar16 >> 0x1f);
      iVar16 = *(int *)(iVar3 + 0x18);
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      func_0x0244feac(iVar16,uVar20,0);
    }
    if (*(byte *)(iVar3 + 0x65) != uVar2) {
      FUN_01e106cc(iVar3,uVar2);
    }
    uVar18 = (uint)(*(char *)(iVar3 + 100) != '\0') & (uVar2 ^ 1);
    if (*(byte *)(iVar3 + 0x66) != uVar18) {
      FUN_01e126d0(iVar3,uVar18);
    }
    if (*(byte *)(iVar3 + 0x67) != uVar18) {
      FUN_01e12758(iVar3,uVar18);
    }
    pcVar15 = (char *)(_UNK_01e12934 + 0x1e127f8);
    if (*pcVar15 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e12938 + 0x1e1280c));
      *pcVar15 = '\x01';
    }
    iVar16 = func_0x0229f06c(0xa06e,0);
    if (iVar16 == 0) {
      iVar16 = func_0x03668dfc(**(undefined4 **)(_UNK_01e1293c + 0x1e12868));
      iVar17 = *(int *)(iVar3 + 0x40);
      if (iVar17 == 0) {
        func_0x01384bf0();
      }
      iVar17 = FUN_02123568(iVar17,0);
      if (iVar17 == 0) {
        func_0x01384bf0();
      }
      uVar18 = FUN_0210e5f4(iVar17,0);
      if (uVar2 == 0) {
        iVar3 = *(int *)(iVar3 + 0x40);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = FUN_02123568(iVar3,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar20 = FUN_0210e2d4(iVar3,0);
        if (iVar16 == 0) {
          func_0x01384bf0();
        }
        pcVar15 = (char *)(_UNK_01de9ae4 + 0x1de9a40);
        if (*pcVar15 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01de9ae8 + 0x1de9a54),uVar18,uVar20,0);
          *pcVar15 = '\x01';
        }
        iVar3 = func_0x0229f06c(0x9eed,0);
        if (iVar3 != 0) {
          iVar3 = func_0x0229f13c(0x9eed,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uStack_20 = 0;
          uVar2 = func_0x02179a68(iVar3,iVar16,uVar18,uVar20);
          return uVar2;
        }
        iVar3 = *(int *)(iVar16 + 0x48);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
LAB_03d5bb8c:
        uVar2 = func_0x03d5a8e0(iVar3,uVar18,uVar20,0);
        return uVar2;
      }
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      pcVar15 = (char *)(_UNK_01de9a14 + 0x1de9984);
      if (*pcVar15 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01de9a18 + 0x1de9998),uVar18,0);
        *pcVar15 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x1648,0);
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar16 + 0x44);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iStack_34 = **(int **)(_UNK_01de9a1c + 0x1de9a08);
SUB_03d5b44c:
        if (*(int *)(iVar3 + 8) != 0) {
          piVar12 = *(int **)(iVar3 + 0x20);
          iStack_30 = iVar3;
          uStack_28 = uVar18;
          if (piVar12 == (int *)0x0) {
            uVar2 = func_0x04821a00(&uStack_28,
                                    *(undefined4 *)
                                     (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc4));
          }
          else {
            iVar3 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
              iVar3 = func_0x02457d84(iVar3);
            }
            iVar16 = *piVar12;
            uVar2 = (uint)*(ushort *)(iVar16 + 0xb6);
            if (uVar2 != 0) {
              piVar10 = (int *)(*(int *)(iVar16 + 0x58) + 4);
              do {
                if (piVar10[-1] == iVar3) {
                  puVar4 = (undefined4 *)(iVar16 + *piVar10 * 8 + 200);
                  goto LAB_03d5b514;
                }
                uVar2 = uVar2 - 1;
                piVar10 = piVar10 + 2;
              } while (uVar2 != 0);
            }
            puVar4 = (undefined4 *)func_0x02457d88(piVar12,iVar3,1);
LAB_03d5b514:
            uVar2 = (*(code *)*puVar4)(piVar12,uVar18,puVar4[1]);
            iVar3 = iStack_30;
          }
          uVar23 = *(uint *)(iVar3 + 8);
          uVar18 = uVar23;
          if (uVar23 == 0) {
            func_0x02457d50();
            uVar18 = *(uint *)(iStack_30 + 8);
            if (uVar18 == 0) {
              uVar25 = func_0x02457d50();
              uVar20 = (undefined4)((ulonglong)uVar25 >> 0x20);
              iVar3 = (int)uVar25;
              uStack_54 = 0;
              if (*(int *)(iVar3 + 8) != 0) {
                piVar12 = *(int **)(iVar3 + 0x20);
                uStack_60 = uVar20;
                uStack_5c = uVar2;
                uStack_58 = uVar18;
                uStack_50 = uVar23;
                if (piVar12 == (int *)0x0) {
                  uVar2 = func_0x04821a00(&uStack_60,
                                          *(undefined4 *)
                                           (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0xc4));
                }
                else {
                  iVar16 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar16 + 0xbd) & 1) == 0) {
                    iVar16 = func_0x02457d84(iVar16);
                  }
                  iVar17 = *piVar12;
                  uVar2 = (uint)*(ushort *)(iVar17 + 0xb6);
                  if (uVar2 != 0) {
                    piVar10 = (int *)(*(int *)(iVar17 + 0x58) + 4);
                    do {
                      if (piVar10[-1] == iVar16) {
                        puVar4 = (undefined4 *)(iVar17 + *piVar10 * 8 + 200);
                        goto LAB_03d5b878;
                      }
                      uVar2 = uVar2 - 1;
                      piVar10 = piVar10 + 2;
                    } while (uVar2 != 0);
                  }
                  puVar4 = (undefined4 *)func_0x02457d88(piVar12,iVar16,1);
LAB_03d5b878:
                  uVar2 = (*(code *)*puVar4)(piVar12,uVar20,puVar4[1]);
                }
                iVar17 = *(int *)(iVar3 + 8);
                iVar16 = iVar17;
                if (iVar17 == 0) {
                  func_0x02457d50();
                  iVar16 = *(int *)(iVar3 + 8);
                  if (iVar16 == 0) {
                    uVar25 = func_0x02457d50();
                    uVar2 = func_0x03d5a510((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),
                                            *(undefined4 *)
                                             (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) +
                                             0x84));
                    if ((int)uVar2 < 0) {
                      uVar20 = 0;
                    }
                    else {
                      iVar3 = *(int *)((int)uVar25 + 0xc);
                      if (iVar3 == 0) {
                        func_0x02457d50();
                      }
                      if (*(uint *)(iVar3 + 0xc) <= uVar2) {
                        func_0x02457d5c();
                      }
                      uVar20 = *(undefined4 *)(iVar3 + uVar2 * 0x10 + 0x1c);
                    }
                    *extraout_r2_00 = uVar20;
                    return ~uVar2 >> 0x1f;
                  }
                }
                func_0x02457e94(uVar2 & 0x7fffffff,*(undefined4 *)(iVar17 + 0xc));
                if (*(uint *)(iVar16 + 0xc) <= extraout_r1_00) {
                  func_0x02457d5c();
                }
                uVar18 = *(int *)(iVar16 + extraout_r1_00 * 4 + 0x10) - 1;
                if (-1 < (int)uVar18) {
                  uVar23 = 0xffffffff;
                  do {
                    uVar7 = uVar18;
                    iVar16 = *(int *)(iVar3 + 0xc);
                    if (iVar16 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar16 + 0xc) <= uVar7) {
                      func_0x02457d5c();
                    }
                    uVar20 = uStack_60;
                    iVar16 = iVar16 + uVar7 * 0x10;
                    if (*(uint *)(iVar16 + 0x10) == (uVar2 & 0x7fffffff)) {
                      piVar12 = *(int **)(iVar3 + 0x20);
                      if (piVar12 == (int *)0x0) {
                        piVar12 = (int *)func_0x02ecaf98(*(undefined4 *)
                                                          (*(int *)(*(int *)(extraout_r3 + 0x10) +
                                                                   0x60) + 0xc));
                        uVar20 = uStack_60;
                        uVar9 = *(undefined4 *)(iVar16 + 0x18);
                        if (piVar12 == (int *)0x0) {
                          func_0x02457d50(0,uVar9);
                        }
                        iVar17 = (**(code **)(*piVar12 + 0x100))
                                           (piVar12,uVar9,uVar20,*(undefined4 *)(*piVar12 + 0x104));
                      }
                      else {
                        uVar9 = *(undefined4 *)(iVar16 + 0x18);
                        if (piVar12 == (int *)0x0) {
                          func_0x02457d50();
                        }
                        iVar17 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                        if ((*(ushort *)(iVar17 + 0xbd) & 1) == 0) {
                          iVar17 = func_0x02457d84(iVar17);
                        }
                        iVar5 = *piVar12;
                        uVar18 = (uint)*(ushort *)(iVar5 + 0xb6);
                        if (uVar18 != 0) {
                          piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                          do {
                            if (piVar10[-1] == iVar17) {
                              puVar4 = (undefined4 *)(iVar5 + *piVar10 * 8 + 0xc0);
                              goto LAB_03d5ba20;
                            }
                            uVar18 = uVar18 - 1;
                            piVar10 = piVar10 + 2;
                          } while (uVar18 != 0);
                        }
                        puVar4 = (undefined4 *)func_0x02457d88(piVar12,iVar17,0);
LAB_03d5ba20:
                        iVar17 = (*(code *)*puVar4)(piVar12,uVar9,uVar20,puVar4[1]);
                      }
                      if (iVar17 != 0) {
                        if ((int)uVar23 < 0) {
                          iVar17 = *(int *)(iVar3 + 8);
                          iVar5 = *(int *)(iVar16 + 0x14);
                          if (iVar17 == 0) {
                            func_0x02457d50();
                          }
                          if (*(uint *)(iVar17 + 0xc) <= extraout_r1_00) {
                            func_0x02457d5c();
                          }
                          *(int *)(iVar17 + extraout_r1_00 * 4 + 0x10) = iVar5 + 1;
                        }
                        else {
                          iVar17 = *(int *)(iVar3 + 0xc);
                          if (iVar17 == 0) {
                            func_0x02457d50();
                          }
                          uVar20 = *(undefined4 *)(iVar16 + 0x14);
                          if (*(uint *)(iVar17 + 0xc) <= uVar23) {
                            func_0x02457d5c();
                          }
                          *(undefined4 *)(iVar17 + uVar23 * 0x10 + 0x14) = uVar20;
                        }
                        *extraout_r2 = *(undefined4 *)(iVar16 + 0x1c);
                        uVar20 = *(undefined4 *)(iVar3 + 0x14);
                        iVar17 = *(int *)(iVar3 + 0x18);
                        iVar5 = *(int *)(iVar3 + 0x1c);
                        *(uint *)(iVar16 + 0x10) = 0xffffffff;
                        *(int *)(iVar3 + 0x18) = iVar17 + 1;
                        *(int *)(iVar3 + 0x1c) = iVar5 + 1;
                        *(uint *)(iVar3 + 0x14) = uVar7;
                        *(undefined4 *)(iVar16 + 0x14) = uVar20;
                        return 1;
                      }
                    }
                    uVar18 = *(uint *)(iVar16 + 0x14);
                    uVar23 = uVar7;
                  } while (*(uint *)(iVar16 + 0x14) < 0x80000000);
                }
              }
              *extraout_r2 = 0;
              return 0;
            }
          }
          uStack_2c = uVar2 & 0x7fffffff;
          func_0x02457e94(uStack_2c,*(undefined4 *)(uVar23 + 0xc));
          if (*(uint *)(uVar18 + 0xc) <= extraout_r1) {
            func_0x02457d5c();
          }
          uVar2 = *(int *)(uVar18 + extraout_r1 * 4 + 0x10) - 1;
          if (-1 < (int)uVar2) {
            iVar3 = iStack_30;
            uVar18 = 0xffffffff;
            uStack_38 = extraout_r1;
            do {
              uVar23 = uVar2;
              iVar16 = *(int *)(iVar3 + 0xc);
              if (iVar16 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar16 + 0xc) <= uVar23) {
                func_0x02457d5c();
              }
              uVar2 = uStack_28;
              iVar16 = iVar16 + uVar23 * 0x10;
              if (*(uint *)(iVar16 + 0x10) == uStack_2c) {
                piVar12 = *(int **)(iVar3 + 0x20);
                if (piVar12 == (int *)0x0) {
                  piVar12 = (int *)func_0x02ecaf98(*(undefined4 *)
                                                    (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) +
                                                    0xc));
                  uVar2 = uStack_28;
                  uVar20 = *(undefined4 *)(iVar16 + 0x18);
                  if (piVar12 == (int *)0x0) {
                    func_0x02457d50(0,uVar20);
                  }
                  iVar17 = (**(code **)(*piVar12 + 0x100))
                                     (piVar12,uVar20,uVar2,*(undefined4 *)(*piVar12 + 0x104));
                }
                else {
                  uVar20 = *(undefined4 *)(iVar16 + 0x18);
                  if (piVar12 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar3 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
                    iVar3 = func_0x02457d84(iVar3);
                  }
                  iVar17 = *piVar12;
                  uVar7 = (uint)*(ushort *)(iVar17 + 0xb6);
                  if (uVar7 != 0) {
                    piVar10 = (int *)(*(int *)(iVar17 + 0x58) + 4);
                    do {
                      if (piVar10[-1] == iVar3) {
                        puVar4 = (undefined4 *)(iVar17 + *piVar10 * 8 + 0xc0);
                        goto LAB_03d5b6c0;
                      }
                      uVar7 = uVar7 - 1;
                      piVar10 = piVar10 + 2;
                    } while (uVar7 != 0);
                  }
                  puVar4 = (undefined4 *)func_0x02457d88(piVar12,iVar3,0);
LAB_03d5b6c0:
                  iVar17 = (*(code *)*puVar4)(piVar12,uVar20,uVar2,puVar4[1]);
                }
                iVar3 = iStack_30;
                if (iVar17 != 0) {
                  if ((int)uVar18 < 0) {
                    iVar3 = *(int *)(iStack_30 + 8);
                    iVar17 = *(int *)(iVar16 + 0x14);
                    if (iVar3 == 0) {
                      func_0x02457d50();
                    }
                    uVar2 = uStack_38;
                    if (*(uint *)(iVar3 + 0xc) <= uStack_38) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar3 + uVar2 * 4 + 0x10) = iVar17 + 1;
                  }
                  else {
                    iVar3 = *(int *)(iStack_30 + 0xc);
                    if (iVar3 == 0) {
                      func_0x02457d50();
                    }
                    uVar20 = *(undefined4 *)(iVar16 + 0x14);
                    if (*(uint *)(iVar3 + 0xc) <= uVar18) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar3 + uVar18 * 0x10 + 0x14) = uVar20;
                  }
                  *(uint *)(iVar16 + 0x10) = 0xffffffff;
                  uVar20 = *(undefined4 *)(iStack_30 + 0x14);
                  *(int *)(iStack_30 + 0x18) = *(int *)(iStack_30 + 0x18) + 1;
                  *(uint *)(iStack_30 + 0x14) = uVar23;
                  *(int *)(iStack_30 + 0x1c) = *(int *)(iStack_30 + 0x1c) + 1;
                  *(undefined4 *)(iVar16 + 0x14) = uVar20;
                  return 1;
                }
              }
              uVar2 = *(uint *)(iVar16 + 0x14);
              uVar18 = uVar23;
            } while (*(uint *)(iVar16 + 0x14) < 0x80000000);
          }
        }
        return 0;
      }
      iVar3 = func_0x0229f13c(0x1648,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
SUB_021773c4:
      iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,uVar18,0);
      uStack_38 = uStack_50;
      iStack_34 = uStack_4c;
      iStack_30 = iStack_48;
      if (*(int *)(iVar3 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
      }
      func_0x01485278(&uStack_38,iVar16,0);
      func_0x01485238(&uStack_38,uVar18,0);
      iVar16 = *(int *)(iVar3 + 8);
      uVar20 = *(undefined4 *)(iVar3 + 0xc);
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      uVar9 = 3;
      if (iVar3 == 0) {
        uVar9 = 2;
      }
      uStack_58 = 0;
      uStack_54 = 0;
      uVar2 = func_0x0245495c(iVar16,uVar20,&uStack_38,uVar9);
      return uVar2;
    }
    iVar16 = func_0x0229f13c(0xa06e,0);
    if (iVar16 == 0) {
      func_0x01384bf0();
    }
    goto SUB_021744a8;
  }
  if (*(int *)(iVar3 + 0x34) == 0) {
    if (*(int *)(iVar3 + 0x38) != 0) {
      iVar16 = func_0x0229f06c(0xa07d,0);
      if (iVar16 != 0) {
        iVar3 = func_0x0229f13c(0xa07d,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        goto SUB_02173f80;
      }
      iVar16 = *(int *)(iVar3 + 0x38);
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      uVar2 = FUN_0212fa48(iVar16,0);
      iVar17 = *(int *)(iVar3 + 0x30);
      if (iVar17 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar17 + 0x2c) == 0xf) {
        if (iVar16 == 0) {
          func_0x01384bf0();
        }
        uVar2 = FUN_0212f8d4(iVar16,0);
      }
      if (iVar16 == 0) {
        func_0x01384bf0();
        bVar22 = 0;
        iVar17 = FUN_0212f990(0,0);
        if (iVar17 < 1) {
          func_0x01384bf0();
          bVar22 = 0;
          iVar17 = FUN_0212f734(0,0);
          func_0x01384bf0();
          if (iVar17 != 0) goto LAB_01e1175c;
          iVar17 = FUN_0212f82c(0,0);
          if (0 < iVar17) {
            func_0x01384bf0();
            iVar17 = FUN_0212f82c(0,0);
            func_0x01384bf0();
            goto LAB_01e117cc;
          }
        }
      }
      else {
        bVar22 = 0;
        iVar17 = FUN_0212f990(iVar16,0);
        if (iVar17 < 1) {
          bVar22 = 0;
          iVar17 = FUN_0212f734(iVar16,0);
          if (iVar17 == 0) {
            iVar17 = FUN_0212f82c(iVar16,0);
            if (iVar17 < 1) goto LAB_01e11818;
            iVar17 = FUN_0212f82c(iVar16,0);
LAB_01e117cc:
            uStack_28 = FUN_0212f9e4(iVar16,0);
          }
          else {
LAB_01e1175c:
            iVar17 = FUN_0212fb30(iVar16,0);
            if (iVar17 == 0) {
              func_0x01384bf0();
            }
            iVar17 = *(int *)(iVar17 + 0x30);
            if (iVar16 == 0) {
              func_0x01384bf0();
            }
            uStack_28 = FUN_0212f6e0(iVar16,0);
            iVar17 = iVar17 * 1000;
          }
          iStack_24 = (int)uStack_28 >> 0x1f;
          uVar20 = FUN_01e125e0(iVar3,iStack_24,iVar17,iVar17 >> 0x1f);
          iVar17 = *(int *)(iVar3 + 0x18);
          if (iVar17 == 0) {
            func_0x01384bf0();
          }
          func_0x0244feac(iVar17,uVar20,0);
          bVar22 = 1;
        }
      }
LAB_01e11818:
      if (*(byte *)(iVar3 + 0x65) != bVar22) {
        FUN_01e106cc(iVar3,bVar22);
      }
      if (*(char *)(iVar3 + 0x66) != '\0') {
        FUN_01e126d0(iVar3,0);
      }
      if (uVar2 == *(uint *)(iVar3 + 0x80)) {
        return *(uint *)(iVar3 + 0x80);
      }
      FUN_01e132bc(iVar3,bVar22 ^ 1);
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      iVar17 = *(int *)(iVar16 + 0x38);
      uStack_20 = unaff_r4;
      iVar16 = func_0x0229f06c(0xa081,0);
      if (iVar16 != 0) {
        iVar16 = func_0x0229f13c(0xa081,0);
        if (iVar16 == 0) {
          func_0x01384bf0();
        }
        uStack_28 = 0;
        uVar2 = func_0x02179a68(iVar16,iVar3,uVar2,iVar17);
        return uVar2;
      }
      iVar3 = *(int *)(iVar3 + 0x2c);
      if (iVar3 == 0) {
        func_0x01384bf0();
        uVar2 = func_0x02450148(0,0);
        if ((int)uVar2 < 1) {
          return uVar2;
        }
        func_0x01384bf0();
      }
      else {
        uVar2 = func_0x02450148(iVar3,0);
        if ((int)uVar2 < 1) {
          return uVar2;
        }
      }
      iVar3 = func_0x02450158(iVar3,0,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0244ffd4(iVar3,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (iVar17 < 1) {
        uVar20 = 0;
      }
      else {
        uVar20 = 1;
      }
SUB_0244ffe4:
      uVar2 = (*(code *)&UNK_05189da8)(iVar3,uVar20,0);
      return uVar2;
    }
    if (*(int *)(iVar3 + 0x3c) != 0) {
      iVar16 = func_0x0229f06c(0xa082,0);
      if (iVar16 == 0) {
        iVar16 = *(int *)(iVar3 + 0x3c);
        if (iVar16 == 0) {
          func_0x01384bf0();
        }
        iVar16 = FUN_0211bf04(iVar16,0);
        if (iVar16 < 1) {
          iVar17 = *(int *)(iVar3 + 0x3c);
          if (iVar17 == 0) {
            func_0x01384bf0();
          }
          uVar25 = FUN_0211bfcc(iVar17,0);
          iVar17 = *(int *)(iVar3 + 0x3c);
          if (iVar17 == 0) {
            func_0x01384bf0();
          }
          iStack_30 = FUN_0211be60(iVar17,0);
          uStack_2c = iStack_30 >> 0x1f;
          uVar20 = FUN_01e125e0(iVar3,uStack_2c,(int)uVar25,(int)((ulonglong)uVar25 >> 0x20));
          iVar17 = *(int *)(iVar3 + 0x18);
          if (iVar17 == 0) {
            func_0x01384bf0();
          }
          func_0x0244feac(iVar17,uVar20,0);
        }
        if ((bool)*(char *)(iVar3 + 0x65) != iVar16 < 1) {
          FUN_01e106cc(iVar3,iVar16 < 1);
        }
        if ((bool)*(char *)(iVar3 + 0x66) != 0 < iVar16) {
          FUN_01e126d0(iVar3,0 < iVar16);
        }
        uVar2 = (uint)(iVar16 < 1);
        pcVar15 = (char *)(_UNK_01e13650 + 0x1e13514);
        if (*pcVar15 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e13654 + 0x1e13528));
          *pcVar15 = '\x01';
        }
        iVar16 = func_0x0229f06c(0xa083,0);
        if (iVar16 == 0) {
          iVar16 = func_0x03668dfc(**(undefined4 **)(_UNK_01e13658 + 0x1e13584));
          iVar17 = *(int *)(iVar3 + 0x3c);
          if (iVar17 == 0) {
            func_0x01384bf0();
          }
          iVar17 = FUN_02123568(iVar17,0);
          if (iVar17 == 0) {
            func_0x01384bf0();
          }
          uVar18 = FUN_0210e5f4(iVar17,0);
          if (uVar2 == 0) {
            iVar3 = *(int *)(iVar3 + 0x3c);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar3 = FUN_02123568(iVar3,0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            uVar20 = FUN_0210e2d4(iVar3,0);
            if (iVar16 == 0) {
              func_0x01384bf0();
            }
            pcVar15 = (char *)(_UNK_01de9c68 + 0x1de9bc4);
            if (*pcVar15 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01de9c6c + 0x1de9bd8),uVar18,uVar20,0);
              *pcVar15 = '\x01';
            }
            iVar3 = func_0x0229f06c(0x9eef,0);
            if (iVar3 != 0) {
              iVar3 = func_0x0229f13c(0x9eef,0);
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              uStack_20 = 0;
              uVar2 = func_0x02179a68(iVar3,iVar16,uVar18,uVar20);
              return uVar2;
            }
            iVar3 = *(int *)(iVar16 + 0x4c);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            goto LAB_03d5bb8c;
          }
          if (iVar16 == 0) {
            func_0x01384bf0();
          }
          pcVar15 = (char *)(_UNK_01de9d1c + 0x1de9c8c);
          if (*pcVar15 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01de9d20 + 0x1de9ca0),uVar18,0);
            *pcVar15 = '\x01';
          }
          iVar3 = func_0x0229f06c(0x9ef0,0);
          if (iVar3 == 0) {
            iVar3 = *(int *)(iVar16 + 0x4c);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iStack_34 = **(int **)(_UNK_01de9d24 + 0x1de9d10);
            goto SUB_03d5b44c;
          }
          iVar3 = func_0x0229f13c(0x9ef0,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          goto SUB_021773c4;
        }
        iVar16 = func_0x0229f13c(0xa083,0);
        if (iVar16 == 0) {
          func_0x01384bf0();
        }
        goto SUB_021744a8;
      }
      iVar3 = func_0x0229f13c(0xa082,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02173f80;
    }
    if (*(int *)(iVar3 + 0x48) != 0) {
      iVar16 = func_0x0229f06c(0xa084,0);
      if (iVar16 != 0) {
        iVar3 = func_0x0229f13c(0xa084,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        goto SUB_02173f80;
      }
      uVar18 = FUN_01e1365c(iVar3);
      uVar2 = uVar18 ^ 1;
      if (*(byte *)(iVar3 + 0x66) == uVar2) {
        return uVar18;
      }
      goto code_r0x01e126d0;
    }
    if (*(int *)(iVar3 + 0x44) == 0) {
      if ((*(int *)(iVar3 + 0x4c) != 0) &&
         (iVar16 = FUN_0212f4e4(*(int *)(iVar3 + 0x4c),0), iVar16 == 6)) {
        iVar16 = func_0x0229f06c(0xa08a,0);
        if (iVar16 == 0) {
          iVar16 = *(int *)(iVar3 + 0x4c);
          if (iVar16 == 0) {
            func_0x01384bf0();
          }
          iVar16 = FUN_021326c4(iVar16,0);
          if (iVar16 == 0) {
            return 0;
          }
          iVar16 = *(int *)(iVar3 + 0x4c);
          iVar17 = *(int *)(iVar3 + 0x20);
          if (iVar16 == 0) {
            func_0x01384bf0();
          }
          iVar16 = FUN_0213273c(iVar16,0);
          iVar5 = *(int *)(iVar3 + 0x4c);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = FUN_0213273c(iVar5,0);
          iVar14 = *(int *)(iVar3 + 0x4c);
          if (iVar14 == 0) {
            func_0x01384bf0();
          }
          iVar14 = FUN_0213284c(iVar14,0);
          uStack_28 = iVar5 - iVar14;
          iStack_24 = (int)uStack_28 >> 0x1f;
          uVar20 = FUN_01e125e0(iVar3,iStack_24,iVar16,iVar16 >> 0x1f);
          if (iVar17 == 0) {
            func_0x01384bf0();
          }
          func_0x0244feac(iVar17,uVar20,0);
          iVar3 = *(int *)(iVar3 + 0x1c);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar20 = 1;
          goto SUB_0244ffe4;
        }
        iVar3 = func_0x0229f13c(0xa08a,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        goto SUB_02173f80;
      }
      if (*(int *)(iVar3 + 0x50) == 0) {
        if (*(int *)(iVar3 + 0x58) != 0) {
          pcVar15 = (char *)(_UNK_01e12290 + 0x1e12110);
          if (*pcVar15 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01e12294 + 0x1e12124));
            *pcVar15 = '\x01';
          }
          iVar16 = func_0x0229f06c(0xa08c,0);
          if (iVar16 != 0) {
            iVar3 = func_0x0229f13c(0xa08c,0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            goto SUB_02173f80;
          }
          iVar16 = *(int *)(iVar3 + 0x28);
          iVar17 = *(int *)(iVar3 + 0x58);
          if (iVar16 == 0) {
            func_0x01384bf0();
          }
          uVar20 = *(undefined4 *)(iVar16 + 0x10);
          if (iVar17 == 0) {
            func_0x01384bf0();
          }
          uVar25 = FUN_0211e5f0(iVar17,0);
          if (*(int *)(**(int **)(_UNK_01e12298 + 0x1e121bc) + 0x74) == 0) {
            func_0x01384ab4();
          }
          uVar25 = func_0x01458584((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),1000,0);
          uVar9 = (undefined4)((ulonglong)uVar25 >> 0x20);
          uStack_20 = 0;
          func_0x02089060(uVar20,uVar9,(int)uVar25,uVar9);
          iVar3 = *(int *)(iVar3 + 0x28);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 0xc);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar20 = 0;
          goto SUB_0244ffe4;
        }
        if (*(int *)(iVar3 + 0x5c) != 0) {
          pcVar15 = (char *)(_UNK_01e1254c + 0x1e122b4);
          if (*pcVar15 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01e12550 + 0x1e122c8));
            *pcVar15 = '\x01';
          }
          iVar16 = func_0x0229f06c(0xa08d,0);
          if (iVar16 == 0) {
            iVar16 = *(int *)(iVar3 + 0x5c);
            if (iVar16 == 0) {
              func_0x01384bf0();
            }
            iVar17 = FUN_02137748(iVar16,0);
            if (iVar17 == 0) {
              iVar17 = *(int *)(iVar3 + 0x24);
              if (iVar17 == 0) {
                func_0x01384bf0();
              }
              iVar17 = *(int *)(iVar17 + 8);
              if (iVar17 == 0) {
                func_0x01384bf0();
              }
              uVar2 = func_0x02450114(iVar17,0);
              if (uVar2 != 0) {
                return uVar2;
              }
              iVar17 = *(int *)(iVar3 + 0x24);
              if (iVar17 == 0) {
                func_0x01384bf0();
              }
              uVar20 = *(undefined4 *)(iVar17 + 0x10);
              if (iVar16 == 0) {
                func_0x01384bf0();
              }
              iVar16 = FUN_021378d4(iVar16,0);
              if (iVar16 == 0) {
                func_0x01384bf0();
              }
              iVar16 = *(int *)(iVar16 + 0x18);
              if (*(int *)(**(int **)(_UNK_01e12558 + 0x1e124a0) + 0x74) == 0) {
                func_0x01384ab4();
              }
              uStack_20 = 1;
              iVar17 = iVar16 >> 0x1f;
              iVar16 = iVar16 / 1000 + iVar17;
              iVar17 = iVar16 - iVar17;
              func_0x02089060(uVar20,iVar16,iVar17,iVar17 >> 0x1f);
              iVar3 = *(int *)(iVar3 + 0x24);
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              iVar3 = *(int *)(iVar3 + 8);
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              uVar20 = 1;
            }
            else {
              iVar17 = *(int *)(iVar3 + 0x28);
              if (iVar17 == 0) {
                func_0x01384bf0();
              }
              uVar20 = *(undefined4 *)(iVar17 + 0x10);
              if (iVar16 == 0) {
                func_0x01384bf0();
              }
              iVar16 = FUN_02137828(iVar16,0);
              if (*(int *)(**(int **)(_UNK_01e12554 + 0x1e1237c) + 0x74) == 0) {
                func_0x01384ab4();
              }
              uStack_20 = 0;
              iVar17 = iVar16 / 1000 + (iVar16 >> 0x1f);
              iVar16 = iVar17 - (iVar16 >> 0x1f);
              func_0x02089060(uVar20,iVar17,iVar16,iVar16 >> 0x1f);
              iVar3 = *(int *)(iVar3 + 0x28);
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              iVar3 = *(int *)(iVar3 + 0xc);
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              uVar20 = 0;
            }
            goto SUB_0244ffe4;
          }
          iVar3 = func_0x0229f13c(0xa08d,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          goto SUB_02173f80;
        }
        if (*(int *)(iVar3 + 0x60) == 0) {
          return 0;
        }
        iVar16 = func_0x0229f06c(0xa091,0);
        if (iVar16 != 0) {
          iVar3 = func_0x0229f13c(0xa091,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          goto SUB_02173f80;
        }
        iVar16 = *(int *)(iVar3 + 0x60);
        if (iVar16 == 0) {
          func_0x01384bf0();
        }
        uVar2 = FUN_02136cb8(iVar16,0);
        if (*(byte *)(iVar3 + 0x66) == uVar2) {
          return (uint)*(byte *)(iVar3 + 0x66);
        }
        goto code_r0x01e126d0;
      }
      pcVar15 = (char *)(_UNK_01e120d8 + 0x1e11d84);
      if (*pcVar15 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e120dc + 0x1e11d98));
        func_0x01384978(*(undefined4 *)(_UNK_01e120e0 + 0x1e11da4));
        func_0x01384978(*(undefined4 *)(_UNK_01e120e4 + 0x1e11db0));
        *pcVar15 = '\x01';
      }
      iVar16 = func_0x0229f06c(0xa08b,0);
      if (iVar16 != 0) {
        iVar3 = func_0x0229f13c(0xa08b,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        goto SUB_02173f80;
      }
      iVar16 = *(int *)(iVar3 + 0x50);
      if (iVar16 == 0) {
        func_0x01384bf0();
        iVar17 = FUN_0212eec0(0,0);
        if (iVar17 != 0) {
          func_0x01384bf0();
          goto LAB_01e11e40;
        }
      }
      else {
        iVar17 = FUN_0212eec0(iVar16,0);
        if (iVar17 != 0) {
LAB_01e11e40:
          iVar17 = FUN_0212f04c(iVar16,0);
          if (iVar17 == 0) {
            func_0x01384bf0();
          }
          iVar5 = *(int *)(iVar3 + 0x28);
          iVar17 = *(int *)(iVar17 + 0x18);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          if (iVar17 == -1) {
            piVar12 = *(int **)(iVar5 + 0x10);
            if (*(int *)(**(int **)(_UNK_01e120e8 + 0x1e11ff0) + 0x74) == 0) {
              func_0x01384ab4();
            }
            uVar20 = func_0x028c1350(**(undefined4 **)(_UNK_01e120ec + 0x1e12014),0);
            if (piVar12 == (int *)0x0) {
              func_0x01384bf0();
            }
            (**(code **)(*piVar12 + 0x2d0))(piVar12,uVar20,*(undefined4 *)(*piVar12 + 0x2d4));
          }
          else {
            uVar20 = *(undefined4 *)(iVar5 + 0x10);
            if (iVar16 == 0) {
              func_0x01384bf0();
            }
            iVar16 = FUN_0212efa0(iVar16,0);
            if (*(int *)(**(int **)(_UNK_01e120f0 + 0x1e11ea8) + 0x74) == 0) {
              func_0x01384ab4();
            }
            uStack_20 = 0;
            iVar17 = iVar16 / 1000 + (iVar16 >> 0x1f);
            iVar16 = iVar17 - (iVar16 >> 0x1f);
            func_0x02089060(uVar20,iVar17,iVar16,iVar16 >> 0x1f);
          }
          iVar3 = *(int *)(iVar3 + 0x28);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 0xc);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar20 = 0;
          goto SUB_0244ffe4;
        }
      }
      iVar17 = *(int *)(iVar3 + 0x24);
      if (iVar17 == 0) {
        func_0x01384bf0();
      }
      iVar17 = *(int *)(iVar17 + 8);
      if (iVar17 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x02450114(iVar17,0);
      if (uVar2 != 0) {
        return uVar2;
      }
      iVar17 = *(int *)(iVar3 + 0x24);
      if (iVar17 == 0) {
        func_0x01384bf0();
      }
      uVar20 = *(undefined4 *)(iVar17 + 0x10);
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      iVar16 = FUN_0212f04c(iVar16,0);
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      iVar16 = *(int *)(iVar16 + 0x18);
      if (*(int *)(**(int **)(_UNK_01e120f4 + 0x1e11f68) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uStack_20 = 1;
      iVar17 = iVar16 >> 0x1f;
      iVar16 = iVar16 / 1000 + iVar17;
      iVar17 = iVar16 - iVar17;
      func_0x02089060(uVar20,iVar16,iVar17,iVar17 >> 0x1f);
      iVar3 = *(int *)(iVar3 + 0x24);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar20 = 1;
      goto SUB_0244ffe4;
    }
    iVar16 = func_0x0229f06c(0xa086,0);
    if (iVar16 != 0) {
      iVar3 = func_0x0229f13c(0xa086,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02173f80;
    }
    iVar16 = *(int *)(iVar3 + 0x44);
    if (iVar16 == 0) {
      func_0x01384bf0();
    }
    iVar16 = FUN_0212bdd0(iVar16,0);
    if (iVar16 == 1) {
      iVar16 = *(int *)(iVar3 + 0x44);
      iVar17 = *(int *)(iVar3 + 0x18);
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      iVar16 = FUN_0212c014(iVar16,0);
      iVar5 = *(int *)(iVar3 + 0x44);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar2 = 0;
      uStack_28 = FUN_0212bf60(iVar5,0);
      iStack_24 = (int)uStack_28 >> 0x1f;
      uVar20 = FUN_01e125e0(iVar3,iStack_24,iVar16,iVar16 >> 0x1f);
      if (iVar17 == 0) {
        func_0x01384bf0();
      }
      func_0x0244feac(iVar17,uVar20,0);
      cVar6 = '\x01';
      cVar21 = '\0';
    }
    else {
      iVar16 = *(int *)(iVar3 + 0x44);
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      cVar6 = '\0';
      iVar16 = FUN_0212bdd0(iVar16,0);
      uVar2 = 0;
      cVar21 = '\0';
      if (iVar16 == 2) {
        iVar16 = *(int *)(iVar3 + 0x44);
        if (iVar16 == 0) {
          func_0x01384bf0();
        }
        cVar6 = '\0';
        iVar16 = FUN_0212c0d0(iVar16,0);
        if (iVar16 == 0) {
          func_0x01384bf0();
        }
        uVar2 = 0;
        cVar21 = '\x01';
        if (0 < *(int *)(iVar16 + 0x24)) {
          uVar2 = 1;
        }
      }
    }
    if (*(char *)(iVar3 + 0x65) != cVar6) {
      FUN_01e106cc(iVar3,cVar6);
    }
    if (*(char *)(iVar3 + 0x66) != cVar21) {
      FUN_01e126d0(iVar3,cVar21);
    }
    if (*(byte *)(iVar3 + 0x67) == uVar2) {
      return (uint)*(byte *)(iVar3 + 0x67);
    }
    iVar16 = func_0x0229f06c(0x163f,0);
    if (iVar16 != 0) {
      iVar16 = func_0x0229f13c(0x163f,0);
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      goto SUB_021744a8;
    }
    param_1 = *(int *)(iVar3 + 0x30);
    *(char *)(iVar3 + 0x67) = (char)uVar2;
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    if (uVar2 == 0) {
      iVar3 = func_0x0229f06c(0x1642,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0x1642);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        goto SUB_02173f80;
      }
      param_1 = *(int *)(param_1 + 0x20);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0229f06c(0x1643,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0x1643,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        goto SUB_02173f80;
      }
      uVar2 = 0;
      goto FUN_01e188e4;
    }
    iVar3 = func_0x0229f06c(0x1640,0);
    if (iVar3 != 0) {
      iVar3 = func_0x0229f13c(0x1640);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02173f80;
    }
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0229f06c(0x1641,0);
    if (iVar3 != 0) {
      iVar3 = func_0x0229f13c(0x1641,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02173f80;
    }
    uVar2 = 0;
  }
  else {
    pcVar15 = (char *)(_UNK_01e115fc + 0x1e10f24);
    iStack_24 = unaff_r4;
    if (*pcVar15 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e11600 + 0x1e10f38));
      func_0x01384978(*(undefined4 *)(_UNK_01e11604 + 0x1e10f44));
      *pcVar15 = '\x01';
    }
    iVar16 = func_0x0229f06c(0xa06f,0);
    if (iVar16 != 0) {
      iVar3 = func_0x0229f13c(0xa06f,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02173f80;
    }
    iVar16 = *(int *)(iVar3 + 0x34);
    if (iVar16 == 0) {
      func_0x01384bf0();
    }
    iVar16 = FUN_02122ab0(iVar16,0);
    iVar17 = *(int *)(iVar3 + 0x34);
    if (iVar17 == 0) {
      func_0x01384bf0();
    }
    iVar17 = FUN_02122f9c(iVar17,0);
    if (iVar17 < 1) {
      FUN_01e12940(iVar3,1);
      iVar17 = *(int *)(iVar3 + 0x34);
      if (iVar17 == 0) {
        func_0x01384bf0();
      }
      iVar17 = FUN_02123058(iVar17,0);
      iVar5 = *(int *)(iVar3 + 0x34);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = FUN_02122cc0(iVar5,0);
      if (iVar5 == 0) {
        iVar17 = *(int *)(iVar3 + 0x34);
        if (iVar17 == 0) {
          func_0x01384bf0();
        }
        uVar18 = 0;
        iVar17 = FUN_02122e38(iVar17,0);
        if (iVar17 < 1) {
          uVar2 = 0;
          cVar6 = '\0';
          uVar13 = 0;
          uVar1 = 0;
          cVar21 = '\0';
          uVar23 = 0;
          uVar7 = 0;
          if (iVar16 < 1) goto LAB_01e111e8;
          goto LAB_01e11564;
        }
        iVar16 = *(int *)(iVar3 + 0x34);
        if (iVar16 == 0) {
          func_0x01384bf0();
        }
        iVar16 = FUN_02122e38(iVar16,0);
        iVar17 = *(int *)(iVar3 + 0x34);
        if (iVar17 == 0) {
          func_0x01384bf0();
        }
        iStack_30 = FUN_02123004(iVar17,0);
      }
      else {
        if (iVar17 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar3 + 0x34);
        iVar16 = *(int *)(iVar17 + 0x44);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iStack_30 = FUN_02122c6c(iVar5,0);
        iVar16 = iVar16 * 1000;
      }
      uStack_2c = iStack_30 >> 0x1f;
      uVar20 = FUN_01e125e0(iVar3,uStack_2c,iVar16,iVar16 >> 0x1f);
      iVar16 = *(int *)(iVar3 + 0x18);
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      uVar2 = 0;
      func_0x0244feac(iVar16,uVar20,0);
      cVar6 = '\x01';
      uVar18 = 0;
      uVar13 = 0;
      uVar1 = 0;
LAB_01e11560:
      cVar21 = '\0';
    }
    else {
      iVar17 = *(int *)(iVar3 + 0x34);
      if (iVar17 == 0) {
        func_0x01384bf0();
      }
      uVar1 = FUN_02122d24(iVar17,0);
      piVar12 = (int *)FUN_021566f4(0);
      if (piVar12 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar17 = *piVar12;
      piVar10 = *(int **)(_UNK_01e11608 + 0x1e11020);
      uVar2 = (uint)*(ushort *)(iVar17 + 0xb6);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(int *)(iVar17 + 0x58) + 4);
        do {
          if (piVar8[-1] == *piVar10) {
            puVar4 = (undefined4 *)(iVar17 + *piVar8 * 8 + 0x178);
            goto LAB_01e110f0;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar12,*piVar10,0x17);
LAB_01e110f0:
      iVar17 = (*(code *)*puVar4)(piVar12,puVar4[1]);
      bVar22 = 0;
      if (iVar17 != 0) {
        iVar17 = *(int *)(iVar3 + 0x34);
        if (iVar17 == 0) {
          func_0x01384bf0();
        }
        iVar17 = FUN_02123058(iVar17,0);
        if (iVar17 == 0) {
          func_0x01384bf0();
        }
        bVar22 = *(byte *)(iVar17 + 0x2e);
      }
      FUN_01e12940(iVar3,0);
      uVar13 = (uint)((bVar22 & 0 < iVar16) != 0) & (uVar1 ^ 1);
      uVar18 = (uint)((0 < iVar16 & ~bVar22) != 0) & (uVar1 ^ 1);
      uVar23 = uVar13;
      uVar7 = uVar1;
      if (0 < iVar16) {
        if (uVar18 == 0) {
          if (uVar13 == 0) {
            bVar24 = uVar1 == 0;
            uVar2 = 0;
            cVar6 = '\0';
            uVar18 = 0;
            uVar13 = 0;
            uVar1 = 0;
            cVar21 = '\0';
            if (bVar24) goto LAB_01e11564;
            piVar12 = (int *)FUN_021566f4(0);
            if (piVar12 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar17 = *piVar12;
            uVar2 = (uint)*(ushort *)(iVar17 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar17 + 0x58) + 4);
              do {
                if (piVar8[-1] == *piVar10) {
                  puVar4 = (undefined4 *)(iVar17 + *piVar8 * 8 + 0x160);
                  goto LAB_01e11538;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar12,*piVar10,0x14);
LAB_01e11538:
            uVar2 = (*(code *)*puVar4)(piVar12,iVar16,puVar4[1]);
            uVar1 = 1;
            cVar6 = '\0';
            uVar18 = 0;
            uVar13 = 0;
          }
          else {
            piVar12 = (int *)FUN_021566f4(0);
            if (piVar12 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar17 = *piVar12;
            uVar2 = (uint)*(ushort *)(iVar17 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar17 + 0x58) + 4);
              do {
                if (piVar8[-1] == *piVar10) {
                  puVar4 = (undefined4 *)(iVar17 + *piVar8 * 8 + 0x160);
                  goto LAB_01e11504;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar12,*piVar10,0x14);
LAB_01e11504:
            uVar2 = (*(code *)*puVar4)(piVar12,iVar16,puVar4[1]);
            uVar13 = 1;
            cVar6 = '\0';
            uVar18 = 0;
          }
        }
        else {
          piVar12 = (int *)FUN_021566f4(0);
          if (piVar12 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar17 = *piVar12;
          uVar2 = (uint)*(ushort *)(iVar17 + 0xb6);
          if (uVar2 != 0) {
            piVar8 = (int *)(*(int *)(iVar17 + 0x58) + 4);
            do {
              if (piVar8[-1] == *piVar10) {
                puVar4 = (undefined4 *)(iVar17 + *piVar8 * 8 + 0x160);
                goto LAB_01e114d4;
              }
              uVar2 = uVar2 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar12,*piVar10,0x14);
LAB_01e114d4:
          uVar2 = (*(code *)*puVar4)(piVar12,iVar16,puVar4[1]);
          uVar18 = 1;
          cVar6 = '\0';
        }
        goto LAB_01e11560;
      }
LAB_01e111e8:
      uVar1 = uVar7;
      uVar13 = uVar23;
      iVar16 = *(int *)(iVar3 + 0x34);
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      iVar16 = FUN_02123058(iVar16,0);
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      iVar16 = *(int *)(iVar16 + 0x18);
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar16 + 0xc)) {
        FUN_01e12aa0(iVar3);
      }
      piVar12 = (int *)FUN_021566f4(0);
      iVar16 = *(int *)(iVar3 + 0x34);
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      iVar16 = FUN_02123058(iVar16,0);
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      uVar20 = *(undefined4 *)(iVar16 + 0x18);
      if (piVar12 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar16 = *piVar12;
      uVar2 = (uint)*(ushort *)(iVar16 + 0xb6);
      if (uVar2 != 0) {
        piVar10 = (int *)(*(int *)(iVar16 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_01e1160c + 0x1e1128c)) {
            puVar4 = (undefined4 *)(iVar16 + *piVar10 * 8 + 0x1e8);
            goto LAB_01e1146c;
          }
          uVar2 = uVar2 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar12,**(int **)(_UNK_01e1160c + 0x1e1128c),0x25);
LAB_01e1146c:
      iVar16 = (*(code *)*puVar4)(piVar12,uVar20,puVar4[1]);
      uVar2 = (uint)(iVar16 != 0);
      cVar21 = '\x01';
      cVar6 = '\0';
    }
LAB_01e11564:
    if (*(char *)(iVar3 + 0x65) != cVar6) {
      FUN_01e106cc(iVar3);
    }
    if (*(char *)(iVar3 + 0x69) != cVar21) {
      FUN_01e12e0c(iVar3,cVar21);
    }
    if (*(byte *)(iVar3 + 0x67) != uVar18) {
      FUN_01e12758(iVar3,uVar18);
    }
    if (*(byte *)(iVar3 + 0x68) != uVar13) {
      FUN_01e131ac(iVar3,uVar13);
    }
    if (*(byte *)(iVar3 + 0x6a) != uVar1) {
      FUN_01e13234(iVar3,uVar1);
    }
    unaff_r4 = iStack_24;
    if (*(byte *)(iVar3 + 0x66) == uVar2) {
      return (uint)*(byte *)(iVar3 + 0x66);
    }
code_r0x01e126d0:
    iVar16 = func_0x0229f06c(0x1632,0);
    if (iVar16 != 0) {
      iVar16 = func_0x0229f13c(0x1632,0);
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
SUB_021744a8:
      iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,uVar2,0);
      uStack_38 = uStack_50;
      iStack_34 = uStack_4c;
      iStack_30 = iStack_48;
      if (*(int *)(iVar16 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar16 + 0x10),0);
      }
      func_0x01485278(&uStack_38,iVar3,0);
      func_0x01485228(&uStack_38,uVar2,0);
      iVar17 = *(int *)(iVar16 + 8);
      uVar20 = *(undefined4 *)(iVar16 + 0xc);
      iVar3 = *(int *)(iVar16 + 0x10);
      if (iVar17 == 0) {
        func_0x01384bf0();
      }
      uVar9 = 3;
      if (iVar3 == 0) {
        uVar9 = 2;
      }
      uStack_58 = 0;
      uStack_54 = 0;
      uVar2 = func_0x0245495c(iVar17,uVar20,&uStack_38,uVar9);
      return uVar2;
    }
    param_1 = *(int *)(iVar3 + 0x30);
    *(char *)(iVar3 + 0x66) = (char)uVar2;
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    if (uVar2 == 0) {
      iVar3 = func_0x0229f06c(0x163a,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0x163a);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        goto SUB_02173f80;
      }
      iVar3 = *(int *)(param_1 + 0x1c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      FUN_01e0fd60(iVar3,1,0);
      param_1 = *(int *)(param_1 + 0x20);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0229f06c(0x163c,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0x163c,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        goto SUB_02173f80;
      }
      uVar2 = 1;
FUN_01e188e4:
      pcVar15 = (char *)(_UNK_01e18a0c + 0x1e188fc);
      if (*pcVar15 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
        func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
        func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
        *pcVar15 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x163d,0);
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x20);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x03dcf4b4(iVar3,uVar2,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = *(int *)(param_1 + 0x20);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar20 = func_0x03dcf1b0(iVar3,uVar2,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
        FUN_01e1a604(param_1,uVar2,uVar20);
        iVar3 = *(int *)(param_1 + 0x20);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
        if (*(int *)(iVar3 + 8) != 0) {
          piVar12 = *(int **)(iVar3 + 0x20);
          iStack_30 = iVar3;
          uStack_28 = uVar2;
          if (piVar12 == (int *)0x0) {
            uVar2 = func_0x04821a00(&uStack_28,0);
          }
          else {
            iVar3 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
              iVar3 = func_0x02457d84(iVar3);
            }
            iVar16 = *piVar12;
            uVar18 = (uint)*(ushort *)(iVar16 + 0xb6);
            if (uVar18 != 0) {
              piVar10 = (int *)(*(int *)(iVar16 + 0x58) + 4);
              do {
                if (piVar10[-1] == iVar3) {
                  puVar4 = (undefined4 *)(iVar16 + *piVar10 * 8 + 200);
                  goto LAB_03dd0a60;
                }
                uVar18 = uVar18 - 1;
                piVar10 = piVar10 + 2;
              } while (uVar18 != 0);
            }
            puVar4 = (undefined4 *)func_0x02457d88(piVar12,iVar3,1);
LAB_03dd0a60:
            uVar2 = (*(code *)*puVar4)(piVar12,uVar2,puVar4[1]);
            iVar3 = iStack_30;
          }
          uVar23 = *(uint *)(iVar3 + 8);
          uVar18 = uVar23;
          if (uVar23 == 0) {
            func_0x02457d50();
            uVar18 = *(uint *)(iStack_30 + 8);
            if (uVar18 == 0) {
              uVar25 = func_0x02457d50();
              uVar20 = (undefined4)((ulonglong)uVar25 >> 0x20);
              iVar3 = (int)uVar25;
              uStack_54 = 0;
              if (*(int *)(iVar3 + 8) != 0) {
                piVar12 = *(int **)(iVar3 + 0x20);
                uStack_60 = uVar20;
                uStack_5c = uVar2;
                uStack_58 = uVar18;
                uStack_50 = uVar23;
                if (piVar12 == (int *)0x0) {
                  uVar2 = func_0x04821a00(&uStack_60,0);
                }
                else {
                  iVar16 = *(int *)(*(int *)(*(int *)(extraout_r3_01 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar16 + 0xbd) & 1) == 0) {
                    iVar16 = func_0x02457d84(iVar16);
                  }
                  iVar17 = *piVar12;
                  uVar2 = (uint)*(ushort *)(iVar17 + 0xb6);
                  if (uVar2 != 0) {
                    piVar10 = (int *)(*(int *)(iVar17 + 0x58) + 4);
                    do {
                      if (piVar10[-1] == iVar16) {
                        puVar4 = (undefined4 *)(iVar17 + *piVar10 * 8 + 200);
                        goto LAB_03dd0dc4;
                      }
                      uVar2 = uVar2 - 1;
                      piVar10 = piVar10 + 2;
                    } while (uVar2 != 0);
                  }
                  puVar4 = (undefined4 *)func_0x02457d88(piVar12,iVar16,1);
LAB_03dd0dc4:
                  uVar2 = (*(code *)*puVar4)(piVar12,uVar20,puVar4[1]);
                }
                iVar17 = *(int *)(iVar3 + 8);
                iVar16 = iVar17;
                if (iVar17 == 0) {
                  func_0x02457d50();
                  iVar16 = *(int *)(iVar3 + 8);
                  if (iVar16 == 0) {
                    uVar25 = func_0x02457d50();
                    uVar2 = func_0x03dcfa64((int)uVar25,(int)((ulonglong)uVar25 >> 0x20),
                                            *(undefined4 *)
                                             (*(int *)(*(int *)(extraout_r3_02 + 0x10) + 0x60) +
                                             0x84));
                    if ((int)uVar2 < 0) {
                      uVar20 = 0;
                    }
                    else {
                      iVar3 = *(int *)((int)uVar25 + 0xc);
                      if (iVar3 == 0) {
                        func_0x02457d50();
                      }
                      if (*(uint *)(iVar3 + 0xc) <= uVar2) {
                        func_0x02457d5c();
                      }
                      uVar20 = *(undefined4 *)(iVar3 + uVar2 * 0x10 + 0x1c);
                    }
                    *extraout_r2_02 = uVar20;
                    return ~uVar2 >> 0x1f;
                  }
                }
                func_0x02457e94(uVar2 & 0x7fffffff,*(undefined4 *)(iVar17 + 0xc));
                if (*(uint *)(iVar16 + 0xc) <= extraout_r1_02) {
                  func_0x02457d5c();
                }
                uVar18 = *(int *)(iVar16 + extraout_r1_02 * 4 + 0x10) - 1;
                if (-1 < (int)uVar18) {
                  uVar23 = 0xffffffff;
                  do {
                    uVar7 = uVar18;
                    iVar16 = *(int *)(iVar3 + 0xc);
                    if (iVar16 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar16 + 0xc) <= uVar7) {
                      func_0x02457d5c();
                    }
                    uVar20 = uStack_60;
                    iVar16 = iVar16 + uVar7 * 0x10;
                    if (*(uint *)(iVar16 + 0x10) == (uVar2 & 0x7fffffff)) {
                      piVar12 = *(int **)(iVar3 + 0x20);
                      if (piVar12 == (int *)0x0) {
                        piVar12 = (int *)func_0x02ecb070(*(undefined4 *)
                                                          (*(int *)(*(int *)(extraout_r3_01 + 0x10)
                                                                   + 0x60) + 0xc));
                        uVar20 = uStack_60;
                        uVar9 = *(undefined4 *)(iVar16 + 0x18);
                        if (piVar12 == (int *)0x0) {
                          func_0x02457d50(0,uVar9);
                        }
                        iVar17 = (**(code **)(*piVar12 + 0x100))
                                           (piVar12,uVar9,uVar20,*(undefined4 *)(*piVar12 + 0x104));
                      }
                      else {
                        uVar9 = *(undefined4 *)(iVar16 + 0x18);
                        if (piVar12 == (int *)0x0) {
                          func_0x02457d50();
                        }
                        iVar17 = *(int *)(*(int *)(*(int *)(extraout_r3_01 + 0x10) + 0x60) + 4);
                        if ((*(ushort *)(iVar17 + 0xbd) & 1) == 0) {
                          iVar17 = func_0x02457d84(iVar17);
                        }
                        iVar5 = *piVar12;
                        uVar18 = (uint)*(ushort *)(iVar5 + 0xb6);
                        if (uVar18 != 0) {
                          piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                          do {
                            if (piVar10[-1] == iVar17) {
                              puVar4 = (undefined4 *)(iVar5 + *piVar10 * 8 + 0xc0);
                              goto LAB_03dd0f6c;
                            }
                            uVar18 = uVar18 - 1;
                            piVar10 = piVar10 + 2;
                          } while (uVar18 != 0);
                        }
                        puVar4 = (undefined4 *)func_0x02457d88(piVar12,iVar17,0);
LAB_03dd0f6c:
                        iVar17 = (*(code *)*puVar4)(piVar12,uVar9,uVar20,puVar4[1]);
                      }
                      if (iVar17 != 0) {
                        if ((int)uVar23 < 0) {
                          iVar17 = *(int *)(iVar3 + 8);
                          iVar5 = *(int *)(iVar16 + 0x14);
                          if (iVar17 == 0) {
                            func_0x02457d50();
                          }
                          if (*(uint *)(iVar17 + 0xc) <= extraout_r1_02) {
                            func_0x02457d5c();
                          }
                          *(int *)(iVar17 + extraout_r1_02 * 4 + 0x10) = iVar5 + 1;
                        }
                        else {
                          iVar17 = *(int *)(iVar3 + 0xc);
                          if (iVar17 == 0) {
                            func_0x02457d50();
                          }
                          uVar20 = *(undefined4 *)(iVar16 + 0x14);
                          if (*(uint *)(iVar17 + 0xc) <= uVar23) {
                            func_0x02457d5c();
                          }
                          *(undefined4 *)(iVar17 + uVar23 * 0x10 + 0x14) = uVar20;
                        }
                        *extraout_r2_01 = *(undefined4 *)(iVar16 + 0x1c);
                        uVar20 = *(undefined4 *)(iVar3 + 0x14);
                        *(undefined4 *)(iVar16 + 0x1c) = 0;
                        iVar5 = *(int *)(iVar3 + 0x1c);
                        iVar17 = *(int *)(iVar3 + 0x18);
                        *(undefined4 *)(iVar16 + 0x14) = uVar20;
                        *(uint *)(iVar16 + 0x10) = 0xffffffff;
                        *(int *)(iVar3 + 0x1c) = iVar5 + 1;
                        *(uint *)(iVar3 + 0x14) = uVar7;
                        *(int *)(iVar3 + 0x18) = iVar17 + 1;
                        return 1;
                      }
                    }
                    uVar18 = *(uint *)(iVar16 + 0x14);
                    uVar23 = uVar7;
                  } while (*(uint *)(iVar16 + 0x14) < 0x80000000);
                }
              }
              *extraout_r2_01 = 0;
              return 0;
            }
          }
          uStack_2c = uVar2 & 0x7fffffff;
          func_0x02457e94(uStack_2c,*(undefined4 *)(uVar23 + 0xc));
          if (*(uint *)(uVar18 + 0xc) <= extraout_r1_01) {
            func_0x02457d5c();
          }
          uVar2 = *(int *)(uVar18 + extraout_r1_01 * 4 + 0x10) - 1;
          if (-1 < (int)uVar2) {
            iVar3 = iStack_30;
            uVar18 = 0xffffffff;
            uStack_38 = extraout_r1_01;
            do {
              uVar23 = uVar2;
              iVar16 = *(int *)(iVar3 + 0xc);
              if (iVar16 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar16 + 0xc) <= uVar23) {
                func_0x02457d5c();
              }
              uVar2 = uStack_28;
              iVar16 = iVar16 + uVar23 * 0x10;
              if (*(uint *)(iVar16 + 0x10) == uStack_2c) {
                piVar12 = *(int **)(iVar3 + 0x20);
                if (piVar12 == (int *)0x0) {
                  piVar12 = (int *)func_0x02ecb070(*(undefined4 *)
                                                    (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) +
                                                    0xc));
                  uVar2 = uStack_28;
                  uVar20 = *(undefined4 *)(iVar16 + 0x18);
                  if (piVar12 == (int *)0x0) {
                    func_0x02457d50(0,uVar20);
                  }
                  iVar17 = (**(code **)(*piVar12 + 0x100))
                                     (piVar12,uVar20,uVar2,*(undefined4 *)(*piVar12 + 0x104));
                }
                else {
                  uVar20 = *(undefined4 *)(iVar16 + 0x18);
                  if (piVar12 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar3 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
                    iVar3 = func_0x02457d84(iVar3);
                  }
                  iVar17 = *piVar12;
                  uVar7 = (uint)*(ushort *)(iVar17 + 0xb6);
                  if (uVar7 != 0) {
                    piVar10 = (int *)(*(int *)(iVar17 + 0x58) + 4);
                    do {
                      if (piVar10[-1] == iVar3) {
                        puVar4 = (undefined4 *)(iVar17 + *piVar10 * 8 + 0xc0);
                        goto LAB_03dd0c0c;
                      }
                      uVar7 = uVar7 - 1;
                      piVar10 = piVar10 + 2;
                    } while (uVar7 != 0);
                  }
                  puVar4 = (undefined4 *)func_0x02457d88(piVar12,iVar3,0);
LAB_03dd0c0c:
                  iVar17 = (*(code *)*puVar4)(piVar12,uVar20,uVar2,puVar4[1]);
                }
                iVar3 = iStack_30;
                if (iVar17 != 0) {
                  if ((int)uVar18 < 0) {
                    iVar3 = *(int *)(iStack_30 + 8);
                    iVar17 = *(int *)(iVar16 + 0x14);
                    if (iVar3 == 0) {
                      func_0x02457d50();
                    }
                    uVar2 = uStack_38;
                    if (*(uint *)(iVar3 + 0xc) <= uStack_38) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar3 + uVar2 * 4 + 0x10) = iVar17 + 1;
                  }
                  else {
                    iVar3 = *(int *)(iStack_30 + 0xc);
                    if (iVar3 == 0) {
                      func_0x02457d50();
                    }
                    uVar20 = *(undefined4 *)(iVar16 + 0x14);
                    if (*(uint *)(iVar3 + 0xc) <= uVar18) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar3 + uVar18 * 0x10 + 0x14) = uVar20;
                  }
                  uVar20 = *(undefined4 *)(iStack_30 + 0x14);
                  *(undefined4 *)(iVar16 + 0x1c) = 0;
                  iVar3 = *(int *)(iStack_30 + 0x18);
                  iVar17 = *(int *)(iStack_30 + 0x1c);
                  *(uint *)(iVar16 + 0x10) = 0xffffffff;
                  *(undefined4 *)(iVar16 + 0x14) = uVar20;
                  *(uint *)(iStack_30 + 0x14) = uVar23;
                  *(int *)(iStack_30 + 0x18) = iVar3 + 1;
                  *(int *)(iStack_30 + 0x1c) = iVar17 + 1;
                  return 1;
                }
              }
              uVar2 = *(uint *)(iVar16 + 0x14);
              uVar18 = uVar23;
            } while (*(uint *)(iVar16 + 0x14) < 0x80000000);
          }
        }
        return 0;
      }
      iVar3 = func_0x0229f13c(0x163d,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      goto LAB_021d0928;
    }
    iVar3 = func_0x0229f06c(0x1633,0);
    if (iVar3 != 0) {
      iVar3 = func_0x0229f13c(0x1633);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
SUB_02173f80:
      uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_28 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      iStack_30 = 0;
      uStack_20 = 0;
      func_0x0245494c(&iStack_48,0,0);
      iStack_30 = iStack_48;
      uStack_20 = uStack_38;
      if (*(int *)(iVar3 + 0x10) != 0) {
        func_0x01485278(&iStack_30,*(int *)(iVar3 + 0x10),0);
      }
      func_0x01485278(&iStack_30,param_1,0);
      iVar16 = *(int *)(iVar3 + 8);
      uVar20 = *(undefined4 *)(iVar3 + 0xc);
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      uVar9 = 2;
      if (iVar3 == 0) {
        uVar9 = 1;
      }
      uStack_50 = 0;
      uStack_4c = 0;
      uVar2 = func_0x0245495c(iVar16,uVar20,&iStack_30,uVar9);
      return uVar2;
    }
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    FUN_01e0f95c(iVar3,1,0);
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0229f06c(0x1635,0);
    if (iVar3 != 0) {
      iVar3 = func_0x0229f13c(0x1635,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02173f80;
    }
    uVar2 = 1;
  }
  pcVar15 = (char *)(_UNK_01e1882c + 0x1e18078);
  iStack_24 = unaff_r4;
  if (*pcVar15 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
    func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
    func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
    func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
    func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
    func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
    *pcVar15 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x1636,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x1636,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
LAB_021d0928:
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar2,0);
    uStack_38 = uStack_50;
    iStack_34 = uStack_4c;
    iStack_30 = iStack_48;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,uVar2,0);
    iVar16 = *(int *)(iVar3 + 8);
    uVar20 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar16 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar3 == 0) {
      uVar9 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uVar2 = func_0x0245495c(iVar16,uVar20,&uStack_38,uVar9);
    return uVar2;
  }
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar18 = func_0x03dcf4b4(iVar3,uVar2,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
  if (uVar18 != 0) {
    return uVar18;
  }
  iVar3 = FUN_01e1a508(param_1,uVar2);
  pcVar15 = (char *)(_UNK_01e1884c + 0x1e1816c);
  if (uVar2 < 0x12) {
    if ((uVar2 < 3) || (uVar2 == 0xb)) goto LAB_01e183bc;
    if (uVar2 == 0x11) {
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar16 = func_0x024504c0(iVar3,0);
      uVar20 = *(undefined4 *)(param_1 + 0x14);
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      func_0x024505b4(iVar16,uVar20,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar16 = func_0x024504c0(iVar3,0);
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      iVar16 = func_0x02450158(iVar16,0,0);
      if (*pcVar15 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18850 + 0x1e18370));
        *pcVar15 = '\x01';
      }
      puVar4 = *(undefined4 **)(**(int **)(_UNK_01e18854 + 0x1e18388) + 0x5c);
      uVar9 = puVar4[2];
      uVar20 = *puVar4;
      uVar19 = puVar4[1];
      if (iVar16 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = 0;
      func_0x024503a4(iVar16,uVar20,uVar19,uVar9);
      goto LAB_01e1841c;
    }
LAB_01e183e0:
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar16 = func_0x024504c0(iVar3,0);
    uVar20 = *(undefined4 *)(param_1 + 0x10);
    goto LAB_01e18400;
  }
  switch(uVar2) {
  default:
    goto LAB_01e183e0;
  case 0x17:
  case 0x1f:
  case 0x24:
  case 0x25:
LAB_01e183bc:
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar16 = func_0x024504c0(iVar3,0);
    uVar20 = *(undefined4 *)(param_1 + 0x14);
    break;
  case 0x1c:
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar16 = func_0x024504c0(iVar3,0);
    uVar20 = *(undefined4 *)(param_1 + 0x10);
    if (iVar16 == 0) {
      func_0x01384bf0();
    }
    func_0x024505b4(iVar16,uVar20,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar16 = func_0x02fe2a20(iVar3,**(undefined4 **)(&UNK_01e18224 + _UNK_01e18858));
    piVar12 = (int *)FUN_021566f4(0);
    iVar17 = *(int *)(param_1 + 0x1c);
    if (iVar17 == 0) {
      func_0x01384bf0();
    }
    iVar17 = *(int *)(iVar17 + 0x30);
    if (iVar17 == 0) {
      func_0x01384bf0();
    }
    uVar20 = FUN_0210e2d4(iVar17,0);
    if (piVar12 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar17 = *piVar12;
    uVar18 = (uint)*(ushort *)(iVar17 + 0xb6);
    if (uVar18 != 0) {
      piVar10 = (int *)(*(int *)(iVar17 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(&UNK_01e1828c + _UNK_01e1885c)) {
          puVar4 = (undefined4 *)(iVar17 + *piVar10 * 8 + 0x100);
          goto code_r0x01e186ec;
        }
        uVar18 = uVar18 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar18 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar12,**(int **)(&UNK_01e1828c + _UNK_01e1885c),8);
code_r0x01e186ec:
    iVar17 = (*(code *)*puVar4)(piVar12,uVar20,puVar4[1]);
    if (iVar17 == 0) {
      func_0x01384bf0();
    }
    uVar20 = *(undefined4 *)(iVar17 + 0x1c);
    if (iVar16 == 0) {
      func_0x01384bf0();
    }
    func_0x0267cc24(iVar16,uVar20,0);
    goto LAB_01e1841c;
  case 0x1d:
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar16 = func_0x024504c0(iVar3,0);
    uVar20 = *(undefined4 *)(param_1 + 0x10);
    if (iVar16 == 0) {
      func_0x01384bf0();
    }
    func_0x024505b4(iVar16,uVar20,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar16 = func_0x02fe2a20(iVar3,**(undefined4 **)(&UNK_01e18618 + _UNK_01e18860));
    piVar12 = (int *)FUN_021566f4(0);
    iVar17 = *(int *)(param_1 + 0x1c);
    if (iVar17 == 0) {
      func_0x01384bf0();
    }
    iVar17 = *(int *)(iVar17 + 0x30);
    if (iVar17 == 0) {
      func_0x01384bf0();
    }
    uVar20 = FUN_0210e2d4(iVar17,0);
    if (piVar12 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar17 = *piVar12;
    uVar18 = (uint)*(ushort *)(iVar17 + 0xb6);
    if (uVar18 != 0) {
      piVar10 = (int *)(*(int *)(iVar17 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(&UNK_01e18680 + _UNK_01e18864)) {
          puVar4 = (undefined4 *)(iVar17 + *piVar10 * 8 + 0x100);
          goto code_r0x01e18744;
        }
        uVar18 = uVar18 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar18 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar12,**(int **)(&UNK_01e18680 + _UNK_01e18864),8);
code_r0x01e18744:
    iVar17 = (*(code *)*puVar4)(piVar12,uVar20,puVar4[1]);
    if (iVar17 == 0) {
      func_0x01384bf0();
    }
    uVar20 = *(undefined4 *)(iVar17 + 0x1c);
    if (iVar16 == 0) {
      func_0x01384bf0();
    }
    func_0x0267cc24(iVar16,uVar20,0);
    uStack_28 = 0x1d;
    uStack_2c = -1;
    iStack_30 = **(int **)(&UNK_01e1879c + _UNK_01e18868);
    uVar20 = func_0x0244f5f4(&iStack_30,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
      func_0x02450840(0,uVar20,0);
      func_0x01384bf0();
    }
    else {
      func_0x02450840(iVar3,uVar20,0);
    }
    iVar16 = func_0x02fe27b8(iVar3,**(undefined4 **)(&UNK_01e187fc + _UNK_01e1886c));
    uVar20 = *(undefined4 *)(param_1 + 0x1c);
    if (iVar16 == 0) {
      func_0x01384bf0();
    }
    FUN_0229f1d0(iVar16,uVar20,0);
    goto LAB_01e1841c;
  case 0x26:
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar16 = func_0x024504c0(iVar3,0);
    uVar20 = *(undefined4 *)(param_1 + 0x18);
  }
LAB_01e18400:
  if (iVar16 == 0) {
    func_0x01384bf0();
  }
  func_0x024505b4(iVar16,uVar20,0);
LAB_01e1841c:
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = param_1;
  iVar16 = func_0x024504c0(iVar3,0);
  if (*pcVar15 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18870 + 0x1e18454));
    *pcVar15 = '\x01';
  }
  piVar12 = *(int **)(_UNK_01e18874 + 0x1e18470);
  puVar4 = *(undefined4 **)(*piVar12 + 0x5c);
  uVar20 = puVar4[2];
  uVar9 = *puVar4;
  uVar19 = puVar4[1];
  if (iVar16 == 0) {
    func_0x01384bf0();
  }
  uStack_38 = 0;
  func_0x0245068c(iVar16,uVar9,uVar19,uVar20);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar16 = func_0x024504c0(iVar3,0);
  pcVar11 = (char *)(_UNK_01e18878 + 0x1e184c8);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1887c + 0x1e184dc));
    *pcVar11 = '\x01';
  }
  iVar17 = *(int *)(*piVar12 + 0x5c);
  uVar20 = *(undefined4 *)(iVar17 + 0xc);
  uVar9 = *(undefined4 *)(iVar17 + 0x10);
  uVar19 = *(undefined4 *)(iVar17 + 0x14);
  if (iVar16 == 0) {
    func_0x01384bf0();
  }
  uStack_38 = 0;
  func_0x024503a4(iVar16,uVar20,uVar9,uVar19);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar16 = func_0x024504c0(iVar3,0);
  if (*pcVar15 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e18880 + 0x1e18550));
    *pcVar15 = '\x01';
  }
  puVar4 = *(undefined4 **)(*piVar12 + 0x5c);
  uVar20 = *puVar4;
  uVar9 = puVar4[1];
  uVar19 = puVar4[2];
  if (iVar16 == 0) {
    func_0x01384bf0();
  }
  uStack_38 = 0;
  func_0x02450c24(iVar16,uVar20,uVar9,uVar19);
  iVar16 = *(int *)(iStack_34 + 0x20);
  if (iVar16 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03dcf268(iVar16,uVar2,iVar3,**(undefined4 **)(_UNK_01e18884 + 0x1e185b4));
  return uVar2;
}



// ===== FAT.Merge.MBItemView$$_UpdateLifecycle RVA 0x22905d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a05d4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int iVar4;
  int iVar5;
  undefined4 unaff_r5;
  char *pcVar6;
  undefined4 uVar7;
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
  
  pcVar6 = (char *)(_UNK_022a06c4 + 0x22a05e8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a06c8 + 0x22a05fc));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb538);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb538);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
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
    func_0x0245495c(iVar4,uVar7,&uStack_30,uVar3);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    iVar4 = *(int *)(param_1 + 0x40);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x03dcf1b0(iVar4,iVar1,**(undefined4 **)(_UNK_022a06cc + 0x22a066c));
    uVar7 = func_0x024503b4(0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = (**(code **)(*piVar2 + 0xf0))(piVar2,uVar7,*(undefined4 *)(*piVar2 + 0xf4));
    if (iVar1 != 0) {
      pcVar6 = (char *)(_UNK_022a1438 + 0x22a12e0);
      uStack_18 = unaff_r4;
      uStack_14 = unaff_r5;
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_022a143c + 0x22a12f4));
        func_0x01384978(*(undefined4 *)(_UNK_022a1440 + 0x22a1300));
        *pcVar6 = '\x01';
      }
      iVar4 = func_0x0229f06c(0x1686);
      if (iVar4 != 0) {
        iVar4 = func_0x0229f13c(0x1686);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uStack_1c = uStack_14;
        uStack_20 = uStack_18;
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
        if (*(int *)(iVar4 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485238(&uStack_38,iVar1,0);
        iVar5 = *(int *)(iVar4 + 8);
        uVar7 = *(undefined4 *)(iVar4 + 0xc);
        iVar1 = *(int *)(iVar4 + 0x10);
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
      iVar4 = *(int *)(param_1 + 0x2c);
      if (iVar4 != 0) {
        iVar5 = *(int *)(param_1 + 0x40);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        piVar2 = (int *)func_0x03dcf1b0(iVar5,iVar4,**(undefined4 **)(_UNK_022a1444 + 0x22a1374));
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        (**(code **)(*piVar2 + 0xe8))(piVar2,*(undefined4 *)(*piVar2 + 0xec));
      }
      func_0x022a1b58(param_1,iVar1);
      iVar4 = *(int *)(param_1 + 0x40);
      *(int *)(param_1 + 0x2c) = iVar1;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      piVar2 = (int *)func_0x03dcf1b0(iVar4,iVar1,**(undefined4 **)(_UNK_022a1448 + 0x22a13d0));
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar2 + 0xe0))(piVar2,*(undefined4 *)(*piVar2 + 0xe4));
      iVar4 = func_0x03668dfc(**(undefined4 **)(_UNK_022a144c + 0x22a1408));
      uVar7 = *(undefined4 *)(param_1 + 0x30);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x0229f06c(0x168c,0,iVar1,0);
      if (iVar5 != 0) {
        iVar5 = func_0x0229f13c(0x168c,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = 0;
        func_0x021d198c(iVar5,iVar4,uVar7,iVar1);
        return;
      }
      iVar1 = *(int *)(iVar4 + 0x74);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      param_1 = FUN_01f08f90(iVar1,0);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      pcVar6 = (char *)(_UNK_01df9274 + 0x1df91ac);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01df9278 + 0x1df91c0),0);
        *pcVar6 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x166e,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x28);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        FUN_01deeff4(iVar1);
        piVar2 = *(int **)(_UNK_01df927c + 0x1df9230);
        iVar1 = *piVar2;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar2;
        }
        if (*(char *)(*(int *)(iVar1 + 0x5c) + 0x50) == '\0') {
          return;
        }
        param_1 = *(int *)(param_1 + 0x2c);
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0229f06c(0x1671,0);
        if (iVar1 == 0) {
          iVar1 = func_0x0229f06c(0x1672,0);
          if (iVar1 == 0) {
            piVar2 = (int *)func_0x02452460(param_1,0);
            if (piVar2 == (int *)0x0) {
              func_0x01384bf0();
            }
                    /* WARNING: Could not recover jumptable at 0x01df0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*piVar2 + 0x1a0))(piVar2,*(undefined4 *)(*piVar2 + 0x1a4));
            return;
          }
          iVar1 = func_0x0229f13c(0x1672,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
        }
        else {
          iVar1 = func_0x0229f13c(0x1671,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
        }
      }
      else {
        iVar1 = func_0x0229f13c(0x166e,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
      }
      goto SUB_02173f80;
    }
  }
  return;
}



// ===== FAT.Merge.MBItemView$$TryResolveNewItemTip RVA 0x22906d0 =====

/* WARNING: Possible PIC construction at 0x01e14bc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e14bcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a06d0(int param_1,float param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar10;
  float unaff_r6;
  int unaff_r7;
  undefined4 unaff_r8;
  int *piVar11;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  iVar3 = func_0x0229f06c(0xa0c6);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x14);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (*(char *)(iVar3 + 0x31) == '\0') {
      return;
    }
    param_1 = *(int *)(param_1 + 0x14);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_01e15018 + 0x1e14ae4);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e1501c + 0x1e14af8),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_01e15020 + 0x1e14b04));
      func_0x01384978(*(undefined4 *)(_UNK_01e15024 + 0x1e14b10));
      func_0x01384978(*(undefined4 *)(_UNK_01e15028 + 0x1e14b1c));
      func_0x01384978(*(undefined4 *)(_UNK_01e1502c + 0x1e14b28));
      func_0x01384978(*(undefined4 *)(_UNK_01e15030 + 0x1e14b34));
      func_0x01384978(*(undefined4 *)(_UNK_01e15034 + 0x1e14b40));
      func_0x01384978(*(undefined4 *)(_UNK_01e15038 + 0x1e14b4c));
      *pcVar8 = '\x01';
    }
    uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_50 = 0;
    uStack_44 = 0;
    uStack_5c = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_64 = 0;
    uStack_68 = 0;
    uStack_6c = 0;
    uStack_40 = uStack_4c;
    uStack_3c = uStack_48;
    iVar3 = func_0x0229f06c(0xa099,0);
    if (iVar3 == 0) {
      if (*(char *)(param_1 + 0x31) != '\0') {
        iVar3 = *(int *)(param_1 + 0x2c);
        *(undefined1 *)(param_1 + 0x31) = 0;
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0x30);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        FUN_0210cd7c(&uStack_78,iVar3,0);
        uVar7 = uStack_74;
        uVar10 = uStack_78;
        FUN_01e14850(param_1);
        if (param_2 <= 0.0) {
          iVar3 = func_0x01c24918(0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 0x10);
          if (*(int *)(**(int **)(_UNK_01e1503c + 0x1e14c80) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x01dd876c(&uStack_78,uVar10,uVar7,0);
          iVar9 = **(int **)(_UNK_01e15040 + 0x1e14cb4);
          iVar4 = *(int *)(iVar9 + 0x1c);
          if (iVar4 == 0) {
            func_0x0140024c(iVar9);
            iVar4 = *(int *)(iVar9 + 0x1c);
          }
          iVar4 = *(int *)(iVar4 + 8);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x014001f0();
          }
          if (*(int *)(iVar4 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar4 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x014001f0();
          }
          uVar10 = **(undefined4 **)(iVar4 + 0x5c);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uStack_80 = 0;
          uStack_88 = uStack_70;
          uStack_84 = uVar10;
          func_0x01ca1770(iVar3,2,uStack_78,uStack_74);
        }
        else {
          uVar10 = FUN_01e149bc(param_1,param_2,uVar10,uVar7);
          uVar10 = func_0x02450640(param_1,uVar10,0);
          *(undefined4 *)(param_1 + 0x3c) = uVar10;
        }
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(param_1 + 0x2c);
        iVar3 = *(int *)(iVar3 + 0xc0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar10 = *(undefined4 *)(iVar4 + 0x30);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x01aa60d8(iVar3,uVar10,0);
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(param_1 + 0x2c);
        iVar3 = *(int *)(iVar3 + 0xc4);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar10 = *(undefined4 *)(iVar4 + 0x30);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x01ab8070(iVar3,uVar10,0);
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(param_1 + 0x2c);
        iVar3 = *(int *)(iVar3 + 200);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar10 = *(undefined4 *)(iVar4 + 0x30);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x01a6b8e4(iVar3,uVar10,0);
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0xd8);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0xc);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x03cd6fc4(&uStack_50,iVar3,**(undefined4 **)(_UNK_01e15044 + 0x1e14e80));
        piVar11 = *(int **)(_UNK_01e15048 + 0x1e14ea0);
        while (iVar3 = func_0x01473bf8(&uStack_50,**(undefined4 **)(_UNK_01e15050 + 0x1e14ea8)),
              iVar3 != 0) {
          uStack_58 = uStack_3c;
          uStack_60 = uStack_44;
          uStack_5c = uStack_40;
          func_0x01483df8(&uStack_60,&uStack_68,&uStack_6c,
                          **(undefined4 **)(_UNK_01e1504c + 0x1e14ecc));
          piVar1 = (int *)func_0x01384ab8(uStack_6c,*piVar11);
          if (piVar1 != (int *)0x0) {
            iVar3 = *piVar1;
            iVar4 = *piVar11;
            uVar10 = *(undefined4 *)(param_1 + 0x2c);
            uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
              do {
                if (piVar6[-1] == iVar4) {
                  puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xd0);
                  goto LAB_01e14f50;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 2;
              } while (uVar5 != 0);
            }
            puVar2 = (undefined4 *)func_0x014002dc(piVar1,iVar4,2);
LAB_01e14f50:
            (*(code *)*puVar2)(piVar1,uVar10,puVar2[1]);
          }
        }
        func_0x0245081c(&uStack_50,**(undefined4 **)(_UNK_01e15054 + 0x1e14f74));
      }
      return;
    }
    iVar3 = func_0x0229f13c(0xa099,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e14bcc;
    unaff_r4 = iVar3;
    unaff_r6 = param_2;
    unaff_r7 = param_1;
    register0x00000054 = (BADSPACEBASE *)&uStack_88;
  }
  else {
    iVar3 = func_0x0229f13c(0xa0c6);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(float *)((int)register0x00000054 + -0x18) = unaff_r6;
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
  iVar4 = *(int *)(iVar3 + 0x10);
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
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar4,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485258((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar4 = *(int *)(iVar3 + 8);
  uVar10 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 3;
  if (iVar3 == 0) {
    uVar7 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar4,uVar10,(undefined1 *)((int)register0x00000054 + -0x38),uVar7);
  return;
}



// ===== FAT.Merge.MBItemView$$PlayTap RVA 0x2290760 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a0760(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
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
  
  iVar1 = func_0x0229f06c(0x96d0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x1c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_01e0faf0 + 0x1e0fa44);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e0faf4 + 0x1e0fa58),0);
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x96d1,0);
    if (iVar1 == 0) {
      piVar4 = *(int **)(_UNK_01e0faf8 + 0x1e0fab0);
      iVar5 = *(int *)(param_1 + 0x10);
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar4;
      }
      uVar6 = **(undefined4 **)(iVar1 + 0x5c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_0514e2c4)(iVar5,uVar6,0);
      return;
    }
    iVar1 = func_0x0229f13c(0x96d1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x96d0);
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
  return;
}



// ===== FAT.Merge.MBItemView$$PlayTapDelayHigh RVA 0x22907c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a07c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
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
  
  iVar1 = func_0x0229f06c(0x96d2);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01e159f8(iVar1,0);
    param_1 = *(int *)(param_1 + 0x1c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_01e0fbbc + 0x1e0fb10);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e0fbc0 + 0x1e0fb24),0);
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x96d4,0);
    if (iVar1 == 0) {
      piVar4 = *(int **)(_UNK_01e0fbc4 + 0x1e0fb7c);
      iVar5 = *(int *)(param_1 + 0x10);
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar4;
      }
      uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_0514e2c4)(iVar5,uVar6,0);
      return;
    }
    iVar1 = func_0x0229f13c(0x96d4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x96d2);
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
  return;
}



// ===== FAT.Merge.MBItemView$$PlaySpawn RVA 0x2290844 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a0844(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
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
  
  iVar1 = func_0x0229f06c(0xa0dc);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x1c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_01e0fc88 + 0x1e0fbdc);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e0fc8c + 0x1e0fbf0),0);
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa067,0);
    if (iVar1 == 0) {
      piVar4 = *(int **)(_UNK_01e0fc90 + 0x1e0fc48);
      iVar5 = *(int *)(param_1 + 0x10);
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar4;
      }
      uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_0514e2c4)(iVar5,uVar6,0);
      return;
    }
    iVar1 = func_0x0229f13c(0xa067,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa0dc);
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
  return;
}



// ===== FAT.Merge.MBItemView$$PlayDropToGround RVA 0x22908a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a08a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
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
  
  iVar1 = func_0x0229f06c(0xa0e2);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x1c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_01e0fd54 + 0x1e0fca8);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e0fd58 + 0x1e0fcbc),0);
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa068,0);
    if (iVar1 == 0) {
      piVar4 = *(int **)(_UNK_01e0fd5c + 0x1e0fd14);
      iVar5 = *(int *)(param_1 + 0x10);
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar4;
      }
      uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xc);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_0514e2c4)(iVar5,uVar6,0);
      return;
    }
    iVar1 = func_0x0229f13c(0xa068,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa0e2);
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
  return;
}



// ===== FAT.Merge.MBItemView$$AddHintForConsumeEnergy RVA 0x229090c =====

/* WARNING: Removing unreachable block (ram,0x01e1816c) */
/* WARNING: Removing unreachable block (ram,0x01e182d0) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e18178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a090c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 unaff_r4;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar3 = func_0x0229f06c(0x1640);
  if (iVar3 == 0) {
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0229f06c(0x1641,0);
    if (iVar3 == 0) {
      pcVar5 = (char *)(_UNK_01e1882c + 0x1e18078);
      uStack_24 = unaff_r4;
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
        func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
        func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
        func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
        func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
        func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
        *pcVar5 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x1636,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0x1636,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = uStack_24;
        iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,0,0);
        uStack_38 = uStack_50;
        iStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar3 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485238(&uStack_38,0,0);
        iVar7 = *(int *)(iVar3 + 8);
        uVar9 = *(undefined4 *)(iVar3 + 0xc);
        iVar3 = *(int *)(iVar3 + 0x10);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uVar4 = 3;
        if (iVar3 == 0) {
          uVar4 = 2;
        }
        func_0x0245495c(iVar7,uVar9,&uStack_38,uVar4,0,0);
        return;
      }
      iVar3 = *(int *)(param_1 + 0x20);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x03dcf4b4(iVar3,0,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
      if (iVar3 == 0) {
        iVar3 = FUN_01e1a508(param_1,0);
        pcVar5 = (char *)(_UNK_01e1884c + 0x1e1816c);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x024504c0(iVar3,0);
        uVar9 = *(undefined4 *)(param_1 + 0x14);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x024505b4(iVar7,uVar9,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iStack_34 = param_1;
        iVar7 = func_0x024504c0(iVar3,0);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e18870 + 0x1e18454));
          *pcVar5 = '\x01';
        }
        piVar10 = *(int **)(_UNK_01e18874 + 0x1e18470);
        puVar1 = *(undefined4 **)(*piVar10 + 0x5c);
        uVar9 = puVar1[2];
        uVar4 = *puVar1;
        uVar8 = puVar1[1];
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = 0;
        func_0x0245068c(iVar7,uVar4,uVar8,uVar9);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x024504c0(iVar3,0);
        pcVar6 = (char *)(_UNK_01e18878 + 0x1e184c8);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e1887c + 0x1e184dc));
          *pcVar6 = '\x01';
        }
        iVar2 = *(int *)(*piVar10 + 0x5c);
        uVar9 = *(undefined4 *)(iVar2 + 0xc);
        uVar4 = *(undefined4 *)(iVar2 + 0x10);
        uVar8 = *(undefined4 *)(iVar2 + 0x14);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = 0;
        func_0x024503a4(iVar7,uVar9,uVar4,uVar8);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x024504c0(iVar3,0);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e18880 + 0x1e18550));
          *pcVar5 = '\x01';
        }
        puVar1 = *(undefined4 **)(*piVar10 + 0x5c);
        uVar9 = *puVar1;
        uVar4 = puVar1[1];
        uVar8 = puVar1[2];
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = 0;
        func_0x02450c24(iVar7,uVar9,uVar4,uVar8);
        iVar7 = *(int *)(iStack_34 + 0x20);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x03dcf268(iVar7,0,iVar3,**(undefined4 **)(_UNK_01e18884 + 0x1e185b4));
      }
      return;
    }
    iVar3 = func_0x0229f13c(0x1641,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x1640);
    if (iVar3 == 0) {
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
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar7 = *(int *)(iVar3 + 8);
  uVar9 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar3 == 0) {
    uVar4 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar7,uVar9,&uStack_30,uVar4);
  return;
}



// ===== FAT.Merge.MBItemView$$RemoveHintForConsumeEnergy RVA 0x2290970 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_022a0970(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  iVar2 = func_0x0229f06c(0x1642);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229f06c(0x1643,0);
    if (iVar2 == 0) {
      pcVar12 = (char *)(_UNK_01e18a0c + 0x1e188fc);
      if (*pcVar12 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
        func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
        func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
        *pcVar12 = '\x01';
      }
      iVar2 = func_0x0229f06c(0x163d,0);
      if (iVar2 != 0) {
        iVar2 = func_0x0229f13c(0x163d,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,0,0);
        uStack_38 = uStack_50;
        if (*(int *)(iVar2 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485238(&uStack_38,0,0);
        iVar10 = *(int *)(iVar2 + 8);
        uVar13 = *(undefined4 *)(iVar2 + 0xc);
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar7 = 3;
        if (iVar2 == 0) {
          uVar7 = 2;
        }
        uStack_58 = 0;
        uStack_54 = 0;
        uVar1 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar7);
        return uVar1;
      }
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x03dcf4b4(iVar2,0,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar13 = func_0x03dcf1b0(iVar2,0,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
      FUN_01e1a604(param_1,0,uVar13);
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
      uStack_28 = 0;
      if (*(int *)(iVar2 + 8) != 0) {
        piVar9 = *(int **)(iVar2 + 0x20);
        iStack_30 = iVar2;
        if (piVar9 == (int *)0x0) {
          uVar1 = func_0x04821a00(&uStack_28,0);
        }
        else {
          iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x02457d84(iVar2);
          }
          iVar10 = *piVar9;
          uVar1 = (uint)*(ushort *)(iVar10 + 0xb6);
          if (uVar1 != 0) {
            piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
            do {
              if (piVar8[-1] == iVar2) {
                puVar3 = (undefined4 *)(iVar10 + *piVar8 * 8 + 200);
                goto LAB_03dd0a60;
              }
              uVar1 = uVar1 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar1 != 0);
          }
          puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar2,1);
LAB_03dd0a60:
          uVar1 = (*(code *)*puVar3)(piVar9,0,puVar3[1]);
          iVar2 = iStack_30;
        }
        uVar14 = *(uint *)(iVar2 + 8);
        uVar11 = uVar14;
        if (uVar14 == 0) {
          func_0x02457d50();
          uVar11 = *(uint *)(iStack_30 + 8);
          if (uVar11 == 0) {
            uVar15 = func_0x02457d50();
            uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
            iVar2 = (int)uVar15;
            uStack_54 = 0;
            if (*(int *)(iVar2 + 8) != 0) {
              piVar9 = *(int **)(iVar2 + 0x20);
              uStack_60 = uVar13;
              uStack_5c = uVar1;
              uStack_58 = uVar11;
              uStack_50 = uVar14;
              if (piVar9 == (int *)0x0) {
                uVar1 = func_0x04821a00(&uStack_60,0);
              }
              else {
                iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
                  iVar10 = func_0x02457d84(iVar10);
                }
                iVar4 = *piVar9;
                uVar1 = (uint)*(ushort *)(iVar4 + 0xb6);
                if (uVar1 != 0) {
                  piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                  do {
                    if (piVar8[-1] == iVar10) {
                      puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 200);
                      goto LAB_03dd0dc4;
                    }
                    uVar1 = uVar1 - 1;
                    piVar8 = piVar8 + 2;
                  } while (uVar1 != 0);
                }
                puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar10,1);
LAB_03dd0dc4:
                uVar1 = (*(code *)*puVar3)(piVar9,uVar13,puVar3[1]);
              }
              iVar4 = *(int *)(iVar2 + 8);
              iVar10 = iVar4;
              if (iVar4 == 0) {
                func_0x02457d50();
                iVar10 = *(int *)(iVar2 + 8);
                if (iVar10 == 0) {
                  uVar15 = func_0x02457d50();
                  uVar1 = func_0x03dcfa64((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                          *(undefined4 *)
                                           (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84)
                                         );
                  if ((int)uVar1 < 0) {
                    uVar13 = 0;
                  }
                  else {
                    iVar2 = *(int *)((int)uVar15 + 0xc);
                    if (iVar2 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar2 + 0xc) <= uVar1) {
                      func_0x02457d5c();
                    }
                    uVar13 = *(undefined4 *)(iVar2 + uVar1 * 0x10 + 0x1c);
                  }
                  *extraout_r2_00 = uVar13;
                  return ~uVar1 >> 0x1f;
                }
              }
              func_0x02457e94(uVar1 & 0x7fffffff,*(undefined4 *)(iVar4 + 0xc));
              if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
                func_0x02457d5c();
              }
              uVar11 = *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) - 1;
              if (-1 < (int)uVar11) {
                uVar14 = 0xffffffff;
                do {
                  uVar5 = uVar11;
                  iVar10 = *(int *)(iVar2 + 0xc);
                  if (iVar10 == 0) {
                    func_0x02457d50();
                  }
                  if (*(uint *)(iVar10 + 0xc) <= uVar5) {
                    func_0x02457d5c();
                  }
                  uVar13 = uStack_60;
                  iVar10 = iVar10 + uVar5 * 0x10;
                  if (*(uint *)(iVar10 + 0x10) == (uVar1 & 0x7fffffff)) {
                    piVar9 = *(int **)(iVar2 + 0x20);
                    if (piVar9 == (int *)0x0) {
                      piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                       (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60
                                                                ) + 0xc));
                      uVar13 = uStack_60;
                      uVar7 = *(undefined4 *)(iVar10 + 0x18);
                      if (piVar9 == (int *)0x0) {
                        func_0x02457d50(0,uVar7);
                      }
                      iVar4 = (**(code **)(*piVar9 + 0x100))
                                        (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                    }
                    else {
                      uVar7 = *(undefined4 *)(iVar10 + 0x18);
                      if (piVar9 == (int *)0x0) {
                        func_0x02457d50();
                      }
                      iVar4 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                        iVar4 = func_0x02457d84(iVar4);
                      }
                      iVar6 = *piVar9;
                      uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
                      if (uVar11 != 0) {
                        piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                        do {
                          if (piVar8[-1] == iVar4) {
                            puVar3 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                            goto LAB_03dd0f6c;
                          }
                          uVar11 = uVar11 - 1;
                          piVar8 = piVar8 + 2;
                        } while (uVar11 != 0);
                      }
                      puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar4,0);
LAB_03dd0f6c:
                      iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
                    }
                    if (iVar4 != 0) {
                      if ((int)uVar14 < 0) {
                        iVar4 = *(int *)(iVar2 + 8);
                        iVar6 = *(int *)(iVar10 + 0x14);
                        if (iVar4 == 0) {
                          func_0x02457d50();
                        }
                        if (*(uint *)(iVar4 + 0xc) <= extraout_r1_00) {
                          func_0x02457d5c();
                        }
                        *(int *)(iVar4 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                      }
                      else {
                        iVar4 = *(int *)(iVar2 + 0xc);
                        if (iVar4 == 0) {
                          func_0x02457d50();
                        }
                        uVar13 = *(undefined4 *)(iVar10 + 0x14);
                        if (*(uint *)(iVar4 + 0xc) <= uVar14) {
                          func_0x02457d5c();
                        }
                        *(undefined4 *)(iVar4 + uVar14 * 0x10 + 0x14) = uVar13;
                      }
                      *extraout_r2 = *(undefined4 *)(iVar10 + 0x1c);
                      uVar13 = *(undefined4 *)(iVar2 + 0x14);
                      *(undefined4 *)(iVar10 + 0x1c) = 0;
                      iVar6 = *(int *)(iVar2 + 0x1c);
                      iVar4 = *(int *)(iVar2 + 0x18);
                      *(undefined4 *)(iVar10 + 0x14) = uVar13;
                      *(uint *)(iVar10 + 0x10) = 0xffffffff;
                      *(int *)(iVar2 + 0x1c) = iVar6 + 1;
                      *(uint *)(iVar2 + 0x14) = uVar5;
                      *(int *)(iVar2 + 0x18) = iVar4 + 1;
                      return 1;
                    }
                  }
                  uVar11 = *(uint *)(iVar10 + 0x14);
                  uVar14 = uVar5;
                } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
              }
            }
            *extraout_r2 = 0;
            return 0;
          }
        }
        uStack_2c = uVar1 & 0x7fffffff;
        func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
        if (*(uint *)(uVar11 + 0xc) <= extraout_r1) {
          func_0x02457d5c();
        }
        uVar1 = *(int *)(uVar11 + extraout_r1 * 4 + 0x10) - 1;
        if (-1 < (int)uVar1) {
          iVar2 = iStack_30;
          uVar11 = 0xffffffff;
          uStack_38 = extraout_r1;
          do {
            uVar14 = uVar1;
            iVar10 = *(int *)(iVar2 + 0xc);
            if (iVar10 == 0) {
              func_0x02457d50();
            }
            if (*(uint *)(iVar10 + 0xc) <= uVar14) {
              func_0x02457d5c();
            }
            uVar13 = uStack_28;
            iVar10 = iVar10 + uVar14 * 0x10;
            if (*(uint *)(iVar10 + 0x10) == uStack_2c) {
              piVar9 = *(int **)(iVar2 + 0x20);
              if (piVar9 == (int *)0x0) {
                piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                 (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc)
                                               );
                uVar13 = uStack_28;
                uVar7 = *(undefined4 *)(iVar10 + 0x18);
                if (piVar9 == (int *)0x0) {
                  func_0x02457d50(0,uVar7);
                }
                iVar4 = (**(code **)(*piVar9 + 0x100))
                                  (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
              }
              else {
                uVar7 = *(undefined4 *)(iVar10 + 0x18);
                if (piVar9 == (int *)0x0) {
                  func_0x02457d50();
                }
                iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                  iVar2 = func_0x02457d84(iVar2);
                }
                iVar4 = *piVar9;
                uVar1 = (uint)*(ushort *)(iVar4 + 0xb6);
                if (uVar1 != 0) {
                  piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                  do {
                    if (piVar8[-1] == iVar2) {
                      puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                      goto LAB_03dd0c0c;
                    }
                    uVar1 = uVar1 - 1;
                    piVar8 = piVar8 + 2;
                  } while (uVar1 != 0);
                }
                puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar2,0);
LAB_03dd0c0c:
                iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
              }
              iVar2 = iStack_30;
              if (iVar4 != 0) {
                if ((int)uVar11 < 0) {
                  iVar2 = *(int *)(iStack_30 + 8);
                  iVar4 = *(int *)(iVar10 + 0x14);
                  if (iVar2 == 0) {
                    func_0x02457d50();
                  }
                  uVar1 = uStack_38;
                  if (*(uint *)(iVar2 + 0xc) <= uStack_38) {
                    func_0x02457d5c();
                  }
                  *(int *)(iVar2 + uVar1 * 4 + 0x10) = iVar4 + 1;
                }
                else {
                  iVar2 = *(int *)(iStack_30 + 0xc);
                  if (iVar2 == 0) {
                    func_0x02457d50();
                  }
                  uVar13 = *(undefined4 *)(iVar10 + 0x14);
                  if (*(uint *)(iVar2 + 0xc) <= uVar11) {
                    func_0x02457d5c();
                  }
                  *(undefined4 *)(iVar2 + uVar11 * 0x10 + 0x14) = uVar13;
                }
                uVar13 = *(undefined4 *)(iStack_30 + 0x14);
                *(undefined4 *)(iVar10 + 0x1c) = 0;
                iVar2 = *(int *)(iStack_30 + 0x18);
                iVar4 = *(int *)(iStack_30 + 0x1c);
                *(uint *)(iVar10 + 0x10) = 0xffffffff;
                *(undefined4 *)(iVar10 + 0x14) = uVar13;
                *(uint *)(iStack_30 + 0x14) = uVar14;
                *(int *)(iStack_30 + 0x18) = iVar2 + 1;
                *(int *)(iStack_30 + 0x1c) = iVar4 + 1;
                return 1;
              }
            }
            uVar1 = *(uint *)(iVar10 + 0x14);
            uVar11 = uVar14;
          } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
        }
      }
      return 0;
    }
    iVar2 = func_0x0229f13c(0x1643,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x1642);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&stack0xffffffb8,0,0);
  uStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&iStack_30,param_1,0);
  iVar10 = *(int *)(iVar2 + 8);
  uVar13 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar2 == 0) {
    uVar7 = 1;
  }
  uStack_50 = 0;
  uVar1 = func_0x0245495c(iVar10,uVar13,&iStack_30,uVar7);
  return uVar1;
}



// ===== FAT.Merge.MBItemView$$AddHintForConsumeBoostEnergy RVA 0x22909d4 =====

/* WARNING: Removing unreachable block (ram,0x01e1816c) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e18178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a09d4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 unaff_r4;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar3 = func_0x0229f06c(0xa074);
  if (iVar3 == 0) {
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0229f06c(0xa075,0);
    if (iVar3 == 0) {
      pcVar5 = (char *)(_UNK_01e1882c + 0x1e18078);
      uStack_24 = unaff_r4;
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
        func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
        func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
        func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
        func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
        func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
        *pcVar5 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x1636,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0x1636,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = uStack_24;
        iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,0xb,0);
        uStack_38 = uStack_50;
        iStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar3 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485238(&uStack_38,0xb,0);
        iVar7 = *(int *)(iVar3 + 8);
        uVar9 = *(undefined4 *)(iVar3 + 0xc);
        iVar3 = *(int *)(iVar3 + 0x10);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uVar4 = 3;
        if (iVar3 == 0) {
          uVar4 = 2;
        }
        func_0x0245495c(iVar7,uVar9,&uStack_38,uVar4,0,0);
        return;
      }
      iVar3 = *(int *)(param_1 + 0x20);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x03dcf4b4(iVar3,0xb,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
      if (iVar3 == 0) {
        iVar3 = FUN_01e1a508(param_1,0xb);
        pcVar5 = (char *)(_UNK_01e1884c + 0x1e1816c);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x024504c0(iVar3,0);
        uVar9 = *(undefined4 *)(param_1 + 0x14);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x024505b4(iVar7,uVar9,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iStack_34 = param_1;
        iVar7 = func_0x024504c0(iVar3,0);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e18870 + 0x1e18454));
          *pcVar5 = '\x01';
        }
        piVar10 = *(int **)(_UNK_01e18874 + 0x1e18470);
        puVar1 = *(undefined4 **)(*piVar10 + 0x5c);
        uVar9 = puVar1[2];
        uVar4 = *puVar1;
        uVar8 = puVar1[1];
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = 0;
        func_0x0245068c(iVar7,uVar4,uVar8,uVar9);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x024504c0(iVar3,0);
        pcVar6 = (char *)(_UNK_01e18878 + 0x1e184c8);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e1887c + 0x1e184dc));
          *pcVar6 = '\x01';
        }
        iVar2 = *(int *)(*piVar10 + 0x5c);
        uVar9 = *(undefined4 *)(iVar2 + 0xc);
        uVar4 = *(undefined4 *)(iVar2 + 0x10);
        uVar8 = *(undefined4 *)(iVar2 + 0x14);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = 0;
        func_0x024503a4(iVar7,uVar9,uVar4,uVar8);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x024504c0(iVar3,0);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e18880 + 0x1e18550));
          *pcVar5 = '\x01';
        }
        puVar1 = *(undefined4 **)(*piVar10 + 0x5c);
        uVar9 = *puVar1;
        uVar4 = puVar1[1];
        uVar8 = puVar1[2];
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = 0;
        func_0x02450c24(iVar7,uVar9,uVar4,uVar8);
        iVar7 = *(int *)(iStack_34 + 0x20);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x03dcf268(iVar7,0xb,iVar3,**(undefined4 **)(_UNK_01e18884 + 0x1e185b4));
      }
      return;
    }
    iVar3 = func_0x0229f13c(0xa075,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar3 = func_0x0229f13c(0xa074);
    if (iVar3 == 0) {
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
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar7 = *(int *)(iVar3 + 8);
  uVar9 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar3 == 0) {
    uVar4 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar7,uVar9,&uStack_30,uVar4);
  return;
}



// ===== FAT.Merge.MBItemView$$RemoveHintForConsumeBoostEnergy RVA 0x2290a38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_022a0a38(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  iVar2 = func_0x0229f06c(0xa076);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229f06c(0xa077,0);
    if (iVar2 == 0) {
      pcVar12 = (char *)(_UNK_01e18a0c + 0x1e188fc);
      if (*pcVar12 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
        func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
        func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
        *pcVar12 = '\x01';
      }
      iVar2 = func_0x0229f06c(0x163d,0);
      if (iVar2 != 0) {
        iVar2 = func_0x0229f13c(0x163d,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,0xb,0);
        uStack_38 = uStack_50;
        if (*(int *)(iVar2 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485238(&uStack_38,0xb,0);
        iVar10 = *(int *)(iVar2 + 8);
        uVar13 = *(undefined4 *)(iVar2 + 0xc);
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar7 = 3;
        if (iVar2 == 0) {
          uVar7 = 2;
        }
        uStack_58 = 0;
        uStack_54 = 0;
        uVar1 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar7);
        return uVar1;
      }
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x03dcf4b4(iVar2,0xb,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar13 = func_0x03dcf1b0(iVar2,0xb,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
      FUN_01e1a604(param_1,0xb,uVar13);
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
      uStack_28 = 0xb;
      if (*(int *)(iVar2 + 8) != 0) {
        piVar9 = *(int **)(iVar2 + 0x20);
        iStack_30 = iVar2;
        if (piVar9 == (int *)0x0) {
          uVar1 = func_0x04821a00(&uStack_28,0);
        }
        else {
          iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x02457d84(iVar2);
          }
          iVar10 = *piVar9;
          uVar1 = (uint)*(ushort *)(iVar10 + 0xb6);
          if (uVar1 != 0) {
            piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
            do {
              if (piVar8[-1] == iVar2) {
                puVar3 = (undefined4 *)(iVar10 + *piVar8 * 8 + 200);
                goto LAB_03dd0a60;
              }
              uVar1 = uVar1 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar1 != 0);
          }
          puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar2,1);
LAB_03dd0a60:
          uVar1 = (*(code *)*puVar3)(piVar9,0xb,puVar3[1]);
          iVar2 = iStack_30;
        }
        uVar14 = *(uint *)(iVar2 + 8);
        uVar11 = uVar14;
        if (uVar14 == 0) {
          func_0x02457d50();
          uVar11 = *(uint *)(iStack_30 + 8);
          if (uVar11 == 0) {
            uVar15 = func_0x02457d50();
            uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
            iVar2 = (int)uVar15;
            uStack_54 = 0;
            if (*(int *)(iVar2 + 8) != 0) {
              piVar9 = *(int **)(iVar2 + 0x20);
              uStack_60 = uVar13;
              uStack_5c = uVar1;
              uStack_58 = uVar11;
              uStack_50 = uVar14;
              if (piVar9 == (int *)0x0) {
                uVar1 = func_0x04821a00(&uStack_60,0);
              }
              else {
                iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
                  iVar10 = func_0x02457d84(iVar10);
                }
                iVar4 = *piVar9;
                uVar1 = (uint)*(ushort *)(iVar4 + 0xb6);
                if (uVar1 != 0) {
                  piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                  do {
                    if (piVar8[-1] == iVar10) {
                      puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 200);
                      goto LAB_03dd0dc4;
                    }
                    uVar1 = uVar1 - 1;
                    piVar8 = piVar8 + 2;
                  } while (uVar1 != 0);
                }
                puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar10,1);
LAB_03dd0dc4:
                uVar1 = (*(code *)*puVar3)(piVar9,uVar13,puVar3[1]);
              }
              iVar4 = *(int *)(iVar2 + 8);
              iVar10 = iVar4;
              if (iVar4 == 0) {
                func_0x02457d50();
                iVar10 = *(int *)(iVar2 + 8);
                if (iVar10 == 0) {
                  uVar15 = func_0x02457d50();
                  uVar1 = func_0x03dcfa64((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                          *(undefined4 *)
                                           (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84)
                                         );
                  if ((int)uVar1 < 0) {
                    uVar13 = 0;
                  }
                  else {
                    iVar2 = *(int *)((int)uVar15 + 0xc);
                    if (iVar2 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar2 + 0xc) <= uVar1) {
                      func_0x02457d5c();
                    }
                    uVar13 = *(undefined4 *)(iVar2 + uVar1 * 0x10 + 0x1c);
                  }
                  *extraout_r2_00 = uVar13;
                  return ~uVar1 >> 0x1f;
                }
              }
              func_0x02457e94(uVar1 & 0x7fffffff,*(undefined4 *)(iVar4 + 0xc));
              if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
                func_0x02457d5c();
              }
              uVar11 = *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) - 1;
              if (-1 < (int)uVar11) {
                uVar14 = 0xffffffff;
                do {
                  uVar5 = uVar11;
                  iVar10 = *(int *)(iVar2 + 0xc);
                  if (iVar10 == 0) {
                    func_0x02457d50();
                  }
                  if (*(uint *)(iVar10 + 0xc) <= uVar5) {
                    func_0x02457d5c();
                  }
                  uVar13 = uStack_60;
                  iVar10 = iVar10 + uVar5 * 0x10;
                  if (*(uint *)(iVar10 + 0x10) == (uVar1 & 0x7fffffff)) {
                    piVar9 = *(int **)(iVar2 + 0x20);
                    if (piVar9 == (int *)0x0) {
                      piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                       (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60
                                                                ) + 0xc));
                      uVar13 = uStack_60;
                      uVar7 = *(undefined4 *)(iVar10 + 0x18);
                      if (piVar9 == (int *)0x0) {
                        func_0x02457d50(0,uVar7);
                      }
                      iVar4 = (**(code **)(*piVar9 + 0x100))
                                        (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                    }
                    else {
                      uVar7 = *(undefined4 *)(iVar10 + 0x18);
                      if (piVar9 == (int *)0x0) {
                        func_0x02457d50();
                      }
                      iVar4 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                        iVar4 = func_0x02457d84(iVar4);
                      }
                      iVar6 = *piVar9;
                      uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
                      if (uVar11 != 0) {
                        piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                        do {
                          if (piVar8[-1] == iVar4) {
                            puVar3 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                            goto LAB_03dd0f6c;
                          }
                          uVar11 = uVar11 - 1;
                          piVar8 = piVar8 + 2;
                        } while (uVar11 != 0);
                      }
                      puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar4,0);
LAB_03dd0f6c:
                      iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
                    }
                    if (iVar4 != 0) {
                      if ((int)uVar14 < 0) {
                        iVar4 = *(int *)(iVar2 + 8);
                        iVar6 = *(int *)(iVar10 + 0x14);
                        if (iVar4 == 0) {
                          func_0x02457d50();
                        }
                        if (*(uint *)(iVar4 + 0xc) <= extraout_r1_00) {
                          func_0x02457d5c();
                        }
                        *(int *)(iVar4 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                      }
                      else {
                        iVar4 = *(int *)(iVar2 + 0xc);
                        if (iVar4 == 0) {
                          func_0x02457d50();
                        }
                        uVar13 = *(undefined4 *)(iVar10 + 0x14);
                        if (*(uint *)(iVar4 + 0xc) <= uVar14) {
                          func_0x02457d5c();
                        }
                        *(undefined4 *)(iVar4 + uVar14 * 0x10 + 0x14) = uVar13;
                      }
                      *extraout_r2 = *(undefined4 *)(iVar10 + 0x1c);
                      uVar13 = *(undefined4 *)(iVar2 + 0x14);
                      *(undefined4 *)(iVar10 + 0x1c) = 0;
                      iVar6 = *(int *)(iVar2 + 0x1c);
                      iVar4 = *(int *)(iVar2 + 0x18);
                      *(undefined4 *)(iVar10 + 0x14) = uVar13;
                      *(uint *)(iVar10 + 0x10) = 0xffffffff;
                      *(int *)(iVar2 + 0x1c) = iVar6 + 1;
                      *(uint *)(iVar2 + 0x14) = uVar5;
                      *(int *)(iVar2 + 0x18) = iVar4 + 1;
                      return 1;
                    }
                  }
                  uVar11 = *(uint *)(iVar10 + 0x14);
                  uVar14 = uVar5;
                } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
              }
            }
            *extraout_r2 = 0;
            return 0;
          }
        }
        uStack_2c = uVar1 & 0x7fffffff;
        func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
        if (*(uint *)(uVar11 + 0xc) <= extraout_r1) {
          func_0x02457d5c();
        }
        uVar1 = *(int *)(uVar11 + extraout_r1 * 4 + 0x10) - 1;
        if (-1 < (int)uVar1) {
          iVar2 = iStack_30;
          uVar11 = 0xffffffff;
          uStack_38 = extraout_r1;
          do {
            uVar14 = uVar1;
            iVar10 = *(int *)(iVar2 + 0xc);
            if (iVar10 == 0) {
              func_0x02457d50();
            }
            if (*(uint *)(iVar10 + 0xc) <= uVar14) {
              func_0x02457d5c();
            }
            uVar13 = uStack_28;
            iVar10 = iVar10 + uVar14 * 0x10;
            if (*(uint *)(iVar10 + 0x10) == uStack_2c) {
              piVar9 = *(int **)(iVar2 + 0x20);
              if (piVar9 == (int *)0x0) {
                piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                 (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc)
                                               );
                uVar13 = uStack_28;
                uVar7 = *(undefined4 *)(iVar10 + 0x18);
                if (piVar9 == (int *)0x0) {
                  func_0x02457d50(0,uVar7);
                }
                iVar4 = (**(code **)(*piVar9 + 0x100))
                                  (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
              }
              else {
                uVar7 = *(undefined4 *)(iVar10 + 0x18);
                if (piVar9 == (int *)0x0) {
                  func_0x02457d50();
                }
                iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                  iVar2 = func_0x02457d84(iVar2);
                }
                iVar4 = *piVar9;
                uVar1 = (uint)*(ushort *)(iVar4 + 0xb6);
                if (uVar1 != 0) {
                  piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                  do {
                    if (piVar8[-1] == iVar2) {
                      puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                      goto LAB_03dd0c0c;
                    }
                    uVar1 = uVar1 - 1;
                    piVar8 = piVar8 + 2;
                  } while (uVar1 != 0);
                }
                puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar2,0);
LAB_03dd0c0c:
                iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
              }
              iVar2 = iStack_30;
              if (iVar4 != 0) {
                if ((int)uVar11 < 0) {
                  iVar2 = *(int *)(iStack_30 + 8);
                  iVar4 = *(int *)(iVar10 + 0x14);
                  if (iVar2 == 0) {
                    func_0x02457d50();
                  }
                  uVar1 = uStack_38;
                  if (*(uint *)(iVar2 + 0xc) <= uStack_38) {
                    func_0x02457d5c();
                  }
                  *(int *)(iVar2 + uVar1 * 4 + 0x10) = iVar4 + 1;
                }
                else {
                  iVar2 = *(int *)(iStack_30 + 0xc);
                  if (iVar2 == 0) {
                    func_0x02457d50();
                  }
                  uVar13 = *(undefined4 *)(iVar10 + 0x14);
                  if (*(uint *)(iVar2 + 0xc) <= uVar11) {
                    func_0x02457d5c();
                  }
                  *(undefined4 *)(iVar2 + uVar11 * 0x10 + 0x14) = uVar13;
                }
                uVar13 = *(undefined4 *)(iStack_30 + 0x14);
                *(undefined4 *)(iVar10 + 0x1c) = 0;
                iVar2 = *(int *)(iStack_30 + 0x18);
                iVar4 = *(int *)(iStack_30 + 0x1c);
                *(uint *)(iVar10 + 0x10) = 0xffffffff;
                *(undefined4 *)(iVar10 + 0x14) = uVar13;
                *(uint *)(iStack_30 + 0x14) = uVar14;
                *(int *)(iStack_30 + 0x18) = iVar2 + 1;
                *(int *)(iStack_30 + 0x1c) = iVar4 + 1;
                return 1;
              }
            }
            uVar1 = *(uint *)(iVar10 + 0x14);
            uVar11 = uVar14;
          } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
        }
      }
      return 0;
    }
    iVar2 = func_0x0229f13c(0xa077,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa076);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&stack0xffffffb8,0,0);
  uStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&iStack_30,param_1,0);
  iVar10 = *(int *)(iVar2 + 8);
  uVar13 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar2 == 0) {
    uVar7 = 1;
  }
  uStack_50 = 0;
  uVar1 = func_0x0245495c(iVar10,uVar13,&iStack_30,uVar7);
  return uVar1;
}



// ===== FAT.Merge.MBItemView$$AddSelectOutlineEffect RVA 0x2290a9c =====

void FUN_022a0a9c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9e79);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x9e7a,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = func_0x0229f13c(0x9e7a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e79);
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



// ===== FAT.Merge.MBItemView$$RemoveSelectOutlineEffect RVA 0x2290b00 =====

void FUN_022a0b00(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ef4);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x5ef5,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = func_0x0229f13c(0x5ef5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5ef4);
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



// ===== FAT.Merge.MBItemView$$AddShadowEffect RVA 0x2290b64 =====

/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e182c8) */
/* WARNING: Removing unreachable block (ram,0x01e182d0) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e183bc) */
/* WARNING: Removing unreachable block (ram,0x01e183c4) */
/* WARNING: Removing unreachable block (ram,0x01e183c8) */
/* WARNING: Removing unreachable block (ram,0x01e18400) */
/* WARNING: Removing unreachable block (ram,0x01e18408) */
/* WARNING: Removing unreachable block (ram,0x01e1840c) */
/* WARNING: Removing unreachable block (ram,0x01e1841c) */
/* WARNING: Removing unreachable block (ram,0x01e18424) */
/* WARNING: Removing unreachable block (ram,0x01e18428) */
/* WARNING: Removing unreachable block (ram,0x01e18448) */
/* WARNING: Removing unreachable block (ram,0x01e1845c) */
/* WARNING: Removing unreachable block (ram,0x01e18480) */
/* WARNING: Removing unreachable block (ram,0x01e18484) */
/* WARNING: Removing unreachable block (ram,0x01e184a8) */
/* WARNING: Removing unreachable block (ram,0x01e184ac) */
/* WARNING: Removing unreachable block (ram,0x01e184d0) */
/* WARNING: Removing unreachable block (ram,0x01e184e4) */
/* WARNING: Removing unreachable block (ram,0x01e184fc) */
/* WARNING: Removing unreachable block (ram,0x01e18500) */
/* WARNING: Removing unreachable block (ram,0x01e18524) */
/* WARNING: Removing unreachable block (ram,0x01e18528) */
/* WARNING: Removing unreachable block (ram,0x01e18544) */
/* WARNING: Removing unreachable block (ram,0x01e18558) */
/* WARNING: Removing unreachable block (ram,0x01e1856c) */
/* WARNING: Removing unreachable block (ram,0x01e18570) */
/* WARNING: Removing unreachable block (ram,0x01e1859c) */
/* WARNING: Removing unreachable block (ram,0x01e185a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a0b64(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 unaff_r4;
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
  
  iVar1 = func_0x0229f06c(0xa0db);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0xa0a4,0);
    if (iVar1 == 0) {
      pcVar3 = (char *)(_UNK_01e1882c + 0x1e18078);
      uStack_24 = unaff_r4;
      if (*pcVar3 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
        func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
        func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
        func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
        func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
        func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
        *pcVar3 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x1636,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x1636,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = uStack_24;
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,0x1d,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485238(&uStack_38,0x1d,0);
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
      iVar1 = *(int *)(param_1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03dcf4b4(iVar1,0x1d,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
      if (iVar1 != 0) {
        return;
      }
      FUN_01e1a508(param_1,0x1d);
                    /* WARNING: Could not recover jumptable at 0x01e18180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_01e18184 + _UNK_01e181a4))();
      return;
    }
    iVar1 = func_0x0229f13c(0xa0a4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa0db);
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
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
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
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2);
  return;
}



// ===== FAT.Merge.MBItemView$$RemoveShadowEffect RVA 0x2290bc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_022a0bc8(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  iVar2 = func_0x0229f06c(0xa0e9);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229f06c(0xa0a5,0);
    if (iVar2 == 0) {
      pcVar12 = (char *)(_UNK_01e18a0c + 0x1e188fc);
      if (*pcVar12 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
        func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
        func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
        *pcVar12 = '\x01';
      }
      iVar2 = func_0x0229f06c(0x163d,0);
      if (iVar2 != 0) {
        iVar2 = func_0x0229f13c(0x163d,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,0x1d,0);
        uStack_38 = uStack_50;
        if (*(int *)(iVar2 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485238(&uStack_38,0x1d,0);
        iVar10 = *(int *)(iVar2 + 8);
        uVar13 = *(undefined4 *)(iVar2 + 0xc);
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar7 = 3;
        if (iVar2 == 0) {
          uVar7 = 2;
        }
        uStack_58 = 0;
        uStack_54 = 0;
        uVar1 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar7);
        return uVar1;
      }
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x03dcf4b4(iVar2,0x1d,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar13 = func_0x03dcf1b0(iVar2,0x1d,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
      FUN_01e1a604(param_1,0x1d,uVar13);
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
      uStack_28 = 0x1d;
      if (*(int *)(iVar2 + 8) != 0) {
        piVar9 = *(int **)(iVar2 + 0x20);
        iStack_30 = iVar2;
        if (piVar9 == (int *)0x0) {
          uVar1 = func_0x04821a00(&uStack_28,0);
        }
        else {
          iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x02457d84(iVar2);
          }
          iVar10 = *piVar9;
          uVar1 = (uint)*(ushort *)(iVar10 + 0xb6);
          if (uVar1 != 0) {
            piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
            do {
              if (piVar8[-1] == iVar2) {
                puVar3 = (undefined4 *)(iVar10 + *piVar8 * 8 + 200);
                goto LAB_03dd0a60;
              }
              uVar1 = uVar1 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar1 != 0);
          }
          puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar2,1);
LAB_03dd0a60:
          uVar1 = (*(code *)*puVar3)(piVar9,0x1d,puVar3[1]);
          iVar2 = iStack_30;
        }
        uVar14 = *(uint *)(iVar2 + 8);
        uVar11 = uVar14;
        if (uVar14 == 0) {
          func_0x02457d50();
          uVar11 = *(uint *)(iStack_30 + 8);
          if (uVar11 == 0) {
            uVar15 = func_0x02457d50();
            uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
            iVar2 = (int)uVar15;
            uStack_54 = 0;
            if (*(int *)(iVar2 + 8) != 0) {
              piVar9 = *(int **)(iVar2 + 0x20);
              uStack_60 = uVar13;
              uStack_5c = uVar1;
              uStack_58 = uVar11;
              uStack_50 = uVar14;
              if (piVar9 == (int *)0x0) {
                uVar1 = func_0x04821a00(&uStack_60,0);
              }
              else {
                iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
                  iVar10 = func_0x02457d84(iVar10);
                }
                iVar4 = *piVar9;
                uVar1 = (uint)*(ushort *)(iVar4 + 0xb6);
                if (uVar1 != 0) {
                  piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                  do {
                    if (piVar8[-1] == iVar10) {
                      puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 200);
                      goto LAB_03dd0dc4;
                    }
                    uVar1 = uVar1 - 1;
                    piVar8 = piVar8 + 2;
                  } while (uVar1 != 0);
                }
                puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar10,1);
LAB_03dd0dc4:
                uVar1 = (*(code *)*puVar3)(piVar9,uVar13,puVar3[1]);
              }
              iVar4 = *(int *)(iVar2 + 8);
              iVar10 = iVar4;
              if (iVar4 == 0) {
                func_0x02457d50();
                iVar10 = *(int *)(iVar2 + 8);
                if (iVar10 == 0) {
                  uVar15 = func_0x02457d50();
                  uVar1 = func_0x03dcfa64((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                          *(undefined4 *)
                                           (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84)
                                         );
                  if ((int)uVar1 < 0) {
                    uVar13 = 0;
                  }
                  else {
                    iVar2 = *(int *)((int)uVar15 + 0xc);
                    if (iVar2 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar2 + 0xc) <= uVar1) {
                      func_0x02457d5c();
                    }
                    uVar13 = *(undefined4 *)(iVar2 + uVar1 * 0x10 + 0x1c);
                  }
                  *extraout_r2_00 = uVar13;
                  return ~uVar1 >> 0x1f;
                }
              }
              func_0x02457e94(uVar1 & 0x7fffffff,*(undefined4 *)(iVar4 + 0xc));
              if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
                func_0x02457d5c();
              }
              uVar11 = *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) - 1;
              if (-1 < (int)uVar11) {
                uVar14 = 0xffffffff;
                do {
                  uVar5 = uVar11;
                  iVar10 = *(int *)(iVar2 + 0xc);
                  if (iVar10 == 0) {
                    func_0x02457d50();
                  }
                  if (*(uint *)(iVar10 + 0xc) <= uVar5) {
                    func_0x02457d5c();
                  }
                  uVar13 = uStack_60;
                  iVar10 = iVar10 + uVar5 * 0x10;
                  if (*(uint *)(iVar10 + 0x10) == (uVar1 & 0x7fffffff)) {
                    piVar9 = *(int **)(iVar2 + 0x20);
                    if (piVar9 == (int *)0x0) {
                      piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                       (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60
                                                                ) + 0xc));
                      uVar13 = uStack_60;
                      uVar7 = *(undefined4 *)(iVar10 + 0x18);
                      if (piVar9 == (int *)0x0) {
                        func_0x02457d50(0,uVar7);
                      }
                      iVar4 = (**(code **)(*piVar9 + 0x100))
                                        (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                    }
                    else {
                      uVar7 = *(undefined4 *)(iVar10 + 0x18);
                      if (piVar9 == (int *)0x0) {
                        func_0x02457d50();
                      }
                      iVar4 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                        iVar4 = func_0x02457d84(iVar4);
                      }
                      iVar6 = *piVar9;
                      uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
                      if (uVar11 != 0) {
                        piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                        do {
                          if (piVar8[-1] == iVar4) {
                            puVar3 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                            goto LAB_03dd0f6c;
                          }
                          uVar11 = uVar11 - 1;
                          piVar8 = piVar8 + 2;
                        } while (uVar11 != 0);
                      }
                      puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar4,0);
LAB_03dd0f6c:
                      iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
                    }
                    if (iVar4 != 0) {
                      if ((int)uVar14 < 0) {
                        iVar4 = *(int *)(iVar2 + 8);
                        iVar6 = *(int *)(iVar10 + 0x14);
                        if (iVar4 == 0) {
                          func_0x02457d50();
                        }
                        if (*(uint *)(iVar4 + 0xc) <= extraout_r1_00) {
                          func_0x02457d5c();
                        }
                        *(int *)(iVar4 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                      }
                      else {
                        iVar4 = *(int *)(iVar2 + 0xc);
                        if (iVar4 == 0) {
                          func_0x02457d50();
                        }
                        uVar13 = *(undefined4 *)(iVar10 + 0x14);
                        if (*(uint *)(iVar4 + 0xc) <= uVar14) {
                          func_0x02457d5c();
                        }
                        *(undefined4 *)(iVar4 + uVar14 * 0x10 + 0x14) = uVar13;
                      }
                      *extraout_r2 = *(undefined4 *)(iVar10 + 0x1c);
                      uVar13 = *(undefined4 *)(iVar2 + 0x14);
                      *(undefined4 *)(iVar10 + 0x1c) = 0;
                      iVar6 = *(int *)(iVar2 + 0x1c);
                      iVar4 = *(int *)(iVar2 + 0x18);
                      *(undefined4 *)(iVar10 + 0x14) = uVar13;
                      *(uint *)(iVar10 + 0x10) = 0xffffffff;
                      *(int *)(iVar2 + 0x1c) = iVar6 + 1;
                      *(uint *)(iVar2 + 0x14) = uVar5;
                      *(int *)(iVar2 + 0x18) = iVar4 + 1;
                      return 1;
                    }
                  }
                  uVar11 = *(uint *)(iVar10 + 0x14);
                  uVar14 = uVar5;
                } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
              }
            }
            *extraout_r2 = 0;
            return 0;
          }
        }
        uStack_2c = uVar1 & 0x7fffffff;
        func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
        if (*(uint *)(uVar11 + 0xc) <= extraout_r1) {
          func_0x02457d5c();
        }
        uVar1 = *(int *)(uVar11 + extraout_r1 * 4 + 0x10) - 1;
        if (-1 < (int)uVar1) {
          iVar2 = iStack_30;
          uVar11 = 0xffffffff;
          uStack_38 = extraout_r1;
          do {
            uVar14 = uVar1;
            iVar10 = *(int *)(iVar2 + 0xc);
            if (iVar10 == 0) {
              func_0x02457d50();
            }
            if (*(uint *)(iVar10 + 0xc) <= uVar14) {
              func_0x02457d5c();
            }
            uVar13 = uStack_28;
            iVar10 = iVar10 + uVar14 * 0x10;
            if (*(uint *)(iVar10 + 0x10) == uStack_2c) {
              piVar9 = *(int **)(iVar2 + 0x20);
              if (piVar9 == (int *)0x0) {
                piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                 (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc)
                                               );
                uVar13 = uStack_28;
                uVar7 = *(undefined4 *)(iVar10 + 0x18);
                if (piVar9 == (int *)0x0) {
                  func_0x02457d50(0,uVar7);
                }
                iVar4 = (**(code **)(*piVar9 + 0x100))
                                  (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
              }
              else {
                uVar7 = *(undefined4 *)(iVar10 + 0x18);
                if (piVar9 == (int *)0x0) {
                  func_0x02457d50();
                }
                iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                  iVar2 = func_0x02457d84(iVar2);
                }
                iVar4 = *piVar9;
                uVar1 = (uint)*(ushort *)(iVar4 + 0xb6);
                if (uVar1 != 0) {
                  piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                  do {
                    if (piVar8[-1] == iVar2) {
                      puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                      goto LAB_03dd0c0c;
                    }
                    uVar1 = uVar1 - 1;
                    piVar8 = piVar8 + 2;
                  } while (uVar1 != 0);
                }
                puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar2,0);
LAB_03dd0c0c:
                iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
              }
              iVar2 = iStack_30;
              if (iVar4 != 0) {
                if ((int)uVar11 < 0) {
                  iVar2 = *(int *)(iStack_30 + 8);
                  iVar4 = *(int *)(iVar10 + 0x14);
                  if (iVar2 == 0) {
                    func_0x02457d50();
                  }
                  uVar1 = uStack_38;
                  if (*(uint *)(iVar2 + 0xc) <= uStack_38) {
                    func_0x02457d5c();
                  }
                  *(int *)(iVar2 + uVar1 * 4 + 0x10) = iVar4 + 1;
                }
                else {
                  iVar2 = *(int *)(iStack_30 + 0xc);
                  if (iVar2 == 0) {
                    func_0x02457d50();
                  }
                  uVar13 = *(undefined4 *)(iVar10 + 0x14);
                  if (*(uint *)(iVar2 + 0xc) <= uVar11) {
                    func_0x02457d5c();
                  }
                  *(undefined4 *)(iVar2 + uVar11 * 0x10 + 0x14) = uVar13;
                }
                uVar13 = *(undefined4 *)(iStack_30 + 0x14);
                *(undefined4 *)(iVar10 + 0x1c) = 0;
                iVar2 = *(int *)(iStack_30 + 0x18);
                iVar4 = *(int *)(iStack_30 + 0x1c);
                *(uint *)(iVar10 + 0x10) = 0xffffffff;
                *(undefined4 *)(iVar10 + 0x14) = uVar13;
                *(uint *)(iStack_30 + 0x14) = uVar14;
                *(int *)(iStack_30 + 0x18) = iVar2 + 1;
                *(int *)(iStack_30 + 0x1c) = iVar4 + 1;
                return 1;
              }
            }
            uVar1 = *(uint *)(iVar10 + 0x14);
            uVar11 = uVar14;
          } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
        }
      }
      return 0;
    }
    iVar2 = func_0x0229f13c(0xa0a5,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa0e9);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&stack0xffffffb8,0,0);
  uStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&iStack_30,param_1,0);
  iVar10 = *(int *)(iVar2 + 8);
  uVar13 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar2 == 0) {
    uVar7 = 1;
  }
  uStack_50 = 0;
  uVar1 = func_0x0245495c(iVar10,uVar13,&iStack_30,uVar7);
  return uVar1;
}



// ===== FAT.Merge.MBItemView$$AddHintForLightbulb RVA 0x2290c2c =====

/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e182c8) */
/* WARNING: Removing unreachable block (ram,0x01e182d0) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e183bc) */
/* WARNING: Removing unreachable block (ram,0x01e183c4) */
/* WARNING: Removing unreachable block (ram,0x01e183c8) */
/* WARNING: Removing unreachable block (ram,0x01e18400) */
/* WARNING: Removing unreachable block (ram,0x01e18408) */
/* WARNING: Removing unreachable block (ram,0x01e1840c) */
/* WARNING: Removing unreachable block (ram,0x01e1841c) */
/* WARNING: Removing unreachable block (ram,0x01e18424) */
/* WARNING: Removing unreachable block (ram,0x01e18428) */
/* WARNING: Removing unreachable block (ram,0x01e18448) */
/* WARNING: Removing unreachable block (ram,0x01e1845c) */
/* WARNING: Removing unreachable block (ram,0x01e18480) */
/* WARNING: Removing unreachable block (ram,0x01e18484) */
/* WARNING: Removing unreachable block (ram,0x01e184a8) */
/* WARNING: Removing unreachable block (ram,0x01e184ac) */
/* WARNING: Removing unreachable block (ram,0x01e184d0) */
/* WARNING: Removing unreachable block (ram,0x01e184e4) */
/* WARNING: Removing unreachable block (ram,0x01e184fc) */
/* WARNING: Removing unreachable block (ram,0x01e18500) */
/* WARNING: Removing unreachable block (ram,0x01e18524) */
/* WARNING: Removing unreachable block (ram,0x01e18528) */
/* WARNING: Removing unreachable block (ram,0x01e18544) */
/* WARNING: Removing unreachable block (ram,0x01e18558) */
/* WARNING: Removing unreachable block (ram,0x01e1856c) */
/* WARNING: Removing unreachable block (ram,0x01e18570) */
/* WARNING: Removing unreachable block (ram,0x01e1859c) */
/* WARNING: Removing unreachable block (ram,0x01e185a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a0c2c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 unaff_r4;
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
  
  iVar1 = func_0x0229f06c(0xa079);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0xa07a,0);
    if (iVar1 == 0) {
      pcVar3 = (char *)(_UNK_01e1882c + 0x1e18078);
      uStack_24 = unaff_r4;
      if (*pcVar3 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
        func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
        func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
        func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
        func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
        func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
        *pcVar3 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x1636,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x1636,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = uStack_24;
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,0x17,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485238(&uStack_38,0x17,0);
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
      iVar1 = *(int *)(param_1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03dcf4b4(iVar1,0x17,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
      if (iVar1 != 0) {
        return;
      }
      FUN_01e1a508(param_1,0x17);
                    /* WARNING: Could not recover jumptable at 0x01e18180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_01e18184 + _UNK_01e1818c))();
      return;
    }
    iVar1 = func_0x0229f13c(0xa07a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa079);
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
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
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
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2);
  return;
}



// ===== FAT.Merge.MBItemView$$RemoveHintForLightbulb RVA 0x2290c90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_022a0c90(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  iVar2 = func_0x0229f06c(0xa07b);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229f06c(0xa07c,0);
    if (iVar2 == 0) {
      pcVar12 = (char *)(_UNK_01e18a0c + 0x1e188fc);
      if (*pcVar12 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
        func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
        func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
        *pcVar12 = '\x01';
      }
      iVar2 = func_0x0229f06c(0x163d,0);
      if (iVar2 != 0) {
        iVar2 = func_0x0229f13c(0x163d,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,0x17,0);
        uStack_38 = uStack_50;
        if (*(int *)(iVar2 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485238(&uStack_38,0x17,0);
        iVar10 = *(int *)(iVar2 + 8);
        uVar13 = *(undefined4 *)(iVar2 + 0xc);
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar7 = 3;
        if (iVar2 == 0) {
          uVar7 = 2;
        }
        uStack_58 = 0;
        uStack_54 = 0;
        uVar1 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar7);
        return uVar1;
      }
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x03dcf4b4(iVar2,0x17,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar13 = func_0x03dcf1b0(iVar2,0x17,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
      FUN_01e1a604(param_1,0x17,uVar13);
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
      uStack_28 = 0x17;
      if (*(int *)(iVar2 + 8) != 0) {
        piVar9 = *(int **)(iVar2 + 0x20);
        iStack_30 = iVar2;
        if (piVar9 == (int *)0x0) {
          uVar1 = func_0x04821a00(&uStack_28,0);
        }
        else {
          iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x02457d84(iVar2);
          }
          iVar10 = *piVar9;
          uVar1 = (uint)*(ushort *)(iVar10 + 0xb6);
          if (uVar1 != 0) {
            piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
            do {
              if (piVar8[-1] == iVar2) {
                puVar3 = (undefined4 *)(iVar10 + *piVar8 * 8 + 200);
                goto LAB_03dd0a60;
              }
              uVar1 = uVar1 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar1 != 0);
          }
          puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar2,1);
LAB_03dd0a60:
          uVar1 = (*(code *)*puVar3)(piVar9,0x17,puVar3[1]);
          iVar2 = iStack_30;
        }
        uVar14 = *(uint *)(iVar2 + 8);
        uVar11 = uVar14;
        if (uVar14 == 0) {
          func_0x02457d50();
          uVar11 = *(uint *)(iStack_30 + 8);
          if (uVar11 == 0) {
            uVar15 = func_0x02457d50();
            uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
            iVar2 = (int)uVar15;
            uStack_54 = 0;
            if (*(int *)(iVar2 + 8) != 0) {
              piVar9 = *(int **)(iVar2 + 0x20);
              uStack_60 = uVar13;
              uStack_5c = uVar1;
              uStack_58 = uVar11;
              uStack_50 = uVar14;
              if (piVar9 == (int *)0x0) {
                uVar1 = func_0x04821a00(&uStack_60,0);
              }
              else {
                iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
                  iVar10 = func_0x02457d84(iVar10);
                }
                iVar4 = *piVar9;
                uVar1 = (uint)*(ushort *)(iVar4 + 0xb6);
                if (uVar1 != 0) {
                  piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                  do {
                    if (piVar8[-1] == iVar10) {
                      puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 200);
                      goto LAB_03dd0dc4;
                    }
                    uVar1 = uVar1 - 1;
                    piVar8 = piVar8 + 2;
                  } while (uVar1 != 0);
                }
                puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar10,1);
LAB_03dd0dc4:
                uVar1 = (*(code *)*puVar3)(piVar9,uVar13,puVar3[1]);
              }
              iVar4 = *(int *)(iVar2 + 8);
              iVar10 = iVar4;
              if (iVar4 == 0) {
                func_0x02457d50();
                iVar10 = *(int *)(iVar2 + 8);
                if (iVar10 == 0) {
                  uVar15 = func_0x02457d50();
                  uVar1 = func_0x03dcfa64((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                          *(undefined4 *)
                                           (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84)
                                         );
                  if ((int)uVar1 < 0) {
                    uVar13 = 0;
                  }
                  else {
                    iVar2 = *(int *)((int)uVar15 + 0xc);
                    if (iVar2 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar2 + 0xc) <= uVar1) {
                      func_0x02457d5c();
                    }
                    uVar13 = *(undefined4 *)(iVar2 + uVar1 * 0x10 + 0x1c);
                  }
                  *extraout_r2_00 = uVar13;
                  return ~uVar1 >> 0x1f;
                }
              }
              func_0x02457e94(uVar1 & 0x7fffffff,*(undefined4 *)(iVar4 + 0xc));
              if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
                func_0x02457d5c();
              }
              uVar11 = *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) - 1;
              if (-1 < (int)uVar11) {
                uVar14 = 0xffffffff;
                do {
                  uVar5 = uVar11;
                  iVar10 = *(int *)(iVar2 + 0xc);
                  if (iVar10 == 0) {
                    func_0x02457d50();
                  }
                  if (*(uint *)(iVar10 + 0xc) <= uVar5) {
                    func_0x02457d5c();
                  }
                  uVar13 = uStack_60;
                  iVar10 = iVar10 + uVar5 * 0x10;
                  if (*(uint *)(iVar10 + 0x10) == (uVar1 & 0x7fffffff)) {
                    piVar9 = *(int **)(iVar2 + 0x20);
                    if (piVar9 == (int *)0x0) {
                      piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                       (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60
                                                                ) + 0xc));
                      uVar13 = uStack_60;
                      uVar7 = *(undefined4 *)(iVar10 + 0x18);
                      if (piVar9 == (int *)0x0) {
                        func_0x02457d50(0,uVar7);
                      }
                      iVar4 = (**(code **)(*piVar9 + 0x100))
                                        (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                    }
                    else {
                      uVar7 = *(undefined4 *)(iVar10 + 0x18);
                      if (piVar9 == (int *)0x0) {
                        func_0x02457d50();
                      }
                      iVar4 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                        iVar4 = func_0x02457d84(iVar4);
                      }
                      iVar6 = *piVar9;
                      uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
                      if (uVar11 != 0) {
                        piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                        do {
                          if (piVar8[-1] == iVar4) {
                            puVar3 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                            goto LAB_03dd0f6c;
                          }
                          uVar11 = uVar11 - 1;
                          piVar8 = piVar8 + 2;
                        } while (uVar11 != 0);
                      }
                      puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar4,0);
LAB_03dd0f6c:
                      iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
                    }
                    if (iVar4 != 0) {
                      if ((int)uVar14 < 0) {
                        iVar4 = *(int *)(iVar2 + 8);
                        iVar6 = *(int *)(iVar10 + 0x14);
                        if (iVar4 == 0) {
                          func_0x02457d50();
                        }
                        if (*(uint *)(iVar4 + 0xc) <= extraout_r1_00) {
                          func_0x02457d5c();
                        }
                        *(int *)(iVar4 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                      }
                      else {
                        iVar4 = *(int *)(iVar2 + 0xc);
                        if (iVar4 == 0) {
                          func_0x02457d50();
                        }
                        uVar13 = *(undefined4 *)(iVar10 + 0x14);
                        if (*(uint *)(iVar4 + 0xc) <= uVar14) {
                          func_0x02457d5c();
                        }
                        *(undefined4 *)(iVar4 + uVar14 * 0x10 + 0x14) = uVar13;
                      }
                      *extraout_r2 = *(undefined4 *)(iVar10 + 0x1c);
                      uVar13 = *(undefined4 *)(iVar2 + 0x14);
                      *(undefined4 *)(iVar10 + 0x1c) = 0;
                      iVar6 = *(int *)(iVar2 + 0x1c);
                      iVar4 = *(int *)(iVar2 + 0x18);
                      *(undefined4 *)(iVar10 + 0x14) = uVar13;
                      *(uint *)(iVar10 + 0x10) = 0xffffffff;
                      *(int *)(iVar2 + 0x1c) = iVar6 + 1;
                      *(uint *)(iVar2 + 0x14) = uVar5;
                      *(int *)(iVar2 + 0x18) = iVar4 + 1;
                      return 1;
                    }
                  }
                  uVar11 = *(uint *)(iVar10 + 0x14);
                  uVar14 = uVar5;
                } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
              }
            }
            *extraout_r2 = 0;
            return 0;
          }
        }
        uStack_2c = uVar1 & 0x7fffffff;
        func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
        if (*(uint *)(uVar11 + 0xc) <= extraout_r1) {
          func_0x02457d5c();
        }
        uVar1 = *(int *)(uVar11 + extraout_r1 * 4 + 0x10) - 1;
        if (-1 < (int)uVar1) {
          iVar2 = iStack_30;
          uVar11 = 0xffffffff;
          uStack_38 = extraout_r1;
          do {
            uVar14 = uVar1;
            iVar10 = *(int *)(iVar2 + 0xc);
            if (iVar10 == 0) {
              func_0x02457d50();
            }
            if (*(uint *)(iVar10 + 0xc) <= uVar14) {
              func_0x02457d5c();
            }
            uVar13 = uStack_28;
            iVar10 = iVar10 + uVar14 * 0x10;
            if (*(uint *)(iVar10 + 0x10) == uStack_2c) {
              piVar9 = *(int **)(iVar2 + 0x20);
              if (piVar9 == (int *)0x0) {
                piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                 (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc)
                                               );
                uVar13 = uStack_28;
                uVar7 = *(undefined4 *)(iVar10 + 0x18);
                if (piVar9 == (int *)0x0) {
                  func_0x02457d50(0,uVar7);
                }
                iVar4 = (**(code **)(*piVar9 + 0x100))
                                  (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
              }
              else {
                uVar7 = *(undefined4 *)(iVar10 + 0x18);
                if (piVar9 == (int *)0x0) {
                  func_0x02457d50();
                }
                iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                  iVar2 = func_0x02457d84(iVar2);
                }
                iVar4 = *piVar9;
                uVar1 = (uint)*(ushort *)(iVar4 + 0xb6);
                if (uVar1 != 0) {
                  piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                  do {
                    if (piVar8[-1] == iVar2) {
                      puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                      goto LAB_03dd0c0c;
                    }
                    uVar1 = uVar1 - 1;
                    piVar8 = piVar8 + 2;
                  } while (uVar1 != 0);
                }
                puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar2,0);
LAB_03dd0c0c:
                iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
              }
              iVar2 = iStack_30;
              if (iVar4 != 0) {
                if ((int)uVar11 < 0) {
                  iVar2 = *(int *)(iStack_30 + 8);
                  iVar4 = *(int *)(iVar10 + 0x14);
                  if (iVar2 == 0) {
                    func_0x02457d50();
                  }
                  uVar1 = uStack_38;
                  if (*(uint *)(iVar2 + 0xc) <= uStack_38) {
                    func_0x02457d5c();
                  }
                  *(int *)(iVar2 + uVar1 * 4 + 0x10) = iVar4 + 1;
                }
                else {
                  iVar2 = *(int *)(iStack_30 + 0xc);
                  if (iVar2 == 0) {
                    func_0x02457d50();
                  }
                  uVar13 = *(undefined4 *)(iVar10 + 0x14);
                  if (*(uint *)(iVar2 + 0xc) <= uVar11) {
                    func_0x02457d5c();
                  }
                  *(undefined4 *)(iVar2 + uVar11 * 0x10 + 0x14) = uVar13;
                }
                uVar13 = *(undefined4 *)(iStack_30 + 0x14);
                *(undefined4 *)(iVar10 + 0x1c) = 0;
                iVar2 = *(int *)(iStack_30 + 0x18);
                iVar4 = *(int *)(iStack_30 + 0x1c);
                *(uint *)(iVar10 + 0x10) = 0xffffffff;
                *(undefined4 *)(iVar10 + 0x14) = uVar13;
                *(uint *)(iStack_30 + 0x14) = uVar14;
                *(int *)(iStack_30 + 0x18) = iVar2 + 1;
                *(int *)(iStack_30 + 0x1c) = iVar4 + 1;
                return 1;
              }
            }
            uVar1 = *(uint *)(iVar10 + 0x14);
            uVar11 = uVar14;
          } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
        }
      }
      return 0;
    }
    iVar2 = func_0x0229f13c(0xa07c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa07b);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&stack0xffffffb8,0,0);
  uStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&iStack_30,param_1,0);
  iVar10 = *(int *)(iVar2 + 8);
  uVar13 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar2 == 0) {
    uVar7 = 1;
  }
  uStack_50 = 0;
  uVar1 = func_0x0245495c(iVar10,uVar13,&iStack_30,uVar7);
  return uVar1;
}



// ===== FAT.Merge.MBItemView$$AddHintForReadyToMerge RVA 0x2290cf4 =====

void FUN_022a0cf4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9e78);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e78);
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
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0229f06c(0x1634,0,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x1634,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,5,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485238(&uStack_38,5,0);
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
  *(undefined1 *)(iVar1 + 0x20) = 1;
  *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) | 0x10;
  return;
}



// ===== FAT.Merge.MBItemView$$RemoveHintForReadyToMerge RVA 0x2290d5c =====

void FUN_022a0d5c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ef3);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ef3);
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
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0229f06c(0x163b,0,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x163b,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,5,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485238(&uStack_38,5,0);
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
  *(undefined1 *)(iVar1 + 0x20) = 1;
  *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) & 0xffffffef;
  return;
}



// ===== FAT.Merge.MBItemView$$AddHintForReadyToUse RVA 0x2290dc4 =====

/* WARNING: Removing unreachable block (ram,0x01e1816c) */
/* WARNING: Removing unreachable block (ram,0x01e182d0) */
/* WARNING: Removing unreachable block (ram,0x01e182d8) */
/* WARNING: Removing unreachable block (ram,0x01e183e0) */
/* WARNING: Removing unreachable block (ram,0x01e183e8) */
/* WARNING: Removing unreachable block (ram,0x01e183ec) */
/* WARNING: Removing unreachable block (ram,0x01e182e0) */
/* WARNING: Removing unreachable block (ram,0x01e182e8) */
/* WARNING: Removing unreachable block (ram,0x01e182ec) */
/* WARNING: Removing unreachable block (ram,0x01e18308) */
/* WARNING: Removing unreachable block (ram,0x01e1830c) */
/* WARNING: Removing unreachable block (ram,0x01e18324) */
/* WARNING: Removing unreachable block (ram,0x01e18328) */
/* WARNING: Removing unreachable block (ram,0x01e18340) */
/* WARNING: Removing unreachable block (ram,0x01e18344) */
/* WARNING: Removing unreachable block (ram,0x01e18364) */
/* WARNING: Removing unreachable block (ram,0x01e18378) */
/* WARNING: Removing unreachable block (ram,0x01e18398) */
/* WARNING: Removing unreachable block (ram,0x01e1839c) */
/* WARNING: Removing unreachable block (ram,0x01e18178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a0dc4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 unaff_r4;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar3 = func_0x0229f06c(0x1633);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    FUN_01e0f95c(iVar3,1,0);
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0229f06c(0x1635,0);
    if (iVar3 == 0) {
      pcVar5 = (char *)(_UNK_01e1882c + 0x1e18078);
      uStack_24 = unaff_r4;
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18830 + 0x1e1808c));
        func_0x01384978(*(undefined4 *)(_UNK_01e18834 + 0x1e18098));
        func_0x01384978(*(undefined4 *)(_UNK_01e18838 + 0x1e180a4));
        func_0x01384978(*(undefined4 *)(_UNK_01e1883c + 0x1e180b0));
        func_0x01384978(*(undefined4 *)(_UNK_01e18840 + 0x1e180bc));
        func_0x01384978(*(undefined4 *)(_UNK_01e18844 + 0x1e180c8));
        *pcVar5 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x1636,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0x1636,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = uStack_24;
        iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,1,0);
        uStack_38 = uStack_50;
        iStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar3 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485238(&uStack_38,1,0);
        iVar7 = *(int *)(iVar3 + 8);
        uVar9 = *(undefined4 *)(iVar3 + 0xc);
        iVar3 = *(int *)(iVar3 + 0x10);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uVar4 = 3;
        if (iVar3 == 0) {
          uVar4 = 2;
        }
        func_0x0245495c(iVar7,uVar9,&uStack_38,uVar4,0,0);
        return;
      }
      iVar3 = *(int *)(param_1 + 0x20);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x03dcf4b4(iVar3,1,**(undefined4 **)(_UNK_01e18848 + 0x1e1813c));
      if (iVar3 == 0) {
        iVar3 = FUN_01e1a508(param_1,1);
        pcVar5 = (char *)(_UNK_01e1884c + 0x1e1816c);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x024504c0(iVar3,0);
        uVar9 = *(undefined4 *)(param_1 + 0x14);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x024505b4(iVar7,uVar9,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iStack_34 = param_1;
        iVar7 = func_0x024504c0(iVar3,0);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e18870 + 0x1e18454));
          *pcVar5 = '\x01';
        }
        piVar10 = *(int **)(_UNK_01e18874 + 0x1e18470);
        puVar1 = *(undefined4 **)(*piVar10 + 0x5c);
        uVar9 = puVar1[2];
        uVar4 = *puVar1;
        uVar8 = puVar1[1];
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = 0;
        func_0x0245068c(iVar7,uVar4,uVar8,uVar9);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x024504c0(iVar3,0);
        pcVar6 = (char *)(_UNK_01e18878 + 0x1e184c8);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e1887c + 0x1e184dc));
          *pcVar6 = '\x01';
        }
        iVar2 = *(int *)(*piVar10 + 0x5c);
        uVar9 = *(undefined4 *)(iVar2 + 0xc);
        uVar4 = *(undefined4 *)(iVar2 + 0x10);
        uVar8 = *(undefined4 *)(iVar2 + 0x14);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = 0;
        func_0x024503a4(iVar7,uVar9,uVar4,uVar8);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x024504c0(iVar3,0);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e18880 + 0x1e18550));
          *pcVar5 = '\x01';
        }
        puVar1 = *(undefined4 **)(*piVar10 + 0x5c);
        uVar9 = *puVar1;
        uVar4 = puVar1[1];
        uVar8 = puVar1[2];
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = 0;
        func_0x02450c24(iVar7,uVar9,uVar4,uVar8);
        iVar7 = *(int *)(iStack_34 + 0x20);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x03dcf268(iVar7,1,iVar3,**(undefined4 **)(_UNK_01e18884 + 0x1e185b4));
      }
      return;
    }
    iVar3 = func_0x0229f13c(0x1635,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x1633);
    if (iVar3 == 0) {
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
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar7 = *(int *)(iVar3 + 8);
  uVar9 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar3 == 0) {
    uVar4 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar7,uVar9,&uStack_30,uVar4);
  return;
}



// ===== FAT.Merge.MBItemView$$RemoveHintForReadyToUse RVA 0x2290e48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_022a0e48(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_20;
  
  iVar2 = func_0x0229f06c(0x163a);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    FUN_01e0fd60(iVar2,1,0);
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229f06c(0x163c,0);
    if (iVar2 == 0) {
      pcVar12 = (char *)(_UNK_01e18a0c + 0x1e188fc);
      if (*pcVar12 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e18a10 + 0x1e18910));
        func_0x01384978(*(undefined4 *)(_UNK_01e18a14 + 0x1e1891c));
        func_0x01384978(*(undefined4 *)(_UNK_01e18a18 + 0x1e18928));
        *pcVar12 = '\x01';
      }
      iVar2 = func_0x0229f06c(0x163d,0);
      if (iVar2 != 0) {
        iVar2 = func_0x0229f13c(0x163d,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,1,0);
        uStack_38 = uStack_50;
        if (*(int *)(iVar2 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485238(&uStack_38,1,0);
        iVar10 = *(int *)(iVar2 + 8);
        uVar13 = *(undefined4 *)(iVar2 + 0xc);
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar7 = 3;
        if (iVar2 == 0) {
          uVar7 = 2;
        }
        uStack_58 = 0;
        uStack_54 = 0;
        uVar1 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar7);
        return uVar1;
      }
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x03dcf4b4(iVar2,1,**(undefined4 **)(_UNK_01e18a1c + 0x1e18998));
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar13 = func_0x03dcf1b0(iVar2,1,**(undefined4 **)(_UNK_01e18a20 + 0x1e189c8));
      FUN_01e1a604(param_1,1,uVar13);
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iStack_34 = **(int **)(_UNK_01e18a24 + 0x1e18a00);
      uStack_28 = 1;
      if (*(int *)(iVar2 + 8) != 0) {
        piVar9 = *(int **)(iVar2 + 0x20);
        iStack_30 = iVar2;
        if (piVar9 == (int *)0x0) {
          uVar1 = func_0x04821a00(&uStack_28,0);
        }
        else {
          iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x02457d84(iVar2);
          }
          iVar10 = *piVar9;
          uVar1 = (uint)*(ushort *)(iVar10 + 0xb6);
          if (uVar1 != 0) {
            piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
            do {
              if (piVar8[-1] == iVar2) {
                puVar3 = (undefined4 *)(iVar10 + *piVar8 * 8 + 200);
                goto LAB_03dd0a60;
              }
              uVar1 = uVar1 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar1 != 0);
          }
          puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar2,1);
LAB_03dd0a60:
          uVar1 = (*(code *)*puVar3)(piVar9,1,puVar3[1]);
          iVar2 = iStack_30;
        }
        uVar14 = *(uint *)(iVar2 + 8);
        uVar11 = uVar14;
        if (uVar14 == 0) {
          func_0x02457d50();
          uVar11 = *(uint *)(iStack_30 + 8);
          if (uVar11 == 0) {
            uVar15 = func_0x02457d50();
            uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
            iVar2 = (int)uVar15;
            uStack_54 = 0;
            if (*(int *)(iVar2 + 8) != 0) {
              piVar9 = *(int **)(iVar2 + 0x20);
              uStack_60 = uVar13;
              uStack_5c = uVar1;
              uStack_58 = uVar11;
              uStack_50 = uVar14;
              if (piVar9 == (int *)0x0) {
                uVar1 = func_0x04821a00(&uStack_60,0);
              }
              else {
                iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
                  iVar10 = func_0x02457d84(iVar10);
                }
                iVar4 = *piVar9;
                uVar1 = (uint)*(ushort *)(iVar4 + 0xb6);
                if (uVar1 != 0) {
                  piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                  do {
                    if (piVar8[-1] == iVar10) {
                      puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 200);
                      goto LAB_03dd0dc4;
                    }
                    uVar1 = uVar1 - 1;
                    piVar8 = piVar8 + 2;
                  } while (uVar1 != 0);
                }
                puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar10,1);
LAB_03dd0dc4:
                uVar1 = (*(code *)*puVar3)(piVar9,uVar13,puVar3[1]);
              }
              iVar4 = *(int *)(iVar2 + 8);
              iVar10 = iVar4;
              if (iVar4 == 0) {
                func_0x02457d50();
                iVar10 = *(int *)(iVar2 + 8);
                if (iVar10 == 0) {
                  uVar15 = func_0x02457d50();
                  uVar1 = func_0x03dcfa64((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                          *(undefined4 *)
                                           (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84)
                                         );
                  if ((int)uVar1 < 0) {
                    uVar13 = 0;
                  }
                  else {
                    iVar2 = *(int *)((int)uVar15 + 0xc);
                    if (iVar2 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar2 + 0xc) <= uVar1) {
                      func_0x02457d5c();
                    }
                    uVar13 = *(undefined4 *)(iVar2 + uVar1 * 0x10 + 0x1c);
                  }
                  *extraout_r2_00 = uVar13;
                  return ~uVar1 >> 0x1f;
                }
              }
              func_0x02457e94(uVar1 & 0x7fffffff,*(undefined4 *)(iVar4 + 0xc));
              if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
                func_0x02457d5c();
              }
              uVar11 = *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) - 1;
              if (-1 < (int)uVar11) {
                uVar14 = 0xffffffff;
                do {
                  uVar5 = uVar11;
                  iVar10 = *(int *)(iVar2 + 0xc);
                  if (iVar10 == 0) {
                    func_0x02457d50();
                  }
                  if (*(uint *)(iVar10 + 0xc) <= uVar5) {
                    func_0x02457d5c();
                  }
                  uVar13 = uStack_60;
                  iVar10 = iVar10 + uVar5 * 0x10;
                  if (*(uint *)(iVar10 + 0x10) == (uVar1 & 0x7fffffff)) {
                    piVar9 = *(int **)(iVar2 + 0x20);
                    if (piVar9 == (int *)0x0) {
                      piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                       (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60
                                                                ) + 0xc));
                      uVar13 = uStack_60;
                      uVar7 = *(undefined4 *)(iVar10 + 0x18);
                      if (piVar9 == (int *)0x0) {
                        func_0x02457d50(0,uVar7);
                      }
                      iVar4 = (**(code **)(*piVar9 + 0x100))
                                        (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                    }
                    else {
                      uVar7 = *(undefined4 *)(iVar10 + 0x18);
                      if (piVar9 == (int *)0x0) {
                        func_0x02457d50();
                      }
                      iVar4 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                        iVar4 = func_0x02457d84(iVar4);
                      }
                      iVar6 = *piVar9;
                      uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
                      if (uVar11 != 0) {
                        piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                        do {
                          if (piVar8[-1] == iVar4) {
                            puVar3 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                            goto LAB_03dd0f6c;
                          }
                          uVar11 = uVar11 - 1;
                          piVar8 = piVar8 + 2;
                        } while (uVar11 != 0);
                      }
                      puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar4,0);
LAB_03dd0f6c:
                      iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
                    }
                    if (iVar4 != 0) {
                      if ((int)uVar14 < 0) {
                        iVar4 = *(int *)(iVar2 + 8);
                        iVar6 = *(int *)(iVar10 + 0x14);
                        if (iVar4 == 0) {
                          func_0x02457d50();
                        }
                        if (*(uint *)(iVar4 + 0xc) <= extraout_r1_00) {
                          func_0x02457d5c();
                        }
                        *(int *)(iVar4 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                      }
                      else {
                        iVar4 = *(int *)(iVar2 + 0xc);
                        if (iVar4 == 0) {
                          func_0x02457d50();
                        }
                        uVar13 = *(undefined4 *)(iVar10 + 0x14);
                        if (*(uint *)(iVar4 + 0xc) <= uVar14) {
                          func_0x02457d5c();
                        }
                        *(undefined4 *)(iVar4 + uVar14 * 0x10 + 0x14) = uVar13;
                      }
                      *extraout_r2 = *(undefined4 *)(iVar10 + 0x1c);
                      uVar13 = *(undefined4 *)(iVar2 + 0x14);
                      *(undefined4 *)(iVar10 + 0x1c) = 0;
                      iVar6 = *(int *)(iVar2 + 0x1c);
                      iVar4 = *(int *)(iVar2 + 0x18);
                      *(undefined4 *)(iVar10 + 0x14) = uVar13;
                      *(uint *)(iVar10 + 0x10) = 0xffffffff;
                      *(int *)(iVar2 + 0x1c) = iVar6 + 1;
                      *(uint *)(iVar2 + 0x14) = uVar5;
                      *(int *)(iVar2 + 0x18) = iVar4 + 1;
                      return 1;
                    }
                  }
                  uVar11 = *(uint *)(iVar10 + 0x14);
                  uVar14 = uVar5;
                } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
              }
            }
            *extraout_r2 = 0;
            return 0;
          }
        }
        uStack_2c = uVar1 & 0x7fffffff;
        func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
        if (*(uint *)(uVar11 + 0xc) <= extraout_r1) {
          func_0x02457d5c();
        }
        uVar1 = *(int *)(uVar11 + extraout_r1 * 4 + 0x10) - 1;
        if (-1 < (int)uVar1) {
          iVar2 = iStack_30;
          uVar11 = 0xffffffff;
          uStack_38 = extraout_r1;
          do {
            uVar14 = uVar1;
            iVar10 = *(int *)(iVar2 + 0xc);
            if (iVar10 == 0) {
              func_0x02457d50();
            }
            if (*(uint *)(iVar10 + 0xc) <= uVar14) {
              func_0x02457d5c();
            }
            uVar13 = uStack_28;
            iVar10 = iVar10 + uVar14 * 0x10;
            if (*(uint *)(iVar10 + 0x10) == uStack_2c) {
              piVar9 = *(int **)(iVar2 + 0x20);
              if (piVar9 == (int *)0x0) {
                piVar9 = (int *)func_0x02ecb070(*(undefined4 *)
                                                 (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc)
                                               );
                uVar13 = uStack_28;
                uVar7 = *(undefined4 *)(iVar10 + 0x18);
                if (piVar9 == (int *)0x0) {
                  func_0x02457d50(0,uVar7);
                }
                iVar4 = (**(code **)(*piVar9 + 0x100))
                                  (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
              }
              else {
                uVar7 = *(undefined4 *)(iVar10 + 0x18);
                if (piVar9 == (int *)0x0) {
                  func_0x02457d50();
                }
                iVar2 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
                if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
                  iVar2 = func_0x02457d84(iVar2);
                }
                iVar4 = *piVar9;
                uVar1 = (uint)*(ushort *)(iVar4 + 0xb6);
                if (uVar1 != 0) {
                  piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                  do {
                    if (piVar8[-1] == iVar2) {
                      puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                      goto LAB_03dd0c0c;
                    }
                    uVar1 = uVar1 - 1;
                    piVar8 = piVar8 + 2;
                  } while (uVar1 != 0);
                }
                puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar2,0);
LAB_03dd0c0c:
                iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
              }
              iVar2 = iStack_30;
              if (iVar4 != 0) {
                if ((int)uVar11 < 0) {
                  iVar2 = *(int *)(iStack_30 + 8);
                  iVar4 = *(int *)(iVar10 + 0x14);
                  if (iVar2 == 0) {
                    func_0x02457d50();
                  }
                  uVar1 = uStack_38;
                  if (*(uint *)(iVar2 + 0xc) <= uStack_38) {
                    func_0x02457d5c();
                  }
                  *(int *)(iVar2 + uVar1 * 4 + 0x10) = iVar4 + 1;
                }
                else {
                  iVar2 = *(int *)(iStack_30 + 0xc);
                  if (iVar2 == 0) {
                    func_0x02457d50();
                  }
                  uVar13 = *(undefined4 *)(iVar10 + 0x14);
                  if (*(uint *)(iVar2 + 0xc) <= uVar11) {
                    func_0x02457d5c();
                  }
                  *(undefined4 *)(iVar2 + uVar11 * 0x10 + 0x14) = uVar13;
                }
                uVar13 = *(undefined4 *)(iStack_30 + 0x14);
                *(undefined4 *)(iVar10 + 0x1c) = 0;
                iVar2 = *(int *)(iStack_30 + 0x18);
                iVar4 = *(int *)(iStack_30 + 0x1c);
                *(uint *)(iVar10 + 0x10) = 0xffffffff;
                *(undefined4 *)(iVar10 + 0x14) = uVar13;
                *(uint *)(iStack_30 + 0x14) = uVar14;
                *(int *)(iStack_30 + 0x18) = iVar2 + 1;
                *(int *)(iStack_30 + 0x1c) = iVar4 + 1;
                return 1;
              }
            }
            uVar1 = *(uint *)(iVar10 + 0x14);
            uVar11 = uVar14;
          } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
        }
      }
      return 0;
    }
    iVar2 = func_0x0229f13c(0x163c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x163a);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&stack0xffffffb8,0,0);
  uStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&iStack_30,param_1,0);
  iVar10 = *(int *)(iVar2 + 8);
  uVar13 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar2 == 0) {
    uVar7 = 1;
  }
  uStack_50 = 0;
  uVar1 = func_0x0245495c(iVar10,uVar13,&iStack_30,uVar7);
  return uVar1;
}



// ===== FAT.Merge.MBItemView$$AddOnBoardEffect RVA 0x2290ecc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a0ecc(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
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
  undefined4 uStack_1c;
  
  iVar2 = func_0x0229f06c(0xa0e8);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa0e8);
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
    iVar6 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar3);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_01e1a070 + 0x1e19ef8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1a074 + 0x1e19f0c),0x3f800000,0);
    func_0x01384978(*(undefined4 *)(_UNK_01e1a078 + 0x1e19f18));
    *pcVar4 = '\x01';
  }
  iVar6 = func_0x0229f06c(0xa0ac,0);
  if (iVar6 != 0) {
    iVar6 = func_0x0229f13c(0xa0ac,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,0x3f800000,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar6 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar6 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485258(&uStack_38,0x3f800000,0);
    iVar7 = *(int *)(iVar6 + 8);
    uVar8 = *(undefined4 *)(iVar6 + 0xc);
    iVar2 = *(int *)(iVar6 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01e1a07c + 0x1e19f78) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar8 = func_0x01dda730(3,0);
  iVar6 = func_0x034aaa34(**(undefined4 **)(_UNK_01e1a080 + 0x1e19fa4));
  uVar3 = *(undefined4 *)(iVar2 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0243c430(iVar6,uVar8,uVar3,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x024504c0(iVar2,0);
  pcVar4 = (char *)(_UNK_01e1a084 + 0x1e19ffc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1a088 + 0x1e1a010));
    *pcVar4 = '\x01';
  }
  puVar1 = *(undefined4 **)(**(int **)(_UNK_01e1a08c + 0x1e1a028) + 0x5c);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  uVar9 = puVar1[2];
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uStack_28 = 0;
  func_0x0245068c(iVar6,uVar3,uVar5,uVar9);
  pcVar4 = (char *)(_UNK_01dda970 + 0x1dda89c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dda974 + 0x1dda8b0),0x3f800000,uVar8,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dda978 + 0x1dda8bc));
    *pcVar4 = '\x01';
  }
  iVar6 = func_0x0229f06c(0x5f34,0);
  if (iVar6 == 0) {
    uStack_24 = **(undefined4 **)(_UNK_01dda97c + 0x1dda924);
    uStack_20 = 0xffffffff;
    uStack_1c = uVar8;
    uVar8 = func_0x0244f5f4(&uStack_24,0);
    if (*(int *)(**(int **)(_UNK_01dda980 + 0x1dda948) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01dda7a0(iVar2,0x3f800000,uVar8);
  }
  else {
    iVar6 = func_0x0229f13c(0x5f34,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x02238c78(iVar6,iVar2,0x3f800000,uVar8);
  }
  return;
}



// ===== FAT.Merge.MBItemView$$AddOnBoardEffect4X RVA 0x2290f34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a0f34(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
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
  undefined4 uStack_1c;
  
  iVar2 = func_0x0229f06c(0xa0e7);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa0e7);
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
    iVar6 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar3);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_01e1a224 + 0x1e1a0ac);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1a228 + 0x1e1a0c0),0x3f800000,0);
    func_0x01384978(*(undefined4 *)(_UNK_01e1a22c + 0x1e1a0cc));
    *pcVar4 = '\x01';
  }
  iVar6 = func_0x0229f06c(0xa0ad,0);
  if (iVar6 != 0) {
    iVar6 = func_0x0229f13c(0xa0ad,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,0x3f800000,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar6 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar6 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485258(&uStack_38,0x3f800000,0);
    iVar7 = *(int *)(iVar6 + 8);
    uVar8 = *(undefined4 *)(iVar6 + 0xc);
    iVar2 = *(int *)(iVar6 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01e1a230 + 0x1e1a12c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar8 = func_0x01dda730(0x12,0);
  iVar6 = func_0x034aaa34(**(undefined4 **)(_UNK_01e1a234 + 0x1e1a158));
  uVar3 = *(undefined4 *)(iVar2 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0243c430(iVar6,uVar8,uVar3,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x024504c0(iVar2,0);
  pcVar4 = (char *)(_UNK_01e1a238 + 0x1e1a1b0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1a23c + 0x1e1a1c4));
    *pcVar4 = '\x01';
  }
  puVar1 = *(undefined4 **)(**(int **)(_UNK_01e1a240 + 0x1e1a1dc) + 0x5c);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  uVar9 = puVar1[2];
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uStack_28 = 0;
  func_0x0245068c(iVar6,uVar3,uVar5,uVar9);
  pcVar4 = (char *)(_UNK_01dda970 + 0x1dda89c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dda974 + 0x1dda8b0),0x3f800000,uVar8,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dda978 + 0x1dda8bc));
    *pcVar4 = '\x01';
  }
  iVar6 = func_0x0229f06c(0x5f34,0);
  if (iVar6 == 0) {
    uStack_24 = **(undefined4 **)(_UNK_01dda97c + 0x1dda924);
    uStack_20 = 0xffffffff;
    uStack_1c = uVar8;
    uVar8 = func_0x0244f5f4(&uStack_24,0);
    if (*(int *)(**(int **)(_UNK_01dda980 + 0x1dda948) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01dda7a0(iVar2,0x3f800000,uVar8);
  }
  else {
    iVar6 = func_0x0229f13c(0x5f34,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x02238c78(iVar6,iVar2,0x3f800000,uVar8);
  }
  return;
}



// ===== FAT.Merge.MBItemView$$AddOnBoardEffectForBubble RVA 0x2290f9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a0f9c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  
  iVar2 = func_0x0229f06c(0xa0fb);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229f06c(0xa0ae,0);
    if (iVar2 == 0) {
      pcVar4 = (char *)(_UNK_01e1a070 + 0x1e19ef8);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e1a074 + 0x1e19f0c));
        func_0x01384978(*(undefined4 *)(_UNK_01e1a078 + 0x1e19f18));
        *pcVar4 = '\x01';
      }
      iVar2 = func_0x0229f06c(0xa0ac,0);
      if (iVar2 == 0) {
        if (*(int *)(**(int **)(_UNK_01e1a07c + 0x1e19f78) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar7 = func_0x01dda730(3,0);
        iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01e1a080 + 0x1e19fa4));
        uVar3 = *(undefined4 *)(param_1 + 0x10);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0243c430(iVar2,uVar7,uVar3,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x024504c0(iVar2,0);
        pcVar4 = (char *)(_UNK_01e1a084 + 0x1e19ffc);
        if (*pcVar4 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e1a088 + 0x1e1a010));
          *pcVar4 = '\x01';
        }
        puVar1 = *(undefined4 **)(**(int **)(_UNK_01e1a08c + 0x1e1a028) + 0x5c);
        uVar3 = *puVar1;
        uVar5 = puVar1[1];
        uVar8 = puVar1[2];
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uStack_28 = 0;
        func_0x0245068c(iVar6,uVar3,uVar5,uVar8);
        pcVar4 = (char *)(_UNK_01dda970 + 0x1dda89c);
        if (*pcVar4 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01dda974 + 0x1dda8b0),0x3f800000,uVar7,0);
          func_0x01384978(*(undefined4 *)(_UNK_01dda978 + 0x1dda8bc));
          *pcVar4 = '\x01';
        }
        iVar6 = func_0x0229f06c(0x5f34,0);
        if (iVar6 == 0) {
          uStack_24 = **(undefined4 **)(_UNK_01dda97c + 0x1dda924);
          uStack_20 = 0xffffffff;
          uStack_1c = uVar7;
          uVar7 = func_0x0244f5f4(&uStack_24,0);
          if (*(int *)(**(int **)(_UNK_01dda980 + 0x1dda948) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x01dda7a0(iVar2,0x3f800000,uVar7);
        }
        else {
          iVar6 = func_0x0229f13c(0x5f34,0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          uStack_28 = 0;
          func_0x02238c78(iVar6,iVar2,0x3f800000,uVar7);
        }
        return;
      }
      iVar2 = func_0x0229f13c(0xa0ac,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,0x3f800000,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar2 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485258(&uStack_38,0x3f800000,0);
      iVar6 = *(int *)(iVar2 + 8);
      uVar7 = *(undefined4 *)(iVar2 + 0xc);
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar3 = 3;
      if (iVar2 == 0) {
        uVar3 = 2;
      }
      func_0x0245495c(iVar6,uVar7,&uStack_38,uVar3,0,0);
      return;
    }
    iVar2 = func_0x0229f13c(0xa0ae,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa0fb);
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
  iVar6 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3);
  return;
}



// ===== FAT.Merge.MBItemView$$AddOutOfInventoryEffect RVA 0x2291000 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a1000(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  
  iVar2 = func_0x0229f06c(0xb539);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229f06c(0xa0af,0);
    if (iVar2 == 0) {
      pcVar4 = (char *)(_UNK_01e1a070 + 0x1e19ef8);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e1a074 + 0x1e19f0c));
        func_0x01384978(*(undefined4 *)(_UNK_01e1a078 + 0x1e19f18));
        *pcVar4 = '\x01';
      }
      iVar2 = func_0x0229f06c(0xa0ac,0);
      if (iVar2 == 0) {
        if (*(int *)(**(int **)(_UNK_01e1a07c + 0x1e19f78) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar7 = func_0x01dda730(3,0);
        iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01e1a080 + 0x1e19fa4));
        uVar3 = *(undefined4 *)(param_1 + 0x10);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0243c430(iVar2,uVar7,uVar3,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x024504c0(iVar2,0);
        pcVar4 = (char *)(_UNK_01e1a084 + 0x1e19ffc);
        if (*pcVar4 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e1a088 + 0x1e1a010));
          *pcVar4 = '\x01';
        }
        puVar1 = *(undefined4 **)(**(int **)(_UNK_01e1a08c + 0x1e1a028) + 0x5c);
        uVar3 = *puVar1;
        uVar5 = puVar1[1];
        uVar8 = puVar1[2];
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uStack_28 = 0;
        func_0x0245068c(iVar6,uVar3,uVar5,uVar8);
        pcVar4 = (char *)(_UNK_01dda970 + 0x1dda89c);
        if (*pcVar4 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01dda974 + 0x1dda8b0),0x40400000,uVar7,0);
          func_0x01384978(*(undefined4 *)(_UNK_01dda978 + 0x1dda8bc));
          *pcVar4 = '\x01';
        }
        iVar6 = func_0x0229f06c(0x5f34,0);
        if (iVar6 == 0) {
          uStack_24 = **(undefined4 **)(_UNK_01dda97c + 0x1dda924);
          uStack_20 = 0xffffffff;
          uStack_1c = uVar7;
          uVar7 = func_0x0244f5f4(&uStack_24,0);
          if (*(int *)(**(int **)(_UNK_01dda980 + 0x1dda948) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x01dda7a0(iVar2,0x40400000,uVar7);
        }
        else {
          iVar6 = func_0x0229f13c(0x5f34,0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          uStack_28 = 0;
          func_0x02238c78(iVar6,iVar2,0x40400000,uVar7);
        }
        return;
      }
      iVar2 = func_0x0229f13c(0xa0ac,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,0x40400000,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar2 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485258(&uStack_38,0x40400000,0);
      iVar6 = *(int *)(iVar2 + 8);
      uVar7 = *(undefined4 *)(iVar2 + 0xc);
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar3 = 3;
      if (iVar2 == 0) {
        uVar3 = 2;
      }
      func_0x0245495c(iVar6,uVar7,&uStack_38,uVar3,0,0);
      return;
    }
    iVar2 = func_0x0229f13c(0xa0af,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb539);
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
  iVar6 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3);
  return;
}



// ===== FAT.Merge.MBItemView$$SetSelect RVA 0x2291064 =====

void FUN_022a1064(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7654);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x24);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x7655,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = func_0x0229f13c(0x7655,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7654);
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



// ===== FAT.Merge.MBItemView$$SetDeselect RVA 0x22910c8 =====

void FUN_022a10c8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ee4);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x24);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x5ee5,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = func_0x0229f13c(0x5ee5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5ee4);
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



// ===== FAT.Merge.MBItemView$$RefreshChestTip RVA 0x229112c =====

/* WARNING: Possible PIC construction at 0x01e16cc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e16cc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a112c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  char *pcVar4;
  int unaff_r5;
  undefined4 uVar5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined1 auStack_18 [4];
  int iStack_14;
  
  iVar1 = func_0x0229f06c(0x9feb);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01e1b534(iVar1,0);
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01e16d70 + 0x1e16c64);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e16d74 + 0x1e16c78),0);
      *pcVar4 = '\x01';
    }
    iStack_14 = 0;
    iVar1 = func_0x0229f06c(0x1659,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x30);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02feb690(iVar1,&iStack_14,0,**(undefined4 **)(_UNK_01e16d78 + 0x1e16d00));
      iVar1 = iStack_14;
      if (iVar2 != 0) {
        if (iStack_14 == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_0211fcd4(iVar1,0);
        if (iVar1 != 0) {
          FUN_01e18c50(param_1);
        }
        iVar1 = iStack_14;
        if (iStack_14 == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_0211f8ec(iVar1,0);
        FUN_01e19e28(param_1,iVar1 != 0);
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x1659,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e16cc8;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar1 = func_0x0229f13c(0x9feb);
    if (iVar1 == 0) {
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
  iVar2 = *(int *)(iVar1 + 0x10);
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
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar2,uVar5,(undefined1 *)((int)register0x00000054 + -0x30),uVar3);
  return;
}



// ===== FAT.Merge.MBItemView$$SetOrderTipDirty RVA 0x22911ac =====

void FUN_022a11ac(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9f19);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x20);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x9f1a,0);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x26) = 1;
      return;
    }
    iVar1 = func_0x0229f13c(0x9f1a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9f19);
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



// ===== FAT.Merge.MBItemView$$RefreshActivityIndicator RVA 0x2291210 =====

/* WARNING: Possible PIC construction at 0x01e1b260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e1b264) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a1210(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  char *pcVar4;
  int unaff_r5;
  undefined4 uVar5;
  undefined4 unaff_r6;
  undefined4 *puVar6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  undefined4 auStack_1c [3];
  
  iVar1 = func_0x0229f06c(0x9fa4);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x24);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01e1b3ec + 0x1e1b1fc);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e1b3f0 + 0x1e1b210),0);
      *pcVar4 = '\x01';
    }
    auStack_1c[0] = 0;
    uStack_20 = 0;
    iVar1 = func_0x0229f06c(0x1668,0);
    if (iVar1 == 0) {
      puVar6 = *(undefined4 **)(_UNK_01e1b3f4 + 0x1e1b274);
      iVar1 = func_0x03668dfc(*puVar6);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01ddbed8(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_01f091dc(iVar1,0);
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0x30);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      auStack_28[0] = 0;
      iVar1 = FUN_01dfe9c0(iVar1,uVar5,auStack_1c,&uStack_20);
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0244ffd4(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02450114(iVar2,0);
      if (iVar1 != iVar2) {
        iVar2 = func_0x03668dfc(*puVar6);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01de3234(iVar2,0);
      }
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0244ffd4(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (iVar1 == 0) {
        func_0x0244ffe4(iVar2,0,0);
      }
      else {
        func_0x0244ffe4(iVar2,1,0);
        iVar1 = func_0x01489db8(uStack_20,0);
        uVar5 = uStack_20;
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0x10);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0267cc24(iVar1,uVar5,0);
        }
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x1668,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e1b264;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_28;
  }
  else {
    iVar1 = func_0x0229f13c(0x9fa4);
    if (iVar1 == 0) {
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
  iVar2 = *(int *)(iVar1 + 0x10);
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
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar2,uVar5,(undefined1 *)((int)register0x00000054 + -0x30),uVar3);
  return;
}



// ===== FAT.Merge.MBItemView$$SetBorn RVA 0x2291274 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a1274(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 unaff_r5;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x1685);
  if (iVar1 == 0) {
    pcVar6 = (char *)(_UNK_022a1438 + 0x22a12e0);
    uStack_18 = unaff_r4;
    uStack_14 = unaff_r5;
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022a143c + 0x22a12f4));
      func_0x01384978(*(undefined4 *)(_UNK_022a1440 + 0x22a1300));
      *pcVar6 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x1686);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x1686);
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
      func_0x0245494c(&uStack_50,0,1,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485238(&uStack_38,1,0);
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
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 != 0) {
      iVar4 = *(int *)(param_1 + 0x40);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      piVar2 = (int *)func_0x03dcf1b0(iVar4,iVar1,**(undefined4 **)(_UNK_022a1444 + 0x22a1374));
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar2 + 0xe8))(piVar2,*(undefined4 *)(*piVar2 + 0xec));
    }
    func_0x022a1b58(param_1,1);
    iVar1 = *(int *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x2c) = 1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x03dcf1b0(iVar1,1,**(undefined4 **)(_UNK_022a1448 + 0x22a13d0));
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar2 + 0xe0))(piVar2,*(undefined4 *)(*piVar2 + 0xe4));
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_022a144c + 0x22a1408));
    uVar5 = *(undefined4 *)(param_1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0229f06c(0x168c,0,1,0);
    if (iVar4 != 0) {
      iVar4 = func_0x0229f13c(0x168c,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x021d198c(iVar4,iVar1,uVar5,1);
      return;
    }
    iVar1 = *(int *)(iVar1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = FUN_01f08f90(iVar1,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_01df9274 + 0x1df91ac);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df9278 + 0x1df91c0),0);
      *pcVar6 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x166e,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_01deeff4(iVar1);
      piVar2 = *(int **)(_UNK_01df927c + 0x1df9230);
      iVar1 = *piVar2;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar2;
      }
      if (*(char *)(*(int *)(iVar1 + 0x5c) + 0x50) == '\0') {
        return;
      }
      param_1 = *(int *)(param_1 + 0x2c);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0229f06c(0x1671,0);
      if (iVar1 == 0) {
        iVar1 = func_0x0229f06c(0x1672,0);
        if (iVar1 == 0) {
          piVar2 = (int *)func_0x02452460(param_1,0);
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
                    /* WARNING: Could not recover jumptable at 0x01df0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar2 + 0x1a0))(piVar2,*(undefined4 *)(*piVar2 + 0x1a4));
          return;
        }
        iVar1 = func_0x0229f13c(0x1672,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar1 = func_0x0229f13c(0x1671,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x166e,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x1685);
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



// ===== FAT.Merge.MBItemView$$_ChangeState RVA 0x22912c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a12c8(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  
  pcVar7 = (char *)(_UNK_022a1438 + 0x22a12e0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a143c + 0x22a12f4));
    func_0x01384978(*(undefined4 *)(_UNK_022a1440 + 0x22a1300));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1686);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1686);
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
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    iVar5 = *(int *)(param_1 + 0x40);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x03dcf1b0(iVar5,iVar1,**(undefined4 **)(_UNK_022a1444 + 0x22a1374));
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar2 + 0xe8))(piVar2,*(undefined4 *)(*piVar2 + 0xec));
  }
  func_0x022a1b58(param_1,param_2);
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x03dcf1b0(iVar1,param_2,**(undefined4 **)(_UNK_022a1448 + 0x22a13d0));
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  (**(code **)(*piVar2 + 0xe0))(piVar2,*(undefined4 *)(*piVar2 + 0xe4));
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_022a144c + 0x22a1408));
  uVar6 = *(undefined4 *)(param_1 + 0x30);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x0229f06c(0x168c,0,param_2,0);
  if (iVar5 == 0) {
    iVar1 = *(int *)(iVar1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01f08f90(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar7 = (char *)(_UNK_01df9274 + 0x1df91ac);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df9278 + 0x1df91c0),0);
      *pcVar7 = '\x01';
    }
    iVar5 = func_0x0229f06c(0x166e,0);
    if (iVar5 == 0) {
      iVar5 = *(int *)(iVar1 + 0x28);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      FUN_01deeff4(iVar5);
      piVar2 = *(int **)(_UNK_01df927c + 0x1df9230);
      iVar5 = *piVar2;
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x01384ab4();
        iVar5 = *piVar2;
      }
      if (*(char *)(*(int *)(iVar5 + 0x5c) + 0x50) == '\0') {
        return;
      }
      iVar1 = *(int *)(iVar1 + 0x2c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x0229f06c(0x1671,0);
      if (iVar5 == 0) {
        iVar5 = func_0x0229f06c(0x1672,0);
        if (iVar5 == 0) {
          piVar2 = (int *)func_0x02452460(iVar1,0);
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
                    /* WARNING: Could not recover jumptable at 0x01df0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar2 + 0x1a0))(piVar2,*(undefined4 *)(*piVar2 + 0x1a4));
          return;
        }
        iVar5 = func_0x0229f13c(0x1672,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar5 = func_0x0229f13c(0x1671,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      iVar5 = func_0x0229f13c(0x166e,0);
      if (iVar5 == 0) {
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
    if (*(int *)(iVar5 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar5 + 0x10),0);
    }
    func_0x01485278(&uStack_30,iVar1,0);
    iVar4 = *(int *)(iVar5 + 8);
    uVar6 = *(undefined4 *)(iVar5 + 0xc);
    iVar1 = *(int *)(iVar5 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3);
    return;
  }
  iVar5 = func_0x0229f13c(0x168c,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = 0;
  func_0x021d198c(iVar5,iVar1,uVar6,param_2);
  return;
}



// ===== FAT.Merge.MBItemView$$SetDrag RVA 0x2291450 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a1450(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 unaff_r5;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = func_0x0229f06c(0x9e52);
  if (iVar2 == 0) {
    pcVar6 = (char *)(_UNK_022a1438 + 0x22a12e0);
    uStack_18 = unaff_r4;
    uStack_14 = unaff_r5;
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022a143c + 0x22a12f4));
      func_0x01384978(*(undefined4 *)(_UNK_022a1440 + 0x22a1300));
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x1686);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x1686);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_1c = uStack_14;
      uStack_20 = uStack_18;
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,2,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar2 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485238(&uStack_38,2,0);
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
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 != 0) {
      iVar4 = *(int *)(param_1 + 0x40);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      piVar1 = (int *)func_0x03dcf1b0(iVar4,iVar2,**(undefined4 **)(_UNK_022a1444 + 0x22a1374));
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar1 + 0xe8))(piVar1,*(undefined4 *)(*piVar1 + 0xec));
    }
    func_0x022a1b58(param_1,2);
    iVar2 = *(int *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x2c) = 2;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar1 = (int *)func_0x03dcf1b0(iVar2,2,**(undefined4 **)(_UNK_022a1448 + 0x22a13d0));
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar1 + 0xe0))(piVar1,*(undefined4 *)(*piVar1 + 0xe4));
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_022a144c + 0x22a1408));
    uVar5 = *(undefined4 *)(param_1 + 0x30);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0229f06c(0x168c,0,2,0);
    if (iVar4 != 0) {
      iVar4 = func_0x0229f13c(0x168c,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x021d198c(iVar4,iVar2,uVar5,2);
      return;
    }
    iVar2 = *(int *)(iVar2 + 0x74);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = FUN_01f08f90(iVar2,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_01df9274 + 0x1df91ac);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df9278 + 0x1df91c0),0);
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x166e,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      FUN_01deeff4(iVar2);
      piVar1 = *(int **)(_UNK_01df927c + 0x1df9230);
      iVar2 = *piVar1;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar1;
      }
      if (*(char *)(*(int *)(iVar2 + 0x5c) + 0x50) == '\0') {
        return;
      }
      param_1 = *(int *)(param_1 + 0x2c);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0229f06c(0x1671,0);
      if (iVar2 == 0) {
        iVar2 = func_0x0229f06c(0x1672,0);
        if (iVar2 == 0) {
          piVar1 = (int *)func_0x02452460(param_1,0);
          if (piVar1 == (int *)0x0) {
            func_0x01384bf0();
          }
                    /* WARNING: Could not recover jumptable at 0x01df0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar1 + 0x1a0))(piVar1,*(undefined4 *)(*piVar1 + 0x1a4));
          return;
        }
        iVar2 = func_0x0229f13c(0x1672,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar2 = func_0x0229f13c(0x1671,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x166e,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x9e52);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3);
  return;
}



// ===== FAT.Merge.MBItemView$$SetMixOutput RVA 0x22914a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a14a4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 unaff_r5;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = func_0x0229f06c(0x9fab);
  if (iVar2 == 0) {
    pcVar6 = (char *)(_UNK_022a1438 + 0x22a12e0);
    uStack_18 = unaff_r4;
    uStack_14 = unaff_r5;
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022a143c + 0x22a12f4));
      func_0x01384978(*(undefined4 *)(_UNK_022a1440 + 0x22a1300));
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x1686);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x1686);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_1c = uStack_14;
      uStack_20 = uStack_18;
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,0xf,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar2 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485238(&uStack_38,0xf,0);
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
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 != 0) {
      iVar4 = *(int *)(param_1 + 0x40);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      piVar1 = (int *)func_0x03dcf1b0(iVar4,iVar2,**(undefined4 **)(_UNK_022a1444 + 0x22a1374));
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar1 + 0xe8))(piVar1,*(undefined4 *)(*piVar1 + 0xec));
    }
    func_0x022a1b58(param_1,0xf);
    iVar2 = *(int *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x2c) = 0xf;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar1 = (int *)func_0x03dcf1b0(iVar2,0xf,**(undefined4 **)(_UNK_022a1448 + 0x22a13d0));
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar1 + 0xe0))(piVar1,*(undefined4 *)(*piVar1 + 0xe4));
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_022a144c + 0x22a1408));
    uVar5 = *(undefined4 *)(param_1 + 0x30);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0229f06c(0x168c,0,0xf,0);
    if (iVar4 != 0) {
      iVar4 = func_0x0229f13c(0x168c,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x021d198c(iVar4,iVar2,uVar5,0xf);
      return;
    }
    iVar2 = *(int *)(iVar2 + 0x74);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = FUN_01f08f90(iVar2,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_01df9274 + 0x1df91ac);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df9278 + 0x1df91c0),0);
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x166e,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      FUN_01deeff4(iVar2);
      piVar1 = *(int **)(_UNK_01df927c + 0x1df9230);
      iVar2 = *piVar1;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar1;
      }
      if (*(char *)(*(int *)(iVar2 + 0x5c) + 0x50) == '\0') {
        return;
      }
      param_1 = *(int *)(param_1 + 0x2c);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0229f06c(0x1671,0);
      if (iVar2 == 0) {
        iVar2 = func_0x0229f06c(0x1672,0);
        if (iVar2 == 0) {
          piVar1 = (int *)func_0x02452460(param_1,0);
          if (piVar1 == (int *)0x0) {
            func_0x01384bf0();
          }
                    /* WARNING: Could not recover jumptable at 0x01df0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar1 + 0x1a0))(piVar1,*(undefined4 *)(*piVar1 + 0x1a4));
          return;
        }
        iVar2 = func_0x0229f13c(0x1672,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar2 = func_0x0229f13c(0x1671,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x166e,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x9fab);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3);
  return;
}



// ===== FAT.Merge.MBItemView$$SetIdle RVA 0x22914f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a14f8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 unaff_r5;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = func_0x0229f06c(0xb53a);
  if (iVar2 == 0) {
    pcVar6 = (char *)(_UNK_022a1438 + 0x22a12e0);
    uStack_18 = unaff_r4;
    uStack_14 = unaff_r5;
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022a143c + 0x22a12f4));
      func_0x01384978(*(undefined4 *)(_UNK_022a1440 + 0x22a1300));
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x1686);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x1686);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_1c = uStack_14;
      uStack_20 = uStack_18;
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,0xc,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar2 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485238(&uStack_38,0xc,0);
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
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 != 0) {
      iVar4 = *(int *)(param_1 + 0x40);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      piVar1 = (int *)func_0x03dcf1b0(iVar4,iVar2,**(undefined4 **)(_UNK_022a1444 + 0x22a1374));
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar1 + 0xe8))(piVar1,*(undefined4 *)(*piVar1 + 0xec));
    }
    func_0x022a1b58(param_1,0xc);
    iVar2 = *(int *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x2c) = 0xc;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar1 = (int *)func_0x03dcf1b0(iVar2,0xc,**(undefined4 **)(_UNK_022a1448 + 0x22a13d0));
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar1 + 0xe0))(piVar1,*(undefined4 *)(*piVar1 + 0xe4));
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_022a144c + 0x22a1408));
    uVar5 = *(undefined4 *)(param_1 + 0x30);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0229f06c(0x168c,0,0xc,0);
    if (iVar4 != 0) {
      iVar4 = func_0x0229f13c(0x168c,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x021d198c(iVar4,iVar2,uVar5,0xc);
      return;
    }
    iVar2 = *(int *)(iVar2 + 0x74);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = FUN_01f08f90(iVar2,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_01df9274 + 0x1df91ac);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df9278 + 0x1df91c0),0);
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x166e,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      FUN_01deeff4(iVar2);
      piVar1 = *(int **)(_UNK_01df927c + 0x1df9230);
      iVar2 = *piVar1;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar1;
      }
      if (*(char *)(*(int *)(iVar2 + 0x5c) + 0x50) == '\0') {
        return;
      }
      param_1 = *(int *)(param_1 + 0x2c);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0229f06c(0x1671,0);
      if (iVar2 == 0) {
        iVar2 = func_0x0229f06c(0x1672,0);
        if (iVar2 == 0) {
          piVar1 = (int *)func_0x02452460(param_1,0);
          if (piVar1 == (int *)0x0) {
            func_0x01384bf0();
          }
                    /* WARNING: Could not recover jumptable at 0x01df0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar1 + 0x1a0))(piVar1,*(undefined4 *)(*piVar1 + 0x1a4));
          return;
        }
        iVar2 = func_0x0229f13c(0x1672,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar2 = func_0x0229f13c(0x1671,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x166e,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb53a);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3);
  return;
}



// ===== FAT.Merge.MBItemView$$SetMove RVA 0x229154c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a154c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 unaff_r5;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = func_0x0229f06c(0x5fa6);
  if (iVar2 == 0) {
    if ((*(uint *)(param_1 + 0x2c) < 0xf) &&
       ((1 << (*(uint *)(param_1 + 0x2c) & 0xff) & 0x4801U) != 0)) {
      return;
    }
    pcVar6 = (char *)(_UNK_022a1438 + 0x22a12e0);
    uStack_18 = unaff_r4;
    uStack_14 = unaff_r5;
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022a143c + 0x22a12f4));
      func_0x01384978(*(undefined4 *)(_UNK_022a1440 + 0x22a1300));
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x1686);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x1686);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_1c = uStack_14;
      uStack_20 = uStack_18;
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,0xe,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar2 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485238(&uStack_38,0xe,0);
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
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 != 0) {
      iVar4 = *(int *)(param_1 + 0x40);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      piVar1 = (int *)func_0x03dcf1b0(iVar4,iVar2,**(undefined4 **)(_UNK_022a1444 + 0x22a1374));
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar1 + 0xe8))(piVar1,*(undefined4 *)(*piVar1 + 0xec));
    }
    func_0x022a1b58(param_1,0xe);
    iVar2 = *(int *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x2c) = 0xe;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar1 = (int *)func_0x03dcf1b0(iVar2,0xe,**(undefined4 **)(_UNK_022a1448 + 0x22a13d0));
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar1 + 0xe0))(piVar1,*(undefined4 *)(*piVar1 + 0xe4));
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_022a144c + 0x22a1408));
    uVar5 = *(undefined4 *)(param_1 + 0x30);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0229f06c(0x168c,0,0xe,0);
    if (iVar4 != 0) {
      iVar4 = func_0x0229f13c(0x168c,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x021d198c(iVar4,iVar2,uVar5,0xe);
      return;
    }
    iVar2 = *(int *)(iVar2 + 0x74);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = FUN_01f08f90(iVar2,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_01df9274 + 0x1df91ac);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df9278 + 0x1df91c0),0);
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x166e,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      FUN_01deeff4(iVar2);
      piVar1 = *(int **)(_UNK_01df927c + 0x1df9230);
      iVar2 = *piVar1;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar1;
      }
      if (*(char *)(*(int *)(iVar2 + 0x5c) + 0x50) == '\0') {
        return;
      }
      param_1 = *(int *)(param_1 + 0x2c);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0229f06c(0x1671,0);
      if (iVar2 == 0) {
        iVar2 = func_0x0229f06c(0x1672,0);
        if (iVar2 == 0) {
          piVar1 = (int *)func_0x02452460(param_1,0);
          if (piVar1 == (int *)0x0) {
            func_0x01384bf0();
          }
                    /* WARNING: Could not recover jumptable at 0x01df0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar1 + 0x1a0))(piVar1,*(undefined4 *)(*piVar1 + 0x1a4));
          return;
        }
        iVar2 = func_0x0229f13c(0x1672,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar2 = func_0x0229f13c(0x1671,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x166e,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5fa6);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3);
  return;
}



// ===== FAT.Merge.MBItemView$$SetRewardListPop RVA 0x22915bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a15bc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
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
  
  iVar2 = func_0x0229f06c(0x9fef);
  if (iVar2 == 0) {
    FUN_022a12c8(param_1,7);
    param_1 = *(int *)(param_1 + 0x14);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01e15d2c + 0x1e15c70);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e15d30 + 0x1e15c84),0);
      func_0x01384978(*(undefined4 *)(_UNK_01e15d34 + 0x1e15c90));
      *pcVar4 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x9ff0,0);
    if (iVar2 == 0) {
      iVar5 = *(int *)(param_1 + 0x20);
      iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01e15d38 + 0x1e15ce8));
      func_0x03ccb96c(iVar2,0,**(undefined4 **)(_UNK_01e15d3c + 0x1e15d08),0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      pcVar4 = (char *)(_UNK_01e15e1c + 0x1e15d58);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e15e20 + 0x1e15d6c));
        *pcVar4 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x9ff3,0);
      if (iVar1 == 0) {
        uVar6 = *(undefined4 *)(iVar5 + 0x10);
        if (*(int *)(**(int **)(_UNK_01e15e24 + 0x1e15dc8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0145b1cc(uVar6,0,0);
        if (iVar1 == 0) {
          *(int *)(iVar5 + 0x18) = iVar2;
        }
        else if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01e15e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar2 + 0xc))
                    (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar5 + 0x10),
                     *(undefined4 *)(iVar2 + 0x14));
          return;
        }
        return;
      }
      iVar1 = func_0x0229f13c(0x9ff3,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
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
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      iVar2 = *(int *)(iVar1 + 0x10);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar3 = 3;
      if (iVar2 == 0) {
        uVar3 = 2;
      }
      func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
      return;
    }
    iVar2 = func_0x0229f13c(0x9ff0,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x9fef);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3);
  return;
}



// ===== FAT.Merge.MBItemView$$SetSpawnFromInventory RVA 0x229162c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a162c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 unaff_r5;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = func_0x0229f06c(0x168d);
  if (iVar2 == 0) {
    pcVar6 = (char *)(_UNK_022a1438 + 0x22a12e0);
    uStack_18 = unaff_r4;
    uStack_14 = unaff_r5;
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022a143c + 0x22a12f4));
      func_0x01384978(*(undefined4 *)(_UNK_022a1440 + 0x22a1300));
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x1686);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x1686);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_1c = uStack_14;
      uStack_20 = uStack_18;
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,7,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar2 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485238(&uStack_38,7,0);
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
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 != 0) {
      iVar4 = *(int *)(param_1 + 0x40);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      piVar1 = (int *)func_0x03dcf1b0(iVar4,iVar2,**(undefined4 **)(_UNK_022a1444 + 0x22a1374));
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar1 + 0xe8))(piVar1,*(undefined4 *)(*piVar1 + 0xec));
    }
    func_0x022a1b58(param_1,7);
    iVar2 = *(int *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x2c) = 7;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar1 = (int *)func_0x03dcf1b0(iVar2,7,**(undefined4 **)(_UNK_022a1448 + 0x22a13d0));
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar1 + 0xe0))(piVar1,*(undefined4 *)(*piVar1 + 0xe4));
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_022a144c + 0x22a1408));
    uVar5 = *(undefined4 *)(param_1 + 0x30);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0229f06c(0x168c,0,7,0);
    if (iVar4 != 0) {
      iVar4 = func_0x0229f13c(0x168c,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x021d198c(iVar4,iVar2,uVar5,7);
      return;
    }
    iVar2 = *(int *)(iVar2 + 0x74);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = FUN_01f08f90(iVar2,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_01df9274 + 0x1df91ac);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df9278 + 0x1df91c0),0);
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x166e,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      FUN_01deeff4(iVar2);
      piVar1 = *(int **)(_UNK_01df927c + 0x1df9230);
      iVar2 = *piVar1;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar1;
      }
      if (*(char *)(*(int *)(iVar2 + 0x5c) + 0x50) == '\0') {
        return;
      }
      param_1 = *(int *)(param_1 + 0x2c);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0229f06c(0x1671,0);
      if (iVar2 == 0) {
        iVar2 = func_0x0229f06c(0x1672,0);
        if (iVar2 == 0) {
          piVar1 = (int *)func_0x02452460(param_1,0);
          if (piVar1 == (int *)0x0) {
            func_0x01384bf0();
          }
                    /* WARNING: Could not recover jumptable at 0x01df0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar1 + 0x1a0))(piVar1,*(undefined4 *)(*piVar1 + 0x1a4));
          return;
        }
        iVar2 = func_0x0229f13c(0x1672,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar2 = func_0x0229f13c(0x1671,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x166e,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x168d);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3);
  return;
}



// ===== FAT.Merge.MBItemView$$ResolveSpawnWait RVA 0x2291680 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a1680(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 unaff_r5;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = func_0x0229f06c(0xa6f7);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x2c) != 5) {
      return;
    }
    pcVar6 = (char *)(_UNK_022a1438 + 0x22a12e0);
    uStack_18 = unaff_r4;
    uStack_14 = unaff_r5;
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022a143c + 0x22a12f4));
      func_0x01384978(*(undefined4 *)(_UNK_022a1440 + 0x22a1300));
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x1686);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x1686);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_1c = uStack_14;
      uStack_20 = uStack_18;
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,4,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar2 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485238(&uStack_38,4,0);
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
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 != 0) {
      iVar4 = *(int *)(param_1 + 0x40);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      piVar1 = (int *)func_0x03dcf1b0(iVar4,iVar2,**(undefined4 **)(_UNK_022a1444 + 0x22a1374));
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar1 + 0xe8))(piVar1,*(undefined4 *)(*piVar1 + 0xec));
    }
    func_0x022a1b58(param_1,4);
    iVar2 = *(int *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x2c) = 4;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar1 = (int *)func_0x03dcf1b0(iVar2,4,**(undefined4 **)(_UNK_022a1448 + 0x22a13d0));
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar1 + 0xe0))(piVar1,*(undefined4 *)(*piVar1 + 0xe4));
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_022a144c + 0x22a1408));
    uVar5 = *(undefined4 *)(param_1 + 0x30);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0229f06c(0x168c,0,4,0);
    if (iVar4 != 0) {
      iVar4 = func_0x0229f13c(0x168c,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x021d198c(iVar4,iVar2,uVar5,4);
      return;
    }
    iVar2 = *(int *)(iVar2 + 0x74);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = FUN_01f08f90(iVar2,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_01df9274 + 0x1df91ac);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df9278 + 0x1df91c0),0);
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x166e,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      FUN_01deeff4(iVar2);
      piVar1 = *(int **)(_UNK_01df927c + 0x1df9230);
      iVar2 = *piVar1;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar1;
      }
      if (*(char *)(*(int *)(iVar2 + 0x5c) + 0x50) == '\0') {
        return;
      }
      param_1 = *(int *)(param_1 + 0x2c);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0229f06c(0x1671,0);
      if (iVar2 == 0) {
        iVar2 = func_0x0229f06c(0x1672,0);
        if (iVar2 == 0) {
          piVar1 = (int *)func_0x02452460(param_1,0);
          if (piVar1 == (int *)0x0) {
            func_0x01384bf0();
          }
                    /* WARNING: Could not recover jumptable at 0x01df0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar1 + 0x1a0))(piVar1,*(undefined4 *)(*piVar1 + 0x1a4));
          return;
        }
        iVar2 = func_0x0229f13c(0x1672,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar2 = func_0x0229f13c(0x1671,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x166e,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa6f7);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3);
  return;
}



// ===== FAT.Merge.MBItemView$$SetSpawn RVA 0x22916e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a16e0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int iVar5;
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
  undefined4 uStack_18;
  
  iVar2 = func_0x0229f06c(0x9faa);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9faa);
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
    iVar6 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  *(int *)(param_1 + 0x34) = param_2;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0x14) == 10) {
    uVar7 = 3;
  }
  else if (*(int *)(param_2 + 8) == 0) {
    uVar3 = *(int *)(param_2 + 0x14) - 0x12;
    if (uVar3 < 0x13) {
      if ((1 << (uVar3 & 0xff) & 0x7dfecU) != 0) {
        uVar7 = 7;
        goto LAB_022a1794;
      }
      if (uVar3 == 0) {
        uVar7 = 5;
        goto LAB_022a1794;
      }
    }
    uVar7 = 4;
  }
  else {
    uVar7 = 6;
  }
LAB_022a1794:
  pcVar8 = (char *)(_UNK_022a1438 + 0x22a12e0);
  uStack_18 = unaff_r4;
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a143c + 0x22a12f4));
    func_0x01384978(*(undefined4 *)(_UNK_022a1440 + 0x22a1300));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x1686);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x1686);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = uStack_18;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar7,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,uVar7,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 != 0) {
    iVar6 = *(int *)(param_1 + 0x40);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    piVar1 = (int *)func_0x03dcf1b0(iVar6,iVar2,**(undefined4 **)(_UNK_022a1444 + 0x22a1374));
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar1 + 0xe8))(piVar1,*(undefined4 *)(*piVar1 + 0xec));
  }
  func_0x022a1b58(param_1,uVar7);
  iVar2 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x2c) = uVar7;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar1 = (int *)func_0x03dcf1b0(iVar2,uVar7,**(undefined4 **)(_UNK_022a1448 + 0x22a13d0));
  if (piVar1 == (int *)0x0) {
    func_0x01384bf0();
  }
  (**(code **)(*piVar1 + 0xe0))(piVar1,*(undefined4 *)(*piVar1 + 0xe4));
  iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_022a144c + 0x22a1408));
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x0229f06c(0x168c,0,uVar7,0);
  if (iVar6 == 0) {
    iVar2 = *(int *)(iVar2 + 0x74);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_01f08f90(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_01df9274 + 0x1df91ac);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df9278 + 0x1df91c0),0);
      *pcVar8 = '\x01';
    }
    iVar6 = func_0x0229f06c(0x166e,0);
    if (iVar6 == 0) {
      iVar6 = *(int *)(iVar2 + 0x28);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      FUN_01deeff4(iVar6);
      piVar1 = *(int **)(_UNK_01df927c + 0x1df9230);
      iVar6 = *piVar1;
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x01384ab4();
        iVar6 = *piVar1;
      }
      if (*(char *)(*(int *)(iVar6 + 0x5c) + 0x50) == '\0') {
        return;
      }
      iVar2 = *(int *)(iVar2 + 0x2c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x0229f06c(0x1671,0);
      if (iVar6 == 0) {
        iVar6 = func_0x0229f06c(0x1672,0);
        if (iVar6 == 0) {
          piVar1 = (int *)func_0x02452460(iVar2,0);
          if (piVar1 == (int *)0x0) {
            func_0x01384bf0();
          }
                    /* WARNING: Could not recover jumptable at 0x01df0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar1 + 0x1a0))(piVar1,*(undefined4 *)(*piVar1 + 0x1a4));
          return;
        }
        iVar6 = func_0x0229f13c(0x1672,0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar6 = func_0x0229f13c(0x1671,0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      iVar6 = func_0x0229f13c(0x166e,0);
      if (iVar6 == 0) {
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
    if (*(int *)(iVar6 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar6 + 0x10),0);
    }
    func_0x01485278(&uStack_30,iVar2,0);
    iVar5 = *(int *)(iVar6 + 8);
    uVar7 = *(undefined4 *)(iVar6 + 0xc);
    iVar2 = *(int *)(iVar6 + 0x10);
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
  iVar6 = func_0x0229f13c(0x168c,0);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = 0;
  func_0x021d198c(iVar6,iVar2,uVar4,uVar7);
  return;
}



// ===== FAT.Merge.MBItemView$$SetDelayUnlock RVA 0x22917bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a17bc(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  undefined4 uStack_18;
  
  iVar2 = func_0x0229f06c(0x9fd7);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9fd7);
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
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x10) != 1) {
    return;
  }
  *(int *)(param_1 + 0x3c) = param_2;
  pcVar7 = (char *)(_UNK_022a1438 + 0x22a12e0);
  uStack_18 = unaff_r4;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a143c + 0x22a12f4));
    func_0x01384978(*(undefined4 *)(_UNK_022a1440 + 0x22a1300));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x1686);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 != 0) {
      iVar5 = *(int *)(param_1 + 0x40);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      piVar1 = (int *)func_0x03dcf1b0(iVar5,iVar2,**(undefined4 **)(_UNK_022a1444 + 0x22a1374));
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar1 + 0xe8))(piVar1,*(undefined4 *)(*piVar1 + 0xec));
    }
    func_0x022a1b58(param_1,0x10);
    iVar2 = *(int *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x2c) = 0x10;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar1 = (int *)func_0x03dcf1b0(iVar2,0x10,**(undefined4 **)(_UNK_022a1448 + 0x22a13d0));
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar1 + 0xe0))(piVar1,*(undefined4 *)(*piVar1 + 0xe4));
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_022a144c + 0x22a1408));
    uVar6 = *(undefined4 *)(param_1 + 0x30);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x0229f06c(0x168c,0,0x10,0);
    if (iVar5 == 0) {
      iVar2 = *(int *)(iVar2 + 0x74);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_01f08f90(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      pcVar7 = (char *)(_UNK_01df9274 + 0x1df91ac);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01df9278 + 0x1df91c0),0);
        *pcVar7 = '\x01';
      }
      iVar5 = func_0x0229f06c(0x166e,0);
      if (iVar5 == 0) {
        iVar5 = *(int *)(iVar2 + 0x28);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        FUN_01deeff4(iVar5);
        piVar1 = *(int **)(_UNK_01df927c + 0x1df9230);
        iVar5 = *piVar1;
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x01384ab4();
          iVar5 = *piVar1;
        }
        if (*(char *)(*(int *)(iVar5 + 0x5c) + 0x50) == '\0') {
          return;
        }
        iVar2 = *(int *)(iVar2 + 0x2c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0229f06c(0x1671,0);
        if (iVar5 == 0) {
          iVar5 = func_0x0229f06c(0x1672,0);
          if (iVar5 == 0) {
            piVar1 = (int *)func_0x02452460(iVar2,0);
            if (piVar1 == (int *)0x0) {
              func_0x01384bf0();
            }
                    /* WARNING: Could not recover jumptable at 0x01df0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*piVar1 + 0x1a0))(piVar1,*(undefined4 *)(*piVar1 + 0x1a4));
            return;
          }
          iVar5 = func_0x0229f13c(0x1672,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
        }
        else {
          iVar5 = func_0x0229f13c(0x1671,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
        }
      }
      else {
        iVar5 = func_0x0229f13c(0x166e,0);
        if (iVar5 == 0) {
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
      if (*(int *)(iVar5 + 0x10) != 0) {
        func_0x01485278(&uStack_30,*(int *)(iVar5 + 0x10),0);
      }
      func_0x01485278(&uStack_30,iVar2,0);
      iVar4 = *(int *)(iVar5 + 8);
      uVar6 = *(undefined4 *)(iVar5 + 0xc);
      iVar2 = *(int *)(iVar5 + 0x10);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar3 = 2;
      if (iVar2 == 0) {
        uVar3 = 1;
      }
      uStack_50 = 0;
      uStack_4c = 0;
      func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3);
      return;
    }
    iVar5 = func_0x0229f13c(0x168c,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x021d198c(iVar5,iVar2,uVar6,0x10);
    return;
  }
  iVar2 = func_0x0229f13c(0x1686);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = uStack_18;
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,0x10,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,0x10,0);
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
  return;
}



// ===== FAT.Merge.MBItemView$$SetMerge RVA 0x2291834 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a1834(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  undefined4 uStack_18;
  
  iVar2 = func_0x0229f06c(0x9fc1);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9fc1);
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
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = param_2;
  pcVar7 = (char *)(_UNK_022a1438 + 0x22a12e0);
  uStack_18 = unaff_r4;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a143c + 0x22a12f4));
    func_0x01384978(*(undefined4 *)(_UNK_022a1440 + 0x22a1300));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x1686);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 != 0) {
      iVar5 = *(int *)(param_1 + 0x40);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      piVar1 = (int *)func_0x03dcf1b0(iVar5,iVar2,**(undefined4 **)(_UNK_022a1444 + 0x22a1374));
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar1 + 0xe8))(piVar1,*(undefined4 *)(*piVar1 + 0xec));
    }
    func_0x022a1b58(param_1,8);
    iVar2 = *(int *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x2c) = 8;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar1 = (int *)func_0x03dcf1b0(iVar2,8,**(undefined4 **)(_UNK_022a1448 + 0x22a13d0));
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar1 + 0xe0))(piVar1,*(undefined4 *)(*piVar1 + 0xe4));
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_022a144c + 0x22a1408));
    uVar6 = *(undefined4 *)(param_1 + 0x30);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x0229f06c(0x168c,0,8,0);
    if (iVar5 == 0) {
      iVar2 = *(int *)(iVar2 + 0x74);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_01f08f90(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      pcVar7 = (char *)(_UNK_01df9274 + 0x1df91ac);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01df9278 + 0x1df91c0),0);
        *pcVar7 = '\x01';
      }
      iVar5 = func_0x0229f06c(0x166e,0);
      if (iVar5 == 0) {
        iVar5 = *(int *)(iVar2 + 0x28);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        FUN_01deeff4(iVar5);
        piVar1 = *(int **)(_UNK_01df927c + 0x1df9230);
        iVar5 = *piVar1;
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x01384ab4();
          iVar5 = *piVar1;
        }
        if (*(char *)(*(int *)(iVar5 + 0x5c) + 0x50) == '\0') {
          return;
        }
        iVar2 = *(int *)(iVar2 + 0x2c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0229f06c(0x1671,0);
        if (iVar5 == 0) {
          iVar5 = func_0x0229f06c(0x1672,0);
          if (iVar5 == 0) {
            piVar1 = (int *)func_0x02452460(iVar2,0);
            if (piVar1 == (int *)0x0) {
              func_0x01384bf0();
            }
                    /* WARNING: Could not recover jumptable at 0x01df0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*piVar1 + 0x1a0))(piVar1,*(undefined4 *)(*piVar1 + 0x1a4));
            return;
          }
          iVar5 = func_0x0229f13c(0x1672,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
        }
        else {
          iVar5 = func_0x0229f13c(0x1671,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
        }
      }
      else {
        iVar5 = func_0x0229f13c(0x166e,0);
        if (iVar5 == 0) {
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
      if (*(int *)(iVar5 + 0x10) != 0) {
        func_0x01485278(&uStack_30,*(int *)(iVar5 + 0x10),0);
      }
      func_0x01485278(&uStack_30,iVar2,0);
      iVar4 = *(int *)(iVar5 + 8);
      uVar6 = *(undefined4 *)(iVar5 + 0xc);
      iVar2 = *(int *)(iVar5 + 0x10);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar3 = 2;
      if (iVar2 == 0) {
        uVar3 = 1;
      }
      uStack_50 = 0;
      uStack_4c = 0;
      func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3);
      return;
    }
    iVar5 = func_0x0229f13c(0x168c,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x021d198c(iVar5,iVar2,uVar6,8);
    return;
  }
  iVar2 = func_0x0229f13c(0x1686);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = uStack_18;
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,8,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,8,0);
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
  return;
}



// ===== FAT.Merge.MBItemView$$SetConsume RVA 0x2291894 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a1894(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  undefined4 uStack_18;
  
  iVar2 = func_0x0229f06c(0x9fcd);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9fcd);
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
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = param_2;
  pcVar7 = (char *)(_UNK_022a1438 + 0x22a12e0);
  uStack_18 = unaff_r4;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a143c + 0x22a12f4));
    func_0x01384978(*(undefined4 *)(_UNK_022a1440 + 0x22a1300));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x1686);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 != 0) {
      iVar5 = *(int *)(param_1 + 0x40);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      piVar1 = (int *)func_0x03dcf1b0(iVar5,iVar2,**(undefined4 **)(_UNK_022a1444 + 0x22a1374));
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar1 + 0xe8))(piVar1,*(undefined4 *)(*piVar1 + 0xec));
    }
    func_0x022a1b58(param_1,10);
    iVar2 = *(int *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x2c) = 10;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar1 = (int *)func_0x03dcf1b0(iVar2,10,**(undefined4 **)(_UNK_022a1448 + 0x22a13d0));
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar1 + 0xe0))(piVar1,*(undefined4 *)(*piVar1 + 0xe4));
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_022a144c + 0x22a1408));
    uVar6 = *(undefined4 *)(param_1 + 0x30);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x0229f06c(0x168c,0,10,0);
    if (iVar5 == 0) {
      iVar2 = *(int *)(iVar2 + 0x74);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = FUN_01f08f90(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      pcVar7 = (char *)(_UNK_01df9274 + 0x1df91ac);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01df9278 + 0x1df91c0),0);
        *pcVar7 = '\x01';
      }
      iVar5 = func_0x0229f06c(0x166e,0);
      if (iVar5 == 0) {
        iVar5 = *(int *)(iVar2 + 0x28);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        FUN_01deeff4(iVar5);
        piVar1 = *(int **)(_UNK_01df927c + 0x1df9230);
        iVar5 = *piVar1;
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x01384ab4();
          iVar5 = *piVar1;
        }
        if (*(char *)(*(int *)(iVar5 + 0x5c) + 0x50) == '\0') {
          return;
        }
        iVar2 = *(int *)(iVar2 + 0x2c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0229f06c(0x1671,0);
        if (iVar5 == 0) {
          iVar5 = func_0x0229f06c(0x1672,0);
          if (iVar5 == 0) {
            piVar1 = (int *)func_0x02452460(iVar2,0);
            if (piVar1 == (int *)0x0) {
              func_0x01384bf0();
            }
                    /* WARNING: Could not recover jumptable at 0x01df0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*piVar1 + 0x1a0))(piVar1,*(undefined4 *)(*piVar1 + 0x1a4));
            return;
          }
          iVar5 = func_0x0229f13c(0x1672,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
        }
        else {
          iVar5 = func_0x0229f13c(0x1671,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
        }
      }
      else {
        iVar5 = func_0x0229f13c(0x166e,0);
        if (iVar5 == 0) {
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
      if (*(int *)(iVar5 + 0x10) != 0) {
        func_0x01485278(&uStack_30,*(int *)(iVar5 + 0x10),0);
      }
      func_0x01485278(&uStack_30,iVar2,0);
      iVar4 = *(int *)(iVar5 + 8);
      uVar6 = *(undefined4 *)(iVar5 + 0xc);
      iVar2 = *(int *)(iVar5 + 0x10);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar3 = 2;
      if (iVar2 == 0) {
        uVar3 = 1;
      }
      uStack_50 = 0;
      uStack_4c = 0;
      func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3);
      return;
    }
    iVar5 = func_0x0229f13c(0x168c,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x021d198c(iVar5,iVar2,uVar6,10);
    return;
  }
  iVar2 = func_0x0229f13c(0x1686);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = uStack_18;
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,10,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,10,0);
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
  return;
}



// ===== FAT.Merge.MBItemView$$SetDead RVA 0x22918f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a18f4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 unaff_r5;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = func_0x0229f06c(0x9fc3);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x2c) == 0xb) {
      return;
    }
    pcVar6 = (char *)(_UNK_022a1438 + 0x22a12e0);
    uStack_18 = unaff_r4;
    uStack_14 = unaff_r5;
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022a143c + 0x22a12f4));
      func_0x01384978(*(undefined4 *)(_UNK_022a1440 + 0x22a1300));
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x1686);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x1686);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_1c = uStack_14;
      uStack_20 = uStack_18;
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,0xb,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar2 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485238(&uStack_38,0xb,0);
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
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 != 0) {
      iVar4 = *(int *)(param_1 + 0x40);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      piVar1 = (int *)func_0x03dcf1b0(iVar4,iVar2,**(undefined4 **)(_UNK_022a1444 + 0x22a1374));
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar1 + 0xe8))(piVar1,*(undefined4 *)(*piVar1 + 0xec));
    }
    func_0x022a1b58(param_1,0xb);
    iVar2 = *(int *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x2c) = 0xb;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar1 = (int *)func_0x03dcf1b0(iVar2,0xb,**(undefined4 **)(_UNK_022a1448 + 0x22a13d0));
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar1 + 0xe0))(piVar1,*(undefined4 *)(*piVar1 + 0xe4));
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_022a144c + 0x22a1408));
    uVar5 = *(undefined4 *)(param_1 + 0x30);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0229f06c(0x168c,0,0xb,0);
    if (iVar4 != 0) {
      iVar4 = func_0x0229f13c(0x168c,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x021d198c(iVar4,iVar2,uVar5,0xb);
      return;
    }
    iVar2 = *(int *)(iVar2 + 0x74);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = FUN_01f08f90(iVar2,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_01df9274 + 0x1df91ac);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df9278 + 0x1df91c0),0);
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x166e,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      FUN_01deeff4(iVar2);
      piVar1 = *(int **)(_UNK_01df927c + 0x1df9230);
      iVar2 = *piVar1;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar1;
      }
      if (*(char *)(*(int *)(iVar2 + 0x5c) + 0x50) == '\0') {
        return;
      }
      param_1 = *(int *)(param_1 + 0x2c);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0229f06c(0x1671,0);
      if (iVar2 == 0) {
        iVar2 = func_0x0229f06c(0x1672,0);
        if (iVar2 == 0) {
          piVar1 = (int *)func_0x02452460(param_1,0);
          if (piVar1 == (int *)0x0) {
            func_0x01384bf0();
          }
                    /* WARNING: Could not recover jumptable at 0x01df0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar1 + 0x1a0))(piVar1,*(undefined4 *)(*piVar1 + 0x1a4));
          return;
        }
        iVar2 = func_0x0229f13c(0x1672,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar2 = func_0x0229f13c(0x1671,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x166e,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x9fc3);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3);
  return;
}



// ===== FAT.Merge.MBItemView$$SetEmpty RVA 0x2291954 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a1954(int param_1)

{
  int iVar1;
  int *piVar2;
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
  
  pcVar5 = (char *)(_UNK_022a1a24 + 0x22a1968);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a1a28 + 0x22a197c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9fc0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9fc0);
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
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != 0) {
    iVar4 = *(int *)(param_1 + 0x40);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x03dcf1b0(iVar4,iVar1,**(undefined4 **)(_UNK_022a1a2c + 0x22a19ec));
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar2 + 0xe8))(piVar2,*(undefined4 *)(*piVar2 + 0xec));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



// ===== FAT.Merge.MBItemView$$SetResAction RVA 0x2291a30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a1a30(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0xb53b);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x14);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0xa09b,0,0);
    if (iVar1 == 0) {
      param_1 = *(int *)(param_1 + 0x20);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      pcVar4 = (char *)(_UNK_01e15e1c + 0x1e15d58);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e15e20 + 0x1e15d6c));
        *pcVar4 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x9ff3,0);
      if (iVar1 == 0) {
        uVar5 = *(undefined4 *)(param_1 + 0x10);
        if (*(int *)(**(int **)(_UNK_01e15e24 + 0x1e15dc8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0145b1cc(uVar5,0,0);
        if (iVar1 == 0) {
          *(int *)(param_1 + 0x18) = param_2;
        }
        else if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01e15e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(param_2 + 0xc))
                    (*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_1 + 0x10),
                     *(undefined4 *)(param_2 + 0x14));
          return;
        }
        return;
      }
      iVar1 = func_0x0229f13c(0x9ff3,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0xa09b,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb53b);
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



// ===== FAT.Merge.MBItemView$$SetFeedStateChange RVA 0x2291aa0 =====

void FUN_022a1aa0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9fc6);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x24);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x9fc7,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = func_0x0229f13c(0x9fc7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9fc6);
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



// ===== FAT.Merge.MBItemView$$SetMoveToRewardBox RVA 0x2291b04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a1b04(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 unaff_r5;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = func_0x0229f06c(0xa001);
  if (iVar2 == 0) {
    pcVar6 = (char *)(_UNK_022a1438 + 0x22a12e0);
    uStack_18 = unaff_r4;
    uStack_14 = unaff_r5;
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022a143c + 0x22a12f4));
      func_0x01384978(*(undefined4 *)(_UNK_022a1440 + 0x22a1300));
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x1686);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x1686);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_1c = uStack_14;
      uStack_20 = uStack_18;
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,0x11,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar2 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485238(&uStack_38,0x11,0);
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
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 != 0) {
      iVar4 = *(int *)(param_1 + 0x40);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      piVar1 = (int *)func_0x03dcf1b0(iVar4,iVar2,**(undefined4 **)(_UNK_022a1444 + 0x22a1374));
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar1 + 0xe8))(piVar1,*(undefined4 *)(*piVar1 + 0xec));
    }
    func_0x022a1b58(param_1,0x11);
    iVar2 = *(int *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x2c) = 0x11;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar1 = (int *)func_0x03dcf1b0(iVar2,0x11,**(undefined4 **)(_UNK_022a1448 + 0x22a13d0));
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar1 + 0xe0))(piVar1,*(undefined4 *)(*piVar1 + 0xe4));
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_022a144c + 0x22a1408));
    uVar5 = *(undefined4 *)(param_1 + 0x30);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0229f06c(0x168c,0,0x11,0);
    if (iVar4 != 0) {
      iVar4 = func_0x0229f13c(0x168c,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x021d198c(iVar4,iVar2,uVar5,0x11);
      return;
    }
    iVar2 = *(int *)(iVar2 + 0x74);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = FUN_01f08f90(iVar2,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_01df9274 + 0x1df91ac);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df9278 + 0x1df91c0),0);
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x166e,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x28);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      FUN_01deeff4(iVar2);
      piVar1 = *(int **)(_UNK_01df927c + 0x1df9230);
      iVar2 = *piVar1;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar1;
      }
      if (*(char *)(*(int *)(iVar2 + 0x5c) + 0x50) == '\0') {
        return;
      }
      param_1 = *(int *)(param_1 + 0x2c);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0229f06c(0x1671,0);
      if (iVar2 == 0) {
        iVar2 = func_0x0229f06c(0x1672,0);
        if (iVar2 == 0) {
          piVar1 = (int *)func_0x02452460(param_1,0);
          if (piVar1 == (int *)0x0) {
            func_0x01384bf0();
          }
                    /* WARNING: Could not recover jumptable at 0x01df0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar1 + 0x1a0))(piVar1,*(undefined4 *)(*piVar1 + 0x1a4));
          return;
        }
        iVar2 = func_0x0229f13c(0x1672,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar2 = func_0x0229f13c(0x1671,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x166e,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa001);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3);
  return;
}



// ===== FAT.Merge.MBItemView$$_EnsureState RVA 0x2291b58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a1b58(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_022a1c48 + 0x22a1b70);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a1c4c + 0x22a1b84));
    func_0x01384978(*(undefined4 *)(_UNK_022a1c50 + 0x22a1b90));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1689);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1689);
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
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03dcf4b4(iVar1,param_2,**(undefined4 **)(_UNK_022a1c54 + 0x22a1bf8));
  if (iVar1 != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  uVar4 = func_0x022a1c5c(param_1,param_2);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03dcfe28(iVar1,param_2,uVar4,2);
  return;
}



// ===== FAT.Merge.MBItemView$$_CreateState RVA 0x2291c5c =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022a1c5c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_022a202c + 0x22a1c74);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a2030 + 0x22a1c88));
    func_0x01384978(*(undefined4 *)(_UNK_022a2034 + 0x22a1c94));
    func_0x01384978(*(undefined4 *)(_UNK_022a2038 + 0x22a1ca0));
    func_0x01384978(*(undefined4 *)(_UNK_022a203c + 0x22a1cac));
    func_0x01384978(*(undefined4 *)(_UNK_022a2040 + 0x22a1cb8));
    func_0x01384978(*(undefined4 *)(_UNK_022a2044 + 0x22a1cc4));
    func_0x01384978(*(undefined4 *)(_UNK_022a2048 + 0x22a1cd0));
    func_0x01384978(*(undefined4 *)(_UNK_022a204c + 0x22a1cdc));
    func_0x01384978(*(undefined4 *)(_UNK_022a2050 + 0x22a1ce8));
    func_0x01384978(*(undefined4 *)(_UNK_022a2054 + 0x22a1cf4));
    func_0x01384978(*(undefined4 *)(_UNK_022a2058 + 0x22a1d00));
    func_0x01384978(*(undefined4 *)(_UNK_022a205c + 0x22a1d0c));
    func_0x01384978(*(undefined4 *)(_UNK_022a2060 + 0x22a1d18));
    func_0x01384978(*(undefined4 *)(_UNK_022a2064 + 0x22a1d24));
    func_0x01384978(*(undefined4 *)(_UNK_022a2068 + 0x22a1d30));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x168a);
  if (iVar1 == 0) {
    switch(param_2) {
    case 1:
      uVar4 = func_0x01384be4(**(undefined4 **)(&UNK_022a1de0 + _UNK_022a20ac));
      func_0x01e1c3d4(uVar4,param_1,0);
      break;
    case 2:
      uVar4 = func_0x01384be4(**(undefined4 **)(&UNK_022a1e04 + _UNK_022a206c));
      func_0x01e1d6ec(uVar4,param_1,0);
      break;
    case 3:
      uVar4 = func_0x01384be4(**(undefined4 **)(&UNK_022a1e28 + _UNK_022a2074));
      func_0x01e1f7e0(uVar4,param_1,0);
      break;
    case 4:
      uVar4 = func_0x01384be4(**(undefined4 **)(&UNK_022a1e4c + _UNK_022a2084));
      func_0x01e22fa0(uVar4,param_1,0);
      break;
    case 5:
      uVar4 = func_0x01384be4(**(undefined4 **)(&UNK_022a1e70 + _UNK_022a2080));
      func_0x01e236d4(uVar4,param_1,0);
      break;
    case 6:
      uVar4 = func_0x01384be4(**(undefined4 **)(&UNK_022a1e94 + _UNK_022a2088));
      func_0x01e1fb18(uVar4,param_1,0);
      break;
    case 7:
      uVar4 = func_0x01384be4(**(undefined4 **)(&UNK_022a1eb8 + _UNK_022a2090));
      func_0x01e21ff4(uVar4,param_1,0);
      break;
    case 8:
      uVar4 = func_0x01384be4(**(undefined4 **)(&UNK_022a1edc + _UNK_022a208c));
      func_0x01e1d88c(uVar4,param_1,0);
      break;
    default:
      func_0x01384988(*(undefined4 *)(_UNK_022a20a4 + 0x22a2000));
      uVar4 = func_0x01384be4();
      func_0x0244f630(uVar4,0);
      uVar2 = func_0x01384988(*(undefined4 *)(_UNK_022a20a8 + 0x22a201c));
      func_0x01384aa0(uVar4,uVar2);
      func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 10:
      uVar4 = func_0x01384be4(**(undefined4 **)(&UNK_022a1f00 + _UNK_022a207c));
      func_0x01e1c450(uVar4,param_1,0);
      break;
    case 0xb:
      uVar4 = func_0x01384be4(**(undefined4 **)(&UNK_022a1f24 + _UNK_022a2094));
      func_0x01e1cd88(uVar4,param_1,0);
      break;
    case 0xc:
      uVar4 = func_0x01384be4(**(undefined4 **)(&UNK_022a1f48 + _UNK_022a2070));
      func_0x01e1d7f4(uVar4,param_1,0);
      break;
    case 0xe:
      uVar4 = func_0x01384be4(**(undefined4 **)(&UNK_022a1f6c + _UNK_022a2078));
      func_0x01e1ec50(uVar4,param_1,0);
      break;
    case 0xf:
      uVar4 = func_0x01384be4(**(undefined4 **)(&UNK_022a1f90 + _UNK_022a2098));
      func_0x01e1eae0(uVar4,param_1,0);
      break;
    case 0x10:
      uVar4 = func_0x01384be4(**(undefined4 **)(&UNK_022a1fb4 + _UNK_022a209c));
      func_0x01e1c864(uVar4,param_1,0);
      break;
    case 0x11:
      uVar4 = func_0x01384be4(**(undefined4 **)(&UNK_022a1fd8 + _UNK_022a20a0));
      func_0x01e1f180(uVar4,param_1,0);
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x168a);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_021d18b0 + 0x21d17bc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021d18b4 + 0x21d17d0),param_1,param_2,0);
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
  uVar4 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021d18b8 + 0x21d18a0));
  return uVar4;
}



// ===== FAT.Merge.MBItemView$$OnDrawGizmos RVA 0x22920b0 =====

void FUN_022a20b0(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb53c);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb53c);
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



// ===== FAT.Merge.MBItemView$$GetResHolder RVA 0x22920f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022a20f4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5f80);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = FUN_01e13720(iVar1,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x5f82,0);
    if (iVar1 == 0) {
      return *(undefined4 *)(param_1 + 0x14);
    }
    iVar1 = func_0x0229f13c(0x5f82,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5f80);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar4 = (char *)(_UNK_022398c8 + 0x22397e8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022398cc + 0x22397fc),param_1,0);
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
  uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022398d0 + 0x22398b8));
  return uVar5;
}



// ===== FAT.Merge.MBItemView$$TweenSetAlpha RVA 0x2292174 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a2174(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
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
  
  iVar2 = func_0x0229f06c(0x8181);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x14);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_01e16214 + 0x1e16158);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e16218 + 0x1e1616c),param_2,0);
      *pcVar5 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x8182,0);
    if (iVar2 == 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x2c);
      if (*(int *)(**(int **)(_UNK_01e1621c + 0x1e161c8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0244fb8c(uVar7,0,0);
      if (iVar2 != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x34) < 1) {
        return;
      }
      iVar2 = func_0x0229f06c(0x167f,0);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x44) = param_2;
        uStack_38 = param_2;
        if (*(int *)(param_1 + 0x38) == 1) {
          iVar2 = *(int *)(param_1 + 0x10);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x0267b6ac(&uStack_30,iVar2,0);
          uVar1 = uStack_28;
          uVar3 = uStack_2c;
          uVar7 = uStack_30;
          iVar2 = *(int *)(param_1 + 0x10);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uStack_34 = 0;
          func_0x0267b750(iVar2,uVar7,uVar3,uVar1);
          iVar2 = *(int *)(param_1 + 0x14);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x0267b6ac(&uStack_30,iVar2,0);
          iVar2 = *(int *)(param_1 + 0x14);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uStack_34 = 0;
          uStack_38 = param_2;
          func_0x0267b750(iVar2,uStack_30,uStack_2c,uStack_28);
        }
        else if (*(int *)(param_1 + 0x38) == 2) {
          param_1 = *(int *)(param_1 + 0x20);
          if (param_1 == 0) {
            func_0x01384bf0();
          }
          pcVar5 = (char *)(_UNK_01e16350 + 0x1e1623c);
          if (*pcVar5 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01e16354 + 0x1e16250));
            *pcVar5 = '\x01';
          }
          iVar2 = func_0x0229f06c(0x1681,0);
          if (iVar2 == 0) {
            uVar7 = *(undefined4 *)(param_1 + 0x28);
            if (*(int *)(**(int **)(_UNK_01e16358 + 0x1e162b0) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar2 = func_0x0145b1cc(uVar7,0,0);
            if (iVar2 != 0) {
              piVar6 = *(int **)(param_1 + 0x28);
              if (piVar6 == (int *)0x0) {
                func_0x01384bf0();
              }
              (**(code **)(*piVar6 + 0x170))(&uStack_30,piVar6,*(undefined4 *)(*piVar6 + 0x174));
              piVar6 = *(int **)(param_1 + 0x28);
              if (piVar6 == (int *)0x0) {
                func_0x01384bf0();
              }
              uStack_34 = *(undefined4 *)(*piVar6 + 0x17c);
              (**(code **)(*piVar6 + 0x178))(piVar6,uStack_30,uStack_2c,uStack_28);
            }
            return;
          }
          iVar2 = func_0x0229f13c(0x1681,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          goto SUB_0218670c;
        }
        return;
      }
      iVar2 = func_0x0229f13c(0x167f,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x8182,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x8181);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
SUB_0218670c:
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
  func_0x01485258(&uStack_38,param_2,0);
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



// ===== FAT.Merge.MBItemView$$GetCurIconAlpha RVA 0x22921e4 =====

undefined4 FUN_022a21e4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x817f);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x817f);
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
    uVar4 = func_0x024549ac(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x44);
}



// ===== FAT.Merge.MBItemView$$.ctor RVA 0x2292240 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a2240(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_022a22b8 + 0x22a2254);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a22bc + 0x22a2268));
    func_0x01384978(*(undefined4 *)(_UNK_022a22c0 + 0x22a2274));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_022a22c4 + 0x22a2288));
  func_0x03dce810(uVar1,**(undefined4 **)(_UNK_022a22c8 + 0x22a229c));
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}


