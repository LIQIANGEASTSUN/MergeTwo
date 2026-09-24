/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.ComMixSource$$.ctor RVA 0x179070c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a070c(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_017a07d4 + 0x17a0720);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a07d8 + 0x17a0734));
    func_0x01384978(*(undefined4 *)(_UNK_017a07dc + 0x17a0740));
    func_0x01384978(*(undefined4 *)(_UNK_017a07e0 + 0x17a074c));
    func_0x01384978(*(undefined4 *)(_UNK_017a07e4 + 0x17a0758));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_017a07e8 + 0x17a076c));
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_017a07ec + 0x17a0780));
  piVar2 = *(int **)(_UNK_017a07f0 + 0x17a0794);
  param_1[9] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_017a07f4 + 0x17a07b4));
                    /* WARNING: Could not recover jumptable at 0x017a07d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.ComMixSource$$.ctor RVA 0x17907f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a07f8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  
  pcVar3 = (char *)(_UNK_017a08a0 + 0x17a0810);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a08a4 + 0x17a0824));
    *pcVar3 = '\x01';
  }
  FUN_017a070c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x24);
  uVar5 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x14) = uVar5;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,**(undefined4 **)(_UNK_017a08a8 + 0x17a087c));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.gamekitdata.ComMixSource$$Clone RVA 0x17908ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017a08ac(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_017a0900 + 0x17a08c0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a0904 + 0x17a08d4));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_017a0908 + 0x17a08e8));
  FUN_017a07f8(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.ComMixSource$$InternalWriteTo RVA 0x179090c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a090c(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_017a0ac8 + 0x17a0924);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a0acc + 0x17a0938));
    func_0x01384978(*(undefined4 *)(_UNK_017a0ad0 + 0x17a0944));
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
  if (*(int *)(param_1 + 0x14) != 0) {
    func_0x01485198(param_2,0x18,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x14),0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x01485198(param_2,0x20,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x18),0);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x01485198(param_2,0x28,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x1c),0);
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    func_0x01485198(param_2,0x30,0);
    func_0x014850b8(param_2,*(undefined1 *)(param_1 + 0x20),0);
  }
  piVar4 = *(int **)(_UNK_017a0ad4 + 0x17a0a60);
  iVar3 = *(int *)(param_1 + 0x24);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0364b6d8(iVar3,param_2,uVar5,**(undefined4 **)(_UNK_017a0ad8 + 0x17a0aa0));
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)&UNK_044e88b4)(*(int *)(param_1 + 8),param_2,0);
    return;
  }
  return;
}



// ===== fat.gamekitdata.ComMixSource$$ProxyCalculateSize RVA 0x1790adc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017a0adc(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  pcVar1 = (char *)(_UNK_017a0cd8 + 0x17a0af0);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a0cdc + 0x17a0b04));
    func_0x01384978(*(undefined4 *)(_UNK_017a0ce0 + 0x17a0b10));
    func_0x01384978(*(undefined4 *)(_UNK_017a0ce4 + 0x17a0b1c));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_017a0ce8 + 0x17a0b3c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar2,0);
    iVar2 = iVar2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a0cec + 0x17a0b7c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a0cf0 + 0x17a0bb8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a0cf4 + 0x17a0bf4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_017a0cf8 + 0x17a0c30) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  piVar5 = *(int **)(_UNK_017a0cfc + 0x17a0c60);
  iVar4 = *(int *)(param_1 + 0x24);
  iVar3 = *piVar5;
  if (*(char *)(param_1 + 0x20) != '\0') {
    iVar2 = iVar2 + 2;
  }
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar5;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0364b314(iVar4,uVar6,**(undefined4 **)(_UNK_017a0d00 + 0x17a0ca8));
  iVar3 = iVar3 + iVar2;
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = func_0x0244f9bc(*(int *)(param_1 + 8),0);
    iVar3 = iVar2 + iVar3;
  }
  return iVar3;
}



// ===== fat.gamekitdata.ComMixSource$$ProxyInternalMergeFrom RVA 0x1790d04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a0d04(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  pcVar4 = (char *)(_UNK_017a0ed8 + 0x17a0d1c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a0edc + 0x17a0d30));
    func_0x01384978(*(undefined4 *)(_UNK_017a0ee0 + 0x17a0d3c));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_017a0ee4 + 0x17a0d6c);
    puVar8 = *(undefined4 **)(_UNK_017a0ee8 + 0x17a0d74);
    do {
      if (uVar1 < 0x21) {
        if (uVar1 < 0x11) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else {
            if (uVar1 != 0x10) goto LAB_017a0e5c;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x10) = uVar2;
          }
        }
        else if (uVar1 == 0x18) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x14) = uVar2;
        }
        else {
          if (uVar1 != 0x20) goto LAB_017a0e5c;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x18) = uVar2;
        }
      }
      else if (uVar1 < 0x31) {
        if (uVar1 == 0x28) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
        else {
          if (uVar1 != 0x30) goto LAB_017a0e5c;
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x20) = lVar9 != 0;
        }
      }
      else if ((uVar1 | 2) == 0x3a) {
        iVar3 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x24);
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0364b0e0(iVar6,param_2,uVar2,*puVar8);
      }
      else {
LAB_017a0e5c:
        uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.gamekitdata.ComMixSource$$.cctor RVA 0x1790eec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a0eec(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_017a0f60 + 0x17a0efc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a0f64 + 0x17a0f10));
    func_0x01384978(*(undefined4 *)(_UNK_017a0f68 + 0x17a0f1c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_017a0f6c + 0x17a0f30);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_017a0f70 + 0x17a0f40);
  uVar1 = func_0x0244f970(0x3a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


