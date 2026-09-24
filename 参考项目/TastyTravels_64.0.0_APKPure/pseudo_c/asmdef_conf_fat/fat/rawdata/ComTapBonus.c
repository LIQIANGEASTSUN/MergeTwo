/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComTapBonus$$.ctor RVA 0x19279fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019379fc(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01937ac4 + 0x1937a10);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01937ac8 + 0x1937a24));
    func_0x01384978(*(undefined4 *)(_UNK_01937acc + 0x1937a30));
    func_0x01384978(*(undefined4 *)(_UNK_01937ad0 + 0x1937a3c));
    func_0x01384978(*(undefined4 *)(_UNK_01937ad4 + 0x1937a48));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01937ad8 + 0x1937a5c));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_01937adc + 0x1937a70));
  piVar2 = *(int **)(_UNK_01937ae0 + 0x1937a84);
  param_1[4] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01937ae4 + 0x1937aa4));
                    /* WARNING: Could not recover jumptable at 0x01937ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComTapBonus$$.ctor RVA 0x1927ae8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01937ae8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  
  pcVar5 = (char *)(_UNK_01937b84 + 0x1937b00);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01937b88 + 0x1937b14));
    *pcVar5 = '\x01';
  }
  FUN_019379fc(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,**(undefined4 **)(_UNK_01937b8c + 0x1937b54));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar7 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.ComTapBonus$$Clone RVA 0x1927b90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01937b90(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01937be4 + 0x1937ba4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01937be8 + 0x1937bb8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01937bec + 0x1937bcc));
  FUN_01937ae8(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComTapBonus$$ProxyInternalMergeFrom RVA 0x1927bf0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01937bf0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_01937d64 + 0x1937c08);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01937d68 + 0x1937c1c));
    func_0x01384978(*(undefined4 *)(_UNK_01937d6c + 0x1937c28));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01937d70 + 0x1937c58);
    puVar8 = *(undefined4 **)(_UNK_01937d74 + 0x1937c60);
    do {
      if (uVar1 < 0x11) {
        if (uVar1 == 8) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar2;
        }
        else if (uVar1 == 0x10) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x14) = uVar2;
        }
        else {
LAB_01937cec:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 == 0x18) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x18) = uVar2;
      }
      else if (uVar1 == 0x20) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x1c) = uVar2;
      }
      else {
        if (uVar1 != 0x2a) goto LAB_01937cec;
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
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ComTapBonus$$get_XXX_RowIdentifier RVA 0x1927d78 =====

undefined4 FUN_01937d78(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== fat.rawdata.ComTapBonus$$set_XXX_RowIdentifier RVA 0x1927d80 =====

void FUN_01937d80(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== fat.rawdata.ComTapBonus$$.cctor RVA 0x1927d88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01937d88(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01937dfc + 0x1937d98);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01937e00 + 0x1937dac));
    func_0x01384978(*(undefined4 *)(_UNK_01937e04 + 0x1937db8));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01937e08 + 0x1937dcc);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01937e0c + 0x1937ddc);
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


