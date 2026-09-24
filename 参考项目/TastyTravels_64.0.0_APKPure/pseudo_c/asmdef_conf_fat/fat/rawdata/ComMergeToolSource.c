/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComMergeToolSource$$.ctor RVA 0x19265d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019365d0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01936720 + 0x19365e4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01936724 + 0x19365f8));
    func_0x01384978(*(undefined4 *)(_UNK_01936728 + 0x1936604));
    func_0x01384978(*(undefined4 *)(_UNK_0193672c + 0x1936610));
    func_0x01384978(*(undefined4 *)(_UNK_01936730 + 0x193661c));
    func_0x01384978(*(undefined4 *)(_UNK_01936734 + 0x1936628));
    func_0x01384978(*(undefined4 *)(_UNK_01936738 + 0x1936634));
    func_0x01384978(*(undefined4 *)(_UNK_0193673c + 0x1936640));
    func_0x01384978(*(undefined4 *)(_UNK_01936740 + 0x193664c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01936744 + 0x1936660));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_01936748 + 0x1936674));
  puVar2 = *(undefined4 **)(_UNK_0193674c + 0x1936688);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_01936750 + 0x19366a0));
  puVar2 = *(undefined4 **)(_UNK_01936754 + 0x19366b4);
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x034614f8(iVar1,**(undefined4 **)(_UNK_01936758 + 0x19366cc));
  piVar3 = *(int **)(_UNK_0193675c + 0x19366e0);
  param_1[7] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01936760 + 0x1936700));
                    /* WARNING: Could not recover jumptable at 0x0193671c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComMergeToolSource$$.ctor RVA 0x1926764 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01936764(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_01936864 + 0x193677c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01936868 + 0x1936790));
    func_0x01384978(*(undefined4 *)(_UNK_0193686c + 0x193679c));
    func_0x01384978(*(undefined4 *)(_UNK_01936870 + 0x19367a8));
    *pcVar3 = '\x01';
  }
  FUN_019365d0(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_01936874 + 0x19367e8));
  iVar4 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,**(undefined4 **)(_UNK_01936878 + 0x1936818));
  iVar4 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0345e8e4(iVar4,**(undefined4 **)(_UNK_0193687c + 0x1936840));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.ComMergeToolSource$$Clone RVA 0x1926880 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01936880(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_019368d4 + 0x1936894);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019368d8 + 0x19368a8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_019368dc + 0x19368bc));
  FUN_01936764(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComMergeToolSource$$ProxyInternalMergeFrom RVA 0x19268e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019368e0(int param_1,int param_2)

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
  
  pcVar3 = (char *)(_UNK_01936ae8 + 0x19368fc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01936aec + 0x1936910));
    func_0x01384978(*(undefined4 *)(_UNK_01936af0 + 0x193691c));
    func_0x01384978(*(undefined4 *)(_UNK_01936af4 + 0x1936928));
    func_0x01384978(*(undefined4 *)(_UNK_01936af8 + 0x1936934));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01936afc + 0x1936964);
    puVar9 = *(undefined4 **)(_UNK_01936b00 + 0x193696c);
    puVar8 = *(undefined4 **)(_UNK_01936b04 + 0x1936974);
    do {
      if (uVar1 < 0x1b) {
        if (uVar1 == 8) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else if (uVar1 == 0x10) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x14) = uVar4;
        }
        else {
          if (uVar1 != 0x1a) goto LAB_01936a84;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x1c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x034604a8(iVar6,param_2,uVar4,**(undefined4 **)(_UNK_01936b08 + 0x19369d4));
        }
      }
      else if (uVar1 == 0x20 || uVar1 == 0x22) {
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x18);
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
      else if (uVar1 == 0x2a) {
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
      else {
LAB_01936a84:
        uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar4;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ComMergeToolSource$$get_XXX_RowIdentifier RVA 0x1926b0c =====

undefined4 FUN_01936b0c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== fat.rawdata.ComMergeToolSource$$set_XXX_RowIdentifier RVA 0x1926b14 =====

void FUN_01936b14(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== fat.rawdata.ComMergeToolSource$$.cctor RVA 0x1926b1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01936b1c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_01936c34 + 0x1936b30);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01936c38 + 0x1936b44));
    func_0x01384978(*(undefined4 *)(_UNK_01936c3c + 0x1936b50));
    func_0x01384978(*(undefined4 *)(_UNK_01936c40 + 0x1936b5c));
    func_0x01384978(*(undefined4 *)(_UNK_01936c44 + 0x1936b68));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01936c48 + 0x1936b7c);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_01936c4c + 0x1936b8c);
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01936c50 + 0x1936bf4));
  func_0x0244f990(uVar3,uVar1,uVar2,0x1a,**(undefined4 **)(_UNK_01936c54 + 0x1936c14));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar3;
  return;
}


