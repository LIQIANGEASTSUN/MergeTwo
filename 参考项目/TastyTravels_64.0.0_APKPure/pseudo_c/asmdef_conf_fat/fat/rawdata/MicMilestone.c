/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.MicMilestone$$.ctor RVA 0x16dc484 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016ec484(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_016ec5d4 + 0x16ec498);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016ec5d8 + 0x16ec4ac));
    func_0x01384978(*(undefined4 *)(_UNK_016ec5dc + 0x16ec4b8));
    func_0x01384978(*(undefined4 *)(_UNK_016ec5e0 + 0x16ec4c4));
    func_0x01384978(*(undefined4 *)(_UNK_016ec5e4 + 0x16ec4d0));
    func_0x01384978(*(undefined4 *)(_UNK_016ec5e8 + 0x16ec4dc));
    func_0x01384978(*(undefined4 *)(_UNK_016ec5ec + 0x16ec4e8));
    func_0x01384978(*(undefined4 *)(_UNK_016ec5f0 + 0x16ec4f4));
    func_0x01384978(*(undefined4 *)(_UNK_016ec5f4 + 0x16ec500));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016ec5f8 + 0x16ec514));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_016ec5fc + 0x16ec528));
  puVar2 = *(undefined4 **)(_UNK_016ec600 + 0x16ec53c);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x034673e0(iVar1,**(undefined4 **)(_UNK_016ec604 + 0x16ec554));
  puVar2 = *(undefined4 **)(_UNK_016ec608 + 0x16ec568);
  param_1[9] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x034614f8(iVar1,**(undefined4 **)(_UNK_016ec60c + 0x16ec580));
  piVar3 = *(int **)(_UNK_016ec610 + 0x16ec594);
  param_1[0xb] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016ec614 + 0x16ec5b4));
                    /* WARNING: Could not recover jumptable at 0x016ec5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.MicMilestone$$.ctor RVA 0x16dc618 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016ec618(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  
  pcVar4 = (char *)(_UNK_016ec730 + 0x16ec630);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016ec734 + 0x16ec644));
    func_0x01384978(*(undefined4 *)(_UNK_016ec738 + 0x16ec650));
    func_0x01384978(*(undefined4 *)(_UNK_016ec73c + 0x16ec65c));
    *pcVar4 = '\x01';
  }
  FUN_016ec484(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,**(undefined4 **)(_UNK_016ec740 + 0x16ec69c));
  iVar5 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar6 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x1c) = uVar6;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03464804(iVar5,**(undefined4 **)(_UNK_016ec744 + 0x16ec6d4));
  iVar5 = *(int *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0345e8e4(iVar5,**(undefined4 **)(_UNK_016ec748 + 0x16ec704));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.MicMilestone$$Clone RVA 0x16dc74c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016ec74c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016ec7a0 + 0x16ec760);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016ec7a4 + 0x16ec774));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016ec7a8 + 0x16ec788));
  FUN_016ec618(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.MicMilestone$$ProxyInternalMergeFrom RVA 0x16dc7ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016ec7ac(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_016eca60 + 0x16ec7c8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016eca64 + 0x16ec7dc));
    func_0x01384978(*(undefined4 *)(_UNK_016eca68 + 0x16ec7e8));
    func_0x01384978(*(undefined4 *)(_UNK_016eca6c + 0x16ec7f4));
    func_0x01384978(*(undefined4 *)(_UNK_016eca70 + 0x16ec800));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016eca74 + 0x16ec830);
    puVar8 = *(undefined4 **)(_UNK_016eca78 + 0x16ec838);
    puVar9 = *(undefined4 **)(_UNK_016eca7c + 0x16ec840);
    do {
      if (uVar1 < 0x31) {
        if (uVar1 < 0x19) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else if (uVar1 == 0x18) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x14) = uVar2;
          }
          else {
LAB_016ec934:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else if (uVar1 == 0x20) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x18) = uVar2;
        }
        else if (uVar1 == 0x28) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
        else {
          if (uVar1 != 0x30) goto LAB_016ec934;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
      }
      else if (uVar1 < 0x41) {
        if (uVar1 == 0x3a) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x24);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x034663ac(iVar6,param_2,uVar2,*puVar8);
        }
        else {
          if (uVar1 != 0x40) goto LAB_016ec934;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x28) = uVar2;
        }
      }
      else if (uVar1 == 0x4a) {
        iVar3 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x2c);
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x034604a8(iVar6,param_2,uVar2,**(undefined4 **)(_UNK_016eca80 + 0x16eca20));
      }
      else if (uVar1 == 0x50) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x30) = uVar2;
      }
      else {
        if (uVar1 != 0x5a) goto LAB_016ec934;
        iVar3 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x10);
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar6,param_2,uVar2,*puVar9);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.MicMilestone$$get_XXX_RowIdentifier RVA 0x16dca84 =====

undefined4 FUN_016eca84(int param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



// ===== fat.rawdata.MicMilestone$$set_XXX_RowIdentifier RVA 0x16dca8c =====

void FUN_016eca8c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}



// ===== fat.rawdata.MicMilestone$$.cctor RVA 0x16dca94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016eca94(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_016ecc2c + 0x16ecaa8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016ecc30 + 0x16ecabc));
    func_0x01384978(*(undefined4 *)(_UNK_016ecc34 + 0x16ecac8));
    func_0x01384978(*(undefined4 *)(_UNK_016ecc38 + 0x16ecad4));
    func_0x01384978(*(undefined4 *)(_UNK_016ecc3c + 0x16ecae0));
    func_0x01384978(*(undefined4 *)(_UNK_016ecc40 + 0x16ecaec));
    func_0x01384978(*(undefined4 *)(_UNK_016ecc44 + 0x16ecaf8));
    func_0x01384978(*(undefined4 *)(_UNK_016ecc48 + 0x16ecb04));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_016ecc4c + 0x16ecb18);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_016ecc50 + 0x16ecb28);
  uVar1 = func_0x0244f954(0x5a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f980(0x12,**(undefined4 **)(_UNK_016ecc54 + 0x16ecb68),0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_016ecc58 + 0x16ecb80));
  func_0x0244f944(uVar3,uVar1,uVar2,0x3a,**(undefined4 **)(_UNK_016ecc5c + 0x16ecba0));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar3;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_016ecc60 + 0x16ecbec));
  func_0x0244f990(uVar3,uVar1,uVar2,0x4a,**(undefined4 **)(_UNK_016ecc64 + 0x16ecc0c));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar3;
  return;
}


