/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardDrag$$get_IsDraging RVA 0x1de9324 =====

uint FUN_01df9324(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5e83,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e83,0);
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
  return (uint)*(byte *)(param_1 + 0x28);
}



// ===== FAT.MBBoardDrag$$get_mScale RVA 0x1de9378 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01df9378(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
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
  
  pcVar4 = (char *)(_UNK_01df9454 + 0x1df938c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df9458 + 0x1df93a0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f70,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f70,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x024549ac(&uStack_30,0,0);
    return uVar6;
  }
  piVar3 = *(int **)(_UNK_01df945c + 0x1df93f8);
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar4 = (char *)(_UNK_01df9460 + 0x1df9414);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df9464 + 0x1df9428));
    *pcVar4 = '\x01';
  }
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x10);
}



// ===== FAT.MBBoardDrag$$get_mOrigin RVA 0x1de9468 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df9468(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_01df9568 + 0x1df9484);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df956c + 0x1df9498));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f71,0);
  if (iVar1 == 0) {
    piVar3 = *(int **)(_UNK_01df9570 + 0x1df94fc);
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar4 = (char *)(_UNK_01df9574 + 0x1df9518);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df9578 + 0x1df952c));
      *pcVar4 = '\x01';
    }
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x18);
    *param_1 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x14);
    param_1[1] = uVar2;
  }
  else {
    iVar1 = func_0x0229f13c(0x9f71,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021bdba4(&uStack_18,iVar1,param_2,0);
    *param_1 = uStack_18;
    param_1[1] = uStack_14;
  }
  return;
}



// ===== FAT.MBBoardDrag$$FAT.IMergeBoard.Init RVA 0x1de957c =====

void FUN_01df957c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x9f72,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x9f72,0);
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



// ===== FAT.MBBoardDrag$$FAT.IMergeBoard.Setup RVA 0x1de95c8 =====

void FUN_01df95c8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9f73,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    *(undefined4 *)(param_1 + 0x14) = param_3;
  }
  else {
    iVar1 = func_0x0229f13c(0x9f73,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardDrag$$FAT.IMergeBoard.Cleanup RVA 0x1de963c =====

void FUN_01df963c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x9f74,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x9f74,0);
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



// ===== FAT.MBBoardDrag$$UnityEngine.EventSystems.IBeginDragHandler.OnBeginDrag RVA 0x1de9688 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df9688(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
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
  
  pcVar4 = (char *)(_UNK_01df97c8 + 0x1df96a4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df97cc + 0x1df96b8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f75,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f75,0);
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
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0xc4) < 1) {
    puVar6 = *(undefined4 **)(_UNK_01df97d0 + 0x1df9738);
    iVar1 = func_0x03668dfc(*puVar6);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01ddf850(iVar1,0);
    *(undefined1 *)(param_1 + 0x28) = 1;
    uVar5 = *(undefined4 *)(param_2 + 0xcc);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 200);
    *(undefined4 *)(param_1 + 0x24) = uVar5;
    func_0x01df97d4(param_1,*(undefined4 *)(param_2 + 0xd8),*(undefined4 *)(param_2 + 0xdc),
                    param_1 + 0x18);
    iVar1 = func_0x03668dfc(*puVar6);
    uVar7 = *(undefined4 *)(param_2 + 200);
    uStack_28 = *(undefined4 *)(param_2 + 0xcc);
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar5 = *(undefined4 *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    func_0x01ddf8c8(iVar1,uVar2,uVar5,uVar7);
  }
  return;
}



// ===== FAT.MBBoardDrag$$_CalcAnchoredCoord RVA 0x1de97d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df97d4(undefined4 param_1,float param_2,float param_3,int *param_4)

{
  int iVar1;
  float fVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fStack_50;
  float fStack_4c;
  
  pcVar3 = (char *)(_UNK_01df9a58 + 0x1df97fc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df9a5c + 0x1df9814));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f76,0);
  if (iVar1 == 0) {
    fVar2 = (float)FUN_01df9378(param_1);
    FUN_01df9468(&fStack_50,param_1);
    piVar6 = *(int **)(_UNK_01df9a60 + 0x1df9894);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar3 = (char *)(_UNK_01df9a64 + 0x1df98b4);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df9a68 + 0x1df98c8));
      *pcVar3 = '\x01';
    }
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar6;
    }
    fVar7 = *(float *)(*(int *)(iVar1 + 0x5c) + 4);
    pcVar4 = (char *)(_UNK_01df9a6c + 0x1df9908);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df9a70 + 0x1df9920));
      *pcVar4 = '\x01';
    }
    piVar5 = *(int **)(_UNK_01df9a74 + 0x1df9938);
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x01384ab4();
    }
    fVar7 = (float)func_0x02450364((fVar2 * (param_2 - fStack_50)) / fVar7);
    fVar2 = _UNK_01df9a54;
    iVar1 = (int)fVar7;
    if (fVar7 == _UNK_01df9a54) {
      iVar1 = -0x80000000;
    }
    *param_4 = iVar1;
    fVar7 = (float)FUN_01df9378(param_1);
    FUN_01df9468(&fStack_50,param_1);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df9a78 + 0x1df99a4));
      *pcVar3 = '\x01';
    }
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar6;
    }
    fVar8 = *(float *)(*(int *)(iVar1 + 0x5c) + 4);
    pcVar3 = (char *)(_UNK_01df9a7c + 0x1df99e4);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df9a80 + 0x1df99fc));
      *pcVar3 = '\x01';
    }
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x01384ab4();
    }
    fVar7 = (float)func_0x02450728((fVar7 * (param_3 - fStack_4c)) / fVar8);
    iVar1 = (int)fVar7;
    if (fVar7 == fVar2) {
      iVar1 = -0x80000000;
    }
    param_4[1] = -iVar1;
  }
  else {
    iVar1 = func_0x0229f13c(0x9f76,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0228ad20(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MBBoardDrag$$UnityEngine.EventSystems.IDragHandler.OnDrag RVA 0x1de9a84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df9a84(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01df9c00 + 0x1df9aa0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df9c04 + 0x1df9ab4));
    func_0x01384978(*(undefined4 *)(_UNK_01df9c08 + 0x1df9ac0));
    func_0x01384978(*(undefined4 *)(_UNK_01df9c0c + 0x1df9acc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f77,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f77,0);
    if (iVar1 == 0) {
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
    fStack_28 = (float)uStack_40;
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
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0xc4) < 1) {
    if (*(int *)(**(int **)(_UNK_01df9c10 + 0x1df9b44) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01df9c14 + 0x1df9b60));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x028c3fd8(iVar1,0);
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01df9c18 + 0x1df9b90));
    fVar2 = (float)FUN_01df9378(param_1);
    fVar7 = *(float *)(param_2 + 200);
    fStack_28 = *(float *)(param_2 + 0xcc);
    fVar8 = *(float *)(param_1 + 0x20);
    fVar9 = *(float *)(param_1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    func_0x01de0558(iVar1,fVar2 * (fVar7 - fVar8),fVar2 * (fStack_28 - fVar9),fVar7);
  }
  return;
}



