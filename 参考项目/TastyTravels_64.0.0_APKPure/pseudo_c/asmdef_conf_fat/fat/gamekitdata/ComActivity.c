/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.ComActivity$$.ctor RVA 0x178fd04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179fd04(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0179fd88 + 0x179fd18);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179fd8c + 0x179fd2c));
    func_0x01384978(*(undefined4 *)(_UNK_0179fd90 + 0x179fd38));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0179fd94 + 0x179fd4c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0179fd98 + 0x179fd68));
                    /* WARNING: Could not recover jumptable at 0x0179fd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.ComActivity$$.ctor RVA 0x178fd9c =====

void FUN_0179fd9c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_0179fd04();
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



// ===== fat.gamekitdata.ComActivity$$Clone RVA 0x178fdd8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0179fdd8(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0179fe2c + 0x179fdec);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179fe30 + 0x179fe00));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0179fe34 + 0x179fe14));
  FUN_0179fd9c(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.ComActivity$$InternalWriteTo RVA 0x178fe38 =====

void FUN_0179fe38(int param_1,undefined4 param_2)

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



// ===== fat.gamekitdata.ComActivity$$ProxyCalculateSize RVA 0x178febc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0179febc(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = (char *)(_UNK_0179ff88 + 0x179fed0);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179ff8c + 0x179fee4));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_0179ff90 + 0x179ff04) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar2,0);
    iVar2 = iVar2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_0179ff94 + 0x179ff44) + 0x74) == 0) {
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



// ===== fat.gamekitdata.ComActivity$$ProxyInternalMergeFrom RVA 0x178ff98 =====

void FUN_0179ff98(int param_1,int param_2)

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



// ===== fat.gamekitdata.ComActivity$$.cctor RVA 0x179001c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a001c(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_017a0078 + 0x17a002c);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a007c + 0x17a0040));
    func_0x01384978(*(undefined4 *)(_UNK_017a0080 + 0x17a004c));
    *pcVar1 = '\x01';
  }
  **(undefined4 **)(**(int **)(_UNK_017a0084 + 0x17a0060) + 0x5c) =
       **(undefined4 **)(_UNK_017a0088 + 0x17a0070);
  return;
}


