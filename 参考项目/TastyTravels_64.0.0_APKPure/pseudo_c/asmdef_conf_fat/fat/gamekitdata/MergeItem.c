/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.MergeItem$$.ctor RVA 0x1791b20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a1b20(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_017a1ba4 + 0x17a1b34);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a1ba8 + 0x17a1b48));
    func_0x01384978(*(undefined4 *)(_UNK_017a1bac + 0x17a1b54));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_017a1bb0 + 0x17a1b68) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_017a1bb4 + 0x17a1b84));
                    /* WARNING: Could not recover jumptable at 0x017a1ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.MergeItem$$.ctor RVA 0x1791bb8 =====

void FUN_017a1bb8(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  FUN_017a1b20();
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  uVar5 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x14) = uVar5;
  piVar1 = *(int **)(param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x140))(piVar1,*(undefined4 *)(*piVar1 + 0x144));
  }
  piVar1 = *(int **)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  if (piVar1 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar1 + 0x140))(piVar1,*(undefined4 *)(*piVar1 + 0x144));
  }
  piVar1 = *(int **)(param_2 + 0x2c);
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  uVar4 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x140))(piVar1,*(undefined4 *)(*piVar1 + 0x144));
  }
  piVar1 = *(int **)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  if (piVar1 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar1 + 0x140))(piVar1,*(undefined4 *)(*piVar1 + 0x144));
  }
  piVar1 = *(int **)(param_2 + 0x34);
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  uVar4 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x140))(piVar1,*(undefined4 *)(*piVar1 + 0x144));
  }
  piVar1 = *(int **)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  if (piVar1 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar1 + 0x140))(piVar1,*(undefined4 *)(*piVar1 + 0x144));
  }
  piVar1 = *(int **)(param_2 + 0x3c);
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  uVar4 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x140))(piVar1,*(undefined4 *)(*piVar1 + 0x144));
  }
  piVar1 = *(int **)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  if (piVar1 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar1 + 0x140))(piVar1,*(undefined4 *)(*piVar1 + 0x144));
  }
  piVar1 = *(int **)(param_2 + 0x44);
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  uVar4 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x140))(piVar1,*(undefined4 *)(*piVar1 + 0x144));
  }
  piVar1 = *(int **)(param_2 + 0x4c);
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  if (piVar1 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar1 + 0x140))(piVar1,*(undefined4 *)(*piVar1 + 0x144));
  }
  piVar1 = *(int **)(param_2 + 0x50);
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  uVar4 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x140))(piVar1,*(undefined4 *)(*piVar1 + 0x144));
  }
  piVar1 = *(int **)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  if (piVar1 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar1 + 0x140))(piVar1,*(undefined4 *)(*piVar1 + 0x144));
  }
  piVar1 = *(int **)(param_2 + 0x58);
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  uVar4 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x140))(piVar1,*(undefined4 *)(*piVar1 + 0x144));
  }
  piVar1 = *(int **)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  if (piVar1 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar1 + 0x140))(piVar1,*(undefined4 *)(*piVar1 + 0x144));
  }
  piVar1 = *(int **)(param_2 + 0x60);
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  uVar4 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x140))(piVar1,*(undefined4 *)(*piVar1 + 0x144));
  }
  piVar1 = *(int **)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  if (piVar1 != (int *)0x0) {
    uVar4 = (**(code **)(*piVar1 + 0x140))(piVar1,*(undefined4 *)(*piVar1 + 0x144));
  }
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 100) = uVar4;
  uVar2 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.gamekitdata.MergeItem$$Clone RVA 0x1791e90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017a1e90(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_017a1ee4 + 0x17a1ea4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a1ee8 + 0x17a1eb8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_017a1eec + 0x17a1ecc));
  FUN_017a1bb8(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.MergeItem$$InternalWriteTo RVA 0x1791ef0 =====

void FUN_017a1ef0(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    func_0x01485198(param_2,8,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0xc),0);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x01485198(param_2,0x10,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x10),0);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    func_0x01485198(param_2,0x18,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x14),0);
  }
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
    func_0x01485108(param_2,*(undefined4 *)(param_1 + 0x20),0);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x01485198(param_2,0x3a,0);
    func_0x0244fa1c(param_2,*(undefined4 *)(param_1 + 0x24),0);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    func_0x01485198(param_2,0x42,0);
    func_0x0244fa1c(param_2,*(undefined4 *)(param_1 + 0x28),0);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    func_0x01485198(param_2,0x4a,0);
    func_0x0244fa1c(param_2,*(undefined4 *)(param_1 + 0x2c),0);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    func_0x01485198(param_2,0x52,0);
    func_0x0244fa1c(param_2,*(undefined4 *)(param_1 + 0x30),0);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    func_0x01485198(param_2,0x5a,0);
    func_0x0244fa1c(param_2,*(undefined4 *)(param_1 + 0x34),0);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    func_0x01485198(param_2,0x62,0);
    func_0x0244fa1c(param_2,*(undefined4 *)(param_1 + 0x38),0);
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    func_0x01485198(param_2,0x6a,0);
    func_0x0244fa1c(param_2,*(undefined4 *)(param_1 + 0x3c),0);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    func_0x01485198(param_2,0x72,0);
    func_0x0244fa1c(param_2,*(undefined4 *)(param_1 + 0x40),0);
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    func_0x01485198(param_2,0x7a,0);
    func_0x0244fa1c(param_2,*(undefined4 *)(param_1 + 0x44),0);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    func_0x014851a8(param_2,0x80,1,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x48),0);
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    func_0x014851a8(param_2,0x8a,1,0);
    func_0x0244fa1c(param_2,*(undefined4 *)(param_1 + 0x4c),0);
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    func_0x014851a8(param_2,0x92,1,0);
    func_0x0244fa1c(param_2,*(undefined4 *)(param_1 + 0x50),0);
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    func_0x014851a8(param_2,0x9a,1,0);
    func_0x0244fa1c(param_2,*(undefined4 *)(param_1 + 0x54),0);
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    func_0x014851a8(param_2,0xa2,1,0);
    func_0x0244fa1c(param_2,*(undefined4 *)(param_1 + 0x58),0);
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    func_0x014851a8(param_2,0xaa,1,0);
    func_0x0244fa1c(param_2,*(undefined4 *)(param_1 + 0x5c),0);
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    func_0x014851a8(param_2,0xb2,1,0);
    func_0x0244fa1c(param_2,*(undefined4 *)(param_1 + 0x60),0);
  }
  if (*(int *)(param_1 + 100) != 0) {
    func_0x014851a8(param_2,0xba,1,0);
    func_0x0244fa1c(param_2,*(undefined4 *)(param_1 + 100),0);
  }
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)&UNK_044e88b4)(*(int *)(param_1 + 8),param_2,0);
    return;
  }
  return;
}



// ===== fat.gamekitdata.MergeItem$$ProxyCalculateSize RVA 0x1792330 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017a2330(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = (char *)(_UNK_017a28e8 + 0x17a2344);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a28ec + 0x17a2358));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_017a28f0 + 0x17a2378) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar2,0);
    iVar2 = iVar2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a28f4 + 0x17a23b8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a28f8 + 0x17a23f4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a28fc + 0x17a2430) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a2900 + 0x17a246c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a2904 + 0x17a24a8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244fa80(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a2908 + 0x17a24e4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244fa3c(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a290c + 0x17a2520) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244fa3c(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a2910 + 0x17a255c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244fa3c(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a2914 + 0x17a2598) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244fa3c(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a2918 + 0x17a25d4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244fa3c(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a291c + 0x17a2610) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244fa3c(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x3c);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a2920 + 0x17a264c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244fa3c(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x40);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a2924 + 0x17a2688) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244fa3c(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x44);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a2928 + 0x17a26c4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244fa3c(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x48);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a292c + 0x17a2700) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 2;
  }
  iVar3 = *(int *)(param_1 + 0x4c);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a2930 + 0x17a273c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244fa3c(iVar3,0);
    iVar2 = iVar2 + iVar3 + 2;
  }
  iVar3 = *(int *)(param_1 + 0x50);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a2934 + 0x17a2778) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244fa3c(iVar3,0);
    iVar2 = iVar2 + iVar3 + 2;
  }
  iVar3 = *(int *)(param_1 + 0x54);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a2938 + 0x17a27b4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244fa3c(iVar3,0);
    iVar2 = iVar2 + iVar3 + 2;
  }
  iVar3 = *(int *)(param_1 + 0x58);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a293c + 0x17a27f0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244fa3c(iVar3,0);
    iVar2 = iVar2 + iVar3 + 2;
  }
  iVar3 = *(int *)(param_1 + 0x5c);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a2940 + 0x17a282c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244fa3c(iVar3,0);
    iVar2 = iVar2 + iVar3 + 2;
  }
  iVar3 = *(int *)(param_1 + 0x60);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a2944 + 0x17a2868) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244fa3c(iVar3,0);
    iVar2 = iVar2 + iVar3 + 2;
  }
  iVar3 = *(int *)(param_1 + 100);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a2948 + 0x17a28a4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244fa3c(iVar3,0);
    iVar2 = iVar2 + iVar3 + 2;
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = func_0x0244f9bc(*(int *)(param_1 + 8),0);
    iVar2 = iVar3 + iVar2;
  }
  return iVar2;
}



// ===== fat.gamekitdata.MergeItem$$ProxyInternalMergeFrom RVA 0x179294c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a294c(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar3 = (char *)(_UNK_017a2ef0 + 0x17a2968);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a2ef4 + 0x17a297c));
    func_0x01384978(*(undefined4 *)(_UNK_017a2ef8 + 0x17a2988));
    func_0x01384978(*(undefined4 *)(_UNK_017a2efc + 0x17a2994));
    func_0x01384978(*(undefined4 *)(_UNK_017a2f00 + 0x17a29a0));
    func_0x01384978(*(undefined4 *)(_UNK_017a2f04 + 0x17a29ac));
    func_0x01384978(*(undefined4 *)(_UNK_017a2f08 + 0x17a29b8));
    func_0x01384978(*(undefined4 *)(_UNK_017a2f0c + 0x17a29c4));
    func_0x01384978(*(undefined4 *)(_UNK_017a2f10 + 0x17a29d0));
    func_0x01384978(*(undefined4 *)(_UNK_017a2f14 + 0x17a29dc));
    func_0x01384978(*(undefined4 *)(_UNK_017a2f18 + 0x17a29e8));
    func_0x01384978(*(undefined4 *)(_UNK_017a2f1c + 0x17a29f4));
    func_0x01384978(*(undefined4 *)(_UNK_017a2f20 + 0x17a2a00));
    func_0x01384978(*(undefined4 *)(_UNK_017a2f24 + 0x17a2a0c));
    func_0x01384978(*(undefined4 *)(_UNK_017a2f28 + 0x17a2a18));
    func_0x01384978(*(undefined4 *)(_UNK_017a2f2c + 0x17a2a24));
    func_0x01384978(*(undefined4 *)(_UNK_017a2f30 + 0x17a2a30));
    *pcVar3 = '\x01';
  }
  iVar4 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar4,0);
  if (uVar1 != 0) {
    puVar6 = *(undefined4 **)(_UNK_017a2f34 + 0x17a2a60);
    puVar7 = *(undefined4 **)(_UNK_017a2f38 + 0x17a2a68);
    puVar8 = *(undefined4 **)(_UNK_017a2f3c + 0x17a2a70);
    puVar9 = *(undefined4 **)(_UNK_017a2f40 + 0x17a2a78);
    do {
      if (uVar1 < 0x5b) {
        if (0x28 < uVar1) {
          if (uVar1 < 0x43) {
            if (uVar1 == 0x30) {
              uVar2 = func_0x01484f98(param_2,iVar4,0);
              *(undefined4 *)(param_1 + 0x20) = uVar2;
              goto LAB_017a2ed0;
            }
            if (uVar1 == 0x3a) {
              iVar5 = *(int *)(param_1 + 0x24);
              if (iVar5 == 0) {
                iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_017a2f54 + 0x17a2d44));
                func_0x0179d338();
                *(int *)(param_1 + 0x24) = iVar5;
              }
            }
            else {
              if (uVar1 != 0x42) goto LAB_017a2c8c;
              iVar5 = *(int *)(param_1 + 0x28);
              if (iVar5 == 0) {
                iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_017a2f44 + 0x17a2b40));
                func_0x0179d6e0();
                *(int *)(param_1 + 0x28) = iVar5;
              }
            }
          }
          else if (uVar1 == 0x4a) {
            iVar5 = *(int *)(param_1 + 0x2c);
            if (iVar5 == 0) {
              iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_017a2f58 + 0x17a2e3c));
              func_0x0179e078();
              *(int *)(param_1 + 0x2c) = iVar5;
            }
          }
          else if (uVar1 == 0x52) {
            iVar5 = *(int *)(param_1 + 0x30);
            if (iVar5 == 0) {
              iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_017a2f5c + 0x17a2e68));
              func_0x0179e3d0();
              *(int *)(param_1 + 0x30) = iVar5;
            }
          }
          else {
            if (uVar1 != 0x5a) goto LAB_017a2c8c;
            iVar5 = *(int *)(param_1 + 0x34);
            if (iVar5 == 0) {
              iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_017a2f48 + 0x17a2c3c));
              func_0x0179e80c();
              *(int *)(param_1 + 0x34) = iVar5;
            }
          }
          goto LAB_017a2ec0;
        }
        if (uVar1 < 0x11) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else if (uVar1 == 0x10) {
            uVar2 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0x10) = uVar2;
          }
          else {
LAB_017a2c8c:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else if (uVar1 == 0x18) {
          uVar2 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x14) = uVar2;
        }
        else if (uVar1 == 0x20) {
          uVar2 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x18) = uVar2;
        }
        else {
          if (uVar1 != 0x28) goto LAB_017a2c8c;
          uVar2 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
      }
      else {
        if (uVar1 < 0x8b) {
          if (uVar1 < 0x73) {
            if (uVar1 == 0x62) {
              iVar5 = *(int *)(param_1 + 0x38);
              if (iVar5 == 0) {
                iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_017a2f60 + 0x17a2cd4));
                func_0x0179ee1c();
                *(int *)(param_1 + 0x38) = iVar5;
              }
            }
            else if (uVar1 == 0x6a) {
              iVar5 = *(int *)(param_1 + 0x3c);
              if (iVar5 == 0) {
                iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_017a2f64 + 0x17a2d00));
                func_0x0179f49c();
                *(int *)(param_1 + 0x3c) = iVar5;
              }
            }
            else {
              if (uVar1 != 0x72) goto LAB_017a2c8c;
              iVar5 = *(int *)(param_1 + 0x40);
              if (iVar5 == 0) {
                iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_017a2f4c + 0x17a2af4));
                func_0x0179f114();
                *(int *)(param_1 + 0x40) = iVar5;
              }
            }
          }
          else if (uVar1 == 0x7a) {
            iVar5 = *(int *)(param_1 + 0x44);
            if (iVar5 == 0) {
              iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_017a2f68 + 0x17a2df8));
              func_0x0179fd04();
              *(int *)(param_1 + 0x44) = iVar5;
            }
          }
          else {
            if (uVar1 == 0x80) {
              uVar2 = func_0x01484f98(param_2,iVar4,0);
              *(undefined4 *)(param_1 + 0x48) = uVar2;
              goto LAB_017a2ed0;
            }
            if (uVar1 != 0x8a) goto LAB_017a2c8c;
            iVar5 = *(int *)(param_1 + 0x4c);
            if (iVar5 == 0) {
              iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_017a2f50 + 0x17a2bf8));
              func_0x017a008c();
              *(int *)(param_1 + 0x4c) = iVar5;
            }
          }
        }
        else if (uVar1 < 0xa3) {
          if (uVar1 == 0x92) {
            iVar5 = *(int *)(param_1 + 0x50);
            if (iVar5 == 0) {
              iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_017a2f6c + 0x17a2d70));
              func_0x017a0414();
              *(int *)(param_1 + 0x50) = iVar5;
            }
          }
          else if (uVar1 == 0x9a) {
            iVar5 = *(int *)(param_1 + 0x54);
            if (iVar5 == 0) {
              iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_017a2f70 + 0x17a2d9c));
              func_0x017a070c();
              *(int *)(param_1 + 0x54) = iVar5;
            }
          }
          else {
            if (uVar1 != 0xa2) goto LAB_017a2c8c;
            iVar5 = *(int *)(param_1 + 0x58);
            if (iVar5 == 0) {
              iVar5 = func_0x01384be4(*puVar6);
              func_0x017a0f74();
              *(int *)(param_1 + 0x58) = iVar5;
            }
          }
        }
        else if (uVar1 == 0xaa) {
          iVar5 = *(int *)(param_1 + 0x5c);
          if (iVar5 == 0) {
            iVar5 = func_0x01384be4(*puVar7);
            func_0x017a126c();
            *(int *)(param_1 + 0x5c) = iVar5;
          }
        }
        else if (uVar1 == 0xb2) {
          iVar5 = *(int *)(param_1 + 0x60);
          if (iVar5 == 0) {
            iVar5 = func_0x01384be4(*puVar8);
            func_0x017a1564();
            *(int *)(param_1 + 0x60) = iVar5;
          }
        }
        else {
          if (uVar1 != 0xba) goto LAB_017a2c8c;
          iVar5 = *(int *)(param_1 + 100);
          if (iVar5 == 0) {
            iVar5 = func_0x01384be4(*puVar9);
            func_0x017a2f74();
            *(int *)(param_1 + 100) = iVar5;
          }
        }
LAB_017a2ec0:
        func_0x01484fd8(param_2,iVar5,0);
      }
LAB_017a2ed0:
      uVar1 = func_0x01484f58(param_2,iVar4,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.gamekitdata.MergeItem$$.cctor RVA 0x179308c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a308c(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_017a30e8 + 0x17a309c);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a30ec + 0x17a30b0));
    func_0x01384978(*(undefined4 *)(_UNK_017a30f0 + 0x17a30bc));
    *pcVar1 = '\x01';
  }
  **(undefined4 **)(**(int **)(_UNK_017a30f4 + 0x17a30d0) + 0x5c) =
       **(undefined4 **)(_UNK_017a30f8 + 0x17a30e0);
  return;
}


