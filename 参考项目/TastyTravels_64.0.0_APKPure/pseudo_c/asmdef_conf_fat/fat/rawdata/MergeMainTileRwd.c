/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.MergeMainTileRwd$$.ctor RVA 0x16d93bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016e93bc(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_016e9498 + 0x16e93d0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016e949c + 0x16e93e4));
    func_0x01384978(*(undefined4 *)(_UNK_016e94a0 + 0x16e93f0));
    func_0x01384978(*(undefined4 *)(_UNK_016e94a4 + 0x16e93fc));
    func_0x01384978(*(undefined4 *)(_UNK_016e94a8 + 0x16e9408));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_016e94ac + 0x16e941c);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_016e94b0 + 0x16e9430);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_016e94b4 + 0x16e9458);
  param_1[6] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016e94b8 + 0x16e9478));
                    /* WARNING: Could not recover jumptable at 0x016e9494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.MergeMainTileRwd$$.ctor RVA 0x16d94bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016e94bc(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_016e957c + 0x16e94d4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016e9580 + 0x16e94e8));
    *pcVar5 = '\x01';
  }
  FUN_016e93bc(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_016e9584 + 0x16e952c);
  uVar2 = func_0x03651cc4(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x18);
  uVar1 = *(undefined1 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined1 *)(param_1 + 0x14) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar6,*puVar7);
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  uVar2 = func_0x0244f914(uVar3,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.MergeMainTileRwd$$Clone RVA 0x16d9588 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016e9588(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016e95dc + 0x16e959c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016e95e0 + 0x16e95b0));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016e95e4 + 0x16e95c4));
  FUN_016e94bc(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.MergeMainTileRwd$$ProxyInternalMergeFrom RVA 0x16d95e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016e95e8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  pcVar3 = (char *)(_UNK_016e9774 + 0x16e9600);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016e9778 + 0x16e9614));
    func_0x01384978(*(undefined4 *)(_UNK_016e977c + 0x16e9620));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016e9780 + 0x16e9650);
    puVar8 = *(undefined4 **)(_UNK_016e9784 + 0x16e9658);
    do {
      if (uVar1 < 0x13) {
        if (uVar1 == 8) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else if (uVar1 == 0x12) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
LAB_016e9718:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x036520e8(iVar6,param_2,uVar4,*puVar8);
        }
        else {
LAB_016e96c4:
          uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
      }
      else if (uVar1 == 0x20) {
        lVar9 = func_0x01484f88(param_2,iVar5,0);
        *(bool *)(param_1 + 0x14) = lVar9 != 0;
      }
      else {
        if (uVar1 == 0x2a) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x18);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
          goto LAB_016e9718;
        }
        if (uVar1 != 0x30) goto LAB_016e96c4;
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x1c) = uVar4;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.MergeMainTileRwd$$get_XXX_RowIdentifier RVA 0x16d9788 =====

undefined4 FUN_016e9788(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== fat.rawdata.MergeMainTileRwd$$set_XXX_RowIdentifier RVA 0x16d9790 =====

void FUN_016e9790(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== fat.rawdata.MergeMainTileRwd$$.cctor RVA 0x16d9798 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016e9798(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016e9824 + 0x16e97a8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016e9828 + 0x16e97bc));
    func_0x01384978(*(undefined4 *)(_UNK_016e982c + 0x16e97c8));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_016e9830 + 0x16e97dc);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_016e9834 + 0x16e97ec);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


