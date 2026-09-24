/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventTileBingo$$.ctor RVA 0x1642978 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01652978(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_01652a70 + 0x165298c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01652a74 + 0x16529a0));
    func_0x01384978(*(undefined4 *)(_UNK_01652a78 + 0x16529ac));
    func_0x01384978(*(undefined4 *)(_UNK_01652a7c + 0x16529b8));
    func_0x01384978(*(undefined4 *)(_UNK_01652a80 + 0x16529c4));
    func_0x01384978(*(undefined4 *)(_UNK_01652a84 + 0x16529d0));
    *pcVar5 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_01652a88 + 0x16529e4);
  iVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_01652a8c + 0x16529f8);
  func_0x0244f948(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar7);
  piVar3 = *(int **)(_UNK_01652a94 + 0x1652a2c);
  iVar4 = *(int *)(**(int **)(_UNK_01652a90 + 0x1652a20) + 0x74);
  param_1[8] = iVar1;
  param_1[0x13] = *piVar3;
  if (iVar4 == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01652a98 + 0x1652a50));
                    /* WARNING: Could not recover jumptable at 0x01652a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventTileBingo$$.ctor RVA 0x1642a9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01652a9c(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  pcVar6 = (char *)(_UNK_01652ba4 + 0x1652ab4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01652ba8 + 0x1652ac8));
    *pcVar6 = '\x01';
  }
  FUN_01652978(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  puVar8 = *(undefined4 **)(_UNK_01652bac + 0x1652b14);
  uVar2 = func_0x03651cc4(iVar7,*puVar8);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  iVar7 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar7,*puVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x24);
  uVar10 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x24) = uVar9;
  *(undefined8 *)(param_1 + 0x2c) = uVar10;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  uVar9 = *(undefined8 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x44) = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x58);
  uVar1 = *(undefined2 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar9;
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  uVar4 = *(undefined4 *)(param_2 + 0x60);
  uVar5 = *(undefined4 *)(param_2 + 100);
  *(undefined2 *)(param_1 + 0x38) = uVar1;
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  *(undefined4 *)(param_1 + 100) = uVar5;
  uVar2 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.EventTileBingo$$Clone RVA 0x1642bb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01652bb0(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01652c04 + 0x1652bc4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01652c08 + 0x1652bd8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01652c0c + 0x1652bec));
  FUN_01652a9c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventTileBingo$$ProxyInternalMergeFrom RVA 0x1642c10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01652c10(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  pcVar4 = (char *)(_UNK_0165304c + 0x1652c28);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01653050 + 0x1652c3c));
    func_0x01384978(*(undefined4 *)(_UNK_01653054 + 0x1652c48));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01653058 + 0x1652c78);
    puVar8 = *(undefined4 **)(_UNK_0165305c + 0x1652c80);
    do {
      if (uVar1 < 0x61) {
        if (uVar1 < 0x31) {
          if (uVar1 < 0x19) {
            if (uVar1 == 8) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0xc) = uVar2;
            }
            else {
              if (uVar1 == 0x12) {
                iVar3 = *piVar7;
                iVar6 = *(int *)(param_1 + 0x10);
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar3 = *piVar7;
                }
                uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
                goto LAB_01652f58;
              }
              if (uVar1 == 0x18) {
                uVar2 = func_0x01484f98(param_2,iVar5,0);
                *(undefined4 *)(param_1 + 0x1c) = uVar2;
              }
              else {
LAB_01652e34:
                uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
                *(undefined4 *)(param_1 + 8) = uVar2;
              }
            }
          }
          else if (uVar1 == 0x22) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x20);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
LAB_01652f58:
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x036520e8(iVar6,param_2,uVar2,*puVar8);
          }
          else if (uVar1 == 0x28) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x24) = uVar2;
          }
          else {
            if (uVar1 != 0x30) goto LAB_01652e34;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x28) = uVar2;
          }
        }
        else if (uVar1 < 0x49) {
          if (uVar1 == 0x38) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x2c) = uVar2;
          }
          else if (uVar1 == 0x40) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x30) = uVar2;
          }
          else {
            if (uVar1 != 0x48) goto LAB_01652e34;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x34) = uVar2;
          }
        }
        else if (uVar1 == 0x50) {
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x38) = lVar9 != 0;
        }
        else if (uVar1 == 0x58) {
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x39) = lVar9 != 0;
        }
        else {
          if (uVar1 != 0x60) goto LAB_01652e34;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x3c) = uVar2;
        }
      }
      else if (uVar1 < 0x91) {
        if (uVar1 < 0x79) {
          if (uVar1 == 0x68) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x40) = uVar2;
          }
          else if (uVar1 == 0x70) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x44) = uVar2;
          }
          else {
            if (uVar1 != 0x78) goto LAB_01652e34;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x48) = uVar2;
          }
        }
        else if (uVar1 == 0x82) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
          *(undefined4 *)(param_1 + 0x4c) = uVar2;
        }
        else if (uVar1 == 0x88) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x50) = uVar2;
        }
        else {
          if (uVar1 != 0x90) goto LAB_01652e34;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x54) = uVar2;
        }
      }
      else if (uVar1 < 0xa9) {
        if (uVar1 == 0x98) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x58) = uVar2;
        }
        else if (uVar1 == 0xa0) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x5c) = uVar2;
        }
        else {
          if (uVar1 != 0xa8) goto LAB_01652e34;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x60) = uVar2;
        }
      }
      else if (uVar1 == 0xb0) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x14) = uVar2;
      }
      else if (uVar1 == 0xb8) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x18) = uVar2;
      }
      else {
        if (uVar1 != 0xc0) goto LAB_01652e34;
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 100) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventTileBingo$$get_XXX_RowIdentifier RVA 0x1643060 =====

undefined4 FUN_01653060(int param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



// ===== fat.rawdata.EventTileBingo$$set_XXX_RowIdentifier RVA 0x1643068 =====

void FUN_01653068(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return;
}



// ===== fat.rawdata.EventTileBingo$$.cctor RVA 0x1643070 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01653070(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016530fc + 0x1653080);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01653100 + 0x1653094));
    func_0x01384978(*(undefined4 *)(_UNK_01653104 + 0x16530a0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01653108 + 0x16530b4);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0165310c + 0x16530c4);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


