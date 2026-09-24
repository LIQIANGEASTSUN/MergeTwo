/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventWishDrop$$.ctor RVA 0x1658a0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01668a0c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_01668b30 + 0x1668a20);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01668b34 + 0x1668a34));
    func_0x01384978(*(undefined4 *)(_UNK_01668b38 + 0x1668a40));
    func_0x01384978(*(undefined4 *)(_UNK_01668b3c + 0x1668a4c));
    func_0x01384978(*(undefined4 *)(_UNK_01668b40 + 0x1668a58));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_01668b44 + 0x1668a6c);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_01668b48 + 0x1668a80);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_01668b4c + 0x1668af0);
  param_1[8] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01668b50 + 0x1668b10));
                    /* WARNING: Could not recover jumptable at 0x01668b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventWishDrop$$.ctor RVA 0x1658b54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01668b54(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_01668c64 + 0x1668b6c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01668c68 + 0x1668b80));
    *pcVar3 = '\x01';
  }
  FUN_01668a0c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_01668c6c + 0x1668bc4);
  uVar1 = func_0x03651cc4(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,*puVar5);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventWishDrop$$Clone RVA 0x1658c70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01668c70(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01668cc4 + 0x1668c84);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01668cc8 + 0x1668c98));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01668ccc + 0x1668cac));
  FUN_01668b54(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventWishDrop$$ProxyInternalMergeFrom RVA 0x1658cd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01668cd0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar3 = (char *)(_UNK_01668ea4 + 0x1668ce8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01668ea8 + 0x1668cfc));
    func_0x01384978(*(undefined4 *)(_UNK_01668eac + 0x1668d08));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01668eb0 + 0x1668d38);
    puVar8 = *(undefined4 **)(_UNK_01668eb4 + 0x1668d40);
    do {
      if (uVar1 < 0x1b) {
        if (uVar1 != 8) {
          if (uVar1 == 0x12) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x14);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
          }
          else {
            if (uVar1 != 0x1a) {
LAB_01668dc4:
              uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
              *(undefined4 *)(param_1 + 8) = uVar4;
              goto LAB_01668e88;
            }
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x18);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
          }
          goto LAB_01668e68;
        }
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0xc) = uVar4;
      }
      else {
        if (uVar1 == 0x22) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x20);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
        }
        else if (uVar1 == 0x32) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x1c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
        }
        else {
          if (uVar1 != 0x3a) goto LAB_01668dc4;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
        }
LAB_01668e68:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar6,param_2,uVar4,*puVar8);
      }
LAB_01668e88:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventWishDrop$$get_XXX_RowIdentifier RVA 0x1658eb8 =====

undefined4 FUN_01668eb8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// ===== fat.rawdata.EventWishDrop$$set_XXX_RowIdentifier RVA 0x1658ec0 =====

void FUN_01668ec0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



// ===== fat.rawdata.EventWishDrop$$.cctor RVA 0x1658ec8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01668ec8(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01668f9c + 0x1668ed8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01668fa0 + 0x1668eec));
    func_0x01384978(*(undefined4 *)(_UNK_01668fa4 + 0x1668ef8));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01668fa8 + 0x1668f0c);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01668fac + 0x1668f1c);
  uVar1 = func_0x0244f954(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f954(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  return;
}


