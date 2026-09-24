/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardLvArea$$GetCloudViewPrefab RVA 0x1de4194 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01df4194(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9f3e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f3e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021a98a4 + 0x21a97c4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021a98a8 + 0x21a97d8),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021a98ac + 0x21a9894));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x24);
}



// ===== FAT.MBBoardLvArea$$SetPoolKeyItem RVA 0x1de41e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df41e8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01df4270 + 0x1df41fc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df4274 + 0x1df4210));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f3f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f3f,0);
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
  *(undefined4 *)(param_1 + 0x20) = **(undefined4 **)(_UNK_01df4278 + 0x1df4268);
  return;
}



// ===== FAT.MBBoardLvArea$$_OnSetUp RVA 0x1de427c =====

void FUN_01df427c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x9f40,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f40,0);
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
  func_0x01df42f8(param_1);
  func_0x01df4404(&uStack_18,param_1);
  (*(code *)&UNK_04f70834)(uStack_18,uStack_14,0);
  return;
}



// ===== FAT.MBBoardLvArea$$_PrepareTrailPool RVA 0x1de42f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df42f8(int param_1)

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
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01df43f0 + 0x1df430c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df43f4 + 0x1df4320));
    func_0x01384978(*(undefined4 *)(_UNK_01df43f8 + 0x1df432c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f41,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f41,0);
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
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  if (*(int *)(**(int **)(_UNK_01df43fc + 0x1df4384) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0244fb8c(uVar5,0,0);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01df4400 + 0x1df43bc));
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0229f06c(0x3fa,0,uVar2,0);
  if (iVar4 == 0) {
    func_0x024487c8(&uStack_20);
    uStack_30 = uStack_1c;
    uStack_2c = 0;
    func_0x0244af00(iVar1,uVar5,uVar2,uStack_20);
  }
  else {
    iVar4 = func_0x0229f13c(0x3fa,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = 0;
    func_0x02174858(iVar4,iVar1,uVar5,uVar2);
  }
  return;
}



// ===== FAT.MBBoardLvArea$$_CoInitOnPreOpen RVA 0x1de4404 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df4404(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_01df4504 + 0x1df4420);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df4508 + 0x1df4434));
    *pcVar2 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  uStack_30 = 0;
  uStack_1c = 0;
  iVar1 = func_0x0229f06c(0x9f42,0);
  if (iVar1 == 0) {
    uStack_30 = 0xffffffff;
    uStack_28 = 0;
    uStack_2c = 0;
    uStack_24 = param_2;
    if (*(int *)(**(int **)(_UNK_01df450c + 0x1df44b4) + 0x1c) == 0) {
      func_0x0140024c();
    }
    func_0x01df6ab8(&uStack_30);
    func_0x019dd7dc(&uStack_38,(uint)&uStack_30 | 4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x9f42,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021b19e0(&uStack_38,iVar1,param_2,0);
  }
  *param_1 = uStack_38;
  param_1[1] = uStack_34;
  return;
}



// ===== FAT.MBBoardLvArea$$_PrepareGrid RVA 0x1de4510 =====

void FUN_01df4510(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x9f50,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x9f50,0);
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



// ===== FAT.MBBoardLvArea$$_ReleaseGrid RVA 0x1de455c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df455c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_01df48a0 + 0x1df4574);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df48a4 + 0x1df4588));
    func_0x01384978(*(undefined4 *)(_UNK_01df48a8 + 0x1df4594));
    func_0x01384978(*(undefined4 *)(_UNK_01df48ac + 0x1df45a0));
    func_0x01384978(*(undefined4 *)(_UNK_01df48b0 + 0x1df45ac));
    func_0x01384978(*(undefined4 *)(_UNK_01df48b4 + 0x1df45b8));
    func_0x01384978(*(undefined4 *)(_UNK_01df48b8 + 0x1df45c4));
    func_0x01384978(*(undefined4 *)(_UNK_01df48bc + 0x1df45d0));
    func_0x01384978(*(undefined4 *)(_UNK_01df48c0 + 0x1df45dc));
    func_0x01384978(*(undefined4 *)(_UNK_01df48c4 + 0x1df45e8));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x9f51,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      func_0x02450390(*(int *)(param_1 + 0x44),0);
      iVar1 = *(int *)(param_1 + 0x44);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0145b098(iVar1,0);
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar3) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
    }
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d6464c(iVar1,**(undefined4 **)(_UNK_01df48c8 + 0x1df46d4));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450fd8(&uStack_48,iVar1,**(undefined4 **)(_UNK_01df48cc + 0x1df4700));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    puVar6 = *(undefined4 **)(_UNK_01df48d0 + 0x1df471c);
    puVar7 = *(undefined4 **)(_UNK_01df48d4 + 0x1df4724);
    puVar8 = *(undefined4 **)(_UNK_01df48d8 + 0x1df472c);
    while (iVar1 = func_0x014758d8(&uStack_38,*puVar6), uVar5 = uStack_2c, iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03d6488c(iVar1,uVar5,*puVar7);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01df48ec(iVar1);
      iVar3 = func_0x034aaa34(*puVar8);
      uVar5 = *(undefined4 *)(param_1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x0244ffd4(iVar1,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0244adcc(iVar3,uVar5,uVar2,0);
    }
    func_0x02450fdc(&uStack_38,**(undefined4 **)(_UNK_01df48dc + 0x1df47d4));
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d64b20(iVar1,**(undefined4 **)(_UNK_01df48e4 + 0x1df47f8));
  }
  else {
    iVar1 = func_0x0229f13c(0x9f51,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardLvArea$$Execute RVA 0x1de49f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df49f4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
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
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0x9f54,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f54,0);
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
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    uStack_58 = 0;
    iStack_54 = 0;
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar4);
    return;
  }
  *(undefined4 *)(param_1 + 0x48) = param_2;
  pcVar5 = (char *)(_UNK_01df4fe4 + 0x1df4a70);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df4fe8 + 0x1df4a84));
    func_0x01384978(*(undefined4 *)(_UNK_01df4fec + 0x1df4a90));
    func_0x01384978(*(undefined4 *)(_UNK_01df4ff0 + 0x1df4a9c));
    func_0x01384978(*(undefined4 *)(_UNK_01df4ff4 + 0x1df4aa8));
    func_0x01384978(*(undefined4 *)(_UNK_01df4ff8 + 0x1df4ab4));
    func_0x01384978(*(undefined4 *)(_UNK_01df4ffc + 0x1df4ac0));
    func_0x01384978(*(undefined4 *)(_UNK_01df5000 + 0x1df4acc));
    func_0x01384978(*(undefined4 *)(_UNK_01df5004 + 0x1df4ad8));
    func_0x01384978(*(undefined4 *)(_UNK_01df5008 + 0x1df4ae4));
    func_0x01384978(*(undefined4 *)(_UNK_01df500c + 0x1df4af0));
    func_0x01384978(*(undefined4 *)(_UNK_01df5010 + 0x1df4afc));
    func_0x01384978(*(undefined4 *)(_UNK_01df5014 + 0x1df4b08));
    func_0x01384978(*(undefined4 *)(_UNK_01df5018 + 0x1df4b14));
    func_0x01384978(*(undefined4 *)(_UNK_01df501c + 0x1df4b20));
    func_0x01384978(*(undefined4 *)(_UNK_01df5020 + 0x1df4b2c));
    func_0x01384978(*(undefined4 *)(_UNK_01df5024 + 0x1df4b38));
    func_0x01384978(*(undefined4 *)(_UNK_01df5028 + 0x1df4b44));
    *pcVar5 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  iStack_2c = uStack_44;
  iVar1 = func_0x0229f06c(0x9f55,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01df502c + 0x1df4bbc));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar1 + 0x14) = param_1;
    iVar8 = func_0x01c24918(0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar8 + 0x48);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x01dd2c04(iVar8,0);
    uVar10 = func_0x01384be4(**(undefined4 **)(_UNK_01df5030 + 0x1df4c28));
    func_0x02452488(uVar10,**(undefined4 **)(_UNK_01df5034 + 0x1df4c3c));
    iVar6 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = uVar10;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_60,iVar6,**(undefined4 **)(_UNK_01df5038 + 0x1df4c78));
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_30 = uStack_58;
    iStack_2c = iStack_54;
    while (iVar2 = func_0x0145b12c(&uStack_38,**(undefined4 **)(_UNK_01df5044 + 0x1df4c98)),
          iVar6 = iStack_2c, iVar2 != 0) {
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      if ((*(int *)(iVar6 + 0xc) <= iVar8) &&
         (iVar2 = func_0x01df5b80(param_1,*(undefined4 *)(iVar6 + 0x18),&uStack_3c), iVar2 != 0)) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar1 + 0x10);
        uStack_5c = 0;
        uStack_60 = 0;
        func_0x039086bc(&uStack_60,uStack_3c,*(undefined4 *)(iVar6 + 0x18),
                        **(undefined4 **)(_UNK_01df503c + 0x1df4d00));
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar4 = uStack_5c;
        uVar10 = uStack_60;
        iVar6 = *(int *)(iVar2 + 8);
        uVar13 = *(uint *)(iVar2 + 0xc);
        piVar3 = *(int **)(_UNK_01df5040 + 0x1df4d48);
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
        iVar7 = *piVar3;
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        if (uVar13 < *(uint *)(iVar6 + 0xc)) {
          *(uint *)(iVar2 + 0xc) = uVar13 + 1;
          iVar6 = iVar6 + uVar13 * 8;
          *(undefined4 *)(iVar6 + 0x10) = uVar10;
          *(undefined4 *)(iVar6 + 0x14) = uVar4;
        }
        else {
          func_0x0245248c(iVar2,uVar10,uVar4,
                          *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
        }
      }
    }
    func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01df5048 + 0x1df4da0));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar8 + 0xc);
    *(int *)(iVar1 + 0xc) = iVar8;
    if (iVar8 < 1) {
      func_0x01df61f4(param_1);
    }
    else {
      iVar8 = func_0x034aaa34(**(undefined4 **)(_UNK_01df5050 + 0x1df4de0));
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee9374(iVar8,1,0);
      iVar8 = *(int *)(iVar1 + 0x10);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x02452490(&uStack_50,iVar8,**(undefined4 **)(_UNK_01df5054 + 0x1df4e28));
      puVar9 = *(undefined4 **)(_UNK_01df5058 + 0x1df4e3c);
      puVar11 = *(undefined4 **)(_UNK_01df505c + 0x1df4e44);
      puVar12 = *(undefined4 **)(_UNK_01df5060 + 0x1df4e4c);
      while (iVar8 = func_0x0146ec08(&uStack_50,*puVar9), uVar10 = uStack_44, iVar8 != 0) {
        iVar8 = *(int *)(iVar1 + 0x18);
        if (iVar8 == 0) {
          iVar8 = func_0x01384be4(*puVar11);
          func_0x024500b4(iVar8,iVar1,*puVar12,0);
          *(int *)(iVar1 + 0x18) = iVar8;
        }
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        func_0x01df5c50(param_1,uVar10,iVar8);
      }
      func_0x02452494(&uStack_50,**(undefined4 **)(_UNK_01df5068 + 0x1df4ebc));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9f55,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardLvArea$$_CheckAndPlayUnlockAnimations RVA 0x1de4a58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df4a58(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
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
  
  pcVar7 = (char *)(_UNK_01df4fe4 + 0x1df4a70);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df4fe8 + 0x1df4a84));
    func_0x01384978(*(undefined4 *)(_UNK_01df4fec + 0x1df4a90));
    func_0x01384978(*(undefined4 *)(_UNK_01df4ff0 + 0x1df4a9c));
    func_0x01384978(*(undefined4 *)(_UNK_01df4ff4 + 0x1df4aa8));
    func_0x01384978(*(undefined4 *)(_UNK_01df4ff8 + 0x1df4ab4));
    func_0x01384978(*(undefined4 *)(_UNK_01df4ffc + 0x1df4ac0));
    func_0x01384978(*(undefined4 *)(_UNK_01df5000 + 0x1df4acc));
    func_0x01384978(*(undefined4 *)(_UNK_01df5004 + 0x1df4ad8));
    func_0x01384978(*(undefined4 *)(_UNK_01df5008 + 0x1df4ae4));
    func_0x01384978(*(undefined4 *)(_UNK_01df500c + 0x1df4af0));
    func_0x01384978(*(undefined4 *)(_UNK_01df5010 + 0x1df4afc));
    func_0x01384978(*(undefined4 *)(_UNK_01df5014 + 0x1df4b08));
    func_0x01384978(*(undefined4 *)(_UNK_01df5018 + 0x1df4b14));
    func_0x01384978(*(undefined4 *)(_UNK_01df501c + 0x1df4b20));
    func_0x01384978(*(undefined4 *)(_UNK_01df5020 + 0x1df4b2c));
    func_0x01384978(*(undefined4 *)(_UNK_01df5024 + 0x1df4b38));
    func_0x01384978(*(undefined4 *)(_UNK_01df5028 + 0x1df4b44));
    *pcVar7 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  iStack_2c = uStack_44;
  iVar2 = func_0x0229f06c(0x9f55,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01df502c + 0x1df4bbc));
    func_0x0244f5a0(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar2 + 0x14) = param_1;
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x48);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x01dd2c04(iVar3,0);
    uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01df5030 + 0x1df4c28));
    func_0x02452488(uVar4,**(undefined4 **)(_UNK_01df5034 + 0x1df4c3c));
    iVar8 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = uVar4;
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_60,iVar8,**(undefined4 **)(_UNK_01df5038 + 0x1df4c78));
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_30 = uStack_58;
    iStack_2c = iStack_54;
    while (iVar5 = func_0x0145b12c(&uStack_38,**(undefined4 **)(_UNK_01df5044 + 0x1df4c98)),
          iVar8 = iStack_2c, iVar5 != 0) {
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      if ((*(int *)(iVar8 + 0xc) <= iVar3) &&
         (iVar5 = func_0x01df5b80(param_1,*(undefined4 *)(iVar8 + 0x18),&uStack_3c), iVar5 != 0)) {
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar2 + 0x10);
        uStack_5c = 0;
        uStack_60 = 0;
        func_0x039086bc(&uStack_60,uStack_3c,*(undefined4 *)(iVar8 + 0x18),
                        **(undefined4 **)(_UNK_01df503c + 0x1df4d00));
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar1 = uStack_5c;
        uVar4 = uStack_60;
        iVar8 = *(int *)(iVar5 + 8);
        uVar13 = *(uint *)(iVar5 + 0xc);
        piVar6 = *(int **)(_UNK_01df5040 + 0x1df4d48);
        *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
        iVar9 = *piVar6;
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if (uVar13 < *(uint *)(iVar8 + 0xc)) {
          *(uint *)(iVar5 + 0xc) = uVar13 + 1;
          iVar8 = iVar8 + uVar13 * 8;
          *(undefined4 *)(iVar8 + 0x10) = uVar4;
          *(undefined4 *)(iVar8 + 0x14) = uVar1;
        }
        else {
          func_0x0245248c(iVar5,uVar4,uVar1,
                          *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
        }
      }
    }
    func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01df5048 + 0x1df4da0));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar2 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0xc);
    *(int *)(iVar2 + 0xc) = iVar3;
    if (iVar3 < 1) {
      func_0x01df61f4(param_1);
    }
    else {
      iVar3 = func_0x034aaa34(**(undefined4 **)(_UNK_01df5050 + 0x1df4de0));
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee9374(iVar3,1,0);
      iVar3 = *(int *)(iVar2 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x02452490(&uStack_50,iVar3,**(undefined4 **)(_UNK_01df5054 + 0x1df4e28));
      puVar10 = *(undefined4 **)(_UNK_01df5058 + 0x1df4e3c);
      puVar11 = *(undefined4 **)(_UNK_01df505c + 0x1df4e44);
      puVar12 = *(undefined4 **)(_UNK_01df5060 + 0x1df4e4c);
      while (iVar3 = func_0x0146ec08(&uStack_50,*puVar10), uVar4 = uStack_44, iVar3 != 0) {
        iVar3 = *(int *)(iVar2 + 0x18);
        if (iVar3 == 0) {
          iVar3 = func_0x01384be4(*puVar11);
          func_0x024500b4(iVar3,iVar2,*puVar12,0);
          *(int *)(iVar2 + 0x18) = iVar3;
        }
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        func_0x01df5c50(param_1,uVar4,iVar3);
      }
      func_0x02452494(&uStack_50,**(undefined4 **)(_UNK_01df5068 + 0x1df4ebc));
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x9f55,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardLvArea$$_PrepareGrids RVA 0x1de5074 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df5074(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  uint in_fpscr;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01df5808 + 0x1df5094);
  uStack_28 = param_2;
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df580c + 0x1df50a8));
    func_0x01384978(*(undefined4 *)(_UNK_01df5810 + 0x1df50b4));
    func_0x01384978(*(undefined4 *)(_UNK_01df5814 + 0x1df50c0));
    func_0x01384978(*(undefined4 *)(_UNK_01df5818 + 0x1df50cc));
    func_0x01384978(*(undefined4 *)(_UNK_01df581c + 0x1df50d8));
    func_0x01384978(*(undefined4 *)(_UNK_01df5820 + 0x1df50e4));
    func_0x01384978(*(undefined4 *)(_UNK_01df5824 + 0x1df50f0));
    func_0x01384978(*(undefined4 *)(_UNK_01df5828 + 0x1df50fc));
    func_0x01384978(*(undefined4 *)(_UNK_01df582c + 0x1df5108));
    func_0x01384978(*(undefined4 *)(_UNK_01df5830 + 0x1df5114));
    func_0x01384978(*(undefined4 *)(_UNK_01df5834 + 0x1df5120));
    func_0x01384978(*(undefined4 *)(_UNK_01df5838 + 0x1df512c));
    func_0x01384978(*(undefined4 *)(_UNK_01df583c + 0x1df5138));
    func_0x01384978(*(undefined4 *)(_UNK_01df5840 + 0x1df5144));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_3c = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x9f44,0);
  if (iVar1 == 0) {
    piVar10 = *(int **)(_UNK_01df5844 + 0x1df51b4);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar8 = (char *)(_UNK_01df5848 + 0x1df51d0);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df584c + 0x1df51e4));
      *pcVar8 = '\x01';
    }
    iVar1 = *piVar10;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar10;
    }
    iVar9 = *(int *)(param_1 + 0x1c);
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar9 + 0xc) == 0) {
      FUN_01df3b58(param_1);
    }
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_50,iVar1,**(undefined4 **)(_UNK_01df5850 + 0x1df5258));
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = iStack_44;
    puVar12 = *(undefined4 **)(_UNK_01df5854 + 0x1df527c);
    piVar10 = *(int **)(_UNK_01df5858 + 0x1df5284);
    while (iVar9 = func_0x0145b12c(&uStack_38,*puVar12), iVar1 = iStack_2c, iVar9 != 0) {
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar9 = func_0x0245032c(&uStack_28,0);
      if (iVar9 != 0) break;
      iVar9 = func_0x01c24918(0);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar11 = *(undefined4 *)(iVar1 + 0x18);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01ca7b80(iVar9,uVar11,0);
      if ((iVar1 != 0) && (iVar9 = func_0x01489db8(*(undefined4 *)(iVar1 + 0x1c),0), iVar9 == 0)) {
        uVar11 = *(undefined4 *)(iVar1 + 0x1c);
        if (*(int *)(**(int **)(_UNK_01df585c + 0x1df5338) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar9 = func_0x025665a8(uVar11,0);
        iVar3 = *(int *)(iVar1 + 0x14);
        if (iVar3 != 0) {
          if (*(int *)(**(int **)(_UNK_01df5860 + 0x1df5380) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar3 = func_0x025550ec(iVar3,0);
          if (iVar3 != 0) {
            iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_01df5864 + 0x1df53b8));
            uVar13 = *(undefined4 *)(param_1 + 0x20);
            uVar11 = func_0x0244fc34(param_1,0);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            iVar4 = func_0x0244a45c(iVar4,uVar13,uVar11,0);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            func_0x0244ffe4(iVar4,1,0);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            iVar5 = func_0x02fe27b8(iVar4,**(undefined4 **)(_UNK_01df5868 + 0x1df542c));
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            piVar6 = (int *)func_0x024504c0(iVar4,0);
            if (piVar6 == (int *)0x0) {
              piVar6 = (int *)0x0;
            }
            else if (*piVar6 != **(int **)(_UNK_01df586c + 0x1df5468)) {
              piVar6 = (int *)0x0;
            }
            if (*(int *)(**(int **)(_UNK_01df5870 + 0x1df548c) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar7 = func_0x0244fb8c(piVar6,0,0);
            if (iVar7 == 0) {
              if (iVar9 == 0) {
                func_0x01384bf0();
              }
              uVar13 = *(undefined4 *)(iVar9 + 8);
              uVar11 = *(undefined4 *)(iVar9 + 0xc);
              if (*(int *)(**(int **)(_UNK_01df587c + 0x1df5510) + 0x74) == 0) {
                func_0x01384ab4();
              }
              uVar13 = VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
              uVar11 = VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x16) & 3);
              func_0x01dd91fc(&uStack_50,uVar13,uVar11,0);
              uVar13 = uStack_4c;
              uVar11 = uStack_50;
              if (piVar6 == (int *)0x0) {
                func_0x01384bf0();
              }
              func_0x0244fdbc(piVar6,uVar11,uVar13,0);
              if (piVar6 == (int *)0x0) {
                func_0x01384bf0();
              }
              func_0x0244fe5c(piVar6,uVar2,uVar2,0);
              func_0x01df5890(&uStack_50,param_1,iVar3,iVar5,uStack_28);
              uVar13 = uStack_4c;
              uVar11 = uStack_50;
              iVar9 = *(int *)(param_1 + 0x40);
              if (iVar9 == 0) {
                func_0x01384bf0();
              }
              iVar3 = *(int *)(iVar9 + 8);
              uVar14 = *(uint *)(iVar9 + 0xc);
              piVar6 = *(int **)(_UNK_01df5880 + 0x1df55f4);
              *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
              iVar4 = *piVar6;
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              if (uVar14 < *(uint *)(iVar3 + 0xc)) {
                *(uint *)(iVar9 + 0xc) = uVar14 + 1;
                iVar3 = iVar3 + uVar14 * 8;
                *(undefined4 *)(iVar3 + 0x10) = uVar11;
                *(undefined4 *)(iVar3 + 0x14) = uVar13;
              }
              else {
                func_0x032f8384(iVar9,uVar11,uVar13,
                                *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
              }
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              func_0x01df59c0(iVar5,iVar1);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              iVar3 = func_0x01df5a1c(iVar5,&iStack_3c);
              iVar9 = iStack_3c;
              if (iVar3 != 0) {
                if (iStack_3c == 0) {
                  func_0x01384bf0();
                }
                func_0x01df5b14(iVar9,iVar5);
              }
              uVar11 = *(undefined4 *)(iVar1 + 0xc);
              iVar1 = *(int *)(param_1 + 0x3c);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              func_0x03d64944(iVar1,uVar11,iVar5,**(undefined4 **)(_UNK_01df5884 + 0x1df56cc));
            }
            else {
              iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01df5874 + 0x1df54c0));
              uVar11 = *(undefined4 *)(param_1 + 0x20);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              func_0x0244adcc(iVar1,uVar11,iVar4,0);
            }
          }
        }
      }
    }
    func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01df5878 + 0x1df56ec));
  }
  else {
    iVar1 = func_0x0229f13c(0x9f44,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0228aaac(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBBoardLvArea$$_LoadCoverPrefab RVA 0x1de5890 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df5890(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
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
  
  pcVar2 = (char *)(_UNK_01df59b4 + 0x1df58b0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df59b8 + 0x1df58c8));
    *pcVar2 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_28 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  iVar1 = func_0x0229f06c(0x9f45,0);
  if (iVar1 == 0) {
    uStack_48 = 0xffffffff;
    uStack_40 = 0;
    uStack_44 = 0;
    uStack_38 = param_5;
    uStack_3c = param_3;
    uStack_30 = param_4;
    if (*(int *)(**(int **)(_UNK_01df59bc + 0x1df5958) + 0x1c) == 0) {
      func_0x0140024c();
    }
    func_0x01df7294(&uStack_48);
    func_0x019dd7dc(&uStack_50,(uint)&uStack_48 | 4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x9f45,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0221c5fc(&uStack_50,iVar1,param_2,param_3,param_4,param_5,0);
  }
  *param_1 = uStack_50;
  param_1[1] = uStack_4c;
  return;
}



// ===== FAT.MBBoardLvArea.<>c__DisplayClass19_0$$.ctor RVA 0x1de5b78 =====

void FUN_01df5b78(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardLvArea$$TryGetHolder RVA 0x1de5b80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01df5b80(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar4;
  undefined4 unaff_lr;
  
  pcVar4 = (char *)(_UNK_01df5c44 + 0x1df5ba0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df5c48 + 0x1df5bb4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f5a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f5a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0228abc8(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03d65140(iVar1,param_2,
                          *(undefined4 *)
                           (*(int *)(*(int *)(**(int **)(_UNK_01df5c4c + 0x1df5c34) + 0x10) + 0x60)
                           + 0x84),**(int **)(_UNK_01df5c4c + 0x1df5c34),unaff_r4,unaff_r5,unaff_r6,
                          unaff_lr);
  if ((int)uVar2 < 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x02457d50();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar2) {
      func_0x02457d5c();
    }
    uVar3 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
  }
  *param_3 = uVar3;
  return ~uVar2 >> 0x1f;
}



// ===== FAT.MBBoardLvArea$$_PlayUnlockWithTrail RVA 0x1de5c50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df5c50(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01df6190 + 0x1df5c70);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df6194 + 0x1df5c84));
    func_0x01384978(*(undefined4 *)(_UNK_01df6198 + 0x1df5c90));
    func_0x01384978(*(undefined4 *)(_UNK_01df619c + 0x1df5c9c));
    func_0x01384978(*(undefined4 *)(_UNK_01df61a0 + 0x1df5ca8));
    func_0x01384978(*(undefined4 *)(_UNK_01df61a4 + 0x1df5cb4));
    func_0x01384978(*(undefined4 *)(_UNK_01df61a8 + 0x1df5cc0));
    func_0x01384978(*(undefined4 *)(_UNK_01df61ac + 0x1df5ccc));
    func_0x01384978(*(undefined4 *)(_UNK_01df61b0 + 0x1df5cd8));
    func_0x01384978(*(undefined4 *)(_UNK_01df61b4 + 0x1df5ce4));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar4 = func_0x0229f06c(0x9f5b,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x9f5b,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar4,param_1,param_2,param_3,0);
    return;
  }
  iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01df61b8 + 0x1df5d50));
  func_0x0244f5a0(iVar4,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  piVar10 = *(int **)(_UNK_01df61bc + 0x1df5d78);
  *(int *)(iVar4 + 0x10) = param_1;
  uVar9 = *(undefined4 *)(param_1 + 0x28);
  iVar5 = *piVar10;
  *(undefined4 *)(iVar4 + 0xc) = param_3;
  iVar5 = *(int *)(iVar5 + 0x74);
  *(undefined4 *)(iVar4 + 8) = param_2;
  if (iVar5 == 0) {
    func_0x01384ab4();
  }
  iVar5 = func_0x0244fb8c(uVar9,0,0);
  if (iVar5 == 0) {
    uVar9 = *(undefined4 *)(iVar4 + 8);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar5 = func_0x0244fb8c(uVar9,0,0);
    if (iVar5 == 0) {
      iVar5 = *(int *)(iVar4 + 8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x01df5a1c(iVar5,&iStack_28);
      iVar5 = iStack_28;
      if (iVar6 != 0) {
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        uVar9 = *(undefined4 *)(iVar5 + 0x10);
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar5 = func_0x0244fb8c(uVar9,0,0);
        if (iVar5 == 0) {
          if (*(int *)(**(int **)(_UNK_01df61c0 + 0x1df5e6c) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x0204f2f0(&fStack_34,5,0);
          fVar3 = fStack_2c;
          fVar2 = fStack_30;
          fVar1 = fStack_34;
          pcVar8 = (char *)(_UNK_01df61c4 + 0x1df5e9c);
          if (*pcVar8 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01df61c8 + 0x1df5eb4));
            *pcVar8 = '\x01';
          }
          iVar5 = iStack_28;
          pfVar7 = *(float **)(**(int **)(_UNK_01df61cc + 0x1df5ecc) + 0x5c);
          fVar13 = fVar2 - pfVar7[1];
          fVar14 = fVar1 - *pfVar7;
          fVar15 = fVar3 - pfVar7[2];
          if (_UNK_01df618c <= fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15) {
            if (iStack_28 == 0) {
              func_0x01384bf0();
            }
            iVar5 = *(int *)(iVar5 + 0x10);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            iVar5 = func_0x02450c0c(iVar5,0);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x0244fd3c(&fStack_34,iVar5,0);
            iVar5 = func_0x034aaa34(**(undefined4 **)(_UNK_01df61d0 + 0x1df5f9c));
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            uVar9 = func_0x01ee906c(iVar5,9,0);
            iVar5 = func_0x034aaa34(**(undefined4 **)(_UNK_01df61d4 + 0x1df5fd0));
            uVar12 = *(undefined4 *)(param_1 + 0x38);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            iVar5 = func_0x0244a45c(iVar5,uVar12,uVar9,0);
            *(int *)(iVar4 + 0x14) = iVar5;
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x0244ffe4(iVar5,1,0);
            iVar5 = *(int *)(iVar4 + 0x14);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            iVar5 = func_0x024504c0(iVar5,0);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x024503d4(iVar5,fVar1,fVar2,fVar3,0);
            iVar5 = *(int *)(iVar4 + 0x14);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            iVar5 = func_0x024504c0(iVar5,0);
            pcVar8 = (char *)(_UNK_01df61d8 + 0x1df6094);
            if (*pcVar8 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01df61dc + 0x1df60a8));
              *pcVar8 = '\x01';
            }
            iVar6 = *(int *)(**(int **)(_UNK_01df61e0 + 0x1df60c0) + 0x5c);
            uVar9 = *(undefined4 *)(iVar6 + 0xc);
            uVar12 = *(undefined4 *)(iVar6 + 0x10);
            uVar11 = *(undefined4 *)(iVar6 + 0x14);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x024503a4(iVar5,uVar9,uVar12,uVar11,0);
            iVar5 = *(int *)(iVar4 + 0x14);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            uVar9 = func_0x024504c0(iVar5,0);
            uVar9 = func_0x02cf24e8(uVar9,fStack_34,fStack_30,fStack_2c,
                                    *(undefined4 *)(param_1 + 0x2c),0,0);
            uVar9 = func_0x0309f01c(uVar9,*(undefined4 *)(param_1 + 0x34),
                                    **(undefined4 **)(_UNK_01df61e4 + 0x1df6138));
            uVar12 = func_0x01384be4(**(undefined4 **)(_UNK_01df61e8 + 0x1df614c));
            func_0x02ce3d80(uVar12,iVar4,**(undefined4 **)(_UNK_01df61ec + 0x1df6168),0);
            func_0x0309ead4(uVar9,uVar12,**(undefined4 **)(_UNK_01df61f0 + 0x1df6180));
            return;
          }
          iVar5 = *(int *)(iVar4 + 8);
          uVar9 = *(undefined4 *)(iVar4 + 0xc);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          goto LAB_01df5e54;
        }
      }
    }
  }
  iVar5 = *(int *)(iVar4 + 8);
  if (iVar5 == 0) {
    return;
  }
  uVar9 = *(undefined4 *)(iVar4 + 0xc);
LAB_01df5e54:
  func_0x01df6270(iVar5,uVar9);
  return;
}



// ===== FAT.MBBoardLvArea$$OnExecuteComplete RVA 0x1de61f4 =====

void FUN_01df61f4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9f59,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f59,0);
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
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}



