/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardEffect$$get_highlightEffect RVA 0x1dea0a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dfa0a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x5ef7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ef7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021bb474 + 0x21bb394);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021bb478 + 0x21bb3a8),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021bb47c + 0x21bb464));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== FAT.MBBoardEffect$$FAT.IMergeBoard.Init RVA 0x1dea0f4 =====

void FUN_01dfa0f4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x9f7c,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x9f7c,0);
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



// ===== FAT.MBBoardEffect$$FAT.IMergeBoard.Setup RVA 0x1dea140 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfa140(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
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
  undefined4 uStack_20;
  
  iVar3 = func_0x0229f06c(0x9f7d,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x9f7d,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02179a68(iVar3,param_1,param_2,param_3);
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  func_0x01dfa224(param_1);
  func_0x01dfa2b8(param_1);
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0244ffd4(iVar3,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar3,0,0);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_01ded7b0 + 0x1ded6bc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ded7b4 + 0x1ded6d0));
    func_0x01384978(*(undefined4 *)(_UNK_01ded7b8 + 0x1ded6dc));
    func_0x01384978(*(undefined4 *)(_UNK_01ded7bc + 0x1ded6e8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f11,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f11,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar5,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar3,0);
    func_0x01485278(&uStack_38,uVar5,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar3 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar5,&uStack_38,uVar4,0,0);
    return;
  }
  puVar2 = *(undefined4 **)(_UNK_01ded7c0 + 0x1ded748);
  *(undefined4 *)(iVar3 + 8) = uVar5;
  iVar1 = func_0x03668dfc(*puVar2);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0x7c) == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_01ded7c4 + 0x1ded780),&stack0xffffffec);
  uVar5 = func_0x0244f6a0(**(undefined4 **)(_UNK_01ded7c8 + 0x1ded7a0),uVar5,0);
  *(undefined4 *)(iVar3 + 0x10) = uVar5;
  return;
}



// ===== FAT.MBBoardEffect$$HideHighlight RVA 0x1dea224 =====

void FUN_01dfa224(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ef6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ef6,0);
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
  iVar1 = FUN_01dfa0a0(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,0,0);
  return;
}



// ===== FAT.MBBoardEffect$$HideInventoryInd RVA 0x1dea2b8 =====

void FUN_01dfa2b8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ef9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ef9,0);
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
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,0,0);
  return;
}



