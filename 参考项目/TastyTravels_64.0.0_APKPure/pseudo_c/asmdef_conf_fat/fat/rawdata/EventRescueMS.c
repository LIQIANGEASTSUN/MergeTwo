/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventRescueMS$$.ctor RVA 0x1621f80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01631f80(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_016320bc + 0x1631f94);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016320c0 + 0x1631fa8));
    func_0x01384978(*(undefined4 *)(_UNK_016320c4 + 0x1631fb4));
    func_0x01384978(*(undefined4 *)(_UNK_016320c8 + 0x1631fc0));
    func_0x01384978(*(undefined4 *)(_UNK_016320cc + 0x1631fcc));
    func_0x01384978(*(undefined4 *)(_UNK_016320d0 + 0x1631fd8));
    func_0x01384978(*(undefined4 *)(_UNK_016320d4 + 0x1631fe4));
    func_0x01384978(*(undefined4 *)(_UNK_016320d8 + 0x1631ff0));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_016320dc + 0x1632004);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_016320e0 + 0x1632018);
  func_0x0244f948(iVar1,*puVar6);
  uVar2 = *puVar5;
  piVar3 = *(int **)(_UNK_016320e4 + 0x163202c);
  param_1[4] = iVar1;
  param_1[5] = *piVar3;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar6);
  puVar5 = *(undefined4 **)(_UNK_016320e8 + 0x1632050);
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  func_0x0244f964(iVar1,**(undefined4 **)(_UNK_016320ec + 0x1632068));
  piVar3 = *(int **)(_UNK_016320f0 + 0x163207c);
  param_1[7] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016320f4 + 0x163209c));
                    /* WARNING: Could not recover jumptable at 0x016320b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventRescueMS$$.ctor RVA 0x16220f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016320f8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_016321e4 + 0x1632110);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016321e8 + 0x1632124));
    func_0x01384978(*(undefined4 *)(_UNK_016321ec + 0x1632130));
    *pcVar3 = '\x01';
  }
  FUN_01631f80(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_016321f0 + 0x1632174);
  uVar1 = func_0x0244f94c(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar4,**(undefined4 **)(_UNK_016321f4 + 0x16321c0));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventRescueMS$$Clone RVA 0x16221f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016321f8(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0163224c + 0x163220c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01632250 + 0x1632220));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01632254 + 0x1632234));
  FUN_016320f8(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventRescueMS$$ProxyInternalMergeFrom RVA 0x1622258 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01632258(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01632440 + 0x1632274);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01632444 + 0x1632288));
    func_0x01384978(*(undefined4 *)(_UNK_01632448 + 0x1632294));
    func_0x01384978(*(undefined4 *)(_UNK_0163244c + 0x16322a0));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01632450 + 0x16322d0);
    puVar8 = *(undefined4 **)(_UNK_01632454 + 0x16322d8);
    puVar9 = *(undefined4 **)(_UNK_01632458 + 0x16322e0);
    do {
      if (uVar1 < 0x1b) {
        if (uVar1 == 8) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar2;
        }
        else {
          if (uVar1 == 0x12) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x10);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
            goto LAB_01632400;
          }
          if (uVar1 != 0x1a) goto LAB_01632384;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
          *(undefined4 *)(param_1 + 0x14) = uVar2;
        }
      }
      else if (uVar1 == 0x22) {
        iVar3 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x18);
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
LAB_01632400:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f950(iVar6,param_2,uVar2,*puVar8);
      }
      else if (uVar1 == 0x28 || uVar1 == 0x2a) {
        iVar3 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x1c);
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f96c(iVar6,param_2,uVar2,*puVar9);
      }
      else {
LAB_01632384:
        uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventRescueMS$$get_XXX_RowIdentifier RVA 0x162245c =====

undefined4 FUN_0163245c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== fat.rawdata.EventRescueMS$$set_XXX_RowIdentifier RVA 0x1622464 =====

void FUN_01632464(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== fat.rawdata.EventRescueMS$$.cctor RVA 0x162246c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0163246c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01632510 + 0x163247c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01632514 + 0x1632490));
    func_0x01384978(*(undefined4 *)(_UNK_01632518 + 0x163249c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0163251c + 0x16324b0);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01632520 + 0x16324c0);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}


