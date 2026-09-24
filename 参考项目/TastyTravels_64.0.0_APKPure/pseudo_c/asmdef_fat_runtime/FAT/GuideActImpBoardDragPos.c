/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.GuideActImpBoardDragPos$$Play RVA 0x1c38ae8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c48ae8(int param_1,int param_2)

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
  uint in_fpscr;
  uint uVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  pcVar6 = (char *)(_UNK_01c4901c + 0x1c48b08);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c49020 + 0x1c48b1c));
    func_0x01384978(*(undefined4 *)(_UNK_01c49024 + 0x1c48b28));
    func_0x01384978(*(undefined4 *)(_UNK_01c49028 + 0x1c48b34));
    func_0x01384978(*(undefined4 *)(_UNK_01c4902c + 0x1c48b40));
    func_0x01384978(*(undefined4 *)(_UNK_01c49030 + 0x1c48b4c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x930b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x930b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(&uStack_50,0,param_2,0);
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
  if (*(int *)(**(int **)(_UNK_01c49034 + 0x1c48bcc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar5 = func_0x024506d0(0);
  fVar2 = (float)func_0x024516f0(uVar8,0xa7,uVar5,0);
  pcVar6 = (char *)(_UNK_01c49038 + 0x1c48c0c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4903c + 0x1c48c20));
    *pcVar6 = '\x01';
  }
  piVar9 = *(int **)(_UNK_01c49040 + 0x1c48c38);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x01384ab4();
  }
  dVar13 = (double)fVar2;
  dVar15 = (double)func_0x0148e1a4(SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20),&uStack_50);
  if (NAN(fVar2)) {
    uVar10 = in_fpscr & 0xfffffff | (uint)(dVar15 == -0.5) << 0x1e;
    if (SUB41(uVar10 >> 0x1e,0)) {
      dVar13 = -1.0;
LAB_01c48c9c:
      dVar15 = (double)CONCAT44(uStack_4c,uStack_50);
      uVar3 = func_0x01457ce4(uStack_50,uStack_4c);
      dVar13 = dVar15 + dVar13;
      if ((uVar3 & 1) == 0) {
        dVar13 = dVar15;
      }
    }
    else {
      dVar13 = (double)func_0x0148df24(SUB84(dVar13 + -0.5,0),
                                       (int)((ulonglong)(dVar13 + -0.5) >> 0x20));
    }
  }
  else {
    uVar10 = in_fpscr & 0xfffffff | (uint)(dVar15 == 0.5) << 0x1e;
    if (SUB41(uVar10 >> 0x1e,0)) {
      dVar13 = 1.0;
      goto LAB_01c48c9c;
    }
    dVar13 = (double)func_0x02450740(SUB84(dVar13 + 0.5,0),(int)((ulonglong)(dVar13 + 0.5) >> 0x20))
    ;
  }
  dVar15 = _UNK_01c49010;
  uVar8 = (undefined4)(longlong)dVar13;
  uVar10 = uVar10 & 0xfffffff | (uint)(dVar13 == _UNK_01c49010) << 0x1e;
  if (SUB41(uVar10 >> 0x1e,0)) {
    uVar8 = 0x80000000;
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01c49044 + 0x1c48ce8));
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
    func_0x01384978(*(undefined4 *)(_UNK_01c49048 + 0x1c48d70));
    *pcVar6 = '\x01';
  }
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x01384ab4();
  }
  dVar13 = (double)fVar2;
  dVar16 = (double)func_0x0148e1a4(SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20),&uStack_50);
  if (NAN(fVar2)) {
    uVar10 = uVar10 & 0xfffffff | (uint)(dVar16 == -0.5) << 0x1e;
    if (SUB41(uVar10 >> 0x1e,0)) {
      dVar13 = -1.0;
LAB_01c48de4:
      dVar16 = (double)CONCAT44(uStack_4c,uStack_50);
      uVar3 = func_0x01457ce4(uStack_50,uStack_4c);
      dVar13 = dVar16 + dVar13;
      if ((uVar3 & 1) == 0) {
        dVar13 = dVar16;
      }
    }
    else {
      dVar13 = (double)func_0x0148df24(SUB84(dVar13 + -0.5,0),
                                       (int)((ulonglong)(dVar13 + -0.5) >> 0x20));
    }
  }
  else {
    uVar10 = uVar10 & 0xfffffff | (uint)(dVar16 == 0.5) << 0x1e;
    if (SUB41(uVar10 >> 0x1e,0)) {
      dVar13 = 1.0;
      goto LAB_01c48de4;
    }
    dVar13 = (double)func_0x02450740(SUB84(dVar13 + 0.5,0),(int)((ulonglong)(dVar13 + 0.5) >> 0x20))
    ;
  }
  if (*(uint *)(param_2 + 0xc) < 3) {
    func_0x01384bf4();
  }
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar8 = func_0x024506d0(0);
  fVar2 = (float)func_0x024516f0(uVar5,0xa7,uVar8,0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4904c + 0x1c48e68));
    *pcVar6 = '\x01';
  }
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x01384ab4();
  }
  dVar16 = (double)fVar2;
  dVar17 = (double)func_0x0148e1a4(SUB84(dVar16,0),(int)((ulonglong)dVar16 >> 0x20),&uStack_50);
  if (NAN(fVar2)) {
    uVar10 = uVar10 & 0xfffffff | (uint)(dVar17 == -0.5) << 0x1e;
    if (!SUB41(uVar10 >> 0x1e,0)) {
      dVar16 = (double)func_0x0148df24(SUB84(dVar16 + -0.5,0),
                                       (int)((ulonglong)(dVar16 + -0.5) >> 0x20));
      goto LAB_01c48f14;
    }
    dVar16 = -1.0;
  }
  else {
    uVar10 = uVar10 & 0xfffffff | (uint)(dVar17 == 0.5) << 0x1e;
    if (!SUB41(uVar10 >> 0x1e,0)) {
      dVar16 = (double)func_0x02450740(SUB84(dVar16 + 0.5,0),
                                       (int)((ulonglong)(dVar16 + 0.5) >> 0x20));
      goto LAB_01c48f14;
    }
    dVar16 = 1.0;
  }
  uVar3 = func_0x01457ce4(uStack_50,uStack_4c);
  dVar16 = (double)CONCAT44(uStack_4c,uStack_50) + dVar16;
  if ((uVar3 & 1) == 0) {
    dVar16 = (double)CONCAT44(uStack_4c,uStack_50);
  }
