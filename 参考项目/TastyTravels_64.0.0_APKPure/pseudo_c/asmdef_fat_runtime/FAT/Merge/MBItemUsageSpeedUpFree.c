/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.MBItemUsageSpeedUpFree$$Initialize RVA 0x2294850 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a4850(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_022a4930 + 0x22a4864);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a4934 + 0x22a4878));
    func_0x01384978(*(undefined4 *)(_UNK_022a4938 + 0x22a4884));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb551);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb551);
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
  FUN_022a27e0(param_1);
  piVar3 = *(int **)(param_1 + 0x14);
  if (*(int *)(**(int **)(_UNK_022a493c + 0x22a48dc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar6 = func_0x028c1350(**(undefined4 **)(_UNK_022a4940 + 0x22a4900),0);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x022a492c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x2d0))(piVar3,uVar6,*(undefined4 *)(*piVar3 + 0x2d4));
  return;
}



// ===== FAT.Merge.MBItemUsageSpeedUpFree$$SetData RVA 0x2294944 =====

void FUN_022a4944(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb552);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb552);
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
  FUN_022a2924(param_1,param_2);
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  return;
}



// ===== FAT.Merge.MBItemUsageSpeedUpFree$$Refresh RVA 0x22949a8 =====

/* WARNING: Possible PIC construction at 0x022a4a84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x022a4a88) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a49a8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  int unaff_r5;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined4 auStack_28 [2];
  int aiStack_20 [4];
  
  iVar1 = func_0x0229f06c(0xb553);
  if (iVar1 == 0) {
    FUN_022a26a4(param_1);
    pcVar5 = (char *)(_UNK_022a4b1c + 0x22a4a18);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022a4b20 + 0x22a4a2c));
      func_0x01384978(*(undefined4 *)(_UNK_022a4b24 + 0x22a4a38));
      *pcVar5 = '\x01';
    }
    aiStack_20[3] = 0;
    aiStack_20[2] = 0;
    aiStack_20[1] = 0;
    iVar1 = func_0x0229f06c(0xb554);
    if (iVar1 == 0) {
      auStack_28[0] = 0;
      FUN_0216fe48(*(undefined4 *)(param_1 + 0x10),aiStack_20 + 2,aiStack_20 + 1,aiStack_20 + 3);
      if (*(int *)(param_1 + 0x1c) != aiStack_20[3]) {
        puVar2 = *(undefined4 **)(_UNK_022a4b28 + 0x22a4ac0);
        *(int *)(param_1 + 0x1c) = aiStack_20[3];
        aiStack_20[0] = aiStack_20[3];
        piVar6 = *(int **)(param_1 + 0x18);
        uVar7 = func_0x01384abc(*puVar2,aiStack_20);
        uVar7 = func_0x0244f6a0(**(undefined4 **)(_UNK_022a4b2c + 0x22a4ae8),uVar7,0);
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        (**(code **)(*piVar6 + 0x2d0))(piVar6,uVar7,*(undefined4 *)(*piVar6 + 0x2d4));
      }
      return;
    }
    iVar1 = func_0x0229f13c(0xb554);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x22a4a88;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_28;
  }
  else {
    iVar1 = func_0x0229f13c(0xb553);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
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
  iVar3 = *(int *)(iVar1 + 0x10);
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
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar3,uVar7,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
  return;
}



// ===== FAT.Merge.MBItemUsageSpeedUpFree$$_Refresh RVA 0x2294a00 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a4a00(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int aiStack_20 [4];
  
  pcVar4 = (char *)(_UNK_022a4b1c + 0x22a4a18);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a4b20 + 0x22a4a2c));
    func_0x01384978(*(undefined4 *)(_UNK_022a4b24 + 0x22a4a38));
    *pcVar4 = '\x01';
  }
  aiStack_20[3] = 0;
  aiStack_20[2] = 0;
  aiStack_20[1] = 0;
  iVar1 = func_0x0229f06c(0xb554);
  if (iVar1 == 0) {
    FUN_0216fe48(*(undefined4 *)(param_1 + 0x10),aiStack_20 + 2,aiStack_20 + 1,aiStack_20 + 3,0);
    if (*(int *)(param_1 + 0x1c) != aiStack_20[3]) {
      puVar2 = *(undefined4 **)(_UNK_022a4b28 + 0x22a4ac0);
      *(int *)(param_1 + 0x1c) = aiStack_20[3];
      aiStack_20[0] = aiStack_20[3];
      piVar5 = *(int **)(param_1 + 0x18);
      uVar3 = func_0x01384abc(*puVar2,aiStack_20);
      uVar3 = func_0x0244f6a0(**(undefined4 **)(_UNK_022a4b2c + 0x22a4ae8),uVar3,0);
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar5 + 0x2d0))(piVar5,uVar3,*(undefined4 *)(*piVar5 + 0x2d4));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb554);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.Merge.MBItemUsageSpeedUpFree$$UpdateContent RVA 0x2294b30 =====

/* WARNING: Possible PIC construction at 0x022a4a84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x022a4a88) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a4b30(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  char *pcVar5;
  int *piVar6;
  int unaff_r5;
  undefined4 uVar7;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined4 auStack_28 [2];
  int aiStack_20 [4];
  
  iVar2 = func_0x0229f06c(0xb555);
  if (iVar2 == 0) {
    FUN_022a29c8(param_1);
    pcVar5 = (char *)(_UNK_022a4b1c + 0x22a4a18);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022a4b20 + 0x22a4a2c));
      func_0x01384978(*(undefined4 *)(_UNK_022a4b24 + 0x22a4a38));
      *pcVar5 = '\x01';
    }
    aiStack_20[3] = 0;
    aiStack_20[2] = 0;
    aiStack_20[1] = 0;
    iVar2 = func_0x0229f06c(0xb554);
    if (iVar2 == 0) {
      auStack_28[0] = 0;
      FUN_0216fe48(*(undefined4 *)(param_1 + 0x10),aiStack_20 + 2,aiStack_20 + 1,aiStack_20 + 3);
      if (*(int *)(param_1 + 0x1c) != aiStack_20[3]) {
        puVar1 = *(undefined4 **)(_UNK_022a4b28 + 0x22a4ac0);
        *(int *)(param_1 + 0x1c) = aiStack_20[3];
        aiStack_20[0] = aiStack_20[3];
        piVar6 = *(int **)(param_1 + 0x18);
        uVar7 = func_0x01384abc(*puVar1,aiStack_20);
        uVar7 = func_0x0244f6a0(**(undefined4 **)(_UNK_022a4b2c + 0x22a4ae8),uVar7,0);
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        (**(code **)(*piVar6 + 0x2d0))(piVar6,uVar7,*(undefined4 *)(*piVar6 + 0x2d4));
      }
      return;
    }
    iVar2 = func_0x0229f13c(0xb554);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x22a4a88;
    unaff_r4 = param_1;
    unaff_r5 = iVar2;
    register0x00000054 = (BADSPACEBASE *)auStack_28;
  }
  else {
    iVar2 = func_0x0229f13c(0xb555);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
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
  iVar3 = *(int *)(iVar2 + 0x10);
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
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar3 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar3,uVar7,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
  return;
}



// ===== FAT.Merge.MBItemUsageSpeedUpFree$$OnBtnClick RVA 0x2294b88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a4b88(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  pcVar10 = (char *)(_UNK_022a4cfc + 0x22a4b9c);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a4d00 + 0x22a4bb0));
    func_0x01384978(*(undefined4 *)(_UNK_022a4d04 + 0x22a4bbc));
    func_0x01384978(*(undefined4 *)(_UNK_022a4d08 + 0x22a4bc8));
    func_0x01384978(*(undefined4 *)(_UNK_022a4d0c + 0x22a4bd4));
    *pcVar10 = '\x01';
  }
  iVar4 = func_0x0229f06c(0xb556);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0xb556);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    iStack_24 = iStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar9 = *(int *)(iVar4 + 8);
    uVar11 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 2;
    if (iVar4 == 0) {
      uVar8 = 1;
    }
    func_0x0245495c(iVar9,uVar11,&uStack_30,uVar8,0,0);
    return;
  }
  FUN_022a2578(param_1);
  uVar11 = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)(**(int **)(_UNK_022a4d10 + 0x22a4c2c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar4 = func_0x02085188(1,uVar11,0);
  if (iVar4 != 0) {
    return;
  }
  piVar12 = *(int **)(_UNK_022a4d14 + 0x22a4c68);
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  iVar4 = *piVar12;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x01384ab4();
    iVar4 = *piVar12;
  }
  iVar9 = *(int *)(*(int *)(iVar4 + 0x5c) + 4);
  if (iVar9 == 0) {
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar4 = *piVar12;
    }
    uVar8 = **(undefined4 **)(iVar4 + 0x5c);
    iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_022a4d18 + 0x22a4cb4));
    func_0x024500b4(iVar9,uVar8,**(undefined4 **)(_UNK_022a4d1c + 0x22a4cd4),0);
    *(int *)(*(int *)(*piVar12 + 0x5c) + 4) = iVar9;
  }
  pcVar10 = (char *)(_UNK_021715d8 + 0x2170f40);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021715dc + 0x2170f54),iVar9,0);
    func_0x01384978(*(undefined4 *)(_UNK_021715e0 + 0x2170f60));
    func_0x01384978(*(undefined4 *)(_UNK_021715e4 + 0x2170f6c));
    func_0x01384978(*(undefined4 *)(_UNK_021715e8 + 0x2170f78));
    func_0x01384978(*(undefined4 *)(_UNK_021715ec + 0x2170f84));
    func_0x01384978(*(undefined4 *)(_UNK_021715f0 + 0x2170f90));
    func_0x01384978(*(undefined4 *)(_UNK_021715f4 + 0x2170f9c));
    func_0x01384978(*(undefined4 *)(_UNK_021715f8 + 0x2170fa8));
    func_0x01384978(*(undefined4 *)(_UNK_021715fc + 0x2170fb4));
    func_0x01384978(*(undefined4 *)(_UNK_02171600 + 0x2170fc0));
    func_0x01384978(*(undefined4 *)(_UNK_02171604 + 0x2170fcc));
    *pcVar10 = '\x01';
  }
  iStack_24 = 0;
  iStack_28 = 0;
  uStack_2c = 0;
  iVar4 = func_0x0229f06c(0xb52c,0);
  if (iVar4 == 0) {
    iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_02171608 + 0x2171038));
    FUN_0229e9ac(iVar4,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar4 + 8) = uVar11;
    *(int *)(iVar4 + 0xc) = iVar9;
    iVar1 = FUN_0216fe48(uVar11,&iStack_24,&iStack_28,&uStack_2c);
    iVar9 = iStack_24;
    if (iVar1 != 0) {
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      uVar11 = func_0x02450044(iVar9,0);
      if (*(int *)(**(int **)(_UNK_0217160c + 0x21710a4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar11 = FUN_0212882c(uVar11,0);
      *(undefined4 *)(iVar4 + 0x10) = uVar11;
      piVar12 = (int *)FUN_021566f4();
      if (piVar12 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar9 = *piVar12;
      piVar13 = *(int **)(_UNK_02171610 + 0x21710e8);
      uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar13) {
            puVar2 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0x208);
            goto LAB_02171130;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar12,*piVar13,0x29);
LAB_02171130:
      iVar9 = (*(code *)*puVar2)(piVar12,puVar2[1]);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      *(undefined1 *)(iVar4 + 0x14) = 0;
      if (iStack_28 == 1) {
        piVar12 = *(int **)(_UNK_02171618 + 0x21711d0);
        iVar1 = *piVar12;
        iVar6 = *(int *)(iVar1 + 0x74);
        *(undefined1 *)(iVar4 + 0x14) = 1;
        if (iVar6 == 0) {
          func_0x01384ab4();
          iVar1 = *piVar12;
        }
        uVar11 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x50);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        *(int *)(iVar9 + 0xc) = *(int *)(iVar9 + 0xc) + 1;
      }
      else if (iStack_28 == 2) {
        piVar12 = *(int **)(_UNK_0217161c + 0x217121c);
        iVar1 = *piVar12;
        iVar6 = *(int *)(iVar1 + 0x74);
        *(undefined1 *)(iVar4 + 0x14) = 1;
        if (iVar6 == 0) {
          func_0x01384ab4();
          iVar1 = *piVar12;
        }
        uVar11 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x50);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
      }
      else if (iStack_28 == 3) {
        piVar12 = *(int **)(_UNK_02171614 + 0x2171184);
        iVar1 = *piVar12;
        iVar6 = *(int *)(iVar1 + 0x74);
        *(undefined1 *)(iVar4 + 0x14) = 1;
        if (iVar6 == 0) {
          func_0x01384ab4();
          iVar1 = *piVar12;
        }
        uVar11 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x54);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        *(int *)(iVar9 + 0x28) = *(int *)(iVar9 + 0x28) + 1;
      }
      else {
        piVar12 = (int *)FUN_021566f4();
        uVar11 = uStack_2c;
        if (piVar12 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar12;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == *piVar13) {
              puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 400);
              goto LAB_021712c0;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar12,*piVar13,0x1a);
LAB_021712c0:
        iVar1 = (*(code *)*puVar2)(piVar12,uVar11,puVar2[1]);
        if (iVar1 == 0) {
          piVar12 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02171620 + 0x21713d8),4);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          uStack_30 = *(undefined4 *)(iVar9 + 0x10);
          puVar2 = *(undefined4 **)(_UNK_02171624 + 0x21713fc);
          iVar9 = func_0x01384abc(*puVar2,&uStack_30);
          if (piVar12 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar9 != 0) &&
             (iVar1 = func_0x01384ab8(iVar9,*(undefined4 *)(*piVar12 + 0x20)), iVar1 == 0)) {
            uVar11 = func_0x01384c10();
            func_0x01384aa0(uVar11,0);
          }
          if (piVar12[3] == 0) {
            func_0x01384bf4();
          }
          piVar12[4] = iVar9;
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar9 = *(int *)(iVar4 + 8);
          if ((iVar9 != 0) &&
             (iVar1 = func_0x01384ab8(iVar9,*(undefined4 *)(*piVar12 + 0x20)), iVar1 == 0)) {
            uVar11 = func_0x01384c10();
            func_0x01384aa0(uVar11,0);
          }
          if ((uint)piVar12[3] < 2) {
            func_0x01384bf4();
          }
          piVar12[5] = iVar9;
          uStack_34 = *(undefined4 *)(iVar4 + 0x10);
          iVar4 = func_0x01384abc(**(undefined4 **)(_UNK_02171628 + 0x21714b8),&uStack_34);
          if ((iVar4 != 0) &&
             (iVar9 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar12 + 0x20)), iVar9 == 0)) {
            uVar11 = func_0x01384c10();
            func_0x01384aa0(uVar11,0);
          }
          if ((uint)piVar12[3] < 3) {
            func_0x01384bf4();
          }
          piVar12[6] = iVar4;
          uStack_38 = uStack_2c;
          iVar4 = func_0x01384abc(*puVar2,&uStack_38);
          if ((iVar4 != 0) &&
             (iVar9 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar12 + 0x20)), iVar9 == 0)) {
            uVar11 = func_0x01384c10();
            func_0x01384aa0(uVar11,0);
          }
          if ((uint)piVar12[3] < 4) {
            func_0x01384bf4();
          }
          piVar12[7] = iVar4;
          if (*(int *)(**(int **)(_UNK_0217162c + 0x217156c) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x028c23bc(**(undefined4 **)(_UNK_02171630 + 0x2171590),piVar12,0);
          return;
        }
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        piVar12 = *(int **)(_UNK_02171634 + 0x21712f4);
        iVar1 = *(int *)(iVar4 + 0x10);
        iVar9 = *piVar12;
        if (*(int *)(iVar9 + 0x74) == 0) {
          func_0x01384ab4();
          iVar9 = *piVar12;
        }
        if (iVar1 == 6) {
          uVar11 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x54);
        }
        else {
          uVar11 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x50);
        }
      }
      if (*(char *)(iVar4 + 0x14) == '\0') {
        piVar12 = (int *)FUN_021566f4();
        uVar8 = uStack_2c;
        uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02171638 + 0x217134c));
        func_0x024500b4(uVar3,iVar4,**(undefined4 **)(_UNK_0217163c + 0x217136c),0);
        iVar4 = *(int *)(iVar4 + 0x10);
        if (piVar12 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar9 = *piVar12;
        uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
          do {
            if (piVar7[-1] == *piVar13) {
              puVar2 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0x198);
              goto LAB_021715a4;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar12,*piVar13,0x1b);
LAB_021715a4:
        iStack_3c = puVar2[1];
        uStack_40 = (uint)(iVar4 != 6);
        (*(code *)*puVar2)(piVar12,uVar8,uVar11,uVar3);
      }
      else {
        FUN_0229e9b4(iVar4,0);
      }
    }
  }
  else {
    iVar4 = func_0x0229f13c(0xb52c,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar4,uVar11,iVar9,0);
  }
  return;
}



// ===== FAT.Merge.MBItemUsageSpeedUpFree$$.ctor RVA 0x2294d20 =====

void FUN_022a4d20(undefined4 param_1)

{
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.Merge.MBItemUsageSpeedUpFree$$<>iFixBaseProxy_Initialize RVA 0x2294d28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_022a27e0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_022a2910 + 0x22a27f8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a2914 + 0x22a280c));
    func_0x01384978(*(undefined4 *)(_UNK_022a2918 + 0x22a2818));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x775f);
  if (iVar1 == 0) {
    iVar1 = func_0x0244fc34(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02f68304(iVar1,&iStack_14,**(undefined4 **)(_UNK_022a291c + 0x22a2890));
    iVar1 = iStack_14;
    if (iVar2 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xb4);
      uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_022a2920 + 0x22a28bc));
      if (param_1 == (int *)0x0) {
        func_0x01384bf0();
      }
      func_0x0244ffa0(uVar3,param_1,*(undefined4 *)(*param_1 + 0xe4),0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffb0(iVar1,uVar3,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x775f);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.Merge.MBItemUsageSpeedUpFree$$<>iFixBaseProxy_SetData RVA 0x2294d2c =====

void thunk_FUN_022a2924(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xa593);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa593);
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
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ===== FAT.Merge.MBItemUsageSpeedUpFree$$<>iFixBaseProxy_Refresh RVA 0x2294d30 =====

void thunk_FUN_022a26a4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xa504);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xa504);
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



// ===== FAT.Merge.MBItemUsageSpeedUpFree$$<>iFixBaseProxy_UpdateContent RVA 0x2294d34 =====

void thunk_FUN_022a29c8(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xa594);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xa594);
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



// ===== FAT.Merge.MBItemUsageSpeedUpFree$$<>iFixBaseProxy_OnBtnClick RVA 0x2294d38 =====

void thunk_FUN_022a2578(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x7760);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x7760);
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



// ===== FAT.Merge.MBItemUsageSpeedUpFree.<>c$$.cctor RVA 0x2294d3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a4d3c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_022a4d94 + 0x22a4d4c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a4d98 + 0x22a4d60));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_022a4d9c + 0x22a4d74);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.Merge.MBItemUsageSpeedUpFree.<>c$$.ctor RVA 0x2294da0 =====

void FUN_022a4da0(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.MBItemUsageSpeedUpFree.<>c$$<OnBtnClick>b__7_0 RVA 0x2294da8 =====

void FUN_022a4da8(void)

{
  return;
}


