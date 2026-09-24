/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventMineGroup$$.ctor RVA 0x15e9860 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f9860(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  
  pcVar5 = (char *)(_UNK_015f9a10 + 0x15f9874);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f9a14 + 0x15f9888));
    func_0x01384978(*(undefined4 *)(_UNK_015f9a18 + 0x15f9894));
    func_0x01384978(*(undefined4 *)(_UNK_015f9a1c + 0x15f98a0));
    func_0x01384978(*(undefined4 *)(_UNK_015f9a20 + 0x15f98ac));
    func_0x01384978(*(undefined4 *)(_UNK_015f9a24 + 0x15f98b8));
    func_0x01384978(*(undefined4 *)(_UNK_015f9a28 + 0x15f98c4));
    func_0x01384978(*(undefined4 *)(_UNK_015f9a2c + 0x15f98d0));
    func_0x01384978(*(undefined4 *)(_UNK_015f9a30 + 0x15f98dc));
    func_0x01384978(*(undefined4 *)(_UNK_015f9a34 + 0x15f98e8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015f9a38 + 0x15f98fc));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_015f9a3c + 0x15f9910));
  puVar2 = *(undefined4 **)(_UNK_015f9a40 + 0x15f9924);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x034673e0(iVar1,**(undefined4 **)(_UNK_015f9a44 + 0x15f993c));
  puVar2 = *(undefined4 **)(_UNK_015f9a48 + 0x15f9950);
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  puVar6 = *(undefined4 **)(_UNK_015f9a4c + 0x15f9968);
  func_0x0244f964(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_015f9a50 + 0x15f9978);
  param_1[10] = iVar1;
  uVar4 = *puVar2;
  param_1[0xb] = *piVar3;
  iVar1 = func_0x01384be4(uVar4);
  func_0x0244f964(iVar1,*puVar6);
  uVar4 = *puVar2;
  param_1[0xc] = iVar1;
  iVar1 = func_0x01384be4(uVar4);
  func_0x0244f964(iVar1,*puVar6);
  uVar4 = *puVar2;
  param_1[0xe] = iVar1;
  iVar1 = func_0x01384be4(uVar4);
  func_0x0244f964(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_015f9a54 + 0x15f99d0);
  param_1[0xf] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015f9a58 + 0x15f99f0));
                    /* WARNING: Could not recover jumptable at 0x015f9a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventMineGroup$$.ctor RVA 0x15e9a5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f9a5c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_015f9bdc + 0x15f9a74);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f9be0 + 0x15f9a88));
    func_0x01384978(*(undefined4 *)(_UNK_015f9be4 + 0x15f9a94));
    func_0x01384978(*(undefined4 *)(_UNK_015f9be8 + 0x15f9aa0));
    *pcVar5 = '\x01';
  }
  FUN_015f9860(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar6,**(undefined4 **)(_UNK_015f9bec + 0x15f9ae0));
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
  uVar1 = func_0x03464804(iVar6,**(undefined4 **)(_UNK_015f9bf0 + 0x15f9b10));
  iVar6 = *(int *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_015f9bf4 + 0x15f9b44);
  uVar1 = func_0x0244f968(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x30);
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x38);
  uVar2 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventMineGroup$$Clone RVA 0x15e9bf8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015f9bf8(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015f9c4c + 0x15f9c0c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f9c50 + 0x15f9c20));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015f9c54 + 0x15f9c34));
  FUN_015f9a5c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventMineGroup$$ProxyInternalMergeFrom RVA 0x15e9c58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f9c58(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_015fa018 + 0x15f9c74);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fa01c + 0x15f9c88));
    func_0x01384978(*(undefined4 *)(_UNK_015fa020 + 0x15f9c94));
    func_0x01384978(*(undefined4 *)(_UNK_015fa024 + 0x15f9ca0));
    func_0x01384978(*(undefined4 *)(_UNK_015fa028 + 0x15f9cac));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015fa02c + 0x15f9cdc);
    puVar8 = *(undefined4 **)(_UNK_015fa030 + 0x15f9ce4);
    puVar9 = *(undefined4 **)(_UNK_015fa034 + 0x15f9cec);
    do {
      if (uVar1 < 0x39) {
        if (uVar1 < 0x21) {
          if (uVar1 < 0x11) {
            if (uVar1 == 8) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0xc) = uVar2;
            }
            else {
              if (uVar1 != 0x10) goto LAB_015f9e64;
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x14) = uVar2;
            }
          }
          else {
            if (uVar1 != 0x18) {
              if (uVar1 == 0x20) goto LAB_015f9da8;
              goto LAB_015f9e64;
            }
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x24) = uVar2;
          }
          goto LAB_015f9ee8;
        }
        if (uVar1 < 0x29) {
          if (uVar1 != 0x22) {
            if (uVar1 != 0x28) goto LAB_015f9e64;
            goto LAB_015f9e7c;
          }
LAB_015f9da8:
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x30);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
        }
        else {
          if (uVar1 != 0x2a) {
            if (uVar1 == 0x30) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x40) = uVar2;
            }
            else {
              if (uVar1 != 0x38) goto LAB_015f9e64;
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x1c) = uVar2;
            }
            goto LAB_015f9ee8;
          }
LAB_015f9e7c:
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x3c);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x18);
        }
LAB_015f9ec8:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f96c(iVar6,param_2,uVar2,*puVar8);
      }
      else if (uVar1 < 0x53) {
        if (uVar1 < 0x49) {
          if (uVar1 == 0x42) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x20);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x034663ac(iVar6,param_2,uVar2,**(undefined4 **)(_UNK_015fa038 + 0x15f9f60));
          }
          else {
            if (uVar1 != 0x48) goto LAB_015f9e64;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x18) = uVar2;
          }
        }
        else {
          if ((uVar1 | 2) == 0x52) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x38);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
            goto LAB_015f9ec8;
          }
LAB_015f9e64:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 < 0x61) {
        if (uVar1 != 0x5a) {
          if (uVar1 != 0x60) goto LAB_015f9e64;
LAB_015f9ea4:
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x28);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
          goto LAB_015f9ec8;
        }
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
      }
      else {
        if (uVar1 == 0x62) goto LAB_015f9ea4;
        if (uVar1 == 0x6a) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
          *(undefined4 *)(param_1 + 0x2c) = uVar2;
        }
        else {
          if (uVar1 != 0x70) goto LAB_015f9e64;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x34) = uVar2;
        }
      }
LAB_015f9ee8:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventMineGroup$$get_XXX_RowIdentifier RVA 0x15ea03c =====

undefined4 FUN_015fa03c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// ===== fat.rawdata.EventMineGroup$$set_XXX_RowIdentifier RVA 0x15ea044 =====

void FUN_015fa044(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}



// ===== fat.rawdata.EventMineGroup$$.cctor RVA 0x15ea04c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015fa04c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_015fa1c0 + 0x15fa060);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fa1c4 + 0x15fa074));
    func_0x01384978(*(undefined4 *)(_UNK_015fa1c8 + 0x15fa080));
    func_0x01384978(*(undefined4 *)(_UNK_015fa1cc + 0x15fa08c));
    func_0x01384978(*(undefined4 *)(_UNK_015fa1d0 + 0x15fa098));
    func_0x01384978(*(undefined4 *)(_UNK_015fa1d4 + 0x15fa0a4));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_015fa1d8 + 0x15fa0b8);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_015fa1dc + 0x15fa0c8);
  uVar1 = func_0x0244f954(0x5a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f980(0x12,**(undefined4 **)(_UNK_015fa1e0 + 0x15fa108),0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_015fa1e4 + 0x15fa120));
  func_0x0244f944(uVar3,uVar1,uVar2,0x42,**(undefined4 **)(_UNK_015fa1e8 + 0x15fa140));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar3;
  uVar1 = func_0x0244f970(0x62,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f970(0x52,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x18) = uVar1;
  return;
}


