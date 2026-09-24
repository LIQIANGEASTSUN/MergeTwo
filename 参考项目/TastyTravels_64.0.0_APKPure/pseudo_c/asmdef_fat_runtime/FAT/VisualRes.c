/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.VisualRes$$.ctor RVA 0x2b544a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b644a0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02b6452c + 0x2b644b8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b64530 + 0x2b644cc));
    func_0x01384978(*(undefined4 *)(_UNK_02b64534 + 0x2b644d8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b64538 + 0x2b644ec));
  func_0x04874ed4(iVar1,0);
  *param_1 = iVar1;
  puVar2 = *(undefined4 **)(_UNK_02b6453c + 0x2b6450c);
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_2;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x04874ed4(iVar1,0);
  param_1[1] = iVar1;
  return;
}



// ===== FAT.VisualRes$$Setup RVA 0x2b54540 =====

/* WARNING: Possible PIC construction at 0x02b61be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028c2820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028c2824) */
/* WARNING: Removing unreachable block (ram,0x028c31dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b64540(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_r4;
  int iVar7;
  int unaff_r5;
  int iVar8;
  int iVar9;
  int unaff_r6;
  char *pcVar10;
  undefined4 unaff_r7;
  int unaff_r8;
  int *piVar11;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int iVar12;
  undefined4 unaff_lr;
  int *piVar13;
  int *piVar14;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  int aiStack_1c [2];
  
  pcVar10 = (char *)(_UNK_02b64618 + 0x2b64558);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b6461c + 0x2b6456c));
    func_0x01384978(*(undefined4 *)(_UNK_02b64620 + 0x2b64578));
    *pcVar10 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x1776,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x1776,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    pcVar10 = (char *)(_UNK_021d6f90 + 0x21d6e50);
    if (*pcVar10 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021d6f94 + 0x21d6e64),param_1,param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_021d6f98 + 0x21d6e70));
      *pcVar10 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&iStack_50,0);
    iStack_38 = iStack_50;
    uStack_34 = iStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    iStack_50 = *param_1;
    iStack_4c = param_1[1];
    uVar1 = func_0x01384abc(**(undefined4 **)(_UNK_021d6f9c + 0x21d6ec0),&iStack_50);
    func_0x01485288(&iStack_38,uVar1,0);
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar4 + 0x10),0);
    }
    func_0x014852b8(&iStack_38,0,0);
    func_0x01485238(&iStack_38,param_2,0);
    iVar8 = *(int *)(iVar4 + 8);
    uVar1 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar4 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar8,uVar1,&iStack_38,uVar5,1,0);
    func_0x02f5ecfc(&iStack_50,&iStack_38,0,**(undefined4 **)(_UNK_021d6fa0 + 0x21d6f74));
    *param_1 = iStack_50;
    param_1[1] = iStack_4c;
    return iStack_50;
  }
  iVar4 = param_1[1];
  if (iVar4 == 0) {
    if (*(int *)(**(int **)(_UNK_02b64624 + 0x2b645f0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar8 = **(int **)(_UNK_02b64628 + 0x2b64610);
  }
  else {
    iVar8 = *param_1;
    pcVar10 = (char *)(_UNK_02b61bf0 + 0x2b61a70);
    if (*pcVar10 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b61bf4 + 0x2b61a84));
      func_0x01384978(*(undefined4 *)(_UNK_02b61bf8 + 0x2b61a90));
      func_0x01384978(*(undefined4 *)(_UNK_02b61bfc + 0x2b61a9c));
      func_0x01384978(*(undefined4 *)(_UNK_02b61c00 + 0x2b61aa8));
      *pcVar10 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x305,0);
    if (iVar3 != 0) {
      iVar3 = func_0x0229f13c(0x305,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      iVar4 = func_0x021846e8(iVar3,iVar4,param_2,iVar8);
      return iVar4;
    }
    iVar3 = func_0x01822f2c(param_2,0);
    *(int *)(iVar4 + 8) = iVar3;
    if (iVar3 != 0) {
      uVar1 = func_0x017d2c28(*(undefined4 *)(iVar3 + 0x1c),0);
      *(undefined4 *)(iVar4 + 0xc) = uVar1;
      if (iVar8 == 0) {
        return 1;
      }
      iVar3 = *(int *)(iVar4 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar1 = func_0x01875b98(*(undefined4 *)(iVar3 + 0x24),0);
      *(undefined4 *)(iVar4 + 0x10) = uVar1;
      uVar1 = FUN_02b61610(iVar4);
      FUN_02b61c14(iVar8,uVar1);
      return 1;
    }
    if (param_2 < 1) {
      return 0;
    }
    aiStack_1c[0] = param_2;
    uVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02b61c04 + 0x2b61b88),aiStack_1c);
    unaff_r7 = 0;
    iVar8 = func_0x0467272c(**(undefined4 **)(_UNK_02b61c08 + 0x2b61ba8),
                            **(undefined4 **)(_UNK_02b61c0c + 0x2b61bb4),uVar1,0);
    if (*(int *)(**(int **)(_UNK_02b61c10 + 0x2b61bc8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    unaff_lr = 0x2b61be4;
    unaff_r4 = iVar8;
    unaff_r5 = iVar4;
    unaff_r6 = param_2;
    register0x00000054 = (BADSPACEBASE *)&uStack_20;
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r5;
  piVar14 = (int *)((int)register0x00000054 + -0x10);
  *piVar14 = unaff_r4;
  pcVar10 = (char *)(_UNK_028c29e4 + 0x28c2958);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c29e8 + 0x28c296c),0);
    *pcVar10 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x46,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x46,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar14;
    uVar1 = *(undefined4 *)((int)register0x00000054 + -0xc);
    *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -4);
    *(int *)((int)register0x00000054 + -8) = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
    *piVar14 = unaff_r6;
    *(undefined4 *)((int)register0x00000054 + -0x14) = uVar1;
    *(int *)((int)register0x00000054 + -0x18) = iVar3;
    *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)register0x00000054 + -0x24) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
    func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
    iVar3 = *(int *)(iVar4 + 0x10);
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
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar8,0);
    iVar8 = *(int *)(iVar4 + 8);
    uVar1 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar4 == 0) {
      uVar5 = 1;
    }
    *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
    iVar4 = func_0x0245495c(iVar8,uVar1,(undefined1 *)((int)register0x00000054 + -0x30),uVar5);
    return iVar4;
  }
  if (*(int *)(**(int **)(_UNK_028c29ec + 0x28c29c4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar4 = *piVar14;
  uVar1 = *(undefined4 *)((int)register0x00000054 + -0xc);
  *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -4);
  *(undefined4 *)((int)register0x00000054 + -8) = *(undefined4 *)((int)register0x00000054 + -8);
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *piVar14 = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar1;
  piVar13 = (int *)((int)register0x00000054 + -0x20);
  *piVar13 = iVar4;
  iVar4 = 4;
  pcVar10 = (char *)(_UNK_028c2868 + 0x28c26ec);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c286c + 0x28c2700));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x14,0);
  iVar3 = iVar8;
  if (iVar2 != 0) {
    iVar8 = func_0x0229f13c(0x14,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *piVar13;
    iVar7 = *(int *)((int)register0x00000054 + -0x1c);
    iVar9 = *(int *)((int)register0x00000054 + -0x18);
    iVar2 = *(int *)((int)register0x00000054 + -0x14);
    iVar4 = *piVar14;
    piVar11 = *(int **)((int)register0x00000054 + -0xc);
    iVar12 = *(int *)((int)register0x00000054 + -4);
    goto LAB_02174038;
  }
  piVar11 = *(int **)(_UNK_028c2870 + 0x28c275c);
  iVar2 = *piVar11;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar11;
  }
  if (**(int **)(iVar2 + 0x5c) < 1) {
LAB_028c2848:
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar8 = *piVar13;
    iVar7 = *(int *)((int)register0x00000054 + -0x1c);
    iVar6 = *(int *)((int)register0x00000054 + -0x18);
    iVar2 = *(int *)((int)register0x00000054 + -0x14);
    iVar4 = *piVar14;
    piVar11 = *(int **)((int)register0x00000054 + -0xc);
    iVar9 = *(int *)((int)register0x00000054 + -4);
  }
  else {
    if (iVar8 == 0) {
      func_0x01384bf0();
      iVar2 = *piVar11;
    }
    iVar6 = *(int *)(iVar8 + 8);
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar11;
    }
    iVar7 = **(int **)(iVar2 + 0x5c);
    if (iVar6 <= iVar7) goto LAB_028c2848;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar7 = **(int **)(*piVar11 + 0x5c);
    }
    iVar3 = *(int *)(iVar8 + 8);
    if (iVar3 < 1) {
      return iVar3;
    }
    iVar6 = 0;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
    iVar2 = func_0x04673af4(iVar8,0,iVar7,0);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar9 = 0x28c2824;
    iVar3 = iVar2;
    register0x00000054 = (BADSPACEBASE *)piVar13;
  }
  *(int *)((int)register0x00000054 + -4) = iVar9;
  *(int *)((int)register0x00000054 + -8) = iVar6;
  *(int *)((int)register0x00000054 + -0xc) = iVar7;
  *(int *)((int)register0x00000054 + -0x10) = iVar8;
  pcVar10 = (char *)(_UNK_028c3238 + 0x28c3124);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c323c + 0x28c3138));
    *pcVar10 = '\x01';
  }
  iVar8 = func_0x0229f06c(0x15,0);
  if (iVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x028c319c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar4 = (*(code *)(&UNK_028c31a0 + _UNK_028c31ac))();
    return iVar4;
  }
  iVar8 = func_0x0229f13c(0x15,0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)((int)register0x00000054 + -0x10);
  iVar7 = *(int *)((int)register0x00000054 + -0xc);
  iVar9 = *(int *)((int)register0x00000054 + -8);
  iVar12 = *(int *)((int)register0x00000054 + -4);
LAB_02174038:
  *(int *)((int)register0x00000054 + -4) = iVar12;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(int **)((int)register0x00000054 + -0xc) = piVar11;
  *(int *)((int)register0x00000054 + -0x10) = iVar4;
  *(int *)((int)register0x00000054 + -0x14) = iVar2;
  *(int *)((int)register0x00000054 + -0x18) = iVar9;
  *(int *)((int)register0x00000054 + -0x1c) = iVar7;
  *(int *)((int)register0x00000054 + -0x20) = iVar6;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,iVar3,0);
  iVar4 = *(int *)(iVar8 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar4,0);
  }
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),4,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar3,0);
  iVar3 = *(int *)(iVar8 + 8);
  uVar1 = *(undefined4 *)(iVar8 + 0xc);
  iVar4 = *(int *)(iVar8 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar4 == 0) {
    uVar5 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  iVar4 = func_0x0245495c(iVar3,uVar1,(undefined1 *)((int)register0x00000054 + -0x38),uVar5);
  return iVar4;
}



// ===== FAT.VisualRes$$Refresh RVA 0x2b5462c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b6462c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  int iVar5;
  char *pcVar6;
  int iVar7;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = func_0x0229f06c(0x2b1a,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x2b1a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_021e0950 + 0x21e0810);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021e0954 + 0x21e0824),param_1,param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_021e0958 + 0x21e0830));
      *pcVar6 = '\x01';
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
    uStack_50 = *param_1;
    uStack_4c = param_1[1];
    uVar1 = func_0x01384abc(**(undefined4 **)(_UNK_021e095c + 0x21e0880),&uStack_50);
    func_0x01485288(&uStack_38,uVar1,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x014852b8(&uStack_38,0,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar1 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar7,uVar1,&uStack_38,uVar3,1,0);
    func_0x02f5ecfc(&uStack_50,&uStack_38,0,**(undefined4 **)(_UNK_021e0960 + 0x21e0934));
    *param_1 = uStack_50;
    param_1[1] = uStack_4c;
    return;
  }
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_02b61f64 + 0x2b61e48);
  uStack_18 = unaff_r4;
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b61f68 + 0x2b61e5c));
    func_0x01384978(*(undefined4 *)(_UNK_02b61f6c + 0x2b61e68));
    func_0x01384978(*(undefined4 *)(_UNK_02b61f70 + 0x2b61e74));
    *pcVar6 = '\x01';
  }
  iVar7 = func_0x0229f06c(0xb47,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0xb47,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = uStack_18;
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
    if (*(int *)(iVar7 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar7 + 8);
    uVar1 = *(undefined4 *)(iVar7 + 0xc);
    iVar2 = *(int *)(iVar7 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar1,&uStack_38,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02b61f74 + 0x2b61ed4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar7 = func_0x0244fb8c(param_2,0,0);
  if (iVar7 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(param_2 + 0x10);
    iVar5 = 0;
    puVar4 = *(undefined4 **)(_UNK_02b61f78 + 0x2b61f28);
    while( true ) {
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar7 + 0xc) <= iVar5) break;
      func_0x0342b1b0(&uStack_24,iVar7,iVar5,*puVar4);
      FUN_02b61f7c(iVar2,uStack_24,uStack_20,uStack_1c);
      iVar5 = iVar5 + 1;
    }
  }
  return;
}



// ===== FAT.VisualRes$$ResEnumerate RVA 0x2b546a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b646a0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
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
  
  iVar2 = func_0x0229f06c(0x1af4,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x1af4,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_021e0bf0 + 0x21e0aa0);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021e0bf4 + 0x21e0ab4),param_1,0);
      func_0x01384978(*(undefined4 *)(_UNK_021e0bf8 + 0x21e0ac0));
      func_0x01384978(*(undefined4 *)(_UNK_021e0bfc + 0x21e0acc));
      *pcVar5 = '\x01';
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
    uStack_50 = *param_1;
    uStack_4c = param_1[1];
    uVar1 = func_0x01384abc(**(undefined4 **)(_UNK_021e0c00 + 0x21e0b1c),&uStack_50);
    func_0x01485288(&uStack_38,uVar1,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x014852b8(&uStack_38,0,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar1 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar1,&uStack_38,uVar3,1,0);
    func_0x02f5ecfc(&uStack_50,&uStack_38,0,**(undefined4 **)(_UNK_021e0c04 + 0x21e0bbc));
    *param_1 = uStack_50;
    param_1[1] = uStack_4c;
    iVar2 = func_0x02f5db90(&uStack_38,1,**(undefined4 **)(_UNK_021e0c08 + 0x21e0be0));
    return iVar2;
  }
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_02b61df8 + 0x2b61d5c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b61dfc + 0x2b61d70));
    *pcVar5 = '\x01';
  }
  iVar6 = func_0x0229f06c(0x1395,0);
  if (iVar6 != 0) {
    iVar6 = func_0x0229f13c(0x1395,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_021c7568 + 0x21c7488);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c756c + 0x21c749c),iVar2,0);
      *pcVar5 = '\x01';
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
    if (*(int *)(iVar6 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar6 + 0x10),0);
    }
    func_0x01485278(&uStack_30,iVar2,0);
    iVar4 = *(int *)(iVar6 + 8);
    uVar1 = *(undefined4 *)(iVar6 + 0xc);
    iVar2 = *(int *)(iVar6 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar1,&uStack_30,uVar3);
    iVar2 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7570 + 0x21c7558));
    return iVar2;
  }
  iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02b61e00 + 0x2b61dc8));
  func_0x04874ed4(iVar6,0);
  *(undefined4 *)(iVar6 + 8) = 0xfffffffe;
  uVar1 = func_0x048799ac(0);
  *(undefined4 *)(iVar6 + 0x14) = uVar1;
  *(int *)(iVar6 + 0x18) = iVar2;
  return iVar6;
}



// ===== FAT.VisualRes$$Open RVA 0x2b54708 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b64708(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_02b64840 + 0x2b64720);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b64844 + 0x2b64734));
    func_0x01384978(*(undefined4 *)(_UNK_02b64848 + 0x2b64740));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x1ae8,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x1ae8,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_021e0950 + 0x21e0810);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021e0954 + 0x21e0824),param_1,param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_021e0958 + 0x21e0830));
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&iStack_50,0);
    iStack_38 = iStack_50;
    uStack_34 = iStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    iStack_50 = *param_1;
    iStack_4c = param_1[1];
    uVar1 = func_0x01384abc(**(undefined4 **)(_UNK_021e095c + 0x21e0880),&iStack_50);
    func_0x01485288(&iStack_38,uVar1,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x014852b8(&iStack_38,0,0);
    func_0x01485278(&iStack_38,param_2,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar1 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar1,&iStack_38,uVar4,1,0);
    func_0x02f5ecfc(&iStack_50,&iStack_38,0,**(undefined4 **)(_UNK_021e0960 + 0x21e0934));
    *param_1 = iStack_50;
    param_1[1] = iStack_4c;
    return;
  }
  iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_02b6484c + 0x2b6479c));
  iVar6 = *param_1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = *(undefined4 *)(iVar6 + 0xc);
  piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02b64850 + 0x2b647c4),1);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  if ((param_2 != 0) &&
     (iVar6 = func_0x01384ab8(param_2,*(undefined4 *)(*piVar3 + 0x20)), iVar6 == 0)) {
    uVar4 = func_0x01384c10();
    func_0x01384aa0(uVar4,0);
  }
  if (piVar3[3] == 0) {
    func_0x01384bf4();
  }
  piVar3[4] = param_2;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x0229f06c(0xd,0,piVar3,0);
  if (iVar6 == 0) {
    func_0x01ee81d4(iVar2,uVar1,0,piVar3);
  }
  else {
    iVar6 = func_0x0229f13c(0xd,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02174858(iVar6,iVar2,uVar1,piVar3);
  }
  return;
}


