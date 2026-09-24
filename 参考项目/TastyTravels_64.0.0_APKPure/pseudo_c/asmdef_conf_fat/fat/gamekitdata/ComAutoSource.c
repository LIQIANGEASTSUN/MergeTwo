/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.ComAutoSource$$.ctor RVA 0x178e80c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179e80c(int *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0179e890 + 0x179e820);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179e894 + 0x179e834));
    func_0x01384978(*(undefined4 *)(_UNK_0179e898 + 0x179e840));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0179e89c + 0x179e854) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0179e8a0 + 0x179e870));
                    /* WARNING: Could not recover jumptable at 0x0179e88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.ComAutoSource$$.ctor RVA 0x178e8a4 =====

void FUN_0179e8a4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_0179e80c();
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  uVar1 = func_0x0244f914(uVar1,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.gamekitdata.ComAutoSource$$Clone RVA 0x178e8fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0179e8fc(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0179e950 + 0x179e910);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179e954 + 0x179e924));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0179e958 + 0x179e938));
  FUN_0179e8a4(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.ComAutoSource$$InternalWriteTo RVA 0x178e95c =====

void FUN_0179e95c(int param_1,undefined4 param_2)

{
  undefined4 extraout_r1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    func_0x01485198(param_2,8,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0xc),0);
  }
  if (*(int *)(param_1 + 0x10) != 0 || *(int *)(param_1 + 0x14) != 0) {
    func_0x01485198(param_2,0x10,0);
    func_0x01485078(param_2,extraout_r1,*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x01485198(param_2,0x18,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x18),0);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x01485198(param_2,0x20,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x1c),0);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    func_0x01485198(param_2,0x28,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x20),0);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    func_0x01485198(param_2,0x30,0);
    func_0x01485088(param_2,*(undefined4 *)(param_1 + 0x24),0);
  }
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)&UNK_044e88b4)(*(int *)(param_1 + 8),param_2,0);
    return;
  }
  return;
}



// ===== fat.gamekitdata.ComAutoSource$$ProxyCalculateSize RVA 0x178eaa8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0179eaa8(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = (char *)(_UNK_0179ec68 + 0x179eabc);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179ec6c + 0x179ead0));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if (*(int *)(**(int **)(_UNK_0179ec70 + 0x179eaf0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0244f9ec(iVar2,0);
    iVar2 = iVar2 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar3 != 0 || iVar4 != 0) {
    if (*(int *)(**(int **)(_UNK_0179ec74 + 0x179eb30) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9cc(iVar3,iVar4,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_0179ec78 + 0x179eb70) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_0179ec7c + 0x179ebac) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_0179ec80 + 0x179ebe8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_0179ec84 + 0x179ec24) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0244f9ec(iVar3,0);
    iVar2 = iVar2 + iVar3 + 1;
  }
  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = func_0x0244f9bc(*(int *)(param_1 + 8),0);
    iVar2 = iVar3 + iVar2;
  }
  return iVar2;
}



// ===== fat.gamekitdata.ComAutoSource$$ProxyInternalMergeFrom RVA 0x178ec88 =====

void FUN_0179ec88(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar3,0);
  if (uVar1 != 0) {
    do {
      if (uVar1 < 0x19) {
        if (uVar1 == 8) {
          uVar2 = func_0x01484f98(param_2,iVar3,0);
          *(undefined4 *)(param_1 + 0xc) = uVar2;
        }
        else if (uVar1 == 0x10) {
          uVar4 = func_0x01484f88(param_2,iVar3,0);
          *(undefined8 *)(param_1 + 0x10) = uVar4;
        }
        else if (uVar1 == 0x18) {
          uVar2 = func_0x01484f98(param_2,iVar3,0);
          *(undefined4 *)(param_1 + 0x18) = uVar2;
        }
        else {
LAB_0179ed1c:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 == 0x20) {
        uVar2 = func_0x01484f98(param_2,iVar3,0);
        *(undefined4 *)(param_1 + 0x1c) = uVar2;
      }
      else if (uVar1 == 0x28) {
        uVar2 = func_0x01484f98(param_2,iVar3,0);
        *(undefined4 *)(param_1 + 0x20) = uVar2;
      }
      else {
        if (uVar1 != 0x30) goto LAB_0179ed1c;
        uVar2 = func_0x01484f98(param_2,iVar3,0);
        *(undefined4 *)(param_1 + 0x24) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar3,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.gamekitdata.ComAutoSource$$.cctor RVA 0x178edac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0179edac(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0179ee08 + 0x179edbc);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0179ee0c + 0x179edd0));
    func_0x01384978(*(undefined4 *)(_UNK_0179ee10 + 0x179eddc));
    *pcVar1 = '\x01';
  }
  **(undefined4 **)(**(int **)(_UNK_0179ee14 + 0x179edf0) + 0x5c) =
       **(undefined4 **)(_UNK_0179ee18 + 0x179ee00);
  return;
}


