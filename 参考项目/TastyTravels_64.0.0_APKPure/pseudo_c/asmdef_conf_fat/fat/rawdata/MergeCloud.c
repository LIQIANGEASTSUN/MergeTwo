/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.MergeCloud$$.ctor RVA 0x16b1ef4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c1ef4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_016c2014 + 0x16c1f08);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c2018 + 0x16c1f1c));
    func_0x01384978(*(undefined4 *)(_UNK_016c201c + 0x16c1f28));
    func_0x01384978(*(undefined4 *)(_UNK_016c2020 + 0x16c1f34));
    func_0x01384978(*(undefined4 *)(_UNK_016c2024 + 0x16c1f40));
    func_0x01384978(*(undefined4 *)(_UNK_016c2028 + 0x16c1f4c));
    func_0x01384978(*(undefined4 *)(_UNK_016c202c + 0x16c1f58));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_016c2030 + 0x16c1f6c);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_016c2034 + 0x16c1f80);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  puVar5 = *(undefined4 **)(_UNK_016c2038 + 0x16c1fa8);
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_016c203c + 0x16c1fc0));
  piVar3 = *(int **)(_UNK_016c2040 + 0x16c1fd4);
  param_1[8] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016c2044 + 0x16c1ff4));
                    /* WARNING: Could not recover jumptable at 0x016c2010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.MergeCloud$$.ctor RVA 0x16b2048 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c2048(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_016c213c + 0x16c2060);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c2140 + 0x16c2074));
    func_0x01384978(*(undefined4 *)(_UNK_016c2144 + 0x16c2080));
    *pcVar4 = '\x01';
  }
  FUN_016c1ef4(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_016c2148 + 0x16c20c4);
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,**(undefined4 **)(_UNK_016c214c + 0x16c2110));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.MergeCloud$$Clone RVA 0x16b2150 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016c2150(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016c21a4 + 0x16c2164);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c21a8 + 0x16c2178));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016c21ac + 0x16c218c));
  FUN_016c2048(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.MergeCloud$$ProxyInternalMergeFrom RVA 0x16b21b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c21b0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar4 = (char *)(_UNK_016c23d4 + 0x16c21cc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c23d8 + 0x16c21e0));
    func_0x01384978(*(undefined4 *)(_UNK_016c23dc + 0x16c21ec));
    func_0x01384978(*(undefined4 *)(_UNK_016c23e0 + 0x16c21f8));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016c23e4 + 0x16c2228);
    puVar8 = *(undefined4 **)(_UNK_016c23e8 + 0x16c2230);
    puVar9 = *(undefined4 **)(_UNK_016c23ec + 0x16c2238);
    do {
      if (uVar1 < 0x1b) {
        if (uVar1 < 0x11) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x14) = uVar2;
          }
          else {
            if (uVar1 != 0x10) goto LAB_016c2328;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x18) = uVar2;
          }
        }
        else if ((uVar1 | 2) == 0x1a) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x20);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0364b0e0(iVar6,param_2,uVar2,*puVar8);
        }
        else {
LAB_016c2328:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 < 0x2b) {
        if (uVar1 == 0x20) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x24) = uVar2;
        }
        else {
          if (uVar1 != 0x2a) goto LAB_016c2328;
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x1c);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
LAB_016c2394:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x036520e8(iVar6,param_2,uVar2,*puVar9);
        }
      }
      else {
        if (uVar1 == 0x32) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
          goto LAB_016c2394;
        }
        if (uVar1 != 0x38) goto LAB_016c2328;
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0xc) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.MergeCloud$$get_XXX_RowIdentifier RVA 0x16b23f0 =====

undefined4 FUN_016c23f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ===== fat.rawdata.MergeCloud$$set_XXX_RowIdentifier RVA 0x16b23f8 =====

void FUN_016c23f8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



// ===== fat.rawdata.MergeCloud$$.cctor RVA 0x16b2400 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c2400(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016c24a4 + 0x16c2410);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c24a8 + 0x16c2424));
    func_0x01384978(*(undefined4 *)(_UNK_016c24ac + 0x16c2430));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_016c24b0 + 0x16c2444);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_016c24b4 + 0x16c2454);
  uVar1 = func_0x0244f954(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}


