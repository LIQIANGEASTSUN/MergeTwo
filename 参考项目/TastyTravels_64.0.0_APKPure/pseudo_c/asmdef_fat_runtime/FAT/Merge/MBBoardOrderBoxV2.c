/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.MBBoardOrderBoxV2$$Init RVA 0x2295b28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a5b28(int param_1)

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
  
  pcVar4 = (char *)(_UNK_022a5c44 + 0x22a5b40);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a5c48 + 0x22a5b54));
    func_0x01384978(*(undefined4 *)(_UNK_022a5c4c + 0x22a5b60));
    func_0x01384978(*(undefined4 *)(_UNK_022a5c50 + 0x22a5b6c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa7f9);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa7f9);
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
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x0244fc34(iVar1,0);
  uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_022a5c54 + 0x22a5be4));
  func_0x0244ffa0(uVar2,param_1,**(undefined4 **)(_UNK_022a5c58 + 0x22a5c00),0);
  if (*(int *)(**(int **)(_UNK_022a5c5c + 0x22a5c14) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uStack_20 = 0;
  func_0x028bf89c(uVar5,0,uVar2,1);
  return;
}



// ===== FAT.Merge.MBBoardOrderBoxV2$$Setup RVA 0x2295c60 =====

void FUN_022a5c60(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xa7fd);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xa7fd);
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



// ===== FAT.Merge.MBBoardOrderBoxV2$$Cleanup RVA 0x2295ca4 =====

void FUN_022a5ca4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xa84f);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xa84f);
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



// ===== FAT.Merge.MBBoardOrderBoxV2$$TryShowBox RVA 0x2295ce8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_022a5ce8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_022a5dfc + 0x22a5d04);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a5e00 + 0x22a5d18));
    *pcVar4 = '\x01';
  }
  iStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  iVar1 = func_0x0229f06c(0xa80c);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_022a5e04 + 0x22a5d80) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar2 = 0;
    iVar3 = func_0x01dec488(param_2,&uStack_20,&uStack_24,&iStack_1c,0);
    iVar1 = iStack_1c;
    if (iVar3 != 0) {
      iVar3 = *(int *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x20) = param_2;
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      uVar2 = *(undefined4 *)(iVar1 + 0x14);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0267cc24(iVar3,uVar2,0);
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa80c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.Merge.MBBoardOrderBoxV2$$ShowReward RVA 0x2295e08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a5e08(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
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
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_022a5f6c + 0x22a5e24);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a5f70 + 0x22a5e38));
    func_0x01384978(*(undefined4 *)(_UNK_022a5f74 + 0x22a5e44));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa7d3);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa7d3);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar6,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x40);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x01ce5a10(iVar1,uVar2,uVar6,0);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0267c9b0(iVar1,uVar6,0);
  piVar5 = *(int **)(param_1 + 0x1c);
  uStack_1c = *(undefined4 *)(param_2 + 0x10);
  uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_022a5f78 + 0x22a5f18),&uStack_1c);
  uVar6 = func_0x0244f6a0(**(undefined4 **)(_UNK_022a5f7c + 0x22a5f38),uVar6,0);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  (**(code **)(*piVar5 + 0x2d0))(piVar5,uVar6,*(undefined4 *)(*piVar5 + 0x2d4));
  return;
}



// ===== FAT.Merge.MBBoardOrderBoxV2$$PlayOpenBoxEffect RVA 0x2295f80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a5f80(int param_1)

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
  
  pcVar4 = (char *)(_UNK_022a6018 + 0x22a5f94);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a601c + 0x22a5fa8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa7d4);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa7d4);
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
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_0514e2c4)(iVar1,**(undefined4 **)(_UNK_022a6020 + 0x22a600c),0);
  return;
}



// ===== FAT.Merge.MBBoardOrderBoxV2$$_OnBtnPreview RVA 0x2296024 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a6024(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_022a625c + 0x22a603c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a6260 + 0x22a6050));
    func_0x01384978(*(undefined4 *)(_UNK_022a6264 + 0x22a605c));
    func_0x01384978(*(undefined4 *)(_UNK_022a6268 + 0x22a6068));
    func_0x01384978(*(undefined4 *)(_UNK_022a626c + 0x22a6074));
    func_0x01384978(*(undefined4 *)(_UNK_022a6270 + 0x22a6080));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa7fa);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa7fa);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = 0;
    uStack_28 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8));
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_20 = (undefined4)uStack_38;
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_022a6274 + 0x22a60d4));
  piVar7 = *(int **)(_UNK_022a6278 + 0x22a60e8);
  iVar4 = *piVar7;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x01384ab4();
    iVar4 = *piVar7;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x128);
  piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_022a627c + 0x22a610c),2);
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0244fc34(iVar4,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_38,iVar4,0);
  uStack_20 = uStack_30;
  uStack_28 = uStack_38;
  iVar4 = func_0x01384abc(**(undefined4 **)(_UNK_022a6280 + 0x22a616c),&uStack_38);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  if ((iVar4 != 0) && (iVar2 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar7 + 0x20)), iVar2 == 0))
  {
    uVar3 = func_0x01384c10();
    func_0x01384aa0(uVar3,0);
  }
  if (piVar7[3] == 0) {
    func_0x01384bf4();
  }
  piVar7[4] = iVar4;
  uStack_3c = *(undefined4 *)(param_1 + 0x20);
  iVar4 = func_0x01384abc(**(undefined4 **)(_UNK_022a6284 + 0x22a61e4),&uStack_3c);
  if ((iVar4 != 0) && (iVar2 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar7 + 0x20)), iVar2 == 0))
  {
    uVar3 = func_0x01384c10();
    func_0x01384aa0(uVar3,0);
  }
  if ((uint)piVar7[3] < 2) {
    func_0x01384bf4();
  }
  piVar7[5] = iVar4;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01ee858c(iVar1,uVar6,piVar7,0);
  return;
}



// ===== FAT.Merge.MBBoardOrderBoxV2$$.ctor RVA 0x2296288 =====

void FUN_022a6288(undefined4 param_1)

{
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}


