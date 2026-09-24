/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventMiniBoardMultiGroup$$.ctor RVA 0x15eea3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015fea3c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_015feb5c + 0x15fea50);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015feb60 + 0x15fea64));
    func_0x01384978(*(undefined4 *)(_UNK_015feb64 + 0x15fea70));
    func_0x01384978(*(undefined4 *)(_UNK_015feb68 + 0x15fea7c));
    func_0x01384978(*(undefined4 *)(_UNK_015feb6c + 0x15fea88));
    func_0x01384978(*(undefined4 *)(_UNK_015feb70 + 0x15fea94));
    func_0x01384978(*(undefined4 *)(_UNK_015feb74 + 0x15feaa0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015feb78 + 0x15feab4));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_015feb7c + 0x15feac8));
  puVar5 = *(undefined4 **)(_UNK_015feb80 + 0x15feadc);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_015feb84 + 0x15feaf4);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_015feb88 + 0x15feb1c);
  param_1[8] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015feb8c + 0x15feb3c));
                    /* WARNING: Could not recover jumptable at 0x015feb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventMiniBoardMultiGroup$$.ctor RVA 0x15eeb90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015feb90(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_015fec8c + 0x15feba8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fec90 + 0x15febbc));
    func_0x01384978(*(undefined4 *)(_UNK_015fec94 + 0x15febc8));
    *pcVar4 = '\x01';
  }
  FUN_015fea3c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar5,**(undefined4 **)(_UNK_015fec98 + 0x15fec08));
  iVar5 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_015fec9c + 0x15fec3c);
  uVar1 = func_0x0244f968(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventMiniBoardMultiGroup$$Clone RVA 0x15eeca0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015feca0(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015fecf4 + 0x15fecb4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fecf8 + 0x15fecc8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015fecfc + 0x15fecdc));
  FUN_015feb90(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventMiniBoardMultiGroup$$ProxyInternalMergeFrom RVA 0x15eed00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015fed00(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar4 = (char *)(_UNK_015fef38 + 0x15fed1c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fef3c + 0x15fed30));
    func_0x01384978(*(undefined4 *)(_UNK_015fef40 + 0x15fed3c));
    func_0x01384978(*(undefined4 *)(_UNK_015fef44 + 0x15fed48));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015fef48 + 0x15fed78);
    puVar8 = *(undefined4 **)(_UNK_015fef4c + 0x15fed80);
    puVar9 = *(undefined4 **)(_UNK_015fef50 + 0x15fed88);
    do {
      if (uVar1 < 0x19) {
        if (uVar1 < 0x11) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else {
            if (uVar1 == 0x10) goto LAB_015fee64;
LAB_015fee4c:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else if (uVar1 == 0x12) {
LAB_015fee64:
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x18);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
LAB_015feeb0:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0244f96c(iVar6,param_2,uVar2,*puVar8);
        }
        else {
          if (uVar1 != 0x18) goto LAB_015fee4c;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
      }
      else if (uVar1 < 0x29) {
        if (uVar1 != 0x20) {
          if (uVar1 != 0x28) goto LAB_015fee4c;
LAB_015fee8c:
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x20);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
          goto LAB_015feeb0;
        }
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x14) = uVar2;
      }
      else {
        if (uVar1 == 0x2a) goto LAB_015fee8c;
        if (uVar1 == 0x30) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x24) = uVar2;
        }
        else {
          if (uVar1 != 0x3a) goto LAB_015fee4c;
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
          func_0x0244f950(iVar6,param_2,uVar2,*puVar9);
        }
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventMiniBoardMultiGroup$$get_XXX_RowIdentifier RVA 0x15eef54 =====

undefined4 FUN_015fef54(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ===== fat.rawdata.EventMiniBoardMultiGroup$$set_XXX_RowIdentifier RVA 0x15eef5c =====

void FUN_015fef5c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



// ===== fat.rawdata.EventMiniBoardMultiGroup$$.cctor RVA 0x15eef64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015fef64(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015ff008 + 0x15fef74);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015ff00c + 0x15fef88));
    func_0x01384978(*(undefined4 *)(_UNK_015ff010 + 0x15fef94));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015ff014 + 0x15fefa8);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015ff018 + 0x15fefb8);
  uVar1 = func_0x0244f954(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}


