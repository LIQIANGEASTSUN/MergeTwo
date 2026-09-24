/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBMergeCompReward$$Setup RVA 0x1f6d6c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7d6c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01f7d7d0 + 0x1f7d6d8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f7d7d4 + 0x1f7d6ec));
    func_0x01384978(*(undefined4 *)(_UNK_01f7d7d8 + 0x1f7d6f8));
    func_0x01384978(*(undefined4 *)(_UNK_01f7d7dc + 0x1f7d704));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa85d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa85d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  uVar5 = func_0x024391cc(*(undefined4 *)(param_1 + 0x10),0);
  iVar1 = func_0x02f59744(uVar5,**(undefined4 **)(_UNK_01f7d7e0 + 0x1f7d768));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xb4);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01f7d7e4 + 0x1f7d788));
  func_0x0244ffa0(uVar5,param_1,**(undefined4 **)(_UNK_01f7d7e8 + 0x1f7d7a8),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_0519d8f0)(iVar1,uVar5,0);
  return;
}



// ===== FAT.MBMergeCompReward$$InitOnPreOpen RVA 0x1f6d7ec =====

/* WARNING: Possible PIC construction at 0x01f7dae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0349e878: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f7daec) */
/* WARNING: Removing unreachable block (ram,0x01f7db30) */
/* WARNING: Removing unreachable block (ram,0x01f7db34) */
/* WARNING: Removing unreachable block (ram,0x0349e87c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7d7ec(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int **ppiVar11;
  int *piVar12;
  int *piStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  undefined4 *puStack_20;
  int *piStack_1c;
  
  pcVar6 = (char *)(_UNK_01f7db48 + 0x1f7d800);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f7db4c + 0x1f7d814));
    func_0x01384978(*(undefined4 *)(_UNK_01f7db50 + 0x1f7d820));
    func_0x01384978(*(undefined4 *)(_UNK_01f7db54 + 0x1f7d82c));
    func_0x01384978(*(undefined4 *)(_UNK_01f7db58 + 0x1f7d838));
    func_0x01384978(*(undefined4 *)(_UNK_01f7db5c + 0x1f7d844));
    func_0x01384978(*(undefined4 *)(_UNK_01f7db60 + 0x1f7d850));
    func_0x01384978(*(undefined4 *)(_UNK_01f7db64 + 0x1f7d85c));
    func_0x01384978(*(undefined4 *)(_UNK_01f7db68 + 0x1f7d868));
    func_0x01384978(*(undefined4 *)(_UNK_01f7db6c + 0x1f7d874));
    func_0x01384978(*(undefined4 *)(_UNK_01f7db70 + 0x1f7d880));
    func_0x01384978(*(undefined4 *)(_UNK_01f7db74 + 0x1f7d88c));
    func_0x01384978(*(undefined4 *)(_UNK_01f7db78 + 0x1f7d898));
    func_0x01384978(*(undefined4 *)(_UNK_01f7db7c + 0x1f7d8a4));
    func_0x01384978(*(undefined4 *)(_UNK_01f7db80 + 0x1f7d8b0));
    func_0x01384978(*(undefined4 *)(_UNK_01f7db84 + 0x1f7d8bc));
    func_0x01384978(*(undefined4 *)(_UNK_01f7db88 + 0x1f7d8c8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa864,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa864,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    piStack_24 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    piStack_30 = (int *)0x0;
    puStack_20 = (undefined4 *)0x0;
    func_0x0245494c(&piStack_48,0,0);
    piStack_30 = piStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    piStack_24 = (int *)uStack_3c;
    puStack_20 = (undefined4 *)uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&piStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&piStack_30,param_1,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar7,uVar9,&piStack_30,uVar4,0,0);
    return;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  func_0x01f7dbcc(param_1);
  if (*(int *)(**(int **)(_UNK_01f7db8c + 0x1f7d930) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = FUN_01dea7f8(0);
  uVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01f7db90 + 0x1f7d958));
  func_0x03cc9024(uVar9,param_1,**(undefined4 **)(_UNK_01f7db94 + 0x1f7d974),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02141060(iVar1,uVar9,0);
  iVar1 = FUN_01dea7f8(0);
  uVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01f7db98 + 0x1f7d9b0));
  func_0x03cd4e0c(uVar9,param_1,**(undefined4 **)(_UNK_01f7db9c + 0x1f7d9cc),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02141720(iVar1,uVar9,0);
  FUN_01dea89c(1,param_1,0);
  if (*(int *)(**(int **)(_UNK_01f7dba0 + 0x1f7da0c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f7dba4 + 0x1f7da28));
  uVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01f7dba8 + 0x1f7da3c));
  func_0x03ccab14(uVar9,param_1,**(undefined4 **)(_UNK_01f7dbac + 0x1f7da58),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0349dde4(iVar1,uVar9,**(undefined4 **)(_UNK_01f7dbb0 + 0x1f7da7c));
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f7dbb4 + 0x1f7da90));
  puVar10 = *(undefined4 **)(_UNK_01f7dbb8 + 0x1f7daa4);
  uVar9 = func_0x01384be4(*puVar10);
  func_0x03ccb96c(uVar9,param_1,**(undefined4 **)(_UNK_01f7dbbc + 0x1f7dac0),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piStack_24 = *(int **)(_UNK_01f7dbc0 + 0x1f7dae8);
  iVar3 = *piStack_24;
  piStack_1c = (int *)0x1f7daec;
  ppiVar11 = &piStack_30;
  iVar7 = 0;
  piStack_30 = param_1;
  iStack_2c = iVar1;
  uStack_28 = uVar9;
  puStack_20 = puVar10;
  piVar2 = (int *)func_0x0487907c(*(undefined4 *)(iVar1 + 8),uVar9,0);
  iVar8 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 4);
  if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
    iVar8 = func_0x02457d84(iVar8);
  }
  if ((piVar2 == (int *)0x0) || (iVar7 = func_0x02457d4c(piVar2,iVar8), iVar7 != 0)) {
    iVar8 = *(int *)(iVar3 + 0x10);
    *(int *)(iVar1 + 8) = iVar7;
    iVar8 = *(int *)(*(int *)(iVar8 + 0x60) + 4);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = func_0x02457d84(iVar8);
    }
    if (piVar2 == (int *)0x0) {
      return;
    }
    iVar1 = func_0x02457d4c(piVar2,iVar8);
    if (iVar1 != 0) {
      return;
    }
    ppiVar11 = (int **)&stack0xffffffe8;
    piVar5 = piStack_30;
    piVar12 = piStack_1c;
  }
  else {
    piVar5 = piVar2;
    piVar12 = (int *)0x349e87c;
  }
  ppiVar11[-1] = piVar12;
  ppiVar11[-2] = piVar5;
  func_0x0142996c(ppiVar11 + -5,*(undefined4 *)(*piVar2 + 0x20),iVar8);
  piVar2 = ppiVar11[-3];
  if (((uint)ppiVar11[-5] & 1) == 0) {
    piVar2 = (int *)((uint)(ppiVar11 + -5) | 1);
  }
  iVar1 = func_0x01419d2c(piVar2);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  func_0x01418ff0(iVar1,0);
  if (((uint)ppiVar11[-5] & 1) != 0) {
    func_0x0148d9d4(ppiVar11[-3]);
  }
  return;
}



// ===== FAT.MBMergeCompReward$$_Refresh RVA 0x1f6dbcc =====

/* WARNING: Possible PIC construction at 0x01f7de08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f7de0c) */
/* WARNING: Removing unreachable block (ram,0x01f7de18) */
/* WARNING: Removing unreachable block (ram,0x01f7de1c) */
/* WARNING: Removing unreachable block (ram,0x01f7de40) */
/* WARNING: Removing unreachable block (ram,0x01f7de54) */
/* WARNING: Removing unreachable block (ram,0x01f7de74) */
/* WARNING: Removing unreachable block (ram,0x01f7de78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7dbcc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01f7de9c + 0x1f7dbe4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f7dea0 + 0x1f7dbf8));
    func_0x01384978(*(undefined4 *)(_UNK_01f7dea4 + 0x1f7dc04));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa860,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa860,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0229fb54(iVar1,0);
  if (*(int *)(**(int **)(_UNK_01f7dea8 + 0x1f7dc7c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = FUN_01dea7f8(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x02141d1c(iVar1,0);
  func_0x01f7e304(param_1,iVar4);
  if (iVar4 < 1) {
    func_0x01f7e3e8(param_1,0);
  }
  else {
    func_0x01f7e3e8(param_1,1);
    iVar4 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x02145554(iVar1,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0229f85c(iVar4,uVar6,0);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0x268);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01dd2c04(iVar1,0);
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x0244fc34(iVar5,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02f67194(iVar5,**(undefined4 **)(_UNK_01f7deac + 0x1f7ddc8));
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_051861e0)(iVar5,iVar1 < iVar4,0);
  return;
}



// ===== FAT.MBMergeCompReward$$CleanupOnPostClose RVA 0x1f6debc =====

/* WARNING: Possible PIC construction at 0x01f7e1b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0349ead8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f7e1b8) */
/* WARNING: Removing unreachable block (ram,0x01f7e1fc) */
/* WARNING: Removing unreachable block (ram,0x01f7e200) */
/* WARNING: Removing unreachable block (ram,0x0349eadc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7debc(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int **ppiVar11;
  int *piVar12;
  int *piStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_30;
  int iStack_2c;
  int iStack_28;
  int *piStack_24;
  undefined4 *puStack_20;
  int *piStack_1c;
  
  pcVar6 = (char *)(_UNK_01f7e214 + 0x1f7ded0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f7e218 + 0x1f7dee4));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e21c + 0x1f7def0));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e220 + 0x1f7defc));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e224 + 0x1f7df08));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e228 + 0x1f7df14));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e22c + 0x1f7df20));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e230 + 0x1f7df2c));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e234 + 0x1f7df38));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e238 + 0x1f7df44));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e23c + 0x1f7df50));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e240 + 0x1f7df5c));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e244 + 0x1f7df68));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e248 + 0x1f7df74));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e24c + 0x1f7df80));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e250 + 0x1f7df8c));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e254 + 0x1f7df98));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa86a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa86a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    piStack_24 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    piStack_30 = (int *)0x0;
    puStack_20 = (undefined4 *)0x0;
    func_0x0245494c(&piStack_48,0,0);
    piStack_30 = piStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    piStack_24 = (int *)uStack_3c;
    puStack_20 = (undefined4 *)uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&piStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&piStack_30,param_1,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar7,uVar8,&piStack_30,uVar4,0,0);
    return;
  }
  iVar1 = param_1[5];
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0229fb54(iVar1,0);
  if (*(int *)(**(int **)(_UNK_01f7e258 + 0x1f7e00c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = FUN_01dea7f8(0);
  uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01f7e25c + 0x1f7e034));
  func_0x03cc9024(uVar8,param_1,**(undefined4 **)(_UNK_01f7e260 + 0x1f7e050),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02141110(iVar1,uVar8,0);
  iVar1 = FUN_01dea7f8(0);
  uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01f7e264 + 0x1f7e08c));
  func_0x03cd4e0c(uVar8,param_1,**(undefined4 **)(_UNK_01f7e268 + 0x1f7e0a8),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x021417d0(iVar1,uVar8,0);
  if (*(int *)(**(int **)(_UNK_01f7e26c + 0x1f7e0d8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f7e270 + 0x1f7e0f4));
  uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01f7e274 + 0x1f7e108));
  func_0x03ccab14(uVar8,param_1,**(undefined4 **)(_UNK_01f7e278 + 0x1f7e124),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0349e03c(iVar1,uVar8,**(undefined4 **)(_UNK_01f7e27c + 0x1f7e148));
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01f7e280 + 0x1f7e15c));
  puVar10 = *(undefined4 **)(_UNK_01f7e284 + 0x1f7e170);
  iVar7 = func_0x01384be4(*puVar10);
  func_0x03ccb96c(iVar7,param_1,**(undefined4 **)(_UNK_01f7e288 + 0x1f7e18c),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piStack_24 = *(int **)(_UNK_01f7e28c + 0x1f7e1b4);
  iVar3 = *piStack_24;
  piStack_1c = (int *)0x1f7e1b8;
  ppiVar11 = &piStack_30;
  if (iVar7 == 0) {
    return;
  }
  iVar9 = 0;
  piStack_30 = param_1;
  iStack_2c = iVar1;
  iStack_28 = iVar7;
  puStack_20 = puVar10;
  piVar2 = (int *)func_0x0487929c(*(undefined4 *)(iVar1 + 8),iVar7,0);
  iVar7 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 4);
  if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = func_0x02457d84(iVar7);
  }
  if ((piVar2 == (int *)0x0) || (iVar9 = func_0x02457d4c(piVar2,iVar7), iVar9 != 0)) {
    iVar7 = *(int *)(iVar3 + 0x10);
    *(int *)(iVar1 + 8) = iVar9;
    iVar7 = *(int *)(*(int *)(iVar7 + 0x60) + 4);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = func_0x02457d84(iVar7);
    }
    if (piVar2 == (int *)0x0) {
      return;
    }
    iVar1 = func_0x02457d4c(piVar2,iVar7);
    if (iVar1 != 0) {
      return;
    }
    ppiVar11 = (int **)&stack0xffffffe8;
    piVar5 = piStack_30;
    piVar12 = piStack_1c;
  }
  else {
    piVar5 = piVar2;
    piVar12 = (int *)0x349eadc;
  }
  ppiVar11[-1] = piVar12;
  ppiVar11[-2] = piVar5;
  func_0x0142996c(ppiVar11 + -5,*(undefined4 *)(*piVar2 + 0x20),iVar7);
  piVar2 = ppiVar11[-3];
  if (((uint)ppiVar11[-5] & 1) == 0) {
    piVar2 = (int *)((uint)(ppiVar11 + -5) | 1);
  }
  iVar1 = func_0x01419d2c(piVar2);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  func_0x01418ff0(iVar1,0);
  if (((uint)ppiVar11[-5] & 1) != 0) {
    func_0x0148d9d4(ppiVar11[-3]);
  }
  return;
}



// ===== FAT.MBMergeCompReward$$FirstRewardTrans RVA 0x1f6e298 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7e298(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x6215,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6215,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0218b1e0 + 0x218b100);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0218b1e4 + 0x218b114),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0218b1e8 + 0x218b1d0));
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05186e14)(iVar1,0);
  return;
}



// ===== FAT.MBMergeCompReward$$_RrefreshNum RVA 0x1f6e304 =====

void FUN_01f7e304(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0xa861,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa861,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  func_0x028bf0fc(*(undefined4 *)(param_1 + 0x18),param_2,0);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450c0c(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc64(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&SUB_05189da8)(iVar1,0 < param_2,0);
  return;
}



// ===== FAT.MBMergeCompReward$$_RrefreshRoot RVA 0x1f6e3e8 =====

void FUN_01f7e3e8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0xa862,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa862,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = func_0x0244ffd4(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&SUB_05189da8)(iVar1,param_2,0);
  return;
}



// ===== FAT.MBMergeCompReward$$_OnHandleRewardChange RVA 0x1f6e46c =====

/* WARNING: Possible PIC construction at 0x01f7de08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f7de0c) */
/* WARNING: Removing unreachable block (ram,0x01f7de18) */
/* WARNING: Removing unreachable block (ram,0x01f7de1c) */
/* WARNING: Removing unreachable block (ram,0x01f7de40) */
/* WARNING: Removing unreachable block (ram,0x01f7de54) */
/* WARNING: Removing unreachable block (ram,0x01f7de74) */
/* WARNING: Removing unreachable block (ram,0x01f7de78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7e46c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xa865,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa865,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar2,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    return;
  }
  pcVar3 = (char *)(_UNK_01f7de9c + 0x1f7dbe4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f7dea0 + 0x1f7dbf8));
    func_0x01384978(*(undefined4 *)(_UNK_01f7dea4 + 0x1f7dc04));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa860,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa860,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0229fb54(iVar1,0);
  if (*(int *)(**(int **)(_UNK_01f7dea8 + 0x1f7dc7c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = FUN_01dea7f8(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x02141d1c(iVar1,0);
  FUN_01f7e304(param_1,iVar4);
  if (iVar4 < 1) {
    FUN_01f7e3e8(param_1,0);
  }
  else {
    FUN_01f7e3e8(param_1,1);
    iVar4 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x02145554(iVar1,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0229f85c(iVar4,uVar6,0);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0x268);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01dd2c04(iVar1,0);
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x0244fc34(iVar5,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02f67194(iVar5,**(undefined4 **)(_UNK_01f7deac + 0x1f7ddc8));
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_051861e0)(iVar5,iVar1 < iVar4,0);
  return;
}



// ===== FAT.MBMergeCompReward$$_OnBtnClaim RVA 0x1f6e4d8 =====

/* WARNING: Possible PIC construction at 0x01f7de08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f7de0c) */
/* WARNING: Removing unreachable block (ram,0x01f7de18) */
/* WARNING: Removing unreachable block (ram,0x01f7de1c) */
/* WARNING: Removing unreachable block (ram,0x01f7de40) */
/* WARNING: Removing unreachable block (ram,0x01f7de54) */
/* WARNING: Removing unreachable block (ram,0x01f7de74) */
/* WARNING: Removing unreachable block (ram,0x01f7de78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7e4d8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01f7e910 + 0x1f7e4f0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f7e914 + 0x1f7e504));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e918 + 0x1f7e510));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e91c + 0x1f7e51c));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e920 + 0x1f7e528));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e924 + 0x1f7e534));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e928 + 0x1f7e540));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e92c + 0x1f7e54c));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e930 + 0x1f7e558));
    func_0x01384978(*(undefined4 *)(_UNK_01f7e934 + 0x1f7e564));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa85e,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01f7e938 + 0x1f7e5c0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = FUN_01dea7f8(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x02141d1c(iVar1,0);
    if (iVar6 != 0) {
      piVar8 = *(int **)(_UNK_01f7e944 + 0x1f7e608);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x01384ab4();
      }
      FUN_01dd7d28(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar7 = func_0x02141bc8(iVar1,0);
      iVar6 = *(int *)(param_1 + 0x14);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x0244fc34(iVar6,0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x0244fd3c(&uStack_24,iVar6,0);
      uStack_30 = 0xbf800000;
      uStack_2c = 0;
      FUN_01dd7838(uVar7,uStack_24,uStack_20,uStack_1c);
      if (*(int *)(**(int **)(_UNK_01f7e948 + 0x1f7e6a4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar6 = func_0x0300d558(**(undefined4 **)(_UNK_01f7e94c + 0x1f7e6c0));
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x028c3fd8(iVar6,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x02139cf4(iVar1,0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x020e9e30(iVar6,0,0);
      if (iVar6 == 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x01384ab4();
        }
        FUN_01dd7d28(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02145464(iVar1,0,0);
        if ((0 < iVar1) && (iVar1 = func_0x02168818(iVar1,0), iVar1 != 0)) {
          return;
        }
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar1 + 0x10);
        iVar5 = **(int **)(_UNK_01f7e950 + 0x1f7e848);
        iVar1 = *(int *)(iVar5 + 0x1c);
        if (iVar1 == 0) {
          func_0x0140024c(iVar5);
          iVar1 = *(int *)(iVar5 + 0x1c);
        }
        iVar1 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0();
        }
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = *(int *)(*(int *)(iVar5 + 0x1c) + 8);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0();
        }
        uVar7 = **(undefined4 **)(iVar1 + 0x5c);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x01ca1c50(iVar6,0x14,uVar7,0);
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        puVar2 = *(undefined4 **)(_UNK_01f7e954 + 0x1f7e8fc);
      }
      else {
        uVar7 = func_0x0210e2d4(iVar6,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x02141d1c(iVar1,0);
        uStack_30 = 0;
        func_0x0199f04c(uVar7,0,0,uVar3);
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        puVar2 = *(undefined4 **)(_UNK_01f7e958 + 0x1f7e794);
      }
      func_0x01bf3284(iVar1,*puVar2,0);
      return;
    }
    if (*(int *)(**(int **)(_UNK_01f7e93c + 0x1f7e7a0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(**(undefined4 **)(_UNK_01f7e940 + 0x1f7e7c0),0);
    iVar1 = func_0x0229f06c(0xa85f,0);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0x20) = 0;
      pcVar4 = (char *)(_UNK_01f7de9c + 0x1f7dbe4);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01f7dea0 + 0x1f7dbf8));
        func_0x01384978(*(undefined4 *)(_UNK_01f7dea4 + 0x1f7dc04));
        *pcVar4 = '\x01';
      }
      iVar1 = func_0x0229f06c(0xa860,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x14);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0229fb54(iVar1,0);
        if (*(int *)(**(int **)(_UNK_01f7dea8 + 0x1f7dc7c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = FUN_01dea7f8(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x02141d1c(iVar1,0);
        FUN_01f7e304(param_1,iVar6);
        if (iVar6 < 1) {
          FUN_01f7e3e8(param_1,0);
        }
        else {
          FUN_01f7e3e8(param_1,1);
          iVar6 = *(int *)(param_1 + 0x14);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar7 = func_0x02145554(iVar1,0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0229f85c(iVar6,uVar7,0);
        }
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar1 + 0x268);
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x48);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01dd2c04(iVar1,0);
        iVar5 = *(int *)(param_1 + 0x10);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0244fc34(iVar5,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x02f67194(iVar5,**(undefined4 **)(_UNK_01f7deac + 0x1f7ddc8));
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        (*(code *)&UNK_051861e0)(iVar5,iVar1 < iVar6,0);
        return;
      }
      iVar1 = func_0x0229f13c(0xa860,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0xa85f,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa85e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.MBMergeCompReward$$_ClearIgnoreFlag RVA 0x1f6e95c =====

/* WARNING: Possible PIC construction at 0x01f7de08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f7de0c) */
/* WARNING: Removing unreachable block (ram,0x01f7de18) */
/* WARNING: Removing unreachable block (ram,0x01f7de1c) */
/* WARNING: Removing unreachable block (ram,0x01f7de40) */
/* WARNING: Removing unreachable block (ram,0x01f7de54) */
/* WARNING: Removing unreachable block (ram,0x01f7de74) */
/* WARNING: Removing unreachable block (ram,0x01f7de78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7e95c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xa85f,0);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    pcVar3 = (char *)(_UNK_01f7de9c + 0x1f7dbe4);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f7dea0 + 0x1f7dbf8));
      func_0x01384978(*(undefined4 *)(_UNK_01f7dea4 + 0x1f7dc04));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa860,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0229fb54(iVar1,0);
      if (*(int *)(**(int **)(_UNK_01f7dea8 + 0x1f7dc7c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = FUN_01dea7f8(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x02141d1c(iVar1,0);
      FUN_01f7e304(param_1,iVar4);
      if (iVar4 < 1) {
        FUN_01f7e3e8(param_1,0);
      }
      else {
        FUN_01f7e3e8(param_1,1);
        iVar4 = *(int *)(param_1 + 0x14);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar6 = func_0x02145554(iVar1,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0229f85c(iVar4,uVar6,0);
      }
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar1 + 0x268);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x48);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01dd2c04(iVar1,0);
      iVar5 = *(int *)(param_1 + 0x10);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x0244fc34(iVar5,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x02f67194(iVar5,**(undefined4 **)(_UNK_01f7deac + 0x1f7ddc8));
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_051861e0)(iVar5,iVar1 < iVar4,0);
      return;
    }
    iVar1 = func_0x0229f13c(0xa860,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa85f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.MBMergeCompReward$$_OnMessageLevelChange RVA 0x1f6e9bc =====

/* WARNING: Possible PIC construction at 0x01f7de08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f7de0c) */
/* WARNING: Removing unreachable block (ram,0x01f7de18) */
/* WARNING: Removing unreachable block (ram,0x01f7de1c) */
/* WARNING: Removing unreachable block (ram,0x01f7de40) */
/* WARNING: Removing unreachable block (ram,0x01f7de54) */
/* WARNING: Removing unreachable block (ram,0x01f7de74) */
/* WARNING: Removing unreachable block (ram,0x01f7de78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7e9bc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xa867,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa867,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar2,0,0);
    return;
  }
  pcVar3 = (char *)(_UNK_01f7de9c + 0x1f7dbe4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f7dea0 + 0x1f7dbf8));
    func_0x01384978(*(undefined4 *)(_UNK_01f7dea4 + 0x1f7dc04));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa860,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa860,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0229fb54(iVar1,0);
  if (*(int *)(**(int **)(_UNK_01f7dea8 + 0x1f7dc7c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = FUN_01dea7f8(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x02141d1c(iVar1,0);
  FUN_01f7e304(param_1,iVar4);
  if (iVar4 < 1) {
    FUN_01f7e3e8(param_1,0);
  }
  else {
    FUN_01f7e3e8(param_1,1);
    iVar4 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x02145554(iVar1,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0229f85c(iVar4,uVar6,0);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0x268);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01dd2c04(iVar1,0);
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x0244fc34(iVar5,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02f67194(iVar5,**(undefined4 **)(_UNK_01f7deac + 0x1f7ddc8));
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_051861e0)(iVar5,iVar1 < iVar4,0);
  return;
}



// ===== FAT.MBMergeCompReward$$_OnMessagePreBeginReward RVA 0x1f6ea1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7ea1c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01f7eba4 + 0x1f7ea34);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f7eba8 + 0x1f7ea48));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa868,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa868,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0xc) != 0x2000) {
    if (*(int *)(param_2 + 0xc) != 0x4000) {
      return;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xac);
    uVar9 = *(undefined4 *)(param_2 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ba13d8(iVar1,uVar9,0);
    if (iVar1 != 0) {
      return;
    }
  }
  piVar2 = (int *)func_0x021566f4(0);
  uVar9 = *(undefined4 *)(param_2 + 8);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_01f7ebac + 0x1f7eb28)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x108);
        goto LAB_01f7eb70;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01f7ebac + 0x1f7eb28),9);
LAB_01f7eb70:
  iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x1c) < 2)) {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}



// ===== FAT.MBMergeCompReward$$_OnMessagePostCommitReward RVA 0x1f6ebb0 =====

/* WARNING: Possible PIC construction at 0x01f7de08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f7de0c) */
/* WARNING: Removing unreachable block (ram,0x01f7de18) */
/* WARNING: Removing unreachable block (ram,0x01f7de1c) */
/* WARNING: Removing unreachable block (ram,0x01f7de40) */
/* WARNING: Removing unreachable block (ram,0x01f7de54) */
/* WARNING: Removing unreachable block (ram,0x01f7de74) */
/* WARNING: Removing unreachable block (ram,0x01f7de78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7ebb0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar9 = (char *)(_UNK_01f7ed84 + 0x1f7ebc8);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f7ed88 + 0x1f7ebdc));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa869,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa869,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar7,uVar10,&uStack_38,uVar6,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0xc) != 0x2000) {
    if (*(int *)(param_2 + 0xc) != 0x4000) {
      return;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xac);
    uVar10 = *(undefined4 *)(param_2 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ba13d8(iVar1,uVar10,0);
    if (iVar1 != 0) {
      return;
    }
  }
  piVar2 = (int *)func_0x021566f4(0);
  uVar10 = *(undefined4 *)(param_2 + 8);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_01f7ed8c + 0x1f7ecc8)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x108);
        goto LAB_01f7ed10;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01f7ed8c + 0x1f7ecc8),9);
LAB_01f7ed10:
  iVar1 = (*(code *)*puVar3)(piVar2,uVar10,puVar3[1]);
  if ((iVar1 != 0) && (1 < *(int *)(iVar1 + 0x1c))) {
    return;
  }
  uVar10 = func_0x0244fc34(param_1,0);
  uVar10 = func_0x02cf3d80(uVar10,0x3f800000,0x3dcccccd,0);
  func_0x02cfd58c(uVar10,0x3f333333,1,0);
  *(undefined1 *)(param_1 + 0x20) = 0;
  iVar1 = func_0x0229f06c(0xa85f,0);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    pcVar9 = (char *)(_UNK_01f7de9c + 0x1f7dbe4);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01f7dea0 + 0x1f7dbf8));
      func_0x01384978(*(undefined4 *)(_UNK_01f7dea4 + 0x1f7dc04));
      *pcVar9 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa860,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0229fb54(iVar1,0);
      if (*(int *)(**(int **)(_UNK_01f7dea8 + 0x1f7dc7c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = FUN_01dea7f8(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x02141d1c(iVar1,0);
      FUN_01f7e304(param_1,iVar7);
      if (iVar7 < 1) {
        FUN_01f7e3e8(param_1,0);
      }
      else {
        FUN_01f7e3e8(param_1,1);
        iVar7 = *(int *)(param_1 + 0x14);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar10 = func_0x02145554(iVar1,0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x0229f85c(iVar7,uVar10,0);
      }
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(iVar1 + 0x268);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x48);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01dd2c04(iVar1,0);
      iVar8 = *(int *)(param_1 + 0x10);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = func_0x0244fc34(iVar8,0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = func_0x02f67194(iVar8,**(undefined4 **)(_UNK_01f7deac + 0x1f7ddc8));
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_051861e0)(iVar8,iVar1 < iVar7,0);
      return;
    }
    iVar1 = func_0x0229f13c(0xa860,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa85f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar10 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar7,uVar10,&uStack_30,uVar6);
  return;
}



// ===== FAT.MBMergeCompReward$$_OnItemEvent RVA 0x1f6ed90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7ed90(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_01f7ef10 + 0x1f7edb0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f7ef14 + 0x1f7edc4));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa866,0);
  if (iVar2 == 0) {
    if (param_3 == 0xc) {
      iVar2 = *(int *)(param_1 + 0x1c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x02cdb248(iVar2,0);
      iVar2 = *(int *)(param_1 + 0x1c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x02cdafcc(iVar2,0);
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar2 + 0x10);
      iVar4 = **(int **)(_UNK_01f7ef18 + 0x1f7ee80);
      iVar2 = *(int *)(iVar4 + 0x1c);
      if (iVar2 == 0) {
        func_0x0140024c(iVar4);
        iVar2 = *(int *)(iVar4 + 0x1c);
      }
      iVar2 = *(int *)(iVar2 + 8);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0();
      }
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = *(int *)(*(int *)(iVar4 + 0x1c) + 8);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0();
      }
      uVar5 = **(undefined4 **)(iVar2 + 0x5c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      pcVar6 = (char *)(_UNK_01ca1d48 + 0x1ca1c70);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01ca1d4c + 0x1ca1c84),0x35,uVar5,0);
        *pcVar6 = '\x01';
      }
      iVar2 = func_0x0229f06c(8,0);
      if (iVar2 == 0) {
        pcVar6 = (char *)(_UNK_01ca1d50 + 0x1ca1ce8);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01ca1d54 + 0x1ca1cfc));
          *pcVar6 = '\x01';
        }
        puVar1 = *(undefined4 **)(**(int **)(_UNK_01ca1d58 + 0x1ca1d10) + 0x5c);
        func_0x01ca1848(iVar3,0x35,**(undefined4 **)(_UNK_01ca1d5c + 0x1ca1d20),*puVar1,puVar1[1],
                        puVar1[2],uVar5);
      }
      else {
        iVar2 = func_0x0229f13c(8,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x02175bd0(iVar2,iVar3,0x35,uVar5,0);
      }
      return;
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa866,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02180430(iVar2,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBMergeCompReward$$.ctor RVA 0x1f6ef1c =====

void FUN_01f7ef1c(undefined4 param_1)

{
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}