// ===== FAT.MBBoardLvArea.<>c__DisplayClass21_0$$.ctor RVA 0x1de6268 =====

void FUN_01df6268(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardLvArea$$_ReleaseHolder RVA 0x1de638c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df638c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_01df6500 + 0x1df63a8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df6504 + 0x1df63bc));
    func_0x01384978(*(undefined4 *)(_UNK_01df6508 + 0x1df63c8));
    func_0x01384978(*(undefined4 *)(_UNK_01df650c + 0x1df63d4));
    *pcVar4 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x9f58,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03d66780(iVar1,param_2,&iStack_1c,**(undefined4 **)(_UNK_01df6510 + 0x1df6450));
    iVar1 = iStack_1c;
    if (iVar2 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      func_0x01df48ec(iVar1);
      iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01df6514 + 0x1df6484));
      iVar1 = iStack_1c;
      uVar5 = *(undefined4 *)(param_1 + 0x20);
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0244ffd4(iVar1,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0244adcc(iVar2,uVar5,uVar3,0);
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d66094(iVar1,param_2,**(undefined4 **)(_UNK_01df6518 + 0x1df64f0));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9f58,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBBoardLvArea$$.ctor RVA 0x1de651c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df651c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01df6634 + 0x1df6534);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df6638 + 0x1df6548));
    func_0x01384978(*(undefined4 *)(_UNK_01df663c + 0x1df6554));
    func_0x01384978(*(undefined4 *)(_UNK_01df6640 + 0x1df6560));
    func_0x01384978(*(undefined4 *)(_UNK_01df6644 + 0x1df656c));
    func_0x01384978(*(undefined4 *)(_UNK_01df6648 + 0x1df6578));
    *pcVar4 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x30) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f4ccccd;
  uVar1 = func_0x02452498(0,0,0x3f800000,0x3f800000,0);
  uVar3 = **(undefined4 **)(_UNK_01df664c + 0x1df65c0);
  puVar2 = *(undefined4 **)(_UNK_01df6650 + 0x1df65cc);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03d63eec(uVar1,**(undefined4 **)(_UNK_01df6654 + 0x1df65ec));
  puVar2 = *(undefined4 **)(_UNK_01df6658 + 0x1df6600);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x032f7af8(uVar1,**(undefined4 **)(_UNK_01df665c + 0x1df6618));
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  pcVar4 = (char *)(_UNK_01df4180 + 0x1df411c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df4184 + 0x1df4130));
    func_0x01384978(*(undefined4 *)(_UNK_01df4188 + 0x1df413c));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01df418c + 0x1df4150));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01df4190 + 0x1df4164));
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.MBBoardLvArea$$<>iFixBaseProxy__OnSetUp RVA 0x1de6660 =====

