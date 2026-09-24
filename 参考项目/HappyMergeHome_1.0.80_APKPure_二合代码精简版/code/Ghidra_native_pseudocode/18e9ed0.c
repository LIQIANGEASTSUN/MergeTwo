
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_018f9ed0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  undefined *unaff_r11;
  undefined *extraout_r12;
  uint extraout_r12_00;
  uint uVar14;
  uint extraout_r12_01;
  uint extraout_r12_02;
  uint extraout_r12_03;
  uint extraout_r12_04;
  uint extraout_r12_05;
  uint extraout_r12_06;
  undefined4 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  int iVar20;
  undefined1 uVar21;
  bool bVar22;
  bool bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  undefined8 uVar27;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 auStack_20 [4];
  
  pcVar10 = (char *)(_UNK_018f9fb0 + 0x18f9ee4);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018f9fb4 + 0x18f9ef8));
    func_0x01438628(*(undefined4 *)(_UNK_018f9fb8 + 0x18f9f04));
    func_0x01438628(*(undefined4 *)(_UNK_018f9fbc + 0x18f9f10));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x13fc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x13fc,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar10 = (char *)(_UNK_028a2a2c + 0x28a294c);
    if (*pcVar10 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a2a30 + 0x28a2960),param_1,0);
      *pcVar10 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    auStack_20[0] = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    auStack_20[0] = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar12 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    uVar8 = 2;
    if (iVar1 == 0) {
      uVar8 = 1;
    }
    func_0x024f56d0(iVar11,uVar12,&uStack_30,uVar8,0,0);
    piVar2 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a2a34 + 0x28a2a1c));
    return piVar2;
  }
  if (*(int *)(**(int **)(_UNK_018f9fc0 + 0x18f9f68) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018f9fc4 + 0x18f9f84));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar11 = **(int **)(_UNK_018f9fc8 + 0x18f9fa4);
  puVar15 = auStack_20;
  puVar7 = *(undefined4 **)(iVar11 + 0x1c);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam036d8144 + 0x36d7d30));
    func_0x024f83cc(*(undefined4 *)(iRam036d8148 + 0x36d7d3c));
    func_0x024f83cc(*(undefined4 *)(iRam036d814c + 0x36d7d48));
    func_0x024f83cc(*(undefined4 *)(iRam036d8150 + 0x36d7d54));
    func_0x024f83cc(*(undefined4 *)(iRam036d8154 + 0x36d7d60));
    func_0x024f83cc(*(undefined4 *)(iRam036d8158 + 0x36d7d6c));
    func_0x024f83cc(*(undefined4 *)(iRam036d815c + 0x36d7d78));
    func_0x024f83cc(*(undefined4 *)(iRam036d8160 + 0x36d7d84));
    func_0x024f83cc(*(undefined4 *)(iRam036d8164 + 0x36d7d90));
    func_0x024f83cc(*(undefined4 *)(iRam036d8168 + 0x36d7d9c));
    func_0x024f83cc(*(undefined4 *)(iRam036d816c + 0x36d7da8));
    func_0x024f83cc(*(undefined4 *)(iRam036d8170 + 0x36d7db4));
    puVar7 = *(undefined4 **)(iVar11 + 0x1c);
    if (puVar7 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar11);
      puVar7 = *(undefined4 **)(iVar11 + 0x1c);
    }
  }
  uVar12 = *puVar7;
  iVar13 = *(int *)(iVar1 + 0x3c);
  if (*(int *)(**(int **)(iRam036d8174 + 0x36d7dd8) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar12 = func_0x05171434(uVar12,0);
  if (iVar13 == 0) {
    func_0x024f83d4();
  }
  uVar8 = func_0x0475399c(iVar13,uVar12,**(undefined4 **)(iRam036d8178 + 0x36d7e1c));
  puVar3 = (undefined *)func_0x02965180(uVar8,0);
  if (puVar3 < (undefined *)0x9da98dd1) {
    if (puVar3 < (undefined *)0x2e754b92) {
      if (puVar3 == &UNK_04d3c1ea) {
        iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8194 + 0x36d7fa8),0);
        uVar21 = iVar13 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
LAB_036d809c:
          iVar1 = *(int *)(iVar11 + 4);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x024f83fc(iVar1);
          }
          piVar9 = (int *)0x0;
          if (piVar2 != (int *)0x0) {
            if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*piVar2 + 0xb8)) &&
               (piVar9 = piVar2,
               *(int *)(*(int *)(*piVar2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1))
            {
              piVar9 = (int *)0x0;
            }
          }
          return piVar9;
        }
      }
      else {
        bVar24 = (undefined *)0x2e754b90 < puVar3;
        uVar21 = false;
        if (puVar3 == (undefined *)0x2e754b91) {
          iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d817c + 0x36d7e78),0);
          uVar21 = iVar13 == 0;
          bVar24 = true;
          if (!(bool)uVar21) {
            iVar11 = *(int *)(iVar11 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x18);
            goto LAB_036d809c;
          }
        }
      }
    }
    else if (puVar3 == (undefined *)0x8a3c7d59) {
      iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8190 + 0x36d8000),0);
      uVar21 = iVar13 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036d809c;
      }
    }
    else if (puVar3 == (undefined *)0x9da98dd0) {
      iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d818c + 0x36d802c),0);
      uVar21 = iVar13 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x20);
        goto LAB_036d809c;
      }
    }
    else {
      bVar24 = (undefined *)0x48332842 < puVar3;
      uVar21 = false;
      if (puVar3 == (undefined *)0x48332843) {
        iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8180 + 0x36d7f20),0);
        uVar21 = iVar13 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x38);
          goto LAB_036d809c;
        }
      }
    }
  }
  else if (puVar3 < (undefined *)0xa66c61a7) {
    if (puVar3 == (undefined *)0xa2c291f3) {
      iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d81a0 + 0x36d7fd4),0);
      uVar21 = iVar13 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x14);
        goto LAB_036d809c;
      }
    }
    else {
      bVar24 = (undefined *)0xa66c61a5 < puVar3;
      uVar21 = false;
      if (puVar3 == (undefined *)0xa66c61a6) {
        iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8184 + 0x36d7ecc),0);
        uVar21 = iVar13 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x34);
          goto LAB_036d809c;
        }
      }
    }
  }
  else if (puVar3 == (undefined *)0xbb89f01d) {
    iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8198 + 0x36d8058),0);
    uVar21 = iVar13 == 0;
    bVar24 = true;
    if (!(bool)uVar21) {
      iVar11 = *(int *)(iVar11 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x2c);
      goto LAB_036d809c;
    }
  }
  else if (puVar3 == (undefined *)0xc9c3c0e8) {
    iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d819c + 0x36d8084),0);
    uVar21 = iVar13 == 0;
    bVar24 = true;
    if (!(bool)uVar21) {
      iVar11 = *(int *)(iVar11 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x30);
      goto LAB_036d809c;
    }
  }
  else {
    bVar24 = (undefined *)0xdf58028b < puVar3;
    uVar21 = false;
    if (puVar3 == (undefined *)0xdf58028c) {
      iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8188 + 0x36d7f7c),0);
      uVar21 = iVar13 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036d809c;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036d81a4 + 0x36d8104));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036d81a8 + 0x36d8118));
  auStack_20[0] = 0;
  func_0x0509473c(uVar4,uVar5,uVar8,0);
  func_0x024f83c0(uVar4,iVar11);
  iVar20 = 0x36d8144;
  uVar27 = func_0x024f83bc();
  iVar13 = (int)((ulonglong)uVar27 >> 0x20);
  iVar1 = (int)uVar27;
  bVar22 = false;
  puVar3 = extraout_r12;
  bVar25 = bVar24;
  if ((bool)uVar21) {
    bVar25 = (undefined *)0xfabfffff < extraout_r12 ||
             CARRY4((uint)(&UNK_05400000 + (int)extraout_r12),(uint)bVar24);
    puVar3 = &UNK_05400000 + (int)(extraout_r12 + bVar24);
    bVar22 = puVar3 == (undefined *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xff4fffff < unaff_r8 || CARRY4((uint)(&UNK_00b00000 + unaff_r8),(uint)bVar25);
    puVar15 = (undefined4 *)(&UNK_00b00000 + bVar25 + unaff_r8);
    bVar23 = &UNK_00b00000 + bVar25 + unaff_r8 == (undefined1 *)0x0;
  }
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffe3ffff < unaff_r10 || CARRY4(unaff_r10 + 0x1c0000,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0x1c0000 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xffebffff < unaff_r10 || CARRY4(unaff_r10 + 0x140000,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0x140000 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfff3ffff < unaff_r10 || CARRY4(unaff_r10 + 0xc0000,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0xc0000 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfffbffff < unaff_r10 || CARRY4(unaff_r10 + 0x40000,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0x40000 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfc0fffff < unaff_r10 || CARRY4(unaff_r10 + 0x3f00000,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0x3f00000 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfc2fffff < unaff_r10 || CARRY4((uint)(&UNK_03d00000 + unaff_r10),(uint)bVar25);
  }
  bVar23 = bVar23 && &UNK_03d00000 + bVar25 + unaff_r10 == (undefined *)0x0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfc4fffff < unaff_r10 || CARRY4((uint)(&UNK_03b00000 + unaff_r10),(uint)bVar24);
  }
  bVar23 = bVar23 && &UNK_03b00000 + bVar24 + unaff_r10 == (undefined *)0x0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfc6fffff < unaff_r10 || CARRY4((uint)(&UNK_03900000 + unaff_r10),(uint)bVar25);
  }
  bVar23 = bVar23 && &UNK_03900000 + bVar25 + unaff_r10 == (undefined *)0x0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfc8fffff < unaff_r10 || CARRY4((uint)(&UNK_03700000 + unaff_r10),(uint)bVar24);
  }
  bVar23 = bVar23 && &UNK_03700000 + bVar24 + unaff_r10 == (undefined *)0x0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfcafffff < unaff_r10 || CARRY4((uint)(&UNK_03500000 + unaff_r10),(uint)bVar25);
  }
  bVar22 = false;
  bVar26 = bVar24;
  if (bVar23 && &UNK_03500000 + bVar25 + unaff_r10 == (undefined *)0x0) {
    bVar26 = 0xffebffff < unaff_r8 || CARRY4(unaff_r8 + 0x140000,(uint)bVar24);
    puVar15 = (undefined4 *)(unaff_r8 + 0x140000 + (uint)bVar24);
    bVar22 = (undefined1 *)(unaff_r8 + 0x140000 + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar24 = bVar26;
  if (bVar22) {
    bVar24 = (undefined *)0xe5ffffff < puVar3 || CARRY4((uint)(puVar3 + 0x1a000000),(uint)bVar26);
  }
  bVar22 = bVar22 && puVar3 + bVar26 + 0x1a000000 == (undefined *)0x0;
  bVar25 = bVar24;
  if (bVar22) {
    bVar25 = 0xf03fffff < unaff_r10 || CARRY4(unaff_r10 + 0xfc00000,(uint)bVar24);
  }
  bVar22 = bVar22 && unaff_r10 + 0xfc00000 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfb7fffff < unaff_r10 || CARRY4((uint)(&UNK_04800000 + unaff_r10),(uint)bVar25);
  }
  bVar22 = bVar22 && &UNK_04800000 + bVar25 + unaff_r10 == (undefined *)0x0;
  bVar25 = bVar24;
  if (bVar22) {
    bVar25 = 0xf47fffff < unaff_r10 || CARRY4(unaff_r10 + 0xb800000,(uint)bVar24);
  }
  bVar22 = bVar22 && unaff_r10 + 0xb800000 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xc3ffffff < unaff_r10 || CARRY4(unaff_r10 + 0x3c000000,(uint)bVar25);
  }
  bVar22 = bVar22 && unaff_r10 + 0x3c000000 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar22) {
    bVar25 = 0xe8ffffff < unaff_r10 || CARRY4(unaff_r10 + 0x17000000,(uint)bVar24);
  }
  bVar22 = bVar22 && unaff_r10 + 0x17000000 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xe3ffffff < unaff_r10 || CARRY4(unaff_r10 + 0x1c000000,(uint)bVar25);
  }
  bVar22 = bVar22 && unaff_r10 + 0x1c000000 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar22) {
    bVar25 = 0xc9ffffff < unaff_r10 || CARRY4(unaff_r10 + 0x36000000,(uint)bVar24);
  }
  bVar22 = bVar22 && unaff_r10 + 0x36000000 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xf7ffffff < unaff_r10 || CARRY4(unaff_r10 + 0x8000000,(uint)bVar25);
  }
  bVar22 = bVar22 && unaff_r10 + 0x8000000 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar22) {
    bVar25 = 0x1fffffff < unaff_r10 || CARRY4(unaff_r10 + 0xe0000000,(uint)bVar24);
  }
  bVar22 = bVar22 && unaff_r10 + 0xe0000000 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xd5ffffff < unaff_r10 || CARRY4(unaff_r10 + 0x2a000000,(uint)bVar25);
  }
  bVar23 = false;
  bVar26 = bVar24;
  if (bVar22 && unaff_r10 + 0x2a000000 + (uint)bVar25 == 0) {
    bVar26 = 0xfffffdef < unaff_r8 || CARRY4(unaff_r8 + 0x210,(uint)bVar24);
    iVar20 = unaff_r8 + 0x210 + (uint)bVar24;
    bVar23 = iVar20 == 0;
  }
  if (bVar23) {
    unaff_r11 = (undefined *)(unaff_r9 + 0xe8 + (uint)bVar26);
  }
  *(int *)((int)puVar15 + -4) = iVar20;
  *(undefined **)((int)puVar15 + -8) = unaff_r11;
  *(undefined4 *)((int)puVar15 + -0xc) = uVar12;
  *(undefined4 *)((int)puVar15 + -0x10) = uVar8;
  *(undefined4 *)((int)puVar15 + -0x14) = uVar4;
  *(int *)((int)puVar15 + -0x18) = iVar11;
  puVar16 = (undefined1 *)((int)puVar15 + -0x20);
  puVar7 = *(undefined4 **)(iVar13 + 0x1c);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam036d85e8 + 0x36d81d4));
    func_0x024f83cc(*(undefined4 *)(iRam036d85ec + 0x36d81e0));
    func_0x024f83cc(*(undefined4 *)(iRam036d85f0 + 0x36d81ec));
    func_0x024f83cc(*(undefined4 *)(iRam036d85f4 + 0x36d81f8));
    func_0x024f83cc(*(undefined4 *)(iRam036d85f8 + 0x36d8204));
    func_0x024f83cc(*(undefined4 *)(iRam036d85fc + 0x36d8210));
    func_0x024f83cc(*(undefined4 *)(iRam036d8600 + 0x36d821c));
    func_0x024f83cc(*(undefined4 *)(iRam036d8604 + 0x36d8228));
    func_0x024f83cc(*(undefined4 *)(iRam036d8608 + 0x36d8234));
    func_0x024f83cc(*(undefined4 *)(iRam036d860c + 0x36d8240));
    func_0x024f83cc(*(undefined4 *)(iRam036d8610 + 0x36d824c));
    func_0x024f83cc(*(undefined4 *)(iRam036d8614 + 0x36d8258));
    puVar7 = *(undefined4 **)(iVar13 + 0x1c);
    if (puVar7 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar13);
      puVar7 = *(undefined4 **)(iVar13 + 0x1c);
    }
  }
  uVar12 = *puVar7;
  iVar11 = *(int *)(iVar1 + 0x3c);
  if (*(int *)(**(int **)(iRam036d8618 + 0x36d827c) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar12 = func_0x05171434(uVar12,0);
  if (iVar11 == 0) {
    func_0x024f83d4();
  }
  uVar8 = func_0x0475399c(iVar11,uVar12,**(undefined4 **)(iRam036d861c + 0x36d82c0));
  puVar3 = (undefined *)func_0x02965180(uVar8,0);
  if (puVar3 < (undefined *)0x9da98dd1) {
    if (puVar3 < (undefined *)0x2e754b92) {
      if (puVar3 == &UNK_04d3c1ea) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8638 + 0x36d844c),0);
        uVar21 = iVar11 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar13 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
LAB_036d8540:
          iVar1 = *(int *)(iVar11 + 4);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x024f83fc(iVar1);
          }
          piVar9 = (int *)0x0;
          if (piVar2 != (int *)0x0) {
            if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*piVar2 + 0xb8)) &&
               (piVar9 = piVar2,
               *(int *)(*(int *)(*piVar2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1))
            {
              piVar9 = (int *)0x0;
            }
          }
          return piVar9;
        }
      }
      else {
        bVar24 = (undefined *)0x2e754b90 < puVar3;
        uVar21 = false;
        if (puVar3 == (undefined *)0x2e754b91) {
          iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8620 + 0x36d831c),0);
          uVar21 = iVar11 == 0;
          bVar24 = true;
          if (!(bool)uVar21) {
            iVar11 = *(int *)(iVar13 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x18);
            goto LAB_036d8540;
          }
        }
      }
    }
    else if (puVar3 == (undefined *)0x8a3c7d59) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8634 + 0x36d84a4),0);
      uVar21 = iVar11 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar13 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036d8540;
      }
    }
    else if (puVar3 == (undefined *)0x9da98dd0) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8630 + 0x36d84d0),0);
      uVar21 = iVar11 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar13 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x20);
        goto LAB_036d8540;
      }
    }
    else {
      bVar24 = (undefined *)0x48332842 < puVar3;
      uVar21 = false;
      if (puVar3 == (undefined *)0x48332843) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8624 + 0x36d83c4),0);
        uVar21 = iVar11 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar13 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x38);
          goto LAB_036d8540;
        }
      }
    }
  }
  else if (puVar3 < (undefined *)0xa66c61a7) {
    if (puVar3 == (undefined *)0xa2c291f3) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8644 + 0x36d8478),0);
      uVar21 = iVar11 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar13 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x14);
        goto LAB_036d8540;
      }
    }
    else {
      bVar24 = (undefined *)0xa66c61a5 < puVar3;
      uVar21 = false;
      if (puVar3 == (undefined *)0xa66c61a6) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8628 + 0x36d8370),0);
        uVar21 = iVar11 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar13 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x34);
          goto LAB_036d8540;
        }
      }
    }
  }
  else if (puVar3 == (undefined *)0xbb89f01d) {
    iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d863c + 0x36d84fc),0);
    uVar21 = iVar11 == 0;
    bVar24 = true;
    if (!(bool)uVar21) {
      iVar11 = *(int *)(iVar13 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x2c);
      goto LAB_036d8540;
    }
  }
  else if (puVar3 == (undefined *)0xc9c3c0e8) {
    iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8640 + 0x36d8528),0);
    uVar21 = iVar11 == 0;
    bVar24 = true;
    if (!(bool)uVar21) {
      iVar11 = *(int *)(iVar13 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x30);
      goto LAB_036d8540;
    }
  }
  else {
    bVar24 = (undefined *)0xdf58028b < puVar3;
    uVar21 = false;
    if (puVar3 == (undefined *)0xdf58028c) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d862c + 0x36d8420),0);
      uVar21 = iVar11 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar13 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036d8540;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036d8648 + 0x36d85a8));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036d864c + 0x36d85bc));
  *(undefined4 *)((int)puVar15 + -0x20) = 0;
  func_0x0509473c(uVar4,uVar5,uVar8,0);
  func_0x024f83c0(uVar4,iVar13);
  iVar20 = 0x36d85e8;
  uVar27 = func_0x024f83bc();
  iVar11 = (int)((ulonglong)uVar27 >> 0x20);
  iVar1 = (int)uVar27;
  bVar22 = false;
  uVar14 = extraout_r12_00;
  bVar25 = bVar24;
  if ((bool)uVar21) {
    bVar25 = 0xffffffd3 < extraout_r12_00 || CARRY4(extraout_r12_00 + 0x2c,(uint)bVar24);
    uVar14 = extraout_r12_00 + 0x2c + (uint)bVar24;
    bVar22 = uVar14 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xf3ffffff < unaff_r8 || CARRY4(unaff_r8 + 0xc000000,(uint)bVar25);
    puVar16 = (undefined1 *)(unaff_r8 + 0xc000000 + (uint)bVar25);
    bVar23 = (undefined1 *)(unaff_r8 + 0xc000000 + (uint)bVar25) == (undefined1 *)0x0;
  }
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0x1ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0xe0000001,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0xe0000001 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0x3ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0xc0000001,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0xc0000001 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0x5ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0xa0000001,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0xa0000001 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0x7ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x80000001,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0x80000001 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0x9ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x60000001,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0x60000001 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xbffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x40000001,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0x40000001 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xdffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x20000001,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0x20000001 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfffffffe < unaff_r10 || CARRY4(unaff_r10 + 1,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 1 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0x1fffffff < unaff_r10 || CARRY4(unaff_r10 + 0xe0000000,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0xe0000000 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0x3fffffff < unaff_r10 || CARRY4(unaff_r10 + 0xc0000000,(uint)bVar25);
  }
  bVar22 = false;
  bVar26 = bVar24;
  if (bVar23 && unaff_r10 + 0xc0000000 + (uint)bVar25 == 0) {
    bVar26 = 0x3ffffffe < unaff_r8 || CARRY4(unaff_r8 + 0xc0000001,(uint)bVar24);
    puVar16 = (undefined1 *)(unaff_r8 + 0xc0000001 + (uint)bVar24);
    bVar22 = (undefined1 *)(unaff_r8 + 0xc0000001 + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar24 = bVar26;
  if (bVar22) {
    bVar24 = 0xffffff3b < uVar14 || CARRY4(uVar14 + 0xc4,(uint)bVar26);
  }
  bVar22 = bVar22 && uVar14 + 0xc4 + (uint)bVar26 == 0;
  bVar25 = bVar24;
  if (bVar22) {
    bVar25 = 0x7ffffffa < unaff_r10 || CARRY4(unaff_r10 + 0x80000005,(uint)bVar24);
  }
  bVar22 = bVar22 && unaff_r10 + 0x80000005 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffffffd6 < unaff_r10 || CARRY4(unaff_r10 + 0x29,(uint)bVar25);
  }
  bVar22 = bVar22 && unaff_r10 + 0x29 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar22) {
    bVar25 = 0xbffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x40000001,(uint)bVar24);
  }
  bVar22 = bVar22 && unaff_r10 + 0x40000001 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffffffec < unaff_r10 || CARRY4(unaff_r10 + 0x13,(uint)bVar25);
  }
  bVar22 = bVar22 && unaff_r10 + 0x13 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar22) {
    bVar25 = 0xffffff47 < unaff_r10 || CARRY4(unaff_r10 + 0xb8,(uint)bVar24);
  }
  bVar22 = bVar22 && unaff_r10 + 0xb8 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffffff33 < unaff_r10 || CARRY4(unaff_r10 + 0xcc,(uint)bVar25);
  }
  bVar22 = bVar22 && unaff_r10 + 0xcc + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar22) {
    bVar25 = 0xfffffff2 < unaff_r10 || CARRY4(unaff_r10 + 0xd,(uint)bVar24);
  }
  bVar22 = bVar22 && unaff_r10 + 0xd + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffffff83 < unaff_r10 || CARRY4(unaff_r10 + 0x7c,(uint)bVar25);
  }
  bVar22 = bVar22 && unaff_r10 + 0x7c + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar22) {
    bVar25 = 0xffffffc3 < unaff_r10 || CARRY4(unaff_r10 + 0x3c,(uint)bVar24);
  }
  bVar22 = bVar22 && unaff_r10 + 0x3c + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfffffffe < unaff_r10 || CARRY4(unaff_r10 + 1,(uint)bVar25);
  }
  bVar23 = false;
  bVar26 = bVar24;
  if (bVar22 && unaff_r10 + 1 + (uint)bVar25 == 0) {
    bVar26 = 0xfff1ffff < unaff_r8 || CARRY4(unaff_r8 + 0xe0000,(uint)bVar24);
    iVar20 = unaff_r8 + 0xe0000 + (uint)bVar24;
    bVar23 = iVar20 == 0;
  }
  if (bVar23) {
    unaff_r10 = unaff_r9 + 0x4400 + (uint)bVar26;
  }
  *(int *)(puVar16 + -4) = iVar20;
  *(undefined **)(puVar16 + -8) = unaff_r11;
  *(undefined4 *)(puVar16 + -0xc) = uVar12;
  *(undefined4 *)(puVar16 + -0x10) = uVar8;
  *(undefined4 *)(puVar16 + -0x14) = uVar4;
  *(int *)(puVar16 + -0x18) = iVar13;
  puVar7 = *(undefined4 **)(iVar11 + 0x1c);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam036d8b6c + 0x36d8678));
    func_0x024f83cc(*(undefined4 *)(iRam036d8b70 + 0x36d8684));
    func_0x024f83cc(*(undefined4 *)(iRam036d8b74 + 0x36d8690));
    func_0x024f83cc(*(undefined4 *)(iRam036d8b78 + 0x36d869c));
    func_0x024f83cc(*(undefined4 *)(iRam036d8b7c + 0x36d86a8));
    func_0x024f83cc(*(undefined4 *)(iRam036d8b80 + 0x36d86b4));
    func_0x024f83cc(*(undefined4 *)(iRam036d8b84 + 0x36d86c0));
    func_0x024f83cc(*(undefined4 *)(iRam036d8b88 + 0x36d86cc));
    func_0x024f83cc(*(undefined4 *)(iRam036d8b8c + 0x36d86d8));
    func_0x024f83cc(*(undefined4 *)(iRam036d8b90 + 0x36d86e4));
    func_0x024f83cc(*(undefined4 *)(iRam036d8b94 + 0x36d86f0));
    func_0x024f83cc(*(undefined4 *)(iRam036d8b98 + 0x36d86fc));
    func_0x024f83cc(*(undefined4 *)(iRam036d8b9c + 0x36d8708));
    func_0x024f83cc(*(undefined4 *)(iRam036d8ba0 + 0x36d8714));
    func_0x024f83cc(*(undefined4 *)(iRam036d8ba4 + 0x36d8720));
    puVar7 = *(undefined4 **)(iVar11 + 0x1c);
    if (puVar7 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar11);
      puVar7 = *(undefined4 **)(iVar11 + 0x1c);
    }
  }
  uVar12 = *puVar7;
  iVar13 = *(int *)(iVar1 + 0x48);
  if (*(int *)(**(int **)(iRam036d8ba8 + 0x36d8744) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar12 = func_0x05171434(uVar12,0);
  if (iVar13 == 0) {
    func_0x024f83d4();
  }
  uVar8 = func_0x0475399c(iVar13,uVar12,**(undefined4 **)(iRam036d8bac + 0x36d8788));
  uVar14 = func_0x02965180(uVar8,0);
  if (uVar14 < 0xa443a856) {
    if (uVar14 < 0x71bf6504) {
      if (uVar14 == 0x13a7e43c) {
        iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8bdc + 0x36d8978),0);
        uVar21 = iVar13 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x44);
LAB_036d8ac4:
          iVar1 = *(int *)(iVar11 + 4);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x024f83fc(iVar1);
          }
          piVar9 = (int *)0x0;
          if (piVar2 != (int *)0x0) {
            if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*piVar2 + 0xb8)) &&
               (piVar9 = piVar2,
               *(int *)(*(int *)(*piVar2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1))
            {
              piVar9 = (int *)0x0;
            }
          }
          return piVar9;
        }
      }
      else if (uVar14 == 0x16c0af6f) {
        iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8bd0 + 0x36d89a4),0);
        uVar21 = iVar13 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x30);
          goto LAB_036d8ac4;
        }
      }
      else {
        bVar24 = 0x71bf6502 < uVar14;
        uVar21 = false;
        if (uVar14 == 0x71bf6503) {
          iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8bb0 + 0x36d87f4),0);
          uVar21 = iVar13 == 0;
          bVar24 = true;
          if (!(bool)uVar21) {
            iVar11 = *(int *)(iVar11 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x34);
            goto LAB_036d8ac4;
          }
        }
      }
    }
    else if (uVar14 == 0xa443a855) {
      iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8bc4 + 0x36d8a28),0);
      uVar21 = iVar13 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036d8ac4;
      }
    }
    else if (uVar14 == 0x7399d8e1) {
      iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8be0 + 0x36d8a54),0);
      uVar21 = iVar13 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x14);
        goto LAB_036d8ac4;
      }
    }
    else {
      bVar24 = 0x7ab1adb3 < uVar14;
      uVar21 = false;
      if (uVar14 == 0x7ab1adb4) {
        iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8bb4 + 0x36d88ac),0);
        uVar21 = iVar13 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x40);
          goto LAB_036d8ac4;
        }
      }
    }
  }
  else if (uVar14 < 0xb66b7baf) {
    if (uVar14 == 0xb135ec26) {
      iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8bd8 + 0x36d89d0),0);
      uVar21 = iVar13 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x3c);
        goto LAB_036d8ac4;
      }
    }
    else if (uVar14 == 0xb436bd1b) {
      iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8bc8 + 0x36d89fc),0);
      uVar21 = iVar13 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036d8ac4;
      }
    }
    else {
      bVar24 = 0xb66b7bad < uVar14;
      uVar21 = false;
      if (uVar14 == 0xb66b7bae) {
        iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8bb8 + 0x36d8858),0);
        uVar21 = iVar13 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
          goto LAB_036d8ac4;
        }
      }
    }
  }
  else if (uVar14 < 0xc5a69c53) {
    if (uVar14 == 0xc28ab1a8) {
      iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8bcc + 0x36d8a80),0);
      uVar21 = iVar13 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x20);
        goto LAB_036d8ac4;
      }
    }
    else {
      bVar24 = 0xc5a69c51 < uVar14;
      uVar21 = false;
      if (uVar14 == 0xc5a69c52) {
        iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8bbc + 0x36d8900),0);
        uVar21 = iVar13 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036d8ac4;
        }
      }
    }
  }
  else if (uVar14 == 0xc5d3516e) {
    iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8bd4 + 0x36d8aac),0);
    uVar21 = iVar13 == 0;
    bVar24 = true;
    if (!(bool)uVar21) {
      iVar11 = *(int *)(iVar11 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x38);
      goto LAB_036d8ac4;
    }
  }
  else {
    bVar24 = 0xf655d0f8 < uVar14;
    uVar21 = false;
    if (uVar14 == 0xf655d0f9) {
      iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d8bc0 + 0x36d894c),0);
      uVar21 = iVar13 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036d8ac4;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036d8be4 + 0x36d8b2c));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036d8be8 + 0x36d8b40));
  *(undefined4 *)(puVar16 + -0x20) = 0;
  func_0x0509473c(uVar4,uVar5,uVar8,0);
  func_0x024f83c0(uVar4,iVar11);
  iVar20 = 0x36d8b6c;
  uVar27 = func_0x024f83bc();
  iVar13 = (int)((ulonglong)uVar27 >> 0x20);
  iVar1 = (int)uVar27;
  bVar22 = false;
  bVar25 = bVar24;
  if ((bool)uVar21) {
    bVar25 = 0xfffffcff < extraout_r12_01 || CARRY4(extraout_r12_01 + 0x300,(uint)bVar24);
    unaff_r11 = (undefined *)(extraout_r12_01 + 0x300 + (uint)bVar24);
    bVar22 = unaff_r11 == (undefined *)0x0;
  }
  bVar23 = false;
  uVar14 = extraout_r12_01;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfffffe5f < unaff_r8 || CARRY4(unaff_r8 + 0x1a0,(uint)bVar25);
    uVar14 = unaff_r8 + 0x1a0 + (uint)bVar25;
    bVar23 = uVar14 == 0;
  }
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffffebff < unaff_r10 || CARRY4(unaff_r10 + 0x1400,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0x1400 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xffffedff < unaff_r10 || CARRY4(unaff_r10 + 0x1200,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0x1200 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffffefff < unaff_r10 || CARRY4(unaff_r10 + 0x1000,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0x1000 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfffff1ff < unaff_r10 || CARRY4(unaff_r10 + 0xe00,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0xe00 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfffff3ff < unaff_r10 || CARRY4(unaff_r10 + 0xc00,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0xc00 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfffff5ff < unaff_r10 || CARRY4(unaff_r10 + 0xa00,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0xa00 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfffff7ff < unaff_r10 || CARRY4(unaff_r10 + 0x800,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0x800 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfffff9ff < unaff_r10 || CARRY4(unaff_r10 + 0x600,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0x600 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfffffbff < unaff_r10 || CARRY4(unaff_r10 + 0x400,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0x400 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfffffdff < unaff_r10 || CARRY4(unaff_r10 + 0x200,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0x200 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = CARRY4(unaff_r10,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xffff07ff < unaff_r10 || CARRY4(unaff_r10 + 0xf800,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0xf800 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffff0fff < unaff_r10 || CARRY4(unaff_r10 + 0xf000,(uint)bVar24);
  }
  bVar22 = false;
  bVar26 = bVar25;
  if (bVar23 && unaff_r10 + 0xf000 + (uint)bVar24 == 0) {
    bVar26 = 0xfffff57f < unaff_r8 || CARRY4(unaff_r8 + 0xa80,(uint)bVar25);
    uVar14 = unaff_r8 + 0xa80 + (uint)bVar25;
    bVar22 = uVar14 == 0;
  }
  bVar23 = false;
  bVar24 = bVar26;
  if (bVar22) {
    bVar24 = 0xfffc0fff < uVar14 || CARRY4(uVar14 + 0x3f000,(uint)bVar26);
    unaff_r11 = (undefined *)(uVar14 + 0x3f000 + (uint)bVar26);
    bVar23 = unaff_r11 == (undefined *)0x0;
  }
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfffc2fff < unaff_r10 ||
             CARRY4((uint)("_ZNSt6__ndk121recursive_timed_mutex6unlockEv" + unaff_r10 + 0xe),
                    (uint)bVar24);
  }
  bVar23 = bVar23 && "_ZNSt6__ndk121recursive_timed_mutex6unlockEv" + (uint)bVar24 + unaff_r10 + 0xe
                     == (char *)0x0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfffe6fff < unaff_r10 || CARRY4(unaff_r10 + 0x19000,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0x19000 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfffd3fff < unaff_r10 ||
             CARRY4((uint)(
                          "_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5seekpENS_4fposI9mbstate_tEE"
                          + unaff_r10 + 0x3c),(uint)bVar24);
  }
  bVar23 = bVar23 && "_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5seekpENS_4fposI9mbstate_tEE"
                     + (uint)bVar24 + unaff_r10 + 0x3c == (char *)0x0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xffffcfff < unaff_r10 || CARRY4(unaff_r10 + 0x3000,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0x3000 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfff5bfff < unaff_r10 || CARRY4(unaff_r10 + 0xa4000,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0xa4000 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xffccffff < unaff_r10 || CARRY4(unaff_r10 + 0x330000,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0x330000 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffff7fff < unaff_r10 || CARRY4(unaff_r10 + 0x8000,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0x8000 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xffe1ffff < unaff_r10 || CARRY4(unaff_r10 + 0x1e0000,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0x1e0000 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfffc3fff < unaff_r10 || CARRY4(unaff_r10 + 0x3c000,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0x3c000 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfff1ffff < unaff_r10 || CARRY4(unaff_r10 + 0xe0000,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0xe0000 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfffd3fff < unaff_r10 ||
             CARRY4((uint)(
                          "_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5seekpENS_4fposI9mbstate_tEE"
                          + unaff_r10 + 0x3c),(uint)bVar24);
  }
  bVar23 = bVar23 && "_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5seekpENS_4fposI9mbstate_tEE"
                     + (uint)bVar24 + unaff_r10 + 0x3c == (char *)0x0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfff77fff < unaff_r10 || CARRY4(unaff_r10 + 0x88000,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0x88000 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffd9ffff < unaff_r10 || CARRY4(unaff_r10 + 0x260000,(uint)bVar24);
  }
  bVar22 = false;
  bVar26 = bVar25;
  if (bVar23 && unaff_r10 + 0x260000 + (uint)bVar24 == 0) {
    bVar26 = 0xe8ffffff < unaff_r8 || CARRY4(unaff_r8 + 0x17000000,(uint)bVar25);
    iVar20 = unaff_r8 + 0x17000000 + (uint)bVar25;
    bVar22 = iVar20 == 0;
  }
  if (bVar22) {
    unaff_r10 = unaff_r9 + 0xc000000 + (uint)bVar26;
  }
  *(int *)(puVar16 + -0x24) = iVar20;
  *(undefined **)(puVar16 + -0x28) = unaff_r11;
  *(undefined4 *)(puVar16 + -0x2c) = uVar12;
  *(undefined4 *)(puVar16 + -0x30) = uVar8;
  *(undefined4 *)(puVar16 + -0x34) = uVar4;
  *(int *)(puVar16 + -0x38) = iVar11;
  puVar17 = puVar16 + -0x40;
  puVar7 = *(undefined4 **)(iVar13 + 0x1c);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam036d9108 + 0x36d8c14));
    func_0x024f83cc(*(undefined4 *)(iRam036d910c + 0x36d8c20));
    func_0x024f83cc(*(undefined4 *)(iRam036d9110 + 0x36d8c2c));
    func_0x024f83cc(*(undefined4 *)(iRam036d9114 + 0x36d8c38));
    func_0x024f83cc(*(undefined4 *)(iRam036d9118 + 0x36d8c44));
    func_0x024f83cc(*(undefined4 *)(iRam036d911c + 0x36d8c50));
    func_0x024f83cc(*(undefined4 *)(iRam036d9120 + 0x36d8c5c));
    func_0x024f83cc(*(undefined4 *)(iRam036d9124 + 0x36d8c68));
    func_0x024f83cc(*(undefined4 *)(iRam036d9128 + 0x36d8c74));
    func_0x024f83cc(*(undefined4 *)(iRam036d912c + 0x36d8c80));
    func_0x024f83cc(*(undefined4 *)(iRam036d9130 + 0x36d8c8c));
    func_0x024f83cc(*(undefined4 *)(iRam036d9134 + 0x36d8c98));
    func_0x024f83cc(*(undefined4 *)(iRam036d9138 + 0x36d8ca4));
    func_0x024f83cc(*(undefined4 *)(iRam036d913c + 0x36d8cb0));
    func_0x024f83cc(*(undefined4 *)(iRam036d9140 + 0x36d8cbc));
    puVar7 = *(undefined4 **)(iVar13 + 0x1c);
    if (puVar7 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar13);
      puVar7 = *(undefined4 **)(iVar13 + 0x1c);
    }
  }
  uVar12 = *puVar7;
  iVar11 = *(int *)(iVar1 + 0x48);
  if (*(int *)(**(int **)(iRam036d9144 + 0x36d8ce0) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar12 = func_0x05171434(uVar12,0);
  if (iVar11 == 0) {
    func_0x024f83d4();
  }
  uVar8 = func_0x0475399c(iVar11,uVar12,**(undefined4 **)(iRam036d9148 + 0x36d8d24));
  uVar14 = func_0x02965180(uVar8,0);
  if (uVar14 < 0xa443a856) {
    if (uVar14 < 0x71bf6504) {
      if (uVar14 == 0x13a7e43c) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9178 + 0x36d8f14),0);
        uVar21 = iVar11 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar13 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x44);
LAB_036d9060:
          iVar1 = *(int *)(iVar11 + 4);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x024f83fc(iVar1);
          }
          piVar9 = (int *)0x0;
          if (piVar2 != (int *)0x0) {
            if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*piVar2 + 0xb8)) &&
               (piVar9 = piVar2,
               *(int *)(*(int *)(*piVar2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1))
            {
              piVar9 = (int *)0x0;
            }
          }
          return piVar9;
        }
      }
      else if (uVar14 == 0x16c0af6f) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d916c + 0x36d8f40),0);
        uVar21 = iVar11 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar13 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x30);
          goto LAB_036d9060;
        }
      }
      else {
        bVar24 = 0x71bf6502 < uVar14;
        uVar21 = false;
        if (uVar14 == 0x71bf6503) {
          iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d914c + 0x36d8d90),0);
          uVar21 = iVar11 == 0;
          bVar24 = true;
          if (!(bool)uVar21) {
            iVar11 = *(int *)(iVar13 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x34);
            goto LAB_036d9060;
          }
        }
      }
    }
    else if (uVar14 == 0xa443a855) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9160 + 0x36d8fc4),0);
      uVar21 = iVar11 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar13 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036d9060;
      }
    }
    else if (uVar14 == 0x7399d8e1) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d917c + 0x36d8ff0),0);
      uVar21 = iVar11 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar13 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x14);
        goto LAB_036d9060;
      }
    }
    else {
      bVar24 = 0x7ab1adb3 < uVar14;
      uVar21 = false;
      if (uVar14 == 0x7ab1adb4) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9150 + 0x36d8e48),0);
        uVar21 = iVar11 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar13 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x40);
          goto LAB_036d9060;
        }
      }
    }
  }
  else if (uVar14 < 0xb66b7baf) {
    if (uVar14 == 0xb135ec26) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9174 + 0x36d8f6c),0);
      uVar21 = iVar11 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar13 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x3c);
        goto LAB_036d9060;
      }
    }
    else if (uVar14 == 0xb436bd1b) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9164 + 0x36d8f98),0);
      uVar21 = iVar11 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar13 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036d9060;
      }
    }
    else {
      bVar24 = 0xb66b7bad < uVar14;
      uVar21 = false;
      if (uVar14 == 0xb66b7bae) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9154 + 0x36d8df4),0);
        uVar21 = iVar11 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar13 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
          goto LAB_036d9060;
        }
      }
    }
  }
  else if (uVar14 < 0xc5a69c53) {
    if (uVar14 == 0xc28ab1a8) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9168 + 0x36d901c),0);
      uVar21 = iVar11 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar13 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x20);
        goto LAB_036d9060;
      }
    }
    else {
      bVar24 = 0xc5a69c51 < uVar14;
      uVar21 = false;
      if (uVar14 == 0xc5a69c52) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9158 + 0x36d8e9c),0);
        uVar21 = iVar11 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar13 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036d9060;
        }
      }
    }
  }
  else if (uVar14 == 0xc5d3516e) {
    iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9170 + 0x36d9048),0);
    uVar21 = iVar11 == 0;
    bVar24 = true;
    if (!(bool)uVar21) {
      iVar11 = *(int *)(iVar13 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x38);
      goto LAB_036d9060;
    }
  }
  else {
    bVar24 = 0xf655d0f8 < uVar14;
    uVar21 = false;
    if (uVar14 == 0xf655d0f9) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d915c + 0x36d8ee8),0);
      uVar21 = iVar11 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar13 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036d9060;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036d9180 + 0x36d90c8));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036d9184 + 0x36d90dc));
  *(undefined4 *)(puVar16 + -0x40) = 0;
  func_0x0509473c(uVar4,uVar5,uVar8,0);
  func_0x024f83c0(uVar4,iVar13);
  uVar27 = func_0x024f83bc();
  iVar11 = (int)((ulonglong)uVar27 >> 0x20);
  iVar1 = (int)uVar27;
  bVar22 = false;
  bVar25 = bVar24;
  if ((bool)uVar21) {
    bVar25 = 0xfe3fffff < extraout_r12_02 || CARRY4(extraout_r12_02 + 0x1c00000,(uint)bVar24);
    unaff_r11 = (undefined *)(extraout_r12_02 + 0x1c00000 + (uint)bVar24);
    bVar22 = unaff_r11 == (undefined *)0x0;
  }
  bVar23 = false;
  uVar14 = extraout_r12_02;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffccffff < unaff_r8 || CARRY4(unaff_r8 + 0x330000,(uint)bVar25);
    uVar14 = unaff_r8 + 0x330000 + (uint)bVar25;
    bVar23 = uVar14 == 0;
  }
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfd2fffff < unaff_r10 || CARRY4((uint)(&UNK_02d00000 + unaff_r10),(uint)bVar24);
  }
  bVar23 = bVar23 && &UNK_02d00000 + bVar24 + unaff_r10 == (undefined *)0x0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfd4fffff < unaff_r10 || CARRY4((uint)(&UNK_02b00000 + unaff_r10),(uint)bVar25);
  }
  bVar23 = bVar23 && &UNK_02b00000 + bVar25 + unaff_r10 == (undefined *)0x0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfd6fffff < unaff_r10 || CARRY4((uint)(&UNK_02900000 + unaff_r10),(uint)bVar24);
  }
  bVar23 = bVar23 && &UNK_02900000 + bVar24 + unaff_r10 == (undefined *)0x0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfd8fffff < unaff_r10 || CARRY4(unaff_r10 + 0x2700000,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0x2700000 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfdafffff < unaff_r10 || CARRY4((uint)(&UNK_02500000 + unaff_r10),(uint)bVar24);
  }
  bVar23 = bVar23 && &UNK_02500000 + bVar24 + unaff_r10 == (undefined *)0x0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfdcfffff < unaff_r10 || CARRY4((uint)(&UNK_02300000 + unaff_r10),(uint)bVar25);
  }
  bVar23 = bVar23 && &UNK_02300000 + bVar25 + unaff_r10 == (undefined *)0x0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfdefffff < unaff_r10 || CARRY4((uint)(&UNK_02100000 + unaff_r10),(uint)bVar24);
  }
  bVar23 = bVar23 && &UNK_02100000 + bVar24 + unaff_r10 == (undefined *)0x0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfe0fffff < unaff_r10 || CARRY4(unaff_r10 + 0x1f00000,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0x1f00000 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfe2fffff < unaff_r10 || CARRY4((uint)(&UNK_01d00000 + unaff_r10),(uint)bVar24);
  }
  bVar23 = bVar23 && &UNK_01d00000 + bVar24 + unaff_r10 == (undefined *)0x0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfe4fffff < unaff_r10 || CARRY4((uint)(&UNK_01b00000 + unaff_r10),(uint)bVar25);
  }
  bVar23 = bVar23 && &UNK_01b00000 + bVar25 + unaff_r10 == (undefined *)0x0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfe6fffff < unaff_r10 || CARRY4((uint)(&UNK_01900000 + unaff_r10),(uint)bVar24);
  }
  bVar23 = bVar23 && &UNK_01900000 + bVar24 + unaff_r10 == (undefined *)0x0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfe8fffff < unaff_r10 || CARRY4((uint)(&UNK_01700000 + unaff_r10),(uint)bVar25);
  }
  bVar23 = bVar23 && &UNK_01700000 + bVar25 + unaff_r10 == (undefined *)0x0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfeafffff < unaff_r10 || CARRY4((uint)(&UNK_01500000 + unaff_r10),(uint)bVar24);
  }
  bVar22 = false;
  bVar26 = bVar25;
  if (bVar23 && &UNK_01500000 + bVar24 + unaff_r10 == (undefined *)0x0) {
    bVar26 = 0xfffcffff < unaff_r8 || CARRY4(unaff_r8 + 0x30000,(uint)bVar25);
    uVar14 = unaff_r8 + 0x30000 + (uint)bVar25;
    bVar22 = uVar14 == 0;
  }
  bVar23 = false;
  bVar24 = bVar26;
  if (bVar22) {
    bVar24 = 0xf9ffffff < uVar14 || CARRY4(uVar14 + 0x6000000,(uint)bVar26);
    unaff_r11 = (undefined *)(uVar14 + 0x6000000 + (uint)bVar26);
    bVar23 = unaff_r11 == (undefined *)0x0;
  }
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfa7fffff < unaff_r10 || CARRY4((uint)(&UNK_05800000 + unaff_r10),(uint)bVar24);
  }
  bVar23 = bVar23 && &UNK_05800000 + bVar24 + unaff_r10 == (undefined *)0x0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xcdffffff < unaff_r10 || CARRY4(unaff_r10 + 0x32000000,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0x32000000 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfebfffff < unaff_r10 || CARRY4((uint)(&UNK_01400000 + unaff_r10),(uint)bVar24);
  }
  bVar23 = bVar23 && &UNK_01400000 + bVar24 + unaff_r10 == (undefined *)0x0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xe3ffffff < unaff_r10 || CARRY4(unaff_r10 + 0x1c000000,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0x1c000000 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfdffffff < unaff_r10 || CARRY4(unaff_r10 + 0x2000000,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0x2000000 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xcfffffff < unaff_r10 || CARRY4(unaff_r10 + 0x30000000,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0x30000000 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0x93ffffff < unaff_r10 || CARRY4(unaff_r10 + 0x6c000000,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0x6c000000 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0x8ffffffc < unaff_r10 || CARRY4(unaff_r10 + 0x70000003,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0x70000003 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0x5fffffff < unaff_r10 || CARRY4(unaff_r10 + 0xa0000000,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0xa0000000 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0x8ffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x70000002,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0x70000002 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0x6fffffff < unaff_r10 || CARRY4(unaff_r10 + 0x90000000,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0x90000000 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0x13ffffff < unaff_r10 || CARRY4(unaff_r10 + 0xec000000,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0xec000000 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffffffc < unaff_r10 || CARRY4(unaff_r10 + 0xf0000003,(uint)bVar24);
  }
  bVar22 = false;
  bVar26 = bVar25;
  if (bVar23 && unaff_r10 + 0xf0000003 + (uint)bVar24 == 0) {
    bVar26 = 0xfffffcff < unaff_r8 || CARRY4(unaff_r8 + 0x300,(uint)bVar25);
    puVar17 = (undefined1 *)(unaff_r8 + 0x300 + (uint)bVar25);
    bVar22 = (undefined1 *)(unaff_r8 + 0x300 + (uint)bVar25) == (undefined1 *)0x0;
  }
  if (bVar22) {
    unaff_r10 = unaff_r9 + 9 + (uint)bVar26;
  }
  *(undefined4 *)(puVar17 + -4) = 0x36d9108;
  *(undefined **)(puVar17 + -8) = unaff_r11;
  *(undefined4 *)(puVar17 + -0xc) = uVar12;
  *(undefined4 *)(puVar17 + -0x10) = uVar8;
  *(undefined4 *)(puVar17 + -0x14) = uVar4;
  *(int *)(puVar17 + -0x18) = iVar13;
  puVar18 = puVar17 + -0x20;
  puVar7 = *(undefined4 **)(iVar11 + 0x1c);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam036d9744 + 0x36d91b0));
    func_0x024f83cc(*(undefined4 *)(iRam036d9748 + 0x36d91bc));
    func_0x024f83cc(*(undefined4 *)(iRam036d974c + 0x36d91c8));
    func_0x024f83cc(*(undefined4 *)(iRam036d9750 + 0x36d91d4));
    func_0x024f83cc(*(undefined4 *)(iRam036d9754 + 0x36d91e0));
    func_0x024f83cc(*(undefined4 *)(iRam036d9758 + 0x36d91ec));
    func_0x024f83cc(*(undefined4 *)(iRam036d975c + 0x36d91f8));
    func_0x024f83cc(*(undefined4 *)(iRam036d9760 + 0x36d9204));
    func_0x024f83cc(*(undefined4 *)(iRam036d9764 + 0x36d9210));
    func_0x024f83cc(*(undefined4 *)(iRam036d9768 + 0x36d921c));
    func_0x024f83cc(*(undefined4 *)(iRam036d976c + 0x36d9228));
    func_0x024f83cc(*(undefined4 *)(iRam036d9770 + 0x36d9234));
    func_0x024f83cc(*(undefined4 *)(iRam036d9774 + 0x36d9240));
    func_0x024f83cc(*(undefined4 *)(iRam036d9778 + 0x36d924c));
    func_0x024f83cc(*(undefined4 *)(iRam036d977c + 0x36d9258));
    func_0x024f83cc(*(undefined4 *)(iRam036d9780 + 0x36d9264));
    func_0x024f83cc(*(undefined4 *)(iRam036d9784 + 0x36d9270));
    puVar7 = *(undefined4 **)(iVar11 + 0x1c);
    if (puVar7 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar11);
      puVar7 = *(undefined4 **)(iVar11 + 0x1c);
    }
  }
  uVar12 = *puVar7;
  iVar13 = *(int *)(iVar1 + 0x50);
  if (*(int *)(**(int **)(iRam036d9788 + 0x36d9294) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar12 = func_0x05171434(uVar12,0);
  if (iVar13 == 0) {
    func_0x024f83d4();
  }
  uVar8 = func_0x0475399c(iVar13,uVar12,**(undefined4 **)(iRam036d978c + 0x36d92d8));
  puVar3 = (undefined *)func_0x02965180(uVar8,0);
  if (puVar3 < (undefined *)0x4a3314ab) {
    if (puVar3 < (undefined *)0x335bb157) {
      if (puVar3 == &UNK_02227698) {
        iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d97c4 + 0x36d9550),0);
        uVar21 = iVar13 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x48);
LAB_036d969c:
          iVar1 = *(int *)(iVar11 + 4);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x024f83fc(iVar1);
          }
          piVar9 = (int *)0x0;
          if (piVar2 != (int *)0x0) {
            if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*piVar2 + 0xb8)) &&
               (piVar9 = piVar2,
               *(int *)(*(int *)(*piVar2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1))
            {
              piVar9 = (int *)0x0;
            }
          }
          return piVar9;
        }
      }
      else if (puVar3 == (undefined *)0xe7c632f) {
        iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d97ac + 0x36d957c),0);
        uVar21 = iVar13 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x1c);
          goto LAB_036d969c;
        }
      }
      else {
        bVar24 = (undefined *)0x335bb155 < puVar3;
        uVar21 = false;
        if (puVar3 == (undefined *)0x335bb156) {
          iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9790 + 0x36d9344),0);
          uVar21 = iVar13 == 0;
          bVar24 = true;
          if (!(bool)uVar21) {
            iVar11 = *(int *)(iVar11 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x34);
            goto LAB_036d969c;
          }
        }
      }
    }
    else if (puVar3 < (undefined *)0x44330b39) {
      if (puVar3 == (undefined *)0x39a1cb23) {
        iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d97bc + 0x36d95d4),0);
        uVar21 = iVar13 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x38);
          goto LAB_036d969c;
        }
      }
      else {
        bVar24 = (undefined *)0x44330b37 < puVar3;
        uVar21 = false;
        if (puVar3 == (undefined *)0x44330b38) {
          iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9794 + 0x36d93fc),0);
          uVar21 = iVar13 == 0;
          bVar24 = true;
          if (!(bool)uVar21) {
            iVar11 = *(int *)(iVar11 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x30);
            goto LAB_036d969c;
          }
        }
      }
    }
    else if (puVar3 == (undefined *)0x49331317) {
      iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d97b4 + 0x36d9658),0);
      uVar21 = iVar13 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036d969c;
      }
    }
    else {
      bVar24 = (undefined *)0x4a3314a9 < puVar3;
      uVar21 = false;
      if (puVar3 == (undefined *)0x4a3314aa) {
        iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9798 + 0x36d94d8),0);
        uVar21 = iVar13 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
          goto LAB_036d969c;
        }
      }
    }
  }
  else if (puVar3 < (undefined *)0xa110364b) {
    if (puVar3 < (undefined *)0x6927558b) {
      if (puVar3 == (undefined *)0x4b33163d) {
        iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d97b8 + 0x36d95a8),0);
        uVar21 = iVar13 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036d969c;
        }
      }
      else {
        bVar24 = (undefined *)0x69275589 < puVar3;
        uVar21 = false;
        if (puVar3 == (undefined *)0x6927558a) {
          iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d979c + 0x36d93a8),0);
          uVar21 = iVar13 == 0;
          bVar24 = true;
          if (!(bool)uVar21) {
            iVar11 = *(int *)(iVar11 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x44);
            goto LAB_036d969c;
          }
        }
      }
    }
    else if (puVar3 == (undefined *)0xa110364a) {
      iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d97c0 + 0x36d962c),0);
      uVar21 = iVar13 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x40);
        goto LAB_036d969c;
      }
    }
    else {
      bVar24 = (undefined *)0x757b0316 < puVar3;
      uVar21 = false;
      if (puVar3 == (undefined *)0x757b0317) {
        iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d97a0 + 0x36d9494),0);
        uVar21 = iVar13 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x3c);
          goto LAB_036d969c;
        }
      }
    }
  }
  else if (puVar3 < (undefined *)0xc9fcd30e) {
    if (puVar3 == (undefined *)0xbf0e11d1) {
      iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d97c8 + 0x36d9600),0);
      uVar21 = iVar13 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036d969c;
      }
    }
    else {
      bVar24 = (undefined *)0xc9fcd30c < puVar3;
      uVar21 = false;
      if (puVar3 == (undefined *)0xc9fcd30d) {
        iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d97a4 + 0x36d9450),0);
        uVar21 = iVar13 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x14);
          goto LAB_036d969c;
        }
      }
    }
  }
  else if (puVar3 == (undefined *)0xedb39c44) {
    iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d97b0 + 0x36d9684),0);
    uVar21 = iVar13 == 0;
    bVar24 = true;
    if (!(bool)uVar21) {
      iVar11 = *(int *)(iVar11 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x20);
      goto LAB_036d969c;
    }
  }
  else {
    bVar24 = (undefined *)0xfe254767 < puVar3;
    uVar21 = false;
    if (puVar3 == (undefined *)0xfe254768) {
      iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d97a8 + 0x36d9524),0);
      uVar21 = iVar13 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x4c);
        goto LAB_036d969c;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036d97cc + 0x36d9704));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036d97d0 + 0x36d9718));
  *(undefined4 *)(puVar17 + -0x20) = 0;
  func_0x0509473c(uVar4,uVar5,uVar8,0);
  func_0x024f83c0(uVar4,iVar11);
  uVar27 = func_0x024f83bc();
  iVar13 = (int)((ulonglong)uVar27 >> 0x20);
  iVar1 = (int)uVar27;
  bVar22 = false;
  bVar25 = bVar24;
  if ((bool)uVar21) {
    bVar25 = 0xffffffca < extraout_r12_03 || CARRY4(extraout_r12_03 + 0x35,(uint)bVar24);
    unaff_r11 = (undefined *)(extraout_r12_03 + 0x35 + (uint)bVar24);
    bVar22 = unaff_r11 == (undefined *)0x0;
  }
  bVar23 = false;
  uVar14 = extraout_r12_03;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xcfffffff < unaff_r8 || CARRY4(unaff_r8 + 0x30000000,(uint)bVar25);
    uVar14 = unaff_r8 + 0x30000000 + (uint)bVar25;
    bVar23 = uVar14 == 0;
  }
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfffffff2 < unaff_r10 || CARRY4(unaff_r10 + 0xd,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0xd + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfffffff4 < unaff_r10 || CARRY4(unaff_r10 + 0xb,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0xb + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfffffff6 < unaff_r10 || CARRY4(unaff_r10 + 9,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 9 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfffffff8 < unaff_r10 || CARRY4(unaff_r10 + 7,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 7 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfffffffa < unaff_r10 || CARRY4(unaff_r10 + 5,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 5 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfffffffc < unaff_r10 || CARRY4(unaff_r10 + 3,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 3 + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfffffffe < unaff_r10 || CARRY4(unaff_r10 + 1,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 1 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xffffff03 < unaff_r10 || CARRY4(unaff_r10 + 0xfc,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0xfc + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffffff0b < unaff_r10 || CARRY4(unaff_r10 + 0xf4,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0xf4 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xffffff13 < unaff_r10 || CARRY4(unaff_r10 + 0xec,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0xec + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffffff1b < unaff_r10 || CARRY4(unaff_r10 + 0xe4,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0xe4 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xffffff23 < unaff_r10 || CARRY4(unaff_r10 + 0xdc,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0xdc + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffffff2b < unaff_r10 || CARRY4(unaff_r10 + 0xd4,(uint)bVar24);
  }
  bVar23 = bVar23 && unaff_r10 + 0xd4 + (uint)bVar24 == 0;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xffffff33 < unaff_r10 || CARRY4(unaff_r10 + 0xcc,(uint)bVar25);
  }
  bVar23 = bVar23 && unaff_r10 + 0xcc + (uint)bVar25 == 0;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffffff3b < unaff_r10 || CARRY4(unaff_r10 + 0xc4,(uint)bVar24);
  }
  bVar22 = false;
  bVar26 = bVar25;
  if (bVar23 && unaff_r10 + 0xc4 + (uint)bVar24 == 0) {
    bVar26 = 0x9ffffffe < unaff_r8 || CARRY4(unaff_r8 + 0x60000001,(uint)bVar25);
    uVar14 = unaff_r8 + 0x60000001 + (uint)bVar25;
    bVar22 = uVar14 == 0;
  }
  bVar23 = false;
  bVar24 = bVar26;
  if (bVar22) {
    bVar24 = 0xffffff53 < uVar14 || CARRY4(uVar14 + 0xac,(uint)bVar26);
    unaff_r11 = (undefined *)(uVar14 + 0xac + (uint)bVar26);
    bVar23 = unaff_r11 == (undefined *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfffffc7f < unaff_r10 || CARRY4(unaff_r10 + 0x380,(uint)bVar24);
    iVar13 = unaff_r10 + 0x380 + (uint)bVar24;
    bVar22 = iVar13 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffffff7f < unaff_r10 || CARRY4(unaff_r10 + 0x80,(uint)bVar25);
    iVar13 = unaff_r10 + 0x80 + (uint)bVar25;
    bVar23 = iVar13 == 0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfffffa7f < unaff_r10 || CARRY4(unaff_r10 + 0x580,(uint)bVar24);
    iVar13 = unaff_r10 + 0x580 + (uint)bVar24;
    bVar22 = iVar13 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfffffe1f < unaff_r10 || CARRY4(unaff_r10 + 0x1e0,(uint)bVar25);
    iVar13 = unaff_r10 + 0x1e0 + (uint)bVar25;
    bVar23 = iVar13 == 0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfffff6bf < unaff_r10 || CARRY4(unaff_r10 + 0x940,(uint)bVar24);
    iVar13 = unaff_r10 + 0x940 + (uint)bVar24;
    bVar22 = iVar13 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfffff3bf < unaff_r10 || CARRY4(unaff_r10 + 0xc40,(uint)bVar25);
    iVar13 = unaff_r10 + 0xc40 + (uint)bVar25;
    bVar23 = iVar13 == 0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfffffeff < unaff_r10 || CARRY4(unaff_r10 + 0x100,(uint)bVar24);
    iVar13 = unaff_r10 + 0x100 + (uint)bVar24;
    bVar22 = iVar13 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffffd3ff < unaff_r10 || CARRY4(unaff_r10 + 0x2c00,(uint)bVar25);
    iVar13 = unaff_r10 + 0x2c00 + (uint)bVar25;
    bVar23 = iVar13 == 0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffff7fff < unaff_r10 || CARRY4(unaff_r10 + 0x8000,(uint)bVar24);
    iVar13 = unaff_r10 + 0x8000 + (uint)bVar24;
    bVar22 = iVar13 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffff5bff < unaff_r10 || CARRY4(unaff_r10 + 0xa400,(uint)bVar25);
    iVar13 = unaff_r10 + 0xa400 + (uint)bVar25;
    bVar23 = iVar13 == 0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffffe3ff < unaff_r10 || CARRY4(unaff_r10 + 0x1c00,(uint)bVar24);
    iVar13 = unaff_r10 + 0x1c00 + (uint)bVar24;
    bVar22 = iVar13 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfffff0ff < unaff_r10 || CARRY4(unaff_r10 + 0xf00,(uint)bVar25);
    iVar13 = unaff_r10 + 0xf00 + (uint)bVar25;
    bVar23 = iVar13 == 0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffff2bff < unaff_r10 || CARRY4(unaff_r10 + 0xd400,(uint)bVar24);
    iVar13 = unaff_r10 + 0xd400 + (uint)bVar24;
    bVar22 = iVar13 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffffd0ff < unaff_r10 || CARRY4(unaff_r10 + 0x2f00,(uint)bVar25);
    iVar13 = unaff_r10 + 0x2f00 + (uint)bVar25;
    bVar23 = iVar13 == 0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfffffdff < unaff_r10 || CARRY4(unaff_r10 + 0x200,(uint)bVar24);
    iVar13 = unaff_r10 + 0x200 + (uint)bVar24;
    bVar22 = iVar13 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffdeffff < unaff_r8 || CARRY4(unaff_r8 + 0x210000,(uint)bVar25);
    puVar18 = (undefined1 *)(unaff_r8 + 0x210000 + (uint)bVar25);
    bVar23 = (undefined1 *)(unaff_r8 + 0x210000 + (uint)bVar25) == (undefined1 *)0x0;
  }
  if (bVar23) {
    unaff_r9 = unaff_r9 + 0xe8000 + (uint)bVar24;
  }
  *(undefined4 *)(puVar18 + -4) = 0x36d9744;
  *(undefined **)(puVar18 + -8) = unaff_r11;
  *(undefined4 *)(puVar18 + -0xc) = uVar12;
  *(undefined4 *)(puVar18 + -0x10) = uVar8;
  *(undefined4 *)(puVar18 + -0x14) = uVar4;
  *(int *)(puVar18 + -0x18) = iVar11;
  puVar19 = puVar18 + -0x20;
  puVar7 = *(undefined4 **)(iVar13 + 0x1c);
  if (puVar7 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam036d9d90 + 0x36d97fc));
    func_0x024f83cc(*(undefined4 *)(iRam036d9d94 + 0x36d9808));
    func_0x024f83cc(*(undefined4 *)(iRam036d9d98 + 0x36d9814));
    func_0x024f83cc(*(undefined4 *)(iRam036d9d9c + 0x36d9820));
    func_0x024f83cc(*(undefined4 *)(iRam036d9da0 + 0x36d982c));
    func_0x024f83cc(*(undefined4 *)(iRam036d9da4 + 0x36d9838));
    func_0x024f83cc(*(undefined4 *)(iRam036d9da8 + 0x36d9844));
    func_0x024f83cc(*(undefined4 *)(iRam036d9dac + 0x36d9850));
    func_0x024f83cc(*(undefined4 *)(iRam036d9db0 + 0x36d985c));
    func_0x024f83cc(*(undefined4 *)(iRam036d9db4 + 0x36d9868));
    func_0x024f83cc(*(undefined4 *)(iRam036d9db8 + 0x36d9874));
    func_0x024f83cc(*(undefined4 *)(iRam036d9dbc + 0x36d9880));
    func_0x024f83cc(*(undefined4 *)(iRam036d9dc0 + 0x36d988c));
    func_0x024f83cc(*(undefined4 *)(iRam036d9dc4 + 0x36d9898));
    func_0x024f83cc(*(undefined4 *)(iRam036d9dc8 + 0x36d98a4));
    func_0x024f83cc(*(undefined4 *)(iRam036d9dcc + 0x36d98b0));
    func_0x024f83cc(*(undefined4 *)(iRam036d9dd0 + 0x36d98bc));
    puVar7 = *(undefined4 **)(iVar13 + 0x1c);
    if (puVar7 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar13);
      puVar7 = *(undefined4 **)(iVar13 + 0x1c);
    }
  }
  uVar12 = *puVar7;
  iVar11 = *(int *)(iVar1 + 0x50);
  if (*(int *)(**(int **)(iRam036d9dd4 + 0x36d98e0) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar12 = func_0x05171434(uVar12,0);
  if (iVar11 == 0) {
    func_0x024f83d4();
  }
  uVar8 = func_0x0475399c(iVar11,uVar12,**(undefined4 **)(iRam036d9dd8 + 0x36d9924));
  puVar3 = (undefined *)func_0x02965180(uVar8,0);
  if (puVar3 < (undefined *)0x4a3314ab) {
    if (puVar3 < (undefined *)0x335bb157) {
      if (puVar3 == &UNK_02227698) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9e10 + 0x36d9b9c),0);
        uVar21 = iVar11 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar13 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x48);
LAB_036d9ce8:
          iVar1 = *(int *)(iVar11 + 4);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x024f83fc(iVar1);
          }
          piVar9 = (int *)0x0;
          if (piVar2 != (int *)0x0) {
            if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*piVar2 + 0xb8)) &&
               (piVar9 = piVar2,
               *(int *)(*(int *)(*piVar2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1))
            {
              piVar9 = (int *)0x0;
            }
          }
          return piVar9;
        }
      }
      else if (puVar3 == (undefined *)0xe7c632f) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9df8 + 0x36d9bc8),0);
        uVar21 = iVar11 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar13 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x1c);
          goto LAB_036d9ce8;
        }
      }
      else {
        bVar24 = (undefined *)0x335bb155 < puVar3;
        uVar21 = false;
        if (puVar3 == (undefined *)0x335bb156) {
          iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9ddc + 0x36d9990),0);
          uVar21 = iVar11 == 0;
          bVar24 = true;
          if (!(bool)uVar21) {
            iVar11 = *(int *)(iVar13 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x34);
            goto LAB_036d9ce8;
          }
        }
      }
    }
    else if (puVar3 < (undefined *)0x44330b39) {
      if (puVar3 == (undefined *)0x39a1cb23) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9e08 + 0x36d9c20),0);
        uVar21 = iVar11 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar13 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x38);
          goto LAB_036d9ce8;
        }
      }
      else {
        bVar24 = (undefined *)0x44330b37 < puVar3;
        uVar21 = false;
        if (puVar3 == (undefined *)0x44330b38) {
          iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9de0 + 0x36d9a48),0);
          uVar21 = iVar11 == 0;
          bVar24 = true;
          if (!(bool)uVar21) {
            iVar11 = *(int *)(iVar13 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x30);
            goto LAB_036d9ce8;
          }
        }
      }
    }
    else if (puVar3 == (undefined *)0x49331317) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9e00 + 0x36d9ca4),0);
      uVar21 = iVar11 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar13 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036d9ce8;
      }
    }
    else {
      bVar24 = (undefined *)0x4a3314a9 < puVar3;
      uVar21 = false;
      if (puVar3 == (undefined *)0x4a3314aa) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9de4 + 0x36d9b24),0);
        uVar21 = iVar11 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar13 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
          goto LAB_036d9ce8;
        }
      }
    }
  }
  else if (puVar3 < (undefined *)0xa110364b) {
    if (puVar3 < (undefined *)0x6927558b) {
      if (puVar3 == (undefined *)0x4b33163d) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9e04 + 0x36d9bf4),0);
        uVar21 = iVar11 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar13 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036d9ce8;
        }
      }
      else {
        bVar24 = (undefined *)0x69275589 < puVar3;
        uVar21 = false;
        if (puVar3 == (undefined *)0x6927558a) {
          iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9de8 + 0x36d99f4),0);
          uVar21 = iVar11 == 0;
          bVar24 = true;
          if (!(bool)uVar21) {
            iVar11 = *(int *)(iVar13 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x44);
            goto LAB_036d9ce8;
          }
        }
      }
    }
    else if (puVar3 == (undefined *)0xa110364a) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9e0c + 0x36d9c78),0);
      uVar21 = iVar11 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar13 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x40);
        goto LAB_036d9ce8;
      }
    }
    else {
      bVar24 = (undefined *)0x757b0316 < puVar3;
      uVar21 = false;
      if (puVar3 == (undefined *)0x757b0317) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9dec + 0x36d9ae0),0);
        uVar21 = iVar11 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar13 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x3c);
          goto LAB_036d9ce8;
        }
      }
    }
  }
  else if (puVar3 < (undefined *)0xc9fcd30e) {
    if (puVar3 == (undefined *)0xbf0e11d1) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9e14 + 0x36d9c4c),0);
      uVar21 = iVar11 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar13 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036d9ce8;
      }
    }
    else {
      bVar24 = (undefined *)0xc9fcd30c < puVar3;
      uVar21 = false;
      if (puVar3 == (undefined *)0xc9fcd30d) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9df0 + 0x36d9a9c),0);
        uVar21 = iVar11 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar13 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x14);
          goto LAB_036d9ce8;
        }
      }
    }
  }
  else if (puVar3 == (undefined *)0xedb39c44) {
    iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9dfc + 0x36d9cd0),0);
    uVar21 = iVar11 == 0;
    bVar24 = true;
    if (!(bool)uVar21) {
      iVar11 = *(int *)(iVar13 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x20);
      goto LAB_036d9ce8;
    }
  }
  else {
    bVar24 = (undefined *)0xfe254767 < puVar3;
    uVar21 = false;
    if (puVar3 == (undefined *)0xfe254768) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9df4 + 0x36d9b70),0);
      uVar21 = iVar11 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar13 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x4c);
        goto LAB_036d9ce8;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036d9e18 + 0x36d9d50));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036d9e1c + 0x36d9d64));
  *(undefined4 *)(puVar18 + -0x20) = 0;
  func_0x0509473c(uVar4,uVar5,uVar8,0);
  func_0x024f83c0(uVar4,iVar13);
  uVar27 = func_0x024f83bc();
  puVar3 = (undefined *)((ulonglong)uVar27 >> 0x20);
  iVar1 = (int)uVar27;
  bVar22 = false;
  bVar25 = bVar24;
  if ((bool)uVar21) {
    bVar25 = 0xfffddfff < extraout_r12_04 || CARRY4(extraout_r12_04 + 0x22000,(uint)bVar24);
    unaff_r10 = extraout_r12_04 + 0x22000 + (uint)bVar24;
    bVar22 = unaff_r10 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffffc6ff < unaff_r8 || CARRY4(unaff_r8 + 0x3900,(uint)bVar25);
    unaff_r11 = (undefined *)(unaff_r8 + 0x3900 + (uint)bVar25);
    bVar23 = unaff_r11 == (undefined *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfff17fff < unaff_r10 || CARRY4(unaff_r10 + 0xe8000,(uint)bVar24);
    puVar3 = (undefined *)(unaff_r10 + 0xe8000 + (uint)bVar24);
    bVar22 = puVar3 == (undefined *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfff1ffff < unaff_r10 || CARRY4(unaff_r10 + 0xe0000,(uint)bVar25);
    puVar3 = (undefined *)(unaff_r10 + 0xe0000 + (uint)bVar25);
    bVar23 = puVar3 == (undefined *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfff27fff < unaff_r10 || CARRY4(unaff_r10 + 0xd8000,(uint)bVar24);
    puVar3 = (undefined *)(unaff_r10 + 0xd8000 + (uint)bVar24);
    bVar22 = puVar3 == (undefined *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfff2ffff < unaff_r10 || CARRY4(unaff_r10 + 0xd0000,(uint)bVar25);
    puVar3 = (undefined *)(unaff_r10 + 0xd0000 + (uint)bVar25);
    bVar23 = puVar3 == (undefined *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfff37fff < unaff_r10 || CARRY4(unaff_r10 + 0xc8000,(uint)bVar24);
    puVar3 = (undefined *)(unaff_r10 + 0xc8000 + (uint)bVar24);
    bVar22 = puVar3 == (undefined *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfff3ffff < unaff_r10 || CARRY4(unaff_r10 + 0xc0000,(uint)bVar25);
    puVar3 = (undefined *)(unaff_r10 + 0xc0000 + (uint)bVar25);
    bVar23 = puVar3 == (undefined *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfff47fff < unaff_r10 || CARRY4(unaff_r10 + 0xb8000,(uint)bVar24);
    puVar3 = (undefined *)(unaff_r10 + 0xb8000 + (uint)bVar24);
    bVar22 = puVar3 == (undefined *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfff4ffff < unaff_r10 || CARRY4(unaff_r10 + 0xb0000,(uint)bVar25);
    puVar3 = (undefined *)(unaff_r10 + 0xb0000 + (uint)bVar25);
    bVar23 = puVar3 == (undefined *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfff57fff < unaff_r10 || CARRY4(unaff_r10 + 0xa8000,(uint)bVar24);
    puVar3 = (undefined *)(unaff_r10 + 0xa8000 + (uint)bVar24);
    bVar22 = puVar3 == (undefined *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfff5ffff < unaff_r10 || CARRY4(unaff_r10 + 0xa0000,(uint)bVar25);
    puVar3 = (undefined *)(unaff_r10 + 0xa0000 + (uint)bVar25);
    bVar23 = puVar3 == (undefined *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfff67fff < unaff_r10 || CARRY4(unaff_r10 + 0x98000,(uint)bVar24);
    puVar3 = (undefined *)(unaff_r10 + 0x98000 + (uint)bVar24);
    bVar22 = puVar3 == (undefined *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfff6ffff < unaff_r10 || CARRY4(unaff_r10 + 0x90000,(uint)bVar25);
    puVar3 = (undefined *)(unaff_r10 + 0x90000 + (uint)bVar25);
    bVar23 = puVar3 == (undefined *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfff77fff < unaff_r10 || CARRY4(unaff_r10 + 0x88000,(uint)bVar24);
    puVar3 = (undefined *)(unaff_r10 + 0x88000 + (uint)bVar24);
    bVar22 = puVar3 == (undefined *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfff7ffff < unaff_r10 || CARRY4(unaff_r10 + 0x80000,(uint)bVar25);
    puVar3 = (undefined *)(unaff_r10 + 0x80000 + (uint)bVar25);
    bVar23 = puVar3 == (undefined *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfff87fff < unaff_r10 || CARRY4(unaff_r10 + 0x78000,(uint)bVar24);
    puVar3 = (undefined *)(unaff_r10 + 0x78000 + (uint)bVar24);
    bVar22 = puVar3 == (undefined *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfffffcff < unaff_r8 || CARRY4(unaff_r8 + 0x300,(uint)bVar25);
    unaff_r11 = (undefined *)(unaff_r8 + 0x300 + (uint)bVar25);
    bVar23 = unaff_r11 == (undefined *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfff9ffff < extraout_r12_04 || CARRY4(extraout_r12_04 + 0x60000,(uint)bVar24);
    unaff_r10 = extraout_r12_04 + 0x60000 + (uint)bVar24;
    bVar22 = unaff_r10 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffdaffff < unaff_r10 || CARRY4(unaff_r10 + 0x250000,(uint)bVar25);
    puVar3 = (undefined *)(unaff_r10 + 0x250000 + (uint)bVar25);
    bVar23 = puVar3 == (undefined *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xff2bffff < unaff_r10 || CARRY4((uint)(&UNK_00d40000 + unaff_r10),(uint)bVar24);
    puVar3 = &UNK_00d40000 + bVar24 + unaff_r10;
    bVar22 = puVar3 == (undefined *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfff3ffff < unaff_r10 || CARRY4(unaff_r10 + 0xc0000,(uint)bVar25);
    puVar3 = (undefined *)(unaff_r10 + 0xc0000 + (uint)bVar25);
    bVar23 = puVar3 == (undefined *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfff4ffff < unaff_r10 || CARRY4(unaff_r10 + 0xb0000,(uint)bVar24);
    puVar3 = (undefined *)(unaff_r10 + 0xb0000 + (uint)bVar24);
    bVar22 = puVar3 == (undefined *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffb7ffff < unaff_r10 || CARRY4(unaff_r10 + 0x480000,(uint)bVar25);
    puVar3 = (undefined *)(unaff_r10 + 0x480000 + (uint)bVar25);
    bVar23 = puVar3 == (undefined *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xff87ffff < unaff_r10 || CARRY4(unaff_r10 + 0x780000,(uint)bVar24);
    puVar3 = (undefined *)(unaff_r10 + 0x780000 + (uint)bVar24);
    bVar22 = puVar3 == (undefined *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfcefffff < unaff_r10 || CARRY4((uint)(&UNK_03100000 + unaff_r10),(uint)bVar25);
    puVar3 = &UNK_03100000 + bVar25 + unaff_r10;
    bVar23 = puVar3 == (undefined *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfe6fffff < unaff_r10 || CARRY4((uint)(&UNK_01900000 + unaff_r10),(uint)bVar24);
    puVar3 = &UNK_01900000 + bVar24 + unaff_r10;
    bVar22 = puVar3 == (undefined *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfcbfffff < unaff_r10 || CARRY4((uint)(&UNK_03400000 + unaff_r10),(uint)bVar25);
    puVar3 = &UNK_03400000 + bVar25 + unaff_r10;
    bVar23 = puVar3 == (undefined *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfa7fffff < unaff_r10 || CARRY4((uint)(&UNK_05800000 + unaff_r10),(uint)bVar24);
    puVar3 = &UNK_05800000 + bVar24 + unaff_r10;
    bVar22 = puVar3 == (undefined *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xff6fffff < unaff_r10 || CARRY4((uint)(&UNK_00900000 + unaff_r10),(uint)bVar25);
    puVar3 = &UNK_00900000 + bVar25 + unaff_r10;
    bVar23 = puVar3 == (undefined *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xf0ffffff < unaff_r10 || CARRY4(unaff_r10 + 0xf000000,(uint)bVar24);
    puVar3 = (undefined *)(unaff_r10 + 0xf000000 + (uint)bVar24);
    bVar22 = puVar3 == (undefined *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xf77fffff < unaff_r10 || CARRY4(unaff_r10 + 0x8800000,(uint)bVar25);
    puVar3 = (undefined *)(unaff_r10 + 0x8800000 + (uint)bVar25);
    bVar23 = puVar3 == (undefined *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfe3fffff < unaff_r10 || CARRY4(unaff_r10 + 0x1c00000,(uint)bVar24);
    puVar3 = (undefined *)(unaff_r10 + 0x1c00000 + (uint)bVar24);
    bVar22 = puVar3 == (undefined *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xf43fffff < unaff_r10 || CARRY4(unaff_r10 + 0xbc00000,(uint)bVar25);
    puVar3 = (undefined *)(unaff_r10 + 0xbc00000 + (uint)bVar25);
    bVar23 = puVar3 == (undefined *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0x1fffffff < unaff_r8 || CARRY4(unaff_r8 + 0xe0000000,(uint)bVar24);
    puVar19 = (undefined1 *)(unaff_r8 + 0xe0000000 + (uint)bVar24);
    bVar22 = (undefined1 *)(unaff_r8 + 0xe0000000 + (uint)bVar24) == (undefined1 *)0x0;
  }
  if (bVar22) {
    unaff_r9 = unaff_r9 + -0x64000000 + (uint)bVar25;
  }
  *(undefined4 *)(puVar19 + -4) = 0x36d9d90;
  *(undefined **)(puVar19 + -8) = unaff_r11;
  *(undefined4 *)(puVar19 + -0xc) = uVar12;
  *(undefined4 *)(puVar19 + -0x10) = uVar8;
  *(undefined4 *)(puVar19 + -0x14) = uVar4;
  *(int *)(puVar19 + -0x18) = iVar13;
  puVar7 = *(undefined4 **)(puVar3 + 0x1c);
  if (puVar7 == (undefined4 *)0x0) {
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
    puVar7 = *(undefined4 **)(puVar3 + 0x1c);
    if (puVar7 == (undefined4 *)0x0) {
      func_0x024f83f8(puVar3);
      puVar7 = *(undefined4 **)(puVar3 + 0x1c);
    }
  }
  uVar12 = *puVar7;
  iVar11 = *(int *)(iVar1 + 0x48);
  if (*(int *)(**(int **)(iRam036da378 + 0x36d9f14) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar12 = func_0x05171434(uVar12,0);
  if (iVar11 == 0) {
    func_0x024f83d4();
  }
  uVar8 = func_0x0475399c(iVar11,uVar12,**(undefined4 **)(iRam036da37c + 0x36d9f58));
  puVar6 = (undefined *)func_0x02965180(uVar8,0);
  if (puVar6 < (undefined *)0x87a4488d) {
    if (puVar6 < (undefined *)0x4b393819) {
      if (puVar6 == &UNK_048acfb8) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da3a4 + 0x36da148),0);
        uVar21 = iVar11 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(puVar3 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x34);
LAB_036da294:
          iVar1 = *(int *)(iVar11 + 4);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x024f83fc(iVar1);
          }
          piVar9 = (int *)0x0;
          if (piVar2 != (int *)0x0) {
            if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*piVar2 + 0xb8)) &&
               (piVar9 = piVar2,
               *(int *)(*(int *)(*piVar2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1))
            {
              piVar9 = (int *)0x0;
            }
          }
          return piVar9;
        }
      }
      else if (puVar6 == (undefined *)0x44648d72) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da3a0 + 0x36da174),0);
        uVar21 = iVar11 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(puVar3 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x30);
          goto LAB_036da294;
        }
      }
      else {
        bVar24 = (undefined *)0x4b393817 < puVar6;
        uVar21 = false;
        if (puVar6 == (undefined *)0x4b393818) {
          iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da380 + 0x36d9fc4),0);
          uVar21 = iVar11 == 0;
          bVar24 = true;
          if (!(bool)uVar21) {
            iVar11 = *(int *)(puVar3 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x14);
            goto LAB_036da294;
          }
        }
      }
    }
    else if (puVar6 == (undefined *)0x87a4488c) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da394 + 0x36da1f8),0);
      uVar21 = iVar11 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(puVar3 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036da294;
      }
    }
    else if (puVar6 == (undefined *)0x5bc15335) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da3ac + 0x36da224),0);
      uVar21 = iVar11 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(puVar3 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x44);
        goto LAB_036da294;
      }
    }
    else {
      bVar24 = (undefined *)0x5d6adef6 < puVar6;
      uVar21 = false;
      if (puVar6 == (undefined *)0x5d6adef7) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da384 + 0x36da07c),0);
        uVar21 = iVar11 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(puVar3 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036da294;
        }
      }
    }
  }
  else if (puVar6 < (undefined *)0xaf0e9ec8) {
    if (puVar6 == (undefined *)0x8e74336c) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da39c + 0x36da1a0),0);
      uVar21 = iVar11 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(puVar3 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036da294;
      }
    }
    else if (puVar6 == (undefined *)0x9dbb78b9) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da3a8 + 0x36da1cc),0);
      uVar21 = iVar11 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(puVar3 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x3c);
        goto LAB_036da294;
      }
    }
    else {
      bVar24 = (undefined *)0xaf0e9ec6 < puVar6;
      uVar21 = false;
      if (puVar6 == (undefined *)0xaf0e9ec7) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da388 + 0x36da028),0);
        uVar21 = iVar11 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(puVar3 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x40);
          goto LAB_036da294;
        }
      }
    }
  }
  else if (puVar6 < (undefined *)0xd3917654) {
    if (puVar6 == (undefined *)0xcd1701e0) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da3b0 + 0x36da250),0);
      uVar21 = iVar11 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(puVar3 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036da294;
      }
    }
    else {
      bVar24 = (undefined *)0xd3917652 < puVar6;
      uVar21 = false;
      if (puVar6 == (undefined *)0xd3917653) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da38c + 0x36da0d0),0);
        uVar21 = iVar11 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(puVar3 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
          goto LAB_036da294;
        }
      }
    }
  }
  else if (puVar6 == (undefined *)0xdf1ae323) {
    iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da398 + 0x36da27c),0);
    uVar21 = iVar11 == 0;
    bVar24 = true;
    if (!(bool)uVar21) {
      iVar11 = *(int *)(puVar3 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x20);
      goto LAB_036da294;
    }
  }
  else {
    bVar24 = (undefined *)0xed8e82d0 < puVar6;
    uVar21 = false;
    if (puVar6 == (undefined *)0xed8e82d1) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da390 + 0x36da11c),0);
      uVar21 = iVar11 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(puVar3 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x38);
        goto LAB_036da294;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036da3b4 + 0x36da2fc));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036da3b8 + 0x36da310));
  *(undefined4 *)(puVar19 + -0x20) = 0;
  func_0x0509473c(uVar4,uVar5,uVar8,0);
  func_0x024f83c0(uVar4,puVar3);
  uVar27 = func_0x024f83bc();
  iVar11 = (int)((ulonglong)uVar27 >> 0x20);
  iVar1 = (int)uVar27;
  bVar22 = false;
  bVar25 = bVar24;
  if ((bool)uVar21) {
    bVar25 = 0xf0ffffff < extraout_r12_05 || CARRY4(extraout_r12_05 + 0xf000000,(uint)bVar24);
    unaff_r10 = extraout_r12_05 + 0xf000000 + (uint)bVar24;
    bVar22 = unaff_r10 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfd9fffff < unaff_r8 || CARRY4((uint)(&UNK_02600000 + unaff_r8),(uint)bVar25);
    unaff_r11 = &UNK_02600000 + bVar25 + unaff_r8;
    bVar23 = unaff_r11 == (undefined *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0x5ffffffd < unaff_r10 || CARRY4(unaff_r10 + 0xa0000002,(uint)bVar24);
    iVar11 = unaff_r10 + 0xa0000002 + (uint)bVar24;
    bVar22 = iVar11 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0x7ffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x80000002,(uint)bVar25);
    iVar11 = unaff_r10 + 0x80000002 + (uint)bVar25;
    bVar23 = iVar11 == 0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0x9ffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x60000002,(uint)bVar24);
    iVar11 = unaff_r10 + 0x60000002 + (uint)bVar24;
    bVar22 = iVar11 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xbffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x40000002,(uint)bVar25);
    iVar11 = unaff_r10 + 0x40000002 + (uint)bVar25;
    bVar23 = iVar11 == 0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xdffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x20000002,(uint)bVar24);
    iVar11 = unaff_r10 + 0x20000002 + (uint)bVar24;
    bVar22 = iVar11 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfffffffd < unaff_r10 || CARRY4(unaff_r10 + 2,(uint)bVar25);
    iVar11 = unaff_r10 + 2 + (uint)bVar25;
    bVar23 = iVar11 == 0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0x1ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0xe0000001,(uint)bVar24);
    iVar11 = unaff_r10 + 0xe0000001 + (uint)bVar24;
    bVar22 = iVar11 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0x3ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0xc0000001,(uint)bVar25);
    iVar11 = unaff_r10 + 0xc0000001 + (uint)bVar25;
    bVar23 = iVar11 == 0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0x5ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0xa0000001,(uint)bVar24);
    iVar11 = unaff_r10 + 0xa0000001 + (uint)bVar24;
    bVar22 = iVar11 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0x7ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x80000001,(uint)bVar25);
    iVar11 = unaff_r10 + 0x80000001 + (uint)bVar25;
    bVar23 = iVar11 == 0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0x9ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x60000001,(uint)bVar24);
    iVar11 = unaff_r10 + 0x60000001 + (uint)bVar24;
    bVar22 = iVar11 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xbffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x40000001,(uint)bVar25);
    iVar11 = unaff_r10 + 0x40000001 + (uint)bVar25;
    bVar23 = iVar11 == 0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xdffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x20000001,(uint)bVar24);
    iVar11 = unaff_r10 + 0x20000001 + (uint)bVar24;
    bVar22 = iVar11 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xf27fffff < unaff_r8 || CARRY4(unaff_r8 + 0xd800000,(uint)bVar25);
    unaff_r11 = (undefined *)(unaff_r8 + 0xd800000 + (uint)bVar25);
    bVar23 = unaff_r11 == (undefined *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xd3ffffff < extraout_r12_05 || CARRY4(extraout_r12_05 + 0x2c000000,(uint)bVar24);
    unaff_r10 = extraout_r12_05 + 0x2c000000 + (uint)bVar24;
    bVar22 = unaff_r10 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0x3ffffffa < unaff_r10 || CARRY4(unaff_r10 + 0xc0000005,(uint)bVar25);
    iVar11 = unaff_r10 + 0xc0000005 + (uint)bVar25;
    bVar23 = iVar11 == 0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffffffd8 < unaff_r10 || CARRY4(unaff_r10 + 0x27,(uint)bVar24);
    iVar11 = unaff_r10 + 0x27 + (uint)bVar24;
    bVar22 = iVar11 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffffffc4 < unaff_r10 || CARRY4(unaff_r10 + 0x3b,(uint)bVar25);
    iVar11 = unaff_r10 + 0x3b + (uint)bVar25;
    bVar23 = iVar11 == 0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffffffe5 < unaff_r10 || CARRY4(unaff_r10 + 0x1a,(uint)bVar24);
    iVar11 = unaff_r10 + 0x1a + (uint)bVar24;
    bVar22 = iVar11 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfffffff9 < unaff_r10 || CARRY4(unaff_r10 + 6,(uint)bVar25);
    iVar11 = unaff_r10 + 6 + (uint)bVar25;
    bVar23 = iVar11 == 0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffffffcf < unaff_r10 || CARRY4(unaff_r10 + 0x30,(uint)bVar24);
    iVar11 = unaff_r10 + 0x30 + (uint)bVar24;
    bVar22 = iVar11 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfffffdcf < unaff_r10 || CARRY4(unaff_r10 + 0x230,(uint)bVar25);
    iVar1 = unaff_r10 + 0x230 + (uint)bVar25;
    bVar23 = iVar1 == 0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffffff8f < unaff_r10 || CARRY4(unaff_r10 + 0x70,(uint)bVar24);
    iVar11 = unaff_r10 + 0x70 + (uint)bVar24;
    bVar22 = iVar11 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffffff43 < unaff_r10 || CARRY4(unaff_r10 + 0xbc,(uint)bVar25);
    iVar11 = unaff_r10 + 0xbc + (uint)bVar25;
    bVar23 = iVar11 == 0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffffff23 < unaff_r10 || CARRY4(unaff_r10 + 0xdc,(uint)bVar24);
    iVar11 = unaff_r10 + 0xdc + (uint)bVar24;
    bVar22 = iVar11 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffffff9f < unaff_r10 || CARRY4(unaff_r10 + 0x60,(uint)bVar25);
    iVar11 = unaff_r10 + 0x60 + (uint)bVar25;
    bVar23 = iVar11 == 0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfffffc1f < unaff_r10 || CARRY4(unaff_r10 + 0x3e0,(uint)bVar24);
    iVar1 = unaff_r10 + 0x3e0 + (uint)bVar24;
    bVar22 = iVar1 == 0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfffffd0f < unaff_r10 || CARRY4(unaff_r10 + 0x2f0,(uint)bVar25);
    iVar1 = unaff_r10 + 0x2f0 + (uint)bVar25;
    bVar23 = iVar1 == 0;
  }
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffffdcff < unaff_r8 || CARRY4(unaff_r8 + 0x2300,(uint)bVar24);
  }
  if (bVar23 && unaff_r8 + 0x2300 + (uint)bVar24 == 0) {
    unaff_r8 = unaff_r9 + 0xf00 + (uint)bVar25;
  }
  *(undefined4 *)(puVar19 + -0x24) = 0x36da33c;
  *(undefined **)(puVar19 + -0x28) = unaff_r11;
  *(undefined4 *)(puVar19 + -0x2c) = uVar12;
  *(undefined4 *)(puVar19 + -0x30) = uVar8;
  *(undefined4 *)(puVar19 + -0x34) = uVar4;
  *(undefined **)(puVar19 + -0x38) = puVar3;
  puVar7 = *(undefined4 **)(iVar11 + 0x1c);
  if (puVar7 == (undefined4 *)0x0) {
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
    puVar7 = *(undefined4 **)(iVar11 + 0x1c);
    if (puVar7 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar11);
      puVar7 = *(undefined4 **)(iVar11 + 0x1c);
    }
  }
  uVar12 = *puVar7;
  iVar13 = *(int *)(iVar1 + 0x48);
  if (*(int *)(**(int **)(iRam036da914 + 0x36da4b0) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar12 = func_0x05171434(uVar12,0);
  if (iVar13 == 0) {
    func_0x024f83d4();
  }
  uVar12 = func_0x0475399c(iVar13,uVar12,**(undefined4 **)(iRam036da918 + 0x36da4f4));
  puVar3 = (undefined *)func_0x02965180(uVar12,0);
  if (puVar3 < (undefined *)0x87a4488d) {
    if (puVar3 < (undefined *)0x4b393819) {
      if (puVar3 == &UNK_048acfb8) {
        iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da940 + 0x36da6e4),0);
        uVar21 = iVar13 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x34);
LAB_036da830:
          iVar1 = *(int *)(iVar11 + 4);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x024f83fc(iVar1);
          }
          piVar9 = (int *)0x0;
          if (piVar2 != (int *)0x0) {
            if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*piVar2 + 0xb8)) &&
               (piVar9 = piVar2,
               *(int *)(*(int *)(*piVar2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1))
            {
              piVar9 = (int *)0x0;
            }
          }
          return piVar9;
        }
      }
      else if (puVar3 == (undefined *)0x44648d72) {
        iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da93c + 0x36da710),0);
        uVar21 = iVar13 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x30);
          goto LAB_036da830;
        }
      }
      else {
        bVar24 = (undefined *)0x4b393817 < puVar3;
        uVar21 = false;
        if (puVar3 == (undefined *)0x4b393818) {
          iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da91c + 0x36da560),0);
          uVar21 = iVar13 == 0;
          bVar24 = true;
          if (!(bool)uVar21) {
            iVar11 = *(int *)(iVar11 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x14);
            goto LAB_036da830;
          }
        }
      }
    }
    else if (puVar3 == (undefined *)0x87a4488c) {
      iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da930 + 0x36da794),0);
      uVar21 = iVar13 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036da830;
      }
    }
    else if (puVar3 == (undefined *)0x5bc15335) {
      iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da948 + 0x36da7c0),0);
      uVar21 = iVar13 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x44);
        goto LAB_036da830;
      }
    }
    else {
      bVar24 = (undefined *)0x5d6adef6 < puVar3;
      uVar21 = false;
      if (puVar3 == (undefined *)0x5d6adef7) {
        iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da920 + 0x36da618),0);
        uVar21 = iVar13 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036da830;
        }
      }
    }
  }
  else if (puVar3 < (undefined *)0xaf0e9ec8) {
    if (puVar3 == (undefined *)0x8e74336c) {
      iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da938 + 0x36da73c),0);
      uVar21 = iVar13 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036da830;
      }
    }
    else if (puVar3 == (undefined *)0x9dbb78b9) {
      iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da944 + 0x36da768),0);
      uVar21 = iVar13 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x3c);
        goto LAB_036da830;
      }
    }
    else {
      bVar24 = (undefined *)0xaf0e9ec6 < puVar3;
      uVar21 = false;
      if (puVar3 == (undefined *)0xaf0e9ec7) {
        iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da924 + 0x36da5c4),0);
        uVar21 = iVar13 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x40);
          goto LAB_036da830;
        }
      }
    }
  }
  else if (puVar3 < (undefined *)0xd3917654) {
    if (puVar3 == (undefined *)0xcd1701e0) {
      iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da94c + 0x36da7ec),0);
      uVar21 = iVar13 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036da830;
      }
    }
    else {
      bVar24 = (undefined *)0xd3917652 < puVar3;
      uVar21 = false;
      if (puVar3 == (undefined *)0xd3917653) {
        iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da928 + 0x36da66c),0);
        uVar21 = iVar13 == 0;
        bVar24 = true;
        if (!(bool)uVar21) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
          goto LAB_036da830;
        }
      }
    }
  }
  else if (puVar3 == (undefined *)0xdf1ae323) {
    iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da934 + 0x36da818),0);
    uVar21 = iVar13 == 0;
    bVar24 = true;
    if (!(bool)uVar21) {
      iVar11 = *(int *)(iVar11 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x20);
      goto LAB_036da830;
    }
  }
  else {
    bVar24 = (undefined *)0xed8e82d0 < puVar3;
    uVar21 = false;
    if (puVar3 == (undefined *)0xed8e82d1) {
      iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da92c + 0x36da6b8),0);
      uVar21 = iVar13 == 0;
      bVar24 = true;
      if (!(bool)uVar21) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x38);
        goto LAB_036da830;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036da950 + 0x36da898));
  uVar8 = func_0x024f83c8();
  uVar4 = func_0x024f83b8(*(undefined4 *)(iRam036da954 + 0x36da8ac));
  *(undefined4 *)(puVar19 + -0x40) = 0;
  func_0x0509473c(uVar8,uVar4,uVar12,0);
  func_0x024f83c0(uVar8,iVar11);
  pcVar10 = (char *)func_0x024f83bc();
  bVar25 = bVar24;
  if ((bool)uVar21) {
    bVar25 = 0xfffffd7f < extraout_r12_06 || CARRY4(extraout_r12_06 + 0x280,(uint)bVar24);
  }
  bVar22 = false;
  bVar26 = bVar25;
  if ((bool)uVar21 && extraout_r12_06 + 0x280 + (uint)bVar24 == 0) {
    bVar26 = 0xffffffc0 < unaff_r8 || CARRY4(unaff_r8 + 0x3f,(uint)bVar25);
    unaff_r11 = (undefined *)(unaff_r8 + 0x3f + (uint)bVar25);
    bVar22 = unaff_r11 == (undefined *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar26;
  if (bVar22) {
    bVar24 = 0xffffff3f < unaff_r10 || CARRY4(unaff_r10 + 0xc0,(uint)bVar26);
    pcVar10 = (char *)(unaff_r10 + 0xc0 + (uint)bVar26);
    bVar23 = pcVar10 == (char *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffffffbf < unaff_r10 || CARRY4(unaff_r10 + 0x40,(uint)bVar24);
    pcVar10 = (char *)(unaff_r10 + 0x40 + (uint)bVar24);
    bVar22 = pcVar10 == (char *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffffc0ff < unaff_r10 || CARRY4(unaff_r10 + 0x3f00,(uint)bVar25);
    pcVar10 = (char *)(unaff_r10 + 0x3f00 + (uint)bVar25);
    bVar23 = pcVar10 == (char *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffffc2ff < unaff_r10 || CARRY4(unaff_r10 + 0x3d00,(uint)bVar24);
    pcVar10 = (char *)(unaff_r10 + 0x3d00 + (uint)bVar24);
    bVar22 = pcVar10 == (char *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffffc4ff < unaff_r10 || CARRY4(unaff_r10 + 0x3b00,(uint)bVar25);
    pcVar10 = (char *)(unaff_r10 + 0x3b00 + (uint)bVar25);
    bVar23 = pcVar10 == (char *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffffc6ff < unaff_r10 || CARRY4(unaff_r10 + 0x3900,(uint)bVar24);
    pcVar10 = (char *)(unaff_r10 + 0x3900 + (uint)bVar24);
    bVar22 = pcVar10 == (char *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffffc8ff < unaff_r10 || CARRY4(unaff_r10 + 0x3700,(uint)bVar25);
    pcVar10 = (char *)(unaff_r10 + 0x3700 + (uint)bVar25);
    bVar23 = pcVar10 == (char *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffffcaff < unaff_r10 || CARRY4(unaff_r10 + 0x3500,(uint)bVar24);
    pcVar10 = (char *)(unaff_r10 + 0x3500 + (uint)bVar24);
    bVar22 = pcVar10 == (char *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffffccff < unaff_r10 || CARRY4(unaff_r10 + 0x3300,(uint)bVar25);
    pcVar10 = (char *)(unaff_r10 + 0x3300 + (uint)bVar25);
    bVar23 = pcVar10 == (char *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffffceff < unaff_r10 || CARRY4(unaff_r10 + 0x3100,(uint)bVar24);
    pcVar10 = (char *)(unaff_r10 + 0x3100 + (uint)bVar24);
    bVar22 = pcVar10 == (char *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffffd0ff < unaff_r10 || CARRY4(unaff_r10 + 0x2f00,(uint)bVar25);
    pcVar10 = (char *)(unaff_r10 + 0x2f00 + (uint)bVar25);
    bVar23 = pcVar10 == (char *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xffffd2ff < unaff_r10 || CARRY4(unaff_r10 + 0x2d00,(uint)bVar24);
    pcVar10 = (char *)(unaff_r10 + 0x2d00 + (uint)bVar24);
    bVar22 = pcVar10 == (char *)0x0;
  }
  bVar23 = false;
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xffffd4ff < unaff_r10 || CARRY4(unaff_r10 + 0x2b00,(uint)bVar25);
    pcVar10 = (char *)(unaff_r10 + 0x2b00 + (uint)bVar25);
    bVar23 = pcVar10 == (char *)0x0;
  }
  bVar22 = false;
  bVar25 = bVar24;
  if (bVar23) {
    bVar25 = 0xfffffff0 < unaff_r8 || CARRY4(unaff_r8 + 0xf,(uint)bVar24);
    unaff_r11 = (undefined *)(unaff_r8 + 0xf + (uint)bVar24);
    bVar22 = unaff_r11 == (undefined *)0x0;
  }
  bVar24 = bVar25;
  if (bVar22) {
    bVar24 = 0xfffff6ff < extraout_r12_06 || CARRY4(extraout_r12_06 + 0x900,(uint)bVar25);
  }
  bVar23 = false;
  bVar26 = bVar24;
  if (bVar22 && extraout_r12_06 + 0x900 + (uint)bVar25 == 0) {
    bVar26 = 0xffff3fff < unaff_r10 || CARRY4(unaff_r10 + 0xc000,(uint)bVar24);
    pcVar10 = (char *)(unaff_r10 + 0xc000 + (uint)bVar24);
    bVar23 = pcVar10 == (char *)0x0;
  }
  bVar22 = false;
  bVar24 = bVar26;
  if (bVar23) {
    bVar24 = CARRY4(unaff_r10,(uint)bVar26);
    pcVar10 = (char *)(unaff_r10 + bVar26);
    bVar22 = pcVar10 == (char *)0x0;
  }
  bVar23 = false;
  bVar25 = bVar24;
  if (bVar22) {
    bVar25 = 0xffffafff < unaff_r10 || CARRY4(unaff_r10 + 0x5000,(uint)bVar24);
    pcVar10 = (char *)(unaff_r10 + 0x5000 + (uint)bVar24);
    bVar23 = pcVar10 == (char *)0x0;
  }
  bVar22 = false;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfffccfff < unaff_r10 ||
             CARRY4((uint)(
                          "_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE23__do_get_floating_pointIfEES4_S4_S4_RNS_8ios_baseERjRT_"
                          + unaff_r10 + 0x11),(uint)bVar25);
    pcVar10 = "_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE23__do_get_floating_pointIfEES4_S4_S4_RNS_8ios_baseERjRT_"
              + (uint)bVar25 + unaff_r10 + 0x11;
    bVar22 = pcVar10 == (char *)0x0;
  }
  bVar23 = false;
  bVar25 = bVar24;
  if (bVar22) {
    bVar25 = 0xfffe0fff < unaff_r10 || CARRY4(unaff_r10 + 0x1f000,(uint)bVar24);
    pcVar10 = (char *)(unaff_r10 + 0x1f000 + (uint)bVar24);
    bVar23 = pcVar10 == (char *)0x0;
  }
  bVar22 = false;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfff6bfff < unaff_r10 || CARRY4(unaff_r10 + 0x94000,(uint)bVar25);
    pcVar10 = (char *)(unaff_r10 + 0x94000 + (uint)bVar25);
    bVar22 = pcVar10 == (char *)0x0;
  }
  bVar23 = false;
  bVar25 = bVar24;
  if (bVar22) {
    bVar25 = 0xffc3ffff < unaff_r10 || CARRY4(unaff_r10 + 0x3c0000,(uint)bVar24);
    pcVar10 = (char *)(unaff_r10 + 0x3c0000 + (uint)bVar24);
    bVar23 = pcVar10 == (char *)0x0;
  }
  bVar22 = false;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfff2bfff < unaff_r10 || CARRY4(unaff_r10 + 0xd4000,(uint)bVar25);
    pcVar10 = (char *)(unaff_r10 + 0xd4000 + (uint)bVar25);
    bVar22 = pcVar10 == (char *)0x0;
  }
  bVar23 = false;
  bVar25 = bVar24;
  if (bVar22) {
    bVar25 = 0xffff7fff < unaff_r10 || CARRY4(unaff_r10 + 0x8000,(uint)bVar24);
    pcVar10 = (char *)(unaff_r10 + 0x8000 + (uint)bVar24);
    bVar23 = pcVar10 == (char *)0x0;
  }
  bVar22 = false;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfffeffff < unaff_r10 || CARRY4(unaff_r10 + 0x10000,(uint)bVar25);
    pcVar10 = (char *)(unaff_r10 + 0x10000 + (uint)bVar25);
    bVar22 = pcVar10 == (char *)0x0;
  }
  bVar23 = false;
  bVar25 = bVar24;
  if (bVar22) {
    bVar25 = 0xfff3bfff < unaff_r10 || CARRY4(unaff_r10 + 0xc4000,(uint)bVar24);
    pcVar10 = (char *)(unaff_r10 + 0xc4000 + (uint)bVar24);
    bVar23 = pcVar10 == (char *)0x0;
  }
  bVar22 = false;
  bVar24 = bVar25;
  if (bVar23) {
    bVar24 = 0xfffa3fff < unaff_r10 || CARRY4(unaff_r10 + 0x5c000,(uint)bVar25);
    pcVar10 = (char *)(unaff_r10 + 0x5c000 + (uint)bVar25);
    bVar22 = pcVar10 == (char *)0x0;
  }
  if (bVar22) {
    pcVar10 = (char *)(unaff_r10 + 0x20000 + (uint)bVar24);
  }
  *(undefined4 *)(puVar19 + -0x44) = 0x36da8d8;
  *(undefined **)(puVar19 + -0x48) = unaff_r11;
  *(undefined4 *)(puVar19 + -0x4c) = uVar8;
  *(int *)(puVar19 + -0x50) = iVar11;
  iVar1 = *(int *)(pcVar10 + 0x10);
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
    iVar1 = *(int *)(pcVar10 + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x024f83fc();
    }
    piVar2 = (int *)func_0x049a8660(*(undefined4 *)(*(int *)(iVar1 + 0x60) + 0xc));
    func_0x024f8404();
    iVar1 = *(int *)(pcVar10 + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x024f83fc();
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x024f83fc();
    }
    iVar11 = *(int *)(pcVar10 + 0x10);
    **(int **)(iVar1 + 0x5c) = (int)piVar2;
    if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
      iVar11 = func_0x024f83fc();
    }
    iVar1 = *(int *)(*(int *)(iVar11 + 0x60) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x024f83fc();
    }
    func_0x024f83f0(*(undefined4 *)(iVar1 + 0x5c),piVar2);
  }
  return piVar2;
}

