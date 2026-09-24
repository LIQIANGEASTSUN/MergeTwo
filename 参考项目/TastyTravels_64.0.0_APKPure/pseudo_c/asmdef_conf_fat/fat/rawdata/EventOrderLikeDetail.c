/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventOrderLikeDetail$$.ctor RVA 0x15fe51c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0160e51c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_0160e668 + 0x160e530);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0160e66c + 0x160e544));
    func_0x01384978(*(undefined4 *)(_UNK_0160e670 + 0x160e550));
    func_0x01384978(*(undefined4 *)(_UNK_0160e674 + 0x160e55c));
    func_0x01384978(*(undefined4 *)(_UNK_0160e678 + 0x160e568));
    func_0x01384978(*(undefined4 *)(_UNK_0160e67c + 0x160e574));
    func_0x01384978(*(undefined4 *)(_UNK_0160e680 + 0x160e580));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_0160e684 + 0x160e594);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_0160e688 + 0x160e5a8);
  func_0x0244f948(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar6);
  puVar7 = *(undefined4 **)(_UNK_0160e68c + 0x160e5d0);
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(*puVar7);
  puVar8 = *(undefined4 **)(_UNK_0160e690 + 0x160e5e8);
  func_0x0244f964(iVar1,*puVar8);
  uVar2 = *puVar5;
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar6);
  uVar2 = *puVar7;
  param_1[9] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar8);
  piVar3 = *(int **)(_UNK_0160e694 + 0x160e628);
  param_1[10] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0160e698 + 0x160e648));
                    /* WARNING: Could not recover jumptable at 0x0160e664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventOrderLikeDetail$$.ctor RVA 0x15fe69c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0160e69c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar3 = (char *)(_UNK_0160e7d0 + 0x160e6b4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0160e7d4 + 0x160e6c8));
    func_0x01384978(*(undefined4 *)(_UNK_0160e7d8 + 0x160e6d4));
    *pcVar3 = '\x01';
  }
  FUN_0160e51c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_0160e7dc + 0x160e718);
  uVar1 = func_0x0244f94c(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_0160e7e0 + 0x160e768);
  uVar1 = func_0x0244f968(iVar4,*puVar6);
  iVar4 = *(int *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar4,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventOrderLikeDetail$$Clone RVA 0x15fe7e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0160e7e4(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0160e838 + 0x160e7f8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0160e83c + 0x160e80c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0160e840 + 0x160e820));
  FUN_0160e69c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventOrderLikeDetail$$ProxyInternalMergeFrom RVA 0x15fe844 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0160e844(int param_1,int param_2)

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
  
  pcVar3 = (char *)(_UNK_0160eab0 + 0x160e860);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0160eab4 + 0x160e874));
    func_0x01384978(*(undefined4 *)(_UNK_0160eab8 + 0x160e880));
    func_0x01384978(*(undefined4 *)(_UNK_0160eabc + 0x160e88c));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0160eac0 + 0x160e8bc);
    puVar8 = *(undefined4 **)(_UNK_0160eac4 + 0x160e8c4);
    puVar9 = *(undefined4 **)(_UNK_0160eac8 + 0x160e8cc);
    do {
      if (uVar1 < 0x23) {
        if (uVar1 < 0x13) {
          if (uVar1 == 8) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar4;
          }
          else {
            if (uVar1 == 0x12) {
              iVar2 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x14);
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar7;
              }
              uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
              goto LAB_0160ea3c;
            }
LAB_0160ea60:
            uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar4;
          }
        }
        else {
          if (uVar1 != 0x18) {
            if (uVar1 == 0x20 || uVar1 == 0x22) {
              iVar2 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x1c);
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar7;
              }
              uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
              goto LAB_0160e9bc;
            }
            goto LAB_0160ea60;
          }
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x18) = uVar4;
        }
      }
      else if (uVar1 < 0x33) {
        if (uVar1 == 0x28) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x20) = uVar4;
        }
        else {
          if (uVar1 != 0x32) goto LAB_0160ea60;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x24);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
LAB_0160ea3c:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0244f950(iVar6,param_2,uVar4,*puVar8);
        }
      }
      else {
        if (uVar1 != 0x38 && uVar1 != 0x3a) {
          if (uVar1 == 0x42) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x10);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
            goto LAB_0160ea3c;
          }
          goto LAB_0160ea60;
        }
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x28);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
LAB_0160e9bc:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f96c(iVar6,param_2,uVar4,*puVar9);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventOrderLikeDetail$$get_XXX_RowIdentifier RVA 0x15feacc =====

undefined4 FUN_0160eacc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ===== fat.rawdata.EventOrderLikeDetail$$set_XXX_RowIdentifier RVA 0x15fead4 =====

void FUN_0160ead4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// ===== fat.rawdata.EventOrderLikeDetail$$.cctor RVA 0x15feadc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0160eadc(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0160ebb0 + 0x160eaec);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0160ebb4 + 0x160eb00));
    func_0x01384978(*(undefined4 *)(_UNK_0160ebb8 + 0x160eb0c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0160ebbc + 0x160eb20);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0160ebc0 + 0x160eb30);
  uVar1 = func_0x0244f954(0x42,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f954(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f970(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  return;
}


