/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventDiningBoard$$.ctor RVA 0x1967874 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01977874(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0197793c + 0x1977888);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01977940 + 0x197789c));
    func_0x01384978(*(undefined4 *)(_UNK_01977944 + 0x19778a8));
    func_0x01384978(*(undefined4 *)(_UNK_01977948 + 0x19778b4));
    func_0x01384978(*(undefined4 *)(_UNK_0197794c + 0x19778c0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01977950 + 0x19778d4));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_01977954 + 0x19778e8));
  piVar2 = *(int **)(_UNK_01977958 + 0x19778fc);
  param_1[4] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0197795c + 0x197791c));
                    /* WARNING: Could not recover jumptable at 0x01977938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventDiningBoard$$.ctor RVA 0x1967960 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01977960(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pcVar3 = (char *)(_UNK_01977a28 + 0x1977978);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01977a2c + 0x197798c));
    *pcVar3 = '\x01';
  }
  FUN_01977874(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_01977a30 + 0x19779d4));
  uVar5 = *(undefined8 *)(param_2 + 0x14);
  uVar6 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x14) = uVar5;
  *(undefined8 *)(param_1 + 0x1c) = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x2c) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x3c) = uVar5;
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  uVar1 = func_0x0244f914(uVar1,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventDiningBoard$$Clone RVA 0x1967a34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01977a34(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01977a88 + 0x1977a48);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01977a8c + 0x1977a5c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01977a90 + 0x1977a70));
  FUN_01977960(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventDiningBoard$$ProxyInternalMergeFrom RVA 0x1967a94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01977a94(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar3 = (char *)(_UNK_01977d9c + 0x1977aac);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01977da0 + 0x1977ac0));
    func_0x01384978(*(undefined4 *)(_UNK_01977da4 + 0x1977acc));
    *pcVar3 = '\x01';
  }
  iVar4 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar4,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01977da8 + 0x1977afc);
    puVar8 = *(undefined4 **)(_UNK_01977dac + 0x1977b04);
    do {
      if (uVar1 < 0x41) {
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
              func_0x036520e8(iVar5,param_2,uVar6,*puVar8);
            }
            else {
LAB_01977ca8:
              uVar6 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
              *(undefined4 *)(param_1 + 8) = uVar6;
            }
          }
          else if (uVar1 == 0x18) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x14) = uVar6;
          }
          else {
            if (uVar1 != 0x20) goto LAB_01977ca8;
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x18) = uVar6;
          }
        }
        else if (uVar1 < 0x31) {
          if (uVar1 == 0x28) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x20) = uVar6;
          }
          else {
            if (uVar1 != 0x30) goto LAB_01977ca8;
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x24) = uVar6;
          }
        }
        else if (uVar1 == 0x38) {
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x28) = uVar6;
        }
        else {
          if (uVar1 != 0x40) goto LAB_01977ca8;
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x2c) = uVar6;
        }
      }
      else if (uVar1 < 0x61) {
        if (uVar1 < 0x51) {
          if (uVar1 == 0x48) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x30) = uVar6;
          }
          else {
            if (uVar1 != 0x50) goto LAB_01977ca8;
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x34) = uVar6;
          }
        }
        else if (uVar1 == 0x58) {
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x38) = uVar6;
        }
        else {
          if (uVar1 != 0x60) goto LAB_01977ca8;
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x3c) = uVar6;
        }
      }
      else if (uVar1 < 0x79) {
        if (uVar1 == 0x68) {
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x40) = uVar6;
        }
        else {
          if (uVar1 != 0x78) goto LAB_01977ca8;
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x44) = uVar6;
        }
      }
      else if (uVar1 == 0x80) {
        uVar6 = func_0x01484f98(param_2,iVar4,0);
        *(undefined4 *)(param_1 + 0x48) = uVar6;
      }
      else {
        if (uVar1 != 0x88) goto LAB_01977ca8;
        uVar6 = func_0x01484f98(param_2,iVar4,0);
        *(undefined4 *)(param_1 + 0x1c) = uVar6;
      }
      uVar1 = func_0x01484f58(param_2,iVar4,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventDiningBoard$$get_XXX_RowIdentifier RVA 0x1967db0 =====

undefined4 FUN_01977db0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== fat.rawdata.EventDiningBoard$$set_XXX_RowIdentifier RVA 0x1967db8 =====

void FUN_01977db8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}



// ===== fat.rawdata.EventDiningBoard$$.cctor RVA 0x1967dc0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01977dc0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01977e34 + 0x1977dd0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01977e38 + 0x1977de4));
    func_0x01384978(*(undefined4 *)(_UNK_01977e3c + 0x1977df0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01977e40 + 0x1977e04);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01977e44 + 0x1977e14);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


