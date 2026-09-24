/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventRescueDrop$$.ctor RVA 0x1620c18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01630c18(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_01630d54 + 0x1630c2c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01630d58 + 0x1630c40));
    func_0x01384978(*(undefined4 *)(_UNK_01630d5c + 0x1630c4c));
    func_0x01384978(*(undefined4 *)(_UNK_01630d60 + 0x1630c58));
    func_0x01384978(*(undefined4 *)(_UNK_01630d64 + 0x1630c64));
    func_0x01384978(*(undefined4 *)(_UNK_01630d68 + 0x1630c70));
    func_0x01384978(*(undefined4 *)(_UNK_01630d6c + 0x1630c7c));
    func_0x01384978(*(undefined4 *)(_UNK_01630d70 + 0x1630c88));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_01630d74 + 0x1630c9c);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_01630d78 + 0x1630cb0);
  func_0x0244f948(iVar1,*puVar6);
  uVar2 = *puVar5;
  piVar3 = *(int **)(_UNK_01630d7c + 0x1630cc4);
  param_1[4] = iVar1;
  param_1[5] = *piVar3;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar6);
  puVar5 = *(undefined4 **)(_UNK_01630d80 + 0x1630ce8);
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  func_0x0244f964(iVar1,**(undefined4 **)(_UNK_01630d84 + 0x1630d00));
  piVar3 = *(int **)(_UNK_01630d88 + 0x1630d14);
  param_1[7] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01630d8c + 0x1630d34));
                    /* WARNING: Could not recover jumptable at 0x01630d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventRescueDrop$$.ctor RVA 0x1620d90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01630d90(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_01630e7c + 0x1630da8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01630e80 + 0x1630dbc));
    func_0x01384978(*(undefined4 *)(_UNK_01630e84 + 0x1630dc8));
    *pcVar3 = '\x01';
  }
  FUN_01630c18(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_01630e88 + 0x1630e0c);
  uVar1 = func_0x0244f94c(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar4,**(undefined4 **)(_UNK_01630e8c + 0x1630e58));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventRescueDrop$$Clone RVA 0x1620e90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01630e90(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01630ee4 + 0x1630ea4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01630ee8 + 0x1630eb8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01630eec + 0x1630ecc));
  FUN_01630d90(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventRescueDrop$$ProxyInternalMergeFrom RVA 0x1620ef0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01630ef0(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_016310d8 + 0x1630f0c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016310dc + 0x1630f20));
    func_0x01384978(*(undefined4 *)(_UNK_016310e0 + 0x1630f2c));
    func_0x01384978(*(undefined4 *)(_UNK_016310e4 + 0x1630f38));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016310e8 + 0x1630f68);
    puVar8 = *(undefined4 **)(_UNK_016310ec + 0x1630f70);
    puVar9 = *(undefined4 **)(_UNK_016310f0 + 0x1630f78);
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
            goto LAB_01631098;
          }
          if (uVar1 != 0x1a) goto LAB_0163101c;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
          *(undefined4 *)(param_1 + 0x14) = uVar2;
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
LAB_01631098:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f950(iVar6,param_2,uVar2,*puVar8);
      }
      else if (uVar1 == 0x28 || uVar1 == 0x2a) {
        iVar3 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x1c);
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f96c(iVar6,param_2,uVar2,*puVar9);
      }
      else {
LAB_0163101c:
        uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventRescueDrop$$get_XXX_RowIdentifier RVA 0x16210f4 =====

undefined4 FUN_016310f4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== fat.rawdata.EventRescueDrop$$set_XXX_RowIdentifier RVA 0x16210fc =====

void FUN_016310fc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== fat.rawdata.EventRescueDrop$$.cctor RVA 0x1621104 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01631104(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016311a8 + 0x1631114);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016311ac + 0x1631128));
    func_0x01384978(*(undefined4 *)(_UNK_016311b0 + 0x1631134));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_016311b4 + 0x1631148);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_016311b8 + 0x1631158);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}


