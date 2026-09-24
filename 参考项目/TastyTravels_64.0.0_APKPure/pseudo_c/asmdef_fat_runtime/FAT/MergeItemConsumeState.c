/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MergeItemConsumeState$$.ctor RVA 0x1e0c450 =====

void FUN_01e1c450(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = 0x41200000;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MergeItemConsumeState$$OnEnter RVA 0x1e0c484 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1c484(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint in_fpscr;
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
  
  pcVar4 = (char *)(_UNK_01e1c61c + 0x1e1c49c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1c620 + 0x1e1c4b0));
    func_0x01384978(*(undefined4 *)(_UNK_01e1c624 + 0x1e1c4bc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa0b5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa0b5,0);
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
    return;
  }
  FUN_01e1c2e0(param_1);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x38);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar2 = *(undefined4 **)(_UNK_01e1c628 + 0x1e1c554);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar1 + 0x30);
  iVar1 = func_0x03668dfc(*puVar2);
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x0244fc34(iVar5,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_01de36f0(iVar1,uVar6,0);
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0210cd7c(&uStack_18,iVar1,0);
  uVar6 = VectorSignedToFloat(uStack_18,(byte)(in_fpscr >> 0x16) & 3);
  uVar3 = VectorSignedToFloat(uStack_14,(byte)(in_fpscr >> 0x16) & 3);
  if (*(int *)(**(int **)(_UNK_01e1c62c + 0x1e1c5dc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  FUN_01dd99a8(&uStack_18,uVar6,uVar3,0);
  *(undefined4 *)(param_1 + 0x18) = uStack_18;
  *(undefined4 *)(param_1 + 0x1c) = uStack_14;
  return;
}



// ===== FAT.MergeItemConsumeState$$Update RVA 0x1e0c630 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e1c630(int param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  
  pcVar7 = (char *)(_UNK_01e1c850 + 0x1e1c650);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e1c854 + 0x1e1c664));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xa0b7,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xa0b7,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    fStack_30 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    fStack_2c = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    fStack_30 = fStack_48;
    fStack_2c = (float)uStack_44;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485258(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar3 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
    uVar8 = func_0x0245498c(&uStack_38,0,0);
    return uVar8;
  }
  uVar8 = 0xb;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    piVar4 = (int *)func_0x0244fc34(iVar3,0);
    if ((piVar4 == (int *)0x0) || (*piVar4 != **(int **)(_UNK_01e1c858 + 0x1e1c704))) {
      func_0x01384bf0();
      bVar2 = true;
      piVar4 = (int *)0x0;
    }
    else {
      bVar2 = false;
    }
    func_0x0244fd6c(&fStack_30,piVar4,0);
    fVar10 = *(float *)(param_1 + 0x14) * param_2;
    bVar1 = 0.0 <= fVar10;
    if (1.0 < fVar10) {
      fVar10 = 1.0;
    }
    fVar11 = _UNK_01e1c84c;
    if (bVar1) {
      fVar11 = fVar10;
    }
    fVar9 = fStack_2c + (*(float *)(param_1 + 0x1c) - fStack_2c) * fVar11;
    fVar10 = fStack_30 + (*(float *)(param_1 + 0x18) - fStack_30) * fVar11;
    if (bVar2) {
      func_0x01384bf0();
      func_0x0244fdbc(piVar4,fVar10,fVar9,0);
      func_0x01384bf0();
    }
    else {
      func_0x0244fdbc(piVar4,fVar10,fVar9,0);
    }
    func_0x0244fd6c(&fStack_30,piVar4,0);
    if (ABS(fStack_30 - *(float *)(param_1 + 0x18)) < *(float *)(param_1 + 0x10)) {
      if (bVar2) {
        func_0x01384bf0();
      }
      func_0x0244fd6c(&fStack_30,piVar4,0);
      if (ABS(fStack_2c - *(float *)(param_1 + 0x1c)) < *(float *)(param_1 + 0x10)) {
        return 0xb;
      }
    }
    uVar8 = FUN_01e1c378(param_1,param_2);
  }
  return uVar8;
}



// ===== FAT.MergeItemConsumeState$$<>iFixBaseProxy_OnEnter RVA 0x1e0c85c =====

void thunk_FUN_01e1c2e0(undefined4 param_1)

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



// ===== FAT.MergeItemConsumeState$$<>iFixBaseProxy_Update RVA 0x1e0c860 =====

undefined4 thunk_FUN_01e1c378(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xa0b3,0);
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


