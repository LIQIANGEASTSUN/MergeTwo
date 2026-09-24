/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.AutoFingerInfo$$.ctor RVA 0x18fec8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0190ec8c(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0190ed54 + 0x190eca0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0190ed58 + 0x190ecb4));
    func_0x01384978(*(undefined4 *)(_UNK_0190ed5c + 0x190ecc0));
    func_0x01384978(*(undefined4 *)(_UNK_0190ed60 + 0x190eccc));
    func_0x01384978(*(undefined4 *)(_UNK_0190ed64 + 0x190ecd8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0190ed68 + 0x190ecec));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0190ed6c + 0x190ed00));
  piVar2 = *(int **)(_UNK_0190ed70 + 0x190ed14);
  param_1[4] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0190ed74 + 0x190ed34));
                    /* WARNING: Could not recover jumptable at 0x0190ed50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.AutoFingerInfo$$.ctor RVA 0x18fed78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0190ed78(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  pcVar6 = (char *)(_UNK_0190ee30 + 0x190ed90);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0190ee34 + 0x190eda4));
    *pcVar6 = '\x01';
  }
  FUN_0190ec8c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar7,**(undefined4 **)(_UNK_0190ee38 + 0x190ede4));
  uVar9 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar8 = *(undefined4 *)(param_2 + 0x20);
  uVar1 = *(undefined1 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar8;
  uVar2 = func_0x0244f914(uVar9,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.AutoFingerInfo$$Clone RVA 0x18fee3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0190ee3c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0190ee90 + 0x190ee50);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0190ee94 + 0x190ee64));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0190ee98 + 0x190ee78));
  FUN_0190ed78(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.AutoFingerInfo$$ProxyInternalMergeFrom RVA 0x18fee9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0190ee9c(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  pcVar4 = (char *)(_UNK_0190f060 + 0x190eeb4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0190f064 + 0x190eec8));
    func_0x01384978(*(undefined4 *)(_UNK_0190f068 + 0x190eed4));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0190f06c + 0x190ef04);
    puVar8 = *(undefined4 **)(_UNK_0190f070 + 0x190ef0c);
    do {
      if (uVar1 < 0x21) {
        if (uVar1 == 8) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x14) = uVar2;
        }
        else if (uVar1 == 0x18) {
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x18) = lVar9 != 0;
        }
        else {
          if (uVar1 != 0x20) goto LAB_0190ef98;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
      }
      else if (uVar1 < 0x31) {
        if (uVar1 == 0x28) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
        else if (uVar1 == 0x30) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x24) = uVar2;
        }
        else {
LAB_0190ef98:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 == 0x3a) {
        iVar3 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x10);
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar6,param_2,uVar2,*puVar8);
      }
      else {
        if (uVar1 != 0x40) goto LAB_0190ef98;
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0xc) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.AutoFingerInfo$$get_XXX_RowIdentifier RVA 0x18ff074 =====

undefined4 FUN_0190f074(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ===== fat.rawdata.AutoFingerInfo$$set_XXX_RowIdentifier RVA 0x18ff07c =====

void FUN_0190f07c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



// ===== fat.rawdata.AutoFingerInfo$$.cctor RVA 0x18ff084 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0190f084(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0190f0f8 + 0x190f094);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0190f0fc + 0x190f0a8));
    func_0x01384978(*(undefined4 *)(_UNK_0190f100 + 0x190f0b4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0190f104 + 0x190f0c8);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0190f108 + 0x190f0d8);
  uVar1 = func_0x0244f954(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


