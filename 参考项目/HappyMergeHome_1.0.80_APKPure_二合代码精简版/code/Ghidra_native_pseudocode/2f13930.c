
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_02f23930(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int extraout_r2;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  int iVar12;
  undefined *unaff_r9;
  undefined1 uVar13;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 uVar19;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar10 = (char *)(_UNK_02f23a10 + 0x2f23944);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f23a14 + 0x2f23958));
    func_0x01438628(*(undefined4 *)(_UNK_02f23a18 + 0x2f23964));
    func_0x01438628(*(undefined4 *)(_UNK_02f23a1c + 0x2f23970));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x6d2c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x6d2c,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar10 = (char *)(_UNK_02913ba4 + 0x2913ac4);
    if (*pcVar10 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02913ba8 + 0x2913ad8),param_1,0);
      *pcVar10 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&stack0xffffffb8,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar11 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar7 = 2;
    if (iVar2 == 0) {
      uVar7 = 1;
    }
    func_0x024f56d0(iVar9,uVar11,&uStack_30,uVar7,0,0);
    piVar1 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02913bac + 0x2913b94));
    return piVar1;
  }
  if (*(int *)(**(int **)(_UNK_02f23a20 + 0x2f239c8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02f23a24 + 0x2f239e4));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar9 = **(int **)(_UNK_02f23a28 + 0x2f23a04);
  puVar6 = *(undefined4 **)(iVar9 + 0x1c);
  if (puVar6 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam0371068c + 0x3710278));
    func_0x024f83cc(*(undefined4 *)(iRam03710690 + 0x3710284));
    func_0x024f83cc(*(undefined4 *)(iRam03710694 + 0x3710290));
    func_0x024f83cc(*(undefined4 *)(iRam03710698 + 0x371029c));
    func_0x024f83cc(*(undefined4 *)(iRam0371069c + 0x37102a8));
    func_0x024f83cc(*(undefined4 *)(iRam037106a0 + 0x37102b4));
    func_0x024f83cc(*(undefined4 *)(iRam037106a4 + 0x37102c0));
    func_0x024f83cc(*(undefined4 *)(iRam037106a8 + 0x37102cc));
    func_0x024f83cc(*(undefined4 *)(iRam037106ac + 0x37102d8));
    func_0x024f83cc(*(undefined4 *)(iRam037106b0 + 0x37102e4));
    func_0x024f83cc(*(undefined4 *)(iRam037106b4 + 0x37102f0));
    func_0x024f83cc(*(undefined4 *)(iRam037106b8 + 0x37102fc));
    puVar6 = *(undefined4 **)(iVar9 + 0x1c);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar9);
      puVar6 = *(undefined4 **)(iVar9 + 0x1c);
    }
  }
  uVar11 = *puVar6;
  iVar12 = *(int *)(iVar2 + 0x3c);
  if (*(int *)(**(int **)(iRam037106bc + 0x3710320) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar11 = func_0x05171434(uVar11,0);
  if (iVar12 == 0) {
    func_0x024f83d4();
  }
  uVar3 = func_0x0475399c(iVar12,uVar11,**(undefined4 **)(iRam037106c0 + 0x3710364));
  uVar4 = func_0x02965180(uVar3,0);
  if (uVar4 < 0xa5621015) {
    if (uVar4 < 0x775ef500) {
      if (uVar4 == 0x392d1efa) {
        iVar12 = func_0x04f57738(uVar3,**(undefined4 **)(iRam037106e8 + 0x37104f0),0);
        uVar13 = iVar12 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar9 = *(int *)(iVar9 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x14);
LAB_037105e4:
          iVar2 = *(int *)(iVar9 + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x024f83fc(iVar2);
          }
          piVar8 = (int *)0x0;
          if (piVar1 != (int *)0x0) {
            if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
               (piVar8 = piVar1,
               *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
            {
              piVar8 = (int *)0x0;
            }
          }
          return piVar8;
        }
      }
      else {
        bVar16 = 0x775ef4fe < uVar4;
        uVar13 = false;
        if (uVar4 == 0x775ef4ff) {
          iVar12 = func_0x04f57738(uVar3,**(undefined4 **)(iRam037106c4 + 0x37103c0),0);
          uVar13 = iVar12 == 0;
          bVar16 = true;
          if (!(bool)uVar13) {
            iVar9 = *(int *)(iVar9 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x28);
            goto LAB_037105e4;
          }
        }
      }
    }
    else if (uVar4 == 0x8950c121) {
      iVar12 = func_0x04f57738(uVar3,**(undefined4 **)(iRam037106d4 + 0x3710548),0);
      uVar13 = iVar12 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar9 = *(int *)(iVar9 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_037105e4;
      }
    }
    else if (uVar4 == 0xa4ebb130) {
      iVar12 = func_0x04f57738(uVar3,**(undefined4 **)(iRam037106e4 + 0x3710574),0);
      uVar13 = iVar12 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar9 = *(int *)(iVar9 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x38);
        goto LAB_037105e4;
      }
    }
    else {
      bVar16 = 0xa5621013 < uVar4;
      uVar13 = false;
      if (uVar4 == 0xa5621014) {
        iVar12 = func_0x04f57738(uVar3,**(undefined4 **)(iRam037106c8 + 0x3710468),0);
        uVar13 = iVar12 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar9 = *(int *)(iVar9 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x30);
          goto LAB_037105e4;
        }
      }
    }
  }
  else if (uVar4 < 0xb9cd4293) {
    if (uVar4 == 0xb881e6cb) {
      iVar12 = func_0x04f57738(uVar3,**(undefined4 **)(iRam037106e0 + 0x371051c),0);
      uVar13 = iVar12 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar9 = *(int *)(iVar9 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x34);
        goto LAB_037105e4;
      }
    }
    else {
      bVar16 = 0xb9cd4291 < uVar4;
      uVar13 = false;
      if (uVar4 == 0xb9cd4292) {
        iVar12 = func_0x04f57738(uVar3,**(undefined4 **)(iRam037106cc + 0x3710414),0);
        uVar13 = iVar12 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar9 = *(int *)(iVar9 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_037105e4;
        }
      }
    }
  }
  else if (uVar4 == 0xbafc2442) {
    iVar12 = func_0x04f57738(uVar3,**(undefined4 **)(iRam037106dc + 0x37105a0),0);
    uVar13 = iVar12 == 0;
    bVar16 = true;
    if (!(bool)uVar13) {
      iVar9 = *(int *)(iVar9 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x2c);
      goto LAB_037105e4;
    }
  }
  else if (uVar4 == 0xc16fefa5) {
    iVar12 = func_0x04f57738(uVar3,**(undefined4 **)(iRam037106d8 + 0x37105cc),0);
    uVar13 = iVar12 == 0;
    bVar16 = true;
    if (!(bool)uVar13) {
      iVar9 = *(int *)(iVar9 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x24);
      goto LAB_037105e4;
    }
  }
  else {
    bVar16 = 0xec3691f0 < uVar4;
    uVar13 = false;
    if (uVar4 == 0xec3691f1) {
      iVar12 = func_0x04f57738(uVar3,**(undefined4 **)(iRam037106d0 + 0x37104c4),0);
      uVar13 = iVar12 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar9 = *(int *)(iVar9 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x20);
        goto LAB_037105e4;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam037106ec + 0x371064c));
  uVar4 = func_0x024f83c8();
  uVar7 = func_0x024f83b8(*(undefined4 *)(iRam037106f0 + 0x3710660));
  uStack_20 = 0;
  func_0x0509473c(uVar4,uVar7,uVar3,0);
  func_0x024f83c0(uVar4,iVar9);
  uVar19 = func_0x024f83bc();
  iVar9 = (int)((ulonglong)uVar19 >> 0x20);
  iVar2 = (int)uVar19;
  bVar17 = bVar16;
  if ((bool)uVar13) {
    bVar17 = (undefined *)0xfffffffc < unaff_r9 || CARRY4((uint)(unaff_r9 + 3),(uint)bVar16);
  }
  bVar14 = false;
  bVar18 = bVar17;
  if ((bool)uVar13 && unaff_r9 + bVar16 + 3 == (undefined *)0x0) {
    bVar18 = 0x5ffffffe < uVar4 || CARRY4(uVar4 + 0xa0000001,(uint)bVar17);
    uVar4 = uVar4 + 0xa0000001 + (uint)bVar17;
    bVar14 = uVar4 == 0;
  }
  bVar15 = false;
  bVar16 = bVar18;
  if (bVar14) {
    bVar16 = 0xff1fffff < uVar3 || CARRY4(uVar3 + 0xe00000,(uint)bVar18);
    unaff_r9 = (undefined *)(uVar3 + 0xe00000 + (uint)bVar18);
    bVar15 = unaff_r9 == (undefined *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xff27ffff < uVar3 || CARRY4((uint)(&UNK_00d80000 + uVar3),(uint)bVar16);
    unaff_r9 = &UNK_00d80000 + bVar16 + uVar3;
    bVar14 = unaff_r9 == (undefined *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xff2fffff < uVar3 || CARRY4((uint)(&UNK_00d00000 + uVar3),(uint)bVar17);
    unaff_r9 = &UNK_00d00000 + bVar17 + uVar3;
    bVar15 = unaff_r9 == (undefined *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xff37ffff < uVar3 || CARRY4((uint)(&UNK_00c80000 + uVar3),(uint)bVar16);
    unaff_r9 = &UNK_00c80000 + bVar16 + uVar3;
    bVar14 = unaff_r9 == (undefined *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xff3fffff < uVar3 || CARRY4(uVar3 + 0xc00000,(uint)bVar17);
    unaff_r9 = (undefined *)(uVar3 + 0xc00000 + (uint)bVar17);
    bVar15 = unaff_r9 == (undefined *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xff47ffff < uVar3 || CARRY4((uint)(&UNK_00b80000 + uVar3),(uint)bVar16);
    unaff_r9 = &UNK_00b80000 + bVar16 + uVar3;
    bVar14 = unaff_r9 == (undefined *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xff4fffff < uVar3 || CARRY4((uint)(&UNK_00b00000 + uVar3),(uint)bVar17);
    unaff_r9 = &UNK_00b00000 + bVar17 + uVar3;
    bVar15 = unaff_r9 == (undefined *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xff57ffff < uVar3 || CARRY4((uint)(&UNK_00a80000 + uVar3),(uint)bVar16);
    unaff_r9 = &UNK_00a80000 + bVar16 + uVar3;
    bVar14 = unaff_r9 == (undefined *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xff5fffff < uVar3 || CARRY4((uint)(&UNK_00a00000 + uVar3),(uint)bVar17);
    unaff_r9 = &UNK_00a00000 + bVar17 + uVar3;
    bVar15 = unaff_r9 == (undefined *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xff67ffff < uVar3 || CARRY4((uint)(&UNK_00980000 + uVar3),(uint)bVar16);
    unaff_r9 = &UNK_00980000 + bVar16 + uVar3;
    bVar14 = unaff_r9 == (undefined *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0x3ffffff3 < uVar4 || CARRY4(uVar4 + 0xc000000c,(uint)bVar17);
    uVar4 = uVar4 + 0xc000000c + (uint)bVar17;
    bVar15 = uVar4 == 0;
  }
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = (undefined *)0xffffffdf < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x20),(uint)bVar16);
  }
  bVar14 = false;
  bVar18 = bVar17;
  if (bVar15 && unaff_r9 + bVar16 + 0x20 == (undefined *)0x0) {
    bVar18 = 0xfcefffff < uVar3 || CARRY4((uint)(&UNK_03100000 + uVar3),(uint)bVar17);
    unaff_r9 = &UNK_03100000 + bVar17 + uVar3;
    bVar14 = unaff_r9 == (undefined *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar18;
  if (bVar14) {
    bVar16 = 0xffcfffff < uVar3 || CARRY4(uVar3 + 0x300000,(uint)bVar18);
    unaff_r9 = (undefined *)(uVar3 + 0x300000 + (uint)bVar18);
    bVar15 = unaff_r9 == (undefined *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xfe1fffff < uVar3 || CARRY4(uVar3 + 0x1e00000,(uint)bVar16);
    unaff_r9 = (undefined *)(uVar3 + 0x1e00000 + (uint)bVar16);
    bVar14 = unaff_r9 == (undefined *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xf3bfffff < uVar3 || CARRY4(uVar3 + 0xc400000,(uint)bVar17);
    unaff_r9 = (undefined *)(uVar3 + 0xc400000 + (uint)bVar17);
    bVar15 = unaff_r9 == (undefined *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xfd7fffff < uVar3 || CARRY4(uVar3 + 0x2800000,(uint)bVar16);
    unaff_r9 = (undefined *)(uVar3 + 0x2800000 + (uint)bVar16);
    bVar14 = unaff_r9 == (undefined *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xceffffff < uVar3 || CARRY4(uVar3 + 0x31000000,(uint)bVar17);
    unaff_r9 = (undefined *)(uVar3 + 0x31000000 + (uint)bVar17);
    bVar15 = unaff_r9 == (undefined *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xc9ffffff < uVar3 || CARRY4(uVar3 + 0x36000000,(uint)bVar16);
    unaff_r9 = (undefined *)(uVar3 + 0x36000000 + (uint)bVar16);
    bVar14 = unaff_r9 == (undefined *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xf87fffff < uVar3 || CARRY4(uVar3 + 0x7800000,(uint)bVar17);
    unaff_r9 = (undefined *)(uVar3 + 0x7800000 + (uint)bVar17);
    bVar15 = unaff_r9 == (undefined *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xff3fffff < uVar3 || CARRY4(uVar3 + 0xc00000,(uint)bVar16);
    unaff_r9 = (undefined *)(uVar3 + 0xc00000 + (uint)bVar16);
    bVar14 = unaff_r9 == (undefined *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xf73fffff < uVar3 || CARRY4(uVar3 + 0x8c00000,(uint)bVar17);
    unaff_r9 = (undefined *)(uVar3 + 0x8c00000 + (uint)bVar17);
    bVar15 = unaff_r9 == (undefined *)0x0;
  }
  if (bVar15) {
    uVar3 = uVar4 + 0x3c000 + (uint)bVar16;
  }
  uStack_24 = 0x371068c;
  puVar6 = *(undefined4 **)(iVar9 + 0x1c);
  uStack_30 = uVar3;
  uStack_2c = uVar11;
  if (puVar6 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam03710b30 + 0x371071c));
    func_0x024f83cc(*(undefined4 *)(iRam03710b34 + 0x3710728));
    func_0x024f83cc(*(undefined4 *)(iRam03710b38 + 0x3710734));
    func_0x024f83cc(*(undefined4 *)(iRam03710b3c + 0x3710740));
    func_0x024f83cc(*(undefined4 *)(iRam03710b40 + 0x371074c));
    func_0x024f83cc(*(undefined4 *)(iRam03710b44 + 0x3710758));
    func_0x024f83cc(*(undefined4 *)(iRam03710b48 + 0x3710764));
    func_0x024f83cc(*(undefined4 *)(iRam03710b4c + 0x3710770));
    func_0x024f83cc(*(undefined4 *)(iRam03710b50 + 0x371077c));
    func_0x024f83cc(*(undefined4 *)(iRam03710b54 + 0x3710788));
    func_0x024f83cc(*(undefined4 *)(iRam03710b58 + 0x3710794));
    func_0x024f83cc(*(undefined4 *)(iRam03710b5c + 0x37107a0));
    puVar6 = *(undefined4 **)(iVar9 + 0x1c);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar9);
      puVar6 = *(undefined4 **)(iVar9 + 0x1c);
    }
  }
  uVar11 = *puVar6;
  iVar12 = *(int *)(iVar2 + 0x3c);
  if (*(int *)(**(int **)(iRam03710b60 + 0x37107c4) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar11 = func_0x05171434(uVar11,0);
  if (iVar12 == 0) {
    func_0x024f83d4();
  }
  uVar3 = func_0x0475399c(iVar12,uVar11,**(undefined4 **)(iRam03710b64 + 0x3710808));
  uVar4 = func_0x02965180(uVar3,0);
  if (uVar4 < 0xa5621015) {
    if (uVar4 < 0x775ef500) {
      if (uVar4 == 0x392d1efa) {
        iVar12 = func_0x04f57738(uVar3,**(undefined4 **)(iRam03710b8c + 0x3710994),0);
        uVar13 = iVar12 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar9 = *(int *)(iVar9 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x14);
LAB_03710a88:
          iVar2 = *(int *)(iVar9 + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x024f83fc(iVar2);
          }
          piVar8 = (int *)0x0;
          if (piVar1 != (int *)0x0) {
            if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
               (piVar8 = piVar1,
               *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
            {
              piVar8 = (int *)0x0;
            }
          }
          return piVar8;
        }
      }
      else {
        bVar16 = 0x775ef4fe < uVar4;
        uVar13 = false;
        if (uVar4 == 0x775ef4ff) {
          iVar12 = func_0x04f57738(uVar3,**(undefined4 **)(iRam03710b68 + 0x3710864),0);
          uVar13 = iVar12 == 0;
          bVar16 = true;
          if (!(bool)uVar13) {
            iVar9 = *(int *)(iVar9 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x28);
            goto LAB_03710a88;
          }
        }
      }
    }
    else if (uVar4 == 0x8950c121) {
      iVar12 = func_0x04f57738(uVar3,**(undefined4 **)(iRam03710b78 + 0x37109ec),0);
      uVar13 = iVar12 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar9 = *(int *)(iVar9 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_03710a88;
      }
    }
    else if (uVar4 == 0xa4ebb130) {
      iVar12 = func_0x04f57738(uVar3,**(undefined4 **)(iRam03710b88 + 0x3710a18),0);
      uVar13 = iVar12 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar9 = *(int *)(iVar9 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x38);
        goto LAB_03710a88;
      }
    }
    else {
      bVar16 = 0xa5621013 < uVar4;
      uVar13 = false;
      if (uVar4 == 0xa5621014) {
        iVar12 = func_0x04f57738(uVar3,**(undefined4 **)(iRam03710b6c + 0x371090c),0);
        uVar13 = iVar12 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar9 = *(int *)(iVar9 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x30);
          goto LAB_03710a88;
        }
      }
    }
  }
  else if (uVar4 < 0xb9cd4293) {
    if (uVar4 == 0xb881e6cb) {
      iVar12 = func_0x04f57738(uVar3,**(undefined4 **)(iRam03710b84 + 0x37109c0),0);
      uVar13 = iVar12 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar9 = *(int *)(iVar9 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x34);
        goto LAB_03710a88;
      }
    }
    else {
      bVar16 = 0xb9cd4291 < uVar4;
      uVar13 = false;
      if (uVar4 == 0xb9cd4292) {
        iVar12 = func_0x04f57738(uVar3,**(undefined4 **)(iRam03710b70 + 0x37108b8),0);
        uVar13 = iVar12 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar9 = *(int *)(iVar9 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_03710a88;
        }
      }
    }
  }
  else if (uVar4 == 0xbafc2442) {
    iVar12 = func_0x04f57738(uVar3,**(undefined4 **)(iRam03710b80 + 0x3710a44),0);
    uVar13 = iVar12 == 0;
    bVar16 = true;
    if (!(bool)uVar13) {
      iVar9 = *(int *)(iVar9 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x2c);
      goto LAB_03710a88;
    }
  }
  else if (uVar4 == 0xc16fefa5) {
    iVar12 = func_0x04f57738(uVar3,**(undefined4 **)(iRam03710b7c + 0x3710a70),0);
    uVar13 = iVar12 == 0;
    bVar16 = true;
    if (!(bool)uVar13) {
      iVar9 = *(int *)(iVar9 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x24);
      goto LAB_03710a88;
    }
  }
  else {
    bVar16 = 0xec3691f0 < uVar4;
    uVar13 = false;
    if (uVar4 == 0xec3691f1) {
      iVar12 = func_0x04f57738(uVar3,**(undefined4 **)(iRam03710b74 + 0x3710968),0);
      uVar13 = iVar12 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar9 = *(int *)(iVar9 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x20);
        goto LAB_03710a88;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam03710b90 + 0x3710af0));
  uVar4 = func_0x024f83c8();
  uVar11 = func_0x024f83b8(*(undefined4 *)(iRam03710b94 + 0x3710b04));
  func_0x0509473c(uVar4,uVar11,uVar3,0);
  func_0x024f83c0(uVar4,iVar9);
  uVar19 = func_0x024f83bc();
  iVar2 = (int)((ulonglong)uVar19 >> 0x20);
  bVar17 = bVar16;
  if ((bool)uVar13) {
    bVar17 = (undefined *)0xffff97ff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x6800),(uint)bVar16);
  }
  bVar14 = (bool)uVar13 && unaff_r9 + bVar16 + 0x6800 == (undefined *)0x0;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xfffff3bf < uVar4 || CARRY4(uVar4 + 0xc40,(uint)bVar17);
  }
  bVar15 = false;
  bVar18 = bVar16;
  if (bVar14 && uVar4 + 0xc40 + (uint)bVar17 == 0) {
    bVar18 = 0xc3ffffff < uVar3 || CARRY4(uVar3 + 0x3c000000,(uint)bVar16);
    unaff_r9 = (undefined *)(uVar3 + 0x3c000000 + (uint)bVar16);
    bVar15 = unaff_r9 == (undefined *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar18;
  if (bVar15) {
    bVar16 = 0xcbffffff < uVar3 || CARRY4(uVar3 + 0x34000000,(uint)bVar18);
    unaff_r9 = (undefined *)(uVar3 + 0x34000000 + (uint)bVar18);
    bVar14 = unaff_r9 == (undefined *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xd3ffffff < uVar3 || CARRY4(uVar3 + 0x2c000000,(uint)bVar16);
    unaff_r9 = (undefined *)(uVar3 + 0x2c000000 + (uint)bVar16);
    bVar15 = unaff_r9 == (undefined *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xdbffffff < uVar3 || CARRY4(uVar3 + 0x24000000,(uint)bVar17);
    unaff_r9 = (undefined *)(uVar3 + 0x24000000 + (uint)bVar17);
    bVar14 = unaff_r9 == (undefined *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xe3ffffff < uVar3 || CARRY4(uVar3 + 0x1c000000,(uint)bVar16);
    unaff_r9 = (undefined *)(uVar3 + 0x1c000000 + (uint)bVar16);
    bVar15 = unaff_r9 == (undefined *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xebffffff < uVar3 || CARRY4(uVar3 + 0x14000000,(uint)bVar17);
    unaff_r9 = (undefined *)(uVar3 + 0x14000000 + (uint)bVar17);
    bVar14 = unaff_r9 == (undefined *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xf3ffffff < uVar3 || CARRY4(uVar3 + 0xc000000,(uint)bVar16);
    unaff_r9 = (undefined *)(uVar3 + 0xc000000 + (uint)bVar16);
    bVar15 = unaff_r9 == (undefined *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xfbffffff < uVar3 || CARRY4(uVar3 + 0x4000000,(uint)bVar17);
    unaff_r9 = (undefined *)(uVar3 + 0x4000000 + (uint)bVar17);
    bVar14 = unaff_r9 == (undefined *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xffffffc < uVar3 || CARRY4(uVar3 + 0xf0000003,(uint)bVar16);
    unaff_r9 = (undefined *)(uVar3 + 0xf0000003 + (uint)bVar16);
    bVar15 = unaff_r9 == (undefined *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0x2ffffffc < uVar3 || CARRY4(uVar3 + 0xd0000003,(uint)bVar17);
    unaff_r9 = (undefined *)(uVar3 + 0xd0000003 + (uint)bVar17);
    bVar14 = unaff_r9 == (undefined *)0x0;
  }
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xfffffd7f < uVar4 || CARRY4(uVar4 + 0x280,(uint)bVar16);
  }
  bVar14 = bVar14 && uVar4 + 0x280 + (uint)bVar16 == 0;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = (undefined *)0xfffe0fff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x1f000),(uint)bVar17);
  }
  bVar14 = bVar14 && unaff_r9 + bVar17 + 0x1f000 == (undefined *)0x0;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0x7fffffff < uVar3 || CARRY4(uVar3 + 0x80000000,(uint)bVar16);
  }
  bVar14 = bVar14 && uVar3 + 0x80000000 + (uint)bVar16 == 0;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0x7ffffff9 < uVar3 || CARRY4(uVar3 + 0x80000006,(uint)bVar17);
  }
  bVar14 = bVar14 && uVar3 + 0x80000006 + (uint)bVar17 == 0;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xbffffff2 < uVar3 || CARRY4(uVar3 + 0x4000000d,(uint)bVar16);
  }
  bVar14 = bVar14 && uVar3 + 0x4000000d + (uint)bVar16 == 0;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xfffffffd < uVar3 || CARRY4(uVar3 + 2,(uint)bVar17);
  }
  bVar14 = bVar14 && uVar3 + 2 + (uint)bVar17 == 0;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xffffffde < uVar3 || CARRY4(uVar3 + 0x21,(uint)bVar16);
  }
  bVar14 = bVar14 && uVar3 + 0x21 + (uint)bVar16 == 0;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xfffffff7 < uVar3 || CARRY4(uVar3 + 8,(uint)bVar17);
  }
  bVar14 = bVar14 && uVar3 + 8 + (uint)bVar17 == 0;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xfffffff2 < uVar3 || CARRY4(uVar3 + 0xd,(uint)bVar16);
  }
  bVar14 = bVar14 && uVar3 + 0xd + (uint)bVar16 == 0;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xffffffca < uVar3 || CARRY4(uVar3 + 0x35,(uint)bVar17);
  }
  bVar14 = bVar14 && uVar3 + 0x35 + (uint)bVar17 == 0;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xffffffe5 < uVar3 || CARRY4(uVar3 + 0x1a,(uint)bVar16);
  }
  bVar14 = bVar14 && uVar3 + 0x1a + (uint)bVar16 == 0;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xffffffc5 < uVar3 || CARRY4(uVar3 + 0x3a,(uint)bVar17);
  }
  bVar15 = false;
  bVar18 = bVar16;
  if (bVar14 && uVar3 + 0x3a + (uint)bVar17 == 0) {
    bVar18 = 0xd9ffffff < uVar4 || CARRY4(uVar4 + 0x26000000,(uint)bVar16);
    uVar3 = uVar4 + 0x26000000 + (uint)bVar16;
    bVar15 = uVar3 == 0;
  }
  iVar9 = extraout_r2;
  if (bVar15) {
    iVar9 = uVar3 + 0xfc00000 + (uint)bVar18;
  }
  if (*(int *)(iVar9 + 0x1c) == 0) {
    func_0x024f83cc(*(undefined4 *)(_UNK_03710e60 + 0x3710bc0));
    func_0x024f83cc(*(undefined4 *)(_UNK_03710e64 + 0x3710bcc));
    func_0x024f83cc(*(undefined4 *)(_UNK_03710e68 + 0x3710bd8));
    func_0x024f83cc(*(undefined4 *)(_UNK_03710e6c + 0x3710be4));
    func_0x024f83cc(*(undefined4 *)(_UNK_03710e70 + 0x3710bf0));
    if (*(int *)(iVar9 + 0x1c) == 0) {
      func_0x024f83f8(iVar9);
    }
  }
  if (*(int *)(**(int **)(_UNK_03710e74 + 0x3710c10) + 0x74) == 0) {
    func_0x024f83d8();
  }
  piVar1 = (int *)0x0;
  iVar12 = func_0x024ef144(iVar2,0,0);
  if (iVar12 != 0) {
    if (iVar2 == 0) {
      func_0x024f83d4();
    }
    piVar1 = (int *)func_0x03639de0(iVar2,**(undefined4 **)(iVar9 + 0x1c));
    if (piVar1 == (int *)0x0) {
      piVar8 = (int *)func_0x024f8400(**(undefined4 **)(_UNK_03710e78 + 0x3710c74),3);
      if ((int)uVar19 == 0) {
        func_0x024f83d4();
      }
      piVar1 = (int *)func_0x051b16a4((int)uVar19,0);
      if (piVar1 == (int *)0x0) {
        func_0x024f83d4();
      }
      iVar12 = (**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
      if (piVar8 == (int *)0x0) {
        func_0x024f83d4();
      }
      if ((iVar12 != 0) &&
         (iVar5 = func_0x024f83e4(iVar12,*(undefined4 *)(*piVar8 + 0x20)), iVar5 == 0)) {
        uVar11 = func_0x024f83e8();
        func_0x024f83c0(uVar11,0);
      }
      if (piVar8[3] == 0) {
        func_0x024f83ec();
      }
      piVar8[4] = iVar12;
      func_0x024f83f0(piVar8 + 4,iVar12);
      if (iVar2 == 0) {
        func_0x024f83d4();
      }
      iVar2 = func_0x024ef0f0(iVar2,0);
      if ((iVar2 != 0) &&
         (iVar12 = func_0x024f83e4(iVar2,*(undefined4 *)(*piVar8 + 0x20)), iVar12 == 0)) {
        uVar11 = func_0x024f83e8();
        func_0x024f83c0(uVar11,0);
      }
      if ((uint)piVar8[3] < 2) {
        func_0x024f83ec();
      }
      piVar8[5] = iVar2;
      func_0x024f83f0(piVar8 + 5,iVar2);
      uVar11 = *(undefined4 *)(*(int *)(iVar9 + 0x1c) + 8);
      if (*(int *)(**(int **)(_UNK_03710e7c + 0x3710d8c) + 0x74) == 0) {
        func_0x024f83d8();
      }
      piVar1 = (int *)func_0x05171434(uVar11,0);
      if (piVar1 == (int *)0x0) {
        func_0x024f83d4();
      }
      iVar2 = (**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
      if ((iVar2 != 0) &&
         (iVar9 = func_0x024f83e4(iVar2,*(undefined4 *)(*piVar8 + 0x20)), iVar9 == 0)) {
        uVar11 = func_0x024f83e8();
        func_0x024f83c0(uVar11,0);
      }
      if ((uint)piVar8[3] < 3) {
        func_0x024f83ec();
      }
      piVar8[6] = iVar2;
      func_0x024f83f0(piVar8 + 6,iVar2);
      if (*(int *)(**(int **)(_UNK_03710e80 + 0x3710e2c) + 0x74) == 0) {
        func_0x024f83d8();
      }
      piVar1 = (int *)0x0;
      func_0x026795f8(**(undefined4 **)(_UNK_03710e84 + 0x3710e54),piVar8,0);
    }
  }
  return piVar1;
}

