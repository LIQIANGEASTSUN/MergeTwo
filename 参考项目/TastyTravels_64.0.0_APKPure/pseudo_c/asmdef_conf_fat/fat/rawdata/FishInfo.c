/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.FishInfo$$.ctor RVA 0x166ed50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0167ed50(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_0167eeb0 + 0x167ed64);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0167eeb4 + 0x167ed78));
    func_0x01384978(*(undefined4 *)(_UNK_0167eeb8 + 0x167ed84));
    func_0x01384978(*(undefined4 *)(_UNK_0167eebc + 0x167ed90));
    func_0x01384978(*(undefined4 *)(_UNK_0167eec0 + 0x167ed9c));
    func_0x01384978(*(undefined4 *)(_UNK_0167eec4 + 0x167eda8));
    func_0x01384978(*(undefined4 *)(_UNK_0167eec8 + 0x167edb4));
    func_0x01384978(*(undefined4 *)(_UNK_0167eecc + 0x167edc0));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_0167eed0 + 0x167edd4);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_0167eed4 + 0x167ede8);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  piVar3 = *(int **)(_UNK_0167eed8 + 0x167edfc);
  param_1[4] = iVar1;
  iVar1 = *piVar3;
  param_1[5] = iVar1;
  param_1[6] = iVar1;
  param_1[7] = iVar1;
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[0xb] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  puVar5 = *(undefined4 **)(_UNK_0167eedc + 0x167ee44);
  param_1[0xc] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_0167eee0 + 0x167ee5c));
  piVar3 = *(int **)(_UNK_0167eee4 + 0x167ee70);
  param_1[0xd] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0167eee8 + 0x167ee90));
                    /* WARNING: Could not recover jumptable at 0x0167eeac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.FishInfo$$.ctor RVA 0x166eeec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0167eeec(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  pcVar3 = (char *)(_UNK_0167f014 + 0x167ef04);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0167f018 + 0x167ef18));
    func_0x01384978(*(undefined4 *)(_UNK_0167f01c + 0x167ef24));
    *pcVar3 = '\x01';
  }
  FUN_0167ed50(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_0167f020 + 0x167ef68);
  uVar1 = func_0x03651cc4(iVar4,*puVar6);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  iVar4 = *(int *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,*puVar6);
  iVar4 = *(int *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,*puVar6);
  iVar4 = *(int *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,**(undefined4 **)(_UNK_0167f024 + 0x167eff0));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.FishInfo$$Clone RVA 0x166f028 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0167f028(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0167f07c + 0x167f03c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0167f080 + 0x167f050));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0167f084 + 0x167f064));
  FUN_0167eeec(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.FishInfo$$ProxyInternalMergeFrom RVA 0x166f088 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0167f088(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_0167f394 + 0x167f0a4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0167f398 + 0x167f0b8));
    func_0x01384978(*(undefined4 *)(_UNK_0167f39c + 0x167f0c4));
    func_0x01384978(*(undefined4 *)(_UNK_0167f3a0 + 0x167f0d0));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0167f3a4 + 0x167f100);
    puVar8 = *(undefined4 **)(_UNK_0167f3a8 + 0x167f108);
    puVar9 = *(undefined4 **)(_UNK_0167f3ac + 0x167f110);
    do {
      if (uVar1 < 0x31) {
        if (uVar1 < 0x1b) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else if (uVar1 == 0x12) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
            *(undefined4 *)(param_1 + 0x14) = uVar2;
          }
          else if (uVar1 == 0x1a) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
            *(undefined4 *)(param_1 + 0x1c) = uVar2;
          }
          else {
LAB_0167f1f4:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else if (uVar1 == 0x22) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
        else if (uVar1 == 0x28) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x24) = uVar2;
        }
        else {
          if (uVar1 != 0x30) goto LAB_0167f1f4;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x28) = uVar2;
        }
      }
      else if (uVar1 < 0x49) {
        if (uVar1 == 0x3a) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x2c);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
        }
        else {
          if (uVar1 != 0x42) {
            if (uVar1 != 0x48) goto LAB_0167f1f4;
            goto LAB_0167f20c;
          }
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x30);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
        }
LAB_0167f2e4:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar6,param_2,uVar2,*puVar8);
      }
      else if (uVar1 == 0x4a) {
LAB_0167f20c:
        iVar3 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x34);
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0364b0e0(iVar6,param_2,uVar2,*puVar9);
      }
      else {
        if (uVar1 != 0x52) {
          if (uVar1 != 0x5a) goto LAB_0167f1f4;
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
          goto LAB_0167f2e4;
        }
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
        *(undefined4 *)(param_1 + 0x18) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.FishInfo$$get_XXX_RowIdentifier RVA 0x166f3b0 =====

undefined4 FUN_0167f3b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// ===== fat.rawdata.FishInfo$$set_XXX_RowIdentifier RVA 0x166f3b8 =====

void FUN_0167f3b8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}



// ===== fat.rawdata.FishInfo$$.cctor RVA 0x166f3c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0167f3c0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0167f47c + 0x167f3d0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0167f480 + 0x167f3e4));
    func_0x01384978(*(undefined4 *)(_UNK_0167f484 + 0x167f3f0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0167f488 + 0x167f404);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0167f48c + 0x167f414);
  uVar1 = func_0x0244f954(0x5a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f954(0x42,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  return;
}