void thunk_FUN_01df3a4c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x9f3d,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x9f3d,0);
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



// ===== FAT.MBBoardLvArea.<>c__DisplayClass18_0$$.ctor RVA 0x1de6664 =====

void FUN_01df6664(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardLvArea.<>c__DisplayClass18_0$$<_LoadCoverPrefab>b__0 RVA 0x1de666c =====

uint FUN_01df666c(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = (**(code **)(*piVar3 + 0xf8))(piVar3,*(undefined4 *)(*piVar3 + 0xfc));
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0(0);
    }
    uVar2 = func_0x029df020(iVar1,0);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}



// ===== FAT.MBBoardLvArea.<>c__DisplayClass19_0$$<_CheckAndPlayUnlockAnimations>b__0 RVA 0x1de66cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df66cc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01df68cc + 0x1df66e4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df68d0 + 0x1df66f8));
    func_0x01384978(*(undefined4 *)(_UNK_01df68d4 + 0x1df6704));
    func_0x01384978(*(undefined4 *)(_UNK_01df68d8 + 0x1df6710));
    func_0x01384978(*(undefined4 *)(_UNK_01df68dc + 0x1df671c));
    func_0x01384978(*(undefined4 *)(_UNK_01df68e0 + 0x1df6728));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar2 = *(int *)(param_1 + 8) + 1;
  uStack_38 = 0;
  *(int *)(param_1 + 8) = iVar2;
  uStack_28 = 0;
  if (*(int *)(param_1 + 0xc) <= iVar2) {
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02452490(&uStack_38,iVar2,**(undefined4 **)(_UNK_01df68e4 + 0x1df6780));
    puVar4 = *(undefined4 **)(_UNK_01df68e8 + 0x1df6798);
    while (iVar2 = func_0x0146ec08(&uStack_38,*puVar4), uVar1 = uStack_28, iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      FUN_01df638c(iVar2,uVar1);
    }
    func_0x02452494(&uStack_38,**(undefined4 **)(_UNK_01df68ec + 0x1df67d8));
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    FUN_01df3b58(iVar2);
    iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01df68f4 + 0x1df6804));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x01ee9374(iVar2,0,0);
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    FUN_01df61f4(iVar2);
  }
  return;
}



