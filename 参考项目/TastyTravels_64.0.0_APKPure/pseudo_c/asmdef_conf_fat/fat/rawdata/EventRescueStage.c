/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventRescueStage$$.ctor RVA 0x1623298 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01633298(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_016333d0 + 0x16332ac);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016333d4 + 0x16332c0));
    func_0x01384978(*(undefined4 *)(_UNK_016333d8 + 0x16332cc));
    func_0x01384978(*(undefined4 *)(_UNK_016333dc + 0x16332d8));
    func_0x01384978(*(undefined4 *)(_UNK_016333e0 + 0x16332e4));
    func_0x01384978(*(undefined4 *)(_UNK_016333e4 + 0x16332f0));
    func_0x01384978(*(undefined4 *)(_UNK_016333e8 + 0x16332fc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016333ec + 0x1633310));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_016333f0 + 0x1633324));
  puVar5 = *(undefined4 **)(_UNK_016333f4 + 0x1633338);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_016333f8 + 0x1633350);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[10] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_016333fc + 0x1633390);
  param_1[0xc] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01633400 + 0x16333b0));
                    /* WARNING: Could not recover jumptable at 0x016333cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventRescueStage$$.ctor RVA 0x1623404 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01633404(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_01633520 + 0x163341c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01633524 + 0x1633430));
    func_0x01384978(*(undefined4 *)(_UNK_01633528 + 0x163343c));
    *pcVar4 = '\x01';
  }
  FUN_01633298(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar5,**(undefined4 **)(_UNK_0163352c + 0x163347c));
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_01633530 + 0x16334b0);
  uVar1 = func_0x0244f968(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  iVar5 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x30);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventRescueStage$$Clone RVA 0x1623534 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01633534(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01633588 + 0x1633548);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0163358c + 0x163355c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01633590 + 0x1633570));
  FUN_01633404(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventRescueStage$$ProxyInternalMergeFrom RVA 0x1623594 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01633594(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_01633844 + 0x16335b0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01633848 + 0x16335c4));
    func_0x01384978(*(undefined4 *)(_UNK_0163384c + 0x16335d0));
    func_0x01384978(*(undefined4 *)(_UNK_01633850 + 0x16335dc));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01633854 + 0x163360c);
    puVar8 = *(undefined4 **)(_UNK_01633858 + 0x1633614);
    do {
      if (uVar1 < 0x29) {
        if (uVar1 < 0x19) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else if (uVar1 == 0x12) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x10);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x0244f950(iVar6,param_2,uVar2,**(undefined4 **)(_UNK_0163385c + 0x1633800));
          }
          else {
            if (uVar1 != 0x18) goto LAB_0163372c;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x14) = uVar2;
          }
        }
        else if (uVar1 == 0x20 || uVar1 == 0x22) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x1c);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
LAB_01633768:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0244f96c(iVar6,param_2,uVar2,*puVar8);
        }
        else {
          if (uVar1 != 0x28) goto LAB_0163372c;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
      }
      else if (uVar1 < 0x3b) {
        if (uVar1 == 0x30) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x24) = uVar2;
        }
        else {
          if (uVar1 == 0x38 || uVar1 == 0x3a) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x28);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
            goto LAB_01633768;
          }
LAB_0163372c:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 < 0x49) {
        if (uVar1 != 0x40) {
          if (uVar1 != 0x48) goto LAB_0163372c;
LAB_01633744:
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x30);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
          goto LAB_01633768;
        }
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x2c) = uVar2;
      }
      else {
        if (uVar1 == 0x4a) goto LAB_01633744;
        if (uVar1 != 0x50) goto LAB_0163372c;
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x18) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventRescueStage$$get_XXX_RowIdentifier RVA 0x1623860 =====

undefined4 FUN_01633860(int param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



// ===== fat.rawdata.EventRescueStage$$set_XXX_RowIdentifier RVA 0x1623868 =====

void FUN_01633868(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}



// ===== fat.rawdata.EventRescueStage$$.cctor RVA 0x1623870 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01633870(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0163392c + 0x1633880);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01633930 + 0x1633894));
    func_0x01384978(*(undefined4 *)(_UNK_01633934 + 0x16338a0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01633938 + 0x16338b4);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0163393c + 0x16338c4);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  return;
}


