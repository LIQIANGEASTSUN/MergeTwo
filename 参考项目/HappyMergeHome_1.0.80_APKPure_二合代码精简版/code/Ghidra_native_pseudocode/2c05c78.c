
/* WARNING: Possible PIC construction at 0x02c1604c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c16084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c16154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c16088) */
/* WARNING: Removing unreachable block (ram,0x02c16094) */
/* WARNING: Removing unreachable block (ram,0x02c16098) */
/* WARNING: Removing unreachable block (ram,0x02c160b0) */
/* WARNING: Removing unreachable block (ram,0x02c160b4) */
/* WARNING: Removing unreachable block (ram,0x02c160d0) */
/* WARNING: Removing unreachable block (ram,0x02c160d4) */
/* WARNING: Removing unreachable block (ram,0x02c160ec) */
/* WARNING: Removing unreachable block (ram,0x02c160f0) */
/* WARNING: Removing unreachable block (ram,0x02c16108) */
/* WARNING: Removing unreachable block (ram,0x02c1610c) */
/* WARNING: Removing unreachable block (ram,0x02c16130) */
/* WARNING: Removing unreachable block (ram,0x02c16134) */
/* WARNING: Removing unreachable block (ram,0x02c16050) */
/* WARNING: Removing unreachable block (ram,0x02c16058) */
/* WARNING: Removing unreachable block (ram,0x02c1605c) */
/* WARNING: Removing unreachable block (ram,0x02c16158) */
/* WARNING: Removing unreachable block (ram,0x02c16160) */
/* WARNING: Removing unreachable block (ram,0x02c16164) */
/* WARNING: Removing unreachable block (ram,0x02c16188) */
/* WARNING: Removing unreachable block (ram,0x02c1618c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c15c78(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c161b0 + 0x2c15c94);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c161b4 + 0x2c15ca8));
    func_0x01438628(*(undefined4 *)(_UNK_02c161b8 + 0x2c15cb4));
    func_0x01438628(*(undefined4 *)(_UNK_02c161bc + 0x2c15cc0));
    func_0x01438628(*(undefined4 *)(_UNK_02c161c0 + 0x2c15ccc));
    func_0x01438628(*(undefined4 *)(_UNK_02c161c4 + 0x2c15cd8));
    func_0x01438628(*(undefined4 *)(_UNK_02c161c8 + 0x2c15ce4));
    func_0x01438628(*(undefined4 *)(_UNK_02c161cc + 0x2c15cf0));
    func_0x01438628(*(undefined4 *)(_UNK_02c161d0 + 0x2c15cfc));
    func_0x01438628(*(undefined4 *)(_UNK_02c161d4 + 0x2c15d08));
    func_0x01438628(*(undefined4 *)(_UNK_02c161d8 + 0x2c15d14));
    func_0x01438628(*(undefined4 *)(_UNK_02c161dc + 0x2c15d20));
    func_0x01438628(*(undefined4 *)(_UNK_02c161e0 + 0x2c15d2c));
    func_0x01438628(*(undefined4 *)(_UNK_02c161e4 + 0x2c15d38));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fe2,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fe2,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x36c),param_2,
                          **(undefined4 **)(_UNK_02c161e8 + 0x2c15d9c));
  *(char *)(param_1 + 0x368) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c161ec + 0x2c15de0);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c161f0 + 0x2c15df4);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c161f4 + 0x2c15e28) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c161f8 + 0x2c15e44));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c16200 + 0x2c15e78);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c161fc + 0x2c15e6c),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c16204 + 0x2c15ec4));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c16208 + 0x2c15ef8);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c1620c + 0x2c15f0c));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c16210 + 0x2c15f24);
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
    pcVar9 = (char *)(_UNK_02c16214 + 0x2c15f7c);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c16218 + 0x2c15f90));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c1621c + 0x2c16038),0);
  puVar12 = (undefined4 *)(param_1 + 0x360);
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