LAB_01c48f14:
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_01c49050 + 0x1c48f2c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar3 = uVar10 & 0xfffffff | (uint)(dVar16 == dVar15) << 0x1e;
    pcVar6 = (char *)(_UNK_01c49054 + 0x1c48f54);
    fVar2 = (float)VectorSignedToFloat((int)(longlong)dVar16,(byte)(uVar3 >> 0x16) & 3);
    uVar10 = uVar10 & 0xfffffff | (uint)(dVar13 == dVar15) << 0x1e;
    fVar14 = (float)VectorSignedToFloat((int)(longlong)dVar13,(byte)(uVar10 >> 0x16) & 3);
    if (SUB41(uVar3 >> 0x1e,0)) {
      fVar2 = _UNK_01c49018;
    }
    if (SUB41(uVar10 >> 0x1e,0)) {
      fVar14 = _UNK_01c49018;
    }
    iVar7 = func_0x0300d558(**(undefined4 **)(_UNK_01c49058 + 0x1c48f64));
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01c4905c + 0x1c48f98));
      *pcVar6 = '\x01';
    }
    iVar4 = *(int *)(**(int **)(_UNK_01c49060 + 0x1c48fb4) + 0x5c);
    fVar11 = *(float *)(iVar4 + 8);
    fVar12 = *(float *)(iVar4 + 0xc);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x034a2950(iVar7,iVar1,fVar14 + fVar11 * 0.5,fVar2 + fVar12 * 0.5,
                    **(undefined4 **)(_UNK_01c49064 + 0x1c48ff0));
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// ===== FAT.GuideActImpBoardDragPos$$.ctor RVA 0x1c39068 =====

void FUN_01c49068(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  (*(code *)&UNK_051877b0)(param_1,0);
  return;
}



// ===== FAT.GuideActImpBoardDragPos$$<>iFixBaseProxy_Play RVA 0x1c39078 =====

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


