/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.ComActiveSource$$.ctor RVA 0x179126c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a126c(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_017a12f0 + 0x17a1280);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a12f4 + 0x17a1294));
    func_0x01384978(*(undefined4 *)(_UNK_017a12f8 + 0x17a12a0));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_017a12fc + 0x17a12b4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_017a1300 + 0x17a12d0));
                    /* WARNING: Could not recover jumptable at 0x017a12ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.ComActiveSource$$.ctor RVA 0x1791304 =====

void FUN_017a1304(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_017a126c();
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  uVar1 = func_0x0244f914(uVar1,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.gamekitdata.ComActiveSource$$Clone RVA 0x179133c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017a133c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_017a1390 + 0x17a1350);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a1394 + 0x17a1364));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_017a1398 + 0x17a1378));
  FUN_017a1304(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.ComActiveSource$$InternalWriteTo RVA 0x179139c =====

void FUN_017a139c(int param_1,undefined4 param_2)

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



// ===== fat.gamekitdata.ComActiveSource$$ProxyCalculateSize RVA 0x17913f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017a13f4(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(_UNK_017a1484 + 0x17a1408);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a1488 + 0x17a141c));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_017a148c + 0x17a143c) + 0x74) == 0) {
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



// ===== fat.gamekitdata.ComActiveSource$$ProxyInternalMergeFrom RVA 0x1791490 =====

void FUN_017a1490(int param_1,int param_2)

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



// ===== fat.gamekitdata.ComActiveSource$$.cctor RVA 0x17914f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a14f4(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_017a1550 + 0x17a1504);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a1554 + 0x17a1518));
    func_0x01384978(*(undefined4 *)(_UNK_017a1558 + 0x17a1524));
    *pcVar1 = '\x01';
  }
  **(undefined4 **)(**(int **)(_UNK_017a155c + 0x17a1538) + 0x5c) =
       **(undefined4 **)(_UNK_017a1560 + 0x17a1548);
  return;
}


