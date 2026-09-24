/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.GuideActImpBoardSelectHandPos$$_StopWait RVA 0x1c3aa90 =====

void FUN_01c4aa90(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9329,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9329,0);
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
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// ===== FAT.GuideActImpBoardSelectHandPos$$Play RVA 0x1c3aae8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c4aae8(undefined4 param_1,int param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar5 = (char *)(_UNK_01c4ae70 + 0x1c4ab08);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4ae74 + 0x1c4ab1c));
    func_0x01384978(*(undefined4 *)(_UNK_01c4ae78 + 0x1c4ab28));
    func_0x01384978(*(undefined4 *)(_UNK_01c4ae7c + 0x1c4ab34));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x932a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x932a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(auStack_50,0,param_2,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffc8,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffc8,param_1,0);
    func_0x01485278(&stack0xffffffc8,param_2,0);
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
    func_0x0245495c(iVar7,uVar8,&stack0xffffffc8,uVar4,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    func_0x01384bf4();
  }
  uVar8 = *(undefined4 *)(param_2 + 0x10);
  if (*(int *)(**(int **)(_UNK_01c4ae80 + 0x1c4abb4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar4 = func_0x024506d0(0);
  fVar2 = (float)func_0x024516f0(uVar8,0xa7,uVar4,0);
  pcVar5 = (char *)(_UNK_01c4ae84 + 0x1c4abf4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4ae88 + 0x1c4ac08));
    *pcVar5 = '\x01';
  }
  piVar9 = *(int **)(_UNK_01c4ae8c + 0x1c4ac20);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x01384ab4();
  }
  dVar10 = (double)fVar2;
  dVar11 = (double)func_0x0148e1a4(SUB84(dVar10,0),(int)((ulonglong)dVar10 >> 0x20),&uStack_40);
  if (0.0 <= fVar2) {
    if (dVar11 == 0.5) {
      dVar10 = 1.0;
      goto LAB_01c4ac84;
    }
    dVar10 = (double)func_0x02450740(SUB84(dVar10 + 0.5,0),(int)((ulonglong)(dVar10 + 0.5) >> 0x20))
    ;
  }
  else if (dVar11 == -0.5) {
    dVar10 = -1.0;
LAB_01c4ac84:
    dVar11 = (double)CONCAT44(uStack_3c,uStack_40);
    uVar3 = func_0x01457ce4(uStack_40,uStack_3c);
    dVar10 = dVar11 + dVar10;
    if ((uVar3 & 1) == 0) {
      dVar10 = dVar11;
    }
  }
  else {
    dVar10 = (double)func_0x0148df24(SUB84(dVar10 + -0.5,0),
                                     (int)((ulonglong)(dVar10 + -0.5) >> 0x20));
  }
  dVar11 = _UNK_01c4ae68;
  uVar8 = (undefined4)(longlong)dVar10;
  if (dVar10 == _UNK_01c4ae68) {
    uVar8 = 0x80000000;
  }
  if (*(uint *)(param_2 + 0xc) < 2) {
    func_0x01384bf4();
  }
  uVar6 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = func_0x024506d0(0);
  fVar2 = (float)func_0x024516f0(uVar6,0xa7,uVar4,0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4ae90 + 0x1c4ad20));
    *pcVar5 = '\x01';
  }
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x01384ab4();
  }
  dVar10 = (double)fVar2;
  dVar12 = (double)func_0x0148e1a4(SUB84(dVar10,0),(int)((ulonglong)dVar10 >> 0x20),&uStack_40);
  if (0.0 <= fVar2) {
    if (dVar12 != 0.5) {
      dVar10 = (double)func_0x02450740(SUB84(dVar10 + 0.5,0),
                                       (int)((ulonglong)(dVar10 + 0.5) >> 0x20));
      goto LAB_01c4adcc;
    }
    dVar10 = 1.0;
  }
  else {
    if (dVar12 != -0.5) {
      dVar10 = (double)func_0x0148df24(SUB84(dVar10 + -0.5,0),
                                       (int)((ulonglong)(dVar10 + -0.5) >> 0x20));
      goto LAB_01c4adcc;
    }
    dVar10 = -1.0;
  }
  uVar3 = func_0x01457ce4(uStack_40,uStack_3c);
  dVar10 = (double)CONCAT44(uStack_3c,uStack_40) + dVar10;
  if ((uVar3 & 1) == 0) {
    dVar10 = (double)CONCAT44(uStack_3c,uStack_40);
  }
LAB_01c4adcc:
  uVar4 = (undefined4)(longlong)dVar10;
  if (dVar10 == dVar11) {
    uVar4 = 0x80000000;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x9c);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01c4ae94 + 0x1c4ae04));
  func_0x024500b4(uVar6,param_1,**(undefined4 **)(_UNK_01c4ae98 + 0x1c4ae28),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_48 = 1;
  uStack_44 = 0;
  func_0x01c7a078(iVar1,uVar8,uVar4,uVar6);
  return;
}



// ===== FAT.GuideActImpBoardSelectHandPos$$.ctor RVA 0x1c3ae9c =====

void FUN_01c4ae9c(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  (*(code *)&UNK_051877b0)(param_1,0);
  return;
}



// ===== FAT.GuideActImpBoardSelectHandPos$$<>iFixBaseProxy_Play RVA 0x1c3aeac =====

void thunk_FUN_01c47208(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x92e1,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x92e1,0);
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


