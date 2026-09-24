/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventOrderRate$$.ctor RVA 0x1606508 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01616508(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_016165d0 + 0x161651c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016165d4 + 0x1616530));
    func_0x01384978(*(undefined4 *)(_UNK_016165d8 + 0x161653c));
    func_0x01384978(*(undefined4 *)(_UNK_016165dc + 0x1616548));
    func_0x01384978(*(undefined4 *)(_UNK_016165e0 + 0x1616554));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016165e4 + 0x1616568));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_016165e8 + 0x161657c));
  piVar2 = *(int **)(_UNK_016165ec + 0x1616590);
  param_1[4] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016165f0 + 0x16165b0));
                    /* WARNING: Could not recover jumptable at 0x016165cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventOrderRate$$.ctor RVA 0x16065f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016165f4(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  
  pcVar2 = (char *)(_UNK_0161669c + 0x161660c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016166a0 + 0x1616620));
    *pcVar2 = '\x01';
  }
  FUN_01616508(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar3,**(undefined4 **)(_UNK_016166a4 + 0x1616660));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar4 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x1c) = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  uVar1 = func_0x0244f914(uVar1,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventOrderRate$$Clone RVA 0x16066a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016166a8(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016166fc + 0x16166bc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01616700 + 0x16166d0));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01616704 + 0x16166e4));
  FUN_016165f4(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventOrderRate$$ProxyInternalMergeFrom RVA 0x1606708 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01616708(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_016168c4 + 0x1616720);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016168c8 + 0x1616734));
    func_0x01384978(*(undefined4 *)(_UNK_016168cc + 0x1616740));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016168d0 + 0x1616770);
    puVar8 = *(undefined4 **)(_UNK_016168d4 + 0x1616778);
    do {
      if (uVar1 < 0x19) {
        if (uVar1 == 8) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar2;
        }
        else if (uVar1 == 0x10) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x18) = uVar2;
        }
        else {
          if (uVar1 != 0x18) goto LAB_01616804;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
      }
      else if (uVar1 < 0x29) {
        if (uVar1 == 0x20) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
        else if (uVar1 == 0x28) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x24) = uVar2;
        }
        else {
LAB_01616804:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 == 0x32) {
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
        if (uVar1 != 0x38) goto LAB_01616804;
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x14) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventOrderRate$$get_XXX_RowIdentifier RVA 0x16068d8 =====

undefined4 FUN_016168d8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ===== fat.rawdata.EventOrderRate$$set_XXX_RowIdentifier RVA 0x16068e0 =====

void FUN_016168e0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



// ===== fat.rawdata.EventOrderRate$$.cctor RVA 0x16068e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016168e8(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0161695c + 0x16168f8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01616960 + 0x161690c));
    func_0x01384978(*(undefined4 *)(_UNK_01616964 + 0x1616918));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01616968 + 0x161692c);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0161696c + 0x161693c);
  uVar1 = func_0x0244f954(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


