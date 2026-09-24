/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.BoardSkin$$.ctor RVA 0x1904d44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01914d44(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_01914e64 + 0x1914d58);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01914e68 + 0x1914d6c));
    func_0x01384978(*(undefined4 *)(_UNK_01914e6c + 0x1914d78));
    func_0x01384978(*(undefined4 *)(_UNK_01914e70 + 0x1914d84));
    func_0x01384978(*(undefined4 *)(_UNK_01914e74 + 0x1914d90));
    func_0x01384978(*(undefined4 *)(_UNK_01914e78 + 0x1914d9c));
    func_0x01384978(*(undefined4 *)(_UNK_01914e7c + 0x1914da8));
    *pcVar5 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_01914e80 + 0x1914dbc);
  iVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_01914e84 + 0x1914dd0);
  func_0x0364cfb8(iVar1,*puVar7);
  puVar2 = *(undefined4 **)(_UNK_01914e88 + 0x1914de0);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_01914e8c + 0x1914df8));
  uVar3 = *puVar6;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar3);
  func_0x0364cfb8(iVar1,*puVar7);
  piVar4 = *(int **)(_UNK_01914e90 + 0x1914e24);
  param_1[7] = iVar1;
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01914e94 + 0x1914e44));
                    /* WARNING: Could not recover jumptable at 0x01914e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.BoardSkin$$.ctor RVA 0x1904e98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01914e98(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_01914f84 + 0x1914eb0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01914f88 + 0x1914ec4));
    func_0x01384978(*(undefined4 *)(_UNK_01914f8c + 0x1914ed0));
    *pcVar3 = '\x01';
  }
  FUN_01914d44(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_01914f90 + 0x1914f14);
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_01914f94 + 0x1914f38));
  iVar4 = *(int *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.BoardSkin$$Clone RVA 0x1904f98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01914f98(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01914fec + 0x1914fac);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01914ff0 + 0x1914fc0));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01914ff4 + 0x1914fd4));
  FUN_01914e98(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.BoardSkin$$ProxyInternalMergeFrom RVA 0x1904ff8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01914ff8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar3 = (char *)(_UNK_019151d8 + 0x1915014);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019151dc + 0x1915028));
    func_0x01384978(*(undefined4 *)(_UNK_019151e0 + 0x1915034));
    func_0x01384978(*(undefined4 *)(_UNK_019151e4 + 0x1915040));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_019151e8 + 0x1915070);
    puVar8 = *(undefined4 **)(_UNK_019151ec + 0x1915078);
    puVar9 = *(undefined4 **)(_UNK_019151f0 + 0x1915080);
    do {
      if (uVar1 < 0x13) {
        if (uVar1 == 8) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else {
          if (uVar1 != 0x10 && uVar1 != 0x12) goto LAB_01915144;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
LAB_01915120:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0364b0e0(iVar6,param_2,uVar4,*puVar8);
        }
      }
      else if (uVar1 < 0x21) {
        if (uVar1 == 0x1a) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x14);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x036520e8(iVar6,param_2,uVar4,*puVar9);
        }
        else {
          if (uVar1 != 0x20) goto LAB_01915144;
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x18) = uVar4;
        }
      }
      else {
        if ((uVar1 | 2) == 0x2a) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x1c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
          goto LAB_01915120;
        }
LAB_01915144:
        uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar4;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.BoardSkin$$get_XXX_RowIdentifier RVA 0x19051f4 =====

undefined4 FUN_019151f4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== fat.rawdata.BoardSkin$$set_XXX_RowIdentifier RVA 0x19051fc =====

void FUN_019151fc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== fat.rawdata.BoardSkin$$.cctor RVA 0x1905204 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01915204(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_019152a8 + 0x1915214);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019152ac + 0x1915228));
    func_0x01384978(*(undefined4 *)(_UNK_019152b0 + 0x1915234));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_019152b4 + 0x1915248);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_019152b8 + 0x1915258);
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}


