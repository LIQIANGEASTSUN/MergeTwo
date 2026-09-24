/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.TrainMilestone$$get_XXX_RowIdentifier RVA 0x1731c18 =====

undefined4 FUN_01741c18(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== fat.rawdata.TrainMilestone$$set_XXX_RowIdentifier RVA 0x1731c20 =====

void FUN_01741c20(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== fat.rawdata.TrainMilestone$$.ctor RVA 0x1731c28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01741c28(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01741d0c + 0x1741c3c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01741d10 + 0x1741c50));
    func_0x01384978(*(undefined4 *)(_UNK_01741d14 + 0x1741c5c));
    func_0x01384978(*(undefined4 *)(_UNK_01741d18 + 0x1741c68));
    func_0x01384978(*(undefined4 *)(_UNK_01741d1c + 0x1741c74));
    func_0x01384978(*(undefined4 *)(_UNK_01741d20 + 0x1741c80));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01741d24 + 0x1741c94));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_01741d28 + 0x1741ca8));
  piVar2 = *(int **)(_UNK_01741d30 + 0x1741cc8);
  iVar3 = *(int *)(**(int **)(_UNK_01741d2c + 0x1741cbc) + 0x74);
  param_1[5] = iVar1;
  param_1[7] = *piVar2;
  if (iVar3 == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01741d34 + 0x1741cec));
                    /* WARNING: Could not recover jumptable at 0x01741d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.TrainMilestone$$.ctor RVA 0x1731d38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01741d38(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  
  pcVar5 = (char *)(_UNK_01741dd4 + 0x1741d50);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01741dd8 + 0x1741d64));
    *pcVar5 = '\x01';
  }
  FUN_01741c28(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,**(undefined4 **)(_UNK_01741ddc + 0x1741da4));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.TrainMilestone$$Clone RVA 0x1731de0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01741de0(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01741e34 + 0x1741df4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01741e38 + 0x1741e08));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01741e3c + 0x1741e1c));
  FUN_01741d38(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.TrainMilestone$$ProxyInternalMergeFrom RVA 0x1731e40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01741e40(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_01741fa8 + 0x1741e58);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01741fac + 0x1741e6c));
    func_0x01384978(*(undefined4 *)(_UNK_01741fb0 + 0x1741e78));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01741fb4 + 0x1741ea8);
    puVar8 = *(undefined4 **)(_UNK_01741fb8 + 0x1741eb0);
    do {
      if (uVar1 < 0x11) {
        if (uVar1 == 8) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x10) = uVar2;
        }
        else if (uVar1 == 0x10) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x18) = uVar2;
        }
        else {
LAB_01741f34:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 == 0x1a) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
        *(undefined4 *)(param_1 + 0x1c) = uVar2;
      }
      else {
        if (uVar1 != 0x22) goto LAB_01741f34;
        iVar3 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x14);
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



// ===== fat.rawdata.TrainMilestone$$.cctor RVA 0x1731fbc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01741fbc(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01742030 + 0x1741fcc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01742034 + 0x1741fe0));
    func_0x01384978(*(undefined4 *)(_UNK_01742038 + 0x1741fec));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0174203c + 0x1742000);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01742040 + 0x1742010);
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


