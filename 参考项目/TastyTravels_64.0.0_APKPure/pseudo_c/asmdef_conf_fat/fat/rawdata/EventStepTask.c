/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventStepTask$$.ctor RVA 0x163a228 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0164a228(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_0164a3cc + 0x164a23c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0164a3d0 + 0x164a250));
    func_0x01384978(*(undefined4 *)(_UNK_0164a3d4 + 0x164a25c));
    func_0x01384978(*(undefined4 *)(_UNK_0164a3d8 + 0x164a268));
    func_0x01384978(*(undefined4 *)(_UNK_0164a3dc + 0x164a274));
    func_0x01384978(*(undefined4 *)(_UNK_0164a3e0 + 0x164a280));
    func_0x01384978(*(undefined4 *)(_UNK_0164a3e4 + 0x164a28c));
    func_0x01384978(*(undefined4 *)(_UNK_0164a3e8 + 0x164a298));
    func_0x01384978(*(undefined4 *)(_UNK_0164a3ec + 0x164a2a4));
    *pcVar4 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_0164a3f0 + 0x164a2b8);
  iVar1 = func_0x01384be4(*puVar7);
  puVar8 = *(undefined4 **)(_UNK_0164a3f4 + 0x164a2cc);
  func_0x0244f948(iVar1,*puVar8);
  puVar5 = *(undefined4 **)(_UNK_0164a3f8 + 0x164a2dc);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_0164a3fc + 0x164a2f4);
  func_0x034614f8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[9] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x034614f8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[10] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x034614f8(iVar1,*puVar6);
  puVar5 = *(undefined4 **)(_UNK_0164a400 + 0x164a334);
  param_1[0xb] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_0164a404 + 0x164a34c);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar7;
  param_1[0xc] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f948(iVar1,*puVar8);
  uVar2 = *puVar5;
  param_1[0xd] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_0164a408 + 0x164a38c);
  param_1[0xf] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0164a40c + 0x164a3ac));
                    /* WARNING: Could not recover jumptable at 0x0164a3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventStepTask$$.ctor RVA 0x163a410 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0164a410(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  pcVar3 = (char *)(_UNK_0164a5a0 + 0x164a428);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0164a5a4 + 0x164a43c));
    func_0x01384978(*(undefined4 *)(_UNK_0164a5a8 + 0x164a448));
    func_0x01384978(*(undefined4 *)(_UNK_0164a5ac + 0x164a454));
    *pcVar3 = '\x01';
  }
  FUN_0164a228(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_0164a5b0 + 0x164a498);
  uVar1 = func_0x0244f94c(iVar4,*puVar6);
  iVar4 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar7 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x1c) = uVar7;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_0164a5b4 + 0x164a4d0);
  uVar1 = func_0x0345e8e4(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0345e8e4(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0345e8e4(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_0164a5b8 + 0x164a538);
  uVar1 = func_0x0244f968(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar4,*puVar6);
  iVar4 = *(int *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar4,*puVar5);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventStepTask$$Clone RVA 0x163a5bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0164a5bc(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0164a610 + 0x164a5d0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0164a614 + 0x164a5e4));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0164a618 + 0x164a5f8));
  FUN_0164a410(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventStepTask$$ProxyInternalMergeFrom RVA 0x163a61c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0164a61c(int param_1,int param_2)

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
  
  pcVar5 = (char *)(_UNK_0164a9b4 + 0x164a638);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0164a9b8 + 0x164a64c));
    func_0x01384978(*(undefined4 *)(_UNK_0164a9bc + 0x164a658));
    func_0x01384978(*(undefined4 *)(_UNK_0164a9c0 + 0x164a664));
    func_0x01384978(*(undefined4 *)(_UNK_0164a9c4 + 0x164a670));
    *pcVar5 = '\x01';
  }
  iVar6 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar6,0);
  if (uVar1 != 0) {
    piVar8 = *(int **)(_UNK_0164a9c8 + 0x164a6a0);
    puVar9 = *(undefined4 **)(_UNK_0164a9cc + 0x164a6a8);
    do {
      if (uVar1 < 0x39) {
        if (uVar1 < 0x19) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else if (uVar1 == 0x10) {
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x14) = uVar2;
          }
          else {
            if (uVar1 != 0x18) goto LAB_0164a88c;
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x1c) = uVar2;
          }
        }
        else if (uVar1 < 0x2b) {
          if (uVar1 == 0x20) {
            uVar2 = func_0x01484f98(param_2,iVar6,0);
            *(undefined4 *)(param_1 + 0x20) = uVar2;
          }
          else {
            if (uVar1 == 0x2a) {
              iVar3 = *piVar8;
              iVar7 = *(int *)(param_1 + 0x28);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
              goto LAB_0164a928;
            }
LAB_0164a88c:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else {
          if (uVar1 != 0x32) {
            if (uVar1 == 0x38) goto LAB_0164a7e4;
            goto LAB_0164a88c;
          }
          iVar3 = *piVar8;
          iVar7 = *(int *)(param_1 + 0x2c);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar8;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
LAB_0164a928:
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          puVar4 = *(undefined4 **)(_UNK_0164a9d0 + 0x164a948);
LAB_0164a988:
          func_0x034604a8(iVar7,param_2,uVar2,*puVar4);
        }
      }
      else {
        if (0x50 < uVar1) {
          if (uVar1 < 0x59) {
            if (uVar1 == 0x52) {
LAB_0164a7ac:
              iVar3 = *piVar8;
              iVar7 = *(int *)(param_1 + 0x3c);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x1c);
              goto LAB_0164a808;
            }
            if (uVar1 == 0x58) {
              uVar2 = func_0x01484f98(param_2,iVar6,0);
              *(undefined4 *)(param_1 + 0x18) = uVar2;
              goto LAB_0164a994;
            }
          }
          else {
            if (uVar1 == 0x62) {
              iVar3 = *piVar8;
              iVar7 = *(int *)(param_1 + 0x24);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              puVar4 = *(undefined4 **)(_UNK_0164a9d4 + 0x164a98c);
              goto LAB_0164a988;
            }
            if (uVar1 == 0x72) {
              iVar3 = *piVar8;
              iVar7 = *(int *)(param_1 + 0x10);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
              goto LAB_0164a860;
            }
          }
          goto LAB_0164a88c;
        }
        if (uVar1 < 0x43) {
          if (uVar1 == 0x3a) {
LAB_0164a7e4:
            iVar3 = *piVar8;
            iVar7 = *(int *)(param_1 + 0x30);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
LAB_0164a808:
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            func_0x0244f96c(iVar7,param_2,uVar2,*puVar9);
          }
          else {
            if (uVar1 != 0x42) goto LAB_0164a88c;
            iVar3 = *piVar8;
            iVar7 = *(int *)(param_1 + 0x34);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x18);
LAB_0164a860:
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            func_0x0244f950(iVar7,param_2,uVar2,**(undefined4 **)(_UNK_0164a9d8 + 0x164a880));
          }
        }
        else {
          if (uVar1 != 0x48) {
            if (uVar1 == 0x50) goto LAB_0164a7ac;
            goto LAB_0164a88c;
          }
          uVar2 = func_0x01484f98(param_2,iVar6,0);
          *(undefined4 *)(param_1 + 0x38) = uVar2;
        }
      }
LAB_0164a994:
      uVar1 = func_0x01484f58(param_2,iVar6,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventStepTask$$get_XXX_RowIdentifier RVA 0x163a9dc =====

undefined4 FUN_0164a9dc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ===== fat.rawdata.EventStepTask$$set_XXX_RowIdentifier RVA 0x163a9e4 =====

void FUN_0164a9e4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



// ===== fat.rawdata.EventStepTask$$.cctor RVA 0x163a9ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0164a9ec(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar4 = (char *)(_UNK_0164abec + 0x164aa00);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0164abf0 + 0x164aa14));
    func_0x01384978(*(undefined4 *)(_UNK_0164abf4 + 0x164aa20));
    func_0x01384978(*(undefined4 *)(_UNK_0164abf8 + 0x164aa2c));
    func_0x01384978(*(undefined4 *)(_UNK_0164abfc + 0x164aa38));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_0164ac00 + 0x164aa4c);
  **(undefined4 **)(*piVar5 + 0x5c) = **(undefined4 **)(_UNK_0164ac04 + 0x164aa5c);
  uVar1 = func_0x0244f954(0x72,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  puVar6 = *(undefined4 **)(_UNK_0164ac08 + 0x164aaac);
  uVar3 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_0164ac0c + 0x164aacc);
  func_0x0244f990(uVar3,uVar1,uVar2,0x62,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8) = uVar3;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar6);
  func_0x0244f990(uVar3,uVar1,uVar2,0x2a,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc) = uVar3;
  uVar1 = func_0x0244f934(8,0,0);
  uVar2 = func_0x0244f934(0x10,0,0);
  uVar3 = func_0x01384be4(*puVar6);
  func_0x0244f990(uVar3,uVar1,uVar2,0x32,*puVar7);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x10) = uVar3;
  uVar1 = func_0x0244f970(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f954(0x42,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x18) = uVar1;
  uVar1 = func_0x0244f970(0x52,0);
  *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x1c) = uVar1;
  return;
}


