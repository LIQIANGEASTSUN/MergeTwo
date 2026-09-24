/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.ComSpecialBox$$.ctor RVA 0x1790414 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a0414(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_017a0498 + 0x17a0428);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a049c + 0x17a043c));
    func_0x01384978(*(undefined4 *)(_UNK_017a04a0 + 0x17a0448));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_017a04a4 + 0x17a045c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_017a04a8 + 0x17a0478));
                    /* WARNING: Could not recover jumptable at 0x017a0494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.ComSpecialBox$$.ctor RVA 0x17904ac =====

void FUN_017a04ac(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_017a0414();
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  uVar1 = func_0x0244f914(uVar1,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.gamekitdata.ComSpecialBox$$Clone RVA 0x17904e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017a04e4(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_017a0538 + 0x17a04f8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a053c + 0x17a050c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_017a0540 + 0x17a0520));
  FUN_017a04ac(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.ComSpecialBox$$InternalWriteTo RVA 0x1790544 =====

void FUN_017a0544(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    func_0x01485198(param_2,8,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0xc),0);
  }
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)&UNK_044e88b4)(*(int *)(param_1 + 8),param_2,0);
    return;
  }
  return;
}



// ===== fat.gamekitdata.ComSpecialBox$$ProxyCalculateSize RVA 0x179059c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017a059c(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(_UNK_017a062c + 0x17a05b0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a0630 + 0x17a05c4));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_017a0634 + 0x17a05e4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = func_0x0244f9bc(*(int *)(param_1 + 8),0);
    iVar3 = iVar1 + iVar3;
  }
  return iVar3;
}



// ===== fat.gamekitdata.ComSpecialBox$$ProxyInternalMergeFrom RVA 0x1790638 =====

void FUN_017a0638(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  while( true ) {
    while (iVar1 = func_0x01484f58(param_2,param_2 + 8,0), iVar1 == 8) {
      uVar2 = func_0x01484f98(param_2,param_2 + 8,0);
      *(undefined4 *)(param_1 + 0xc) = uVar2;
    }
    if (iVar1 == 0) break;
    uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  return;
}



// ===== fat.gamekitdata.ComSpecialBox$$.cctor RVA 0x179069c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a069c(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_017a06f8 + 0x17a06ac);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a06fc + 0x17a06c0));
    func_0x01384978(*(undefined4 *)(_UNK_017a0700 + 0x17a06cc));
    *pcVar1 = '\x01';
  }
  **(undefined4 **)(**(int **)(_UNK_017a0704 + 0x17a06e0) + 0x5c) =
       **(undefined4 **)(_UNK_017a0708 + 0x17a06f0);
  return;
}


