/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.Order$$.ctor RVA 0x178c9cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179c9cc(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0179ca50 + 0x179c9e0);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179ca54 + 0x179c9f4));
    func_0x01384978(*(undefined4 *)(_UNK_0179ca58 + 0x179ca00));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0179ca5c + 0x179ca14) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0179ca60 + 0x179ca30));
                    /* WARNING: Could not recover jumptable at 0x0179ca4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.Order$$.ctor RVA 0x178ca64 =====

void FUN_0179ca64(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_0179c9cc();
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



// ===== fat.gamekitdata.Order$$Clone RVA 0x178caa0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0179caa0(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0179caf4 + 0x179cab4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179caf8 + 0x179cac8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0179cafc + 0x179cadc));
  FUN_0179ca64(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.Order$$InternalWriteTo RVA 0x178cb00 =====

void FUN_0179cb00(int param_1,undefined4 param_2)

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



// ===== fat.gamekitdata.Order$$ProxyCalculateSize RVA 0x178cb84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0179cb84(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = (char *)(_UNK_0179cc50 + 0x179cb98);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179cc54 + 0x179cbac));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_0179cc58 + 0x179cbcc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar2,0);
    iVar2 = iVar2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_0179cc5c + 0x179cc0c) + 0x74) == 0) {
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



// ===== fat.gamekitdata.Order$$ProxyInternalMergeFrom RVA 0x178cc60 =====

void FUN_0179cc60(int param_1,int param_2)

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



// ===== fat.gamekitdata.Order$$.cctor RVA 0x178cce4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179cce4(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0179cd40 + 0x179ccf4);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179cd44 + 0x179cd08));
    func_0x01384978(*(undefined4 *)(_UNK_0179cd48 + 0x179cd14));
    *pcVar1 = '\x01';
  }
  **(undefined4 **)(**(int **)(_UNK_0179cd4c + 0x179cd28) + 0x5c) =
       **(undefined4 **)(_UNK_0179cd50 + 0x179cd38);
  return;
}


