/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventLongOrder$$.ctor RVA 0x15db39c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015eb39c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_015eb4d0 + 0x15eb3b0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015eb4d4 + 0x15eb3c4));
    func_0x01384978(*(undefined4 *)(_UNK_015eb4d8 + 0x15eb3d0));
    func_0x01384978(*(undefined4 *)(_UNK_015eb4dc + 0x15eb3dc));
    func_0x01384978(*(undefined4 *)(_UNK_015eb4e0 + 0x15eb3e8));
    func_0x01384978(*(undefined4 *)(_UNK_015eb4e4 + 0x15eb3f4));
    func_0x01384978(*(undefined4 *)(_UNK_015eb4e8 + 0x15eb400));
    func_0x01384978(*(undefined4 *)(_UNK_015eb4ec + 0x15eb40c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015eb4f0 + 0x15eb420));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_015eb4f4 + 0x15eb434));
  uVar2 = **(undefined4 **)(_UNK_015eb4f8 + 0x15eb448);
  piVar6 = *(int **)(_UNK_015eb4fc + 0x15eb454);
  param_1[4] = iVar1;
  param_1[7] = *piVar6;
  iVar1 = func_0x01384be4(uVar2);
  func_0x034673e0(iVar1,**(undefined4 **)(_UNK_015eb500 + 0x15eb470));
  piVar3 = *(int **)(_UNK_015eb504 + 0x15eb484);
  iVar4 = *piVar6;
  param_1[0xb] = iVar1;
  iVar1 = *piVar3;
  param_1[0xc] = iVar4;
  param_1[0xd] = iVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015eb508 + 0x15eb4b0));
                    /* WARNING: Could not recover jumptable at 0x015eb4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventLongOrder$$.ctor RVA 0x15db50c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015eb50c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  pcVar4 = (char *)(_UNK_015eb610 + 0x15eb524);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015eb614 + 0x15eb538));
    func_0x01384978(*(undefined4 *)(_UNK_015eb618 + 0x15eb544));
    *pcVar4 = '\x01';
  }
  FUN_015eb39c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar5,**(undefined4 **)(_UNK_015eb61c + 0x15eb584));
  iVar5 = *(int *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  uVar8 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar8;
  *(undefined4 *)(param_1 + 0x28) = uVar7;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03464804(iVar5,**(undefined4 **)(_UNK_015eb620 + 0x15eb5d8));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar8 = *(undefined4 *)(param_2 + 0x3c);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  uVar6 = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  *(undefined4 *)(param_1 + 0x3c) = uVar8;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventLongOrder$$Clone RVA 0x15db624 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015eb624(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015eb678 + 0x15eb638);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015eb67c + 0x15eb64c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015eb680 + 0x15eb660));
  FUN_015eb50c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventLongOrder$$ProxyInternalMergeFrom RVA 0x15db684 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015eb684(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_015eb99c + 0x15eb6a0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015eb9a0 + 0x15eb6b4));
    func_0x01384978(*(undefined4 *)(_UNK_015eb9a4 + 0x15eb6c0));
    func_0x01384978(*(undefined4 *)(_UNK_015eb9a8 + 0x15eb6cc));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015eb9ac + 0x15eb6fc);
    puVar8 = *(undefined4 **)(_UNK_015eb9b0 + 0x15eb704);
    puVar9 = *(undefined4 **)(_UNK_015eb9b4 + 0x15eb70c);
    do {
      if (uVar1 < 0x31) {
        if (uVar1 < 0x19) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else if (uVar1 == 0x12) {
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
            func_0x0244f950(iVar6,param_2,uVar2,*puVar8);
          }
          else {
            if (uVar1 != 0x18) goto LAB_015eb81c;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x14) = uVar2;
          }
        }
        else if (uVar1 == 0x22) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
        else if (uVar1 == 0x28) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
        else {
          if (uVar1 != 0x30) goto LAB_015eb81c;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x24) = uVar2;
        }
      }
      else if (uVar1 < 0x4b) {
        if (uVar1 == 0x38) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x28) = uVar2;
        }
        else if (uVar1 == 0x42) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x2c);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x034663ac(iVar6,param_2,uVar2,*puVar9);
        }
        else {
          if (uVar1 != 0x4a) goto LAB_015eb81c;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
          *(undefined4 *)(param_1 + 0x30) = uVar2;
        }
      }
      else if (uVar1 < 0x59) {
        if (uVar1 == 0x52) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
          *(undefined4 *)(param_1 + 0x34) = uVar2;
        }
        else if (uVar1 == 0x58) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x38) = uVar2;
        }
        else {
LAB_015eb81c:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 == 0x60) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x3c) = uVar2;
      }
      else {
        if (uVar1 != 0x68) goto LAB_015eb81c;
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x18) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventLongOrder$$get_XXX_RowIdentifier RVA 0x15db9b8 =====

undefined4 FUN_015eb9b8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ===== fat.rawdata.EventLongOrder$$set_XXX_RowIdentifier RVA 0x15db9c0 =====

void FUN_015eb9c0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



// ===== fat.rawdata.EventLongOrder$$.cctor RVA 0x15db9c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015eb9c8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_015ebadc + 0x15eb9dc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015ebae0 + 0x15eb9f0));
    func_0x01384978(*(undefined4 *)(_UNK_015ebae4 + 0x15eb9fc));
    func_0x01384978(*(undefined4 *)(_UNK_015ebae8 + 0x15eba08));
    func_0x01384978(*(undefined4 *)(_UNK_015ebaec + 0x15eba14));
    func_0x01384978(*(undefined4 *)(_UNK_015ebaf0 + 0x15eba20));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_015ebaf4 + 0x15eba34);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_015ebaf8 + 0x15eba44);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f980(0x12,**(undefined4 **)(_UNK_015ebafc + 0x15eba84),0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_015ebb00 + 0x15eba9c));
  func_0x0244f944(uVar3,uVar1,uVar2,0x42,**(undefined4 **)(_UNK_015ebb04 + 0x15ebabc));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar3;
  return;
}


