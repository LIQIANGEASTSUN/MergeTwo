/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventWishBoardGroup$$.ctor RVA 0x1657920 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01667920(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  
  pcVar5 = (char *)(_UNK_01667b34 + 0x1667934);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01667b38 + 0x1667948));
    func_0x01384978(*(undefined4 *)(_UNK_01667b3c + 0x1667954));
    func_0x01384978(*(undefined4 *)(_UNK_01667b40 + 0x1667960));
    func_0x01384978(*(undefined4 *)(_UNK_01667b44 + 0x166796c));
    func_0x01384978(*(undefined4 *)(_UNK_01667b48 + 0x1667978));
    func_0x01384978(*(undefined4 *)(_UNK_01667b4c + 0x1667984));
    func_0x01384978(*(undefined4 *)(_UNK_01667b50 + 0x1667990));
    func_0x01384978(*(undefined4 *)(_UNK_01667b54 + 0x166799c));
    func_0x01384978(*(undefined4 *)(_UNK_01667b58 + 0x16679a8));
    *pcVar5 = '\x01';
  }
  puVar8 = *(undefined4 **)(_UNK_01667b5c + 0x16679bc);
  iVar1 = func_0x01384be4(*puVar8);
  puVar9 = *(undefined4 **)(_UNK_01667b60 + 0x16679d0);
  func_0x036542d8(iVar1,*puVar9);
  puVar6 = *(undefined4 **)(_UNK_01667b64 + 0x16679e0);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_01667b68 + 0x16679f8);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  puVar3 = *(undefined4 **)(_UNK_01667b6c + 0x1667a20);
  param_1[10] = iVar1;
  iVar1 = func_0x01384be4(*puVar3);
  func_0x034673e0(iVar1,**(undefined4 **)(_UNK_01667b70 + 0x1667a38));
  uVar2 = *puVar6;
  param_1[0xb] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  piVar10 = *(int **)(_UNK_01667b74 + 0x1667a64);
  uVar2 = *puVar6;
  param_1[0xe] = iVar1;
  param_1[0xf] = *piVar10;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[0x10] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[0x12] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar6;
  iVar4 = *piVar10;
  param_1[0x13] = iVar1;
  param_1[0x14] = iVar4;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar8;
  param_1[0x15] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar9);
  piVar10 = *(int **)(_UNK_01667b78 + 0x1667af4);
  param_1[0x16] = iVar1;
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01667b7c + 0x1667b14));
                    /* WARNING: Could not recover jumptable at 0x01667b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventWishBoardGroup$$.ctor RVA 0x1657b80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01667b80(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  
  pcVar4 = (char *)(_UNK_01667d90 + 0x1667b98);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01667d94 + 0x1667bac));
    func_0x01384978(*(undefined4 *)(_UNK_01667d98 + 0x1667bb8));
    func_0x01384978(*(undefined4 *)(_UNK_01667d9c + 0x1667bc4));
    *pcVar4 = '\x01';
  }
  FUN_01667920(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_01667da0 + 0x1667c08);
  uVar1 = func_0x03651cc4(iVar5,*puVar7);
  iVar5 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_01667da4 + 0x1667c30);
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03464804(iVar5,**(undefined4 **)(_UNK_01667da8 + 0x1667c84));
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  iVar5 = *(int *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x40);
  uVar2 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x48);
  uVar2 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventWishBoardGroup$$Clone RVA 0x1657dac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01667dac(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01667e00 + 0x1667dc0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01667e04 + 0x1667dd4));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01667e08 + 0x1667de8));
  FUN_01667b80(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventWishBoardGroup$$ProxyInternalMergeFrom RVA 0x1657e0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01667e0c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar3 = (char *)(_UNK_01668328 + 0x1667e28);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0166832c + 0x1667e3c));
    func_0x01384978(*(undefined4 *)(_UNK_01668330 + 0x1667e48));
    func_0x01384978(*(undefined4 *)(_UNK_01668334 + 0x1667e54));
    func_0x01384978(*(undefined4 *)(_UNK_01668338 + 0x1667e60));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0166833c + 0x1667e90);
    puVar8 = *(undefined4 **)(_UNK_01668340 + 0x1667e98);
    puVar9 = *(undefined4 **)(_UNK_01668344 + 0x1667ea0);
    do {
      if (0x4a < uVar1) {
        if (uVar1 < 0x7b) {
          if (uVar1 < 0x61) {
            if (uVar1 == 0x52) {
              uVar4 = func_0x01484f98(param_2,iVar5,0);
              uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
              *(undefined4 *)(param_1 + 0x50) = uVar4;
            }
            else if (uVar1 == 0x58) {
              uVar4 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x20) = uVar4;
            }
            else {
              if (uVar1 != 0x60) goto LAB_0166812c;
              uVar4 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x30) = uVar4;
            }
          }
          else {
            if (uVar1 < 0x71) {
              if (uVar1 == 0x68) {
                uVar4 = func_0x01484f98(param_2,iVar5,0);
                *(undefined4 *)(param_1 + 0x34) = uVar4;
                goto LAB_016681b0;
              }
              if (uVar1 == 0x70) goto LAB_0166816c;
            }
            else {
              if (uVar1 == 0x72) {
LAB_0166816c:
                iVar2 = *piVar7;
                iVar6 = *(int *)(param_1 + 0x54);
                if (*(int *)(iVar2 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar2 = *piVar7;
                }
                uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x24);
                goto LAB_01668190;
              }
              if (uVar1 == 0x7a) {
                iVar2 = *piVar7;
                iVar6 = *(int *)(param_1 + 0x58);
                if (*(int *)(iVar2 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar2 = *piVar7;
                }
                uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x28);
                goto LAB_016682b4;
              }
            }
LAB_0166812c:
            uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar4;
          }
        }
        else if (uVar1 < 0x91) {
          if (uVar1 == 0x80) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x5c) = uVar4;
          }
          else {
            if (uVar1 != 0x8a) {
              if (uVar1 != 0x90) goto LAB_0166812c;
LAB_01668144:
              iVar2 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x38);
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar7;
              }
              uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
              goto LAB_01668190;
            }
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x10);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
LAB_016682b4:
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x036520e8(iVar6,param_2,uVar4,*puVar9);
          }
        }
        else if (uVar1 < 0x9b) {
          if (uVar1 == 0x92) goto LAB_01668144;
          if (uVar1 != 0x9a) goto LAB_0166812c;
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
          *(undefined4 *)(param_1 + 0x3c) = uVar4;
        }
        else if (uVar1 == 0xa0) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar4;
        }
        else {
          if (uVar1 != 0xa8) goto LAB_0166812c;
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x44) = uVar4;
        }
        goto LAB_016681b0;
      }
      if (uVar1 < 0x2b) {
        if (uVar1 < 0x13) {
          if (uVar1 != 8) {
            if (uVar1 != 0x10 && uVar1 != 0x12) goto LAB_0166812c;
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x14);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
            goto LAB_01668190;
          }
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else {
          if (0x20 < uVar1) {
            if ((uVar1 | 2) != 0x2a) goto LAB_0166812c;
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x28);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
            goto LAB_01668190;
          }
          if (uVar1 == 0x18) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x18) = uVar4;
          }
          else {
            if (uVar1 != 0x20) goto LAB_0166812c;
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x24) = uVar4;
          }
        }
      }
      else {
        if (uVar1 < 0x3b) {
          if (uVar1 == 0x32) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x2c);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x034663ac(iVar6,param_2,uVar4,**(undefined4 **)(_UNK_01668348 + 0x166826c));
            goto LAB_016681b0;
          }
          if (uVar1 != 0x38 && uVar1 != 0x3a) goto LAB_0166812c;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x40);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x18);
        }
        else if (uVar1 < 0x43) {
          if ((uVar1 | 2) != 0x42) goto LAB_0166812c;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x48);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x1c);
        }
        else {
          if ((uVar1 | 2) != 0x4a) goto LAB_0166812c;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x4c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x20);
        }
LAB_01668190:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0364b0e0(iVar6,param_2,uVar4,*puVar8);
      }
LAB_016681b0:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventWishBoardGroup$$get_XXX_RowIdentifier RVA 0x165834c =====

undefined4 FUN_0166834c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



// ===== fat.rawdata.EventWishBoardGroup$$set_XXX_RowIdentifier RVA 0x1658354 =====

void FUN_01668354(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}



// ===== fat.rawdata.EventWishBoardGroup$$.cctor RVA 0x165835c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0166835c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_01668530 + 0x1668370);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01668534 + 0x1668384));
    func_0x01384978(*(undefined4 *)(_UNK_01668538 + 0x1668390));
    func_0x01384978(*(undefined4 *)(_UNK_0166853c + 0x166839c));
    func_0x01384978(*(undefined4 *)(_UNK_01668540 + 0x16683a8));
    func_0x01384978(*(undefined4 *)(_UNK_01668544 + 0x16683b4));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01668548 + 0x16683c8);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_0166854c + 0x16683d8);
  uVar1 = func_0x0244f954(0x8a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f980(0x12,**(undefined4 **)(_UNK_01668550 + 0x1668448),0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01668554 + 0x1668460));
  func_0x0244f944(uVar3,uVar1,uVar2,0x32,**(undefined4 **)(_UNK_01668558 + 0x1668480));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x10) = uVar3;
  uVar1 = func_0x0244f970(0x92,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f970(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x18) = uVar1;
  uVar1 = func_0x0244f970(0x42,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x1c) = uVar1;
  uVar1 = func_0x0244f970(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x20) = uVar1;
  uVar1 = func_0x0244f970(0x72,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x24) = uVar1;
  uVar1 = func_0x0244f954(0x7a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x28) = uVar1;
  return;
}


