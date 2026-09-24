/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ComMergeSkill$$.ctor RVA 0x1922b80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01932b80(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_01932ce8 + 0x1932b94);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01932cec + 0x1932ba8));
    func_0x01384978(*(undefined4 *)(_UNK_01932cf0 + 0x1932bb4));
    func_0x01384978(*(undefined4 *)(_UNK_01932cf4 + 0x1932bc0));
    func_0x01384978(*(undefined4 *)(_UNK_01932cf8 + 0x1932bcc));
    func_0x01384978(*(undefined4 *)(_UNK_01932cfc + 0x1932bd8));
    func_0x01384978(*(undefined4 *)(_UNK_01932d00 + 0x1932be4));
    func_0x01384978(*(undefined4 *)(_UNK_01932d04 + 0x1932bf0));
    *pcVar5 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_01932d08 + 0x1932c04);
  iVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_01932d0c + 0x1932c18);
  func_0x036542d8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar7);
  iVar4 = **(int **)(_UNK_01932d10 + 0x1932c40);
  puVar6 = *(undefined4 **)(_UNK_01932d14 + 0x1932c4c);
  param_1[5] = iVar1;
  param_1[6] = iVar4;
  iVar1 = func_0x01384be4(*puVar6);
  puVar7 = *(undefined4 **)(_UNK_01932d18 + 0x1932c68);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[8] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  piVar3 = *(int **)(_UNK_01932d1c + 0x1932ca8);
  param_1[9] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01932d20 + 0x1932cc8));
                    /* WARNING: Could not recover jumptable at 0x01932ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ComMergeSkill$$.ctor RVA 0x1922d24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01932d24(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_01932e58 + 0x1932d3c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01932e5c + 0x1932d50));
    func_0x01384978(*(undefined4 *)(_UNK_01932e60 + 0x1932d5c));
    *pcVar4 = '\x01';
  }
  FUN_01932b80(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_01932e64 + 0x1932da0);
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_01932e68 + 0x1932df0);
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar6);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.ComMergeSkill$$Clone RVA 0x1922e6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01932e6c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01932ec0 + 0x1932e80);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01932ec4 + 0x1932e94));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01932ec8 + 0x1932ea8));
  FUN_01932d24(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ComMergeSkill$$ProxyInternalMergeFrom RVA 0x1922ecc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01932ecc(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar3 = (char *)(_UNK_01933150 + 0x1932ee8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01933154 + 0x1932efc));
    func_0x01384978(*(undefined4 *)(_UNK_01933158 + 0x1932f08));
    func_0x01384978(*(undefined4 *)(_UNK_0193315c + 0x1932f14));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01933160 + 0x1932f44);
    puVar8 = *(undefined4 **)(_UNK_01933164 + 0x1932f4c);
    puVar9 = *(undefined4 **)(_UNK_01933168 + 0x1932f54);
    do {
      if (uVar1 < 0x23) {
        if (uVar1 < 0x13) {
          if (uVar1 == 8) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar4;
          }
          else {
            if (uVar1 != 0x12) goto LAB_019330bc;
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x10);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
LAB_019330f8:
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x036520e8(iVar6,param_2,uVar4,*puVar8);
          }
        }
        else {
          if (uVar1 == 0x1a) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x14);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
            goto LAB_019330f8;
          }
          if (uVar1 == 0x20 || uVar1 == 0x22) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x1c);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
            goto LAB_01933098;
          }
LAB_019330bc:
          uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
      }
      else {
        if (uVar1 < 0x31) {
          if (uVar1 != 0x28 && uVar1 != 0x2a) {
            if (uVar1 != 0x30) goto LAB_019330bc;
            goto LAB_01933074;
          }
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x20);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
        }
        else {
          if (uVar1 != 0x32) {
            if (uVar1 == 0x38) {
              uVar4 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x28) = uVar4;
            }
            else {
              if (uVar1 != 0x42) goto LAB_019330bc;
              uVar4 = func_0x01484f98(param_2,iVar5,0);
              uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
              *(undefined4 *)(param_1 + 0x18) = uVar4;
            }
            goto LAB_01933130;
          }
LAB_01933074:
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x24);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
        }
LAB_01933098:
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0364b0e0(iVar6,param_2,uVar4,*puVar9);
      }
LAB_01933130:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ComMergeSkill$$get_XXX_RowIdentifier RVA 0x192316c =====

undefined4 FUN_0193316c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ===== fat.rawdata.ComMergeSkill$$set_XXX_RowIdentifier RVA 0x1923174 =====

void FUN_01933174(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// ===== fat.rawdata.ComMergeSkill$$.cctor RVA 0x192317c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0193317c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01933250 + 0x193318c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01933254 + 0x19331a0));
    func_0x01384978(*(undefined4 *)(_UNK_01933258 + 0x19331ac));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0193325c + 0x19331c0);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01933260 + 0x19331d0);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f970(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  return;
}


