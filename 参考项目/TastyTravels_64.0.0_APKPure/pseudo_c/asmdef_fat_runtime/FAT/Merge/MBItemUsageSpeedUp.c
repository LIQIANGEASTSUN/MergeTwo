/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.MBItemUsageSpeedUp$$Initialize RVA 0x2293ffc =====

/* WARNING: Possible PIC construction at 0x022a285c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x022a2860) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a3ffc(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_r4;
  char *pcVar4;
  int unaff_r5;
  undefined4 uVar5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined1 auStack_18 [4];
  int iStack_14;
  
  iVar1 = func_0x0229f06c(0xb548);
  if (iVar1 == 0) {
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
        uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_022a2920 + 0x22a28bc));
        if (param_1 == (int *)0x0) {
          func_0x01384bf0();
        }
        func_0x0244ffa0(uVar5,param_1,*(undefined4 *)(*param_1 + 0xe4),0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffb0(iVar1,uVar5,0);
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x775f);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x22a2860;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar1 = func_0x0229f13c(0xb548);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int **)((int)register0x00000054 + -0x18) = unaff_r4;
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
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar2,uVar5,(undefined1 *)((int)register0x00000054 + -0x30),uVar3);
  return;
}



// ===== FAT.Merge.MBItemUsageSpeedUp$$SetData RVA 0x229404c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a404c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
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
  
  iVar1 = func_0x0229f06c(0xb549);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb549);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  FUN_022a2924(param_1,param_2);
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  pcVar6 = (char *)(_UNK_022a41ec + 0x22a40cc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a41f0 + 0x22a40e0));
    func_0x01384978(*(undefined4 *)(_UNK_022a41f4 + 0x22a40ec));
    func_0x01384978(*(undefined4 *)(_UNK_022a41f8 + 0x22a40f8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb54a);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb54a);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3);
    return;
  }
  if ((*(int *)(param_1 + 0x10) == 0) ||
     (iVar1 = FUN_0210e250(*(int *)(param_1 + 0x10),6,0,0), iVar1 == 0)) {
    piVar4 = *(int **)(param_1 + 0x14);
    if (*(int *)(**(int **)(_UNK_022a4204 + 0x22a4198) + 0x74) == 0) {
      func_0x01384ab4();
    }
    puVar2 = *(undefined4 **)(_UNK_022a4208 + 0x22a41b8);
  }
  else {
    piVar4 = *(int **)(param_1 + 0x14);
    if (*(int *)(**(int **)(_UNK_022a41fc + 0x22a416c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    puVar2 = *(undefined4 **)(_UNK_022a4200 + 0x22a418c);
  }
  uVar7 = func_0x028c1350(*puVar2,0);
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x022a41e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0x2d0))(piVar4,uVar7,*(undefined4 *)(*piVar4 + 0x2d4));
  return;
}



// ===== FAT.Merge.MBItemUsageSpeedUp$$_RefreshText RVA 0x22940b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a40b8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
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
  
  pcVar6 = (char *)(_UNK_022a41ec + 0x22a40cc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a41f0 + 0x22a40e0));
    func_0x01384978(*(undefined4 *)(_UNK_022a41f4 + 0x22a40ec));
    func_0x01384978(*(undefined4 *)(_UNK_022a41f8 + 0x22a40f8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb54a);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb54a);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  if ((*(int *)(param_1 + 0x10) == 0) ||
     (iVar1 = FUN_0210e250(*(int *)(param_1 + 0x10),6,0,0), iVar1 == 0)) {
    piVar4 = *(int **)(param_1 + 0x14);
    if (*(int *)(**(int **)(_UNK_022a4204 + 0x22a4198) + 0x74) == 0) {
      func_0x01384ab4();
    }
    puVar2 = *(undefined4 **)(_UNK_022a4208 + 0x22a41b8);
  }
  else {
    piVar4 = *(int **)(param_1 + 0x14);
    if (*(int *)(**(int **)(_UNK_022a41fc + 0x22a416c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    puVar2 = *(undefined4 **)(_UNK_022a4200 + 0x22a418c);
  }
  uVar7 = func_0x028c1350(*puVar2,0);
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x022a41e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0x2d0))(piVar4,uVar7,*(undefined4 *)(*piVar4 + 0x2d4));
  return;
}



// ===== FAT.Merge.MBItemUsageSpeedUp$$Refresh RVA 0x229420c =====

/* WARNING: Possible PIC construction at 0x022a4300: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x022a4304) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a420c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  undefined4 uVar5;
  int unaff_r4;
  int unaff_r5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined8 uVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [6];
  
  iVar1 = func_0x0229f06c(0xb54b);
  if (iVar1 == 0) {
    FUN_022a26a4(param_1);
    pcVar6 = (char *)(_UNK_022a4524 + 0x22a427c);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022a4528 + 0x22a4290));
      func_0x01384978(*(undefined4 *)(_UNK_022a452c + 0x22a429c));
      func_0x01384978(*(undefined4 *)(_UNK_022a4530 + 0x22a42a8));
      func_0x01384978(*(undefined4 *)(_UNK_022a4534 + 0x22a42b4));
      *pcVar6 = '\x01';
    }
    aiStack_28[3] = 0;
    aiStack_28[2] = 0;
    aiStack_28[1] = 0;
    iVar1 = func_0x0229f06c(0xb54c);
    if (iVar1 == 0) {
      uStack_30 = 0;
      FUN_0216fe48(*(undefined4 *)(param_1 + 0x10),aiStack_28 + 2,aiStack_28 + 1,aiStack_28 + 3);
      if (*(int *)(param_1 + 0x24) != aiStack_28[3]) {
        puVar2 = *(undefined4 **)(_UNK_022a4538 + 0x22a433c);
        *(int *)(param_1 + 0x24) = aiStack_28[3];
        aiStack_28[0] = aiStack_28[3];
        piVar7 = *(int **)(param_1 + 0x18);
        uVar8 = func_0x01384abc(*puVar2,aiStack_28);
        uVar8 = func_0x0244f6a0(**(undefined4 **)(_UNK_022a453c + 0x22a4364),uVar8,0);
        if (piVar7 == (int *)0x0) {
          func_0x01384bf0();
        }
        (**(code **)(*piVar7 + 0x2d0))(piVar7,uVar8,*(undefined4 *)(*piVar7 + 0x2d4));
      }
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x60);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01cc0100(iVar1,0x7a,0);
      if (iVar1 == 0) {
        uVar8 = *(undefined4 *)(param_1 + 0x1c);
        if (*(int *)(**(int **)(_UNK_022a4548 + 0x22a44d0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0145b1cc(uVar8,0,0);
        if (iVar1 != 0) {
          iVar1 = *(int *)(param_1 + 0x1c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar1,0,0);
        }
      }
      else {
        uVar9 = FUN_02170788(*(undefined4 *)(param_1 + 0x10),0);
        iVar4 = (int)((ulonglong)uVar9 >> 0x20);
        iVar1 = (int)uVar9;
        piVar7 = *(int **)(_UNK_022a4540 + 0x22a43f0);
        uVar8 = *(undefined4 *)(param_1 + 0x1c);
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar3 = func_0x0145b1cc(uVar8,0,0);
        if (iVar3 != 0) {
          iVar3 = *(int *)(param_1 + 0x1c);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar3,(int)-(iVar4 + (uint)(iVar1 != 0)) < 0 !=
                                (SBORROW4(0,iVar4) != SBORROW4(-iVar4,(uint)(iVar1 != 0))),0);
        }
        if ((int)(uint)(iVar1 == 0) <= iVar4) {
          uVar8 = *(undefined4 *)(param_1 + 0x20);
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar3 = func_0x0145b1cc(uVar8,0,0);
          if (iVar3 != 0) {
            uVar8 = *(undefined4 *)(param_1 + 0x20);
            iVar3 = *(int *)(**(int **)(_UNK_022a4544 + 0x22a4490) + 0x74);
            if (iVar3 == 0) {
              func_0x01384ab4();
              iVar3 = extraout_r1;
            }
            uStack_30 = 0;
            uStack_2c = 0;
            func_0x02089060(uVar8,iVar3,iVar1,iVar4);
          }
        }
      }
      return;
    }
    iVar1 = func_0x0229f13c(0xb54c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x22a4304;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)&uStack_30;
  }
  else {
    iVar1 = func_0x0229f13c(0xb54b);
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
  iVar4 = *(int *)(iVar1 + 0x10);
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
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar4,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar4,uVar8,(undefined1 *)((int)register0x00000054 + -0x30),uVar5);
  return;
}



// ===== FAT.Merge.MBItemUsageSpeedUp$$_Refresh RVA 0x2294264 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a4264(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  char *pcVar6;
  int *piVar7;
  undefined8 uVar8;
  int aiStack_28 [4];
  
  pcVar6 = (char *)(_UNK_022a4524 + 0x22a427c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a4528 + 0x22a4290));
    func_0x01384978(*(undefined4 *)(_UNK_022a452c + 0x22a429c));
    func_0x01384978(*(undefined4 *)(_UNK_022a4530 + 0x22a42a8));
    func_0x01384978(*(undefined4 *)(_UNK_022a4534 + 0x22a42b4));
    *pcVar6 = '\x01';
  }
  aiStack_28[3] = 0;
  aiStack_28[2] = 0;
  aiStack_28[1] = 0;
  iVar1 = func_0x0229f06c(0xb54c);
  if (iVar1 == 0) {
    FUN_0216fe48(*(undefined4 *)(param_1 + 0x10),aiStack_28 + 2,aiStack_28 + 1,aiStack_28 + 3,0);
    if (*(int *)(param_1 + 0x24) != aiStack_28[3]) {
      puVar2 = *(undefined4 **)(_UNK_022a4538 + 0x22a433c);
      *(int *)(param_1 + 0x24) = aiStack_28[3];
      aiStack_28[0] = aiStack_28[3];
      piVar7 = *(int **)(param_1 + 0x18);
      uVar3 = func_0x01384abc(*puVar2,aiStack_28);
      uVar3 = func_0x0244f6a0(**(undefined4 **)(_UNK_022a453c + 0x22a4364),uVar3,0);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar7 + 0x2d0))(piVar7,uVar3,*(undefined4 *)(*piVar7 + 0x2d4));
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01cc0100(iVar1,0x7a,0);
    if (iVar1 == 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x1c);
      if (*(int *)(**(int **)(_UNK_022a4548 + 0x22a44d0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0145b1cc(uVar3,0,0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x1c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar1,0,0);
      }
    }
    else {
      uVar8 = FUN_02170788(*(undefined4 *)(param_1 + 0x10),0);
      iVar5 = (int)((ulonglong)uVar8 >> 0x20);
      iVar1 = (int)uVar8;
      piVar7 = *(int **)(_UNK_022a4540 + 0x22a43f0);
      uVar3 = *(undefined4 *)(param_1 + 0x1c);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar4 = func_0x0145b1cc(uVar3,0,0);
      if (iVar4 != 0) {
        iVar4 = *(int *)(param_1 + 0x1c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0244ffe4(iVar4,(int)-(iVar5 + (uint)(iVar1 != 0)) < 0 !=
                              (SBORROW4(0,iVar5) != SBORROW4(-iVar5,(uint)(iVar1 != 0))),0);
      }
      if ((int)(uint)(iVar1 == 0) <= iVar5) {
        uVar3 = *(undefined4 *)(param_1 + 0x20);
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar4 = func_0x0145b1cc(uVar3,0,0);
        if (iVar4 != 0) {
          uVar3 = *(undefined4 *)(param_1 + 0x20);
          iVar4 = *(int *)(**(int **)(_UNK_022a4544 + 0x22a4490) + 0x74);
          if (iVar4 == 0) {
            func_0x01384ab4();
            iVar4 = extraout_r1;
          }
          func_0x02089060(uVar3,iVar4,iVar1,iVar5,0,0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb54c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.Merge.MBItemUsageSpeedUp$$UpdateContent RVA 0x229454c =====

/* WARNING: Possible PIC construction at 0x022a4300: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x022a4304) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a454c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  undefined4 uVar5;
  int unaff_r4;
  char *pcVar6;
  int *piVar7;
  int unaff_r5;
  undefined4 uVar8;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined8 uVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [6];
  
  iVar3 = func_0x0229f06c(0xb54d);
  if (iVar3 == 0) {
    FUN_022a29c8(param_1);
    pcVar6 = (char *)(_UNK_022a4524 + 0x22a427c);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022a4528 + 0x22a4290));
      func_0x01384978(*(undefined4 *)(_UNK_022a452c + 0x22a429c));
      func_0x01384978(*(undefined4 *)(_UNK_022a4530 + 0x22a42a8));
      func_0x01384978(*(undefined4 *)(_UNK_022a4534 + 0x22a42b4));
      *pcVar6 = '\x01';
    }
    aiStack_28[3] = 0;
    aiStack_28[2] = 0;
    aiStack_28[1] = 0;
    iVar3 = func_0x0229f06c(0xb54c);
    if (iVar3 == 0) {
      uStack_30 = 0;
      FUN_0216fe48(*(undefined4 *)(param_1 + 0x10),aiStack_28 + 2,aiStack_28 + 1,aiStack_28 + 3);
      if (*(int *)(param_1 + 0x24) != aiStack_28[3]) {
        puVar1 = *(undefined4 **)(_UNK_022a4538 + 0x22a433c);
        *(int *)(param_1 + 0x24) = aiStack_28[3];
        aiStack_28[0] = aiStack_28[3];
        piVar7 = *(int **)(param_1 + 0x18);
        uVar8 = func_0x01384abc(*puVar1,aiStack_28);
        uVar8 = func_0x0244f6a0(**(undefined4 **)(_UNK_022a453c + 0x22a4364),uVar8,0);
        if (piVar7 == (int *)0x0) {
          func_0x01384bf0();
        }
        (**(code **)(*piVar7 + 0x2d0))(piVar7,uVar8,*(undefined4 *)(*piVar7 + 0x2d4));
      }
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x60);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01cc0100(iVar3,0x7a,0);
      if (iVar3 == 0) {
        uVar8 = *(undefined4 *)(param_1 + 0x1c);
        if (*(int *)(**(int **)(_UNK_022a4548 + 0x22a44d0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar3 = func_0x0145b1cc(uVar8,0,0);
        if (iVar3 != 0) {
          iVar3 = *(int *)(param_1 + 0x1c);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar3,0,0);
        }
      }
      else {
        uVar9 = FUN_02170788(*(undefined4 *)(param_1 + 0x10),0);
        iVar4 = (int)((ulonglong)uVar9 >> 0x20);
        iVar3 = (int)uVar9;
        piVar7 = *(int **)(_UNK_022a4540 + 0x22a43f0);
        uVar8 = *(undefined4 *)(param_1 + 0x1c);
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x0145b1cc(uVar8,0,0);
        if (iVar2 != 0) {
          iVar2 = *(int *)(param_1 + 0x1c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x0244ffe4(iVar2,(int)-(iVar4 + (uint)(iVar3 != 0)) < 0 !=
                                (SBORROW4(0,iVar4) != SBORROW4(-iVar4,(uint)(iVar3 != 0))),0);
        }
        if ((int)(uint)(iVar3 == 0) <= iVar4) {
          uVar8 = *(undefined4 *)(param_1 + 0x20);
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar2 = func_0x0145b1cc(uVar8,0,0);
          if (iVar2 != 0) {
            uVar8 = *(undefined4 *)(param_1 + 0x20);
            iVar2 = *(int *)(**(int **)(_UNK_022a4544 + 0x22a4490) + 0x74);
            if (iVar2 == 0) {
              func_0x01384ab4();
              iVar2 = extraout_r1;
            }
            uStack_30 = 0;
            uStack_2c = 0;
            func_0x02089060(uVar8,iVar2,iVar3,iVar4);
          }
        }
      }
      return;
    }
    iVar3 = func_0x0229f13c(0xb54c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x22a4304;
    unaff_r4 = param_1;
    unaff_r5 = iVar3;
    register0x00000054 = (BADSPACEBASE *)&uStack_30;
  }
  else {
    iVar3 = func_0x0229f13c(0xb54d);
    if (iVar3 == 0) {
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
  iVar4 = *(int *)(iVar3 + 0x10);
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
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar4,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar4 = *(int *)(iVar3 + 8);
  uVar8 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar3 == 0) {
    uVar5 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar4,uVar8,(undefined1 *)((int)register0x00000054 + -0x30),uVar5);
  return;
}



// ===== FAT.Merge.MBItemUsageSpeedUp$$OnBtnClick RVA 0x22945a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a45a4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
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
  
  pcVar11 = (char *)(_UNK_022a46f4 + 0x22a45b8);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a46f8 + 0x22a45cc));
    func_0x01384978(*(undefined4 *)(_UNK_022a46fc + 0x22a45d8));
    func_0x01384978(*(undefined4 *)(_UNK_022a4700 + 0x22a45e4));
    func_0x01384978(*(undefined4 *)(_UNK_022a4704 + 0x22a45f0));
    *pcVar11 = '\x01';
  }
  iVar4 = func_0x0229f06c(0xb54e);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0xb54e);
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
    iVar10 = *(int *)(iVar4 + 8);
    uVar12 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 2;
    if (iVar4 == 0) {
      uVar9 = 1;
    }
    func_0x0245495c(iVar10,uVar12,&uStack_30,uVar9,0,0);
    return;
  }
  iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_022a4708 + 0x22a4640));
  func_0x0244f5a0(iVar4,0);
  FUN_022a2578(param_1);
  uVar12 = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(**(int **)(_UNK_022a470c + 0x22a4664) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar10 = func_0x02085188(1,uVar12,0);
  if (iVar10 != 0) {
    return;
  }
  uVar9 = *(undefined4 *)(param_1 + 0x10);
  uVar12 = uVar9;
  if (iVar4 == 0) {
    func_0x01384bf0();
    uVar12 = *(undefined4 *)(param_1 + 0x10);
  }
  puVar5 = *(undefined4 **)(_UNK_022a4710 + 0x22a46b8);
  *(undefined4 *)(iVar4 + 8) = uVar9;
  uVar9 = func_0x01384be4(*puVar5);
  func_0x024500b4(uVar9,iVar4,**(undefined4 **)(_UNK_022a4714 + 0x22a46d8),0);
  pcVar11 = (char *)(_UNK_021715d8 + 0x2170f40);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021715dc + 0x2170f54),uVar9,0);
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
    *pcVar11 = '\x01';
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
    *(undefined4 *)(iVar4 + 8) = uVar12;
    *(undefined4 *)(iVar4 + 0xc) = uVar9;
    iVar1 = FUN_0216fe48(uVar12,&iStack_24,&iStack_28,&uStack_2c);
    iVar10 = iStack_24;
    if (iVar1 != 0) {
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      uVar12 = func_0x02450044(iVar10,0);
      if (*(int *)(**(int **)(_UNK_0217160c + 0x21710a4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar12 = FUN_0212882c(uVar12,0);
      *(undefined4 *)(iVar4 + 0x10) = uVar12;
      piVar2 = (int *)FUN_021566f4();
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar10 = *piVar2;
      piVar13 = *(int **)(_UNK_02171610 + 0x21710e8);
      uVar6 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar8[-1] == *piVar13) {
            puVar5 = (undefined4 *)(iVar10 + *piVar8 * 8 + 0x208);
            goto LAB_02171130;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar13,0x29);
LAB_02171130:
      iVar10 = (*(code *)*puVar5)(piVar2,puVar5[1]);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      *(undefined1 *)(iVar4 + 0x14) = 0;
      if (iStack_28 == 1) {
        piVar2 = *(int **)(_UNK_02171618 + 0x21711d0);
        iVar1 = *piVar2;
        iVar7 = *(int *)(iVar1 + 0x74);
        *(undefined1 *)(iVar4 + 0x14) = 1;
        if (iVar7 == 0) {
          func_0x01384ab4();
          iVar1 = *piVar2;
        }
        uVar12 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x50);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        *(int *)(iVar10 + 0xc) = *(int *)(iVar10 + 0xc) + 1;
      }
      else if (iStack_28 == 2) {
        piVar2 = *(int **)(_UNK_0217161c + 0x217121c);
        iVar1 = *piVar2;
        iVar7 = *(int *)(iVar1 + 0x74);
        *(undefined1 *)(iVar4 + 0x14) = 1;
        if (iVar7 == 0) {
          func_0x01384ab4();
          iVar1 = *piVar2;
        }
        uVar12 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x50);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
      }
      else if (iStack_28 == 3) {
        piVar2 = *(int **)(_UNK_02171614 + 0x2171184);
        iVar1 = *piVar2;
        iVar7 = *(int *)(iVar1 + 0x74);
        *(undefined1 *)(iVar4 + 0x14) = 1;
        if (iVar7 == 0) {
          func_0x01384ab4();
          iVar1 = *piVar2;
        }
        uVar12 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x54);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        *(int *)(iVar10 + 0x28) = *(int *)(iVar10 + 0x28) + 1;
      }
      else {
        piVar2 = (int *)FUN_021566f4();
        uVar12 = uStack_2c;
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar13) {
              puVar5 = (undefined4 *)(iVar1 + *piVar8 * 8 + 400);
              goto LAB_021712c0;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar13,0x1a);
LAB_021712c0:
        iVar1 = (*(code *)*puVar5)(piVar2,uVar12,puVar5[1]);
        if (iVar1 == 0) {
          piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02171620 + 0x21713d8),4);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          uStack_30 = *(undefined4 *)(iVar10 + 0x10);
          puVar5 = *(undefined4 **)(_UNK_02171624 + 0x21713fc);
          iVar10 = func_0x01384abc(*puVar5,&uStack_30);
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar10 != 0) &&
             (iVar1 = func_0x01384ab8(iVar10,*(undefined4 *)(*piVar2 + 0x20)), iVar1 == 0)) {
            uVar12 = func_0x01384c10();
            func_0x01384aa0(uVar12,0);
          }
          if (piVar2[3] == 0) {
            func_0x01384bf4();
          }
          piVar2[4] = iVar10;
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar10 = *(int *)(iVar4 + 8);
          if ((iVar10 != 0) &&
             (iVar1 = func_0x01384ab8(iVar10,*(undefined4 *)(*piVar2 + 0x20)), iVar1 == 0)) {
            uVar12 = func_0x01384c10();
            func_0x01384aa0(uVar12,0);
          }
          if ((uint)piVar2[3] < 2) {
            func_0x01384bf4();
          }
          piVar2[5] = iVar10;
          uStack_34 = *(undefined4 *)(iVar4 + 0x10);
          iVar4 = func_0x01384abc(**(undefined4 **)(_UNK_02171628 + 0x21714b8),&uStack_34);
          if ((iVar4 != 0) &&
             (iVar10 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar2 + 0x20)), iVar10 == 0)) {
            uVar12 = func_0x01384c10();
            func_0x01384aa0(uVar12,0);
          }
          if ((uint)piVar2[3] < 3) {
            func_0x01384bf4();
          }
          piVar2[6] = iVar4;
          uStack_38 = uStack_2c;
          iVar4 = func_0x01384abc(*puVar5,&uStack_38);
          if ((iVar4 != 0) &&
             (iVar10 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar2 + 0x20)), iVar10 == 0)) {
            uVar12 = func_0x01384c10();
            func_0x01384aa0(uVar12,0);
          }
          if ((uint)piVar2[3] < 4) {
            func_0x01384bf4();
          }
          piVar2[7] = iVar4;
          if (*(int *)(**(int **)(_UNK_0217162c + 0x217156c) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x028c23bc(**(undefined4 **)(_UNK_02171630 + 0x2171590),piVar2,0);
          return;
        }
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        piVar2 = *(int **)(_UNK_02171634 + 0x21712f4);
        iVar1 = *(int *)(iVar4 + 0x10);
        iVar10 = *piVar2;
        if (*(int *)(iVar10 + 0x74) == 0) {
          func_0x01384ab4();
          iVar10 = *piVar2;
        }
        if (iVar1 == 6) {
          uVar12 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x54);
        }
        else {
          uVar12 = *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x50);
        }
      }
      if (*(char *)(iVar4 + 0x14) == '\0') {
        piVar2 = (int *)FUN_021566f4();
        uVar9 = uStack_2c;
        uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02171638 + 0x217134c));
        func_0x024500b4(uVar3,iVar4,**(undefined4 **)(_UNK_0217163c + 0x217136c),0);
        iVar4 = *(int *)(iVar4 + 0x10);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar10 = *piVar2;
        uVar6 = (uint)*(ushort *)(iVar10 + 0xb6);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar13) {
              puVar5 = (undefined4 *)(iVar10 + *piVar8 * 8 + 0x198);
              goto LAB_021715a4;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar13,0x1b);
LAB_021715a4:
        iStack_3c = puVar5[1];
        uStack_40 = (uint)(iVar4 != 6);
        (*(code *)*puVar5)(piVar2,uVar9,uVar12,uVar3);
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
    func_0x02174108(iVar4,uVar12,uVar9,0);
  }
  return;
}



// ===== FAT.Merge.MBItemUsageSpeedUp.<>c__DisplayClass9_0$$.ctor RVA 0x2294718 =====

void FUN_022a4718(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.MBItemUsageSpeedUp$$.ctor RVA 0x2294720 =====

void FUN_022a4720(undefined4 param_1)

{
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.Merge.MBItemUsageSpeedUp$$<>iFixBaseProxy_Initialize RVA 0x2294728 =====

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



// ===== FAT.Merge.MBItemUsageSpeedUp$$<>iFixBaseProxy_SetData RVA 0x229472c =====

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



// ===== FAT.Merge.MBItemUsageSpeedUp$$<>iFixBaseProxy_Refresh RVA 0x2294730 =====

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



// ===== FAT.Merge.MBItemUsageSpeedUp$$<>iFixBaseProxy_UpdateContent RVA 0x2294734 =====

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



// ===== FAT.Merge.MBItemUsageSpeedUp$$<>iFixBaseProxy_OnBtnClick RVA 0x2294738 =====

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



// ===== FAT.Merge.MBItemUsageSpeedUp.<>c__DisplayClass9_0$$<OnBtnClick>b__0 RVA 0x229473c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a473c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_022a4834 + 0x22a4750);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a4838 + 0x22a4764));
    func_0x01384978(*(undefined4 *)(_UNK_022a483c + 0x22a4770));
    func_0x01384978(*(undefined4 *)(_UNK_022a4840 + 0x22a477c));
    *pcVar4 = '\x01';
  }
  iVar1 = FUN_021689a4(*(undefined4 *)(param_1 + 8),0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_02116990(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x28);
  if (0 < iVar1) {
    if (*(int *)(**(int **)(_UNK_022a4844 + 0x22a47dc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_022a4848 + 0x22a47f8));
    uVar3 = *(undefined4 *)(param_1 + 8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 8);
    if (iVar2 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x034a1f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar2 + 0xc))
              (*(undefined4 *)(iVar2 + 0x20),uVar3,iVar1,*(undefined4 *)(iVar2 + 0x14));
    return;
  }
  return;
}


