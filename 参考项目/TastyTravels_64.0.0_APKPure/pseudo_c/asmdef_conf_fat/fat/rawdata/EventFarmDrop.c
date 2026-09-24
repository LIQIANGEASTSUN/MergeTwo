/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventFarmDrop$$.ctor RVA 0x196fc70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0197fc70(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_0197fd7c + 0x197fc84);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0197fd80 + 0x197fc98));
    func_0x01384978(*(undefined4 *)(_UNK_0197fd84 + 0x197fca4));
    func_0x01384978(*(undefined4 *)(_UNK_0197fd88 + 0x197fcb0));
    func_0x01384978(*(undefined4 *)(_UNK_0197fd8c + 0x197fcbc));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_0197fd90 + 0x197fcd0);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_0197fd94 + 0x197fce4);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_0197fd98 + 0x197fd3c);
  param_1[7] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0197fd9c + 0x197fd5c));
                    /* WARNING: Could not recover jumptable at 0x0197fd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventFarmDrop$$.ctor RVA 0x196fda0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0197fda0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_0197fe90 + 0x197fdb8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0197fe94 + 0x197fdcc));
    *pcVar3 = '\x01';
  }
  FUN_0197fc70(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_0197fe98 + 0x197fe10);
  uVar1 = func_0x03651cc4(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,*puVar5);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventFarmDrop$$Clone RVA 0x196fe9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0197fe9c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0197fef0 + 0x197feb0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0197fef4 + 0x197fec4));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0197fef8 + 0x197fed8));
  FUN_0197fda0(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventFarmDrop$$ProxyInternalMergeFrom RVA 0x196fefc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0197fefc(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar3 = (char *)(_UNK_019800a0 + 0x197ff14);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019800a4 + 0x197ff28));
    func_0x01384978(*(undefined4 *)(_UNK_019800a8 + 0x197ff34));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_019800ac + 0x197ff64);
    puVar8 = *(undefined4 **)(_UNK_019800b0 + 0x197ff6c);
    do {
      if (uVar1 < 0x13) {
        if (uVar1 == 8) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar4;
        }
        else {
          if (uVar1 == 0x12) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x14);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
            goto LAB_01980064;
          }
LAB_0197ffe8:
          uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
      }
      else {
        if (uVar1 == 0x1a) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x18);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
        }
        else if (uVar1 == 0x22) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x1c);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
        }
        else {
          if (uVar1 != 0x32) goto LAB_0197ffe8;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
        }
LAB_01980064:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar6,param_2,uVar4,*puVar8);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventFarmDrop$$get_XXX_RowIdentifier RVA 0x19700b4 =====

undefined4 FUN_019800b4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== fat.rawdata.EventFarmDrop$$set_XXX_RowIdentifier RVA 0x19700bc =====

void FUN_019800bc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== fat.rawdata.EventFarmDrop$$.cctor RVA 0x19700c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019800c4(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01980180 + 0x19800d4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01980184 + 0x19800e8));
    func_0x01384978(*(undefined4 *)(_UNK_01980188 + 0x19800f4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0198018c + 0x1980108);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01980190 + 0x1980118);
  uVar1 = func_0x0244f954(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  return;
}


