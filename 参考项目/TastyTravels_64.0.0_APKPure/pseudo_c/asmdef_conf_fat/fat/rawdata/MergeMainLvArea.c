/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.MergeMainLvArea$$.ctor RVA 0x16b830c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c830c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_016c840c + 0x16c8320);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c8410 + 0x16c8334));
    func_0x01384978(*(undefined4 *)(_UNK_016c8414 + 0x16c8340));
    func_0x01384978(*(undefined4 *)(_UNK_016c8418 + 0x16c834c));
    func_0x01384978(*(undefined4 *)(_UNK_016c841c + 0x16c8358));
    func_0x01384978(*(undefined4 *)(_UNK_016c8420 + 0x16c8364));
    *pcVar5 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_016c8424 + 0x16c8378);
  iVar1 = func_0x01384be4(*puVar6);
  puVar8 = *(undefined4 **)(_UNK_016c8428 + 0x16c838c);
  func_0x036542d8(iVar1,*puVar8);
  uVar2 = *puVar6;
  piVar7 = *(int **)(_UNK_016c842c + 0x16c83a0);
  param_1[4] = iVar1;
  param_1[5] = *piVar7;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar8);
  piVar3 = *(int **)(_UNK_016c8430 + 0x16c83c4);
  iVar4 = *piVar7;
  param_1[6] = iVar1;
  iVar1 = *piVar3;
  param_1[7] = iVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016c8434 + 0x16c83ec));
                    /* WARNING: Could not recover jumptable at 0x016c8408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.MergeMainLvArea$$.ctor RVA 0x16b8438 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c8438(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_016c84fc + 0x16c8450);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c8500 + 0x16c8464));
    *pcVar5 = '\x01';
  }
  FUN_016c830c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_016c8504 + 0x16c84a8);
  uVar1 = func_0x03651cc4(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.MergeMainLvArea$$Clone RVA 0x16b8508 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016c8508(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016c855c + 0x16c851c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c8560 + 0x16c8530));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016c8564 + 0x16c8544));
  FUN_016c8438(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.MergeMainLvArea$$ProxyInternalMergeFrom RVA 0x16b8568 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c8568(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_016c8734 + 0x16c8580);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c8738 + 0x16c8594));
    func_0x01384978(*(undefined4 *)(_UNK_016c873c + 0x16c85a0));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016c8740 + 0x16c85d0);
    puVar8 = *(undefined4 **)(_UNK_016c8744 + 0x16c85d8);
    do {
      if (uVar1 < 0x1b) {
        if (uVar1 == 8) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar2;
        }
        else {
          if (uVar1 == 0x12) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x10);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
            goto LAB_016c86f8;
          }
          if (uVar1 == 0x1a) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
            *(undefined4 *)(param_1 + 0x14) = uVar2;
          }
          else {
LAB_016c8650:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
      }
      else if (uVar1 == 0x22) {
        iVar3 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x18);
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
LAB_016c86f8:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar6,param_2,uVar2,*puVar8);
      }
      else if (uVar1 == 0x2a) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
        *(undefined4 *)(param_1 + 0x1c) = uVar2;
      }
      else {
        if (uVar1 != 0x30) goto LAB_016c8650;
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x20) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.MergeMainLvArea$$get_XXX_RowIdentifier RVA 0x16b8748 =====

undefined4 FUN_016c8748(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// ===== fat.rawdata.MergeMainLvArea$$set_XXX_RowIdentifier RVA 0x16b8750 =====

void FUN_016c8750(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



// ===== fat.rawdata.MergeMainLvArea$$.cctor RVA 0x16b8758 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c8758(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016c87e4 + 0x16c8768);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c87e8 + 0x16c877c));
    func_0x01384978(*(undefined4 *)(_UNK_016c87ec + 0x16c8788));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_016c87f0 + 0x16c879c);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_016c87f4 + 0x16c87ac);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


