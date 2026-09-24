/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardAreaAdapter$$OnRectTransformDimensionsChange RVA 0x1f00c80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f10c80(undefined4 param_1)

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
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0xa520,0);
  if (iVar1 == 0) {
    func_0x02452e1c(param_1,0);
    pcVar3 = (char *)(_UNK_01f10e1c + 0x1f10cfc);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f10e20 + 0x1f10d10));
      func_0x01384978(*(undefined4 *)(_UNK_01f10e24 + 0x1f10d1c));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa521,0);
    if (iVar1 == 0) {
      uVar5 = func_0x024510d4(0);
      uVar2 = func_0x024510e4(0);
      iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01f10e28 + 0x1f10d90));
      if (*(int *)(**(int **)(_UNK_01f10e2c + 0x1f10da4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar4 = func_0x0145b1cc(iVar1,0,0);
      if (iVar4 == 0) {
        func_0x02452ba8(&uStack_28,0);
      }
      else {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01eed9b4(&uStack_28,iVar1,0);
      }
      uStack_38 = uStack_1c;
      uStack_34 = uVar5;
      uStack_30 = uVar2;
      func_0x01f11158(param_1,uStack_28,uStack_24,uStack_20);
      return;
    }
    iVar1 = func_0x0229f13c(0xa521,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa520,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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



// ===== FAT.MBBoardAreaAdapter$$_RefreshLayout RVA 0x1f00ce4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f10ce4(undefined4 param_1)

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
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01f10e1c + 0x1f10cfc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f10e20 + 0x1f10d10));
    func_0x01384978(*(undefined4 *)(_UNK_01f10e24 + 0x1f10d1c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa521,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa521,0);
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
  uVar5 = func_0x024510d4(0);
  uVar2 = func_0x024510e4(0);
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01f10e28 + 0x1f10d90));
  if (*(int *)(**(int **)(_UNK_01f10e2c + 0x1f10da4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar4 = func_0x0145b1cc(iVar1,0,0);
  if (iVar4 == 0) {
    func_0x02452ba8(&uStack_28,0);
  }
  else {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01eed9b4(&uStack_28,iVar1,0);
  }
  uStack_38 = uStack_1c;
  uStack_34 = uVar5;
  uStack_30 = uVar2;
  func_0x01f11158(param_1,uStack_28,uStack_24,uStack_20);
  return;
}



// ===== FAT.MBBoardAreaAdapter$$OnEnable RVA 0x1f00e30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f10e30(undefined4 param_1)

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
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01f10f70 + 0x1f10e44);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f10f74 + 0x1f10e58));
    func_0x01384978(*(undefined4 *)(_UNK_01f10f78 + 0x1f10e64));
    func_0x01384978(*(undefined4 *)(_UNK_01f10f7c + 0x1f10e70));
    func_0x01384978(*(undefined4 *)(_UNK_01f10f80 + 0x1f10e7c));
    func_0x01384978(*(undefined4 *)(_UNK_01f10f84 + 0x1f10e88));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa52e,0);
  if (iVar1 == 0) {
    func_0x02452e2c(param_1,0);
    if (*(int *)(**(int **)(_UNK_01f10f88 + 0x1f10eec) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f10f8c + 0x1f10f08));
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f10f90 + 0x1f10f1c));
    func_0x03ccc738(uVar5,param_1,**(undefined4 **)(_UNK_01f10f94 + 0x1f10f38),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349ec34(iVar1,uVar5,**(undefined4 **)(_UNK_01f10f98 + 0x1f10f5c));
    pcVar3 = (char *)(_UNK_01f10e1c + 0x1f10cfc);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f10e20 + 0x1f10d10));
      func_0x01384978(*(undefined4 *)(_UNK_01f10e24 + 0x1f10d1c));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa521,0);
    if (iVar1 == 0) {
      uVar5 = func_0x024510d4(0);
      uVar2 = func_0x024510e4(0);
      iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01f10e28 + 0x1f10d90));
      if (*(int *)(**(int **)(_UNK_01f10e2c + 0x1f10da4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar4 = func_0x0145b1cc(iVar1,0,0);
      if (iVar4 == 0) {
        func_0x02452ba8(&uStack_28,0);
      }
      else {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01eed9b4(&uStack_28,iVar1,0);
      }
      uStack_38 = uStack_1c;
      uStack_34 = uVar5;
      uStack_30 = uVar2;
      func_0x01f11158(param_1,uStack_28,uStack_24,uStack_20);
      return;
    }
    iVar1 = func_0x0229f13c(0xa521,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa52e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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



// ===== FAT.MBBoardAreaAdapter$$OnDisable RVA 0x1f00f9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f10f9c(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_01f110d4 + 0x1f10fb0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f110d8 + 0x1f10fc4));
    func_0x01384978(*(undefined4 *)(_UNK_01f110dc + 0x1f10fd0));
    func_0x01384978(*(undefined4 *)(_UNK_01f110e0 + 0x1f10fdc));
    func_0x01384978(*(undefined4 *)(_UNK_01f110e4 + 0x1f10fe8));
    func_0x01384978(*(undefined4 *)(_UNK_01f110e8 + 0x1f10ff4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa530,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa530,0);
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
  if (*(int *)(**(int **)(_UNK_01f110ec + 0x1f1104c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f110f0 + 0x1f11068));
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f110f4 + 0x1f1107c));
  func_0x03ccc738(uVar5,param_1,**(undefined4 **)(_UNK_01f110f8 + 0x1f11098),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0349edc0(iVar1,uVar5,**(undefined4 **)(_UNK_01f110fc + 0x1f110bc));
  (*(code *)&UNK_05439d2c)(param_1,0);
  return;
}



// ===== FAT.MBBoardAreaAdapter$$ForceRefresh RVA 0x1f01100 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f11100(undefined4 param_1)

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
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0xa531,0);
  if (iVar1 == 0) {
    pcVar3 = (char *)(_UNK_01f10e1c + 0x1f10cfc);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f10e20 + 0x1f10d10));
      func_0x01384978(*(undefined4 *)(_UNK_01f10e24 + 0x1f10d1c));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa521,0);
    if (iVar1 == 0) {
      uVar5 = func_0x024510d4(0);
      uVar2 = func_0x024510e4(0);
      iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01f10e28 + 0x1f10d90));
      if (*(int *)(**(int **)(_UNK_01f10e2c + 0x1f10da4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar4 = func_0x0145b1cc(iVar1,0,0);
      if (iVar4 == 0) {
        func_0x02452ba8(&uStack_28,0);
      }
      else {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01eed9b4(&uStack_28,iVar1,0);
      }
      uStack_38 = uStack_1c;
      uStack_34 = uVar5;
      uStack_30 = uVar2;
      func_0x01f11158(param_1,uStack_28,uStack_24,uStack_20);
      return;
    }
    iVar1 = func_0x0229f13c(0xa521,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa531,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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



// ===== FAT.MBBoardAreaAdapter$$_RefreshLayout RVA 0x1f01158 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f11158(int param_1,undefined4 param_2,float param_3,undefined4 param_4,float param_5,
                 int param_6,int param_7)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_s22;
  float fVar19;
  undefined4 uStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  pcVar7 = (char *)(_UNK_01f11970 + 0x1f11180);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f11974 + 0x1f11198));
    func_0x01384978(*(undefined4 *)(_UNK_01f11978 + 0x1f111a4));
    func_0x01384978(*(undefined4 *)(_UNK_01f1197c + 0x1f111b0));
    func_0x01384978(*(undefined4 *)(_UNK_01f11980 + 0x1f111bc));
    func_0x01384978(*(undefined4 *)(_UNK_01f11984 + 0x1f111c8));
    *pcVar7 = '\x01';
  }
  fStack_64 = 0.0;
  fStack_68 = 0.0;
  iVar4 = func_0x0229f06c(0xa522,0);
  if (iVar4 == 0) {
    piVar5 = (int *)func_0x0244fc34(param_1,0);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
      piVar5 = (int *)0x0;
    }
    else {
      piVar8 = *(int **)(_UNK_01f11988 + 0x1f11270);
      if (*piVar5 != *piVar8) {
        func_0x01384bf0();
      }
      if (*piVar5 != *piVar8) {
        piVar5 = (int *)0x0;
      }
    }
    func_0x0244fd2c(&uStack_78,piVar5,0);
    fVar14 = fStack_70;
    iVar4 = param_7;
    if (0 < param_7) {
      iVar4 = param_6;
    }
    if (0 < iVar4) {
      uVar1 = in_fpscr & 0xfffffff | (uint)(fStack_70 == 0.0) << 0x1e |
              (uint)(0.0 <= fStack_70) << 0x1d;
      bVar2 = (byte)(uVar1 >> 0x18);
      bVar11 = (bool)(bVar2 >> 6);
      bVar12 = (bool)(bVar2 >> 5 & 1);
      if (bVar12 && !bVar11) {
        uVar1 = in_fpscr & 0xfffffff | (uint)(fStack_6c == 0.0) << 0x1e |
                (uint)(0.0 <= fStack_6c) << 0x1d;
        bVar2 = (byte)(uVar1 >> 0x18);
        bVar11 = (bool)(bVar2 >> 6);
        bVar12 = (bool)(bVar2 >> 5 & 1);
        unaff_s22 = fStack_6c;
      }
      if (bVar12 && !bVar11) {
        iVar4 = *(int *)(param_1 + 0x38);
        fVar15 = (float)VectorSignedToFloat(param_7,(byte)(uVar1 >> 0x16) & 3);
        fVar17 = (param_3 / fVar15) * unaff_s22;
        fVar15 = ((fVar15 - (param_5 + param_3)) * unaff_s22) / fVar15;
        fVar18 = (fVar17 + ((unaff_s22 - fVar17) - fVar15) * *(float *)(param_1 + 0x10)) / unaff_s22
        ;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fdfc(iVar4,0x3f800000,fVar18,0);
        iVar4 = *(int *)(param_1 + 0x34);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fe1c(iVar4,0,fVar18,0);
        iVar4 = *(int *)(param_1 + 0x30);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd2c(&uStack_78,iVar4,0);
        iVar4 = *(int *)(param_1 + 0x30);
        pcVar7 = (char *)(_UNK_01f1198c + 0x1f1139c);
        if (fVar14 <= fStack_70) {
          if (*pcVar7 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01f11990 + 0x1f113c8));
            *pcVar7 = '\x01';
          }
          iVar6 = *(int *)(**(int **)(_UNK_01f11994 + 0x1f113dc) + 0x5c);
          fVar13 = *(float *)(iVar6 + 0xc);
          uVar9 = *(undefined4 *)(iVar6 + 0x10);
          uVar10 = *(undefined4 *)(iVar6 + 0x14);
        }
        else {
          fVar13 = fVar14 / fStack_70;
          uVar10 = 0x3f800000;
          uVar9 = 0x3f800000;
        }
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x024503a4(iVar4,fVar13,uVar9,uVar10,0);
        iVar4 = *(int *)(param_1 + 0x3c);
        fVar19 = *(float *)(param_1 + 0x14);
        fVar13 = unaff_s22 * fVar18 - *(float *)(param_1 + 0x20);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd2c(&uStack_78,iVar4,0);
        fStack_64 = (((unaff_s22 - fVar15) - fVar19) - fVar13) / fStack_6c;
        func_0x01f11ab0(param_1,&fStack_64);
        iVar4 = *(int *)(param_1 + 0x3c);
        if (*pcVar7 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01f11998 + 0x1f11484));
          *pcVar7 = '\x01';
        }
        piVar5 = *(int **)(_UNK_01f1199c + 0x1f1149c);
        iVar6 = *(int *)(*piVar5 + 0x5c);
        fVar19 = *(float *)(iVar6 + 0x10) * fStack_64;
        fVar16 = *(float *)(iVar6 + 0x14) * fStack_64;
        fVar15 = *(float *)(iVar6 + 0xc) * fStack_64;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x024503a4(iVar4,fVar15,fVar19,fVar16,0);
        iVar4 = *(int *)(param_1 + 0x3c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd2c(&uStack_78,iVar4,0);
        fVar19 = fStack_64;
        fVar15 = fStack_6c;
        iVar6 = *(int *)(param_1 + 0x3c);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fe2c(&uStack_78,iVar6,0);
        fVar15 = fVar15 * fVar19 * fStack_74;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fdbc(iVar4,0,fVar13 + fVar15,0);
        iVar4 = *(int *)(param_1 + 0x3c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        piVar8 = (int *)func_0x0244fc64(iVar4,0);
        if ((piVar8 == (int *)0x0) || (*piVar8 != **(int **)(_UNK_01f119a0 + 0x1f11598))) {
          func_0x01384bf0();
          bVar11 = true;
          piVar8 = (int *)0x0;
        }
        else {
          bVar11 = false;
        }
        func_0x0244fd2c(&uStack_78,piVar8,0);
        fVar13 = fStack_64;
        fVar15 = fStack_70;
        iVar4 = *(int *)(param_1 + 0x3c);
        if (bVar11) {
          func_0x01384bf0();
        }
        func_0x0244fd2c(&uStack_78,piVar8,0);
        fVar16 = fStack_64;
        fVar19 = fStack_70;
        iVar6 = *(int *)(param_1 + 0x3c);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd2c(&uStack_78,iVar6,0);
        fVar3 = fStack_6c;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fe5c(iVar4,(fVar19 - fVar15 * fVar13) / fVar16,fVar3,0);
        iVar4 = *(int *)(param_1 + 0x44);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd2c(&uStack_78,iVar4,0);
        iVar4 = *(int *)(param_1 + 0x44);
        fVar15 = fVar17 + fStack_6c;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fdbc(iVar4,0,(fVar17 + fVar15) * 0.5,0);
        fVar13 = *(float *)(param_1 + 0x1c);
        iVar4 = *(int *)(param_1 + 0x40);
        fVar15 = fVar15 + fVar13;
        fVar17 = (unaff_s22 * fVar18 - *(float *)(param_1 + 0x24)) - fVar13;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        fVar19 = fVar17 - fVar15;
        func_0x0244fd2c(&uStack_78,iVar4,0);
        fVar18 = fStack_70;
        iVar4 = *(int *)(param_1 + 0x40);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd2c(&uStack_78,iVar4,0);
        fStack_68 = fVar19 / fStack_6c;
        fVar18 = (fVar14 - (fVar13 + fVar13)) / fVar18;
        if (fVar18 < fStack_68) {
          fStack_68 = fVar18;
        }
        func_0x01f11b1c(param_1,&fStack_68);
        iVar4 = *(int *)(param_1 + 0x40);
        if (*pcVar7 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01f119a4 + 0x1f11750));
          *pcVar7 = '\x01';
        }
        iVar6 = *(int *)(*piVar5 + 0x5c);
        fVar18 = *(float *)(iVar6 + 0x10) * fStack_68;
        fVar13 = *(float *)(iVar6 + 0x14) * fStack_68;
        fVar14 = *(float *)(iVar6 + 0xc) * fStack_68;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x024503a4(iVar4,fVar14,fVar18,fVar13,0);
        iVar4 = *(int *)(param_1 + 0x40);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fd2c(&uStack_78,iVar4,0);
        iVar4 = *(int *)(param_1 + 0x40);
        fVar19 = fVar19 - fStack_6c * fStack_68;
        fVar14 = *(float *)(param_1 + 0x18);
        if (fVar19 < 0.0) {
          fVar19 = _UNK_01f1196c;
        }
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0244fdbc(iVar4,0,(fVar14 + -0.5) * fVar19 + (fVar15 + fVar17) * 0.5,0);
        iVar4 = *(int *)(param_1 + 0x40);
        iVar6 = *(int *)(param_1 + 0x48);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0245067c(&uStack_78,iVar4,0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x024503a4(iVar6,uStack_78,fStack_74,fStack_70,0);
        func_0x01f11bc4(param_1,*(undefined4 *)(param_1 + 0x34));
        func_0x01f11bc4(param_1,*(undefined4 *)(param_1 + 0x38));
        iVar4 = func_0x03668dfc(**(undefined4 **)(_UNK_01f119a8 + 0x1f118a8));
        if ((iVar4 != 0) && (iVar6 = func_0x01ddc564(iVar4,0), iVar6 != 0)) {
          func_0x01de6d8c(iVar4,0);
          func_0x01de6de4(iVar4,0);
          func_0x01de6e3c(iVar4,0);
          func_0x01de6e94(iVar4,0);
          func_0x01f11d84(param_1,iVar4);
        }
        if (*(int *)(**(int **)(_UNK_01f119ac + 0x1f11910) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar4 = func_0x0300d558(**(undefined4 **)(_UNK_01f119b0 + 0x1f1192c));
        fVar14 = fStack_64;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0349f25c(iVar4,fVar14,**(undefined4 **)(_UNK_01f119b4 + 0x1f11954));
      }
    }
  }
  else {
    iVar4 = func_0x0229f13c(0xa522,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x02292180(iVar4,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}



// ===== FAT.MBBoardAreaAdapter$$_OnScreenStateChanged RVA 0x1f019b8 =====

void FUN_01f119b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0xa52f,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02450440(param_1,0);
    if (iVar1 != 0) {
      FUN_01f11158(param_1,param_8,param_9,param_10,param_11,param_2,param_3);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa52f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021eadcc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                    param_10,param_11,param_12,param_13,param_14,0);
  }
  return;
}



