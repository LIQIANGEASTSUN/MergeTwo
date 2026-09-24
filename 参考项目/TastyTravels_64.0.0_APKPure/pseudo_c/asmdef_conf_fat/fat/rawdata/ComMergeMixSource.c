/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComMergeMixSource$$.ctor RVA 0x1921328 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01931328(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_019314a4 + 0x193133c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019314a8 + 0x1931350));
    func_0x01384978(*(undefined4 *)(_UNK_019314ac + 0x193135c));
    func_0x01384978(*(undefined4 *)(_UNK_019314b0 + 0x1931368));
    func_0x01384978(*(undefined4 *)(_UNK_019314b4 + 0x1931374));
    func_0x01384978(*(undefined4 *)(_UNK_019314b8 + 0x1931380));
    func_0x01384978(*(undefined4 *)(_UNK_019314bc + 0x193138c));
    func_0x01384978(*(undefined4 *)(_UNK_019314c0 + 0x1931398));
    func_0x01384978(*(undefined4 *)(_UNK_019314c4 + 0x19313a4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_019314c8 + 0x19313b8));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_019314cc + 0x19313cc));
  puVar6 = *(undefined4 **)(_UNK_019314d0 + 0x19313e0);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_019314d4 + 0x19313f8);
  func_0x034614f8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x034614f8(iVar1,*puVar7);
  puVar3 = *(undefined4 **)(_UNK_019314d8 + 0x1931420);
  param_1[9] = iVar1;
  iVar1 = func_0x01384be4(*puVar3);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_019314dc + 0x1931438));
  uVar2 = *puVar6;
  param_1[10] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x034614f8(iVar1,*puVar7);
  piVar4 = *(int **)(_UNK_019314e0 + 0x1931464);
  param_1[0xd] = iVar1;
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_019314e4 + 0x1931484));
                    /* WARNING: Could not recover jumptable at 0x019314a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComMergeMixSource$$.ctor RVA 0x19214e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019314e8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  pcVar5 = (char *)(_UNK_0193163c + 0x1931500);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01931640 + 0x1931514));
    func_0x01384978(*(undefined4 *)(_UNK_01931644 + 0x1931520));
    func_0x01384978(*(undefined4 *)(_UNK_01931648 + 0x193152c));
    *pcVar5 = '\x01';
  }
  FUN_01931328(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,**(undefined4 **)(_UNK_0193164c + 0x193156c));
  iVar6 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_01931650 + 0x1931598);
  uVar1 = func_0x0345e8e4(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  iVar6 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0345e8e4(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar6,**(undefined4 **)(_UNK_01931654 + 0x19315e4));
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  iVar6 = *(int *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0345e8e4(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x38);
  uVar4 = *(undefined4 *)(param_2 + 0x3c);
  uVar8 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 0x40) = uVar8;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.ComMergeMixSource$$Clone RVA 0x1921658 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01931658(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_019316ac + 0x193166c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019316b0 + 0x1931680));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_019316b4 + 0x1931694));
  FUN_019314e8(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComMergeMixSource$$ProxyInternalMergeFrom RVA 0x19216b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019316b8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  longlong lVar10;
  
  pcVar4 = (char *)(_UNK_01931ad8 + 0x19316d4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01931adc + 0x19316e8));
    func_0x01384978(*(undefined4 *)(_UNK_01931ae0 + 0x19316f4));
    func_0x01384978(*(undefined4 *)(_UNK_01931ae4 + 0x1931700));
    func_0x01384978(*(undefined4 *)(_UNK_01931ae8 + 0x193170c));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar8 = *(int **)(_UNK_01931aec + 0x193173c);
    puVar9 = *(undefined4 **)(_UNK_01931af0 + 0x1931744);
    do {
      if (uVar1 < 0x49) {
        if (uVar1 < 0x21) {
          if (uVar1 < 0x13) {
            if (uVar1 == 8) {
              uVar7 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0xc) = uVar7;
            }
            else {
              if (uVar1 != 0x12) goto LAB_01931920;
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
              func_0x036520e8(iVar6,param_2,uVar7,**(undefined4 **)(_UNK_01931af4 + 0x19317ac));
            }
          }
          else if (uVar1 == 0x1a) {
            iVar2 = *piVar8;
            iVar6 = *(int *)(param_1 + 0x14);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar8;
            }
            uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
LAB_01931a24:
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            uVar3 = *puVar9;
LAB_01931a40:
            func_0x034604a8(iVar6,param_2,uVar7,uVar3);
          }
          else {
            if (uVar1 != 0x20) goto LAB_01931920;
            uVar7 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x18) = uVar7;
          }
        }
        else if (uVar1 < 0x31) {
          if (uVar1 == 0x28) {
            lVar10 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x1c) = lVar10 != 0;
          }
          else {
            if (uVar1 != 0x30) goto LAB_01931920;
            lVar10 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x1d) = lVar10 != 0;
          }
        }
        else if (uVar1 == 0x38) {
          lVar10 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x1e) = lVar10 != 0;
        }
        else if (uVar1 == 0x40) {
          lVar10 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x1f) = lVar10 != 0;
        }
        else {
          if (uVar1 != 0x48) goto LAB_01931920;
          uVar7 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x20) = uVar7;
        }
      }
      else if (uVar1 < 99) {
        if (uVar1 < 0x59) {
          if (uVar1 == 0x52) {
            iVar2 = *piVar8;
            iVar6 = *(int *)(param_1 + 0x24);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar8;
            }
            uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
            goto LAB_01931a24;
          }
          if (uVar1 == 0x58) goto LAB_01931938;
        }
        else {
          if (uVar1 == 0x5a) {
LAB_01931938:
            iVar2 = *piVar8;
            iVar6 = *(int *)(param_1 + 0x28);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar8;
            }
            uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x0364b0e0(iVar6,param_2,uVar7,**(undefined4 **)(_UNK_01931af8 + 0x193197c));
            goto LAB_01931a44;
          }
          if (uVar1 == 0x62) {
            iVar2 = *piVar8;
            iVar6 = *(int *)(param_1 + 0x34);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar8;
            }
            uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            uVar3 = *puVar9;
            goto LAB_01931a40;
          }
        }
LAB_01931920:
        uVar7 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar7;
      }
      else if (uVar1 < 0x71) {
        if (uVar1 == 0x68) {
          uVar7 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x38) = uVar7;
        }
        else {
          if (uVar1 != 0x70) goto LAB_01931920;
          uVar7 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x3c) = uVar7;
        }
      }
      else if (uVar1 == 0x78) {
        uVar7 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x40) = uVar7;
      }
      else if (uVar1 == 0x80) {
        uVar7 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x2c) = uVar7;
      }
      else {
        if (uVar1 != 0x88) goto LAB_01931920;
        uVar7 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x30) = uVar7;
      }
LAB_01931a44:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ComMergeMixSource$$get_XXX_RowIdentifier RVA 0x1921afc =====

undefined4 FUN_01931afc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// ===== fat.rawdata.ComMergeMixSource$$set_XXX_RowIdentifier RVA 0x1921b04 =====

void FUN_01931b04(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}



// ===== fat.rawdata.ComMergeMixSource$$.cctor RVA 0x1921b0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01931b0c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar4 = (char *)(_UNK_01931cdc + 0x1931b20);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01931ce0 + 0x1931b34));
    func_0x01384978(*(undefined4 *)(_UNK_01931ce4 + 0x1931b40));
    func_0x01384978(*(undefined4 *)(_UNK_01931ce8 + 0x1931b4c));
    func_0x01384978(*(undefined4 *)(_UNK_01931cec + 0x1931b58));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01931cf0 + 0x1931b6c);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_01931cf4 + 0x1931b7c);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  puVar6 = *(undefined4 **)(_UNK_01931cf8 + 0x1931bcc);
  uVar3 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_01931cfc + 0x1931bec);
  func_0x0244f990(uVar3,uVar1,uVar2,0x1a,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar3;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar6);
  func_0x0244f990(uVar3,uVar1,uVar2,0x52,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar3;
  uVar1 = func_0x0244f970(0x5a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar6);
  func_0x0244f990(uVar3,uVar1,uVar2,0x62,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x14) = uVar3;
  return;
}


