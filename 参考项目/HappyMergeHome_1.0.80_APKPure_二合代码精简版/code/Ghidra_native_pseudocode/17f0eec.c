
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_01800eec(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  undefined *unaff_r11;
  uint extraout_r12;
  uint extraout_r12_00;
  undefined1 uVar13;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 uVar19;
  undefined *puStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar9 = (char *)(_UNK_01800fcc + 0x1800f00);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01800fd0 + 0x1800f14));
    func_0x01438628(*(undefined4 *)(_UNK_01800fd4 + 0x1800f20));
    func_0x01438628(*(undefined4 *)(_UNK_01800fd8 + 0x1800f2c));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x13bf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x13bf,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar9 = (char *)(_UNK_028a2200 + 0x28a2120);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a2204 + 0x28a2134),param_1,0);
      *pcVar9 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    puStack_28 = *(undefined **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    puStack_30 = (undefined *)0x0;
    uStack_20 = 0;
    func_0x024f56c0(&puStack_48,0);
    puStack_30 = puStack_48;
    uStack_2c = uStack_44;
    puStack_28 = (undefined *)uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = iStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&puStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&puStack_30,param_1,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    func_0x024f56d0(iVar10,uVar11,&puStack_30,uVar7,0,0);
    piVar2 = (int *)func_0x035daef8(&puStack_30,0,**(undefined4 **)(_UNK_028a2208 + 0x28a21f0));
    return piVar2;
  }
  if (*(int *)(**(int **)(_UNK_01800fdc + 0x1800f84) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01800fe0 + 0x1800fa0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar10 = **(int **)(_UNK_01800fe4 + 0x1800fc0);
  puVar6 = *(undefined4 **)(iVar10 + 0x1c);
  if (puVar6 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam036da33c + 0x36d9e48));
    func_0x024f83cc(*(undefined4 *)(iRam036da340 + 0x36d9e54));
    func_0x024f83cc(*(undefined4 *)(iRam036da344 + 0x36d9e60));
    func_0x024f83cc(*(undefined4 *)(iRam036da348 + 0x36d9e6c));
    func_0x024f83cc(*(undefined4 *)(iRam036da34c + 0x36d9e78));
    func_0x024f83cc(*(undefined4 *)(iRam036da350 + 0x36d9e84));
    func_0x024f83cc(*(undefined4 *)(iRam036da354 + 0x36d9e90));
    func_0x024f83cc(*(undefined4 *)(iRam036da358 + 0x36d9e9c));
    func_0x024f83cc(*(undefined4 *)(iRam036da35c + 0x36d9ea8));
    func_0x024f83cc(*(undefined4 *)(iRam036da360 + 0x36d9eb4));
    func_0x024f83cc(*(undefined4 *)(iRam036da364 + 0x36d9ec0));
    func_0x024f83cc(*(undefined4 *)(iRam036da368 + 0x36d9ecc));
    func_0x024f83cc(*(undefined4 *)(iRam036da36c + 0x36d9ed8));
    func_0x024f83cc(*(undefined4 *)(iRam036da370 + 0x36d9ee4));
    func_0x024f83cc(*(undefined4 *)(iRam036da374 + 0x36d9ef0));
    puVar6 = *(undefined4 **)(iVar10 + 0x1c);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar10);
      puVar6 = *(undefined4 **)(iVar10 + 0x1c);
    }
  }
  uVar11 = *puVar6;
  iVar12 = *(int *)(iVar1 + 0x48);
  if (*(int *)(**(int **)(iRam036da378 + 0x36d9f14) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar11 = func_0x05171434(uVar11,0);
  if (iVar12 == 0) {
    func_0x024f83d4();
  }
  puVar3 = (undefined *)func_0x0475399c(iVar12,uVar11,**(undefined4 **)(iRam036da37c + 0x36d9f58));
  puVar4 = (undefined *)func_0x02965180(puVar3,0);
  if (puVar4 < (undefined *)0x87a4488d) {
    if (puVar4 < (undefined *)0x4b393819) {
      if (puVar4 == &UNK_048acfb8) {
        iVar12 = func_0x04f57738(puVar3,**(undefined4 **)(iRam036da3a4 + 0x36da148),0);
        uVar13 = iVar12 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar10 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x34);
LAB_036da294:
          iVar1 = *(int *)(iVar10 + 4);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x024f83fc(iVar1);
          }
          piVar8 = (int *)0x0;
          if (piVar2 != (int *)0x0) {
            if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*piVar2 + 0xb8)) &&
               (piVar8 = piVar2,
               *(int *)(*(int *)(*piVar2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1))
            {
              piVar8 = (int *)0x0;
            }
          }
          return piVar8;
        }
      }
      else if (puVar4 == (undefined *)0x44648d72) {
        iVar12 = func_0x04f57738(puVar3,**(undefined4 **)(iRam036da3a0 + 0x36da174),0);
        uVar13 = iVar12 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar10 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x30);
          goto LAB_036da294;
        }
      }
      else {
        bVar16 = (undefined *)0x4b393817 < puVar4;
        uVar13 = false;
        if (puVar4 == (undefined *)0x4b393818) {
          iVar12 = func_0x04f57738(puVar3,**(undefined4 **)(iRam036da380 + 0x36d9fc4),0);
          uVar13 = iVar12 == 0;
          bVar16 = true;
          if (!(bool)uVar13) {
            iVar10 = *(int *)(iVar10 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x14);
            goto LAB_036da294;
          }
        }
      }
    }
    else if (puVar4 == (undefined *)0x87a4488c) {
      iVar12 = func_0x04f57738(puVar3,**(undefined4 **)(iRam036da394 + 0x36da1f8),0);
      uVar13 = iVar12 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar10 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036da294;
      }
    }
    else if (puVar4 == (undefined *)0x5bc15335) {
      iVar12 = func_0x04f57738(puVar3,**(undefined4 **)(iRam036da3ac + 0x36da224),0);
      uVar13 = iVar12 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar10 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x44);
        goto LAB_036da294;
      }
    }
    else {
      bVar16 = (undefined *)0x5d6adef6 < puVar4;
      uVar13 = false;
      if (puVar4 == (undefined *)0x5d6adef7) {
        iVar12 = func_0x04f57738(puVar3,**(undefined4 **)(iRam036da384 + 0x36da07c),0);
        uVar13 = iVar12 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar10 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036da294;
        }
      }
    }
  }
  else if (puVar4 < (undefined *)0xaf0e9ec8) {
    if (puVar4 == (undefined *)0x8e74336c) {
      iVar12 = func_0x04f57738(puVar3,**(undefined4 **)(iRam036da39c + 0x36da1a0),0);
      uVar13 = iVar12 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar10 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036da294;
      }
    }
    else if (puVar4 == (undefined *)0x9dbb78b9) {
      iVar12 = func_0x04f57738(puVar3,**(undefined4 **)(iRam036da3a8 + 0x36da1cc),0);
      uVar13 = iVar12 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar10 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x3c);
        goto LAB_036da294;
      }
    }
    else {
      bVar16 = (undefined *)0xaf0e9ec6 < puVar4;
      uVar13 = false;
      if (puVar4 == (undefined *)0xaf0e9ec7) {
        iVar12 = func_0x04f57738(puVar3,**(undefined4 **)(iRam036da388 + 0x36da028),0);
        uVar13 = iVar12 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar10 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x40);
          goto LAB_036da294;
        }
      }
    }
  }
  else if (puVar4 < (undefined *)0xd3917654) {
    if (puVar4 == (undefined *)0xcd1701e0) {
      iVar12 = func_0x04f57738(puVar3,**(undefined4 **)(iRam036da3b0 + 0x36da250),0);
      uVar13 = iVar12 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar10 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036da294;
      }
    }
    else {
      bVar16 = (undefined *)0xd3917652 < puVar4;
      uVar13 = false;
      if (puVar4 == (undefined *)0xd3917653) {
        iVar12 = func_0x04f57738(puVar3,**(undefined4 **)(iRam036da38c + 0x36da0d0),0);
        uVar13 = iVar12 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar10 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
          goto LAB_036da294;
        }
      }
    }
  }
  else if (puVar4 == (undefined *)0xdf1ae323) {
    iVar12 = func_0x04f57738(puVar3,**(undefined4 **)(iRam036da398 + 0x36da27c),0);
    uVar13 = iVar12 == 0;
    bVar16 = true;
    if (!(bool)uVar13) {
      iVar10 = *(int *)(iVar10 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x20);
      goto LAB_036da294;
    }
  }
  else {
    bVar16 = (undefined *)0xed8e82d0 < puVar4;
    uVar13 = false;
    if (puVar4 == (undefined *)0xed8e82d1) {
      iVar12 = func_0x04f57738(puVar3,**(undefined4 **)(iRam036da390 + 0x36da11c),0);
      uVar13 = iVar12 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar10 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x38);
        goto LAB_036da294;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036da3b4 + 0x36da2fc));
  uVar7 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036da3b8 + 0x36da310));
  uStack_20 = 0;
  func_0x0509473c(uVar7,uVar5,puVar3,0);
  func_0x024f83c0(uVar7,iVar10);
  uVar19 = func_0x024f83bc();
  iVar12 = (int)((ulonglong)uVar19 >> 0x20);
  iVar1 = (int)uVar19;
  bVar14 = false;
  bVar17 = bVar16;
  if ((bool)uVar13) {
    bVar17 = 0xf0ffffff < extraout_r12 || CARRY4(extraout_r12 + 0xf000000,(uint)bVar16);
    unaff_r10 = extraout_r12 + 0xf000000 + (uint)bVar16;
    bVar14 = unaff_r10 == 0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xfd9fffff < unaff_r8 || CARRY4((uint)(&UNK_02600000 + unaff_r8),(uint)bVar17);
    unaff_r11 = &UNK_02600000 + bVar17 + unaff_r8;
    bVar15 = unaff_r11 == (undefined *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0x5ffffffd < unaff_r10 || CARRY4(unaff_r10 + 0xa0000002,(uint)bVar16);
    iVar12 = unaff_r10 + 0xa0000002 + (uint)bVar16;
    bVar14 = iVar12 == 0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0x7ffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x80000002,(uint)bVar17);
    iVar12 = unaff_r10 + 0x80000002 + (uint)bVar17;
    bVar15 = iVar12 == 0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0x9ffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x60000002,(uint)bVar16);
    iVar12 = unaff_r10 + 0x60000002 + (uint)bVar16;
    bVar14 = iVar12 == 0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xbffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x40000002,(uint)bVar17);
    iVar12 = unaff_r10 + 0x40000002 + (uint)bVar17;
    bVar15 = iVar12 == 0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xdffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x20000002,(uint)bVar16);
    iVar12 = unaff_r10 + 0x20000002 + (uint)bVar16;
    bVar14 = iVar12 == 0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xfffffffd < unaff_r10 || CARRY4(unaff_r10 + 2,(uint)bVar17);
    iVar12 = unaff_r10 + 2 + (uint)bVar17;
    bVar15 = iVar12 == 0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0x1ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0xe0000001,(uint)bVar16);
    iVar12 = unaff_r10 + 0xe0000001 + (uint)bVar16;
    bVar14 = iVar12 == 0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0x3ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0xc0000001,(uint)bVar17);
    iVar12 = unaff_r10 + 0xc0000001 + (uint)bVar17;
    bVar15 = iVar12 == 0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0x5ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0xa0000001,(uint)bVar16);
    iVar12 = unaff_r10 + 0xa0000001 + (uint)bVar16;
    bVar14 = iVar12 == 0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0x7ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x80000001,(uint)bVar17);
    iVar12 = unaff_r10 + 0x80000001 + (uint)bVar17;
    bVar15 = iVar12 == 0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0x9ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x60000001,(uint)bVar16);
    iVar12 = unaff_r10 + 0x60000001 + (uint)bVar16;
    bVar14 = iVar12 == 0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xbffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x40000001,(uint)bVar17);
    iVar12 = unaff_r10 + 0x40000001 + (uint)bVar17;
    bVar15 = iVar12 == 0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xdffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x20000001,(uint)bVar16);
    iVar12 = unaff_r10 + 0x20000001 + (uint)bVar16;
    bVar14 = iVar12 == 0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xf27fffff < unaff_r8 || CARRY4(unaff_r8 + 0xd800000,(uint)bVar17);
    unaff_r11 = (undefined *)(unaff_r8 + 0xd800000 + (uint)bVar17);
    bVar15 = unaff_r11 == (undefined *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xd3ffffff < extraout_r12 || CARRY4(extraout_r12 + 0x2c000000,(uint)bVar16);
    unaff_r10 = extraout_r12 + 0x2c000000 + (uint)bVar16;
    bVar14 = unaff_r10 == 0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0x3ffffffa < unaff_r10 || CARRY4(unaff_r10 + 0xc0000005,(uint)bVar17);
    iVar12 = unaff_r10 + 0xc0000005 + (uint)bVar17;
    bVar15 = iVar12 == 0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xffffffd8 < unaff_r10 || CARRY4(unaff_r10 + 0x27,(uint)bVar16);
    iVar12 = unaff_r10 + 0x27 + (uint)bVar16;
    bVar14 = iVar12 == 0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xffffffc4 < unaff_r10 || CARRY4(unaff_r10 + 0x3b,(uint)bVar17);
    iVar12 = unaff_r10 + 0x3b + (uint)bVar17;
    bVar15 = iVar12 == 0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xffffffe5 < unaff_r10 || CARRY4(unaff_r10 + 0x1a,(uint)bVar16);
    iVar12 = unaff_r10 + 0x1a + (uint)bVar16;
    bVar14 = iVar12 == 0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xfffffff9 < unaff_r10 || CARRY4(unaff_r10 + 6,(uint)bVar17);
    iVar12 = unaff_r10 + 6 + (uint)bVar17;
    bVar15 = iVar12 == 0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xffffffcf < unaff_r10 || CARRY4(unaff_r10 + 0x30,(uint)bVar16);
    iVar12 = unaff_r10 + 0x30 + (uint)bVar16;
    bVar14 = iVar12 == 0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xfffffdcf < unaff_r10 || CARRY4(unaff_r10 + 0x230,(uint)bVar17);
    iVar1 = unaff_r10 + 0x230 + (uint)bVar17;
    bVar15 = iVar1 == 0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xffffff8f < unaff_r10 || CARRY4(unaff_r10 + 0x70,(uint)bVar16);
    iVar12 = unaff_r10 + 0x70 + (uint)bVar16;
    bVar14 = iVar12 == 0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xffffff43 < unaff_r10 || CARRY4(unaff_r10 + 0xbc,(uint)bVar17);
    iVar12 = unaff_r10 + 0xbc + (uint)bVar17;
    bVar15 = iVar12 == 0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xffffff23 < unaff_r10 || CARRY4(unaff_r10 + 0xdc,(uint)bVar16);
    iVar12 = unaff_r10 + 0xdc + (uint)bVar16;
    bVar14 = iVar12 == 0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xffffff9f < unaff_r10 || CARRY4(unaff_r10 + 0x60,(uint)bVar17);
    iVar12 = unaff_r10 + 0x60 + (uint)bVar17;
    bVar15 = iVar12 == 0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xfffffc1f < unaff_r10 || CARRY4(unaff_r10 + 0x3e0,(uint)bVar16);
    iVar1 = unaff_r10 + 0x3e0 + (uint)bVar16;
    bVar14 = iVar1 == 0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xfffffd0f < unaff_r10 || CARRY4(unaff_r10 + 0x2f0,(uint)bVar17);
    iVar1 = unaff_r10 + 0x2f0 + (uint)bVar17;
    bVar15 = iVar1 == 0;
  }
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xffffdcff < unaff_r8 || CARRY4(unaff_r8 + 0x2300,(uint)bVar16);
  }
  if (bVar15 && unaff_r8 + 0x2300 + (uint)bVar16 == 0) {
    unaff_r8 = unaff_r9 + 0xf00 + (uint)bVar17;
  }
  uStack_24 = 0x36da33c;
  puVar6 = *(undefined4 **)(iVar12 + 0x1c);
  iStack_38 = iVar10;
  uStack_34 = uVar7;
  puStack_30 = puVar3;
  uStack_2c = uVar11;
  puStack_28 = unaff_r11;
  if (puVar6 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam036da8d8 + 0x36da3e4));
    func_0x024f83cc(*(undefined4 *)(iRam036da8dc + 0x36da3f0));
    func_0x024f83cc(*(undefined4 *)(iRam036da8e0 + 0x36da3fc));
    func_0x024f83cc(*(undefined4 *)(iRam036da8e4 + 0x36da408));
    func_0x024f83cc(*(undefined4 *)(iRam036da8e8 + 0x36da414));
    func_0x024f83cc(*(undefined4 *)(iRam036da8ec + 0x36da420));
    func_0x024f83cc(*(undefined4 *)(iRam036da8f0 + 0x36da42c));
    func_0x024f83cc(*(undefined4 *)(iRam036da8f4 + 0x36da438));
    func_0x024f83cc(*(undefined4 *)(iRam036da8f8 + 0x36da444));
    func_0x024f83cc(*(undefined4 *)(iRam036da8fc + 0x36da450));
    func_0x024f83cc(*(undefined4 *)(iRam036da900 + 0x36da45c));
    func_0x024f83cc(*(undefined4 *)(iRam036da904 + 0x36da468));
    func_0x024f83cc(*(undefined4 *)(iRam036da908 + 0x36da474));
    func_0x024f83cc(*(undefined4 *)(iRam036da90c + 0x36da480));
    func_0x024f83cc(*(undefined4 *)(iRam036da910 + 0x36da48c));
    puVar6 = *(undefined4 **)(iVar12 + 0x1c);
    if (puVar6 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar12);
      puVar6 = *(undefined4 **)(iVar12 + 0x1c);
    }
  }
  uVar11 = *puVar6;
  iVar10 = *(int *)(iVar1 + 0x48);
  if (*(int *)(**(int **)(iRam036da914 + 0x36da4b0) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar11 = func_0x05171434(uVar11,0);
  if (iVar10 == 0) {
    func_0x024f83d4();
  }
  uVar11 = func_0x0475399c(iVar10,uVar11,**(undefined4 **)(iRam036da918 + 0x36da4f4));
  puVar3 = (undefined *)func_0x02965180(uVar11,0);
  if (puVar3 < (undefined *)0x87a4488d) {
    if (puVar3 < (undefined *)0x4b393819) {
      if (puVar3 == &UNK_048acfb8) {
        iVar10 = func_0x04f57738(uVar11,**(undefined4 **)(iRam036da940 + 0x36da6e4),0);
        uVar13 = iVar10 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x34);
LAB_036da830:
          iVar1 = *(int *)(iVar10 + 4);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x024f83fc(iVar1);
          }
          piVar8 = (int *)0x0;
          if (piVar2 != (int *)0x0) {
            if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*piVar2 + 0xb8)) &&
               (piVar8 = piVar2,
               *(int *)(*(int *)(*piVar2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1))
            {
              piVar8 = (int *)0x0;
            }
          }
          return piVar8;
        }
      }
      else if (puVar3 == (undefined *)0x44648d72) {
        iVar10 = func_0x04f57738(uVar11,**(undefined4 **)(iRam036da93c + 0x36da710),0);
        uVar13 = iVar10 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x30);
          goto LAB_036da830;
        }
      }
      else {
        bVar16 = (undefined *)0x4b393817 < puVar3;
        uVar13 = false;
        if (puVar3 == (undefined *)0x4b393818) {
          iVar10 = func_0x04f57738(uVar11,**(undefined4 **)(iRam036da91c + 0x36da560),0);
          uVar13 = iVar10 == 0;
          bVar16 = true;
          if (!(bool)uVar13) {
            iVar10 = *(int *)(iVar12 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x14);
            goto LAB_036da830;
          }
        }
      }
    }
    else if (puVar3 == (undefined *)0x87a4488c) {
      iVar10 = func_0x04f57738(uVar11,**(undefined4 **)(iRam036da930 + 0x36da794),0);
      uVar13 = iVar10 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036da830;
      }
    }
    else if (puVar3 == (undefined *)0x5bc15335) {
      iVar10 = func_0x04f57738(uVar11,**(undefined4 **)(iRam036da948 + 0x36da7c0),0);
      uVar13 = iVar10 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x44);
        goto LAB_036da830;
      }
    }
    else {
      bVar16 = (undefined *)0x5d6adef6 < puVar3;
      uVar13 = false;
      if (puVar3 == (undefined *)0x5d6adef7) {
        iVar10 = func_0x04f57738(uVar11,**(undefined4 **)(iRam036da920 + 0x36da618),0);
        uVar13 = iVar10 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036da830;
        }
      }
    }
  }
  else if (puVar3 < (undefined *)0xaf0e9ec8) {
    if (puVar3 == (undefined *)0x8e74336c) {
      iVar10 = func_0x04f57738(uVar11,**(undefined4 **)(iRam036da938 + 0x36da73c),0);
      uVar13 = iVar10 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036da830;
      }
    }
    else if (puVar3 == (undefined *)0x9dbb78b9) {
      iVar10 = func_0x04f57738(uVar11,**(undefined4 **)(iRam036da944 + 0x36da768),0);
      uVar13 = iVar10 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x3c);
        goto LAB_036da830;
      }
    }
    else {
      bVar16 = (undefined *)0xaf0e9ec6 < puVar3;
      uVar13 = false;
      if (puVar3 == (undefined *)0xaf0e9ec7) {
        iVar10 = func_0x04f57738(uVar11,**(undefined4 **)(iRam036da924 + 0x36da5c4),0);
        uVar13 = iVar10 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x40);
          goto LAB_036da830;
        }
      }
    }
  }
  else if (puVar3 < (undefined *)0xd3917654) {
    if (puVar3 == (undefined *)0xcd1701e0) {
      iVar10 = func_0x04f57738(uVar11,**(undefined4 **)(iRam036da94c + 0x36da7ec),0);
      uVar13 = iVar10 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036da830;
      }
    }
    else {
      bVar16 = (undefined *)0xd3917652 < puVar3;
      uVar13 = false;
      if (puVar3 == (undefined *)0xd3917653) {
        iVar10 = func_0x04f57738(uVar11,**(undefined4 **)(iRam036da928 + 0x36da66c),0);
        uVar13 = iVar10 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
          goto LAB_036da830;
        }
      }
    }
  }
  else if (puVar3 == (undefined *)0xdf1ae323) {
    iVar10 = func_0x04f57738(uVar11,**(undefined4 **)(iRam036da934 + 0x36da818),0);
    uVar13 = iVar10 == 0;
    bVar16 = true;
    if (!(bool)uVar13) {
      iVar10 = *(int *)(iVar12 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x20);
      goto LAB_036da830;
    }
  }
  else {
    bVar16 = (undefined *)0xed8e82d0 < puVar3;
    uVar13 = false;
    if (puVar3 == (undefined *)0xed8e82d1) {
      iVar10 = func_0x04f57738(uVar11,**(undefined4 **)(iRam036da92c + 0x36da6b8),0);
      uVar13 = iVar10 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x38);
        goto LAB_036da830;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036da950 + 0x36da898));
  uVar7 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036da954 + 0x36da8ac));
  uStack_40 = 0;
  func_0x0509473c(uVar7,uVar5,uVar11,0);
  func_0x024f83c0(uVar7,iVar12);
  pcVar9 = (char *)func_0x024f83bc();
  bVar17 = bVar16;
  if ((bool)uVar13) {
    bVar17 = 0xfffffd7f < extraout_r12_00 || CARRY4(extraout_r12_00 + 0x280,(uint)bVar16);
  }
  bVar14 = false;
  bVar18 = bVar17;
  if ((bool)uVar13 && extraout_r12_00 + 0x280 + (uint)bVar16 == 0) {
    bVar18 = 0xffffffc0 < unaff_r8 || CARRY4(unaff_r8 + 0x3f,(uint)bVar17);
    unaff_r11 = (undefined *)(unaff_r8 + 0x3f + (uint)bVar17);
    bVar14 = unaff_r11 == (undefined *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar18;
  if (bVar14) {
    bVar16 = 0xffffff3f < unaff_r10 || CARRY4(unaff_r10 + 0xc0,(uint)bVar18);
    pcVar9 = (char *)(unaff_r10 + 0xc0 + (uint)bVar18);
    bVar15 = pcVar9 == (char *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xffffffbf < unaff_r10 || CARRY4(unaff_r10 + 0x40,(uint)bVar16);
    pcVar9 = (char *)(unaff_r10 + 0x40 + (uint)bVar16);
    bVar14 = pcVar9 == (char *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xffffc0ff < unaff_r10 || CARRY4(unaff_r10 + 0x3f00,(uint)bVar17);
    pcVar9 = (char *)(unaff_r10 + 0x3f00 + (uint)bVar17);
    bVar15 = pcVar9 == (char *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xffffc2ff < unaff_r10 || CARRY4(unaff_r10 + 0x3d00,(uint)bVar16);
    pcVar9 = (char *)(unaff_r10 + 0x3d00 + (uint)bVar16);
    bVar14 = pcVar9 == (char *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xffffc4ff < unaff_r10 || CARRY4(unaff_r10 + 0x3b00,(uint)bVar17);
    pcVar9 = (char *)(unaff_r10 + 0x3b00 + (uint)bVar17);
    bVar15 = pcVar9 == (char *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xffffc6ff < unaff_r10 || CARRY4(unaff_r10 + 0x3900,(uint)bVar16);
    pcVar9 = (char *)(unaff_r10 + 0x3900 + (uint)bVar16);
    bVar14 = pcVar9 == (char *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xffffc8ff < unaff_r10 || CARRY4(unaff_r10 + 0x3700,(uint)bVar17);
    pcVar9 = (char *)(unaff_r10 + 0x3700 + (uint)bVar17);
    bVar15 = pcVar9 == (char *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xffffcaff < unaff_r10 || CARRY4(unaff_r10 + 0x3500,(uint)bVar16);
    pcVar9 = (char *)(unaff_r10 + 0x3500 + (uint)bVar16);
    bVar14 = pcVar9 == (char *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xffffccff < unaff_r10 || CARRY4(unaff_r10 + 0x3300,(uint)bVar17);
    pcVar9 = (char *)(unaff_r10 + 0x3300 + (uint)bVar17);
    bVar15 = pcVar9 == (char *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xffffceff < unaff_r10 || CARRY4(unaff_r10 + 0x3100,(uint)bVar16);
    pcVar9 = (char *)(unaff_r10 + 0x3100 + (uint)bVar16);
    bVar14 = pcVar9 == (char *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xffffd0ff < unaff_r10 || CARRY4(unaff_r10 + 0x2f00,(uint)bVar17);
    pcVar9 = (char *)(unaff_r10 + 0x2f00 + (uint)bVar17);
    bVar15 = pcVar9 == (char *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xffffd2ff < unaff_r10 || CARRY4(unaff_r10 + 0x2d00,(uint)bVar16);
    pcVar9 = (char *)(unaff_r10 + 0x2d00 + (uint)bVar16);
    bVar14 = pcVar9 == (char *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xffffd4ff < unaff_r10 || CARRY4(unaff_r10 + 0x2b00,(uint)bVar17);
    pcVar9 = (char *)(unaff_r10 + 0x2b00 + (uint)bVar17);
    bVar15 = pcVar9 == (char *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xfffffff0 < unaff_r8 || CARRY4(unaff_r8 + 0xf,(uint)bVar16);
    unaff_r11 = (undefined *)(unaff_r8 + 0xf + (uint)bVar16);
    bVar14 = unaff_r11 == (undefined *)0x0;
  }
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xfffff6ff < extraout_r12_00 || CARRY4(extraout_r12_00 + 0x900,(uint)bVar17);
  }
  bVar15 = false;
  bVar18 = bVar16;
  if (bVar14 && extraout_r12_00 + 0x900 + (uint)bVar17 == 0) {
    bVar18 = 0xffff3fff < unaff_r10 || CARRY4(unaff_r10 + 0xc000,(uint)bVar16);
    pcVar9 = (char *)(unaff_r10 + 0xc000 + (uint)bVar16);
    bVar15 = pcVar9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar18;
  if (bVar15) {
    bVar16 = CARRY4(unaff_r10,(uint)bVar18);
    pcVar9 = (char *)(unaff_r10 + bVar18);
    bVar14 = pcVar9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xffffafff < unaff_r10 || CARRY4(unaff_r10 + 0x5000,(uint)bVar16);
    pcVar9 = (char *)(unaff_r10 + 0x5000 + (uint)bVar16);
    bVar15 = pcVar9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xfffccfff < unaff_r10 ||
             CARRY4((uint)(
                          "_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE23__do_get_floating_pointIfEES4_S4_S4_RNS_8ios_baseERjRT_"
                          + unaff_r10 + 0x11),(uint)bVar17);
    pcVar9 = "_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE23__do_get_floating_pointIfEES4_S4_S4_RNS_8ios_baseERjRT_"
             + (uint)bVar17 + unaff_r10 + 0x11;
    bVar14 = pcVar9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xfffe0fff < unaff_r10 || CARRY4(unaff_r10 + 0x1f000,(uint)bVar16);
    pcVar9 = (char *)(unaff_r10 + 0x1f000 + (uint)bVar16);
    bVar15 = pcVar9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xfff6bfff < unaff_r10 || CARRY4(unaff_r10 + 0x94000,(uint)bVar17);
    pcVar9 = (char *)(unaff_r10 + 0x94000 + (uint)bVar17);
    bVar14 = pcVar9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xffc3ffff < unaff_r10 || CARRY4(unaff_r10 + 0x3c0000,(uint)bVar16);
    pcVar9 = (char *)(unaff_r10 + 0x3c0000 + (uint)bVar16);
    bVar15 = pcVar9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xfff2bfff < unaff_r10 || CARRY4(unaff_r10 + 0xd4000,(uint)bVar17);
    pcVar9 = (char *)(unaff_r10 + 0xd4000 + (uint)bVar17);
    bVar14 = pcVar9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xffff7fff < unaff_r10 || CARRY4(unaff_r10 + 0x8000,(uint)bVar16);
    pcVar9 = (char *)(unaff_r10 + 0x8000 + (uint)bVar16);
    bVar15 = pcVar9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xfffeffff < unaff_r10 || CARRY4(unaff_r10 + 0x10000,(uint)bVar17);
    pcVar9 = (char *)(unaff_r10 + 0x10000 + (uint)bVar17);
    bVar14 = pcVar9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xfff3bfff < unaff_r10 || CARRY4(unaff_r10 + 0xc4000,(uint)bVar16);
    pcVar9 = (char *)(unaff_r10 + 0xc4000 + (uint)bVar16);
    bVar15 = pcVar9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xfffa3fff < unaff_r10 || CARRY4(unaff_r10 + 0x5c000,(uint)bVar17);
    pcVar9 = (char *)(unaff_r10 + 0x5c000 + (uint)bVar17);
    bVar14 = pcVar9 == (char *)0x0;
  }
  if (bVar14) {
    pcVar9 = (char *)(unaff_r10 + 0x20000 + (uint)bVar16);
  }
  uStack_44 = 0x36da8d8;
  iVar1 = *(int *)(pcVar9 + 0x10);
  puStack_48 = unaff_r11;
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x024f83fc();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x024f83fc();
  }
  piVar2 = (int *)**(int **)(iVar1 + 0x5c);
  func_0x024f8404();
  if (piVar2 == (int *)0x0) {
    iVar1 = *(int *)(pcVar9 + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x024f83fc();
    }
    piVar2 = (int *)func_0x049a8660(*(undefined4 *)(*(int *)(iVar1 + 0x60) + 0xc));
    func_0x024f8404();
    iVar1 = *(int *)(pcVar9 + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x024f83fc();
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x024f83fc();
    }
    iVar10 = *(int *)(pcVar9 + 0x10);
    **(int **)(iVar1 + 0x5c) = (int)piVar2;
    if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
      iVar10 = func_0x024f83fc();
    }
    iVar1 = *(int *)(*(int *)(iVar10 + 0x60) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x024f83fc();
    }
    func_0x024f83f0(*(undefined4 *)(iVar1 + 0x5c),piVar2);
  }
  return piVar2;
}

