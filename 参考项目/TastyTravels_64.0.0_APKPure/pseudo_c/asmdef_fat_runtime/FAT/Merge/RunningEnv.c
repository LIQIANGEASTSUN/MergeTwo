/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.RunningEnv$$get_Instance RVA 0x21515d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_021615d4(void)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
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
  
  pcVar3 = (char *)(_UNK_02161694 + 0x21615e4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02161698 + 0x21615f8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x96c3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x96c3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_022742ac + 0x22741dc);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022742b0 + 0x22741f0),0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar6 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar6 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar6 = 1;
      }
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar7,uVar5,&uStack_30,uVar6,0,0);
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022742b4 + 0x227429c));
    return iVar1;
  }
  piVar4 = *(int **)(_UNK_0216169c + 0x216164c);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  piVar2 = *(int **)(iVar1 + 0x5c);
  iVar7 = *piVar2;
  if (iVar7 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      piVar2 = *(int **)(*piVar4 + 0x5c);
    }
    iVar7 = piVar2[1];
  }
  return iVar7;
}



// ===== FAT.Merge.RunningEnv$$SetEnv RVA 0x21516a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021616a0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  pcVar3 = (char *)(_UNK_02161740 + 0x21616b4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02161744 + 0x21616c8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7585,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7585,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  piVar4 = *(int **)(_UNK_02161748 + 0x2161720);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  **(undefined4 **)(iVar1 + 0x5c) = param_1;
  return;
}



// ===== FAT.Merge.RunningEnv$$ClearEnv RVA 0x215174c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0216174c(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  pcVar2 = (char *)(_UNK_021617e8 + 0x216175c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021617ec + 0x2161770));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7598,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7598,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar4 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar4 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar4 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar6,uVar5,&uStack_30,uVar4,0,0);
    return;
  }
  piVar3 = *(int **)(_UNK_021617f0 + 0x21617c4);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  **(undefined4 **)(iVar1 + 0x5c) = 0;
  return;
}



// ===== FAT.Merge.RunningEnv$$.cctor RVA 0x21517f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021617f4(void)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02161860 + 0x2161804);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02161864 + 0x2161818));
    func_0x01384978(*(undefined4 *)(_UNK_02161868 + 0x2161824));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0216186c + 0x2161838));
  func_0x0244f5a0(uVar1,0);
  *(undefined4 *)(*(int *)(**(int **)(_UNK_02161870 + 0x2161854) + 0x5c) + 4) = uVar1;
  return;
}


