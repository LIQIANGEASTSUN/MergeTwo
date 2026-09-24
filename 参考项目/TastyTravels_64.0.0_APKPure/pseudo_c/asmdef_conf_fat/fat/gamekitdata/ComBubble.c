/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.ComBubble$$.ctor RVA 0x178e3d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179e3d0(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0179e454 + 0x179e3e4);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179e458 + 0x179e3f8));
    func_0x01384978(*(undefined4 *)(_UNK_0179e45c + 0x179e404));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0179e460 + 0x179e418) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0179e464 + 0x179e434));
                    /* WARNING: Could not recover jumptable at 0x0179e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.ComBubble$$.ctor RVA 0x178e468 =====

void FUN_0179e468(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_0179e3d0();
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  uVar1 = func_0x0244f914(uVar1,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.gamekitdata.ComBubble$$Clone RVA 0x178e4a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0179e4a4(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0179e4f8 + 0x179e4b8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179e4fc + 0x179e4cc));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0179e500 + 0x179e4e0));
  FUN_0179e468(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.ComBubble$$InternalWriteTo RVA 0x178e504 =====

void FUN_0179e504(int param_1,undefined4 param_2)

{
  undefined4 extraout_r1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    func_0x01485198(param_2,8,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0xc),0);
  }
  if (*(int *)(param_1 + 0x10) != 0 || *(int *)(param_1 + 0x14) != 0) {
    func_0x01485198(param_2,0x10,0);
    func_0x01485078(param_2,extraout_r1,*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x01485198(param_2,0x18,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x18),0);
  }
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)&UNK_044e88b4)(*(int *)(param_1 + 8),param_2,0);
    return;
  }
  return;
}



// ===== fat.gamekitdata.ComBubble$$ProxyCalculateSize RVA 0x178e5cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0179e5cc(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = (char *)(_UNK_0179e6d8 + 0x179e5e0);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179e6dc + 0x179e5f4));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_0179e6e0 + 0x179e614) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar2,0);
    iVar2 = iVar2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar3 != 0 || iVar4 != 0) {
    if (*(int *)(**(int **)(_UNK_0179e6e4 + 0x179e654) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9cc(iVar3,iVar4,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_0179e6e8 + 0x179e694) + 0x74) == 0) {
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



// ===== fat.gamekitdata.ComBubble$$ProxyInternalMergeFrom RVA 0x178e6ec =====

void FUN_0179e6ec(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = param_2 + 8;
  do {
    uVar1 = func_0x01484f58(param_2,iVar3,0);
    switch(uVar1 >> 3 | uVar1 << 0x1d) {
    case 0:
      return;
    case 1:
      uVar2 = func_0x01484f98(param_2,iVar3,0);
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      break;
    case 2:
      uVar4 = func_0x01484f88(param_2,iVar3,0);
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      break;
    case 3:
      uVar2 = func_0x01484f98(param_2,iVar3,0);
      *(undefined4 *)(param_1 + 0x18) = uVar2;
      break;
    default:
      uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
      *(undefined4 *)(param_1 + 8) = uVar2;
    }
  } while( true );
}



// ===== fat.gamekitdata.ComBubble$$.cctor RVA 0x178e79c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179e79c(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0179e7f8 + 0x179e7ac);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179e7fc + 0x179e7c0));
    func_0x01384978(*(undefined4 *)(_UNK_0179e800 + 0x179e7cc));
    *pcVar1 = '\x01';
  }
  **(undefined4 **)(**(int **)(_UNK_0179e804 + 0x179e7e0) + 0x5c) =
       **(undefined4 **)(_UNK_0179e808 + 0x179e7f0);
  return;
}


