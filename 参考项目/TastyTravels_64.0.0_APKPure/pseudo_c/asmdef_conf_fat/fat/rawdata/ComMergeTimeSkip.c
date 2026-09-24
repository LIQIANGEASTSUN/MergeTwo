/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComMergeTimeSkip$$.ctor RVA 0x19252d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019352d8(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_019353a0 + 0x19352ec);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019353a4 + 0x1935300));
    func_0x01384978(*(undefined4 *)(_UNK_019353a8 + 0x193530c));
    func_0x01384978(*(undefined4 *)(_UNK_019353ac + 0x1935318));
    func_0x01384978(*(undefined4 *)(_UNK_019353b0 + 0x1935324));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_019353b4 + 0x1935338));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_019353b8 + 0x193534c));
  piVar2 = *(int **)(_UNK_019353bc + 0x1935360);
  param_1[4] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_019353c0 + 0x1935380));
                    /* WARNING: Could not recover jumptable at 0x0193539c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComMergeTimeSkip$$.ctor RVA 0x19253c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019353c4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_0193545c + 0x19353dc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01935460 + 0x19353f0));
    *pcVar4 = '\x01';
  }
  FUN_019352d8(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,**(undefined4 **)(_UNK_01935464 + 0x1935430));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.ComMergeTimeSkip$$Clone RVA 0x1925468 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01935468(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_019354bc + 0x193547c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019354c0 + 0x1935490));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_019354c4 + 0x19354a4));
  FUN_019353c4(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComMergeTimeSkip$$ProxyInternalMergeFrom RVA 0x19254c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019354c8(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  pcVar2 = (char *)(_UNK_019355e8 + 0x19354e0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019355ec + 0x19354f4));
    func_0x01384978(*(undefined4 *)(_UNK_019355f0 + 0x1935500));
    *pcVar2 = '\x01';
  }
  iVar4 = param_2 + 8;
  piVar6 = *(int **)(_UNK_019355f4 + 0x1935518);
  puVar7 = *(undefined4 **)(_UNK_019355f8 + 0x1935520);
  do {
    while (iVar1 = func_0x01484f58(param_2,iVar4,0), 0xf < iVar1) {
      if (iVar1 == 0x10) {
        uVar3 = func_0x01484f98(param_2,iVar4,0);
        *(undefined4 *)(param_1 + 0x14) = uVar3;
      }
      else if (iVar1 == 0x1a) {
        iVar1 = *piVar6;
        iVar5 = *(int *)(param_1 + 0x10);
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
LAB_019355cc:
        uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar3;
      }
    }
    if (iVar1 != 8) {
      if (iVar1 == 0) {
        return;
      }
      goto LAB_019355cc;
    }
    uVar3 = func_0x01484f98(param_2,iVar4,0);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
  } while( true );
}



// ===== fat.rawdata.ComMergeTimeSkip$$get_XXX_RowIdentifier RVA 0x19255fc =====

undefined4 FUN_019355fc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== fat.rawdata.ComMergeTimeSkip$$set_XXX_RowIdentifier RVA 0x1925604 =====

void FUN_01935604(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// ===== fat.rawdata.ComMergeTimeSkip$$.cctor RVA 0x192560c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0193560c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01935680 + 0x193561c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01935684 + 0x1935630));
    func_0x01384978(*(undefined4 *)(_UNK_01935688 + 0x193563c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0193568c + 0x1935650);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01935690 + 0x1935660);
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


