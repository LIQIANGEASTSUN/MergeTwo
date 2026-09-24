/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComMergeOrderBox$$.ctor RVA 0x19221b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019321b0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_019322bc + 0x19321c4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019322c0 + 0x19321d8));
    func_0x01384978(*(undefined4 *)(_UNK_019322c4 + 0x19321e4));
    func_0x01384978(*(undefined4 *)(_UNK_019322c8 + 0x19321f0));
    func_0x01384978(*(undefined4 *)(_UNK_019322cc + 0x19321fc));
    func_0x01384978(*(undefined4 *)(_UNK_019322d0 + 0x1932208));
    func_0x01384978(*(undefined4 *)(_UNK_019322d4 + 0x1932214));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_019322d8 + 0x1932228));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_019322dc + 0x193223c));
  puVar2 = *(undefined4 **)(_UNK_019322e0 + 0x1932250);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_019322e4 + 0x1932268));
  piVar3 = *(int **)(_UNK_019322e8 + 0x193227c);
  param_1[6] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_019322ec + 0x193229c));
                    /* WARNING: Could not recover jumptable at 0x019322b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComMergeOrderBox$$.ctor RVA 0x19222f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019322f0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_019323c4 + 0x1932308);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019323c8 + 0x193231c));
    func_0x01384978(*(undefined4 *)(_UNK_019323cc + 0x1932328));
    *pcVar4 = '\x01';
  }
  FUN_019321b0(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,**(undefined4 **)(_UNK_019323d0 + 0x1932368));
  iVar5 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,**(undefined4 **)(_UNK_019323d4 + 0x1932398));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.ComMergeOrderBox$$Clone RVA 0x19223d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_019323d8(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0193242c + 0x19323ec);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01932430 + 0x1932400));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01932434 + 0x1932414));
  FUN_019322f0(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComMergeOrderBox$$ProxyInternalMergeFrom RVA 0x1922438 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01932438(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01932604 + 0x1932454);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01932608 + 0x1932468));
    func_0x01384978(*(undefined4 *)(_UNK_0193260c + 0x1932474));
    func_0x01384978(*(undefined4 *)(_UNK_01932610 + 0x1932480));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01932614 + 0x19324b0);
    puVar8 = *(undefined4 **)(_UNK_01932618 + 0x19324b8);
    puVar9 = *(undefined4 **)(_UNK_0193261c + 0x19324c0);
    do {
      if (uVar1 < 0x19) {
        if (uVar1 == 8) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar3;
        }
        else if (uVar1 == 0x10) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x14) = uVar3;
        }
        else {
          if (uVar1 == 0x18) goto LAB_01932540;
LAB_01932588:
          uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar3;
        }
      }
      else if (uVar1 == 0x1a) {
LAB_01932540:
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x18);
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
      else if (uVar1 == 0x28) {
        uVar3 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x1c) = uVar3;
      }
      else {
        if (uVar1 != 0x32) goto LAB_01932588;
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



// ===== fat.rawdata.ComMergeOrderBox$$get_XXX_RowIdentifier RVA 0x1922620 =====

undefined4 FUN_01932620(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== fat.rawdata.ComMergeOrderBox$$set_XXX_RowIdentifier RVA 0x1922628 =====

void FUN_01932628(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== fat.rawdata.ComMergeOrderBox$$.cctor RVA 0x1922630 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01932630(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_019326bc + 0x1932640);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019326c0 + 0x1932654));
    func_0x01384978(*(undefined4 *)(_UNK_019326c4 + 0x1932660));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_019326c8 + 0x1932674);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_019326cc + 0x1932684);
  uVar1 = func_0x0244f954(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


