/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.GuideActImpBoardEat$$Play RVA 0x1c39080 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c49080(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  pcVar6 = (char *)(_UNK_01c49658 + 0x1c490a4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4965c + 0x1c490b8));
    func_0x01384978(*(undefined4 *)(_UNK_01c49660 + 0x1c490c4));
    func_0x01384978(*(undefined4 *)(_UNK_01c49664 + 0x1c490d0));
    func_0x01384978(*(undefined4 *)(_UNK_01c49668 + 0x1c490dc));
    func_0x01384978(*(undefined4 *)(_UNK_01c4966c + 0x1c490e8));
    func_0x01384978(*(undefined4 *)(_UNK_01c49670 + 0x1c490f4));
    func_0x01384978(*(undefined4 *)(_UNK_01c49674 + 0x1c49100));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x930c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x930c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(&uStack_50,0,param_2,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffc8,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffc8,param_1,0);
    func_0x01485278(&stack0xffffffc8,param_2,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar8,uVar9,&stack0xffffffc8,uVar5,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    func_0x01384bf4();
  }
  uVar9 = *(undefined4 *)(param_2 + 0x10);
  if (*(int *)(**(int **)(_UNK_01c49678 + 0x1c49184) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar5 = func_0x024506d0(0);
  fVar2 = (float)func_0x024516f0(uVar9,0xa7,uVar5,0);
  pcVar6 = (char *)(_UNK_01c4967c + 0x1c491c4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c49680 + 0x1c491d8));
    *pcVar6 = '\x01';
  }
  piVar11 = *(int **)(_UNK_01c49684 + 0x1c491f0);
  if (*(int *)(*piVar11 + 0x74) == 0) {
    func_0x01384ab4();
  }
  dVar12 = (double)fVar2;
  dVar13 = (double)func_0x0148e1a4(SUB84(dVar12,0),(int)((ulonglong)dVar12 >> 0x20),&uStack_48);
  if (0.0 <= fVar2) {
    if (dVar13 == 0.5) {
      dVar12 = 1.0;
      goto LAB_01c49254;
    }
    dVar12 = (double)func_0x02450740(SUB84(dVar12 + 0.5,0),(int)((ulonglong)(dVar12 + 0.5) >> 0x20))
    ;
  }
  else if (dVar13 == -0.5) {
    dVar12 = -1.0;
LAB_01c49254:
    dVar13 = (double)CONCAT44(uStack_44,uStack_48);
    uVar3 = func_0x01457ce4(uStack_48,uStack_44);
    dVar12 = dVar13 + dVar12;
    if ((uVar3 & 1) == 0) {
      dVar12 = dVar13;
    }
  }
  else {
    dVar12 = (double)func_0x0148df24(SUB84(dVar12 + -0.5,0),
                                     (int)((ulonglong)(dVar12 + -0.5) >> 0x20));
  }
  dVar13 = _UNK_01c49650;
  uVar9 = (undefined4)(longlong)dVar12;
  puVar7 = *(undefined4 **)(_UNK_01c49688 + 0x1c492a0);
  uVar5 = *puVar7;
  if (dVar12 == _UNK_01c49650) {
    uVar9 = 0x80000000;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar9;
  iVar1 = func_0x03668dfc(uVar5);
  uVar9 = *(undefined4 *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01de4ff8(iVar1,uVar9,0,0);
  if (*(uint *)(param_2 + 0xc) < 2) {
    func_0x01384bf4();
  }
  uVar5 = *(undefined4 *)(param_2 + 0x14);
  uVar9 = func_0x024506d0(0);
  fVar2 = (float)func_0x024516f0(uVar5,0xa7,uVar9,0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4968c + 0x1c49330));
    *pcVar6 = '\x01';
  }
  if (*(int *)(*piVar11 + 0x74) == 0) {
    func_0x01384ab4();
  }
  dVar12 = (double)fVar2;
  dVar14 = (double)func_0x0148e1a4(SUB84(dVar12,0),(int)((ulonglong)dVar12 >> 0x20),&uStack_48);
  if (0.0 <= fVar2) {
    if (dVar14 != 0.5) {
      dVar12 = (double)func_0x02450740(SUB84(dVar12 + 0.5,0),
                                       (int)((ulonglong)(dVar12 + 0.5) >> 0x20));
      goto LAB_01c493dc;
    }
    dVar12 = 1.0;
  }
  else {
    if (dVar14 != -0.5) {
      dVar12 = (double)func_0x0148df24(SUB84(dVar12 + -0.5,0),
                                       (int)((ulonglong)(dVar12 + -0.5) >> 0x20));
      goto LAB_01c493dc;
    }
    dVar12 = -1.0;
  }
  uVar3 = func_0x01457ce4(uStack_48,uStack_44);
  dVar12 = (double)CONCAT44(uStack_44,uStack_48) + dVar12;
  if ((uVar3 & 1) == 0) {
    dVar12 = (double)CONCAT44(uStack_44,uStack_48);
  }
