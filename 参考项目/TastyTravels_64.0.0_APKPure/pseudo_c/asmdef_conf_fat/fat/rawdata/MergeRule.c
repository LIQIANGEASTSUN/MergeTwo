/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.MergeRule$$.ctor RVA 0x16da800 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016ea800(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_016ea8c8 + 0x16ea814);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016ea8cc + 0x16ea828));
    func_0x01384978(*(undefined4 *)(_UNK_016ea8d0 + 0x16ea834));
    func_0x01384978(*(undefined4 *)(_UNK_016ea8d4 + 0x16ea840));
    func_0x01384978(*(undefined4 *)(_UNK_016ea8d8 + 0x16ea84c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016ea8dc + 0x16ea860));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_016ea8e0 + 0x16ea874));
  piVar2 = *(int **)(_UNK_016ea8e4 + 0x16ea888);
  param_1[4] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016ea8e8 + 0x16ea8a8));
                    /* WARNING: Could not recover jumptable at 0x016ea8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.MergeRule$$.ctor RVA 0x16da8ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016ea8ec(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_016ea984 + 0x16ea904);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016ea988 + 0x16ea918));
    *pcVar4 = '\x01';
  }
  FUN_016ea800(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,**(undefined4 **)(_UNK_016ea98c + 0x16ea958));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.MergeRule$$Clone RVA 0x16da990 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016ea990(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016ea9e4 + 0x16ea9a4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016ea9e8 + 0x16ea9b8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016ea9ec + 0x16ea9cc));
  FUN_016ea8ec(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.MergeRule$$ProxyInternalMergeFrom RVA 0x16da9f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016ea9f0(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  pcVar2 = (char *)(_UNK_016eab10 + 0x16eaa08);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016eab14 + 0x16eaa1c));
    func_0x01384978(*(undefined4 *)(_UNK_016eab18 + 0x16eaa28));
    *pcVar2 = '\x01';
  }
  iVar4 = param_2 + 8;
  piVar6 = *(int **)(_UNK_016eab1c + 0x16eaa40);
  puVar7 = *(undefined4 **)(_UNK_016eab20 + 0x16eaa48);
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
LAB_016eaaf4:
        uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar3;
      }
    }
    if (iVar1 != 8) {
      if (iVar1 == 0) {
        return;
      }
      goto LAB_016eaaf4;
    }
    uVar3 = func_0x01484f98(param_2,iVar4,0);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
  } while( true );
}



// ===== fat.rawdata.MergeRule$$get_XXX_RowIdentifier RVA 0x16dab24 =====

undefined4 FUN_016eab24(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== fat.rawdata.MergeRule$$set_XXX_RowIdentifier RVA 0x16dab2c =====

void FUN_016eab2c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// ===== fat.rawdata.MergeRule$$.cctor RVA 0x16dab34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016eab34(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016eaba8 + 0x16eab44);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016eabac + 0x16eab58));
    func_0x01384978(*(undefined4 *)(_UNK_016eabb0 + 0x16eab64));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_016eabb4 + 0x16eab78);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_016eabb8 + 0x16eab88);
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


