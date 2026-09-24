/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardInventoryEntry$$Setup RVA 0x1ef8094 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01f08094(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  float fStack_48;
  undefined4 uStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  pcVar6 = (char *)(_UNK_01f08264 + 0x1f080ac);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f08268 + 0x1f080c0));
    func_0x01384978(*(undefined4 *)(_UNK_01f0826c + 0x1f080cc));
    func_0x01384978(*(undefined4 *)(_UNK_01f08270 + 0x1f080d8));
    func_0x01384978(*(undefined4 *)(_UNK_01f08274 + 0x1f080e4));
    func_0x01384978(*(undefined4 *)(_UNK_01f08278 + 0x1f080f0));
    func_0x01384978(*(undefined4 *)(_UNK_01f0827c + 0x1f080fc));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xa4ea,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xa4ea,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    fStack_2c = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    fStack_30 = 0.0;
    func_0x0245494c(&fStack_48,0,0);
    fStack_30 = fStack_48;
    fStack_2c = (float)uStack_44;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&fStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&fStack_30,param_1,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar9 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar3 == 0) {
      uVar5 = 1;
    }
    iVar3 = func_0x0245495c(iVar7,uVar9,&fStack_30,uVar5,0,0);
    return iVar3;
  }
  iVar3 = func_0x0244fc34(param_1,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar9 = func_0x02f67194(iVar3,**(undefined4 **)(_UNK_01f08280 + 0x1f08174));
  *(undefined4 *)(param_1 + 0x10) = uVar9;
  iVar3 = func_0x0244fc34(param_1,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x02450178(iVar3,**(undefined4 **)(_UNK_01f08284 + 0x1f081ac),0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar9 = func_0x0244ffd4(iVar3,0);
  *(undefined4 *)(param_1 + 0x14) = uVar9;
  uVar9 = func_0x0244fc34(param_1,0);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f08288 + 0x1f081f4));
  func_0x0244ffa0(uVar5,param_1,**(undefined4 **)(_UNK_01f0828c + 0x1f08210),0);
  if (*(int *)(**(int **)(_UNK_01f08290 + 0x1f08224) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar3 = func_0x028bf89c(uVar9,0,uVar5,1);
  pcVar6 = (char *)(_UNK_02f5988c + 0x2f59760);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02f59890 + 0x2f59774),
                    **(undefined4 **)(_UNK_01f08294 + 0x1f08258));
    *pcVar6 = '\x01';
  }
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  piVar4 = (int *)func_0x0244fc34(iVar3,0);
  if (piVar4 != (int *)0x0) {
    piVar8 = (int *)0x0;
    if (*piVar4 == **(int **)(_UNK_02f59894 + 0x2f597ac)) {
      piVar8 = piVar4;
    }
    if (piVar8 != (int *)0x0) {
      func_0x0244fd6c(&fStack_38,piVar8,0);
      fVar2 = fStack_34;
      fVar1 = fStack_38;
      func_0x0244fd2c(&fStack_38,piVar8,0);
      func_0x0244fdbc(piVar8,fVar1 + fStack_38 + fStack_30 * 0.5,fVar2 + fStack_34 + fStack_2c * 0.5
                      ,0);
      pcVar6 = (char *)(_UNK_02f59898 + 0x2f5982c);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02f5989c + 0x2f59840));
        *pcVar6 = '\x01';
      }
      iVar7 = *(int *)(**(int **)(_UNK_02f598a0 + 0x2f59858) + 0x5c);
      func_0x0244fe3c(piVar8,*(float *)(iVar7 + 8) * 0.5,*(float *)(iVar7 + 0xc) * 0.5,0);
    }
  }
  return iVar3;
}



// ===== FAT.MBBoardInventoryEntry$$InitOnPreOpen RVA 0x1ef8298 =====

