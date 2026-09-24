/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MergeItemMoveState$$.ctor RVA 0x1e0ec50 =====

void FUN_01e1ec50(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 0x41200000;
  func_0x0244f5a0(param_1,0,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MergeItemMoveState$$OnEnter RVA 0x1e0ec6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1ec6c(int param_1)

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
  
  pcVar4 = (char *)(_UNK_01e1ed40 + 0x1e1ec80);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1ed44 + 0x1e1ec94));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa0cf,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa0cf,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3);
    return;
  }
  FUN_01e1c2e0(param_1,0);
  iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01e1ed48 + 0x1e1ecf8));
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x0244fc34(iVar5,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0229f06c(0x9ec3,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ec3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,iVar5,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485278(&uStack_38,iVar5,0);
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
  uVar6 = FUN_01dd9b34(iVar2);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&SUB_05197608)(iVar5,uVar6,1,0);
  return;
}



// ===== FAT.MergeItemMoveState$$OnLeave RVA 0x1e0ed4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1ed4c(int param_1)

{
  int iVar1;
  int *piVar2;
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
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01e1eea4 + 0x1e1ed64);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1eea8 + 0x1e1ed78));
    func_0x01384978(*(undefined4 *)(_UNK_01e1eeac + 0x1e1ed84));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa0d0,0);
  if (iVar1 == 0) {
    FUN_01e1c32c(param_1,0);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_20,iVar1,0);
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e1eeb0 + 0x1e1ee24));
    iVar6 = *(int *)(param_1 + 8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0244fc34(iVar6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar4 = (int *)0x0;
    if ((piVar2 != (int *)0x0) &&
       (piVar4 = piVar2, *piVar2 != **(int **)(_UNK_01e1eeb4 + 0x1e1ee70))) {
      piVar4 = (int *)0x0;
    }
    uStack_28 = 0;
    FUN_01de3a84(iVar1,uStack_20,uStack_1c,piVar4);
    return;
  }
  iVar1 = func_0x0229f13c(0xa0d0,0);
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
  return;
}



// ===== FAT.MergeItemMoveState$$Update RVA 0x1e0eeb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e1eeb8(int param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  float fStack_24;
  
  pcVar6 = (char *)(_UNK_01e1f154 + 0x1e1eed8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1f158 + 0x1e1eeec));
    func_0x01384978(*(undefined4 *)(_UNK_01e1f15c + 0x1e1eef8));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa0d1,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x0244fc34(iVar2,0);
    piVar4 = (int *)0x0;
    if ((piVar3 != (int *)0x0) &&
       (piVar4 = piVar3, *piVar3 != **(int **)(_UNK_01e1f160 + 0x1e1ef88))) {
      piVar4 = (int *)0x0;
    }
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x30);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&fStack_28,iVar2,0);
    uVar8 = VectorSignedToFloat(fStack_28,(byte)(in_fpscr >> 0x16) & 3);
    uVar5 = VectorSignedToFloat(fStack_24,(byte)(in_fpscr >> 0x16) & 3);
    if (*(int *)(**(int **)(_UNK_01e1f164 + 0x1e1efe4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    FUN_01dd99a8(&fStack_28,uVar8,uVar5,0);
    *(float *)(param_1 + 0x14) = fStack_28;
    *(float *)(param_1 + 0x18) = fStack_24;
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    func_0x0244fd6c(&fStack_28,piVar4,0);
    fVar10 = *(float *)(param_1 + 0x10) * param_2;
    bVar1 = 0.0 <= fVar10;
    if (1.0 < fVar10) {
      fVar10 = 1.0;
    }
    fVar11 = _UNK_01e1f150;
    if (bVar1) {
      fVar11 = fVar10;
    }
    fVar9 = fStack_24 + (*(float *)(param_1 + 0x18) - fStack_24) * fVar11;
    fVar10 = fStack_28 + (*(float *)(param_1 + 0x14) - fStack_28) * fVar11;
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
      func_0x0244fdbc(0,fVar10,fVar9,0);
      func_0x01384bf0();
    }
    else {
      func_0x0244fdbc(piVar4,fVar10,fVar9,0);
    }
    func_0x0244fd6c(&fStack_28,piVar4,0);
    if (ABS(fStack_28 - *(float *)(param_1 + 0x14)) < *(float *)(param_1 + 0xc)) {
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      func_0x0244fd6c(&fStack_28,piVar4,0);
      if (ABS(fStack_24 - *(float *)(param_1 + 0x18)) < *(float *)(param_1 + 0xc)) {
        return 0xc;
      }
    }
    uVar8 = FUN_01e1c378(param_1,param_2,0);
    return uVar8;
  }
  iVar2 = func_0x0229f13c(0xa0d1,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  fStack_28 = 0.0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  fStack_28 = fStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485258(&uStack_38,param_2,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_38,uVar5,0,0);
  uVar8 = func_0x0245498c(&uStack_38,0,0);
  return uVar8;
}



// ===== FAT.MergeItemMoveState$$<>iFixBaseProxy_OnEnter RVA 0x1e0f168 =====

void FUN_01e1f168(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x168b,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x168b,0);
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



// ===== FAT.MergeItemMoveState$$<>iFixBaseProxy_OnLeave RVA 0x1e0f170 =====

void FUN_01e1f170(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x1688,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1688,0);
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



// ===== FAT.MergeItemMoveState$$<>iFixBaseProxy_Update RVA 0x1e0f178 =====

undefined4 FUN_01e1f178(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xa0b3,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa0b3,0);
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
    uVar4 = func_0x0245498c(&uStack_38,0,0);
    return uVar4;
  }
  return 0;
}


