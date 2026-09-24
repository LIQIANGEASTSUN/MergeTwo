/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.MergeFixedOutput$$.ctor RVA 0x16b3c00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c3c00(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_016c3d0c + 0x16c3c14);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c3d10 + 0x16c3c28));
    func_0x01384978(*(undefined4 *)(_UNK_016c3d14 + 0x16c3c34));
    func_0x01384978(*(undefined4 *)(_UNK_016c3d18 + 0x16c3c40));
    func_0x01384978(*(undefined4 *)(_UNK_016c3d1c + 0x16c3c4c));
    func_0x01384978(*(undefined4 *)(_UNK_016c3d20 + 0x16c3c58));
    func_0x01384978(*(undefined4 *)(_UNK_016c3d24 + 0x16c3c64));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016c3d28 + 0x16c3c78));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_016c3d2c + 0x16c3c8c));
  puVar2 = *(undefined4 **)(_UNK_016c3d30 + 0x16c3ca0);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_016c3d34 + 0x16c3cb8));
  piVar3 = *(int **)(_UNK_016c3d38 + 0x16c3ccc);
  param_1[5] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016c3d3c + 0x16c3cec));
                    /* WARNING: Could not recover jumptable at 0x016c3d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.MergeFixedOutput$$.ctor RVA 0x16b3d40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c3d40(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_016c3e04 + 0x16c3d58);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c3e08 + 0x16c3d6c));
    func_0x01384978(*(undefined4 *)(_UNK_016c3e0c + 0x16c3d78));
    *pcVar3 = '\x01';
  }
  FUN_016c3c00(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_016c3e10 + 0x16c3db8));
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,**(undefined4 **)(_UNK_016c3e14 + 0x16c3de0));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.MergeFixedOutput$$Clone RVA 0x16b3e18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016c3e18(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016c3e6c + 0x16c3e2c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c3e70 + 0x16c3e40));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016c3e74 + 0x16c3e54));
  FUN_016c3d40(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.MergeFixedOutput$$ProxyInternalMergeFrom RVA 0x16b3e78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c3e78(int param_1,int param_2)

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
  
  pcVar3 = (char *)(_UNK_016c3ffc + 0x16c3e94);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c4000 + 0x16c3ea8));
    func_0x01384978(*(undefined4 *)(_UNK_016c4004 + 0x16c3eb4));
    func_0x01384978(*(undefined4 *)(_UNK_016c4008 + 0x16c3ec0));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016c400c + 0x16c3ef0);
    puVar8 = *(undefined4 **)(_UNK_016c4010 + 0x16c3ef8);
    puVar9 = *(undefined4 **)(_UNK_016c4014 + 0x16c3f00);
    do {
      if (uVar1 < 0x13) {
        if ((uVar1 | 2) == 0x12) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x14);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0364b0e0(iVar6,param_2,uVar4,*puVar8);
        }
        else {
LAB_016c3f80:
          uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
      }
      else if (uVar1 == 0x1a) {
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x10);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar6,param_2,uVar4,*puVar9);
      }
      else {
        if (uVar1 != 0x20) goto LAB_016c3f80;
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0xc) = uVar4;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.MergeFixedOutput$$get_XXX_RowIdentifier RVA 0x16b4018 =====

undefined4 FUN_016c4018(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== fat.rawdata.MergeFixedOutput$$set_XXX_RowIdentifier RVA 0x16b4020 =====

void FUN_016c4020(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// ===== fat.rawdata.MergeFixedOutput$$.cctor RVA 0x16b4028 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c4028(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016c40b4 + 0x16c4038);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c40b8 + 0x16c404c));
    func_0x01384978(*(undefined4 *)(_UNK_016c40bc + 0x16c4058));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_016c40c0 + 0x16c406c);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_016c40c4 + 0x16c407c);
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


