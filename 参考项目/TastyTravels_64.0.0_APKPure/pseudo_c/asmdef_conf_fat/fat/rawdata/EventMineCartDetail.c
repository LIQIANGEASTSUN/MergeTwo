/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventMineCartDetail$$.ctor RVA 0x15e3bd4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f3bd4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_015f3d20 + 0x15f3be8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f3d24 + 0x15f3bfc));
    func_0x01384978(*(undefined4 *)(_UNK_015f3d28 + 0x15f3c08));
    func_0x01384978(*(undefined4 *)(_UNK_015f3d2c + 0x15f3c14));
    func_0x01384978(*(undefined4 *)(_UNK_015f3d30 + 0x15f3c20));
    func_0x01384978(*(undefined4 *)(_UNK_015f3d34 + 0x15f3c2c));
    func_0x01384978(*(undefined4 *)(_UNK_015f3d38 + 0x15f3c38));
    *pcVar4 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_015f3d3c + 0x15f3c4c);
  iVar1 = func_0x01384be4(*puVar7);
  puVar8 = *(undefined4 **)(_UNK_015f3d40 + 0x15f3c60);
  func_0x0244f948(iVar1,*puVar8);
  puVar5 = *(undefined4 **)(_UNK_015f3d44 + 0x15f3c70);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_015f3d48 + 0x15f3c88);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar7;
  param_1[9] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar8);
  uVar2 = *puVar5;
  param_1[10] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[0xb] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_015f3d4c + 0x15f3ce0);
  param_1[0xc] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015f3d50 + 0x15f3d00));
                    /* WARNING: Could not recover jumptable at 0x015f3d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventMineCartDetail$$.ctor RVA 0x15e3d54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f3d54(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  pcVar3 = (char *)(_UNK_015f3e88 + 0x15f3d6c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f3e8c + 0x15f3d80));
    func_0x01384978(*(undefined4 *)(_UNK_015f3e90 + 0x15f3d8c));
    *pcVar3 = '\x01';
  }
  FUN_015f3bd4(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_015f3e94 + 0x15f3dd0);
  uVar1 = func_0x0244f94c(iVar4,*puVar6);
  iVar4 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar7 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x1c) = uVar7;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_015f3e98 + 0x15f3e08);
  uVar1 = func_0x0244f968(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar4,*puVar6);
  iVar4 = *(int *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar4,*puVar5);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventMineCartDetail$$Clone RVA 0x15e3e9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015f3e9c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015f3ef0 + 0x15f3eb0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f3ef4 + 0x15f3ec4));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015f3ef8 + 0x15f3ed8));
  FUN_015f3d54(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventMineCartDetail$$ProxyInternalMergeFrom RVA 0x15e3efc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f3efc(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_015f41b0 + 0x15f3f18);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f41b4 + 0x15f3f2c));
    func_0x01384978(*(undefined4 *)(_UNK_015f41b8 + 0x15f3f38));
    func_0x01384978(*(undefined4 *)(_UNK_015f41bc + 0x15f3f44));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015f41c0 + 0x15f3f74);
    puVar8 = *(undefined4 **)(_UNK_015f41c4 + 0x15f3f7c);
    puVar9 = *(undefined4 **)(_UNK_015f41c8 + 0x15f3f84);
    do {
      if (uVar1 < 0x3b) {
        if (uVar1 < 0x21) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else if (uVar1 == 0x10) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x14) = uVar2;
          }
          else {
            if (uVar1 != 0x20) goto LAB_015f40d4;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x18) = uVar2;
          }
        }
        else {
          if (uVar1 != 0x30) {
            if (uVar1 == 0x38 || uVar1 == 0x3a) {
              iVar3 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x24);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar7;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
              goto LAB_015f4078;
            }
            goto LAB_015f40d4;
          }
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
      }
      else if (uVar1 < 0x4b) {
        if (uVar1 == 0x42) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x28);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
LAB_015f4140:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0244f950(iVar6,param_2,uVar2,*puVar9);
        }
        else {
          if (uVar1 != 0x48 && uVar1 != 0x4a) goto LAB_015f40d4;
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x2c);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
LAB_015f4078:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0244f96c(iVar6,param_2,uVar2,*puVar8);
        }
      }
      else {
        if (uVar1 < 0x53) {
          if ((uVar1 | 2) == 0x52) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x30);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
            goto LAB_015f4078;
          }
        }
        else {
          if (uVar1 == 0x60) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x20) = uVar2;
            goto LAB_015f4190;
          }
          if (uVar1 == 0x6a) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x10);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
            goto LAB_015f4140;
          }
        }
LAB_015f40d4:
        uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar2;
      }
LAB_015f4190:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventMineCartDetail$$get_XXX_RowIdentifier RVA 0x15e41cc =====

undefined4 FUN_015f41cc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



// ===== fat.rawdata.EventMineCartDetail$$set_XXX_RowIdentifier RVA 0x15e41d4 =====

void FUN_015f41d4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}



// ===== fat.rawdata.EventMineCartDetail$$.cctor RVA 0x15e41dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f41dc(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015f42b0 + 0x15f41ec);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f42b4 + 0x15f4200));
    func_0x01384978(*(undefined4 *)(_UNK_015f42b8 + 0x15f420c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015f42bc + 0x15f4220);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015f42c0 + 0x15f4230);
  uVar1 = func_0x0244f954(0x6a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f954(0x42,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f970(0x52,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  return;
}


