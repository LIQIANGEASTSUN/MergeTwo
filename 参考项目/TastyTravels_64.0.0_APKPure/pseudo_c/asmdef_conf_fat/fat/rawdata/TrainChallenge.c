/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.TrainChallenge$$get_XXX_RowIdentifier RVA 0x1730bcc =====

undefined4 FUN_01740bcc(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== fat.rawdata.TrainChallenge$$set_XXX_RowIdentifier RVA 0x1730bd4 =====

void FUN_01740bd4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== fat.rawdata.TrainChallenge$$.ctor RVA 0x1730bdc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01740bdc(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_01740d14 + 0x1740bf0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01740d18 + 0x1740c04));
    func_0x01384978(*(undefined4 *)(_UNK_01740d1c + 0x1740c10));
    func_0x01384978(*(undefined4 *)(_UNK_01740d20 + 0x1740c1c));
    func_0x01384978(*(undefined4 *)(_UNK_01740d24 + 0x1740c28));
    func_0x01384978(*(undefined4 *)(_UNK_01740d28 + 0x1740c34));
    func_0x01384978(*(undefined4 *)(_UNK_01740d2c + 0x1740c40));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01740d30 + 0x1740c54));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_01740d34 + 0x1740c68));
  puVar5 = *(undefined4 **)(_UNK_01740d38 + 0x1740c7c);
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_01740d3c + 0x1740c94);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_01740d40 + 0x1740cd4);
  param_1[8] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01740d44 + 0x1740cf4));
                    /* WARNING: Could not recover jumptable at 0x01740d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.TrainChallenge$$.ctor RVA 0x1730d48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01740d48(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_01740e4c + 0x1740d60);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01740e50 + 0x1740d74));
    func_0x01384978(*(undefined4 *)(_UNK_01740e54 + 0x1740d80));
    *pcVar3 = '\x01';
  }
  FUN_01740bdc(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_01740e58 + 0x1740dc0));
  iVar4 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_01740e5c + 0x1740dec);
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.TrainChallenge$$Clone RVA 0x1730e60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01740e60(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01740eb4 + 0x1740e74);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01740eb8 + 0x1740e88));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01740ebc + 0x1740e9c));
  FUN_01740d48(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.TrainChallenge$$ProxyInternalMergeFrom RVA 0x1730ec0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01740ec0(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_017410d4 + 0x1740edc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017410d8 + 0x1740ef0));
    func_0x01384978(*(undefined4 *)(_UNK_017410dc + 0x1740efc));
    func_0x01384978(*(undefined4 *)(_UNK_017410e0 + 0x1740f08));
    *pcVar4 = '\x01';
  }
  iVar6 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar6,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_017410e4 + 0x1740f38);
    puVar8 = *(undefined4 **)(_UNK_017410e8 + 0x1740f40);
    puVar9 = *(undefined4 **)(_UNK_017410ec + 0x1740f48);
    do {
      if (uVar1 < 0x19) {
        if (0x10 < uVar1) {
          if (uVar1 == 0x12) {
LAB_0174102c:
            iVar3 = *piVar7;
            iVar5 = *(int *)(param_1 + 0x18);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
            goto LAB_01741078;
          }
          if (uVar1 == 0x18) goto LAB_01740f94;
          goto LAB_01741014;
        }
        if (uVar1 != 8) {
          if (uVar1 == 0x10) goto LAB_0174102c;
          goto LAB_01741014;
        }
        uVar2 = func_0x01484f98(param_2,iVar6,0);
        *(undefined4 *)(param_1 + 0x10) = uVar2;
      }
      else {
        if (uVar1 < 0x21) {
          if (uVar1 == 0x1a) {
LAB_01740f94:
            iVar3 = *piVar7;
            iVar5 = *(int *)(param_1 + 0x1c);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
LAB_01741078:
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x0364b0e0(iVar5,param_2,uVar2,*puVar8);
            goto LAB_01741098;
          }
          if (uVar1 == 0x20) goto LAB_01741054;
        }
        else {
          if (uVar1 == 0x22) {
LAB_01741054:
            iVar3 = *piVar7;
            iVar5 = *(int *)(param_1 + 0x20);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
            goto LAB_01741078;
          }
          if (uVar1 == 0x2a) {
            iVar3 = *piVar7;
            iVar5 = *(int *)(param_1 + 0x14);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x036520e8(iVar5,param_2,uVar2,*puVar9);
            goto LAB_01741098;
          }
        }
LAB_01741014:
        uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar2;
      }
LAB_01741098:
      uVar1 = func_0x01484f58(param_2,iVar6,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.TrainChallenge$$.cctor RVA 0x17310f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017410f0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_017411ac + 0x1741100);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017411b0 + 0x1741114));
    func_0x01384978(*(undefined4 *)(_UNK_017411b4 + 0x1741120));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_017411b8 + 0x1741134);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_017411bc + 0x1741144);
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  return;
}