// ===== FAT.MBBoardLvArea.<>c__DisplayClass21_0$$<_PlayUnlockWithTrail>b__0 RVA 0x1de68fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df68fc(int param_1)

{
  uint uVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r6;
  undefined4 uVar5;
  float fVar6;
  undefined8 uVar7;
  
  pcVar2 = (char *)(_UNK_01df69cc + 0x1df6914);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df69d0 + 0x1df6928));
    func_0x01384978(*(undefined4 *)(_UNK_01df69d4 + 0x1df6934));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x01df6270(iVar3,uVar5);
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_1 + 0x18);
  fVar6 = *(float *)(iVar3 + 0x30);
  if (iVar4 == 0) {
    iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01df69d8 + 0x1df6988));
    func_0x02ce3d80(iVar4,param_1,**(undefined4 **)(_UNK_01df69dc + 0x1df69a4),0);
    *(int *)(param_1 + 0x18) = iVar4;
  }
  pcVar2 = (char *)(_UNK_02ce9360 + 0x2ce9288);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02ce9364 + 0x2ce929c),iVar4,1,0,unaff_r4,unaff_r5,unaff_r6)
    ;
    func_0x01384978(*(undefined4 *)(_UNK_02ce9368 + 0x2ce92a8));
    func_0x01384978(*(undefined4 *)(_UNK_02ce936c + 0x2ce92b4));
    func_0x01384978(*(undefined4 *)(_UNK_02ce9370 + 0x2ce92c0));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02ce9374 + 0x2ce92d4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar7 = func_0x02ce71fc();
  uVar1 = (uint)((ulonglong)uVar7 >> 0x20);
  iVar3 = (int)uVar7;
  if (iVar3 != 0) {
    uVar1 = (uint)*(byte *)(iVar3 + 0x94);
  }
  if ((iVar3 != 0 && uVar1 != 0) && (*(char *)(iVar3 + 0xa4) == '\0')) {
    *(float *)(iVar3 + 0xcc) = *(float *)(iVar3 + 0x60);
    *(float *)(iVar3 + 0x60) = *(float *)(iVar3 + 0x60) + fVar6;
  }
  uVar5 = func_0x0309eb4c(iVar3,iVar4,**(undefined4 **)(_UNK_02ce9378 + 0x2ce9304));
  iVar3 = func_0x0309f9a8(uVar5,0,1,**(undefined4 **)(_UNK_02ce937c + 0x2ce931c));
  uVar1 = **(uint **)(_UNK_02ce9380 + 0x2ce9330);
  if (iVar3 != 0) {
    uVar1 = (uint)*(byte *)(iVar3 + 0x94);
  }
  if (iVar3 != 0 && uVar1 != 0) {
    if (*(char *)(iVar3 + 0xa4) == '\0') {
      *(undefined1 *)(iVar3 + 0x5c) = 1;
    }
    return;
  }
  return;
}



