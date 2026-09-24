/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.GirdRewardInfo$$.ctor RVA 0x178a608 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179a608(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0179a6d0 + 0x179a61c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179a6d4 + 0x179a630));
    func_0x01384978(*(undefined4 *)(_UNK_0179a6d8 + 0x179a63c));
    func_0x01384978(*(undefined4 *)(_UNK_0179a6dc + 0x179a648));
    func_0x01384978(*(undefined4 *)(_UNK_0179a6e0 + 0x179a654));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0179a6e4 + 0x179a668));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0179a6e8 + 0x179a67c));
  piVar2 = *(int **)(_UNK_0179a6ec + 0x179a690);
  param_1[5] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0179a6f0 + 0x179a6b0));
                    /* WARNING: Could not recover jumptable at 0x0179a6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.GirdRewardInfo$$.ctor RVA 0x178a6f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179a6f4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_0179a78c + 0x179a70c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179a790 + 0x179a720));
    *pcVar3 = '\x01';
  }
  FUN_0179a608(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x14);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_0179a794 + 0x179a768));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.gamekitdata.GirdRewardInfo$$Clone RVA 0x178a798 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0179a798(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0179a7ec + 0x179a7ac);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179a7f0 + 0x179a7c0));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0179a7f4 + 0x179a7d4));
  FUN_0179a6f4(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.GirdRewardInfo$$InternalWriteTo RVA 0x178a7f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179a7f8(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_0179a904 + 0x179a810);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179a908 + 0x179a824));
    func_0x01384978(*(undefined4 *)(_UNK_0179a90c + 0x179a830));
    *pcVar2 = '\x01';
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    func_0x01485198(param_2,8,0);
    func_0x014850b8(param_2,*(undefined1 *)(param_1 + 0xc),0);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x01485198(param_2,0x10,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x10),0);
  }
  piVar4 = *(int **)(_UNK_0179a910 + 0x179a89c);
  iVar3 = *(int *)(param_1 + 0x14);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x036526e0(iVar3,param_2,uVar5,**(undefined4 **)(_UNK_0179a914 + 0x179a8dc));
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)&UNK_044e88b4)(*(int *)(param_1 + 8),param_2,0);
    return;
  }
  return;
}



// ===== fat.gamekitdata.GirdRewardInfo$$ProxyCalculateSize RVA 0x178a918 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0179a918(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  
  pcVar1 = (char *)(_UNK_0179aa1c + 0x179a92c);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179aa20 + 0x179a940));
    func_0x01384978(*(undefined4 *)(_UNK_0179aa24 + 0x179a94c));
    func_0x01384978(*(undefined4 *)(_UNK_0179aa28 + 0x179a958));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x10);
  uVar6 = (uint)*(byte *)(param_1 + 0xc) << 1;
  if (iVar2 != 0) {
    if (*(int *)(**(int **)(_UNK_0179aa2c + 0x179a980) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar2,0);
    uVar6 = (uVar6 | 1) + iVar2;
  }
  piVar4 = *(int **)(_UNK_0179aa30 + 0x179a9b0);
  iVar3 = *(int *)(param_1 + 0x14);
  iVar2 = *piVar4;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar4;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0365231c(iVar3,uVar5,**(undefined4 **)(_UNK_0179aa34 + 0x179a9ec));
  iVar2 = iVar2 + uVar6;
  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = func_0x0244f9bc(*(int *)(param_1 + 8),0);
    iVar2 = iVar3 + iVar2;
  }
  return iVar2;
}



// ===== fat.gamekitdata.GirdRewardInfo$$ProxyInternalMergeFrom RVA 0x178aa38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179aa38(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  pcVar2 = (char *)(_UNK_0179ab60 + 0x179aa50);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179ab64 + 0x179aa64));
    func_0x01384978(*(undefined4 *)(_UNK_0179ab68 + 0x179aa70));
    *pcVar2 = '\x01';
  }
  iVar4 = param_2 + 8;
  piVar6 = *(int **)(_UNK_0179ab6c + 0x179aa88);
  puVar7 = *(undefined4 **)(_UNK_0179ab70 + 0x179aa90);
  do {
    while (iVar1 = func_0x01484f58(param_2,iVar4,0), 0xf < iVar1) {
      if (iVar1 == 0x10) {
        uVar3 = func_0x01484f98(param_2,iVar4,0);
        *(undefined4 *)(param_1 + 0x10) = uVar3;
      }
      else if (iVar1 == 0x1a) {
        iVar1 = *piVar6;
        iVar5 = *(int *)(param_1 + 0x14);
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar6;
        }
        uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar5,param_2,uVar3,*puVar7);
      }
      else {
LAB_0179ab44:
        uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar3;
      }
    }
    if (iVar1 != 8) {
      if (iVar1 == 0) {
        return;
      }
      goto LAB_0179ab44;
    }
    lVar8 = func_0x01484f88(param_2,iVar4,0);
    *(bool *)(param_1 + 0xc) = lVar8 != 0;
  } while( true );
}



// ===== fat.gamekitdata.GirdRewardInfo$$.cctor RVA 0x178ab74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179ab74(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  
  pcVar3 = (char *)(_UNK_0179acac + 0x179ab84);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179acb0 + 0x179ab98));
    func_0x01384978(*(undefined4 *)(_UNK_0179acb4 + 0x179aba4));
    func_0x01384978(*(undefined4 *)(_UNK_0179acb8 + 0x179abb0));
    func_0x01384978(*(undefined4 *)(_UNK_0179acbc + 0x179abbc));
    func_0x01384978(*(undefined4 *)(_UNK_0179acc0 + 0x179abc8));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_0179acc4 + 0x179abdc);
  **(undefined4 **)(*piVar4 + 0x5c) = **(undefined4 **)(_UNK_0179acc8 + 0x179abec);
  if (*(int *)(**(int **)(_UNK_0179accc + 0x179abfc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar5 = **(int **)(_UNK_0179acd0 + 0x179ac18);
  iVar1 = *(int *)(iVar5 + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = *(int *)(iVar5 + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0();
  }
  uVar2 = func_0x02fdc9f0(0x1a,**(undefined4 **)(iVar1 + 0x5c),
                          **(undefined4 **)(_UNK_0179acd4 + 0x179ac90));
  *(undefined4 *)(*(int *)(*piVar4 + 0x5c) + 4) = uVar2;
  return;
}