LAB_01c493dc:
  uVar5 = *puVar7;
  uVar9 = (undefined4)(longlong)dVar12;
  if (dVar12 == dVar13) {
    uVar9 = 0x80000000;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar9;
  iVar8 = func_0x03668dfc(uVar5);
  uVar9 = *(undefined4 *)(param_1 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)func_0x01de4ff8(iVar8,uVar9,0,0);
  if (iVar1 != 0) {
    pcVar6 = pcVar4;
  }
  if (iVar1 != 0 && pcVar4 != (char *)0x0) {
    *(undefined1 *)(param_1 + 8) = 1;
    iVar8 = func_0x01c24918(0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar8 + 0x9c);
    iStack_4c = iVar1;
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    puVar7 = *(undefined4 **)(_UNK_01c49690 + 0x1c49480);
    uVar5 = *(undefined4 *)(iVar8 + 0xc);
    uVar9 = func_0x01384be4(*puVar7);
    iVar10 = 0;
    func_0x0244f8a4(uVar9,param_1,**(undefined4 **)(_UNK_01c49694 + 0x1c494a4),0);
    iVar1 = func_0x024507f8(uVar5,uVar9,0);
    if (iVar1 != 0) {
      uVar9 = *puVar7;
      iVar10 = func_0x01384ab8(iVar1,uVar9);
      if (iVar10 == 0) {
        func_0x01384fb4(iVar1,uVar9);
        iVar10 = 0;
      }
    }
    *(int *)(iVar8 + 0xc) = iVar10;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x9c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    uVar9 = func_0x01384be4(*puVar7);
    iVar10 = 0;
    func_0x0244f8a4(uVar9,param_1,**(undefined4 **)(_UNK_01c49698 + 0x1c49544),0);
    iVar8 = func_0x024507e8(uVar5,uVar9,0);
    if (iVar8 != 0) {
      uVar9 = *puVar7;
      iVar10 = func_0x01384ab8(iVar8,uVar9);
      if (iVar10 == 0) {
        func_0x01384fb4(iVar8,uVar9);
        iVar10 = 0;
      }
    }
    iVar8 = *(int *)(**(int **)(_UNK_01c4969c + 0x1c4959c) + 0x74);
    *(int *)(iVar1 + 0xc) = iVar10;
    if (iVar8 == 0) {
      func_0x01384ab4();
    }
    iVar8 = func_0x0300d558(**(undefined4 **)(_UNK_01c496a0 + 0x1c495bc));
    iVar1 = iStack_4c;
    puVar7 = *(undefined4 **)(_UNK_01c496a4 + 0x1c495d4);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x034a25f4(iVar8,iVar1,pcVar6,**(undefined4 **)(_UNK_01c496a8 + 0x1c495f0));
    iVar8 = func_0x03668dfc(*puVar7);
    uVar9 = func_0x0210e2d4(iVar1,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uStack_50 = 0;
    func_0x01de9578(iVar8,uVar9,0,0);
  }
  else {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// ===== FAT.GuideActImpBoardEat$$_OnItemEat RVA 0x1c396ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c496ac(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  
  pcVar6 = (char *)(_UNK_01c49884 + 0x1c496cc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c49888 + 0x1c496e0));
    func_0x01384978(*(undefined4 *)(_UNK_01c4988c + 0x1c496ec));
    func_0x01384978(*(undefined4 *)(_UNK_01c49890 + 0x1c496f8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x930e,0);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 8) = 0;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x9c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar7 = *(undefined4 **)(_UNK_01c49894 + 0x1c4978c);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    uVar2 = func_0x01384be4(*puVar7);
    iVar4 = 0;
    func_0x0244f8a4(uVar2,param_1,**(undefined4 **)(_UNK_01c49898 + 0x1c497b0),0);
    iVar3 = func_0x024507f8(uVar5,uVar2,0);
    if (iVar3 != 0) {
      uVar2 = *puVar7;
      iVar4 = func_0x01384ab8(iVar3,uVar2);
      if (iVar4 == 0) {
        func_0x01384fb4(iVar3,uVar2);
        iVar4 = 0;
      }
    }
    *(int *)(iVar1 + 0xc) = iVar4;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x9c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 != 0) {
      func_0x01f038c4(iVar1,0,0);
    }
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01c4989c + 0x1c4984c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01de9578(iVar1,0,0,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x930e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.GuideActImpBoardEat$$.ctor RVA 0x1c398a0 =====

void FUN_01c498a0(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  (*(code *)&UNK_051877b0)(param_1,0);
  return;
}



// ===== FAT.GuideActImpBoardEat$$<>iFixBaseProxy_Play RVA 0x1c398b0 =====

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


