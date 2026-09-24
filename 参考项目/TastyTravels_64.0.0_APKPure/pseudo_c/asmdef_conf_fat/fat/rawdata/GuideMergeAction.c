/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.GuideMergeAction$$.ctor RVA 0x16828f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016928f0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_01692a18 + 0x1692904);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01692a1c + 0x1692918));
    func_0x01384978(*(undefined4 *)(_UNK_01692a20 + 0x1692924));
    func_0x01384978(*(undefined4 *)(_UNK_01692a24 + 0x1692930));
    func_0x01384978(*(undefined4 *)(_UNK_01692a28 + 0x169293c));
    func_0x01384978(*(undefined4 *)(_UNK_01692a2c + 0x1692948));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_01692a30 + 0x169295c);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_01692a34 + 0x1692970);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  piVar3 = *(int **)(_UNK_01692a38 + 0x1692984);
  param_1[4] = iVar1;
  param_1[5] = *piVar3;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_01692a3c + 0x16929d8);
  param_1[9] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01692a40 + 0x16929f8));
                    /* WARNING: Could not recover jumptable at 0x01692a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.GuideMergeAction$$.ctor RVA 0x1682a44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01692a44(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_01692b44 + 0x1692a5c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01692b48 + 0x1692a70));
    *pcVar4 = '\x01';
  }
  FUN_016928f0(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_01692b4c + 0x1692ab4);
  uVar2 = func_0x03651cc4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x1c);
  uVar1 = *(undefined1 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar5,*puVar6);
  uVar3 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  uVar2 = func_0x0244f914(uVar3,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.GuideMergeAction$$Clone RVA 0x1682b50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01692b50(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01692ba4 + 0x1692b64);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01692ba8 + 0x1692b78));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01692bac + 0x1692b8c));
  FUN_01692a44(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.GuideMergeAction$$ProxyInternalMergeFrom RVA 0x1682bb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01692bb0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  pcVar4 = (char *)(_UNK_01692db8 + 0x1692bc8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01692dbc + 0x1692bdc));
    func_0x01384978(*(undefined4 *)(_UNK_01692dc0 + 0x1692be8));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01692dc4 + 0x1692c18);
    puVar8 = *(undefined4 **)(_UNK_01692dc8 + 0x1692c20);
    do {
      if (uVar1 < 0x19) {
        if (uVar1 == 8) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar3;
        }
        else if (uVar1 == 0x12) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          uVar3 = func_0x01484fc8(param_2,iVar5,uVar3,0);
          *(undefined4 *)(param_1 + 0x14) = uVar3;
        }
        else {
          if (uVar1 != 0x18) goto LAB_01692cd4;
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x18) = lVar9 != 0;
        }
      }
      else {
        if (uVar1 < 0x2b) {
          if (uVar1 == 0x22) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x1c);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
          }
          else {
            if (uVar1 != 0x2a) {
LAB_01692cd4:
              uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
              *(undefined4 *)(param_1 + 8) = uVar3;
              goto LAB_01692d9c;
            }
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x20);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
          }
        }
        else if (uVar1 == 0x32) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x24);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
        }
        else {
          if (uVar1 != 0x3a) goto LAB_01692cd4;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
        }
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar6,param_2,uVar3,*puVar8);
      }
LAB_01692d9c:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.GuideMergeAction$$get_XXX_RowIdentifier RVA 0x1682dcc =====

undefined4 FUN_01692dcc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ===== fat.rawdata.GuideMergeAction$$set_XXX_RowIdentifier RVA 0x1682dd4 =====

void FUN_01692dd4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



// ===== fat.rawdata.GuideMergeAction$$.cctor RVA 0x1682ddc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01692ddc(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01692e98 + 0x1692dec);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01692e9c + 0x1692e00));
    func_0x01384978(*(undefined4 *)(_UNK_01692ea0 + 0x1692e0c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01692ea4 + 0x1692e20);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01692ea8 + 0x1692e30);
  uVar1 = func_0x0244f954(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f954(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  return;
}