// ===== FAT.MBBoardAreaAdapter$$_ClampScale_Order RVA 0x1f01ab0 =====

void FUN_01f11ab0(int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  iVar1 = func_0x0229f06c(0xa523,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa523,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_28 = uStack_40;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    func_0x01485258(&uStack_38,*param_2,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x014852b8(&uStack_38,0,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,1,0);
    fVar2 = (float)func_0x024549ac(&uStack_38,0,0);
    *param_2 = fVar2;
    return;
  }
  if (*(float *)(param_1 + 0x28) < *param_2) {
    *param_2 = *(float *)(param_1 + 0x28);
  }
  return;
}



// ===== FAT.MBBoardAreaAdapter$$_ClampScale_Board RVA 0x1f01b1c =====

void FUN_01f11b1c(int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  iVar1 = func_0x0229f06c(0xa524,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa524,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_28 = uStack_40;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    func_0x01485258(&uStack_38,*param_2,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x014852b8(&uStack_38,0,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,1,0);
    fVar2 = (float)func_0x024549ac(&uStack_38,0,0);
    *param_2 = fVar2;
    return;
  }
  if (*(float *)(param_1 + 0x2c) < *param_2) {
    *param_2 = *(float *)(param_1 + 0x2c);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  fVar2 = *param_2;
  iVar1 = *(int *)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(float *)(iVar1 + 0x10) = fVar2;
  return;
}



// ===== FAT.MBBoardAreaAdapter$$_AdjustBgHeightScale RVA 0x1f01bc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f11bc4(undefined4 param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [3];
  float fStack_1c;
  
  pcVar7 = (char *)(_UNK_01f11d70 + 0x1f11be4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f11d74 + 0x1f11bf8));
    func_0x01384978(*(undefined4 *)(_UNK_01f11d78 + 0x1f11c04));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xa525,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xa525,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    auStack_28[0] = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar3 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x02450178(param_2,**(undefined4 **)(_UNK_01f11d7c + 0x1f11c7c),0);
  if ((piVar4 == (int *)0x0) || (*piVar4 != **(int **)(_UNK_01f11d80 + 0x1f11c98))) {
    func_0x01384bf0();
    bVar1 = true;
    piVar4 = (int *)0x0;
  }
  else {
    bVar1 = false;
  }
  func_0x0244fd2c(auStack_28,piVar4,0);
  fVar2 = fStack_1c;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd2c(auStack_28,param_2,0);
  if (fVar2 < fStack_1c) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0244fd2c(auStack_28,param_2,0);
    fVar2 = fStack_1c;
    if (bVar1) {
      func_0x01384bf0();
    }
    func_0x0244fd2c(auStack_28,piVar4,0);
    if (bVar1) {
      func_0x01384bf0();
    }
    uStack_30 = 0;
    func_0x024503a4(piVar4,0x3f800000,fVar2 / fStack_1c,0);
  }
  return;
}



