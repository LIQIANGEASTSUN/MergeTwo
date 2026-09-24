
/* WARNING: Possible PIC construction at 0x02c154dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c15514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c155e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c15518) */
/* WARNING: Removing unreachable block (ram,0x02c15524) */
/* WARNING: Removing unreachable block (ram,0x02c15528) */
/* WARNING: Removing unreachable block (ram,0x02c15540) */
/* WARNING: Removing unreachable block (ram,0x02c15544) */
/* WARNING: Removing unreachable block (ram,0x02c15560) */
/* WARNING: Removing unreachable block (ram,0x02c15564) */
/* WARNING: Removing unreachable block (ram,0x02c1557c) */
/* WARNING: Removing unreachable block (ram,0x02c15580) */
/* WARNING: Removing unreachable block (ram,0x02c15598) */
/* WARNING: Removing unreachable block (ram,0x02c1559c) */
/* WARNING: Removing unreachable block (ram,0x02c155c0) */
/* WARNING: Removing unreachable block (ram,0x02c155c4) */
/* WARNING: Removing unreachable block (ram,0x02c154e0) */
/* WARNING: Removing unreachable block (ram,0x02c154e8) */
/* WARNING: Removing unreachable block (ram,0x02c154ec) */
/* WARNING: Removing unreachable block (ram,0x02c155e8) */
/* WARNING: Removing unreachable block (ram,0x02c155f0) */
/* WARNING: Removing unreachable block (ram,0x02c155f4) */
/* WARNING: Removing unreachable block (ram,0x02c15618) */
/* WARNING: Removing unreachable block (ram,0x02c1561c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c15108(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c15640 + 0x2c15124);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c15644 + 0x2c15138));
    func_0x01438628(*(undefined4 *)(_UNK_02c15648 + 0x2c15144));
    func_0x01438628(*(undefined4 *)(_UNK_02c1564c + 0x2c15150));
    func_0x01438628(*(undefined4 *)(_UNK_02c15650 + 0x2c1515c));
    func_0x01438628(*(undefined4 *)(_UNK_02c15654 + 0x2c15168));
    func_0x01438628(*(undefined4 *)(_UNK_02c15658 + 0x2c15174));
    func_0x01438628(*(undefined4 *)(_UNK_02c1565c + 0x2c15180));
    func_0x01438628(*(undefined4 *)(_UNK_02c15660 + 0x2c1518c));
    func_0x01438628(*(undefined4 *)(_UNK_02c15664 + 0x2c15198));
    func_0x01438628(*(undefined4 *)(_UNK_02c15668 + 0x2c151a4));
    func_0x01438628(*(undefined4 *)(_UNK_02c1566c + 0x2c151b0));
    func_0x01438628(*(undefined4 *)(_UNK_02c15670 + 0x2c151bc));
    func_0x01438628(*(undefined4 *)(_UNK_02c15674 + 0x2c151c8));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fe0,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fe0,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x33c),param_2,
                          **(undefined4 **)(_UNK_02c15678 + 0x2c1522c));
  *(char *)(param_1 + 0x338) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c1567c + 0x2c15270);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c15680 + 0x2c15284);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c15684 + 0x2c152b8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c15688 + 0x2c152d4));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c15690 + 0x2c15308);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c1568c + 0x2c152fc),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c15694 + 0x2c15354));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c15698 + 0x2c15388);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c1569c + 0x2c1539c));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c156a0 + 0x2c153b4);
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
    pcVar9 = (char *)(_UNK_02c156a4 + 0x2c1540c);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c156a8 + 0x2c15420));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c156ac + 0x2c154c8),0);
  puVar12 = (undefined4 *)(param_1 + 0x330);
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

