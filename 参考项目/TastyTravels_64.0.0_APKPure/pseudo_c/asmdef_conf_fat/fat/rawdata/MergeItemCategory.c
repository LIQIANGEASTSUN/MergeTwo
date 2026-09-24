/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.MergeItemCategory$$.ctor RVA 0x16b5980 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c5980(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  pcVar4 = (char *)(_UNK_016c5afc + 0x16c5994);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c5b00 + 0x16c59a8));
    func_0x01384978(*(undefined4 *)(_UNK_016c5b04 + 0x16c59b4));
    func_0x01384978(*(undefined4 *)(_UNK_016c5b08 + 0x16c59c0));
    func_0x01384978(*(undefined4 *)(_UNK_016c5b0c + 0x16c59cc));
    func_0x01384978(*(undefined4 *)(_UNK_016c5b10 + 0x16c59d8));
    func_0x01384978(*(undefined4 *)(_UNK_016c5b14 + 0x16c59e4));
    func_0x01384978(*(undefined4 *)(_UNK_016c5b18 + 0x16c59f0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016c5b1c + 0x16c5a04));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_016c5b20 + 0x16c5a18));
  puVar5 = *(undefined4 **)(_UNK_016c5b24 + 0x16c5a2c);
  uVar2 = *puVar5;
  piVar7 = *(int **)(_UNK_016c5b28 + 0x16c5a38);
  param_1[5] = iVar1;
  param_1[6] = *piVar7;
  iVar1 = func_0x01384be4(uVar2);
  puVar6 = *(undefined4 **)(_UNK_016c5b2c + 0x16c5a54);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  iVar3 = *piVar7;
  param_1[8] = iVar1;
  param_1[0xe] = iVar3;
  param_1[10] = iVar3;
  param_1[0xb] = iVar3;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[0x10] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar7 = *(int **)(_UNK_016c5b30 + 0x16c5abc);
  param_1[0x11] = iVar1;
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016c5b34 + 0x16c5adc));
                    /* WARNING: Could not recover jumptable at 0x016c5af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.MergeItemCategory$$.ctor RVA 0x16b5b38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c5b38(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  
  pcVar6 = (char *)(_UNK_016c5cb8 + 0x16c5b50);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c5cbc + 0x16c5b64));
    func_0x01384978(*(undefined4 *)(_UNK_016c5cc0 + 0x16c5b70));
    *pcVar6 = '\x01';
  }
  FUN_016c5980(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  iVar7 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar7,**(undefined4 **)(_UNK_016c5cc4 + 0x16c5bb4));
  iVar7 = *(int *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  puVar9 = *(undefined4 **)(_UNK_016c5cc8 + 0x16c5be8);
  uVar2 = func_0x0364acbc(iVar7,*puVar9);
  iVar7 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar7,*puVar9);
  uVar10 = *(undefined4 *)(param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined2 *)(param_1 + 0x31) = *(undefined2 *)(param_2 + 0x31);
  iVar7 = *(int *)(param_2 + 0x40);
  uVar8 = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  uVar1 = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined1 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar10;
  *(undefined4 *)(param_1 + 0x38) = uVar8;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar7,*puVar9);
  iVar7 = *(int *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar7,*puVar9);
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar1 = *(undefined1 *)(param_2 + 0x50);
  uVar4 = *(undefined4 *)(param_2 + 0x48);
  uVar5 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  *(undefined1 *)(param_1 + 0x50) = uVar1;
  uVar2 = func_0x0244f914(uVar3,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.MergeItemCategory$$Clone RVA 0x16b5ccc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016c5ccc(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016c5d20 + 0x16c5ce0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c5d24 + 0x16c5cf4));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016c5d28 + 0x16c5d08));
  FUN_016c5b38(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.MergeItemCategory$$ProxyInternalMergeFrom RVA 0x16b5d2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c5d2c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  pcVar3 = (char *)(_UNK_016c61b4 + 0x16c5d48);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c61b8 + 0x16c5d5c));
    func_0x01384978(*(undefined4 *)(_UNK_016c61bc + 0x16c5d68));
    func_0x01384978(*(undefined4 *)(_UNK_016c61c0 + 0x16c5d74));
    *pcVar3 = '\x01';
  }
  iVar4 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar4,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016c61c4 + 0x16c5da4);
    puVar8 = *(undefined4 **)(_UNK_016c61c8 + 0x16c5dac);
    do {
      if (uVar1 < 0x59) {
        if (uVar1 < 0x2b) {
          if (uVar1 < 0x1b) {
            if (uVar1 == 8) {
              uVar6 = func_0x01484f98(param_2,iVar4,0);
              *(undefined4 *)(param_1 + 0xc) = uVar6;
            }
            else if (uVar1 == 0x10) {
              uVar6 = func_0x01484f98(param_2,iVar4,0);
              *(undefined4 *)(param_1 + 0x10) = uVar6;
            }
            else {
              if (uVar1 != 0x1a) goto LAB_016c6008;
              iVar2 = *piVar7;
              iVar5 = *(int *)(param_1 + 0x14);
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar7;
              }
              uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              func_0x036520e8(iVar5,param_2,uVar6,**(undefined4 **)(_UNK_016c61cc + 0x16c5e1c));
            }
          }
          else {
            if (uVar1 != 0x22) {
              if (uVar1 == 0x28 || uVar1 == 0x2a) {
                iVar2 = *piVar7;
                iVar5 = *(int *)(param_1 + 0x20);
                if (*(int *)(iVar2 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar2 = *piVar7;
                }
                uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
                goto LAB_016c5f7c;
              }
              goto LAB_016c6008;
            }
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            uVar6 = func_0x01484fc8(param_2,iVar4,uVar6,0);
            *(undefined4 *)(param_1 + 0x18) = uVar6;
          }
        }
        else if (uVar1 < 0x43) {
          if (uVar1 == 0x30) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x24) = uVar6;
          }
          else if (uVar1 == 0x3a) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            uVar6 = func_0x01484fc8(param_2,iVar4,uVar6,0);
            *(undefined4 *)(param_1 + 0x28) = uVar6;
          }
          else {
            if (uVar1 != 0x42) goto LAB_016c6008;
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            uVar6 = func_0x01484fc8(param_2,iVar4,uVar6,0);
            *(undefined4 *)(param_1 + 0x2c) = uVar6;
          }
        }
        else if (uVar1 == 0x48) {
          lVar9 = func_0x01484f88(param_2,iVar4,0);
          *(bool *)(param_1 + 0x30) = lVar9 != 0;
        }
        else if (uVar1 == 0x50) {
          lVar9 = func_0x01484f88(param_2,iVar4,0);
          *(bool *)(param_1 + 0x32) = lVar9 != 0;
        }
        else {
          if (uVar1 != 0x58) goto LAB_016c6008;
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x34) = uVar6;
        }
      }
      else if (uVar1 < 0x81) {
        if (uVar1 < 0x6b) {
          if (uVar1 == 0x62) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            uVar6 = func_0x01484fc8(param_2,iVar4,uVar6,0);
            *(undefined4 *)(param_1 + 0x38) = uVar6;
          }
          else {
            if (uVar1 == 0x68 || uVar1 == 0x6a) {
              iVar2 = *piVar7;
              iVar5 = *(int *)(param_1 + 0x44);
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar7;
              }
              uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
              goto LAB_016c5f7c;
            }
LAB_016c6008:
            uVar6 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar6;
          }
        }
        else if (uVar1 == 0x70) {
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x48) = uVar6;
        }
        else {
          if (uVar1 != 0x78) {
            if (uVar1 == 0x80) goto LAB_016c5f58;
            goto LAB_016c6008;
          }
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x4c) = uVar6;
        }
      }
      else if (uVar1 < 0x8b) {
        if (uVar1 == 0x82) {
LAB_016c5f58:
          iVar2 = *piVar7;
          iVar5 = *(int *)(param_1 + 0x1c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
        }
        else {
          if (uVar1 != 0x88 && uVar1 != 0x8a) goto LAB_016c6008;
          iVar2 = *piVar7;
          iVar5 = *(int *)(param_1 + 0x40);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
        }
LAB_016c5f7c:
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x0364b0e0(iVar5,param_2,uVar6,*puVar8);
      }
      else if (uVar1 == 0x90) {
        uVar6 = func_0x01484f98(param_2,iVar4,0);
        *(undefined4 *)(param_1 + 0x3c) = uVar6;
      }
      else if (uVar1 == 0x98) {
        lVar9 = func_0x01484f88(param_2,iVar4,0);
        *(bool *)(param_1 + 0x31) = lVar9 != 0;
      }
      else {
        if (uVar1 != 0xa0) goto LAB_016c6008;
        lVar9 = func_0x01484f88(param_2,iVar4,0);
        *(bool *)(param_1 + 0x50) = lVar9 != 0;
      }
      uVar1 = func_0x01484f58(param_2,iVar4,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.MergeItemCategory$$get_XXX_RowIdentifier RVA 0x16b61d0 =====

undefined4 FUN_016c61d0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}



// ===== fat.rawdata.MergeItemCategory$$set_XXX_RowIdentifier RVA 0x16b61d8 =====

void FUN_016c61d8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}



// ===== fat.rawdata.MergeItemCategory$$.cctor RVA 0x16b61e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c61e0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016c62b4 + 0x16c61f0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016c62b8 + 0x16c6204));
    func_0x01384978(*(undefined4 *)(_UNK_016c62bc + 0x16c6210));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_016c62c0 + 0x16c6224);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_016c62c4 + 0x16c6234);
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x82,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x8a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f970(0x6a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  return;
}


