/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventFestBoard$$.ctor RVA 0x15bd1a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015cd1a4(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_015cd26c + 0x15cd1b8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015cd270 + 0x15cd1cc));
    func_0x01384978(*(undefined4 *)(_UNK_015cd274 + 0x15cd1d8));
    func_0x01384978(*(undefined4 *)(_UNK_015cd278 + 0x15cd1e4));
    func_0x01384978(*(undefined4 *)(_UNK_015cd27c + 0x15cd1f0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015cd280 + 0x15cd204));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_015cd284 + 0x15cd218));
  piVar2 = *(int **)(_UNK_015cd288 + 0x15cd22c);
  param_1[4] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015cd28c + 0x15cd24c));
                    /* WARNING: Could not recover jumptable at 0x015cd268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventFestBoard$$.ctor RVA 0x15bd290 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015cd290(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pcVar4 = (char *)(_UNK_015cd358 + 0x15cd2a8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015cd35c + 0x15cd2bc));
    *pcVar4 = '\x01';
  }
  FUN_015cd1a4(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0244f94c(iVar5,**(undefined4 **)(_UNK_015cd360 + 0x15cd304));
  uVar6 = *(undefined8 *)(param_2 + 0x14);
  uVar7 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x14) = uVar6;
  *(undefined8 *)(param_1 + 0x1c) = uVar7;
  uVar6 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x2c) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar1 = *(undefined1 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  uVar2 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.EventFestBoard$$Clone RVA 0x15bd364 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015cd364(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015cd3b8 + 0x15cd378);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015cd3bc + 0x15cd38c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015cd3c0 + 0x15cd3a0));
  FUN_015cd290(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventFestBoard$$ProxyInternalMergeFrom RVA 0x15bd3c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015cd3c4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  pcVar3 = (char *)(_UNK_015cd6d4 + 0x15cd3dc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015cd6d8 + 0x15cd3f0));
    func_0x01384978(*(undefined4 *)(_UNK_015cd6dc + 0x15cd3fc));
    *pcVar3 = '\x01';
  }
  iVar4 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar4,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015cd6e0 + 0x15cd42c);
    puVar8 = *(undefined4 **)(_UNK_015cd6e4 + 0x15cd434);
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
              func_0x0244f950(iVar5,param_2,uVar6,*puVar8);
            }
            else {
LAB_015cd5e0:
              uVar6 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
              *(undefined4 *)(param_1 + 8) = uVar6;
            }
          }
          else if (uVar1 == 0x18) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x18) = uVar6;
          }
          else {
            if (uVar1 != 0x20) goto LAB_015cd5e0;
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x1c) = uVar6;
          }
        }
        else if (uVar1 < 0x31) {
          if (uVar1 == 0x28) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x20) = uVar6;
          }
          else {
            if (uVar1 != 0x30) goto LAB_015cd5e0;
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x24) = uVar6;
          }
        }
        else if (uVar1 == 0x38) {
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x28) = uVar6;
        }
        else {
          if (uVar1 != 0x40) goto LAB_015cd5e0;
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
            if (uVar1 != 0x50) goto LAB_015cd5e0;
            lVar9 = func_0x01484f88(param_2,iVar4,0);
            *(bool *)(param_1 + 0x34) = lVar9 != 0;
          }
        }
        else if (uVar1 == 0x58) {
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x38) = uVar6;
        }
        else {
          if (uVar1 != 0x60) goto LAB_015cd5e0;
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x3c) = uVar6;
        }
      }
      else if (uVar1 < 0x71) {
        if (uVar1 == 0x68) {
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x40) = uVar6;
        }
        else {
          if (uVar1 != 0x70) goto LAB_015cd5e0;
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x44) = uVar6;
        }
      }
      else if (uVar1 == 0x78) {
        uVar6 = func_0x01484f98(param_2,iVar4,0);
        *(undefined4 *)(param_1 + 0x48) = uVar6;
      }
      else {
        if (uVar1 != 0x80) goto LAB_015cd5e0;
        uVar6 = func_0x01484f98(param_2,iVar4,0);
        *(undefined4 *)(param_1 + 0x14) = uVar6;
      }
      uVar1 = func_0x01484f58(param_2,iVar4,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventFestBoard$$get_XXX_RowIdentifier RVA 0x15bd6e8 =====

undefined4 FUN_015cd6e8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== fat.rawdata.EventFestBoard$$set_XXX_RowIdentifier RVA 0x15bd6f0 =====

void FUN_015cd6f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}



// ===== fat.rawdata.EventFestBoard$$.cctor RVA 0x15bd6f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015cd6f8(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015cd76c + 0x15cd708);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015cd770 + 0x15cd71c));
    func_0x01384978(*(undefined4 *)(_UNK_015cd774 + 0x15cd728));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015cd778 + 0x15cd73c);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015cd77c + 0x15cd74c);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


