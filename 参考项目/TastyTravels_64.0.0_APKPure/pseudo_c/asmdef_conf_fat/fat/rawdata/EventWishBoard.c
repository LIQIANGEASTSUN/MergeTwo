/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventWishBoard$$.ctor RVA 0x16563dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016663dc(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_016664e8 + 0x16663f0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016664ec + 0x1666404));
    func_0x01384978(*(undefined4 *)(_UNK_016664f0 + 0x1666410));
    func_0x01384978(*(undefined4 *)(_UNK_016664f4 + 0x166641c));
    func_0x01384978(*(undefined4 *)(_UNK_016664f8 + 0x1666428));
    func_0x01384978(*(undefined4 *)(_UNK_016664fc + 0x1666434));
    func_0x01384978(*(undefined4 *)(_UNK_01666500 + 0x1666440));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01666504 + 0x1666454));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_01666508 + 0x1666468));
  puVar2 = *(undefined4 **)(_UNK_0166650c + 0x166647c);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_01666510 + 0x1666494));
  piVar3 = *(int **)(_UNK_01666514 + 0x16664a8);
  param_1[7] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01666518 + 0x16664c8));
                    /* WARNING: Could not recover jumptable at 0x016664e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventWishBoard$$.ctor RVA 0x165651c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0166651c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pcVar4 = (char *)(_UNK_01666618 + 0x1666534);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0166661c + 0x1666548));
    func_0x01384978(*(undefined4 *)(_UNK_01666620 + 0x1666554));
    *pcVar4 = '\x01';
  }
  FUN_016663dc(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,**(undefined4 **)(_UNK_01666624 + 0x166659c));
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,**(undefined4 **)(_UNK_01666628 + 0x16665cc));
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  uVar1 = func_0x0244f914(uVar1,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventWishBoard$$Clone RVA 0x165662c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0166662c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01666680 + 0x1666640);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01666684 + 0x1666654));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01666688 + 0x1666668));
  FUN_0166651c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventWishBoard$$ProxyInternalMergeFrom RVA 0x165668c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0166668c(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01666a24 + 0x16666a8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01666a28 + 0x16666bc));
    func_0x01384978(*(undefined4 *)(_UNK_01666a2c + 0x16666c8));
    func_0x01384978(*(undefined4 *)(_UNK_01666a30 + 0x16666d4));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01666a34 + 0x1666704);
    puVar8 = *(undefined4 **)(_UNK_01666a38 + 0x166670c);
    puVar9 = *(undefined4 **)(_UNK_01666a3c + 0x1666714);
    do {
      if (uVar1 < 0x49) {
        if (uVar1 < 0x1b) {
          if (uVar1 < 0x11) {
            if (uVar1 == 8) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0xc) = uVar2;
            }
            else {
              if (uVar1 != 0x10) goto LAB_016668fc;
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x18) = uVar2;
            }
          }
          else if ((uVar1 | 2) == 0x1a) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x1c);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x0364b0e0(iVar6,param_2,uVar2,*puVar8);
          }
          else {
LAB_016668fc:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else if (uVar1 < 0x29) {
          if (uVar1 == 0x20) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x24) = uVar2;
          }
          else {
            if (uVar1 != 0x28) goto LAB_016668fc;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x2c) = uVar2;
          }
        }
        else if (uVar1 == 0x30) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x30) = uVar2;
        }
        else if (uVar1 == 0x38) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x34) = uVar2;
        }
        else {
          if (uVar1 != 0x48) goto LAB_016668fc;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x40) = uVar2;
        }
      }
      else if (uVar1 < 0x71) {
        if (uVar1 < 0x59) {
          if (uVar1 == 0x50) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x44) = uVar2;
          }
          else {
            if (uVar1 != 0x58) goto LAB_016668fc;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x48) = uVar2;
          }
        }
        else if (uVar1 == 0x60) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
        else if (uVar1 == 0x68) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x3c) = uVar2;
        }
        else {
          if (uVar1 != 0x70) goto LAB_016668fc;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x4c) = uVar2;
        }
      }
      else if (uVar1 < 0x83) {
        if (uVar1 == 0x78) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x50) = uVar2;
        }
        else {
          if (uVar1 != 0x82) goto LAB_016668fc;
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
      }
      else if (uVar1 == 0x88) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x38) = uVar2;
      }
      else if (uVar1 == 0x90) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x28) = uVar2;
      }
      else {
        if (uVar1 != 0x98) goto LAB_016668fc;
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x14) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventWishBoard$$get_XXX_RowIdentifier RVA 0x1656a40 =====

undefined4 FUN_01666a40(int param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}



// ===== fat.rawdata.EventWishBoard$$set_XXX_RowIdentifier RVA 0x1656a48 =====

void FUN_01666a48(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}



// ===== fat.rawdata.EventWishBoard$$.cctor RVA 0x1656a50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01666a50(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01666adc + 0x1666a60);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01666ae0 + 0x1666a74));
    func_0x01384978(*(undefined4 *)(_UNK_01666ae4 + 0x1666a80));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01666ae8 + 0x1666a94);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01666aec + 0x1666aa4);
  uVar1 = func_0x0244f954(0x82,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


