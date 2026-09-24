/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventMineCartRound$$.ctor RVA 0x15e63b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f63b4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_015f651c + 0x15f63c8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f6520 + 0x15f63dc));
    func_0x01384978(*(undefined4 *)(_UNK_015f6524 + 0x15f63e8));
    func_0x01384978(*(undefined4 *)(_UNK_015f6528 + 0x15f63f4));
    func_0x01384978(*(undefined4 *)(_UNK_015f652c + 0x15f6400));
    func_0x01384978(*(undefined4 *)(_UNK_015f6530 + 0x15f640c));
    func_0x01384978(*(undefined4 *)(_UNK_015f6534 + 0x15f6418));
    func_0x01384978(*(undefined4 *)(_UNK_015f6538 + 0x15f6424));
    *pcVar4 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_015f653c + 0x15f6438);
  uVar1 = *puVar7;
  param_1[4] = **(int **)(_UNK_015f6540 + 0x15f6444);
  iVar2 = func_0x01384be4(uVar1);
  puVar8 = *(undefined4 **)(_UNK_015f6544 + 0x15f645c);
  func_0x0244f948(iVar2,*puVar8);
  uVar1 = *puVar7;
  param_1[5] = iVar2;
  iVar2 = func_0x01384be4(uVar1);
  func_0x0244f948(iVar2,*puVar8);
  puVar5 = *(undefined4 **)(_UNK_015f6548 + 0x15f6484);
  param_1[7] = iVar2;
  iVar2 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_015f654c + 0x15f649c);
  func_0x0244f964(iVar2,*puVar6);
  uVar1 = *puVar5;
  param_1[8] = iVar2;
  iVar2 = func_0x01384be4(uVar1);
  func_0x0244f964(iVar2,*puVar6);
  uVar1 = *puVar7;
  param_1[9] = iVar2;
  iVar2 = func_0x01384be4(uVar1);
  func_0x0244f948(iVar2,*puVar8);
  piVar3 = *(int **)(_UNK_015f6550 + 0x15f64dc);
  param_1[0xb] = iVar2;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015f6554 + 0x15f64fc));
                    /* WARNING: Could not recover jumptable at 0x015f6518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventMineCartRound$$.ctor RVA 0x15e6558 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6558(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar3 = (char *)(_UNK_015f6690 + 0x15f6570);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f6694 + 0x15f6584));
    func_0x01384978(*(undefined4 *)(_UNK_015f6698 + 0x15f6590));
    *pcVar3 = '\x01';
  }
  FUN_015f63b4(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_015f669c + 0x15f65d8);
  uVar1 = func_0x0244f94c(iVar4,*puVar6);
  iVar4 = *(int *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar4,*puVar6);
  iVar4 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_015f66a0 + 0x15f6628);
  uVar1 = func_0x0244f968(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar4,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventMineCartRound$$Clone RVA 0x15e66a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015f66a4(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015f66f8 + 0x15f66b8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f66fc + 0x15f66cc));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015f6700 + 0x15f66e0));
  FUN_015f6558(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventMineCartRound$$ProxyInternalMergeFrom RVA 0x15e6704 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f6704(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  pcVar5 = (char *)(_UNK_015f69c0 + 0x15f6720);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f69c4 + 0x15f6734));
    func_0x01384978(*(undefined4 *)(_UNK_015f69c8 + 0x15f6740));
    func_0x01384978(*(undefined4 *)(_UNK_015f69cc + 0x15f674c));
    *pcVar5 = '\x01';
  }
  iVar6 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar6,0);
  if (uVar1 != 0) {
    piVar8 = *(int **)(_UNK_015f69d0 + 0x15f677c);
    puVar9 = *(undefined4 **)(_UNK_015f69d4 + 0x15f6784);
    do {
      if (uVar1 < 0x29) {
        if (uVar1 < 0x13) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else {
            if (uVar1 != 0x12) goto LAB_015f68b0;
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            uVar2 = func_0x01484fc8(param_2,iVar6,uVar2,0);
            *(undefined4 *)(param_1 + 0x10) = uVar2;
          }
        }
        else if (uVar1 == 0x18) {
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          *(undefined4 *)(param_1 + 0x18) = uVar2;
        }
        else {
          if (uVar1 == 0x22) {
            iVar3 = *piVar8;
            iVar7 = *(int *)(param_1 + 0x1c);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            puVar4 = *(undefined4 **)(_UNK_015f69d8 + 0x15f693c);
            goto LAB_015f6994;
          }
          if (uVar1 == 0x28) goto LAB_015f6828;
LAB_015f68b0:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 < 0x33) {
        if (uVar1 == 0x2a) {
LAB_015f6828:
          iVar3 = *piVar8;
          iVar7 = *(int *)(param_1 + 0x20);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar8;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
        }
        else {
          if (uVar1 != 0x30 && uVar1 != 0x32) goto LAB_015f68b0;
          iVar3 = *piVar8;
          iVar7 = *(int *)(param_1 + 0x24);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar8;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
        }
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f96c(iVar7,param_2,uVar2,*puVar9);
      }
      else if (uVar1 == 0x38) {
        uVar2 = func_0x01484f98(param_2,iVar6,0);
        *(undefined4 *)(param_1 + 0x28) = uVar2;
      }
      else {
        if (uVar1 == 0x42) {
          iVar3 = *piVar8;
          iVar7 = *(int *)(param_1 + 0x2c);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar8;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
        }
        else {
          if (uVar1 != 0x4a) goto LAB_015f68b0;
          iVar3 = *piVar8;
          iVar7 = *(int *)(param_1 + 0x14);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar8;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
        }
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        puVar4 = *(undefined4 **)(_UNK_015f69dc + 0x15f6998);
LAB_015f6994:
        func_0x0244f950(iVar7,param_2,uVar2,*puVar4);
      }
      uVar1 = func_0x01484f58(param_2,iVar6,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventMineCartRound$$get_XXX_RowIdentifier RVA 0x15e69e0 =====

undefined4 FUN_015f69e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ===== fat.rawdata.EventMineCartRound$$set_XXX_RowIdentifier RVA 0x15e69e8 =====

void FUN_015f69e8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// ===== fat.rawdata.EventMineCartRound$$.cctor RVA 0x15e69f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f69f0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015f6ac4 + 0x15f6a00);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015f6ac8 + 0x15f6a14));
    func_0x01384978(*(undefined4 *)(_UNK_015f6acc + 0x15f6a20));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015f6ad0 + 0x15f6a34);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015f6ad4 + 0x15f6a44);
  uVar1 = func_0x0244f954(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f954(0x42,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  return;
}


