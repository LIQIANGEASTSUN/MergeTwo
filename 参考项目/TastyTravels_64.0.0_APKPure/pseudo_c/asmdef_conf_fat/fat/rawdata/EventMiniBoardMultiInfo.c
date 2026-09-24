/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventMiniBoardMultiInfo$$.ctor RVA 0x15ef4cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015ff4cc(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_015ff654 + 0x15ff4e0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015ff658 + 0x15ff4f4));
    func_0x01384978(*(undefined4 *)(_UNK_015ff65c + 0x15ff500));
    func_0x01384978(*(undefined4 *)(_UNK_015ff660 + 0x15ff50c));
    func_0x01384978(*(undefined4 *)(_UNK_015ff664 + 0x15ff518));
    func_0x01384978(*(undefined4 *)(_UNK_015ff668 + 0x15ff524));
    func_0x01384978(*(undefined4 *)(_UNK_015ff66c + 0x15ff530));
    func_0x01384978(*(undefined4 *)(_UNK_015ff670 + 0x15ff53c));
    func_0x01384978(*(undefined4 *)(_UNK_015ff674 + 0x15ff548));
    func_0x01384978(*(undefined4 *)(_UNK_015ff678 + 0x15ff554));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015ff67c + 0x15ff568));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_015ff680 + 0x15ff57c));
  puVar5 = *(undefined4 **)(_UNK_015ff684 + 0x15ff590);
  uVar2 = *puVar5;
  piVar3 = *(int **)(_UNK_015ff688 + 0x15ff59c);
  param_1[4] = iVar1;
  iVar1 = *piVar3;
  param_1[6] = iVar1;
  param_1[7] = iVar1;
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  puVar6 = *(undefined4 **)(_UNK_015ff68c + 0x15ff5c0);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[9] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  puVar5 = *(undefined4 **)(_UNK_015ff690 + 0x15ff5e8);
  param_1[10] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  func_0x034614f8(iVar1,**(undefined4 **)(_UNK_015ff694 + 0x15ff600));
  piVar3 = *(int **)(_UNK_015ff698 + 0x15ff614);
  param_1[0xb] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015ff69c + 0x15ff634));
                    /* WARNING: Could not recover jumptable at 0x015ff650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventMiniBoardMultiInfo$$.ctor RVA 0x15ef6a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015ff6a0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_015ff7c4 + 0x15ff6b8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015ff7c8 + 0x15ff6cc));
    func_0x01384978(*(undefined4 *)(_UNK_015ff7cc + 0x15ff6d8));
    func_0x01384978(*(undefined4 *)(_UNK_015ff7d0 + 0x15ff6e4));
    *pcVar5 = '\x01';
  }
  FUN_015ff4cc(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar6,**(undefined4 **)(_UNK_015ff7d4 + 0x15ff724));
  iVar6 = *(int *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar7;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar8 = *(undefined4 **)(_UNK_015ff7d8 + 0x15ff75c);
  uVar1 = func_0x0244f968(iVar6,*puVar8);
  iVar6 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar6,*puVar8);
  iVar6 = *(int *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0345e8e4(iVar6,**(undefined4 **)(_UNK_015ff7dc + 0x15ff7a0));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventMiniBoardMultiInfo$$Clone RVA 0x15ef7e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015ff7e0(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015ff834 + 0x15ff7f4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015ff838 + 0x15ff808));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015ff83c + 0x15ff81c));
  FUN_015ff6a0(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventMiniBoardMultiInfo$$ProxyInternalMergeFrom RVA 0x15ef840 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015ff840(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_015ffb2c + 0x15ff85c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015ffb30 + 0x15ff870));
    func_0x01384978(*(undefined4 *)(_UNK_015ffb34 + 0x15ff87c));
    func_0x01384978(*(undefined4 *)(_UNK_015ffb38 + 0x15ff888));
    func_0x01384978(*(undefined4 *)(_UNK_015ffb3c + 0x15ff894));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015ffb40 + 0x15ff8c4);
    puVar8 = *(undefined4 **)(_UNK_015ffb44 + 0x15ff8cc);
    puVar9 = *(undefined4 **)(_UNK_015ffb48 + 0x15ff8d4);
    do {
      if (uVar1 < 0x29) {
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
LAB_015ffa0c:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else if (uVar1 == 0x1a) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
          *(undefined4 *)(param_1 + 0x18) = uVar2;
        }
        else {
          if (uVar1 != 0x22) {
            if (uVar1 == 0x28) goto LAB_015ff964;
            goto LAB_015ffa0c;
          }
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
      }
      else if (uVar1 < 0x33) {
        if (uVar1 == 0x2a) {
LAB_015ff964:
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x24);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
        }
        else {
          if (uVar1 != 0x30 && uVar1 != 0x32) goto LAB_015ffa0c;
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x28);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
        }
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f96c(iVar6,param_2,uVar2,*puVar8);
      }
      else if (uVar1 == 0x3a) {
        iVar3 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x2c);
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x034604a8(iVar6,param_2,uVar2,**(undefined4 **)(_UNK_015ffb4c + 0x15ffad8));
      }
      else if (uVar1 == 0x42) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
        *(undefined4 *)(param_1 + 0x20) = uVar2;
      }
      else {
        if (uVar1 != 0x4a) goto LAB_015ffa0c;
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
        func_0x0244f950(iVar6,param_2,uVar2,*puVar9);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventMiniBoardMultiInfo$$get_XXX_RowIdentifier RVA 0x15efb50 =====

undefined4 FUN_015ffb50(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ===== fat.rawdata.EventMiniBoardMultiInfo$$set_XXX_RowIdentifier RVA 0x15efb58 =====

void FUN_015ffb58(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// ===== fat.rawdata.EventMiniBoardMultiInfo$$.cctor RVA 0x15efb60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015ffb60(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_015ffc90 + 0x15ffb74);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015ffc94 + 0x15ffb88));
    func_0x01384978(*(undefined4 *)(_UNK_015ffc98 + 0x15ffb94));
    func_0x01384978(*(undefined4 *)(_UNK_015ffc9c + 0x15ffba0));
    func_0x01384978(*(undefined4 *)(_UNK_015ffca0 + 0x15ffbac));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_015ffca4 + 0x15ffbc0);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_015ffca8 + 0x15ffbd0);
  uVar1 = func_0x0244f954(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x32,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_015ffcac + 0x15ffc50));
  func_0x0244f990(uVar3,uVar1,uVar2,0x3a,**(undefined4 **)(_UNK_015ffcb0 + 0x15ffc70));
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x10) = uVar3;
  return;
}


