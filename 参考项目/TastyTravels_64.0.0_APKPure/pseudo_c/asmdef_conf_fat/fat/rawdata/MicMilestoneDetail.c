/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.MicMilestoneDetail$$.ctor RVA 0x16dd118 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016ed118(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_016ed250 + 0x16ed12c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016ed254 + 0x16ed140));
    func_0x01384978(*(undefined4 *)(_UNK_016ed258 + 0x16ed14c));
    func_0x01384978(*(undefined4 *)(_UNK_016ed25c + 0x16ed158));
    func_0x01384978(*(undefined4 *)(_UNK_016ed260 + 0x16ed164));
    func_0x01384978(*(undefined4 *)(_UNK_016ed264 + 0x16ed170));
    func_0x01384978(*(undefined4 *)(_UNK_016ed268 + 0x16ed17c));
    *pcVar5 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_016ed26c + 0x16ed190);
  iVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_016ed270 + 0x16ed1a4);
  func_0x036542d8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar7);
  puVar3 = *(undefined4 **)(_UNK_016ed274 + 0x16ed1cc);
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(*puVar3);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_016ed278 + 0x16ed1e4));
  uVar2 = *puVar6;
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar7);
  piVar4 = *(int **)(_UNK_016ed27c + 0x16ed210);
  param_1[9] = iVar1;
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016ed280 + 0x16ed230));
                    /* WARNING: Could not recover jumptable at 0x016ed24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.MicMilestoneDetail$$.ctor RVA 0x16dd284 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016ed284(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_016ed398 + 0x16ed29c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016ed39c + 0x16ed2b0));
    func_0x01384978(*(undefined4 *)(_UNK_016ed3a0 + 0x16ed2bc));
    *pcVar3 = '\x01';
  }
  FUN_016ed118(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_016ed3a4 + 0x16ed300);
  uVar1 = func_0x03651cc4(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,**(undefined4 **)(_UNK_016ed3a8 + 0x16ed354));
  iVar4 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,*puVar5);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.MicMilestoneDetail$$Clone RVA 0x16dd3ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016ed3ac(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016ed400 + 0x16ed3c0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016ed404 + 0x16ed3d4));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016ed408 + 0x16ed3e8));
  FUN_016ed284(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.MicMilestoneDetail$$ProxyInternalMergeFrom RVA 0x16dd40c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016ed40c(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  pcVar4 = (char *)(_UNK_016ed668 + 0x16ed428);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016ed66c + 0x16ed43c));
    func_0x01384978(*(undefined4 *)(_UNK_016ed670 + 0x16ed448));
    func_0x01384978(*(undefined4 *)(_UNK_016ed674 + 0x16ed454));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar8 = *(int **)(_UNK_016ed678 + 0x16ed484);
    puVar9 = *(undefined4 **)(_UNK_016ed67c + 0x16ed48c);
    puVar7 = *(undefined4 **)(_UNK_016ed680 + 0x16ed494);
    do {
      if (uVar1 < 0x21) {
        if (uVar1 < 0x11) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else {
            if (uVar1 != 0x10) goto LAB_016ed584;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x14) = uVar2;
          }
        }
        else if (uVar1 == 0x1a) {
          iVar3 = *piVar8;
          iVar6 = *(int *)(param_1 + 0x18);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar8;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x036520e8(iVar6,param_2,uVar2,*puVar9);
          puVar7 = *(undefined4 **)(_UNK_016ed684 + 0x16ed604);
        }
        else {
          if (uVar1 != 0x20) goto LAB_016ed584;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
      }
      else if (uVar1 < 0x2b) {
        if ((uVar1 | 2) == 0x2a) {
          iVar3 = *piVar8;
          iVar6 = *(int *)(param_1 + 0x20);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar8;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0364b0e0(iVar6,param_2,uVar2,*puVar7);
        }
        else {
LAB_016ed584:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else {
        if (uVar1 == 0x32) {
          iVar3 = *piVar8;
          iVar6 = *(int *)(param_1 + 0x24);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar8;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
        }
        else {
          if (uVar1 != 0x3a) goto LAB_016ed584;
          iVar3 = *piVar8;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar8;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
        }
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar6,param_2,uVar2,*puVar9);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.MicMilestoneDetail$$get_XXX_RowIdentifier RVA 0x16dd688 =====

undefined4 FUN_016ed688(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ===== fat.rawdata.MicMilestoneDetail$$set_XXX_RowIdentifier RVA 0x16dd690 =====

void FUN_016ed690(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



// ===== fat.rawdata.MicMilestoneDetail$$.cctor RVA 0x16dd698 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016ed698(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016ed754 + 0x16ed6a8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016ed758 + 0x16ed6bc));
    func_0x01384978(*(undefined4 *)(_UNK_016ed75c + 0x16ed6c8));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_016ed760 + 0x16ed6dc);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_016ed764 + 0x16ed6ec);
  uVar1 = func_0x0244f954(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f954(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  return;
}