// ===== FAT.MBBoardLvArea.<>c__DisplayClass21_0$$<_PlayUnlockWithTrail>b__1 RVA 0x1de69e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df69e0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_r4;
  int iVar6;
  undefined4 unaff_r5;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar7 = (char *)(_UNK_01df6aa4 + 0x1df69f4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df6aa8 + 0x1df6a08));
    func_0x01384978(*(undefined4 *)(_UNK_01df6aac + 0x1df6a14));
    *pcVar7 = '\x01';
  }
  uVar8 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(**(int **)(_UNK_01df6ab0 + 0x1df6a28) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0145b1cc(uVar8,0,0);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01df6ab4 + 0x1df6a60));
  iVar9 = *(int *)(param_1 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_1 + 0x14);
  uVar8 = *(undefined4 *)(iVar9 + 0x38);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  iVar9 = func_0x0229f06c(0x398,0,iVar6,0);
  if (iVar9 != 0) {
    iVar9 = func_0x0229f13c(0x398,0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02174858(iVar9,iVar2,uVar8,iVar6);
    return;
  }
  uStack_20 = uStack_14;
  uStack_24 = uStack_18;
  pcVar7 = (char *)(_UNK_0244b9c0 + 0x244b6a0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0244b9c4 + 0x244b6b4));
    func_0x01384978(*(undefined4 *)(_UNK_0244b9c8 + 0x244b6c0));
    func_0x01384978(*(undefined4 *)(_UNK_0244b9cc + 0x244b6cc));
    func_0x01384978(*(undefined4 *)(_UNK_0244b9d0 + 0x244b6d8));
    func_0x01384978(*(undefined4 *)(_UNK_0244b9d4 + 0x244b6e4));
    *pcVar7 = '\x01';
  }
  iStack_28 = 0;
  iVar9 = func_0x0229f06c(0x399,0);
  if (iVar9 == 0) {
    iVar9 = func_0x014898a8(0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02454fb4(iVar9,0);
    func_0x0244d6e4(iVar2,**(undefined4 **)(_UNK_0244b9dc + 0x244b788),uVar8,uVar3,
                    *(int *)(**(int **)(_UNK_0244b9d8 + 0x244b77c) + 0x5c) + 4);
    piVar10 = *(int **)(_UNK_0244b9e0 + 0x244b7a8);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar9 = func_0x0244fb8c(iVar6,0,0);
    if (iVar9 == 0) {
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar9 = func_0x02fe27b8(iVar6,**(undefined4 **)(_UNK_0244b9e4 + 0x244b7e8));
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar4 = func_0x0244fb8c(iVar9,0,0);
      if (iVar4 == 0) {
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x01489db8(*(undefined4 *)(iVar9 + 0x10),0);
        if (iVar4 == 0) {
          iVar4 = *(int *)(iVar2 + 0x14);
          uVar3 = *(undefined4 *)(iVar9 + 0x10);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x03e220bc(iVar4,uVar3,&iStack_28,
                                  **(undefined4 **)(_UNK_0244b9e8 + 0x244b880));
          if (iVar4 != 0) {
            iVar5 = func_0x014855c8(uVar8,*(undefined4 *)(iVar9 + 0x10),4,0);
            iVar4 = iStack_28;
            if (iVar5 == 0) {
              if (iStack_28 == 0) {
                func_0x01384bf0();
              }
              *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
            }
            iVar4 = iStack_28;
            iVar5 = *(int *)(iVar9 + 0x14);
            if (iStack_28 == 0) {
              func_0x01384bf0();
            }
            iVar1 = iStack_28;
            if (iVar5 == *(int *)(iVar4 + 0xc)) {
              if (*(char *)(iVar9 + 0x18) == '\0') {
                if (iStack_28 == 0) {
                  func_0x01384bf0();
                }
                iVar4 = iStack_28;
                if (0 < *(int *)(iVar1 + 0x20)) {
                  if (iStack_28 == 0) {
                    func_0x01384bf0(*(int *)(iVar1 + 0x20),0);
                  }
                  *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + -1;
                  func_0x0244e788(iVar2,iStack_28,iVar6,iVar9);
                  return;
                }
              }
              iVar2 = iStack_28;
              if (iStack_28 == 0) {
                func_0x01384bf0();
              }
              *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
              return;
            }
            if (iStack_28 == 0) {
              func_0x01384bf0(*(int *)(iVar4 + 0xc),0);
            }
            *(int *)(iVar1 + 100) = *(int *)(iVar1 + 100) + 1;
            func_0x0244e63c(iVar2,iStack_28,iVar6);
            return;
          }
          if (*(int *)(*piVar10 + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x01485348(iVar6,0);
          return;
        }
      }
      func_0x0244e540(iVar2,uVar8,iVar6);
    }
  }
  else {
    iVar9 = func_0x0229f13c(0x399,0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar9,iVar2,uVar8,iVar6,0);
  }
  return;
}



// ===== FAT.MBBoardLvArea.<_CoInitOnPreOpen>d__16$$MoveNext RVA 0x1de6ab8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df6ab8(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  int *piStack_30;
  int iStack_2c;
  int *piStack_28;
  int iStack_24;
  
  pcVar7 = (char *)(_UNK_01df7210 + 0x1df6ad0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df7214 + 0x1df6ae4));
    func_0x01384978(*(undefined4 *)(_UNK_01df7218 + 0x1df6af0));
    func_0x01384978(*(undefined4 *)(_UNK_01df721c + 0x1df6afc));
    func_0x01384978(*(undefined4 *)(_UNK_01df7220 + 0x1df6b08));
    *pcVar7 = '\x01';
  }
  iVar8 = param_1[3];
  iStack_24 = 0;
  piStack_28 = (int *)0x0;
  if (*param_1 == 0) {
    piStack_28 = (int *)param_1[4];
    iStack_24 = param_1[5];
    *param_1 = -1;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar8 + 0x44) != 0) {
      func_0x02450390(*(int *)(iVar8 + 0x44),0);
      if (*(int *)(iVar8 + 0x44) != 0) {
        func_0x0145b098(*(int *)(iVar8 + 0x44),0);
      }
    }
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01df7224 + 0x1df6b6c));
    func_0x02450428(iVar2,0);
    *(int *)(iVar8 + 0x44) = iVar2;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0145b078(iVar2,0);
    FUN_01df5074(iVar8,uVar3);
    iVar2 = *(int *)(iVar8 + 0x40);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar2 + 0xc) < 1) goto LAB_01df6df0;
    piVar9 = *(int **)(_UNK_01df7228 + 0x1df6bcc);
    uVar3 = *(undefined4 *)(iVar8 + 0x40);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x024504b0(&piStack_30,uVar3,0);
    iVar2 = iStack_2c;
    piVar6 = piStack_30;
    iVar8 = *(int *)(iVar8 + 0x44);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0145b078(iVar8,0);
    func_0x024500f4(&piStack_30,piVar6,iVar2,uVar3,0);
    pcVar7 = (char *)(_UNK_01df722c + 0x1df6c40);
    iStack_24 = iStack_2c;
    piStack_28 = piStack_30;
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df7230 + 0x1df6c60));
      *pcVar7 = '\x01';
    }
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar7 = (char *)(_UNK_01df7234 + 0x1df6c88);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df7238 + 0x1df6c9c));
      *pcVar7 = '\x01';
    }
    piVar9 = piStack_28;
    if (piStack_28 != (int *)0x0) {
      iVar8 = *piStack_28;
      uVar5 = (uint)*(ushort *)(iVar8 + 0xb6);
      sVar1 = (short)iStack_24;
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_01df723c + 0x1df6cc0)) {
            puVar4 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xc0);
            goto LAB_01df6d30;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piStack_28,**(int **)(_UNK_01df723c + 0x1df6cc0),0);
