/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ScoreBoardGroup$$get_XXX_RowIdentifier RVA 0x171fc14 =====

undefined4 FUN_0172fc14(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== fat.rawdata.ScoreBoardGroup$$set_XXX_RowIdentifier RVA 0x171fc1c =====

void FUN_0172fc1c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== fat.rawdata.ScoreBoardGroup$$.ctor RVA 0x171fc24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0172fc24(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_0172fe00 + 0x172fc38);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0172fe04 + 0x172fc4c));
    func_0x01384978(*(undefined4 *)(_UNK_0172fe08 + 0x172fc58));
    func_0x01384978(*(undefined4 *)(_UNK_0172fe0c + 0x172fc64));
    func_0x01384978(*(undefined4 *)(_UNK_0172fe10 + 0x172fc70));
    func_0x01384978(*(undefined4 *)(_UNK_0172fe14 + 0x172fc7c));
    func_0x01384978(*(undefined4 *)(_UNK_0172fe18 + 0x172fc88));
    func_0x01384978(*(undefined4 *)(_UNK_0172fe1c + 0x172fc94));
    func_0x01384978(*(undefined4 *)(_UNK_0172fe20 + 0x172fca0));
    func_0x01384978(*(undefined4 *)(_UNK_0172fe24 + 0x172fcac));
    *pcVar5 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_0172fe28 + 0x172fcc0);
  iVar1 = func_0x01384be4(*puVar7);
  puVar8 = *(undefined4 **)(_UNK_0172fe2c + 0x172fcd4);
  func_0x036542d8(iVar1,*puVar8);
  puVar2 = *(undefined4 **)(_UNK_0172fe30 + 0x172fce4);
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x034673e0(iVar1,**(undefined4 **)(_UNK_0172fe34 + 0x172fcfc));
  puVar2 = *(undefined4 **)(_UNK_0172fe38 + 0x172fd10);
  param_1[9] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  puVar6 = *(undefined4 **)(_UNK_0172fe3c + 0x172fd28);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_0172fe40 + 0x172fd38);
  param_1[0xc] = iVar1;
  uVar4 = *puVar7;
  param_1[0xd] = *piVar3;
  iVar1 = func_0x01384be4(uVar4);
  func_0x036542d8(iVar1,*puVar8);
  uVar4 = *puVar2;
  param_1[0x10] = iVar1;
  iVar1 = func_0x01384be4(uVar4);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar4 = *puVar2;
  param_1[0x11] = iVar1;
  iVar1 = func_0x01384be4(uVar4);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar4 = *puVar2;
  param_1[0x12] = iVar1;
  iVar1 = func_0x01384be4(uVar4);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar4 = *puVar7;
  param_1[0x13] = iVar1;
  iVar1 = func_0x01384be4(uVar4);
  func_0x036542d8(iVar1,*puVar8);
  piVar3 = *(int **)(_UNK_0172fe44 + 0x172fdc0);
  param_1[0x14] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0172fe48 + 0x172fde0));
                    /* WARNING: Could not recover jumptable at 0x0172fdfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ScoreBoardGroup$$.ctor RVA 0x171fe4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0172fe4c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_01730004 + 0x172fe64);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01730008 + 0x172fe78));
    func_0x01384978(*(undefined4 *)(_UNK_0173000c + 0x172fe84));
    func_0x01384978(*(undefined4 *)(_UNK_01730010 + 0x172fe90));
    *pcVar5 = '\x01';
  }
  FUN_0172fc24(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar8 = *(undefined4 **)(_UNK_01730014 + 0x172fed4);
  uVar1 = func_0x03651cc4(iVar6,*puVar8);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  iVar6 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03464804(iVar6,**(undefined4 **)(_UNK_01730018 + 0x172ff00));
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  iVar6 = *(int *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_0173001c + 0x172ff34);
  uVar1 = func_0x0364acbc(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 0x38);
  uVar4 = *(undefined4 *)(param_2 + 0x3c);
  iVar6 = *(int *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,*puVar8);
  iVar6 = *(int *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,*puVar8);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.ScoreBoardGroup$$Clone RVA 0x1720020 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01730020(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01730074 + 0x1730034);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01730078 + 0x1730048));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0173007c + 0x173005c));
  FUN_0172fe4c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ScoreBoardGroup$$ProxyInternalMergeFrom RVA 0x1720080 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01730080(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar3 = (char *)(_UNK_017304dc + 0x173009c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017304e0 + 0x17300b0));
    func_0x01384978(*(undefined4 *)(_UNK_017304e4 + 0x17300bc));
    func_0x01384978(*(undefined4 *)(_UNK_017304e8 + 0x17300c8));
    func_0x01384978(*(undefined4 *)(_UNK_017304ec + 0x17300d4));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_017304f0 + 0x1730104);
    puVar8 = *(undefined4 **)(_UNK_017304f4 + 0x173010c);
    puVar9 = *(undefined4 **)(_UNK_017304f8 + 0x1730114);
    do {
      if (uVar1 < 0x51) {
        if (uVar1 < 0x2b) {
          if (uVar1 < 0x13) {
            if (uVar1 != 8) {
              if (uVar1 == 0x12) {
                iVar2 = *piVar7;
                iVar6 = *(int *)(param_1 + 0x14);
                if (*(int *)(iVar2 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar2 = *piVar7;
                }
                uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
                goto LAB_017303c4;
              }
              goto LAB_017303e8;
            }
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x10) = uVar4;
          }
          else if (uVar1 == 0x18) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x18) = uVar4;
          }
          else if (uVar1 == 0x20) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x20) = uVar4;
          }
          else {
            if (uVar1 != 0x2a) goto LAB_017303e8;
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x24);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x034663ac(iVar6,param_2,uVar4,**(undefined4 **)(_UNK_017304fc + 0x1730240));
          }
        }
        else if (uVar1 < 0x41) {
          if (uVar1 == 0x30) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x28) = uVar4;
          }
          else {
            if (uVar1 != 0x38) {
              if (uVar1 != 0x40) goto LAB_017303e8;
              goto LAB_01730310;
            }
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x2c) = uVar4;
          }
        }
        else {
          if (uVar1 == 0x42) {
LAB_01730310:
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x30);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
            goto LAB_01730334;
          }
          if (uVar1 == 0x4a) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
            *(undefined4 *)(param_1 + 0x34) = uVar4;
          }
          else {
            if (uVar1 != 0x50) goto LAB_017303e8;
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x3c) = uVar4;
          }
        }
      }
      else if (uVar1 < 0x6b) {
        if (uVar1 < 0x61) {
          if (uVar1 == 0x5a) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x40);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
LAB_017303c4:
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x036520e8(iVar6,param_2,uVar4,*puVar8);
            goto LAB_017303fc;
          }
          if (uVar1 == 0x60) goto LAB_017302e8;
        }
        else {
          if (uVar1 == 0x62) {
LAB_017302e8:
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x44);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
            goto LAB_01730334;
          }
          if (uVar1 == 0x68 || uVar1 == 0x6a) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x48);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x18);
            goto LAB_01730334;
          }
        }
LAB_017303e8:
        uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar4;
      }
      else {
        if (0x7a < uVar1) {
          if (uVar1 == 0x80) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x54) = uVar4;
          }
          else if (uVar1 == 0x88) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x1c) = uVar4;
          }
          else {
            if (uVar1 != 0x90) goto LAB_017303e8;
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x38) = uVar4;
          }
          goto LAB_017303fc;
        }
        if (uVar1 != 0x70 && uVar1 != 0x72) {
          if (uVar1 != 0x7a) goto LAB_017303e8;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x50);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x20);
          goto LAB_017303c4;
        }
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x4c);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x1c);
LAB_01730334:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0364b0e0(iVar6,param_2,uVar4,*puVar9);
      }
LAB_017303fc:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ScoreBoardGroup$$.cctor RVA 0x1720500 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01730500(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_017306a4 + 0x1730514);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017306a8 + 0x1730528));
    func_0x01384978(*(undefined4 *)(_UNK_017306ac + 0x1730534));
    func_0x01384978(*(undefined4 *)(_UNK_017306b0 + 0x1730540));
    func_0x01384978(*(undefined4 *)(_UNK_017306b4 + 0x173054c));
    func_0x01384978(*(undefined4 *)(_UNK_017306b8 + 0x1730558));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_017306bc + 0x173056c);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_017306c0 + 0x173057c);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f980(0x12,**(undefined4 **)(_UNK_017306c4 + 0x17305bc),0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_017306c8 + 0x17305d4));
  func_0x0244f944(uVar3,uVar1,uVar2,0x2a,**(undefined4 **)(_UNK_017306cc + 0x17305f4));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar3;
  uVar1 = func_0x0244f970(0x42,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f954(0x5a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f970(0x62,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f970(0x6a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x18) = uVar1;
  uVar1 = func_0x0244f970(0x72,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x1c) = uVar1;
  uVar1 = func_0x0244f954(0x7a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x20) = uVar1;
  return;
}


