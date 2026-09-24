/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.GuideActImpBoardMerge$$_OnItemMerged RVA 0x1c39b9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c49b9c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_01c49de0 + 0x1c49bbc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c49de4 + 0x1c49bd4));
    func_0x01384978(*(undefined4 *)(_UNK_01c49de8 + 0x1c49be0));
    func_0x01384978(*(undefined4 *)(_UNK_01c49dec + 0x1c49bec));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9316,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0210e2d4(param_2,0);
    if (iVar1 == *(int *)(param_1 + 0xc)) {
      puVar7 = *(undefined4 **)(_UNK_01c49df0 + 0x1c49c74);
      iVar1 = func_0x03668dfc(*puVar7);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01ddc2c0(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e26200(iVar1,0,0);
      *(undefined1 *)(param_1 + 8) = 0;
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x9c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      puVar8 = *(undefined4 **)(_UNK_01c49df4 + 0x1c49cf0);
      uVar5 = *(undefined4 *)(iVar1 + 8);
      uVar2 = func_0x01384be4(*puVar8);
      iVar6 = 0;
      func_0x02450548(uVar2,param_1,**(undefined4 **)(_UNK_01c49df8 + 0x1c49d14),0);
      iVar3 = func_0x024507f8(uVar5,uVar2,0);
      if (iVar3 != 0) {
        uVar2 = *puVar8;
        iVar6 = func_0x01384ab8(iVar3,uVar2);
        if (iVar6 == 0) {
          func_0x01384fb4(iVar3,uVar2);
          iVar6 = 0;
        }
      }
      *(int *)(iVar1 + 8) = iVar6;
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
      iVar1 = func_0x03668dfc(*puVar7);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01de9578(iVar1,0,0,0,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9316,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02175714(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.GuideActImpBoardMerge$$Play RVA 0x1c39e00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c49e00(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  double dVar13;
  double dVar14;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  pcVar7 = (char *)(_UNK_01c4a468 + 0x1c49e24);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4a46c + 0x1c49e38));
    func_0x01384978(*(undefined4 *)(_UNK_01c4a470 + 0x1c49e44));
    func_0x01384978(*(undefined4 *)(_UNK_01c4a474 + 0x1c49e50));
    func_0x01384978(*(undefined4 *)(_UNK_01c4a478 + 0x1c49e5c));
    func_0x01384978(*(undefined4 *)(_UNK_01c4a47c + 0x1c49e68));
    func_0x01384978(*(undefined4 *)(_UNK_01c4a480 + 0x1c49e74));
    func_0x01384978(*(undefined4 *)(_UNK_01c4a484 + 0x1c49e80));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x9319,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9319,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(&uStack_50,0,param_2,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffc8,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffc8,param_1,0);
    func_0x01485278(&stack0xffffffc8,param_2,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar9,&stack0xffffffc8,uVar6,0,0);
    return;
  }
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + 0xc);
  }
  if (param_2 != 0 && iVar2 != 0) {
    uVar9 = *(undefined4 *)(param_2 + 0x10);
    if (*(int *)(**(int **)(_UNK_01c4a488 + 0x1c49f10) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar6 = func_0x024506d0(0);
    fVar3 = (float)func_0x024516f0(uVar9,0xa7,uVar6,0);
    pcVar7 = (char *)(_UNK_01c4a48c + 0x1c49f50);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01c4a490 + 0x1c49f64));
      *pcVar7 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_01c4a494 + 0x1c49f7c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    dVar13 = (double)fVar3;
    dVar14 = (double)func_0x0148e1a4(SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20),&uStack_48);
    if (0.0 <= fVar3) {
      if (dVar14 == 0.5) {
        dVar13 = 1.0;
        goto LAB_01c49fe0;
      }
      dVar13 = (double)func_0x02450740(SUB84(dVar13 + 0.5,0),
                                       (int)((ulonglong)(dVar13 + 0.5) >> 0x20));
    }
    else if (dVar14 == -0.5) {
      dVar13 = -1.0;
LAB_01c49fe0:
      dVar14 = (double)CONCAT44(uStack_44,uStack_48);
      uVar4 = func_0x01457ce4(uStack_48,uStack_44);
      dVar13 = dVar14 + dVar13;
      if ((uVar4 & 1) == 0) {
        dVar13 = dVar14;
      }
    }
    else {
      dVar13 = (double)func_0x0148df24(SUB84(dVar13 + -0.5,0),
                                       (int)((ulonglong)(dVar13 + -0.5) >> 0x20));
    }
    if ((dVar13 != _UNK_01c4a290) && (iVar2 = (int)(longlong)dVar13, 0 < iVar2)) {
      iVar11 = *(int *)(param_2 + 0xc);
      iVar8 = 0;
      if (2 < iVar11) {
        iVar8 = func_0x0148d518(*(undefined4 *)(param_2 + 0x18),
                                **(undefined4 **)(_UNK_01c4a498 + 0x1c4a058),0);
      }
      iVar5 = func_0x03668dfc(**(undefined4 **)(_UNK_01c4a49c + 0x1c4a070));
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x01ddc2c0(iVar5,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
        func_0x01e26200(0,iVar2,0);
        func_0x01384bf0();
        func_0x01e26878(0,1,0);
        if (iVar8 != 0) {
          func_0x01384bf0();
          func_0x01e27054(0,0);
        }
        func_0x01384bf0();
      }
      else {
        func_0x01e26200(iVar5,iVar2,0);
        func_0x01e26878(iVar5,1,0);
        if (iVar8 != 0) {
          func_0x01e27054(iVar5,0);
        }
      }
      iVar8 = func_0x01e241b4(iVar5,0);
      if (iVar8 == 0) {
        *(undefined1 *)(param_1 + 8) = 0;
        return;
      }
      *(int *)(param_1 + 0xc) = iVar2;
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x9c);
      iStack_4c = iVar11;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      puVar12 = *(undefined4 **)(_UNK_01c4a4a0 + 0x1c4a16c);
      uVar6 = *(undefined4 *)(iVar8 + 8);
      uVar9 = func_0x01384be4(*puVar12);
      iVar10 = 0;
      func_0x02450548(uVar9,param_1,**(undefined4 **)(_UNK_01c4a4a4 + 0x1c4a190),0);
      iVar11 = func_0x024507f8(uVar6,uVar9,0);
      if (iVar11 != 0) {
        uVar9 = *puVar12;
        iVar10 = func_0x01384ab8(iVar11,uVar9);
        if (iVar10 == 0) {
          func_0x01384fb4(iVar11,uVar9);
          iVar10 = 0;
        }
      }
      *(int *)(iVar8 + 8) = iVar10;
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x9c);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar6 = *(undefined4 *)(iVar8 + 8);
      uVar9 = func_0x01384be4(*puVar12);
      iVar10 = 0;
      func_0x02450548(uVar9,param_1,**(undefined4 **)(_UNK_01c4a4a8 + 0x1c4a230),0);
      iVar11 = func_0x024507e8(uVar6,uVar9,0);
      if (iVar11 == 0) {
        puVar12 = *(undefined4 **)(_UNK_01c4a4ac + 0x1c4a2a4);
      }
      else {
        uVar9 = *puVar12;
        iVar10 = func_0x01384ab8(iVar11,uVar9);
        puVar12 = *(undefined4 **)(_UNK_01c4a4b0 + 0x1c4a274);
        if (iVar10 == 0) {
          func_0x01384fb4(iVar11,uVar9);
          iVar10 = 0;
        }
      }
      iVar11 = *(int *)(**(int **)(_UNK_01c4a4b4 + 0x1c4a2ac) + 0x74);
      *(int *)(iVar8 + 8) = iVar10;
      if (iVar11 == 0) {
        func_0x01384ab4();
      }
      iVar8 = func_0x0300d558(**(undefined4 **)(_UNK_01c4a4b8 + 0x1c4a2cc));
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x028c3fd8(iVar8,0);
      iVar8 = func_0x01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x9c);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x14);
      if (iVar8 != 0) {
        iVar11 = func_0x03668dfc(*puVar12);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        iVar11 = func_0x01ddbed8(iVar11,0);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        uVar9 = func_0x01f0908c(iVar11,0);
        func_0x01f038c4(iVar8,uVar9,0);
      }
      if (iStack_4c < 2) {
        iVar8 = func_0x03668dfc(*puVar12);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar9 = 0;
      }
      else {
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x01e25ed4(&uStack_48,iVar5,0);
        iVar2 = func_0x03668dfc(*puVar12);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x7c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x020e81ec(iVar2,uStack_48,uStack_44,0);
        iVar8 = func_0x03668dfc(*puVar12);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar9 = func_0x0210e5f4(iVar2,0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar2 = 0;
      }
      uStack_50 = 0;
      func_0x01de9578(iVar8,iVar2,uVar9,1);
      uVar1 = 1;
      goto LAB_01c49ef0;
    }
  }
  uVar1 = 0;
LAB_01c49ef0:
  *(undefined1 *)(param_1 + 8) = uVar1;
  return;
}



// ===== FAT.GuideActImpBoardMerge$$.ctor RVA 0x1c3a4bc =====

void FUN_01c4a4bc(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  (*(code *)&UNK_051877b0)(param_1,0);
  return;
}



// ===== FAT.GuideActImpBoardMerge$$<>iFixBaseProxy_Play RVA 0x1c3a4cc =====

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


