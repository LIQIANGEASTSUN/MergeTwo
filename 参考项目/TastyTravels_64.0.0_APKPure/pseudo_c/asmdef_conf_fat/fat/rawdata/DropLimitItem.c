/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.DropLimitItem$$.ctor RVA 0x1939690 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01949690(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01949758 + 0x19496a4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0194975c + 0x19496b8));
    func_0x01384978(*(undefined4 *)(_UNK_01949760 + 0x19496c4));
    func_0x01384978(*(undefined4 *)(_UNK_01949764 + 0x19496d0));
    func_0x01384978(*(undefined4 *)(_UNK_01949768 + 0x19496dc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0194976c + 0x19496f0));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_01949770 + 0x1949704));
  piVar2 = *(int **)(_UNK_01949774 + 0x1949718);
  param_1[4] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01949778 + 0x1949738));
                    /* WARNING: Could not recover jumptable at 0x01949754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.DropLimitItem$$.ctor RVA 0x193977c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0194977c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  
  pcVar5 = (char *)(_UNK_01949818 + 0x1949794);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0194981c + 0x19497a8));
    *pcVar5 = '\x01';
  }
  FUN_01949690(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,**(undefined4 **)(_UNK_01949820 + 0x19497e8));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar7 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.DropLimitItem$$Clone RVA 0x1939824 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01949824(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01949878 + 0x1949838);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0194987c + 0x194984c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01949880 + 0x1949860));
  FUN_0194977c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.DropLimitItem$$ProxyInternalMergeFrom RVA 0x1939884 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01949884(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_019499f8 + 0x194989c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019499fc + 0x19498b0));
    func_0x01384978(*(undefined4 *)(_UNK_01949a00 + 0x19498bc));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01949a04 + 0x19498ec);
    puVar8 = *(undefined4 **)(_UNK_01949a08 + 0x19498f4);
    do {
      if (uVar1 < 0x11) {
        if (uVar1 == 8) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar2;
        }
        else if (uVar1 == 0x10) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x14) = uVar2;
        }
        else {
LAB_01949980:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 == 0x18) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x18) = uVar2;
      }
      else if (uVar1 == 0x20) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x1c) = uVar2;
      }
      else {
        if (uVar1 != 0x2a) goto LAB_01949980;
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



// ===== fat.rawdata.DropLimitItem$$get_XXX_RowIdentifier RVA 0x1939a0c =====

undefined4 FUN_01949a0c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== fat.rawdata.DropLimitItem$$set_XXX_RowIdentifier RVA 0x1939a14 =====

void FUN_01949a14(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== fat.rawdata.DropLimitItem$$.cctor RVA 0x1939a1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01949a1c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01949a90 + 0x1949a2c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01949a94 + 0x1949a40));
    func_0x01384978(*(undefined4 *)(_UNK_01949a98 + 0x1949a4c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01949a9c + 0x1949a60);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01949aa0 + 0x1949a70);
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


