/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventTrainMissionRound$$.ctor RVA 0x1646964 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01656964(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01656a70 + 0x1656978);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01656a74 + 0x165698c));
    func_0x01384978(*(undefined4 *)(_UNK_01656a78 + 0x1656998));
    func_0x01384978(*(undefined4 *)(_UNK_01656a7c + 0x16569a4));
    func_0x01384978(*(undefined4 *)(_UNK_01656a80 + 0x16569b0));
    func_0x01384978(*(undefined4 *)(_UNK_01656a84 + 0x16569bc));
    func_0x01384978(*(undefined4 *)(_UNK_01656a88 + 0x16569c8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01656a8c + 0x16569dc));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_01656a90 + 0x16569f0));
  puVar2 = *(undefined4 **)(_UNK_01656a94 + 0x1656a04);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_01656a98 + 0x1656a1c));
  piVar3 = *(int **)(_UNK_01656a9c + 0x1656a30);
  param_1[5] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01656aa0 + 0x1656a50));
                    /* WARNING: Could not recover jumptable at 0x01656a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventTrainMissionRound$$.ctor RVA 0x1646aa4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01656aa4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_01656b68 + 0x1656abc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01656b6c + 0x1656ad0));
    func_0x01384978(*(undefined4 *)(_UNK_01656b70 + 0x1656adc));
    *pcVar3 = '\x01';
  }
  FUN_01656964(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_01656b74 + 0x1656b1c));
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,**(undefined4 **)(_UNK_01656b78 + 0x1656b44));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventTrainMissionRound$$Clone RVA 0x1646b7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01656b7c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01656bd0 + 0x1656b90);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01656bd4 + 0x1656ba4));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01656bd8 + 0x1656bb8));
  FUN_01656aa4(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventTrainMissionRound$$ProxyInternalMergeFrom RVA 0x1646bdc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01656bdc(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar4 = (char *)(_UNK_01656d68 + 0x1656bf8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01656d6c + 0x1656c0c));
    func_0x01384978(*(undefined4 *)(_UNK_01656d70 + 0x1656c18));
    func_0x01384978(*(undefined4 *)(_UNK_01656d74 + 0x1656c24));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01656d78 + 0x1656c54);
    puVar8 = *(undefined4 **)(_UNK_01656d7c + 0x1656c5c);
    puVar9 = *(undefined4 **)(_UNK_01656d80 + 0x1656c64);
    do {
      if (uVar1 < 0x11) {
        if (uVar1 == 8) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar3;
        }
        else {
          if (uVar1 == 0x10) goto LAB_01656cd4;
LAB_01656d1c:
          uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar3;
        }
      }
      else if (uVar1 == 0x12) {
LAB_01656cd4:
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x14);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0364b0e0(iVar6,param_2,uVar3,*puVar8);
      }
      else {
        if (uVar1 != 0x1a) goto LAB_01656d1c;
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x10);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar6,param_2,uVar3,*puVar9);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventTrainMissionRound$$get_XXX_RowIdentifier RVA 0x1646d84 =====

undefined4 FUN_01656d84(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== fat.rawdata.EventTrainMissionRound$$set_XXX_RowIdentifier RVA 0x1646d8c =====

void FUN_01656d8c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// ===== fat.rawdata.EventTrainMissionRound$$.cctor RVA 0x1646d94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01656d94(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01656e20 + 0x1656da4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01656e24 + 0x1656db8));
    func_0x01384978(*(undefined4 *)(_UNK_01656e28 + 0x1656dc4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01656e2c + 0x1656dd8);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01656e30 + 0x1656de8);
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


