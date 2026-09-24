/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.ComBox$$.ctor RVA 0x178ee1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179ee1c(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0179eea0 + 0x179ee30);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179eea4 + 0x179ee44));
    func_0x01384978(*(undefined4 *)(_UNK_0179eea8 + 0x179ee50));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0179eeac + 0x179ee64) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0179eeb0 + 0x179ee80));
                    /* WARNING: Could not recover jumptable at 0x0179ee9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.ComBox$$.ctor RVA 0x178eeb4 =====

void FUN_0179eeb4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_0179ee1c();
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  uVar1 = func_0x0244f914(uVar1,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.gamekitdata.ComBox$$Clone RVA 0x178eeec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0179eeec(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0179ef40 + 0x179ef00);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179ef44 + 0x179ef14));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0179ef48 + 0x179ef28));
  FUN_0179eeb4(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.ComBox$$InternalWriteTo RVA 0x178ef4c =====

void FUN_0179ef4c(int param_1,undefined4 param_2)

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



// ===== fat.gamekitdata.ComBox$$ProxyCalculateSize RVA 0x178efa4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0179efa4(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(_UNK_0179f034 + 0x179efb8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179f038 + 0x179efcc));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_0179f03c + 0x179efec) + 0x74) == 0) {
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



// ===== fat.gamekitdata.ComBox$$ProxyInternalMergeFrom RVA 0x178f040 =====

void FUN_0179f040(int param_1,int param_2)

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



// ===== fat.gamekitdata.ComBox$$.cctor RVA 0x178f0a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179f0a4(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0179f100 + 0x179f0b4);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179f104 + 0x179f0c8));
    func_0x01384978(*(undefined4 *)(_UNK_0179f108 + 0x179f0d4));
    *pcVar1 = '\x01';
  }
  **(undefined4 **)(**(int **)(_UNK_0179f10c + 0x179f0e8) + 0x5c) =
       **(undefined4 **)(_UNK_0179f110 + 0x179f0f8);
  return;
}


