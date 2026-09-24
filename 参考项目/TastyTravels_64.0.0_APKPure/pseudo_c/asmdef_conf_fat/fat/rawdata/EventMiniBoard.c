/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventMiniBoard$$.ctor RVA 0x15eb8bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015fb8bc(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_015fb984 + 0x15fb8d0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fb988 + 0x15fb8e4));
    func_0x01384978(*(undefined4 *)(_UNK_015fb98c + 0x15fb8f0));
    func_0x01384978(*(undefined4 *)(_UNK_015fb990 + 0x15fb8fc));
    func_0x01384978(*(undefined4 *)(_UNK_015fb994 + 0x15fb908));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015fb998 + 0x15fb91c));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_015fb99c + 0x15fb930));
  piVar2 = *(int **)(_UNK_015fb9a0 + 0x15fb944);
  param_1[4] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015fb9a4 + 0x15fb964));
                    /* WARNING: Could not recover jumptable at 0x015fb980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventMiniBoard$$.ctor RVA 0x15eb9a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015fb9a8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  
  pcVar3 = (char *)(_UNK_015fba58 + 0x15fb9c0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fba5c + 0x15fb9d4));
    *pcVar3 = '\x01';
  }
  FUN_015fb8bc(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar4,**(undefined4 **)(_UNK_015fba60 + 0x15fba14));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar5 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x1c) = uVar5;
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar1 = func_0x0244f914(uVar1,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventMiniBoard$$Clone RVA 0x15eba64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015fba64(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015fbab8 + 0x15fba78);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fbabc + 0x15fba8c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015fbac0 + 0x15fbaa0));
  FUN_015fb9a8(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventMiniBoard$$ProxyInternalMergeFrom RVA 0x15ebac4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015fbac4(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_015fbcac + 0x15fbadc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fbcb0 + 0x15fbaf0));
    func_0x01384978(*(undefined4 *)(_UNK_015fbcb4 + 0x15fbafc));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015fbcb8 + 0x15fbb2c);
    puVar8 = *(undefined4 **)(_UNK_015fbcbc + 0x15fbb34);
    do {
      if (uVar1 < 0x21) {
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
LAB_015fbc18:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else if (uVar1 == 0x18) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x18) = uVar2;
        }
        else {
          if (uVar1 != 0x20) goto LAB_015fbc18;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
      }
      else if (uVar1 < 0x31) {
        if (uVar1 == 0x28) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
        else {
          if (uVar1 != 0x30) goto LAB_015fbc18;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x24) = uVar2;
        }
      }
      else if (uVar1 == 0x38) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x28) = uVar2;
      }
      else {
        if (uVar1 != 0x42) goto LAB_015fbc18;
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
        func_0x0244f950(iVar6,param_2,uVar2,*puVar8);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventMiniBoard$$get_XXX_RowIdentifier RVA 0x15ebcc0 =====

undefined4 FUN_015fbcc0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ===== fat.rawdata.EventMiniBoard$$set_XXX_RowIdentifier RVA 0x15ebcc8 =====

void FUN_015fbcc8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// ===== fat.rawdata.EventMiniBoard$$.cctor RVA 0x15ebcd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015fbcd0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015fbd44 + 0x15fbce0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015fbd48 + 0x15fbcf4));
    func_0x01384978(*(undefined4 *)(_UNK_015fbd4c + 0x15fbd00));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015fbd50 + 0x15fbd14);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015fbd54 + 0x15fbd24);
  uVar1 = func_0x0244f954(0x42,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


