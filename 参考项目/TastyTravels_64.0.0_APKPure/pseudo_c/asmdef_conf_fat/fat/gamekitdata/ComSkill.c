/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.ComSkill$$.ctor RVA 0x178f114 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179f114(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0179f198 + 0x179f128);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179f19c + 0x179f13c));
    func_0x01384978(*(undefined4 *)(_UNK_0179f1a0 + 0x179f148));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0179f1a4 + 0x179f15c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0179f1a8 + 0x179f178));
                    /* WARNING: Could not recover jumptable at 0x0179f194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.ComSkill$$.ctor RVA 0x178f1ac =====

void FUN_0179f1ac(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_0179f114();
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



// ===== fat.gamekitdata.ComSkill$$Clone RVA 0x178f1e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0179f1e8(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0179f23c + 0x179f1fc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179f240 + 0x179f210));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0179f244 + 0x179f224));
  FUN_0179f1ac(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.ComSkill$$InternalWriteTo RVA 0x178f248 =====

void FUN_0179f248(int param_1,undefined4 param_2)

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



// ===== fat.gamekitdata.ComSkill$$ProxyCalculateSize RVA 0x178f2cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0179f2cc(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = (char *)(_UNK_0179f398 + 0x179f2e0);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179f39c + 0x179f2f4));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_0179f3a0 + 0x179f314) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar2,0);
    iVar2 = iVar2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_0179f3a4 + 0x179f354) + 0x74) == 0) {
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



// ===== fat.gamekitdata.ComSkill$$ProxyInternalMergeFrom RVA 0x178f3a8 =====

void FUN_0179f3a8(int param_1,int param_2)

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



// ===== fat.gamekitdata.ComSkill$$.cctor RVA 0x178f42c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179f42c(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0179f488 + 0x179f43c);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179f48c + 0x179f450));
    func_0x01384978(*(undefined4 *)(_UNK_0179f490 + 0x179f45c));
    *pcVar1 = '\x01';
  }
  **(undefined4 **)(**(int **)(_UNK_0179f494 + 0x179f470) + 0x5c) =
       **(undefined4 **)(_UNK_0179f498 + 0x179f480);
  return;
}


