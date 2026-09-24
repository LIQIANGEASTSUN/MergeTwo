/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventMagicOrder$$.ctor RVA 0x15dc904 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015ec904(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_015ec9e8 + 0x15ec918);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015ec9ec + 0x15ec92c));
    func_0x01384978(*(undefined4 *)(_UNK_015ec9f0 + 0x15ec938));
    func_0x01384978(*(undefined4 *)(_UNK_015ec9f4 + 0x15ec944));
    func_0x01384978(*(undefined4 *)(_UNK_015ec9f8 + 0x15ec950));
    func_0x01384978(*(undefined4 *)(_UNK_015ec9fc + 0x15ec95c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015eca00 + 0x15ec970));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_015eca04 + 0x15ec984));
  piVar2 = *(int **)(_UNK_015eca0c + 0x15ec9a4);
  iVar3 = *(int *)(**(int **)(_UNK_015eca08 + 0x15ec998) + 0x74);
  param_1[4] = iVar1;
  param_1[10] = *piVar2;
  if (iVar3 == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015eca10 + 0x15ec9c8));
                    /* WARNING: Could not recover jumptable at 0x015ec9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventMagicOrder$$.ctor RVA 0x15dca14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015eca14(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  
  pcVar6 = (char *)(_UNK_015ecad0 + 0x15eca2c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015ecad4 + 0x15eca40));
    *pcVar6 = '\x01';
  }
  FUN_015ec904(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0244f94c(iVar7,**(undefined4 **)(_UNK_015ecad8 + 0x15eca80));
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar8 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar1 = *(undefined1 *)(param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined1 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar8;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  uVar2 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.EventMagicOrder$$Clone RVA 0x15dcadc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015ecadc(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015ecb30 + 0x15ecaf0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015ecb34 + 0x15ecb04));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015ecb38 + 0x15ecb18));
  FUN_015eca14(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventMagicOrder$$ProxyInternalMergeFrom RVA 0x15dcb3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015ecb3c(int param_1,int param_2)

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
  
  pcVar3 = (char *)(_UNK_015ecd40 + 0x15ecb54);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015ecd44 + 0x15ecb68));
    func_0x01384978(*(undefined4 *)(_UNK_015ecd48 + 0x15ecb74));
    *pcVar3 = '\x01';
  }
  iVar4 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar4,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015ecd4c + 0x15ecba4);
    puVar8 = *(undefined4 **)(_UNK_015ecd50 + 0x15ecbac);
    do {
      if (uVar1 < 0x21) {
        if (uVar1 < 0x13) {
          if (uVar1 == 8) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0xc) = uVar6;
          }
          else if (uVar1 == 0x12) {
            iVar2 = *piVar7;
            iVar5 = *(int *)(param_1 + 0x10);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x0244f950(iVar5,param_2,uVar6,*puVar8);
          }
          else {
LAB_015ecc98:
            uVar6 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar6;
          }
        }
        else if (uVar1 == 0x18) {
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x14) = uVar6;
        }
        else {
          if (uVar1 != 0x20) goto LAB_015ecc98;
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x18) = uVar6;
        }
      }
      else if (uVar1 < 0x31) {
        if (uVar1 == 0x28) {
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x20) = uVar6;
        }
        else {
          if (uVar1 != 0x30) goto LAB_015ecc98;
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x24) = uVar6;
        }
      }
      else if (uVar1 == 0x3a) {
        uVar6 = func_0x01484f98(param_2,iVar4,0);
        uVar6 = func_0x01484fc8(param_2,iVar4,uVar6,0);
        *(undefined4 *)(param_1 + 0x28) = uVar6;
      }
      else {
        if (uVar1 != 0x40) goto LAB_015ecc98;
        lVar9 = func_0x01484f88(param_2,iVar4,0);
        *(bool *)(param_1 + 0x1c) = lVar9 != 0;
      }
      uVar1 = func_0x01484f58(param_2,iVar4,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventMagicOrder$$get_XXX_RowIdentifier RVA 0x15dcd54 =====

undefined4 FUN_015ecd54(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ===== fat.rawdata.EventMagicOrder$$set_XXX_RowIdentifier RVA 0x15dcd5c =====

void FUN_015ecd5c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// ===== fat.rawdata.EventMagicOrder$$.cctor RVA 0x15dcd64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015ecd64(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015ecdd8 + 0x15ecd74);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015ecddc + 0x15ecd88));
    func_0x01384978(*(undefined4 *)(_UNK_015ecde0 + 0x15ecd94));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015ecde4 + 0x15ecda8);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015ecde8 + 0x15ecdb8);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