// ===== FAT.MBBoardEffect$$FAT.IMergeBoard.Cleanup RVA 0x1dea344 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfa344(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
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
  
  iVar1 = func_0x0229f06c(0x9f7e,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x2c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01ded878 + 0x1ded7e0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01ded87c + 0x1ded7f4));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x9f12,0);
    if (iVar1 == 0) {
      func_0x01ded884(param_1);
      param_1 = *(int *)(param_1 + 8);
      if (*(int *)(**(int **)(_UNK_01ded880 + 0x1ded854) + 0x74) == 0) {
        func_0x01384ab4();
      }
      pcVar4 = (char *)(_UNK_01ddaac4 + 0x1dda998);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01ddaac8 + 0x1dda9ac),0);
        func_0x01384978(*(undefined4 *)(_UNK_01ddaacc + 0x1dda9b8));
        *pcVar4 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x1548,0);
      if (iVar1 == 0) {
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02450148(param_1,0);
        uVar3 = iVar1 - 1;
        if (-1 < (int)uVar3) {
          puVar8 = *(undefined4 **)(_UNK_01ddaad0 + 0x1ddaa30);
          piVar7 = *(int **)(_UNK_01ddaad4 + 0x1ddaa38);
          do {
            if (param_1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x02450158(param_1,uVar3,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x02f67194(iVar1,*puVar8);
            if (*(int *)(*piVar7 + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar5 = func_0x0145b1cc(iVar1,0,0);
            if (iVar5 != 0) {
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              func_0x0267004c(iVar1,0);
            }
            uVar3 = uVar3 - 1;
          } while (uVar3 < 0x80000000);
        }
        return;
      }
      iVar1 = func_0x0229f13c(0x1548,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x9f12,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9f7e,0);
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



// ===== FAT.MBBoardEffect$$ShowHighlight RVA 0x1dea3ac =====

void FUN_01dfa3ac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9e7b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e7b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021bde10(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = FUN_01dfa0a0(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,1,0);
  iVar1 = FUN_01dfa0a0(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05194df4)(iVar1,param_2,param_3,0);
  return;
}



// ===== FAT.MBBoardEffect$$ShowScoreAnim RVA 0x1dea48c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfa48c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piStack_24;
  
  pcVar5 = (char *)(_UNK_01dfa754 + 0x1dfa4ac);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dfa758 + 0x1dfa4c4));
    func_0x01384978(*(undefined4 *)(_UNK_01dfa75c + 0x1dfa4d0));
    func_0x01384978(*(undefined4 *)(_UNK_01dfa760 + 0x1dfa4dc));
    func_0x01384978(*(undefined4 *)(_UNK_01dfa764 + 0x1dfa4e8));
    func_0x01384978(*(undefined4 *)(_UNK_01dfa768 + 0x1dfa4f4));
    func_0x01384978(*(undefined4 *)(_UNK_01dfa76c + 0x1dfa500));
    func_0x01384978(*(undefined4 *)(_UNK_01dfa770 + 0x1dfa50c));
    *pcVar5 = '\x01';
  }
  piStack_24 = (int *)0x0;
  iVar1 = func_0x0229f06c(0x5f4c,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01dee25c(iVar1,param_2,param_3,param_4,0x40400000);
    if (*(int *)(**(int **)(_UNK_01dfa774 + 0x1dfa5b4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244fb8c(iVar1,0,0);
    if (iVar2 == 0) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02fe3bd8(iVar1,&piStack_24,**(undefined4 **)(_UNK_01dfa778 + 0x1dfa5f8));
      if (iVar2 != 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01bf3284(iVar1,**(undefined4 **)(_UNK_01dfa78c + 0x1dfa640),0);
        piVar3 = piStack_24;
        if (piStack_24 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar3;
        (**(code **)(iVar1 + 0xe0))(piVar3,param_5,*(undefined4 *)(iVar1 + 0xe4));
        return;
      }
      piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01dfa77c + 0x1dfa684),1);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((param_4 != 0) &&
         (iVar2 = func_0x01384ab8(param_4,*(undefined4 *)(*piVar3 + 0x20)), iVar2 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if (piVar3[3] == 0) {
        func_0x01384bf4();
      }
      piVar3[4] = param_4;
      if (*(int *)(**(int **)(_UNK_01dfa780 + 0x1dfa6e4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c23bc(**(undefined4 **)(_UNK_01dfa784 + 0x1dfa708),piVar3,0);
      iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01dfa788 + 0x1dfa718));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0244adcc(iVar2,param_4,iVar1,0);
    }
    func_0x026f7ac8(param_5,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5f4c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02238ff8(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.MBBoardEffect$$ShowInventoryInd RVA 0x1dea790 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfa790(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01dfa934 + 0x1dfa7b0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dfa938 + 0x1dfa7c4));
    func_0x01384978(*(undefined4 *)(_UNK_01dfa93c + 0x1dfa7d0));
    *pcVar5 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  iVar3 = func_0x0229f06c(0x7771,0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    piVar4 = (int *)func_0x0244fc64(iVar3,0);
    if (*(int *)(**(int **)(_UNK_01dfa940 + 0x1dfa864) + 0x74) == 0) {
      func_0x01384ab4();
    }
    piVar6 = (int *)0x0;
    if ((piVar4 != (int *)0x0) &&
       (piVar6 = piVar4, *piVar4 != **(int **)(_UNK_01dfa944 + 0x1dfa888))) {
      piVar6 = (int *)0x0;
    }
    func_0x0244fd5c(piVar6,param_2,param_3,0,&uStack_20,0);
    uVar2 = uStack_1c;
    uVar1 = uStack_20;
    if (iVar3 == 0) {
      func_0x01384bf0();
      func_0x0244fdbc(0,uVar1,uVar2,0);
      func_0x01384bf0();
    }
    else {
      func_0x0244fdbc(iVar3,uStack_20,uStack_1c,0);
    }
    iVar3 = func_0x0244ffd4(iVar3,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar3,1,0);
  }
  else {
    iVar3 = func_0x0229f13c(0x7771,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x021bde10(iVar3,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardEffect$$ShowInventoryPutInEffect RVA 0x1dea948 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfa948(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_01dfab24 + 0x1dfa968);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dfab28 + 0x1dfa97c));
    func_0x01384978(*(undefined4 *)(_UNK_01dfab2c + 0x1dfa988));
    *pcVar6 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  iVar3 = func_0x0229f06c(0x776f,0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x1c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    piVar4 = (int *)func_0x0244fc64(iVar3,0);
    if (*(int *)(**(int **)(_UNK_01dfab30 + 0x1dfaa1c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    piVar7 = (int *)0x0;
    if ((piVar4 != (int *)0x0) &&
       (piVar7 = piVar4, *piVar4 != **(int **)(_UNK_01dfab34 + 0x1dfaa40))) {
      piVar7 = (int *)0x0;
    }
    func_0x0244fd5c(piVar7,param_2,param_3,0,&uStack_20,0);
    uVar2 = uStack_1c;
    uVar1 = uStack_20;
    if (iVar3 == 0) {
      func_0x01384bf0();
      func_0x0244fdbc(0,uVar1,uVar2,0);
      func_0x01384bf0();
    }
    else {
      func_0x0244fdbc(iVar3,uStack_20,uStack_1c,0);
    }
    iVar5 = func_0x0244ffd4(iVar3,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar5,0,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0244ffd4(iVar3,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar3,1,0);
  }
  else {
    iVar3 = func_0x0229f13c(0x776f,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x021bde10(iVar3,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardEffect$$AddStateEffect RVA 0x1deab38 =====

void FUN_01dfab38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9edd,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dee3ac(iVar1,param_2,param_3,param_4);
  }
  else {
    iVar1 = func_0x0229f13c(0x9edd,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02289748(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MBBoardEffect$$RemoveStateEffect RVA 0x1deabcc =====

void FUN_01dfabcc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9ee1,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dee8ac(iVar1,param_2,param_3,param_4);
  }
  else {
    iVar1 = func_0x0229f13c(0x9ee1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02289748(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MBBoardEffect$$ShowTapLockedEffect RVA 0x1deac60 =====

void FUN_01dfac60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9eb8,0);
  if (iVar1 == 0) {
    func_0x01dfacec(param_1,param_2,param_3,0xd,0x40400000);
  }
  else {
    iVar1 = func_0x0229f13c(0x9eb8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0220cf98(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardEffect$$_ShowEffect RVA 0x1deacec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfacec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar3 = (char *)(_UNK_01dfae20 + 0x1dfad10);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dfae24 + 0x1dfad28));
    func_0x01384978(*(undefined4 *)(_UNK_01dfae28 + 0x1dfad34));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x387d,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (*(int *)(**(int **)(_UNK_01dfae2c + 0x1dfada4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uStack_2c = func_0x01dda730(param_4,0);
    uStack_30 = 0xffffffff;
    uStack_34 = **(undefined4 **)(_UNK_01dfae30 + 0x1dfadd0);
    uVar2 = func_0x0244f5f4(&uStack_34,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dedd00(iVar1,param_2,param_3,uVar2,param_5);
  }
  else {
    iVar1 = func_0x0229f13c(0x387d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0220d244(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.MBBoardEffect$$ShowUnlockNormalEffect RVA 0x1deae34 =====

void FUN_01dfae34(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9ec9,0);
  if (iVar1 == 0) {
    FUN_01dfacec(param_1,param_2,param_3,6,0x40400000);
  }
  else {
    iVar1 = func_0x0229f13c(0x9ec9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0220cf98(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardEffect$$ShowUnlockLevelEffect RVA 0x1deaec0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfaec0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_01dfb1a4 + 0x1dfaee0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dfb1a8 + 0x1dfaef8));
    func_0x01384978(*(undefined4 *)(_UNK_01dfb1ac + 0x1dfaf04));
    func_0x01384978(*(undefined4 *)(_UNK_01dfb1b0 + 0x1dfaf10));
    func_0x01384978(*(undefined4 *)(_UNK_01dfb1b4 + 0x1dfaf1c));
    func_0x01384978(*(undefined4 *)(_UNK_01dfb1b8 + 0x1dfaf28));
    func_0x01384978(*(undefined4 *)(_UNK_01dfb1bc + 0x1dfaf34));
    func_0x01384978(*(undefined4 *)(_UNK_01dfb1c0 + 0x1dfaf40));
    func_0x01384978(*(undefined4 *)(_UNK_01dfb1c4 + 0x1dfaf4c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9ecb,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01dfb1c8 + 0x1dfafb8));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar8 = *(undefined4 **)(_UNK_01dfb1cc + 0x1dfafe0);
    *(undefined4 *)(iVar1 + 8) = param_2;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    iVar2 = func_0x03668dfc(*puVar8);
    uVar5 = *(undefined4 *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x01de32bc(iVar2,uVar5,uVar7,0);
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar2 = *(int *)(param_1 + 0x2c);
    if (*(int *)(**(int **)(_UNK_01dfb1d0 + 0x1dfb024) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uStack_28 = func_0x01dda730(7,0);
    uStack_2c = 0xffffffff;
    uStack_30 = **(undefined4 **)(_UNK_01dfb1d4 + 0x1dfb058);
    uVar3 = func_0x0244f5f4(&uStack_30,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01dedd00(iVar2,uVar7,uVar5,uVar3,0x40c00000);
    if (*(int *)(**(int **)(_UNK_01dfb1d8 + 0x1dfb0b4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = func_0x0244fb8c(iVar2,0,0);
    if (iVar4 == 0) {
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02fe27b8(iVar2,**(undefined4 **)(_UNK_01dfb1dc + 0x1dfb12c));
      uVar3 = *(undefined4 *)(iVar1 + 8);
      uVar7 = *(undefined4 *)(iVar1 + 0xc);
      uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01dfb1e0 + 0x1dfb14c));
      func_0x024500b4(uVar5,iVar1,**(undefined4 **)(_UNK_01dfb1e4 + 0x1dfb16c),0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01e0d344(iVar2,param_5,uVar3,uVar7,param_4,uVar5,0);
    }
    else {
      iVar2 = func_0x03668dfc(*puVar8);
      uVar5 = *(undefined4 *)(iVar1 + 8);
      uVar7 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01de3354(iVar2,uVar5,uVar7,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9ecb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02289604(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.MBBoardEffect.<>c__DisplayClass23_0$$.ctor RVA 0x1deb1e8 =====

void FUN_01dfb1e8(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardEffect$$ShowOrderBoxDieEffect RVA 0x1deb1f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfb1f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01dfb3a8 + 0x1dfb210);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dfb3ac + 0x1dfb228));
    func_0x01384978(*(undefined4 *)(_UNK_01dfb3b0 + 0x1dfb234));
    func_0x01384978(*(undefined4 *)(_UNK_01dfb3b4 + 0x1dfb240));
    func_0x01384978(*(undefined4 *)(_UNK_01dfb3b8 + 0x1dfb24c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f7f,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (*(int *)(**(int **)(_UNK_01dfb3bc + 0x1dfb2b0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uStack_24 = func_0x01dda730(10,0);
    uStack_28 = 0xffffffff;
    uStack_2c = **(undefined4 **)(_UNK_01dfb3c0 + 0x1dfb2dc);
    uVar2 = func_0x0244f5f4(&uStack_2c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01dedd00(iVar1,param_2,param_3,uVar2,0x40800000);
    if (*(int *)(**(int **)(_UNK_01dfb3c4 + 0x1dfb338) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244fb8c(iVar1,0,0);
    if (iVar3 == 0) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02fe27b8(iVar1,**(undefined4 **)(_UNK_01dfb3c8 + 0x1dfb378));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0229ee20(iVar1,param_4,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9f7f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0228aedc(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MBBoardEffect$$ShowMergeEffect RVA 0x1deb3cc =====

void FUN_01dfb3cc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9f81,0);
  if (iVar1 == 0) {
    FUN_01dfacec(param_1,param_2,param_3,4,0x40400000);
  }
  else {
    iVar1 = func_0x0229f13c(0x9f81,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0220cf98(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardEffect$$ShowFrozenMergeEffect RVA 0x1deb458 =====

void FUN_01dfb458(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9f82,0);
  if (iVar1 == 0) {
    FUN_01dfacec(param_1,param_2,param_3,0x18,0x40000000);
  }
  else {
    iVar1 = func_0x0229f13c(0x9f82,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0220cf98(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardEffect$$ShowFrozenMergeEffect RVA 0x1deb4e0 =====

void FUN_01dfb4e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9f83,0);
  if (iVar1 == 0) {
    func_0x01dfb574(param_1,param_2,param_3,param_4,0x18,0x40000000);
  }
  else {
    iVar1 = func_0x0229f13c(0x9f83,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021b96bc(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MBBoardEffect$$_ShowEffect RVA 0x1deb574 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfb574(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar3 = (char *)(_UNK_01dfb6b0 + 0x1dfb598);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dfb6b4 + 0x1dfb5b0));
    func_0x01384978(*(undefined4 *)(_UNK_01dfb6b8 + 0x1dfb5bc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f84,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (*(int *)(**(int **)(_UNK_01dfb6bc + 0x1dfb630) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uStack_2c = func_0x01dda730(param_5,0);
    uStack_30 = 0xffffffff;
    uStack_34 = **(undefined4 **)(_UNK_01dfb6c0 + 0x1dfb65c);
    uVar2 = func_0x0244f5f4(&uStack_34,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dedf90(iVar1,param_2,param_3,param_4,uVar2,param_6);
  }
  else {
    iVar1 = func_0x0229f13c(0x9f84,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0228b010(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}



// ===== FAT.MBBoardEffect$$ShowCollectFeedback RVA 0x1deb6c4 =====

void FUN_01dfb6c4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x5f02,0);
  if (iVar1 == 0) {
    FUN_01dfacec(param_1,param_2,param_3,5,0x40400000);
  }
  else {
    iVar1 = func_0x0229f13c(0x5f02,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0220cf98(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardEffect$$ShowLoginGiftEffect RVA 0x1deb750 =====

void FUN_01dfb750(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9f85,0);
  if (iVar1 == 0) {
    FUN_01dfacec(param_1,param_2,param_3,0x21,0x40400000);
  }
  else {
    iVar1 = func_0x0229f13c(0x9f85,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0220cf98(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardEffect$$ShowMagicHourHitEffect RVA 0x1deb7dc =====

void FUN_01dfb7dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9f86,0);
  if (iVar1 == 0) {
    FUN_01dfacec(param_1,param_2,param_3,0x14,0x40400000);
  }
  else {
    iVar1 = func_0x0229f13c(0x9f86,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0220cf98(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardEffect$$ShowMagicOrderHitEffect RVA 0x1deb868 =====

void FUN_01dfb868(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x387c,0);
  if (iVar1 == 0) {
    FUN_01dfacec(param_1,param_2,param_3,0x20,0x40400000);
  }
  else {
    iVar1 = func_0x0229f13c(0x387c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0220cf98(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardEffect$$ShowJumpCDEffect RVA 0x1deb8f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfb8f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar7 = (char *)(_UNK_01dfbd0c + 0x1dfb91c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dfbd10 + 0x1dfb934));
    func_0x01384978(*(undefined4 *)(_UNK_01dfbd14 + 0x1dfb940));
    func_0x01384978(*(undefined4 *)(_UNK_01dfbd18 + 0x1dfb94c));
    func_0x01384978(*(undefined4 *)(_UNK_01dfbd1c + 0x1dfb958));
    func_0x01384978(*(undefined4 *)(_UNK_01dfbd20 + 0x1dfb964));
    func_0x01384978(*(undefined4 *)(_UNK_01dfbd24 + 0x1dfb970));
    func_0x01384978(*(undefined4 *)(_UNK_01dfbd28 + 0x1dfb97c));
    func_0x01384978(*(undefined4 *)(_UNK_01dfbd2c + 0x1dfb988));
    func_0x01384978(*(undefined4 *)(_UNK_01dfbd30 + 0x1dfb994));
    func_0x01384978(*(undefined4 *)(_UNK_01dfbd34 + 0x1dfb9a0));
    func_0x01384978(*(undefined4 *)(_UNK_01dfbd38 + 0x1dfb9ac));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5f27,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01dfbd3c + 0x1dfba24));
    func_0x0244f5a0(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    puVar3 = *(undefined4 **)(_UNK_01dfbd40 + 0x1dfba4c);
    *(undefined4 *)(iVar2 + 0x14) = param_4;
    *(undefined4 *)(iVar2 + 0x18) = param_5;
    uVar4 = *puVar3;
    *(undefined4 *)(iVar2 + 0xc) = param_6;
    iVar5 = func_0x03668dfc(uVar4);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x01ddbed8(iVar5,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x01f0932c(iVar5,0);
    iVar5 = *(int *)(**(int **)(_UNK_01dfbd44 + 0x1dfbaa4) + 0x74);
    *(undefined4 *)(iVar2 + 0x10) = uVar4;
    if (iVar5 == 0) {
      func_0x01384ab4();
    }
    uStack_34 = func_0x01dda730(0xf,0);
    uStack_38 = 0xffffffff;
    uStack_3c = **(undefined4 **)(_UNK_01dfbd48 + 0x1dfbad0);
    uVar4 = func_0x0244f5f4(&uStack_3c,0);
    iVar5 = func_0x034aaa34(**(undefined4 **)(_UNK_01dfbd4c + 0x1dfbafc));
    uVar6 = *(undefined4 *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x0244a45c(iVar5,uVar4,uVar6,0);
    *(undefined4 *)(iVar2 + 8) = uVar6;
    func_0x01dda7a0(uVar6,0x40000000,uVar4,0);
    iVar5 = *(int *)(iVar2 + 8);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar5,0,0);
    iVar5 = *(int *)(iVar2 + 8);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x024504c0(iVar5,0);
    func_0x01dd876c(&uStack_48,param_2,param_3,0);
    uVar1 = uStack_40;
    uVar6 = uStack_44;
    uVar4 = uStack_48;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x024503d4(iVar5,uVar4,uVar6,uVar1,0);
    if (*(int *)(**(int **)(_UNK_01dfbd50 + 0x1dfbbd0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar4 = func_0x02ce71fc(0);
    func_0x02ce9384(uVar4,param_7,0);
    puVar3 = *(undefined4 **)(_UNK_01dfbd54 + 0x1dfbc08);
    uVar6 = func_0x01384be4(*puVar3);
    func_0x02ce3d80(uVar6,iVar2,**(undefined4 **)(_UNK_01dfbd58 + 0x1dfbc24),0);
    func_0x02cfd430(uVar4,uVar6,0);
    iVar5 = *(int *)(iVar2 + 8);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x024504c0(iVar5,0);
    func_0x01dd876c(&uStack_48,*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),0);
    uVar6 = func_0x02cf24e8(uVar6,uStack_48,uStack_44,uStack_40,0x3f000000,0,0);
    uVar6 = func_0x0309f0f8(uVar6,1,**(undefined4 **)(_UNK_01dfbd5c + 0x1dfbc98));
    func_0x02cf668c(uVar4,uVar6,0);
    uVar6 = func_0x01384be4(*puVar3);
    func_0x02ce3d80(uVar6,iVar2,**(undefined4 **)(_UNK_01dfbd60 + 0x1dfbcd0),0);
    func_0x02cfd430(uVar4,uVar6,0);
    func_0x03074b50(uVar4,**(undefined4 **)(_UNK_01dfbd64 + 0x1dfbcf4));
  }
  else {
    iVar2 = func_0x0229f13c(0x5f27,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02238af4(iVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}



// ===== FAT.MBBoardEffect.<>c__DisplayClass32_0$$.ctor RVA 0x1debd68 =====

void FUN_01dfbd68(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardEffect$$ShowTokenMultiEffect RVA 0x1debd70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfbd70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar5 = (char *)(_UNK_01dfc274 + 0x1dfbd98);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dfc278 + 0x1dfbdb0));
    func_0x01384978(*(undefined4 *)(_UNK_01dfc27c + 0x1dfbdbc));
    func_0x01384978(*(undefined4 *)(_UNK_01dfc280 + 0x1dfbdc8));
    func_0x01384978(*(undefined4 *)(_UNK_01dfc284 + 0x1dfbdd4));
    func_0x01384978(*(undefined4 *)(_UNK_01dfc288 + 0x1dfbde0));
    func_0x01384978(*(undefined4 *)(_UNK_01dfc28c + 0x1dfbdec));
    func_0x01384978(*(undefined4 *)(_UNK_01dfc290 + 0x1dfbdf8));
    func_0x01384978(*(undefined4 *)(_UNK_01dfc294 + 0x1dfbe04));
    func_0x01384978(*(undefined4 *)(_UNK_01dfc298 + 0x1dfbe10));
    func_0x01384978(*(undefined4 *)(_UNK_01dfc29c + 0x1dfbe1c));
    func_0x01384978(*(undefined4 *)(_UNK_01dfc2a0 + 0x1dfbe28));
    func_0x01384978(*(undefined4 *)(_UNK_01dfc2a4 + 0x1dfbe34));
    func_0x01384978(*(undefined4 *)(_UNK_01dfc2a8 + 0x1dfbe40));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5f37,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01dfc2ac + 0x1dfbec8));
    func_0x0244f5a0(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    puVar6 = *(undefined4 **)(_UNK_01dfc2b0 + 0x1dfbef0);
    *(undefined4 *)(iVar2 + 0xc) = param_8;
    iVar3 = func_0x03668dfc(*puVar6);
    if (param_6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0210e5f4(param_6,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x01de25b0(iVar3,uVar4,0);
    iVar3 = *(int *)(**(int **)(_UNK_01dfc2b4 + 0x1dfbf44) + 0x74);
    *(undefined4 *)(iVar2 + 0x14) = uVar4;
    if (iVar3 == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244fb8c(uVar4,0,0);
    if (iVar3 == 0) {
      iVar3 = func_0x03668dfc(*puVar6);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01ddbed8(iVar3,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x01f0932c(iVar3,0);
      iVar3 = *(int *)(**(int **)(_UNK_01dfc2b8 + 0x1dfbfc0) + 0x74);
      *(undefined4 *)(iVar2 + 0x10) = uVar4;
      if (iVar3 == 0) {
        func_0x01384ab4();
      }
      uStack_34 = func_0x01dda730(0xf,0);
      uStack_38 = 0xffffffff;
      uStack_3c = **(undefined4 **)(_UNK_01dfc2bc + 0x1dfbfec);
      uVar4 = func_0x0244f5f4(&uStack_3c,0);
      iVar3 = func_0x034aaa34(**(undefined4 **)(_UNK_01dfc2c0 + 0x1dfc018));
      uVar7 = *(undefined4 *)(iVar2 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar7 = func_0x0244a45c(iVar3,uVar4,uVar7,0);
      *(undefined4 *)(iVar2 + 8) = uVar7;
      func_0x01dda7a0(uVar7,0x40000000,uVar4,0);
      iVar3 = *(int *)(iVar2 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar3,0,0);
      iVar3 = *(int *)(iVar2 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x024504c0(iVar3,0);
      func_0x01dd876c(&uStack_48,param_2,param_3,0);
      uVar1 = uStack_40;
      uVar7 = uStack_44;
      uVar4 = uStack_48;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x024503d4(iVar3,uVar4,uVar7,uVar1,0);
      if (*(int *)(**(int **)(_UNK_01dfc2c4 + 0x1dfc0ec) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar4 = func_0x02ce71fc(0);
      func_0x02ce9384(uVar4,param_7,0);
      puVar6 = *(undefined4 **)(_UNK_01dfc2c8 + 0x1dfc124);
      uVar7 = func_0x01384be4(*puVar6);
      func_0x02ce3d80(uVar7,iVar2,**(undefined4 **)(_UNK_01dfc2cc + 0x1dfc140),0);
      func_0x02cfd430(uVar4,uVar7,0);
      iVar3 = *(int *)(iVar2 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar7 = func_0x024504c0(iVar3,0);
      func_0x01dd876c(&uStack_48,param_4,param_5,0);
      uVar7 = func_0x02cf24e8(uVar7,uStack_48,uStack_44,uStack_40,0x3f000000,0,0);
      uVar7 = func_0x0309f0f8(uVar7,1,**(undefined4 **)(_UNK_01dfc2d0 + 0x1dfc1b4));
      func_0x02cf668c(uVar4,uVar7,0);
      uVar7 = func_0x01384be4(*puVar6);
      func_0x02ce3d80(uVar7,iVar2,**(undefined4 **)(_UNK_01dfc2d4 + 0x1dfc1ec),0);
      func_0x02cfd430(uVar4,uVar7,0);
      func_0x02ce9384(uVar4,0x3e19999a,0);
      uVar7 = func_0x01384be4(*puVar6);
      func_0x02ce3d80(uVar7,iVar2,**(undefined4 **)(_UNK_01dfc2d8 + 0x1dfc238),0);
      func_0x02cfd430(uVar4,uVar7,0);
      func_0x03074b50(uVar4,**(undefined4 **)(_UNK_01dfc2dc + 0x1dfc25c));
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5f37,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02238e64(iVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
  }
  return;
}



// ===== FAT.MBBoardEffect.<>c__DisplayClass33_0$$.ctor RVA 0x1dec2e0 =====

void FUN_01dfc2e0(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.MBBoardEffect$$ShowTokenMultiStartEffect RVA 0x1dec2e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01dfc2e8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01dfc42c + 0x1dfc308);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dfc430 + 0x1dfc31c));
    func_0x01384978(*(undefined4 *)(_UNK_01dfc434 + 0x1dfc328));
    func_0x01384978(*(undefined4 *)(_UNK_01dfc438 + 0x1dfc334));
    func_0x01384978(*(undefined4 *)(_UNK_01dfc43c + 0x1dfc340));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f31,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f31,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0218b1ec(iVar1,param_1,param_2,param_3,0);
    return iVar1;
  }
  if (*(int *)(**(int **)(_UNK_01dfc440 + 0x1dfc3a8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x02ce71fc(0);
  func_0x02ce9384(iVar1,param_3,0);
  uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01dfc444 + 0x1dfc3dc));
  func_0x02ce3d80(uVar2,param_2,**(undefined4 **)(_UNK_01dfc448 + 0x1dfc3f8),0);
  func_0x02cfd430(iVar1,uVar2,0);
  uVar2 = **(undefined4 **)(_UNK_01dfc44c + 0x1dfc41c);
  pcVar3 = (char *)(_UNK_03074ccc + 0x3074b64);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_03074cd0 + 0x3074b78),uVar2);
    *pcVar3 = '\x01';
    uVar2 = extraout_r1;
  }
  if (iVar1 == 0) {
    pcVar3 = (char *)(_UNK_03074cd4 + 0x3074c00);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_03074cd8 + 0x3074c14),uVar2);
      *pcVar3 = '\x01';
    }
    if (1 < **(int **)(**(int **)(_UNK_03074cdc + 0x3074c28) + 0x5c)) {
      func_0x02d0f7c4(0,0);
    }
  }
  else if (*(char *)(iVar1 + 0x94) == '\0') {
    pcVar3 = (char *)(_UNK_03074ce0 + 0x3074c54);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_03074ce4 + 0x3074c68),uVar2);
      *pcVar3 = '\x01';
    }
    if (1 < **(int **)(**(int **)(_UNK_03074ce8 + 0x3074c7c) + 0x5c)) {
      func_0x02d0f720(iVar1,0);
    }
  }
  else if (*(char *)(iVar1 + 0x95) == '\0') {
    if (*(int *)(**(int **)(_UNK_03074cf8 + 0x3074ca8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02d14000(iVar1,0);
  }
  else {
    pcVar3 = (char *)(_UNK_03074cec + 0x3074bac);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_03074cf0 + 0x3074bc0),uVar2);
      *pcVar3 = '\x01';
    }
    if (1 < **(int **)(**(int **)(_UNK_03074cf4 + 0x3074bd4) + 0x5c)) {
      func_0x02d0f770(iVar1,0);
    }
  }
  return iVar1;
}



// ===== FAT.MBBoardEffect$$ShowInstantEffect RVA 0x1dec450 =====

void FUN_01dfc450(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9edb,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dedd00(iVar1,param_2,param_3,param_4,param_5);
  }
  else {
    iVar1 = func_0x0229f13c(0x9edb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0220d0bc(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.MBBoardEffect$$UseTimeSkipper RVA 0x1dec4fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfc4fc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_01dfc5c4 + 0x1dfc51c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dfc5c8 + 0x1dfc530));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5f1f,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5f1f,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x0220cf98(iVar2,param_1,param_2,param_3);
    return;
  }
  iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01dfc5cc + 0x1dfc598));
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0229f06c(0x5f20,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f20,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,1,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485228(&uStack_38,1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    return;
  }
  *(undefined1 *)(iVar2 + 0x5b) = 1;
  return;
}



// ===== FAT.MBBoardEffect$$_CoPlayTimeSkip RVA 0x1dec5d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01dfc5d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01dfc698 + 0x1dfc5f0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dfc69c + 0x1dfc604));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f87,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01dfc6a0 + 0x1dfc66c));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 0x14) = param_2;
    *(undefined4 *)(iVar1 + 0x18) = param_3;
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x9f87,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0228b170(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}



// ===== FAT.MBBoardEffect.<_CoPlayTimeSkip>d__39$$.ctor RVA 0x1dec6a4 =====

void FUN_01dfc6a4(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MBBoardEffect$$_ApplyTimeSkipToAffectedItem RVA 0x1dec6c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfc6c0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pcVar5 = (char *)(_UNK_01dfc8f4 + 0x1dfc6e0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dfc8f8 + 0x1dfc6f8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f8b,0);
  if (iVar1 == 0) {
    puVar6 = *(undefined4 **)(_UNK_01dfc8fc + 0x1dfc760);
    iVar1 = func_0x03668dfc(*puVar6);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x01de4384(iVar1,0);
    iVar1 = func_0x03668dfc(*puVar6);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar1 + 0x7c);
    iVar1 = param_3 + param_2;
    param_3 = param_3 - param_2;
    iVar9 = param_4 - param_2;
    if (param_3 < iVar1) {
      iVar7 = param_2 << 1;
      iVar4 = param_3;
      do {
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x020e81ec(iVar8,iVar4,iVar9,0);
        func_0x01dfc900(param_1,uVar3,uVar2);
        iVar7 = iVar7 + -1;
        iVar4 = iVar4 + 1;
      } while (iVar7 != 0);
    }
    param_4 = param_4 + param_2;
    if (iVar9 < param_4) {
      param_2 = param_2 << 1;
      iVar7 = iVar9;
      do {
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x020e81ec(iVar8,iVar1,iVar7,0);
        func_0x01dfc900(param_1,uVar3,uVar2);
        param_2 = param_2 + -1;
        iVar7 = iVar7 + 1;
      } while (param_2 != 0);
    }
    for (; param_3 < iVar1; iVar1 = iVar1 + -1) {
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x020e81ec(iVar8,iVar1,param_4,0);
      func_0x01dfc900(param_1,uVar3,uVar2);
    }
    for (; iVar9 < param_4; param_4 = param_4 + -1) {
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x020e81ec(iVar8,param_3,param_4,0);
      func_0x01dfc900(param_1,uVar3,uVar2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9f8b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179c40(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MBBoardEffect$$_SetItemTimeSkip RVA 0x1dec900 =====

void FUN_01dfc900(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0x9f8c,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      func_0x0210cd7c(&uStack_20,param_2,0);
      FUN_01dfacec(param_1,uStack_20,uStack_1c,0x15,0x3e4ccccd);
      uVar2 = func_0x0210e5f4(param_2,0);
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      func_0x01dfc9cc(param_3,uVar2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9f8c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardEffect$$_PlaceItemToCoord RVA 0x1deca34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfca34(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pcVar3 = (char *)(_UNK_01dfcc34 + 0x1dfca58);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dfcc38 + 0x1dfca70));
    func_0x01384978(*(undefined4 *)(_UNK_01dfcc3c + 0x1dfca7c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f91,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x024504c0(param_2,0);
    piVar4 = *(int **)(_UNK_01dfcc40 + 0x1dfcb08);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar3 = (char *)(_UNK_01dfcc44 + 0x1dfcb24);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dfcc48 + 0x1dfcb38));
      *pcVar3 = '\x01';
    }
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar4;
      fVar8 = *(float *)(*(int *)(iVar1 + 0x5c) + 4);
      if (*pcVar3 == '\0') {
        func_0x01384978(piVar4);
        iVar1 = *piVar4;
        *pcVar3 = '\x01';
      }
    }
    else {
      fVar8 = *(float *)(*(int *)(iVar1 + 0x5c) + 4);
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar4;
    }
    fVar5 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = *(float *)(*(int *)(iVar1 + 0x5c) + 4);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
      piVar2 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(_UNK_01dfcc4c + 0x1dfcbe8);
      if (*piVar2 != *piVar4) {
        func_0x01384bf0();
      }
      if (*piVar2 != *piVar4) {
        piVar2 = (int *)0x0;
      }
    }
    (*(code *)&UNK_05194df4)(piVar2,(fVar6 + 0.5) * fVar8,-((fVar5 + 0.5) * fVar7),0);
    return;
  }
  iVar1 = func_0x0229f13c(0x9f91,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02234068(iVar1,param_1,param_2,param_3,param_4,0);
  return;
}



// ===== FAT.MBBoardEffect$$_OnUseTimeSkipperCallback RVA 0x1decc50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfcc50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01dfccf8 + 0x1dfcc64);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dfccfc + 0x1dfcc78));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9f92,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9f92,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2);
    return;
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01dfcd00 + 0x1dfccd0));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0229f06c(0x5f20,0,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x5f20,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,0,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485228(&uStack_38,0,0);
    iVar5 = *(int *)(iVar4 + 8);
    uVar6 = *(undefined4 *)(iVar4 + 0xc);
    iVar1 = *(int *)(iVar4 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar2,0,0);
    return;
  }
  *(undefined1 *)(iVar1 + 0x5b) = 0;
  return;
}



// ===== FAT.MBBoardEffect$$.ctor RVA 0x1decd04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfcd04(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01dfcd60 + 0x1dfcd18);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dfcd64 + 0x1dfcd2c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01dfcd68 + 0x1dfcd40));
  func_0x01deeadc();
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.MBBoardEffect.<>c__DisplayClass23_0$$<ShowUnlockLevelEffect>b__0 RVA 0x1decd6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfcd6c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  pcVar4 = (char *)(_UNK_01dfcddc + 0x1dfcd80);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dfcde0 + 0x1dfcd94));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01dfcde4 + 0x1dfcda8));
  uVar5 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0229f06c(0x9ec1,0,uVar3,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar2 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e24068(iVar1,uVar5,uVar3,0);
    *(undefined1 *)(iVar2 + 0x58) = 1;
  }
  else {
    iVar1 = func_0x0229f13c(0x9ec1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0220cf98(iVar1,iVar2,uVar5,uVar3,0);
  }
  return;
}



// ===== FAT.MBBoardEffect.<>c__DisplayClass32_0$$<ShowJumpCDEffect>b__0 RVA 0x1decde8 =====

void FUN_01dfcde8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,1,0);
  return;
}



// ===== FAT.MBBoardEffect.<>c__DisplayClass32_0$$<ShowJumpCDEffect>b__1 RVA 0x1dece10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfce10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01dfcfe4 + 0x1dfce28);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dfcfe8 + 0x1dfce3c));
    func_0x01384978(*(undefined4 *)(_UNK_01dfcfec + 0x1dfce48));
    func_0x01384978(*(undefined4 *)(_UNK_01dfcff0 + 0x1dfce54));
    func_0x01384978(*(undefined4 *)(_UNK_01dfcff4 + 0x1dfce60));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01dfcff8 + 0x1dfce74));
  iVar5 = *(int *)(param_1 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0210e5f4(iVar5,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01de25b0(iVar1,uVar2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0229ff30(iVar1,0);
  if (*(int *)(**(int **)(_UNK_01dfcffc + 0x1dfcee0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uStack_24 = func_0x01dda730(0xe,0);
  uStack_28 = 0xffffffff;
  uStack_2c = **(undefined4 **)(_UNK_01dfd000 + 0x1dfcf08);
  uVar2 = func_0x0244f5f4(&uStack_2c,0);
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01dfd004 + 0x1dfcf34));
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244a45c(iVar1,uVar2,uVar4,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x024504c0(iVar1,0);
  func_0x01dd876c(&uStack_38,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x024503d4(iVar5,uStack_38,uStack_34,uStack_30,0);
  func_0x01dda7a0(iVar1,0x40400000,uVar2,0);
  return;
}



// ===== FAT.MBBoardEffect.<>c__DisplayClass33_0$$<ShowTokenMultiEffect>b__0 RVA 0x1ded008 =====

void FUN_01dfd008(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,1,0);
  return;
}



// ===== FAT.MBBoardEffect.<>c__DisplayClass33_0$$<ShowTokenMultiEffect>b__1 RVA 0x1ded030 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfd030(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01dfd1d4 + 0x1dfd048);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dfd1d8 + 0x1dfd05c));
    func_0x01384978(*(undefined4 *)(_UNK_01dfd1dc + 0x1dfd068));
    func_0x01384978(*(undefined4 *)(_UNK_01dfd1e0 + 0x1dfd074));
    *pcVar3 = '\x01';
  }
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  if (*(int *)(**(int **)(_UNK_01dfd1e4 + 0x1dfd088) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uStack_24 = func_0x01dda730(uVar4,0);
  uStack_28 = 0xffffffff;
  uStack_2c = **(undefined4 **)(_UNK_01dfd1e8 + 0x1dfd0b4);
  uVar4 = func_0x0244f5f4(&uStack_2c,0);
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01dfd1ec + 0x1dfd0e0));
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244a45c(iVar1,uVar4,uVar6,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x024504c0(iVar1,0);
  iVar5 = *(int *)(param_1 + 0x14);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x022a00c0(iVar5,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x01e0f4bc(iVar5,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_38,iVar5,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x024503d4(iVar2,uStack_38,uStack_34,uStack_30,0);
  func_0x01dda7a0(iVar1,0x40000000,uVar4,0);
  return;
}



// ===== FAT.MBBoardEffect.<>c__DisplayClass33_0$$<ShowTokenMultiEffect>b__2 RVA 0x1ded1f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfd1f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  undefined4 auStack_1c [3];
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0229f06c(0x5f3e,0);
  if (iVar1 == 0) {
    iVar3 = *(int *)(iVar3 + 0x28);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01e0f4b0 + 0x1e0f3f8);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e0f4b4 + 0x1e0f40c),0);
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x5f3f,0);
    if (iVar1 == 0) {
      uVar6 = *(undefined4 *)(iVar3 + 0x18);
      if (*(int *)(**(int **)(_UNK_01e0f4b8 + 0x1e0f464) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0244fb8c(uVar6,0,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(iVar3 + 0x18);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x30);
        pcVar4 = (char *)(_UNK_01e0f2d4 + 0x1e0f128);
        if (*pcVar4 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e0f2d8 + 0x1e0f13c));
          func_0x01384978(*(undefined4 *)(_UNK_01e0f2dc + 0x1e0f148));
          func_0x01384978(*(undefined4 *)(_UNK_01e0f2e0 + 0x1e0f154));
          *pcVar4 = '\x01';
        }
        auStack_1c[0] = 0;
        iVar5 = func_0x0229f06c(0x1674,0);
        if (iVar5 == 0) {
          func_0x01e0f358(iVar3);
          if ((iVar1 != 0) &&
             (iVar1 = func_0x02feb690(iVar1,auStack_1c,0,
                                      **(undefined4 **)(_UNK_01e0f2e4 + 0x1e0f1d0)), iVar1 != 0)) {
            iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e0f2e8 + 0x1e0f1ec));
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 0x78);
            if (iVar1 != 0) {
              uVar6 = 0;
              iVar5 = func_0x021419d0(iVar1,0);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              iVar5 = func_0x0215e684(iVar5,0);
              if (iVar5 != 0) {
                iVar5 = func_0x02139cf4(iVar1,0);
                iVar1 = func_0x021419d0(iVar1,0);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                uVar6 = 0;
                uVar2 = func_0x0215e630(iVar1,0);
                if (iVar5 == 0) {
                  func_0x01384bf0();
                }
                iVar1 = func_0x020dfd3c(iVar5,uVar2,0);
                if (iVar1 != 0) {
                  uVar6 = func_0x02feb4f8(iVar1,0,**(undefined4 **)(_UNK_01e0f2ec + 0x1e0f2b0));
                }
              }
              func_0x01e0f510(iVar3,auStack_1c[0],uVar6);
            }
          }
        }
        else {
          iVar5 = func_0x0229f13c(0x1674,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x02174108(iVar5,iVar3,iVar1,0);
        }
        return;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x5f3f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5f3e);
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
  func_0x01485278(&uStack_30,iVar3,0);
  iVar5 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar3 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar3 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.MBBoardEffect.<_CoPlayTimeSkip>d__39$$System.IDisposable.Dispose RVA 0x1ded214 =====

void FUN_01dfd214(void)

{
  return;
}



// ===== FAT.MBBoardEffect.<_CoPlayTimeSkip>d__39$$MoveNext RVA 0x1ded218 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dfd218(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  pcVar2 = (char *)(_UNK_01dfd31c + 0x1dfd230);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dfd320 + 0x1dfd244));
    *pcVar2 = '\x01';
  }
  uVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 1) {
    iVar1 = *(int *)(param_1 + 0x1c);
    iVar5 = *(int *)(param_1 + 0x20) + 1;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar5 = 1;
    iVar1 = *(int *)(iVar3 + 0x28);
    if (*(int *)(iVar3 + 0x28) < *(int *)(iVar3 + 0x24)) {
      iVar1 = *(int *)(iVar3 + 0x24);
    }
    *(int *)(param_1 + 0x1c) = iVar1;
  }
  *(int *)(param_1 + 0x20) = iVar5;
  if (iVar5 < iVar1) {
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    uVar6 = *(undefined4 *)(param_1 + 0x18);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    FUN_01dfc6c0(iVar3,iVar5,uVar4,uVar6);
    uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01dfd324 + 0x1dfd2ec));
    func_0x0245031c(uVar6,0x3dcccccd,0);
    uVar4 = 1;
    *(undefined4 *)(param_1 + 0xc) = uVar6;
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return uVar4;
}



// ===== FAT.MBBoardEffect.<_CoPlayTimeSkip>d__39$$System.Collections.Generic.IEnumerator<System.Object>.get_Current RVA 0x1ded328 =====

undefined4 FUN_01dfd328(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.MBBoardEffect.<_CoPlayTimeSkip>d__39$$System.Collections.IEnumerator.Reset RVA 0x1ded330 =====

undefined4 FUN_01dfd330(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  func_0x01384988(*(undefined4 *)(iRam01dfd36c + 0x1dfd340));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam01dfd370 + 0x1dfd35c));
  func_0x01384aa0(uVar1,uVar2);
  iVar3 = func_0x01384928();
  return *(undefined4 *)(iVar3 + 0xc);
}



// ===== FAT.MBBoardEffect.<_CoPlayTimeSkip>d__39$$System.Collections.IEnumerator.get_Current RVA 0x1ded374 =====

undefined4 FUN_01dfd374(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


