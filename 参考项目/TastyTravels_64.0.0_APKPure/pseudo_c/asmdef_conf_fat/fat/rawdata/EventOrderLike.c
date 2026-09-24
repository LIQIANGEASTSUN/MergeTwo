/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventOrderLike$$.ctor RVA 0x15fd7d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0160d7d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_0160d920 + 0x160d7e4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0160d924 + 0x160d7f8));
    func_0x01384978(*(undefined4 *)(_UNK_0160d928 + 0x160d804));
    func_0x01384978(*(undefined4 *)(_UNK_0160d92c + 0x160d810));
    func_0x01384978(*(undefined4 *)(_UNK_0160d930 + 0x160d81c));
    func_0x01384978(*(undefined4 *)(_UNK_0160d934 + 0x160d828));
    func_0x01384978(*(undefined4 *)(_UNK_0160d938 + 0x160d834));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0160d93c + 0x160d848));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_0160d940 + 0x160d85c));
  puVar5 = *(undefined4 **)(_UNK_0160d944 + 0x160d870);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_0160d948 + 0x160d888);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[9] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[0xf] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_0160d94c + 0x160d8e0);
  param_1[0x11] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0160d950 + 0x160d900));
                    /* WARNING: Could not recover jumptable at 0x0160d91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventOrderLike$$.ctor RVA 0x15fd954 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0160d954(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  pcVar6 = (char *)(_UNK_0160dabc + 0x160d96c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0160dac0 + 0x160d980));
    func_0x01384978(*(undefined4 *)(_UNK_0160dac4 + 0x160d98c));
    *pcVar6 = '\x01';
  }
  FUN_0160d7d0(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0244f94c(iVar7,**(undefined4 **)(_UNK_0160dac8 + 0x160d9cc));
  iVar7 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  puVar8 = *(undefined4 **)(_UNK_0160dacc + 0x160d9f8);
  uVar2 = func_0x0244f968(iVar7,*puVar8);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 0x20);
  iVar7 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0244f968(iVar7,*puVar8);
  iVar7 = *(int *)(param_2 + 0x3c);
  uVar1 = *(undefined2 *)(param_2 + 0x2c);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  uVar9 = *(undefined4 *)(param_2 + 0x30);
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  uVar5 = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(undefined2 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar9;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0244f968(iVar7,*puVar8);
  iVar7 = *(int *)(param_2 + 0x44);
  uVar3 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0244f968(iVar7,*puVar8);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  uVar10 = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar10;
  uVar2 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.EventOrderLike$$Clone RVA 0x15fdad0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0160dad0(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0160db24 + 0x160dae4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0160db28 + 0x160daf8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0160db2c + 0x160db0c));
  FUN_0160d954(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventOrderLike$$ProxyInternalMergeFrom RVA 0x15fdb30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0160db30(int param_1,int param_2)

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
  longlong lVar10;
  
  pcVar4 = (char *)(_UNK_0160df58 + 0x160db4c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0160df5c + 0x160db60));
    func_0x01384978(*(undefined4 *)(_UNK_0160df60 + 0x160db6c));
    func_0x01384978(*(undefined4 *)(_UNK_0160df64 + 0x160db78));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0160df68 + 0x160dba8);
    puVar8 = *(undefined4 **)(_UNK_0160df6c + 0x160dbb0);
    puVar9 = *(undefined4 **)(_UNK_0160df70 + 0x160dbb8);
    do {
      if (uVar1 < 0x61) {
        if (uVar1 < 0x2b) {
          if (uVar1 < 0x19) {
            if (uVar1 == 8) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0xc) = uVar2;
            }
            else if (uVar1 == 0x10) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x18) = uVar2;
            }
            else {
              if (uVar1 != 0x18) goto LAB_0160de20;
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x1c) = uVar2;
            }
          }
          else if (uVar1 == 0x20) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x28) = uVar2;
          }
          else {
            if (uVar1 == 0x28 || uVar1 == 0x2a) {
              iVar3 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x3c);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar7;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
              goto LAB_0160dddc;
            }
LAB_0160de20:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else if (uVar1 < 0x53) {
          if (uVar1 == 0x30) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x54) = uVar2;
          }
          else if (uVar1 == 0x38) {
            lVar10 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x2c) = lVar10 != 0;
          }
          else {
            if (uVar1 != 0x52) goto LAB_0160de20;
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
        }
        else {
          if (uVar1 == 0x58 || uVar1 == 0x5a) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x14);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
            goto LAB_0160dddc;
          }
          if (uVar1 != 0x60) goto LAB_0160de20;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
      }
      else if (uVar1 < 0x81) {
        if (uVar1 < 0x71) {
          if (uVar1 == 0x68 || uVar1 == 0x6a) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x24);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
            goto LAB_0160dddc;
          }
          if (uVar1 != 0x70) goto LAB_0160de20;
        }
        else if (uVar1 != 0x72) {
          if (uVar1 == 0x78) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x34) = uVar2;
          }
          else {
            if (uVar1 != 0x80) goto LAB_0160de20;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x48) = uVar2;
          }
          goto LAB_0160de34;
        }
        iVar3 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x44);
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
LAB_0160dddc:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0244f96c(iVar6,param_2,uVar2,*puVar8);
      }
      else if (uVar1 < 0x99) {
        if (uVar1 == 0x88) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x4c) = uVar2;
        }
        else if (uVar1 == 0x90) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x30) = uVar2;
        }
        else {
          if (uVar1 != 0x98) goto LAB_0160de20;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x40) = uVar2;
        }
      }
      else if (uVar1 == 0xa0) {
        lVar10 = func_0x01484f88(param_2,iVar5,0);
        *(bool *)(param_1 + 0x2d) = lVar10 != 0;
      }
      else if (uVar1 == 0xa8) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x38) = uVar2;
      }
      else {
        if (uVar1 != 0xb0) goto LAB_0160de20;
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x50) = uVar2;
      }
LAB_0160de34:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventOrderLike$$get_XXX_RowIdentifier RVA 0x15fdf74 =====

undefined4 FUN_0160df74(int param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



// ===== fat.rawdata.EventOrderLike$$set_XXX_RowIdentifier RVA 0x15fdf7c =====

void FUN_0160df7c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}



// ===== fat.rawdata.EventOrderLike$$.cctor RVA 0x15fdf84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0160df84(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0160e058 + 0x160df94);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0160e05c + 0x160dfa8));
    func_0x01384978(*(undefined4 *)(_UNK_0160e060 + 0x160dfb4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0160e064 + 0x160dfc8);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0160e068 + 0x160dfd8);
  uVar1 = func_0x0244f954(0x52,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x5a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x6a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f970(0x72,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  return;
}


