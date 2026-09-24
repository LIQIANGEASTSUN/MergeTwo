/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.MergeGlobal$$.ctor RVA 0x177d354 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0178d354(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_0178d478 + 0x178d368);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0178d47c + 0x178d37c));
    func_0x01384978(*(undefined4 *)(_UNK_0178d480 + 0x178d388));
    func_0x01384978(*(undefined4 *)(_UNK_0178d484 + 0x178d394));
    func_0x01384978(*(undefined4 *)(_UNK_0178d488 + 0x178d3a0));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_0178d48c + 0x178d3b4);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_0178d490 + 0x178d3c8);
  func_0x034614f8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x034614f8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x034614f8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x034614f8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x034614f8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_0178d494 + 0x178d438);
  param_1[9] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0178d498 + 0x178d458));
                    /* WARNING: Could not recover jumptable at 0x0178d474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.MergeGlobal$$.ctor RVA 0x1787920 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01797920(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_01797a3c + 0x1797938);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01797a40 + 0x179794c));
    *pcVar4 = '\x01';
  }
  FUN_0178d354(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  iVar5 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_01797a44 + 0x1797994);
  uVar1 = func_0x0345e8e4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0345e8e4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0345e8e4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0345e8e4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0345e8e4(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.gamekitdata.MergeGlobal$$Clone RVA 0x1787a48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01797a48(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01797a9c + 0x1797a5c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01797aa0 + 0x1797a70));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01797aa4 + 0x1797a84));
  FUN_01797920(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.MergeGlobal$$InternalWriteTo RVA 0x1787aa8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01797aa8(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  pcVar2 = (char *)(_UNK_01797ca0 + 0x1797ac0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01797ca4 + 0x1797ad4));
    func_0x01384978(*(undefined4 *)(_UNK_01797ca8 + 0x1797ae0));
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
  piVar5 = *(int **)(_UNK_01797cac + 0x1797b4c);
  iVar3 = *(int *)(param_1 + 0x14);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_01797cb0 + 0x1797b90);
  func_0x034606fc(iVar3,param_2,uVar4,*puVar6);
  iVar1 = *(int *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034606fc(iVar1,param_2,uVar4,*puVar6);
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034606fc(iVar1,param_2,uVar4,*puVar6);
  iVar1 = *(int *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034606fc(iVar1,param_2,uVar4,*puVar6);
  iVar1 = *(int *)(param_1 + 0x24);
  uVar4 = *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034606fc(iVar1,param_2,uVar4,*puVar6);
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x01485198(param_2,0x40,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x28),0);
  }
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)&UNK_044e88b4)(*(int *)(param_1 + 8),param_2,0);
    return;
  }
  return;
}



// ===== fat.gamekitdata.MergeGlobal$$ProxyCalculateSize RVA 0x1787cb4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01797cb4(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  
  pcVar1 = (char *)(_UNK_01797ee8 + 0x1797cc8);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01797eec + 0x1797cdc));
    func_0x01384978(*(undefined4 *)(_UNK_01797ef0 + 0x1797ce8));
    func_0x01384978(*(undefined4 *)(_UNK_01797ef4 + 0x1797cf4));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_01797ef8 + 0x1797d14) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar2,0);
    iVar2 = iVar2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_01797efc + 0x1797d54) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  piVar10 = *(int **)(_UNK_01797f00 + 0x1797d84);
  iVar4 = *(int *)(param_1 + 0x14);
  iVar3 = *piVar10;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar10;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar11 = *(undefined4 **)(_UNK_01797f04 + 0x1797dc4);
  iVar3 = func_0x034608b8(iVar4,uVar8,*puVar11);
  iVar4 = *(int *)(param_1 + 0x18);
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x034608b8(iVar4,uVar8,*puVar11);
  iVar5 = *(int *)(param_1 + 0x1c);
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x034608b8(iVar5,uVar8,*puVar11);
  iVar6 = *(int *)(param_1 + 0x20);
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x034608b8(iVar6,uVar8,*puVar11);
  iVar7 = *(int *)(param_1 + 0x24);
  uVar8 = *(undefined4 *)(*(int *)(*piVar10 + 0x5c) + 0x14);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = func_0x034608b8(iVar7,uVar8,*puVar11);
  iVar9 = *(int *)(param_1 + 0x28);
  iVar7 = iVar3 + iVar2 + iVar4 + iVar5 + iVar6 + iVar7;
  if (iVar9 != 0) {
    if (*(int *)(**(int **)(_UNK_01797f08 + 0x1797ea4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar9,0);
    iVar7 = iVar7 + iVar2 + 1;
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = func_0x0244f9bc(*(int *)(param_1 + 8),0);
    iVar7 = iVar2 + iVar7;
  }
  return iVar7;
}



// ===== fat.gamekitdata.MergeGlobal$$ProxyInternalMergeFrom RVA 0x1787f0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01797f0c(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_01798130 + 0x1797f24);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01798134 + 0x1797f38));
    func_0x01384978(*(undefined4 *)(_UNK_01798138 + 0x1797f44));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0179813c + 0x1797f74);
    puVar8 = *(undefined4 **)(_UNK_01798140 + 0x1797f7c);
    do {
      if (uVar1 < 0x23) {
        if (0x10 < uVar1) {
          if (uVar1 == 0x1a) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x14);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
          }
          else {
            if (uVar1 != 0x22) goto LAB_01798050;
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x18);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
          }
          goto LAB_017980f4;
        }
        if (uVar1 == 8) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar2;
        }
        else {
          if (uVar1 != 0x10) goto LAB_01798050;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x10) = uVar2;
        }
      }
      else {
        if (uVar1 < 0x33) {
          if (uVar1 == 0x2a) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x1c);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
          }
          else {
            if (uVar1 != 0x32) goto LAB_01798050;
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x20);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
          }
        }
        else {
          if (uVar1 != 0x3a) {
            if (uVar1 == 0x40) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x28) = uVar2;
              goto LAB_01798114;
            }
LAB_01798050:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
            goto LAB_01798114;
          }
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x24);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
        }
LAB_017980f4:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x034604a8(iVar6,param_2,uVar2,*puVar8);
      }
LAB_01798114:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.gamekitdata.MergeGlobal$$.cctor RVA 0x1788144 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01798144(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  pcVar4 = (char *)(_UNK_0179839c + 0x1798158);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017983a0 + 0x179816c));
    func_0x01384978(*(undefined4 *)(_UNK_017983a4 + 0x1798178));
    func_0x01384978(*(undefined4 *)(_UNK_017983a8 + 0x1798184));
    func_0x01384978(*(undefined4 *)(_UNK_017983ac + 0x1798190));
    *pcVar4 = '\x01';
  }
  piVar6 = *(int **)(_UNK_017983b0 + 0x17981a8);
  **(undefined4 **)(*piVar6 + 0x5c) = **(undefined4 **)(_UNK_017983b4 + 0x17981b8);
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  puVar7 = *(undefined4 **)(_UNK_017983b8 + 0x17981ec);
  uVar3 = func_0x01384be4(*puVar7);
  puVar5 = *(undefined4 **)(_UNK_017983bc + 0x179820c);
  func_0x0244f990(uVar3,uVar1,uVar2,0x1a,*puVar5);
  *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 4) = uVar3;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar7);
  func_0x0244f990(uVar3,uVar1,uVar2,0x22,*puVar5);
  *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 8) = uVar3;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar7);
  func_0x0244f990(uVar3,uVar1,uVar2,0x2a,*puVar5);
  *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0xc) = uVar3;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar7);
  func_0x0244f990(uVar3,uVar1,uVar2,0x32,*puVar5);
  *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x10) = uVar3;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar7);
  func_0x0244f990(uVar3,uVar1,uVar2,0x3a,*puVar5);
  *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x14) = uVar3;
  return;
}


