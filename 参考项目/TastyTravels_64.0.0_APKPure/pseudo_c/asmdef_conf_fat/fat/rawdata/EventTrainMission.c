/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventTrainMission$$.ctor RVA 0x1645410 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01655410(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_01655508 + 0x1655424);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0165550c + 0x1655438));
    func_0x01384978(*(undefined4 *)(_UNK_01655510 + 0x1655444));
    func_0x01384978(*(undefined4 *)(_UNK_01655514 + 0x1655450));
    func_0x01384978(*(undefined4 *)(_UNK_01655518 + 0x165545c));
    func_0x01384978(*(undefined4 *)(_UNK_0165551c + 0x1655468));
    *pcVar5 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_01655520 + 0x165547c);
  iVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_01655524 + 0x1655490);
  func_0x036542d8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar7);
  piVar3 = *(int **)(_UNK_0165552c + 0x16554c4);
  iVar4 = *(int *)(**(int **)(_UNK_01655528 + 0x16554b8) + 0x74);
  param_1[8] = iVar1;
  param_1[0x11] = *piVar3;
  if (iVar4 == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01655530 + 0x16554e8));
                    /* WARNING: Could not recover jumptable at 0x01655504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventTrainMission$$.ctor RVA 0x1645534 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01655534(int param_1,int param_2)

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
  
  pcVar6 = (char *)(_UNK_01655628 + 0x165554c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0165562c + 0x1655560));
    *pcVar6 = '\x01';
  }
  FUN_01655410(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  puVar8 = *(undefined4 **)(_UNK_01655630 + 0x16555ac);
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
  uVar9 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x2c) = uVar9;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0x3c);
  uVar3 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  uVar1 = *(undefined2 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  uVar9 = *(undefined8 *)(param_2 + 0x48);
  uVar10 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined2 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar9;
  *(undefined8 *)(param_1 + 0x50) = uVar10;
  uVar2 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.EventTrainMission$$Clone RVA 0x1645634 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01655634(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01655688 + 0x1655648);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0165568c + 0x165565c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01655690 + 0x1655670));
  FUN_01655534(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventTrainMission$$ProxyInternalMergeFrom RVA 0x1645694 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01655694(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01655a50 + 0x16556ac);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01655a54 + 0x16556c0));
    func_0x01384978(*(undefined4 *)(_UNK_01655a58 + 0x16556cc));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01655a5c + 0x16556fc);
    puVar8 = *(undefined4 **)(_UNK_01655a60 + 0x1655704);
    do {
      if (uVar1 < 0x61) {
        if (uVar1 < 0x39) {
          if (uVar1 < 0x19) {
            if (uVar1 == 8) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0xc) = uVar2;
            }
            else if (uVar1 == 0x18) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x18) = uVar2;
            }
            else {
LAB_016558ac:
              uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
              *(undefined4 *)(param_1 + 8) = uVar2;
            }
          }
          else if (uVar1 == 0x28) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x1c) = uVar2;
          }
          else if (uVar1 == 0x32) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x20);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
LAB_01655a28:
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x036520e8(iVar6,param_2,uVar2,*puVar8);
          }
          else {
            if (uVar1 != 0x38) goto LAB_016558ac;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x24) = uVar2;
          }
        }
        else if (uVar1 < 0x49) {
          if (uVar1 == 0x40) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x2c) = uVar2;
          }
          else {
            if (uVar1 != 0x48) goto LAB_016558ac;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x30) = uVar2;
          }
        }
        else if (uVar1 == 0x50) {
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x34) = lVar9 != 0;
        }
        else if (uVar1 == 0x58) {
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x35) = lVar9 != 0;
        }
        else {
          if (uVar1 != 0x60) goto LAB_016558ac;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x38) = uVar2;
        }
      }
      else if (uVar1 < 0x89) {
        if (uVar1 < 0x73) {
          if (uVar1 == 0x68) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x40) = uVar2;
          }
          else {
            if (uVar1 != 0x72) goto LAB_016558ac;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
            *(undefined4 *)(param_1 + 0x44) = uVar2;
          }
        }
        else if (uVar1 == 0x78) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x48) = uVar2;
        }
        else if (uVar1 == 0x80) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x4c) = uVar2;
        }
        else {
          if (uVar1 != 0x88) goto LAB_016558ac;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x50) = uVar2;
        }
      }
      else if (uVar1 < 0x99) {
        if (uVar1 == 0x90) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x54) = uVar2;
        }
        else {
          if (uVar1 != 0x98) goto LAB_016558ac;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x14) = uVar2;
        }
      }
      else if (uVar1 == 0xa0) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x3c) = uVar2;
      }
      else {
        if (uVar1 == 0xb2) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
          goto LAB_01655a28;
        }
        if (uVar1 != 0xb8) goto LAB_016558ac;
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x28) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventTrainMission$$get_XXX_RowIdentifier RVA 0x1645a64 =====

undefined4 FUN_01655a64(int param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



// ===== fat.rawdata.EventTrainMission$$set_XXX_RowIdentifier RVA 0x1645a6c =====

void FUN_01655a6c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}



// ===== fat.rawdata.EventTrainMission$$.cctor RVA 0x1645a74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01655a74(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01655b00 + 0x1655a84);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01655b04 + 0x1655a98));
    func_0x01384978(*(undefined4 *)(_UNK_01655b08 + 0x1655aa4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01655b0c + 0x1655ab8);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01655b10 + 0x1655ac8);
  uVar1 = func_0x0244f954(0xb2,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


