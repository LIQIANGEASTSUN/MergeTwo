/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.TileBingoGroupDetail$$get_XXX_RowIdentifier RVA 0x172eeec =====

undefined4 FUN_0173eeec(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== fat.rawdata.TileBingoGroupDetail$$set_XXX_RowIdentifier RVA 0x172eef4 =====

void FUN_0173eef4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== fat.rawdata.TileBingoGroupDetail$$.ctor RVA 0x172eefc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0173eefc(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_0173f01c + 0x173ef10);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0173f020 + 0x173ef24));
    func_0x01384978(*(undefined4 *)(_UNK_0173f024 + 0x173ef30));
    func_0x01384978(*(undefined4 *)(_UNK_0173f028 + 0x173ef3c));
    func_0x01384978(*(undefined4 *)(_UNK_0173f02c + 0x173ef48));
    func_0x01384978(*(undefined4 *)(_UNK_0173f030 + 0x173ef54));
    func_0x01384978(*(undefined4 *)(_UNK_0173f034 + 0x173ef60));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0173f038 + 0x173ef74));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0173f03c + 0x173ef88));
  puVar5 = *(undefined4 **)(_UNK_0173f040 + 0x173ef9c);
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_0173f044 + 0x173efb4);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_0173f048 + 0x173efdc);
  param_1[7] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0173f04c + 0x173effc));
                    /* WARNING: Could not recover jumptable at 0x0173f018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.TileBingoGroupDetail$$.ctor RVA 0x172f050 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0173f050(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_0173f134 + 0x173f068);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0173f138 + 0x173f07c));
    func_0x01384978(*(undefined4 *)(_UNK_0173f13c + 0x173f088));
    *pcVar3 = '\x01';
  }
  FUN_0173eefc(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_0173f140 + 0x173f0c8));
  iVar4 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_0173f144 + 0x173f0f4);
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.TileBingoGroupDetail$$Clone RVA 0x172f148 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0173f148(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0173f19c + 0x173f15c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0173f1a0 + 0x173f170));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0173f1a4 + 0x173f184));
  FUN_0173f050(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.TileBingoGroupDetail$$ProxyInternalMergeFrom RVA 0x172f1a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0173f1a8(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_0173f368 + 0x173f1c4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0173f36c + 0x173f1d8));
    func_0x01384978(*(undefined4 *)(_UNK_0173f370 + 0x173f1e4));
    func_0x01384978(*(undefined4 *)(_UNK_0173f374 + 0x173f1f0));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0173f378 + 0x173f220);
    puVar8 = *(undefined4 **)(_UNK_0173f37c + 0x173f228);
    puVar9 = *(undefined4 **)(_UNK_0173f380 + 0x173f230);
    do {
      if (uVar1 < 0x19) {
        if (uVar1 == 8) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x10) = uVar3;
        }
        else {
          if (uVar1 != 0x12) {
            if (uVar1 != 0x18) goto LAB_0173f2d4;
            goto LAB_0173f28c;
          }
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x14);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x036520e8(iVar6,param_2,uVar3,*puVar8);
        }
      }
      else {
        if (uVar1 == 0x1a) {
LAB_0173f28c:
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x18);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
        }
        else {
          if (uVar1 != 0x20 && uVar1 != 0x22) {
LAB_0173f2d4:
            uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar3;
            goto LAB_0173f348;
          }
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x1c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
        }
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0364b0e0(iVar6,param_2,uVar3,*puVar9);
      }
LAB_0173f348:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.TileBingoGroupDetail$$.cctor RVA 0x172f384 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0173f384(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0173f428 + 0x173f394);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0173f42c + 0x173f3a8));
    func_0x01384978(*(undefined4 *)(_UNK_0173f430 + 0x173f3b4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0173f434 + 0x173f3c8);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0173f438 + 0x173f3d8);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}


