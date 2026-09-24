/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.ComToolSource$$.ctor RVA 0x179008c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a008c(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_017a0110 + 0x17a00a0);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a0114 + 0x17a00b4));
    func_0x01384978(*(undefined4 *)(_UNK_017a0118 + 0x17a00c0));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_017a011c + 0x17a00d4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_017a0120 + 0x17a00f0));
                    /* WARNING: Could not recover jumptable at 0x017a010c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.ComToolSource$$.ctor RVA 0x1790124 =====

void FUN_017a0124(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_017a008c();
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



// ===== fat.gamekitdata.ComToolSource$$Clone RVA 0x1790160 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017a0160(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_017a01b4 + 0x17a0174);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a01b8 + 0x17a0188));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_017a01bc + 0x17a019c));
  FUN_017a0124(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.ComToolSource$$InternalWriteTo RVA 0x17901c0 =====

void FUN_017a01c0(int param_1,undefined4 param_2)

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



// ===== fat.gamekitdata.ComToolSource$$ProxyCalculateSize RVA 0x1790244 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017a0244(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = (char *)(_UNK_017a0310 + 0x17a0258);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a0314 + 0x17a026c));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_017a0318 + 0x17a028c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar2,0);
    iVar2 = iVar2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a031c + 0x17a02cc) + 0x74) == 0) {
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



// ===== fat.gamekitdata.ComToolSource$$ProxyInternalMergeFrom RVA 0x1790320 =====

void FUN_017a0320(int param_1,int param_2)

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



// ===== fat.gamekitdata.ComToolSource$$.cctor RVA 0x17903a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a03a4(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_017a0400 + 0x17a03b4);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a0404 + 0x17a03c8));
    func_0x01384978(*(undefined4 *)(_UNK_017a0408 + 0x17a03d4));
    *pcVar1 = '\x01';
  }
  **(undefined4 **)(**(int **)(_UNK_017a040c + 0x17a03e8) + 0x5c) =
       **(undefined4 **)(_UNK_017a0410 + 0x17a03f8);
  return;
}