// ===== FAT.MBBoardDrag$$UnityEngine.EventSystems.IEndDragHandler.OnEndDrag RVA 0x1de9c1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df9c1c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_r4;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  iVar4 = func_0x0229f06c(0x9f78,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x9f78,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    puStack_30 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    puStack_30 = puStack_48;
    iStack_2c = iStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar4 + 8);
    uVar8 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar4 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar5,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(param_2 + 0xc4)) {
    return;
  }
  iVar4 = FUN_01df9324(param_1);
  if (iVar4 == 0) {
    return;
  }
  uVar8 = *(undefined4 *)(param_2 + 200);
  uVar5 = *(undefined4 *)(param_2 + 0xcc);
  pcVar9 = (char *)(_UNK_01df9da8 + 0x1df9cd0);
  uStack_18 = unaff_r4;
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df9dac + 0x1df9ce4));
    *pcVar9 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x9f79,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x9f79,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x021bde10(iVar4,param_1,uVar8,uVar5);
    return;
  }
  puVar11 = *(undefined4 **)(_UNK_01df9db0 + 0x1df9d50);
  *(undefined1 *)(param_1 + 0x28) = 0;
  iVar4 = func_0x03668dfc(*puVar11);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x01ddf850(iVar4,0);
  iVar4 = func_0x03668dfc(*puVar11);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uStack_24 = uStack_18;
  pcVar9 = (char *)(_UNK_01de16f0 + 0x1de0db4);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de16f4 + 0x1de0dc8),uVar8,uVar5,0);
    func_0x01384978(*(undefined4 *)(_UNK_01de16f8 + 0x1de0dd4));
    func_0x01384978(*(undefined4 *)(_UNK_01de16fc + 0x1de0de0));
    func_0x01384978(*(undefined4 *)(_UNK_01de1700 + 0x1de0dec));
    func_0x01384978(*(undefined4 *)(_UNK_01de1704 + 0x1de0df8));
    func_0x01384978(*(undefined4 *)(_UNK_01de1708 + 0x1de0e04));
    func_0x01384978(*(undefined4 *)(_UNK_01de170c + 0x1de0e10));
    func_0x01384978(*(undefined4 *)(_UNK_01de1710 + 0x1de0e1c));
    func_0x01384978(*(undefined4 *)(_UNK_01de1714 + 0x1de0e28));
    func_0x01384978(*(undefined4 *)(_UNK_01de1718 + 0x1de0e34));
    func_0x01384978(*(undefined4 *)(_UNK_01de171c + 0x1de0e40));
    func_0x01384978(*(undefined4 *)(_UNK_01de1720 + 0x1de0e4c));
    func_0x01384978(*(undefined4 *)(_UNK_01de1724 + 0x1de0e58));
    func_0x01384978(*(undefined4 *)(_UNK_01de1728 + 0x1de0e64));
    *pcVar9 = '\x01';
  }
  iStack_28 = 0;
  iStack_2c = 0;
  puStack_30 = (undefined4 *)0x0;
  uStack_34 = 0;
  iVar7 = func_0x0229f06c(0x9e7c,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0x9e7c,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    puStack_48 = (undefined4 *)0x0;
    func_0x021bde10(iVar7,iVar4,uVar8,uVar5);
    return;
  }
  iVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01de172c + 0x1de0edc));
  func_0x0244f5a0(iVar7,0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(iVar4 + 0x20);
  *(int *)(iVar7 + 8) = iVar4;
  if (iVar10 == 0) {
    return;
  }
  func_0x01de046c(&iStack_40,iVar4,uVar8,uVar5);
  iVar6 = iStack_40;
  piVar12 = (int *)(iVar7 + 0xc);
  *piVar12 = iStack_40;
  *(undefined4 *)(iVar7 + 0x10) = uStack_3c;
  switch(uStack_3c) {
  case 1:
    if (iStack_40 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&iStack_40,iVar6,0);
    iVar6 = *(int *)(iVar4 + 0x7c);
    iVar7 = *piVar12;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x020e8eac(iVar6,iVar10,iVar7,0);
    func_0x01ddff5c(iVar4,iStack_40,uStack_3c);
    func_0x01cf8720(0);
    break;
  case 2:
    if (iStack_40 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&iStack_40,iVar6,0);
    uVar8 = uStack_3c;
    iVar7 = iStack_40;
    iVar1 = *(int *)(iVar4 + 0x7c);
    iVar6 = *piVar12;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puStack_48 = (undefined4 *)0x0;
    func_0x020e3924(iVar1,iVar6,iVar10,&iStack_2c);
    if (iStack_2c != 0) {
LAB_01de1518:
      iVar7 = *(int *)(iVar4 + 0x74);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x01f090e0(iVar7,0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x01e01ff4(iVar7,iVar10,0);
      goto LAB_01de1554;
    }
    iVar10 = *piVar12;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = func_0x02116a8c(iVar10,0);
    uStack_3c = uVar8;
    goto joined_r0x01de1284;
  case 3:
    if (iStack_40 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&iStack_40,iVar6,0);
    uVar8 = uStack_3c;
    iVar7 = iStack_40;
    iVar1 = *(int *)(iVar4 + 0x7c);
    iVar6 = *piVar12;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puStack_48 = (undefined4 *)0x0;
    iVar6 = func_0x020e4900(iVar1,iVar6,iVar10,&puStack_30);
    if (iVar6 == 0) {
      func_0x0216d2a8(*piVar12,puStack_30,0);
      goto LAB_01de1518;
    }
    iVar6 = *(int *)(iVar4 + 0x7c);
    iVar10 = *piVar12;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x020e4c2c(iVar6,iVar10,&puStack_30,0);
    iVar10 = *piVar12;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = func_0x02116a8c(iVar10,0);
    uStack_3c = uVar8;
joined_r0x01de1284:
    if (iVar10 == 0) {
code_r0x01de1584:
      func_0x01ddff5c(iVar4,iVar7,uStack_3c);
    }
    break;
  case 4:
    iVar7 = func_0x01de177c(iVar4,iVar10);
    if (iVar7 != 0) {
      func_0x01de1a84(iVar4);
      func_0x01de1b94(iVar4);
      break;
    }
    goto code_r0x01de14c8;
  case 5:
    iVar7 = func_0x0216644c(iStack_40,iVar10,0);
    if (iVar7 != 0) break;
code_r0x01de1424:
    iVar7 = *piVar12;
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&iStack_40,iVar7,0);
    iVar10 = *piVar12;
    iVar7 = iStack_40;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    goto code_r0x01de1570;
  case 6:
    puVar11 = *(undefined4 **)(&UNK_01de12f0 + _UNK_01de1730);
    *(int *)(iVar7 + 0x14) = iVar10;
    iVar6 = func_0x02feb690(iVar10,&iStack_28,0,*puVar11);
    iVar10 = iStack_28;
    if (iVar6 != 0) {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x0212f4e4(iVar10,0);
      iVar10 = iStack_28;
      if (iVar6 == 3) {
        iVar10 = *(int *)(iVar4 + 0x74);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x01f090e0(iVar10,0);
        uVar8 = *(undefined4 *)(iVar7 + 0x14);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x01e01ff4(iVar10,uVar8,0);
        if (*(int *)(**(int **)(&UNK_01de1374 + _UNK_01de1734) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar8 = func_0x028c1350(**(undefined4 **)(&UNK_01de1394 + _UNK_01de1738),0);
        uVar5 = func_0x01384be4(**(undefined4 **)(&UNK_01de13a8 + _UNK_01de173c));
        puVar11 = *(undefined4 **)(&UNK_01de13bc + _UNK_01de1740);
      }
      else {
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x0212f4e4(iVar10,0);
        if (iVar10 != 7) {
          func_0x01de1d10(iVar4,*(undefined4 *)(iVar7 + 0x14),*(undefined4 *)(iVar7 + 0xc));
          break;
        }
        iVar10 = *(int *)(iVar4 + 0x74);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x01f090e0(iVar10,0);
        uVar8 = *(undefined4 *)(iVar7 + 0x14);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x01e01ff4(iVar10,uVar8,0);
        if (*(int *)(**(int **)(&UNK_01de1608 + _UNK_01de1748) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar8 = func_0x028c1350(**(undefined4 **)(&UNK_01de1628 + _UNK_01de174c),0);
        uVar5 = func_0x01384be4(**(undefined4 **)(&UNK_01de163c + _UNK_01de1750));
        puVar11 = *(undefined4 **)(&UNK_01de1650 + _UNK_01de1754);
      }
      func_0x024500b4(uVar5,iVar7,*puVar11,0);
      iVar7 = *(int *)(iVar7 + 0x14);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x0210e2d4(iVar7,0);
      iVar7 = *piVar12;
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0210e2d4(iVar7,0);
      if (*(int *)(**(int **)(&UNK_01de16b0 + _UNK_01de1744) + 0x74) == 0) {
        func_0x01384ab4();
      }
      puStack_48 = (undefined4 *)0x0;
      func_0x02085a2c(uVar8,uVar5,uVar2,uVar3);
    }
    break;
  case 7:
    iVar7 = func_0x021645c0(iVar10,iStack_40,0);
    if (iVar7 != 0) {
      iVar7 = func_0x02116a8c(iVar10,0);
      if (iVar7 == 0) {
        iVar7 = *(int *)(iVar4 + 0x74);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x01f090e0(iVar7,0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x01e01ff4(iVar7,iVar10,0);
      }
      goto code_r0x01de1424;
    }
code_r0x01de14c8:
    iVar7 = *(int *)(iVar4 + 0x74);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x01f090e0(iVar7,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x01e01ff4(iVar7,iVar10,0);
    break;
  case 8:
    if (*(int *)(**(int **)(&UNK_01de1470 + _UNK_01de1758) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = func_0x0300d558(**(undefined4 **)(&UNK_01de148c + _UNK_01de175c));
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    puStack_48 = (undefined4 *)**(int **)(&UNK_01de14b8 + _UNK_01de1760);
    func_0x034a301c(iVar7,uVar8,uVar5,iVar10);
    break;
  default:
    iVar7 = *(int *)(iVar4 + 0x30);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x01e284b0(iVar7,0);
    iVar6 = *(int *)(iVar4 + 0x7c);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar8 = *(undefined4 *)(iVar7 + 0xc);
    uVar5 = *(undefined4 *)(iVar7 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x020e81ec(iVar6,uVar8,uVar5,0);
    if (iVar6 != 0) {
      uVar8 = func_0x0210e5f4(iVar6,0);
      iVar6 = func_0x01de25b0(iVar4,uVar8);
      if (*(int *)(**(int **)(_UNK_01de1764 + 0x1de1054) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0145b1cc(iVar6,0,0);
      if (iVar1 == 0) goto LAB_01de109c;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x022a0478(iVar6,0);
      if (iVar6 == 0) goto LAB_01de109c;
LAB_01de10e0:
      if (*(int *)(**(int **)(_UNK_01de1768 + 0x1de10ec) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar6 = func_0x0300d558(**(undefined4 **)(_UNK_01de176c + 0x1de1108));
      uVar5 = *(undefined4 *)(iVar7 + 0x1c);
      uVar8 = *(undefined4 *)(iVar7 + 0x20);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      puStack_48 = (undefined4 *)**(int **)(_UNK_01de1770 + 0x1de113c);
      func_0x034a301c(iVar6,uVar5,uVar8,iVar10);
      goto LAB_01de1518;
    }
LAB_01de109c:
    iVar6 = *(int *)(iVar4 + 0x7c);
    uVar8 = *(undefined4 *)(iVar7 + 0xc);
    uVar5 = *(undefined4 *)(iVar7 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    puStack_48 = &uStack_34;
    iStack_44 = 0;
    iVar6 = func_0x020e9a78(iVar6,iVar10,uVar8,uVar5);
    if (iVar6 == 0) goto LAB_01de10e0;
LAB_01de1554:
    func_0x0210cd7c(&iStack_40,iVar10,0);
    iVar7 = iStack_40;
code_r0x01de1570:
    func_0x0210cd7c(&iStack_40,iVar10,0);
    goto code_r0x01de1584;
  }
  func_0x01de2644(iVar4);
  return;
}



// ===== FAT.MBBoardDrag$$EndDrag RVA 0x1de9cb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df9cb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int aiStack_28 [2];
  undefined4 uStack_20;
  
  pcVar9 = (char *)(_UNK_01df9da8 + 0x1df9cd0);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df9dac + 0x1df9ce4));
    *pcVar9 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x9f79,0);
  if (iVar5 != 0) {
    iVar5 = func_0x0229f13c(0x9f79,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x021bde10(iVar5,param_1,param_2,param_3);
    return;
  }
  puVar11 = *(undefined4 **)(_UNK_01df9db0 + 0x1df9d50);
  *(undefined1 *)(param_1 + 0x28) = 0;
  iVar5 = func_0x03668dfc(*puVar11);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x01ddf850(iVar5,0);
  iVar5 = func_0x03668dfc(*puVar11);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_01de16f0 + 0x1de0db4);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de16f4 + 0x1de0dc8),param_2,param_3,0);
    func_0x01384978(*(undefined4 *)(_UNK_01de16f8 + 0x1de0dd4));
    func_0x01384978(*(undefined4 *)(_UNK_01de16fc + 0x1de0de0));
    func_0x01384978(*(undefined4 *)(_UNK_01de1700 + 0x1de0dec));
    func_0x01384978(*(undefined4 *)(_UNK_01de1704 + 0x1de0df8));
    func_0x01384978(*(undefined4 *)(_UNK_01de1708 + 0x1de0e04));
    func_0x01384978(*(undefined4 *)(_UNK_01de170c + 0x1de0e10));
    func_0x01384978(*(undefined4 *)(_UNK_01de1710 + 0x1de0e1c));
    func_0x01384978(*(undefined4 *)(_UNK_01de1714 + 0x1de0e28));
    func_0x01384978(*(undefined4 *)(_UNK_01de1718 + 0x1de0e34));
    func_0x01384978(*(undefined4 *)(_UNK_01de171c + 0x1de0e40));
    func_0x01384978(*(undefined4 *)(_UNK_01de1720 + 0x1de0e4c));
    func_0x01384978(*(undefined4 *)(_UNK_01de1724 + 0x1de0e58));
    func_0x01384978(*(undefined4 *)(_UNK_01de1728 + 0x1de0e64));
    *pcVar9 = '\x01';
  }
  aiStack_28[0] = 0;
  iStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  iVar1 = func_0x0229f06c(0x9e7c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e7c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021bde10(iVar1,iVar5,param_2,param_3,0);
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01de172c + 0x1de0edc));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(iVar5 + 0x20);
  *(int *)(iVar1 + 8) = iVar5;
  if (iVar10 == 0) {
    return;
  }
  func_0x01de046c(&iStack_40,iVar5,param_2,param_3);
  iVar6 = iStack_40;
  piVar12 = (int *)(iVar1 + 0xc);
  *piVar12 = iStack_40;
  *(undefined4 *)(iVar1 + 0x10) = uStack_3c;
  switch(uStack_3c) {
  case 1:
    if (iStack_40 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&iStack_40,iVar6,0);
    iVar6 = *(int *)(iVar5 + 0x7c);
    iVar1 = *piVar12;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x020e8eac(iVar6,iVar10,iVar1,0);
    func_0x01ddff5c(iVar5,iStack_40,uStack_3c);
    func_0x01cf8720(0);
    break;
  case 2:
    if (iStack_40 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&iStack_40,iVar6,0);
    uVar7 = uStack_3c;
    iVar1 = iStack_40;
    iVar2 = *(int *)(iVar5 + 0x7c);
    iVar6 = *piVar12;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x020e3924(iVar2,iVar6,iVar10,&iStack_2c,0);
    if (iStack_2c != 0) {
LAB_01de1518:
      iVar1 = *(int *)(iVar5 + 0x74);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01f090e0(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e01ff4(iVar1,iVar10,0);
      goto LAB_01de1554;
    }
    iVar10 = *piVar12;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = func_0x02116a8c(iVar10,0);
    uStack_3c = uVar7;
    goto joined_r0x01de1284;
  case 3:
    if (iStack_40 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&iStack_40,iVar6,0);
    uVar7 = uStack_3c;
    iVar1 = iStack_40;
    iVar2 = *(int *)(iVar5 + 0x7c);
    iVar6 = *piVar12;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x020e4900(iVar2,iVar6,iVar10,&uStack_30,0);
    if (iVar6 == 0) {
      func_0x0216d2a8(*piVar12,uStack_30,0);
      goto LAB_01de1518;
    }
    iVar6 = *(int *)(iVar5 + 0x7c);
    iVar10 = *piVar12;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x020e4c2c(iVar6,iVar10,&uStack_30,0);
    iVar10 = *piVar12;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = func_0x02116a8c(iVar10,0);
    uStack_3c = uVar7;
joined_r0x01de1284:
    if (iVar10 == 0) {
code_r0x01de1584:
      func_0x01ddff5c(iVar5,iVar1,uStack_3c);
    }
    break;
  case 4:
    iVar1 = func_0x01de177c(iVar5,iVar10);
    if (iVar1 != 0) {
      func_0x01de1a84(iVar5);
      func_0x01de1b94(iVar5);
      break;
    }
    goto code_r0x01de14c8;
  case 5:
    iVar1 = func_0x0216644c(iStack_40,iVar10,0);
    if (iVar1 != 0) break;
code_r0x01de1424:
    iVar1 = *piVar12;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&iStack_40,iVar1,0);
    iVar10 = *piVar12;
    iVar1 = iStack_40;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    goto code_r0x01de1570;
  case 6:
    puVar11 = *(undefined4 **)(&UNK_01de12f0 + _UNK_01de1730);
    *(int *)(iVar1 + 0x14) = iVar10;
    iVar6 = func_0x02feb690(iVar10,aiStack_28,0,*puVar11);
    iVar10 = aiStack_28[0];
    if (iVar6 != 0) {
      if (aiStack_28[0] == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x0212f4e4(iVar10,0);
      iVar10 = aiStack_28[0];
      if (iVar6 == 3) {
        iVar10 = *(int *)(iVar5 + 0x74);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x01f090e0(iVar10,0);
        uVar7 = *(undefined4 *)(iVar1 + 0x14);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x01e01ff4(iVar10,uVar7,0);
        if (*(int *)(**(int **)(&UNK_01de1374 + _UNK_01de1734) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar7 = func_0x028c1350(**(undefined4 **)(&UNK_01de1394 + _UNK_01de1738),0);
        uVar8 = func_0x01384be4(**(undefined4 **)(&UNK_01de13a8 + _UNK_01de173c));
        puVar11 = *(undefined4 **)(&UNK_01de13bc + _UNK_01de1740);
      }
      else {
        if (aiStack_28[0] == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x0212f4e4(iVar10,0);
        if (iVar10 != 7) {
          func_0x01de1d10(iVar5,*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0xc));
          break;
        }
        iVar10 = *(int *)(iVar5 + 0x74);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x01f090e0(iVar10,0);
        uVar7 = *(undefined4 *)(iVar1 + 0x14);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x01e01ff4(iVar10,uVar7,0);
        if (*(int *)(**(int **)(&UNK_01de1608 + _UNK_01de1748) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar7 = func_0x028c1350(**(undefined4 **)(&UNK_01de1628 + _UNK_01de174c),0);
        uVar8 = func_0x01384be4(**(undefined4 **)(&UNK_01de163c + _UNK_01de1750));
        puVar11 = *(undefined4 **)(&UNK_01de1650 + _UNK_01de1754);
      }
      func_0x024500b4(uVar8,iVar1,*puVar11,0);
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0210e2d4(iVar1,0);
      iVar1 = *piVar12;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x0210e2d4(iVar1,0);
      if (*(int *)(**(int **)(&UNK_01de16b0 + _UNK_01de1744) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02085a2c(uVar7,uVar8,uVar3,uVar4,0);
    }
    break;
  case 7:
    iVar1 = func_0x021645c0(iVar10,iStack_40,0);
    if (iVar1 != 0) {
      iVar1 = func_0x02116a8c(iVar10,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(iVar5 + 0x74);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01f090e0(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e01ff4(iVar1,iVar10,0);
      }
      goto code_r0x01de1424;
    }
code_r0x01de14c8:
    iVar1 = *(int *)(iVar5 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01f090e0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e01ff4(iVar1,iVar10,0);
    break;
  case 8:
    if (*(int *)(**(int **)(&UNK_01de1470 + _UNK_01de1758) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(&UNK_01de148c + _UNK_01de175c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x034a301c(iVar1,param_2,param_3,iVar10,**(undefined4 **)(&UNK_01de14b8 + _UNK_01de1760));
    break;
  default:
    iVar1 = *(int *)(iVar5 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01e284b0(iVar1,0);
    iVar6 = *(int *)(iVar5 + 0x7c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    uVar8 = *(undefined4 *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x020e81ec(iVar6,uVar7,uVar8,0);
    if (iVar6 != 0) {
      uVar7 = func_0x0210e5f4(iVar6,0);
      iVar6 = func_0x01de25b0(iVar5,uVar7);
      if (*(int *)(**(int **)(_UNK_01de1764 + 0x1de1054) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0145b1cc(iVar6,0,0);
      if (iVar2 == 0) goto LAB_01de109c;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x022a0478(iVar6,0);
      if (iVar6 == 0) goto LAB_01de109c;
LAB_01de10e0:
      if (*(int *)(**(int **)(_UNK_01de1768 + 0x1de10ec) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar6 = func_0x0300d558(**(undefined4 **)(_UNK_01de176c + 0x1de1108));
      uVar8 = *(undefined4 *)(iVar1 + 0x1c);
      uVar7 = *(undefined4 *)(iVar1 + 0x20);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x034a301c(iVar6,uVar8,uVar7,iVar10,**(undefined4 **)(_UNK_01de1770 + 0x1de113c));
      goto LAB_01de1518;
    }
LAB_01de109c:
    iVar6 = *(int *)(iVar5 + 0x7c);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    uVar8 = *(undefined4 *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x020e9a78(iVar6,iVar10,uVar7,uVar8,&uStack_34,0);
    if (iVar6 == 0) goto LAB_01de10e0;
LAB_01de1554:
    func_0x0210cd7c(&iStack_40,iVar10,0);
    iVar1 = iStack_40;
code_r0x01de1570:
    func_0x0210cd7c(&iStack_40,iVar10,0);
    goto code_r0x01de1584;
  }
  func_0x01de2644(iVar5);
  return;
}



// ===== FAT.MBBoardDrag$$UnityEngine.EventSystems.IPointerClickHandler.OnPointerClick RVA 0x1de9db4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df9db4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int *piStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_01df9f44 + 0x1df9dd0);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df9f48 + 0x1df9de4));
    func_0x01384978(*(undefined4 *)(_UNK_01df9f4c + 0x1df9df0));
    func_0x01384978(*(undefined4 *)(_UNK_01df9f50 + 0x1df9dfc));
    *pcVar9 = '\x01';
  }
  iVar6 = func_0x0229f06c(0x9f7a,0);
  if (iVar6 != 0) {
    iVar6 = func_0x0229f13c(0x9f7a,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    piStack_2c = piStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar6 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar6 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar8 = *(int *)(iVar6 + 8);
    uVar10 = *(undefined4 *)(iVar6 + 0xc);
    iVar6 = *(int *)(iVar6 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar6 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar7,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0xc4) < 1) {
    if (*(int *)(**(int **)(_UNK_01df9f54 + 0x1df9e74) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar6 = func_0x0300d558(**(undefined4 **)(_UNK_01df9f58 + 0x1df9e90));
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x028c3fd8(iVar6,0);
    iVar6 = FUN_01df9324(param_1);
    if (iVar6 == 0) {
      puVar11 = *(undefined4 **)(_UNK_01df9f5c + 0x1df9ed4);
      iVar6 = func_0x03668dfc(*puVar11);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x01ddf850(iVar6,0);
      FUN_01df97d4(param_1,*(undefined4 *)(param_2 + 0xd8),*(undefined4 *)(param_2 + 0xdc),
                   param_1 + 0x18);
      iVar6 = func_0x03668dfc(*puVar11);
      uVar7 = *(undefined4 *)(param_1 + 0x18);
      uVar10 = *(undefined4 *)(param_1 + 0x1c);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      pcVar9 = (char *)(_UNK_01de2d4c + 0x1de2778);
      if (*pcVar9 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01de2d50 + 0x1de278c),uVar7,uVar10,0);
        func_0x01384978(*(undefined4 *)(_UNK_01de2d54 + 0x1de2798));
        func_0x01384978(*(undefined4 *)(_UNK_01de2d58 + 0x1de27a4));
        func_0x01384978(*(undefined4 *)(_UNK_01de2d5c + 0x1de27b0));
        func_0x01384978(*(undefined4 *)(_UNK_01de2d60 + 0x1de27bc));
        *pcVar9 = '\x01';
      }
      iVar8 = func_0x0229f06c(0x9eb3,0);
      if (iVar8 == 0) {
        iVar8 = *(int *)(iVar6 + 0x7c);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar8 = func_0x020e81ec(iVar8,uVar7,uVar10,0);
        if (iVar8 != 0) {
          iVar1 = func_0x0211015c(iVar8,0);
          if (iVar1 == 0) {
            iVar1 = func_0x02116a38(iVar8,0);
            if (iVar1 != 0) {
              iVar1 = func_0x01c24918(0);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = *(int *)(iVar1 + 0x10);
              func_0x0210cd7c(&uStack_30,iVar8,0);
              piVar2 = piStack_2c;
              uVar5 = uStack_30;
              if (*(int *)(**(int **)(_UNK_01de2d64 + 0x1de2af8) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x01dd876c(&uStack_30,uVar5,piVar2);
              uVar5 = uStack_30;
              iVar4 = **(int **)(_UNK_01de2d68 + 0x1de2b2c);
              uStack_34 = piStack_2c;
              iVar3 = *(int *)(iVar4 + 0x1c);
              if (iVar3 == 0) {
                func_0x0140024c(iVar4);
                iVar3 = *(int *)(iVar4 + 0x1c);
              }
              iVar3 = *(int *)(iVar3 + 8);
              if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
                iVar3 = func_0x014001f0();
              }
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
              }
              iVar3 = *(int *)(*(int *)(iVar4 + 0x1c) + 8);
              if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
                iVar3 = func_0x014001f0();
              }
              piVar2 = (int *)**(int **)(iVar3 + 0x5c);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uStack_40 = 0;
              uStack_48 = uStack_28;
              piStack_44 = piVar2;
              func_0x01ca1770(iVar1,0x1b,uVar5,uStack_34);
              iVar1 = func_0x01c24918(0);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = *(int *)(iVar1 + 8);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              func_0x01bf3284(iVar1,**(undefined4 **)(_UNK_01de2d6c + 0x1de2c00),0);
            }
            iVar1 = func_0x0210e5f4(iVar8,0);
            if ((iVar1 == *(int *)(iVar6 + 0x1c)) ||
               (iVar1 = func_0x0210e250(iVar8,0xc,0,0), iVar1 != 0)) {
              iVar1 = *(int *)(iVar6 + 0x74);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x01f090e0(iVar1,0);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              func_0x01e016c0(iVar1,iVar8,0);
            }
            iVar1 = *(int *)(iVar6 + 0x74);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x01f090e0(iVar1,0);
            uVar5 = func_0x0210e5f4(iVar8,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x01e02744(iVar1,uVar5,0,0);
          }
          else {
            iVar1 = func_0x02116cdc(iVar8,0);
            if (iVar1 == 0) {
              iVar1 = func_0x01c24918(0);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = *(int *)(iVar1 + 0x10);
              func_0x0210cd7c(&uStack_30,iVar8,0);
              piVar2 = piStack_2c;
              uVar5 = uStack_30;
              if (*(int *)(**(int **)(_UNK_01de2d70 + 0x1de28a0) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x01dd876c(&uStack_30,uVar5,piVar2);
              uStack_34 = uStack_30;
              uStack_38 = piStack_2c;
              piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01de2d74 + 0x1de28ec),1);
              uStack_30 = func_0x02116e50(iVar8,0);
              iVar3 = func_0x01384abc(**(undefined4 **)(_UNK_01de2d78 + 0x1de290c),&uStack_30);
              if (piVar2 == (int *)0x0) {
                func_0x01384bf0();
              }
              if ((iVar3 != 0) &&
                 (iVar4 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
                uVar5 = func_0x01384c10();
                func_0x01384aa0(uVar5,0);
              }
              if (piVar2[3] == 0) {
                func_0x01384bf4();
              }
              piVar2[4] = iVar3;
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uStack_40 = 0;
              uStack_48 = uStack_28;
              piStack_44 = piVar2;
              func_0x01ca1770(iVar1,0x1c,uStack_34,uStack_38);
            }
            iVar1 = *(int *)(iVar6 + 0x74);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x01f09134(iVar1,0);
            func_0x0210cd7c(&uStack_30,iVar8,0);
            uVar5 = uStack_30;
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x01dfac60(iVar1,uVar5,piStack_2c,0);
            iVar1 = func_0x01c24918(0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar3 = *(int *)(iVar6 + 0x74);
            iVar1 = *(int *)(iVar1 + 8);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar3 = func_0x01f09380(iVar3,0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            uVar5 = *(undefined4 *)(iVar3 + 0x44);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x01bf3284(iVar1,uVar5,0);
            iVar1 = *(int *)(iVar6 + 0x74);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x01f090e0(iVar1,0);
            uVar5 = func_0x0210e5f4(iVar8,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x01e01a8c(iVar1,uVar5,0);
          }
          iVar3 = *(int *)(iVar6 + 0x1c);
          iVar1 = func_0x0210e5f4(iVar8,0);
          if (iVar3 != iVar1) {
            func_0x01cf80d4(0);
            iVar1 = *(int *)(iVar6 + 0x74);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x01f090e0(iVar1,0);
            uVar5 = func_0x0210e5f4(iVar8,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x01e01f98(iVar1,uVar5,0);
          }
        }
        func_0x01ddff5c(iVar6,uVar7,uVar10);
      }
      else {
        iVar8 = func_0x0229f13c(0x9eb3,0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uStack_48 = 0;
        func_0x02179a68(iVar8,iVar6,uVar7,uVar10);
      }
      return;
    }
  }
  return;
}



// ===== FAT.MBBoardDrag$$Update RVA 0x1de9f60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df9f60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar7 = (char *)(_UNK_01dfa084 + 0x1df9f74);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dfa088 + 0x1df9f88));
    func_0x01384978(*(undefined4 *)(_UNK_01dfa08c + 0x1df9f94));
    *pcVar7 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x9f7b,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x9f7b,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    puStack_30 = (undefined4 *)0x0;
    uStack_20 = 0;
    func_0x0245494c(&puStack_48,0,0);
    puStack_30 = puStack_48;
    iStack_2c = iStack_44;
    iStack_28 = iStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&puStack_30,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&puStack_30,param_1,0);
    iVar8 = *(int *)(iVar4 + 8);
    uVar9 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar4 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&puStack_30,uVar5,0,0);
    return;
  }
  iVar4 = FUN_01df9324(param_1);
  if ((((iVar4 == 0) || (iVar4 = func_0x02452074(0), 0 < iVar4)) ||
      (iVar4 = func_0x024524a8(0,0), iVar4 != 0)) || (iVar4 = func_0x024524a8(1,0), iVar4 != 0)) {
    return;
  }
  iVar4 = func_0x024524a8(2,0);
  if (iVar4 != 0) {
    return;
  }
  if (*(int *)(**(int **)(_UNK_01dfa090 + 0x1dfa04c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x024505f8(**(undefined4 **)(_UNK_01dfa094 + 0x1dfa06c),0);
  uVar9 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  pcVar7 = (char *)(_UNK_01df9da8 + 0x1df9cd0);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df9dac + 0x1df9ce4));
    *pcVar7 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x9f79,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x9f79,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x021bde10(iVar4,param_1,uVar9,uVar5);
    return;
  }
  puVar11 = *(undefined4 **)(_UNK_01df9db0 + 0x1df9d50);
  *(undefined1 *)(param_1 + 0x28) = 0;
  iVar4 = func_0x03668dfc(*puVar11);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x01ddf850(iVar4,0);
  iVar4 = func_0x03668dfc(*puVar11);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = uStack_14;
  uStack_24 = uStack_18;
  pcVar7 = (char *)(_UNK_01de16f0 + 0x1de0db4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de16f4 + 0x1de0dc8),uVar9,uVar5,0);
    func_0x01384978(*(undefined4 *)(_UNK_01de16f8 + 0x1de0dd4));
    func_0x01384978(*(undefined4 *)(_UNK_01de16fc + 0x1de0de0));
    func_0x01384978(*(undefined4 *)(_UNK_01de1700 + 0x1de0dec));
    func_0x01384978(*(undefined4 *)(_UNK_01de1704 + 0x1de0df8));
    func_0x01384978(*(undefined4 *)(_UNK_01de1708 + 0x1de0e04));
    func_0x01384978(*(undefined4 *)(_UNK_01de170c + 0x1de0e10));
    func_0x01384978(*(undefined4 *)(_UNK_01de1710 + 0x1de0e1c));
    func_0x01384978(*(undefined4 *)(_UNK_01de1714 + 0x1de0e28));
    func_0x01384978(*(undefined4 *)(_UNK_01de1718 + 0x1de0e34));
    func_0x01384978(*(undefined4 *)(_UNK_01de171c + 0x1de0e40));
    func_0x01384978(*(undefined4 *)(_UNK_01de1720 + 0x1de0e4c));
    func_0x01384978(*(undefined4 *)(_UNK_01de1724 + 0x1de0e58));
    func_0x01384978(*(undefined4 *)(_UNK_01de1728 + 0x1de0e64));
    *pcVar7 = '\x01';
  }
  iStack_28 = 0;
  iStack_2c = 0;
  puStack_30 = (undefined4 *)0x0;
  uStack_34 = 0;
  iVar8 = func_0x0229f06c(0x9e7c,0);
  if (iVar8 != 0) {
    iVar8 = func_0x0229f13c(0x9e7c,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    puStack_48 = (undefined4 *)0x0;
    func_0x021bde10(iVar8,iVar4,uVar9,uVar5);
    return;
  }
  iVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01de172c + 0x1de0edc));
  func_0x0244f5a0(iVar8,0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(iVar4 + 0x20);
  *(int *)(iVar8 + 8) = iVar4;
  if (iVar10 == 0) {
    return;
  }
  func_0x01de046c(&iStack_40,iVar4,uVar9,uVar5);
  iVar6 = iStack_40;
  piVar12 = (int *)(iVar8 + 0xc);
  *piVar12 = iStack_40;
  *(undefined4 *)(iVar8 + 0x10) = uStack_3c;
  switch(uStack_3c) {
  case 1:
    if (iStack_40 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&iStack_40,iVar6,0);
    iVar6 = *(int *)(iVar4 + 0x7c);
    iVar8 = *piVar12;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x020e8eac(iVar6,iVar10,iVar8,0);
    func_0x01ddff5c(iVar4,iStack_40,uStack_3c);
    func_0x01cf8720(0);
    break;
  case 2:
    if (iStack_40 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&iStack_40,iVar6,0);
    uVar9 = uStack_3c;
    iVar8 = iStack_40;
    iVar1 = *(int *)(iVar4 + 0x7c);
    iVar6 = *piVar12;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puStack_48 = (undefined4 *)0x0;
    func_0x020e3924(iVar1,iVar6,iVar10,&iStack_2c);
    if (iStack_2c != 0) {
LAB_01de1518:
      iVar8 = *(int *)(iVar4 + 0x74);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = func_0x01f090e0(iVar8,0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x01e01ff4(iVar8,iVar10,0);
      goto LAB_01de1554;
    }
    iVar10 = *piVar12;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = func_0x02116a8c(iVar10,0);
    uStack_3c = uVar9;
    goto joined_r0x01de1284;
  case 3:
    if (iStack_40 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&iStack_40,iVar6,0);
    uVar9 = uStack_3c;
    iVar8 = iStack_40;
    iVar1 = *(int *)(iVar4 + 0x7c);
    iVar6 = *piVar12;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puStack_48 = (undefined4 *)0x0;
    iVar6 = func_0x020e4900(iVar1,iVar6,iVar10,&puStack_30);
    if (iVar6 == 0) {
      func_0x0216d2a8(*piVar12,puStack_30,0);
      goto LAB_01de1518;
    }
    iVar6 = *(int *)(iVar4 + 0x7c);
    iVar10 = *piVar12;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x020e4c2c(iVar6,iVar10,&puStack_30,0);
    iVar10 = *piVar12;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = func_0x02116a8c(iVar10,0);
    uStack_3c = uVar9;
joined_r0x01de1284:
    if (iVar10 == 0) {
code_r0x01de1584:
      func_0x01ddff5c(iVar4,iVar8,uStack_3c);
    }
    break;
  case 4:
    iVar8 = func_0x01de177c(iVar4,iVar10);
    if (iVar8 != 0) {
      func_0x01de1a84(iVar4);
      func_0x01de1b94(iVar4);
      break;
    }
    goto code_r0x01de14c8;
  case 5:
    iVar8 = func_0x0216644c(iStack_40,iVar10,0);
    if (iVar8 != 0) break;
code_r0x01de1424:
    iVar8 = *piVar12;
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&iStack_40,iVar8,0);
    iVar10 = *piVar12;
    iVar8 = iStack_40;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    goto code_r0x01de1570;
  case 6:
    puVar11 = *(undefined4 **)(&UNK_01de12f0 + _UNK_01de1730);
    *(int *)(iVar8 + 0x14) = iVar10;
    iVar6 = func_0x02feb690(iVar10,&iStack_28,0,*puVar11);
    iVar10 = iStack_28;
    if (iVar6 != 0) {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x0212f4e4(iVar10,0);
      iVar10 = iStack_28;
      if (iVar6 == 3) {
        iVar10 = *(int *)(iVar4 + 0x74);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x01f090e0(iVar10,0);
        uVar9 = *(undefined4 *)(iVar8 + 0x14);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x01e01ff4(iVar10,uVar9,0);
        if (*(int *)(**(int **)(&UNK_01de1374 + _UNK_01de1734) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar9 = func_0x028c1350(**(undefined4 **)(&UNK_01de1394 + _UNK_01de1738),0);
        uVar5 = func_0x01384be4(**(undefined4 **)(&UNK_01de13a8 + _UNK_01de173c));
        puVar11 = *(undefined4 **)(&UNK_01de13bc + _UNK_01de1740);
      }
      else {
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x0212f4e4(iVar10,0);
        if (iVar10 != 7) {
          func_0x01de1d10(iVar4,*(undefined4 *)(iVar8 + 0x14),*(undefined4 *)(iVar8 + 0xc));
          break;
        }
        iVar10 = *(int *)(iVar4 + 0x74);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x01f090e0(iVar10,0);
        uVar9 = *(undefined4 *)(iVar8 + 0x14);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x01e01ff4(iVar10,uVar9,0);
        if (*(int *)(**(int **)(&UNK_01de1608 + _UNK_01de1748) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar9 = func_0x028c1350(**(undefined4 **)(&UNK_01de1628 + _UNK_01de174c),0);
        uVar5 = func_0x01384be4(**(undefined4 **)(&UNK_01de163c + _UNK_01de1750));
        puVar11 = *(undefined4 **)(&UNK_01de1650 + _UNK_01de1754);
      }
      func_0x024500b4(uVar5,iVar8,*puVar11,0);
      iVar8 = *(int *)(iVar8 + 0x14);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x0210e2d4(iVar8,0);
      iVar8 = *piVar12;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0210e2d4(iVar8,0);
      if (*(int *)(**(int **)(&UNK_01de16b0 + _UNK_01de1744) + 0x74) == 0) {
        func_0x01384ab4();
      }
      puStack_48 = (undefined4 *)0x0;
      func_0x02085a2c(uVar9,uVar5,uVar2,uVar3);
    }
    break;
  case 7:
    iVar8 = func_0x021645c0(iVar10,iStack_40,0);
    if (iVar8 != 0) {
      iVar8 = func_0x02116a8c(iVar10,0);
      if (iVar8 == 0) {
        iVar8 = *(int *)(iVar4 + 0x74);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar8 = func_0x01f090e0(iVar8,0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        func_0x01e01ff4(iVar8,iVar10,0);
      }
      goto code_r0x01de1424;
    }
code_r0x01de14c8:
    iVar8 = *(int *)(iVar4 + 0x74);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x01f090e0(iVar8,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x01e01ff4(iVar8,iVar10,0);
    break;
  case 8:
    if (*(int *)(**(int **)(&UNK_01de1470 + _UNK_01de1758) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar8 = func_0x0300d558(**(undefined4 **)(&UNK_01de148c + _UNK_01de175c));
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    puStack_48 = (undefined4 *)**(int **)(&UNK_01de14b8 + _UNK_01de1760);
    func_0x034a301c(iVar8,uVar9,uVar5,iVar10);
    break;
  default:
    iVar8 = *(int *)(iVar4 + 0x30);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x01e284b0(iVar8,0);
    iVar6 = *(int *)(iVar4 + 0x7c);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar9 = *(undefined4 *)(iVar8 + 0xc);
    uVar5 = *(undefined4 *)(iVar8 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x020e81ec(iVar6,uVar9,uVar5,0);
    if (iVar6 != 0) {
      uVar9 = func_0x0210e5f4(iVar6,0);
      iVar6 = func_0x01de25b0(iVar4,uVar9);
      if (*(int *)(**(int **)(_UNK_01de1764 + 0x1de1054) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0145b1cc(iVar6,0,0);
      if (iVar1 == 0) goto LAB_01de109c;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x022a0478(iVar6,0);
      if (iVar6 == 0) goto LAB_01de109c;
LAB_01de10e0:
      if (*(int *)(**(int **)(_UNK_01de1768 + 0x1de10ec) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar6 = func_0x0300d558(**(undefined4 **)(_UNK_01de176c + 0x1de1108));
      uVar5 = *(undefined4 *)(iVar8 + 0x1c);
      uVar9 = *(undefined4 *)(iVar8 + 0x20);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      puStack_48 = (undefined4 *)**(int **)(_UNK_01de1770 + 0x1de113c);
      func_0x034a301c(iVar6,uVar5,uVar9,iVar10);
      goto LAB_01de1518;
    }
LAB_01de109c:
    iVar6 = *(int *)(iVar4 + 0x7c);
    uVar9 = *(undefined4 *)(iVar8 + 0xc);
    uVar5 = *(undefined4 *)(iVar8 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    puStack_48 = &uStack_34;
    iStack_44 = 0;
    iVar6 = func_0x020e9a78(iVar6,iVar10,uVar9,uVar5);
    if (iVar6 == 0) goto LAB_01de10e0;
LAB_01de1554:
    func_0x0210cd7c(&iStack_40,iVar10,0);
    iVar8 = iStack_40;
code_r0x01de1570:
    func_0x0210cd7c(&iStack_40,iVar10,0);
    goto code_r0x01de1584;
  }
  func_0x01de2644(iVar4);
  return;
}



// ===== FAT.MBBoardDrag$$.ctor RVA 0x1dea098 =====

void FUN_01dfa098(undefined4 param_1)

{
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}