/* WARNING: Possible PIC construction at 0x01f083f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f08450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f084a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028be4b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f084ac) */
/* WARNING: Removing unreachable block (ram,0x01f084f0) */
/* WARNING: Removing unreachable block (ram,0x01f084f4) */
/* WARNING: Removing unreachable block (ram,0x01f08454) */
/* WARNING: Removing unreachable block (ram,0x01f08498) */
/* WARNING: Removing unreachable block (ram,0x01f0849c) */
/* WARNING: Removing unreachable block (ram,0x01f083fc) */
/* WARNING: Removing unreachable block (ram,0x01f08440) */
/* WARNING: Removing unreachable block (ram,0x01f08444) */
/* WARNING: Removing unreachable block (ram,0x028be4bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f08298(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01f08508 + 0x1f082ac);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0850c + 0x1f082c0));
    func_0x01384978(*(undefined4 *)(_UNK_01f08510 + 0x1f082cc));
    func_0x01384978(*(undefined4 *)(_UNK_01f08514 + 0x1f082d8));
    func_0x01384978(*(undefined4 *)(_UNK_01f08518 + 0x1f082e4));
    func_0x01384978(*(undefined4 *)(_UNK_01f0851c + 0x1f082f0));
    func_0x01384978(*(undefined4 *)(_UNK_01f08520 + 0x1f082fc));
    func_0x01384978(*(undefined4 *)(_UNK_01f08524 + 0x1f08308));
    func_0x01384978(*(undefined4 *)(_UNK_01f08528 + 0x1f08314));
    func_0x01384978(*(undefined4 *)(_UNK_01f0852c + 0x1f08320));
    func_0x01384978(*(undefined4 *)(_UNK_01f08530 + 0x1f0832c));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa4ec,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa4ec,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    puStack_2c = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    puStack_2c = (undefined4 *)uStack_44;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar4);
    return;
  }
  func_0x01f0855c(param_1);
  if (*(int *)(**(int **)(_UNK_01f08534 + 0x1f0838c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01f08538 + 0x1f083a8));
  puVar9 = *(undefined4 **)(_UNK_01f0853c + 0x1f083bc);
  uVar8 = func_0x01384be4(*puVar9);
  func_0x024500b4(uVar8,param_1,**(undefined4 **)(_UNK_01f08540 + 0x1f083d8),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_1c = 0x1f083fc;
  puVar10 = &stack0xffffffd8;
  pcVar5 = (char *)(_UNK_028be4f4 + 0x28be418);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028be4f8 + 0x28be42c),uVar8,0);
    *pcVar5 = '\x01';
  }
  iVar6 = func_0x0229f06c(0x10cb,0);
  if (iVar6 == 0) {
    piVar3 = (int *)func_0x0487907c(*(undefined4 *)(iVar2 + 8),uVar8,0);
    if (piVar3 == (int *)0x0) {
      *(undefined4 *)(iVar2 + 8) = 0;
      return;
    }
    iVar6 = **(int **)(_UNK_028be4fc + 0x28be4a8);
    if (*piVar3 == iVar6) {
      *(int **)(iVar2 + 8) = piVar3;
      if (*piVar3 == iVar6) {
        return;
      }
      puVar10 = &stack0xffffffe8;
    }
    else {
      uStack_1c = 0x28be4bc;
      param_1 = iVar2;
    }
    *(undefined4 *)(puVar10 + -4) = uStack_1c;
    *(int *)(puVar10 + -8) = param_1;
    func_0x0142996c(puVar10 + -0x14,*(undefined4 *)(*piVar3 + 0x20),iVar6);
    uVar1 = *(uint *)(puVar10 + -0xc);
    if ((puVar10[-0x14] & 1) == 0) {
      uVar1 = (uint)(puVar10 + -0x14) | 1;
    }
    iVar2 = func_0x01419d2c(uVar1);
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    func_0x01418ff0(iVar2,0);
    if ((puVar10[-0x14] & 1) != 0) {
      func_0x0148d9d4(*(undefined4 *)(puVar10 + -0xc));
    }
    return;
  }
  iVar6 = func_0x0229f13c(0x10cb,0);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  uStack_40 = 0;
  iStack_38 = param_1;
  iStack_34 = iVar2;
  uStack_30 = uVar8;
  puStack_2c = puVar9;
  func_0x0245494c(&uStack_68,0,uVar8,0);
  uStack_50 = uStack_68;
  uStack_4c = uStack_64;
  uStack_48 = uStack_60;
  uStack_44 = uStack_5c;
  uStack_40 = uStack_58;
  if (*(int *)(iVar6 + 0x10) != 0) {
    func_0x01485278(&uStack_50,*(int *)(iVar6 + 0x10),0);
  }
  func_0x01485278(&uStack_50,iVar2,0);
  func_0x01485278(&uStack_50,uVar8,0);
  iVar7 = *(int *)(iVar6 + 8);
  uVar8 = *(undefined4 *)(iVar6 + 0xc);
  iVar2 = *(int *)(iVar6 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_50,uVar4,0,0);
  return;
}



// ===== FAT.MBBoardInventoryEntry$$_RefreshEntry RVA 0x1ef855c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0855c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01f08688 + 0x1f08570);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0868c + 0x1f08584));
    func_0x01384978(*(undefined4 *)(_UNK_01f08690 + 0x1f08590));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa4ed,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x74);
    uVar5 = func_0x01384a00(**(undefined4 **)(_UNK_01f08694 + 0x1f08604),3);
    func_0x0244f590(uVar5,**(undefined4 **)(_UNK_01f08698 + 0x1f08620),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01c8e304(iVar1,uVar5,0);
    iVar4 = func_0x0244ffd4(param_1,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar4,iVar1,0);
    if (iVar1 == 0) {
      return;
    }
    pcVar3 = (char *)(_UNK_01f08ae4 + 0x1f08a18);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f08ae8 + 0x1f08a2c));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa4f5,0);
    if (iVar1 == 0) {
      uVar5 = func_0x0244fc34(param_1,0);
      func_0x01c872f4(&uStack_20,0,uVar5,0);
      iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01f08aec + 0x1f08aac));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01ddf2c8(iVar1,uStack_20,uStack_1c,0);
      func_0x01f08af0(param_1);
      return;
    }
    iVar1 = func_0x0229f13c(0xa4f5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa4ed,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.MBBoardInventoryEntry$$CleanupOnPostClose RVA 0x1ef869c =====

/* WARNING: Possible PIC construction at 0x01f087f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f0884c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f088a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028beb88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f088a8) */
/* WARNING: Removing unreachable block (ram,0x01f088ec) */
/* WARNING: Removing unreachable block (ram,0x01f088f0) */
/* WARNING: Removing unreachable block (ram,0x01f08850) */
/* WARNING: Removing unreachable block (ram,0x01f08894) */
/* WARNING: Removing unreachable block (ram,0x01f08898) */
/* WARNING: Removing unreachable block (ram,0x01f087f8) */
/* WARNING: Removing unreachable block (ram,0x01f0883c) */
/* WARNING: Removing unreachable block (ram,0x01f08840) */
/* WARNING: Removing unreachable block (ram,0x028beb8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f0869c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_01f08904 + 0x1f086b0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f08908 + 0x1f086c4));
    func_0x01384978(*(undefined4 *)(_UNK_01f0890c + 0x1f086d0));
    func_0x01384978(*(undefined4 *)(_UNK_01f08910 + 0x1f086dc));
    func_0x01384978(*(undefined4 *)(_UNK_01f08914 + 0x1f086e8));
    func_0x01384978(*(undefined4 *)(_UNK_01f08918 + 0x1f086f4));
    func_0x01384978(*(undefined4 *)(_UNK_01f0891c + 0x1f08700));
    func_0x01384978(*(undefined4 *)(_UNK_01f08920 + 0x1f0870c));
    func_0x01384978(*(undefined4 *)(_UNK_01f08924 + 0x1f08718));
    func_0x01384978(*(undefined4 *)(_UNK_01f08928 + 0x1f08724));
    func_0x01384978(*(undefined4 *)(_UNK_01f0892c + 0x1f08730));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa4f2,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa4f2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    puStack_2c = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    puStack_2c = (undefined4 *)uStack_44;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar8,&iStack_30,uVar5);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01f08930 + 0x1f08788) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01f08934 + 0x1f087a4));
  puVar9 = *(undefined4 **)(_UNK_01f08938 + 0x1f087b8);
  iVar7 = func_0x01384be4(*puVar9);
  func_0x024500b4(iVar7,param_1,**(undefined4 **)(_UNK_01f0893c + 0x1f087d4),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_1c = 0x1f087f8;
  puVar10 = &stack0xffffffd8;
  pcVar6 = (char *)(_UNK_028bebc4 + 0x28beae0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028bebc8 + 0x28beaf4),iVar7,0);
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x10cd,0);
  if (iVar3 == 0) {
    if (iVar7 != 0) {
      piVar4 = (int *)func_0x0487929c(*(undefined4 *)(iVar2 + 8),iVar7,0);
      if (piVar4 != (int *)0x0) {
        iVar7 = **(int **)(_UNK_028bebcc + 0x28beb78);
        if (*piVar4 == iVar7) {
          *(int **)(iVar2 + 8) = piVar4;
          if (*piVar4 == iVar7) {
            return;
          }
          puVar10 = &stack0xffffffe8;
        }
        else {
          uStack_1c = 0x28beb8c;
          param_1 = iVar2;
        }
        *(undefined4 *)(puVar10 + -4) = uStack_1c;
        *(int *)(puVar10 + -8) = param_1;
        func_0x0142996c(puVar10 + -0x14,*(undefined4 *)(*piVar4 + 0x20),iVar7);
        uVar1 = *(uint *)(puVar10 + -0xc);
        if ((puVar10[-0x14] & 1) == 0) {
          uVar1 = (uint)(puVar10 + -0x14) | 1;
        }
        iVar2 = func_0x01419d2c(uVar1);
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        *(undefined4 *)(iVar2 + 0x20) = 0;
        func_0x01418ff0(iVar2,0);
        if ((puVar10[-0x14] & 1) != 0) {
          func_0x0148d9d4(*(undefined4 *)(puVar10 + -0xc));
        }
        return;
      }
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    return;
  }
  iVar3 = func_0x0229f13c(0x10cd,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_48 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  uStack_40 = 0;
  iStack_38 = param_1;
  iStack_34 = iVar2;
  iStack_30 = iVar7;
  puStack_2c = puVar9;
  func_0x0245494c(&uStack_68,0,iVar7,0);
  uStack_50 = uStack_68;
  uStack_4c = uStack_64;
  iStack_48 = iStack_60;
  uStack_44 = uStack_5c;
  uStack_40 = uStack_58;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_50,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_50,iVar2,0);
  func_0x01485278(&uStack_50,iVar7,0);
  iVar7 = *(int *)(iVar3 + 8);
  uVar8 = *(undefined4 *)(iVar3 + 0xc);
  iVar2 = *(int *)(iVar3 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_50,uVar5,0,0);
  return;
}



// ===== FAT.MBBoardInventoryEntry$$UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter RVA 0x1ef8958 =====

void FUN_01f08958(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0xa4f3,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xa4f3,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.MBBoardInventoryEntry$$UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit RVA 0x1ef89ac =====

void FUN_01f089ac(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0xa4f4,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xa4f4,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.MBBoardInventoryEntry$$_RefreshInventoryEntryScreenPos RVA 0x1ef8a00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f08a00(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01f08ae4 + 0x1f08a18);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f08ae8 + 0x1f08a2c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa4f5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa4f5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  uVar5 = func_0x0244fc34(param_1,0);
  func_0x01c872f4(&uStack_20,0,uVar5,0);
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01f08aec + 0x1f08aac));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01ddf2c8(iVar1,uStack_20,uStack_1c,0);
  func_0x01f08af0(param_1);
  return;
}



// ===== FAT.MBBoardInventoryEntry$$_RefreshRedPoint RVA 0x1ef8af0 =====

void FUN_01f08af0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xa4ef,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa4ef,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01db7b78(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02141880(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x021137d8(iVar1,2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x021168f0(iVar1,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar3,uVar4,0);
  return;
}



// ===== FAT.MBBoardInventoryEntry$$_OnBtnInventory RVA 0x1ef8bf0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f08bf0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 auStack_1c [3];
  
  iVar2 = func_0x0229f06c(0xa4eb,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa4eb,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  param_1 = *(int *)(iVar2 + 0x74);
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_01c8e2b8 + 0x1c8df10);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c8e2bc + 0x1c8df24),0);
    func_0x01384978(*(undefined4 *)(_UNK_01c8e2c0 + 0x1c8df30));
    func_0x01384978(*(undefined4 *)(_UNK_01c8e2c4 + 0x1c8df3c));
    func_0x01384978(*(undefined4 *)(_UNK_01c8e2c8 + 0x1c8df48));
    func_0x01384978(*(undefined4 *)(_UNK_01c8e2cc + 0x1c8df54));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x9592,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9592,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xe4);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x14);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01d64a88(iVar2,0);
  puVar8 = *(undefined4 **)(_UNK_01c8e2d0 + 0x1c8dffc);
  iVar6 = func_0x01384a00(*puVar8,1);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  if (iVar2 == 0) {
    if (*(int *)(iVar6 + 0xc) == 0) {
      func_0x01384bf4();
    }
    *(undefined4 *)(iVar6 + 0x10) = 1;
    iVar2 = func_0x01c8e304(param_1,iVar6);
    if (iVar2 != 0) {
      iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01c8e2e4 + 0x1c8e07c));
      piVar5 = *(int **)(_UNK_01c8e2e8 + 0x1c8e090);
      iVar6 = *piVar5;
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x01384ab4();
        iVar6 = *piVar5;
      }
      uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xec);
      piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c8e2ec + 0x1c8e0b8),1);
      auStack_1c[0] = 1;
      uVar3 = **(undefined4 **)(_UNK_01c8e2f0 + 0x1c8e0d4);
      goto LAB_01c8e18c;
    }
    iVar2 = func_0x01384a00(*puVar8,1);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar2 + 0xc) == 0) {
      func_0x01384bf4();
    }
    *(undefined4 *)(iVar2 + 0x10) = 3;
    iVar2 = func_0x01c8e304(param_1,iVar2);
    if (iVar2 != 0) goto LAB_01c8e124;
    iVar2 = func_0x01384a00(*puVar8,1);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar2 + 0xc) == 0) {
      func_0x01384bf4();
    }
    *(undefined4 *)(iVar2 + 0x10) = 2;
    iVar2 = func_0x01c8e304(param_1,iVar2);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01c8e2f4 + 0x1c8e260));
    piVar5 = *(int **)(_UNK_01c8e2f8 + 0x1c8e274);
    iVar6 = *piVar5;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x01384ab4();
      iVar6 = *piVar5;
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xec);
    piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c8e2fc + 0x1c8e298),1);
    auStack_1c[0] = 2;
    puVar8 = *(undefined4 **)(&UNK_01c8e2b8 + _UNK_01c8e300);
  }
  else {
    if (*(int *)(iVar6 + 0xc) == 0) {
      func_0x01384bf4();
    }
    *(undefined4 *)(iVar6 + 0x10) = 3;
    iVar2 = func_0x01c8e304(param_1,iVar6);
    if (iVar2 == 0) {
      return;
    }
LAB_01c8e124:
    iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01c8e2d4 + 0x1c8e130));
    piVar5 = *(int **)(_UNK_01c8e2d8 + 0x1c8e144);
    iVar6 = *piVar5;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x01384ab4();
      iVar6 = *piVar5;
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xec);
    piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01c8e2dc + 0x1c8e168),1);
    auStack_1c[0] = 3;
    puVar8 = *(undefined4 **)(_UNK_01c8e2e0 + 0x1c8e188);
  }
  uVar3 = *puVar8;
LAB_01c8e18c:
  iVar6 = func_0x01384abc(uVar3,auStack_1c);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  if ((iVar6 != 0) && (iVar1 = func_0x01384ab8(iVar6,*(undefined4 *)(*piVar5 + 0x20)), iVar1 == 0))
  {
    uVar3 = func_0x01384c10();
    func_0x01384aa0(uVar3,0);
  }
  if (piVar5[3] == 0) {
    func_0x01384bf4();
  }
  piVar5[4] = iVar6;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01ee858c(iVar2,uVar7,piVar5,0);
  return;
}



// ===== FAT.MBBoardInventoryEntry$$_OnMessageInventoryFeedback RVA 0x1ef8c74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f08c74(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01f08d58 + 0x1f08c88);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f08d5c + 0x1f08c9c));
    func_0x01384978(*(undefined4 *)(_UNK_01f08d60 + 0x1f08ca8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa4ee,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa4ee,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_01f08d64 + 0x1f08d00) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar5,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_0514e2c4)(iVar1,**(undefined4 **)(_UNK_01f08d68 + 0x1f08d4c),0);
  return;
}



// ===== FAT.MBBoardInventoryEntry$$_OnMessageInventoryFeedbackNew RVA 0x1ef8d6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f08d6c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01f08e50 + 0x1f08d80);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f08e54 + 0x1f08d94));
    func_0x01384978(*(undefined4 *)(_UNK_01f08e58 + 0x1f08da0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa4f1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa4f1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_01f08e5c + 0x1f08df8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar5,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_0514e2c4)(iVar1,**(undefined4 **)(_UNK_01f08e60 + 0x1f08e44),0);
  return;
}



// ===== FAT.MBBoardInventoryEntry$$.ctor RVA 0x1ef8e64 =====

void FUN_01f08e64(undefined4 param_1)

{
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}


