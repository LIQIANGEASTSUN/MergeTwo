/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.MergeFixedItem$$.ctor RVA 0x16b3288 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c3288(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_016c3394 + 0x16c329c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c3398 + 0x16c32b0));
    func_0x01384978(*(undefined4 *)(_UNK_016c339c + 0x16c32bc));
    func_0x01384978(*(undefined4 *)(_UNK_016c33a0 + 0x16c32c8));
    func_0x01384978(*(undefined4 *)(_UNK_016c33a4 + 0x16c32d4));
    func_0x01384978(*(undefined4 *)(_UNK_016c33a8 + 0x16c32e0));
    func_0x01384978(*(undefined4 *)(_UNK_016c33ac + 0x16c32ec));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016c33b0 + 0x16c3300));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_016c33b4 + 0x16c3314));
  puVar2 = *(undefined4 **)(_UNK_016c33b8 + 0x16c3328);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_016c33bc + 0x16c3340));
  piVar3 = *(int **)(_UNK_016c33c0 + 0x16c3354);
  param_1[5] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016c33c4 + 0x16c3374));
                    /* WARNING: Could not recover jumptable at 0x016c3390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.MergeFixedItem$$.ctor RVA 0x16b33c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c33c8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_016c348c + 0x16c33e0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c3490 + 0x16c33f4));
    func_0x01384978(*(undefined4 *)(_UNK_016c3494 + 0x16c3400));
    *pcVar3 = '\x01';
  }
  FUN_016c3288(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_016c3498 + 0x16c3440));
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,**(undefined4 **)(_UNK_016c349c + 0x16c3468));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.MergeFixedItem$$Clone RVA 0x16b34a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016c34a0(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016c34f4 + 0x16c34b4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c34f8 + 0x16c34c8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016c34fc + 0x16c34dc));
  FUN_016c33c8(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.MergeFixedItem$$ProxyInternalMergeFrom RVA 0x16b3500 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c3500(int param_1,int param_2)

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
  
  pcVar3 = (char *)(_UNK_016c3684 + 0x16c351c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c3688 + 0x16c3530));
    func_0x01384978(*(undefined4 *)(_UNK_016c368c + 0x16c353c));
    func_0x01384978(*(undefined4 *)(_UNK_016c3690 + 0x16c3548));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016c3694 + 0x16c3578);
    puVar8 = *(undefined4 **)(_UNK_016c3698 + 0x16c3580);
    puVar9 = *(undefined4 **)(_UNK_016c369c + 0x16c3588);
    do {
      if (uVar1 < 0xb) {
        if ((uVar1 | 2) == 10) {
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
LAB_016c3608:
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
        if (uVar1 != 0x28) goto LAB_016c3608;
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0xc) = uVar4;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.MergeFixedItem$$get_XXX_RowIdentifier RVA 0x16b36a0 =====

undefined4 FUN_016c36a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== fat.rawdata.MergeFixedItem$$set_XXX_RowIdentifier RVA 0x16b36a8 =====

void FUN_016c36a8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// ===== fat.rawdata.MergeFixedItem$$.cctor RVA 0x16b36b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c36b0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016c373c + 0x16c36c0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c3740 + 0x16c36d4));
    func_0x01384978(*(undefined4 *)(_UNK_016c3744 + 0x16c36e0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_016c3748 + 0x16c36f4);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_016c374c + 0x16c3704);
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(10,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


