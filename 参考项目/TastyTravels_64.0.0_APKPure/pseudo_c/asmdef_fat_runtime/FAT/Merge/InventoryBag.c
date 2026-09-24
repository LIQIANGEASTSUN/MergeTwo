/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.InventoryBag$$get_capacity RVA 0x2101eb4 =====

undefined4 FUN_02111eb4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x2c3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2c3,0);
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
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0xc);
}



// ===== FAT.Merge.InventoryBag$$get_MetaInfoValid RVA 0x2102758 =====

uint FUN_02112758(int param_1)

{
  int iVar1;
  uint uVar2;
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
  
  iVar1 = func_0x0229f06c(0xb335,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb335,0);
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
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    return (uint)(*(int *)(param_1 + 0x1c) != 0);
  }
  return 1;
}



// ===== FAT.Merge.InventoryBag$$get_id RVA 0x21027c8 =====

undefined4 FUN_021127c8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x2b4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2b4,0);
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
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== FAT.Merge.InventoryBag$$SetMetaInfo RVA 0x2102b64 =====

void FUN_02112b64(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb339,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb339,0);
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
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



// ===== FAT.Merge.InventoryBag$$.ctor RVA 0x2102cf8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02112cf8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_02112e68 + 0x2112d14);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02112e6c + 0x2112d28));
    func_0x01384978(*(undefined4 *)(_UNK_02112e70 + 0x2112d34));
    func_0x01384978(*(undefined4 *)(_UNK_02112e74 + 0x2112d40));
    func_0x01384978(*(undefined4 *)(_UNK_02112e78 + 0x2112d4c));
    func_0x01384978(*(undefined4 *)(_UNK_02112e7c + 0x2112d58));
    func_0x01384978(*(undefined4 *)(_UNK_02112e80 + 0x2112d64));
    func_0x01384978(*(undefined4 *)(_UNK_02112e84 + 0x2112d70));
    *pcVar5 = '\x01';
  }
  uVar1 = func_0x01384a00(**(undefined4 **)(_UNK_02112e88 + 0x2112d88),0);
  puVar4 = *(undefined4 **)(_UNK_02112e8c + 0x2112d98);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x01384be4(*puVar4);
  func_0x03258eb8(uVar1,**(undefined4 **)(_UNK_02112e90 + 0x2112db4));
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  func_0x0244f5a0(param_1,0);
  iVar2 = **(int **)(_UNK_02112e94 + 0x2112dd8);
  puVar4 = *(undefined4 **)(_UNK_02112e98 + 0x2112de4);
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  uVar1 = *puVar4;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar1 = func_0x0244ff60(uVar1,0);
  uStack_1c = param_2;
  uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_02112e9c + 0x2112e1c),&uStack_1c);
  if (*(int *)(**(int **)(_UNK_02112ea0 + 0x2112e34) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x02452e4c(uVar1,uVar3,0);
  if (iVar2 == 0) {
    param_2 = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ===== FAT.Merge.InventoryBag$$PeekItem RVA 0x2103150 =====

/* WARNING: Removing unreachable block (ram,0x02f24474) */
/* WARNING: Removing unreachable block (ram,0x02f2447c) */
/* WARNING: Removing unreachable block (ram,0x02f24460) */
/* WARNING: Removing unreachable block (ram,0x02f2445c) */
/* WARNING: Removing unreachable block (ram,0x02f24464) */
/* WARNING: Removing unreachable block (ram,0x02f24484) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02113150(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint unaff_r6;
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
  
  pcVar4 = (char *)(_UNK_021131ec + 0x2113168);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021131f0 + 0x211317c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x2b6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2b6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02182b6c + 0x2182a78);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02182b70 + 0x2182a8c),param_1,param_2,0);
      *pcVar4 = '\x01';
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
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02182b74 + 0x2182b5c));
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
    unaff_r6 = *(uint *)(iVar1 + 0xc);
  }
  if (((iVar1 != 0 && unaff_r6 != 0) && (-1 < (int)param_2)) && ((int)param_2 < (int)unaff_r6)) {
    if (unaff_r6 <= param_2) {
      func_0x01384bf4(0);
    }
    return *(undefined4 *)(iVar1 + param_2 * 4 + 0x10);
  }
  return 0;
}



// ===== FAT.Merge.InventoryBag$$Clear RVA 0x2103478 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02113478(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0211351c + 0x211348c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02113520 + 0x21134a0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb337,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb337,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_0229c534 + 0x229c454);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0229c538 + 0x229c468),param_1,0);
      *pcVar3 = '\x01';
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
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0229c53c + 0x229c524));
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x01384a00(**(undefined4 **)(_UNK_02113524 + 0x2113508),*(undefined4 *)(iVar1 + 0xc))
  ;
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  return iVar1;
}



// ===== FAT.Merge.InventoryBag$$Serialize RVA 0x2103c80 =====

/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02113c80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
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
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_02113ea8 + 0x2113c9c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02113eac + 0x2113cb0));
    func_0x01384978(*(undefined4 *)(_UNK_02113eb0 + 0x2113cbc));
    func_0x01384978(*(undefined4 *)(_UNK_02113eb4 + 0x2113cc8));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c6f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c6f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    iVar1 = func_0x0245495c(iVar10,uVar11,&uStack_38,uVar6,0,0);
    return iVar1;
  }
  uVar11 = FUN_021127c8(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_2 + 0xc) = uVar11;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0364bbb0(iVar1,**(undefined4 **)(_UNK_02113eb8 + 0x2113d54));
  uVar9 = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  puVar12 = *(undefined4 **)(_UNK_02113ebc + 0x2113d7c);
  if (*(int *)(param_1 + 0x10) == 2) {
    while( true ) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar9) break;
      if (*(uint *)(iVar1 + 0xc) <= uVar9) {
        func_0x01384bf4();
      }
      iVar10 = *(int *)(param_2 + 0x14);
      if (*(int *)(iVar1 + 0x10 + uVar9 * 4) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = FUN_0210e5f4();
      }
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      func_0x0364baf8(iVar10,uVar11,*puVar12);
      uVar9 = uVar9 + 1;
    }
  }
  else {
    while( true ) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar9) break;
      if (*(uint *)(iVar1 + 0xc) <= uVar9) {
        func_0x01384bf4();
      }
      iVar10 = *(int *)(iVar1 + 0x10 + uVar9 * 4);
      if (iVar10 != 0) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(param_2 + 0x14);
        uVar11 = FUN_0210e5f4(iVar10);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0364baf8(iVar2,uVar11,*puVar12);
      }
      uVar9 = uVar9 + 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar1 + 0xc);
  if (iVar10 == 0) {
    return 0;
  }
  iVar1 = **(int **)(_UNK_02113ec0 + 0x2113e90);
  piVar5 = *(int **)(param_1 + 0x20);
  pcVar8 = (char *)(_UNK_0364c274 + 0x364bd44);
  if (*pcVar8 == '\0') {
    func_0x02457d54(*(undefined4 *)(_UNK_0364c278 + 0x364bd58));
    func_0x02457d54(*(undefined4 *)(_UNK_0364c27c + 0x364bd64));
    func_0x02457d54(*(undefined4 *)(_UNK_0364c280 + 0x364bd70));
    func_0x02457d54(*(undefined4 *)(_UNK_0364c284 + 0x364bd7c));
    *pcVar8 = '\x01';
  }
  func_0x03031d60(piVar5,**(undefined4 **)(_UNK_0364c288 + 0x364bd98),
                  *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x8c));
  iVar2 = **(int **)(*(int *)(iVar1 + 0x10) + 0x60);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x02457d84();
  }
  if (piVar5 == (int *)0x0) {
    piVar3 = (int *)func_0x02457d4c(0,**(undefined4 **)(_UNK_0364c294 + 0x364be04));
    if (piVar3 == (int *)0x0) {
      func_0x02457d50();
LAB_0364bf78:
      iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x88);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x02457d84(iVar2);
      }
      iVar4 = *piVar5;
      uVar9 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar9 != 0) {
        piVar3 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar3[-1] == iVar2) {
            puVar12 = (undefined4 *)(iVar4 + *piVar3 * 8 + 0xc0);
            goto LAB_0364bfe8;
          }
          uVar9 = uVar9 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar9 != 0);
      }
      puVar12 = (undefined4 *)func_0x02457d88(piVar5,iVar2,0);
LAB_0364bfe8:
      piVar5 = (int *)(*(code *)*puVar12)(piVar5,puVar12[1]);
      piVar3 = *(int **)(_UNK_0364c298 + 0x364c008);
      do {
        if (piVar5 == (int *)0x0) {
          func_0x02457d50();
        }
        iVar2 = *piVar5;
        uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar9 != 0) {
          piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar7[-1] == *piVar3) {
              puVar12 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
              goto LAB_0364c060;
            }
            uVar9 = uVar9 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar9 != 0);
        }
        puVar12 = (undefined4 *)func_0x02457d88(piVar5,*piVar3,0);
LAB_0364c060:
        iVar2 = (*(code *)*puVar12)(piVar5,puVar12[1]);
        if (iVar2 == 0) goto LAB_0364c120;
        if (piVar5 == (int *)0x0) {
          func_0x02457d50();
        }
        iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x94);
        if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = func_0x02457d84(iVar2);
        }
        iVar4 = *piVar5;
        uVar9 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar9 != 0) {
          piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar7[-1] == iVar2) {
              puVar12 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
              goto LAB_0364c0f4;
            }
            uVar9 = uVar9 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar9 != 0);
        }
        puVar12 = (undefined4 *)func_0x02457d88(piVar5,iVar2,0);
LAB_0364c0f4:
        uVar11 = (*(code *)*puVar12)(piVar5,puVar12[1]);
        func_0x0364baf8(iVar10,uVar11,
                        *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x44));
      } while( true );
    }
  }
  else {
    if (*piVar5 == iVar2) {
      func_0x0364b9a0(iVar10,piVar5[3] + *(int *)(iVar10 + 0xc),
                      *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x3c));
      iStack_28 = piVar5[3];
      func_0x0484e904(piVar5[2],0,*(undefined4 *)(iVar10 + 8),*(undefined4 *)(iVar10 + 0xc));
      iVar2 = piVar5[3] + *(int *)(iVar10 + 0xc);
      goto LAB_0364bf68;
    }
    piVar3 = (int *)func_0x02457d4c(piVar5,**(undefined4 **)(_UNK_0364c28c + 0x364bde0));
    if (piVar3 == (int *)0x0) goto LAB_0364bf78;
  }
  iVar2 = *piVar3;
  piVar5 = *(int **)(_UNK_0364c290 + 0x364be28);
  uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
  iVar4 = *piVar5;
  if (uVar9 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar4) {
        puVar12 = (undefined4 *)(iVar2 + *piVar7 * 8 + 200);
        goto LAB_0364bec0;
      }
      uVar9 = uVar9 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar9 != 0);
  }
  puVar12 = (undefined4 *)func_0x02457d88(piVar3,iVar4,1);
LAB_0364bec0:
  iVar2 = (*(code *)*puVar12)(piVar3,puVar12[1]);
  func_0x0364b9a0(iVar10,*(int *)(iVar10 + 0xc) + iVar2,
                  *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x3c));
  iVar1 = *piVar3;
  uVar6 = *(undefined4 *)(iVar10 + 8);
  uVar11 = *(undefined4 *)(iVar10 + 0xc);
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar4 = *piVar5;
  if (uVar9 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == iVar4) {
        puVar12 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
        goto LAB_0364bf48;
      }
      uVar9 = uVar9 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar9 != 0);
  }
  puVar12 = (undefined4 *)func_0x02457d88(piVar3,iVar4,0);
LAB_0364bf48:
  (*(code *)*puVar12)(piVar3,uVar6,uVar11,puVar12[1]);
  iVar2 = *(int *)(iVar10 + 0xc) + iVar2;
LAB_0364bf68:
  *(int *)(iVar10 + 0xc) = iVar2;
  return iVar2;
LAB_0364c120:
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  iVar1 = *piVar5;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar3[-1] == **(int **)(_UNK_0364c29c + 0x364c13c)) {
        puVar12 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
        goto LAB_0364c184;
      }
      uVar9 = uVar9 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar9 != 0);
  }
  puVar12 = (undefined4 *)func_0x02457d88(piVar5,**(int **)(_UNK_0364c29c + 0x364c13c),0);
LAB_0364c184:
  iVar1 = (*(code *)*puVar12)(piVar5,puVar12[1]);
  return iVar1;
}



// ===== FAT.Merge.InventoryBag$$Deserialize RVA 0x2104324 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02114324(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_021148e8 + 0x2114344);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021148ec + 0x2114358));
    func_0x01384978(*(undefined4 *)(_UNK_021148f0 + 0x2114364));
    func_0x01384978(*(undefined4 *)(_UNK_021148f4 + 0x2114370));
    func_0x01384978(*(undefined4 *)(_UNK_021148f8 + 0x211437c));
    func_0x01384978(*(undefined4 *)(_UNK_021148fc + 0x2114388));
    func_0x01384978(*(undefined4 *)(_UNK_02114900 + 0x2114394));
    func_0x01384978(*(undefined4 *)(_UNK_02114904 + 0x21143a0));
    func_0x01384978(*(undefined4 *)(_UNK_02114908 + 0x21143ac));
    func_0x01384978(*(undefined4 *)(_UNK_0211490c + 0x21143b8));
    func_0x01384978(*(undefined4 *)(_UNK_02114910 + 0x21143c4));
    func_0x01384978(*(undefined4 *)(_UNK_02114914 + 0x21143d0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c64,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar4 = *(undefined4 *)(param_2 + 0x10);
    uVar2 = **(undefined4 **)(_UNK_02114918 + 0x2114444);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc);
    uVar2 = func_0x01384a00(uVar2,uVar4);
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    iVar1 = 4;
    puVar8 = *(undefined4 **)(_UNK_0211491c + 0x2114468);
    while( true ) {
      iVar6 = *(int *)(param_2 + 0x14);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar9 = iVar1 - 4;
      if (*(int *)(iVar6 + 0xc) <= (int)uVar9) break;
      iVar6 = *(int *)(param_1 + 0x14);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      if ((int)uVar9 < *(int *)(iVar6 + 0xc)) {
        iVar6 = *(int *)(param_2 + 0x14);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar2 = func_0x0364c9b8(iVar6,uVar9,*puVar8);
        iVar6 = func_0x02f7c0f8(param_3,uVar2,0,**(undefined4 **)(_UNK_02114938 + 0x21144d4));
        if (iVar6 == 0) {
          if (*(int *)(param_1 + 0x10) == 2) {
            iVar6 = *(int *)(param_1 + 0x14);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            if (*(uint *)(iVar6 + 0xc) <= uVar9) {
              func_0x01384bf4();
            }
            *(undefined4 *)(iVar6 + iVar1 * 4) = 0;
          }
          else {
            piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0211493c + 0x2114738),2);
            uStack_28 = *(undefined4 *)(param_1 + 0x18);
            iVar6 = func_0x01384abc(**(undefined4 **)(_UNK_02114940 + 0x2114750),&uStack_28);
            if (piVar7 == (int *)0x0) {
              func_0x01384bf0();
            }
            if ((iVar6 != 0) &&
               (iVar3 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar7 + 0x20)), iVar3 == 0)) {
              uVar2 = func_0x01384c10();
              func_0x01384aa0(uVar2,0);
            }
            if (piVar7[3] == 0) {
              func_0x01384bf4();
            }
            piVar7[4] = iVar6;
            iVar6 = *(int *)(param_2 + 0x14);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            uStack_2c = func_0x0364c9b8(iVar6,uVar9,*puVar8);
            iVar6 = func_0x01384abc(**(undefined4 **)(_UNK_02114944 + 0x21147d8),&uStack_2c);
            if ((iVar6 != 0) &&
               (iVar3 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar7 + 0x20)), iVar3 == 0)) {
              uVar2 = func_0x01384c10();
              func_0x01384aa0(uVar2,0);
            }
            if ((uint)piVar7[3] < 2) {
              func_0x01384bf4();
            }
            piVar7[5] = iVar6;
            if (*(int *)(**(int **)(_UNK_02114948 + 0x2114838) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x028c2f28(**(undefined4 **)(_UNK_0211494c + 0x211485c),piVar7,0);
          }
        }
        else {
          piVar7 = *(int **)(param_1 + 0x14);
          if (piVar7 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar7 + 0x20));
          if (iVar3 == 0) {
            uVar2 = func_0x01384c10();
            func_0x01384aa0(uVar2,0);
          }
          if ((uint)piVar7[3] <= uVar9) {
            func_0x01384bf4();
          }
          piVar7[iVar1] = iVar6;
        }
        iVar6 = *(int *)(param_2 + 0x14);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar2 = func_0x0364c9b8(iVar6,uVar9,*puVar8);
        if (param_3 == 0) {
          func_0x01384bf0();
        }
        func_0x03d66094(param_3,uVar2,**(undefined4 **)(_UNK_02114950 + 0x21148a4));
      }
      else {
        piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02114920 + 0x2114548),3);
        iVar6 = *(int *)(param_1 + 0x14);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uStack_28 = *(undefined4 *)(iVar6 + 0xc);
        iVar6 = func_0x01384abc(**(undefined4 **)(_UNK_02114924 + 0x2114570),&uStack_28);
        if (piVar7 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar6 != 0) &&
           (iVar3 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar7 + 0x20)), iVar3 == 0)) {
          uVar2 = func_0x01384c10();
          func_0x01384aa0(uVar2,0);
        }
        if (piVar7[3] == 0) {
          func_0x01384bf4();
        }
        piVar7[4] = iVar6;
        uStack_2c = *(undefined4 *)(param_1 + 0x18);
        iVar6 = func_0x01384abc(**(undefined4 **)(_UNK_02114928 + 0x21145e0),&uStack_2c);
        if ((iVar6 != 0) &&
           (iVar3 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar7 + 0x20)), iVar3 == 0)) {
          uVar2 = func_0x01384c10();
          func_0x01384aa0(uVar2,0);
        }
        if ((uint)piVar7[3] < 2) {
          func_0x01384bf4();
        }
        piVar7[5] = iVar6;
        iVar6 = *(int *)(param_2 + 0x14);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uStack_30 = func_0x0364c9b8(iVar6,uVar9,*puVar8);
        iVar6 = func_0x01384abc(**(undefined4 **)(_UNK_0211492c + 0x2114660),&uStack_30);
        if ((iVar6 != 0) &&
           (iVar3 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar7 + 0x20)), iVar3 == 0)) {
          uVar2 = func_0x01384c10();
          func_0x01384aa0(uVar2,0);
        }
        if ((uint)piVar7[3] < 3) {
          func_0x01384bf4();
        }
        piVar7[6] = iVar6;
        if (*(int *)(**(int **)(_UNK_02114930 + 0x21146c0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2f28(**(undefined4 **)(_UNK_02114934 + 0x21146e4),piVar7,0);
      }
      iVar1 = iVar1 + 1;
    }
    iVar1 = *(int *)(param_1 + 0x20);
    uVar2 = *(undefined4 *)(param_2 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0325992c(iVar1,uVar2,**(undefined4 **)(_UNK_02114954 + 0x21148d8));
  }
  else {
    iVar1 = func_0x0229f13c(0x5c64,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.InventoryBag$$Update RVA 0x2104b68 =====

void FUN_02114b68(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
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
  
  uVar5 = 0;
  uVar7 = func_0x0229f06c(0x5e5b,0);
  if ((int)uVar7 == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    uVar7 = uVar7 & 0xffffffff00000000;
    while( true ) {
      uVar2 = (uint)(uVar7 >> 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0((int)uVar7,uVar2);
        uVar2 = extraout_r1;
      }
      if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar5) break;
      if (*(uint *)(iVar1 + 0xc) <= uVar5) {
        func_0x01384bf4();
        uVar2 = extraout_r1_00;
      }
      uVar7 = (ulonglong)uVar2 << 0x20;
      if (*(int *)(iVar1 + 0x10 + uVar5 * 4) != 0) {
        uVar7 = func_0x021162d4();
      }
      uVar5 = uVar5 + 1;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x5e5b,0);
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



// ===== FAT.Merge.InventoryBag$$RemoveItem RVA 0x2104d08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02114d08(int param_1,uint param_2)

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
  
  pcVar4 = (char *)(_UNK_02114df0 + 0x2114d20);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02114df4 + 0x2114d34));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x2c5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2c5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02182b6c + 0x2182a78);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02182b70 + 0x2182a8c),param_1,param_2,0);
      *pcVar4 = '\x01';
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
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02182b74 + 0x2182b5c));
    return iVar1;
  }
  iVar3 = func_0x02f24418(*(undefined4 *)(param_1 + 0x14),param_2,2,
                          **(undefined4 **)(_UNK_02114df8 + 0x2114d9c));
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar1 + 0xc) <= param_2) {
      func_0x01384bf4();
    }
    *(undefined4 *)(iVar1 + param_2 * 4 + 0x10) = 0;
    func_0x0211616c(param_1);
    iVar1 = iVar3;
  }
  return iVar1;
}



// ===== FAT.Merge.InventoryBag$$DisposeItem RVA 0x21050c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021150c8(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
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
  
  pcVar5 = (char *)(_UNK_021151ac + 0x21150e0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021151b0 + 0x21150f4));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x0229f06c(0x2b8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2b8,0);
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
    uVar6 = func_0x0245496c(&uStack_38,0,0);
    return uVar6;
  }
  uVar2 = func_0x02f24660(*(undefined4 *)(param_1 + 0x14),param_2,
                          **(undefined4 **)(_UNK_021151b4 + 0x2115158));
  if (-1 < (int)uVar2) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar2) {
      func_0x01384bf4();
    }
    *(undefined4 *)(iVar1 + uVar2 * 4 + 0x10) = 0;
    func_0x0211616c(param_1);
    uVar6 = 1;
  }
  return uVar6;
}



// ===== FAT.Merge.InventoryBag$$GetItemIndexByTid RVA 0x210541c =====

uint FUN_0211541c(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x2b3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2b3,0);
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
    uVar2 = func_0x0245498c(&uStack_38,0,0);
    return uVar2;
  }
  iVar1 = 4;
  do {
    iVar4 = *(int *)(param_1 + 0x14);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = iVar1 - 4;
    if (*(int *)(iVar4 + 0xc) <= (int)uVar2) {
      return 0xffffffff;
    }
    iVar4 = *(int *)(param_1 + 0x14);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar2) {
      func_0x01384bf4();
    }
    if (*(int *)(iVar4 + iVar1 * 4) != 0) {
      iVar4 = *(int *)(param_1 + 0x14);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar4 + 0xc) <= uVar2) {
        func_0x01384bf4();
      }
      iVar4 = *(int *)(iVar4 + iVar1 * 4);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = FUN_0210e2d4(iVar4);
      if (iVar4 == param_2) {
        return uVar2;
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}



// ===== FAT.Merge.InventoryBag$$PutItemWithIndex RVA 0x2105850 =====

uint FUN_02115850(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar1 = func_0x0229f06c(0x2c6,0);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
    if (-1 < (int)param_3) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (((int)param_3 < *(int *)(iVar1 + 0xc)) &&
         (iVar1 = FUN_02113150(param_1,param_3), iVar1 == 0)) {
        piVar4 = *(int **)(param_1 + 0x14);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((param_2 != 0) &&
           (iVar1 = func_0x01384ab8(param_2,*(undefined4 *)(*piVar4 + 0x20)), iVar1 == 0)) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        if ((uint)piVar4[3] <= param_3) {
          func_0x01384bf4();
        }
        piVar4[param_3 + 4] = param_2;
        uVar2 = param_3;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x2c6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021830f0(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.Merge.InventoryBag$$TryRemoveRedPointItem RVA 0x2105954 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02115954(int param_1,undefined4 param_2)

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
  
  pcVar5 = (char *)(_UNK_02115a98 + 0x211596c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02115a9c + 0x2115980));
    func_0x01384978(*(undefined4 *)(_UNK_02115aa0 + 0x211598c));
    func_0x01384978(*(undefined4 *)(_UNK_02115aa4 + 0x2115998));
    func_0x01384978(*(undefined4 *)(_UNK_02115aa8 + 0x21159a4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x2c7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2c7,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
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
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03259a6c(iVar1,param_2,**(undefined4 **)(_UNK_02115aac + 0x2115a14));
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0325aeb0(iVar1,param_2,**(undefined4 **)(_UNK_02115ab0 + 0x2115a44));
  if (*(int *)(**(int **)(_UNK_02115ab4 + 0x2115a58) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02115ab8 + 0x2115a74));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0229f06c(0x3f,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x3f,0);
    if (iVar4 == 0) {
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
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_30,iVar1,0);
    iVar3 = *(int *)(iVar4 + 8);
    uVar6 = *(undefined4 *)(iVar4 + 0xc);
    iVar1 = *(int *)(iVar4 + 0x10);
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
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.Merge.InventoryBag$$PutItem RVA 0x2105abc =====

uint FUN_02115abc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  bool bVar11;
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
  
  iVar1 = func_0x0229f06c(0x75ed,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75ed,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_38,uVar5,0,0);
    uVar4 = func_0x0245498c(&uStack_38,0,0);
    return uVar4;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0xffffffff;
  if (*(int *)(iVar1 + 0xc) != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar1 + 0xc);
    if (iVar8 == 0) {
      func_0x01384bf4();
    }
    if (*(int *)(iVar1 + (iVar8 + -1) * 4 + 0x10) == 0) {
      iVar1 = 4;
      uVar4 = 0xffffffff;
      while( true ) {
        iVar8 = *(int *)(param_1 + 0x14);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if ((param_2 == 0) || (uVar7 = iVar1 - 4, *(int *)(iVar8 + 0xc) <= (int)uVar7)) break;
        iVar8 = *(int *)(param_1 + 0x14);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar8 + 0xc) <= uVar7) {
          func_0x01384bf4();
        }
        if (*(int *)(iVar8 + iVar1 * 4) == 0) {
LAB_02115c1c:
          iVar8 = *(int *)(param_1 + 0x14);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          if (*(uint *)(iVar8 + 0xc) <= uVar7) {
            func_0x01384bf4();
          }
          iVar2 = *(int *)(iVar8 + iVar1 * 4);
          piVar6 = *(int **)(param_1 + 0x14);
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar8 = func_0x01384ab8(param_2,*(undefined4 *)(*piVar6 + 0x20));
          if (iVar8 == 0) {
            uVar9 = func_0x01384c10();
            func_0x01384aa0(uVar9,0);
          }
          if ((uint)piVar6[3] <= uVar7) {
            func_0x01384bf4();
          }
          piVar6[iVar1] = param_2;
          uVar10 = uVar7;
          if (uVar4 < 0x80000000) {
            uVar10 = uVar4;
          }
        }
        else {
          iVar8 = *(int *)(param_1 + 0x14);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          if (*(uint *)(iVar8 + 0xc) <= uVar7) {
            func_0x01384bf4();
          }
          iVar8 = *(int *)(iVar8 + iVar1 * 4);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar2 = FUN_0210e2d4(iVar8);
          iVar3 = FUN_0210e2d4(param_2);
          bVar12 = SCARRY4(uVar4,1);
          iVar8 = uVar4 + 1;
          bVar11 = uVar4 == 0xffffffff;
          if (0x7fffffff < uVar4) {
            bVar12 = SBORROW4(iVar2,iVar3);
            iVar8 = iVar2 - iVar3;
            bVar11 = iVar2 == iVar3;
          }
          uVar10 = uVar4;
          iVar2 = param_2;
          if (!bVar11 && iVar8 < 0 == bVar12) goto LAB_02115c1c;
        }
        iVar1 = iVar1 + 1;
        uVar4 = uVar10;
        param_2 = iVar2;
      }
    }
  }
  return uVar4;
}



// ===== FAT.Merge.InventoryBag$$SetCapacity RVA 0x2105fd8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_02115fd8(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
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
  
  pcVar5 = (char *)(_UNK_02116148 + 0x2115ff0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211614c + 0x2116004));
    func_0x01384978(*(undefined4 *)(_UNK_02116150 + 0x2116010));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x55e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x55e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_0218e094 + 0x218dfa0);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0218e098 + 0x218dfb4),param_1,param_2,0);
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
    piVar3 = (int *)func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0218e09c + 0x218e084));
    return piVar3;
  }
  piVar3 = (int *)(param_1 + 0x14);
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02116154 + 0x211607c),
                                  *(undefined4 *)(iVar1 + 0xc));
  uVar6 = param_2;
  while( true ) {
    iVar1 = *piVar3;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) <= (int)uVar6) break;
    iVar1 = *piVar3;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar6) {
      func_0x01384bf4();
    }
    iVar1 = *(int *)(iVar1 + uVar6 * 4 + 0x10);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar1 != 0) && (iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar7 == 0)
       ) {
      uVar8 = func_0x01384c10();
      func_0x01384aa0(uVar8,0);
    }
    if ((uint)piVar2[3] <= uVar6) {
      func_0x01384bf4();
    }
    piVar2[uVar6 + 4] = iVar1;
    uVar6 = uVar6 + 1;
  }
  func_0x02ec93f0(piVar3,param_2,**(undefined4 **)(_UNK_02116158 + 0x2116138));
  return piVar2;
}



// ===== FAT.Merge.InventoryBag$$get_MaxShowGirdNum RVA 0x210615c =====

undefined4 FUN_0211615c(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.Merge.InventoryBag$$set_MaxShowGirdNum RVA 0x2106164 =====

void FUN_02116164(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== FAT.Merge.InventoryBag$$_Shrink RVA 0x210616c =====

void FUN_0211616c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = func_0x0229f06c(0x2b9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2b9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar8,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x10) != 2) {
    iVar1 = 4;
    iVar5 = 0;
    while( true ) {
      iVar3 = *(int *)(param_1 + 0x14);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar6 = iVar1 - 4;
      if (*(int *)(iVar3 + 0xc) <= (int)uVar6) break;
      iVar3 = *(int *)(param_1 + 0x14);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar3 + 0xc) <= uVar6) {
        func_0x01384bf4();
      }
      if (*(int *)(iVar3 + iVar1 * 4) == 0) {
        iVar5 = iVar5 + 1;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x14);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar3 + 0xc) <= uVar6) {
          func_0x01384bf4();
        }
        iVar4 = *(int *)(iVar3 + iVar1 * 4);
        iVar3 = *(int *)(param_1 + 0x14);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar3 + 0xc) <= uVar6) {
          func_0x01384bf4();
        }
        *(undefined4 *)(iVar3 + iVar1 * 4) = 0;
        piVar7 = *(int **)(param_1 + 0x14);
        if (piVar7 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar4 != 0) &&
           (iVar3 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar7 + 0x20)), iVar3 == 0)) {
          uVar8 = func_0x01384c10();
          func_0x01384aa0(uVar8,0);
        }
        if ((uint)piVar7[3] <= (iVar1 - iVar5) - 4U) {
          func_0x01384bf4();
        }
        piVar7[iVar1 - iVar5] = iVar4;
      }
      iVar1 = iVar1 + 1;
    }
  }
  return;
}



// ===== FAT.Merge.InventoryBag$$TryAddRedPointItem RVA 0x2106624 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02116624(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
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
  
  pcVar5 = (char *)(_UNK_021167b8 + 0x211663c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021167bc + 0x2116650));
    func_0x01384978(*(undefined4 *)(_UNK_021167c0 + 0x211665c));
    func_0x01384978(*(undefined4 *)(_UNK_021167c4 + 0x2116668));
    func_0x01384978(*(undefined4 *)(_UNK_021167c8 + 0x2116674));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x561,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x561,0);
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
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03259a6c(iVar1,param_2,**(undefined4 **)(_UNK_021167cc + 0x21166e4));
  if (iVar1 != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 8);
  uVar7 = *(uint *)(iVar1 + 0xc);
  piVar2 = *(int **)(_UNK_021167d0 + 0x2116728);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar8 = *piVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  if (uVar7 < *(uint *)(iVar4 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar7 + 1;
    *(undefined4 *)(iVar4 + uVar7 * 4 + 0x10) = param_2;
  }
  else {
    func_0x0325970c(iVar1,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
  }
  if (*(int *)(**(int **)(_UNK_021167d4 + 0x2116778) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_021167d8 + 0x2116794));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0229f06c(0x3f,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x3f,0);
    if (iVar4 == 0) {
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
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_30,iVar1,0);
    iVar8 = *(int *)(iVar4 + 8);
    uVar6 = *(undefined4 *)(iVar4 + 0xc);
    iVar1 = *(int *)(iVar4 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar8,uVar6,&uStack_30,uVar3);
    return;
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.Merge.InventoryBag$$TryClearRedPoint RVA 0x21067dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021167dc(int param_1)

{
  int iVar1;
  int *piVar2;
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
  
  pcVar4 = (char *)(_UNK_021168d8 + 0x21167f0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021168dc + 0x2116804));
    func_0x01384978(*(undefined4 *)(_UNK_021168e0 + 0x2116810));
    func_0x01384978(*(undefined4 *)(_UNK_021168e4 + 0x211681c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa919,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = *(int **)(_UNK_021168e8 + 0x2116888);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    iVar5 = *piVar2;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4();
    }
    param_1 = func_0x0300d558(**(undefined4 **)(_UNK_021168ec + 0x21168b4));
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x3f,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0x3f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa919,0);
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
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.Merge.InventoryBag$$NeedRedPoint RVA 0x21068f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_021168f0(int param_1)

{
  int iVar1;
  uint uVar2;
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
  
  pcVar4 = (char *)(_UNK_02116988 + 0x2116904);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211698c + 0x2116918));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa4f0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa4f0,0);
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
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return (uint)(0 < *(int *)(iVar1 + 0xc));
}



// ===== FAT.Merge.InventoryBag$$GetMetaInfo<object> RVA 0x2fdb14c =====

int FUN_02feb14c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  piVar1 = *(int **)(param_2 + 0x1c);
  if (piVar1 == (int *)0x0) {
    func_0x0140024c(param_2);
    piVar1 = *(int **)(param_2 + 0x1c);
  }
  iVar3 = *piVar1;
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = func_0x014001f0(iVar3);
  }
  iVar3 = func_0x01384ab8(uVar5,iVar3);
  iVar4 = **(int **)(param_2 + 0x1c);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = func_0x014001f0(iVar4);
  }
  if (iVar3 != 0) {
    iVar2 = func_0x01384ab8(iVar3,iVar4);
    if (iVar2 != 0) {
      return iVar2;
    }
    func_0x01384fb4(iVar3,iVar4);
  }
  return 0;
}


