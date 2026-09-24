/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventScoreBoard$$.ctor RVA 0x1625160 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01635160(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01635228 + 0x1635174);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0163522c + 0x1635188));
    func_0x01384978(*(undefined4 *)(_UNK_01635230 + 0x1635194));
    func_0x01384978(*(undefined4 *)(_UNK_01635234 + 0x16351a0));
    func_0x01384978(*(undefined4 *)(_UNK_01635238 + 0x16351ac));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0163523c + 0x16351c0));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_01635240 + 0x16351d4));
  piVar2 = *(int **)(_UNK_01635244 + 0x16351e8);
  param_1[4] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01635248 + 0x1635208));
                    /* WARNING: Could not recover jumptable at 0x01635224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventScoreBoard$$.ctor RVA 0x162524c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0163524c(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar2 = (char *)(_UNK_01635314 + 0x1635264);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01635318 + 0x1635278));
    *pcVar2 = '\x01';
  }
  FUN_01635160(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar3,**(undefined4 **)(_UNK_0163531c + 0x16352c0));
  uVar4 = *(undefined8 *)(param_2 + 0x14);
  uVar5 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x14) = uVar4;
  *(undefined8 *)(param_1 + 0x1c) = uVar5;
  uVar4 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0x3c);
  uVar5 = *(undefined8 *)(param_2 + 0x44);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x3c) = uVar4;
  *(undefined8 *)(param_1 + 0x44) = uVar5;
  uVar1 = func_0x0244f914(uVar1,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventScoreBoard$$Clone RVA 0x1625320 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01635320(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01635374 + 0x1635334);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01635378 + 0x1635348));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0163537c + 0x163535c));
  FUN_0163524c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventScoreBoard$$ProxyInternalMergeFrom RVA 0x1625380 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01635380(int param_1,int param_2)

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
  
  pcVar3 = (char *)(_UNK_01635690 + 0x1635398);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01635694 + 0x16353ac));
    func_0x01384978(*(undefined4 *)(_UNK_01635698 + 0x16353b8));
    *pcVar3 = '\x01';
  }
  iVar4 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar4,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0163569c + 0x16353e8);
    puVar8 = *(undefined4 **)(_UNK_016356a0 + 0x16353f0);
    do {
      if (uVar1 < 0x41) {
        if (uVar1 < 0x21) {
          if (uVar1 < 0x13) {
            if (uVar1 == 8) {
              uVar6 = func_0x01484f98(param_2,iVar4,0);
              *(undefined4 *)(param_1 + 0xc) = uVar6;
            }
            else if (uVar1 == 0x12) {
              iVar2 = *piVar7;
              iVar5 = *(int *)(param_1 + 0x10);
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar7;
              }
              uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              func_0x0244f950(iVar5,param_2,uVar6,*puVar8);
            }
            else {
LAB_01635594:
              uVar6 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
              *(undefined4 *)(param_1 + 8) = uVar6;
            }
          }
          else if (uVar1 == 0x18) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x18) = uVar6;
          }
          else {
            if (uVar1 != 0x20) goto LAB_01635594;
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x1c) = uVar6;
          }
        }
        else if (uVar1 < 0x31) {
          if (uVar1 == 0x28) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x20) = uVar6;
          }
          else {
            if (uVar1 != 0x30) goto LAB_01635594;
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x24) = uVar6;
          }
        }
        else if (uVar1 == 0x38) {
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x28) = uVar6;
        }
        else {
          if (uVar1 != 0x40) goto LAB_01635594;
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x2c) = uVar6;
        }
      }
      else if (uVar1 < 0x61) {
        if (uVar1 < 0x51) {
          if (uVar1 == 0x48) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x30) = uVar6;
          }
          else {
            if (uVar1 != 0x50) goto LAB_01635594;
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x34) = uVar6;
          }
        }
        else if (uVar1 == 0x58) {
          lVar9 = func_0x01484f88(param_2,iVar4,0);
          *(bool *)(param_1 + 0x38) = lVar9 != 0;
        }
        else {
          if (uVar1 != 0x60) goto LAB_01635594;
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x3c) = uVar6;
        }
      }
      else if (uVar1 < 0x71) {
        if (uVar1 == 0x68) {
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x40) = uVar6;
        }
        else {
          if (uVar1 != 0x70) goto LAB_01635594;
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x44) = uVar6;
        }
      }
      else if (uVar1 == 0x78) {
        uVar6 = func_0x01484f98(param_2,iVar4,0);
        *(undefined4 *)(param_1 + 0x48) = uVar6;
      }
      else {
        if (uVar1 != 0x80) goto LAB_01635594;
        uVar6 = func_0x01484f98(param_2,iVar4,0);
        *(undefined4 *)(param_1 + 0x14) = uVar6;
      }
      uVar1 = func_0x01484f58(param_2,iVar4,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventScoreBoard$$get_XXX_RowIdentifier RVA 0x16256a4 =====

undefined4 FUN_016356a4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== fat.rawdata.EventScoreBoard$$set_XXX_RowIdentifier RVA 0x16256ac =====

void FUN_016356ac(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}



// ===== fat.rawdata.EventScoreBoard$$.cctor RVA 0x16256b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016356b4(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01635728 + 0x16356c4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0163572c + 0x16356d8));
    func_0x01384978(*(undefined4 *)(_UNK_01635730 + 0x16356e4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01635734 + 0x16356f8);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01635738 + 0x1635708);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


