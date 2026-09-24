/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.MergeBoardGrp$$.ctor RVA 0x16b0260 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c0260(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_016c036c + 0x16c0274);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c0370 + 0x16c0288));
    func_0x01384978(*(undefined4 *)(_UNK_016c0374 + 0x16c0294));
    func_0x01384978(*(undefined4 *)(_UNK_016c0378 + 0x16c02a0));
    func_0x01384978(*(undefined4 *)(_UNK_016c037c + 0x16c02ac));
    func_0x01384978(*(undefined4 *)(_UNK_016c0380 + 0x16c02b8));
    func_0x01384978(*(undefined4 *)(_UNK_016c0384 + 0x16c02c4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016c0388 + 0x16c02d8));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_016c038c + 0x16c02ec));
  puVar2 = *(undefined4 **)(_UNK_016c0390 + 0x16c0300);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_016c0394 + 0x16c0318));
  piVar3 = *(int **)(_UNK_016c0398 + 0x16c032c);
  param_1[5] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016c039c + 0x16c034c));
                    /* WARNING: Could not recover jumptable at 0x016c0368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.MergeBoardGrp$$.ctor RVA 0x16b03a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c03a0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_016c0464 + 0x16c03b8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c0468 + 0x16c03cc));
    func_0x01384978(*(undefined4 *)(_UNK_016c046c + 0x16c03d8));
    *pcVar3 = '\x01';
  }
  FUN_016c0260(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_016c0470 + 0x16c0418));
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,**(undefined4 **)(_UNK_016c0474 + 0x16c0440));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.MergeBoardGrp$$Clone RVA 0x16b0478 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016c0478(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016c04cc + 0x16c048c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c04d0 + 0x16c04a0));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016c04d4 + 0x16c04b4));
  FUN_016c03a0(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.MergeBoardGrp$$ProxyInternalMergeFrom RVA 0x16b04d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c04d8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar4 = (char *)(_UNK_016c0664 + 0x16c04f4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c0668 + 0x16c0508));
    func_0x01384978(*(undefined4 *)(_UNK_016c066c + 0x16c0514));
    func_0x01384978(*(undefined4 *)(_UNK_016c0670 + 0x16c0520));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016c0674 + 0x16c0550);
    puVar8 = *(undefined4 **)(_UNK_016c0678 + 0x16c0558);
    puVar9 = *(undefined4 **)(_UNK_016c067c + 0x16c0560);
    do {
      if (uVar1 < 0x11) {
        if (uVar1 == 8) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar3;
        }
        else {
          if (uVar1 == 0x10) goto LAB_016c05d0;
LAB_016c0618:
          uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar3;
        }
      }
      else if (uVar1 == 0x12) {
LAB_016c05d0:
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x14);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0364b0e0(iVar6,param_2,uVar3,*puVar8);
      }
      else {
        if (uVar1 != 0x1a) goto LAB_016c0618;
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x10);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar6,param_2,uVar3,*puVar9);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.MergeBoardGrp$$get_XXX_RowIdentifier RVA 0x16b0680 =====

undefined4 FUN_016c0680(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== fat.rawdata.MergeBoardGrp$$set_XXX_RowIdentifier RVA 0x16b0688 =====

void FUN_016c0688(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// ===== fat.rawdata.MergeBoardGrp$$.cctor RVA 0x16b0690 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c0690(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016c071c + 0x16c06a0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c0720 + 0x16c06b4));
    func_0x01384978(*(undefined4 *)(_UNK_016c0724 + 0x16c06c0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_016c0728 + 0x16c06d4);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_016c072c + 0x16c06e4);
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


