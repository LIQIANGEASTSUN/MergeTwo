/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.ComTrigSource$$.ctor RVA 0x1790f74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a0f74(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_017a0ff8 + 0x17a0f88);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a0ffc + 0x17a0f9c));
    func_0x01384978(*(undefined4 *)(_UNK_017a1000 + 0x17a0fa8));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_017a1004 + 0x17a0fbc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_017a1008 + 0x17a0fd8));
                    /* WARNING: Could not recover jumptable at 0x017a0ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.ComTrigSource$$.ctor RVA 0x179100c =====

void FUN_017a100c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_017a0f74();
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  uVar1 = func_0x0244f914(uVar1,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.gamekitdata.ComTrigSource$$Clone RVA 0x1791044 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017a1044(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_017a1098 + 0x17a1058);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a109c + 0x17a106c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_017a10a0 + 0x17a1080));
  FUN_017a100c(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.ComTrigSource$$InternalWriteTo RVA 0x17910a4 =====

void FUN_017a10a4(int param_1,undefined4 param_2)

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



// ===== fat.gamekitdata.ComTrigSource$$ProxyCalculateSize RVA 0x17910fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017a10fc(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(_UNK_017a118c + 0x17a1110);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a1190 + 0x17a1124));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_017a1194 + 0x17a1144) + 0x74) == 0) {
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



// ===== fat.gamekitdata.ComTrigSource$$ProxyInternalMergeFrom RVA 0x1791198 =====

void FUN_017a1198(int param_1,int param_2)

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



// ===== fat.gamekitdata.ComTrigSource$$.cctor RVA 0x17911fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a11fc(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_017a1258 + 0x17a120c);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a125c + 0x17a1220));
    func_0x01384978(*(undefined4 *)(_UNK_017a1260 + 0x17a122c));
    *pcVar1 = '\x01';
  }
  **(undefined4 **)(**(int **)(_UNK_017a1264 + 0x17a1240) + 0x5c) =
       **(undefined4 **)(_UNK_017a1268 + 0x17a1250);
  return;
}


