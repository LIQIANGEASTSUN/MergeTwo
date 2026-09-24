/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.OrderCommon$$.ctor RVA 0x1703f50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01713f50(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_017140cc + 0x1713f64);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017140d0 + 0x1713f78));
    func_0x01384978(*(undefined4 *)(_UNK_017140d4 + 0x1713f84));
    func_0x01384978(*(undefined4 *)(_UNK_017140d8 + 0x1713f90));
    func_0x01384978(*(undefined4 *)(_UNK_017140dc + 0x1713f9c));
    func_0x01384978(*(undefined4 *)(_UNK_017140e0 + 0x1713fa8));
    func_0x01384978(*(undefined4 *)(_UNK_017140e4 + 0x1713fb4));
    *pcVar4 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_017140e8 + 0x1713fc8);
  iVar1 = func_0x01384be4(*puVar7);
  puVar8 = *(undefined4 **)(_UNK_017140ec + 0x1713fdc);
  func_0x036542d8(iVar1,*puVar8);
  puVar5 = *(undefined4 **)(_UNK_017140f0 + 0x1713fec);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_017140f4 + 0x1714004);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar7;
  param_1[0xb] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar8);
  uVar2 = *puVar5;
  param_1[0xd] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[0xf] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_017140f8 + 0x171408c);
  param_1[0x11] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_017140fc + 0x17140ac));
                    /* WARNING: Could not recover jumptable at 0x017140c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.OrderCommon$$.ctor RVA 0x1704100 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01714100(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_01714298 + 0x1714118);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0171429c + 0x171412c));
    func_0x01384978(*(undefined4 *)(_UNK_017142a0 + 0x1714138));
    *pcVar5 = '\x01';
  }
  FUN_01713f50(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar8 = *(undefined4 **)(_UNK_017142a4 + 0x171417c);
  uVar2 = func_0x03651cc4(iVar6,*puVar8);
  iVar6 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_017142a8 + 0x17141a4);
  uVar2 = func_0x0364acbc(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x2c);
  uVar1 = *(undefined2 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined2 *)(param_1 + 0x28) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar6,*puVar8);
  iVar6 = *(int *)(param_2 + 0x3c);
  uVar3 = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x44);
  uVar3 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar6,*puVar7);
  uVar3 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  uVar2 = func_0x0244f914(uVar3,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.OrderCommon$$Clone RVA 0x17042ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017142ac(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01714300 + 0x17142c0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01714304 + 0x17142d4));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01714308 + 0x17142e8));
  FUN_01714100(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.OrderCommon$$ProxyInternalMergeFrom RVA 0x170430c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0171430c(int param_1,int param_2)

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
  longlong lVar10;
  
  pcVar4 = (char *)(_UNK_017146e0 + 0x1714328);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017146e4 + 0x171433c));
    func_0x01384978(*(undefined4 *)(_UNK_017146e8 + 0x1714348));
    func_0x01384978(*(undefined4 *)(_UNK_017146ec + 0x1714354));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_017146f0 + 0x1714384);
    puVar8 = *(undefined4 **)(_UNK_017146f4 + 0x171438c);
    puVar9 = *(undefined4 **)(_UNK_017146f8 + 0x1714394);
    do {
      if (uVar1 < 0x3b) {
        if (uVar1 < 0x21) {
          if (uVar1 < 0x11) {
            if (uVar1 == 8) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0xc) = uVar2;
            }
            else {
              if (uVar1 != 0x10) goto LAB_01714568;
LAB_01714580:
              iVar3 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x14);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar7;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
LAB_017145a4:
              if (iVar6 == 0) {
                func_0x01384bf0();
              }
              func_0x0364b0e0(iVar6,param_2,uVar2,*puVar8);
            }
          }
          else {
            if (uVar1 == 0x12) goto LAB_01714580;
            if (uVar1 != 0x18) {
              if (uVar1 == 0x20) goto LAB_01714490;
              goto LAB_01714568;
            }
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x18) = uVar2;
          }
        }
        else if (uVar1 < 0x29) {
          if (uVar1 == 0x22) {
LAB_01714490:
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x1c);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
            goto LAB_017145a4;
          }
          if (uVar1 != 0x28) goto LAB_01714568;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
        else if (uVar1 == 0x30) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x24) = uVar2;
        }
        else {
          if (uVar1 == 0x38 || uVar1 == 0x3a) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x2c);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
            goto LAB_017145a4;
          }
LAB_01714568:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 < 0x5b) {
        if (uVar1 < 0x4b) {
          if (uVar1 == 0x40) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x30) = uVar2;
          }
          else {
            if (uVar1 != 0x4a) goto LAB_01714568;
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x34);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
LAB_017146b4:
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x036520e8(iVar6,param_2,uVar2,*puVar9);
          }
        }
        else {
          if (uVar1 != 0x50) {
            if (uVar1 != 0x58 && uVar1 != 0x5a) goto LAB_01714568;
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x3c);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x18);
            goto LAB_017145a4;
          }
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x38) = uVar2;
        }
      }
      else if (uVar1 < 0x6b) {
        if (uVar1 != 0x60) {
          if (uVar1 == 0x68 || uVar1 == 0x6a) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x44);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x1c);
            goto LAB_017145a4;
          }
          goto LAB_01714568;
        }
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x40) = uVar2;
      }
      else if (uVar1 == 0x70) {
        lVar10 = func_0x01484f88(param_2,iVar5,0);
        *(bool *)(param_1 + 0x29) = lVar10 != 0;
      }
      else {
        if (uVar1 == 0x7a) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
          goto LAB_017146b4;
        }
        if (uVar1 != 0x80) goto LAB_01714568;
        lVar10 = func_0x01484f88(param_2,iVar5,0);
        *(bool *)(param_1 + 0x28) = lVar10 != 0;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.OrderCommon$$get_XXX_RowIdentifier RVA 0x17046fc =====

undefined4 FUN_017146fc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ===== fat.rawdata.OrderCommon$$set_XXX_RowIdentifier RVA 0x1704704 =====

void FUN_01714704(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}



// ===== fat.rawdata.OrderCommon$$.cctor RVA 0x170470c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0171470c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01714810 + 0x171471c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01714814 + 0x1714730));
    func_0x01384978(*(undefined4 *)(_UNK_01714818 + 0x171473c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0171481c + 0x1714750);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01714820 + 0x1714760);
  uVar1 = func_0x0244f954(0x7a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f954(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f970(0x5a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x18) = uVar1;
  uVar1 = func_0x0244f970(0x6a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x1c) = uVar1;
  return;
}


