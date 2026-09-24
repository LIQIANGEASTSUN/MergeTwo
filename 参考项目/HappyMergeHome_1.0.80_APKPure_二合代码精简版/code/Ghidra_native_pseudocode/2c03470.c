
/* WARNING: Possible PIC construction at 0x02c13844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1387c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1394c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c13880) */
/* WARNING: Removing unreachable block (ram,0x02c1388c) */
/* WARNING: Removing unreachable block (ram,0x02c13890) */
/* WARNING: Removing unreachable block (ram,0x02c138a8) */
/* WARNING: Removing unreachable block (ram,0x02c138ac) */
/* WARNING: Removing unreachable block (ram,0x02c138c8) */
/* WARNING: Removing unreachable block (ram,0x02c138cc) */
/* WARNING: Removing unreachable block (ram,0x02c138e4) */
/* WARNING: Removing unreachable block (ram,0x02c138e8) */
/* WARNING: Removing unreachable block (ram,0x02c13900) */
/* WARNING: Removing unreachable block (ram,0x02c13904) */
/* WARNING: Removing unreachable block (ram,0x02c13928) */
/* WARNING: Removing unreachable block (ram,0x02c1392c) */
/* WARNING: Removing unreachable block (ram,0x02c13848) */
/* WARNING: Removing unreachable block (ram,0x02c13850) */
/* WARNING: Removing unreachable block (ram,0x02c13854) */
/* WARNING: Removing unreachable block (ram,0x02c13950) */
/* WARNING: Removing unreachable block (ram,0x02c13958) */
/* WARNING: Removing unreachable block (ram,0x02c1395c) */
/* WARNING: Removing unreachable block (ram,0x02c13980) */
/* WARNING: Removing unreachable block (ram,0x02c13984) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c13470(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
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
  
  pcVar9 = (char *)(_UNK_02c139a8 + 0x2c1348c);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c139ac + 0x2c134a0));
    func_0x01438628(*(undefined4 *)(_UNK_02c139b0 + 0x2c134ac));
    func_0x01438628(*(undefined4 *)(_UNK_02c139b4 + 0x2c134b8));
    func_0x01438628(*(undefined4 *)(_UNK_02c139b8 + 0x2c134c4));
    func_0x01438628(*(undefined4 *)(_UNK_02c139bc + 0x2c134d0));
    func_0x01438628(*(undefined4 *)(_UNK_02c139c0 + 0x2c134dc));
    func_0x01438628(*(undefined4 *)(_UNK_02c139c4 + 0x2c134e8));
    func_0x01438628(*(undefined4 *)(_UNK_02c139c8 + 0x2c134f4));
    func_0x01438628(*(undefined4 *)(_UNK_02c139cc + 0x2c13500));
    func_0x01438628(*(undefined4 *)(_UNK_02c139d0 + 0x2c1350c));
    func_0x01438628(*(undefined4 *)(_UNK_02c139d4 + 0x2c13518));
    func_0x01438628(*(undefined4 *)(_UNK_02c139d8 + 0x2c13524));
    func_0x01438628(*(undefined4 *)(_UNK_02c139dc + 0x2c13530));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fdb,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fdb,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar6 = 3;
    if (iVar3 == 0) {
      uVar6 = 2;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_38,uVar6,0,0);
    return;
  }
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x2c4),param_2,
                          **(undefined4 **)(_UNK_02c139e0 + 0x2c13594));
  *(char *)(param_1 + 0x2c0) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c139e4 + 0x2c135d8);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c139e8 + 0x2c135ec);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c139ec + 0x2c13620) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c139f0 + 0x2c1363c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c139f8 + 0x2c13670);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c139f4 + 0x2c13664),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c139fc + 0x2c136bc));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c13a00 + 0x2c136f0);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c13a04 + 0x2c13704));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c13a08 + 0x2c1371c);
    puVar4 = *(undefined4 **)(*piVar10 + 0x5c);
    uVar6 = *puVar4;
    uVar8 = puVar4[1];
    uVar11 = puVar4[2];
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uStack_30 = 0;
    func_0x024ef1f8(iVar7,uVar6,uVar8,uVar11);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c13a0c + 0x2c13774);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c13a10 + 0x2c13788));
      *pcVar9 = '\x01';
    }
    iVar5 = *(int *)(*piVar10 + 0x5c);
    uVar8 = *(undefined4 *)(iVar5 + 0xc);
    uVar6 = *(undefined4 *)(iVar5 + 0x10);
    uVar11 = *(undefined4 *)(iVar5 + 0x14);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uStack_30 = 0;
    func_0x024ef328(iVar7,uVar8,uVar6,uVar11);
    if (iVar3 == 0) {
      func_0x014388e4();
      func_0x024ef2f8(0,*puVar12,0);
      func_0x014388e4();
    }
    else {
      func_0x024ef2f8(iVar3,*puVar12,0);
    }
    iVar3 = func_0x024ef308(iVar3,0);
  }
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c13a14 + 0x2c13830),0);
  puVar12 = (undefined4 *)(param_1 + 0x2b8);
  *puVar12 = uVar8;
  if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)puVar12 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar12 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

