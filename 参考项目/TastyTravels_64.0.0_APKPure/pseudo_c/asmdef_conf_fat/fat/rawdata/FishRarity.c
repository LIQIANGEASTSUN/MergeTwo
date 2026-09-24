/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.FishRarity$$.ctor RVA 0x166f940 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0167f940(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0167fa34 + 0x167f954);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0167fa38 + 0x167f968));
    func_0x01384978(*(undefined4 *)(_UNK_0167fa3c + 0x167f974));
    func_0x01384978(*(undefined4 *)(_UNK_0167fa40 + 0x167f980));
    func_0x01384978(*(undefined4 *)(_UNK_0167fa44 + 0x167f98c));
    func_0x01384978(*(undefined4 *)(_UNK_0167fa48 + 0x167f998));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0167fa4c + 0x167f9ac));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0167fa50 + 0x167f9c0));
  piVar2 = *(int **)(_UNK_0167fa58 + 0x167f9e0);
  iVar3 = *(int *)(**(int **)(_UNK_0167fa54 + 0x167f9d4) + 0x74);
  param_1[4] = iVar1;
  iVar1 = *piVar2;
  param_1[5] = iVar1;
  param_1[6] = iVar1;
  param_1[7] = iVar1;
  param_1[8] = iVar1;
  param_1[9] = iVar1;
  if (iVar3 == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0167fa5c + 0x167fa14));
                    /* WARNING: Could not recover jumptable at 0x0167fa30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.FishRarity$$.ctor RVA 0x166fa60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0167fa60(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  pcVar5 = (char *)(_UNK_0167fb1c + 0x167fa78);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0167fb20 + 0x167fa8c));
    *pcVar5 = '\x01';
  }
  FUN_0167f940(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,**(undefined4 **)(_UNK_0167fb24 + 0x167facc));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar8 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar7;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar1 = func_0x0244f914(uVar1,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.FishRarity$$Clone RVA 0x166fb28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0167fb28(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0167fb7c + 0x167fb3c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0167fb80 + 0x167fb50));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0167fb84 + 0x167fb64));
  FUN_0167fa60(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.FishRarity$$ProxyInternalMergeFrom RVA 0x166fb88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0167fb88(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_0167fdd4 + 0x167fba0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0167fdd8 + 0x167fbb4));
    func_0x01384978(*(undefined4 *)(_UNK_0167fddc + 0x167fbc0));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0167fde0 + 0x167fbf0);
    puVar8 = *(undefined4 **)(_UNK_0167fde4 + 0x167fbf8);
    do {
      if (uVar1 < 0x21) {
        if (uVar1 < 0x13) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else if (uVar1 == 0x12) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
            *(undefined4 *)(param_1 + 0x20) = uVar2;
          }
          else {
LAB_0167fd04:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else if (uVar1 == 0x1a) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
          *(undefined4 *)(param_1 + 0x24) = uVar2;
        }
        else {
          if (uVar1 != 0x20) goto LAB_0167fd04;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x28) = uVar2;
        }
      }
      else if (uVar1 < 0x33) {
        if (uVar1 == 0x2a) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
          *(undefined4 *)(param_1 + 0x18) = uVar2;
        }
        else {
          if (uVar1 != 0x32) goto LAB_0167fd04;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
          *(undefined4 *)(param_1 + 0x14) = uVar2;
        }
      }
      else if (uVar1 == 0x3a) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
        *(undefined4 *)(param_1 + 0x1c) = uVar2;
      }
      else {
        if (uVar1 != 0x42) goto LAB_0167fd04;
        iVar3 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x10);
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar6,param_2,uVar2,*puVar8);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.FishRarity$$get_XXX_RowIdentifier RVA 0x166fde8 =====

undefined4 FUN_0167fde8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ===== fat.rawdata.FishRarity$$set_XXX_RowIdentifier RVA 0x166fdf0 =====

void FUN_0167fdf0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// ===== fat.rawdata.FishRarity$$.cctor RVA 0x166fdf8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0167fdf8(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0167fe6c + 0x167fe08);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0167fe70 + 0x167fe1c));
    func_0x01384978(*(undefined4 *)(_UNK_0167fe74 + 0x167fe28));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0167fe78 + 0x167fe3c);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0167fe7c + 0x167fe4c);
  uVar1 = func_0x0244f954(0x42,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


