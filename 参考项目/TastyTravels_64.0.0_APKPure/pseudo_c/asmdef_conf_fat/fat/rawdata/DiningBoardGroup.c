/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.DiningBoardGroup$$.ctor RVA 0x1933304 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01943304(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_019434f8 + 0x1943318);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019434fc + 0x194332c));
    func_0x01384978(*(undefined4 *)(_UNK_01943500 + 0x1943338));
    func_0x01384978(*(undefined4 *)(_UNK_01943504 + 0x1943344));
    func_0x01384978(*(undefined4 *)(_UNK_01943508 + 0x1943350));
    func_0x01384978(*(undefined4 *)(_UNK_0194350c + 0x194335c));
    func_0x01384978(*(undefined4 *)(_UNK_01943510 + 0x1943368));
    func_0x01384978(*(undefined4 *)(_UNK_01943514 + 0x1943374));
    func_0x01384978(*(undefined4 *)(_UNK_01943518 + 0x1943380));
    func_0x01384978(*(undefined4 *)(_UNK_0194351c + 0x194338c));
    *pcVar5 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_01943520 + 0x19433a0);
  iVar1 = func_0x01384be4(*puVar7);
  puVar8 = *(undefined4 **)(_UNK_01943524 + 0x19433b4);
  func_0x036542d8(iVar1,*puVar8);
  uVar2 = *puVar7;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar8);
  puVar3 = *(undefined4 **)(_UNK_01943528 + 0x19433dc);
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(*puVar3);
  func_0x034673e0(iVar1,**(undefined4 **)(_UNK_0194352c + 0x19433f4));
  puVar3 = *(undefined4 **)(_UNK_01943530 + 0x1943408);
  param_1[9] = iVar1;
  iVar1 = func_0x01384be4(*puVar3);
  puVar6 = *(undefined4 **)(_UNK_01943534 + 0x1943420);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar4 = *(int **)(_UNK_01943538 + 0x1943430);
  param_1[0xc] = iVar1;
  uVar2 = *puVar3;
  param_1[0xd] = *piVar4;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar3;
  param_1[0xf] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar3;
  param_1[0x10] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar3;
  param_1[0x11] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar7;
  param_1[0x14] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar8);
  piVar4 = *(int **)(_UNK_0194353c + 0x19434b8);
  param_1[0x15] = iVar1;
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01943540 + 0x19434d8));
                    /* WARNING: Could not recover jumptable at 0x019434f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.DiningBoardGroup$$.ctor RVA 0x1933544 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01943544(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar4 = (char *)(_UNK_0194372c + 0x194355c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01943730 + 0x1943570));
    func_0x01384978(*(undefined4 *)(_UNK_01943734 + 0x194357c));
    func_0x01384978(*(undefined4 *)(_UNK_01943738 + 0x1943588));
    *pcVar4 = '\x01';
  }
  FUN_01943304(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_0194373c + 0x19435cc);
  uVar1 = func_0x03651cc4(iVar5,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,*puVar7);
  iVar5 = *(int *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03464804(iVar5,**(undefined4 **)(_UNK_01943740 + 0x1943620));
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  iVar5 = *(int *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_01943744 + 0x1943654);
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 0x38);
  iVar5 = *(int *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  iVar5 = *(int *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.DiningBoardGroup$$Clone RVA 0x1933748 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01943748(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0194379c + 0x194375c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019437a0 + 0x1943770));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_019437a4 + 0x1943784));
  FUN_01943544(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.DiningBoardGroup$$ProxyInternalMergeFrom RVA 0x19337a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019437a8(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  pcVar5 = (char *)(_UNK_01943c6c + 0x19437c4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01943c70 + 0x19437d8));
    func_0x01384978(*(undefined4 *)(_UNK_01943c74 + 0x19437e4));
    func_0x01384978(*(undefined4 *)(_UNK_01943c78 + 0x19437f0));
    func_0x01384978(*(undefined4 *)(_UNK_01943c7c + 0x19437fc));
    *pcVar5 = '\x01';
  }
  iVar6 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar6,0);
  if (uVar1 != 0) {
    piVar8 = *(int **)(_UNK_01943c80 + 0x194382c);
    puVar9 = *(undefined4 **)(_UNK_01943c84 + 0x1943834);
    do {
      if (uVar1 < 0x5b) {
        if (uVar1 < 0x31) {
          if (uVar1 < 0x19) {
            if (uVar1 == 8) {
              uVar2 = func_0x01484f98(param_2,iVar6,0);
              *(undefined4 *)(param_1 + 0xc) = uVar2;
            }
            else if (uVar1 == 0x12) {
              iVar3 = *piVar8;
              iVar7 = *(int *)(param_1 + 0x10);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
LAB_01943be0:
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              puVar4 = *(undefined4 **)(_UNK_01943c88 + 0x1943c00);
LAB_01943c40:
              func_0x036520e8(iVar7,param_2,uVar2,*puVar4);
            }
            else {
              if (uVar1 != 0x18) goto LAB_01943ab4;
              uVar2 = func_0x01484f98(param_2,iVar6,0);
              *(undefined4 *)(param_1 + 0x14) = uVar2;
            }
          }
          else if (uVar1 == 0x20) {
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x18) = uVar2;
          }
          else {
            if (uVar1 == 0x2a) {
              iVar3 = *piVar8;
              iVar7 = *(int *)(param_1 + 0x1c);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
              goto LAB_01943be0;
            }
            if (uVar1 != 0x30) goto LAB_01943ab4;
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x20) = uVar2;
          }
        }
        else if (uVar1 < 0x49) {
          if (uVar1 == 0x3a) {
            iVar3 = *piVar8;
            iVar7 = *(int *)(param_1 + 0x24);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            func_0x034663ac(iVar7,param_2,uVar2,**(undefined4 **)(_UNK_01943c8c + 0x1943b68));
          }
          else if (uVar1 == 0x40) {
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x28) = uVar2;
          }
          else {
            if (uVar1 != 0x48) goto LAB_01943ab4;
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x2c) = uVar2;
          }
        }
        else {
          if (uVar1 == 0x50 || uVar1 == 0x52) {
            iVar3 = *piVar8;
            iVar7 = *(int *)(param_1 + 0x30);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
            goto LAB_01943a5c;
          }
          if (uVar1 != 0x5a) goto LAB_01943ab4;
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          uVar2 = func_0x01484fc8(param_2,iVar6,uVar2,0);
          *(undefined4 *)(param_1 + 0x34) = uVar2;
        }
      }
      else if (uVar1 < 0x79) {
        if (uVar1 < 0x6b) {
          if (uVar1 == 0x60) {
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x38) = uVar2;
          }
          else {
            if (uVar1 == 0x68 || uVar1 == 0x6a) {
              iVar3 = *piVar8;
              iVar7 = *(int *)(param_1 + 0x3c);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
              goto LAB_01943a5c;
            }
LAB_01943ab4:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else {
          if (uVar1 != 0x70 && uVar1 != 0x72) {
            if (uVar1 == 0x78) goto LAB_01943a38;
            goto LAB_01943ab4;
          }
          iVar3 = *piVar8;
          iVar7 = *(int *)(param_1 + 0x40);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar8;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x18);
LAB_01943a5c:
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          func_0x0364b0e0(iVar7,param_2,uVar2,*puVar9);
        }
      }
      else {
        if (0x88 < uVar1) {
          if (uVar1 < 0x93) {
            if ((uVar1 | 2) == 0x92) {
              iVar3 = *piVar8;
              iVar7 = *(int *)(param_1 + 0x50);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x20);
              goto LAB_01943a5c;
            }
          }
          else {
            if (uVar1 == 0x9a) {
              iVar3 = *piVar8;
              iVar7 = *(int *)(param_1 + 0x54);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x24);
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              puVar4 = *(undefined4 **)(_UNK_01943c90 + 0x1943c44);
              goto LAB_01943c40;
            }
            if (uVar1 == 0xa0) {
              uVar2 = func_0x01484f98(param_2,iVar6,0);
              *(undefined4 *)(param_1 + 0x58) = uVar2;
              goto LAB_01943c4c;
            }
          }
          goto LAB_01943ab4;
        }
        if (uVar1 == 0x7a) {
LAB_01943a38:
          iVar3 = *piVar8;
          iVar7 = *(int *)(param_1 + 0x44);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar8;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x1c);
          goto LAB_01943a5c;
        }
        if (uVar1 == 0x80) {
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          *(undefined4 *)(param_1 + 0x48) = uVar2;
        }
        else {
          if (uVar1 != 0x88) goto LAB_01943ab4;
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          *(undefined4 *)(param_1 + 0x4c) = uVar2;
        }
      }
LAB_01943c4c:
      uVar1 = func_0x01484f58(param_2,iVar6,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.DiningBoardGroup$$get_XXX_RowIdentifier RVA 0x1933c94 =====

undefined4 FUN_01943c94(int param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}



// ===== fat.rawdata.DiningBoardGroup$$set_XXX_RowIdentifier RVA 0x1933c9c =====

void FUN_01943c9c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  return;
}



// ===== fat.rawdata.DiningBoardGroup$$.cctor RVA 0x1933ca4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01943ca4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_01943e60 + 0x1943cb8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01943e64 + 0x1943ccc));
    func_0x01384978(*(undefined4 *)(_UNK_01943e68 + 0x1943cd8));
    func_0x01384978(*(undefined4 *)(_UNK_01943e6c + 0x1943ce4));
    func_0x01384978(*(undefined4 *)(_UNK_01943e70 + 0x1943cf0));
    func_0x01384978(*(undefined4 *)(_UNK_01943e74 + 0x1943cfc));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01943e78 + 0x1943d10);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_01943e7c + 0x1943d20);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f980(0x12,**(undefined4 **)(_UNK_01943e80 + 0x1943d78),0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01943e84 + 0x1943d90));
  func_0x0244f944(uVar3,uVar1,uVar2,0x3a,**(undefined4 **)(_UNK_01943e88 + 0x1943db0));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar3;
  uVar1 = func_0x0244f970(0x52,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f970(0x6a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f970(0x72,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x18) = uVar1;
  uVar1 = func_0x0244f970(0x7a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x1c) = uVar1;
  uVar1 = func_0x0244f970(0x92,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x20) = uVar1;
  uVar1 = func_0x0244f954(0x9a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x24) = uVar1;
  return;
}


