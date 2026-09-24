/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventMineCart$$.ctor RVA 0x15e2f74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f2f74(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_015f30a8 + 0x15f2f88);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f30ac + 0x15f2f9c));
    func_0x01384978(*(undefined4 *)(_UNK_015f30b0 + 0x15f2fa8));
    func_0x01384978(*(undefined4 *)(_UNK_015f30b4 + 0x15f2fb4));
    func_0x01384978(*(undefined4 *)(_UNK_015f30b8 + 0x15f2fc0));
    func_0x01384978(*(undefined4 *)(_UNK_015f30bc + 0x15f2fcc));
    func_0x01384978(*(undefined4 *)(_UNK_015f30c0 + 0x15f2fd8));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_015f30c4 + 0x15f2fec);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_015f30c8 + 0x15f3000);
  func_0x0244f948(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar6);
  puVar5 = *(undefined4 **)(_UNK_015f30cc + 0x15f3028);
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_015f30d0 + 0x15f3040);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[0xe] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_015f30d4 + 0x15f3068);
  param_1[0x11] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015f30d8 + 0x15f3088));
                    /* WARNING: Could not recover jumptable at 0x015f30a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventMineCart$$.ctor RVA 0x15e30dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f30dc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  
  pcVar5 = (char *)(_UNK_015f3210 + 0x15f30f4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f3214 + 0x15f3108));
    func_0x01384978(*(undefined4 *)(_UNK_015f3218 + 0x15f3114));
    *pcVar5 = '\x01';
  }
  FUN_015f2f74(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_015f321c + 0x15f3158);
  uVar1 = func_0x0244f94c(iVar6,*puVar7);
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
  uVar1 = func_0x0244f94c(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x38);
  uVar8 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x2c) = uVar8;
  uVar2 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_015f3220 + 0x15f31c0);
  uVar1 = func_0x0244f968(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 0x3c);
  uVar3 = *(undefined4 *)(param_2 + 0x40);
  iVar6 = *(int *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventMineCart$$Clone RVA 0x15e3224 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015f3224(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015f3278 + 0x15f3238);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f327c + 0x15f324c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015f3280 + 0x15f3260));
  FUN_015f30dc(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventMineCart$$ProxyInternalMergeFrom RVA 0x15e3284 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f3284(int param_1,int param_2)

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
  
  pcVar5 = (char *)(_UNK_015f3624 + 0x15f32a0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f3628 + 0x15f32b4));
    func_0x01384978(*(undefined4 *)(_UNK_015f362c + 0x15f32c0));
    func_0x01384978(*(undefined4 *)(_UNK_015f3630 + 0x15f32cc));
    *pcVar5 = '\x01';
  }
  iVar6 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar6,0);
  if (uVar1 != 0) {
    piVar8 = *(int **)(_UNK_015f3634 + 0x15f32fc);
    puVar9 = *(undefined4 **)(_UNK_015f3638 + 0x15f3304);
    do {
      if (uVar1 < 0x49) {
        if (uVar1 < 0x21) {
          if (uVar1 < 0x11) {
            if (uVar1 == 8) {
              uVar2 = func_0x01484f98(param_2,iVar6,0);
              *(undefined4 *)(param_1 + 0xc) = uVar2;
            }
            else {
              if (uVar1 != 0x10) goto LAB_015f34b0;
              uVar2 = func_0x01484f98(param_2,iVar6,0);
              *(undefined4 *)(param_1 + 0x18) = uVar2;
            }
          }
          else if (uVar1 == 0x1a) {
            iVar3 = *piVar8;
            iVar7 = *(int *)(param_1 + 0x20);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            puVar4 = *(undefined4 **)(_UNK_015f363c + 0x15f359c);
LAB_015f3598:
            func_0x0244f950(iVar7,param_2,uVar2,*puVar4);
          }
          else {
            if (uVar1 != 0x20) goto LAB_015f34b0;
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x24) = uVar2;
          }
        }
        else if (uVar1 < 0x31) {
          if (uVar1 == 0x28) {
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x28) = uVar2;
          }
          else {
            if (uVar1 != 0x30) goto LAB_015f34b0;
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x2c) = uVar2;
          }
        }
        else if (uVar1 == 0x38) {
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          *(undefined4 *)(param_1 + 0x30) = uVar2;
        }
        else {
          if (uVar1 != 0x40) {
            if (uVar1 == 0x48) goto LAB_015f342c;
            goto LAB_015f34b0;
          }
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          *(undefined4 *)(param_1 + 0x34) = uVar2;
        }
      }
      else if (uVar1 < 0x61) {
        if (uVar1 < 0x51) {
          if (uVar1 == 0x4a) {
LAB_015f342c:
            iVar3 = *piVar8;
            iVar7 = *(int *)(param_1 + 0x38);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
LAB_015f34ec:
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            func_0x0244f96c(iVar7,param_2,uVar2,*puVar9);
            goto LAB_015f3604;
          }
          if (uVar1 == 0x50) goto LAB_015f34c8;
        }
        else {
          if (uVar1 == 0x52) {
LAB_015f34c8:
            iVar3 = *piVar8;
            iVar7 = *(int *)(param_1 + 0x44);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
            goto LAB_015f34ec;
          }
          if (uVar1 == 0x60) {
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x1c) = uVar2;
            goto LAB_015f3604;
          }
        }
LAB_015f34b0:
        uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar2;
      }
      else if (uVar1 < 0x71) {
        if (uVar1 == 0x68) {
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          *(undefined4 *)(param_1 + 0x3c) = uVar2;
        }
        else {
          if (uVar1 != 0x70) goto LAB_015f34b0;
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          *(undefined4 *)(param_1 + 0x40) = uVar2;
        }
      }
      else if (uVar1 == 0x78) {
        uVar2 = func_0x01484f98(param_2,iVar6,0);
        *(undefined4 *)(param_1 + 0x48) = uVar2;
      }
      else {
        if (uVar1 != 0x80) {
          if (uVar1 == 0x8a) {
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
            puVar4 = *(undefined4 **)(_UNK_015f3640 + 0x15f34b0);
            goto LAB_015f3598;
          }
          goto LAB_015f34b0;
        }
        uVar2 = func_0x01484f98(param_2,iVar6,0);
        *(undefined4 *)(param_1 + 0x14) = uVar2;
      }
LAB_015f3604:
      uVar1 = func_0x01484f58(param_2,iVar6,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventMineCart$$get_XXX_RowIdentifier RVA 0x15e3644 =====

undefined4 FUN_015f3644(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== fat.rawdata.EventMineCart$$set_XXX_RowIdentifier RVA 0x15e364c =====

void FUN_015f364c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}



// ===== fat.rawdata.EventMineCart$$.cctor RVA 0x15e3654 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f3654(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015f3710 + 0x15f3664);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f3714 + 0x15f3678));
    func_0x01384978(*(undefined4 *)(_UNK_015f3718 + 0x15f3684));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015f371c + 0x15f3698);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015f3720 + 0x15f36a8);
  uVar1 = func_0x0244f954(0x8a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x52,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  return;
}


