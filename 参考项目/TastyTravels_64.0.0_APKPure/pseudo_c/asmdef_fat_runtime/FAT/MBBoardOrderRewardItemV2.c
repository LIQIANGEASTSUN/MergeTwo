/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardOrderRewardItemV2$$SetData RVA 0x1f68d44 =====

void FUN_01f78d44(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0xa78c,0);
  if (iVar1 == 0) {
    func_0x01f78dc4(param_1,param_2,param_3,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xa78c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardOrderRewardItemV2$$SetData RVA 0x1f68dc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f78dc4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_01f78fb4 + 0x1f78de4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f78fb8 + 0x1f78dfc));
    func_0x01384978(*(undefined4 *)(_UNK_01f78fbc + 0x1f78e08));
    func_0x01384978(*(undefined4 *)(_UNK_01f78fc0 + 0x1f78e14));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa78d,0);
  if (iVar1 == 0) {
    piVar4 = *(int **)(_UNK_01f78fc4 + 0x1f78e7c);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar3,0,0);
    if (iVar1 != 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x40);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x01ce5880(iVar1,param_2,param_3,0);
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0205a620(iVar1,uVar3,param_2,param_3,0);
    }
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar3,0,0);
    if (iVar1 != 0) {
      piVar4 = *(int **)(param_1 + 0x14);
      uStack_28 = param_3;
      uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_01f78fc8 + 0x1f78f58),&uStack_28);
      uVar3 = func_0x0244f6a0(**(undefined4 **)(_UNK_01f78fcc + 0x1f78f74),uVar3,0);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar4 + 0x2d0))(piVar4,uVar3,*(undefined4 *)(*piVar4 + 0x2d4));
    }
    func_0x01f78fd0(param_1,param_4);
  }
  else {
    iVar1 = func_0x0229f13c(0xa78d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02293e9c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.MBBoardOrderRewardItemV2$$_ApplyLayout RVA 0x1f68fd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f78fd0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  
  pcVar6 = (char *)(_UNK_01f7917c + 0x1f78fec);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f79180 + 0x1f79000));
    func_0x01384978(*(undefined4 *)(_UNK_01f79184 + 0x1f7900c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa790,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa790,0);
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
    func_0x01485238(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  piVar2 = (int *)func_0x0244fc34(param_1,0);
  piVar3 = (int *)0x0;
  if ((piVar2 != (int *)0x0) && (piVar3 = piVar2, *piVar2 != **(int **)(_UNK_01f79188 + 0x1f79084)))
  {
    piVar3 = (int *)0x0;
  }
  piVar2 = *(int **)(_UNK_01f7918c + 0x1f790a0);
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(piVar3,0,0);
  if (iVar1 != 0) {
    iVar1 = 0x1c;
    if (param_2 == 0) {
      iVar1 = 0x18;
    }
    uVar7 = *(undefined4 *)(param_1 + iVar1);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    func_0x02451d34(piVar3,0,uVar7,0);
  }
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar7,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,param_2 == 0,0);
  return;
}



// ===== FAT.MBBoardOrderRewardItemV2$$SetData RVA 0x1f69190 =====

void FUN_01f79190(undefined4 param_1,int param_2)

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
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xa791,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa791,0);
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
  iVar1 = func_0x0229f06c(0xa792,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      FUN_01f78dc4(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa792,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02293f90(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MBBoardOrderRewardItemV2$$SetData RVA 0x1f691f8 =====

void FUN_01f791f8(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0xa792,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      FUN_01f78dc4(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),param_3);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa792,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02293f90(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardOrderRewardItemV2$$Clear RVA 0x1f69280 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f79280(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01f7936c + 0x1f79294);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f79370 + 0x1f792a8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa793,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa793,0);
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
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_01f79374 + 0x1f79300) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar5,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
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



// ===== FAT.MBBoardOrderRewardItemV2$$.ctor RVA 0x1f69378 =====

void FUN_01f79378(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0x42a40000;
  *(undefined4 *)(param_1 + 0x18) = 0x43040000;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}


