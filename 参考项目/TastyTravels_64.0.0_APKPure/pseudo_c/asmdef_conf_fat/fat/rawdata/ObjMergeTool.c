/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ObjMergeTool$$.ctor RVA 0x16f92a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017092a0(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01709368 + 0x17092b4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0170936c + 0x17092c8));
    func_0x01384978(*(undefined4 *)(_UNK_01709370 + 0x17092d4));
    func_0x01384978(*(undefined4 *)(_UNK_01709374 + 0x17092e0));
    func_0x01384978(*(undefined4 *)(_UNK_01709378 + 0x17092ec));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0170937c + 0x1709300));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_01709380 + 0x1709314));
  piVar2 = *(int **)(_UNK_01709384 + 0x1709328);
  param_1[4] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01709388 + 0x1709348));
                    /* WARNING: Could not recover jumptable at 0x01709364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ObjMergeTool$$.ctor RVA 0x16f938c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0170938c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar5 = (char *)(_UNK_01709428 + 0x17093a4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0170942c + 0x17093b8));
    *pcVar5 = '\x01';
  }
  FUN_017092a0(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,**(undefined4 **)(_UNK_01709430 + 0x17093f8));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.ObjMergeTool$$Clone RVA 0x16f9434 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01709434(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01709488 + 0x1709448);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0170948c + 0x170945c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01709490 + 0x1709470));
  FUN_0170938c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ObjMergeTool$$ProxyInternalMergeFrom RVA 0x16f9494 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01709494(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_017095e8 + 0x17094ac);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017095ec + 0x17094c0));
    func_0x01384978(*(undefined4 *)(_UNK_017095f0 + 0x17094cc));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_017095f4 + 0x17094fc);
    puVar8 = *(undefined4 **)(_UNK_017095f8 + 0x1709504);
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
LAB_01709588:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 == 0x18) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x18) = uVar2;
      }
      else {
        if (uVar1 != 0x22) goto LAB_01709588;
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



// ===== fat.rawdata.ObjMergeTool$$get_XXX_RowIdentifier RVA 0x16f95fc =====

undefined4 FUN_017095fc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ===== fat.rawdata.ObjMergeTool$$set_XXX_RowIdentifier RVA 0x16f9604 =====

void FUN_01709604(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



// ===== fat.rawdata.ObjMergeTool$$.cctor RVA 0x16f960c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0170960c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01709680 + 0x170961c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01709684 + 0x1709630));
    func_0x01384978(*(undefined4 *)(_UNK_01709688 + 0x170963c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0170968c + 0x1709650);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01709690 + 0x1709660);
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


