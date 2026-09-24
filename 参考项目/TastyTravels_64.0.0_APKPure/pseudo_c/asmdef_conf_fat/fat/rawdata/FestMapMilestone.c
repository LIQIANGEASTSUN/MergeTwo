/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.FestMapMilestone$$.ctor RVA 0x1668c24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01678c24(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_01678d1c + 0x1678c38);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01678d20 + 0x1678c4c));
    func_0x01384978(*(undefined4 *)(_UNK_01678d24 + 0x1678c58));
    func_0x01384978(*(undefined4 *)(_UNK_01678d28 + 0x1678c64));
    func_0x01384978(*(undefined4 *)(_UNK_01678d2c + 0x1678c70));
    func_0x01384978(*(undefined4 *)(_UNK_01678d30 + 0x1678c7c));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_01678d34 + 0x1678c90);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_01678d38 + 0x1678ca4);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  piVar3 = *(int **)(_UNK_01678d3c + 0x1678cb8);
  param_1[4] = iVar1;
  param_1[5] = *piVar3;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_01678d40 + 0x1678cdc);
  param_1[7] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01678d44 + 0x1678cfc));
                    /* WARNING: Could not recover jumptable at 0x01678d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.FestMapMilestone$$.ctor RVA 0x1668d48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01678d48(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_01678e08 + 0x1678d60);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01678e0c + 0x1678d74));
    *pcVar4 = '\x01';
  }
  FUN_01678c24(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_01678e10 + 0x1678db8);
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.FestMapMilestone$$Clone RVA 0x1668e14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01678e14(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01678e68 + 0x1678e28);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01678e6c + 0x1678e3c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01678e70 + 0x1678e50));
  FUN_01678d48(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.FestMapMilestone$$ProxyInternalMergeFrom RVA 0x1668e74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01678e74(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_0167902c + 0x1678e8c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01679030 + 0x1678ea0));
    func_0x01384978(*(undefined4 *)(_UNK_01679034 + 0x1678eac));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01679038 + 0x1678edc);
    puVar8 = *(undefined4 **)(_UNK_0167903c + 0x1678ee4);
    do {
      if (uVar1 < 0x1b) {
        if (uVar1 == 8) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar2;
        }
        else if (uVar1 == 0x12) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
LAB_01678fc0:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x036520e8(iVar6,param_2,uVar2,*puVar8);
        }
        else if (uVar1 == 0x1a) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
          *(undefined4 *)(param_1 + 0x14) = uVar2;
        }
        else {
LAB_01678f5c:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 == 0x20) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x18) = uVar2;
      }
      else {
        if (uVar1 == 0x2a) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x1c);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
          goto LAB_01678fc0;
        }
        if (uVar1 != 0x30) goto LAB_01678f5c;
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x20) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.FestMapMilestone$$get_XXX_RowIdentifier RVA 0x1669040 =====

undefined4 FUN_01679040(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// ===== fat.rawdata.FestMapMilestone$$set_XXX_RowIdentifier RVA 0x1669048 =====

void FUN_01679048(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



// ===== fat.rawdata.FestMapMilestone$$.cctor RVA 0x1669050 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01679050(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016790dc + 0x1679060);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016790e0 + 0x1679074));
    func_0x01384978(*(undefined4 *)(_UNK_016790e4 + 0x1679080));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_016790e8 + 0x1679094);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_016790ec + 0x16790a4);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


