/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ItemReplace$$.ctor RVA 0x168ac68 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0169ac68(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0169ad30 + 0x169ac7c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0169ad34 + 0x169ac90));
    func_0x01384978(*(undefined4 *)(_UNK_0169ad38 + 0x169ac9c));
    func_0x01384978(*(undefined4 *)(_UNK_0169ad3c + 0x169aca8));
    func_0x01384978(*(undefined4 *)(_UNK_0169ad40 + 0x169acb4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0169ad44 + 0x169acc8));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0169ad48 + 0x169acdc));
  piVar2 = *(int **)(_UNK_0169ad4c + 0x169acf0);
  param_1[4] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0169ad50 + 0x169ad10));
                    /* WARNING: Could not recover jumptable at 0x0169ad2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ItemReplace$$.ctor RVA 0x168ad54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0169ad54(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_0169adec + 0x169ad6c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0169adf0 + 0x169ad80));
    *pcVar4 = '\x01';
  }
  FUN_0169ac68(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,**(undefined4 **)(_UNK_0169adf4 + 0x169adc0));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.ItemReplace$$Clone RVA 0x168adf8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0169adf8(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0169ae4c + 0x169ae0c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0169ae50 + 0x169ae20));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0169ae54 + 0x169ae34));
  FUN_0169ad54(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ItemReplace$$ProxyInternalMergeFrom RVA 0x168ae58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0169ae58(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  pcVar2 = (char *)(_UNK_0169af78 + 0x169ae70);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0169af7c + 0x169ae84));
    func_0x01384978(*(undefined4 *)(_UNK_0169af80 + 0x169ae90));
    *pcVar2 = '\x01';
  }
  iVar4 = param_2 + 8;
  piVar6 = *(int **)(_UNK_0169af84 + 0x169aea8);
  puVar7 = *(undefined4 **)(_UNK_0169af88 + 0x169aeb0);
  do {
    while (iVar1 = func_0x01484f58(param_2,iVar4,0), 0xf < iVar1) {
      if (iVar1 == 0x10) {
        uVar3 = func_0x01484f98(param_2,iVar4,0);
        *(undefined4 *)(param_1 + 0x14) = uVar3;
      }
      else if (iVar1 == 0x1a) {
        iVar1 = *piVar6;
        iVar5 = *(int *)(param_1 + 0x10);
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar6;
        }
        uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar5,param_2,uVar3,*puVar7);
      }
      else {
LAB_0169af5c:
        uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar3;
      }
    }
    if (iVar1 != 8) {
      if (iVar1 == 0) {
        return;
      }
      goto LAB_0169af5c;
    }
    uVar3 = func_0x01484f98(param_2,iVar4,0);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
  } while( true );
}



// ===== fat.rawdata.ItemReplace$$get_XXX_RowIdentifier RVA 0x168af8c =====

undefined4 FUN_0169af8c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== fat.rawdata.ItemReplace$$set_XXX_RowIdentifier RVA 0x168af94 =====

void FUN_0169af94(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// ===== fat.rawdata.ItemReplace$$.cctor RVA 0x168af9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0169af9c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0169b010 + 0x169afac);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0169b014 + 0x169afc0));
    func_0x01384978(*(undefined4 *)(_UNK_0169b018 + 0x169afcc));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0169b01c + 0x169afe0);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0169b020 + 0x169aff0);
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


