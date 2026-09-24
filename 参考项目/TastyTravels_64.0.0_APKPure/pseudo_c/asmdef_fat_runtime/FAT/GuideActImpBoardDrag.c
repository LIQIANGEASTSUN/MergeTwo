/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.GuideActImpBoardDrag$$Play RVA 0x1c386a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c486a0(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar6 = (char *)(_UNK_01c48a98 + 0x1c486c0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c48a9c + 0x1c486d4));
    func_0x01384978(*(undefined4 *)(_UNK_01c48aa0 + 0x1c486e0));
    func_0x01384978(*(undefined4 *)(_UNK_01c48aa4 + 0x1c486ec));
    func_0x01384978(*(undefined4 *)(_UNK_01c48aa8 + 0x1c486f8));
    func_0x01384978(*(undefined4 *)(_UNK_01c48aac + 0x1c48704));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x930a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x930a,0);
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
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&stack0xffffffc8,uVar5,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    func_0x01384bf4();
  }
  uVar8 = *(undefined4 *)(param_2 + 0x10);
  if (*(int *)(**(int **)(_UNK_01c48ab0 + 0x1c48784) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar5 = func_0x024506d0(0);
  fVar2 = (float)func_0x024516f0(uVar8,0xa7,uVar5,0);
  pcVar6 = (char *)(_UNK_01c48ab4 + 0x1c487c4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c48ab8 + 0x1c487d8));
    *pcVar6 = '\x01';
  }
  piVar9 = *(int **)(_UNK_01c48abc + 0x1c487f0);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x01384ab4();
  }
  dVar11 = (double)fVar2;
  dVar12 = (double)func_0x0148e1a4(SUB84(dVar11,0),(int)((ulonglong)dVar11 >> 0x20),&uStack_40);
  if (0.0 <= fVar2) {
    if (dVar12 == 0.5) {
      dVar11 = 1.0;
      goto LAB_01c48854;
    }
    dVar11 = (double)func_0x02450740(SUB84(dVar11 + 0.5,0),(int)((ulonglong)(dVar11 + 0.5) >> 0x20))
    ;
  }
  else if (dVar12 == -0.5) {
    dVar11 = -1.0;
LAB_01c48854:
    dVar12 = (double)CONCAT44(uStack_3c,uStack_40);
    uVar3 = func_0x01457ce4(uStack_40,uStack_3c);
    dVar11 = dVar12 + dVar11;
    if ((uVar3 & 1) == 0) {
      dVar11 = dVar12;
    }
  }
  else {
    dVar11 = (double)func_0x0148df24(SUB84(dVar11 + -0.5,0),
                                     (int)((ulonglong)(dVar11 + -0.5) >> 0x20));
  }
  dVar12 = _UNK_01c48a90;
  uVar8 = (undefined4)(longlong)dVar11;
  puVar10 = *(undefined4 **)(_UNK_01c48ac0 + 0x1c488a0);
  if (dVar11 == _UNK_01c48a90) {
    uVar8 = 0x80000000;
  }
  iVar1 = func_0x03668dfc(*puVar10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01de4ff8(iVar1,uVar8,0,0);
  if (*(uint *)(param_2 + 0xc) < 2) {
    func_0x01384bf4();
  }
  uVar5 = *(undefined4 *)(param_2 + 0x14);
  uVar8 = func_0x024506d0(0);
  fVar2 = (float)func_0x024516f0(uVar5,0xa7,uVar8,0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c48ac4 + 0x1c48928));
    *pcVar6 = '\x01';
  }
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x01384ab4();
  }
  dVar11 = (double)fVar2;
  dVar13 = (double)func_0x0148e1a4(SUB84(dVar11,0),(int)((ulonglong)dVar11 >> 0x20),&uStack_40);
  if (0.0 <= fVar2) {
    if (dVar13 != 0.5) {
      dVar11 = (double)func_0x02450740(SUB84(dVar11 + 0.5,0),
                                       (int)((ulonglong)(dVar11 + 0.5) >> 0x20));
      goto LAB_01c489d4;
    }
    dVar11 = 1.0;
  }
  else {
    if (dVar13 != -0.5) {
      dVar11 = (double)func_0x0148df24(SUB84(dVar11 + -0.5,0),
                                       (int)((ulonglong)(dVar11 + -0.5) >> 0x20));
      goto LAB_01c489d4;
    }
    dVar11 = -1.0;
  }
  uVar3 = func_0x01457ce4(uStack_40,uStack_3c);
  dVar11 = (double)CONCAT44(uStack_3c,uStack_40) + dVar11;
  if ((uVar3 & 1) == 0) {
    dVar11 = (double)CONCAT44(uStack_3c,uStack_40);
  }
LAB_01c489d4:
  iVar7 = (int)(longlong)dVar11;
  if (dVar11 == dVar12) {
    iVar7 = -0x80000000;
  }
  iVar4 = func_0x03668dfc(*puVar10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x01de4ff8(iVar4,iVar7,0,0);
  if (iVar1 != 0) {
    iVar7 = iVar4;
  }
  if (iVar1 != 0 && iVar4 != 0) {
    if (*(int *)(**(int **)(_UNK_01c48ac8 + 0x1c48a34) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = func_0x0300d558(**(undefined4 **)(_UNK_01c48acc + 0x1c48a50));
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x034a25f4(iVar4,iVar1,iVar7,**(undefined4 **)(_UNK_01c48ad0 + 0x1c48a78));
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// ===== FAT.GuideActImpBoardDrag$$.ctor RVA 0x1c38ad4 =====

void FUN_01c48ad4(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  (*(code *)&UNK_051877b0)(param_1,0);
  return;
}



// ===== FAT.GuideActImpBoardDrag$$<>iFixBaseProxy_Play RVA 0x1c38ae4 =====

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


