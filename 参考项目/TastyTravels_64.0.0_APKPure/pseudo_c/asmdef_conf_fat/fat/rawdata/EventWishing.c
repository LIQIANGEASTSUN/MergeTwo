/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventWishing$$.ctor RVA 0x165a6e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0166a6e8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_0166a854 + 0x166a6fc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0166a858 + 0x166a710));
    func_0x01384978(*(undefined4 *)(_UNK_0166a85c + 0x166a71c));
    func_0x01384978(*(undefined4 *)(_UNK_0166a860 + 0x166a728));
    func_0x01384978(*(undefined4 *)(_UNK_0166a864 + 0x166a734));
    func_0x01384978(*(undefined4 *)(_UNK_0166a868 + 0x166a740));
    func_0x01384978(*(undefined4 *)(_UNK_0166a86c + 0x166a74c));
    func_0x01384978(*(undefined4 *)(_UNK_0166a870 + 0x166a758));
    func_0x01384978(*(undefined4 *)(_UNK_0166a874 + 0x166a764));
    func_0x01384978(*(undefined4 *)(_UNK_0166a878 + 0x166a770));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0166a87c + 0x166a784));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0166a880 + 0x166a798));
  puVar2 = *(undefined4 **)(_UNK_0166a884 + 0x166a7ac);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_0166a888 + 0x166a7c4));
  iVar4 = **(int **)(_UNK_0166a88c + 0x166a7d8);
  puVar2 = *(undefined4 **)(_UNK_0166a890 + 0x166a7e4);
  param_1[7] = iVar1;
  param_1[0xb] = iVar4;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x034614f8(iVar1,**(undefined4 **)(_UNK_0166a894 + 0x166a800));
  piVar3 = *(int **)(_UNK_0166a898 + 0x166a814);
  param_1[0xc] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0166a89c + 0x166a834));
                    /* WARNING: Could not recover jumptable at 0x0166a850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventWishing$$.ctor RVA 0x165a8a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0166a8a0(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  
  pcVar5 = (char *)(_UNK_0166a9bc + 0x166a8b8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0166a9c0 + 0x166a8cc));
    func_0x01384978(*(undefined4 *)(_UNK_0166a9c4 + 0x166a8d8));
    func_0x01384978(*(undefined4 *)(_UNK_0166a9c8 + 0x166a8e4));
    *pcVar5 = '\x01';
  }
  FUN_0166a6e8(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar6,**(undefined4 **)(_UNK_0166a9cc + 0x166a924));
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  iVar6 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar6,**(undefined4 **)(_UNK_0166a9d0 + 0x166a954));
  iVar6 = *(int *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x2c);
  uVar1 = *(undefined1 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined1 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar7;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0345e8e4(iVar6,**(undefined4 **)(_UNK_0166a9d4 + 0x166a998));
  uVar3 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = func_0x0244f914(uVar3,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.EventWishing$$Clone RVA 0x165a9d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0166a9d8(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0166aa2c + 0x166a9ec);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0166aa30 + 0x166aa00));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0166aa34 + 0x166aa14));
  FUN_0166a8a0(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventWishing$$ProxyInternalMergeFrom RVA 0x165aa38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0166aa38(int param_1,int param_2)

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
  longlong lVar10;
  
  pcVar4 = (char *)(_UNK_0166ad0c + 0x166aa54);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0166ad10 + 0x166aa68));
    func_0x01384978(*(undefined4 *)(_UNK_0166ad14 + 0x166aa74));
    func_0x01384978(*(undefined4 *)(_UNK_0166ad18 + 0x166aa80));
    func_0x01384978(*(undefined4 *)(_UNK_0166ad1c + 0x166aa8c));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0166ad20 + 0x166aabc);
    puVar8 = *(undefined4 **)(_UNK_0166ad24 + 0x166aac4);
    puVar9 = *(undefined4 **)(_UNK_0166ad28 + 0x166aacc);
    do {
      if (uVar1 < 0x23) {
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
LAB_0166abcc:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else if (uVar1 == 0x18) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x18) = uVar2;
        }
        else {
          if (uVar1 != 0x20 && uVar1 != 0x22) goto LAB_0166abcc;
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x1c);
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
      }
      else if (uVar1 < 0x41) {
        if (uVar1 == 0x2a) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
          *(undefined4 *)(param_1 + 0x2c) = uVar2;
        }
        else if (uVar1 == 0x32) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x30);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x034604a8(iVar6,param_2,uVar2,**(undefined4 **)(_UNK_0166ad2c + 0x166ac6c));
        }
        else {
          if (uVar1 != 0x40) goto LAB_0166abcc;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
      }
      else if (uVar1 == 0x48) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x24) = uVar2;
      }
      else if (uVar1 == 0x52) {
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
      else {
        if (uVar1 != 0x58) goto LAB_0166abcc;
        lVar10 = func_0x01484f88(param_2,iVar5,0);
        *(bool *)(param_1 + 0x28) = lVar10 != 0;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventWishing$$get_XXX_RowIdentifier RVA 0x165ad30 =====

undefined4 FUN_0166ad30(int param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



// ===== fat.rawdata.EventWishing$$set_XXX_RowIdentifier RVA 0x165ad38 =====

void FUN_0166ad38(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}



// ===== fat.rawdata.EventWishing$$.cctor RVA 0x165ad40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0166ad40(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_0166ae58 + 0x166ad54);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0166ae5c + 0x166ad68));
    func_0x01384978(*(undefined4 *)(_UNK_0166ae60 + 0x166ad74));
    func_0x01384978(*(undefined4 *)(_UNK_0166ae64 + 0x166ad80));
    func_0x01384978(*(undefined4 *)(_UNK_0166ae68 + 0x166ad8c));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_0166ae6c + 0x166ada0);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_0166ae70 + 0x166adb0);
  uVar1 = func_0x0244f954(0x52,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_0166ae74 + 0x166ae18));
  func_0x0244f990(uVar3,uVar1,uVar2,0x32,**(undefined4 **)(_UNK_0166ae78 + 0x166ae38));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar3;
  return;
}


