/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.FrozenItemDetail$$.ctor RVA 0x1672c44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01682c44(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_01682da8 + 0x1682c58);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01682dac + 0x1682c6c));
    func_0x01384978(*(undefined4 *)(_UNK_01682db0 + 0x1682c78));
    func_0x01384978(*(undefined4 *)(_UNK_01682db4 + 0x1682c84));
    func_0x01384978(*(undefined4 *)(_UNK_01682db8 + 0x1682c90));
    func_0x01384978(*(undefined4 *)(_UNK_01682dbc + 0x1682c9c));
    func_0x01384978(*(undefined4 *)(_UNK_01682dc0 + 0x1682ca8));
    *pcVar4 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_01682dc4 + 0x1682cbc);
  iVar1 = func_0x01384be4(*puVar7);
  puVar8 = *(undefined4 **)(_UNK_01682dc8 + 0x1682cd0);
  func_0x036542d8(iVar1,*puVar8);
  uVar2 = *puVar7;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar8);
  puVar5 = *(undefined4 **)(_UNK_01682dcc + 0x1682cf8);
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_01682dd0 + 0x1682d10);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[0xb] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar7;
  param_1[0xc] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar8);
  uVar2 = *puVar5;
  param_1[0xd] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_01682dd4 + 0x1682d68);
  param_1[0x12] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01682dd8 + 0x1682d88));
                    /* WARNING: Could not recover jumptable at 0x01682da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.FrozenItemDetail$$.ctor RVA 0x1672ddc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01682ddc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  
  pcVar5 = (char *)(_UNK_01682f48 + 0x1682df4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01682f4c + 0x1682e08));
    func_0x01384978(*(undefined4 *)(_UNK_01682f50 + 0x1682e14));
    *pcVar5 = '\x01';
  }
  FUN_01682c44(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar8 = *(undefined4 **)(_UNK_01682f54 + 0x1682e58);
  uVar1 = func_0x03651cc4(iVar6,*puVar8);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  iVar6 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,*puVar8);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  iVar6 = *(int *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_01682f58 + 0x1682eb0);
  uVar1 = func_0x0364acbc(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,*puVar8);
  iVar6 = *(int *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar9 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.FrozenItemDetail$$Clone RVA 0x1672f5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01682f5c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01682fb0 + 0x1682f70);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01682fb4 + 0x1682f84));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01682fb8 + 0x1682f98));
  FUN_01682ddc(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.FrozenItemDetail$$ProxyInternalMergeFrom RVA 0x1672fbc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01682fbc(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  pcVar5 = (char *)(_UNK_01683398 + 0x1682fd8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0168339c + 0x1682fec));
    func_0x01384978(*(undefined4 *)(_UNK_016833a0 + 0x1682ff8));
    func_0x01384978(*(undefined4 *)(_UNK_016833a4 + 0x1683004));
    *pcVar5 = '\x01';
  }
  iVar6 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar6,0);
  if (uVar1 != 0) {
    piVar8 = *(int **)(_UNK_016833a8 + 0x1683034);
    puVar9 = *(undefined4 **)(_UNK_016833ac + 0x168303c);
    do {
      if (uVar1 < 0x71) {
        if (uVar1 < 0x4b) {
          if (uVar1 < 0x11) {
            if (uVar1 == 8) {
              uVar2 = func_0x01484f98(param_2,iVar6,0);
              *(undefined4 *)(param_1 + 0xc) = uVar2;
            }
            else {
              if (uVar1 != 0x10) goto LAB_01683270;
              uVar2 = func_0x01484f98(param_2,iVar6,0);
              *(undefined4 *)(param_1 + 0x14) = uVar2;
            }
          }
          else {
            if (uVar1 == 0x22) {
              iVar3 = *piVar8;
              iVar7 = *(int *)(param_1 + 0x1c);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
            }
            else {
              if (uVar1 == 0x28) {
                uVar2 = func_0x01484f98(param_2,iVar6,0);
                *(undefined4 *)(param_1 + 0x24) = uVar2;
                goto LAB_01683378;
              }
              if (uVar1 != 0x4a) goto LAB_01683270;
              iVar3 = *piVar8;
              iVar7 = *(int *)(param_1 + 0x34);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
            }
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            puVar4 = *(undefined4 **)(_UNK_016833b0 + 0x16832cc);
LAB_01683324:
            func_0x036520e8(iVar7,param_2,uVar2,*puVar4);
          }
        }
        else if (uVar1 < 0x59) {
          if (uVar1 == 0x50) {
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x38) = uVar2;
          }
          else {
            if (uVar1 != 0x58) goto LAB_01683270;
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x3c) = uVar2;
          }
        }
        else if (uVar1 == 0x60) {
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          *(undefined4 *)(param_1 + 0x40) = uVar2;
        }
        else {
          if (uVar1 != 0x68) {
            if (uVar1 == 0x70) goto LAB_016831a4;
            goto LAB_01683270;
          }
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          *(undefined4 *)(param_1 + 0x44) = uVar2;
        }
      }
      else if (uVar1 < 0x91) {
        if (uVar1 < 0x79) {
          if (uVar1 == 0x72) {
LAB_016831a4:
            iVar3 = *piVar8;
            iVar7 = *(int *)(param_1 + 0x30);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
            goto LAB_016831fc;
          }
          if (uVar1 != 0x78) goto LAB_01683270;
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          *(undefined4 *)(param_1 + 0x18) = uVar2;
        }
        else {
          if (uVar1 == 0x82) {
            iVar3 = *piVar8;
            iVar7 = *(int *)(param_1 + 0x10);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            puVar4 = *(undefined4 **)(_UNK_016833b4 + 0x1683328);
            goto LAB_01683324;
          }
          if (uVar1 == 0x88) {
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x20) = uVar2;
          }
          else {
            if (uVar1 != 0x90) goto LAB_01683270;
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x28) = uVar2;
          }
        }
      }
      else {
        if (uVar1 < 0x9b) {
          if ((uVar1 | 2) == 0x9a) {
            iVar3 = *piVar8;
            iVar7 = *(int *)(param_1 + 0x2c);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
LAB_016831fc:
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            func_0x0364b0e0(iVar7,param_2,uVar2,*puVar9);
            goto LAB_01683378;
          }
        }
        else {
          if (uVar1 == 0xa0 || uVar1 == 0xa2) {
            iVar3 = *piVar8;
            iVar7 = *(int *)(param_1 + 0x48);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x18);
            goto LAB_016831fc;
          }
          if (uVar1 == 0xa8) {
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x4c) = uVar2;
            goto LAB_01683378;
          }
        }
LAB_01683270:
        uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar2;
      }
LAB_01683378:
      uVar1 = func_0x01484f58(param_2,iVar6,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.FrozenItemDetail$$get_XXX_RowIdentifier RVA 0x16733b8 =====

undefined4 FUN_016833b8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



// ===== fat.rawdata.FrozenItemDetail$$set_XXX_RowIdentifier RVA 0x16733c0 =====

void FUN_016833c0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}



// ===== fat.rawdata.FrozenItemDetail$$.cctor RVA 0x16733c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016833c8(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016834b4 + 0x16833d8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016834b8 + 0x16833ec));
    func_0x01384978(*(undefined4 *)(_UNK_016834bc + 0x16833f8));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_016834c0 + 0x168340c);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_016834c4 + 0x168341c);
  uVar1 = func_0x0244f954(0x82,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x9a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x72,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f954(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f970(0xa2,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x18) = uVar1;
  return;
}


