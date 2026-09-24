/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventMiniBoardMulti$$.ctor RVA 0x15ed690 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015fd690(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_015fd758 + 0x15fd6a4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fd75c + 0x15fd6b8));
    func_0x01384978(*(undefined4 *)(_UNK_015fd760 + 0x15fd6c4));
    func_0x01384978(*(undefined4 *)(_UNK_015fd764 + 0x15fd6d0));
    func_0x01384978(*(undefined4 *)(_UNK_015fd768 + 0x15fd6dc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015fd76c + 0x15fd6f0));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_015fd770 + 0x15fd704));
  piVar2 = *(int **)(_UNK_015fd774 + 0x15fd718);
  param_1[4] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015fd778 + 0x15fd738));
                    /* WARNING: Could not recover jumptable at 0x015fd754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventMiniBoardMulti$$.ctor RVA 0x15ed77c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015fd77c(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pcVar4 = (char *)(_UNK_015fd830 + 0x15fd794);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fd834 + 0x15fd7a8));
    *pcVar4 = '\x01';
  }
  FUN_015fd690(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0244f94c(iVar5,**(undefined4 **)(_UNK_015fd838 + 0x15fd7f0));
  uVar6 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x1c) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x24);
  uVar7 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar1 = *(undefined1 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x24) = uVar6;
  *(undefined8 *)(param_1 + 0x2c) = uVar7;
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  *(undefined1 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  uVar2 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.EventMiniBoardMulti$$Clone RVA 0x15ed83c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015fd83c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015fd890 + 0x15fd850);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fd894 + 0x15fd864));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015fd898 + 0x15fd878));
  FUN_015fd77c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventMiniBoardMulti$$ProxyInternalMergeFrom RVA 0x15ed89c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015fd89c(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  pcVar4 = (char *)(_UNK_015fdb0c + 0x15fd8b4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fdb10 + 0x15fd8c8));
    func_0x01384978(*(undefined4 *)(_UNK_015fdb14 + 0x15fd8d4));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015fdb18 + 0x15fd904);
    puVar8 = *(undefined4 **)(_UNK_015fdb1c + 0x15fd90c);
    do {
      if (uVar1 < 0x31) {
        if (uVar1 < 0x19) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else if (uVar1 == 0x10) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x18) = uVar2;
          }
          else if (uVar1 == 0x18) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x1c) = uVar2;
          }
          else {
LAB_015fd9e8:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else if (uVar1 == 0x20) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
        else if (uVar1 == 0x28) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x24) = uVar2;
        }
        else {
          if (uVar1 != 0x30) goto LAB_015fd9e8;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x28) = uVar2;
        }
      }
      else if (uVar1 < 0x49) {
        if (uVar1 == 0x38) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x30) = uVar2;
        }
        else if (uVar1 == 0x40) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x14) = uVar2;
        }
        else {
          if (uVar1 != 0x48) goto LAB_015fd9e8;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x34) = uVar2;
        }
      }
      else if (uVar1 == 0x50) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x2c) = uVar2;
      }
      else if (uVar1 == 0x5a) {
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
        func_0x0244f950(iVar6,param_2,uVar2,*puVar8);
      }
      else {
        if (uVar1 != 0x60) goto LAB_015fd9e8;
        lVar9 = func_0x01484f88(param_2,iVar5,0);
        *(bool *)(param_1 + 0x38) = lVar9 != 0;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventMiniBoardMulti$$get_XXX_RowIdentifier RVA 0x15edb20 =====

undefined4 FUN_015fdb20(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ===== fat.rawdata.EventMiniBoardMulti$$set_XXX_RowIdentifier RVA 0x15edb28 =====

void FUN_015fdb28(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}



// ===== fat.rawdata.EventMiniBoardMulti$$.cctor RVA 0x15edb30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015fdb30(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015fdba4 + 0x15fdb40);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fdba8 + 0x15fdb54));
    func_0x01384978(*(undefined4 *)(_UNK_015fdbac + 0x15fdb60));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015fdbb0 + 0x15fdb74);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015fdbb4 + 0x15fdb84);
  uVar1 = func_0x0244f954(0x5a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


