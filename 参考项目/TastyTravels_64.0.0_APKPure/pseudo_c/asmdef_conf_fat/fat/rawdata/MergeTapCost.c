/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.MergeTapCost$$.ctor RVA 0x16dba64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016eba64(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_016ebb70 + 0x16eba78);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016ebb74 + 0x16eba8c));
    func_0x01384978(*(undefined4 *)(_UNK_016ebb78 + 0x16eba98));
    func_0x01384978(*(undefined4 *)(_UNK_016ebb7c + 0x16ebaa4));
    func_0x01384978(*(undefined4 *)(_UNK_016ebb80 + 0x16ebab0));
    func_0x01384978(*(undefined4 *)(_UNK_016ebb84 + 0x16ebabc));
    func_0x01384978(*(undefined4 *)(_UNK_016ebb88 + 0x16ebac8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016ebb8c + 0x16ebadc));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_016ebb90 + 0x16ebaf0));
  puVar2 = *(undefined4 **)(_UNK_016ebb94 + 0x16ebb04);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x034614f8(iVar1,**(undefined4 **)(_UNK_016ebb98 + 0x16ebb1c));
  piVar3 = *(int **)(_UNK_016ebb9c + 0x16ebb30);
  param_1[6] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016ebba0 + 0x16ebb50));
                    /* WARNING: Could not recover jumptable at 0x016ebb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.MergeTapCost$$.ctor RVA 0x16dbba4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016ebba4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_016ebc70 + 0x16ebbbc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016ebc74 + 0x16ebbd0));
    func_0x01384978(*(undefined4 *)(_UNK_016ebc78 + 0x16ebbdc));
    *pcVar3 = '\x01';
  }
  FUN_016eba64(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_016ebc7c + 0x16ebc1c));
  iVar4 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0345e8e4(iVar4,**(undefined4 **)(_UNK_016ebc80 + 0x16ebc4c));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.MergeTapCost$$Clone RVA 0x16dbc84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016ebc84(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016ebcd8 + 0x16ebc98);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016ebcdc + 0x16ebcac));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016ebce0 + 0x16ebcc0));
  FUN_016ebba4(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.MergeTapCost$$ProxyInternalMergeFrom RVA 0x16dbce4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016ebce4(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar4 = (char *)(_UNK_016ebe84 + 0x16ebd00);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016ebe88 + 0x16ebd14));
    func_0x01384978(*(undefined4 *)(_UNK_016ebe8c + 0x16ebd20));
    func_0x01384978(*(undefined4 *)(_UNK_016ebe90 + 0x16ebd2c));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016ebe94 + 0x16ebd5c);
    puVar8 = *(undefined4 **)(_UNK_016ebe98 + 0x16ebd64);
    puVar9 = *(undefined4 **)(_UNK_016ebe9c + 0x16ebd6c);
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
LAB_016ebdf0:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 == 0x1a) {
        iVar3 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x18);
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x034604a8(iVar6,param_2,uVar2,*puVar8);
      }
      else {
        if (uVar1 != 0x2a) goto LAB_016ebdf0;
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
        func_0x036520e8(iVar6,param_2,uVar2,*puVar9);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.MergeTapCost$$get_XXX_RowIdentifier RVA 0x16dbea0 =====

undefined4 FUN_016ebea0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ===== fat.rawdata.MergeTapCost$$set_XXX_RowIdentifier RVA 0x16dbea8 =====

void FUN_016ebea8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



// ===== fat.rawdata.MergeTapCost$$.cctor RVA 0x16dbeb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016ebeb0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_016ebfb0 + 0x16ebec4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016ebfb4 + 0x16ebed8));
    func_0x01384978(*(undefined4 *)(_UNK_016ebfb8 + 0x16ebee4));
    func_0x01384978(*(undefined4 *)(_UNK_016ebfbc + 0x16ebef0));
    func_0x01384978(*(undefined4 *)(_UNK_016ebfc0 + 0x16ebefc));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_016ebfc4 + 0x16ebf10);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_016ebfc8 + 0x16ebf20);
  uVar1 = func_0x0244f954(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_016ebfcc + 0x16ebf70));
  func_0x0244f990(uVar3,uVar1,uVar2,0x1a,**(undefined4 **)(_UNK_016ebfd0 + 0x16ebf90));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar3;
  return;
}


