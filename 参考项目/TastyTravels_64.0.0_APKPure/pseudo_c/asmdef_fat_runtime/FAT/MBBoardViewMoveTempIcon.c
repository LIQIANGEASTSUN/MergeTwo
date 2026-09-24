/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardViewMoveTempIcon$$SetImage RVA 0x1efc988 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0c988(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  uint in_fpscr;
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
  
  pcVar7 = (char *)(_UNK_01f0ccd0 + 0x1f0c9a4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0ccd4 + 0x1f0c9b8));
    func_0x01384978(*(undefined4 *)(_UNK_01f0ccd8 + 0x1f0c9c4));
    func_0x01384978(*(undefined4 *)(_UNK_01f0ccdc + 0x1f0c9d0));
    func_0x01384978(*(undefined4 *)(_UNK_01f0cce0 + 0x1f0c9dc));
    func_0x01384978(*(undefined4 *)(_UNK_01f0cce4 + 0x1f0c9e8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7a20,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7a20,0);
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
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
    return;
  }
  puVar2 = *(undefined4 **)(_UNK_01f0cce8 + 0x1f0ca48);
  *(int *)(param_1 + 0x10) = param_2;
  iVar1 = func_0x03668dfc(*puVar2);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01ddbed8(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_01f090e0(iVar1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar8 = func_0x0210e5f4(param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar8 = FUN_01e02548(iVar1,uVar8,0);
  piVar9 = *(int **)(_UNK_01f0ccec + 0x1f0cad0);
  iVar1 = *(int *)(*piVar9 + 0x74);
  *(undefined4 *)(param_1 + 0x14) = uVar8;
  if (iVar1 == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar8,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x02f67194(param_1,**(undefined4 **)(_UNK_01f0ccf0 + 0x1f0cb08));
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar6 = func_0x0145b1cc(iVar1,0,0);
    if (iVar6 != 0) {
      piVar9 = (int *)func_0x021566f4(0);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar8 = func_0x0210e2d4(param_2,0);
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar6 = *piVar9;
      uVar3 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01f0ccf4 + 0x1f0cb84)) {
            puVar2 = (undefined4 *)(iVar6 + *piVar4 * 8 + 0x100);
            goto LAB_01f0cbcc;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01f0ccf4 + 0x1f0cb84),8);
LAB_01f0cbcc:
      iVar6 = (*(code *)*puVar2)(piVar9,uVar8,puVar2[1]);
      if (iVar6 != 0) {
        uVar8 = *(undefined4 *)(iVar6 + 0x1c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0267cc24(iVar1,uVar8,0);
      }
    }
  }
  iVar1 = func_0x0244fc34(param_1,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0210cd7c(&uStack_28,param_2,0);
  uVar8 = uStack_28;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0210cd7c(&uStack_28,param_2,0);
  uVar5 = uStack_24;
  if (*(int *)(**(int **)(_UNK_01f0ccf8 + 0x1f0cc60) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
  uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
  func_0x01dd91fc(&uStack_28,uVar8,uVar5,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_30 = 0;
  func_0x0245068c(iVar1,uStack_28,uStack_24,0);
  return;
}



// ===== FAT.MBBoardViewMoveTempIcon$$SetCollectTriggerDistance RVA 0x1efcde4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0cde4(int param_1,undefined4 param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  char *pcVar4;
  float fVar5;
  
  iVar1 = func_0x0229f06c(0x7a22,0);
  iVar2 = _UNK_01f0cf3c;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x28) = param_2;
    if (*(char *)(iVar2 + 0x1f0ce68) == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f0cf40 + 0x1f0ce7c));
      *(char *)(iVar2 + 0x1f0ce68) = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_01f0cf44 + 0x1f0ce9c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    fVar5 = SQRT(param_4 * param_4 + param_3 * param_3 + param_5 * param_5);
    if (fVar5 <= _UNK_01f0cf38) {
      pcVar4 = (char *)(_UNK_01f0cf48 + 0x1f0cee8);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f0cf4c + 0x1f0cefc));
        *pcVar4 = '\x01';
      }
      pfVar3 = *(float **)(**(int **)(_UNK_01f0cf50 + 0x1f0cf10) + 0x5c);
      param_3 = *pfVar3;
      param_4 = pfVar3[1];
      param_5 = pfVar3[2];
    }
    else {
      param_5 = param_5 / fVar5;
      param_4 = param_4 / fVar5;
      param_3 = param_3 / fVar5;
    }
    *(float *)(param_1 + 0x2c) = param_3;
    *(float *)(param_1 + 0x30) = param_4;
    *(float *)(param_1 + 0x34) = param_5;
  }
  else {
    iVar2 = func_0x0229f13c(0x7a22,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02253a20(iVar2,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.MBBoardViewMoveTempIcon$$Update RVA 0x1efe310 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0e310(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uStack_70;
  undefined4 uStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  
  pcVar3 = (char *)(_UNK_01f0e5a4 + 0x1f0e32c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0e5a8 + 0x1f0e340));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa4fe,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa4fe,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(&stack0xffffffb8,0,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffd0,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffd0,param_1,0);
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
    func_0x0245495c(iVar4,uVar6,&stack0xffffffd0,uVar2);
    return;
  }
  piVar5 = *(int **)(_UNK_01f0e5ac + 0x1f0e3a0);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0244fb8c(uVar6,0,0);
  if (((iVar1 == 0) && (*(int *)(param_1 + 0x10) != 0)) && (*(char *)(param_1 + 0x24) == '\0')) {
    uVar13 = FloatVectorAdd(*(undefined8 *)(param_1 + 0x18),_UNK_01f0e598,2);
    uVar13 = FloatVectorMult(uVar13,uVar13,2,0x20);
    fVar7 = *(float *)(param_1 + 0x20);
    iVar1 = func_0x0244fc34(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (_UNK_01f0e5a0 <= (float)uVar13 + (float)((ulonglong)uVar13 >> 0x20) + fVar7 * fVar7) {
      func_0x0244fd3c(&fStack_60,iVar1,0);
      fVar8 = fStack_58;
      fVar7 = fStack_60;
      fVar9 = fStack_5c;
      fVar10 = *(float *)(param_1 + 0x18);
      fVar11 = *(float *)(param_1 + 0x1c);
      fVar12 = *(float *)(param_1 + 0x20);
      iVar1 = func_0x0244fc34(param_1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x0244fc64(iVar1,0);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x01384ab4();
      }
      fVar8 = fVar8 - fVar12;
      fVar9 = fVar9 - fVar11;
      fVar7 = fVar7 - fVar10;
      iVar1 = func_0x0145b1cc(uVar6,0,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0244fc34(param_1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0244fc64(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02452e04(&fStack_60,iVar1,fVar7,fVar9,fVar8,0);
        fVar8 = fStack_58;
        fVar9 = fStack_5c;
        fVar7 = fStack_60;
      }
      if (*(float *)(param_1 + 0x28) <=
          fVar9 * *(float *)(param_1 + 0x30) + fVar7 * *(float *)(param_1 + 0x2c) +
          fVar8 * *(float *)(param_1 + 0x34)) {
        *(undefined1 *)(param_1 + 0x24) = 1;
        func_0x01f0e5b0(param_1);
      }
    }
    else {
      func_0x0244fd3c(&uStack_70,iVar1,0);
      *(undefined4 *)(param_1 + 0x20) = uStack_68;
      *(undefined8 *)(param_1 + 0x18) = uStack_70;
    }
  }
  return;
}



// ===== FAT.MBBoardViewMoveTempIcon$$TriggerFlyAnimation RVA 0x1efe5b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0e5b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar7 = (char *)(_UNK_01f0e82c + 0x1f0e5d0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0e830 + 0x1f0e5e4));
    func_0x01384978(*(undefined4 *)(_UNK_01f0e834 + 0x1f0e5f0));
    func_0x01384978(*(undefined4 *)(_UNK_01f0e838 + 0x1f0e5fc));
    func_0x01384978(*(undefined4 *)(_UNK_01f0e83c + 0x1f0e608));
    *pcVar7 = '\x01';
  }
  iVar4 = func_0x0229f06c(0xa4ff,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0xa4ff,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(&uStack_48,0,0);
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffd0,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffd0,param_1,0);
    iVar9 = *(int *)(iVar4 + 8);
    uVar10 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar4 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&stack0xffffffd0,uVar6,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  uVar10 = func_0x0244ffd4(param_1,0);
  if (*(int *)(**(int **)(_UNK_01f0e840 + 0x1f0e688) + 0x74) == 0) {
    func_0x01384ab4();
  }
  piVar8 = (int *)0x0;
  func_0x01485348(uVar10,0);
  piVar5 = (int *)func_0x0244fc34(param_1,0);
  if (piVar5 == (int *)0x0) {
    iVar4 = func_0x0145b1cc(0,0,0);
    uVar10 = _UNK_01f0e828;
    if (iVar4 == 0) goto LAB_01f0e730;
LAB_01f0e710:
    func_0x01384bf0();
  }
  else {
    if (*piVar5 == **(int **)(_UNK_01f0e844 + 0x1f0e6c8)) {
      piVar8 = piVar5;
    }
    iVar4 = func_0x0145b1cc(piVar8,0,0);
    uVar10 = _UNK_01f0e828;
    if (iVar4 == 0) goto LAB_01f0e730;
    if (piVar8 == (int *)0x0) goto LAB_01f0e710;
  }
  func_0x0244fe4c(&uStack_3c,piVar8,0);
  uVar10 = uStack_3c;
LAB_01f0e730:
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x0210e2d4(iVar4,0);
  iVar4 = func_0x0244fc34(param_1,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_3c,iVar4,0);
  uVar3 = uStack_34;
  uVar2 = uStack_38;
  uVar1 = uStack_3c;
  if (*(int *)(**(int **)(_UNK_01f0e848 + 0x1f0e788) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0204f2f0(&uStack_3c,6,0);
  if (*(int *)(**(int **)(_UNK_01f0e84c + 0x1f0e7c8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_48 = uVar10;
  func_0x0207405c(uVar6,1,uVar1,uVar2,uVar3,uStack_3c,uStack_38,uStack_34,0,6,0,0);
  return;
}



// ===== FAT.MBBoardViewMoveTempIcon$$OnDestroy RVA 0x1efe850 =====

void FUN_01f0e850(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa500,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa500,0);
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
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



// ===== FAT.MBBoardViewMoveTempIcon$$.ctor RVA 0x1efe8ac =====

void FUN_01f0e8ac(int param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xc61c3c00;
  *(undefined4 *)(param_1 + 0x1c) = 0xc61c3c00;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}


