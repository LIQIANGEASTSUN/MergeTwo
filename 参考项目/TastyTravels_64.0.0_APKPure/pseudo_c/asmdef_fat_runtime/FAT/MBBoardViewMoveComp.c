/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardViewMoveComp$$get_uiBase RVA 0x1ef9b00 =====

undefined4 FUN_01f09b00(int param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



// ===== FAT.MBBoardViewMoveComp$$set_uiBase RVA 0x1ef9b08 =====

void FUN_01f09b08(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = param_2;
  return;
}



// ===== FAT.MBBoardViewMoveComp$$get_IsPlayingMove RVA 0x1ef9b10 =====

uint FUN_01f09b10(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x79d4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x79d4,0);
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
  return (uint)*(byte *)(param_1 + 0x60);
}



// ===== FAT.MBBoardViewMoveComp$$Update RVA 0x1ef9b64 =====

void FUN_01f09b64(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xa4f6,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xa4f6,0);
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



// ===== FAT.MBBoardViewMoveComp$$Awake RVA 0x1ef9bb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f09bb0(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01f09c48 + 0x1f09bc4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f09c4c + 0x1f09bd8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa4f7,0);
  if (iVar1 == 0) {
    uVar7 = func_0x02f67194(param_1,**(undefined4 **)(_UNK_01f09c50 + 0x1f09c30));
    *(undefined4 *)(param_1 + 0x58) = uVar7;
    pcVar4 = (char *)(_UNK_01f09ee8 + 0x1f09c6c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f09eec + 0x1f09c80));
      func_0x01384978(*(undefined4 *)(_UNK_01f09ef0 + 0x1f09c8c));
      func_0x01384978(*(undefined4 *)(_UNK_01f09ef4 + 0x1f09c98));
      func_0x01384978(*(undefined4 *)(_UNK_01f09ef8 + 0x1f09ca4));
      func_0x01384978(*(undefined4 *)(_UNK_01f09efc + 0x1f09cb0));
      func_0x01384978(*(undefined4 *)(_UNK_01f09f00 + 0x1f09cbc));
      func_0x01384978(*(undefined4 *)(_UNK_01f09f04 + 0x1f09cc8));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa4f8,0);
    if (iVar1 == 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x54);
      if (*(int *)(**(int **)(_UNK_01f09f08 + 0x1f09d24) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0244fb8c(uVar7,0,0);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f09f0c + 0x1f09d5c));
      func_0x02450b88(iVar1,**(undefined4 **)(_UNK_01f09f10 + 0x1f09d74),0);
      if (iVar1 == 0) {
        func_0x01384bf0();
        iVar5 = func_0x02fe26b4(0,**(undefined4 **)(_UNK_01f09f20 + 0x1f09de0));
        func_0x01384bf0();
        func_0x02fe26b4(0,**(undefined4 **)(_UNK_01f09f24 + 0x1f09dfc));
        func_0x01384bf0();
        func_0x02fe26b4(0,**(undefined4 **)(_UNK_01f09f28 + 0x1f09e14));
        func_0x01384bf0();
      }
      else {
        iVar5 = func_0x02fe26b4(iVar1,**(undefined4 **)(_UNK_01f09f14 + 0x1f09d90));
        func_0x02fe26b4(iVar1,**(undefined4 **)(_UNK_01f09f18 + 0x1f09da8));
        func_0x02fe26b4(iVar1,**(undefined4 **)(_UNK_01f09f1c + 0x1f09dbc));
      }
      func_0x02fe26b4(iVar1,**(undefined4 **)(_UNK_01f09f2c + 0x1f09e2c));
      iVar6 = *(int *)(param_1 + 0x58);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      fVar2 = (float)FUN_01f093d4(iVar6);
      pcVar4 = (char *)(_UNK_01f09f30 + 0x1f09e5c);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f09f34 + 0x1f09e70));
        *pcVar4 = '\x01';
      }
      iVar6 = *(int *)(**(int **)(_UNK_01f09f38 + 0x1f09e88) + 0x5c);
      fVar8 = *(float *)(iVar6 + 8);
      fVar9 = *(float *)(iVar6 + 0xc);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x0244fe5c(iVar5,fVar2 * fVar8,fVar2 * fVar9,0);
      *(int *)(param_1 + 0x54) = iVar1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_05189da8)(iVar1,0,0);
      return;
    }
    iVar1 = func_0x0229f13c(0xa4f8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa4f7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.MBBoardViewMoveComp$$CreateTempIconPrefab RVA 0x1ef9c54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f09c54(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01f09ee8 + 0x1f09c6c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f09eec + 0x1f09c80));
    func_0x01384978(*(undefined4 *)(_UNK_01f09ef0 + 0x1f09c8c));
    func_0x01384978(*(undefined4 *)(_UNK_01f09ef4 + 0x1f09c98));
    func_0x01384978(*(undefined4 *)(_UNK_01f09ef8 + 0x1f09ca4));
    func_0x01384978(*(undefined4 *)(_UNK_01f09efc + 0x1f09cb0));
    func_0x01384978(*(undefined4 *)(_UNK_01f09f00 + 0x1f09cbc));
    func_0x01384978(*(undefined4 *)(_UNK_01f09f04 + 0x1f09cc8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa4f8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa4f8,0);
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  uVar7 = *(undefined4 *)(param_1 + 0x54);
  if (*(int *)(**(int **)(_UNK_01f09f08 + 0x1f09d24) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0244fb8c(uVar7,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f09f0c + 0x1f09d5c));
    func_0x02450b88(iVar1,**(undefined4 **)(_UNK_01f09f10 + 0x1f09d74),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar5 = func_0x02fe26b4(0,**(undefined4 **)(_UNK_01f09f20 + 0x1f09de0));
      func_0x01384bf0();
      func_0x02fe26b4(0,**(undefined4 **)(_UNK_01f09f24 + 0x1f09dfc));
      func_0x01384bf0();
      func_0x02fe26b4(0,**(undefined4 **)(_UNK_01f09f28 + 0x1f09e14));
      func_0x01384bf0();
    }
    else {
      iVar5 = func_0x02fe26b4(iVar1,**(undefined4 **)(_UNK_01f09f14 + 0x1f09d90));
      func_0x02fe26b4(iVar1,**(undefined4 **)(_UNK_01f09f18 + 0x1f09da8));
      func_0x02fe26b4(iVar1,**(undefined4 **)(_UNK_01f09f1c + 0x1f09dbc));
    }
    func_0x02fe26b4(iVar1,**(undefined4 **)(_UNK_01f09f2c + 0x1f09e2c));
    iVar6 = *(int *)(param_1 + 0x58);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    fVar2 = (float)FUN_01f093d4(iVar6);
    pcVar4 = (char *)(_UNK_01f09f30 + 0x1f09e5c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f09f34 + 0x1f09e70));
      *pcVar4 = '\x01';
    }
    iVar6 = *(int *)(**(int **)(_UNK_01f09f38 + 0x1f09e88) + 0x5c);
    fVar8 = *(float *)(iVar6 + 8);
    fVar9 = *(float *)(iVar6 + 0xc);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x0244fe5c(iVar5,fVar2 * fVar8,fVar2 * fVar9,0);
    *(int *)(param_1 + 0x54) = iVar1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    (*(code *)&UNK_05189da8)(iVar1,0,0);
    return;
  }
  return;
}



// ===== FAT.MBBoardViewMoveComp$$AccumulateCollectIcons RVA 0x1ef9f3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f09f3c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
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
  
  pcVar7 = (char *)(_UNK_01f0a174 + 0x1f09f58);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0a178 + 0x1f09f6c));
    func_0x01384978(*(undefined4 *)(_UNK_01f0a17c + 0x1f09f78));
    func_0x01384978(*(undefined4 *)(_UNK_01f0a180 + 0x1f09f84));
    func_0x01384978(*(undefined4 *)(_UNK_01f0a184 + 0x1f09f90));
    func_0x01384978(*(undefined4 *)(_UNK_01f0a188 + 0x1f09f9c));
    func_0x01384978(*(undefined4 *)(_UNK_01f0a18c + 0x1f09fa8));
    func_0x01384978(*(undefined4 *)(_UNK_01f0a190 + 0x1f09fb4));
    func_0x01384978(*(undefined4 *)(_UNK_01f0a194 + 0x1f09fc0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7a19,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7a19,0);
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
    return;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x6c);
    uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01f0a198 + 0x1f0a028));
    func_0x0328ea74(uVar8,param_2,**(undefined4 **)(_UNK_01f0a19c + 0x1f0a044));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(uint *)(iVar1 + 0xc);
    piVar3 = *(int **)(_UNK_01f0a1a0 + 0x1f0a078);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    iVar10 = *piVar3;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (uVar5 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar5 + 1;
      *(undefined4 *)(iVar6 + uVar5 * 4 + 0x10) = uVar8;
    }
    else {
      func_0x0328f170(iVar1,uVar8,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
    }
    iVar1 = *(int *)(param_1 + 0x6c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar9 = *(undefined4 **)(_UNK_01f0a1a4 + 0x1f0a0d8);
    uStack_24 = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(param_1 + 0x68) = uStack_24;
    uVar8 = func_0x01384abc(*puVar9,&uStack_24);
    uStack_28 = *(undefined4 *)(param_2 + 0xc);
    uVar4 = func_0x01384abc(*puVar9,&uStack_28);
    uStack_2c = *(undefined4 *)(param_1 + 0x68);
    uVar2 = func_0x01384abc(*puVar9,&uStack_2c);
    uStack_30 = 0;
    uVar8 = func_0x02450228(**(undefined4 **)(_UNK_01f0a1a8 + 0x1f0a134),uVar8,uVar4,uVar2);
    if (*(int *)(**(int **)(_UNK_01f0a1ac + 0x1f0a150) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02450924(uVar8,0);
  }
  return;
}



// ===== FAT.MBBoardViewMoveComp$$Execute RVA 0x1efa1b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0a1b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar3;
  int iVar4;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01f0a27c + 0x1f0a1c4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0a280 + 0x1f0a1d8));
    func_0x01384978(*(undefined4 *)(_UNK_01f0a284 + 0x1f0a1e4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7a1b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7a1b,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 < 1) {
    if (*(int *)(**(int **)(_UNK_01f0a288 + 0x1f0a254) + 0x74) == 0) {
      func_0x01384ab4();
    }
    (*(code *)&UNK_0515b894)(**(undefined4 **)(_UNK_01f0a28c + 0x1f0a274),0);
    return;
  }
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  iVar4 = func_0x0229f06c(0x7a1c,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x7a1c,0);
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
    uVar6 = *(undefined4 *)(iVar4 + 0xc);
    iVar1 = *(int *)(iVar4 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar2,0,0);
    return;
  }
  func_0x01f0b928(param_1);
  if (iVar1 == 3) {
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(param_1 + 0x4c);
  }
  else if (iVar1 == 2) {
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(param_1 + 0x48);
  }
  else if (iVar1 == 1) {
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(param_1 + 0x44);
  }
  else {
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(param_1 + 0x50);
  }
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x01bf3284(iVar4,uVar6,0);
  func_0x01f0ba20(param_1,iVar1);
  uVar6 = func_0x01f0cfe0(param_1);
  uVar6 = func_0x02450640(param_1,uVar6,0);
  *(undefined4 *)(param_1 + 0x70) = uVar6;
  return;
}