LAB_01df6d30:
      iVar8 = (*(code *)*puVar4)(piVar9,(int)sVar1,puVar4[1]);
      if (iVar8 == 0) {
        puVar4 = *(undefined4 **)(_UNK_01df724c + 0x1df6eb0);
        param_1[4] = (int)piStack_28;
        param_1[5] = iStack_24;
        uVar3 = *puVar4;
        *param_1 = 0;
        func_0x01e0801c(param_1 + 1,&piStack_28,param_1,uVar3);
        return;
      }
    }
  }
  pcVar7 = (char *)(_UNK_01df7250 + 0x1df6d58);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df7254 + 0x1df6d6c));
    *pcVar7 = '\x01';
  }
  piVar9 = piStack_28;
  if (piStack_28 != (int *)0x0) {
    iVar8 = *piStack_28;
    uVar5 = (uint)*(ushort *)(iVar8 + 0xb6);
    sVar1 = (short)iStack_24;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01df7258 + 0x1df6d90)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xd0);
          goto LAB_01df6ddc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piStack_28,**(int **)(_UNK_01df7258 + 0x1df6d90),2);
LAB_01df6ddc:
    (*(code *)*puVar4)(piVar9,(int)sVar1,puVar4[1]);
  }
LAB_01df6df0:
  iVar8 = _UNK_01df725c;
  *param_1 = -2;
  if (*(char *)(iVar8 + 0x1df6e04) == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df7260 + 0x1df6e18));
    *(char *)(iVar8 + 0x1df6e04) = '\x01';
  }
  piVar9 = (int *)param_1[1];
  if (piVar9 != (int *)0x0) {
    iVar8 = *piVar9;
    uVar5 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01df7264 + 0x1df6e3c)) {
          puVar4 = (undefined4 *)(iVar8 + *piVar6 * 8 + 0xd0);
          goto LAB_01df6e84;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01df7264 + 0x1df6e3c),2);
