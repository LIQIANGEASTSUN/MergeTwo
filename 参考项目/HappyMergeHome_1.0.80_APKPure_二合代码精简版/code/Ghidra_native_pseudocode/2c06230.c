
/* WARNING: Possible PIC construction at 0x02c16604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1663c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1670c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c16640) */
/* WARNING: Removing unreachable block (ram,0x02c1664c) */
/* WARNING: Removing unreachable block (ram,0x02c16650) */
/* WARNING: Removing unreachable block (ram,0x02c16668) */
/* WARNING: Removing unreachable block (ram,0x02c1666c) */
/* WARNING: Removing unreachable block (ram,0x02c16688) */
/* WARNING: Removing unreachable block (ram,0x02c1668c) */
/* WARNING: Removing unreachable block (ram,0x02c166a4) */
/* WARNING: Removing unreachable block (ram,0x02c166a8) */
/* WARNING: Removing unreachable block (ram,0x02c166c0) */
/* WARNING: Removing unreachable block (ram,0x02c166c4) */
/* WARNING: Removing unreachable block (ram,0x02c166e8) */
/* WARNING: Removing unreachable block (ram,0x02c166ec) */
/* WARNING: Removing unreachable block (ram,0x02c16608) */
/* WARNING: Removing unreachable block (ram,0x02c16610) */
/* WARNING: Removing unreachable block (ram,0x02c16614) */
/* WARNING: Removing unreachable block (ram,0x02c16710) */
/* WARNING: Removing unreachable block (ram,0x02c16718) */
/* WARNING: Removing unreachable block (ram,0x02c1671c) */
/* WARNING: Removing unreachable block (ram,0x02c16740) */
/* WARNING: Removing unreachable block (ram,0x02c16744) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c16230(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c16768 + 0x2c1624c);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c1676c + 0x2c16260));
    func_0x01438628(*(undefined4 *)(_UNK_02c16770 + 0x2c1626c));
    func_0x01438628(*(undefined4 *)(_UNK_02c16774 + 0x2c16278));
    func_0x01438628(*(undefined4 *)(_UNK_02c16778 + 0x2c16284));
    func_0x01438628(*(undefined4 *)(_UNK_02c1677c + 0x2c16290));
    func_0x01438628(*(undefined4 *)(_UNK_02c16780 + 0x2c1629c));
    func_0x01438628(*(undefined4 *)(_UNK_02c16784 + 0x2c162a8));
    func_0x01438628(*(undefined4 *)(_UNK_02c16788 + 0x2c162b4));
    func_0x01438628(*(undefined4 *)(_UNK_02c1678c + 0x2c162c0));
    func_0x01438628(*(undefined4 *)(_UNK_02c16790 + 0x2c162cc));
    func_0x01438628(*(undefined4 *)(_UNK_02c16794 + 0x2c162d8));
    func_0x01438628(*(undefined4 *)(_UNK_02c16798 + 0x2c162e4));
    func_0x01438628(*(undefined4 *)(_UNK_02c1679c + 0x2c162f0));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fe3,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fe3,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 900),param_2,
                          **(undefined4 **)(_UNK_02c167a0 + 0x2c16354));
  *(char *)(param_1 + 0x380) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c167a4 + 0x2c16398);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c167a8 + 0x2c163ac);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c167ac + 0x2c163e0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c167b0 + 0x2c163fc));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c167b8 + 0x2c16430);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c167b4 + 0x2c16424),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c167bc + 0x2c1647c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c167c0 + 0x2c164b0);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c167c4 + 0x2c164c4));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c167c8 + 0x2c164dc);
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
    pcVar9 = (char *)(_UNK_02c167cc + 0x2c16534);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c167d0 + 0x2c16548));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c167d4 + 0x2c165f0),0);
  puVar12 = (undefined4 *)(param_1 + 0x378);
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