// ===== FAT.MBBoardAreaAdapter$$_ScheduleDeferredBoardRecalc RVA 0x1f01d84 =====

void FUN_01f11d84(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0xa526,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa526,0);
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
  iVar1 = func_0x02450440(param_1,0);
  if (param_2 == 0 || iVar1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    func_0x02450608(param_1,*(int *)(param_1 + 0x4c),0);
  }
  uVar4 = func_0x01f11f1c(param_1,param_2);
  uVar4 = func_0x02450640(param_1,uVar4,0);
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  return;
}



// ===== FAT.MBBoardAreaAdapter$$JumpCardAlbumIconPos RVA 0x1f01e30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f11e30(undefined8 *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  pcVar2 = (char *)(_UNK_01f11f10 + 0x1f11e4c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f11f14 + 0x1f11e60));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa532,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450178(iVar1,**(undefined4 **)(_UNK_01f11f18 + 0x1f11ed0),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244fd3c(&uStack_20,iVar1,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xa532,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0218a848(&uStack_20,iVar1,param_2,0);
  }
  *(undefined4 *)(param_1 + 1) = uStack_18;
  *param_1 = uStack_20;
  return;
}



// ===== FAT.MBBoardAreaAdapter$$_DeferredBoardRecalc RVA 0x1f01f1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01f11f1c(undefined4 param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01f11fc8 + 0x1f11f34);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f11fcc + 0x1f11f48));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa527,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa527,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02178b78 + 0x2178a84);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02178b7c + 0x2178a98),param_1,param_2,0);
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
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02178b80 + 0x2178b68));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f11fd0 + 0x1f11fa8));
  func_0x0244f5a0(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  *(undefined4 *)(iVar1 + 8) = 0;
  return iVar1;
}



