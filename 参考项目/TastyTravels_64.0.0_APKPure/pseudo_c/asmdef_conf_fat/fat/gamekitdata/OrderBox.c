/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.OrderBox$$.ctor RVA 0x17892d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017992d0(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01799354 + 0x17992e4);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01799358 + 0x17992f8));
    func_0x01384978(*(undefined4 *)(_UNK_0179935c + 0x1799304));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01799360 + 0x1799318) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01799364 + 0x1799334));
                    /* WARNING: Could not recover jumptable at 0x01799350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.OrderBox$$.ctor RVA 0x1789368 =====

void FUN_01799368(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_017992d0();
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



// ===== fat.gamekitdata.OrderBox$$Clone RVA 0x17893a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017993a4(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_017993f8 + 0x17993b8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017993fc + 0x17993cc));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01799400 + 0x17993e0));
  FUN_01799368(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.OrderBox$$InternalWriteTo RVA 0x1789404 =====

void FUN_01799404(int param_1,undefined4 param_2)

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



// ===== fat.gamekitdata.OrderBox$$ProxyCalculateSize RVA 0x1789488 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01799488(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = (char *)(_UNK_01799554 + 0x179949c);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01799558 + 0x17994b0));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_0179955c + 0x17994d0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar2,0);
    iVar2 = iVar2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_01799560 + 0x1799510) + 0x74) == 0) {
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



// ===== fat.gamekitdata.OrderBox$$ProxyInternalMergeFrom RVA 0x1789564 =====

void FUN_01799564(int param_1,int param_2)

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



// ===== fat.gamekitdata.OrderBox$$.cctor RVA 0x17895e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017995e8(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01799644 + 0x17995f8);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01799648 + 0x179960c));
    func_0x01384978(*(undefined4 *)(_UNK_0179964c + 0x1799618));
    *pcVar1 = '\x01';
  }
  **(undefined4 **)(**(int **)(_UNK_01799650 + 0x179962c) + 0x5c) =
       **(undefined4 **)(_UNK_01799654 + 0x179963c);
  return;
}


