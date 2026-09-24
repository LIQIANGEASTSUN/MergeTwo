/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventMonopolyDetail$$.ctor RVA 0x15f0cc0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01600cc0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_01600e10 + 0x1600cd4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01600e14 + 0x1600ce8));
    func_0x01384978(*(undefined4 *)(_UNK_01600e18 + 0x1600cf4));
    func_0x01384978(*(undefined4 *)(_UNK_01600e1c + 0x1600d00));
    func_0x01384978(*(undefined4 *)(_UNK_01600e20 + 0x1600d0c));
    func_0x01384978(*(undefined4 *)(_UNK_01600e24 + 0x1600d18));
    func_0x01384978(*(undefined4 *)(_UNK_01600e28 + 0x1600d24));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01600e2c + 0x1600d38));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_01600e30 + 0x1600d4c));
  puVar5 = *(undefined4 **)(_UNK_01600e34 + 0x1600d60);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_01600e38 + 0x1600d78);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[9] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[10] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_01600e3c + 0x1600dd0);
  param_1[0xb] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01600e40 + 0x1600df0));
                    /* WARNING: Could not recover jumptable at 0x01600e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventMonopolyDetail$$.ctor RVA 0x15f0e44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01600e44(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_01600f70 + 0x1600e5c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01600f74 + 0x1600e70));
    func_0x01384978(*(undefined4 *)(_UNK_01600f78 + 0x1600e7c));
    *pcVar5 = '\x01';
  }
  FUN_01600cc0(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar6,**(undefined4 **)(_UNK_01600f7c + 0x1600ebc));
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  iVar6 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_01600f80 + 0x1600ef0);
  uVar1 = func_0x0244f968(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventMonopolyDetail$$Clone RVA 0x15f0f84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01600f84(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01600fd8 + 0x1600f98);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01600fdc + 0x1600fac));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01600fe0 + 0x1600fc0));
  FUN_01600e44(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventMonopolyDetail$$ProxyInternalMergeFrom RVA 0x15f0fe4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01600fe4(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_0160128c + 0x1601000);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01601290 + 0x1601014));
    func_0x01384978(*(undefined4 *)(_UNK_01601294 + 0x1601020));
    func_0x01384978(*(undefined4 *)(_UNK_01601298 + 0x160102c));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0160129c + 0x160105c);
    puVar8 = *(undefined4 **)(_UNK_016012a0 + 0x1601064);
    puVar9 = *(undefined4 **)(_UNK_016012a4 + 0x160106c);
    do {
      if (uVar1 < 0x2b) {
        if (uVar1 < 0x19) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else if (uVar1 == 0x10) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x14) = uVar2;
          }
          else {
            if (uVar1 != 0x18) goto LAB_016011c4;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x18) = uVar2;
          }
        }
        else {
          if (uVar1 != 0x20) {
            if (uVar1 != 0x28 && uVar1 != 0x2a) goto LAB_016011c4;
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x20);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
            goto LAB_01601200;
          }
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
      }
      else if (uVar1 < 0x39) {
        if (uVar1 == 0x30 || uVar1 == 0x32) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x24);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
        }
        else {
          if (uVar1 != 0x38) goto LAB_016011c4;
LAB_0160119c:
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x28);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
        }
LAB_01601200:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f96c(iVar6,param_2,uVar2,*puVar8);
      }
      else {
        if (uVar1 < 0x41) {
          if (uVar1 == 0x3a) goto LAB_0160119c;
          if (uVar1 == 0x40) goto LAB_016011dc;
        }
        else {
          if (uVar1 == 0x42) {
LAB_016011dc:
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x2c);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
            goto LAB_01601200;
          }
          if (uVar1 == 0x4a) {
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
            func_0x0244f950(iVar6,param_2,uVar2,*puVar9);
            goto LAB_01601220;
          }
        }
LAB_016011c4:
        uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar2;
      }
LAB_01601220:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventMonopolyDetail$$get_XXX_RowIdentifier RVA 0x15f12a8 =====

undefined4 FUN_016012a8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ===== fat.rawdata.EventMonopolyDetail$$set_XXX_RowIdentifier RVA 0x15f12b0 =====

void FUN_016012b0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// ===== fat.rawdata.EventMonopolyDetail$$.cctor RVA 0x15f12b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016012b8(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0160138c + 0x16012c8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01601390 + 0x16012dc));
    func_0x01384978(*(undefined4 *)(_UNK_01601394 + 0x16012e8));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01601398 + 0x16012fc);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0160139c + 0x160130c);
  uVar1 = func_0x0244f954(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f970(0x42,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  return;
}


