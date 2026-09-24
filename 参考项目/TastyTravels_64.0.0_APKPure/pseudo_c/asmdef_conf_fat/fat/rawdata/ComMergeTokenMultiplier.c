/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComMergeTokenMultiplier$$.ctor RVA 0x1925b44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01935b44(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01935c70 + 0x1935b58);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01935c74 + 0x1935b6c));
    func_0x01384978(*(undefined4 *)(_UNK_01935c78 + 0x1935b78));
    func_0x01384978(*(undefined4 *)(_UNK_01935c7c + 0x1935b84));
    func_0x01384978(*(undefined4 *)(_UNK_01935c80 + 0x1935b90));
    func_0x01384978(*(undefined4 *)(_UNK_01935c84 + 0x1935b9c));
    func_0x01384978(*(undefined4 *)(_UNK_01935c88 + 0x1935ba8));
    func_0x01384978(*(undefined4 *)(_UNK_01935c8c + 0x1935bb4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01935c90 + 0x1935bc8));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_01935c94 + 0x1935bdc));
  uVar2 = **(undefined4 **)(_UNK_01935c98 + 0x1935bf0);
  piVar3 = *(int **)(_UNK_01935c9c + 0x1935bfc);
  param_1[4] = iVar1;
  iVar1 = *piVar3;
  param_1[7] = iVar1;
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_01935ca0 + 0x1935c1c));
  piVar3 = *(int **)(_UNK_01935ca4 + 0x1935c30);
  param_1[9] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01935ca8 + 0x1935c50));
                    /* WARNING: Could not recover jumptable at 0x01935c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComMergeTokenMultiplier$$.ctor RVA 0x1925cac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01935cac(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  
  pcVar5 = (char *)(_UNK_01935d84 + 0x1935cc4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01935d88 + 0x1935cd8));
    func_0x01384978(*(undefined4 *)(_UNK_01935d8c + 0x1935ce4));
    *pcVar5 = '\x01';
  }
  FUN_01935b44(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,**(undefined4 **)(_UNK_01935d90 + 0x1935d24));
  iVar6 = *(int *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar6,**(undefined4 **)(_UNK_01935d94 + 0x1935d58));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.ComMergeTokenMultiplier$$Clone RVA 0x1925d98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01935d98(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01935dec + 0x1935dac);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01935df0 + 0x1935dc0));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01935df4 + 0x1935dd4));
  FUN_01935cac(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComMergeTokenMultiplier$$ProxyInternalMergeFrom RVA 0x1925df8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01935df8(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01936054 + 0x1935e14);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01936058 + 0x1935e28));
    func_0x01384978(*(undefined4 *)(_UNK_0193605c + 0x1935e34));
    func_0x01384978(*(undefined4 *)(_UNK_01936060 + 0x1935e40));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01936064 + 0x1935e70);
    puVar8 = *(undefined4 **)(_UNK_01936068 + 0x1935e78);
    puVar9 = *(undefined4 **)(_UNK_0193606c + 0x1935e80);
    do {
      if (uVar1 < 0x1b) {
        if (uVar1 < 0x11) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else {
            if (uVar1 != 0x10) goto LAB_01935f7c;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x18) = uVar2;
          }
        }
        else if ((uVar1 | 2) == 0x1a) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x24);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0364b0e0(iVar6,param_2,uVar2,*puVar8);
        }
        else {
LAB_01935f7c:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 < 0x2b) {
        if (uVar1 == 0x20) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x28) = uVar2;
        }
        else {
          if (uVar1 != 0x2a) goto LAB_01935f7c;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
      }
      else if (uVar1 == 0x32) {
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
        func_0x036520e8(iVar6,param_2,uVar2,*puVar9);
      }
      else if (uVar1 == 0x3a) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
        *(undefined4 *)(param_1 + 0x20) = uVar2;
      }
      else {
        if (uVar1 != 0x40) goto LAB_01935f7c;
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x14) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ComMergeTokenMultiplier$$get_XXX_RowIdentifier RVA 0x1926070 =====

undefined4 FUN_01936070(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ===== fat.rawdata.ComMergeTokenMultiplier$$set_XXX_RowIdentifier RVA 0x1926078 =====

void FUN_01936078(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// ===== fat.rawdata.ComMergeTokenMultiplier$$.cctor RVA 0x1926080 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01936080(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0193610c + 0x1936090);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01936110 + 0x19360a4));
    func_0x01384978(*(undefined4 *)(_UNK_01936114 + 0x19360b0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01936118 + 0x19360c4);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0193611c + 0x19360d4);
  uVar1 = func_0x0244f954(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


