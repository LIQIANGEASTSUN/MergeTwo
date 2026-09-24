
/* WARNING: Possible PIC construction at 0x02c13dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c13e34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c13f04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c13e38) */
/* WARNING: Removing unreachable block (ram,0x02c13e44) */
/* WARNING: Removing unreachable block (ram,0x02c13e48) */
/* WARNING: Removing unreachable block (ram,0x02c13e60) */
/* WARNING: Removing unreachable block (ram,0x02c13e64) */
/* WARNING: Removing unreachable block (ram,0x02c13e80) */
/* WARNING: Removing unreachable block (ram,0x02c13e84) */
/* WARNING: Removing unreachable block (ram,0x02c13e9c) */
/* WARNING: Removing unreachable block (ram,0x02c13ea0) */
/* WARNING: Removing unreachable block (ram,0x02c13eb8) */
/* WARNING: Removing unreachable block (ram,0x02c13ebc) */
/* WARNING: Removing unreachable block (ram,0x02c13ee0) */
/* WARNING: Removing unreachable block (ram,0x02c13ee4) */
/* WARNING: Removing unreachable block (ram,0x02c13e00) */
/* WARNING: Removing unreachable block (ram,0x02c13e08) */
/* WARNING: Removing unreachable block (ram,0x02c13e0c) */
/* WARNING: Removing unreachable block (ram,0x02c13f08) */
/* WARNING: Removing unreachable block (ram,0x02c13f10) */
/* WARNING: Removing unreachable block (ram,0x02c13f14) */
/* WARNING: Removing unreachable block (ram,0x02c13f38) */
/* WARNING: Removing unreachable block (ram,0x02c13f3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c13a28(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c13f60 + 0x2c13a44);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c13f64 + 0x2c13a58));
    func_0x01438628(*(undefined4 *)(_UNK_02c13f68 + 0x2c13a64));
    func_0x01438628(*(undefined4 *)(_UNK_02c13f6c + 0x2c13a70));
    func_0x01438628(*(undefined4 *)(_UNK_02c13f70 + 0x2c13a7c));
    func_0x01438628(*(undefined4 *)(_UNK_02c13f74 + 0x2c13a88));
    func_0x01438628(*(undefined4 *)(_UNK_02c13f78 + 0x2c13a94));
    func_0x01438628(*(undefined4 *)(_UNK_02c13f7c + 0x2c13aa0));
    func_0x01438628(*(undefined4 *)(_UNK_02c13f80 + 0x2c13aac));
    func_0x01438628(*(undefined4 *)(_UNK_02c13f84 + 0x2c13ab8));
    func_0x01438628(*(undefined4 *)(_UNK_02c13f88 + 0x2c13ac4));
    func_0x01438628(*(undefined4 *)(_UNK_02c13f8c + 0x2c13ad0));
    func_0x01438628(*(undefined4 *)(_UNK_02c13f90 + 0x2c13adc));
    func_0x01438628(*(undefined4 *)(_UNK_02c13f94 + 0x2c13ae8));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fdc,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fdc,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x2dc),param_2,
                          **(undefined4 **)(_UNK_02c13f98 + 0x2c13b4c));
  *(char *)(param_1 + 0x2d8) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c13f9c + 0x2c13b90);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c13fa0 + 0x2c13ba4);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c13fa4 + 0x2c13bd8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c13fa8 + 0x2c13bf4));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c13fb0 + 0x2c13c28);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c13fac + 0x2c13c1c),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c13fb4 + 0x2c13c74));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c13fb8 + 0x2c13ca8);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c13fbc + 0x2c13cbc));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c13fc0 + 0x2c13cd4);
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
    pcVar9 = (char *)(_UNK_02c13fc4 + 0x2c13d2c);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c13fc8 + 0x2c13d40));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c13fcc + 0x2c13de8),0);
  puVar12 = (undefined4 *)(param_1 + 0x2d0);
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