// ===== FAT.MBBoardAreaAdapter.<_DeferredBoardRecalc>d__28$$.ctor RVA 0x1f01fd4 =====

void FUN_01f11fd4(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MBBoardAreaAdapter$$.ctor RVA 0x1f01ff0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f11ff0(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = _UNK_01f12030;
  uVar2 = _UNK_01f12020;
  uVar1 = _UNK_01f12018;
  *(undefined8 *)(param_1 + 0x20) = _UNK_01f12028;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  (*(code *)&UNK_0543c790)(param_1,0);
  return;
}



// ===== FAT.MBBoardAreaAdapter$$<>iFixBaseProxy_OnRectTransformDimensionsChange RVA 0x1f02038 =====

void FUN_01f12038(undefined4 param_1)

{
  (*(code *)&UNK_0544c7a4)(param_1,0);
  return;
}



// ===== FAT.MBBoardAreaAdapter$$<>iFixBaseProxy_OnEnable RVA 0x1f02040 =====

void FUN_01f12040(undefined4 param_1)

{
  (*(code *)&UNK_05439d24)(param_1,0);
  return;
}



// ===== FAT.MBBoardAreaAdapter$$<>iFixBaseProxy_OnDisable RVA 0x1f02048 =====

void FUN_01f12048(undefined4 param_1)

{
  (*(code *)&UNK_05439d2c)(param_1,0);
  return;
}



// ===== FAT.MBBoardAreaAdapter.<_DeferredBoardRecalc>d__28$$System.IDisposable.Dispose RVA 0x1f02050 =====

void FUN_01f12050(void)

{
  return;
}



// ===== FAT.MBBoardAreaAdapter.<_DeferredBoardRecalc>d__28$$MoveNext RVA 0x1f02054 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f12054(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
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
  
  pcVar11 = (char *)(_UNK_01f12510 + 0x1f1206c);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f12514 + 0x1f12080));
    func_0x01384978(*(undefined4 *)(_UNK_01f12518 + 0x1f1208c));
    func_0x01384978(*(undefined4 *)(_UNK_01f1251c + 0x1f12098));
    func_0x01384978(*(undefined4 *)(_UNK_01f12520 + 0x1f120a4));
    func_0x01384978(*(undefined4 *)(_UNK_01f12524 + 0x1f120b0));
    func_0x01384978(*(undefined4 *)(_UNK_01f12528 + 0x1f120bc));
    func_0x01384978(*(undefined4 *)(_UNK_01f1252c + 0x1f120c8));
    func_0x01384978(*(undefined4 *)(_UNK_01f12530 + 0x1f120d4));
    func_0x01384978(*(undefined4 *)(_UNK_01f12534 + 0x1f120e0));
    *pcVar11 = '\x01';
  }
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar12 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  uStack_28 = 0;
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar12 = 0;
      uStack_44 = uStack_54;
      uStack_40 = uStack_50;
      uStack_3c = uStack_4c;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      iVar6 = func_0x01ddc564(*(int *)(param_1 + 0x10),0);
      if (iVar6 != 0) {
        iVar6 = *(int *)(param_1 + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar12 = 0;
        iVar6 = func_0x01de72d0(iVar6,0x3f000000,0);
        if (iVar6 == 0) {
          piVar13 = *(int **)(_UNK_01f12538 + 0x1f12198);
          if (*(int *)(*piVar13 + 0x74) == 0) {
            func_0x01384ab4();
          }
          pcVar11 = (char *)(_UNK_01f1253c + 0x1f121b4);
          if (*pcVar11 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01f12540 + 0x1f121c8));
            *pcVar11 = '\x01';
          }
          iVar6 = *piVar13;
          if (*(int *)(iVar6 + 0x74) == 0) {
            func_0x01384ab4();
            iVar6 = *piVar13;
          }
          uStack_60 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x14);
          uStack_5c = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x18);
          uVar12 = func_0x01384abc(**(undefined4 **)(_UNK_01f12544 + 0x1f12200),&uStack_60);
          uVar12 = func_0x0244f6a0(**(undefined4 **)(_UNK_01f12548 + 0x1f12224),uVar12,0);
          if (*(int *)(**(int **)(_UNK_01f1254c + 0x1f12238) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x028c2874(uVar12,0);
          iVar6 = *(int *)(param_1 + 0x10);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x01de6d8c(iVar6,0);
          iVar6 = *(int *)(param_1 + 0x10);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x01de6de4(iVar6,0);
          iVar6 = *(int *)(param_1 + 0x10);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x01de6e3c(iVar6,0);
          iVar6 = *(int *)(param_1 + 0x10);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x01de6e94(iVar6,0);
          func_0x02452ba8(&uStack_70,0);
          uVar3 = uStack_64;
          uVar2 = uStack_68;
          uVar1 = uStack_6c;
          uVar12 = uStack_70;
          puVar14 = *(undefined4 **)(_UNK_01f12550 + 0x1f122e8);
          uVar7 = func_0x034aaa34(*puVar14);
          if (*(int *)(**(int **)(_UNK_01f12554 + 0x1f122fc) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar6 = func_0x0145b1cc(uVar7,0,0);
          uVar7 = uVar1;
          uVar15 = uVar12;
          uVar16 = uVar2;
          uVar17 = uVar3;
          if (iVar6 != 0) {
            iVar6 = func_0x034aaa34(*puVar14);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x01eed9b4(&uStack_70,iVar6,0);
            uVar7 = uStack_6c;
            uVar15 = uStack_70;
            uVar16 = uStack_68;
            uVar17 = uStack_64;
          }
          uVar8 = func_0x024510d4(0);
          uVar9 = func_0x024510e4(0);
          uVar10 = func_0x034aaa34(*puVar14);
          if (*(int *)(**(int **)(_UNK_01f12558 + 0x1f12398) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar6 = func_0x0145b1cc(uVar10,0,0);
          uVar10 = _UNK_01f1250c;
          if (iVar6 != 0) {
            iVar6 = func_0x034aaa34(**(undefined4 **)(_UNK_01f1255c + 0x1f123cc));
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            uVar10 = func_0x01eeda88(iVar6,0);
          }
          func_0x02063938(&uStack_58,uVar8,uVar9,uVar12,uVar1,uVar2,uVar3,uVar15,uVar7,uVar16,uVar17
                          ,uVar10,0);
          if (*(int *)(**(int **)(_UNK_01f12560 + 0x1f12440) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar6 = func_0x0300d558(**(undefined4 **)(_UNK_01f12564 + 0x1f1245c));
          uVar5 = uStack_28;
          uVar4 = uStack_2c;
          uVar10 = uStack_30;
          uVar9 = uStack_34;
          uVar8 = uStack_38;
          uVar17 = uStack_3c;
          uVar16 = uStack_40;
          uVar15 = uStack_44;
          uVar7 = uStack_48;
          uVar3 = uStack_4c;
          uVar2 = uStack_50;
          uVar1 = uStack_54;
          uVar12 = uStack_58;
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0349ee94(iVar6,uVar12,uVar1,uVar2,uVar3,uVar7,uVar15,uVar16,uVar17,uVar8,uVar9,
                          uVar10,uVar4,uVar5,**(undefined4 **)(_UNK_01f12568 + 0x1f124cc));
          uVar12 = 0;
        }
      }
    }
  }
  else if (*(int *)(param_1 + 8) == 0) {
    uVar12 = 1;
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return uVar12;
}



// ===== FAT.MBBoardAreaAdapter.<_DeferredBoardRecalc>d__28$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x1f0256c =====

undefined4 FUN_01f1256c(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MBBoardAreaAdapter.<_DeferredBoardRecalc>d__28$$System.Collections.IEnumerator.Reset RVA 0x1f02574 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f12574(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x01384988(*(undefined4 *)(_UNK_01f125b0 + 0x1f12584));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(_UNK_01f125b4 + 0x1f125a0));
  func_0x01384aa0(uVar1,uVar2);
  func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.MBBoardAreaAdapter.<_DeferredBoardRecalc>d__28$$System.Collections.IEnumerator.get_Current RVA 0x1f025b8 =====

undefined4 FUN_01f125b8(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