// ===== FAT.MBBoardViewMoveComp$$ExecuteMoveUp RVA 0x1efa290 =====

void FUN_01f0a290(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x7a1c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7a1c,0);
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
  func_0x01f0b928(param_1);
  if (param_2 == 3) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = *(undefined4 *)(param_1 + 0x4c);
  }
  else if (param_2 == 2) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = *(undefined4 *)(param_1 + 0x48);
  }
  else if (param_2 == 1) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = *(undefined4 *)(param_1 + 0x44);
  }
  else {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = *(undefined4 *)(param_1 + 0x50);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01bf3284(iVar1,uVar4,0);
  func_0x01f0ba20(param_1,param_2);
  uVar4 = func_0x01f0cfe0(param_1);
  uVar4 = func_0x02450640(param_1,uVar4,0);
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  return;
}



// ===== FAT.MBBoardViewMoveComp$$ManualEndMoveUpProcess RVA 0x1efa3c0 =====

/* WARNING: Possible PIC construction at 0x01f0a54c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f0a550) */
/* WARNING: Removing unreachable block (ram,0x01f0aabc) */
/* WARNING: Removing unreachable block (ram,0x01f0aac8) */
/* WARNING: Removing unreachable block (ram,0x01f0aad0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0a3c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_r4;
  char *pcVar7;
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  undefined4 uVar8;
  int unaff_r7;
  undefined4 unaff_r8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 unaff_lr;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  
  iVar1 = func_0x0229f06c(0xa4f9,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x70) != 0) {
      func_0x02450608(param_1,*(int *)(param_1 + 0x70),0);
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    pcVar7 = (char *)(_UNK_01f0ad10 + 0x1f0a458);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f0ad14 + 0x1f0a46c));
      func_0x01384978(*(undefined4 *)(_UNK_01f0ad18 + 0x1f0a478));
      func_0x01384978(*(undefined4 *)(_UNK_01f0ad1c + 0x1f0a484));
      func_0x01384978(*(undefined4 *)(_UNK_01f0ad20 + 0x1f0a490));
      func_0x01384978(*(undefined4 *)(_UNK_01f0ad24 + 0x1f0a49c));
      func_0x01384978(*(undefined4 *)(_UNK_01f0ad28 + 0x1f0a4a8));
      func_0x01384978(*(undefined4 *)(_UNK_01f0ad2c + 0x1f0a4b4));
      func_0x01384978(*(undefined4 *)(_UNK_01f0ad30 + 0x1f0a4c0));
      func_0x01384978(*(undefined4 *)(_UNK_01f0ad34 + 0x1f0a4cc));
      func_0x01384978(*(undefined4 *)(_UNK_01f0ad38 + 0x1f0a4d8));
      func_0x01384978(*(undefined4 *)(_UNK_01f0ad3c + 0x1f0a4e4));
      func_0x01384978(*(undefined4 *)(_UNK_01f0ad40 + 0x1f0a4f0));
      *pcVar7 = '\x01';
    }
    uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_4c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    unaff_r6 = &uStack_58;
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    iStack_3c = iStack_4c;
    iVar1 = func_0x0229f06c(0x7a39,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x38);
      pcVar7 = (char *)(_UNK_01f0ad44 + 0x1f0a564);
      *(undefined1 *)(param_1 + 0x74) = 0;
      iStack_6c = param_1;
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f0ad48 + 0x1f0a580));
        *pcVar7 = '\x01';
      }
      piVar12 = *(int **)(_UNK_01f0ad4c + 0x1f0a598);
      puVar2 = *(undefined4 **)(*piVar12 + 0x5c);
      uVar8 = *puVar2;
      uVar6 = puVar2[1];
      uVar9 = puVar2[2];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_78 = 0;
      func_0x0245068c(iVar1,uVar8,uVar6,uVar9);
      iVar1 = iStack_6c;
      piVar10 = *(int **)(_UNK_01f0ad50 + 0x1f0a5d0);
      uVar8 = *(undefined4 *)(iStack_6c + 0x3c);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar4 = func_0x0145b1cc(uVar8,0,0);
      if (iVar4 != 0) {
        iVar1 = *(int *)(iVar1 + 0x3c);
        if (*pcVar7 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01f0ad54 + 0x1f0a61c));
          *pcVar7 = '\x01';
        }
        puVar2 = *(undefined4 **)(*piVar12 + 0x5c);
        uVar8 = *puVar2;
        uVar6 = puVar2[1];
        uVar9 = puVar2[2];
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_78 = 0;
        func_0x0245068c(iVar1,uVar8,uVar6,uVar9);
        iVar1 = iStack_6c;
      }
      iVar4 = *(int *)(iVar1 + 0x58);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar8 = FUN_01f08f90(iVar4);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar4 = func_0x0145b1cc(uVar8,0,0);
      if (iVar4 != 0) {
        iVar4 = *(int *)(iVar1 + 0x58);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = FUN_01f08f90(iVar4);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        piVar3 = (int *)func_0x0244fc34(iVar4,0);
        piVar12 = (int *)0x0;
        if ((piVar3 != (int *)0x0) &&
           (piVar12 = piVar3, *piVar3 != **(int **)(_UNK_01f0ad58 + 0x1f0a6f0))) {
          piVar12 = (int *)0x0;
        }
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar4 = func_0x0145b1cc(piVar12,0,0);
        if (iVar4 != 0) {
          pcVar7 = (char *)(_UNK_01f0ad5c + 0x1f0a738);
          if (*pcVar7 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01f0ad60 + 0x1f0a74c));
            *pcVar7 = '\x01';
          }
          piVar3 = *(int **)(_UNK_01f0ad64 + 0x1f0a764);
          puVar2 = *(undefined4 **)(*piVar3 + 0x5c);
          uVar8 = *puVar2;
          uVar6 = puVar2[1];
          if (piVar12 == (int *)0x0) {
            func_0x01384bf0();
          }
          func_0x024522b0(piVar12,uVar8,uVar6,0);
          if (*pcVar7 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01f0ad68 + 0x1f0a7a0));
            *pcVar7 = '\x01';
          }
          puVar2 = *(undefined4 **)(*piVar3 + 0x5c);
          uVar8 = *puVar2;
          uVar6 = puVar2[1];
          if (piVar12 == (int *)0x0) {
            func_0x01384bf0();
          }
          func_0x024522d0(piVar12,uVar8,uVar6,0);
          iVar1 = iStack_6c;
        }
        uVar8 = *(undefined4 *)(iVar1 + 0x34);
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar4 = func_0x0145b1cc(uVar8,0,0);
        if (iVar4 != 0) {
          iVar4 = func_0x01c24918(0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(iVar4 + 0x4c);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x01dbb000(iVar4,0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x02139cf4(iVar4,0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x020da680(&uStack_68,iVar4,0);
          fVar14 = (float)VectorSignedToFloat(uStack_68,(byte)(in_fpscr >> 0x16) & 3);
          iVar4 = *(int *)(iVar1 + 0x34);
          fVar15 = (float)VectorSignedToFloat(uStack_64,(byte)(in_fpscr >> 0x16) & 3);
          func_0x01f0b848(&uStack_68,iVar1,*(undefined1 *)(iVar1 + 0x89));
          uVar6 = uStack_64;
          uVar8 = uStack_68;
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          uStack_74 = 0;
          uStack_78 = uVar6;
          func_0x02681f14(iVar4,fVar14 * 0.5,fVar15 * 0.5,uVar8);
          iVar1 = iStack_6c;
        }
      }
      uVar8 = *(undefined4 *)(iVar1 + 0x30);
      iVar4 = *(int *)(*piVar10 + 0x74);
      *(undefined1 *)(iVar1 + 0x88) = *(undefined1 *)(iVar1 + 0x89);
      if (iVar4 == 0) {
        func_0x01384ab4();
      }
      iVar4 = func_0x0145b1cc(uVar8,0,0);
      if (iVar4 != 0) {
        iVar4 = *(int *)(iVar1 + 0x30);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x02450404(iVar4,0,0);
      }
      iVar1 = *(int *)(iVar1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_68,iVar1,**(undefined4 **)(_UNK_01f0ad6c + 0x1f0a964));
      uStack_48 = uStack_68;
      uStack_44 = uStack_64;
      uStack_40 = uStack_60;
      iStack_3c = iStack_5c;
      puVar11 = *(undefined4 **)(_UNK_01f0ad70 + 0x1f0a984);
      puVar13 = *(undefined4 **)(_UNK_01f0ad74 + 0x1f0a98c);
      puVar2 = *(undefined4 **)(_UNK_01f0ad78 + 0x1f0a994);
      while (iVar4 = func_0x0145b12c(&uStack_48,*puVar11), iVar1 = iStack_3c, iVar4 != 0) {
        if (iStack_3c == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&uStack_68,iVar1,*puVar13);
        uStack_58 = uStack_68;
        uStack_54 = uStack_64;
        uStack_50 = uStack_60;
        iStack_4c = iStack_5c;
        while (iVar4 = func_0x0145b12c(unaff_r6,*puVar2), iVar1 = iStack_4c, iVar4 != 0) {
          if (*(int *)(*piVar10 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar4 = func_0x0145b1cc(iVar1,0,0);
          if (iVar4 != 0) {
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar8 = func_0x0244ffd4(iVar1,0);
            if (*(int *)(*piVar10 + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar4 = func_0x0145b1cc(uVar8,0,0);
            if (iVar4 != 0) {
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uVar8 = func_0x0244ffd4(iVar1,0);
              if (*(int *)(*piVar10 + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x01485348(uVar8,0);
            }
          }
        }
        func_0x0145b14c(unaff_r6,**(undefined4 **)(_UNK_01f0ad7c + 0x1f0aaac));
      }
      func_0x0145b14c(&uStack_48,**(undefined4 **)(_UNK_01f0ad80 + 0x1f0ab1c));
      iVar1 = iStack_6c;
      iVar4 = *(int *)(iStack_6c + 0x5c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar4 + 0xc);
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
      if (0 < iVar5) {
        func_0x0145b1dc(*(undefined4 *)(iVar4 + 8),0,iVar5,0);
      }
      iVar4 = *(int *)(iVar1 + 0x6c);
      *(undefined4 *)(iVar1 + 0x68) = 0;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar4 + 0xc);
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
      if (0 < iVar5) {
        func_0x0145b1dc(*(undefined4 *)(iVar4 + 8),0,iVar5,0);
      }
      iVar4 = *(int *)(iVar1 + 0x58);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = FUN_01f090e0(iVar4);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      FUN_01e0302c(iVar4,0);
      *(undefined4 *)(iVar1 + 0x70) = 0;
      *(undefined1 *)(iVar1 + 0x60) = 0;
      if (*(int *)(iVar1 + 100) != 0) {
        func_0x01ee4154(*(int *)(iVar1 + 100),0);
      }
      iVar1 = *(int *)(iVar1 + 0x90);
      if (iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x7a39,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1f0a550;
    unaff_r4 = iVar1;
    unaff_r7 = param_1;
    register0x00000054 = (BADSPACEBASE *)&uStack_78;
  }
  else {
    iVar1 = func_0x0229f13c(0xa4f9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 **)((int)register0x00000054 + -0x10) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r5;
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
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar4,uVar8,(undefined1 *)((int)register0x00000054 + -0x30),uVar6);
  return;
}



// ===== FAT.MBBoardViewMoveComp$$EndMoveUpProcess RVA 0x1efa438 =====

/* WARNING: Removing unreachable block (ram,0x01f0aabc) */
/* WARNING: Removing unreachable block (ram,0x01f0aac8) */
/* WARNING: Removing unreachable block (ram,0x01f0aad0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0a438(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  
  pcVar5 = (char *)(_UNK_01f0ad10 + 0x1f0a458);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0ad14 + 0x1f0a46c));
    func_0x01384978(*(undefined4 *)(_UNK_01f0ad18 + 0x1f0a478));
    func_0x01384978(*(undefined4 *)(_UNK_01f0ad1c + 0x1f0a484));
    func_0x01384978(*(undefined4 *)(_UNK_01f0ad20 + 0x1f0a490));
    func_0x01384978(*(undefined4 *)(_UNK_01f0ad24 + 0x1f0a49c));
    func_0x01384978(*(undefined4 *)(_UNK_01f0ad28 + 0x1f0a4a8));
    func_0x01384978(*(undefined4 *)(_UNK_01f0ad2c + 0x1f0a4b4));
    func_0x01384978(*(undefined4 *)(_UNK_01f0ad30 + 0x1f0a4c0));
    func_0x01384978(*(undefined4 *)(_UNK_01f0ad34 + 0x1f0a4cc));
    func_0x01384978(*(undefined4 *)(_UNK_01f0ad38 + 0x1f0a4d8));
    func_0x01384978(*(undefined4 *)(_UNK_01f0ad3c + 0x1f0a4e4));
    func_0x01384978(*(undefined4 *)(_UNK_01f0ad40 + 0x1f0a4f0));
    *pcVar5 = '\x01';
  }
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_4c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_58 = 0;
  uStack_44 = uStack_54;
  uStack_40 = uStack_50;
  iStack_3c = iStack_4c;
  iVar1 = func_0x0229f06c(0x7a39,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    pcVar5 = (char *)(_UNK_01f0ad44 + 0x1f0a564);
    *(undefined1 *)(param_1 + 0x74) = 0;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f0ad48 + 0x1f0a580));
      *pcVar5 = '\x01';
    }
    piVar11 = *(int **)(_UNK_01f0ad4c + 0x1f0a598);
    puVar2 = *(undefined4 **)(*piVar11 + 0x5c);
    uVar6 = *puVar2;
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0245068c(iVar1,uVar6,uVar7,uVar8,0);
    piVar9 = *(int **)(_UNK_01f0ad50 + 0x1f0a5d0);
    uVar6 = *(undefined4 *)(param_1 + 0x3c);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar6,0,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x3c);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f0ad54 + 0x1f0a61c));
        *pcVar5 = '\x01';
      }
      puVar2 = *(undefined4 **)(*piVar11 + 0x5c);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0245068c(iVar1,uVar6,uVar7,uVar8,0);
    }
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = FUN_01f08f90(iVar1);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar6,0,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_01f08f90(iVar1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar3 = (int *)func_0x0244fc34(iVar1,0);
      piVar11 = (int *)0x0;
      if ((piVar3 != (int *)0x0) &&
         (piVar11 = piVar3, *piVar3 != **(int **)(_UNK_01f0ad58 + 0x1f0a6f0))) {
        piVar11 = (int *)0x0;
      }
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0145b1cc(piVar11,0,0);
      if (iVar1 != 0) {
        pcVar5 = (char *)(_UNK_01f0ad5c + 0x1f0a738);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01f0ad60 + 0x1f0a74c));
          *pcVar5 = '\x01';
        }
        piVar3 = *(int **)(_UNK_01f0ad64 + 0x1f0a764);
        puVar2 = *(undefined4 **)(*piVar3 + 0x5c);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        if (piVar11 == (int *)0x0) {
          func_0x01384bf0();
        }
        func_0x024522b0(piVar11,uVar6,uVar7,0);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01f0ad68 + 0x1f0a7a0));
          *pcVar5 = '\x01';
        }
        puVar2 = *(undefined4 **)(*piVar3 + 0x5c);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        if (piVar11 == (int *)0x0) {
          func_0x01384bf0();
        }
        func_0x024522d0(piVar11,uVar6,uVar7,0);
      }
      uVar6 = *(undefined4 *)(param_1 + 0x34);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0145b1cc(uVar6,0,0);
      if (iVar1 != 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x4c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01dbb000(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02139cf4(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x020da680(&uStack_68,iVar1,0);
        fVar13 = (float)VectorSignedToFloat(uStack_68,(byte)(in_fpscr >> 0x16) & 3);
        iVar1 = *(int *)(param_1 + 0x34);
        fVar14 = (float)VectorSignedToFloat(uStack_64,(byte)(in_fpscr >> 0x16) & 3);
        func_0x01f0b848(&uStack_68,param_1,*(undefined1 *)(param_1 + 0x89));
        uVar7 = uStack_64;
        uVar6 = uStack_68;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02681f14(iVar1,fVar13 * 0.5,fVar14 * 0.5,uVar6,uVar7,0);
      }
    }
    uVar6 = *(undefined4 *)(param_1 + 0x30);
    iVar1 = *(int *)(*piVar9 + 0x74);
    *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_1 + 0x89);
    if (iVar1 == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar6,0,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x30);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02450404(iVar1,0,0);
    }
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_68,iVar1,**(undefined4 **)(_UNK_01f0ad6c + 0x1f0a964));
    uStack_48 = uStack_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    iStack_3c = iStack_5c;
    puVar10 = *(undefined4 **)(_UNK_01f0ad70 + 0x1f0a984);
    puVar12 = *(undefined4 **)(_UNK_01f0ad74 + 0x1f0a98c);
    puVar2 = *(undefined4 **)(_UNK_01f0ad78 + 0x1f0a994);
    while (iVar4 = func_0x0145b12c(&uStack_48,*puVar10), iVar1 = iStack_3c, iVar4 != 0) {
      if (iStack_3c == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_68,iVar1,*puVar12);
      uStack_58 = uStack_68;
      uStack_54 = uStack_64;
      uStack_50 = uStack_60;
      iStack_4c = iStack_5c;
      while (iVar4 = func_0x0145b12c(&uStack_58,*puVar2), iVar1 = iStack_4c, iVar4 != 0) {
        if (*(int *)(*piVar9 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar4 = func_0x0145b1cc(iVar1,0,0);
        if (iVar4 != 0) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar6 = func_0x0244ffd4(iVar1,0);
          if (*(int *)(*piVar9 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar4 = func_0x0145b1cc(uVar6,0,0);
          if (iVar4 != 0) {
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar6 = func_0x0244ffd4(iVar1,0);
            if (*(int *)(*piVar9 + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x01485348(uVar6,0);
          }
        }
      }
      func_0x0145b14c(&uStack_58,**(undefined4 **)(_UNK_01f0ad7c + 0x1f0aaac));
    }
    func_0x0145b14c(&uStack_48,**(undefined4 **)(_UNK_01f0ad80 + 0x1f0ab1c));
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar4) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
    }
    iVar1 = *(int *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar4) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
    }
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01f090e0(iVar1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01e0302c(iVar1,0);
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined1 *)(param_1 + 0x60) = 0;
    if (*(int *)(param_1 + 100) != 0) {
      func_0x01ee4154(*(int *)(param_1 + 100),0);
    }
    iVar1 = *(int *)(param_1 + 0x90);
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7a39,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardViewMoveComp$$ResetToInitialState RVA 0x1efad94 =====

/* WARNING: Removing unreachable block (ram,0x01f0b098) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0ad94(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  
  pcVar5 = (char *)(_UNK_01f0b7b8 + 0x1f0adb4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0b7bc + 0x1f0adc8));
    func_0x01384978(*(undefined4 *)(_UNK_01f0b7c0 + 0x1f0add4));
    func_0x01384978(*(undefined4 *)(_UNK_01f0b7c4 + 0x1f0ade0));
    func_0x01384978(*(undefined4 *)(_UNK_01f0b7c8 + 0x1f0adec));
    func_0x01384978(*(undefined4 *)(_UNK_01f0b7cc + 0x1f0adf8));
    func_0x01384978(*(undefined4 *)(_UNK_01f0b7d0 + 0x1f0ae04));
    func_0x01384978(*(undefined4 *)(_UNK_01f0b7d4 + 0x1f0ae10));
    func_0x01384978(*(undefined4 *)(_UNK_01f0b7d8 + 0x1f0ae1c));
    func_0x01384978(*(undefined4 *)(_UNK_01f0b7dc + 0x1f0ae28));
    func_0x01384978(*(undefined4 *)(_UNK_01f0b7e0 + 0x1f0ae34));
    func_0x01384978(*(undefined4 *)(_UNK_01f0b7e4 + 0x1f0ae40));
    func_0x01384978(*(undefined4 *)(_UNK_01f0b7e8 + 0x1f0ae4c));
    *pcVar5 = '\x01';
  }
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_4c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_58 = 0;
  uStack_44 = uStack_54;
  uStack_40 = uStack_50;
  iStack_3c = iStack_4c;
  iVar1 = func_0x0229f06c(0x79fe,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x70) != 0) {
      func_0x02450608(param_1,*(int *)(param_1 + 0x70),0);
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 0x60) = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar4) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
    }
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_68,iVar1,**(undefined4 **)(_UNK_01f0b7ec + 0x1f0af3c));
    uStack_48 = uStack_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    iStack_3c = iStack_5c;
    puVar11 = *(undefined4 **)(_UNK_01f0b7f0 + 0x1f0af5c);
    puVar12 = *(undefined4 **)(_UNK_01f0b7f4 + 0x1f0af64);
    puVar9 = *(undefined4 **)(_UNK_01f0b7f8 + 0x1f0af6c);
    piVar8 = *(int **)(_UNK_01f0b7fc + 0x1f0af74);
    while (iVar4 = func_0x0145b12c(&uStack_48,*puVar11), iVar1 = iStack_3c, iVar4 != 0) {
      if (iStack_3c == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_68,iVar1,*puVar12);
      uStack_58 = uStack_68;
      uStack_54 = uStack_64;
      uStack_50 = uStack_60;
      iStack_4c = iStack_5c;
      while (iVar4 = func_0x0145b12c(&uStack_58,*puVar9), iVar1 = iStack_4c, iVar4 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar4 = func_0x0145b1cc(iVar1,0,0);
        if (iVar4 != 0) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar2 = func_0x0244ffd4(iVar1,0);
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar4 = func_0x0145b1cc(uVar2,0,0);
          if (iVar4 != 0) {
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar2 = func_0x0244ffd4(iVar1,0);
            if (*(int *)(*piVar8 + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x01485348(uVar2,0);
          }
        }
      }
      func_0x0145b14c(&uStack_58,**(undefined4 **)(_UNK_01f0b800 + 0x1f0b088));
    }
    func_0x0145b14c(&uStack_48,**(undefined4 **)(_UNK_01f0b804 + 0x1f0b0ec));
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar4) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar2,0,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x38);
      pcVar5 = (char *)(_UNK_01f0b810 + 0x1f0b178);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f0b814 + 0x1f0b18c));
        *pcVar5 = '\x01';
      }
      puVar9 = *(undefined4 **)(**(int **)(_UNK_01f0b818 + 0x1f0b1a4) + 0x5c);
      uVar2 = *puVar9;
      uVar6 = puVar9[1];
      uVar7 = puVar9[2];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0245068c(iVar1,uVar2,uVar6,uVar7,0);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar2,0,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x3c);
      pcVar5 = (char *)(_UNK_01f0b81c + 0x1f0b210);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f0b820 + 0x1f0b224));
        *pcVar5 = '\x01';
      }
      piVar10 = *(int **)(_UNK_01f0b824 + 0x1f0b23c);
      puVar9 = *(undefined4 **)(*piVar10 + 0x5c);
      uVar2 = *puVar9;
      uVar6 = puVar9[1];
      uVar7 = puVar9[2];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0245068c(iVar1,uVar2,uVar6,uVar7,0);
      iVar4 = *(int *)(param_1 + 0x3c);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      fVar16 = *(float *)(iVar1 + 0x10);
      pcVar5 = (char *)(_UNK_01f0b828 + 0x1f0b2a4);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f0b82c + 0x1f0b2b8));
        *pcVar5 = '\x01';
      }
      iVar1 = *(int *)(*piVar10 + 0x5c);
      fVar13 = *(float *)(iVar1 + 0xc);
      fVar14 = *(float *)(iVar1 + 0x10);
      fVar15 = *(float *)(iVar1 + 0x14);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x024503a4(iVar4,fVar16 * fVar13,fVar16 * fVar14,fVar16 * fVar15,0);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar2,0,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = FUN_01f08f90(iVar1);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0145b1cc(uVar2,0,0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x58);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_01f08f90(iVar1);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        piVar3 = (int *)func_0x0244fc34(iVar1,0);
        piVar10 = (int *)0x0;
        if ((piVar3 != (int *)0x0) &&
           (piVar10 = piVar3, *piVar3 != **(int **)(_UNK_01f0b830 + 0x1f0b3d8))) {
          piVar10 = (int *)0x0;
        }
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0145b1cc(piVar10,0,0);
        if (iVar1 != 0) {
          pcVar5 = (char *)(_UNK_01f0b834 + 0x1f0b420);
          if (*pcVar5 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01f0b838 + 0x1f0b434));
            *pcVar5 = '\x01';
          }
          piVar3 = *(int **)(_UNK_01f0b83c + 0x1f0b44c);
          puVar9 = *(undefined4 **)(*piVar3 + 0x5c);
          uVar2 = *puVar9;
          uVar6 = puVar9[1];
          if (piVar10 == (int *)0x0) {
            func_0x01384bf0();
          }
          func_0x024522b0(piVar10,uVar2,uVar6,0);
          if (*pcVar5 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01f0b840 + 0x1f0b488));
            *pcVar5 = '\x01';
          }
          puVar9 = *(undefined4 **)(*piVar3 + 0x5c);
          uVar2 = *puVar9;
          uVar6 = puVar9[1];
          if (piVar10 == (int *)0x0) {
            func_0x01384bf0();
          }
          func_0x024522d0(piVar10,uVar2,uVar6,0);
        }
        uVar2 = *(undefined4 *)(param_1 + 0x34);
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0145b1cc(uVar2,0,0);
        if (iVar1 != 0) {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x4c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01dbb000(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02139cf4(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x020da680(&uStack_68,iVar1,0);
          fVar16 = (float)VectorSignedToFloat(uStack_68,(byte)(in_fpscr >> 0x16) & 3);
          iVar1 = *(int *)(param_1 + 0x34);
          fVar13 = (float)VectorSignedToFloat(uStack_64,(byte)(in_fpscr >> 0x16) & 3);
          func_0x01f0b848(&uStack_68,param_1,*(undefined1 *)(param_1 + 0x88));
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x02681f14(iVar1,fVar16 * 0.5,fVar13 * 0.5,uStack_68,uStack_64,0);
        }
      }
    }
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar2,0,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x30);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02450404(iVar1,0,0);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar2,0,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = FUN_01f090e0(iVar1);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0145b1cc(uVar2,0,0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x58);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_01f090e0(iVar1);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        FUN_01e0302c(iVar1,0);
      }
    }
    if (*(int *)(param_1 + 100) != 0) {
      func_0x01ee4154(*(int *)(param_1 + 100),0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x79fe,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.MBBoardViewMoveComp$$GetTillingOffset RVA 0x1efb848 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0b848(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0x79ff,0);
  if (iVar1 == 0) {
    if (param_3 == 0) {
      pcVar5 = (char *)(_UNK_01f0b91c + 0x1f0b8d8);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f0b920 + 0x1f0b8ec));
        *pcVar5 = '\x01';
      }
      puVar3 = *(undefined4 **)(**(int **)(_UNK_01f0b924 + 0x1f0b900) + 0x5c);
      uVar4 = *puVar3;
      uVar2 = puVar3[1];
    }
    else {
      uVar2 = 0x3f000000;
      uVar4 = 0;
    }
    *param_1 = uVar4;
    param_1[1] = uVar2;
  }
  else {
    iVar1 = func_0x0229f13c(0x79ff,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022538ec(&uStack_20,iVar1,param_2,param_3,0);
    *param_1 = uStack_20;
    param_1[1] = uStack_1c;
  }
  return;
}



// ===== FAT.MBBoardViewMoveComp$$StartMoveUpProcess RVA 0x1efb928 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0b928(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01f0ba14 + 0x1f0b93c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0ba18 + 0x1f0b950));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7a1d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7a1d,0);
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
  if (*(char *)(param_1 + 0x60) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  if (*(int *)(param_1 + 100) != 0) {
    func_0x01ee4808(*(int *)(param_1 + 100),0);
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01f0ba1c + 0x1f0b9d0));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01ddf850(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x94);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01f0ba0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.MBBoardViewMoveComp$$InitializeMoveState RVA 0x1efba20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0ba20(int param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  float fVar4;
  int *piVar5;
  int *piVar6;
  float fVar7;
  float *pfVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int iStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  
  pcVar10 = (char *)(_UNK_01f0c7e0 + 0x1f0ba44);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0c7e4 + 0x1f0ba58));
    func_0x01384978(*(undefined4 *)(_UNK_01f0c7e8 + 0x1f0ba64));
    func_0x01384978(*(undefined4 *)(_UNK_01f0c7ec + 0x1f0ba70));
    func_0x01384978(*(undefined4 *)(_UNK_01f0c7f0 + 0x1f0ba7c));
    func_0x01384978(*(undefined4 *)(_UNK_01f0c7f4 + 0x1f0ba88));
    func_0x01384978(*(undefined4 *)(_UNK_01f0c7f8 + 0x1f0ba94));
    func_0x01384978(*(undefined4 *)(_UNK_01f0c7fc + 0x1f0baa0));
    func_0x01384978(*(undefined4 *)(_UNK_01f0c800 + 0x1f0baac));
    func_0x01384978(*(undefined4 *)(_UNK_01f0c804 + 0x1f0bab8));
    func_0x01384978(*(undefined4 *)(_UNK_01f0c808 + 0x1f0bac4));
    func_0x01384978(*(undefined4 *)(_UNK_01f0c80c + 0x1f0bad0));
    func_0x01384978(*(undefined4 *)(_UNK_01f0c810 + 0x1f0badc));
    func_0x01384978(*(undefined4 *)(_UNK_01f0c814 + 0x1f0bae8));
    func_0x01384978(*(undefined4 *)(_UNK_01f0c818 + 0x1f0baf4));
    func_0x01384978(*(undefined4 *)(_UNK_01f0c81c + 0x1f0bb00));
    *pcVar10 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x7a1e,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x7a1e,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(&stack0xffffffb0,0,param_2,0);
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffc8,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffc8,param_1,0);
    func_0x01485238(&stack0xffffffc8,param_2,0);
    iVar15 = *(int *)(iVar3 + 8);
    uVar16 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar15 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar3 == 0) {
      uVar9 = 2;
    }
    func_0x0245495c(iVar15,uVar16,&stack0xffffffc8,uVar9);
    return;
  }
  uVar16 = *(undefined4 *)(param_1 + 0x30);
  if (*(int *)(**(int **)(_UNK_01f0c820 + 0x1f0bb68) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar3 = func_0x0145b1cc(uVar16,0,0);
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02450404(iVar3,1,0);
  }
  iVar3 = *(int *)(param_1 + 0x5c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar15 = *(int *)(iVar3 + 0xc);
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (0 < iVar15) {
    func_0x0145b1dc(*(undefined4 *)(iVar3 + 8),0,iVar15,0);
  }
  iVar3 = *(int *)(param_1 + 0x58);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  fVar4 = (float)FUN_01f093d4(iVar3);
  fVar22 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  uVar16 = *(undefined4 *)(param_1 + 0x3c);
  if (*(int *)(**(int **)(_UNK_01f0c824 + 0x1f0bc24) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar3 = func_0x0145b1cc(uVar16,0,0);
  if (iVar3 != 0) {
    func_0x01f0c8a0(&fStack_78,param_1,fVar4 * fVar22);
    fVar21 = fStack_70;
    fVar20 = fStack_74;
    fVar18 = fStack_78;
    iVar3 = *(int *)(param_1 + 0x3c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0244fc54(&fStack_78,iVar3,0);
    fVar18 = fVar18 + fStack_78;
    fVar20 = fVar20 + fStack_74;
    fVar21 = fVar21 + fStack_70;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0245068c(iVar3,fVar18,fVar20,fVar21,0);
  }
  fVar18 = _UNK_01f0c0d4;
  iVar3 = 0;
  puVar17 = *(undefined4 **)(_UNK_01f0c828 + 0x1f0bd04);
  while( true ) {
    iVar15 = *(int *)(param_1 + 0x6c);
    if (iVar15 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar15 + 0xc) <= iVar3) break;
    iVar15 = func_0x01384be4(**(undefined4 **)(_UNK_01f0c82c + 0x1f0bd28));
    func_0x0328e950(iVar15,**(undefined4 **)(_UNK_01f0c830 + 0x1f0bd3c));
    iStack_7c = 0;
    fVar20 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
    while( true ) {
      iVar11 = *(int *)(param_1 + 0x6c);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x0328eea8(iVar11,iVar3,*puVar17);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar11 + 0xc) <= iStack_7c) break;
      uVar16 = *(undefined4 *)(param_1 + 0x3c);
      uVar9 = *(undefined4 *)(param_1 + 0x54);
      if (*(int *)(**(int **)(_UNK_01f0c834 + 0x1f0bda8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar11 = func_0x03015f4c(uVar9,uVar16,**(undefined4 **)(_UNK_01f0c838 + 0x1f0bdd0));
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x02fe27b8(iVar11,**(undefined4 **)(_UNK_01f0c83c + 0x1f0bdf4));
      iVar12 = *(int *)(param_1 + 0x6c);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      iVar12 = func_0x0328eea8(iVar12,iVar3,*puVar17);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      uVar16 = func_0x0328eea8(iVar12,iStack_7c,**(undefined4 **)(_UNK_01f0c840 + 0x1f0be3c));
      if (iVar11 == 0) {
        func_0x01384bf0();
        func_0x01f0c988(0,uVar16);
        func_0x01384bf0();
      }
      else {
        func_0x01f0c988(iVar11,uVar16);
      }
      iVar12 = func_0x0244ffd4(iVar11,0);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar12,1,0);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      piVar5 = (int *)func_0x0244fc34(iVar11,0);
      piVar6 = (int *)0x0;
      if ((piVar5 != (int *)0x0) &&
         (piVar6 = piVar5, *piVar5 != **(int **)(_UNK_01f0c844 + 0x1f0bed4))) {
        piVar6 = (int *)0x0;
      }
      iVar12 = func_0x0145b1cc(piVar6,0,0);
      if (iVar12 != 0) {
        iVar12 = *(int *)(param_1 + 0x6c);
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        iVar12 = func_0x0328eea8(iVar12,iVar3,*puVar17);
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        iVar12 = func_0x0328eea8(iVar12,iStack_7c,**(undefined4 **)(_UNK_01f0c848 + 0x1f0bf38));
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&fStack_78,iVar12,0);
        fVar24 = fStack_74;
        fVar21 = fStack_78;
        if (*(int *)(**(int **)(_UNK_01f0c84c + 0x1f0bf78) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar16 = VectorSignedToFloat(fVar24,(byte)(in_fpscr >> 0x16) & 3);
        uVar9 = VectorSignedToFloat(fVar21,(byte)(in_fpscr >> 0x16) & 3);
        func_0x01dd99a8(&fStack_78,uVar9,uVar16,0);
        fVar24 = fStack_74;
        fVar21 = fStack_78;
        uVar16 = *(undefined4 *)(param_1 + 0x3c);
        iVar12 = func_0x03668dfc(**(undefined4 **)(_UNK_01f0c850 + 0x1f0bfb8));
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        uVar9 = func_0x01dd9b34(iVar12,0);
        if (*(int *)(**(int **)(_UNK_01f0c854 + 0x1f0bfec) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar12 = func_0x0145b1cc(uVar16,uVar9,0);
        if (iVar12 == 0) {
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
        }
        else {
          iVar12 = func_0x03668dfc(**(undefined4 **)(_UNK_01f0c858 + 0x1f0c020));
          if (iVar12 == 0) {
            func_0x01384bf0();
          }
          iVar12 = func_0x01dd9b34(iVar12,0);
          if (iVar12 == 0) {
            func_0x01384bf0();
          }
          func_0x0244fc74(&fStack_78,iVar12,fVar21,fVar24,0,0);
          fVar25 = fStack_70;
          fVar24 = fStack_74;
          fVar21 = fStack_78;
          iVar12 = *(int *)(param_1 + 0x3c);
          if (iVar12 == 0) {
            func_0x01384bf0();
          }
          func_0x02450cb0(&fStack_78,iVar12,fVar21,fVar24,fVar25,0);
          fVar24 = fStack_74;
          fVar21 = fStack_78;
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
        }
        func_0x0244fdbc(piVar6,fVar21,fVar24,0);
        puVar17 = *(undefined4 **)(_UNK_01f0c85c + 0x1f0c108);
      }
      iVar12 = func_0x03668dfc(**(undefined4 **)(_UNK_01f0c860 + 0x1f0c110));
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      iVar12 = func_0x01ddbed8(iVar12,0);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      iVar12 = FUN_01f090e0(iVar12);
      iVar13 = *(int *)(param_1 + 0x6c);
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      iVar13 = func_0x0328eea8(iVar13,iVar3,*puVar17);
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      iVar13 = func_0x0328eea8(iVar13,iStack_7c,**(undefined4 **)(_UNK_01f0c864 + 0x1f0c18c));
      if (iVar13 == 0) {
        func_0x01384bf0();
      }
      uVar16 = func_0x0210e5f4(iVar13,0);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      FUN_01e023a8(iVar12,uVar16,0);
      iVar12 = *(int *)(param_1 + 0x58);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      fVar7 = (float)FUN_01f093d4(iVar12);
      fVar23 = *(float *)(param_1 + 0x18);
      func_0x01f0ccfc(&fStack_78,param_1,0x3f800000);
      fVar25 = fStack_70;
      fVar24 = fStack_74;
      fVar21 = fStack_78;
      if (*(char *)(_UNK_01f0c868 + 0x1f0c21c) == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f0c86c + 0x1f0c230));
        *(undefined1 *)(_UNK_01f0c870 + 0x1f0c240) = 1;
      }
      if (*(int *)(**(int **)(_UNK_01f0c874 + 0x1f0c24c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      fVar19 = SQRT(fVar24 * fVar24 + fVar21 * fVar21 + fVar25 * fVar25);
      uVar14 = in_fpscr & 0xfffffff | (uint)(fVar19 < fVar18) << 0x1f |
               (uint)(fVar19 == fVar18) << 0x1e;
      in_fpscr = uVar14 | (uint)(NAN(fVar19) || NAN(fVar18)) << 0x1c;
      bVar1 = (byte)(uVar14 >> 0x18);
      if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
        if (*(char *)(_UNK_01f0c878 + 0x1f0c294) == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01f0c87c + 0x1f0c2a8));
          *(undefined1 *)(_UNK_01f0c880 + 0x1f0c2b8) = 1;
        }
        pfVar8 = *(float **)(**(int **)(_UNK_01f0c884 + 0x1f0c2c4) + 0x5c);
        fVar21 = *pfVar8;
        fVar24 = pfVar8[1];
        fVar25 = pfVar8[2];
      }
      else {
        fVar25 = fVar25 / fVar19;
        fVar24 = fVar24 / fVar19;
        fVar21 = fVar21 / fVar19;
      }
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x01f0cde4(iVar11,fVar7 * (fVar23 + fVar20),fVar21,fVar24,fVar25);
      if (iVar15 == 0) {
        func_0x01384bf0();
      }
      iVar12 = *(int *)(iVar15 + 8);
      uVar14 = *(uint *)(iVar15 + 0xc);
      iVar13 = **(int **)(_UNK_01f0c888 + 0x1f0c338);
      *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x10) + 1;
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      if (uVar14 < *(uint *)(iVar12 + 0xc)) {
        *(uint *)(iVar15 + 0xc) = uVar14 + 1;
        *(int *)(iVar12 + uVar14 * 4 + 0x10) = iVar11;
      }
      else {
        func_0x0328f170(iVar15,iVar11,
                        *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
      }
      iStack_7c = iStack_7c + 1;
    }
    iVar11 = *(int *)(param_1 + 0x5c);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar12 = *(int *)(iVar11 + 8);
    uVar14 = *(uint *)(iVar11 + 0xc);
    piVar6 = *(int **)(_UNK_01f0c88c + 0x1f0c3c4);
    *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
    iVar13 = *piVar6;
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    if (uVar14 < *(uint *)(iVar12 + 0xc)) {
      *(uint *)(iVar11 + 0xc) = uVar14 + 1;
      *(int *)(iVar12 + uVar14 * 4 + 0x10) = iVar15;
    }
    else {
      func_0x0328f170(iVar11,iVar15,*(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38)
                     );
    }
    iVar3 = iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x58);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = FUN_01f090e0(iVar3);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  FUN_01e0302c(iVar3,0);
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fc54(&fStack_78,iVar3,0);
  fVar21 = fStack_70;
  fVar20 = fStack_74;
  fVar18 = fStack_78;
  func_0x01f0c8a0(&fStack_78,param_1,fVar4 * fVar22);
  fVar18 = fVar18 + fStack_78;
  fVar20 = fVar20 + fStack_74;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0245068c(iVar3,fVar18,fVar20,fVar21 + fStack_70,0);
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x4c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x01dbb000(iVar3,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x02139cf4(iVar3,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x020da680(&fStack_78,iVar3,0);
  fVar18 = fStack_74;
  fVar4 = fStack_78;
  uVar2 = func_0x01f0cf54(param_1,param_2);
  uVar16 = *(undefined4 *)(param_1 + 0x34);
  iVar3 = *(int *)(**(int **)(_UNK_01f0c890 + 0x1f0c56c) + 0x74);
  *(undefined1 *)(param_1 + 0x89) = uVar2;
  if (iVar3 == 0) {
    func_0x01384ab4();
  }
  iVar3 = func_0x0145b1cc(uVar16,0,0);
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x34);
    FUN_01f0b848(&fStack_78,param_1,*(undefined1 *)(param_1 + 0x88));
    fVar4 = (float)VectorSignedToFloat(fVar4,(byte)(in_fpscr >> 0x16) & 3);
    fVar18 = (float)VectorSignedToFloat((int)fVar18 + param_2,(byte)(in_fpscr >> 0x16) & 3);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02681f14(iVar3,fVar4 * 0.5,fVar18 * 0.5,fStack_78,fStack_74,0);
  }
  iVar3 = *(int *)(param_1 + 0x58);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar16 = FUN_01f08f90(iVar3);
  if (*(int *)(**(int **)(_UNK_01f0c894 + 0x1f0c63c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar3 = func_0x0145b1cc(uVar16,0,0);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x58);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = FUN_01f08f90(iVar3);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  piVar5 = (int *)func_0x0244fc34(iVar3,0);
  piVar6 = (int *)0x0;
  if ((piVar5 != (int *)0x0) && (piVar6 = piVar5, *piVar5 != **(int **)(_UNK_01f0c898 + 0x1f0c6b0)))
  {
    piVar6 = (int *)0x0;
  }
  if (*(int *)(**(int **)(_UNK_01f0c89c + 0x1f0c6cc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar3 = func_0x0145b1cc(piVar6,0,0);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x58);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  fVar4 = (float)FUN_01f093d4(iVar3);
  fVar4 = fVar4 * fVar22;
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  default:
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    fVar22 = 0.0;
    fVar18 = fVar4;
    break;
  case 1:
    fVar22 = -fVar4;
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    fVar4 = 0.0;
    goto code_r0x01f0c7a0;
  case 2:
    fVar4 = -fVar4;
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    fVar22 = 0.0;
code_r0x01f0c7a0:
    func_0x024522b0(piVar6,fVar4,fVar22,0);
    return;
  case 3:
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    fVar18 = 0.0;
    fVar22 = fVar4;
  }
  func_0x024522d0(piVar6,fVar22,fVar18,0);
  return;
}



// ===== FAT.MBBoardViewMoveComp$$GetInitialOffset RVA 0x1efc8a0 =====

void FUN_01f0c8a0(float *param_1,int param_2,float param_3)

{
  int iVar1;
  undefined8 uStack_28;
  float fStack_20;
  
  iVar1 = func_0x0229f06c(0x7a1f,0);
  if (iVar1 == 0) {
    switch(*(undefined4 *)(param_2 + 0x1c)) {
    default:
      param_1[2] = 0.0;
      *param_1 = 0.0;
      param_1[1] = -param_3;
      break;
    case 1:
      param_1[1] = param_3;
      param_1[2] = 0.0;
      *param_1 = 0.0;
      break;
    case 3:
      param_3 = -param_3;
    case 2:
      *param_1 = param_3;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7a1f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021e1248(&uStack_28,iVar1,param_2,param_3,0);
    param_1[2] = fStack_20;
    *(undefined8 *)param_1 = uStack_28;
  }
  return;
}



// ===== FAT.MBBoardViewMoveComp$$GetTriggerDistanceVector RVA 0x1efccfc =====

void FUN_01f0ccfc(float *param_1,int param_2,float param_3)

{
  int iVar1;
  undefined8 uStack_28;
  float fStack_20;
  
  iVar1 = func_0x0229f06c(0x7a21,0);
  if (iVar1 == 0) {
    switch(*(undefined4 *)(param_2 + 0x1c)) {
    default:
      param_1[1] = param_3;
      param_1[2] = 0.0;
      *param_1 = 0.0;
      break;
    case 1:
      param_1[2] = 0.0;
      *param_1 = 0.0;
      param_1[1] = -param_3;
      break;
    case 2:
      param_3 = -param_3;
    case 3:
      *param_1 = param_3;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7a21,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021e1248(&uStack_28,iVar1,param_2,param_3,0);
    param_1[2] = fStack_20;
    *(undefined8 *)param_1 = uStack_28;
  }
  return;
}



// ===== FAT.MBBoardViewMoveComp$$GetMoveResultHalfOffset RVA 0x1efcf54 =====

uint FUN_01f0cf54(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  iVar2 = func_0x0229f06c(0x7a23,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7a23,0);
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
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar4,0,0);
    uVar3 = func_0x0245496c(&uStack_38,0,0);
    return uVar3;
  }
  iVar2 = func_0x01f0d260(param_1);
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_1 + 0x88);
  }
  else {
    cVar1 = *(char *)(param_1 + 0x88);
    if ((param_2 & 1) != 0) {
      return (uint)(cVar1 == '\0');
    }
  }
  return (uint)(cVar1 != '\0');
}



// ===== FAT.MBBoardViewMoveComp$$CoStartMove RVA 0x1efcfe0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01f0cfe0(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_01f0d084 + 0x1f0cff4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0d088 + 0x1f0d008));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7a25,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7a25,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_021784b0 + 0x21783d0);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021784b4 + 0x21783e4),param_1,0);
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
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021784b8 + 0x21784a0));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f0d08c + 0x1f0d064));
  func_0x0244f5a0(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ===== FAT.MBBoardViewMoveComp.<CoStartMove>d__51$$.ctor RVA 0x1efd090 =====

void FUN_01f0d090(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MBBoardViewMoveComp$$CoBoardMove RVA 0x1efd0ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01f0d0ac(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_01f0d150 + 0x1f0d0c0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0d154 + 0x1f0d0d4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7a29,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7a29,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_021784b0 + 0x21783d0);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021784b4 + 0x21783e4),param_1,0);
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
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021784b8 + 0x21784a0));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f0d158 + 0x1f0d130));
  func_0x0244f5a0(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ===== FAT.MBBoardViewMoveComp.<CoBoardMove>d__52$$.ctor RVA 0x1efd15c =====

void FUN_01f0d15c(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MBBoardViewMoveComp$$GetMoveVector RVA 0x1efd178 =====

void FUN_01f0d178(float *param_1,int param_2,float param_3)

{
  int iVar1;
  undefined8 uStack_28;
  float fStack_20;
  
  iVar1 = func_0x0229f06c(0x7a2d,0);
  if (iVar1 == 0) {
    switch(*(undefined4 *)(param_2 + 0x1c)) {
    default:
      param_1[1] = param_3;
      param_1[2] = 0.0;
      *param_1 = 0.0;
      break;
    case 1:
      param_1[2] = 0.0;
      *param_1 = 0.0;
      param_1[1] = -param_3;
      break;
    case 2:
      param_3 = -param_3;
    case 3:
      *param_1 = param_3;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7a2d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021e1248(&uStack_28,iVar1,param_2,param_3,0);
    param_1[2] = fStack_20;
    *(undefined8 *)param_1 = uStack_28;
  }
  return;
}



// ===== FAT.MBBoardViewMoveComp$$IsVerticalMoveDirection RVA 0x1efd260 =====

uint FUN_01f0d260(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7a24,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7a24,0);
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
  return (uint)(*(uint *)(param_1 + 0x1c) < 2);
}



// ===== FAT.MBBoardViewMoveComp$$PlaySingleRowShake RVA 0x1efd2c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01f0d2c4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01f0d474 + 0x1f0d2dc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0d478 + 0x1f0d2f0));
    func_0x01384978(*(undefined4 *)(_UNK_01f0d47c + 0x1f0d2fc));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7a32,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7a32,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
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
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    iVar2 = func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
    return iVar2;
  }
  uVar7 = *(undefined4 *)(param_1 + 0x40);
  if (*(int *)(**(int **)(_UNK_01f0d480 + 0x1f0d358) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0244fb8c(uVar7,0,0);
  if (iVar2 != 0) {
    return iVar2;
  }
  pcVar5 = (char *)(_UNK_01f0d484 + 0x1f0d398);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0d488 + 0x1f0d3ac));
    *pcVar5 = '\x01';
  }
  if (*(uint *)(param_1 + 0x1c) < 2) {
    uVar7 = *(undefined4 *)(param_1 + 0x24);
    uVar4 = 0;
  }
  else {
    if ((*(uint *)(param_1 + 0x1c) & 0xfffffffe) != 2) {
      puVar3 = *(undefined4 **)(**(int **)(_UNK_01f0d48c + 0x1f0d3f4) + 0x5c);
      uVar7 = *puVar3;
      uVar4 = puVar3[1];
      uStack_30 = puVar3[2];
      goto LAB_01f0d3fc;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x24);
    uVar7 = 0;
  }
  uStack_30 = 0;
LAB_01f0d3fc:
  fVar8 = *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x28);
  uStack_28 = 0x42b40000;
  uStack_24 = 0;
  uStack_20 = 1;
  uStack_1c = 0;
  iStack_2c = (int)fVar8;
  if (fVar8 == _UNK_01f0d470) {
    iStack_2c = -0x80000000;
  }
  iVar2 = func_0x02cf5278(*(undefined4 *)(param_1 + 0x40),*(float *)(param_1 + 0x14),uVar7,uVar4);
  uVar7 = *(undefined4 *)(param_1 + 0x2c);
  pcVar5 = (char *)(_UNK_0309f0dc + 0x309f034);
  cVar1 = *pcVar5;
  if (cVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0309f0e0 + 0x309f048),uVar7,
                    **(undefined4 **)(_UNK_01f0d490 + 0x1f0d464));
    func_0x01384978(*(undefined4 *)(_UNK_0309f0e4 + 0x309f054));
    func_0x01384978(*(undefined4 *)(_UNK_0309f0e8 + 0x309f060));
    cVar1 = '\x01';
    *pcVar5 = '\x01';
  }
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x94);
  }
  if (iVar2 != 0 && cVar1 != '\0') {
    puVar3 = *(undefined4 **)(_UNK_0309f0ec + 0x309f088);
    *(undefined4 *)(iVar2 + 0x74) = 0x25;
    uVar4 = func_0x01384be4(*puVar3);
    func_0x02d1b0e0(uVar4,uVar7,0);
    uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_0309f0f0 + 0x309f0ac));
    func_0x02ce3e5c(uVar7,uVar4,**(undefined4 **)(_UNK_0309f0f4 + 0x309f0c8),0);
    *(undefined4 *)(iVar2 + 0x78) = uVar7;
  }
  return iVar2;
}



// ===== FAT.MBBoardViewMoveComp$$CoRowMoveEffects RVA 0x1efd494 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01f0d494(undefined4 param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01f0d554 + 0x1f0d4b0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0d558 + 0x1f0d4c4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7a2e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7a2e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0217a5a0 + 0x217a4ac);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0217a5a4 + 0x217a4c0),param_1,param_2,0);
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
    func_0x01485258(&uStack_38,param_2,0);
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
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0217a5a8 + 0x217a590));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f0d55c + 0x1f0d52c));
  func_0x0244f5a0(iVar1,0);
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ===== FAT.MBBoardViewMoveComp.<CoRowMoveEffects>d__60$$.ctor RVA 0x1efd560 =====

void FUN_01f0d560(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MBBoardViewMoveComp$$PlayDebugShakeEffect RVA 0x1efd57c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0d57c(int param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  float fVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  
  pcVar5 = (char *)(_UNK_01f0d894 + 0x1f0d59c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0d898 + 0x1f0d5b0));
    func_0x01384978(*(undefined4 *)(_UNK_01f0d89c + 0x1f0d5bc));
    func_0x01384978(*(undefined4 *)(_UNK_01f0d8a0 + 0x1f0d5c8));
    func_0x01384978(*(undefined4 *)(_UNK_01f0d8a4 + 0x1f0d5d4));
    func_0x01384978(*(undefined4 *)(_UNK_01f0d8a8 + 0x1f0d5e0));
    func_0x01384978(*(undefined4 *)(_UNK_01f0d8ac + 0x1f0d5ec));
    func_0x01384978(*(undefined4 *)(_UNK_01f0d8b0 + 0x1f0d5f8));
    func_0x01384978(*(undefined4 *)(_UNK_01f0d8b4 + 0x1f0d604));
    func_0x01384978(*(undefined4 *)(_UNK_01f0d8b8 + 0x1f0d610));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa4fa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa4fa,0);
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
  if (*(char *)(param_1 + 0x20) == '\0') {
    return;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x40);
  if (*(int *)(**(int **)(_UNK_01f0d8bc + 0x1f0d684) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0244fb8c(uVar6,0,0);
  if (iVar1 != 0) {
    return;
  }
  fStack_24 = param_2;
  uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_01f0d8c0 + 0x1f0d6c0),&fStack_24);
  uVar6 = func_0x0244f6a0(**(undefined4 **)(_UNK_01f0d8c4 + 0x1f0d6dc),uVar6,0);
  if (*(int *)(**(int **)(_UNK_01f0d8c8 + 0x1f0d6f0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x02450924(uVar6,0);
  pcVar5 = (char *)(_UNK_01f0d8cc + 0x1f0d718);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0d8d0 + 0x1f0d72c));
    *pcVar5 = '\x01';
  }
  if (*(uint *)(param_1 + 0x1c) < 2) {
    uVar6 = *(undefined4 *)(param_1 + 0x24);
    uVar3 = 0;
  }
  else {
    if ((*(uint *)(param_1 + 0x1c) & 0xfffffffe) != 2) {
      puVar2 = *(undefined4 **)(**(int **)(_UNK_01f0d8d4 + 0x1f0d774) + 0x5c);
      uVar6 = *puVar2;
      uVar3 = puVar2[1];
      uStack_40 = puVar2[2];
      goto LAB_01f0d780;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x24);
    uVar6 = 0;
  }
  uStack_40 = 0;
LAB_01f0d780:
  fVar8 = *(float *)(param_1 + 0x28) * param_2;
  uStack_34 = 0;
  uStack_30 = 1;
  uStack_2c = 0;
  iStack_3c = (int)fVar8;
  if (fVar8 == _UNK_01f0d890) {
    iStack_3c = -0x80000000;
  }
  uStack_38 = 0x42b40000;
  uVar6 = func_0x02cf5278(*(undefined4 *)(param_1 + 0x40),param_2,uVar6,uVar3);
  uVar6 = func_0x0309f01c(uVar6,*(undefined4 *)(param_1 + 0x2c),
                          **(undefined4 **)(_UNK_01f0d8d8 + 0x1f0d7dc));
  piVar7 = *(int **)(_UNK_01f0d8dc + 0x1f0d7f0);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar7;
  }
  iVar4 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar4 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar7;
    }
    uVar3 = **(undefined4 **)(iVar1 + 0x5c);
    iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01f0d8e0 + 0x1f0d838));
    func_0x02ce3d80(iVar4,uVar3,**(undefined4 **)(_UNK_01f0d8e4 + 0x1f0d858),0);
    *(int *)(*(int *)(*piVar7 + 0x5c) + 4) = iVar4;
  }
  func_0x0309ead4(uVar6,iVar4,**(undefined4 **)(_UNK_01f0d8e8 + 0x1f0d87c));
  return;
}



// ===== FAT.MBBoardViewMoveComp$$.ctor RVA 0x1efd8ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0d8ec(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  pcVar5 = (char *)(_UNK_01f0da9c + 0x1f0d904);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0daa0 + 0x1f0d918));
    func_0x01384978(*(undefined4 *)(_UNK_01f0daa4 + 0x1f0d924));
    func_0x01384978(*(undefined4 *)(_UNK_01f0daa8 + 0x1f0d930));
    func_0x01384978(*(undefined4 *)(_UNK_01f0daac + 0x1f0d93c));
    func_0x01384978(*(undefined4 *)(_UNK_01f0dab0 + 0x1f0d948));
    func_0x01384978(*(undefined4 *)(_UNK_01f0dab4 + 0x1f0d954));
    func_0x01384978(*(undefined4 *)(_UNK_01f0dab8 + 0x1f0d960));
    func_0x01384978(*(undefined4 *)(_UNK_01f0dabc + 0x1f0d96c));
    *pcVar5 = '\x01';
  }
  uVar1 = func_0x02452498(0,0,0x3f800000,0x3f800000,0);
  *(undefined4 *)(param_1 + 0x24) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x28) = 0x41200000;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x18) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  uVar1 = func_0x024506bc(0,0,0x3f800000,0x3f800000,0);
  uVar7 = **(undefined4 **)(_UNK_01f0dac0 + 0x1f0d9f4);
  uVar3 = **(undefined4 **)(_UNK_01f0dac4 + 0x1f0da00);
  uVar4 = **(undefined4 **)(_UNK_01f0dac8 + 0x1f0da0c);
  uVar6 = **(undefined4 **)(_UNK_01f0dacc + 0x1f0da18);
  puVar2 = *(undefined4 **)(_UNK_01f0dad0 + 0x1f0da24);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar6;
  *(undefined4 *)(param_1 + 0x44) = *puVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  uVar1 = func_0x01384be4(uVar7);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01f0dad4 + 0x1f0da50));
  puVar2 = *(undefined4 **)(_UNK_01f0dad8 + 0x1f0da64);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01f0dadc + 0x1f0da7c));
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.MBBoardViewMoveComp.<>c$$.cctor RVA 0x1efdae0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0dae0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01f0db38 + 0x1f0daf0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0db3c + 0x1f0db04));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01f0db40 + 0x1f0db18);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.MBBoardViewMoveComp.<>c$$.ctor RVA 0x1efdb44 =====

void FUN_01f0db44(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardViewMoveComp.<>c$$<PlayDebugShakeEffect>b__61_0 RVA 0x1efdb4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0db4c(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01f0dbb8 + 0x1f0db5c);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0dbbc + 0x1f0db70));
    func_0x01384978(*(undefined4 *)(_UNK_01f0dbc0 + 0x1f0db7c));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01f0dbc4 + 0x1f0db90) + 0x74) == 0) {
    func_0x01384ab4();
  }
  (*(code *)&UNK_0515ab30)(**(undefined4 **)(_UNK_01f0dbc8 + 0x1f0dbb0),0);
  return;
}



// ===== FAT.MBBoardViewMoveComp.<CoBoardMove>d__52$$System.IDisposable.Dispose RVA 0x1efdbcc =====

void FUN_01f0dbcc(void)

{
  return;
}



// ===== FAT.MBBoardViewMoveComp.<CoBoardMove>d__52$$MoveNext RVA 0x1efdbd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f0dbd0(int param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  pcVar4 = (char *)(_UNK_01f0df04 + 0x1f0dbec);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0df08 + 0x1f0dc00));
    func_0x01384978(*(undefined4 *)(_UNK_01f0df0c + 0x1f0dc0c));
    func_0x01384978(*(undefined4 *)(_UNK_01f0df10 + 0x1f0dc18));
    *pcVar4 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    *(undefined1 *)(iVar5 + 0x74) = 0;
    return 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar5 + 0x58);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  fVar1 = (float)FUN_01f093d4(iVar6);
  iVar7 = *(int *)(iVar5 + 0x6c);
  iVar6 = iVar7;
  if (iVar7 == 0) {
    func_0x01384bf0();
    iVar6 = *(int *)(iVar5 + 0x6c);
  }
  fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(iVar7 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
  fVar11 = *(float *)(iVar5 + 0x14);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  fVar12 = (float)VectorSignedToFloat(*(undefined4 *)(iVar6 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
  FUN_01f0d178(&uStack_50,iVar5,fVar1 * fVar10);
  iVar6 = *(int *)(iVar5 + 0x38);
  fVar1 = (float)uStack_50;
  fVar10 = uStack_50._4_4_;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  fVar11 = fVar11 * fVar12;
  func_0x0244fc54(&uStack_60,iVar6,0);
  uVar2 = *(uint *)(iVar5 + 0x1c);
  uStack_48 = uStack_58;
  uStack_50 = uStack_60;
  *(undefined4 *)(iVar5 + 0x80) = uStack_58;
  *(undefined8 *)(iVar5 + 0x78) = uStack_60;
  if (uVar2 < 2) {
    iVar6 = *(int *)(iVar5 + 0x38);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
LAB_01f0dd8c:
    func_0x0244fc54(&uStack_50,iVar6,0);
    uVar3 = func_0x02cf3044(iVar6,fVar10 + uStack_50._4_4_,fVar11,0,0);
  }
  else {
    iVar6 = *(int *)(iVar5 + 0x38);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if ((uVar2 & 0xfffffffe) != 2) goto LAB_01f0dd8c;
    func_0x0244fc54(&uStack_50,iVar6,0);
    uVar3 = func_0x02cf2e64(iVar6,fVar1 + (float)uStack_50,fVar11,0,0);
  }
  puVar9 = *(undefined4 **)(_UNK_01f0df14 + 0x1f0ddcc);
  uVar3 = func_0x0309f01c(uVar3,*(undefined4 *)(iVar5 + 0x10),*puVar9);
  uVar8 = *(undefined4 *)(iVar5 + 0x3c);
  if (*(int *)(**(int **)(_UNK_01f0df18 + 0x1f0dde4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar6 = func_0x0145b1cc(uVar8,0,0);
  if (iVar6 == 0) goto LAB_01f0dec0;
  uVar2 = *(uint *)(iVar5 + 0x1c);
  if (uVar2 < 2) {
    iVar6 = *(int *)(iVar5 + 0x3c);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
LAB_01f0de80:
    func_0x0244fc54(&uStack_50,iVar6,0);
    uVar8 = func_0x02cf3044(iVar6,fVar10 + uStack_50._4_4_,fVar11,0,0);
  }
  else {
    iVar6 = *(int *)(iVar5 + 0x3c);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if ((uVar2 & 0xfffffffe) != 2) goto LAB_01f0de80;
    func_0x0244fc54(&uStack_50,iVar6,0);
    uVar8 = func_0x02cf2e64(iVar6,fVar1 + (float)uStack_50,fVar11,0,0);
  }
  func_0x0309f01c(uVar8,*(undefined4 *)(iVar5 + 0x10),*puVar9);
LAB_01f0dec0:
  uVar8 = FUN_01f0d494(iVar5,fVar11);
  func_0x02450640(iVar5,uVar8,0);
  uVar3 = func_0x02ceaf3c(uVar3,0);
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  return 1;
}



// ===== FAT.MBBoardViewMoveComp.<CoBoardMove>d__52$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x1efdf1c =====

undefined4 FUN_01f0df1c(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MBBoardViewMoveComp.<CoBoardMove>d__52$$System.Collections.IEnumerator.Reset RVA 0x1efdf24 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0df24(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x01384988(*(undefined4 *)(_UNK_01f0df60 + 0x1f0df34));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(_UNK_01f0df64 + 0x1f0df50));
  func_0x01384aa0(uVar1,uVar2);
  func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.MBBoardViewMoveComp.<CoBoardMove>d__52$$System.Collections.IEnumerator.get_Current RVA 0x1efdf68 =====

undefined4 FUN_01f0df68(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MBBoardViewMoveComp.<CoRowMoveEffects>d__60$$System.IDisposable.Dispose RVA 0x1efdf70 =====

void FUN_01f0df70(void)

{
  return;
}



// ===== FAT.MBBoardViewMoveComp.<CoRowMoveEffects>d__60$$MoveNext RVA 0x1efdf74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f0df74(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  pcVar1 = (char *)(_UNK_01f0e0d4 + 0x1f0df8c);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0e0d8 + 0x1f0dfa0));
    func_0x01384978(*(undefined4 *)(_UNK_01f0e0dc + 0x1f0dfac));
    *pcVar1 = '\x01';
  }
  uVar5 = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar4 = *(int *)(param_1 + 0x1c) + 1;
    *(int *)(param_1 + 0x1c) = iVar4;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar2 + 0x6c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar4 + 0xc) < 1) {
      return 0;
    }
    iVar4 = *(int *)(iVar2 + 0x6c);
    fVar8 = *(float *)(param_1 + 0x14);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    fVar7 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    *(float *)(param_1 + 0x18) = fVar8 / fVar7;
  }
  iVar3 = *(int *)(iVar2 + 0x6c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  if (iVar4 < *(int *)(iVar3 + 0xc)) {
    iVar4 = *(int *)(iVar2 + 0x98);
    if (iVar4 != 0) {
      (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x14));
    }
    if (*(char *)(iVar2 + 0x20) != '\0') {
      FUN_01f0d2c4(iVar2);
    }
    uVar5 = *(undefined4 *)(param_1 + 0x18);
    uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01f0e0e0 + 0x1f0e0a4));
    func_0x0245031c(uVar6,uVar5,0);
    uVar5 = 1;
    *(undefined4 *)(param_1 + 0xc) = uVar6;
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return uVar5;
}



// ===== FAT.MBBoardViewMoveComp.<CoRowMoveEffects>d__60$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x1efe0e4 =====

undefined4 FUN_01f0e0e4(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MBBoardViewMoveComp.<CoRowMoveEffects>d__60$$System.Collections.IEnumerator.Reset RVA 0x1efe0ec =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0e0ec(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x01384988(*(undefined4 *)(_UNK_01f0e128 + 0x1f0e0fc));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(_UNK_01f0e12c + 0x1f0e118));
  func_0x01384aa0(uVar1,uVar2);
  func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.MBBoardViewMoveComp.<CoRowMoveEffects>d__60$$System.Collections.IEnumerator.get_Current RVA 0x1efe130 =====

undefined4 FUN_01f0e130(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MBBoardViewMoveComp.<CoStartMove>d__51$$System.IDisposable.Dispose RVA 0x1efe138 =====

void FUN_01f0e138(void)

{
  return;
}



// ===== FAT.MBBoardViewMoveComp.<CoStartMove>d__51$$MoveNext RVA 0x1efe13c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f0e13c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  
  pcVar3 = (char *)(_UNK_01f0e2a0 + 0x1f0e154);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0e2a4 + 0x1f0e168));
    func_0x01384978(*(undefined4 *)(_UNK_01f0e2a8 + 0x1f0e174));
    func_0x01384978(*(undefined4 *)(_UNK_01f0e2ac + 0x1f0e180));
    *pcVar3 = '\x01';
  }
  uVar5 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    FUN_01f0a438(iVar4);
  }
  else if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar4 + 0x30);
    if (*(int *)(**(int **)(_UNK_01f0e2b0 + 0x1f0e1c4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar5,0,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar4 + 0x30);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02450404(iVar1,1,0);
    }
    uVar5 = FUN_01f0d0ac(iVar4);
    func_0x02450640(iVar4,uVar5,0);
    iVar1 = *(int *)(iVar4 + 0x6c);
    fVar7 = *(float *)(iVar4 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01f0e2b4 + 0x1f0e250));
    func_0x0245031c(uVar2,fVar7 * fVar6,0);
    uVar5 = 1;
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return uVar5;
}



// ===== FAT.MBBoardViewMoveComp.<CoStartMove>d__51$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x1efe2b8 =====

undefined4 FUN_01f0e2b8(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MBBoardViewMoveComp.<CoStartMove>d__51$$System.Collections.IEnumerator.Reset RVA 0x1efe2c0 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0e2c0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x01384988(*(undefined4 *)(_UNK_01f0e2fc + 0x1f0e2d0));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(_UNK_01f0e300 + 0x1f0e2ec));
  func_0x01384aa0(uVar1,uVar2);
  func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.MBBoardViewMoveComp.<CoStartMove>d__51$$System.Collections.IEnumerator.get_Current RVA 0x1efe304 =====

undefined4 FUN_01f0e304(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


