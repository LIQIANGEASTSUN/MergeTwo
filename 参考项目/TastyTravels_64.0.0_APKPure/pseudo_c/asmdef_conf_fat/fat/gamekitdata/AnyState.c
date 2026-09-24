/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.AnyState$$.ctor RVA 0x179ca5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017aca5c(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_017acae0 + 0x17aca70);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017acae4 + 0x17aca84));
    func_0x01384978(*(undefined4 *)(_UNK_017acae8 + 0x17aca90));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_017acaec + 0x17acaa4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_017acaf0 + 0x17acac0));
                    /* WARNING: Could not recover jumptable at 0x017acadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.AnyState$$.ctor RVA 0x179caf4 =====

void FUN_017acaf4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_017aca5c();
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



// ===== fat.gamekitdata.AnyState$$Clone RVA 0x179cb30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017acb30(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_017acb84 + 0x17acb44);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017acb88 + 0x17acb58));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_017acb8c + 0x17acb6c));
  FUN_017acaf4(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.AnyState$$InternalWriteTo RVA 0x179cb90 =====

void FUN_017acb90(int param_1,undefined4 param_2)

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



// ===== fat.gamekitdata.AnyState$$ProxyCalculateSize RVA 0x179cc14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017acc14(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = (char *)(_UNK_017acce0 + 0x17acc28);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017acce4 + 0x17acc3c));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_017acce8 + 0x17acc5c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar2,0);
    iVar2 = iVar2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017accec + 0x17acc9c) + 0x74) == 0) {
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



// ===== fat.gamekitdata.AnyState$$ProxyInternalMergeFrom RVA 0x179ccf0 =====

void FUN_017accf0(int param_1,int param_2)

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



// ===== fat.gamekitdata.AnyState$$.cctor RVA 0x179cd74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017acd74(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_017acdd0 + 0x17acd84);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017acdd4 + 0x17acd98));
    func_0x01384978(*(undefined4 *)(_UNK_017acdd8 + 0x17acda4));
    *pcVar1 = '\x01';
  }
  **(undefined4 **)(**(int **)(_UNK_017acddc + 0x17acdb8) + 0x5c) =
       **(undefined4 **)(_UNK_017acde0 + 0x17acdc8);
  return;
}


