/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.GirdRewardData$$.ctor RVA 0x178a0f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179a0f0(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0179a174 + 0x179a104);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179a178 + 0x179a118));
    func_0x01384978(*(undefined4 *)(_UNK_0179a17c + 0x179a124));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0179a180 + 0x179a138) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0179a184 + 0x179a154));
                    /* WARNING: Could not recover jumptable at 0x0179a170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.GirdRewardData$$.ctor RVA 0x178a188 =====

void FUN_0179a188(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_0179a0f0();
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  uVar3 = *(undefined8 *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  *(undefined8 *)(param_1 + 0x14) = uVar3;
  uVar1 = func_0x0244f914(uVar1,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.gamekitdata.GirdRewardData$$Clone RVA 0x178a1d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0179a1d0(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0179a224 + 0x179a1e4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179a228 + 0x179a1f8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0179a22c + 0x179a20c));
  FUN_0179a188(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.GirdRewardData$$InternalWriteTo RVA 0x178a230 =====

void FUN_0179a230(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    func_0x01485198(param_2,8,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0xc),0);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x01485198(param_2,0x10,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x10),0);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    func_0x01485198(param_2,0x18,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x14),0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x01485198(param_2,0x20,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x18),0);
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    func_0x01485198(param_2,0x28,0);
    func_0x014850b8(param_2,*(undefined1 *)(param_1 + 0x1c),0);
  }
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)&UNK_044e88b4)(*(int *)(param_1 + 8),param_2,0);
    return;
  }
  return;
}



// ===== fat.gamekitdata.GirdRewardData$$ProxyCalculateSize RVA 0x178a338 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0179a338(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = (char *)(_UNK_0179a488 + 0x179a34c);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179a48c + 0x179a360));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_0179a490 + 0x179a380) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar2,0);
    iVar2 = iVar2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_0179a494 + 0x179a3c0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_0179a498 + 0x179a3fc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_0179a49c + 0x179a438) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    iVar2 = iVar2 + 2;
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = func_0x0244f9bc(*(int *)(param_1 + 8),0);
    iVar2 = iVar3 + iVar2;
  }
  return iVar2;
}



// ===== fat.gamekitdata.GirdRewardData$$ProxyInternalMergeFrom RVA 0x178a4a0 =====

void FUN_0179a4a0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = param_2 + 8;
  do {
    while( true ) {
      uVar1 = func_0x01484f58(param_2,iVar3,0);
      if (uVar1 == 0) {
        return;
      }
      if (uVar1 < 0x11) break;
      if (uVar1 == 0x18) {
        uVar2 = func_0x01484f98(param_2,iVar3,0);
        *(undefined4 *)(param_1 + 0x14) = uVar2;
      }
      else if (uVar1 == 0x20) {
        uVar2 = func_0x01484f98(param_2,iVar3,0);
        *(undefined4 *)(param_1 + 0x18) = uVar2;
      }
      else if (uVar1 == 0x28) {
        lVar4 = func_0x01484f88(param_2,iVar3,0);
        *(bool *)(param_1 + 0x1c) = lVar4 != 0;
      }
      else {
LAB_0179a530:
        uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar2;
      }
    }
    if (uVar1 == 8) {
      uVar2 = func_0x01484f98(param_2,iVar3,0);
      *(undefined4 *)(param_1 + 0xc) = uVar2;
    }
    else {
      if (uVar1 != 0x10) goto LAB_0179a530;
      uVar2 = func_0x01484f98(param_2,iVar3,0);
      *(undefined4 *)(param_1 + 0x10) = uVar2;
    }
  } while( true );
}



// ===== fat.gamekitdata.GirdRewardData$$.cctor RVA 0x178a598 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179a598(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0179a5f4 + 0x179a5a8);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179a5f8 + 0x179a5bc));
    func_0x01384978(*(undefined4 *)(_UNK_0179a5fc + 0x179a5c8));
    *pcVar1 = '\x01';
  }
  **(undefined4 **)(**(int **)(_UNK_0179a600 + 0x179a5dc) + 0x5c) =
       **(undefined4 **)(_UNK_0179a604 + 0x179a5ec);
  return;
}


