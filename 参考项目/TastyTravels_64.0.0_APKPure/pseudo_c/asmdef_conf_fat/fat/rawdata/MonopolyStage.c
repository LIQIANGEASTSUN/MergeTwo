/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.MonopolyStage$$.ctor RVA 0x16e54ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016f54ec(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar4 = (char *)(_UNK_016f56d8 + 0x16f5500);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016f56dc + 0x16f5514));
    func_0x01384978(*(undefined4 *)(_UNK_016f56e0 + 0x16f5520));
    func_0x01384978(*(undefined4 *)(_UNK_016f56e4 + 0x16f552c));
    func_0x01384978(*(undefined4 *)(_UNK_016f56e8 + 0x16f5538));
    func_0x01384978(*(undefined4 *)(_UNK_016f56ec + 0x16f5544));
    func_0x01384978(*(undefined4 *)(_UNK_016f56f0 + 0x16f5550));
    func_0x01384978(*(undefined4 *)(_UNK_016f56f4 + 0x16f555c));
    *pcVar4 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_016f56f8 + 0x16f5570);
  iVar1 = func_0x01384be4(*puVar6);
  puVar9 = *(undefined4 **)(_UNK_016f56fc + 0x16f5584);
  func_0x036542d8(iVar1,*puVar9);
  puVar7 = *(undefined4 **)(_UNK_016f5700 + 0x16f5594);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar7);
  puVar8 = *(undefined4 **)(_UNK_016f5704 + 0x16f55ac);
  func_0x0364cfb8(iVar1,*puVar8);
  uVar2 = *puVar7;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar8);
  uVar2 = *puVar7;
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar8);
  uVar2 = *puVar6;
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar9);
  uVar2 = *puVar6;
  param_1[10] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar9);
  piVar5 = *(int **)(_UNK_016f5708 + 0x16f561c);
  uVar2 = *puVar6;
  param_1[0xc] = iVar1;
  param_1[0xd] = *piVar5;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar9);
  uVar2 = *puVar6;
  param_1[0xe] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar9);
  uVar2 = *puVar6;
  iVar3 = *piVar5;
  param_1[0x10] = iVar1;
  param_1[0x11] = iVar3;
  param_1[0x12] = iVar3;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar9);
  uVar2 = *puVar7;
  param_1[0x13] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar8);
  piVar5 = *(int **)(_UNK_016f570c + 0x16f5698);
  param_1[0x14] = iVar1;
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016f5710 + 0x16f56b8));
                    /* WARNING: Could not recover jumptable at 0x016f56d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.MonopolyStage$$.ctor RVA 0x16e5714 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016f5714(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_016f5908 + 0x16f572c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016f590c + 0x16f5740));
    func_0x01384978(*(undefined4 *)(_UNK_016f5910 + 0x16f574c));
    *pcVar5 = '\x01';
  }
  FUN_016f54ec(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_016f5914 + 0x16f5790);
  uVar2 = func_0x03651cc4(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar8 = *(undefined4 **)(_UNK_016f5918 + 0x16f57b8);
  uVar2 = func_0x0364acbc(iVar6,*puVar8);
  iVar6 = *(int *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar6,*puVar8);
  iVar6 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar6,*puVar8);
  iVar6 = *(int *)(param_2 + 0x28);
  uVar1 = *(undefined1 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined1 *)(param_1 + 0x24) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar6,*puVar7);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  uVar4 = *(undefined4 *)(param_2 + 0x48);
  iVar6 = *(int *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar6,*puVar8);
  uVar3 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  uVar2 = func_0x0244f914(uVar3,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.MonopolyStage$$Clone RVA 0x16e591c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016f591c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016f5970 + 0x16f5930);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016f5974 + 0x16f5944));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016f5978 + 0x16f5958));
  FUN_016f5714(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.MonopolyStage$$ProxyInternalMergeFrom RVA 0x16e597c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016f597c(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_016f5de8 + 0x16f5998);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016f5dec + 0x16f59ac));
    func_0x01384978(*(undefined4 *)(_UNK_016f5df0 + 0x16f59b8));
    func_0x01384978(*(undefined4 *)(_UNK_016f5df4 + 0x16f59c4));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016f5df8 + 0x16f59f4);
    puVar8 = *(undefined4 **)(_UNK_016f5dfc + 0x16f59fc);
    puVar9 = *(undefined4 **)(_UNK_016f5e00 + 0x16f5a04);
    do {
      if (uVar1 < 0x51) {
        if (uVar1 < 0x21) {
          if (uVar1 < 0x11) {
            if (uVar1 == 8) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0xc) = uVar2;
            }
            else {
              if (uVar1 != 0x10) goto LAB_016f5ca8;
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x18) = uVar2;
            }
          }
          else {
            if (uVar1 == 0x18 || uVar1 == 0x1a) {
              iVar3 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x20);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar7;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
              goto LAB_016f5bec;
            }
            if (uVar1 != 0x20) goto LAB_016f5ca8;
            lVar10 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x24) = lVar10 != 0;
          }
        }
        else {
          if (uVar1 < 0x3b) {
            if (uVar1 == 0x2a) {
              iVar3 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x28);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar7;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
            }
            else {
              if (uVar1 == 0x30) {
                uVar2 = func_0x01484f98(param_2,iVar5,0);
                *(undefined4 *)(param_1 + 0x2c) = uVar2;
                goto LAB_016f5d6c;
              }
              if (uVar1 != 0x3a) goto LAB_016f5ca8;
              iVar3 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x30);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar7;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x18);
            }
            goto LAB_016f5d4c;
          }
          if (uVar1 == 0x42) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
            *(undefined4 *)(param_1 + 0x34) = uVar2;
          }
          else {
            if (uVar1 == 0x4a) {
              iVar3 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x38);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar7;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x1c);
              goto LAB_016f5d4c;
            }
            if (uVar1 != 0x50) goto LAB_016f5ca8;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x3c) = uVar2;
          }
        }
      }
      else if (uVar1 < 0x79) {
        if (uVar1 < 99) {
          if (uVar1 == 0x5a) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x40);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x20);
LAB_016f5d4c:
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x036520e8(iVar6,param_2,uVar2,*puVar9);
          }
          else {
            if (uVar1 != 0x62) goto LAB_016f5ca8;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
            *(undefined4 *)(param_1 + 0x44) = uVar2;
          }
        }
        else {
          if (uVar1 != 0x6a) {
            if (uVar1 != 0x72) {
              if (uVar1 == 0x78) goto LAB_016f5b64;
              goto LAB_016f5ca8;
            }
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x4c);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x24);
            goto LAB_016f5d4c;
          }
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
          *(undefined4 *)(param_1 + 0x48) = uVar2;
        }
      }
      else {
        if (uVar1 < 0x83) {
          if (uVar1 == 0x7a) {
LAB_016f5b64:
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x50);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x28);
          }
          else {
            if (uVar1 != 0x80 && uVar1 != 0x82) goto LAB_016f5ca8;
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x14);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
          }
        }
        else {
          if (uVar1 != 0x88 && uVar1 != 0x8a) {
            if (uVar1 == 0x92) {
              iVar3 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x10);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar7;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
              goto LAB_016f5d4c;
            }
LAB_016f5ca8:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
            goto LAB_016f5d6c;
          }
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x1c);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
        }
LAB_016f5bec:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0364b0e0(iVar6,param_2,uVar2,*puVar8);
      }
LAB_016f5d6c:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.MonopolyStage$$get_XXX_RowIdentifier RVA 0x16e5e04 =====

undefined4 FUN_016f5e04(int param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}



// ===== fat.rawdata.MonopolyStage$$set_XXX_RowIdentifier RVA 0x16e5e0c =====

void FUN_016f5e0c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}



// ===== fat.rawdata.MonopolyStage$$.cctor RVA 0x16e5e14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016f5e14(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016f5f60 + 0x16f5e24);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016f5f64 + 0x16f5e38));
    func_0x01384978(*(undefined4 *)(_UNK_016f5f68 + 0x16f5e44));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_016f5f6c + 0x16f5e58);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_016f5f70 + 0x16f5e68);
  uVar1 = func_0x0244f954(0x92,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x82,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x8a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f954(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x18) = uVar1;
  uVar1 = func_0x0244f954(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x1c) = uVar1;
  uVar1 = func_0x0244f954(0x5a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x20) = uVar1;
  uVar1 = func_0x0244f954(0x72,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x24) = uVar1;
  uVar1 = func_0x0244f970(0x7a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x28) = uVar1;
  return;
}


