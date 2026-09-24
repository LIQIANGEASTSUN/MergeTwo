/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.ComChoiceBox$$.ctor RVA 0x1792f74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a2f74(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_017a3068 + 0x17a2f88);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a306c + 0x17a2f9c));
    func_0x01384978(*(undefined4 *)(_UNK_017a3070 + 0x17a2fa8));
    func_0x01384978(*(undefined4 *)(_UNK_017a3074 + 0x17a2fb4));
    func_0x01384978(*(undefined4 *)(_UNK_017a3078 + 0x17a2fc0));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_017a307c + 0x17a2fd4);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_017a3080 + 0x17a2fe8);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[3] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_017a3084 + 0x17a3028);
  param_1[6] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_017a3088 + 0x17a3048));
                    /* WARNING: Could not recover jumptable at 0x017a3064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.ComChoiceBox$$.ctor RVA 0x1793484 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a3484(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_017a3554 + 0x17a349c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a3558 + 0x17a34b0));
    *pcVar4 = '\x01';
  }
  FUN_017a2f74(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_017a355c + 0x17a34ec);
  uVar2 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x14);
  uVar1 = *(undefined1 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined1 *)(param_1 + 0x10) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar5,*puVar6);
  uVar3 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar2 = func_0x0244f914(uVar3,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.gamekitdata.ComChoiceBox$$Clone RVA 0x1793560 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017a3560(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_017a35b4 + 0x17a3574);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a35b8 + 0x17a3588));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_017a35bc + 0x17a359c));
  FUN_017a3484(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.ComChoiceBox$$InternalWriteTo RVA 0x17935c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a35c0(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  pcVar2 = (char *)(_UNK_017a3714 + 0x17a35d8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a3718 + 0x17a35ec));
    func_0x01384978(*(undefined4 *)(_UNK_017a371c + 0x17a35f8));
    *pcVar2 = '\x01';
  }
  piVar5 = *(int **)(_UNK_017a3720 + 0x17a360c);
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_017a3724 + 0x17a3650);
  func_0x0364b6d8(iVar3,param_2,uVar4,*puVar6);
  if (*(char *)(param_1 + 0x10) != '\0') {
    func_0x01485198(param_2,0x10,0);
    func_0x014850b8(param_2,*(undefined1 *)(param_1 + 0x10),0);
  }
  iVar1 = *piVar5;
  iVar3 = *(int *)(param_1 + 0x14);
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0364b6d8(iVar3,param_2,uVar4,*puVar6);
  iVar1 = *(int *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0364b6d8(iVar1,param_2,uVar4,*puVar6);
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)&UNK_044e88b4)(*(int *)(param_1 + 8),param_2,0);
    return;
  }
  return;
}



// ===== fat.gamekitdata.ComChoiceBox$$ProxyCalculateSize RVA 0x1793728 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017a3728(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  pcVar2 = (char *)(_UNK_017a385c + 0x17a373c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a3860 + 0x17a3750));
    func_0x01384978(*(undefined4 *)(_UNK_017a3864 + 0x17a375c));
    *pcVar2 = '\x01';
  }
  piVar6 = *(int **)(_UNK_017a3868 + 0x17a3770);
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar6;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_017a386c + 0x17a37b0);
  iVar1 = func_0x0364b314(iVar3,uVar4,*puVar7);
  iVar3 = *piVar6;
  iVar5 = *(int *)(param_1 + 0x14);
  if (*(char *)(param_1 + 0x10) != '\0') {
    iVar1 = iVar1 + 2;
  }
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar6;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0364b314(iVar5,uVar4,*puVar7);
  iVar5 = *(int *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x0364b314(iVar5,uVar4,*puVar7);
  iVar5 = iVar3 + iVar1 + iVar5;
  if (*(int *)(param_1 + 8) != 0) {
    iVar1 = func_0x0244f9bc(*(int *)(param_1 + 8),0);
    iVar5 = iVar1 + iVar5;
  }
  return iVar5;
}



// ===== fat.gamekitdata.ComChoiceBox$$ProxyInternalMergeFrom RVA 0x1793870 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a3870(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  pcVar3 = (char *)(_UNK_017a3a00 + 0x17a3888);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a3a04 + 0x17a389c));
    func_0x01384978(*(undefined4 *)(_UNK_017a3a08 + 0x17a38a8));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_017a3a0c + 0x17a38d8);
    puVar8 = *(undefined4 **)(_UNK_017a3a10 + 0x17a38e0);
    do {
      if (uVar1 < 0x11) {
        if (uVar1 == 8 || uVar1 == 10) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0xc);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
          goto LAB_017a3984;
        }
        if (uVar1 != 0x10) goto LAB_017a39d0;
        lVar9 = func_0x01484f88(param_2,iVar5,0);
        *(bool *)(param_1 + 0x10) = lVar9 != 0;
      }
      else {
        if (uVar1 < 0x1b) {
          if ((uVar1 | 2) == 0x1a) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x14);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
LAB_017a3984:
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x0364b0e0(iVar6,param_2,uVar4,*puVar8);
            goto LAB_017a39e4;
          }
        }
        else if ((uVar1 | 2) == 0x22) {
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x18);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
          goto LAB_017a3984;
        }
LAB_017a39d0:
        uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar4;
      }
LAB_017a39e4:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.gamekitdata.ComChoiceBox$$.cctor RVA 0x1793a14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a3a14(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_017a3ab8 + 0x17a3a24);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a3abc + 0x17a3a38));
    func_0x01384978(*(undefined4 *)(_UNK_017a3ac0 + 0x17a3a44));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_017a3ac4 + 0x17a3a58);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_017a3ac8 + 0x17a3a68);
  uVar1 = func_0x0244f970(10,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}


