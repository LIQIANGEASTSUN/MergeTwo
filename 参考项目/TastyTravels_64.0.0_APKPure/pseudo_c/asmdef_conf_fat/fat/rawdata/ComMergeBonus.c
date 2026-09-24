/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComMergeBonus$$.ctor RVA 0x191b28c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192b28c(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0192b370 + 0x192b2a0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192b374 + 0x192b2b4));
    func_0x01384978(*(undefined4 *)(_UNK_0192b378 + 0x192b2c0));
    func_0x01384978(*(undefined4 *)(_UNK_0192b37c + 0x192b2cc));
    func_0x01384978(*(undefined4 *)(_UNK_0192b380 + 0x192b2d8));
    func_0x01384978(*(undefined4 *)(_UNK_0192b384 + 0x192b2e4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0192b388 + 0x192b2f8));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0192b38c + 0x192b30c));
  piVar2 = *(int **)(_UNK_0192b394 + 0x192b32c);
  iVar3 = *(int *)(**(int **)(_UNK_0192b390 + 0x192b320) + 0x74);
  param_1[4] = iVar1;
  param_1[10] = *piVar2;
  if (iVar3 == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0192b398 + 0x192b350));
                    /* WARNING: Could not recover jumptable at 0x0192b36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComMergeBonus$$.ctor RVA 0x191b39c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192b39c(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pcVar4 = (char *)(_UNK_0192b44c + 0x192b3b4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192b450 + 0x192b3c8));
    *pcVar4 = '\x01';
  }
  FUN_0192b28c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar5,**(undefined4 **)(_UNK_0192b454 + 0x192b408));
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar6 = *(undefined8 *)(param_2 + 0x14);
  uVar7 = *(undefined8 *)(param_2 + 0x1c);
  uVar1 = *(undefined2 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x14) = uVar6;
  *(undefined8 *)(param_1 + 0x1c) = uVar7;
  *(undefined2 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar2 = func_0x0244f914(uVar3,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.ComMergeBonus$$Clone RVA 0x191b458 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0192b458(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0192b4ac + 0x192b46c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192b4b0 + 0x192b480));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0192b4b4 + 0x192b494));
  FUN_0192b39c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComMergeBonus$$ProxyInternalMergeFrom RVA 0x191b4b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192b4b8(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_0192b6e0 + 0x192b4d0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192b6e4 + 0x192b4e4));
    func_0x01384978(*(undefined4 *)(_UNK_0192b6e8 + 0x192b4f0));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0192b6ec + 0x192b520);
    puVar8 = *(undefined4 **)(_UNK_0192b6f0 + 0x192b528);
    do {
      if (uVar1 < 0x21) {
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
LAB_0192b600:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else if (uVar1 == 0x18) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x18) = uVar2;
        }
        else {
          if (uVar1 != 0x20) goto LAB_0192b600;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
      }
      else if (uVar1 < 0x31) {
        if (uVar1 == 0x28) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
        else {
          if (uVar1 != 0x30) goto LAB_0192b600;
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x25) = lVar9 != 0;
        }
      }
      else if (uVar1 == 0x38) {
        lVar9 = func_0x01484f88(param_2,iVar5,0);
        *(bool *)(param_1 + 0x24) = lVar9 != 0;
      }
      else if (uVar1 == 0x42) {
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
      else {
        if (uVar1 != 0x4a) goto LAB_0192b600;
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
        *(undefined4 *)(param_1 + 0x28) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ComMergeBonus$$get_XXX_RowIdentifier RVA 0x191b6f4 =====

undefined4 FUN_0192b6f4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ===== fat.rawdata.ComMergeBonus$$set_XXX_RowIdentifier RVA 0x191b6fc =====

void FUN_0192b6fc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// ===== fat.rawdata.ComMergeBonus$$.cctor RVA 0x191b704 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192b704(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0192b778 + 0x192b714);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192b77c + 0x192b728));
    func_0x01384978(*(undefined4 *)(_UNK_0192b780 + 0x192b734));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0192b784 + 0x192b748);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0192b788 + 0x192b758);
  uVar1 = func_0x0244f954(0x42,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


