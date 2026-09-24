/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.FogScoreDetail$$.ctor RVA 0x1670330 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01680330(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_016804ac + 0x1680344);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016804b0 + 0x1680358));
    func_0x01384978(*(undefined4 *)(_UNK_016804b4 + 0x1680364));
    func_0x01384978(*(undefined4 *)(_UNK_016804b8 + 0x1680370));
    func_0x01384978(*(undefined4 *)(_UNK_016804bc + 0x168037c));
    func_0x01384978(*(undefined4 *)(_UNK_016804c0 + 0x1680388));
    func_0x01384978(*(undefined4 *)(_UNK_016804c4 + 0x1680394));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_016804c8 + 0x16803a8);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_016804cc + 0x16803bc);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  puVar7 = *(undefined4 **)(_UNK_016804d0 + 0x16803e4);
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(*puVar7);
  puVar8 = *(undefined4 **)(_UNK_016804d4 + 0x16803fc);
  func_0x0364cfb8(iVar1,*puVar8);
  uVar2 = *puVar5;
  param_1[7] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar7;
  param_1[10] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar8);
  uVar2 = *puVar5;
  param_1[0xb] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar6);
  uVar2 = *puVar7;
  param_1[0xc] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar8);
  piVar3 = *(int **)(_UNK_016804d8 + 0x168046c);
  param_1[0xd] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016804dc + 0x168048c));
                    /* WARNING: Could not recover jumptable at 0x016804a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.FogScoreDetail$$.ctor RVA 0x16704e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016804e0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar4 = (char *)(_UNK_01680654 + 0x16804f8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01680658 + 0x168050c));
    func_0x01384978(*(undefined4 *)(_UNK_0168065c + 0x1680518));
    *pcVar4 = '\x01';
  }
  FUN_01680330(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_01680660 + 0x168055c);
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_01680664 + 0x16805ac);
  uVar1 = func_0x0364acbc(iVar5,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  iVar5 = *(int *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar7);
  iVar5 = *(int *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.FogScoreDetail$$Clone RVA 0x1670668 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01680668(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016806bc + 0x168067c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016806c0 + 0x1680690));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_016806c4 + 0x16806a4));
  FUN_016804e0(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.FogScoreDetail$$ProxyInternalMergeFrom RVA 0x16706c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016806c8(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_016809d4 + 0x16806e4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016809d8 + 0x16806f8));
    func_0x01384978(*(undefined4 *)(_UNK_016809dc + 0x1680704));
    func_0x01384978(*(undefined4 *)(_UNK_016809e0 + 0x1680710));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_016809e4 + 0x1680740);
    puVar8 = *(undefined4 **)(_UNK_016809e8 + 0x1680748);
    puVar9 = *(undefined4 **)(_UNK_016809ec + 0x1680750);
    do {
      if (uVar1 < 0x31) {
        if (uVar1 < 0x19) {
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
LAB_01680994:
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x036520e8(iVar6,param_2,uVar2,*puVar8);
          }
          else {
            if (uVar1 != 0x18) goto LAB_01680868;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x14) = uVar2;
          }
        }
        else {
          if (uVar1 < 0x29) {
            if (uVar1 == 0x22) {
              iVar3 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x18);
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar7;
              }
              uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
              goto LAB_01680994;
            }
            if (uVar1 != 0x28) goto LAB_01680868;
          }
          else if (uVar1 != 0x2a) {
            if (uVar1 != 0x30) goto LAB_01680868;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x20) = uVar2;
            goto LAB_016809b4;
          }
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x1c);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
LAB_016808cc:
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0364b0e0(iVar6,param_2,uVar2,*puVar9);
        }
      }
      else if (uVar1 < 0x49) {
        if (uVar1 != 0x38) {
          if (uVar1 == 0x42) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x28);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x10);
            goto LAB_01680994;
          }
          if (uVar1 == 0x48) goto LAB_01680880;
          goto LAB_01680868;
        }
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x24) = uVar2;
      }
      else {
        if (uVar1 < 0x53) {
          if (uVar1 == 0x4a) {
LAB_01680880:
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x2c);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
            goto LAB_016808cc;
          }
          if (uVar1 == 0x52) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x30);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x18);
            goto LAB_01680994;
          }
        }
        else if ((uVar1 | 2) == 0x5a) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x34);
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar7;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x1c);
          goto LAB_016808cc;
        }
LAB_01680868:
        uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar2;
      }
LAB_016809b4:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.FogScoreDetail$$get_XXX_RowIdentifier RVA 0x16709f0 =====

undefined4 FUN_016809f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// ===== fat.rawdata.FogScoreDetail$$set_XXX_RowIdentifier RVA 0x16709f8 =====

void FUN_016809f8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}



// ===== fat.rawdata.FogScoreDetail$$.cctor RVA 0x1670a00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01680a00(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01680b04 + 0x1680a10);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01680b08 + 0x1680a24));
    func_0x01384978(*(undefined4 *)(_UNK_01680b0c + 0x1680a30));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01680b10 + 0x1680a44);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01680b14 + 0x1680a54);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f954(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f954(0x42,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f970(0x4a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f954(0x52,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x18) = uVar1;
  uVar1 = func_0x0244f970(0x5a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x1c) = uVar1;
  return;
}


