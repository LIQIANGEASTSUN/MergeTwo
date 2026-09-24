/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.ComChest$$.ctor RVA 0x178e078 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179e078(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0179e0fc + 0x179e08c);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179e100 + 0x179e0a0));
    func_0x01384978(*(undefined4 *)(_UNK_0179e104 + 0x179e0ac));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0179e108 + 0x179e0c0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0179e10c + 0x179e0dc));
                    /* WARNING: Could not recover jumptable at 0x0179e0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.ComChest$$.ctor RVA 0x178e110 =====

void FUN_0179e110(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  FUN_0179e078();
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar1 = *(undefined1 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0xc) = uVar1;
  uVar2 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.gamekitdata.ComChest$$Clone RVA 0x178e150 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0179e150(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0179e1a4 + 0x179e164);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179e1a8 + 0x179e178));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0179e1ac + 0x179e18c));
  FUN_0179e110(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.ComChest$$InternalWriteTo RVA 0x178e1b0 =====

void FUN_0179e1b0(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0xc) != '\0') {
    func_0x01485198(param_2,8,0);
    func_0x014850b8(param_2,*(undefined1 *)(param_1 + 0xc),0);
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



// ===== fat.gamekitdata.ComChest$$ProxyCalculateSize RVA 0x178e234 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0179e234(int param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  
  pcVar1 = (char *)(_UNK_0179e2c8 + 0x179e248);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179e2cc + 0x179e25c));
    *pcVar1 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x10);
  uVar2 = (uint)*(byte *)(param_1 + 0xc) << 1;
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_0179e2d0 + 0x179e284) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    uVar2 = (uVar2 | 1) + iVar3;
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = func_0x0244f9bc(*(int *)(param_1 + 8),0);
    uVar2 = iVar3 + uVar2;
  }
  return uVar2;
}



// ===== fat.gamekitdata.ComChest$$ProxyInternalMergeFrom RVA 0x178e2d4 =====

void FUN_0179e2d4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = param_2 + 8;
  while( true ) {
    while( true ) {
      while (iVar1 = func_0x01484f58(param_2,iVar3,0), iVar1 == 8) {
        lVar4 = func_0x01484f88(param_2,iVar3,0);
        *(bool *)(param_1 + 0xc) = lVar4 != 0;
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



// ===== fat.gamekitdata.ComChest$$.cctor RVA 0x178e360 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179e360(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0179e3bc + 0x179e370);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179e3c0 + 0x179e384));
    func_0x01384978(*(undefined4 *)(_UNK_0179e3c4 + 0x179e390));
    *pcVar1 = '\x01';
  }
  **(undefined4 **)(**(int **)(_UNK_0179e3c8 + 0x179e3a4) + 0x5c) =
       **(undefined4 **)(_UNK_0179e3cc + 0x179e3b4);
  return;
}


