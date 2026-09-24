/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventTileBingoRound$$.ctor RVA 0x1643f88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01653f88(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01654094 + 0x1653f9c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01654098 + 0x1653fb0));
    func_0x01384978(*(undefined4 *)(_UNK_0165409c + 0x1653fbc));
    func_0x01384978(*(undefined4 *)(_UNK_016540a0 + 0x1653fc8));
    func_0x01384978(*(undefined4 *)(_UNK_016540a4 + 0x1653fd4));
    func_0x01384978(*(undefined4 *)(_UNK_016540a8 + 0x1653fe0));
    func_0x01384978(*(undefined4 *)(_UNK_016540ac + 0x1653fec));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016540b0 + 0x1654000));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_016540b4 + 0x1654014));
  puVar2 = *(undefined4 **)(_UNK_016540b8 + 0x1654028);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_016540bc + 0x1654040));
  piVar3 = *(int **)(_UNK_016540c0 + 0x1654054);
  param_1[5] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016540c4 + 0x1654074));
                    /* WARNING: Could not recover jumptable at 0x01654090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventTileBingoRound$$.ctor RVA 0x16440c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016540c8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_0165418c + 0x16540e0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01654190 + 0x16540f4));
    func_0x01384978(*(undefined4 *)(_UNK_01654194 + 0x1654100));
    *pcVar3 = '\x01';
  }
  FUN_01653f88(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_01654198 + 0x1654140));
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,**(undefined4 **)(_UNK_0165419c + 0x1654168));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventTileBingoRound$$Clone RVA 0x16441a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016541a0(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016541f4 + 0x16541b4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016541f8 + 0x16541c8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016541fc + 0x16541dc));
  FUN_016540c8(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventTileBingoRound$$ProxyInternalMergeFrom RVA 0x1644200 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01654200(int param_1,int param_2)

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
  
  pcVar3 = (char *)(_UNK_01654384 + 0x165421c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01654388 + 0x1654230));
    func_0x01384978(*(undefined4 *)(_UNK_0165438c + 0x165423c));
    func_0x01384978(*(undefined4 *)(_UNK_01654390 + 0x1654248));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01654394 + 0x1654278);
    puVar8 = *(undefined4 **)(_UNK_01654398 + 0x1654280);
    puVar9 = *(undefined4 **)(_UNK_0165439c + 0x1654288);
    do {
      if (uVar1 < 0x13) {
        if (uVar1 == 8) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else {
          if (uVar1 != 0x12) goto LAB_01654338;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x036520e8(iVar6,param_2,uVar4,*puVar8);
        }
      }
      else if ((uVar1 | 2) == 0x1a) {
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
        func_0x0364b0e0(iVar6,param_2,uVar4,*puVar9);
      }
      else {
LAB_01654338:
        uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar4;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventTileBingoRound$$get_XXX_RowIdentifier RVA 0x16443a0 =====

undefined4 FUN_016543a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== fat.rawdata.EventTileBingoRound$$set_XXX_RowIdentifier RVA 0x16443a8 =====

void FUN_016543a8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// ===== fat.rawdata.EventTileBingoRound$$.cctor RVA 0x16443b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016543b0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0165443c + 0x16543c0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01654440 + 0x16543d4));
    func_0x01384978(*(undefined4 *)(_UNK_01654444 + 0x16543e0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01654448 + 0x16543f4);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0165444c + 0x1654404);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


