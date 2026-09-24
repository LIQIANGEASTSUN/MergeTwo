/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.TokenMulti$$.ctor RVA 0x17899e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017999e0(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01799a64 + 0x17999f4);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01799a68 + 0x1799a08));
    func_0x01384978(*(undefined4 *)(_UNK_01799a6c + 0x1799a14));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01799a70 + 0x1799a28) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01799a74 + 0x1799a44));
                    /* WARNING: Could not recover jumptable at 0x01799a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.TokenMulti$$.ctor RVA 0x1789a78 =====

void FUN_01799a78(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_017999e0();
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



// ===== fat.gamekitdata.TokenMulti$$Clone RVA 0x1789ab4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01799ab4(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01799b08 + 0x1799ac8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01799b0c + 0x1799adc));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01799b10 + 0x1799af0));
  FUN_01799a78(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.TokenMulti$$InternalWriteTo RVA 0x1789b14 =====

void FUN_01799b14(int param_1,undefined4 param_2)

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



// ===== fat.gamekitdata.TokenMulti$$ProxyCalculateSize RVA 0x1789b98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01799b98(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = (char *)(_UNK_01799c64 + 0x1799bac);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01799c68 + 0x1799bc0));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_01799c6c + 0x1799be0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar2,0);
    iVar2 = iVar2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_01799c70 + 0x1799c20) + 0x74) == 0) {
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



// ===== fat.gamekitdata.TokenMulti$$ProxyInternalMergeFrom RVA 0x1789c74 =====

void FUN_01799c74(int param_1,int param_2)

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



// ===== fat.gamekitdata.TokenMulti$$.cctor RVA 0x1789cf8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01799cf8(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01799d54 + 0x1799d08);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01799d58 + 0x1799d1c));
    func_0x01384978(*(undefined4 *)(_UNK_01799d5c + 0x1799d28));
    *pcVar1 = '\x01';
  }
  **(undefined4 **)(**(int **)(_UNK_01799d60 + 0x1799d3c) + 0x5c) =
       **(undefined4 **)(_UNK_01799d64 + 0x1799d4c);
  return;
}


