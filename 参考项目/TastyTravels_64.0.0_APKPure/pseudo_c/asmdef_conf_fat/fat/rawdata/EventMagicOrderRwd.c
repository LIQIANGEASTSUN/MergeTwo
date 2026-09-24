/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventMagicOrderRwd$$.ctor RVA 0x15dd29c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015ed29c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_015ed404 + 0x15ed2b0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015ed408 + 0x15ed2c4));
    func_0x01384978(*(undefined4 *)(_UNK_015ed40c + 0x15ed2d0));
    func_0x01384978(*(undefined4 *)(_UNK_015ed410 + 0x15ed2dc));
    func_0x01384978(*(undefined4 *)(_UNK_015ed414 + 0x15ed2e8));
    func_0x01384978(*(undefined4 *)(_UNK_015ed418 + 0x15ed2f4));
    func_0x01384978(*(undefined4 *)(_UNK_015ed41c + 0x15ed300));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015ed420 + 0x15ed314));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_015ed424 + 0x15ed328));
  puVar5 = *(undefined4 **)(_UNK_015ed428 + 0x15ed33c);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_015ed42c + 0x15ed354);
  func_0x0244f964(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[7] = iVar1;
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
  uVar2 = *puVar5;
  param_1[10] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0244f964(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_015ed430 + 0x15ed3c4);
  param_1[0xb] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_015ed434 + 0x15ed3e4));
                    /* WARNING: Could not recover jumptable at 0x015ed400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventMagicOrderRwd$$.ctor RVA 0x15dd438 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015ed438(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_015ed58c + 0x15ed450);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015ed590 + 0x15ed464));
    func_0x01384978(*(undefined4 *)(_UNK_015ed594 + 0x15ed470));
    *pcVar4 = '\x01';
  }
  FUN_015ed29c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar5,**(undefined4 **)(_UNK_015ed598 + 0x15ed4b0));
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_015ed59c + 0x15ed4e4);
  uVar1 = func_0x0244f968(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
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
  iVar5 = *(int *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventMagicOrderRwd$$Clone RVA 0x15dd5a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_015ed5a0(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_015ed5f4 + 0x15ed5b4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015ed5f8 + 0x15ed5c8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_015ed5fc + 0x15ed5dc));
  FUN_015ed438(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventMagicOrderRwd$$ProxyInternalMergeFrom RVA 0x15dd600 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015ed600(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_015ed900 + 0x15ed61c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015ed904 + 0x15ed630));
    func_0x01384978(*(undefined4 *)(_UNK_015ed908 + 0x15ed63c));
    func_0x01384978(*(undefined4 *)(_UNK_015ed90c + 0x15ed648));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_015ed910 + 0x15ed678);
    puVar8 = *(undefined4 **)(_UNK_015ed914 + 0x15ed680);
    puVar9 = *(undefined4 **)(_UNK_015ed918 + 0x15ed688);
    do {
      if (uVar1 < 0x31) {
        if (0x18 < uVar1) {
          if (uVar1 < 0x29) {
            if (uVar1 == 0x20) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x18) = uVar2;
              goto LAB_015ed864;
            }
            if (uVar1 == 0x28) goto LAB_015ed7f8;
          }
          else {
            if (uVar1 == 0x2a) {
LAB_015ed7f8:
              iVar3 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x1c);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar7;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
              goto LAB_015ed844;
            }
            if (uVar1 == 0x30) goto LAB_015ed768;
          }
          goto LAB_015ed7b8;
        }
        if (uVar1 == 8) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar2;
        }
        else if (uVar1 == 0x12) {
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
        else {
          if (uVar1 != 0x18) goto LAB_015ed7b8;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x14) = uVar2;
        }
      }
      else {
        if (uVar1 < 0x41) {
          if (uVar1 < 0x39) {
            if (uVar1 == 0x32) {
LAB_015ed768:
              iVar3 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x20);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar7;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
LAB_015ed844:
              if (iVar6 == 0) {
                func_0x01384bf0();
              }
              func_0x0244f96c(iVar6,param_2,uVar2,*puVar9);
              goto LAB_015ed864;
            }
            if (uVar1 == 0x38) goto LAB_015ed7d0;
          }
          else {
            if (uVar1 == 0x3a) {
LAB_015ed7d0:
              iVar3 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x24);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar7;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
              goto LAB_015ed844;
            }
            if (uVar1 == 0x40) goto LAB_015ed730;
          }
        }
        else if (uVar1 < 0x49) {
          if (uVar1 == 0x42) {
LAB_015ed730:
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x28);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
            goto LAB_015ed844;
          }
          if (uVar1 == 0x48) goto LAB_015ed820;
        }
        else {
          if (uVar1 == 0x4a) {
LAB_015ed820:
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x2c);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x18);
            goto LAB_015ed844;
          }
          if (uVar1 == 0x50) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x30) = uVar2;
            goto LAB_015ed864;
          }
        }
LAB_015ed7b8:
        uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar2;
      }
LAB_015ed864:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventMagicOrderRwd$$get_XXX_RowIdentifier RVA 0x15dd91c =====

undefined4 FUN_015ed91c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



// ===== fat.rawdata.EventMagicOrderRwd$$set_XXX_RowIdentifier RVA 0x15dd924 =====

void FUN_015ed924(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}



// ===== fat.rawdata.EventMagicOrderRwd$$.cctor RVA 0x15dd92c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015ed92c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_015eda18 + 0x15ed93c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_015eda1c + 0x15ed950));
    func_0x01384978(*(undefined4 *)(_UNK_015eda20 + 0x15ed95c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_015eda24 + 0x15ed970);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_015eda28 + 0x15ed980);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f970(0x42,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f970(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x18) = uVar1;
  return;
}


