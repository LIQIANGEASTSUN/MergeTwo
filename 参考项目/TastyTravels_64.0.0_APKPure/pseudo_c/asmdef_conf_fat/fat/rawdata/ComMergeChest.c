/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComMergeChest$$.ctor RVA 0x191c674 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192c674(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_0192c7ac + 0x192c688);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192c7b0 + 0x192c69c));
    func_0x01384978(*(undefined4 *)(_UNK_0192c7b4 + 0x192c6a8));
    func_0x01384978(*(undefined4 *)(_UNK_0192c7b8 + 0x192c6b4));
    func_0x01384978(*(undefined4 *)(_UNK_0192c7bc + 0x192c6c0));
    func_0x01384978(*(undefined4 *)(_UNK_0192c7c0 + 0x192c6cc));
    func_0x01384978(*(undefined4 *)(_UNK_0192c7c4 + 0x192c6d8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0192c7c8 + 0x192c6ec));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0192c7cc + 0x192c700));
  puVar5 = *(undefined4 **)(_UNK_0192c7d0 + 0x192c714);
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_0192c7d4 + 0x192c72c);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[9] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[10] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_0192c7d8 + 0x192c76c);
  param_1[0xb] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0192c7dc + 0x192c78c));
                    /* WARNING: Could not recover jumptable at 0x0192c7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComMergeChest$$.ctor RVA 0x191c7e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192c7e0(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  
  pcVar6 = (char *)(_UNK_0192c908 + 0x192c7f8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192c90c + 0x192c80c));
    func_0x01384978(*(undefined4 *)(_UNK_0192c910 + 0x192c818));
    *pcVar6 = '\x01';
  }
  FUN_0192c674(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  iVar7 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar7,**(undefined4 **)(_UNK_0192c914 + 0x192c85c));
  iVar7 = *(int *)(param_2 + 0x24);
  uVar1 = *(undefined1 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  puVar8 = *(undefined4 **)(_UNK_0192c918 + 0x192c89c);
  uVar2 = func_0x0364acbc(iVar7,*puVar8);
  iVar7 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar7,*puVar8);
  iVar7 = *(int *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar7,*puVar8);
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  uVar2 = func_0x0244f914(uVar3,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.ComMergeChest$$Clone RVA 0x191c91c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0192c91c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0192c970 + 0x192c930);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192c974 + 0x192c944));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0192c978 + 0x192c958));
  FUN_0192c7e0(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComMergeChest$$ProxyInternalMergeFrom RVA 0x191c97c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192c97c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  pcVar3 = (char *)(_UNK_0192cc58 + 0x192c998);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192cc5c + 0x192c9ac));
    func_0x01384978(*(undefined4 *)(_UNK_0192cc60 + 0x192c9b8));
    func_0x01384978(*(undefined4 *)(_UNK_0192cc64 + 0x192c9c4));
    *pcVar3 = '\x01';
  }
  iVar4 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar4,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0192cc68 + 0x192c9f4);
    puVar8 = *(undefined4 **)(_UNK_0192cc6c + 0x192c9fc);
    do {
      if (uVar1 < 0x39) {
        if (uVar1 < 0x1b) {
          if (uVar1 == 8) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0xc) = uVar6;
          }
          else if (uVar1 == 0x10) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x10) = uVar6;
          }
          else {
            if (uVar1 != 0x1a) goto LAB_0192cba0;
            iVar2 = *piVar7;
            iVar5 = *(int *)(param_1 + 0x14);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x036520e8(iVar5,param_2,uVar6,**(undefined4 **)(_UNK_0192cc70 + 0x192ca64));
          }
        }
        else if (uVar1 < 0x29) {
          if (uVar1 == 0x20) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x18) = uVar6;
          }
          else {
            if (uVar1 != 0x28) goto LAB_0192cba0;
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x1c) = uVar6;
          }
        }
        else if (uVar1 == 0x30) {
          lVar9 = func_0x01484f88(param_2,iVar4,0);
          *(bool *)(param_1 + 0x20) = lVar9 != 0;
        }
        else {
          if (uVar1 == 0x38) goto LAB_0192cb30;
LAB_0192cba0:
          uVar6 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar6;
        }
      }
      else {
        if (uVar1 < 0x43) {
          if (uVar1 == 0x3a) {
LAB_0192cb30:
            iVar2 = *piVar7;
            iVar5 = *(int *)(param_1 + 0x24);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
          }
          else {
            if (uVar1 != 0x40 && uVar1 != 0x42) goto LAB_0192cba0;
            iVar2 = *piVar7;
            iVar5 = *(int *)(param_1 + 0x28);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
          }
        }
        else {
          if (0x4a < uVar1) {
            if (uVar1 == 0x50) {
              uVar6 = func_0x01484f98(param_2,iVar4,0);
              *(undefined4 *)(param_1 + 0x30) = uVar6;
            }
            else {
              if (uVar1 != 0x58) goto LAB_0192cba0;
              uVar6 = func_0x01484f98(param_2,iVar4,0);
              *(undefined4 *)(param_1 + 0x34) = uVar6;
            }
            goto LAB_0192cbb4;
          }
          if ((uVar1 | 2) != 0x4a) goto LAB_0192cba0;
          iVar2 = *piVar7;
          iVar5 = *(int *)(param_1 + 0x2c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
        }
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x0364b0e0(iVar5,param_2,uVar6,*puVar8);
      }
LAB_0192cbb4:
      uVar1 = func_0x01484f58(param_2,iVar4,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ComMergeChest$$get_XXX_RowIdentifier RVA 0x191cc74 =====

undefined4 FUN_0192cc74(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// ===== fat.rawdata.ComMergeChest$$set_XXX_RowIdentifier RVA 0x191cc7c =====

void FUN_0192cc7c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}



// ===== fat.rawdata.ComMergeChest$$.cctor RVA 0x191cc84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192cc84(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0192cd40 + 0x192cc94);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192cd44 + 0x192cca8));
    func_0x01384978(*(undefined4 *)(_UNK_0192cd48 + 0x192ccb4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0192cd4c + 0x192ccc8);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0192cd50 + 0x192ccd8);
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x42,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  return;
}


