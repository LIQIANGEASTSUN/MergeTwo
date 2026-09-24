/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.MergeMixCost$$.ctor RVA 0x16d9ce8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016e9ce8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_016e9e38 + 0x16e9cfc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016e9e3c + 0x16e9d10));
    func_0x01384978(*(undefined4 *)(_UNK_016e9e40 + 0x16e9d1c));
    func_0x01384978(*(undefined4 *)(_UNK_016e9e44 + 0x16e9d28));
    func_0x01384978(*(undefined4 *)(_UNK_016e9e48 + 0x16e9d34));
    func_0x01384978(*(undefined4 *)(_UNK_016e9e4c + 0x16e9d40));
    func_0x01384978(*(undefined4 *)(_UNK_016e9e50 + 0x16e9d4c));
    func_0x01384978(*(undefined4 *)(_UNK_016e9e54 + 0x16e9d58));
    func_0x01384978(*(undefined4 *)(_UNK_016e9e58 + 0x16e9d64));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016e9e5c + 0x16e9d78));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_016e9e60 + 0x16e9d8c));
  puVar2 = *(undefined4 **)(_UNK_016e9e64 + 0x16e9da0);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_016e9e68 + 0x16e9db8));
  puVar2 = *(undefined4 **)(_UNK_016e9e6c + 0x16e9dcc);
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x034614f8(iVar1,**(undefined4 **)(_UNK_016e9e70 + 0x16e9de4));
  piVar3 = *(int **)(_UNK_016e9e74 + 0x16e9df8);
  param_1[6] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016e9e78 + 0x16e9e18));
                    /* WARNING: Could not recover jumptable at 0x016e9e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.MergeMixCost$$.ctor RVA 0x16d9e7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016e9e7c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_016e9f74 + 0x16e9e94);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016e9f78 + 0x16e9ea8));
    func_0x01384978(*(undefined4 *)(_UNK_016e9f7c + 0x16e9eb4));
    func_0x01384978(*(undefined4 *)(_UNK_016e9f80 + 0x16e9ec0));
    *pcVar3 = '\x01';
  }
  FUN_016e9ce8(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_016e9f84 + 0x16e9f00));
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,**(undefined4 **)(_UNK_016e9f88 + 0x16e9f28));
  iVar4 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0345e8e4(iVar4,**(undefined4 **)(_UNK_016e9f8c + 0x16e9f50));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.MergeMixCost$$Clone RVA 0x16d9f90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016e9f90(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016e9fe4 + 0x16e9fa4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016e9fe8 + 0x16e9fb8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016e9fec + 0x16e9fcc));
  FUN_016e9e7c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.MergeMixCost$$ProxyInternalMergeFrom RVA 0x16d9ff0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016e9ff0(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_016ea1e0 + 0x16ea00c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016ea1e4 + 0x16ea020));
    func_0x01384978(*(undefined4 *)(_UNK_016ea1e8 + 0x16ea02c));
    func_0x01384978(*(undefined4 *)(_UNK_016ea1ec + 0x16ea038));
    func_0x01384978(*(undefined4 *)(_UNK_016ea1f0 + 0x16ea044));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016ea1f4 + 0x16ea074);
    puVar8 = *(undefined4 **)(_UNK_016ea1f8 + 0x16ea07c);
    puVar9 = *(undefined4 **)(_UNK_016ea1fc + 0x16ea084);
    do {
      if (uVar1 < 0x11) {
        if (uVar1 == 8) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar3;
        }
        else {
          if (uVar1 == 0x10) goto LAB_016ea104;
LAB_016ea14c:
          uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar3;
        }
      }
      else if (uVar1 == 0x12) {
LAB_016ea104:
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
      else if (uVar1 == 0x1a) {
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x18);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x034604a8(iVar6,param_2,uVar3,*puVar9);
      }
      else {
        if (uVar1 != 0x22) goto LAB_016ea14c;
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
        func_0x036520e8(iVar6,param_2,uVar3,**(undefined4 **)(_UNK_016ea200 + 0x16ea0f8));
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.MergeMixCost$$get_XXX_RowIdentifier RVA 0x16da204 =====

undefined4 FUN_016ea204(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ===== fat.rawdata.MergeMixCost$$set_XXX_RowIdentifier RVA 0x16da20c =====

void FUN_016ea20c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



// ===== fat.rawdata.MergeMixCost$$.cctor RVA 0x16da214 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016ea214(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_016ea32c + 0x16ea228);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016ea330 + 0x16ea23c));
    func_0x01384978(*(undefined4 *)(_UNK_016ea334 + 0x16ea248));
    func_0x01384978(*(undefined4 *)(_UNK_016ea338 + 0x16ea254));
    func_0x01384978(*(undefined4 *)(_UNK_016ea33c + 0x16ea260));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_016ea340 + 0x16ea274);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_016ea344 + 0x16ea284);
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_016ea348 + 0x16ea2ec));
  func_0x0244f990(uVar3,uVar1,uVar2,0x1a,**(undefined4 **)(_UNK_016ea34c + 0x16ea30c));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar3;
  return;
}


