/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComMergeJumpCD$$.ctor RVA 0x1920a84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01930a84(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01930b4c + 0x1930a98);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01930b50 + 0x1930aac));
    func_0x01384978(*(undefined4 *)(_UNK_01930b54 + 0x1930ab8));
    func_0x01384978(*(undefined4 *)(_UNK_01930b58 + 0x1930ac4));
    func_0x01384978(*(undefined4 *)(_UNK_01930b5c + 0x1930ad0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01930b60 + 0x1930ae4));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_01930b64 + 0x1930af8));
  piVar2 = *(int **)(_UNK_01930b68 + 0x1930b0c);
  param_1[4] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01930b6c + 0x1930b2c));
                    /* WARNING: Could not recover jumptable at 0x01930b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComMergeJumpCD$$.ctor RVA 0x1920b70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01930b70(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar5 = (char *)(_UNK_01930c0c + 0x1930b88);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01930c10 + 0x1930b9c));
    *pcVar5 = '\x01';
  }
  FUN_01930a84(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,**(undefined4 **)(_UNK_01930c14 + 0x1930bdc));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.ComMergeJumpCD$$Clone RVA 0x1920c18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01930c18(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01930c6c + 0x1930c2c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01930c70 + 0x1930c40));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01930c74 + 0x1930c54));
  FUN_01930b70(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComMergeJumpCD$$ProxyInternalMergeFrom RVA 0x1920c78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01930c78(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_01930dcc + 0x1930c90);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01930dd0 + 0x1930ca4));
    func_0x01384978(*(undefined4 *)(_UNK_01930dd4 + 0x1930cb0));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01930dd8 + 0x1930ce0);
    puVar8 = *(undefined4 **)(_UNK_01930ddc + 0x1930ce8);
    do {
      if (uVar1 < 0x11) {
        if (uVar1 == 8) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar2;
        }
        else if (uVar1 == 0x10) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x14) = uVar2;
        }
        else {
LAB_01930d6c:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 == 0x18) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x18) = uVar2;
      }
      else {
        if (uVar1 != 0x22) goto LAB_01930d6c;
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



// ===== fat.rawdata.ComMergeJumpCD$$get_XXX_RowIdentifier RVA 0x1920de0 =====

undefined4 FUN_01930de0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ===== fat.rawdata.ComMergeJumpCD$$set_XXX_RowIdentifier RVA 0x1920de8 =====

void FUN_01930de8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



// ===== fat.rawdata.ComMergeJumpCD$$.cctor RVA 0x1920df0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01930df0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01930e64 + 0x1930e00);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01930e68 + 0x1930e14));
    func_0x01384978(*(undefined4 *)(_UNK_01930e6c + 0x1930e20));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01930e70 + 0x1930e34);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01930e74 + 0x1930e44);
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


