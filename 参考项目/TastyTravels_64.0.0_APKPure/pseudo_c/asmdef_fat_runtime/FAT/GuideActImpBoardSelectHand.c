/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.GuideActImpBoardSelectHand$$_StopWait RVA 0x1c3a4d0 =====

void FUN_01c4a4d0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x931c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x931c,0);
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



// ===== FAT.GuideActImpBoardSelectHand$$Play RVA 0x1c3a528 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c4a528(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  int *piVar9;
  int *piVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  pcVar5 = (char *)(_UNK_01c4aa30 + 0x1c4a54c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4aa34 + 0x1c4a560));
    func_0x01384978(*(undefined4 *)(_UNK_01c4aa38 + 0x1c4a56c));
    func_0x01384978(*(undefined4 *)(_UNK_01c4aa3c + 0x1c4a578));
    func_0x01384978(*(undefined4 *)(_UNK_01c4aa40 + 0x1c4a584));
    func_0x01384978(*(undefined4 *)(_UNK_01c4aa44 + 0x1c4a590));
    func_0x01384978(*(undefined4 *)(_UNK_01c4aa48 + 0x1c4a59c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x931d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x931d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(&uStack_50,0,param_2,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffc8,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffc8,param_1,0);
    func_0x01485278(&stack0xffffffc8,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&stack0xffffffc8,uVar4,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    func_0x01384bf4();
  }
  piVar9 = *(int **)(_UNK_01c4aa4c + 0x1c4a620);
  uVar7 = *(undefined4 *)(param_2 + 0x10);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar4 = func_0x024506d0(0);
  fVar2 = (float)func_0x024516f0(uVar7,0xa7,uVar4,0);
  pcVar5 = (char *)(_UNK_01c4aa50 + 0x1c4a660);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4aa54 + 0x1c4a674));
    *pcVar5 = '\x01';
  }
  piVar10 = *(int **)(_UNK_01c4aa58 + 0x1c4a68c);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x01384ab4();
  }
  dVar11 = (double)fVar2;
  dVar12 = (double)func_0x0148e1a4(SUB84(dVar11,0),(int)((ulonglong)dVar11 >> 0x20),&uStack_48);
  if (0.0 <= fVar2) {
    if (dVar12 == 0.5) {
      dVar11 = 1.0;
      goto LAB_01c4a6f0;
    }
    dVar11 = (double)func_0x02450740(SUB84(dVar11 + 0.5,0),(int)((ulonglong)(dVar11 + 0.5) >> 0x20))
    ;
  }
  else if (dVar12 == -0.5) {
    dVar11 = -1.0;
LAB_01c4a6f0:
    dVar12 = (double)CONCAT44(uStack_44,uStack_48);
    uVar3 = func_0x01457ce4(uStack_48,uStack_44);
    dVar11 = dVar12 + dVar11;
    if ((uVar3 & 1) == 0) {
      dVar11 = dVar12;
    }
  }
  else {
    dVar11 = (double)func_0x0148df24(SUB84(dVar11 + -0.5,0),
                                     (int)((ulonglong)(dVar11 + -0.5) >> 0x20));
  }
  dVar12 = _UNK_01c4aa28;
  bVar8 = false;
  iVar1 = (int)(longlong)dVar11;
  if (dVar11 == _UNK_01c4aa28) {
    iVar1 = -0x80000000;
  }
  if (*(int *)(param_2 + 0xc) < 2) goto LAB_01c4a92c;
  uVar7 = *(undefined4 *)(param_2 + 0x14);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar4 = func_0x024506d0(0);
  fVar2 = (float)func_0x024516f0(uVar7,0xa7,uVar4,0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4aa5c + 0x1c4a7a0));
    *pcVar5 = '\x01';
  }
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x01384ab4();
  }
  dVar11 = (double)fVar2;
  dVar13 = (double)func_0x0148e1a4(SUB84(dVar11,0),(int)((ulonglong)dVar11 >> 0x20),&uStack_48);
  if (0.0 <= fVar2) {
    if (dVar13 == 0.5) {
      dVar11 = 1.0;
      goto LAB_01c4a814;
    }
    dVar11 = (double)func_0x02450740(SUB84(dVar11 + 0.5,0),(int)((ulonglong)(dVar11 + 0.5) >> 0x20))
    ;
  }
  else if (dVar13 == -0.5) {
    dVar11 = -1.0;
LAB_01c4a814:
    dVar13 = (double)CONCAT44(uStack_44,uStack_48);
    uVar3 = func_0x01457ce4(uStack_48,uStack_44);
    dVar11 = dVar13 + dVar11;
    if ((uVar3 & 1) == 0) {
      dVar11 = dVar13;
    }
  }
  else {
    dVar11 = (double)func_0x0148df24(SUB84(dVar11 + -0.5,0),
                                     (int)((ulonglong)(dVar11 + -0.5) >> 0x20));
  }
  bVar8 = dVar11 != dVar12 && 0 < (int)(longlong)dVar11;
  if (2 < *(int *)(param_2 + 0xc)) {
    uVar7 = *(undefined4 *)(param_2 + 0x18);
    iVar6 = func_0x0148d518(uVar7,**(undefined4 **)(_UNK_01c4aa60 + 0x1c4a890),0);
    if (iVar6 != 0) {
      iVar6 = func_0x03668dfc(**(undefined4 **)(_UNK_01c4aa64 + 0x1c4a8b0));
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x01de57b0(iVar6,0);
      if (0 < iVar6) {
        iVar1 = iVar6;
      }
    }
    iVar6 = func_0x0148d518(uVar7,**(undefined4 **)(_UNK_01c4aa68 + 0x1c4a8e8),0);
    if (iVar6 != 0) {
      iVar6 = func_0x03668dfc(**(undefined4 **)(_UNK_01c4aa6c + 0x1c4a904));
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x01de59ec(iVar6,0);
      if (0 < iVar6) {
        iVar1 = iVar6;
      }
    }
  }
LAB_01c4a92c:
  iVar6 = func_0x03668dfc(**(undefined4 **)(_UNK_01c4aa70 + 0x1c4a938));
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01de4ff8(iVar6,iVar1,bVar8,0);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    iVar6 = func_0x01c24918(0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar6 + 0x9c);
    func_0x0210cd7c(&uStack_48,iVar1,0);
    func_0x0210cd7c(&uStack_48,iVar1,0);
    uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01c4aa74 + 0x1c4a9c4));
    func_0x024500b4(uVar7,param_1,**(undefined4 **)(_UNK_01c4aa78 + 0x1c4a9e0),0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x01c7a078(iVar6,uStack_48,uStack_44,uVar7);
  }
  return;
}



// ===== FAT.GuideActImpBoardSelectHand$$.ctor RVA 0x1c3aa7c =====

void FUN_01c4aa7c(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  (*(code *)&UNK_051877b0)(param_1,0);
  return;
}



// ===== FAT.GuideActImpBoardSelectHand$$<>iFixBaseProxy_Play RVA 0x1c3aa8c =====

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


