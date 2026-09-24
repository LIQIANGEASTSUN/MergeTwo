/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.RandomOutputParam$$.ctor RVA 0x1787598 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01797598(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0179761c + 0x17975ac);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01797620 + 0x17975c0));
    func_0x01384978(*(undefined4 *)(_UNK_01797624 + 0x17975cc));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01797628 + 0x17975e0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0179762c + 0x17975fc));
                    /* WARNING: Could not recover jumptable at 0x01797618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.RandomOutputParam$$.ctor RVA 0x1787630 =====

void FUN_01797630(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_01797598();
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar1 = func_0x0244f914(uVar1,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.gamekitdata.RandomOutputParam$$Clone RVA 0x178766c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0179766c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_017976c0 + 0x1797680);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017976c4 + 0x1797694));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_017976c8 + 0x17976a8));
  FUN_01797630(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.RandomOutputParam$$InternalWriteTo RVA 0x17876cc =====

void FUN_017976cc(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    func_0x01485198(param_2,8,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0xc),0);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x01485198(param_2,0x10,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x10),0);
  }
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)&UNK_044e88b4)(*(int *)(param_1 + 8),param_2,0);
    return;
  }
  return;
}



// ===== fat.gamekitdata.RandomOutputParam$$ProxyCalculateSize RVA 0x1787750 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01797750(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = (char *)(_UNK_0179781c + 0x1797764);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01797820 + 0x1797778));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_01797824 + 0x1797798) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar2,0);
    iVar2 = iVar2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_01797828 + 0x17977d8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = func_0x0244f9bc(*(int *)(param_1 + 8),0);
    iVar2 = iVar3 + iVar2;
  }
  return iVar2;
}



// ===== fat.gamekitdata.RandomOutputParam$$ProxyInternalMergeFrom RVA 0x178782c =====

void FUN_0179782c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_2 + 8;
  while( true ) {
    while( true ) {
      while (iVar1 = func_0x01484f58(param_2,iVar3,0), iVar1 == 8) {
        uVar2 = func_0x01484f98(param_2,iVar3,0);
        *(undefined4 *)(param_1 + 0xc) = uVar2;
      }
      if (iVar1 != 0x10) break;
      uVar2 = func_0x01484f98(param_2,iVar3,0);
      *(undefined4 *)(param_1 + 0x10) = uVar2;
    }
    if (iVar1 == 0) break;
    uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  return;
}



// ===== fat.gamekitdata.RandomOutputParam$$.cctor RVA 0x17878b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017978b0(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0179790c + 0x17978c0);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01797910 + 0x17978d4));
    func_0x01384978(*(undefined4 *)(_UNK_01797914 + 0x17978e0));
    *pcVar1 = '\x01';
  }
  **(undefined4 **)(**(int **)(_UNK_01797918 + 0x17978f4) + 0x5c) =
       **(undefined4 **)(_UNK_0179791c + 0x1797904);
  return;
}


