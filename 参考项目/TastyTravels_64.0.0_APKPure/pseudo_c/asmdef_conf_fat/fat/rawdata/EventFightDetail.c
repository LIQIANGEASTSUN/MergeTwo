/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventFightDetail$$.ctor RVA 0x15bfba8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015cfba8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_015cfcf8 + 0x15cfbbc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015cfcfc + 0x15cfbd0));
    func_0x01384978(*(undefined4 *)(_UNK_015cfd00 + 0x15cfbdc));
    func_0x01384978(*(undefined4 *)(_UNK_015cfd04 + 0x15cfbe8));
    func_0x01384978(*(undefined4 *)(_UNK_015cfd08 + 0x15cfbf4));
    func_0x01384978(*(undefined4 *)(_UNK_015cfd0c + 0x15cfc00));
    func_0x01384978(*(undefined4 *)(_UNK_015cfd10 + 0x15cfc0c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015cfd14 + 0x15cfc20));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_015cfd18 + 0x15cfc34));
  puVar5 = *(undefined4 **)(_UNK_015cfd1c + 0x15cfc48);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_015cfd20 + 0x15cfc60);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[9] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_015cfd24 + 0x15cfcb8);
  param_1[10] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015cfd28 + 0x15cfcd8));
                    /* WARNING: Could not recover jumptable at 0x015cfcf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventFightDetail$$.ctor RVA 0x15bfd2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015cfd2c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_015cfe68 + 0x15cfd44);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015cfe6c + 0x15cfd58));
    func_0x01384978(*(undefined4 *)(_UNK_015cfe70 + 0x15cfd64));
    *pcVar4 = '\x01';
  }
  FUN_015cfba8(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar5,**(undefined4 **)(_UNK_015cfe74 + 0x15cfda4));
  iVar5 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_015cfe78 + 0x15cfdd8);
  uVar1 = func_0x0244f968(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventFightDetail$$Clone RVA 0x15bfe7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015cfe7c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015cfed0 + 0x15cfe90);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015cfed4 + 0x15cfea4));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015cfed8 + 0x15cfeb8));
  FUN_015cfd2c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventFightDetail$$ProxyInternalMergeFrom RVA 0x15bfedc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015cfedc(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_015d0180 + 0x15cfef8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d0184 + 0x15cff0c));
    func_0x01384978(*(undefined4 *)(_UNK_015d0188 + 0x15cff18));
    func_0x01384978(*(undefined4 *)(_UNK_015d018c + 0x15cff24));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015d0190 + 0x15cff54);
    puVar8 = *(undefined4 **)(_UNK_015d0194 + 0x15cff5c);
    puVar9 = *(undefined4 **)(_UNK_015d0198 + 0x15cff64);
    do {
      if (uVar1 < 0x23) {
        if (uVar1 < 0x19) {
          if (uVar1 == 8) {
            uVar3 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar3;
          }
          else {
            if (uVar1 != 0x10) {
              if (uVar1 != 0x18) goto LAB_015d0100;
              goto LAB_015d0040;
            }
            uVar3 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x14) = uVar3;
          }
        }
        else {
          if (uVar1 != 0x1a) {
            if (uVar1 != 0x20 && uVar1 != 0x22) goto LAB_015d0100;
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x20);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
            goto LAB_015d0064;
          }
LAB_015d0040:
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x18);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
LAB_015d0064:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0244f96c(iVar6,param_2,uVar3,*puVar8);
        }
      }
      else if (uVar1 < 0x31) {
        if (uVar1 == 0x28 || uVar1 == 0x2a) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x24);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
          goto LAB_015d0064;
        }
        if (uVar1 != 0x30) goto LAB_015d0100;
        uVar3 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x1c) = uVar3;
      }
      else if (uVar1 < 0x3b) {
        if ((uVar1 | 2) == 0x3a) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x28);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
          goto LAB_015d0064;
        }
LAB_015d0100:
        uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar3;
      }
      else if (uVar1 == 0x40) {
        uVar3 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
      }
      else {
        if (uVar1 != 0x4a) goto LAB_015d0100;
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
        func_0x0244f950(iVar6,param_2,uVar3,*puVar9);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventFightDetail$$get_XXX_RowIdentifier RVA 0x15c019c =====

undefined4 FUN_015d019c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ===== fat.rawdata.EventFightDetail$$set_XXX_RowIdentifier RVA 0x15c01a4 =====

void FUN_015d01a4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// ===== fat.rawdata.EventFightDetail$$.cctor RVA 0x15c01ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015d01ac(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015d0280 + 0x15d01bc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d0284 + 0x15d01d0));
    func_0x01384978(*(undefined4 *)(_UNK_015d0288 + 0x15d01dc));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015d028c + 0x15d01f0);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015d0290 + 0x15d0200);
  uVar1 = func_0x0244f954(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f970(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  return;
}


