/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventRescueTarget$$.ctor RVA 0x1623df0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01633df0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_01633f2c + 0x1633e04);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01633f30 + 0x1633e18));
    func_0x01384978(*(undefined4 *)(_UNK_01633f34 + 0x1633e24));
    func_0x01384978(*(undefined4 *)(_UNK_01633f38 + 0x1633e30));
    func_0x01384978(*(undefined4 *)(_UNK_01633f3c + 0x1633e3c));
    func_0x01384978(*(undefined4 *)(_UNK_01633f40 + 0x1633e48));
    func_0x01384978(*(undefined4 *)(_UNK_01633f44 + 0x1633e54));
    func_0x01384978(*(undefined4 *)(_UNK_01633f48 + 0x1633e60));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_01633f4c + 0x1633e74);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_01633f50 + 0x1633e88);
  func_0x0244f948(iVar1,*puVar6);
  uVar2 = *puVar5;
  piVar3 = *(int **)(_UNK_01633f54 + 0x1633e9c);
  param_1[4] = iVar1;
  param_1[6] = *piVar3;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar6);
  puVar5 = *(undefined4 **)(_UNK_01633f58 + 0x1633ec0);
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  func_0x0244f964(iVar1,**(undefined4 **)(_UNK_01633f5c + 0x1633ed8));
  piVar3 = *(int **)(_UNK_01633f60 + 0x1633eec);
  param_1[9] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01633f64 + 0x1633f0c));
                    /* WARNING: Could not recover jumptable at 0x01633f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventRescueTarget$$.ctor RVA 0x1623f68 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01633f68(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_0163405c + 0x1633f80);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01634060 + 0x1633f94));
    func_0x01384978(*(undefined4 *)(_UNK_01634064 + 0x1633fa0));
    *pcVar5 = '\x01';
  }
  FUN_01633df0(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_01634068 + 0x1633fe4);
  uVar1 = func_0x0244f94c(iVar6,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  iVar6 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar6,*puVar7);
  iVar6 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar6,**(undefined4 **)(_UNK_0163406c + 0x1634030));
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventRescueTarget$$Clone RVA 0x1624070 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01634070(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016340c4 + 0x1634084);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016340c8 + 0x1634098));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016340cc + 0x16340ac));
  FUN_01633f68(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventRescueTarget$$ProxyInternalMergeFrom RVA 0x16240d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016340d0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar3 = (char *)(_UNK_01634328 + 0x16340ec);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0163432c + 0x1634100));
    func_0x01384978(*(undefined4 *)(_UNK_01634330 + 0x163410c));
    func_0x01384978(*(undefined4 *)(_UNK_01634334 + 0x1634118));
    *pcVar3 = '\x01';
  }
  iVar4 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar4,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01634338 + 0x1634148);
    puVar8 = *(undefined4 **)(_UNK_0163433c + 0x1634150);
    do {
      if (uVar1 < 0x23) {
        if (uVar1 < 0x13) {
          if (uVar1 == 8) {
            uVar6 = func_0x01484f98(param_2,iVar4,0);
            *(undefined4 *)(param_1 + 0xc) = uVar6;
          }
          else {
            if (uVar1 != 0x12) goto LAB_016342f4;
            iVar2 = *piVar7;
            iVar5 = *(int *)(param_1 + 0x10);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
LAB_016341d0:
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x0244f950(iVar5,param_2,uVar6,*puVar8);
          }
        }
        else if (uVar1 == 0x18) {
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x14) = uVar6;
        }
        else {
          if (uVar1 != 0x22) goto LAB_016342f4;
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          uVar6 = func_0x01484fc8(param_2,iVar4,uVar6,0);
          *(undefined4 *)(param_1 + 0x18) = uVar6;
        }
      }
      else if (uVar1 < 0x43) {
        if (uVar1 == 0x28) {
          uVar6 = func_0x01484f98(param_2,iVar4,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar6;
        }
        else {
          if (uVar1 == 0x42) {
            iVar2 = *piVar7;
            iVar5 = *(int *)(param_1 + 0x20);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
            goto LAB_016341d0;
          }
LAB_016342f4:
          uVar6 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar6;
        }
      }
      else if (uVar1 == 0x50 || uVar1 == 0x52) {
        iVar2 = *piVar7;
        iVar5 = *(int *)(param_1 + 0x24);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f96c(iVar5,param_2,uVar6,**(undefined4 **)(_UNK_01634340 + 0x1634280));
      }
      else {
        if (uVar1 != 0x58) goto LAB_016342f4;
        uVar6 = func_0x01484f98(param_2,iVar4,0);
        *(undefined4 *)(param_1 + 0x28) = uVar6;
      }
      uVar1 = func_0x01484f58(param_2,iVar4,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventRescueTarget$$get_XXX_RowIdentifier RVA 0x1624344 =====

undefined4 FUN_01634344(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ===== fat.rawdata.EventRescueTarget$$set_XXX_RowIdentifier RVA 0x162434c =====

void FUN_0163434c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// ===== fat.rawdata.EventRescueTarget$$.cctor RVA 0x1624354 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01634354(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016343f8 + 0x1634364);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016343fc + 0x1634378));
    func_0x01384978(*(undefined4 *)(_UNK_01634400 + 0x1634384));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01634404 + 0x1634398);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01634408 + 0x16343a8);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x42,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x52,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}


