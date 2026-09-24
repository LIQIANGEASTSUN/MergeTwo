
/* WARNING: Possible PIC construction at 0x02c17174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c171ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1727c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c171b0) */
/* WARNING: Removing unreachable block (ram,0x02c171bc) */
/* WARNING: Removing unreachable block (ram,0x02c171c0) */
/* WARNING: Removing unreachable block (ram,0x02c171d8) */
/* WARNING: Removing unreachable block (ram,0x02c171dc) */
/* WARNING: Removing unreachable block (ram,0x02c171f8) */
/* WARNING: Removing unreachable block (ram,0x02c171fc) */
/* WARNING: Removing unreachable block (ram,0x02c17214) */
/* WARNING: Removing unreachable block (ram,0x02c17218) */
/* WARNING: Removing unreachable block (ram,0x02c17230) */
/* WARNING: Removing unreachable block (ram,0x02c17234) */
/* WARNING: Removing unreachable block (ram,0x02c17258) */
/* WARNING: Removing unreachable block (ram,0x02c1725c) */
/* WARNING: Removing unreachable block (ram,0x02c17178) */
/* WARNING: Removing unreachable block (ram,0x02c17180) */
/* WARNING: Removing unreachable block (ram,0x02c17184) */
/* WARNING: Removing unreachable block (ram,0x02c17280) */
/* WARNING: Removing unreachable block (ram,0x02c17288) */
/* WARNING: Removing unreachable block (ram,0x02c1728c) */
/* WARNING: Removing unreachable block (ram,0x02c172b0) */
/* WARNING: Removing unreachable block (ram,0x02c172b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c16da0(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c172d8 + 0x2c16dbc);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c172dc + 0x2c16dd0));
    func_0x01438628(*(undefined4 *)(_UNK_02c172e0 + 0x2c16ddc));
    func_0x01438628(*(undefined4 *)(_UNK_02c172e4 + 0x2c16de8));
    func_0x01438628(*(undefined4 *)(_UNK_02c172e8 + 0x2c16df4));
    func_0x01438628(*(undefined4 *)(_UNK_02c172ec + 0x2c16e00));
    func_0x01438628(*(undefined4 *)(_UNK_02c172f0 + 0x2c16e0c));
    func_0x01438628(*(undefined4 *)(_UNK_02c172f4 + 0x2c16e18));
    func_0x01438628(*(undefined4 *)(_UNK_02c172f8 + 0x2c16e24));
    func_0x01438628(*(undefined4 *)(_UNK_02c172fc + 0x2c16e30));
    func_0x01438628(*(undefined4 *)(_UNK_02c17300 + 0x2c16e3c));
    func_0x01438628(*(undefined4 *)(_UNK_02c17304 + 0x2c16e48));
    func_0x01438628(*(undefined4 *)(_UNK_02c17308 + 0x2c16e54));
    func_0x01438628(*(undefined4 *)(_UNK_02c1730c + 0x2c16e60));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fe5,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fe5,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x3cc),param_2,
                          **(undefined4 **)(_UNK_02c17310 + 0x2c16ec4));
  *(char *)(param_1 + 0x3c8) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c17314 + 0x2c16f08);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c17318 + 0x2c16f1c);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c1731c + 0x2c16f50) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c17320 + 0x2c16f6c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c17328 + 0x2c16fa0);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c17324 + 0x2c16f94),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c1732c + 0x2c16fec));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c17330 + 0x2c17020);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c17334 + 0x2c17034));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c17338 + 0x2c1704c);
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
    pcVar9 = (char *)(_UNK_02c1733c + 0x2c170a4);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c17340 + 0x2c170b8));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c17344 + 0x2c17160),0);
  puVar12 = (undefined4 *)(param_1 + 0x3c0);
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

