/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.gamekitdata.ComActivityToken$$.ctor RVA 0x1791564 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a1564(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_017a162c + 0x17a1578);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a1630 + 0x17a158c));
    func_0x01384978(*(undefined4 *)(_UNK_017a1634 + 0x17a1598));
    func_0x01384978(*(undefined4 *)(_UNK_017a1638 + 0x17a15a4));
    func_0x01384978(*(undefined4 *)(_UNK_017a163c + 0x17a15b0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_017a1640 + 0x17a15c4));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_017a1644 + 0x17a15d8));
  piVar2 = *(int **)(_UNK_017a1648 + 0x17a15ec);
  param_1[3] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_017a164c + 0x17a160c));
                    /* WARNING: Could not recover jumptable at 0x017a1628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.gamekitdata.ComActivityToken$$.ctor RVA 0x1791650 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a1650(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_017a16d8 + 0x17a1668);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a16dc + 0x17a167c));
    *pcVar3 = '\x01';
  }
  FUN_017a1564(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_017a16e0 + 0x17a16b4));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.gamekitdata.ComActivityToken$$Clone RVA 0x17916e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017a16e4(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_017a1738 + 0x17a16f8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a173c + 0x17a170c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_017a1740 + 0x17a1720));
  FUN_017a1650(uVar1,param_1);
  return uVar1;
}



// ===== fat.gamekitdata.ComActivityToken$$InternalWriteTo RVA 0x1791744 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a1744(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_017a17f8 + 0x17a175c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a17fc + 0x17a1770));
    func_0x01384978(*(undefined4 *)(_UNK_017a1800 + 0x17a177c));
    *pcVar2 = '\x01';
  }
  piVar4 = *(int **)(_UNK_017a1804 + 0x17a1790);
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x036526e0(iVar3,param_2,uVar5,**(undefined4 **)(_UNK_017a1808 + 0x17a17d0));
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)&UNK_044e88b4)(*(int *)(param_1 + 8),param_2,0);
    return;
  }
  return;
}



// ===== fat.gamekitdata.ComActivityToken$$ProxyCalculateSize RVA 0x179180c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017a180c(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_017a18bc + 0x17a1820);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a18c0 + 0x17a1834));
    func_0x01384978(*(undefined4 *)(_UNK_017a18c4 + 0x17a1840));
    *pcVar2 = '\x01';
  }
  piVar4 = *(int **)(_UNK_017a18c8 + 0x17a1854);
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0365231c(iVar3,uVar5,**(undefined4 **)(_UNK_017a18cc + 0x17a1890));
  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = func_0x0244f9bc(*(int *)(param_1 + 8),0);
    iVar1 = iVar3 + iVar1;
  }
  return iVar1;
}



// ===== fat.gamekitdata.ComActivityToken$$ProxyInternalMergeFrom RVA 0x17918d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a18d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  pcVar3 = (char *)(_UNK_017a19a8 + 0x17a18e8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a19ac + 0x17a18fc));
    func_0x01384978(*(undefined4 *)(_UNK_017a19b0 + 0x17a1908));
    *pcVar3 = '\x01';
  }
  piVar5 = *(int **)(_UNK_017a19b4 + 0x17a1920);
  puVar6 = *(undefined4 **)(_UNK_017a19b8 + 0x17a1928);
  while( true ) {
    while (iVar1 = func_0x01484f58(param_2,param_2 + 8,0), iVar1 == 10) {
      iVar1 = *piVar5;
      iVar4 = *(int *)(param_1 + 0xc);
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar5;
      }
      uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x036520e8(iVar4,param_2,uVar2,*puVar6);
    }
    if (iVar1 == 0) break;
    uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  return;
}



// ===== fat.gamekitdata.ComActivityToken$$.cctor RVA 0x17919bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a19bc(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  
  pcVar3 = (char *)(_UNK_017a1af4 + 0x17a19cc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017a1af8 + 0x17a19e0));
    func_0x01384978(*(undefined4 *)(_UNK_017a1afc + 0x17a19ec));
    func_0x01384978(*(undefined4 *)(_UNK_017a1b00 + 0x17a19f8));
    func_0x01384978(*(undefined4 *)(_UNK_017a1b04 + 0x17a1a04));
    func_0x01384978(*(undefined4 *)(_UNK_017a1b08 + 0x17a1a10));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_017a1b0c + 0x17a1a24);
  **(undefined4 **)(*piVar4 + 0x5c) = **(undefined4 **)(_UNK_017a1b10 + 0x17a1a34);
  if (*(int *)(**(int **)(_UNK_017a1b14 + 0x17a1a44) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar5 = **(int **)(_UNK_017a1b18 + 0x17a1a60);
  iVar1 = *(int *)(iVar5 + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = *(int *)(iVar5 + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0();
  }
  uVar2 = func_0x02fdc9f0(10,**(undefined4 **)(iVar1 + 0x5c),
                          **(undefined4 **)(_UNK_017a1b1c + 0x17a1ad8));
  *(undefined4 *)(*(int *)(*piVar4 + 0x5c) + 4) = uVar2;
  return;
}


