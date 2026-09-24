/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.UIMergeBoardMini$$OnCreate RVA 0x1a9c19c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aac19c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01aac3e4 + 0x1aac1b4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aac3e8 + 0x1aac1c8));
    func_0x01384978(*(undefined4 *)(_UNK_01aac3ec + 0x1aac1d4));
    func_0x01384978(*(undefined4 *)(_UNK_01aac3f0 + 0x1aac1e0));
    func_0x01384978(*(undefined4 *)(_UNK_01aac3f4 + 0x1aac1ec));
    func_0x01384978(*(undefined4 *)(_UNK_01aac3f8 + 0x1aac1f8));
    func_0x01384978(*(undefined4 *)(_UNK_01aac3fc + 0x1aac204));
    func_0x01384978(*(undefined4 *)(_UNK_01aac400 + 0x1aac210));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x851a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x851a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
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
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01f09428(iVar1,0);
  uVar5 = func_0x0244fc34(param_1,0);
  puVar7 = *(undefined4 **)(_UNK_01aac404 + 0x1aac29c);
  uVar2 = func_0x01384be4(*puVar7);
  puVar6 = *(undefined4 **)(_UNK_01aac408 + 0x1aac2b8);
  func_0x0244ffa0(uVar2,param_1,*puVar6,0);
  if (*(int *)(**(int **)(_UNK_01aac40c + 0x1aac2c8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uStack_28 = 0;
  func_0x028bf89c(uVar5,**(undefined4 **)(_UNK_01aac410 + 0x1aac2ec),uVar2,1);
  uVar5 = func_0x0244fc34(param_1,0);
  uVar2 = func_0x01384be4(*puVar7);
  func_0x0244ffa0(uVar2,param_1,*puVar6,0);
  uStack_28 = 0;
  func_0x028bf89c(uVar5,**(undefined4 **)(_UNK_01aac414 + 0x1aac338),uVar2,1);
  uVar5 = func_0x0244fc34(param_1,0);
  uVar2 = func_0x01384be4(*puVar7);
  func_0x0244ffa0(uVar2,param_1,*puVar6,0);
  uStack_28 = 0;
  func_0x028bf89c(uVar5,**(undefined4 **)(_UNK_01aac418 + 0x1aac384),uVar2,1);
  uVar5 = func_0x0244fc34(param_1,0);
  uVar2 = func_0x01384be4(*puVar7);
  func_0x0244ffa0(uVar2,param_1,*puVar6,0);
  uStack_28 = 0;
  func_0x028bf89c(uVar5,**(undefined4 **)(_UNK_01aac41c + 0x1aac3d0),uVar2,1);
  return;
}



// ===== FAT.UIMergeBoardMini$$OnParse RVA 0x1a9c420 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aac420(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
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
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01aac510 + 0x1aac438);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aac514 + 0x1aac44c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8523,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(param_2 + 0xc) != 0) {
      piVar2 = *(int **)(param_2 + 0x10);
      if (piVar2 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x80) = 0;
        return;
      }
      uVar4 = (uint)*(byte *)(**(int **)(_UNK_01aac518 + 0x1aac4d0) + 0xb8);
      piVar3 = (int *)0x0;
      if ((uVar4 <= *(byte *)(*piVar2 + 0xb8)) &&
         (piVar3 = piVar2,
         *(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_01aac518 + 0x1aac4d0)
         )) {
        piVar3 = (int *)0x0;
      }
      *(int **)(param_1 + 0x80) = piVar3;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x8523,0);
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



// ===== FAT.UIMergeBoardMini$$Exit RVA 0x1a9c51c =====

void FUN_01aac51c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8522,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8522,0);
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
  if (*(char *)(param_1 + 0x86) == '\0') {
    func_0x01ee3fc0(param_1,0);
  }
  else {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc0);
    uVar4 = *(undefined4 *)(param_1 + 0x80);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01aa5afc(iVar1,uVar4);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  *(undefined1 *)(param_1 + 0x87) = 0;
  return;
}



