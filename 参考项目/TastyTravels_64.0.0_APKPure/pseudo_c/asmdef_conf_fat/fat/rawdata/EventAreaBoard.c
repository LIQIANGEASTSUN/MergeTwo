/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventAreaBoard$$.ctor RVA 0x1948c4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01958c4c(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01958d14 + 0x1958c60);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01958d18 + 0x1958c74));
    func_0x01384978(*(undefined4 *)(_UNK_01958d1c + 0x1958c80));
    func_0x01384978(*(undefined4 *)(_UNK_01958d20 + 0x1958c8c));
    func_0x01384978(*(undefined4 *)(_UNK_01958d24 + 0x1958c98));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01958d28 + 0x1958cac));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_01958d2c + 0x1958cc0));
  piVar2 = *(int **)(_UNK_01958d30 + 0x1958cd4);
  param_1[4] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01958d34 + 0x1958cf4));
                    /* WARNING: Could not recover jumptable at 0x01958d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventAreaBoard$$.ctor RVA 0x1948d38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01958d38(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar2 = (char *)(_UNK_01958df8 + 0x1958d50);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01958dfc + 0x1958d64));
    *pcVar2 = '\x01';
  }
  FUN_01958c4c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar3,**(undefined4 **)(_UNK_01958e00 + 0x1958dac));
  uVar4 = *(undefined8 *)(param_2 + 0x14);
  uVar5 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x14) = uVar4;
  *(undefined8 *)(param_1 + 0x1c) = uVar5;
  uVar4 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x2c) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x3c) = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  uVar1 = func_0x0244f914(uVar1,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventAreaBoard$$Clone RVA 0x1948e04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01958e04(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01958e58 + 0x1958e18);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01958e5c + 0x1958e2c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01958e60 + 0x1958e40));
  FUN_01958d38(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventAreaBoard$$ProxyInternalMergeFrom RVA 0x1948e64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01958e64(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_01959144 + 0x1958e7c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01959148 + 0x1958e90));
    func_0x01384978(*(undefined4 *)(_UNK_0195914c + 0x1958e9c));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01959150 + 0x1958ecc);
    puVar8 = *(undefined4 **)(_UNK_01959154 + 0x1958ed4);
    do {
      if (uVar1 < 0x39) {
        if (uVar1 < 0x19) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else if (uVar1 == 0x10) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x18) = uVar2;
          }
          else {
            if (uVar1 != 0x18) goto LAB_01959020;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x1c) = uVar2;
          }
        }
        else if (uVar1 < 0x29) {
          if (uVar1 == 0x20) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x20) = uVar2;
          }
          else if (uVar1 == 0x28) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x24) = uVar2;
          }
          else {
LAB_01959020:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else if (uVar1 == 0x30) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x28) = uVar2;
        }
        else {
          if (uVar1 != 0x38) goto LAB_01959020;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x2c) = uVar2;
        }
      }
      else if (uVar1 < 0x59) {
        if (uVar1 < 0x49) {
          if (uVar1 == 0x40) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x30) = uVar2;
          }
          else {
            if (uVar1 != 0x48) goto LAB_01959020;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x34) = uVar2;
          }
        }
        else if (uVar1 == 0x50) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x38) = uVar2;
        }
        else {
          if (uVar1 != 0x58) goto LAB_01959020;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x3c) = uVar2;
        }
      }
      else if (uVar1 < 0x69) {
        if (uVar1 == 0x60) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x40) = uVar2;
        }
        else {
          if (uVar1 != 0x68) goto LAB_01959020;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x44) = uVar2;
        }
      }
      else if (uVar1 == 0x72) {
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
        func_0x036520e8(iVar6,param_2,uVar2,*puVar8);
      }
      else {
        if (uVar1 != 0x78) goto LAB_01959020;
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x14) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventAreaBoard$$get_XXX_RowIdentifier RVA 0x1949158 =====

undefined4 FUN_01959158(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ===== fat.rawdata.EventAreaBoard$$set_XXX_RowIdentifier RVA 0x1949160 =====

void FUN_01959160(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}



// ===== fat.rawdata.EventAreaBoard$$.cctor RVA 0x1949168 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01959168(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_019591dc + 0x1959178);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019591e0 + 0x195918c));
    func_0x01384978(*(undefined4 *)(_UNK_019591e4 + 0x1959198));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_019591e8 + 0x19591ac);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_019591ec + 0x19591bc);
  uVar1 = func_0x0244f954(0x72,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


