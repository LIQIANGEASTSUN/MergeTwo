/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardOrderCommitButton_Default$$FAT.MBBoardOrder.ICommitButton.get_BtnCommit RVA 0x1f66b00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f76b00(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01f76ba8 + 0x1f76b14);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f76bac + 0x1f76b28));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa77c,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01f76bb0 + 0x1f76b80) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x020843f8(0);
    if (iVar1 == 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x1c);
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0x18);
    }
    return uVar5;
  }
  iVar1 = func_0x0229f13c(0xa77c,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar3 = (char *)(_UNK_021a942c + 0x21a934c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021a9430 + 0x21a9360),param_1,0);
    *pcVar3 = '\x01';
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
  uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021a9434 + 0x21a941c));
  return uVar5;
}



// ===== FAT.MBBoardOrderCommitButton_Default$$get_btnCommit RVA 0x1f66bb4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f76bb4(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
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
  
  pcVar6 = (char *)(_UNK_01f76c94 + 0x1f76bc8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f76c98 + 0x1f76bdc));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa77d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa77d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_021a942c + 0x21a934c);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021a9430 + 0x21a9360),param_1,0);
      *pcVar6 = '\x01';
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar5,0,0);
    func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021a9434 + 0x21a941c));
    return;
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01f76c9c + 0x1f76c38)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01f76c80;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01f76c9c + 0x1f76c38),0);
LAB_01f76c80:
                    /* WARNING: Could not recover jumptable at 0x01f76c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1,puVar2[1]);
  return;
}



// ===== FAT.MBBoardOrderCommitButton_Default$$FAT.MBBoardOrder.ICommitButton.OnDataChange RVA 0x1f66ca0 =====

void FUN_01f76ca0(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xa77e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa77e,0);
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
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== FAT.MBBoardOrderCommitButton_Default$$FAT.MBBoardOrder.ICommitButton.OnDataClear RVA 0x1f66cfc =====

void FUN_01f76cfc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa77f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa77f,0);
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
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// ===== FAT.MBBoardOrderCommitButton_Default$$FAT.MBBoardOrder.ICommitButton.Refresh RVA 0x1f66d54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f76d54(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
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
  
  pcVar6 = (char *)(_UNK_01f76e94 + 0x1f76d68);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f76e98 + 0x1f76d7c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa780,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa780,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar5,0,0);
    return;
  }
  iVar1 = FUN_01f76bb4(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  piVar7 = *(int **)(param_1 + 0x20);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar7;
  uVar3 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01f76e9c + 0x1f76e10)) {
        puVar2 = (undefined4 *)(iVar8 + *piVar4 * 8 + 0xc0);
        goto LAB_01f76e58;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01f76e9c + 0x1f76e10),0);
LAB_01f76e58:
  iVar8 = (*(code *)*puVar2)(piVar7,puVar2[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,iVar8 == 3,0);
  return;
}



// ===== FAT.MBBoardOrderCommitButton_Default$$FAT.MBBoardOrder.ICommitButton.RefreshOffset RVA 0x1f66ea0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f76ea0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
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
  undefined4 auStack_20 [2];
  
  pcVar6 = (char *)(_UNK_01f77034 + 0x1f76ebc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f77038 + 0x1f76ed0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa781,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01f76bb4(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0244fc34(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
      piVar2 = (int *)0x0;
    }
    else {
      piVar8 = *(int **)(_UNK_01f7703c + 0x1f76f60);
      if (*piVar2 != *piVar8) {
        func_0x01384bf0();
      }
      if (*piVar2 != *piVar8) {
        piVar2 = (int *)0x0;
      }
    }
    func_0x0244fd6c(auStack_20,piVar2,0);
    puVar3 = (undefined4 *)(param_1 + 0x10);
    if (param_2 != 0) {
      puVar3 = (undefined4 *)(param_1 + 0x14);
    }
    uVar7 = *puVar3;
    iVar1 = FUN_01f76bb4(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0244fc34(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
      piVar2 = (int *)0x0;
    }
    else {
      piVar8 = *(int **)(_UNK_01f77040 + 0x1f76fec);
      if (*piVar2 != *piVar8) {
        func_0x01384bf0();
      }
      if (*piVar2 != *piVar8) {
        piVar2 = (int *)0x0;
      }
    }
    func_0x0244fdbc(piVar2,auStack_20[0],uVar7,0);
    return;
  }
  iVar1 = func_0x0229f13c(0xa781,0);
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
  func_0x01485228(&uStack_38,param_2,0);
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



// ===== FAT.MBBoardOrderCommitButton_Default$$.ctor RVA 0x1f67044 =====

void FUN_01f77044(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0x42a80000;
  *(undefined4 *)(param_1 + 0x10) = 0x42080000;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}


