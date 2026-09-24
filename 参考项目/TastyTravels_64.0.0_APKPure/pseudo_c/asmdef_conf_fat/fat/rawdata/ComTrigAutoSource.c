/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComTrigAutoSource$$.ctor RVA 0x19294e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019394e4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_01939604 + 0x19394f8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01939608 + 0x193950c));
    func_0x01384978(*(undefined4 *)(_UNK_0193960c + 0x1939518));
    func_0x01384978(*(undefined4 *)(_UNK_01939610 + 0x1939524));
    func_0x01384978(*(undefined4 *)(_UNK_01939614 + 0x1939530));
    func_0x01384978(*(undefined4 *)(_UNK_01939618 + 0x193953c));
    func_0x01384978(*(undefined4 *)(_UNK_0193961c + 0x1939548));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_01939620 + 0x193955c);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_01939624 + 0x1939570);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  puVar5 = *(undefined4 **)(_UNK_01939628 + 0x1939598);
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_0193962c + 0x19395b0));
  piVar3 = *(int **)(_UNK_01939630 + 0x19395c4);
  param_1[10] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01939634 + 0x19395e4));
                    /* WARNING: Could not recover jumptable at 0x01939600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComTrigAutoSource$$.ctor RVA 0x1929638 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01939638(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_0193972c + 0x1939650);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01939730 + 0x1939664));
    func_0x01384978(*(undefined4 *)(_UNK_01939734 + 0x1939670));
    *pcVar4 = '\x01';
  }
  FUN_019394e4(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_01939738 + 0x19396b4);
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  iVar5 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,**(undefined4 **)(_UNK_0193973c + 0x1939708));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.ComTrigAutoSource$$Clone RVA 0x1929740 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01939740(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01939794 + 0x1939754);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01939798 + 0x1939768));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0193979c + 0x193977c));
  FUN_01939638(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComTrigAutoSource$$ProxyInternalMergeFrom RVA 0x19297a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019397a0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  pcVar4 = (char *)(_UNK_01939a04 + 0x19397bc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01939a08 + 0x19397d0));
    func_0x01384978(*(undefined4 *)(_UNK_01939a0c + 0x19397dc));
    func_0x01384978(*(undefined4 *)(_UNK_01939a10 + 0x19397e8));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar8 = *(int **)(_UNK_01939a14 + 0x1939818);
    puVar9 = *(undefined4 **)(_UNK_01939a18 + 0x1939820);
    do {
      if (uVar1 < 0x29) {
        if (uVar1 < 0x13) {
          if (uVar1 == 8) {
            uVar7 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar7;
          }
          else {
            if (uVar1 != 0x12) goto LAB_01939970;
            iVar2 = *piVar8;
            iVar6 = *(int *)(param_1 + 0x1c);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar8;
            }
            uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            puVar3 = *(undefined4 **)(_UNK_01939a1c + 0x1939880);
LAB_01939960:
            func_0x036520e8(iVar6,param_2,uVar7,*puVar3);
          }
        }
        else if (uVar1 == 0x18) {
          uVar7 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x20) = uVar7;
        }
        else {
          if (uVar1 == 0x28) goto LAB_019398c0;
LAB_01939970:
          uVar7 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar7;
        }
      }
      else if (uVar1 < 0x31) {
        if (uVar1 == 0x2a) {
LAB_019398c0:
          iVar2 = *piVar8;
          iVar6 = *(int *)(param_1 + 0x28);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar8;
          }
          uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0364b0e0(iVar6,param_2,uVar7,*puVar9);
        }
        else {
          if (uVar1 != 0x30) goto LAB_01939970;
          uVar7 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x14) = uVar7;
        }
      }
      else if (uVar1 == 0x38) {
        uVar7 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x18) = uVar7;
      }
      else {
        if (uVar1 != 0x40) {
          if (uVar1 == 0x4a) {
            iVar2 = *piVar8;
            iVar6 = *(int *)(param_1 + 0x10);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar8;
            }
            uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            puVar3 = *(undefined4 **)(_UNK_01939a20 + 0x1939964);
            goto LAB_01939960;
          }
          goto LAB_01939970;
        }
        uVar7 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x24) = uVar7;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ComTrigAutoSource$$get_XXX_RowIdentifier RVA 0x1929a24 =====

undefined4 FUN_01939a24(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ===== fat.rawdata.ComTrigAutoSource$$set_XXX_RowIdentifier RVA 0x1929a2c =====

void FUN_01939a2c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// ===== fat.rawdata.ComTrigAutoSource$$.cctor RVA 0x1929a34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01939a34(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01939ad8 + 0x1939a44);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01939adc + 0x1939a58));
    func_0x01384978(*(undefined4 *)(_UNK_01939ae0 + 0x1939a64));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01939ae4 + 0x1939a78);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01939ae8 + 0x1939a88);
  uVar1 = func_0x0244f954(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}


