/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventRescue$$.ctor RVA 0x161f278 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0162f278(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0162f384 + 0x162f28c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0162f388 + 0x162f2a0));
    func_0x01384978(*(undefined4 *)(_UNK_0162f38c + 0x162f2ac));
    func_0x01384978(*(undefined4 *)(_UNK_0162f390 + 0x162f2b8));
    func_0x01384978(*(undefined4 *)(_UNK_0162f394 + 0x162f2c4));
    func_0x01384978(*(undefined4 *)(_UNK_0162f398 + 0x162f2d0));
    func_0x01384978(*(undefined4 *)(_UNK_0162f39c + 0x162f2dc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0162f3a0 + 0x162f2f0));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_0162f3a4 + 0x162f304));
  puVar2 = *(undefined4 **)(_UNK_0162f3a8 + 0x162f318);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0244f964(iVar1,**(undefined4 **)(_UNK_0162f3ac + 0x162f330));
  piVar3 = *(int **)(_UNK_0162f3b0 + 0x162f344);
  param_1[0x13] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0162f3b4 + 0x162f364));
                    /* WARNING: Could not recover jumptable at 0x0162f380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventRescue$$.ctor RVA 0x161f3b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0162f3b8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pcVar4 = (char *)(_UNK_0162f4bc + 0x162f3d0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0162f4c0 + 0x162f3e4));
    func_0x01384978(*(undefined4 *)(_UNK_0162f4c4 + 0x162f3f0));
    *pcVar4 = '\x01';
  }
  FUN_0162f278(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar5,**(undefined4 **)(_UNK_0162f4c8 + 0x162f438));
  uVar6 = *(undefined8 *)(param_2 + 0x14);
  uVar7 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x14) = uVar6;
  *(undefined8 *)(param_1 + 0x1c) = uVar7;
  uVar6 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x2c) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x3c) = uVar6;
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  iVar5 = *(int *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar5,**(undefined4 **)(_UNK_0162f4cc + 0x162f490));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventRescue$$Clone RVA 0x161f4d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0162f4d0(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0162f524 + 0x162f4e4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0162f528 + 0x162f4f8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0162f52c + 0x162f50c));
  FUN_0162f3b8(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventRescue$$ProxyInternalMergeFrom RVA 0x161f530 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0162f530(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar3 = (char *)(_UNK_0162f8cc + 0x162f54c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0162f8d0 + 0x162f560));
    func_0x01384978(*(undefined4 *)(_UNK_0162f8d4 + 0x162f56c));
    func_0x01384978(*(undefined4 *)(_UNK_0162f8d8 + 0x162f578));
    *pcVar3 = '\x01';
  }
  iVar4 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar4,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0162f8dc + 0x162f5a8);
    puVar8 = *(undefined4 **)(_UNK_0162f8e0 + 0x162f5b0);
    do {
      if (uVar1 < 0x49) {
        if (uVar1 < 0x21) {
          if (uVar1 < 0x13) {
            if (uVar1 == 8) {
              uVar6 = func_0x01484f98(param_2,iVar4,0);
              *(undefined4 *)(param_1 + 0xc) = uVar6;
            }
            else if (uVar1 == 0x12) {
              iVar2 = *piVar7;
              iVar5 = *(int *)(param_1 + 0x10);
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar7;
              }
              uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              func_0x0244f950(iVar5,param_2,uVar6,**(undefined4 **)(_UNK_0162f8e4 + 0x162f618));
            }
            else {
LAB_0162f7a4:
              uVar6 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
              *(undefined4 *)(param_1 + 8) = uVar6;
            }
          }
          else if (uVar1 == 0x18) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x18) = uVar6;
          }
          else {
            if (uVar1 != 0x20) goto LAB_0162f7a4;
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x1c) = uVar6;
          }
        }
        else if (uVar1 < 0x31) {
          if (uVar1 == 0x28) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x20) = uVar6;
          }
          else {
            if (uVar1 != 0x30) goto LAB_0162f7a4;
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x24) = uVar6;
          }
        }
        else if (uVar1 == 0x38) {
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x28) = uVar6;
        }
        else if (uVar1 == 0x40) {
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x2c) = uVar6;
        }
        else {
          if (uVar1 != 0x48) goto LAB_0162f7a4;
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x34) = uVar6;
        }
      }
      else if (uVar1 < 0x71) {
        if (uVar1 < 0x59) {
          if (uVar1 == 0x50) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x38) = uVar6;
          }
          else {
            if (uVar1 != 0x58) goto LAB_0162f7a4;
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x3c) = uVar6;
          }
        }
        else if (uVar1 == 0x60) {
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x40) = uVar6;
        }
        else {
          if (uVar1 != 0x68) {
            if (uVar1 == 0x70) goto LAB_0162f6fc;
            goto LAB_0162f7a4;
          }
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x48) = uVar6;
        }
      }
      else if (uVar1 < 0x79) {
        if (uVar1 == 0x72) {
LAB_0162f6fc:
          iVar2 = *piVar7;
          iVar5 = *(int *)(param_1 + 0x4c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x0244f96c(iVar5,param_2,uVar6,*puVar8);
        }
        else {
          if (uVar1 != 0x78) goto LAB_0162f7a4;
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x50) = uVar6;
        }
      }
      else if (uVar1 == 0x80) {
        uVar6 = func_0x01484f98(param_2,iVar4,0);
        *(undefined4 *)(param_1 + 0x30) = uVar6;
      }
      else if (uVar1 == 0x88) {
        uVar6 = func_0x01484f98(param_2,iVar4,0);
        *(undefined4 *)(param_1 + 0x44) = uVar6;
      }
      else {
        if (uVar1 != 0x90) goto LAB_0162f7a4;
        uVar6 = func_0x01484f98(param_2,iVar4,0);
        *(undefined4 *)(param_1 + 0x14) = uVar6;
      }
      uVar1 = func_0x01484f58(param_2,iVar4,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventRescue$$get_XXX_RowIdentifier RVA 0x161f8e8 =====

undefined4 FUN_0162f8e8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}



// ===== fat.rawdata.EventRescue$$set_XXX_RowIdentifier RVA 0x161f8f0 =====

void FUN_0162f8f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}



// ===== fat.rawdata.EventRescue$$.cctor RVA 0x161f8f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0162f8f8(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0162f984 + 0x162f908);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0162f988 + 0x162f91c));
    func_0x01384978(*(undefined4 *)(_UNK_0162f98c + 0x162f928));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0162f990 + 0x162f93c);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0162f994 + 0x162f94c);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x72,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


