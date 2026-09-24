/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ObjTool$$.ctor RVA 0x16fe04c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0170e04c(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0170e134 + 0x170e060);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0170e138 + 0x170e074));
    func_0x01384978(*(undefined4 *)(_UNK_0170e13c + 0x170e080));
    func_0x01384978(*(undefined4 *)(_UNK_0170e140 + 0x170e08c));
    func_0x01384978(*(undefined4 *)(_UNK_0170e144 + 0x170e098));
    func_0x01384978(*(undefined4 *)(_UNK_0170e148 + 0x170e0a4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0170e14c + 0x170e0b8));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0170e150 + 0x170e0cc));
  piVar2 = *(int **)(_UNK_0170e158 + 0x170e0ec);
  iVar3 = *(int *)(**(int **)(_UNK_0170e154 + 0x170e0e0) + 0x74);
  param_1[4] = iVar1;
  iVar1 = *piVar2;
  param_1[9] = iVar1;
  param_1[5] = iVar1;
  if (iVar3 == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0170e15c + 0x170e114));
                    /* WARNING: Could not recover jumptable at 0x0170e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ObjTool$$.ctor RVA 0x16fe160 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0170e160(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  pcVar6 = (char *)(_UNK_0170e218 + 0x170e178);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0170e21c + 0x170e18c));
    *pcVar6 = '\x01';
  }
  FUN_0170e04c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar7,**(undefined4 **)(_UNK_0170e220 + 0x170e1cc));
  uVar9 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar8 = *(undefined4 *)(param_2 + 0x20);
  uVar1 = *(undefined1 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar8;
  uVar2 = func_0x0244f914(uVar9,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.ObjTool$$Clone RVA 0x16fe224 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0170e224(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0170e278 + 0x170e238);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0170e27c + 0x170e24c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0170e280 + 0x170e260));
  FUN_0170e160(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ObjTool$$ProxyInternalMergeFrom RVA 0x16fe284 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0170e284(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  pcVar4 = (char *)(_UNK_0170e470 + 0x170e29c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0170e474 + 0x170e2b0));
    func_0x01384978(*(undefined4 *)(_UNK_0170e478 + 0x170e2bc));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0170e47c + 0x170e2ec);
    puVar8 = *(undefined4 **)(_UNK_0170e480 + 0x170e2f4);
    do {
      if (uVar1 < 0x19) {
        if (uVar1 == 8) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar3;
        }
        else if (uVar1 == 0x12) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          uVar3 = func_0x01484fc8(param_2,iVar5,uVar3,0);
          *(undefined4 *)(param_1 + 0x14) = uVar3;
        }
        else {
          if (uVar1 != 0x18) goto LAB_0170e3b8;
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x18) = lVar9 != 0;
        }
      }
      else if (uVar1 < 0x29) {
        if (uVar1 == 0x20) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x20) = uVar3;
        }
        else if (uVar1 == 0x28) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar3;
        }
        else {
LAB_0170e3b8:
          uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar3;
        }
      }
      else if (uVar1 == 0x32) {
        uVar3 = func_0x01484f98(param_2,iVar5,0);
        uVar3 = func_0x01484fc8(param_2,iVar5,uVar3,0);
        *(undefined4 *)(param_1 + 0x24) = uVar3;
      }
      else {
        if (uVar1 != 0x3a) goto LAB_0170e3b8;
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
        func_0x036520e8(iVar6,param_2,uVar3,*puVar8);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ObjTool$$get_XXX_RowIdentifier RVA 0x16fe484 =====

undefined4 FUN_0170e484(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ===== fat.rawdata.ObjTool$$set_XXX_RowIdentifier RVA 0x16fe48c =====

void FUN_0170e48c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



// ===== fat.rawdata.ObjTool$$.cctor RVA 0x16fe494 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0170e494(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0170e508 + 0x170e4a4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0170e50c + 0x170e4b8));
    func_0x01384978(*(undefined4 *)(_UNK_0170e510 + 0x170e4c4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0170e514 + 0x170e4d8);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0170e518 + 0x170e4e8);
  uVar1 = func_0x0244f954(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


