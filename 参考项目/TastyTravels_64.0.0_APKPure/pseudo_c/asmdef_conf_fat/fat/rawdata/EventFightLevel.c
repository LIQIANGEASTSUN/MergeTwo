/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventFightLevel$$.ctor RVA 0x15c0744 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015d0744(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_015d08a0 + 0x15d0758);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d08a4 + 0x15d076c));
    func_0x01384978(*(undefined4 *)(_UNK_015d08a8 + 0x15d0778));
    func_0x01384978(*(undefined4 *)(_UNK_015d08ac + 0x15d0784));
    func_0x01384978(*(undefined4 *)(_UNK_015d08b0 + 0x15d0790));
    func_0x01384978(*(undefined4 *)(_UNK_015d08b4 + 0x15d079c));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_015d08b8 + 0x15d07b0);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_015d08bc + 0x15d07c4);
  func_0x0244f948(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_015d08c0 + 0x15d0804);
  param_1[7] = iVar1;
  iVar1 = *piVar3;
  uVar2 = *puVar5;
  param_1[8] = iVar1;
  param_1[9] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[0xb] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[0xc] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_015d08c4 + 0x15d0860);
  param_1[0xd] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015d08c8 + 0x15d0880));
                    /* WARNING: Could not recover jumptable at 0x015d089c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventFightLevel$$.ctor RVA 0x15c08cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015d08cc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_015d0a14 + 0x15d08e4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d0a18 + 0x15d08f8));
    *pcVar5 = '\x01';
  }
  FUN_015d0744(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_015d0a1c + 0x15d093c);
  uVar1 = func_0x0244f94c(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  iVar6 = *(int *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventFightLevel$$Clone RVA 0x15c0a20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015d0a20(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015d0a74 + 0x15d0a34);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d0a78 + 0x15d0a48));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015d0a7c + 0x15d0a5c));
  FUN_015d08cc(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventFightLevel$$ProxyInternalMergeFrom RVA 0x15c0a80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015d0a80(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_015d0d60 + 0x15d0a98);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d0d64 + 0x15d0aac));
    func_0x01384978(*(undefined4 *)(_UNK_015d0d68 + 0x15d0ab8));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015d0d6c + 0x15d0ae8);
    puVar8 = *(undefined4 **)(_UNK_015d0d70 + 0x15d0af0);
    do {
      if (uVar1 < 0x41) {
        if (uVar1 < 0x21) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else {
            if (uVar1 == 0x12) {
              iVar3 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x14);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar7;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
              goto LAB_015d0cb0;
            }
            if (uVar1 == 0x20) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x18) = uVar2;
            }
            else {
LAB_015d0be4:
              uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
              *(undefined4 *)(param_1 + 8) = uVar2;
            }
          }
        }
        else {
          if (uVar1 == 0x32) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x1c);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
            goto LAB_015d0cb0;
          }
          if (uVar1 == 0x3a) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
            *(undefined4 *)(param_1 + 0x20) = uVar2;
          }
          else {
            if (uVar1 != 0x40) goto LAB_015d0be4;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x28) = uVar2;
          }
        }
      }
      else if (uVar1 < 0x5b) {
        if (uVar1 == 0x4a) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x2c);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
        }
        else if (uVar1 == 0x52) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x30);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
        }
        else {
          if (uVar1 != 0x5a) goto LAB_015d0be4;
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x34);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x18);
        }
LAB_015d0cb0:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f950(iVar6,param_2,uVar2,*puVar8);
      }
      else if (uVar1 == 0x60) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x38) = uVar2;
      }
      else {
        if (uVar1 != 0x6a) {
          if (uVar1 != 0x7a) goto LAB_015d0be4;
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
          goto LAB_015d0cb0;
        }
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
        *(undefined4 *)(param_1 + 0x24) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventFightLevel$$get_XXX_RowIdentifier RVA 0x15c0d74 =====

undefined4 FUN_015d0d74(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ===== fat.rawdata.EventFightLevel$$set_XXX_RowIdentifier RVA 0x15c0d7c =====

void FUN_015d0d7c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}



// ===== fat.rawdata.EventFightLevel$$.cctor RVA 0x15c0d84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015d0d84(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015d0e70 + 0x15d0d94);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d0e74 + 0x15d0da8));
    func_0x01384978(*(undefined4 *)(_UNK_015d0e78 + 0x15d0db4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015d0e7c + 0x15d0dc8);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015d0e80 + 0x15d0dd8);
  uVar1 = func_0x0244f954(0x7a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f954(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f954(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f954(0x52,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f954(0x5a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x18) = uVar1;
  return;
}


