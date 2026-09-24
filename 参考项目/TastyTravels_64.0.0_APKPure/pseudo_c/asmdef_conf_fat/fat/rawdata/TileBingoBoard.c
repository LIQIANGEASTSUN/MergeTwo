/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.TileBingoBoard$$get_XXX_RowIdentifier RVA 0x172e88c =====

undefined4 FUN_0173e88c(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== fat.rawdata.TileBingoBoard$$set_XXX_RowIdentifier RVA 0x172e894 =====

void FUN_0173e894(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== fat.rawdata.TileBingoBoard$$.ctor RVA 0x172e89c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0173e89c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_0173e9e8 + 0x173e8b0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0173e9ec + 0x173e8c4));
    func_0x01384978(*(undefined4 *)(_UNK_0173e9f0 + 0x173e8d0));
    func_0x01384978(*(undefined4 *)(_UNK_0173e9f4 + 0x173e8dc));
    func_0x01384978(*(undefined4 *)(_UNK_0173e9f8 + 0x173e8e8));
    func_0x01384978(*(undefined4 *)(_UNK_0173e9fc + 0x173e8f4));
    func_0x01384978(*(undefined4 *)(_UNK_0173ea00 + 0x173e900));
    *pcVar4 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_0173ea04 + 0x173e914);
  iVar1 = func_0x01384be4(*puVar7);
  puVar8 = *(undefined4 **)(_UNK_0173ea08 + 0x173e928);
  func_0x036542d8(iVar1,*puVar8);
  uVar2 = *puVar7;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar8);
  puVar5 = *(undefined4 **)(_UNK_0173ea0c + 0x173e950);
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_0173ea10 + 0x173e968);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar7;
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar8);
  piVar3 = *(int **)(_UNK_0173ea14 + 0x173e9a8);
  param_1[9] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0173ea18 + 0x173e9c8));
                    /* WARNING: Could not recover jumptable at 0x0173e9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.TileBingoBoard$$.ctor RVA 0x172ea1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0173ea1c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar3 = (char *)(_UNK_0173eb40 + 0x173ea34);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0173eb44 + 0x173ea48));
    func_0x01384978(*(undefined4 *)(_UNK_0173eb48 + 0x173ea54));
    *pcVar3 = '\x01';
  }
  FUN_0173e89c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_0173eb4c + 0x173ea98);
  uVar1 = func_0x03651cc4(iVar4,*puVar6);
  iVar4 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,*puVar6);
  iVar4 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_0173eb50 + 0x173eae0);
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.TileBingoBoard$$Clone RVA 0x172eb54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0173eb54(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0173eba8 + 0x173eb68);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0173ebac + 0x173eb7c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0173ebb0 + 0x173eb90));
  FUN_0173ea1c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.TileBingoBoard$$ProxyInternalMergeFrom RVA 0x172ebb4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0173ebb4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar3 = (char *)(_UNK_0173ede8 + 0x173ebd0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0173edec + 0x173ebe4));
    func_0x01384978(*(undefined4 *)(_UNK_0173edf0 + 0x173ebf0));
    func_0x01384978(*(undefined4 *)(_UNK_0173edf4 + 0x173ebfc));
    *pcVar3 = '\x01';
  }
  iVar6 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar6,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0173edf8 + 0x173ec2c);
    puVar8 = *(undefined4 **)(_UNK_0173edfc + 0x173ec34);
    puVar9 = *(undefined4 **)(_UNK_0173ee00 + 0x173ec3c);
    do {
      if (uVar1 < 0x21) {
        if (uVar1 < 0x13) {
          if (uVar1 == 8) {
            uVar4 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x10) = uVar4;
            goto LAB_0173edc8;
          }
          if (uVar1 != 0x12) goto LAB_0173ed0c;
          iVar2 = *piVar7;
          iVar5 = *(int *)(param_1 + 0x14);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
        }
        else {
          if (uVar1 != 0x1a) {
            if (uVar1 == 0x20) goto LAB_0173ecac;
            goto LAB_0173ed0c;
          }
          iVar2 = *piVar7;
          iVar5 = *(int *)(param_1 + 0x18);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
        }
LAB_0173eda8:
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar5,param_2,uVar4,*puVar8);
      }
      else {
        if (uVar1 < 0x29) {
          if (uVar1 == 0x22) {
LAB_0173ecac:
            iVar2 = *piVar7;
            iVar5 = *(int *)(param_1 + 0x1c);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
LAB_0173ed48:
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x0364b0e0(iVar5,param_2,uVar4,*puVar9);
            goto LAB_0173edc8;
          }
          if (uVar1 == 0x28) goto LAB_0173ed24;
        }
        else {
          if (uVar1 == 0x2a) {
LAB_0173ed24:
            iVar2 = *piVar7;
            iVar5 = *(int *)(param_1 + 0x20);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
            goto LAB_0173ed48;
          }
          if (uVar1 == 0x32) {
            iVar2 = *piVar7;
            iVar5 = *(int *)(param_1 + 0x24);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
            goto LAB_0173eda8;
          }
        }
LAB_0173ed0c:
        uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar4;
      }
LAB_0173edc8:
      uVar1 = func_0x01484f58(param_2,iVar6,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.TileBingoBoard$$.cctor RVA 0x172ee04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0173ee04(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0173eed8 + 0x173ee14);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0173eedc + 0x173ee28));
    func_0x01384978(*(undefined4 *)(_UNK_0173eee0 + 0x173ee34));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0173eee4 + 0x173ee48);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0173eee8 + 0x173ee58);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f954(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  return;
}


