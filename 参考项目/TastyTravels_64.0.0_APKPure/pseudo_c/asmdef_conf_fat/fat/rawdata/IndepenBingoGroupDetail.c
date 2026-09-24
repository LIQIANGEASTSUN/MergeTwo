/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.IndepenBingoGroupDetail$$.ctor RVA 0x16872fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016972fc(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_0169741c + 0x1697310);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01697420 + 0x1697324));
    func_0x01384978(*(undefined4 *)(_UNK_01697424 + 0x1697330));
    func_0x01384978(*(undefined4 *)(_UNK_01697428 + 0x169733c));
    func_0x01384978(*(undefined4 *)(_UNK_0169742c + 0x1697348));
    func_0x01384978(*(undefined4 *)(_UNK_01697430 + 0x1697354));
    func_0x01384978(*(undefined4 *)(_UNK_01697434 + 0x1697360));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01697438 + 0x1697374));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0169743c + 0x1697388));
  puVar5 = *(undefined4 **)(_UNK_01697440 + 0x169739c);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_01697444 + 0x16973b4);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_01697448 + 0x16973dc);
  param_1[6] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0169744c + 0x16973fc));
                    /* WARNING: Could not recover jumptable at 0x01697418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.IndepenBingoGroupDetail$$.ctor RVA 0x1687450 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01697450(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_01697534 + 0x1697468);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01697538 + 0x169747c));
    func_0x01384978(*(undefined4 *)(_UNK_0169753c + 0x1697488));
    *pcVar3 = '\x01';
  }
  FUN_016972fc(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_01697540 + 0x16974c8));
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_01697544 + 0x16974f4);
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.IndepenBingoGroupDetail$$Clone RVA 0x1687548 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01697548(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0169759c + 0x169755c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016975a0 + 0x1697570));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016975a4 + 0x1697584));
  FUN_01697450(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.IndepenBingoGroupDetail$$ProxyInternalMergeFrom RVA 0x16875a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016975a8(int param_1,int param_2)

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
  
  pcVar3 = (char *)(_UNK_01697760 + 0x16975c4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01697764 + 0x16975d8));
    func_0x01384978(*(undefined4 *)(_UNK_01697768 + 0x16975e4));
    func_0x01384978(*(undefined4 *)(_UNK_0169776c + 0x16975f0));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01697770 + 0x1697620);
    puVar8 = *(undefined4 **)(_UNK_01697774 + 0x1697628);
    puVar9 = *(undefined4 **)(_UNK_01697778 + 0x1697630);
    do {
      if (uVar1 < 0x13) {
        if (uVar1 == 8) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else {
          if (uVar1 == 0x10 || uVar1 == 0x12) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x14);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
            goto LAB_016976a0;
          }
LAB_01697714:
          uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
      }
      else if (uVar1 == 0x18 || uVar1 == 0x1a) {
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x18);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
LAB_016976a0:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0364b0e0(iVar6,param_2,uVar4,*puVar8);
      }
      else {
        if (uVar1 != 0x22) goto LAB_01697714;
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
        func_0x036520e8(iVar6,param_2,uVar4,*puVar9);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.IndepenBingoGroupDetail$$get_XXX_RowIdentifier RVA 0x168777c =====

undefined4 FUN_0169777c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ===== fat.rawdata.IndepenBingoGroupDetail$$set_XXX_RowIdentifier RVA 0x1687784 =====

void FUN_01697784(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



// ===== fat.rawdata.IndepenBingoGroupDetail$$.cctor RVA 0x168778c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0169778c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01697830 + 0x169779c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01697834 + 0x16977b0));
    func_0x01384978(*(undefined4 *)(_UNK_01697838 + 0x16977bc));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0169783c + 0x16977d0);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01697840 + 0x16977e0);
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}


