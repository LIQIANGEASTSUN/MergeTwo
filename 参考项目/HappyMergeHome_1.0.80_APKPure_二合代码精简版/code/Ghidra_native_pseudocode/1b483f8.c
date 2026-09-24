
/* WARNING: Possible PIC construction at 0x01b6e898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b6e89c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b583f8(int param_1,float param_2)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_r4;
  float unaff_r5;
  int *piVar7;
  char *pcVar8;
  int unaff_r6;
  int *piVar9;
  undefined4 uVar10;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  float fVar11;
  double dVar12;
  double dVar13;
  undefined4 uStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar3 = func_0x02953fd4(0x5a7f,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5a7f,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
SUB_0286c770:
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
    *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
    *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
    *(float *)((int)register0x00000054 + -0x1c) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
    *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x34) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)register0x00000054 + -0x30) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
    func_0x024f56c0((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
    iVar5 = *(int *)(iVar3 + 0x10);
    *(undefined4 *)((int)register0x00000054 + -0x38) =
         *(undefined4 *)((int)register0x00000054 + -0x50);
    *(undefined4 *)((int)register0x00000054 + -0x34) =
         *(undefined4 *)((int)register0x00000054 + -0x4c);
    *(undefined4 *)((int)register0x00000054 + -0x30) =
         *(undefined4 *)((int)register0x00000054 + -0x48);
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((int)register0x00000054 + -0x44);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((int)register0x00000054 + -0x40);
    if (iVar5 != 0) {
      func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x38),iVar5,0);
    }
    func_0x01523a6c((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
    func_0x01523a4c((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar10 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar6 = 3;
    if (iVar3 == 0) {
      uVar6 = 2;
    }
    *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
    func_0x024f56d0(iVar5,uVar10,(undefined1 *)((int)register0x00000054 + -0x38),uVar6);
    return;
  }
  pcVar8 = (char *)(_UNK_01b6f1ac + 0x1b6f094);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b6f1b0 + 0x1b6f0a8),0);
    func_0x01438628(*(undefined4 *)(_UNK_01b6f1b4 + 0x1b6f0b4));
    func_0x01438628(*(undefined4 *)(_UNK_01b6f1b8 + 0x1b6f0c0));
    func_0x01438628(*(undefined4 *)(_UNK_01b6f1bc + 0x1b6f0cc));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5a80,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5a80,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    fStack_2c = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    fStack_2c = fStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a4c(&uStack_30,param_2,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar10 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar6 = 2;
    if (iVar3 == 0) {
      uVar6 = 1;
    }
    func_0x024f56d0(iVar5,uVar10,&uStack_30,uVar6,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01b6f1c0 + 0x1b6f124) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01b6f1c4 + 0x1b6f140));
  piVar9 = *(int **)(_UNK_01b6f1c8 + 0x1b6f154);
  iVar5 = *piVar9;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x014387a4();
    iVar5 = *piVar9;
  }
  uVar10 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x104);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  param_1 = func_0x0374c388(iVar3,uVar10,**(undefined4 **)(_UNK_01b6f1cc + 0x1b6f18c));
  if (param_1 == 0) {
    return;
  }
  pcVar8 = (char *)(_UNK_01b6eb18 + 0x1b6e808);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b6eb1c + 0x1b6e81c));
    func_0x01438628(*(undefined4 *)(_UNK_01b6eb20 + 0x1b6e828));
    func_0x01438628(*(undefined4 *)(_UNK_01b6eb24 + 0x1b6e834));
    func_0x01438628(*(undefined4 *)(_UNK_01b6eb28 + 0x1b6e840));
    func_0x01438628(*(undefined4 *)(_UNK_01b6eb2c + 0x1b6e84c));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5a81,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5a81,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    unaff_lr = 0x1b6e89c;
    unaff_r4 = param_1;
    unaff_r5 = param_2;
    unaff_r6 = iVar3;
    register0x00000054 = (BADSPACEBASE *)&uStack_30;
    goto SUB_0286c770;
  }
  if (*(char *)(param_1 + 0x44) == '\0') {
    return;
  }
  piVar9 = *(int **)(_UNK_01b6eb30 + 0x1b6e8c0);
  uVar10 = *(undefined4 *)(param_1 + 0x34);
  bVar1 = 0.0 <= param_2;
  if (1.0 < param_2) {
    param_2 = 1.0;
  }
  fVar11 = _UNK_01b6eb10;
  if (bVar1) {
    fVar11 = param_2;
  }
  fStack_2c = fVar11;
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x024ef144(uVar10,0,0);
  if (iVar3 != 0) {
    piVar7 = *(int **)(param_1 + 0x34);
    if (piVar7 == (int *)0x0) {
      func_0x014388e4();
    }
    (**(code **)(*piVar7 + 0x238))(piVar7,fVar11,*(undefined4 *)(*piVar7 + 0x23c));
    uVar10 = func_0x0152542c(&fStack_2c,0);
    uVar10 = func_0x014e9568(**(undefined4 **)(_UNK_01b6eb34 + 0x1b6e950),uVar10,0);
    if (*(int *)(**(int **)(_UNK_01b6eb38 + 0x1b6e964) + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x024eed10(uVar10,0);
  }
  uVar10 = *(undefined4 *)(param_1 + 0x38);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x024ef144(uVar10,0,0);
  fVar2 = fStack_2c;
  fVar11 = _UNK_01b6eb14;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x38);
  pcVar8 = (char *)(_UNK_01b6eb3c + 0x1b6e9c4);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b6eb40 + 0x1b6e9dc));
    *pcVar8 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01b6eb44 + 0x1b6e9f4) + 0x74) == 0) {
    func_0x014387a4();
  }
  dVar12 = (double)(fVar2 * fVar11);
  dVar13 = (double)func_0x0152f3a8(SUB84(dVar12,0),(int)((ulonglong)dVar12 >> 0x20),&uStack_28);
  if (0.0 <= fVar2 * fVar11) {
    if (dVar13 != 0.5) {
      dVar12 = (double)func_0x024f0e5c(SUB84(dVar12 + 0.5,0),
                                       (int)((ulonglong)(dVar12 + 0.5) >> 0x20));
      goto LAB_01b6ea90;
    }
    dVar12 = 1.0;
  }
  else {
    if (dVar13 != -0.5) {
      dVar12 = (double)func_0x0152f308(SUB84(dVar12 + -0.5,0),
                                       (int)((ulonglong)(dVar12 + -0.5) >> 0x20));
      goto LAB_01b6ea90;
    }
    dVar12 = -1.0;
  }
  uVar4 = func_0x014e6174(uStack_28,uStack_24);
  dVar12 = (double)CONCAT44(uStack_24,uStack_28) + dVar12;
  if ((uVar4 & 1) == 0) {
    dVar12 = (double)CONCAT44(uStack_24,uStack_28);
  }
LAB_01b6ea90:
  uStack_28 = (undefined4)(longlong)dVar12;
  if (dVar12 == _UNK_01b6eb08) {
    uStack_28 = 0x80000000;
  }
  uVar10 = func_0x014387ac(**(undefined4 **)(_UNK_01b6eb48 + 0x1b6eaa4),&uStack_28);
  uVar10 = func_0x01529a5c(**(undefined4 **)(_UNK_01b6eb4c + 0x1b6ead4),uVar10,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x024f16cc(iVar3,uVar10,1,0);
  return;
}

