/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventFarmBoardAnimal$$.ctor RVA 0x196c72c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0197c72c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0197c838 + 0x197c740);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0197c83c + 0x197c754));
    func_0x01384978(*(undefined4 *)(_UNK_0197c840 + 0x197c760));
    func_0x01384978(*(undefined4 *)(_UNK_0197c844 + 0x197c76c));
    func_0x01384978(*(undefined4 *)(_UNK_0197c848 + 0x197c778));
    func_0x01384978(*(undefined4 *)(_UNK_0197c84c + 0x197c784));
    func_0x01384978(*(undefined4 *)(_UNK_0197c850 + 0x197c790));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0197c854 + 0x197c7a4));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0197c858 + 0x197c7b8));
  puVar2 = *(undefined4 **)(_UNK_0197c85c + 0x197c7cc);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_0197c860 + 0x197c7e4));
  piVar3 = *(int **)(_UNK_0197c864 + 0x197c7f8);
  param_1[6] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0197c868 + 0x197c818));
                    /* WARNING: Could not recover jumptable at 0x0197c834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventFarmBoardAnimal$$.ctor RVA 0x196c86c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0197c86c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_0197c938 + 0x197c884);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0197c93c + 0x197c898));
    func_0x01384978(*(undefined4 *)(_UNK_0197c940 + 0x197c8a4));
    *pcVar3 = '\x01';
  }
  FUN_0197c72c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_0197c944 + 0x197c8e4));
  iVar4 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,**(undefined4 **)(_UNK_0197c948 + 0x197c914));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventFarmBoardAnimal$$Clone RVA 0x196c94c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0197c94c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0197c9a0 + 0x197c960);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0197c9a4 + 0x197c974));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0197c9a8 + 0x197c988));
  FUN_0197c86c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventFarmBoardAnimal$$ProxyInternalMergeFrom RVA 0x196c9ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0197c9ac(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_0197cb58 + 0x197c9c8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0197cb5c + 0x197c9dc));
    func_0x01384978(*(undefined4 *)(_UNK_0197cb60 + 0x197c9e8));
    func_0x01384978(*(undefined4 *)(_UNK_0197cb64 + 0x197c9f4));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0197cb68 + 0x197ca24);
    puVar8 = *(undefined4 **)(_UNK_0197cb6c + 0x197ca2c);
    puVar9 = *(undefined4 **)(_UNK_0197cb70 + 0x197ca34);
    do {
      if (uVar1 < 0x11) {
        if (uVar1 == 8) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar3;
        }
        else {
          if (uVar1 == 0x10) goto LAB_0197caac;
LAB_0197caf4:
          uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar3;
        }
      }
      else if (uVar1 == 0x12) {
LAB_0197caac:
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
      else if (uVar1 == 0x18) {
        uVar3 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x14) = uVar3;
      }
      else {
        if (uVar1 != 0x22) goto LAB_0197caf4;
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



// ===== fat.rawdata.EventFarmBoardAnimal$$get_XXX_RowIdentifier RVA 0x196cb74 =====

undefined4 FUN_0197cb74(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ===== fat.rawdata.EventFarmBoardAnimal$$set_XXX_RowIdentifier RVA 0x196cb7c =====

void FUN_0197cb7c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



// ===== fat.rawdata.EventFarmBoardAnimal$$.cctor RVA 0x196cb84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0197cb84(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0197cc10 + 0x197cb94);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0197cc14 + 0x197cba8));
    func_0x01384978(*(undefined4 *)(_UNK_0197cc18 + 0x197cbb4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0197cc1c + 0x197cbc8);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0197cc20 + 0x197cbd8);
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


