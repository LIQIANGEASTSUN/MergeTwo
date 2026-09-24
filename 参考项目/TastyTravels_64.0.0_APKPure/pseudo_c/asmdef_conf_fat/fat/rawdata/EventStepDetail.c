/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventStepDetail$$.ctor RVA 0x16397e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016497e4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_01649904 + 0x16497f8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01649908 + 0x164980c));
    func_0x01384978(*(undefined4 *)(_UNK_0164990c + 0x1649818));
    func_0x01384978(*(undefined4 *)(_UNK_01649910 + 0x1649824));
    func_0x01384978(*(undefined4 *)(_UNK_01649914 + 0x1649830));
    func_0x01384978(*(undefined4 *)(_UNK_01649918 + 0x164983c));
    func_0x01384978(*(undefined4 *)(_UNK_0164991c + 0x1649848));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_01649920 + 0x164985c);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_01649924 + 0x1649870);
  func_0x0244f948(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar6);
  puVar5 = *(undefined4 **)(_UNK_01649928 + 0x1649898);
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  func_0x0244f964(iVar1,**(undefined4 **)(_UNK_0164992c + 0x16498b0));
  piVar3 = *(int **)(_UNK_01649930 + 0x16498c4);
  param_1[8] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01649934 + 0x16498e4));
                    /* WARNING: Could not recover jumptable at 0x01649900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventStepDetail$$.ctor RVA 0x1639938 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01649938(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_01649a24 + 0x1649950);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01649a28 + 0x1649964));
    func_0x01384978(*(undefined4 *)(_UNK_01649a2c + 0x1649970));
    *pcVar4 = '\x01';
  }
  FUN_016497e4(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_01649a30 + 0x16499b4);
  uVar1 = func_0x0244f94c(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar5,**(undefined4 **)(_UNK_01649a34 + 0x1649a00));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventStepDetail$$Clone RVA 0x1639a38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01649a38(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01649a8c + 0x1649a4c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01649a90 + 0x1649a60));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01649a94 + 0x1649a74));
  FUN_01649938(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventStepDetail$$ProxyInternalMergeFrom RVA 0x1639a98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01649a98(int param_1,int param_2)

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
  
  pcVar3 = (char *)(_UNK_01649c94 + 0x1649ab4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01649c98 + 0x1649ac8));
    func_0x01384978(*(undefined4 *)(_UNK_01649c9c + 0x1649ad4));
    func_0x01384978(*(undefined4 *)(_UNK_01649ca0 + 0x1649ae0));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01649ca4 + 0x1649b10);
    puVar8 = *(undefined4 **)(_UNK_01649ca8 + 0x1649b18);
    puVar9 = *(undefined4 **)(_UNK_01649cac + 0x1649b20);
    do {
      if (uVar1 < 0x1b) {
        if (uVar1 == 8) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else if (uVar1 == 0x10) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x14) = uVar4;
        }
        else {
          if (uVar1 != 0x1a) goto LAB_01649c18;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x1c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
LAB_01649bf4:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0244f950(iVar6,param_2,uVar4,*puVar8);
        }
      }
      else if (uVar1 < 0x23) {
        if ((uVar1 | 2) == 0x22) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x20);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0244f96c(iVar6,param_2,uVar4,*puVar9);
        }
        else {
LAB_01649c18:
          uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
      }
      else {
        if (uVar1 != 0x28) {
          if (uVar1 == 0x32) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x10);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
            goto LAB_01649bf4;
          }
          goto LAB_01649c18;
        }
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x18) = uVar4;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventStepDetail$$get_XXX_RowIdentifier RVA 0x1639cb0 =====

undefined4 FUN_01649cb0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// ===== fat.rawdata.EventStepDetail$$set_XXX_RowIdentifier RVA 0x1639cb8 =====

void FUN_01649cb8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



// ===== fat.rawdata.EventStepDetail$$.cctor RVA 0x1639cc0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01649cc0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01649d64 + 0x1649cd0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01649d68 + 0x1649ce4));
    func_0x01384978(*(undefined4 *)(_UNK_01649d6c + 0x1649cf0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01649d70 + 0x1649d04);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01649d74 + 0x1649d14);
  uVar1 = func_0x0244f954(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}


