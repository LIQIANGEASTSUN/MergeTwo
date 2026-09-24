/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.FestScoreMilestone$$.ctor RVA 0x16695a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016795a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_0167967c + 0x16795b4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01679680 + 0x16795c8));
    func_0x01384978(*(undefined4 *)(_UNK_01679684 + 0x16795d4));
    func_0x01384978(*(undefined4 *)(_UNK_01679688 + 0x16795e0));
    func_0x01384978(*(undefined4 *)(_UNK_0167968c + 0x16795ec));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_01679690 + 0x1679600);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_01679694 + 0x1679614);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_01679698 + 0x167963c);
  param_1[5] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0167969c + 0x167965c));
                    /* WARNING: Could not recover jumptable at 0x01679678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.FestScoreMilestone$$.ctor RVA 0x16696a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016796a0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_01679758 + 0x16796b8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0167975c + 0x16796cc));
    *pcVar4 = '\x01';
  }
  FUN_016795a0(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_01679760 + 0x1679710);
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.FestScoreMilestone$$Clone RVA 0x1669764 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01679764(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016797b8 + 0x1679778);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016797bc + 0x167978c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016797c0 + 0x16797a0));
  FUN_016796a0(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.FestScoreMilestone$$ProxyInternalMergeFrom RVA 0x16697c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016797c4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar3 = (char *)(_UNK_01679928 + 0x16797dc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0167992c + 0x16797f0));
    func_0x01384978(*(undefined4 *)(_UNK_01679930 + 0x16797fc));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01679934 + 0x167982c);
    puVar8 = *(undefined4 **)(_UNK_01679938 + 0x1679834);
    do {
      if (uVar1 < 0x13) {
        if (uVar1 == 8) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else {
          if (uVar1 == 0x12) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x10);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
            goto LAB_016798ec;
          }
LAB_01679898:
          uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
      }
      else if (uVar1 == 0x1a) {
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x14);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
LAB_016798ec:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar6,param_2,uVar4,*puVar8);
      }
      else {
        if (uVar1 != 0x20) goto LAB_01679898;
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x18) = uVar4;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.FestScoreMilestone$$get_XXX_RowIdentifier RVA 0x166993c =====

undefined4 FUN_0167993c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ===== fat.rawdata.FestScoreMilestone$$set_XXX_RowIdentifier RVA 0x1669944 =====

void FUN_01679944(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



// ===== fat.rawdata.FestScoreMilestone$$.cctor RVA 0x166994c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0167994c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016799d8 + 0x167995c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016799dc + 0x1679970));
    func_0x01384978(*(undefined4 *)(_UNK_016799e0 + 0x167997c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_016799e4 + 0x1679990);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_016799e8 + 0x16799a0);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


