/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ItemFeatureComponent$$get_feature RVA 0x211ec20 =====

undefined4 FUN_0212ec20(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9e33,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e33,0);
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
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x14);
}



// ===== FAT.Merge.ItemFeatureComponent$$get_intParam RVA 0x211ec84 =====

undefined4 FUN_0212ec84(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb3df,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3df,0);
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
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x18);
}



// ===== FAT.Merge.ItemFeatureComponent$$OnPostAttach RVA 0x211ece8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212ece8(int param_1)

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
  
  pcVar7 = (char *)(_UNK_0212ee2c + 0x212ecfc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212ee30 + 0x212ed10));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb3e0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3e0,0);
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
    return;
  }
  FUN_02127894(param_1);
  piVar2 = (int *)func_0x021566f4(0);
  iVar1 = FUN_02123568(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar9 = FUN_0210e2d4(iVar1,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_0212ee34 + 0x212edb4)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x110);
        goto LAB_0212edfc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0212ee34 + 0x212edb4),10);
LAB_0212edfc:
  iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar1 + 0x30);
  return;
}



// ===== FAT.Merge.ItemFeatureComponent$$.ctor RVA 0x211ee38 =====

void FUN_0212ee38(int param_1)

{
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemFeatureComponent$$<>iFixBaseProxy_OnPostAttach RVA 0x211ee50 =====

void thunk_FUN_02127894(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x279,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x279,0);
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


