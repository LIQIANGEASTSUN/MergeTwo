/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.MergeBag$$.ctor RVA 0x17883c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017983c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(_UNK_0179849c + 0x17983d4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017984a0 + 0x17983e8));
    func_0x01384978(*(undefined4 *)(_UNK_017984a4 + 0x17983f4));
    func_0x01384978(*(undefined4 *)(_UNK_017984a8 + 0x1798400));
    func_0x01384978(*(undefined4 *)(_UNK_017984ac + 0x179840c));
    *pcVar4 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_017984b0 + 0x1798420);
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_017984b4 + 0x1798434);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_017984b8 + 0x179845c);
  param_1[6] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_017984bc + 0x179847c));
                    /* WARNING: Could not recover jumptable at 0x01798498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.MergeBag$$.ctor RVA 0x17884c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017984c0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar3 = (char *)(_UNK_01798574 + 0x17984d8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01798578 + 0x17984ec));
    *pcVar3 = '\x01';
  }
  FUN_017983c0(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar5 = *(undefined4 **)(_UNK_0179857c + 0x1798534);
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  iVar4 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,*puVar5);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.gamekitdata.MergeBag$$Clone RVA 0x1788580 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01798580(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_017985d4 + 0x1798594);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017985d8 + 0x17985a8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_017985dc + 0x17985bc));
  FUN_017984c0(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.MergeBag$$InternalWriteTo RVA 0x17885e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017985e0(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  pcVar2 = (char *)(_UNK_0179871c + 0x17985f8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01798720 + 0x179860c));
    func_0x01384978(*(undefined4 *)(_UNK_01798724 + 0x1798618));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    func_0x01485198(param_2,8,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0xc),0);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x01485198(param_2,0x10,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x10),0);
  }
  piVar5 = *(int **)(_UNK_01798728 + 0x1798684);
  iVar3 = *(int *)(param_1 + 0x14);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_0179872c + 0x17986c8);
  func_0x0364b6d8(iVar3,param_2,uVar4,*puVar6);
  iVar1 = *(int *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 8);
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



// ===== fat.gamekitdata.MergeBag$$ProxyCalculateSize RVA 0x1788730 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01798730(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  pcVar1 = (char *)(_UNK_0179889c + 0x1798744);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017988a0 + 0x1798758));
    func_0x01384978(*(undefined4 *)(_UNK_017988a4 + 0x1798764));
    func_0x01384978(*(undefined4 *)(_UNK_017988a8 + 0x1798770));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_017988ac + 0x1798790) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar2,0);
    iVar2 = iVar2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017988b0 + 0x17987d0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  piVar6 = *(int **)(_UNK_017988b4 + 0x1798800);
  iVar4 = *(int *)(param_1 + 0x14);
  iVar3 = *piVar6;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar6;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_017988b8 + 0x1798840);
  iVar3 = func_0x0364b314(iVar4,uVar5,*puVar7);
  iVar4 = *(int *)(param_1 + 0x18);
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0364b314(iVar4,uVar5,*puVar7);
  iVar4 = iVar3 + iVar2 + iVar4;
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = func_0x0244f9bc(*(int *)(param_1 + 8),0);
    iVar4 = iVar2 + iVar4;
  }
  return iVar4;
}



// ===== fat.gamekitdata.MergeBag$$ProxyInternalMergeFrom RVA 0x17888bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017988bc(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_01798a30 + 0x17988d4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01798a34 + 0x17988e8));
    func_0x01384978(*(undefined4 *)(_UNK_01798a38 + 0x17988f4));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01798a3c + 0x1798924);
    puVar8 = *(undefined4 **)(_UNK_01798a40 + 0x179892c);
    do {
      if (uVar1 < 0x19) {
        if (uVar1 == 8) {
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0xc) = uVar3;
        }
        else {
          if (uVar1 != 0x10) {
            if (uVar1 != 0x18) goto LAB_017989d0;
            goto LAB_01798988;
          }
          uVar3 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x10) = uVar3;
        }
      }
      else {
        if (uVar1 == 0x1a) {
LAB_01798988:
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x14);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
        }
        else {
          if (uVar1 != 0x20 && uVar1 != 0x22) {
LAB_017989d0:
            uVar3 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar3;
            goto LAB_01798a14;
          }
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x18);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
        }
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0364b0e0(iVar6,param_2,uVar3,*puVar8);
      }
LAB_01798a14:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.gamekitdata.MergeBag$$.cctor RVA 0x1788a44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01798a44(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01798ad0 + 0x1798a54);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01798ad4 + 0x1798a68));
    func_0x01384978(*(undefined4 *)(_UNK_01798ad8 + 0x1798a74));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01798adc + 0x1798a88);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01798ae0 + 0x1798a98);
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


