/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.UIOutOfEnergy$$OnCreate RVA 0x25352e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_025452e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
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
  
  pcVar4 = (char *)(_UNK_02545488 + 0x25452f4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0254548c + 0x2545308));
    func_0x01384978(*(undefined4 *)(_UNK_02545490 + 0x2545314));
    func_0x01384978(*(undefined4 *)(_UNK_02545494 + 0x2545320));
    func_0x01384978(*(undefined4 *)(_UNK_02545498 + 0x254532c));
    func_0x01384978(*(undefined4 *)(_UNK_0254549c + 0x2545338));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x378f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x378f,0);
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
  uVar5 = func_0x024458b0(*(undefined4 *)(param_1 + 0x68),0);
  puVar7 = *(undefined4 **)(_UNK_025454a0 + 0x254539c);
  iVar1 = func_0x02f59744(uVar5,*puVar7);
  puVar6 = *(undefined4 **)(_UNK_025454a4 + 0x25453b0);
  uVar5 = func_0x01384be4(*puVar6);
  func_0x024500b4(uVar5,param_1,**(undefined4 **)(_UNK_025454a8 + 0x25453cc),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(iVar1 + 0x20) = uVar5;
  uVar5 = func_0x024458b0(uVar2,0);
  iVar1 = func_0x02f59744(uVar5,*puVar7);
  uVar5 = func_0x01384be4(*puVar6);
  func_0x024500b4(uVar5,param_1,**(undefined4 **)(_UNK_025454ac + 0x254541c),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(iVar1 + 0x20) = uVar5;
  uVar5 = func_0x024458b0(uVar2,0);
  iVar1 = func_0x02f59744(uVar5,*puVar7);
  uVar5 = func_0x01384be4(*puVar6);
  func_0x024500b4(uVar5,param_1,**(undefined4 **)(_UNK_025454b0 + 0x254546c),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0x20) = uVar5;
  return;
}



// ===== FAT.UIOutOfEnergy$$OnPreOpen RVA 0x25354b4 =====

/* WARNING: Possible PIC construction at 0x028be4b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028be4bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_025454b4(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int unaff_r4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 unaff_lr;
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
  
  pcVar7 = (char *)(_UNK_025456c8 + 0x25454c8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_025456cc + 0x25454dc));
    func_0x01384978(*(undefined4 *)(_UNK_025456d0 + 0x25454e8));
    func_0x01384978(*(undefined4 *)(_UNK_025456d4 + 0x25454f4));
    func_0x01384978(*(undefined4 *)(_UNK_025456d8 + 0x2545500));
    func_0x01384978(*(undefined4 *)(_UNK_025456dc + 0x254550c));
    func_0x01384978(*(undefined4 *)(_UNK_025456e0 + 0x2545518));
    func_0x01384978(*(undefined4 *)(_UNK_025456e4 + 0x2545524));
    func_0x01384978(*(undefined4 *)(_UNK_025456e8 + 0x2545530));
    func_0x01384978(*(undefined4 *)(_UNK_025456ec + 0x254553c));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x379e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x379e,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar8,&uStack_30,uVar4);
    return;
  }
  piVar3 = *(int **)(_UNK_025456f0 + 0x2545598);
  uVar8 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined1 *)(param_1 + 0x90) = 0;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  FUN_02085564(param_1,uVar8,0);
  func_0x02545714(param_1);
  func_0x025458f8(param_1);
  func_0x02545a6c(param_1);
  func_0x025460bc(param_1);
  if (*(int *)(**(int **)(_UNK_025456f4 + 0x25455ec) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_025456f8 + 0x2545608));
  uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_025456fc + 0x254561c));
  func_0x03ccabbc(uVar8,param_1,**(undefined4 **)(_UNK_02545700 + 0x2545638),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0349e140(iVar2,uVar8,**(undefined4 **)(_UNK_02545704 + 0x254565c));
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_02545708 + 0x2545670));
  uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_0254570c + 0x2545684));
  func_0x024500b4(uVar8,param_1,**(undefined4 **)(_UNK_02545710 + 0x25456a0),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_028be4f4 + 0x28be418);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028be4f8 + 0x28be42c),uVar8,0);
    *pcVar7 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x10cb,0);
  if (iVar5 == 0) {
    piVar3 = (int *)func_0x0487907c(*(undefined4 *)(iVar2 + 8),uVar8,0);
    if (piVar3 == (int *)0x0) {
      *(undefined4 *)(iVar2 + 8) = 0;
      return;
    }
    iVar5 = **(int **)(_UNK_028be4fc + 0x28be4a8);
    if (*piVar3 == iVar5) {
      *(int **)(iVar2 + 8) = piVar3;
      if (*piVar3 == iVar5) {
        return;
      }
    }
    else {
      unaff_lr = 0x28be4bc;
      unaff_r4 = iVar2;
      register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
    }
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_r4;
    func_0x0142996c((undefined1 *)((int)register0x00000054 + -0x14),*(undefined4 *)(*piVar3 + 0x20),
                    iVar5);
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
  iVar5 = func_0x0229f13c(0x10cb,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,uVar8,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar5 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar5 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar2,0);
  func_0x01485278(&uStack_38,uVar8,0);
  iVar6 = *(int *)(iVar5 + 8);
  uVar8 = *(undefined4 *)(iVar5 + 0xc);
  iVar2 = *(int *)(iVar5 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar6,uVar8,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.UIOutOfEnergy$$RefreshInfo RVA 0x2535714 =====

/* WARNING: Possible PIC construction at 0x028c2820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028c2824) */
/* WARNING: Removing unreachable block (ram,0x028c31dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02545714(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *unaff_r4;
  int *piVar4;
  int iVar5;
  int *unaff_r5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  int *unaff_r6;
  int iVar10;
  int *piVar11;
  int *unaff_r7;
  undefined4 unaff_r8;
  int *unaff_r9;
  undefined4 unaff_r10;
  int *unaff_lr;
  int *piStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  int *piStack_1c;
  int *piStack_18;
  
  pcVar6 = (char *)(_UNK_025458f0 + 0x2545728);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_025458f4 + 0x254573c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x379f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x379f,0);
    piVar7 = param_1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_01db7b78(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02139cf4(iVar1,0);
  param_1[0x1f] = iVar1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar9 = *(undefined4 *)(iVar1 + 8);
  iVar1 = func_0x01854b48(uVar9,0);
  param_1[0x22] = iVar1;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x90);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01dc366c(iVar1,uVar9,0);
  iVar5 = param_1[0x22];
  param_1[0x21] = iVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar5 + 0x24);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar10 = param_1[0x1a];
  *(bool *)(param_1 + 0x20) = iVar1 < *(int *)(iVar5 + 0xc);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x0244ffd4(iVar10,0);
  iVar1 = param_1[0x20];
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar5,(char)iVar1 == '\0',0);
  piVar7 = (int *)param_1[0x16];
  iVar1 = param_1[0x22];
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = *(int **)(iVar1 + 0x28);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_0267cd4c + 0x267cc3c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0267cd50 + 0x267cc50),piVar4,0);
    func_0x01384978(*(undefined4 *)(_UNK_0267cd54 + 0x267cc5c));
    func_0x01384978(*(undefined4 *)(_UNK_0267cd58 + 0x267cc68));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4d6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4d6,0);
    piVar8 = piVar7;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02174108:
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    piStack_38 = (int *)0x0;
    uStack_28 = 0;
    func_0x0245494c(&piStack_50,0,piVar4,0);
    piStack_38 = piStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&piStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&piStack_38,piVar8,0);
    func_0x01485278(&piStack_38,piVar4,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar9,&piStack_38,uVar3,0,0);
    return;
  }
  iVar1 = func_0x0467229c(piVar4,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0267cd64 + 0x267cd0c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x025550ec(piVar4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar1 + 8);
    iVar10 = *(int *)(iVar1 + 0xc);
    iVar1 = func_0x0229f06c(0x42b,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x42b,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piStack_20 = (int *)0x0;
      func_0x02174858(iVar1,piVar7,iVar5,iVar10);
      return;
    }
    func_0x0267c530(piVar7);
    piVar7[0xc] = iVar5;
    *(undefined1 *)(piVar7 + 0x10) = 1;
    piVar7[0xd] = iVar10;
    func_0x0267c77c(piVar7);
    pcVar6 = (char *)(_UNK_0267bec0 + 0x267bd74);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0267bec4 + 0x267bd88));
      func_0x01384978(*(undefined4 *)(_UNK_0267bec8 + 0x267bd94));
      *pcVar6 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x434,0);
    if (iVar1 == 0) {
      func_0x0267cf20(piVar7);
      iVar1 = func_0x0467229c(piVar7[0xe],0);
      if (iVar1 == 0) {
        iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_0267becc + 0x267be3c));
        iVar5 = piVar7[0xe];
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar9 = func_0x028c7930(iVar1,iVar5,0);
        if (*(int *)(**(int **)(_UNK_0267bed0 + 0x267be74) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0145b1cc(uVar9,0,0);
        if (iVar1 != 0) {
          func_0x0267d3c8(piVar7,uVar9);
        }
      }
      else if ((piVar7[10] != 0) && (iVar1 = func_0x028bc4d8(piVar7[10],0), iVar1 != 0)) {
        if ((char)piVar7[0xb] == '\0') {
          func_0x0267dc58(piVar7);
        }
        else {
          func_0x0267d570(piVar7);
        }
      }
      iVar1 = func_0x0229f06c(0x430,0);
      if (iVar1 == 0) {
        piVar8 = (int *)piVar7[8];
        if (piVar8 == (int *)0x0) {
          return;
        }
        iVar1 = func_0x0229f06c(0x431,0);
        if (iVar1 == 0) {
          if (piVar7 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0267b814(piVar7);
          if (iVar1 != 0) {
            uVar9 = (**(code **)(*piVar8 + 0xe8))(piVar8,*(undefined4 *)(*piVar8 + 0xec));
                    /* WARNING: Could not recover jumptable at 0x0267cf1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*piVar8 + 0x100))(piVar8,uVar9,*(undefined4 *)(*piVar8 + 0x104));
            return;
          }
          return;
        }
        iVar1 = func_0x0229f13c(0x431,0);
        piVar4 = piVar7;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        goto SUB_02174108;
      }
      iVar1 = func_0x0229f13c(0x430,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x434,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
SUB_02173f80:
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    piStack_20 = (int *)0x0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    piStack_20 = piStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,piVar7,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    piStack_50 = (int *)0x0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar9,&uStack_30,uVar3);
    return;
  }
  if (*(int *)(**(int **)(_UNK_0267cd5c + 0x267ccd8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  piVar7 = (int *)**(int **)(_UNK_0267cd60 + 0x267ccf8);
  pcVar6 = (char *)(_UNK_028c2938 + 0x28c2888);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c293c + 0x28c289c),0);
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x199,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x199,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  piVar4 = *(int **)(_UNK_028c2940 + 0x28c28f4);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  if (3 < *(int *)(*(int *)(iVar1 + 0x5c) + 4)) {
    return;
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar6 = (char *)(_UNK_028c2868 + 0x28c26ec);
  piStack_20 = unaff_r4;
  piStack_1c = unaff_r5;
  piStack_18 = unaff_r6;
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c286c + 0x28c2700));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x14,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x14,0);
    piVar4 = piStack_20;
    piVar8 = piStack_1c;
    piVar2 = piStack_18;
    if (iVar1 == 0) {
      func_0x01384bf0();
      piVar4 = piStack_20;
      piVar8 = piStack_1c;
      piVar2 = piStack_18;
    }
    goto LAB_02174038;
  }
  piVar4 = *(int **)(_UNK_028c2870 + 0x28c275c);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  if (**(int **)(iVar1 + 0x5c) < 1) {
LAB_028c2848:
    piVar2 = piVar7;
    piVar7 = piStack_20;
    piVar8 = piStack_1c;
    piVar11 = piStack_18;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      piVar7 = piStack_20;
      piVar8 = piStack_1c;
      piVar11 = piStack_18;
    }
  }
  else {
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
      iVar1 = *piVar4;
    }
    iVar5 = piVar7[2];
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar4;
    }
    piVar8 = (int *)**(int **)(iVar1 + 0x5c);
    if (iVar5 <= (int)piVar8) goto LAB_028c2848;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      piVar8 = (int *)**(int **)(*piVar4 + 0x5c);
    }
    piVar2 = (int *)piVar7[2];
    if ((int)piVar2 < 1) {
      return;
    }
    if ((int)piVar2 < (int)piVar8) {
      piVar8 = piVar2;
    }
    unaff_r7 = (int *)func_0x04673af4(piVar7,0,piVar8,0);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    unaff_lr = (int *)0x28c2824;
    piVar2 = unaff_r7;
    piVar11 = (int *)0x0;
    unaff_r8 = 3;
    unaff_r9 = piVar4;
    register0x00000054 = (BADSPACEBASE *)&piStack_20;
  }
  *(int **)((int)register0x00000054 + -4) = unaff_lr;
  *(int **)((int)register0x00000054 + -8) = piVar11;
  *(int **)((int)register0x00000054 + -0xc) = piVar8;
  *(int **)((int)register0x00000054 + -0x10) = piVar7;
  pcVar6 = (char *)(_UNK_028c3238 + 0x28c3124);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c323c + 0x28c3138));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x15,0);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x028c319c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_028c31a0 + _UNK_028c31a8))();
    return;
  }
  iVar1 = func_0x0229f13c(0x15,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  unaff_lr = *(int **)((int)register0x00000054 + -4);
  piVar7 = piVar2;
  piVar4 = *(int **)((int)register0x00000054 + -0x10);
  piVar8 = *(int **)((int)register0x00000054 + -0xc);
  piVar2 = *(int **)((int)register0x00000054 + -8);
LAB_02174038:
  *(int **)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(int **)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int **)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int **)((int)register0x00000054 + -0x18) = piVar2;
  *(int **)((int)register0x00000054 + -0x1c) = piVar8;
  *(int **)((int)register0x00000054 + -0x20) = piVar4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,piVar7,0);
  iVar5 = *(int *)(iVar1 + 0x10);
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
  if (iVar5 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar5,0);
  }
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),3,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),piVar7,0);
  iVar5 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar5,uVar9,(undefined1 *)((int)register0x00000054 + -0x38),uVar3);
  return;
}



// ===== FAT.UIOutOfEnergy$$RefreshStatus RVA 0x25358f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_025458f8(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
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
  undefined1 auStack_18 [8];
  
  pcVar6 = (char *)(_UNK_02545a58 + 0x2545910);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02545a5c + 0x2545924));
    func_0x01384978(*(undefined4 *)(_UNK_02545a60 + 0x2545930));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x37a0,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x37a0,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x50);
  cVar1 = *(char *)(param_1 + 0x80);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar2,cVar1 == '\0',0);
  if (*(char *)(param_1 + 0x80) == '\0') {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x44);
    piVar4 = *(int **)(param_1 + 0x54);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x01c9d24c(auStack_18,iVar2,1,0);
    uVar7 = func_0x01384abc(**(undefined4 **)(_UNK_02545a64 + 0x2545a08),auStack_18);
    uVar7 = func_0x0244f6a0(**(undefined4 **)(_UNK_02545a68 + 0x2545a24),uVar7,0);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar4 + 0x2d0))(piVar4,uVar7,*(undefined4 *)(*piVar4 + 0x2d4));
  }
  return;
}



// ===== FAT.UIOutOfEnergy$$RefreshPrice RVA 0x2535a6c =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x02546038) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02545a6c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_0254604c + 0x2545a84);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02546050 + 0x2545a98));
    func_0x01384978(*(undefined4 *)(_UNK_02546054 + 0x2545aa4));
    func_0x01384978(*(undefined4 *)(_UNK_02546058 + 0x2545ab0));
    func_0x01384978(*(undefined4 *)(_UNK_0254605c + 0x2545abc));
    func_0x01384978(*(undefined4 *)(_UNK_02546060 + 0x2545ac8));
    func_0x01384978(*(undefined4 *)(_UNK_02546064 + 0x2545ad4));
    func_0x01384978(*(undefined4 *)(_UNK_02546068 + 0x2545ae0));
    func_0x01384978(*(undefined4 *)(_UNK_0254606c + 0x2545aec));
    func_0x01384978(*(undefined4 *)(_UNK_02546070 + 0x2545af8));
    func_0x01384978(*(undefined4 *)(_UNK_02546074 + 0x2545b04));
    func_0x01384978(*(undefined4 *)(_UNK_02546078 + 0x2545b10));
    func_0x01384978(*(undefined4 *)(_UNK_0254607c + 0x2545b1c));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x37a1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x37a1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02450404(iVar1,1,0);
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,0,0);
  if (*(char *)(param_1 + 0x80) != '\0') {
    iVar1 = *(int *)(param_1 + 0x6c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar1 + 0x1c);
    if (*(int *)(**(int **)(_UNK_02546080 + 0x2545bf8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar2 = func_0x028c1350(**(undefined4 **)(_UNK_02546084 + 0x2545c1c),0);
    goto LAB_02545f98;
  }
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x2c);
  if (iVar1 == 0) {
    func_0x01384bf0();
    uVar2 = func_0x0364c9b8(0,0,**(undefined4 **)(_UNK_0254608c + 0x2545c74));
    func_0x01384bf0();
  }
  else {
    uVar2 = func_0x0364c9b8(iVar1,0,**(undefined4 **)(_UNK_02546088 + 0x2545c50));
  }
  iVar1 = func_0x0364c9b8(iVar1,1,**(undefined4 **)(_UNK_02546090 + 0x2545c94));
  iVar7 = func_0x01c24918(0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar7 + 0xdc);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x01eb7090(iVar7,2,uVar2,0);
  piVar8 = *(int **)(_UNK_02546094 + 0x2545cf0);
  if (piVar3 == (int *)0x0) {
LAB_02545d24:
    func_0x01384bf0();
  }
  else {
    iVar7 = *piVar8;
    uVar5 = (uint)*(byte *)(iVar7 + 0xb8);
    if ((*(byte *)(*piVar3 + 0xb8) < uVar5) ||
       (*(int *)(*(int *)(*piVar3 + 100) + uVar5 * 4 + -4) != iVar7)) {
      func_0x01384fb4(piVar3);
      goto LAB_02545d24;
    }
  }
  iVar7 = *piVar8;
  uVar5 = (uint)*(byte *)(iVar7 + 0xb8);
  if ((*(byte *)(*piVar3 + 0xb8) < uVar5) ||
     (*(int *)(*(int *)(*piVar3 + 100) + uVar5 * 4 + -4) != iVar7)) {
    uVar11 = func_0x01384fb4(piVar3);
    if ((int)((ulonglong)uVar11 >> 0x20) != 1) {
      func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_025460b8 + 0x2546028));
      func_0x01459844((int)uVar11);
      func_0x01062280();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    piVar3 = (int *)func_0x0145b008((int)uVar11);
    iVar1 = *piVar3;
    func_0x0145b0f8();
    func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_025460a4 + 0x2545ff4));
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
  }
  else {
    iVar7 = piVar3[4];
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_48,iVar7,**(undefined4 **)(_UNK_02546098 + 0x2545d78));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar9 = *(undefined4 **)(_UNK_0254609c + 0x2545d94);
    do {
      iVar4 = func_0x03f5f428(&uStack_38,*puVar9);
      iVar7 = iStack_2c;
      if (iVar4 == 0) goto LAB_02545dc4;
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
    } while (*(int *)(iVar7 + 0xc) != iVar1);
    *(int *)(param_1 + 0x8c) = iVar7;
LAB_02545dc4:
    func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_025460a0 + 0x2545dd0));
  }
  iVar1 = *(int *)(param_1 + 0x8c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar3 = *(int **)(_UNK_025460a8 + 0x2545e04);
  uVar2 = *(undefined4 *)(iVar1 + 0x20);
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar7 = func_0x02565a88(uVar2,0);
  iVar4 = *(int *)(param_1 + 0x6c);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 0x1c);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uStack_48 = *(undefined4 *)(iVar7 + 0xc);
  puVar9 = *(undefined4 **)(_UNK_025460ac + 0x2545e58);
  uVar2 = func_0x01384abc(*puVar9,&uStack_48);
  piVar8 = *(int **)(_UNK_025460b0 + 0x2545e74);
  iVar7 = *piVar8;
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x01384ab4();
    iVar7 = *piVar8;
  }
  puVar10 = *(undefined4 **)(_UNK_025460b4 + 0x2545e9c);
  uVar2 = func_0x0244f690(*puVar10,uVar2,*(undefined4 *)(*(int *)(iVar7 + 0x5c) + 8),0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x02787008(iVar4,uVar2,0);
  uVar2 = *(undefined4 *)(iVar1 + 0x1c);
  iVar1 = func_0x01489db8(uVar2,0);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,1,0);
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x02565a88(uVar2,0);
  iVar7 = *(int *)(param_1 + 100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_48 = *(undefined4 *)(iVar1 + 0xc);
  uVar2 = func_0x01384abc(*puVar9,&uStack_48);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar8;
  }
  uVar2 = func_0x0244f690(*puVar10,uVar2,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8),0);
LAB_02545f98:
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  func_0x02787008(iVar7,uVar2,0);
  return;
}



// ===== FAT.UIOutOfEnergy$$RefreshAd RVA 0x25360bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_025460bc(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_025463e8 + 0x25460d4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_025463ec + 0x25460e8));
    func_0x01384978(*(undefined4 *)(_UNK_025463f0 + 0x25460f4));
    func_0x01384978(*(undefined4 *)(_UNK_025463f4 + 0x2546100));
    func_0x01384978(*(undefined4 *)(_UNK_025463f8 + 0x254610c));
    func_0x01384978(*(undefined4 *)(_UNK_025463fc + 0x2546118));
    func_0x01384978(*(undefined4 *)(_UNK_02546400 + 0x2546124));
    func_0x01384978(*(undefined4 *)(_UNK_02546404 + 0x2546130));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x37a2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x37a2,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_1 + 0x88);
  iVar1 = *(int *)(iVar1 + 0xa0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar7 = *(undefined4 *)(iVar5 + 0x1c);
  if (*(int *)(**(int **)(_UNK_02546408 + 0x25461b8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar5 = func_0x02565a88(uVar7,0);
  iVar10 = *(int *)(param_1 + 0x88);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar7 = *(undefined4 *)(iVar10 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x02bb7ce8(iVar1,uVar7,0);
  iVar1 = *(int *)(param_1 + 0x70);
  uVar8 = uVar2 & ~(uint)*(byte *)(param_1 + 0x80);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar1,uVar8,0);
  if (uVar8 != 0) {
    iVar1 = *(int *)(param_1 + 0x88);
    piVar11 = *(int **)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar7 = *(undefined4 *)(iVar1 + 0x14);
    piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0254640c + 0x2546264),1);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = *(undefined4 *)(iVar5 + 0xc);
    uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_02546410 + 0x254628c),&uStack_24);
    piVar9 = *(int **)(_UNK_02546414 + 0x25462a8);
    iVar1 = *piVar9;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar9;
    }
    iVar1 = func_0x0244f690(**(undefined4 **)(_UNK_02546418 + 0x25462d0),uVar4,
                            *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xc),0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar1 != 0) && (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)
       ) {
      uVar4 = func_0x01384c10();
      func_0x01384aa0(uVar4,0);
    }
    if (piVar3[3] == 0) {
      func_0x01384bf4();
    }
    piVar3[4] = iVar1;
    if (*(int *)(**(int **)(_UNK_0254641c + 0x2546338) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar7 = func_0x028c1688(uVar7,piVar3,0);
    if (piVar11 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar11 + 0x2d0))(piVar11,uVar7,*(undefined4 *)(*piVar11 + 0x2d4));
    iVar1 = *(int *)(param_1 + 0x78);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01d6c760(iVar1,uVar2,0,0);
    iVar1 = *(int *)(param_1 + 0x88);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar7 = *(undefined4 *)(iVar1 + 0x18);
    if (*(int *)(**(int **)(_UNK_02546420 + 0x25463c0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0199356c(uVar7,0);
  }
  return;
}



// ===== FAT.UIOutOfEnergy$$OnPreClose RVA 0x2536424 =====

/* WARNING: Possible PIC construction at 0x028beb88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028beb8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02546424(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_r4;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 unaff_lr;
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
  
  pcVar7 = (char *)(_UNK_0254660c + 0x2546438);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02546610 + 0x254644c));
    func_0x01384978(*(undefined4 *)(_UNK_02546614 + 0x2546458));
    func_0x01384978(*(undefined4 *)(_UNK_02546618 + 0x2546464));
    func_0x01384978(*(undefined4 *)(_UNK_0254661c + 0x2546470));
    func_0x01384978(*(undefined4 *)(_UNK_02546620 + 0x254647c));
    func_0x01384978(*(undefined4 *)(_UNK_02546624 + 0x2546488));
    func_0x01384978(*(undefined4 *)(_UNK_02546628 + 0x2546494));
    func_0x01384978(*(undefined4 *)(_UNK_0254662c + 0x25464a0));
    func_0x01384978(*(undefined4 *)(_UNK_02546630 + 0x25464ac));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x37a4,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x37a4,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar5);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02546634 + 0x2546504) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_02546638 + 0x2546520));
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x028c3fd8(iVar2,0);
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_0254663c + 0x254654c));
  uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_02546640 + 0x2546560));
  func_0x03ccabbc(uVar8,param_1,**(undefined4 **)(_UNK_02546644 + 0x254657c),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0349e398(iVar2,uVar8,**(undefined4 **)(_UNK_02546648 + 0x25465a0));
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_0254664c + 0x25465b4));
  iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02546650 + 0x25465c8));
  func_0x024500b4(iVar6,param_1,**(undefined4 **)(_UNK_02546654 + 0x25465e4),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_028bebc4 + 0x28beae0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028bebc8 + 0x28beaf4),iVar6,0);
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x10cd,0);
  if (iVar3 == 0) {
    if (iVar6 != 0) {
      piVar4 = (int *)func_0x0487929c(*(undefined4 *)(iVar2 + 8),iVar6,0);
      if (piVar4 != (int *)0x0) {
        iVar6 = **(int **)(_UNK_028bebcc + 0x28beb78);
        if (*piVar4 == iVar6) {
          *(int **)(iVar2 + 8) = piVar4;
          if (*piVar4 == iVar6) {
            return;
          }
        }
        else {
          unaff_lr = 0x28beb8c;
          unaff_r4 = iVar2;
          register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
        }
        *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
        *(int *)((int)register0x00000054 + -8) = unaff_r4;
        func_0x0142996c((undefined1 *)((int)register0x00000054 + -0x14),
                        *(undefined4 *)(*piVar4 + 0x20),iVar6);
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
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    return;
  }
  iVar3 = func_0x0229f13c(0x10cd,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,iVar6,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar2,0);
  func_0x01485278(&uStack_38,iVar6,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar8 = *(undefined4 *)(iVar3 + 0xc);
  iVar2 = *(int *)(iVar3 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
  return;
}



// ===== FAT.UIOutOfEnergy$$OnPostClose RVA 0x2536658 =====

void FUN_02546658(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x37a5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x37a5,0);
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
  if (*(char *)(param_1 + 0x90) == '\0') {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x8c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01e36da8(iVar1,0);
  }
  *(undefined1 *)(param_1 + 0x90) = 0;
  return;
}



// ===== FAT.UIOutOfEnergy$$UserClose RVA 0x25366f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_025466f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_02546798 + 0x2546704);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0254679c + 0x2546718));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3790,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3790,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar3,uVar6,&uStack_30,uVar2);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (*(int *)(**(int **)(_UNK_025467a0 + 0x2546770) + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar5 = (char *)(_UNK_0208570c + 0x208562c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02085710 + 0x2085640),iVar1,0);
    func_0x01384978(*(undefined4 *)(_UNK_02085714 + 0x208564c));
    *pcVar5 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xb75,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xb75,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,iVar1,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,iVar1,0);
    iVar4 = *(int *)(iVar3 + 8);
    uVar6 = *(undefined4 *)(iVar3 + 0xc);
    iVar1 = *(int *)(iVar3 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar2,0,0);
    return;
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02450964(iVar1,**(undefined4 **)(_UNK_02085718 + 0x20856b8),0);
  if (*(int *)(**(int **)(_UNK_0208571c + 0x20856cc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar6 = FUN_02085720(param_1,iVar1);
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_0518b080)(param_1,uVar6,0);
  return;
}



// ===== FAT.UIOutOfEnergy$$OnCoinChange RVA 0x25367a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_025467a4(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  undefined1 auStack_18 [4];
  
  iVar2 = func_0x0229f06c(0x37a3,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x37a3,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  if (param_2 != 1) {
    return;
  }
  pcVar6 = (char *)(_UNK_02545a58 + 0x2545910);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02545a5c + 0x2545924));
    func_0x01384978(*(undefined4 *)(_UNK_02545a60 + 0x2545930));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x37a0,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x37a0,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x50);
  cVar1 = *(char *)(param_1 + 0x80);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar2,cVar1 == '\0',0);
  if (*(char *)(param_1 + 0x80) == '\0') {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x44);
    piVar4 = *(int **)(param_1 + 0x54);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x01c9d24c(auStack_18,iVar2,1,0);
    uVar7 = func_0x01384abc(**(undefined4 **)(_UNK_02545a64 + 0x2545a08),auStack_18);
    uVar7 = func_0x0244f6a0(**(undefined4 **)(_UNK_02545a68 + 0x2545a24),uVar7,0);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    (**(code **)(*piVar4 + 0x2d0))(piVar4,uVar7,*(undefined4 *)(*piVar4 + 0x2d4));
  }
  return;
}



// ===== FAT.UIOutOfEnergy$$ConfirmUsed RVA 0x253680c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0254680c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
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
  
  iVar1 = func_0x0229f06c(0x3793,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x6c);
    *(undefined1 *)(param_1 + 0x90) = 1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450404(iVar1,0,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xfc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e83ee4(iVar1,1,0);
    pcVar5 = (char *)(_UNK_02546798 + 0x2546704);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0254679c + 0x2546718));
      *pcVar5 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x3790,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (*(int *)(**(int **)(_UNK_025467a0 + 0x2546770) + 0x74) == 0) {
        func_0x01384ab4();
      }
      pcVar5 = (char *)(_UNK_0208570c + 0x208562c);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02085710 + 0x2085640),iVar1,0);
        func_0x01384978(*(undefined4 *)(_UNK_02085714 + 0x208564c));
        *pcVar5 = '\x01';
      }
      iVar3 = func_0x0229f06c(0xb75,0);
      if (iVar3 == 0) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02450964(iVar1,**(undefined4 **)(_UNK_02085718 + 0x20856b8),0);
        if (*(int *)(**(int **)(_UNK_0208571c + 0x20856cc) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar6 = FUN_02085720(param_1,iVar1);
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        (*(code *)&UNK_0518b080)(param_1,uVar6,0);
        return;
      }
      iVar3 = func_0x0229f13c(0xb75,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,iVar1,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar3 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485278(&uStack_38,iVar1,0);
      iVar4 = *(int *)(iVar3 + 8);
      uVar6 = *(undefined4 *)(iVar3 + 0xc);
      iVar1 = *(int *)(iVar3 + 0x10);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar2 = 3;
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      func_0x0245495c(iVar4,uVar6,&uStack_38,uVar2,0,0);
      return;
    }
    iVar1 = func_0x0229f13c(0x3790,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x3793,0);
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
  iVar3 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar3,uVar6,&uStack_30,uVar2);
  return;
}



// ===== FAT.UIOutOfEnergy$$ConfirmClick RVA 0x25368c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_025468c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02546c2c + 0x25468dc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02546c30 + 0x25468f0));
    func_0x01384978(*(undefined4 *)(_UNK_02546c34 + 0x25468fc));
    func_0x01384978(*(undefined4 *)(_UNK_02546c38 + 0x2546908));
    func_0x01384978(*(undefined4 *)(_UNK_02546c3c + 0x2546914));
    func_0x01384978(*(undefined4 *)(_UNK_02546c40 + 0x2546920));
    func_0x01384978(*(undefined4 *)(_UNK_02546c44 + 0x254692c));
    func_0x01384978(*(undefined4 *)(_UNK_02546c48 + 0x2546938));
    func_0x01384978(*(undefined4 *)(_UNK_02546c4c + 0x2546944));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3791,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3791,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
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
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc34(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_30,iVar1,0);
  if (*(char *)(param_1 + 0x80) == '\0') {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(param_1 + 0x8c);
    iVar1 = *(int *)(iVar1 + 0xdc);
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02546c68 + 0x2546bc8));
    func_0x024500b4(uVar5,param_1,**(undefined4 **)(_UNK_02546c6c + 0x2546bf0),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_48 = 0;
    uStack_44 = 0;
    func_0x01eb832c(iVar1,uVar2,uStack_30,uStack_2c,uStack_28,uVar5);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x88);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x24);
    uVar5 = *(undefined4 *)(param_1 + 0x84);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x03653d1c(iVar1,uVar5,**(undefined4 **)(_UNK_02546c50 + 0x2546a1c));
    if (*(int *)(**(int **)(_UNK_02546c54 + 0x2546a34) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x02565a88(uVar5,0);
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = *(int **)(_UNK_02546c58 + 0x2546a88);
    uVar2 = *(undefined4 *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar6;
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x98);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_40 = **(undefined4 **)(_UNK_02546c5c + 0x2546acc);
    uStack_3c = **(undefined4 **)(_UNK_02546c60 + 0x2546ad8);
    uStack_44 = 0xb8;
    uStack_38 = 0;
    uStack_48 = 0;
    uVar5 = func_0x01cdcbac(iVar3,uVar2,uVar5,uVar7,0,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(param_1 + 0x7c);
    iVar1 = *(int *)(iVar1 + 0x90);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(iVar3 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dc3744(iVar1,uVar2,0);
    if (*(int *)(**(int **)(_UNK_02546c64 + 0x2546b64) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uStack_48 = 0;
    uStack_44 = 0;
    func_0x0206de24(uVar5,uStack_30,uStack_2c,uStack_28,0,0);
    FUN_0254680c(param_1);
  }
  return;
}



// ===== FAT.UIOutOfEnergy$$AdClick RVA 0x2536c70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02546c70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_02546e54 + 0x2546c88);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02546e58 + 0x2546c9c));
    func_0x01384978(*(undefined4 *)(_UNK_02546e5c + 0x2546ca8));
    func_0x01384978(*(undefined4 *)(_UNK_02546e60 + 0x2546cb4));
    func_0x01384978(*(undefined4 *)(_UNK_02546e64 + 0x2546cc0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x379b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x379b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = 0;
    _uStack_28 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                          *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8));
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
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
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02546e68 + 0x2546d1c));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 8) = param_1;
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_1 + 0x58);
  iVar3 = *(int *)(iVar3 + 0xa0);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x0244fc34(iVar6,0);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_38,iVar6,0);
  *(undefined4 *)(iVar1 + 0x14) = uStack_30;
  *(ulonglong *)(iVar1 + 0xc) = CONCAT44(uStack_34,uStack_38);
  iVar6 = *(int *)(param_1 + 0x88);
  uStack_20 = uStack_30;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(iVar6 + 0x18);
  if (*(int *)(**(int **)(_UNK_02546e6c + 0x2546dc8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x01993868(uVar5,0);
  iVar6 = *(int *)(param_1 + 0x88);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(iVar6 + 0x18);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02546e70 + 0x2546e04));
  func_0x03cc8878(uVar5,iVar1,**(undefined4 **)(_UNK_02546e74 + 0x2546e24),0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x02bb7f34(iVar3,uVar2,uVar5,0);
  return;
}



// ===== FAT.UIOutOfEnergy.<>c__DisplayClass30_0$$.ctor RVA 0x2536e78 =====

void FUN_02546e78(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.UIOutOfEnergy$$.ctor RVA 0x2536e80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02546e80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar2 = (char *)(_UNK_02546edc + 0x2546e94);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02546ee0 + 0x2546ea8));
    *pcVar2 = '\x01';
    param_3 = extraout_r2;
    param_4 = extraout_r3;
  }
  if (*(int *)(**(int **)(_UNK_02546ee4 + 0x2546ebc) + 0x74) == 0) {
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



// ===== FAT.UIOutOfEnergy$$<>iFixBaseProxy_OnCreate RVA 0x2536ee8 =====

void FUN_02546ee8(undefined4 param_1)

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



// ===== FAT.UIOutOfEnergy$$<>iFixBaseProxy_OnPreOpen RVA 0x2536ef0 =====

void FUN_02546ef0(undefined4 param_1)

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



// ===== FAT.UIOutOfEnergy$$<>iFixBaseProxy_OnPreClose RVA 0x2536ef8 =====

void FUN_02546ef8(undefined4 param_1)

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



// ===== FAT.UIOutOfEnergy$$<>iFixBaseProxy_OnPostClose RVA 0x2536f00 =====

void FUN_02546f00(undefined4 param_1)

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



// ===== FAT.UIOutOfEnergy.<>c__DisplayClass30_0$$<AdClick>b__0 RVA 0x2536f08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02546f08(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  
  pcVar1 = (char *)(_UNK_02547138 + 0x2546f28);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0254713c + 0x2546f40));
    func_0x01384978(*(undefined4 *)(_UNK_02547140 + 0x2546f4c));
    func_0x01384978(*(undefined4 *)(_UNK_02547144 + 0x2546f58));
    func_0x01384978(*(undefined4 *)(_UNK_02547148 + 0x2546f64));
    func_0x01384978(*(undefined4 *)(_UNK_0254714c + 0x2546f70));
    *pcVar1 = '\x01';
  }
  if ((param_3 & 1) == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x88);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = *(undefined4 *)(iVar2 + 0x1c);
  if (*(int *)(**(int **)(_UNK_02547150 + 0x2546fb4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x02565a88(uVar3,0);
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 0x88);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = *(undefined4 *)(iVar4 + 0x18);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  if (*(int *)(**(int **)(_UNK_02547154 + 0x2547018) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uStack_40 = 0;
  func_0x01993e60(uVar3,uVar7,uVar5,param_5 & 1);
  iVar4 = func_0x01c24918(0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(iVar2 + 8);
  iVar4 = *(int *)(iVar4 + 0x40);
  uVar3 = *(undefined4 *)(iVar2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uStack_30 = **(undefined4 **)(_UNK_02547158 + 0x2547094);
  uStack_2c = **(undefined4 **)(_UNK_0254715c + 0x25470a0);
  uStack_34 = 0xcd;
  uStack_28 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uVar3 = func_0x01cdcbac(iVar4,uVar5,uVar3,param_4);
  uVar7 = *(undefined4 *)(param_1 + 0xc);
  uVar8 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(**(int **)(_UNK_02547160 + 0x25470d8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  func_0x0206de24(uVar3,uVar7,uVar8,uVar5);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0229f06c(0x3793,0);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar2 + 0x6c);
    *(undefined1 *)(iVar2 + 0x90) = 1;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x02450404(iVar4,0,0);
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0xfc);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x01e83ee4(iVar4,1,0);
    pcVar1 = (char *)(_UNK_02546798 + 0x2546704);
    if (*pcVar1 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0254679c + 0x2546718));
      *pcVar1 = '\x01';
    }
    iVar4 = func_0x0229f06c(0x3790,0);
    if (iVar4 == 0) {
      iVar4 = *(int *)(iVar2 + 0x4c);
      if (*(int *)(**(int **)(_UNK_025467a0 + 0x2546770) + 0x74) == 0) {
        func_0x01384ab4();
      }
      pcVar1 = (char *)(_UNK_0208570c + 0x208562c);
      if (*pcVar1 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02085710 + 0x2085640),iVar4,0);
        func_0x01384978(*(undefined4 *)(_UNK_02085714 + 0x208564c));
        *pcVar1 = '\x01';
      }
      iVar6 = func_0x0229f06c(0xb75,0);
      if (iVar6 == 0) {
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x02450964(iVar4,**(undefined4 **)(_UNK_02085718 + 0x20856b8),0);
        if (*(int *)(**(int **)(_UNK_0208571c + 0x20856cc) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar3 = FUN_02085720(iVar2,iVar4);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        (*(code *)&UNK_0518b080)(iVar2,uVar3,0);
        return;
      }
      iVar6 = func_0x0229f13c(0xb75,0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,iVar4,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar6 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar6 + 0x10),0);
      }
      func_0x01485278(&uStack_38,iVar2,0);
      func_0x01485278(&uStack_38,iVar4,0);
      iVar4 = *(int *)(iVar6 + 8);
      uVar3 = *(undefined4 *)(iVar6 + 0xc);
      iVar2 = *(int *)(iVar6 + 0x10);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar5 = 3;
      if (iVar2 == 0) {
        uVar5 = 2;
      }
      func_0x0245495c(iVar4,uVar3,&uStack_38,uVar5,0,0);
      return;
    }
    iVar4 = func_0x0229f13c(0x3790,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar4 = func_0x0229f13c(0x3793,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
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
  if (*(int *)(iVar4 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar4 + 0x10),0);
  }
  func_0x01485278(&uStack_30,iVar2,0);
  iVar6 = *(int *)(iVar4 + 8);
  uVar3 = *(undefined4 *)(iVar4 + 0xc);
  iVar2 = *(int *)(iVar4 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar6,uVar3,&uStack_30,uVar5);
  return;
}