LAB_01df6e84:
    (*(code *)*puVar4)(piVar9,puVar4[1]);
  }
  return;
}



// ===== FAT.MBBoardLvArea.<_CoInitOnPreOpen>d__16$$SetStateMachine RVA 0x1de7288 =====

void FUN_01df7288(int param_1,undefined4 param_2)

{
  (*(code *)&UNK_04f6eae8)(param_1 + 4,param_2,0);
  return;
}



// ===== FAT.MBBoardLvArea.<_LoadCoverPrefab>d__18$$MoveNext RVA 0x1de7294 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df7294(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piStack_30;
  int iStack_2c;
  int *piStack_28;
  int iStack_24;
  
  pcVar7 = (char *)(_UNK_01df7ce8 + 0x1df72ac);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df7cec + 0x1df72c0));
    func_0x01384978(*(undefined4 *)(_UNK_01df7cf0 + 0x1df72cc));
    func_0x01384978(*(undefined4 *)(_UNK_01df7cf4 + 0x1df72d8));
    func_0x01384978(*(undefined4 *)(_UNK_01df7cf8 + 0x1df72e4));
    func_0x01384978(*(undefined4 *)(_UNK_01df7cfc + 0x1df72f0));
    func_0x01384978(*(undefined4 *)(_UNK_01df7d00 + 0x1df72fc));
    func_0x01384978(*(undefined4 *)(_UNK_01df7d04 + 0x1df7308));
    func_0x01384978(*(undefined4 *)(_UNK_01df7d08 + 0x1df7314));
    func_0x01384978(*(undefined4 *)(_UNK_01df7d0c + 0x1df7320));
    func_0x01384978(*(undefined4 *)(_UNK_01df7d10 + 0x1df732c));
    func_0x01384978(*(undefined4 *)(_UNK_01df7d14 + 0x1df7338));
    func_0x01384978(*(undefined4 *)(_UNK_01df7d18 + 0x1df7344));
    func_0x01384978(*(undefined4 *)(_UNK_01df7d1c + 0x1df7350));
    *pcVar7 = '\x01';
  }
  iStack_24 = 0;
  piStack_28 = (int *)0x0;
  if (*param_1 == 0) {
    piStack_28 = (int *)param_1[7];
    iStack_24 = param_1[8];
    *param_1 = -1;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  else {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01df7d20 + 0x1df737c));
    func_0x0244f5a0(iVar2,0);
    iVar10 = param_1[3];
    param_1[5] = iVar2;
    if (iVar10 == 0) {
      func_0x01384bf0();
      uVar9 = uRam00000008;
      iVar10 = param_1[3];
      if (iVar10 == 0) {
        iVar10 = 0;
        func_0x01384bf0();
      }
    }
    else {
      uVar9 = *(undefined4 *)(iVar10 + 8);
    }
    uVar11 = *(undefined4 *)(iVar10 + 0xc);
    if (*(int *)(**(int **)(_UNK_01df7d24 + 0x1df73f0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar9 = func_0x0303a044(uVar9,uVar11,**(undefined4 **)(_UNK_01df7d28 + 0x1df7410));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar10 = param_1[5];
    *(undefined4 *)(iVar2 + 8) = uVar9;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    piVar8 = *(int **)(iVar10 + 8);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = (**(code **)(*piVar8 + 0xf8))(piVar8,*(undefined4 *)(*piVar8 + 0xfc));
    if (iVar2 == 0) goto LAB_01df767c;
    iVar2 = param_1[5];
    uVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01df7d2c + 0x1df747c));
    func_0x02450374(uVar9,iVar2,**(undefined4 **)(_UNK_01df7d30 + 0x1df7490),0);
    piVar8 = *(int **)(_UNK_01df7d34 + 0x1df74ac);
    iVar2 = param_1[4];
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02451198(&piStack_30,uVar9,8,iVar2,0,0);
    pcVar7 = (char *)(_UNK_01df7d38 + 0x1df74f0);
    iStack_24 = iStack_2c;
    piStack_28 = piStack_30;
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df7d3c + 0x1df7510));
      *pcVar7 = '\x01';
    }
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar7 = (char *)(_UNK_01df7d40 + 0x1df7538);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df7d44 + 0x1df754c));
      *pcVar7 = '\x01';
    }
    piVar8 = piStack_28;
    if (piStack_28 != (int *)0x0) {
      iVar2 = *piStack_28;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      sVar1 = (short)iStack_24;
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_01df7d48 + 0x1df7570)) {
            puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_01df75bc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piStack_28,**(int **)(_UNK_01df7d48 + 0x1df7570),0);
