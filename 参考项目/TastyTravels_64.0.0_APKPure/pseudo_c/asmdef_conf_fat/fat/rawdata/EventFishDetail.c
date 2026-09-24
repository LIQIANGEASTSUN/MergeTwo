/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventFishDetail$$.ctor RVA 0x15c68d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015d68d4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_015d6a24 + 0x15d68e8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d6a28 + 0x15d68fc));
    func_0x01384978(*(undefined4 *)(_UNK_015d6a2c + 0x15d6908));
    func_0x01384978(*(undefined4 *)(_UNK_015d6a30 + 0x15d6914));
    func_0x01384978(*(undefined4 *)(_UNK_015d6a34 + 0x15d6920));
    func_0x01384978(*(undefined4 *)(_UNK_015d6a38 + 0x15d692c));
    func_0x01384978(*(undefined4 *)(_UNK_015d6a3c + 0x15d6938));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015d6a40 + 0x15d694c));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_015d6a44 + 0x15d6960));
  puVar5 = *(undefined4 **)(_UNK_015d6a48 + 0x15d6974);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_015d6a4c + 0x15d698c);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[9] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_015d6a50 + 0x15d69e4);
  param_1[10] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015d6a54 + 0x15d6a04));
                    /* WARNING: Could not recover jumptable at 0x015d6a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventFishDetail$$.ctor RVA 0x15c6a58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015d6a58(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_015d6b94 + 0x15d6a70);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d6b98 + 0x15d6a84));
    func_0x01384978(*(undefined4 *)(_UNK_015d6b9c + 0x15d6a90));
    *pcVar4 = '\x01';
  }
  FUN_015d68d4(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar5,**(undefined4 **)(_UNK_015d6ba0 + 0x15d6ad0));
  iVar5 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_015d6ba4 + 0x15d6b04);
  uVar1 = func_0x0244f968(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventFishDetail$$Clone RVA 0x15c6ba8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015d6ba8(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015d6bfc + 0x15d6bbc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d6c00 + 0x15d6bd0));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015d6c04 + 0x15d6be4));
  FUN_015d6a58(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventFishDetail$$ProxyInternalMergeFrom RVA 0x15c6c08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015d6c08(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar4 = (char *)(_UNK_015d6eb0 + 0x15d6c24);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d6eb4 + 0x15d6c38));
    func_0x01384978(*(undefined4 *)(_UNK_015d6eb8 + 0x15d6c44));
    func_0x01384978(*(undefined4 *)(_UNK_015d6ebc + 0x15d6c50));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015d6ec0 + 0x15d6c80);
    puVar8 = *(undefined4 **)(_UNK_015d6ec4 + 0x15d6c88);
    puVar9 = *(undefined4 **)(_UNK_015d6ec8 + 0x15d6c90);
    do {
      if (uVar1 < 0x39) {
        if (uVar1 < 0x19) {
          if (uVar1 == 8) {
            uVar3 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar3;
          }
          else {
            if (uVar1 != 0x10) {
              if (uVar1 != 0x18) goto LAB_015d6e18;
              goto LAB_015d6d78;
            }
            uVar3 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x14) = uVar3;
          }
        }
        else {
          if (uVar1 == 0x1a) {
LAB_015d6d78:
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x18);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
            goto LAB_015d6d9c;
          }
          if (uVar1 != 0x20) {
            if (uVar1 == 0x38) goto LAB_015d6d14;
            goto LAB_015d6e18;
          }
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar3;
        }
      }
      else if (uVar1 < 0x43) {
        if (uVar1 == 0x3a) {
LAB_015d6d14:
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x20);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
        }
        else {
          if (uVar1 != 0x40 && uVar1 != 0x42) goto LAB_015d6e18;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x24);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
        }
LAB_015d6d9c:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f96c(iVar6,param_2,uVar3,*puVar8);
      }
      else if (uVar1 < 0x4b) {
        if ((uVar1 | 2) == 0x4a) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x28);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
          goto LAB_015d6d9c;
        }
LAB_015d6e18:
        uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar3;
      }
      else if (uVar1 == 0x50) {
        uVar3 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
      }
      else {
        if (uVar1 != 0x5a) goto LAB_015d6e18;
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x10);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f950(iVar6,param_2,uVar3,*puVar9);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventFishDetail$$get_XXX_RowIdentifier RVA 0x15c6ecc =====

undefined4 FUN_015d6ecc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ===== fat.rawdata.EventFishDetail$$set_XXX_RowIdentifier RVA 0x15c6ed4 =====

void FUN_015d6ed4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// ===== fat.rawdata.EventFishDetail$$.cctor RVA 0x15c6edc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015d6edc(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015d6fb0 + 0x15d6eec);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015d6fb4 + 0x15d6f00));
    func_0x01384978(*(undefined4 *)(_UNK_015d6fb8 + 0x15d6f0c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015d6fbc + 0x15d6f20);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015d6fc0 + 0x15d6f30);
  uVar1 = func_0x0244f954(0x5a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x42,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f970(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  return;
}


