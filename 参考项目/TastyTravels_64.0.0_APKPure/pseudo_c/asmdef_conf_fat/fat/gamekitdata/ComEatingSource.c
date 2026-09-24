/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.ComEatingSource$$.ctor RVA 0x178f49c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179f49c(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0179f564 + 0x179f4b0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179f568 + 0x179f4c4));
    func_0x01384978(*(undefined4 *)(_UNK_0179f56c + 0x179f4d0));
    func_0x01384978(*(undefined4 *)(_UNK_0179f570 + 0x179f4dc));
    func_0x01384978(*(undefined4 *)(_UNK_0179f574 + 0x179f4e8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0179f578 + 0x179f4fc));
  func_0x034614f8(iVar1,**(undefined4 **)(_UNK_0179f57c + 0x179f510));
  piVar2 = *(int **)(_UNK_0179f580 + 0x179f524);
  param_1[5] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0179f584 + 0x179f544));
                    /* WARNING: Could not recover jumptable at 0x0179f560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.ComEatingSource$$.ctor RVA 0x178f588 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179f588(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  
  pcVar5 = (char *)(_UNK_0179f628 + 0x179f5a0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179f62c + 0x179f5b4));
    *pcVar5 = '\x01';
  }
  FUN_0179f49c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  iVar6 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0345e8e4(iVar6,**(undefined4 **)(_UNK_0179f630 + 0x179f5f8));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.gamekitdata.ComEatingSource$$Clone RVA 0x178f634 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0179f634(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0179f688 + 0x179f648);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179f68c + 0x179f65c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0179f690 + 0x179f670));
  FUN_0179f588(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.ComEatingSource$$InternalWriteTo RVA 0x178f694 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179f694(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_0179f824 + 0x179f6ac);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179f828 + 0x179f6c0));
    func_0x01384978(*(undefined4 *)(_UNK_0179f82c + 0x179f6cc));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    func_0x01485198(param_2,8,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0xc),0);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x01485198(param_2,0x10,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x10),0);
  }
  piVar4 = *(int **)(_UNK_0179f830 + 0x179f738);
  iVar3 = *(int *)(param_1 + 0x14);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x034606fc(iVar3,param_2,uVar5,**(undefined4 **)(_UNK_0179f834 + 0x179f778));
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x01485198(param_2,0x20,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x18),0);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x01485198(param_2,0x28,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x1c),0);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    func_0x01485198(param_2,0x30,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x20),0);
  }
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)&UNK_044e88b4)(*(int *)(param_1 + 8),param_2,0);
    return;
  }
  return;
}



// ===== fat.gamekitdata.ComEatingSource$$ProxyCalculateSize RVA 0x178f838 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0179f838(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  pcVar1 = (char *)(_UNK_0179fa24 + 0x179f84c);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179fa28 + 0x179f860));
    func_0x01384978(*(undefined4 *)(_UNK_0179fa2c + 0x179f86c));
    func_0x01384978(*(undefined4 *)(_UNK_0179fa30 + 0x179f878));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_0179fa34 + 0x179f898) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar2,0);
    iVar2 = iVar2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_0179fa38 + 0x179f8d8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  piVar5 = *(int **)(_UNK_0179fa3c + 0x179f908);
  iVar4 = *(int *)(param_1 + 0x14);
  iVar3 = *piVar5;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar5;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x034608b8(iVar4,uVar6,**(undefined4 **)(_UNK_0179fa40 + 0x179f944));
  iVar4 = *(int *)(param_1 + 0x18);
  iVar3 = iVar3 + iVar2;
  if (iVar4 != 0) {
    if (*(int *)(**(int **)(_UNK_0179fa44 + 0x179f968) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar4,0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 != 0) {
    if (*(int *)(**(int **)(_UNK_0179fa48 + 0x179f9a4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar2,0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 != 0) {
    if (*(int *)(**(int **)(_UNK_0179fa4c + 0x179f9e0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar2,0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = func_0x0244f9bc(*(int *)(param_1 + 8),0);
    iVar3 = iVar2 + iVar3;
  }
  return iVar3;
}



// ===== fat.gamekitdata.ComEatingSource$$ProxyInternalMergeFrom RVA 0x178fa50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179fa50(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar3 = (char *)(_UNK_0179fbe4 + 0x179fa68);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179fbe8 + 0x179fa7c));
    func_0x01384978(*(undefined4 *)(_UNK_0179fbec + 0x179fa88));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0179fbf0 + 0x179fab8);
    puVar8 = *(undefined4 **)(_UNK_0179fbf4 + 0x179fac0);
    do {
      if (uVar1 < 0x1b) {
        if (uVar1 == 8) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else if (uVar1 == 0x10) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x10) = uVar4;
        }
        else if (uVar1 == 0x1a) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x14);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x034604a8(iVar6,param_2,uVar4,*puVar8);
        }
        else {
LAB_0179fb54:
          uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
      }
      else if (uVar1 == 0x20) {
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x18) = uVar4;
      }
      else if (uVar1 == 0x28) {
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x1c) = uVar4;
      }
      else {
        if (uVar1 != 0x30) goto LAB_0179fb54;
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x20) = uVar4;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.gamekitdata.ComEatingSource$$.cctor RVA 0x178fbf8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179fbf8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_0179fce0 + 0x179fc0c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179fce4 + 0x179fc20));
    func_0x01384978(*(undefined4 *)(_UNK_0179fce8 + 0x179fc2c));
    func_0x01384978(*(undefined4 *)(_UNK_0179fcec + 0x179fc38));
    func_0x01384978(*(undefined4 *)(_UNK_0179fcf0 + 0x179fc44));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_0179fcf4 + 0x179fc5c);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_0179fcf8 + 0x179fc6c);
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_0179fcfc + 0x179fca0));
  func_0x0244f990(uVar3,uVar1,uVar2,0x1a,**(undefined4 **)(_UNK_0179fd00 + 0x179fcc0));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar3;
  return;
}