LAB_01df75bc:
      iVar2 = (*(code *)*puVar3)(piVar8,(int)sVar1,puVar3[1]);
      if (iVar2 == 0) {
        puVar3 = *(undefined4 **)(_UNK_01df7d4c + 0x1df787c);
        param_1[7] = (int)piStack_28;
        param_1[8] = iStack_24;
        uVar9 = *puVar3;
        *param_1 = 0;
        func_0x01e08140(param_1 + 1,&piStack_28,param_1,uVar9);
        return;
      }
    }
  }
  pcVar7 = (char *)(_UNK_01df7d50 + 0x1df75e4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df7d54 + 0x1df75f8));
    *pcVar7 = '\x01';
  }
  piVar8 = piStack_28;
  if (piStack_28 != (int *)0x0) {
    iVar2 = *piStack_28;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    sVar1 = (short)iStack_24;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01df7d58 + 0x1df761c)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xd0);
          goto LAB_01df7668;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piStack_28,**(int **)(_UNK_01df7d58 + 0x1df761c),2);
LAB_01df7668:
    (*(code *)*puVar3)(piVar8,(int)sVar1,puVar3[1]);
  }
LAB_01df767c:
  if (*(int *)(**(int **)(_UNK_01df7d5c + 0x1df7688) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0245032c(param_1 + 4,0);
  if (iVar2 == 0) {
    iVar2 = param_1[5];
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x028bc4d8(iVar2,0);
    if (iVar2 != 0) {
      iVar2 = param_1[5];
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar9 = func_0x029dd460(iVar2,0);
      piVar8 = *(int **)(_UNK_01df7d60 + 0x1df771c);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0145b1cc(uVar9,0,0);
      if (iVar2 != 0) {
        iVar2 = param_1[6];
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x0244fb8c(iVar2,0,0);
        if (iVar2 == 0) {
          iVar2 = param_1[6];
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar9 = *(undefined4 *)(iVar2 + 0x10);
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar2 = func_0x0244fb8c(uVar9,0,0);
          if (iVar2 == 0) {
            iVar2 = param_1[6];
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uVar9 = func_0x0244ffd4(iVar2,0);
            if (*(int *)(*piVar8 + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar2 = func_0x0244fb8c(uVar9,0,0);
            if (iVar2 == 0) {
              iVar2 = param_1[5];
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar2 = *(int *)(iVar2 + 8);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              piVar6 = (int *)func_0x029dd460(iVar2,0);
              if (*(int *)(*piVar8 + 0x74) == 0) {
                func_0x01384ab4();
              }
              if (piVar6 == (int *)0x0) {
                piVar6 = (int *)0x0;
              }
              else if (*piVar6 != **(int **)(_UNK_01df7d64 + 0x1df7858)) {
                piVar6 = (int *)0x0;
              }
              iVar2 = func_0x03015c8c(piVar6,**(undefined4 **)(_UNK_01df7d68 + 0x1df78b0));
              iVar10 = func_0x0145b1cc(iVar2,0,0);
              if (iVar10 != 0) {
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                iVar10 = func_0x02fe27b8(iVar2,**(undefined4 **)(_UNK_01df7d6c + 0x1df78e8));
                if (*(int *)(*piVar8 + 0x74) == 0) {
                  func_0x01384ab4();
                }
                iVar4 = func_0x0145b1cc(iVar10,0,0);
                if (iVar4 != 0) {
                  iVar4 = param_1[6];
                  if (iVar4 == 0) {
                    func_0x01384bf0();
                  }
                  uVar9 = *(undefined4 *)(iVar4 + 0x10);
                  if (iVar10 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x024505b4(iVar10,uVar9,0);
                  pcVar7 = (char *)(_UNK_01df7d70 + 0x1df795c);
                  if (*pcVar7 == '\0') {
                    func_0x01384978(*(undefined4 *)(_UNK_01df7d74 + 0x1df7970));
                    *pcVar7 = '\x01';
                  }
                  puVar3 = *(undefined4 **)(**(int **)(_UNK_01df7d78 + 0x1df7988) + 0x5c);
                  uVar9 = *puVar3;
                  uVar11 = puVar3[1];
                  if (iVar10 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x0244fdbc(iVar10,uVar9,uVar11,0);
                  pcVar7 = (char *)(_UNK_01df7d7c + 0x1df79b8);
                  if (*pcVar7 == '\0') {
                    func_0x01384978(*(undefined4 *)(_UNK_01df7d80 + 0x1df79cc));
                    *pcVar7 = '\x01';
                  }
                  iVar4 = *(int *)(**(int **)(_UNK_01df7d84 + 0x1df79e4) + 0x5c);
                  uVar9 = *(undefined4 *)(iVar4 + 0xc);
                  uVar11 = *(undefined4 *)(iVar4 + 0x10);
                  uVar12 = *(undefined4 *)(iVar4 + 0x14);
                  if (iVar10 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x024503a4(iVar10,uVar9,uVar11,uVar12,0);
                }
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                iVar2 = func_0x02fe2a20(iVar2,**(undefined4 **)(_UNK_01df7d88 + 0x1df7a2c));
                if (iVar2 != 0) {
                  func_0x01df5b14(iVar2,param_1[6]);
                }
              }
            }
          }
        }
      }
    }
  }
  iVar2 = _UNK_01df7d8c;
  param_1[5] = 0;
  *param_1 = -2;
  if (*(char *)(iVar2 + 0x1df7a5c) == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df7d90 + 0x1df7a74));
    *(char *)(iVar2 + 0x1df7a5c) = '\x01';
  }
  piVar8 = (int *)param_1[1];
  if (piVar8 != (int *)0x0) {
    iVar2 = *piVar8;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01df7d94 + 0x1df7a98)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xd0);
          goto LAB_01df7ae0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01df7d94 + 0x1df7a98),2);
LAB_01df7ae0:
    (*(code *)*puVar3)(piVar8,puVar3[1]);
  }
  return;
}



// ===== FAT.MBBoardLvArea.<_LoadCoverPrefab>d__18$$SetStateMachine RVA 0x1de7dac =====

void FUN_01df7dac(int param_1,undefined4 param_2)

{
  (*(code *)&UNK_04f6eae8)(param_1 + 4,param_2,0);
  return;
}


