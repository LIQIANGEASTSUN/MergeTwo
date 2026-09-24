/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComMergeActiveSource$$.ctor RVA 0x1919a50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01929a50(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01929b18 + 0x1929a64);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01929b1c + 0x1929a78));
    func_0x01384978(*(undefined4 *)(_UNK_01929b20 + 0x1929a84));
    func_0x01384978(*(undefined4 *)(_UNK_01929b24 + 0x1929a90));
    func_0x01384978(*(undefined4 *)(_UNK_01929b28 + 0x1929a9c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01929b2c + 0x1929ab0));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_01929b30 + 0x1929ac4));
  piVar2 = *(int **)(_UNK_01929b34 + 0x1929ad8);
  param_1[4] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01929b38 + 0x1929af8));
                    /* WARNING: Could not recover jumptable at 0x01929b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComMergeActiveSource$$.ctor RVA 0x1919b3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01929b3c(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  
  pcVar6 = (char *)(_UNK_01929be4 + 0x1929b54);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01929be8 + 0x1929b68));
    *pcVar6 = '\x01';
  }
  FUN_01929a50(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar7,**(undefined4 **)(_UNK_01929bec + 0x1929ba8));
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar1 = *(undefined1 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  uVar2 = func_0x0244f914(uVar3,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.ComMergeActiveSource$$Clone RVA 0x1919bf0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01929bf0(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01929c44 + 0x1929c04);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01929c48 + 0x1929c18));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01929c4c + 0x1929c2c));
  FUN_01929b3c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComMergeActiveSource$$ProxyInternalMergeFrom RVA 0x1919c50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01929c50(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  pcVar4 = (char *)(_UNK_01929dcc + 0x1929c68);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01929dd0 + 0x1929c7c));
    func_0x01384978(*(undefined4 *)(_UNK_01929dd4 + 0x1929c88));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01929dd8 + 0x1929cb8);
    puVar8 = *(undefined4 **)(_UNK_01929ddc + 0x1929cc0);
    do {
      if (uVar1 < 0x11) {
        if (uVar1 == 8) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar2;
        }
        else if (uVar1 == 0x10) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
        else {
LAB_01929d4c:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 == 0x18) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x14) = uVar2;
      }
      else if (uVar1 == 0x20) {
        lVar9 = func_0x01484f88(param_2,iVar5,0);
        *(bool *)(param_1 + 0x18) = lVar9 != 0;
      }
      else {
        if (uVar1 != 0x2a) goto LAB_01929d4c;
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
        func_0x036520e8(iVar6,param_2,uVar2,*puVar8);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ComMergeActiveSource$$get_XXX_RowIdentifier RVA 0x1919de0 =====

undefined4 FUN_01929de0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== fat.rawdata.ComMergeActiveSource$$set_XXX_RowIdentifier RVA 0x1919de8 =====

void FUN_01929de8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== fat.rawdata.ComMergeActiveSource$$.cctor RVA 0x1919df0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01929df0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01929e64 + 0x1929e00);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01929e68 + 0x1929e14));
    func_0x01384978(*(undefined4 *)(_UNK_01929e6c + 0x1929e20));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01929e70 + 0x1929e34);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01929e74 + 0x1929e44);
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


