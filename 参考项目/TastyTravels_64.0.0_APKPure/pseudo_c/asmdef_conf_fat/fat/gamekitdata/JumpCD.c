/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.JumpCD$$.ctor RVA 0x1789658 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01799658(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_017996dc + 0x179966c);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017996e0 + 0x1799680));
    func_0x01384978(*(undefined4 *)(_UNK_017996e4 + 0x179968c));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_017996e8 + 0x17996a0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_017996ec + 0x17996bc));
                    /* WARNING: Could not recover jumptable at 0x017996d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.JumpCD$$.ctor RVA 0x17896f0 =====

void FUN_017996f0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_01799658();
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



// ===== fat.gamekitdata.JumpCD$$Clone RVA 0x178972c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0179972c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01799780 + 0x1799740);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01799784 + 0x1799754));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01799788 + 0x1799768));
  FUN_017996f0(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.JumpCD$$InternalWriteTo RVA 0x178978c =====

void FUN_0179978c(int param_1,undefined4 param_2)

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



// ===== fat.gamekitdata.JumpCD$$ProxyCalculateSize RVA 0x1789810 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01799810(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = (char *)(_UNK_017998dc + 0x1799824);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017998e0 + 0x1799838));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_017998e4 + 0x1799858) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar2,0);
    iVar2 = iVar2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017998e8 + 0x1799898) + 0x74) == 0) {
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



// ===== fat.gamekitdata.JumpCD$$ProxyInternalMergeFrom RVA 0x17898ec =====

void FUN_017998ec(int param_1,int param_2)

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



// ===== fat.gamekitdata.JumpCD$$.cctor RVA 0x1789970 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01799970(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_017999cc + 0x1799980);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017999d0 + 0x1799994));
    func_0x01384978(*(undefined4 *)(_UNK_017999d4 + 0x17999a0));
    *pcVar1 = '\x01';
  }
  **(undefined4 **)(**(int **)(_UNK_017999d8 + 0x17999b4) + 0x5c) =
       **(undefined4 **)(_UNK_017999dc + 0x17999c4);
  return;
}


