/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComMergeAutoSource$$.ctor RVA 0x191a328 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192a328(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar5 = (char *)(_UNK_0192a4ec + 0x192a33c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192a4f0 + 0x192a350));
    func_0x01384978(*(undefined4 *)(_UNK_0192a4f4 + 0x192a35c));
    func_0x01384978(*(undefined4 *)(_UNK_0192a4f8 + 0x192a368));
    func_0x01384978(*(undefined4 *)(_UNK_0192a4fc + 0x192a374));
    func_0x01384978(*(undefined4 *)(_UNK_0192a500 + 0x192a380));
    func_0x01384978(*(undefined4 *)(_UNK_0192a504 + 0x192a38c));
    func_0x01384978(*(undefined4 *)(_UNK_0192a508 + 0x192a398));
    func_0x01384978(*(undefined4 *)(_UNK_0192a50c + 0x192a3a4));
    func_0x01384978(*(undefined4 *)(_UNK_0192a510 + 0x192a3b0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0192a514 + 0x192a3c4));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0192a518 + 0x192a3d8));
  puVar8 = *(undefined4 **)(_UNK_0192a51c + 0x192a3ec);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar8);
  puVar9 = *(undefined4 **)(_UNK_0192a520 + 0x192a404);
  func_0x034614f8(iVar1,*puVar9);
  puVar6 = *(undefined4 **)(_UNK_0192a524 + 0x192a414);
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_0192a528 + 0x192a42c);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[0xd] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[0xe] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar8;
  param_1[0xf] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x034614f8(iVar1,*puVar9);
  uVar2 = *puVar6;
  param_1[0x10] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  piVar3 = *(int **)(_UNK_0192a530 + 0x192a4a8);
  iVar4 = *(int *)(**(int **)(_UNK_0192a52c + 0x192a49c) + 0x74);
  param_1[0x11] = iVar1;
  param_1[0x12] = *piVar3;
  if (iVar4 == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0192a534 + 0x192a4cc));
                    /* WARNING: Could not recover jumptable at 0x0192a4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComMergeAutoSource$$.ctor RVA 0x191a538 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192a538(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  
  pcVar5 = (char *)(_UNK_0192a6ec + 0x192a550);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192a6f0 + 0x192a564));
    func_0x01384978(*(undefined4 *)(_UNK_0192a6f4 + 0x192a570));
    func_0x01384978(*(undefined4 *)(_UNK_0192a6f8 + 0x192a57c));
    *pcVar5 = '\x01';
  }
  FUN_0192a328(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar6,**(undefined4 **)(_UNK_0192a6fc + 0x192a5bc));
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  iVar6 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar9 = *(undefined4 **)(_UNK_0192a700 + 0x192a5f0);
  uVar2 = func_0x0345e8e4(iVar6,*puVar9);
  iVar6 = *(int *)(param_2 + 0x34);
  uVar1 = *(undefined2 *)(param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar10 = *(undefined4 *)(param_2 + 0x28);
  uVar4 = *(undefined4 *)(param_2 + 0x2c);
  uVar7 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined2 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar10;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar8 = *(undefined4 **)(_UNK_0192a704 + 0x192a640);
  uVar2 = func_0x0364acbc(iVar6,*puVar8);
  iVar6 = *(int *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar6,*puVar8);
  iVar6 = *(int *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar6,*puVar8);
  iVar6 = *(int *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0345e8e4(iVar6,*puVar9);
  iVar6 = *(int *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar6,*puVar8);
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0x48);
  uVar7 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x4c) = uVar7;
  uVar2 = func_0x0244f914(uVar3,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.ComMergeAutoSource$$Clone RVA 0x191a708 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0192a708(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0192a75c + 0x192a71c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192a760 + 0x192a730));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0192a764 + 0x192a744));
  FUN_0192a538(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComMergeAutoSource$$ProxyInternalMergeFrom RVA 0x191a768 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192a768(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  longlong lVar10;
  
  pcVar3 = (char *)(_UNK_0192abc8 + 0x192a784);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192abcc + 0x192a798));
    func_0x01384978(*(undefined4 *)(_UNK_0192abd0 + 0x192a7a4));
    func_0x01384978(*(undefined4 *)(_UNK_0192abd4 + 0x192a7b0));
    func_0x01384978(*(undefined4 *)(_UNK_0192abd8 + 0x192a7bc));
    *pcVar3 = '\x01';
  }
  iVar4 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar4,0);
  if (uVar1 != 0) {
    piVar8 = *(int **)(_UNK_0192abdc + 0x192a7ec);
    puVar9 = *(undefined4 **)(_UNK_0192abe0 + 0x192a7f4);
    puVar6 = *(undefined4 **)(_UNK_0192abe4 + 0x192a7fc);
    do {
      if (uVar1 < 0x51) {
        if (uVar1 < 0x29) {
          if (uVar1 < 0x13) {
            if (uVar1 == 8) {
              uVar7 = func_0x01484f98(param_2,iVar4,0);
              *(undefined4 *)(param_1 + 0xc) = uVar7;
            }
            else {
              if (uVar1 != 0x12) goto LAB_0192aa88;
              iVar2 = *piVar8;
              iVar5 = *(int *)(param_1 + 0x10);
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar8;
              }
              uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              func_0x036520e8(iVar5,param_2,uVar7,**(undefined4 **)(_UNK_0192abe8 + 0x192a868));
            }
          }
          else if (uVar1 == 0x18) {
            uVar7 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x14) = uVar7;
          }
          else if (uVar1 == 0x20) {
            uVar7 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x18) = uVar7;
          }
          else {
            if (uVar1 != 0x28) goto LAB_0192aa88;
            uVar7 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x20) = uVar7;
          }
        }
        else if (uVar1 < 0x41) {
          if (uVar1 == 0x30) {
            lVar10 = func_0x01484f88(param_2,iVar4,0);
            *(bool *)(param_1 + 0x24) = lVar10 != 0;
          }
          else if (uVar1 == 0x38) {
            uVar7 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x28) = uVar7;
          }
          else {
            if (uVar1 != 0x40) goto LAB_0192aa88;
            uVar7 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x30) = uVar7;
          }
        }
        else {
          if (uVar1 == 0x48 || uVar1 == 0x4a) {
            iVar2 = *piVar8;
            iVar5 = *(int *)(param_1 + 0x34);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar8;
            }
            uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
            goto LAB_0192aa64;
          }
          if (uVar1 == 0x50) goto LAB_0192aa40;
LAB_0192aa88:
          uVar7 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar7;
        }
      }
      else if (uVar1 < 0x71) {
        if (uVar1 < 0x5b) {
          if (uVar1 == 0x52) {
LAB_0192aa40:
            iVar2 = *piVar8;
            iVar5 = *(int *)(param_1 + 0x44);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar8;
            }
            uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x1c);
            goto LAB_0192aa64;
          }
          if (uVar1 != 0x5a) goto LAB_0192aa88;
          uVar7 = func_0x01484f98(param_2,iVar4,0);
          uVar7 = func_0x01484fc8(param_2,iVar4,uVar7,0);
          *(undefined4 *)(param_1 + 0x48) = uVar7;
        }
        else if (uVar1 == 0x60) {
          uVar7 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x4c) = uVar7;
        }
        else if (uVar1 == 0x68) {
          uVar7 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x2c) = uVar7;
        }
        else {
          if (uVar1 != 0x70) goto LAB_0192aa88;
          lVar10 = func_0x01484f88(param_2,iVar4,0);
          *(bool *)(param_1 + 0x25) = lVar10 != 0;
        }
      }
      else if (uVar1 < 0x89) {
        if (uVar1 == 0x7a) {
          iVar2 = *piVar8;
          iVar5 = *(int *)(param_1 + 0x40);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar8;
          }
          uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x18);
        }
        else {
          if (uVar1 != 0x82) {
            if (uVar1 != 0x88) goto LAB_0192aa88;
            goto LAB_0192a9f8;
          }
          iVar2 = *piVar8;
          iVar5 = *(int *)(param_1 + 0x1c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar8;
          }
          uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
        }
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x034604a8(iVar5,param_2,uVar7,*puVar6);
      }
      else {
        if (uVar1 != 0x8a) {
          if (uVar1 != 0x90 && uVar1 != 0x92) goto LAB_0192aa88;
          iVar2 = *piVar8;
          iVar5 = *(int *)(param_1 + 0x3c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar8;
          }
          uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
          goto LAB_0192aa64;
        }
LAB_0192a9f8:
        iVar2 = *piVar8;
        iVar5 = *(int *)(param_1 + 0x38);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar8;
        }
        uVar7 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
LAB_0192aa64:
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x0364b0e0(iVar5,param_2,uVar7,*puVar9);
      }
      uVar1 = func_0x01484f58(param_2,iVar4,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ComMergeAutoSource$$get_XXX_RowIdentifier RVA 0x191abec =====

undefined4 FUN_0192abec(int param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



// ===== fat.rawdata.ComMergeAutoSource$$set_XXX_RowIdentifier RVA 0x191abf4 =====

void FUN_0192abf4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}



// ===== fat.rawdata.ComMergeAutoSource$$.cctor RVA 0x191abfc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0192abfc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar4 = (char *)(_UNK_0192adb8 + 0x192ac10);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0192adbc + 0x192ac24));
    func_0x01384978(*(undefined4 *)(_UNK_0192adc0 + 0x192ac30));
    func_0x01384978(*(undefined4 *)(_UNK_0192adc4 + 0x192ac3c));
    func_0x01384978(*(undefined4 *)(_UNK_0192adc8 + 0x192ac48));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_0192adcc + 0x192ac5c);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_0192add0 + 0x192ac6c);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  puVar6 = *(undefined4 **)(_UNK_0192add4 + 0x192acbc);
  uVar3 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_0192add8 + 0x192acdc);
  func_0x0244f990(uVar3,uVar1,uVar2,0x82,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar3;
  uVar1 = func_0x0244f970(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x8a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f970(0x92,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar6);
  func_0x0244f990(uVar3,uVar1,uVar2,0x7a,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x18) = uVar3;
  uVar1 = func_0x0244f970(0x52,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x1c) = uVar1;
  return;
}


