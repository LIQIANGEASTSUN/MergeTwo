/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.FrozenItem$$.ctor RVA 0x1672380 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01682380(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01682448 + 0x1682394);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0168244c + 0x16823a8));
    func_0x01384978(*(undefined4 *)(_UNK_01682450 + 0x16823b4));
    func_0x01384978(*(undefined4 *)(_UNK_01682454 + 0x16823c0));
    func_0x01384978(*(undefined4 *)(_UNK_01682458 + 0x16823cc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0168245c + 0x16823e0));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_01682460 + 0x16823f4));
  piVar2 = *(int **)(_UNK_01682464 + 0x1682408);
  param_1[4] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01682468 + 0x1682428));
                    /* WARNING: Could not recover jumptable at 0x01682444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.FrozenItem$$.ctor RVA 0x167246c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0168246c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  
  pcVar5 = (char *)(_UNK_01682508 + 0x1682484);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0168250c + 0x1682498));
    *pcVar5 = '\x01';
  }
  FUN_01682380(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,**(undefined4 **)(_UNK_01682510 + 0x16824d8));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar7 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.FrozenItem$$Clone RVA 0x1672514 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01682514(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01682568 + 0x1682528);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0168256c + 0x168253c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01682570 + 0x1682550));
  FUN_0168246c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.FrozenItem$$ProxyInternalMergeFrom RVA 0x1672574 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01682574(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_016826e8 + 0x168258c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016826ec + 0x16825a0));
    func_0x01384978(*(undefined4 *)(_UNK_016826f0 + 0x16825ac));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016826f4 + 0x16825dc);
    puVar8 = *(undefined4 **)(_UNK_016826f8 + 0x16825e4);
    do {
      if (uVar1 < 0x11) {
        if (uVar1 == 8) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar2;
        }
        else if (uVar1 == 0x10) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x14) = uVar2;
        }
        else {
LAB_01682670:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 == 0x18) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x18) = uVar2;
      }
      else if (uVar1 == 0x20) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x1c) = uVar2;
      }
      else {
        if (uVar1 != 0x2a) goto LAB_01682670;
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
        func_0x036520e8(iVar6,param_2,uVar2,*puVar8);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.FrozenItem$$get_XXX_RowIdentifier RVA 0x16726fc =====

undefined4 FUN_016826fc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== fat.rawdata.FrozenItem$$set_XXX_RowIdentifier RVA 0x1672704 =====

void FUN_01682704(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== fat.rawdata.FrozenItem$$.cctor RVA 0x167270c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0168270c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01682780 + 0x168271c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01682784 + 0x1682730));
    func_0x01384978(*(undefined4 *)(_UNK_01682788 + 0x168273c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0168278c + 0x1682750);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01682790 + 0x1682760);
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


