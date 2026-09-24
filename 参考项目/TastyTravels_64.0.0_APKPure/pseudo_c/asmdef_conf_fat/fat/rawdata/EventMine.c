/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventMine$$.ctor RVA 0x15e81f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f81f0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_015f8310 + 0x15f8204);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f8314 + 0x15f8218));
    func_0x01384978(*(undefined4 *)(_UNK_015f8318 + 0x15f8224));
    func_0x01384978(*(undefined4 *)(_UNK_015f831c + 0x15f8230));
    func_0x01384978(*(undefined4 *)(_UNK_015f8320 + 0x15f823c));
    func_0x01384978(*(undefined4 *)(_UNK_015f8324 + 0x15f8248));
    func_0x01384978(*(undefined4 *)(_UNK_015f8328 + 0x15f8254));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015f832c + 0x15f8268));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_015f8330 + 0x15f827c));
  puVar5 = *(undefined4 **)(_UNK_015f8334 + 0x15f8290);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_015f8338 + 0x15f82a8);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_015f833c + 0x15f82d0);
  param_1[0x14] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015f8340 + 0x15f82f0));
                    /* WARNING: Could not recover jumptable at 0x015f830c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventMine$$.ctor RVA 0x15e8344 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f8344(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  
  pcVar5 = (char *)(_UNK_015f8454 + 0x15f835c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f8458 + 0x15f8370));
    func_0x01384978(*(undefined4 *)(_UNK_015f845c + 0x15f837c));
    *pcVar5 = '\x01';
  }
  FUN_015f81f0(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar6,**(undefined4 **)(_UNK_015f8460 + 0x15f83c4));
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  iVar6 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_015f8464 + 0x15f83f8);
  uVar1 = func_0x0244f968(iVar6,*puVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x2c) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x3c) = uVar8;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  uVar2 = *(undefined4 *)(param_2 + 0x4c);
  iVar6 = *(int *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventMine$$Clone RVA 0x15e8468 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015f8468(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015f84bc + 0x15f847c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f84c0 + 0x15f8490));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015f84c4 + 0x15f84a4));
  FUN_015f8344(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventMine$$ProxyInternalMergeFrom RVA 0x15e84c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f84c8(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_015f8878 + 0x15f84e4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f887c + 0x15f84f8));
    func_0x01384978(*(undefined4 *)(_UNK_015f8880 + 0x15f8504));
    func_0x01384978(*(undefined4 *)(_UNK_015f8884 + 0x15f8510));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015f8888 + 0x15f8540);
    puVar8 = *(undefined4 **)(_UNK_015f888c + 0x15f8548);
    puVar9 = *(undefined4 **)(_UNK_015f8890 + 0x15f8550);
    do {
      if (uVar1 < 0x51) {
        if (uVar1 < 0x29) {
          if (uVar1 < 0x11) {
            if (uVar1 == 8) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0xc) = uVar2;
            }
            else {
              if (uVar1 != 0x10) goto LAB_015f8720;
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x1c) = uVar2;
            }
          }
          else if (uVar1 == 0x18) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x24) = uVar2;
          }
          else if (uVar1 == 0x20) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x28) = uVar2;
          }
          else {
            if (uVar1 != 0x28) goto LAB_015f8720;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x2c) = uVar2;
          }
        }
        else if (uVar1 < 0x39) {
          if (uVar1 == 0x30) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x34) = uVar2;
          }
          else {
            if (uVar1 != 0x38) goto LAB_015f8720;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x38) = uVar2;
          }
        }
        else if (uVar1 == 0x40) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x3c) = uVar2;
        }
        else if (uVar1 == 0x48) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x44) = uVar2;
        }
        else {
          if (uVar1 != 0x50) goto LAB_015f8720;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x4c) = uVar2;
        }
      }
      else if (uVar1 < 0x71) {
        if (uVar1 < 0x5b) {
          if ((uVar1 | 2) == 0x5a) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x50);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
LAB_015f869c:
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x0244f96c(iVar6,param_2,uVar2,*puVar8);
          }
          else {
LAB_015f8720:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else if (uVar1 == 0x60) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x14) = uVar2;
        }
        else {
          if (uVar1 != 0x68) {
            if (uVar1 == 0x70) goto LAB_015f8678;
            goto LAB_015f8720;
          }
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x40) = uVar2;
        }
      }
      else if (uVar1 < 0x79) {
        if (uVar1 == 0x72) {
LAB_015f8678:
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x20);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
          goto LAB_015f869c;
        }
        if (uVar1 != 0x78) goto LAB_015f8720;
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x48) = uVar2;
      }
      else if (uVar1 == 0x82) {
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
        func_0x0244f950(iVar6,param_2,uVar2,*puVar9);
      }
      else if (uVar1 == 0x88) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x30) = uVar2;
      }
      else {
        if (uVar1 != 0x90) goto LAB_015f8720;
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x18) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventMine$$get_XXX_RowIdentifier RVA 0x15e8894 =====

undefined4 FUN_015f8894(int param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}



// ===== fat.rawdata.EventMine$$set_XXX_RowIdentifier RVA 0x15e889c =====

void FUN_015f889c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}



// ===== fat.rawdata.EventMine$$.cctor RVA 0x15e88a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f88a4(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015f8948 + 0x15f88b4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f894c + 0x15f88c8));
    func_0x01384978(*(undefined4 *)(_UNK_015f8950 + 0x15f88d4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015f8954 + 0x15f88e8);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015f8958 + 0x15f88f8);
  uVar1 = func_0x0244f954(0x82,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x72,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x5a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}


