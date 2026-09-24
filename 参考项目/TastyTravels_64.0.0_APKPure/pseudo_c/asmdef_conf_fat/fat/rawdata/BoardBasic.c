/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.BoardBasic$$.ctor RVA 0x1901828 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01911828(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_0191197c + 0x191183c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01911980 + 0x1911850));
    func_0x01384978(*(undefined4 *)(_UNK_01911984 + 0x191185c));
    func_0x01384978(*(undefined4 *)(_UNK_01911988 + 0x1911868));
    func_0x01384978(*(undefined4 *)(_UNK_0191198c + 0x1911874));
    func_0x01384978(*(undefined4 *)(_UNK_01911990 + 0x1911880));
    func_0x01384978(*(undefined4 *)(_UNK_01911994 + 0x191188c));
    func_0x01384978(*(undefined4 *)(_UNK_01911998 + 0x1911898));
    *pcVar5 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_0191199c + 0x19118ac);
  iVar1 = func_0x01384be4(*puVar7);
  puVar8 = *(undefined4 **)(_UNK_019119a0 + 0x19118c0);
  func_0x036542d8(iVar1,*puVar8);
  uVar2 = **(undefined4 **)(_UNK_019119a4 + 0x19118d0);
  piVar6 = *(int **)(_UNK_019119a8 + 0x19118dc);
  param_1[4] = iVar1;
  param_1[5] = *piVar6;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_019119ac + 0x19118f8));
  uVar2 = *puVar7;
  iVar4 = *piVar6;
  param_1[6] = iVar1;
  param_1[7] = iVar4;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar8);
  piVar3 = *(int **)(_UNK_019119b0 + 0x191192c);
  iVar4 = *piVar6;
  param_1[8] = iVar1;
  iVar1 = *piVar3;
  param_1[9] = iVar4;
  param_1[10] = iVar4;
  iVar1 = *(int *)(iVar1 + 0x74);
  param_1[0xb] = iVar4;
  if (iVar1 == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_019119b4 + 0x191195c));
                    /* WARNING: Could not recover jumptable at 0x01911978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.BoardBasic$$.ctor RVA 0x19019b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019119b8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  
  pcVar5 = (char *)(_UNK_01911ac0 + 0x19119d0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01911ac4 + 0x19119e4));
    func_0x01384978(*(undefined4 *)(_UNK_01911ac8 + 0x19119f0));
    *pcVar5 = '\x01';
  }
  FUN_01911828(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar8 = *(undefined4 **)(_UNK_01911acc + 0x1911a34);
  uVar1 = func_0x03651cc4(iVar6,*puVar8);
  iVar6 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar6,**(undefined4 **)(_UNK_01911ad0 + 0x1911a60));
  iVar6 = *(int *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar6,*puVar8);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar7 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar9 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar9;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.BoardBasic$$Clone RVA 0x1901ad4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01911ad4(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01911b28 + 0x1911ae8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01911b2c + 0x1911afc));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01911b30 + 0x1911b10));
  FUN_019119b8(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.BoardBasic$$ProxyInternalMergeFrom RVA 0x1901b34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01911b34(int param_1,int param_2)

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
  
  pcVar3 = (char *)(_UNK_01911e1c + 0x1911b50);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01911e20 + 0x1911b64));
    func_0x01384978(*(undefined4 *)(_UNK_01911e24 + 0x1911b70));
    func_0x01384978(*(undefined4 *)(_UNK_01911e28 + 0x1911b7c));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01911e2c + 0x1911bac);
    puVar8 = *(undefined4 **)(_UNK_01911e30 + 0x1911bb4);
    puVar9 = *(undefined4 **)(_UNK_01911e34 + 0x1911bbc);
    do {
      if (uVar1 < 0x23) {
        if (uVar1 < 0x13) {
          if (uVar1 == 8) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar4;
          }
          else if (uVar1 == 0x12) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x10);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
LAB_01911d58:
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x036520e8(iVar6,param_2,uVar4,*puVar8);
          }
          else {
LAB_01911cd8:
            uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar4;
          }
        }
        else if (uVar1 == 0x1a) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
          *(undefined4 *)(param_1 + 0x14) = uVar4;
        }
        else {
          if (uVar1 != 0x20 && uVar1 != 0x22) goto LAB_01911cd8;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x18);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0364b0e0(iVar6,param_2,uVar4,*puVar9);
        }
      }
      else if (uVar1 < 0x3b) {
        if (uVar1 == 0x2a) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar4;
        }
        else {
          if (uVar1 == 0x32) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x20);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
            goto LAB_01911d58;
          }
          if (uVar1 != 0x3a) goto LAB_01911cd8;
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
          *(undefined4 *)(param_1 + 0x24) = uVar4;
        }
      }
      else if (uVar1 == 0x42) {
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
        *(undefined4 *)(param_1 + 0x28) = uVar4;
      }
      else if (uVar1 == 0x4a) {
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
        *(undefined4 *)(param_1 + 0x2c) = uVar4;
      }
      else {
        if (uVar1 != 0x50) goto LAB_01911cd8;
        uVar4 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x30) = uVar4;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.BoardBasic$$get_XXX_RowIdentifier RVA 0x1901e38 =====

undefined4 FUN_01911e38(int param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



// ===== fat.rawdata.BoardBasic$$set_XXX_RowIdentifier RVA 0x1901e40 =====

void FUN_01911e40(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}



// ===== fat.rawdata.BoardBasic$$.cctor RVA 0x1901e48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01911e48(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01911eec + 0x1911e58);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01911ef0 + 0x1911e6c));
    func_0x01384978(*(undefined4 *)(_UNK_01911ef4 + 0x1911e78));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01911ef8 + 0x1911e8c);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01911efc + 0x1911e9c);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f954(0x32,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}


