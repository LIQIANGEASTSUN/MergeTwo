/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.OrderCategory$$.ctor RVA 0x17031f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017131f0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_01713370 + 0x1713204);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01713374 + 0x1713218));
    func_0x01384978(*(undefined4 *)(_UNK_01713378 + 0x1713224));
    func_0x01384978(*(undefined4 *)(_UNK_0171337c + 0x1713230));
    func_0x01384978(*(undefined4 *)(_UNK_01713380 + 0x171323c));
    func_0x01384978(*(undefined4 *)(_UNK_01713384 + 0x1713248));
    func_0x01384978(*(undefined4 *)(_UNK_01713388 + 0x1713254));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0171338c + 0x1713268));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_01713390 + 0x171327c));
  puVar5 = *(undefined4 **)(_UNK_01713394 + 0x1713290);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_01713398 + 0x17132a8);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[10] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[0xc] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[0xe] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_0171339c + 0x1713330);
  param_1[0x10] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_017133a0 + 0x1713350));
                    /* WARNING: Could not recover jumptable at 0x0171336c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.OrderCategory$$.ctor RVA 0x17033a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017133a4(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_01713530 + 0x17133bc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01713534 + 0x17133d0));
    func_0x01384978(*(undefined4 *)(_UNK_01713538 + 0x17133dc));
    *pcVar5 = '\x01';
  }
  FUN_017131f0(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar6,**(undefined4 **)(_UNK_0171353c + 0x171341c));
  iVar6 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_01713540 + 0x1713448);
  uVar2 = func_0x0364acbc(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar6,*puVar7);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  iVar6 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x30);
  uVar1 = *(undefined2 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined2 *)(param_1 + 0x2c) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar6,*puVar7);
  uVar3 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  uVar2 = func_0x0244f914(uVar3,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.OrderCategory$$Clone RVA 0x1703544 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01713544(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01713598 + 0x1713558);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0171359c + 0x171356c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_017135a0 + 0x1713580));
  FUN_017133a4(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.OrderCategory$$ProxyInternalMergeFrom RVA 0x17035a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017135a4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  
  pcVar4 = (char *)(_UNK_0171395c + 0x17135c0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01713960 + 0x17135d4));
    func_0x01384978(*(undefined4 *)(_UNK_01713964 + 0x17135e0));
    func_0x01384978(*(undefined4 *)(_UNK_01713968 + 0x17135ec));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0171396c + 0x171361c);
    puVar8 = *(undefined4 **)(_UNK_01713970 + 0x1713624);
    puVar9 = *(undefined4 **)(_UNK_01713974 + 0x171362c);
    do {
      if (0x38 < uVar1) {
        if (0x58 < uVar1) {
          if (uVar1 < 0x6b) {
            if (uVar1 != 0x60) {
              if (uVar1 != 0x68 && uVar1 != 0x6a) goto LAB_017138bc;
              iVar2 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x30);
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar7;
              }
              uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
              goto LAB_01713838;
            }
            uVar3 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x20) = uVar3;
          }
          else if (uVar1 == 0x70) {
            uVar3 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x34) = uVar3;
          }
          else if (uVar1 == 0x78) {
            lVar10 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x2d) = lVar10 != 0;
          }
          else {
            if (uVar1 != 0x82) goto LAB_017138bc;
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
            func_0x036520e8(iVar6,param_2,uVar3,*puVar9);
          }
          goto LAB_017138d0;
        }
        if (uVar1 < 0x43) {
          if ((uVar1 | 2) != 0x42) {
LAB_017138bc:
            uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar3;
            goto LAB_017138d0;
          }
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x40);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x1c);
        }
        else {
          if (uVar1 != 0x50 && uVar1 != 0x52) {
            if (uVar1 == 0x58) {
              lVar10 = func_0x01484f88(param_2,iVar5,0);
              *(bool *)(param_1 + 0x2c) = lVar10 != 0;
              goto LAB_017138d0;
            }
            goto LAB_017138bc;
          }
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x28);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
        }
        goto LAB_01713838;
      }
      if (uVar1 < 0x21) {
        if (uVar1 < 0x11) {
          if (uVar1 != 8) {
            if (uVar1 != 0x10) goto LAB_017138bc;
LAB_01713814:
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x14);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
            goto LAB_01713838;
          }
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar3;
        }
        else {
          if (uVar1 == 0x12) goto LAB_01713814;
          if (uVar1 != 0x18) {
            if (uVar1 == 0x20) goto LAB_01713724;
            goto LAB_017138bc;
          }
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x18) = uVar3;
        }
      }
      else if (uVar1 < 0x29) {
        if (uVar1 == 0x22) {
LAB_01713724:
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x1c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
LAB_01713838:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0364b0e0(iVar6,param_2,uVar3,*puVar8);
        }
        else {
          if (uVar1 != 0x28) goto LAB_017138bc;
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x24) = uVar3;
        }
      }
      else {
        if (uVar1 == 0x30 || uVar1 == 0x32) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x38);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x18);
          goto LAB_01713838;
        }
        if (uVar1 != 0x38) goto LAB_017138bc;
        uVar3 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x3c) = uVar3;
      }
LAB_017138d0:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.OrderCategory$$get_XXX_RowIdentifier RVA 0x1703978 =====

undefined4 FUN_01713978(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// ===== fat.rawdata.OrderCategory$$set_XXX_RowIdentifier RVA 0x1703980 =====

void FUN_01713980(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}



// ===== fat.rawdata.OrderCategory$$.cctor RVA 0x1703988 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01713988(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01713a8c + 0x1713998);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01713a90 + 0x17139ac));
    func_0x01384978(*(undefined4 *)(_UNK_01713a94 + 0x17139b8));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01713a98 + 0x17139cc);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01713a9c + 0x17139dc);
  uVar1 = func_0x0244f954(0x82,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x52,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f970(0x6a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f970(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x18) = uVar1;
  uVar1 = func_0x0244f970(0x42,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x1c) = uVar1;
  return;
}


