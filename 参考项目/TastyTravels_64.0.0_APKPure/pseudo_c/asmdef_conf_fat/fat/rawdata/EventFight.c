/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventFight$$.ctor RVA 0x15beec0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015ceec0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar6 = (char *)(_UNK_015ceffc + 0x15ceed4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015cf000 + 0x15ceee8));
    func_0x01384978(*(undefined4 *)(_UNK_015cf004 + 0x15ceef4));
    func_0x01384978(*(undefined4 *)(_UNK_015cf008 + 0x15cef00));
    func_0x01384978(*(undefined4 *)(_UNK_015cf00c + 0x15cef0c));
    func_0x01384978(*(undefined4 *)(_UNK_015cf010 + 0x15cef18));
    func_0x01384978(*(undefined4 *)(_UNK_015cf014 + 0x15cef24));
    func_0x01384978(*(undefined4 *)(_UNK_015cf018 + 0x15cef30));
    *pcVar6 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_015cf01c + 0x15cef44);
  iVar1 = func_0x01384be4(*puVar7);
  puVar8 = *(undefined4 **)(_UNK_015cf020 + 0x15cef58);
  func_0x0244f948(iVar1,*puVar8);
  puVar2 = *(undefined4 **)(_UNK_015cf024 + 0x15cef68);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0244f964(iVar1,**(undefined4 **)(_UNK_015cf028 + 0x15cef80));
  uVar3 = *puVar7;
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(uVar3);
  func_0x0244f948(iVar1,*puVar8);
  piVar4 = *(int **)(_UNK_015cf030 + 0x15cefb8);
  iVar5 = *(int *)(**(int **)(_UNK_015cf02c + 0x15cefac) + 0x74);
  param_1[10] = iVar1;
  param_1[0x14] = *piVar4;
  if (iVar5 == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015cf034 + 0x15cefdc));
                    /* WARNING: Could not recover jumptable at 0x015ceff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventFight$$.ctor RVA 0x15bf038 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015cf038(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  
  pcVar6 = (char *)(_UNK_015cf17c + 0x15cf050);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015cf180 + 0x15cf064));
    func_0x01384978(*(undefined4 *)(_UNK_015cf184 + 0x15cf070));
    *pcVar6 = '\x01';
  }
  FUN_015ceec0(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  puVar9 = *(undefined4 **)(_UNK_015cf188 + 0x15cf0b4);
  uVar2 = func_0x0244f94c(iVar7,*puVar9);
  iVar7 = *(int *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0244f968(iVar7,**(undefined4 **)(_UNK_015cf18c + 0x15cf0e0));
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  uVar5 = *(undefined4 *)(param_2 + 0x24);
  iVar7 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0244f94c(iVar7,*puVar9);
  uVar11 = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x34) = uVar11;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar5 = *(undefined4 *)(param_2 + 0x40);
  uVar10 = *(undefined4 *)(param_2 + 0x44);
  uVar3 = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar1 = *(undefined1 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x58);
  uVar8 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined1 *)(param_1 + 0x48) = uVar1;
  uVar4 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  uVar5 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x44) = uVar10;
  *(undefined4 *)(param_1 + 0x4c) = uVar8;
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  uVar2 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.EventFight$$Clone RVA 0x15bf190 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015cf190(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015cf1e4 + 0x15cf1a4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015cf1e8 + 0x15cf1b8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015cf1ec + 0x15cf1cc));
  FUN_015cf038(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventFight$$ProxyInternalMergeFrom RVA 0x15bf1f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015cf1f0(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_015cf614 + 0x15cf20c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015cf618 + 0x15cf220));
    func_0x01384978(*(undefined4 *)(_UNK_015cf61c + 0x15cf22c));
    func_0x01384978(*(undefined4 *)(_UNK_015cf620 + 0x15cf238));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015cf624 + 0x15cf268);
    puVar8 = *(undefined4 **)(_UNK_015cf628 + 0x15cf270);
    puVar9 = *(undefined4 **)(_UNK_015cf62c + 0x15cf278);
    do {
      if (uVar1 < 0x51) {
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
LAB_015cf498:
              uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
              *(undefined4 *)(param_1 + 8) = uVar2;
            }
          }
          else if (uVar1 == 0x18 || uVar1 == 0x1a) {
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
            func_0x0244f96c(iVar6,param_2,uVar2,*puVar8);
          }
          else {
            if (uVar1 != 0x20) goto LAB_015cf498;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x20) = uVar2;
          }
        }
        else if (uVar1 < 0x39) {
          if (uVar1 == 0x28) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x24) = uVar2;
          }
          else if (uVar1 == 0x32) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x28);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
LAB_015cf5e8:
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x0244f950(iVar6,param_2,uVar2,*puVar9);
          }
          else {
            if (uVar1 != 0x38) goto LAB_015cf498;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x2c) = uVar2;
          }
        }
        else if (uVar1 == 0x40) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x34) = uVar2;
        }
        else if (uVar1 == 0x48) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x38) = uVar2;
        }
        else {
          if (uVar1 != 0x50) goto LAB_015cf498;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x3c) = uVar2;
        }
      }
      else if (uVar1 < 0x89) {
        if (uVar1 < 0x61) {
          if (uVar1 == 0x58) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x40) = uVar2;
          }
          else {
            if (uVar1 != 0x60) goto LAB_015cf498;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x4c) = uVar2;
          }
        }
        else if (uVar1 == 0x72) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
          *(undefined4 *)(param_1 + 0x50) = uVar2;
        }
        else if (uVar1 == 0x80) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x58) = uVar2;
        }
        else {
          if (uVar1 != 0x88) goto LAB_015cf498;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x5c) = uVar2;
        }
      }
      else if (uVar1 < 0xa1) {
        if (uVar1 == 0x90) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x44) = uVar2;
        }
        else if (uVar1 == 0x98) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x54) = uVar2;
        }
        else {
          if (uVar1 != 0xa0) goto LAB_015cf498;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
      }
      else if (uVar1 == 0xa8) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x30) = uVar2;
      }
      else {
        if (uVar1 == 0xb2) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x10);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
          goto LAB_015cf5e8;
        }
        if (uVar1 != 0xb8) goto LAB_015cf498;
        lVar10 = func_0x01484f88(param_2,iVar5,0);
        *(bool *)(param_1 + 0x48) = lVar10 != 0;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventFight$$get_XXX_RowIdentifier RVA 0x15bf630 =====

undefined4 FUN_015cf630(int param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



// ===== fat.rawdata.EventFight$$set_XXX_RowIdentifier RVA 0x15bf638 =====

void FUN_015cf638(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}



// ===== fat.rawdata.EventFight$$.cctor RVA 0x15bf640 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015cf640(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015cf6e4 + 0x15cf650);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015cf6e8 + 0x15cf664));
    func_0x01384978(*(undefined4 *)(_UNK_015cf6ec + 0x15cf670));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015cf6f0 + 0x15cf684);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015cf6f4 + 0x15cf694);
  uVar1 = func_0x0244f954(0xb2,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f954(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}