// ===== FAT.UIMergeBoardMini$$ClickPlay RVA 0x1a9c5d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aac5d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
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
  
  iVar1 = func_0x0229f06c(0x851b,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x88);
    if (iVar1 == 2 || iVar1 == 1) {
      iVar1 = func_0x0229f06c(0x8522,0);
      if (iVar1 == 0) {
        if (*(char *)(param_1 + 0x86) == '\0') {
          func_0x01ee3fc0(param_1,0);
        }
        else {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0xc0);
          uVar6 = *(undefined4 *)(param_1 + 0x80);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          FUN_01aa5afc(iVar1,uVar6);
          *(undefined4 *)(param_1 + 0x80) = 0;
        }
        *(undefined1 *)(param_1 + 0x87) = 0;
        return;
      }
      iVar1 = func_0x0229f13c(0x8522,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      if (iVar1 != 0) {
        return;
      }
      func_0x01aac6c0(param_1);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *(undefined1 *)(iVar1 + 0x48) = 1;
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      param_1 = *(int *)(iVar1 + 0x9c);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      pcVar3 = (char *)(_UNK_01c783a8 + 0x1c782cc);
      if (*pcVar3 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01c783ac + 0x1c782e0),0);
        *pcVar3 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x33,0);
      if (iVar1 == 0) {
        piVar4 = *(int **)(_UNK_01c783b0 + 0x1c78338);
        if (*(int *)(*piVar4 + 0x74) == 0) {
          func_0x01384ab4();
        }
        pcVar3 = (char *)(_UNK_01c783b4 + 0x1c78354);
        if (*pcVar3 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01c783b8 + 0x1c78368));
          *pcVar3 = '\x01';
        }
        iVar1 = *piVar4;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar4;
        }
        if (**(char **)(iVar1 + 0x5c) == '\0') {
          return;
        }
        iVar1 = func_0x0229f06c(0x35,0);
        if (iVar1 == 0) {
          if (*(char *)(param_1 + 0x39) != '\0') {
            return;
          }
          iVar1 = *(int *)(param_1 + 0x3c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (*(char *)(iVar1 + 0x10) != '\0') {
            return;
          }
          iVar1 = *(int *)(param_1 + 0x3c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          *(undefined1 *)(iVar1 + 0x10) = 1;
          return;
        }
        iVar1 = func_0x0229f13c(0x35,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar1 = func_0x0229f13c(0x33,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x851b,0);
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
  return;
}



// ===== FAT.UIMergeBoardMini$$PlayStartAnim RVA 0x1a9c6c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aac6c0(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01aac86c + 0x1aac6d8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aac870 + 0x1aac6ec));
    func_0x01384978(*(undefined4 *)(_UNK_01aac874 + 0x1aac6f8));
    func_0x01384978(*(undefined4 *)(_UNK_01aac878 + 0x1aac704));
    func_0x01384978(*(undefined4 *)(_UNK_01aac87c + 0x1aac710));
    func_0x01384978(*(undefined4 *)(_UNK_01aac880 + 0x1aac71c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x851c,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x87) == '\0') {
      iVar1 = *(int *)(param_1 + 0x58);
      *(undefined1 *)(param_1 + 0x87) = 1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02fe27b8(iVar1,**(undefined4 **)(_UNK_01aac884 + 0x1aac7a0));
      if (iVar1 != 0) {
        func_0x02450104(iVar1,**(undefined4 **)(_UNK_01aac888 + 0x1aac7c0),0);
      }
      iVar1 = *(int *)(param_1 + 0x50);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x024501bc(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x024501cc(iVar1,0,**(undefined4 **)(_UNK_01aac88c + 0x1aac808),0);
      uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01aac890 + 0x1aac824));
      func_0x02450708(uVar5,param_1,**(undefined4 **)(_UNK_01aac894 + 0x1aac840),0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_049acdb0)(iVar1,uVar5,0);
      return;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x851c,0);
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



// ===== FAT.UIMergeBoardMini$$OnPreOpen RVA 0x1a9c898 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aac898(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int extraout_r1;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  float fVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined4 *puVar17;
  bool bVar18;
  uint in_fpscr;
  float fVar19;
  float fVar20;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar10 = (char *)(_UNK_01aaccfc + 0x1aac8b0);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aacd00 + 0x1aac8c4));
    func_0x01384978(*(undefined4 *)(_UNK_01aacd04 + 0x1aac8d0));
    func_0x01384978(*(undefined4 *)(_UNK_01aacd08 + 0x1aac8dc));
    func_0x01384978(*(undefined4 *)(_UNK_01aacd0c + 0x1aac8e8));
    func_0x01384978(*(undefined4 *)(_UNK_01aacd10 + 0x1aac8f4));
    func_0x01384978(*(undefined4 *)(_UNK_01aacd14 + 0x1aac900));
    func_0x01384978(*(undefined4 *)(_UNK_01aacd18 + 0x1aac90c));
    func_0x01384978(*(undefined4 *)(_UNK_01aacd1c + 0x1aac918));
    func_0x01384978(*(undefined4 *)(_UNK_01aacd20 + 0x1aac924));
    func_0x01384978(*(undefined4 *)(_UNK_01aacd24 + 0x1aac930));
    func_0x01384978(*(undefined4 *)(_UNK_01aacd28 + 0x1aac93c));
    func_0x01384978(*(undefined4 *)(_UNK_01aacd2c + 0x1aac948));
    func_0x01384978(*(undefined4 *)(_UNK_01aacd30 + 0x1aac954));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x8524,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8524,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar11 = *(int *)(iVar2 + 8);
    uVar13 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar11,uVar13,&uStack_30,uVar6,0,0);
    return;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xfc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01e8007c(iVar2,1,0,0);
  iVar2 = *(int *)(param_1 + 0x80);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02b48934(iVar2,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x88) = 2;
    *(undefined1 *)(param_1 + 0x86) = 0;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0244ffd4(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar2,0,0);
    uVar13 = *(undefined4 *)(param_1 + 0x68);
    iVar2 = *(int *)(**(int **)(_UNK_01aacd34 + 0x1aacbe4) + 0x74);
    if (iVar2 == 0) {
      func_0x01384ab4();
      iVar2 = extraout_r1;
    }
    uStack_20 = 0;
    uStack_1c = 0;
    func_0x02089060(uVar13,iVar2,0,0);
    iVar2 = *(int *)(param_1 + 0x80);
    *(undefined1 *)(param_1 + 0x84) = 1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar2 + 0x4c);
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(param_1 + 0x80);
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar13 = *(undefined4 *)(iVar3 + 0x40);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01ca8b0c(iVar2,uVar13,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x20);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    *(bool *)(param_1 + 0x85) = iVar11 - *(int *)(iVar2 + 0xc) == -1;
    func_0x01aacd64(param_1);
    iVar3 = *(int *)(param_1 + 0x80);
    iVar11 = *(int *)(param_1 + 0x60);
    iVar2 = iVar3;
    if (iVar3 == 0) {
      func_0x01384bf0();
      iVar2 = *(int *)(param_1 + 0x80);
    }
    iVar3 = *(int *)(iVar3 + 0x4c);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    pcVar10 = (char *)(_UNK_01aa9ce8 + 0x1aa9140);
    if (*pcVar10 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01aa9cec + 0x1aa9154));
      func_0x01384978(*(undefined4 *)(_UNK_01aa9cf0 + 0x1aa9160));
      func_0x01384978(*(undefined4 *)(_UNK_01aa9cf4 + 0x1aa916c));
      func_0x01384978(*(undefined4 *)(_UNK_01aa9cf8 + 0x1aa9178));
      func_0x01384978(*(undefined4 *)(_UNK_01aa9cfc + 0x1aa9184));
      func_0x01384978(*(undefined4 *)(_UNK_01aa9d00 + 0x1aa9190));
      func_0x01384978(*(undefined4 *)(_UNK_01aa9d04 + 0x1aa919c));
      func_0x01384978(*(undefined4 *)(_UNK_01aa9d08 + 0x1aa91a8));
      func_0x01384978(*(undefined4 *)(_UNK_01aa9d0c + 0x1aa91b4));
      func_0x01384978(*(undefined4 *)(_UNK_01aa9d10 + 0x1aa91c0));
      func_0x01384978(*(undefined4 *)(_UNK_01aa9d14 + 0x1aa91cc));
      func_0x01384978(*(undefined4 *)(_UNK_01aa9d18 + 0x1aa91d8));
      func_0x01384978(*(undefined4 *)(_UNK_01aa9d1c + 0x1aa91e4));
      func_0x01384978(*(undefined4 *)(_UNK_01aa9d20 + 0x1aa91f0));
      func_0x01384978(*(undefined4 *)(_UNK_01aa9d24 + 0x1aa91fc));
      func_0x01384978(*(undefined4 *)(_UNK_01aa9d28 + 0x1aa9208));
      func_0x01384978(*(undefined4 *)(_UNK_01aa9d2c + 0x1aa9214));
      func_0x01384978(*(undefined4 *)(_UNK_01aa9d30 + 0x1aa9220));
      func_0x01384978(*(undefined4 *)(_UNK_01aa9d34 + 0x1aa922c));
      func_0x01384978(*(undefined4 *)(_UNK_01aa9d38 + 0x1aa9238));
      *pcVar10 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iVar14 = func_0x0229f06c(0x8502,0);
    if (iVar14 == 0) {
      iVar14 = func_0x01c24918(0);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      iVar14 = *(int *)(iVar14 + 0xc);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar13 = *(undefined4 *)(iVar2 + 0x40);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      iVar14 = func_0x01ca8b0c(iVar14,uVar13,0);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      iVar14 = *(int *)(iVar14 + 0x20);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar11 + 0x38) = *(undefined4 *)(iVar14 + 0xc);
      iVar7 = *(int *)(iVar11 + 0x3c);
      iVar14 = func_0x02b449f8(iVar2,0);
      if (iVar7 == iVar14) {
        iVar2 = *(int *)(iVar11 + 0x34);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&uStack_38,iVar2,**(undefined4 **)(_UNK_01aa9d3c + 0x1aa9348));
        puVar17 = *(undefined4 **)(_UNK_01aa9d40 + 0x1aa935c);
        while (iVar11 = func_0x0145b12c(&uStack_38,*puVar17), iVar2 = iStack_2c, iVar11 != 0) {
          if (iStack_2c == 0) {
            func_0x01384bf0();
          }
          FUN_01aa9dbc(iVar2,iVar3);
        }
        func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01aa9d44 + 0x1aa9404));
      }
      else {
        if (*(int *)(iVar11 + 0x38) + -1 == iVar3) {
          piVar8 = *(int **)(iVar11 + 0x28);
          if (*(int *)(**(int **)(_UNK_01aa9d50 + 0x1aa93a8) + 0x74) == 0) {
            func_0x01384ab4();
          }
          uVar13 = func_0x028c1350(**(undefined4 **)(_UNK_01aa9d54 + 0x1aa93cc),0);
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          pcVar5 = *(code **)(*piVar8 + 0x2d0);
          uVar6 = *(undefined4 *)(*piVar8 + 0x2d4);
        }
        else {
          iVar14 = func_0x01c24918(0);
          if (iVar14 == 0) {
            func_0x01384bf0();
          }
          iVar7 = *(int *)(iVar14 + 0x38);
          iVar14 = func_0x01c24918(0);
          if (iVar14 == 0) {
            func_0x01384bf0();
          }
          iVar14 = *(int *)(iVar14 + 0xc);
          uVar13 = *(undefined4 *)(iVar2 + 0x40);
          if (iVar14 == 0) {
            func_0x01384bf0();
          }
          iVar14 = func_0x01ca8b0c(iVar14,uVar13,0);
          if (iVar14 == 0) {
            func_0x01384bf0();
          }
          iVar14 = *(int *)(iVar14 + 0x20);
          if (iVar14 == 0) {
            func_0x01384bf0();
          }
          uVar13 = func_0x0364c9b8(iVar14,0,**(undefined4 **)(_UNK_01aa9d58 + 0x1aa9498));
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          iVar14 = func_0x01cca5b0(iVar7,uVar13,0);
          if (iVar14 == 0) {
            func_0x01384bf0();
          }
          uVar13 = *(undefined4 *)(iVar14 + 0x1c);
          if (*(int *)(**(int **)(_UNK_01aa9d5c + 0x1aa94dc) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar14 = func_0x025550ec(uVar13,0);
          if (iVar14 == 0) {
            func_0x01384bf0();
          }
          iVar14 = func_0x0244f604(**(undefined4 **)(_UNK_01aa9d64 + 0x1aa9528),
                                   *(undefined4 *)(iVar14 + 0xc),
                                   **(undefined4 **)(_UNK_01aa9d60 + 0x1aa951c),0);
          piVar8 = *(int **)(iVar11 + 0x28);
          piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01aa9d68 + 0x1aa9548),1);
          if (piVar4 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar14 != 0) &&
             (iVar7 = func_0x01384ab8(iVar14,*(undefined4 *)(*piVar4 + 0x20)), iVar7 == 0)) {
            uVar13 = func_0x01384c10();
            func_0x01384aa0(uVar13,0);
          }
          if (piVar4[3] == 0) {
            func_0x01384bf4();
          }
          piVar4[4] = iVar14;
          if (*(int *)(**(int **)(_UNK_01aa9d6c + 0x1aa95a8) + 0x74) == 0) {
            func_0x01384ab4();
          }
          uVar13 = func_0x028c1688(**(undefined4 **)(_UNK_01aa9d70 + 0x1aa95cc),piVar4,0);
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          pcVar5 = *(code **)(*piVar8 + 0x2d0);
          uVar6 = *(undefined4 *)(*piVar8 + 0x2d4);
        }
        (*pcVar5)(piVar8,uVar13,uVar6);
        iVar7 = 0;
        puVar17 = *(undefined4 **)(_UNK_01aa9d74 + 0x1aa9608);
        iVar14 = iVar2;
        while( true ) {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          uVar13 = *(undefined4 *)(iVar2 + 0x40);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01ca8b0c(iVar1,uVar13,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x20);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar1 + 0xc) <= iVar7) break;
          iVar1 = *(int *)(iVar11 + 0x34);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar1 + 0xc) <= iVar7) {
            iVar1 = *(int *)(iVar11 + 0x24);
            uVar13 = *(undefined4 *)(iVar11 + 0x14);
            iVar2 = iVar14;
            if (iVar1 == 0) {
              func_0x01384bf0();
              iVar2 = iVar14;
            }
            uVar6 = func_0x024504c0(iVar1,0);
            if (*(int *)(**(int **)(_UNK_01aa9d78 + 0x1aa96bc) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar14 = func_0x03015f4c(uVar13,uVar6,**(undefined4 **)(_UNK_01aa9d7c + 0x1aa96dc));
            if (iVar14 == 0) {
              func_0x01384bf0();
            }
            uVar13 = func_0x02fe27b8(iVar14,**(undefined4 **)(_UNK_01aa9d80 + 0x1aa9704));
            iVar14 = *(int *)(iVar11 + 0x34);
            if (iVar14 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar14 + 8);
            uVar15 = *(uint *)(iVar14 + 0xc);
            piVar4 = *(int **)(_UNK_01aa9d84 + 0x1aa9740);
            *(int *)(iVar14 + 0x10) = *(int *)(iVar14 + 0x10) + 1;
            iVar16 = *piVar4;
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            if (uVar15 < *(uint *)(iVar1 + 0xc)) {
              *(uint *)(iVar14 + 0xc) = uVar15 + 1;
              *(undefined4 *)(iVar1 + uVar15 * 4 + 0x10) = uVar13;
            }
            else {
              func_0x0328f170(iVar14,uVar13,
                              *(undefined4 *)(*(int *)(*(int *)(iVar16 + 0x10) + 0x60) + 0x38));
            }
            puVar17 = *(undefined4 **)(_UNK_01aa9d88 + 0x1aa9798);
            iVar14 = iVar2;
          }
          iVar1 = *(int *)(iVar11 + 0x34);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0328eea8(iVar1,iVar7,*puVar17);
          iVar16 = func_0x01c24918(0);
          if (iVar16 == 0) {
            func_0x01384bf0();
          }
          iVar16 = *(int *)(iVar16 + 0xc);
          uVar13 = *(undefined4 *)(iVar2 + 0x40);
          if (iVar16 == 0) {
            func_0x01384bf0();
          }
          iVar16 = func_0x01ca8b0c(iVar16,uVar13,0);
          if (iVar16 == 0) {
            func_0x01384bf0();
          }
          iVar16 = *(int *)(iVar16 + 0x20);
          if (iVar16 == 0) {
            func_0x01384bf0();
          }
          uVar13 = func_0x0364c9b8(iVar16,iVar7,**(undefined4 **)(_UNK_01aa9d8c + 0x1aa9824));
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          FUN_01aa8054(iVar1,uVar13,iVar7,0);
          iVar1 = *(int *)(iVar11 + 0x34);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0328eea8(iVar1,iVar7,*puVar17);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          FUN_01aa9dbc(iVar1,iVar3);
          iVar7 = iVar7 + 1;
        }
        iVar2 = *(int *)(iVar11 + 0x24);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar4 = (int *)func_0x024504c0(iVar2,0);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
          piVar4 = (int *)0x0;
        }
        else {
          piVar8 = *(int **)(_UNK_01aa9d90 + 0x1aa98c8);
          if (*piVar4 != *piVar8) {
            func_0x01384bf0();
          }
          if (*piVar4 != *piVar8) {
            piVar4 = (int *)0x0;
          }
        }
        func_0x0244fd2c(&uStack_48,piVar4,0);
        iVar2 = *(int *)(iVar11 + 0x20);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar8 = (int *)func_0x024504c0(iVar2,0);
        piVar4 = (int *)0x0;
        if ((piVar8 != (int *)0x0) &&
           (piVar4 = piVar8, *piVar8 != **(int **)(_UNK_01aa9d94 + 0x1aa9938))) {
          piVar4 = (int *)0x0;
        }
        iVar2 = *(int *)(iVar11 + 0x20);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar8 = (int *)func_0x024504c0(iVar2,0);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
          piVar8 = (int *)0x0;
        }
        else {
          piVar9 = *(int **)(_UNK_01aa9d98 + 0x1aa997c);
          if (*piVar8 != *piVar9) {
            func_0x01384bf0();
          }
          if (*piVar8 != *piVar9) {
            piVar8 = (int *)0x0;
          }
        }
        func_0x0244fd2c(&uStack_48,piVar8,0);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
          func_0x0244fd2c(&uStack_48,0,0);
          func_0x01384bf0();
        }
        else {
          func_0x0244fd2c(&uStack_48,piVar4,0);
        }
        func_0x0244fd2c(&uStack_48,piVar4,0);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        func_0x0244fd2c(&uStack_48,piVar4,0);
        iVar2 = *(int *)(iVar11 + 0x1c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar8 = (int *)func_0x024504c0(iVar2,0);
        piVar4 = (int *)0x0;
        if ((piVar8 != (int *)0x0) &&
           (piVar4 = piVar8, *piVar8 != **(int **)(_UNK_01aa9d9c + 0x1aa9a4c))) {
          piVar4 = (int *)0x0;
        }
        iVar2 = *(int *)(iVar11 + 0x20);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar8 = (int *)func_0x024504c0(iVar2,0);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
          piVar8 = (int *)0x0;
        }
        else {
          piVar9 = *(int **)(_UNK_01aa9da0 + 0x1aa9a90);
          if (*piVar8 != *piVar9) {
            func_0x01384bf0();
          }
          if (*piVar8 != *piVar9) {
            piVar8 = (int *)0x0;
          }
        }
        func_0x0244fd2c(&uStack_48,piVar8,0);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
          func_0x0244fd2c(&uStack_48,0,0);
          func_0x01384bf0();
        }
        else {
          func_0x0244fd2c(&uStack_48,piVar4,0);
        }
        func_0x0244fd2c(&uStack_48,piVar4,0);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        fVar12 = 0.0;
        func_0x0244fd2c(&uStack_48,piVar4,0);
        pcVar10 = (char *)(_UNK_01aa9da4 + 0x1aa9b3c);
        if (*pcVar10 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01aa9da8 + 0x1aa9b50));
          *pcVar10 = '\x01';
        }
        uVar13 = 0x3f800000;
        if (iVar3 != 0) {
          iVar2 = *(int *)(iVar11 + 0x38);
          if (iVar2 + -1 == iVar3) {
            pcVar10 = (char *)(_UNK_01aa9dac + 0x1aa9b80);
            if (*pcVar10 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01aa9db0 + 0x1aa9b94));
              *pcVar10 = '\x01';
            }
            iVar2 = *(int *)(**(int **)(_UNK_01aa9db4 + 0x1aa9ba8) + 0x5c);
            fVar12 = *(float *)(iVar2 + 8);
            uVar13 = *(undefined4 *)(iVar2 + 0xc);
          }
          else {
            fVar12 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
            fVar19 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
            fVar20 = (float)VectorSignedToFloat(iVar2 << 1,(byte)(in_fpscr >> 0x16) & 3);
            fVar12 = fVar19 / fVar12 + 1.0 / fVar20;
          }
        }
        iVar2 = *(int *)(iVar11 + 0x18);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar4 = (int *)func_0x024504c0(iVar2,0);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
          piVar4 = (int *)0x0;
        }
        else {
          piVar8 = *(int **)(_UNK_01aa9db8 + 0x1aa9c1c);
          if (*piVar4 != *piVar8) {
            func_0x01384bf0();
          }
          if (*piVar4 != *piVar8) {
            piVar4 = (int *)0x0;
          }
        }
        func_0x0244fdfc(piVar4,fVar12,uVar13,0);
      }
    }
    else {
      iVar14 = func_0x0229f13c(0x8502,0);
      if (iVar14 == 0) {
        func_0x01384bf0();
      }
      func_0x0217ab90(iVar14,iVar11,iVar3,iVar2,0);
    }
    return;
  }
  *(undefined1 *)(param_1 + 0x86) = 1;
  func_0x01aad104(param_1);
  func_0x01aad29c(param_1);
  func_0x01aad6f8(param_1);
  if (*(int *)(**(int **)(_UNK_01aacd38 + 0x1aaca34) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01aacd3c + 0x1aaca50));
  uVar13 = func_0x01384be4(**(undefined4 **)(_UNK_01aacd40 + 0x1aaca64));
  func_0x024500b4(uVar13,param_1,**(undefined4 **)(_UNK_01aacd44 + 0x1aaca80),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x028be400(iVar2,uVar13,0);
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01aacd48 + 0x1aacab0));
  uVar13 = func_0x01384be4(**(undefined4 **)(_UNK_01aacd4c + 0x1aacac4));
  func_0x02450194(uVar13,param_1,**(undefined4 **)(_UNK_01aacd50 + 0x1aacae0),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0349e80c(iVar2,uVar13,**(undefined4 **)(_UNK_01aacd54 + 0x1aacb04));
  if (*(int *)(**(int **)(_UNK_01aacd58 + 0x1aacb18) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x01dea7f8(0);
  uVar6 = *(undefined4 *)(param_1 + 100);
  uVar13 = func_0x01384be4(**(undefined4 **)(_UNK_01aacd5c + 0x1aacb44));
  func_0x024508ac(uVar13,uVar6,**(undefined4 **)(_UNK_01aacd60 + 0x1aacb60),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar10 = (char *)(_UNK_02141104 + 0x2141078);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02141108 + 0x214108c),uVar13,0);
    *pcVar10 = '\x01';
  }
  puVar17 = *(undefined4 **)(_UNK_0214110c + 0x21410a4);
  iVar11 = *(int *)(iVar2 + 0x14);
  do {
    iVar14 = 0;
    iVar3 = func_0x024507e8(iVar11,uVar13,0);
    if (iVar3 != 0) {
      uVar6 = *puVar17;
      iVar14 = func_0x01384ab8(iVar3,uVar6);
      if (iVar14 == 0) {
        func_0x01384fb4(iVar3,uVar6);
        iVar14 = 0;
      }
    }
    iVar3 = func_0x0138b0ec((int *)(iVar2 + 0x14),iVar14,iVar11);
    bVar18 = iVar11 != iVar3;
    iVar11 = iVar3;
  } while (bVar18);
  return;
}



