/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventWishBarReward$$.ctor RVA 0x1655a44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01665a44(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_01665b40 + 0x1665a58);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01665b44 + 0x1665a6c));
    func_0x01384978(*(undefined4 *)(_UNK_01665b48 + 0x1665a78));
    func_0x01384978(*(undefined4 *)(_UNK_01665b4c + 0x1665a84));
    func_0x01384978(*(undefined4 *)(_UNK_01665b50 + 0x1665a90));
    func_0x01384978(*(undefined4 *)(_UNK_01665b54 + 0x1665a9c));
    *pcVar5 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_01665b58 + 0x1665ab0);
  iVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_01665b5c + 0x1665ac4);
  func_0x036542d8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar7);
  piVar3 = *(int **)(_UNK_01665b64 + 0x1665af8);
  iVar4 = *(int *)(**(int **)(_UNK_01665b60 + 0x1665aec) + 0x74);
  param_1[6] = iVar1;
  iVar1 = *piVar3;
  param_1[7] = iVar1;
  param_1[8] = iVar1;
  if (iVar4 == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01665b68 + 0x1665b20));
                    /* WARNING: Could not recover jumptable at 0x01665b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventWishBarReward$$.ctor RVA 0x1655b6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01665b6c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_01665c30 + 0x1665b84);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01665c34 + 0x1665b98));
    *pcVar5 = '\x01';
  }
  FUN_01665a44(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_01665c38 + 0x1665bdc);
  uVar1 = func_0x03651cc4(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventWishBarReward$$Clone RVA 0x1655c3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01665c3c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01665c90 + 0x1665c50);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01665c94 + 0x1665c64));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01665c98 + 0x1665c78));
  FUN_01665b6c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventWishBarReward$$ProxyInternalMergeFrom RVA 0x1655c9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01665c9c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar3 = (char *)(_UNK_01665e68 + 0x1665cb4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01665e6c + 0x1665cc8));
    func_0x01384978(*(undefined4 *)(_UNK_01665e70 + 0x1665cd4));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01665e74 + 0x1665d04);
    puVar8 = *(undefined4 **)(_UNK_01665e78 + 0x1665d0c);
    do {
      if (uVar1 < 0x1b) {
        if (uVar1 == 8) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else if (uVar1 == 0x10) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x14) = uVar4;
        }
        else {
          if (uVar1 == 0x1a) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x18);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
            goto LAB_01665d8c;
          }
LAB_01665db0:
          uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
      }
      else if (uVar1 == 0x2a) {
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
        *(undefined4 *)(param_1 + 0x1c) = uVar4;
      }
      else if (uVar1 == 0x32) {
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
        *(undefined4 *)(param_1 + 0x20) = uVar4;
      }
      else {
        if (uVar1 != 0x3a) goto LAB_01665db0;
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x10);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
LAB_01665d8c:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar6,param_2,uVar4,*puVar8);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventWishBarReward$$get_XXX_RowIdentifier RVA 0x1655e7c =====

undefined4 FUN_01665e7c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// ===== fat.rawdata.EventWishBarReward$$set_XXX_RowIdentifier RVA 0x1655e84 =====

void FUN_01665e84(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



// ===== fat.rawdata.EventWishBarReward$$.cctor RVA 0x1655e8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01665e8c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01665f18 + 0x1665e9c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01665f1c + 0x1665eb0));
    func_0x01384978(*(undefined4 *)(_UNK_01665f20 + 0x1665ebc));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01665f24 + 0x1665ed0);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01665f28 + 0x1665ee0);
  uVar1 = func_0x0244f954(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


