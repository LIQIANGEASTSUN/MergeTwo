/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.OrderBoxDetail$$.ctor RVA 0x17027e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017127e8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01712910 + 0x17127fc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01712914 + 0x1712810));
    func_0x01384978(*(undefined4 *)(_UNK_01712918 + 0x171281c));
    func_0x01384978(*(undefined4 *)(_UNK_0171291c + 0x1712828));
    func_0x01384978(*(undefined4 *)(_UNK_01712920 + 0x1712834));
    func_0x01384978(*(undefined4 *)(_UNK_01712924 + 0x1712840));
    func_0x01384978(*(undefined4 *)(_UNK_01712928 + 0x171284c));
    func_0x01384978(*(undefined4 *)(_UNK_0171292c + 0x1712858));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01712930 + 0x171286c));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_01712934 + 0x1712880));
  uVar2 = **(undefined4 **)(_UNK_01712938 + 0x1712894);
  piVar3 = *(int **)(_UNK_0171293c + 0x17128a0);
  param_1[4] = iVar1;
  param_1[5] = *piVar3;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_01712940 + 0x17128bc));
  piVar3 = *(int **)(_UNK_01712944 + 0x17128d0);
  param_1[6] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01712948 + 0x17128f0));
                    /* WARNING: Could not recover jumptable at 0x0171290c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.OrderBoxDetail$$.ctor RVA 0x170294c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0171294c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_01712a20 + 0x1712964);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01712a24 + 0x1712978));
    func_0x01384978(*(undefined4 *)(_UNK_01712a28 + 0x1712984));
    *pcVar4 = '\x01';
  }
  FUN_017127e8(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,**(undefined4 **)(_UNK_01712a2c + 0x17129c4));
  iVar5 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,**(undefined4 **)(_UNK_01712a30 + 0x17129f4));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.OrderBoxDetail$$Clone RVA 0x1702a34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01712a34(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01712a88 + 0x1712a48);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01712a8c + 0x1712a5c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01712a90 + 0x1712a70));
  FUN_0171294c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.OrderBoxDetail$$ProxyInternalMergeFrom RVA 0x1702a94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01712a94(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar4 = (char *)(_UNK_01712c74 + 0x1712ab0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01712c78 + 0x1712ac4));
    func_0x01384978(*(undefined4 *)(_UNK_01712c7c + 0x1712ad0));
    func_0x01384978(*(undefined4 *)(_UNK_01712c80 + 0x1712adc));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01712c84 + 0x1712b0c);
    puVar8 = *(undefined4 **)(_UNK_01712c88 + 0x1712b14);
    puVar9 = *(undefined4 **)(_UNK_01712c8c + 0x1712b1c);
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
          if (uVar1 == 0x18) goto LAB_01712b9c;
LAB_01712be4:
          uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar3;
        }
      }
      else if (uVar1 == 0x1a) {
LAB_01712b9c:
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x18);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0364b0e0(iVar6,param_2,uVar3,*puVar8);
      }
      else if (uVar1 == 0x20) {
        uVar3 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x1c) = uVar3;
      }
      else {
        if (uVar1 != 0x2a) goto LAB_01712be4;
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x10);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar6,param_2,uVar3,*puVar9);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.OrderBoxDetail$$get_XXX_RowIdentifier RVA 0x1702c90 =====

undefined4 FUN_01712c90(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== fat.rawdata.OrderBoxDetail$$set_XXX_RowIdentifier RVA 0x1702c98 =====

void FUN_01712c98(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== fat.rawdata.OrderBoxDetail$$.cctor RVA 0x1702ca0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01712ca0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01712d2c + 0x1712cb0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01712d30 + 0x1712cc4));
    func_0x01384978(*(undefined4 *)(_UNK_01712d34 + 0x1712cd0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01712d38 + 0x1712ce4);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01712d3c + 0x1712cf4);
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