// ===== FAT.UIMergeBoardMini$$SetEndState RVA 0x1a9cd64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aacd64(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
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
  undefined4 uStack_18;
  
  pcVar4 = (char *)(_UNK_01aad0e0 + 0x1aacd7c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aad0e4 + 0x1aacd90));
    func_0x01384978(*(undefined4 *)(_UNK_01aad0e8 + 0x1aacd9c));
    func_0x01384978(*(undefined4 *)(_UNK_01aad0ec + 0x1aacda8));
    func_0x01384978(*(undefined4 *)(_UNK_01aad0f0 + 0x1aacdb4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x851f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x851f,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x88) = 2;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,1,0);
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc34(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450158(iVar1,0,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc34(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450158(iVar1,1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x024501bc(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = 0;
  func_0x024501cc(iVar1,0,**(undefined4 **)(_UNK_01aad0f4 + 0x1aacf60),0);
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450790(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,1,0);
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450790(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  puVar2 = *(undefined4 **)(_UNK_01aad100 + 0x1aad02c);
  if (*(char *)(param_1 + 0x85) == '\0') {
    puVar2 = *(undefined4 **)(_UNK_01aad0f8 + 0x1aad010);
  }
  piVar5 = *(int **)(param_1 + 0x74);
  uVar7 = *puVar2;
  if (*(int *)(**(int **)(_UNK_01aad0fc + 0x1aad018) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar7 = func_0x028c1350(uVar7,0);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  (**(code **)(*piVar5 + 0x2d0))(piVar5,uVar7,*(undefined4 *)(*piVar5 + 0x2d4));
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc34(iVar1,0);
  iVar6 = *(int *)(param_1 + 0x5c);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar7 = func_0x024504c0(iVar6,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05197608)(iVar1,uVar7,1,0);
  return;
}



// ===== FAT.UIMergeBoardMini$$SetComp RVA 0x1a9d104 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aad104(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
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
  
  pcVar5 = (char *)(_UNK_01aad290 + 0x1aad118);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aad294 + 0x1aad12c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8525,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8525,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,1,0);
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_01aa7698(iVar1);
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_01aaa848(iVar1);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 0x10);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar7 = *(undefined4 *)(iVar1 + 0x14);
  if (*(int *)(**(int **)(_UNK_01aad298 + 0x1aad244) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x01dea4f4(iVar6,0xffffffff,0);
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_01f099b0 + 0x1f09854);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f099b4 + 0x1f09868),iVar6,uVar7,0);
    func_0x01384978(*(undefined4 *)(_UNK_01f099b8 + 0x1f09874));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5ea3,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar1 + 0x44);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02139cf4(iVar6,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = *(undefined4 *)(iVar3 + 8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x01f046e8(iVar2,uVar4,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02139cf4(iVar6,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar4 = *(undefined4 *)(iVar2 + 8);
    if (*(int *)(**(int **)(_UNK_01f099bc + 0x1f0994c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01ddabc8(uVar4,0);
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01f099c0 + 0x1f0997c));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x01ddc63c(iVar2,iVar6,uVar7,iVar1);
  }
  else {
    iVar2 = func_0x0229f13c(0x5ea3,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02174858(iVar2,iVar1,iVar6,uVar7);
  }
  return;
}



// ===== FAT.UIMergeBoardMini$$SetTheme RVA 0x1a9d29c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aad29c(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01aad6ac + 0x1aad2b8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aad6b0 + 0x1aad2cc));
    func_0x01384978(*(undefined4 *)(_UNK_01aad6b4 + 0x1aad2d8));
    func_0x01384978(*(undefined4 *)(_UNK_01aad6b8 + 0x1aad2e4));
    func_0x01384978(*(undefined4 *)(_UNK_01aad6bc + 0x1aad2f0));
    func_0x01384978(*(undefined4 *)(_UNK_01aad6c0 + 0x1aad2fc));
    func_0x01384978(*(undefined4 *)(_UNK_01aad6c4 + 0x1aad308));
    func_0x01384978(*(undefined4 *)(_UNK_01aad6c8 + 0x1aad314));
    func_0x01384978(*(undefined4 *)(_UNK_01aad6cc + 0x1aad320));
    func_0x01384978(*(undefined4 *)(_UNK_01aad6d0 + 0x1aad32c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8526,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8526,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x58);
  uVar8 = *(undefined4 *)(param_1 + 0x6c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02b62948(iVar1,uVar8,**(undefined4 **)(_UNK_01aad6d4 + 0x1aad3e0),0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_01aa5920(iVar1);
  if (iVar1 != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar1 + 0x38);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01aa5920(iVar1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x0364c9b8(iVar1,0,**(undefined4 **)(_UNK_01aad6d8 + 0x1aad49c));
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01cca5b0(iVar7,uVar8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar8 = *(undefined4 *)(iVar1 + 0x1c);
    if (*(int *)(**(int **)(_UNK_01aad6dc + 0x1aad4e0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x025550ec(uVar8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244f604(**(undefined4 **)(_UNK_01aad6e4 + 0x1aad52c),
                            *(undefined4 *)(iVar1 + 0xc),
                            **(undefined4 **)(_UNK_01aad6e0 + 0x1aad520),0);
    piVar6 = *(int **)(param_1 + 0x70);
    piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01aad6e8 + 0x1aad54c),1);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar1 != 0) && (iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar7 == 0)
       ) {
      uVar8 = func_0x01384c10();
      func_0x01384aa0(uVar8,0);
    }
    if (piVar2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2[4] = iVar1;
    if (*(int *)(**(int **)(_UNK_01aad6ec + 0x1aad5ac) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar8 = func_0x028c1688(**(undefined4 **)(_UNK_01aad6f0 + 0x1aad5d0),piVar2,0);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar6 + 0x2d0))(piVar6,uVar8,*(undefined4 *)(*piVar6 + 0x2d4));
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02b4cec4(iVar1,0);
  fVar3 = (float)func_0x01457e28();
  uVar8 = *(undefined4 *)(param_1 + 0x68);
  if (fVar3 < 0.0) {
    fVar3 = _UNK_01aad6a8;
  }
  if (*(int *)(**(int **)(_UNK_01aad6f4 + 0x1aad664) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar9 = func_0x01457d14(fVar3);
  uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
  uStack_28 = 0;
  uStack_24 = 0;
  func_0x02089060(uVar8,uVar4,(int)uVar9,uVar4);
  return;
}



// ===== FAT.UIMergeBoardMini$$SetUIState RVA 0x1a9d6f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aad6f8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
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
  
  pcVar5 = (char *)(_UNK_01aad978 + 0x1aad70c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aad97c + 0x1aad720));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x851e,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01aa4700(iVar1);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x80);
      *(undefined1 *)(param_1 + 0x84) = 1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      iVar6 = func_0x01c24918(0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(param_1 + 0x80);
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar7 = *(undefined4 *)(iVar8 + 0x40);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x01ca8b0c(iVar6,uVar7,0);
    }
    else {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar9 = func_0x02b4cec4(iVar1,0);
      *(bool *)(param_1 + 0x84) = (int)((ulonglong)uVar9 >> 0x20) < (int)(uint)((int)uVar9 == 0);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_01aa5c98(iVar1);
      iVar6 = func_0x01c24918(0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0xc0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = FUN_01aa5920(iVar6);
    }
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar6 + 0x20);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    *(bool *)(param_1 + 0x85) = *(int *)(iVar6 + 0xc) + -1 <= iVar1;
    if (*(char *)(param_1 + 0x84) == '\0') {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(char *)(iVar1 + 0x48) == '\0') {
        iVar1 = func_0x0229f06c(0x8521,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0x7c);
          *(undefined4 *)(param_1 + 0x88) = 0;
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar1,0,0);
          iVar1 = *(int *)(param_1 + 100);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0244fc34(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02450158(iVar1,0,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0244ffd4(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar1,0,0);
          iVar1 = *(int *)(param_1 + 100);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0244fc34(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02450158(iVar1,1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0244ffd4(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar1,0,0);
          iVar1 = *(int *)(param_1 + 0x50);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x024501bc(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x024509a4(iVar1,0,0,0);
          iVar1 = *(int *)(param_1 + 0x5c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02450790(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar1,0,0);
          iVar1 = *(int *)(param_1 + 0x58);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02450790(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar1,0,0);
          iVar1 = *(int *)(param_1 + 0x78);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar1,1,0);
          iVar1 = *(int *)(param_1 + 0x60);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0244fc34(iVar1,0);
          iVar6 = *(int *)(param_1 + 0x54);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          uVar7 = func_0x024504c0(iVar6,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          goto SUB_02450900;
        }
        iVar1 = func_0x0229f13c(0x8521,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        pcVar5 = (char *)(_UNK_01aadb90 + 0x1aad998);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01aadb94 + 0x1aad9ac));
          *pcVar5 = '\x01';
        }
        iVar1 = func_0x0229f06c(0x8520,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0x7c);
          *(undefined4 *)(param_1 + 0x88) = 1;
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar1,0,0);
          iVar1 = *(int *)(param_1 + 0x50);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x024501bc(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x024501cc(iVar1,0,**(undefined4 **)(_UNK_01aadb98 + 0x1aada68),1);
          iVar1 = *(int *)(param_1 + 100);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          FUN_01aaa938(iVar1,0);
          iVar1 = *(int *)(param_1 + 0x5c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02450790(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar1,0,0);
          iVar1 = *(int *)(param_1 + 0x58);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02450790(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar1,0,0);
          iVar1 = *(int *)(param_1 + 0x78);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar1,0,0);
          iVar1 = *(int *)(param_1 + 0x60);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0244fc34(iVar1,0);
          iVar6 = *(int *)(param_1 + 0x54);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          uVar7 = func_0x024504c0(iVar6,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
SUB_02450900:
          (*(code *)&UNK_05197608)(iVar1,uVar7,1,0);
          return;
        }
        iVar1 = func_0x0229f13c(0x8520,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      pcVar5 = (char *)(_UNK_01aad0e0 + 0x1aacd7c);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01aad0e4 + 0x1aacd90));
        func_0x01384978(*(undefined4 *)(_UNK_01aad0e8 + 0x1aacd9c));
        func_0x01384978(*(undefined4 *)(_UNK_01aad0ec + 0x1aacda8));
        func_0x01384978(*(undefined4 *)(_UNK_01aad0f0 + 0x1aacdb4));
        *pcVar5 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x851f,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x7c);
        *(undefined4 *)(param_1 + 0x88) = 2;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar1,1,0);
        iVar1 = *(int *)(param_1 + 100);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0244fc34(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02450158(iVar1,0,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0244ffd4(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar1,0,0);
        iVar1 = *(int *)(param_1 + 100);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0244fc34(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02450158(iVar1,1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0244ffd4(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar1,0,0);
        iVar1 = *(int *)(param_1 + 0x50);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x024501bc(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x024501cc(iVar1,0,**(undefined4 **)(_UNK_01aad0f4 + 0x1aacf60),0);
        iVar1 = *(int *)(param_1 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02450790(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar1,1,0);
        iVar1 = *(int *)(param_1 + 0x58);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02450790(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar1,0,0);
        iVar1 = *(int *)(param_1 + 0x78);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar1,0,0);
        puVar2 = *(undefined4 **)(_UNK_01aad100 + 0x1aad02c);
        if (*(char *)(param_1 + 0x85) == '\0') {
          puVar2 = *(undefined4 **)(_UNK_01aad0f8 + 0x1aad010);
        }
        piVar4 = *(int **)(param_1 + 0x74);
        uVar7 = *puVar2;
        if (*(int *)(**(int **)(_UNK_01aad0fc + 0x1aad018) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar7 = func_0x028c1350(uVar7,0);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        (**(code **)(*piVar4 + 0x2d0))(piVar4,uVar7,*(undefined4 *)(*piVar4 + 0x2d4));
        iVar1 = *(int *)(param_1 + 0x60);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0244fc34(iVar1,0);
        iVar6 = *(int *)(param_1 + 0x5c);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar7 = func_0x024504c0(iVar6,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        goto SUB_02450900;
      }
      iVar1 = func_0x0229f13c(0x851f,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x851e,0);
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
  iVar6 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.UIMergeBoardMini$$SetIdleState RVA 0x1a9d980 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aad980(int param_1)

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
  undefined4 uStack_18;
  
  pcVar3 = (char *)(_UNK_01aadb90 + 0x1aad998);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aadb94 + 0x1aad9ac));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8520,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8520,0);
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
  iVar1 = *(int *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x88) = 1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x024501bc(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = 0;
  func_0x024501cc(iVar1,0,**(undefined4 **)(_UNK_01aadb98 + 0x1aada68),1);
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_01aaa938(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450790(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450790(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc34(iVar1,0);
  iVar4 = *(int *)(param_1 + 0x54);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x024504c0(iVar4,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05197608)(iVar1,uVar5,1,0);
  return;
}



// ===== FAT.UIMergeBoardMini$$SetStartState RVA 0x1a9db9c =====

void FUN_01aadb9c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8521,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8521,0);
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
  iVar1 = *(int *)(param_1 + 0x7c);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc34(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450158(iVar1,0,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc34(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450158(iVar1,1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x024501bc(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x024509a4(iVar1,0,0,0);
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450790(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450790(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,1,0);
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc34(iVar1,0);
  iVar3 = *(int *)(param_1 + 0x54);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x024504c0(iVar3,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05197608)(iVar1,uVar4,1,0);
  return;
}



// ===== FAT.UIMergeBoardMini$$OnPostOpen RVA 0x1a9de3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aade3c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
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
  
  pcVar3 = (char *)(_UNK_01aadff0 + 0x1aade50);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aadff4 + 0x1aade64));
    func_0x01384978(*(undefined4 *)(_UNK_01aadff8 + 0x1aade70));
    func_0x01384978(*(undefined4 *)(_UNK_01aadffc + 0x1aade7c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x852a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x852a,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x84) == '\0') {
    puVar5 = *(undefined4 **)(_UNK_01aae000 + 0x1aadee4);
    iVar1 = func_0x03668dfc(*puVar5);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01de6e3c(iVar1,0);
    iVar1 = func_0x03668dfc(*puVar5);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01de6d8c(iVar1,0);
    iVar1 = func_0x03668dfc(*puVar5);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01de6de4(iVar1,0);
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01aa8688(iVar1);
    if (*(int *)(param_1 + 0x88) != 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450790(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar1,1,0);
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02fe27b8(iVar1,**(undefined4 **)(_UNK_01aae004 + 0x1aadfc8));
    if (iVar1 != 0) {
      (*(code *)&UNK_0514e2c4)(iVar1,**(undefined4 **)(_UNK_01aae008 + 0x1aadfe8),0);
      return;
    }
  }
  return;
}



// ===== FAT.UIMergeBoardMini$$OnPreClose RVA 0x1a9e00c =====

/* WARNING: Possible PIC construction at 0x0349ead8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0349eadc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aae00c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_r4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 unaff_lr;
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
  
  pcVar5 = (char *)(_UNK_01aae33c + 0x1aae020);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aae340 + 0x1aae034));
    func_0x01384978(*(undefined4 *)(_UNK_01aae344 + 0x1aae040));
    func_0x01384978(*(undefined4 *)(_UNK_01aae348 + 0x1aae04c));
    func_0x01384978(*(undefined4 *)(_UNK_01aae34c + 0x1aae058));
    func_0x01384978(*(undefined4 *)(_UNK_01aae350 + 0x1aae064));
    func_0x01384978(*(undefined4 *)(_UNK_01aae354 + 0x1aae070));
    func_0x01384978(*(undefined4 *)(_UNK_01aae358 + 0x1aae07c));
    func_0x01384978(*(undefined4 *)(_UNK_01aae35c + 0x1aae088));
    func_0x01384978(*(undefined4 *)(_UNK_01aae360 + 0x1aae094));
    func_0x01384978(*(undefined4 *)(_UNK_01aae364 + 0x1aae0a0));
    func_0x01384978(*(undefined4 *)(_UNK_01aae368 + 0x1aae0ac));
    func_0x01384978(*(undefined4 *)(_UNK_01aae36c + 0x1aae0b8));
    func_0x01384978(*(undefined4 *)(_UNK_01aae370 + 0x1aae0c4));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x852e,0);
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x86) != '\0') {
      iVar2 = *(int *)(param_1 + 0x4c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01f099c4(iVar2,0);
      if (*(int *)(**(int **)(_UNK_01aae374 + 0x1aae144) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x01dea7f8(0);
      uVar4 = *(undefined4 *)(param_1 + 100);
      uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01aae378 + 0x1aae170));
      func_0x024508ac(uVar7,uVar4,**(undefined4 **)(_UNK_01aae37c + 0x1aae18c),0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x02141110(iVar2,uVar7,0);
      func_0x01dea688(0);
      puVar10 = *(undefined4 **)(_UNK_01aae380 + 0x1aae1c4);
      iVar2 = func_0x034aaa34(*puVar10);
      piVar8 = *(int **)(_UNK_01aae384 + 0x1aae1d8);
      iVar6 = *piVar8;
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x01384ab4();
        iVar6 = *piVar8;
      }
      uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x90);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee40f0(iVar2,uVar7,0);
      iVar2 = func_0x034aaa34(*puVar10);
      uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x44);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee40f0(iVar2,uVar7,0);
      if (*(int *)(**(int **)(_UNK_01aae388 + 0x1aae250) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01aae38c + 0x1aae26c));
      uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01aae390 + 0x1aae280));
      func_0x024500b4(uVar7,param_1,**(undefined4 **)(_UNK_01aae394 + 0x1aae29c),0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x028beac8(iVar2,uVar7,0);
      iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01aae398 + 0x1aae2cc));
      iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01aae39c + 0x1aae2e0));
      func_0x02450194(iVar6,param_1,**(undefined4 **)(_UNK_01aae3a0 + 0x1aae2fc),0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar3 = **(int **)(_UNK_01aae3a4 + 0x1aae320);
      if (iVar6 == 0) {
        return;
      }
      iVar9 = 0;
      piVar8 = (int *)func_0x0487929c(*(undefined4 *)(iVar2 + 8),iVar6,0);
      iVar6 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
        iVar6 = func_0x02457d84(iVar6);
      }
      if ((piVar8 == (int *)0x0) || (iVar9 = func_0x02457d4c(piVar8,iVar6), iVar9 != 0)) {
        iVar6 = *(int *)(iVar3 + 0x10);
        *(int *)(iVar2 + 8) = iVar9;
        iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 4);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x02457d84(iVar6);
        }
        if (piVar8 == (int *)0x0) {
          return;
        }
        iVar2 = func_0x02457d4c(piVar8,iVar6);
        if (iVar2 != 0) {
          return;
        }
      }
      else {
        unaff_lr = 0x349eadc;
        unaff_r4 = piVar8;
        register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
      }
      *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
      *(int **)((int)register0x00000054 + -8) = unaff_r4;
      func_0x0142996c((undefined1 *)((int)register0x00000054 + -0x14),
                      *(undefined4 *)(*piVar8 + 0x20),iVar6);
      uVar1 = *(uint *)((int)register0x00000054 + -0xc);
      if ((*(byte *)((int)register0x00000054 + -0x14) & 1) == 0) {
        uVar1 = (uint)((int)register0x00000054 + -0x14) | 1;
      }
      iVar2 = func_0x01419d2c(uVar1);
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      *(undefined4 *)(iVar2 + 0x20) = 0;
      func_0x01418ff0(iVar2,0);
      if ((*(byte *)((int)register0x00000054 + -0x14) & 1) != 0) {
        func_0x0148d9d4(*(undefined4 *)((int)register0x00000054 + -0xc));
      }
      return;
    }
    pcVar5 = (char *)(_UNK_01ee40dc + 0x1ee3fd4);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01ee40e0 + 0x1ee3fe8),0);
      func_0x01384978(*(undefined4 *)(_UNK_01ee40e4 + 0x1ee3ff4));
      *pcVar5 = '\x01';
    }
    iVar2 = func_0x0229f06c(0xb41,0);
    if (iVar2 == 0) {
      if (*(char *)(param_1 + 0x2c) != '\0') {
        func_0x01ee3ae8(param_1);
        func_0x01ee3b58(param_1);
        *(undefined1 *)(param_1 + 0x2c) = 0;
        uVar7 = func_0x0244ffd4(param_1,0);
        if (*(int *)(**(int **)(_UNK_01ee40e8 + 0x1ee4080) + 0x74) == 0) {
          func_0x01384ab4();
        }
        (*(code *)&UNK_0518f7fc)(uVar7,0);
        return;
      }
      iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01ee40ec + 0x1ee40ac));
      uVar7 = *(undefined4 *)(param_1 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee40f0(iVar2,uVar7);
      pcVar5 = (char *)(_UNK_01ee4224 + 0x1ee4168);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01ee4228 + 0x1ee417c));
        *pcVar5 = '\x01';
      }
      iVar2 = func_0x0229f06c(0xb42,0);
      if (iVar2 == 0) {
        uVar7 = *(undefined4 *)(param_1 + 0x34);
        if (*(int *)(**(int **)(_UNK_01ee422c + 0x1ee41d4) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x0145b1cc(uVar7,0,0);
        if (iVar2 == 0) {
          return;
        }
        iVar2 = *(int *)(param_1 + 0x34);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        (*(code *)&UNK_05189da8)(iVar2,0,0);
        return;
      }
      iVar2 = func_0x0229f13c(0xb42,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar2 = func_0x0229f13c(0xb41,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x852e,0);
    if (iVar2 == 0) {
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar6 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
  return;
}



// ===== FAT.UIMergeBoardMini$$OnPostClose RVA 0x1a9e3a8 =====

void FUN_01aae3a8(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x8530,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8530,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xfc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0229f06c(0x1726,0,0,0);
  if (iVar3 == 0) {
    *(undefined1 *)(iVar1 + 0x49) = 0;
    *(undefined1 *)(iVar1 + 0x48) = 0;
  }
  else {
    iVar3 = func_0x0229f13c(0x1726,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02181e64(iVar3,iVar1,0,0);
  }
  return;
}



// ===== FAT.UIMergeBoardMini$$Update RVA 0x1a9e434 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aae434(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  undefined4 uVar14;
  int *piVar15;
  char *pcVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  pcVar16 = (char *)(_UNK_01aae540 + 0x1aae448);
  if (*pcVar16 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aae544 + 0x1aae45c));
    func_0x01384978(*(undefined4 *)(_UNK_01aae548 + 0x1aae468));
    *pcVar16 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x8531,0);
  if (iVar5 != 0) {
    iVar5 = func_0x0229f13c(0x8531,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
    func_0x0245494c(&stack0xffffffb8,0,0);
    if (*(int *)(iVar5 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffd0,*(int *)(iVar5 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffd0,param_1,0);
    iVar17 = *(int *)(iVar5 + 8);
    uVar19 = *(undefined4 *)(iVar5 + 0xc);
    iVar5 = *(int *)(iVar5 + 0x10);
    if (iVar17 == 0) {
      func_0x01384bf0();
    }
    uVar14 = 2;
    if (iVar5 == 0) {
      uVar14 = 1;
    }
    func_0x0245495c(iVar17,uVar19,&stack0xffffffd0,uVar14);
    return;
  }
  iVar5 = func_0x03668dfc(**(undefined4 **)(_UNK_01aae54c + 0x1aae4c0));
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x01c36988(iVar5,0);
  if (iVar5 == 0) {
    return;
  }
  iVar5 = func_0x01ee30d0(param_1,0);
  if (iVar5 == 0) {
    return;
  }
  iVar5 = func_0x03668dfc(**(undefined4 **)(_UNK_01aae550 + 0x1aae508));
  fVar6 = (float)func_0x024503b4(0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  pcVar16 = (char *)(_UNK_01de6b74 + 0x1de68fc);
  if (*pcVar16 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de6b78 + 0x1de6910),fVar6,0);
    func_0x01384978(*(undefined4 *)(_UNK_01de6b7c + 0x1de691c));
    func_0x01384978(*(undefined4 *)(_UNK_01de6b80 + 0x1de6928));
    *pcVar16 = '\x01';
  }
  iVar17 = func_0x0229f06c(0x5e40,0);
  if (iVar17 != 0) {
    iVar17 = func_0x0229f13c(0x5e40,0);
    if (iVar17 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(&stack0xffffffb0,0,fVar6,0);
    if (*(int *)(iVar17 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffc8,*(int *)(iVar17 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffc8,iVar5,0);
    func_0x01485258(&stack0xffffffc8,fVar6,0);
    iVar18 = *(int *)(iVar17 + 8);
    uVar19 = *(undefined4 *)(iVar17 + 0xc);
    iVar5 = *(int *)(iVar17 + 0x10);
    if (iVar18 == 0) {
      func_0x01384bf0();
    }
    uVar14 = 3;
    if (iVar5 == 0) {
      uVar14 = 2;
    }
    func_0x0245495c(iVar18,uVar19,&stack0xffffffc8,uVar14);
    return;
  }
  if (*(int *)(iVar5 + 0x78) != 0) {
    if (*(char *)(iVar5 + 0x5b) == '\0') {
      iVar17 = (int)(fVar6 * _UNK_01de6b6c);
      if (fVar6 * _UNK_01de6b6c == _UNK_01de6b70) {
        iVar17 = -0x80000000;
      }
      func_0x01de6b90(iVar5,iVar17);
    }
    if (*(char *)(iVar5 + 0x59) != '\0') {
      piVar7 = *(int **)(_UNK_01de6b84 + 0x1de69dc);
      *(undefined1 *)(iVar5 + 0x59) = 0;
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01de6c04();
      iVar17 = *(int *)(iVar5 + 0x74);
      if (iVar17 == 0) {
        func_0x01384bf0();
      }
      iVar17 = func_0x01f08f90(iVar17,0);
      if (iVar17 == 0) {
        func_0x01384bf0();
      }
      func_0x01df9198(iVar17,0);
    }
    if (*(char *)(iVar5 + 0x58) != '\0') {
      iVar17 = *(int *)(iVar5 + 0x2c);
      *(undefined1 *)(iVar5 + 0x58) = 0;
      if (iVar17 == 0) {
        func_0x01384bf0();
      }
      func_0x01e26878(iVar17,0,0);
      func_0x01de4af8(iVar5);
      func_0x01c87144(0);
      if (*(int *)(**(int **)(_UNK_01de6b88 + 0x1de6a7c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar17 = func_0x0300d558(**(undefined4 **)(_UNK_01de6b8c + 0x1de6a98));
      if (iVar17 == 0) {
        func_0x01384bf0();
      }
      func_0x028c3fd8(iVar17,0);
    }
    fVar6 = (float)func_0x02450ef4(0);
    if (*(float *)(iVar5 + 100) + 1.0 < fVar6) {
      iVar17 = *(int *)(iVar5 + 0x74);
      if (iVar17 == 0) {
        func_0x01384bf0();
      }
      iVar17 = func_0x01f0908c(iVar17,0);
      if (iVar17 == 0) {
        func_0x01384bf0();
      }
      iVar17 = func_0x01df9324(iVar17,0);
      if (iVar17 == 0) {
        iVar17 = *(int *)(iVar5 + 0x2c);
        if (iVar17 == 0) {
          func_0x01384bf0();
        }
        iVar17 = func_0x01e2453c(iVar17,0);
        if (iVar17 != 0) {
          param_1 = *(int *)(iVar5 + 0x2c);
          if (param_1 == 0) {
            func_0x01384bf0();
          }
          pcVar16 = (char *)(_UNK_01e250a8 + 0x1e24640);
          if (*pcVar16 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01e250ac + 0x1e24654),0);
            func_0x01384978(*(undefined4 *)(_UNK_01e250b0 + 0x1e24660));
            func_0x01384978(*(undefined4 *)(_UNK_01e250b4 + 0x1e2466c));
            func_0x01384978(*(undefined4 *)(_UNK_01e250b8 + 0x1e24678));
            func_0x01384978(*(undefined4 *)(_UNK_01e250bc + 0x1e24684));
            func_0x01384978(*(undefined4 *)(_UNK_01e250c0 + 0x1e24690));
            *pcVar16 = '\x01';
          }
          iVar5 = func_0x0229f06c(0x5e88,0);
          if (iVar5 == 0) {
            puVar8 = *(undefined4 **)(_UNK_01e250c4 + 0x1e246fc);
            *(undefined4 *)(param_1 + 0x28) = 0xbf800000;
            iVar5 = func_0x03668dfc(*puVar8);
            iVar17 = *(int *)(param_1 + 8);
            iVar18 = *(int *)(param_1 + 0xc);
            if (*(int *)(**(int **)(_UNK_01e250c8 + 0x1e24714) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x019961b8(iVar17,iVar18,0);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            iVar9 = func_0x01ddbed8(iVar5,0);
            if (iVar9 == 0) {
              func_0x01384bf0();
            }
            iVar9 = func_0x01f090e0(iVar9,0);
            if (iVar17 == 0) {
              func_0x01384bf0();
            }
            uVar19 = func_0x0210e5f4(iVar17,0);
            if (iVar9 == 0) {
              func_0x01384bf0();
            }
            iVar9 = func_0x01e02548(iVar9,uVar19,0);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            iVar10 = func_0x01ddbed8(iVar5,0);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            iVar10 = func_0x01f090e0(iVar10,0);
            if (iVar18 == 0) {
              func_0x01384bf0();
            }
            uVar19 = func_0x0210e5f4(iVar18,0);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            iVar10 = func_0x01e02548(iVar10,uVar19,0);
            piVar7 = *(int **)(_UNK_01e250cc + 0x1e2482c);
            if (*(int *)(*piVar7 + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar11 = func_0x0244fb8c(iVar9,0,0);
            if (iVar11 == 0) {
              if (*(int *)(*piVar7 + 0x74) == 0) {
                func_0x01384ab4();
              }
              iVar11 = func_0x0244fb8c(iVar10,0,0);
              if (iVar11 == 0) {
                if (iVar9 == 0) {
                  func_0x01384bf0();
                }
                iVar11 = func_0x0244fc34(iVar9,0);
                if (iVar10 == 0) {
                  func_0x01384bf0();
                }
                iVar12 = func_0x0244fc34(iVar10,0);
                if (iVar9 == 0) {
                  func_0x01384bf0();
                }
                uVar19 = func_0x0244fc34(iVar9,0);
                if (iVar5 == 0) {
                  func_0x01384bf0();
                }
                func_0x01de3774(iVar5,uVar19,0);
                if (iVar10 == 0) {
                  func_0x01384bf0();
                }
                uVar19 = func_0x0244fc34(iVar10,0);
                if (iVar5 == 0) {
                  func_0x01384bf0();
                }
                func_0x01de3774(iVar5,uVar19,0);
                iVar5 = func_0x02166108(iVar17,iVar18,0);
                if (iVar5 != 0) {
                  if (iVar10 == 0) {
                    func_0x01384bf0();
                  }
                  iVar12 = func_0x0229f688(iVar10,0);
                }
                piVar15 = *(int **)(_UNK_01e250d0 + 0x1e24970);
                if (*(int *)(*piVar15 + 0x74) == 0) {
                  func_0x01384ab4();
                }
                pcVar16 = (char *)(_UNK_01e250d4 + 0x1e2498c);
                if (*pcVar16 == '\0') {
                  func_0x01384978(*(undefined4 *)(_UNK_01e250d8 + 0x1e249a0));
                  *pcVar16 = '\x01';
                }
                iVar5 = *piVar15;
                if (*(int *)(iVar5 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar5 = *piVar15;
                }
                iVar5 = *(int *)(*(int *)(iVar5 + 0x5c) + 0x54);
                if (iVar5 == 0) {
                  func_0x01384bf0();
                }
                iVar5 = *(int *)(iVar5 + 0x30);
                if (*(int *)(*piVar7 + 0x74) == 0) {
                  func_0x01384ab4();
                }
                iVar17 = func_0x0244fb8c(iVar5,0,0);
                if (iVar11 == 0) {
                  func_0x01384bf0();
                }
                iVar18 = func_0x0244fc64(iVar11,0);
                if (iVar17 == 0) {
                  if (iVar5 == 0) {
                    func_0x01384bf0();
                  }
                  uVar19 = *(undefined4 *)(iVar5 + 0x30);
                  if (iVar18 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x024524fc(&fStack_74,iVar18,uVar19,0,0,0);
                  fVar27 = fStack_6c;
                  fVar23 = fStack_70;
                  fVar6 = fStack_74;
                  pcVar16 = (char *)(_UNK_01e25100 + 0x1e24c14);
                  if (*pcVar16 == '\0') {
                    func_0x01384978(*(undefined4 *)(_UNK_01e25104 + 0x1e24c30));
                    *pcVar16 = '\x01';
                  }
                  piVar7 = *(int **)(_UNK_01e25108 + 0x1e24c44);
                  if (*(int *)(*piVar7 + 0x74) == 0) {
                    func_0x01384ab4();
                  }
                  if (iVar12 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x0244fd3c(&fStack_74,iVar12,0);
                  fVar26 = fStack_6c;
                  fVar25 = fStack_70;
                  fVar24 = fStack_74;
                  if (iVar11 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x0244fd3c(&fStack_74,iVar11,0);
                  fVar3 = fStack_6c;
                  fVar2 = fStack_70;
                  fVar1 = fStack_74;
                  if (*pcVar16 == '\0') {
                    func_0x01384978(*(undefined4 *)(_UNK_01e2510c + 0x1e24cc8));
                    *pcVar16 = '\x01';
                  }
                  fVar6 = SQRT(fVar23 * fVar23 + fVar6 * fVar6 + fVar27 * fVar27);
                  fVar26 = fVar26 - fVar3;
                  fVar25 = fVar25 - fVar2;
                  fVar24 = fVar24 - fVar1;
                  if (*(int *)(*piVar7 + 0x74) == 0) {
                    func_0x01384ab4();
                  }
                  pcVar16 = (char *)(_UNK_01e25110 + 0x1e24d04);
                  fVar27 = SQRT(fVar25 * fVar25 + fVar24 * fVar24 + fVar26 * fVar26);
                  fVar23 = fVar27 * _UNK_01e250a0;
                  if (fVar6 < fVar27 * _UNK_01e250a0) {
                    fVar23 = fVar6;
                  }
                  if (*pcVar16 == '\0') {
                    func_0x01384978(*(undefined4 *)(_UNK_01e25114 + 0x1e24d38));
                    *pcVar16 = '\x01';
                  }
                  if (*(int *)(*piVar7 + 0x74) == 0) {
                    func_0x01384ab4();
                  }
                  if (fVar27 <= _UNK_01e250a4) {
                    pcVar16 = (char *)(_UNK_01e25118 + 0x1e24eec);
                    if (*pcVar16 == '\0') {
                      func_0x01384978(*(undefined4 *)(_UNK_01e2511c + 0x1e24f00));
                      *pcVar16 = '\x01';
                    }
                    pfVar13 = *(float **)(**(int **)(_UNK_01e25120 + 0x1e24f14) + 0x5c);
                    fVar24 = *pfVar13;
                    fVar25 = pfVar13[1];
                    fVar26 = pfVar13[2];
                  }
                  else {
                    fVar26 = fVar26 / fVar27;
                    fVar25 = fVar25 / fVar27;
                    fVar24 = fVar24 / fVar27;
                  }
                  if (iVar11 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x0244fd3c(&fStack_74,iVar11,0);
                  fVar1 = fStack_6c;
                  fVar27 = fStack_70;
                  fVar6 = fStack_74;
                  if (iVar12 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x0244fd3c(&fStack_74,iVar12,0);
                  fVar4 = fStack_6c;
                  fVar3 = fStack_70;
                  fVar2 = fStack_74;
                  if (iVar11 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x0244fd3c(&fStack_74,iVar11,0);
                  fVar22 = fVar23 * fVar26 + fStack_6c;
                  fVar21 = fVar23 * fVar25 + fStack_70;
                  fVar20 = fVar23 * fVar24 + fStack_74;
                  if (iVar12 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x0244fd3c(&fStack_74,iVar12,0);
                  uVar19 = func_0x01e256f0(param_1,iVar11,iVar12,fVar6,fVar27,fVar1,fVar20,fVar21,
                                           fVar22,fVar2,fVar3,fVar4,fStack_74 - fVar23 * fVar24,
                                           fStack_70 - fVar23 * fVar25,fStack_6c - fVar23 * fVar26);
                }
                else {
                  if (iVar18 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x024524fc(&fStack_74,iVar18,0x42200000,0,0,0);
                  fVar27 = fStack_6c;
                  fVar23 = fStack_70;
                  fVar6 = fStack_74;
                  pcVar16 = (char *)(_UNK_01e250dc + 0x1e24a68);
                  if (*pcVar16 == '\0') {
                    func_0x01384978(*(undefined4 *)(_UNK_01e250e0 + 0x1e24a84));
                    *pcVar16 = '\x01';
                  }
                  piVar7 = *(int **)(_UNK_01e250e4 + 0x1e24a98);
                  if (*(int *)(*piVar7 + 0x74) == 0) {
                    func_0x01384ab4();
                  }
                  if (iVar12 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x0244fd3c(&fStack_74,iVar12,0);
                  fVar26 = fStack_6c;
                  fVar25 = fStack_70;
                  fVar24 = fStack_74;
                  if (iVar11 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x0244fd3c(&fStack_74,iVar11,0);
                  fVar3 = fStack_6c;
                  fVar2 = fStack_70;
                  fVar1 = fStack_74;
                  if (*pcVar16 == '\0') {
                    func_0x01384978(*(undefined4 *)(_UNK_01e250e8 + 0x1e24b1c));
                    *pcVar16 = '\x01';
                  }
                  fVar6 = SQRT(fVar23 * fVar23 + fVar6 * fVar6 + fVar27 * fVar27);
                  fVar26 = fVar26 - fVar3;
                  fVar25 = fVar25 - fVar2;
                  fVar24 = fVar24 - fVar1;
                  if (*(int *)(*piVar7 + 0x74) == 0) {
                    func_0x01384ab4();
                  }
                  pcVar16 = (char *)(_UNK_01e250ec + 0x1e24b58);
                  fVar27 = SQRT(fVar25 * fVar25 + fVar24 * fVar24 + fVar26 * fVar26);
                  fVar23 = fVar27 * _UNK_01e24ed8;
                  if (fVar6 < fVar27 * _UNK_01e24ed8) {
                    fVar23 = fVar6;
                  }
                  if (*pcVar16 == '\0') {
                    func_0x01384978(*(undefined4 *)(_UNK_01e250f0 + 0x1e24b8c));
                    *pcVar16 = '\x01';
                  }
                  if (*(int *)(*piVar7 + 0x74) == 0) {
                    func_0x01384ab4();
                  }
                  if (fVar27 <= _UNK_01e24edc) {
                    pcVar16 = (char *)(_UNK_01e250f4 + 0x1e24d80);
                    if (*pcVar16 == '\0') {
                      func_0x01384978(*(undefined4 *)(_UNK_01e250f8 + 0x1e24d94));
                      *pcVar16 = '\x01';
                    }
                    pfVar13 = *(float **)(**(int **)(_UNK_01e250fc + 0x1e24da8) + 0x5c);
                    fVar24 = *pfVar13;
                    fVar25 = pfVar13[1];
                    fVar26 = pfVar13[2];
                  }
                  else {
                    fVar26 = fVar26 / fVar27;
                    fVar25 = fVar25 / fVar27;
                    fVar24 = fVar24 / fVar27;
                  }
                  if (iVar11 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x0244fd3c(&fStack_74,iVar11,0);
                  fVar1 = fStack_6c;
                  fVar27 = fStack_70;
                  fVar6 = fStack_74;
                  if (iVar12 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x0244fd3c(&fStack_74,iVar12,0);
                  fVar4 = fStack_6c;
                  fVar3 = fStack_70;
                  fVar2 = fStack_74;
                  if (iVar11 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x0244fd3c(&fStack_74,iVar11,0);
                  fVar22 = fVar23 * fVar26 + fStack_6c;
                  fVar21 = fVar23 * fVar25 + fStack_70;
                  fVar20 = fVar23 * fVar24 + fStack_74;
                  if (iVar12 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x0244fd3c(&fStack_74,iVar12,0);
                  uVar19 = func_0x01e2512c(param_1,iVar11,iVar12,fVar6,fVar27,fVar1,fVar20,fVar21,
                                           fVar22,fVar2,fVar3,fVar4,fStack_74 - fVar23 * fVar24,
                                           fStack_70 - fVar23 * fVar25,fStack_6c - fVar23 * fVar26);
                }
                iVar5 = *(int *)(**(int **)(_UNK_01e25124 + 0x1e25050) + 0x74);
                *(undefined4 *)(param_1 + 0x2c) = uVar19;
                if (iVar5 == 0) {
                  func_0x01384ab4();
                }
                iVar5 = func_0x0300d558(**(undefined4 **)(_UNK_01e25128 + 0x1e25070));
                if (iVar5 == 0) {
                  func_0x01384bf0();
                }
                func_0x028c3fd8(iVar5,0);
              }
            }
            return;
          }
          iVar5 = func_0x0229f13c(0x5e88,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          goto SUB_02173f80;
        }
      }
    }
  }
  return;
}



// ===== FAT.UIMergeBoardMini$$RefreshCD RVA 0x1a9e554 =====

/* WARNING: Possible PIC construction at 0x01aae670: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01aae674) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aae554(int param_1)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int unaff_r4;
  int *piVar5;
  undefined4 unaff_r5;
  char *pcVar6;
  int unaff_r6;
  undefined4 uVar7;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar6 = (char *)(_UNK_01aae6bc + 0x1aae56c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aae6c0 + 0x1aae580));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8527,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x84) != '\0') {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x80);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02b48934(iVar1,0);
    if (iVar1 != 0) {
      unaff_r6 = *(int *)(param_1 + 0x80);
      if (unaff_r6 == 0) {
        func_0x01384bf0();
      }
      unaff_r5 = 0;
      uVar8 = func_0x02b4cec4(unaff_r6,0);
      if ((int)(uint)((int)uVar8 == 0) <= (int)((ulonglong)uVar8 >> 0x20)) {
        iVar1 = *(int *)(param_1 + 0x80);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        lVar9 = func_0x02b4cec4(iVar1,0);
        unaff_r6 = (int)((ulonglong)lVar9 >> 0x20);
        if (lVar9 != 0) {
          uVar7 = *(undefined4 *)(param_1 + 0x68);
          iVar1 = *(int *)(**(int **)(_UNK_01aae6c4 + 0x1aae684) + 0x74);
          if (iVar1 == 0) {
            func_0x01384ab4();
            iVar1 = extraout_r1;
          }
          uStack_18 = 0;
          uStack_14 = 0;
          func_0x02089060(uVar7,iVar1,(int)lVar9,unaff_r6);
          return;
        }
      }
      unaff_lr = 0x1aae674;
      unaff_r4 = param_1;
      register0x00000054 = (BADSPACEBASE *)&uStack_18;
    }
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_r6;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x10) = unaff_r4;
    pcVar6 = (char *)(_UNK_01aae810 + 0x1aae6e0);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01aae814 + 0x1aae6f4));
      *pcVar6 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x8528,0);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x84) != '\0') {
        return;
      }
      iVar1 = *(int *)(param_1 + 0x50);
      *(undefined1 *)(param_1 + 0x84) = 1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x024501bc(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar7 = **(undefined4 **)(_UNK_01aae818 + 0x1aae7a0);
      *(undefined4 *)((int)register0x00000054 + -0x18) = 0;
      func_0x024501cc(iVar1,0,uVar7,0);
      iVar1 = *(int *)(param_1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02450790(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar1,1,0);
      iVar1 = *(int *)(param_1 + 100);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_01aaac2c(iVar1);
      *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -4);
      *(undefined4 *)((int)register0x00000054 + -8) = *(undefined4 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0xc);
      *(int *)((int)register0x00000054 + -0x10) = *(int *)((int)register0x00000054 + -0x10);
      pcVar6 = (char *)(_UNK_01aad0e0 + 0x1aacd7c);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01aad0e4 + 0x1aacd90));
        func_0x01384978(*(undefined4 *)(_UNK_01aad0e8 + 0x1aacd9c));
        func_0x01384978(*(undefined4 *)(_UNK_01aad0ec + 0x1aacda8));
        func_0x01384978(*(undefined4 *)(_UNK_01aad0f0 + 0x1aacdb4));
        *pcVar6 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x851f,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x7c);
        *(undefined4 *)(param_1 + 0x88) = 2;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar1,1,0);
        iVar1 = *(int *)(param_1 + 100);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0244fc34(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02450158(iVar1,0,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0244ffd4(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar1,0,0);
        iVar1 = *(int *)(param_1 + 100);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0244fc34(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02450158(iVar1,1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0244ffd4(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar1,0,0);
        iVar1 = *(int *)(param_1 + 0x50);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x024501bc(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar7 = **(undefined4 **)(_UNK_01aad0f4 + 0x1aacf60);
        *(undefined4 *)((int)register0x00000054 + -0x18) = 0;
        func_0x024501cc(iVar1,0,uVar7,0);
        iVar1 = *(int *)(param_1 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02450790(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar1,1,0);
        iVar1 = *(int *)(param_1 + 0x58);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02450790(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar1,0,0);
        iVar1 = *(int *)(param_1 + 0x78);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar1,0,0);
        puVar3 = *(undefined4 **)(_UNK_01aad100 + 0x1aad02c);
        if (*(char *)(param_1 + 0x85) == '\0') {
          puVar3 = *(undefined4 **)(_UNK_01aad0f8 + 0x1aad010);
        }
        piVar5 = *(int **)(param_1 + 0x74);
        uVar7 = *puVar3;
        if (*(int *)(**(int **)(_UNK_01aad0fc + 0x1aad018) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar7 = func_0x028c1350(uVar7,0);
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        (**(code **)(*piVar5 + 0x2d0))(piVar5,uVar7,*(undefined4 *)(*piVar5 + 0x2d4));
        iVar1 = *(int *)(param_1 + 0x60);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0244fc34(iVar1,0);
        iVar2 = *(int *)(param_1 + 0x5c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar7 = func_0x024504c0(iVar2,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        (*(code *)&UNK_05197608)(iVar1,uVar7,1,0);
        return;
      }
      iVar1 = func_0x0229f13c(0x851f,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      unaff_r4 = *(int *)((int)register0x00000054 + -0x10);
      unaff_r5 = *(undefined4 *)((int)register0x00000054 + -0xc);
      unaff_r6 = *(int *)((int)register0x00000054 + -8);
      unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
    }
    else {
      iVar1 = func_0x0229f13c(0x8528,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      unaff_r4 = *(int *)((int)register0x00000054 + -0x10);
      unaff_r5 = *(undefined4 *)((int)register0x00000054 + -0xc);
      unaff_r6 = *(int *)((int)register0x00000054 + -8);
      unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8527,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar2 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar2,uVar7,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
  return;
}



// ===== FAT.UIMergeBoardMini$$ActivityEnd RVA 0x1a9e6c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01aae6c8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
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
  undefined4 uStack_18;
  
  pcVar5 = (char *)(_UNK_01aae810 + 0x1aae6e0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aae814 + 0x1aae6f4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8528,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x84) != '\0') {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x50);
    *(undefined1 *)(param_1 + 0x84) = 1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x024501bc(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = 0;
    func_0x024501cc(iVar1,0,**(undefined4 **)(_UNK_01aae818 + 0x1aae7a0),0);
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450790(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar1,1,0);
    iVar1 = *(int *)(param_1 + 100);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01aaac2c(iVar1);
    pcVar5 = (char *)(_UNK_01aad0e0 + 0x1aacd7c);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01aad0e4 + 0x1aacd90));
      func_0x01384978(*(undefined4 *)(_UNK_01aad0e8 + 0x1aacd9c));
      func_0x01384978(*(undefined4 *)(_UNK_01aad0ec + 0x1aacda8));
      func_0x01384978(*(undefined4 *)(_UNK_01aad0f0 + 0x1aacdb4));
      *pcVar5 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x851f,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x7c);
      *(undefined4 *)(param_1 + 0x88) = 2;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar1,1,0);
      iVar1 = *(int *)(param_1 + 100);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244fc34(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02450158(iVar1,0,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar1,0,0);
      iVar1 = *(int *)(param_1 + 100);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244fc34(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02450158(iVar1,1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar1,0,0);
      iVar1 = *(int *)(param_1 + 0x50);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x024501bc(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_18 = 0;
      func_0x024501cc(iVar1,0,**(undefined4 **)(_UNK_01aad0f4 + 0x1aacf60),0);
      iVar1 = *(int *)(param_1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02450790(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar1,1,0);
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02450790(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar1,0,0);
      iVar1 = *(int *)(param_1 + 0x78);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar1,0,0);
      puVar2 = *(undefined4 **)(_UNK_01aad100 + 0x1aad02c);
      if (*(char *)(param_1 + 0x85) == '\0') {
        puVar2 = *(undefined4 **)(_UNK_01aad0f8 + 0x1aad010);
      }
      piVar4 = *(int **)(param_1 + 0x74);
      uVar7 = *puVar2;
      if (*(int *)(**(int **)(_UNK_01aad0fc + 0x1aad018) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar7 = func_0x028c1350(uVar7,0);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar4 + 0x2d0))(piVar4,uVar7,*(undefined4 *)(*piVar4 + 0x2d4));
      iVar1 = *(int *)(param_1 + 0x60);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244fc34(iVar1,0);
      iVar6 = *(int *)(param_1 + 0x5c);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar7 = func_0x024504c0(iVar6,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_05197608)(iVar1,uVar7,1,0);
      return;
    }
    iVar1 = func_0x0229f13c(0x851f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8528,0);
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
  iVar6 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3);
  return;
}



// ===== FAT.UIMergeBoardMini$$UnlockItem RVA 0x1a9e81c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aae81c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  uint in_fpscr;
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
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar2 = func_0x0229f06c(0x8529,0);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x88) == 0) {
      return;
    }
    param_1 = *(int *)(param_1 + 0x60);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_01aa8ef0 + 0x1aa8c00);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01aa8ef4 + 0x1aa8c14));
      func_0x01384978(*(undefined4 *)(_UNK_01aa8ef8 + 0x1aa8c20));
      func_0x01384978(*(undefined4 *)(_UNK_01aa8efc + 0x1aa8c2c));
      func_0x01384978(*(undefined4 *)(_UNK_01aa8f00 + 0x1aa8c38));
      func_0x01384978(*(undefined4 *)(_UNK_01aa8f04 + 0x1aa8c44));
      func_0x01384978(*(undefined4 *)(_UNK_01aa8f08 + 0x1aa8c50));
      *pcVar5 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x84ed,0);
    if (iVar2 == 0) {
      iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01aa8f0c + 0x1aa8cb0));
      func_0x0244f5a0(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar2 + 8) = param_2;
      *(int *)(iVar2 + 0xc) = param_1;
      FUN_01aa86f8(param_1);
      uVar7 = FUN_01aa8f40(iVar2);
      func_0x02450640(param_1,uVar7,0);
      pcVar5 = (char *)(_UNK_01aa8f10 + 0x1aa8d00);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01aa8f14 + 0x1aa8d14));
        *pcVar5 = '\x01';
      }
      iVar6 = func_0x01c24918(0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0xc0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = FUN_01aa5c98(iVar6);
      uVar7 = 0x3f800000;
      if (iVar6 == 0) {
        fVar4 = 0.0;
      }
      else {
        iVar6 = func_0x01c24918(0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar6 + 0xc0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = FUN_01aa5c98(iVar6);
        if (iVar6 == *(int *)(param_1 + 0x38) + -1) {
          pcVar5 = (char *)(_UNK_01aa8f18 + 0x1aa8da4);
          if (*pcVar5 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01aa8f1c + 0x1aa8db8));
            *pcVar5 = '\x01';
          }
          iVar6 = *(int *)(**(int **)(_UNK_01aa8f20 + 0x1aa8dcc) + 0x5c);
          fVar4 = *(float *)(iVar6 + 8);
          uVar7 = *(undefined4 *)(iVar6 + 0xc);
        }
        else {
          iVar6 = func_0x01c24918(0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar6 = *(int *)(iVar6 + 0xc0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          uVar3 = FUN_01aa5c98(iVar6);
          fVar4 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
          fVar8 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x38),(byte)(in_fpscr >> 0x16) & 3);
          fVar9 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x38) << 1,
                                             (byte)(in_fpscr >> 0x16) & 3);
          fVar4 = fVar4 / fVar8 + 1.0 / fVar9;
        }
      }
      uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01aa8f24 + 0x1aa8e54));
      func_0x0244fca4(uVar3,iVar2,**(undefined4 **)(_UNK_01aa8f28 + 0x1aa8e74),0);
      uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01aa8f2c + 0x1aa8e88));
      func_0x0244fca8(uVar1,iVar2,**(undefined4 **)(_UNK_01aa8f30 + 0x1aa8ea4),0);
      if (*(int *)(**(int **)(_UNK_01aa8f34 + 0x1aa8eb8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uStack_28 = 0x3e99999a;
      uStack_24 = 0;
      func_0x02ce5568(uVar3,uVar1,fVar4,uVar7);
      return;
    }
    iVar2 = func_0x0229f13c(0x84ed,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x8529,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar6 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar2 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar6,uVar7,&uStack_38,uVar3,0,0);
  return;
}



// ===== FAT.UIMergeBoardMini$$.ctor RVA 0x1a9e8a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aae8a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_01aae8fc + 0x1aae8b4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aae900 + 0x1aae8c8));
    *pcVar2 = '\x01';
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (*(int *)(**(int **)(_UNK_01aae904 + 0x1aae8dc) + 0x74) == 0) {
    func_0x01384ab4();
    param_3 = extraout_r2_00;
    param_4 = extraout_r3_00;
  }
  pcVar2 = (char *)(_UNK_01ee5288 + 0x1ee5224);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ee528c + 0x1ee5238),0,param_3,param_4,unaff_r4,unaff_r5,
                    unaff_r11,unaff_lr);
    func_0x01384978(*(undefined4 *)(_UNK_01ee5290 + 0x1ee5244));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01ee5294 + 0x1ee5258));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01ee5298 + 0x1ee526c));
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.UIMergeBoardMini$$<PlayStartAnim>b__24_0 RVA 0x1a9e908 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aae908(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
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
  undefined4 uStack_18;
  
  pcVar4 = (char *)(_UNK_01aae9a4 + 0x1aae920);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aae9a8 + 0x1aae934));
    *pcVar4 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x50);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x024501bc(iVar5,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = 0;
  func_0x024501cc(iVar5,0,**(undefined4 **)(_UNK_01aae9ac + 0x1aae980),1);
  *(undefined4 *)(param_1 + 0x88) = 1;
  pcVar4 = (char *)(_UNK_01aad978 + 0x1aad70c);
  uStack_18 = unaff_r4;
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01aad97c + 0x1aad720));
    *pcVar4 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x851e,0);
  if (iVar5 == 0) {
    iVar5 = func_0x01c24918(0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0xc0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = FUN_01aa4700(iVar5);
    if (iVar5 == 0) {
      iVar5 = *(int *)(param_1 + 0x80);
      *(undefined1 *)(param_1 + 0x84) = 1;
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0x4c);
      iVar6 = func_0x01c24918(0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(param_1 + 0x80);
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar7 = *(undefined4 *)(iVar8 + 0x40);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x01ca8b0c(iVar6,uVar7,0);
    }
    else {
      iVar5 = func_0x01c24918(0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0xc0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar9 = func_0x02b4cec4(iVar5,0);
      *(bool *)(param_1 + 0x84) = (int)((ulonglong)uVar9 >> 0x20) < (int)(uint)((int)uVar9 == 0);
      iVar5 = func_0x01c24918(0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0xc0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = FUN_01aa5c98(iVar5);
      iVar6 = func_0x01c24918(0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0xc0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = FUN_01aa5920(iVar6);
    }
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar6 + 0x20);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    *(bool *)(param_1 + 0x85) = *(int *)(iVar6 + 0xc) + -1 <= iVar5;
    if (*(char *)(param_1 + 0x84) == '\0') {
      iVar5 = func_0x01c24918(0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0xc0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      if (*(char *)(iVar5 + 0x48) == '\0') {
        iVar5 = func_0x0229f06c(0x8521,0);
        if (iVar5 == 0) {
          iVar5 = *(int *)(param_1 + 0x7c);
          *(undefined4 *)(param_1 + 0x88) = 0;
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar5,0,0);
          iVar5 = *(int *)(param_1 + 100);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x0244fc34(iVar5,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x02450158(iVar5,0,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x0244ffd4(iVar5,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar5,0,0);
          iVar5 = *(int *)(param_1 + 100);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x0244fc34(iVar5,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x02450158(iVar5,1,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x0244ffd4(iVar5,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar5,0,0);
          iVar5 = *(int *)(param_1 + 0x50);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x024501bc(iVar5,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x024509a4(iVar5,0,0,0);
          iVar5 = *(int *)(param_1 + 0x5c);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x02450790(iVar5,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar5,0,0);
          iVar5 = *(int *)(param_1 + 0x58);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x02450790(iVar5,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar5,0,0);
          iVar5 = *(int *)(param_1 + 0x78);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar5,1,0);
          iVar5 = *(int *)(param_1 + 0x60);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x0244fc34(iVar5,0);
          iVar6 = *(int *)(param_1 + 0x54);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          uVar7 = func_0x024504c0(iVar6,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          goto SUB_02450900;
        }
        iVar5 = func_0x0229f13c(0x8521,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        pcVar4 = (char *)(_UNK_01aadb90 + 0x1aad998);
        if (*pcVar4 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01aadb94 + 0x1aad9ac));
          *pcVar4 = '\x01';
        }
        iVar5 = func_0x0229f06c(0x8520,0);
        if (iVar5 == 0) {
          iVar5 = *(int *)(param_1 + 0x7c);
          *(undefined4 *)(param_1 + 0x88) = 1;
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar5,0,0);
          iVar5 = *(int *)(param_1 + 0x50);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x024501bc(iVar5,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uStack_18 = 0;
          func_0x024501cc(iVar5,0,**(undefined4 **)(_UNK_01aadb98 + 0x1aada68),1);
          iVar5 = *(int *)(param_1 + 100);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          FUN_01aaa938(iVar5,0);
          iVar5 = *(int *)(param_1 + 0x5c);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x02450790(iVar5,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar5,0,0);
          iVar5 = *(int *)(param_1 + 0x58);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x02450790(iVar5,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar5,0,0);
          iVar5 = *(int *)(param_1 + 0x78);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar5,0,0);
          iVar5 = *(int *)(param_1 + 0x60);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x0244fc34(iVar5,0);
          iVar6 = *(int *)(param_1 + 0x54);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          uVar7 = func_0x024504c0(iVar6,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
SUB_02450900:
          (*(code *)&UNK_05197608)(iVar5,uVar7,1,0);
          return;
        }
        iVar5 = func_0x0229f13c(0x8520,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      pcVar4 = (char *)(_UNK_01aad0e0 + 0x1aacd7c);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01aad0e4 + 0x1aacd90));
        func_0x01384978(*(undefined4 *)(_UNK_01aad0e8 + 0x1aacd9c));
        func_0x01384978(*(undefined4 *)(_UNK_01aad0ec + 0x1aacda8));
        func_0x01384978(*(undefined4 *)(_UNK_01aad0f0 + 0x1aacdb4));
        *pcVar4 = '\x01';
      }
      iVar5 = func_0x0229f06c(0x851f,0);
      if (iVar5 == 0) {
        iVar5 = *(int *)(param_1 + 0x7c);
        *(undefined4 *)(param_1 + 0x88) = 2;
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar5,1,0);
        iVar5 = *(int *)(param_1 + 100);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0244fc34(iVar5,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x02450158(iVar5,0,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0244ffd4(iVar5,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar5,0,0);
        iVar5 = *(int *)(param_1 + 100);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0244fc34(iVar5,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x02450158(iVar5,1,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0244ffd4(iVar5,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar5,0,0);
        iVar5 = *(int *)(param_1 + 0x50);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x024501bc(iVar5,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uStack_18 = 0;
        func_0x024501cc(iVar5,0,**(undefined4 **)(_UNK_01aad0f4 + 0x1aacf60),0);
        iVar5 = *(int *)(param_1 + 0x5c);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x02450790(iVar5,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar5,1,0);
        iVar5 = *(int *)(param_1 + 0x58);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x02450790(iVar5,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar5,0,0);
        iVar5 = *(int *)(param_1 + 0x78);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar5,0,0);
        puVar1 = *(undefined4 **)(_UNK_01aad100 + 0x1aad02c);
        if (*(char *)(param_1 + 0x85) == '\0') {
          puVar1 = *(undefined4 **)(_UNK_01aad0f8 + 0x1aad010);
        }
        piVar3 = *(int **)(param_1 + 0x74);
        uVar7 = *puVar1;
        if (*(int *)(**(int **)(_UNK_01aad0fc + 0x1aad018) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar7 = func_0x028c1350(uVar7,0);
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        (**(code **)(*piVar3 + 0x2d0))(piVar3,uVar7,*(undefined4 *)(*piVar3 + 0x2d4));
        iVar5 = *(int *)(param_1 + 0x60);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0244fc34(iVar5,0);
        iVar6 = *(int *)(param_1 + 0x5c);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar7 = func_0x024504c0(iVar6,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        goto SUB_02450900;
      }
      iVar5 = func_0x0229f13c(0x851f,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar5 = func_0x0229f13c(0x851e,0);
    if (iVar5 == 0) {
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
  if (*(int *)(iVar5 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar5 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar6 = *(int *)(iVar5 + 8);
  uVar7 = *(undefined4 *)(iVar5 + 0xc);
  iVar5 = *(int *)(iVar5 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar5 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar6,uVar7,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.UIMergeBoardMini$$<>iFixBaseProxy_OnCreate RVA 0x1a9e9b0 =====

void FUN_01aae9b0(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x79,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x79,0);
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



// ===== FAT.UIMergeBoardMini$$<>iFixBaseProxy_OnParse RVA 0x1a9e9b8 =====

void FUN_01aae9b8(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x41,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x41,0);
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



// ===== FAT.UIMergeBoardMini$$<>iFixBaseProxy_OnPreOpen RVA 0x1a9e9c0 =====

void FUN_01aae9c0(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x42,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x42,0);
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



// ===== FAT.UIMergeBoardMini$$<>iFixBaseProxy_OnPostOpen RVA 0x1a9e9c8 =====

void FUN_01aae9c8(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x24,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x24,0);
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



// ===== FAT.UIMergeBoardMini$$<>iFixBaseProxy_OnPreClose RVA 0x1a9e9d0 =====

void FUN_01aae9d0(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x6ab,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x6ab,0);
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



// ===== FAT.UIMergeBoardMini$$<>iFixBaseProxy_OnPostClose RVA 0x1a9e9d8 =====

void FUN_01aae9d8(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x691,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x691,0);
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


