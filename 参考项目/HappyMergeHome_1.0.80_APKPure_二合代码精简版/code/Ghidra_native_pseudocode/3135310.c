
/* WARNING: Removing unreachable block (ram,0x035949f0) */
/* WARNING: Removing unreachable block (ram,0x036e8000) */
/* WARNING: Removing unreachable block (ram,0x036e7578) */
/* WARNING: Removing unreachable block (ram,0x036e699c) */
/* WARNING: Removing unreachable block (ram,0x036e6994) */
/* WARNING: Removing unreachable block (ram,0x036e698c) */
/* WARNING: Removing unreachable block (ram,0x036e6984) */
/* WARNING: Removing unreachable block (ram,0x036e697c) */
/* WARNING: Removing unreachable block (ram,0x036e6974) */
/* WARNING: Removing unreachable block (ram,0x036e696c) */
/* WARNING: Removing unreachable block (ram,0x036e6964) */
/* WARNING: Removing unreachable block (ram,0x036e6968) */
/* WARNING: Removing unreachable block (ram,0x036e6970) */
/* WARNING: Removing unreachable block (ram,0x036e6978) */
/* WARNING: Removing unreachable block (ram,0x036e6980) */
/* WARNING: Removing unreachable block (ram,0x036e6988) */
/* WARNING: Removing unreachable block (ram,0x036e6990) */
/* WARNING: Removing unreachable block (ram,0x036e6998) */
/* WARNING: Removing unreachable block (ram,0x036e69a4) */
/* WARNING: Removing unreachable block (ram,0x036e7abc) */
/* WARNING: Removing unreachable block (ram,0x035949e4) */
/* WARNING: Removing unreachable block (ram,0x036e69a0) */
/* WARNING: Removing unreachable block (ram,0x036e69e4) */
/* WARNING: Removing unreachable block (ram,0x036e69dc) */
/* WARNING: Removing unreachable block (ram,0x036e69d4) */
/* WARNING: Removing unreachable block (ram,0x036e69cc) */
/* WARNING: Removing unreachable block (ram,0x036e69c4) */
/* WARNING: Removing unreachable block (ram,0x036e69bc) */
/* WARNING: Removing unreachable block (ram,0x036e69b4) */
/* WARNING: Removing unreachable block (ram,0x036e69ac) */
/* WARNING: Removing unreachable block (ram,0x036e69a8) */
/* WARNING: Removing unreachable block (ram,0x036e69b0) */
/* WARNING: Removing unreachable block (ram,0x036e69b8) */
/* WARNING: Removing unreachable block (ram,0x036e69c0) */
/* WARNING: Removing unreachable block (ram,0x036e69c8) */
/* WARNING: Removing unreachable block (ram,0x036e69d0) */
/* WARNING: Removing unreachable block (ram,0x036e69d8) */
/* WARNING: Removing unreachable block (ram,0x036e69e0) */
/* WARNING: Removing unreachable block (ram,0x035949e8) */
/* WARNING: Removing unreachable block (ram,0x036e69e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_03145310(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  Elf32_Rel *pEVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  dword dVar12;
  undefined4 *puVar13;
  int extraout_r2;
  int extraout_r2_00;
  undefined4 uVar14;
  int *piVar15;
  int iVar16;
  char *pcVar17;
  undefined4 uVar18;
  int iVar19;
  int unaff_r8;
  uint unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  int *piVar20;
  undefined4 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  bool bVar27;
  undefined1 uVar28;
  bool bVar29;
  bool bVar30;
  undefined1 uVar31;
  bool bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  uint *puVar36;
  undefined8 uVar37;
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
  
  pcVar17 = (char *)(_UNK_031453f0 + 0x3145324);
  if (*pcVar17 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031453f4 + 0x3145338));
    func_0x01438628(*(undefined4 *)(_UNK_031453f8 + 0x3145344));
    func_0x01438628(*(undefined4 *)(_UNK_031453fc + 0x3145350));
    *pcVar17 = '\x01';
  }
  iVar4 = func_0x02953fd4(0x1780,0);
  if (iVar4 != 0) {
    iVar4 = func_0x029540a4(0x1780,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    pcVar17 = (char *)(_UNK_028a8e60 + 0x28a8d80);
    if (*pcVar17 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a8e64 + 0x28a8d94),param_1,0);
      *pcVar17 = '\x01';
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
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar16 = *(int *)(iVar4 + 8);
    uVar18 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar16 == 0) {
      func_0x014388e4();
    }
    uVar14 = 2;
    if (iVar4 == 0) {
      uVar14 = 1;
    }
    func_0x024f56d0(iVar16,uVar18,&uStack_30,uVar14,0,0);
    piVar3 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a8e68 + 0x28a8e50));
    return piVar3;
  }
  if (*(int *)(**(int **)(_UNK_03145400 + 0x31453a8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_03145404 + 0x31453c4));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar16 = **(int **)(_UNK_03145408 + 0x31453e4);
  puVar21 = auStack_20;
  puVar13 = *(undefined4 **)(iVar16 + 0x1c);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam036e695c + 0x36e63c8));
    func_0x024f83cc(*(undefined4 *)(iRam036e6960 + 0x36e63d4));
    func_0x024f83cc(*(undefined4 *)(iRam036e6964 + 0x36e63e0));
    func_0x024f83cc(*(undefined4 *)(iRam036e6968 + 0x36e63ec));
    func_0x024f83cc(*(undefined4 *)(iRam036e696c + 0x36e63f8));
    func_0x024f83cc(*(undefined4 *)(iRam036e6970 + 0x36e6404));
    func_0x024f83cc(*(undefined4 *)(iRam036e6974 + 0x36e6410));
    func_0x024f83cc(*(undefined4 *)(iRam036e6978 + 0x36e641c));
    func_0x024f83cc(*(undefined4 *)(iRam036e697c + 0x36e6428));
    func_0x024f83cc(*(undefined4 *)(iRam036e6980 + 0x36e6434));
    func_0x024f83cc(*(undefined4 *)(iRam036e6984 + 0x36e6440));
    func_0x024f83cc(*(undefined4 *)(iRam036e6988 + 0x36e644c));
    func_0x024f83cc(*(undefined4 *)(iRam036e698c + 0x36e6458));
    func_0x024f83cc(*(undefined4 *)(iRam036e6990 + 0x36e6464));
    func_0x024f83cc(*(undefined4 *)(iRam036e6994 + 0x36e6470));
    func_0x024f83cc(*(undefined4 *)(iRam036e6998 + 0x36e647c));
    func_0x024f83cc(*(undefined4 *)(iRam036e699c + 0x36e6488));
    puVar13 = *(undefined4 **)(iVar16 + 0x1c);
    if (puVar13 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar16);
      puVar13 = *(undefined4 **)(iVar16 + 0x1c);
    }
  }
  uVar18 = *puVar13;
  iVar19 = *(int *)(iVar4 + 0x50);
  if (*(int *)(**(int **)(iRam036e69a0 + 0x36e64ac) + 0x74) == 0) {
    func_0x024f83d8();
  }
  iVar7 = func_0x05171434(uVar18,0);
  if (iVar19 == 0) {
    func_0x024f83d4();
  }
  uVar18 = func_0x0475399c(iVar19,iVar7,**(undefined4 **)(iRam036e69a4 + 0x36e64f0));
  uVar8 = func_0x02965180(uVar18,0);
  if (uVar8 < 0x5d130668) {
    if (uVar8 < 0x42c6e877) {
      if (uVar8 == 0x6bd7a24) {
        iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e69dc + 0x36e6768),0);
        uVar28 = iVar19 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar16 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x4c);
LAB_036e68b4:
          iVar4 = *(int *)(iVar16 + 4);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x024f83fc(iVar4);
          }
          piVar15 = (int *)0x0;
          if (piVar3 != (int *)0x0) {
            if (((uint)*(byte *)(iVar4 + 0xb8) <= (uint)*(byte *)(*piVar3 + 0xb8)) &&
               (piVar15 = piVar3,
               *(int *)(*(int *)(*piVar3 + 100) + (uint)*(byte *)(iVar4 + 0xb8) * 4 + -4) != iVar4))
            {
              piVar15 = (int *)0x0;
            }
          }
          return piVar15;
        }
      }
      else if (uVar8 == 0x251abb3a) {
        iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e69cc + 0x36e6794),0);
        uVar28 = iVar19 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar16 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x34);
          goto LAB_036e68b4;
        }
      }
      else {
        bVar33 = 0x42c6e875 < uVar8;
        uVar28 = false;
        if (uVar8 == 0x42c6e876) {
          iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e69a8 + 0x36e655c),0);
          uVar28 = iVar19 == 0;
          bVar33 = true;
          if (!(bool)uVar28) {
            iVar16 = *(int *)(iVar16 + 0x1c);
            piVar3 = *(int **)(iVar4 + 0x30);
            goto LAB_036e68b4;
          }
        }
      }
    }
    else if (uVar8 < 0x45c6ed30) {
      if (uVar8 == 0x44c6eb9c) {
        iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e69c8 + 0x36e67ec),0);
        uVar28 = iVar19 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar16 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x28);
          goto LAB_036e68b4;
        }
      }
      else {
        bVar33 = 0x45c6ed2e < uVar8;
        uVar28 = false;
        if (uVar8 == 0x45c6ed2f) {
          iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e69ac + 0x36e6614),0);
          uVar28 = iVar19 == 0;
          bVar33 = true;
          if (!(bool)uVar28) {
            iVar16 = *(int *)(iVar16 + 0x1c);
            piVar3 = *(int **)(iVar4 + 0x2c);
            goto LAB_036e68b4;
          }
        }
      }
    }
    else if (uVar8 == 0x47c6f055) {
      iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e69c4 + 0x36e6870),0);
      uVar28 = iVar19 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar16 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x24);
        goto LAB_036e68b4;
      }
    }
    else {
      bVar33 = 0x5d130666 < uVar8;
      uVar28 = false;
      if (uVar8 == 0x5d130667) {
        iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e69b0 + 0x36e66f0),0);
        uVar28 = iVar19 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar16 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x38);
          goto LAB_036e68b4;
        }
      }
    }
  }
  else if (uVar8 < 0x97df2ac1) {
    if (uVar8 < 0x75ff2637) {
      if (uVar8 == 0x6b40c52c) {
        iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e69d8 + 0x36e67c0),0);
        uVar28 = iVar19 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar16 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x48);
          goto LAB_036e68b4;
        }
      }
      else {
        bVar33 = 0x75ff2635 < uVar8;
        uVar28 = false;
        if (uVar8 == 0x75ff2636) {
          iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e69b4 + 0x36e65c0),0);
          uVar28 = iVar19 == 0;
          bVar33 = true;
          if (!(bool)uVar28) {
            iVar16 = *(int *)(iVar16 + 0x1c);
            piVar3 = *(int **)(iVar4 + 0x40);
            goto LAB_036e68b4;
          }
        }
      }
    }
    else if (uVar8 == 0x9375323e) {
      iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e69d4 + 0x36e6844),0);
      uVar28 = iVar19 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar16 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x44);
        goto LAB_036e68b4;
      }
    }
    else {
      bVar33 = 0x97df2abf < uVar8;
      uVar28 = false;
      if (uVar8 == 0x97df2ac0) {
        iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e69b8 + 0x36e66ac),0);
        uVar28 = iVar19 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar16 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x20);
          goto LAB_036e68b4;
        }
      }
    }
  }
  else if (uVar8 < 0xd996887a) {
    if (uVar8 == 0xae9a5365) {
      iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e69e0 + 0x36e6818),0);
      uVar28 = iVar19 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar16 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x18);
        goto LAB_036e68b4;
      }
    }
    else {
      bVar33 = 0xd9968878 < uVar8;
      uVar28 = false;
      if (uVar8 == 0xd9968879) {
        iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e69bc + 0x36e6668),0);
        uVar28 = iVar19 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar16 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x14);
          goto LAB_036e68b4;
        }
      }
    }
  }
  else if (uVar8 == 0xe7b64d5b) {
    iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e69d0 + 0x36e689c),0);
    uVar28 = iVar19 == 0;
    bVar33 = true;
    if (!(bool)uVar28) {
      iVar16 = *(int *)(iVar16 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x3c);
      goto LAB_036e68b4;
    }
  }
  else {
    bVar33 = 0xf66518f2 < uVar8;
    uVar28 = false;
    if (uVar8 == 0xf66518f3) {
      iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e69c0 + 0x36e673c),0);
      uVar28 = iVar19 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar16 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x1c);
        goto LAB_036e68b4;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036e69e4 + 0x36e691c));
  uVar14 = func_0x024f83c8();
  uVar9 = func_0x024f83b8(*(undefined4 *)(iRam036e69e8 + 0x36e6930));
  auStack_20[0] = 0;
  func_0x0509473c(uVar14,uVar9,uVar18,0);
  func_0x024f83c0(uVar14,iVar16);
  uVar37 = func_0x024f83bc();
  iVar19 = (int)((ulonglong)uVar37 >> 0x20);
  iVar4 = (int)uVar37;
  bVar29 = false;
  bVar34 = bVar33;
  if ((bool)uVar28) {
    bVar34 = 0xfffffd0f < unaff_r11 || CARRY4(unaff_r11 + 0x2f0,(uint)bVar33);
    puVar21 = (undefined4 *)(unaff_r11 + 0x2f0 + (uint)bVar33);
    bVar29 = (undefined1 *)(unaff_r11 + 0x2f0 + (uint)bVar33) == (undefined1 *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x036e6960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (bVar29) {
    piVar3 = (int *)(*(code *)(iVar7 + -0x7fffffff + (uint)bVar34))();
    return piVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x036e69a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  *(undefined4 *)((int)puVar21 + -4) = 0x36e695c;
  *(uint *)((int)puVar21 + -8) = unaff_r11;
  *(int *)((int)puVar21 + -0xc) = iVar7;
  *(undefined4 *)((int)puVar21 + -0x10) = uVar18;
  *(undefined4 *)((int)puVar21 + -0x14) = uVar14;
  *(int *)((int)puVar21 + -0x18) = iVar16;
  puVar22 = (undefined1 *)((int)puVar21 + -0x20);
  puVar13 = *(undefined4 **)(iVar19 + 0x1c);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam036e6fa8 + 0x36e6a14));
    func_0x024f83cc(*(undefined4 *)(iRam036e6fac + 0x36e6a20));
    func_0x024f83cc(*(undefined4 *)(iRam036e6fb0 + 0x36e6a2c));
    func_0x024f83cc(*(undefined4 *)(iRam036e6fb4 + 0x36e6a38));
    func_0x024f83cc(*(undefined4 *)(iRam036e6fb8 + 0x36e6a44));
    func_0x024f83cc(*(undefined4 *)(iRam036e6fbc + 0x36e6a50));
    func_0x024f83cc(*(undefined4 *)(iRam036e6fc0 + 0x36e6a5c));
    func_0x024f83cc(*(undefined4 *)(iRam036e6fc4 + 0x36e6a68));
    func_0x024f83cc(*(undefined4 *)(iRam036e6fc8 + 0x36e6a74));
    func_0x024f83cc(*(undefined4 *)(iRam036e6fcc + 0x36e6a80));
    func_0x024f83cc(*(undefined4 *)(iRam036e6fd0 + 0x36e6a8c));
    func_0x024f83cc(*(undefined4 *)(iRam036e6fd4 + 0x36e6a98));
    func_0x024f83cc(*(undefined4 *)(iRam036e6fd8 + 0x36e6aa4));
    func_0x024f83cc(*(undefined4 *)(iRam036e6fdc + 0x36e6ab0));
    func_0x024f83cc(*(undefined4 *)(iRam036e6fe0 + 0x36e6abc));
    func_0x024f83cc(*(undefined4 *)(iRam036e6fe4 + 0x36e6ac8));
    func_0x024f83cc(*(undefined4 *)(iRam036e6fe8 + 0x36e6ad4));
    puVar13 = *(undefined4 **)(iVar19 + 0x1c);
    if (puVar13 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar19);
      puVar13 = *(undefined4 **)(iVar19 + 0x1c);
    }
  }
  uVar18 = *puVar13;
  iVar16 = *(int *)(iVar4 + 0x50);
  if (*(int *)(**(int **)(iRam036e6fec + 0x36e6af8) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar8 = func_0x05171434(uVar18,0);
  if (iVar16 == 0) {
    func_0x024f83d4();
  }
  uVar18 = func_0x0475399c(iVar16,uVar8,**(undefined4 **)(iRam036e6ff0 + 0x36e6b3c));
  uVar10 = func_0x02965180(uVar18,0);
  if (uVar10 < 0x5d130668) {
    if (uVar10 < 0x42c6e877) {
      if (uVar10 == 0x6bd7a24) {
        iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7028 + 0x36e6db4),0);
        uVar28 = iVar16 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar19 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x4c);
LAB_036e6f00:
          iVar4 = *(int *)(iVar16 + 4);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x024f83fc(iVar4);
          }
          piVar15 = (int *)0x0;
          if (piVar3 != (int *)0x0) {
            if (((uint)*(byte *)(iVar4 + 0xb8) <= (uint)*(byte *)(*piVar3 + 0xb8)) &&
               (piVar15 = piVar3,
               *(int *)(*(int *)(*piVar3 + 100) + (uint)*(byte *)(iVar4 + 0xb8) * 4 + -4) != iVar4))
            {
              piVar15 = (int *)0x0;
            }
          }
          return piVar15;
        }
      }
      else if (uVar10 == 0x251abb3a) {
        iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7018 + 0x36e6de0),0);
        uVar28 = iVar16 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar19 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x34);
          goto LAB_036e6f00;
        }
      }
      else {
        bVar33 = 0x42c6e875 < uVar10;
        uVar28 = false;
        if (uVar10 == 0x42c6e876) {
          iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e6ff4 + 0x36e6ba8),0);
          uVar28 = iVar16 == 0;
          bVar33 = true;
          if (!(bool)uVar28) {
            iVar16 = *(int *)(iVar19 + 0x1c);
            piVar3 = *(int **)(iVar4 + 0x30);
            goto LAB_036e6f00;
          }
        }
      }
    }
    else if (uVar10 < 0x45c6ed30) {
      if (uVar10 == 0x44c6eb9c) {
        iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7014 + 0x36e6e38),0);
        uVar28 = iVar16 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar19 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x28);
          goto LAB_036e6f00;
        }
      }
      else {
        bVar33 = 0x45c6ed2e < uVar10;
        uVar28 = false;
        if (uVar10 == 0x45c6ed2f) {
          iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e6ff8 + 0x36e6c60),0);
          uVar28 = iVar16 == 0;
          bVar33 = true;
          if (!(bool)uVar28) {
            iVar16 = *(int *)(iVar19 + 0x1c);
            piVar3 = *(int **)(iVar4 + 0x2c);
            goto LAB_036e6f00;
          }
        }
      }
    }
    else if (uVar10 == 0x47c6f055) {
      iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7010 + 0x36e6ebc),0);
      uVar28 = iVar16 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar19 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x24);
        goto LAB_036e6f00;
      }
    }
    else {
      bVar33 = 0x5d130666 < uVar10;
      uVar28 = false;
      if (uVar10 == 0x5d130667) {
        iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e6ffc + 0x36e6d3c),0);
        uVar28 = iVar16 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar19 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x38);
          goto LAB_036e6f00;
        }
      }
    }
  }
  else if (uVar10 < 0x97df2ac1) {
    if (uVar10 < 0x75ff2637) {
      if (uVar10 == 0x6b40c52c) {
        iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7024 + 0x36e6e0c),0);
        uVar28 = iVar16 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar19 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x48);
          goto LAB_036e6f00;
        }
      }
      else {
        bVar33 = 0x75ff2635 < uVar10;
        uVar28 = false;
        if (uVar10 == 0x75ff2636) {
          iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7000 + 0x36e6c0c),0);
          uVar28 = iVar16 == 0;
          bVar33 = true;
          if (!(bool)uVar28) {
            iVar16 = *(int *)(iVar19 + 0x1c);
            piVar3 = *(int **)(iVar4 + 0x40);
            goto LAB_036e6f00;
          }
        }
      }
    }
    else if (uVar10 == 0x9375323e) {
      iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7020 + 0x36e6e90),0);
      uVar28 = iVar16 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar19 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x44);
        goto LAB_036e6f00;
      }
    }
    else {
      bVar33 = 0x97df2abf < uVar10;
      uVar28 = false;
      if (uVar10 == 0x97df2ac0) {
        iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7004 + 0x36e6cf8),0);
        uVar28 = iVar16 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar19 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x20);
          goto LAB_036e6f00;
        }
      }
    }
  }
  else if (uVar10 < 0xd996887a) {
    if (uVar10 == 0xae9a5365) {
      iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e702c + 0x36e6e64),0);
      uVar28 = iVar16 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar19 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x18);
        goto LAB_036e6f00;
      }
    }
    else {
      bVar33 = 0xd9968878 < uVar10;
      uVar28 = false;
      if (uVar10 == 0xd9968879) {
        iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7008 + 0x36e6cb4),0);
        uVar28 = iVar16 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar19 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x14);
          goto LAB_036e6f00;
        }
      }
    }
  }
  else if (uVar10 == 0xe7b64d5b) {
    iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e701c + 0x36e6ee8),0);
    uVar28 = iVar16 == 0;
    bVar33 = true;
    if (!(bool)uVar28) {
      iVar16 = *(int *)(iVar19 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x3c);
      goto LAB_036e6f00;
    }
  }
  else {
    bVar33 = 0xf66518f2 < uVar10;
    uVar28 = false;
    if (uVar10 == 0xf66518f3) {
      iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e700c + 0x36e6d88),0);
      uVar28 = iVar16 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar19 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x1c);
        goto LAB_036e6f00;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036e7030 + 0x36e6f68));
  uVar14 = func_0x024f83c8();
  uVar9 = func_0x024f83b8(*(undefined4 *)(iRam036e7034 + 0x36e6f7c));
  *(undefined4 *)((int)puVar21 + -0x20) = 0;
  func_0x0509473c(uVar14,uVar9,uVar18,0);
  func_0x024f83c0(uVar14,iVar19);
  pcVar17 = (char *)0x36e6fa8;
  uVar37 = func_0x024f83bc();
  iVar16 = (int)((ulonglong)uVar37 >> 0x20);
  iVar4 = (int)uVar37;
  bVar29 = false;
  bVar34 = bVar33;
  if ((bool)uVar28) {
    bVar34 = 0xffe3ffff < unaff_r11 || CARRY4(unaff_r11 + 0x1c0000,(uint)bVar33);
    puVar22 = (undefined1 *)(unaff_r11 + 0x1c0000 + (uint)bVar33);
    bVar29 = (undefined1 *)(unaff_r11 + 0x1c0000 + (uint)bVar33) == (undefined1 *)0x0;
  }
  bVar30 = false;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = 0xfffccfff < uVar8 ||
             CARRY4((uint)(
                          "_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE23__do_get_floating_pointIfEES4_S4_S4_RNS_8ios_baseERjRT_"
                          + uVar8 + 0x11),(uint)bVar34);
    pcVar17 = "_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE23__do_get_floating_pointIfEES4_S4_S4_RNS_8ios_baseERjRT_"
              + (uint)bVar34 + uVar8 + 0x11;
    bVar30 = pcVar17 == (char *)0x0;
  }
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xffe3ffff < unaff_r9 || CARRY4(unaff_r9 + 0x1c0000,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x1c0000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xffe5ffff < unaff_r9 || CARRY4(unaff_r9 + 0x1a0000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0x1a0000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xffe7ffff < unaff_r9 || CARRY4(unaff_r9 + 0x180000,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x180000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xffe9ffff < unaff_r9 || CARRY4(unaff_r9 + 0x160000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0x160000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xffebffff < unaff_r9 || CARRY4(unaff_r9 + 0x140000,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x140000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xffedffff < unaff_r9 || CARRY4(unaff_r9 + 0x120000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0x120000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xffefffff < unaff_r9 || CARRY4(unaff_r9 + 0x100000,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x100000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xfff1ffff < unaff_r9 || CARRY4(unaff_r9 + 0xe0000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0xe0000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xfff3ffff < unaff_r9 || CARRY4(unaff_r9 + 0xc0000,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0xc0000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xfff5ffff < unaff_r9 || CARRY4(unaff_r9 + 0xa0000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0xa0000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xfff7ffff < unaff_r9 || CARRY4(unaff_r9 + 0x80000,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x80000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xfff9ffff < unaff_r9 || CARRY4(unaff_r9 + 0x60000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0x60000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xfffbffff < unaff_r9 || CARRY4(unaff_r9 + 0x40000,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x40000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xfffdffff < unaff_r9 || CARRY4(unaff_r9 + 0x20000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0x20000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = CARRY4(unaff_r9,(uint)bVar33);
  }
  bVar29 = false;
  bVar35 = bVar34;
  if (bVar30 && unaff_r9 + bVar33 == 0) {
    bVar35 = 0xfff0bfff < uVar8 || CARRY4(uVar8 + 0xf4000,(uint)bVar34);
    pcVar17 = (char *)(uVar8 + 0xf4000 + (uint)bVar34);
    bVar29 = pcVar17 == (char *)0x0;
  }
  bVar30 = false;
  bVar33 = bVar35;
  if (bVar29) {
    bVar33 = 0xffb7ffff < unaff_r11 || CARRY4(unaff_r11 + 0x480000,(uint)bVar35);
    puVar22 = (undefined1 *)(unaff_r11 + 0x480000 + (uint)bVar35);
    bVar30 = (undefined1 *)(unaff_r11 + 0x480000 + (uint)bVar35) == (undefined1 *)0x0;
  }
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xfc0fffff < unaff_r9 || CARRY4(unaff_r9 + 0x3f00000,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x3f00000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xfedfffff < unaff_r9 || CARRY4((uint)(&UNK_01200000 + unaff_r9),(uint)bVar34);
  }
  bVar30 = bVar30 && &UNK_01200000 + bVar34 + unaff_r9 == (undefined *)0x0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xf9bfffff < unaff_r9 || CARRY4((uint)(&DAT_06400000 + unaff_r9),(uint)bVar33);
  }
  bVar30 = bVar30 && &DAT_06400000 + bVar33 + unaff_r9 == (undefined *)0x0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xfcdfffff < unaff_r9 || CARRY4((uint)(&UNK_03200000 + unaff_r9),(uint)bVar34);
  }
  bVar30 = bVar30 && &UNK_03200000 + bVar34 + unaff_r9 == (undefined *)0x0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xf27fffff < unaff_r9 || CARRY4(unaff_r9 + 0xd800000,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0xd800000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xffafffff < unaff_r9 || CARRY4(unaff_r9 + 0x500000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0x500000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xfebfffff < unaff_r9 || CARRY4((uint)(&UNK_01400000 + unaff_r9),(uint)bVar33);
  }
  bVar30 = bVar30 && &UNK_01400000 + bVar33 + unaff_r9 == (undefined *)0x0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xbffffff < unaff_r9 || CARRY4(unaff_r9 + 0xf4000000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0xf4000000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xdeffffff < unaff_r9 || CARRY4(unaff_r9 + 0x21000000,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x21000000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xc4ffffff < unaff_r9 || CARRY4(unaff_r9 + 0x3b000000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0x3b000000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0x23ffffff < unaff_r9 || CARRY4(unaff_r9 + 0xdc000000,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0xdc000000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xf5ffffff < unaff_r9 || CARRY4(unaff_r9 + 0xa000000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0xa000000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xd5ffffff < unaff_r9 || CARRY4(unaff_r9 + 0x2a000000,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x2a000000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xff3fffff < unaff_r9 || CARRY4(unaff_r9 + 0xc00000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0xc00000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xedffffff < unaff_r9 || CARRY4(unaff_r9 + 0x12000000,(uint)bVar33);
  }
  if (bVar30 && unaff_r9 + 0x12000000 + (uint)bVar33 == 0) {
    iVar4 = unaff_r8 + 8 + (uint)bVar34;
  }
  *(char **)(puVar22 + -4) = pcVar17;
  *(uint *)(puVar22 + -8) = unaff_r11;
  *(uint *)(puVar22 + -0xc) = uVar8;
  *(undefined4 *)(puVar22 + -0x10) = uVar18;
  *(undefined4 *)(puVar22 + -0x14) = uVar14;
  *(int *)(puVar22 + -0x18) = iVar19;
  puVar23 = puVar22 + -0x20;
  puVar13 = *(undefined4 **)(iVar16 + 0x1c);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam036e7504 + 0x36e7060));
    func_0x024f83cc(*(undefined4 *)(iRam036e7508 + 0x36e706c));
    func_0x024f83cc(*(undefined4 *)(iRam036e750c + 0x36e7078));
    func_0x024f83cc(*(undefined4 *)(iRam036e7510 + 0x36e7084));
    func_0x024f83cc(*(undefined4 *)(iRam036e7514 + 0x36e7090));
    func_0x024f83cc(*(undefined4 *)(iRam036e7518 + 0x36e709c));
    func_0x024f83cc(*(undefined4 *)(iRam036e751c + 0x36e70a8));
    func_0x024f83cc(*(undefined4 *)(iRam036e7520 + 0x36e70b4));
    func_0x024f83cc(*(undefined4 *)(iRam036e7524 + 0x36e70c0));
    func_0x024f83cc(*(undefined4 *)(iRam036e7528 + 0x36e70cc));
    func_0x024f83cc(*(undefined4 *)(iRam036e752c + 0x36e70d8));
    func_0x024f83cc(*(undefined4 *)(iRam036e7530 + 0x36e70e4));
    func_0x024f83cc(*(undefined4 *)(iRam036e7534 + 0x36e70f0));
    func_0x024f83cc(*(undefined4 *)(iRam036e7538 + 0x36e70fc));
    puVar13 = *(undefined4 **)(iVar16 + 0x1c);
    if (puVar13 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar16);
      puVar13 = *(undefined4 **)(iVar16 + 0x1c);
    }
  }
  uVar18 = *puVar13;
  iVar19 = *(int *)(iVar4 + 0x44);
  if (*(int *)(**(int **)(iRam036e753c + 0x36e7120) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar8 = func_0x05171434(uVar18,0);
  if (iVar19 == 0) {
    func_0x024f83d4();
  }
  uVar18 = func_0x0475399c(iVar19,uVar8,**(undefined4 **)(iRam036e7540 + 0x36e7164));
  uVar10 = func_0x02965180(uVar18,0);
  if (uVar10 < 0x787a9e7c) {
    if (uVar10 < 0x4715ab4f) {
      if (uVar10 == 0x1156f848) {
        iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7570 + 0x36e7310),0);
        uVar28 = iVar19 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar16 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x20);
LAB_036e745c:
          iVar4 = *(int *)(iVar16 + 4);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x024f83fc(iVar4);
          }
          piVar15 = (int *)0x0;
          if (piVar3 != (int *)0x0) {
            if (((uint)*(byte *)(iVar4 + 0xb8) <= (uint)*(byte *)(*piVar3 + 0xb8)) &&
               (piVar15 = piVar3,
               *(int *)(*(int *)(*piVar3 + 100) + (uint)*(byte *)(iVar4 + 0xb8) * 4 + -4) != iVar4))
            {
              piVar15 = (int *)0x0;
            }
          }
          return piVar15;
        }
      }
      else if (uVar10 == 0x3169fa72) {
        iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7558 + 0x36e733c),0);
        uVar28 = iVar19 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar16 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x28);
          goto LAB_036e745c;
        }
      }
      else {
        bVar33 = 0x4715ab4d < uVar10;
        uVar28 = false;
        if (uVar10 == 0x4715ab4e) {
          iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7544 + 0x36e71d0),0);
          uVar28 = iVar19 == 0;
          bVar33 = true;
          if (!(bool)uVar28) {
            iVar16 = *(int *)(iVar16 + 0x1c);
            piVar3 = *(int **)(iVar4 + 0x34);
            goto LAB_036e745c;
          }
        }
      }
    }
    else if (uVar10 == 0x4ffedf5c) {
      iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e756c + 0x36e73c0),0);
      uVar28 = iVar19 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar16 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x40);
        goto LAB_036e745c;
      }
    }
    else if (uVar10 == 0x6d81ef27) {
      iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e755c + 0x36e73ec),0);
      uVar28 = iVar19 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar16 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x2c);
        goto LAB_036e745c;
      }
    }
    else {
      bVar33 = 0x787a9e7a < uVar10;
      uVar28 = false;
      if (uVar10 == 0x787a9e7b) {
        iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7548 + 0x36e7288),0);
        uVar28 = iVar19 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar16 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x1c);
          goto LAB_036e745c;
        }
      }
    }
  }
  else if (uVar10 < 0xa3b10e3e) {
    if (uVar10 == 0x80fccce3) {
      iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7560 + 0x36e7368),0);
      uVar28 = iVar19 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar16 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x30);
        goto LAB_036e745c;
      }
    }
    else if (uVar10 == 0x8bafe426) {
      iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7554 + 0x36e7394),0);
      uVar28 = iVar19 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar16 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x24);
        goto LAB_036e745c;
      }
    }
    else {
      bVar33 = 0xa3b10e3c < uVar10;
      uVar28 = false;
      if (uVar10 == 0xa3b10e3d) {
        iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e754c + 0x36e7234),0);
        uVar28 = iVar19 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar16 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x18);
          goto LAB_036e745c;
        }
      }
    }
  }
  else if (uVar10 == 0xd9f47ec6) {
    iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7564 + 0x36e7418),0);
    uVar28 = iVar19 == 0;
    bVar33 = true;
    if (!(bool)uVar28) {
      iVar16 = *(int *)(iVar16 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x38);
      goto LAB_036e745c;
    }
  }
  else if (uVar10 == 0xc4e0c914) {
    iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7568 + 0x36e7444),0);
    uVar28 = iVar19 == 0;
    bVar33 = true;
    if (!(bool)uVar28) {
      iVar16 = *(int *)(iVar16 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x3c);
      goto LAB_036e745c;
    }
  }
  else {
    bVar33 = 0xb139f700 < uVar10;
    uVar28 = false;
    if (uVar10 == 0xb139f701) {
      iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7550 + 0x36e72e4),0);
      uVar28 = iVar19 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar16 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x14);
        goto LAB_036e745c;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036e7574 + 0x36e74c4));
  uVar14 = func_0x024f83c8();
  uVar9 = func_0x024f83b8(*(undefined4 *)(iRam036e7578 + 0x36e74d8));
  *(undefined4 *)(puVar22 + -0x20) = 0;
  func_0x0509473c(uVar14,uVar9,uVar18,0);
  func_0x024f83c0(uVar14,iVar16);
  iVar7 = 0x36e7504;
  uVar37 = func_0x024f83bc();
  iVar19 = (int)((ulonglong)uVar37 >> 0x20);
  iVar4 = (int)uVar37;
  bVar29 = false;
  bVar34 = bVar33;
  if ((bool)uVar28) {
    bVar34 = 0x6fffffff < unaff_r11 || CARRY4(unaff_r11 + 0x90000000,(uint)bVar33);
    puVar23 = (undefined1 *)(unaff_r11 + 0x90000000 + (uint)bVar33);
    bVar29 = (undefined1 *)(unaff_r11 + 0x90000000 + (uint)bVar33) == (undefined1 *)0x0;
  }
  bVar30 = false;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = 0xdfffffff < uVar8 || CARRY4(uVar8 + 0x20000000,(uint)bVar34);
    iVar7 = uVar8 + 0x20000000 + (uint)bVar34;
    bVar30 = iVar7 == 0;
  }
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xfffffffc < unaff_r9 || CARRY4(unaff_r9 + 3,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 3 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0x7ffffffd < unaff_r9 || CARRY4(unaff_r9 + 0x80000002,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0x80000002 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xfffffffd < unaff_r9 || CARRY4(unaff_r9 + 2,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 2 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0x7ffffffe < unaff_r9 || CARRY4(unaff_r9 + 0x80000001,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0x80000001 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xfffffffe < unaff_r9 || CARRY4(unaff_r9 + 1,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 1 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0x7fffffff < unaff_r9 || CARRY4(unaff_r9 + 0x80000000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0x80000000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = CARRY4(unaff_r9,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xffffffc1 < unaff_r9 || CARRY4(unaff_r9 + 0x3e,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0x3e + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xffffffc3 < unaff_r9 || CARRY4(unaff_r9 + 0x3c,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x3c + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xffffffc5 < unaff_r9 || CARRY4(unaff_r9 + 0x3a,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0x3a + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xffffffc7 < unaff_r9 || CARRY4(unaff_r9 + 0x38,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x38 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xffffffc9 < unaff_r9 || CARRY4(unaff_r9 + 0x36,(uint)bVar34);
  }
  bVar29 = false;
  bVar35 = bVar33;
  if (bVar30 && unaff_r9 + 0x36 + (uint)bVar34 == 0) {
    bVar35 = 0x33ffffff < uVar8 || CARRY4(uVar8 + 0xcc000000,(uint)bVar33);
    iVar7 = uVar8 + 0xcc000000 + (uint)bVar33;
    bVar29 = iVar7 == 0;
  }
  bVar30 = false;
  bVar33 = bVar35;
  if (bVar29) {
    bVar33 = 0xfffffffd < unaff_r11 || CARRY4(unaff_r11 + 2,(uint)bVar35);
    puVar23 = (undefined1 *)(unaff_r11 + 2 + (uint)bVar35);
    bVar30 = (undefined1 *)(unaff_r11 + 2 + (uint)bVar35) == (undefined1 *)0x0;
  }
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xfffffffe < unaff_r9 || CARRY4(unaff_r9 + 1,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 1 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xffffffc3 < unaff_r9 || CARRY4(unaff_r9 + 0x3c,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0x3c + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xffffff8b < unaff_r9 || CARRY4(unaff_r9 + 0x74,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x74 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xfffffc6f < unaff_r9 || CARRY4(unaff_r9 + 0x390,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0x390 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xffffff9f < unaff_r9 || CARRY4(unaff_r9 + 0x60,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x60 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xfffffdaf < unaff_r9 || CARRY4(unaff_r9 + 0x250,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0x250 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xfffff2ff < unaff_r9 || CARRY4(unaff_r9 + 0xd00,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0xd00 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xfffffe6f < unaff_r9 || CARRY4(unaff_r9 + 400,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 400 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xfffff57f < unaff_r9 || CARRY4(unaff_r9 + 0xa80,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0xa80 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xfffff93f < unaff_r9 || CARRY4(unaff_r9 + 0x6c0,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0x6c0 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xfffff07f < unaff_r9 || CARRY4(unaff_r9 + 0xf80,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0xf80 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xfffffd6f < unaff_r9 || CARRY4(unaff_r9 + 0x290,(uint)bVar34);
  }
                    /* WARNING: Could not recover jumptable at 0x036e7574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (bVar30 && unaff_r9 + 0x290 + (uint)bVar34 == 0) {
    piVar3 = (int *)(*(code *)(
                              "_ZNKSt6__ndk115__codecvt_utf16IwLb1EE6do_outER9mbstate_tPKwS5_RS5_PcS7_RS7_"
                              + (uint)bVar33 + uVar8 + 0x10))();
    return piVar3;
  }
  *(int *)(puVar23 + -4) = iVar7;
  *(uint *)(puVar23 + -8) = unaff_r11;
  *(uint *)(puVar23 + -0xc) = uVar8;
  *(undefined4 *)(puVar23 + -0x10) = uVar18;
  *(undefined4 *)(puVar23 + -0x14) = uVar14;
  *(int *)(puVar23 + -0x18) = iVar16;
  puVar24 = puVar23 + -0x20;
  puVar13 = *(undefined4 **)(iVar19 + 0x1c);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam036e7a48 + 0x36e75a4));
    func_0x024f83cc(*(undefined4 *)(iRam036e7a4c + 0x36e75b0));
    func_0x024f83cc(*(undefined4 *)(iRam036e7a50 + 0x36e75bc));
    func_0x024f83cc(*(undefined4 *)(iRam036e7a54 + 0x36e75c8));
    func_0x024f83cc(*(undefined4 *)(iRam036e7a58 + 0x36e75d4));
    func_0x024f83cc(*(undefined4 *)(iRam036e7a5c + 0x36e75e0));
    func_0x024f83cc(*(undefined4 *)(iRam036e7a60 + 0x36e75ec));
    func_0x024f83cc(*(undefined4 *)(iRam036e7a64 + 0x36e75f8));
    func_0x024f83cc(*(undefined4 *)(iRam036e7a68 + 0x36e7604));
    func_0x024f83cc(*(undefined4 *)(iRam036e7a6c + 0x36e7610));
    func_0x024f83cc(*(undefined4 *)(iRam036e7a70 + 0x36e761c));
    func_0x024f83cc(*(undefined4 *)(iRam036e7a74 + 0x36e7628));
    func_0x024f83cc(*(undefined4 *)(iRam036e7a78 + 0x36e7634));
    func_0x024f83cc(*(undefined4 *)(iRam036e7a7c + 0x36e7640));
    puVar13 = *(undefined4 **)(iVar19 + 0x1c);
    if (puVar13 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar19);
      puVar13 = *(undefined4 **)(iVar19 + 0x1c);
    }
  }
  uVar18 = *puVar13;
  iVar16 = *(int *)(iVar4 + 0x44);
  if (*(int *)(**(int **)(iRam036e7a80 + 0x36e7664) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar8 = func_0x05171434(uVar18,0);
  if (iVar16 == 0) {
    func_0x024f83d4();
  }
  uVar18 = func_0x0475399c(iVar16,uVar8,**(undefined4 **)(iRam036e7a84 + 0x36e76a8));
  uVar10 = func_0x02965180(uVar18,0);
  if (uVar10 < 0x787a9e7c) {
    if (uVar10 < 0x4715ab4f) {
      if (uVar10 == 0x1156f848) {
        iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7ab4 + 0x36e7854),0);
        uVar28 = iVar16 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar19 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x20);
LAB_036e79a0:
          iVar4 = *(int *)(iVar16 + 4);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x024f83fc(iVar4);
          }
          piVar15 = (int *)0x0;
          if (piVar3 != (int *)0x0) {
            if (((uint)*(byte *)(iVar4 + 0xb8) <= (uint)*(byte *)(*piVar3 + 0xb8)) &&
               (piVar15 = piVar3,
               *(int *)(*(int *)(*piVar3 + 100) + (uint)*(byte *)(iVar4 + 0xb8) * 4 + -4) != iVar4))
            {
              piVar15 = (int *)0x0;
            }
          }
          return piVar15;
        }
      }
      else if (uVar10 == 0x3169fa72) {
        iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7a9c + 0x36e7880),0);
        uVar28 = iVar16 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar19 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x28);
          goto LAB_036e79a0;
        }
      }
      else {
        bVar33 = 0x4715ab4d < uVar10;
        uVar28 = false;
        if (uVar10 == 0x4715ab4e) {
          iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7a88 + 0x36e7714),0);
          uVar28 = iVar16 == 0;
          bVar33 = true;
          if (!(bool)uVar28) {
            iVar16 = *(int *)(iVar19 + 0x1c);
            piVar3 = *(int **)(iVar4 + 0x34);
            goto LAB_036e79a0;
          }
        }
      }
    }
    else if (uVar10 == 0x4ffedf5c) {
      iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7ab0 + 0x36e7904),0);
      uVar28 = iVar16 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar19 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x40);
        goto LAB_036e79a0;
      }
    }
    else if (uVar10 == 0x6d81ef27) {
      iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7aa0 + 0x36e7930),0);
      uVar28 = iVar16 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar19 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x2c);
        goto LAB_036e79a0;
      }
    }
    else {
      bVar33 = 0x787a9e7a < uVar10;
      uVar28 = false;
      if (uVar10 == 0x787a9e7b) {
        iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7a8c + 0x36e77cc),0);
        uVar28 = iVar16 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar19 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x1c);
          goto LAB_036e79a0;
        }
      }
    }
  }
  else if (uVar10 < 0xa3b10e3e) {
    if (uVar10 == 0x80fccce3) {
      iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7aa4 + 0x36e78ac),0);
      uVar28 = iVar16 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar19 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x30);
        goto LAB_036e79a0;
      }
    }
    else if (uVar10 == 0x8bafe426) {
      iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7a98 + 0x36e78d8),0);
      uVar28 = iVar16 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar19 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x24);
        goto LAB_036e79a0;
      }
    }
    else {
      bVar33 = 0xa3b10e3c < uVar10;
      uVar28 = false;
      if (uVar10 == 0xa3b10e3d) {
        iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7a90 + 0x36e7778),0);
        uVar28 = iVar16 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar19 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x18);
          goto LAB_036e79a0;
        }
      }
    }
  }
  else if (uVar10 == 0xd9f47ec6) {
    iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7aa8 + 0x36e795c),0);
    uVar28 = iVar16 == 0;
    bVar33 = true;
    if (!(bool)uVar28) {
      iVar16 = *(int *)(iVar19 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x38);
      goto LAB_036e79a0;
    }
  }
  else if (uVar10 == 0xc4e0c914) {
    iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7aac + 0x36e7988),0);
    uVar28 = iVar16 == 0;
    bVar33 = true;
    if (!(bool)uVar28) {
      iVar16 = *(int *)(iVar19 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x3c);
      goto LAB_036e79a0;
    }
  }
  else {
    bVar33 = 0xb139f700 < uVar10;
    uVar28 = false;
    if (uVar10 == 0xb139f701) {
      iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7a94 + 0x36e7828),0);
      uVar28 = iVar16 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar19 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x14);
        goto LAB_036e79a0;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036e7ab8 + 0x36e7a08));
  uVar14 = func_0x024f83c8();
  uVar9 = func_0x024f83b8(*(undefined4 *)(iRam036e7abc + 0x36e7a1c));
  *(undefined4 *)(puVar23 + -0x20) = 0;
  func_0x0509473c(uVar14,uVar9,uVar18,0);
  func_0x024f83c0(uVar14,iVar19);
  iVar7 = 0x36e7a48;
  uVar37 = func_0x024f83bc();
  iVar16 = (int)((ulonglong)uVar37 >> 0x20);
  iVar4 = (int)uVar37;
  bVar34 = bVar33;
  if ((bool)uVar28) {
    bVar34 = 0xffffc7ff < unaff_r11 || CARRY4(unaff_r11 + 0x3800,(uint)bVar33);
  }
  bVar29 = false;
  bVar35 = bVar34;
  if ((bool)uVar28 && unaff_r11 + 0x3800 + (uint)bVar33 == 0) {
    bVar35 = 0xffffffc3 < uVar8 || CARRY4(uVar8 + 0x3c,(uint)bVar34);
    iVar7 = uVar8 + 0x3c + (uint)bVar34;
    bVar29 = iVar7 == 0;
  }
  bVar33 = bVar35;
  if (bVar29) {
    bVar33 = 0xffff13ff < unaff_r9 || CARRY4(unaff_r9 + 0xec00,(uint)bVar35);
  }
  bVar29 = bVar29 && unaff_r9 + 0xec00 + (uint)bVar35 == 0;
  bVar34 = bVar33;
  if (bVar29) {
    bVar34 = 0xffff1bff < unaff_r9 || CARRY4(unaff_r9 + 0xe400,(uint)bVar33);
  }
  bVar29 = bVar29 && unaff_r9 + 0xe400 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = 0xffff23ff < unaff_r9 || CARRY4(unaff_r9 + 0xdc00,(uint)bVar34);
  }
  bVar29 = bVar29 && unaff_r9 + 0xdc00 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar29) {
    bVar34 = 0xffff2bff < unaff_r9 || CARRY4(unaff_r9 + 0xd400,(uint)bVar33);
  }
  bVar29 = bVar29 && unaff_r9 + 0xd400 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = 0xffff33ff < unaff_r9 || CARRY4(unaff_r9 + 0xcc00,(uint)bVar34);
  }
  bVar29 = bVar29 && unaff_r9 + 0xcc00 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar29) {
    bVar34 = 0xffff3bff < unaff_r9 || CARRY4(unaff_r9 + 0xc400,(uint)bVar33);
  }
  bVar29 = bVar29 && unaff_r9 + 0xc400 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = 0xffff43ff < unaff_r9 || CARRY4(unaff_r9 + 0xbc00,(uint)bVar34);
  }
  bVar29 = bVar29 && unaff_r9 + 0xbc00 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar29) {
    bVar34 = 0xffff4bff < unaff_r9 || CARRY4(unaff_r9 + 0xb400,(uint)bVar33);
  }
  bVar29 = bVar29 && unaff_r9 + 0xb400 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = 0xffff53ff < unaff_r9 || CARRY4(unaff_r9 + 0xac00,(uint)bVar34);
  }
  bVar29 = bVar29 && unaff_r9 + 0xac00 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar29) {
    bVar34 = 0xffff5bff < unaff_r9 || CARRY4(unaff_r9 + 0xa400,(uint)bVar33);
  }
  bVar29 = bVar29 && unaff_r9 + 0xa400 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = 0xffff63ff < unaff_r9 || CARRY4(unaff_r9 + 0x9c00,(uint)bVar34);
  }
  bVar29 = bVar29 && unaff_r9 + 0x9c00 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar29) {
    bVar34 = 0xffff6bff < unaff_r9 || CARRY4(unaff_r9 + 0x9400,(uint)bVar33);
  }
  bVar30 = false;
  bVar35 = bVar34;
  if (bVar29 && unaff_r9 + 0x9400 + (uint)bVar33 == 0) {
    bVar35 = 0xfffffddf < uVar8 || CARRY4(uVar8 + 0x220,(uint)bVar34);
    puVar24 = (undefined1 *)(uVar8 + 0x220 + (uint)bVar34);
    bVar30 = (undefined1 *)(uVar8 + 0x220 + (uint)bVar34) == (undefined1 *)0x0;
  }
  bVar33 = bVar35;
  if (bVar30) {
    bVar33 = 0xffff23ff < unaff_r11 || CARRY4(unaff_r11 + 0xdc00,(uint)bVar35);
  }
  bVar30 = bVar30 && unaff_r11 + 0xdc00 + (uint)bVar35 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xfffcffff < unaff_r9 || CARRY4(unaff_r9 + 0x30000,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x30000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xfff07fff < unaff_r9 || CARRY4(unaff_r9 + 0xf8000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0xf8000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xffff3fff < unaff_r9 || CARRY4(unaff_r9 + 0xc000,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0xc000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xfff5ffff < unaff_r9 || CARRY4(unaff_r9 + 0xa0000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0xa0000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xffcaffff < unaff_r9 || CARRY4(unaff_r9 + 0x350000,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x350000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xfffaffff < unaff_r9 || CARRY4(unaff_r9 + 0x50000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0x50000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xffdcffff < unaff_r9 || CARRY4(unaff_r9 + 0x230000,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x230000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xfffdffff < unaff_r9 || CARRY4(unaff_r9 + 0x20000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0x20000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xffe6ffff < unaff_r9 || CARRY4(unaff_r9 + 0x190000,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x190000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xfff5ffff < unaff_r9 || CARRY4(unaff_r9 + 0xa0000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0xa0000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xffd2ffff < unaff_r9 || CARRY4(unaff_r9 + 0x2d0000,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x2d0000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xfff9ffff < unaff_r9 || CARRY4(unaff_r9 + 0x60000,(uint)bVar34);
  }
                    /* WARNING: Could not recover jumptable at 0x036e7ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (bVar30 && unaff_r9 + 0x60000 + (uint)bVar34 == 0) {
    piVar3 = (int *)(*(code *)(uVar8 + 0x8000000 + (uint)bVar33))();
    return piVar3;
  }
  *(int *)(puVar24 + -4) = iVar7;
  *(uint *)(puVar24 + -8) = unaff_r11;
  *(uint *)(puVar24 + -0xc) = uVar8;
  *(undefined4 *)(puVar24 + -0x10) = uVar18;
  *(undefined4 *)(puVar24 + -0x14) = uVar14;
  *(int *)(puVar24 + -0x18) = iVar19;
  puVar25 = puVar24 + -0x20;
  puVar13 = *(undefined4 **)(iVar16 + 0x1c);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam036e7f8c + 0x36e7ae8));
    func_0x024f83cc(*(undefined4 *)(iRam036e7f90 + 0x36e7af4));
    func_0x024f83cc(*(undefined4 *)(iRam036e7f94 + 0x36e7b00));
    func_0x024f83cc(*(undefined4 *)(iRam036e7f98 + 0x36e7b0c));
    func_0x024f83cc(*(undefined4 *)(iRam036e7f9c + 0x36e7b18));
    func_0x024f83cc(*(undefined4 *)(iRam036e7fa0 + 0x36e7b24));
    func_0x024f83cc(*(undefined4 *)(iRam036e7fa4 + 0x36e7b30));
    func_0x024f83cc(*(undefined4 *)(iRam036e7fa8 + 0x36e7b3c));
    func_0x024f83cc(*(undefined4 *)(iRam036e7fac + 0x36e7b48));
    func_0x024f83cc(*(undefined4 *)(iRam036e7fb0 + 0x36e7b54));
    func_0x024f83cc(*(undefined4 *)(iRam036e7fb4 + 0x36e7b60));
    func_0x024f83cc(*(undefined4 *)(iRam036e7fb8 + 0x36e7b6c));
    func_0x024f83cc(*(undefined4 *)(iRam036e7fbc + 0x36e7b78));
    func_0x024f83cc(*(undefined4 *)(iRam036e7fc0 + 0x36e7b84));
    puVar13 = *(undefined4 **)(iVar16 + 0x1c);
    if (puVar13 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar16);
      puVar13 = *(undefined4 **)(iVar16 + 0x1c);
    }
  }
  uVar18 = *puVar13;
  iVar19 = *(int *)(iVar4 + 0x44);
  if (*(int *)(**(int **)(iRam036e7fc4 + 0x36e7ba8) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar8 = func_0x05171434(uVar18,0);
  if (iVar19 == 0) {
    func_0x024f83d4();
  }
  uVar18 = func_0x0475399c(iVar19,uVar8,**(undefined4 **)(iRam036e7fc8 + 0x36e7bec));
  uVar10 = func_0x02965180(uVar18,0);
  if (uVar10 < 0x69935fe7) {
    if (uVar10 < 0x46e7cfbd) {
      if (uVar10 == 0xe0ad569) {
        iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7ff8 + 0x36e7d98),0);
        uVar28 = iVar19 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar16 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x14);
LAB_036e7ee4:
          iVar4 = *(int *)(iVar16 + 4);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x024f83fc(iVar4);
          }
          piVar15 = (int *)0x0;
          if (piVar3 != (int *)0x0) {
            if (((uint)*(byte *)(iVar4 + 0xb8) <= (uint)*(byte *)(*piVar3 + 0xb8)) &&
               (piVar15 = piVar3,
               *(int *)(*(int *)(*piVar3 + 100) + (uint)*(byte *)(iVar4 + 0xb8) * 4 + -4) != iVar4))
            {
              piVar15 = (int *)0x0;
            }
          }
          return piVar15;
        }
      }
      else if (uVar10 == 0x370b91cb) {
        iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7fe8 + 0x36e7dc4),0);
        uVar28 = iVar19 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar16 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x30);
          goto LAB_036e7ee4;
        }
      }
      else {
        bVar33 = 0x46e7cfbb < uVar10;
        uVar28 = false;
        if (uVar10 == 0x46e7cfbc) {
          iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7fcc + 0x36e7c58),0);
          uVar28 = iVar19 == 0;
          bVar33 = true;
          if (!(bool)uVar28) {
            iVar16 = *(int *)(iVar16 + 0x1c);
            piVar3 = *(int **)(iVar4 + 0x3c);
            goto LAB_036e7ee4;
          }
        }
      }
    }
    else if (uVar10 == 0x5c32e71d) {
      iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7fdc + 0x36e7e48),0);
      uVar28 = iVar19 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar16 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x18);
        goto LAB_036e7ee4;
      }
    }
    else if (uVar10 == 0x6020ab4e) {
      iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7ff0 + 0x36e7e74),0);
      uVar28 = iVar19 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar16 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x38);
        goto LAB_036e7ee4;
      }
    }
    else {
      bVar33 = 0x69935fe5 < uVar10;
      uVar28 = false;
      if (uVar10 == 0x69935fe6) {
        iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7fd0 + 0x36e7d10),0);
        uVar28 = iVar19 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar16 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x24);
          goto LAB_036e7ee4;
        }
      }
    }
  }
  else if (uVar10 < 0xa7300587) {
    if (uVar10 == 0x858d4954) {
      iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7ff4 + 0x36e7df0),0);
      uVar28 = iVar19 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar16 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x40);
        goto LAB_036e7ee4;
      }
    }
    else if (uVar10 == 0xa7300586) {
      iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7fec + 0x36e7e1c),0);
      uVar28 = iVar19 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar16 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x34);
        goto LAB_036e7ee4;
      }
    }
    else {
      bVar33 = 0x70a33522 < uVar10;
      uVar28 = false;
      if (uVar10 == 0x70a33523) {
        iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7fd4 + 0x36e7cbc),0);
        uVar28 = iVar19 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(iVar16 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x1c);
          goto LAB_036e7ee4;
        }
      }
    }
  }
  else if (uVar10 == 0xb0e0c2ca) {
    iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7fe4 + 0x36e7ea0),0);
    uVar28 = iVar19 == 0;
    bVar33 = true;
    if (!(bool)uVar28) {
      iVar16 = *(int *)(iVar16 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x28);
      goto LAB_036e7ee4;
    }
  }
  else if (uVar10 == 0xb1a9d450) {
    iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7fe0 + 0x36e7ecc),0);
    uVar28 = iVar19 == 0;
    bVar33 = true;
    if (!(bool)uVar28) {
      iVar16 = *(int *)(iVar16 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x20);
      goto LAB_036e7ee4;
    }
  }
  else {
    bVar33 = 0xeac3c916 < uVar10;
    uVar28 = false;
    if (uVar10 == 0xeac3c917) {
      iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7fd8 + 0x36e7d6c),0);
      uVar28 = iVar19 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(iVar16 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x2c);
        goto LAB_036e7ee4;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036e7ffc + 0x36e7f4c));
  uVar14 = func_0x024f83c8();
  uVar9 = func_0x024f83b8(*(undefined4 *)(iRam036e8000 + 0x36e7f60));
  *(undefined4 *)(puVar24 + -0x20) = 0;
  func_0x0509473c(uVar14,uVar9,uVar18,0);
  func_0x024f83c0(uVar14,iVar16);
  uVar37 = func_0x024f83bc();
  uVar10 = (uint)((ulonglong)uVar37 >> 0x20);
  iVar4 = (int)uVar37;
  bVar34 = bVar33;
  if ((bool)uVar28) {
    bVar34 = 0xff63ffff < unaff_r11 || CARRY4((uint)(&UNK_009c0000 + unaff_r11),(uint)bVar33);
  }
  bVar29 = false;
  bVar35 = bVar34;
  if ((bool)uVar28 && &UNK_009c0000 + bVar33 + unaff_r11 == (undefined *)0x0) {
    bVar35 = 0xfff07fff < uVar8 || CARRY4(uVar8 + 0xf8000,(uint)bVar34);
    puVar25 = (undefined1 *)(uVar8 + 0xf8000 + (uint)bVar34);
    bVar29 = (undefined1 *)(uVar8 + 0xf8000 + (uint)bVar34) == (undefined1 *)0x0;
  }
  bVar33 = bVar35;
  if (bVar29) {
    bVar33 = 0xf27fffff < unaff_r9 || CARRY4(unaff_r9 + 0xd800000,(uint)bVar35);
  }
  bVar29 = bVar29 && unaff_r9 + 0xd800000 + (uint)bVar35 == 0;
  bVar34 = bVar33;
  if (bVar29) {
    bVar34 = 0xf2ffffff < unaff_r9 || CARRY4(unaff_r9 + 0xd000000,(uint)bVar33);
  }
  bVar29 = bVar29 && unaff_r9 + 0xd000000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = 0xf37fffff < unaff_r9 || CARRY4(unaff_r9 + 0xc800000,(uint)bVar34);
  }
  bVar29 = bVar29 && unaff_r9 + 0xc800000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar29) {
    bVar34 = 0xf3ffffff < unaff_r9 || CARRY4(unaff_r9 + 0xc000000,(uint)bVar33);
  }
  bVar29 = bVar29 && unaff_r9 + 0xc000000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = 0xf47fffff < unaff_r9 || CARRY4(unaff_r9 + 0xb800000,(uint)bVar34);
  }
  bVar29 = bVar29 && unaff_r9 + 0xb800000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar29) {
    bVar34 = 0xf4ffffff < unaff_r9 || CARRY4(unaff_r9 + 0xb000000,(uint)bVar33);
  }
  bVar29 = bVar29 && unaff_r9 + 0xb000000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = 0xf57fffff < unaff_r9 || CARRY4(unaff_r9 + 0xa800000,(uint)bVar34);
  }
  bVar29 = bVar29 && unaff_r9 + 0xa800000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar29) {
    bVar34 = 0xf5ffffff < unaff_r9 || CARRY4(unaff_r9 + 0xa000000,(uint)bVar33);
  }
  bVar29 = bVar29 && unaff_r9 + 0xa000000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = 0xf67fffff < unaff_r9 || CARRY4(unaff_r9 + 0x9800000,(uint)bVar34);
  }
  bVar29 = bVar29 && unaff_r9 + 0x9800000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar29) {
    bVar34 = 0xf6ffffff < unaff_r9 || CARRY4(unaff_r9 + 0x9000000,(uint)bVar33);
  }
  bVar29 = bVar29 && unaff_r9 + 0x9000000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = 0xf77fffff < unaff_r9 || CARRY4(unaff_r9 + 0x8800000,(uint)bVar34);
  }
  bVar29 = bVar29 && unaff_r9 + 0x8800000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar29) {
    bVar34 = 0xf7ffffff < unaff_r9 || CARRY4(unaff_r9 + 0x8000000,(uint)bVar33);
  }
  bVar30 = false;
  bVar35 = bVar34;
  if (bVar29 && unaff_r9 + 0x8000000 + (uint)bVar33 == 0) {
    bVar35 = 0xfffbbfff < uVar8 || CARRY4(uVar8 + 0x44000,(uint)bVar34);
    puVar25 = (undefined1 *)(uVar8 + 0x44000 + (uint)bVar34);
    bVar30 = (undefined1 *)(uVar8 + 0x44000 + (uint)bVar34) == (undefined1 *)0x0;
  }
  bVar33 = bVar35;
  if (bVar30) {
    bVar33 = 0xfd9fffff < unaff_r11 || CARRY4((uint)(&UNK_02600000 + unaff_r11),(uint)bVar35);
  }
  bVar30 = bVar30 && &UNK_02600000 + bVar35 + unaff_r11 == (undefined *)0x0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xd4ffffff < unaff_r9 || CARRY4(unaff_r9 + 0x2b000000,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x2b000000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0x23ffffff < unaff_r9 || CARRY4(unaff_r9 + 0xdc000000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0xdc000000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xf4ffffff < unaff_r9 || CARRY4(unaff_r9 + 0xb000000,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0xb000000 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0x77ffffff < unaff_r9 || CARRY4(unaff_r9 + 0x88000000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0x88000000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0x9ffffffd < unaff_r9 || CARRY4(unaff_r9 + 0x60000002,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x60000002 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0x2fffffff < unaff_r9 || CARRY4(unaff_r9 + 0xd0000000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0xd0000000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0x8ffffffe < unaff_r9 || CARRY4(unaff_r9 + 0x70000001,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x70000001 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xcbffffff < unaff_r9 || CARRY4(unaff_r9 + 0x34000000,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0x34000000 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xaffffffc < unaff_r9 || CARRY4(unaff_r9 + 0x50000003,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0x50000003 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0x3ffffffe < unaff_r9 || CARRY4(unaff_r9 + 0xc0000001,(uint)bVar34);
  }
  bVar30 = bVar30 && unaff_r9 + 0xc0000001 + (uint)bVar34 == 0;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0x5ffffffc < unaff_r9 || CARRY4(unaff_r9 + 0xa0000003,(uint)bVar33);
  }
  bVar30 = bVar30 && unaff_r9 + 0xa0000003 + (uint)bVar33 == 0;
  bVar33 = bVar34;
  if (bVar30) {
    bVar33 = 0xbbffffff < unaff_r9 || CARRY4(unaff_r9 + 0x44000000,(uint)bVar34);
  }
                    /* WARNING: Could not recover jumptable at 0x036e7ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (bVar30 && unaff_r9 + 0x44000000 + (uint)bVar34 == 0) {
    piVar3 = (int *)(*(code *)(uVar8 + 0xf + (uint)bVar33))();
    return piVar3;
  }
  *(undefined4 *)(puVar25 + -4) = 0x36e7f8c;
  *(uint *)(puVar25 + -8) = unaff_r11;
  *(uint *)(puVar25 + -0xc) = uVar8;
  *(undefined4 *)(puVar25 + -0x10) = uVar18;
  *(undefined4 *)(puVar25 + -0x14) = uVar14;
  *(int *)(puVar25 + -0x18) = iVar16;
  puVar26 = puVar25 + -0x20;
  puVar13 = *(undefined4 **)(uVar10 + 0x1c);
  if (puVar13 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam036e84d0 + 0x36e802c));
    func_0x024f83cc(*(undefined4 *)(iRam036e84d4 + 0x36e8038));
    func_0x024f83cc(*(undefined4 *)(iRam036e84d8 + 0x36e8044));
    func_0x024f83cc(*(undefined4 *)(iRam036e84dc + 0x36e8050));
    func_0x024f83cc(*(undefined4 *)(iRam036e84e0 + 0x36e805c));
    func_0x024f83cc(*(undefined4 *)(iRam036e84e4 + 0x36e8068));
    func_0x024f83cc(*(undefined4 *)(iRam036e84e8 + 0x36e8074));
    func_0x024f83cc(*(undefined4 *)(iRam036e84ec + 0x36e8080));
    func_0x024f83cc(*(undefined4 *)(iRam036e84f0 + 0x36e808c));
    func_0x024f83cc(*(undefined4 *)(iRam036e84f4 + 0x36e8098));
    func_0x024f83cc(*(undefined4 *)(iRam036e84f8 + 0x36e80a4));
    func_0x024f83cc(*(undefined4 *)(iRam036e84fc + 0x36e80b0));
    func_0x024f83cc(*(undefined4 *)(iRam036e8500 + 0x36e80bc));
    func_0x024f83cc(*(undefined4 *)(iRam036e8504 + 0x36e80c8));
    puVar13 = *(undefined4 **)(uVar10 + 0x1c);
    if (puVar13 == (undefined4 *)0x0) {
      func_0x024f83f8(uVar10);
      puVar13 = *(undefined4 **)(uVar10 + 0x1c);
    }
  }
  uVar18 = *puVar13;
  iVar16 = *(int *)(iVar4 + 0x44);
  if (*(int *)(**(int **)(iRam036e8508 + 0x36e80ec) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar8 = func_0x05171434(uVar18,0);
  if (iVar16 == 0) {
    func_0x024f83d4();
  }
  uVar18 = func_0x0475399c(iVar16,uVar8,**(undefined4 **)(iRam036e850c + 0x36e8130));
  uVar11 = func_0x02965180(uVar18,0);
  if (uVar11 < 0x69935fe7) {
    if (uVar11 < 0x46e7cfbd) {
      if (uVar11 == 0xe0ad569) {
        iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e853c + 0x36e82dc),0);
        uVar28 = iVar16 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(uVar10 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x14);
LAB_036e8428:
          iVar4 = *(int *)(iVar16 + 4);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x024f83fc(iVar4);
          }
          piVar15 = (int *)0x0;
          if (piVar3 != (int *)0x0) {
            if (((uint)*(byte *)(iVar4 + 0xb8) <= (uint)*(byte *)(*piVar3 + 0xb8)) &&
               (piVar15 = piVar3,
               *(int *)(*(int *)(*piVar3 + 100) + (uint)*(byte *)(iVar4 + 0xb8) * 4 + -4) != iVar4))
            {
              piVar15 = (int *)0x0;
            }
          }
          return piVar15;
        }
      }
      else if (uVar11 == 0x370b91cb) {
        iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e852c + 0x36e8308),0);
        uVar28 = iVar16 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(uVar10 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x30);
          goto LAB_036e8428;
        }
      }
      else {
        bVar33 = 0x46e7cfbb < uVar11;
        uVar28 = false;
        if (uVar11 == 0x46e7cfbc) {
          iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e8510 + 0x36e819c),0);
          uVar28 = iVar16 == 0;
          bVar33 = true;
          if (!(bool)uVar28) {
            iVar16 = *(int *)(uVar10 + 0x1c);
            piVar3 = *(int **)(iVar4 + 0x3c);
            goto LAB_036e8428;
          }
        }
      }
    }
    else if (uVar11 == 0x5c32e71d) {
      iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e8520 + 0x36e838c),0);
      uVar28 = iVar16 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(uVar10 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x18);
        goto LAB_036e8428;
      }
    }
    else if (uVar11 == 0x6020ab4e) {
      iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e8534 + 0x36e83b8),0);
      uVar28 = iVar16 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(uVar10 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x38);
        goto LAB_036e8428;
      }
    }
    else {
      bVar33 = 0x69935fe5 < uVar11;
      uVar28 = false;
      if (uVar11 == 0x69935fe6) {
        iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e8514 + 0x36e8254),0);
        uVar28 = iVar16 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(uVar10 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x24);
          goto LAB_036e8428;
        }
      }
    }
  }
  else if (uVar11 < 0xa7300587) {
    if (uVar11 == 0x858d4954) {
      iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e8538 + 0x36e8334),0);
      uVar28 = iVar16 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(uVar10 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x40);
        goto LAB_036e8428;
      }
    }
    else if (uVar11 == 0xa7300586) {
      iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e8530 + 0x36e8360),0);
      uVar28 = iVar16 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(uVar10 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x34);
        goto LAB_036e8428;
      }
    }
    else {
      bVar33 = 0x70a33522 < uVar11;
      uVar28 = false;
      if (uVar11 == 0x70a33523) {
        iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e8518 + 0x36e8200),0);
        uVar28 = iVar16 == 0;
        bVar33 = true;
        if (!(bool)uVar28) {
          iVar16 = *(int *)(uVar10 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x1c);
          goto LAB_036e8428;
        }
      }
    }
  }
  else if (uVar11 == 0xb0e0c2ca) {
    iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e8528 + 0x36e83e4),0);
    uVar28 = iVar16 == 0;
    bVar33 = true;
    if (!(bool)uVar28) {
      iVar16 = *(int *)(uVar10 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x28);
      goto LAB_036e8428;
    }
  }
  else if (uVar11 == 0xb1a9d450) {
    iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e8524 + 0x36e8410),0);
    uVar28 = iVar16 == 0;
    bVar33 = true;
    if (!(bool)uVar28) {
      iVar16 = *(int *)(uVar10 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x20);
      goto LAB_036e8428;
    }
  }
  else {
    bVar33 = 0xeac3c916 < uVar11;
    uVar28 = false;
    if (uVar11 == 0xeac3c917) {
      iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e851c + 0x36e82b0),0);
      uVar28 = iVar16 == 0;
      bVar33 = true;
      if (!(bool)uVar28) {
        iVar16 = *(int *)(uVar10 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x2c);
        goto LAB_036e8428;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036e8540 + 0x36e8490));
  uVar14 = func_0x024f83c8();
  uVar9 = func_0x024f83b8(*(undefined4 *)(iRam036e8544 + 0x36e84a4));
  *(undefined4 *)(puVar25 + -0x20) = 0;
  func_0x0509473c(uVar14,uVar9,uVar18,0);
  func_0x024f83c0(uVar14,uVar10);
  iVar19 = 0x36e84d0;
  uVar37 = func_0x024f83bc();
  iVar16 = (int)((ulonglong)uVar37 >> 0x20);
  iVar4 = (int)uVar37;
  bVar34 = bVar33;
  if ((bool)uVar28) {
    bVar34 = 0x9ffffffe < unaff_r11 || CARRY4(unaff_r11 + 0x60000001,(uint)bVar33);
  }
  bVar29 = false;
  bVar35 = bVar34;
  if ((bool)uVar28 && unaff_r11 + 0x60000001 + (uint)bVar33 == 0) {
    bVar35 = 0xd2ffffff < uVar8 || CARRY4(uVar8 + 0x2d000000,(uint)bVar34);
    puVar26 = (undefined1 *)(uVar8 + 0x2d000000 + (uint)bVar34);
    bVar29 = (undefined1 *)(uVar8 + 0x2d000000 + (uint)bVar34) == (undefined1 *)0x0;
  }
  bVar30 = false;
  iVar7 = extraout_r2_00;
  bVar33 = bVar35;
  if (bVar29) {
    bVar33 = 0xffffffda < unaff_r9 || CARRY4(unaff_r9 + 0x25,(uint)bVar35);
    iVar7 = unaff_r9 + 0x25 + (uint)bVar35;
    bVar30 = iVar7 == 0;
  }
  bVar29 = false;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xffffffdc < unaff_r9 || CARRY4(unaff_r9 + 0x23,(uint)bVar33);
    iVar7 = unaff_r9 + 0x23 + (uint)bVar33;
    bVar29 = iVar7 == 0;
  }
  bVar30 = false;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = 0xffffffde < unaff_r9 || CARRY4(unaff_r9 + 0x21,(uint)bVar34);
    iVar7 = unaff_r9 + 0x21 + (uint)bVar34;
    bVar30 = iVar7 == 0;
  }
  bVar29 = false;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xffffffe0 < unaff_r9 || CARRY4(unaff_r9 + 0x1f,(uint)bVar33);
    iVar7 = unaff_r9 + 0x1f + (uint)bVar33;
    bVar29 = iVar7 == 0;
  }
  bVar30 = false;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = 0xffffffe2 < unaff_r9 || CARRY4(unaff_r9 + 0x1d,(uint)bVar34);
    iVar7 = unaff_r9 + 0x1d + (uint)bVar34;
    bVar30 = iVar7 == 0;
  }
  bVar29 = false;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xffffffe4 < unaff_r9 || CARRY4(unaff_r9 + 0x1b,(uint)bVar33);
    iVar7 = unaff_r9 + 0x1b + (uint)bVar33;
    bVar29 = iVar7 == 0;
  }
  bVar30 = false;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = 0xffffffe6 < unaff_r9 || CARRY4(unaff_r9 + 0x19,(uint)bVar34);
    iVar7 = unaff_r9 + 0x19 + (uint)bVar34;
    bVar30 = iVar7 == 0;
  }
  bVar29 = false;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xffffffe8 < unaff_r9 || CARRY4(unaff_r9 + 0x17,(uint)bVar33);
    iVar7 = unaff_r9 + 0x17 + (uint)bVar33;
    bVar29 = iVar7 == 0;
  }
  bVar30 = false;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = 0xffffffea < unaff_r9 || CARRY4(unaff_r9 + 0x15,(uint)bVar34);
    iVar7 = unaff_r9 + 0x15 + (uint)bVar34;
    bVar30 = iVar7 == 0;
  }
  bVar29 = false;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xffffffec < unaff_r9 || CARRY4(unaff_r9 + 0x13,(uint)bVar33);
    iVar7 = unaff_r9 + 0x13 + (uint)bVar33;
    bVar29 = iVar7 == 0;
  }
  bVar30 = false;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = 0xffffffee < unaff_r9 || CARRY4(unaff_r9 + 0x11,(uint)bVar34);
    iVar7 = unaff_r9 + 0x11 + (uint)bVar34;
    bVar30 = iVar7 == 0;
  }
  bVar29 = false;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xfffffff0 < unaff_r9 || CARRY4(unaff_r9 + 0xf,(uint)bVar33);
    iVar7 = unaff_r9 + 0xf + (uint)bVar33;
    bVar29 = iVar7 == 0;
  }
  bVar30 = false;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = CARRY4(uVar8,(uint)bVar34);
    puVar26 = (undefined1 *)(uVar8 + bVar34);
    bVar30 = (undefined1 *)(uVar8 + bVar34) == (undefined1 *)0x0;
  }
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xbffffffa < unaff_r11 || CARRY4(unaff_r11 + 0x40000005,(uint)bVar33);
  }
  bVar29 = false;
  bVar35 = bVar34;
  if (bVar30 && unaff_r11 + 0x40000005 + (uint)bVar33 == 0) {
    bVar35 = 0xffffff97 < unaff_r9 || CARRY4(unaff_r9 + 0x68,(uint)bVar34);
    iVar7 = unaff_r9 + 0x68 + (uint)bVar34;
    bVar29 = iVar7 == 0;
  }
  bVar30 = false;
  bVar33 = bVar35;
  if (bVar29) {
    bVar33 = 0xfffffd9f < unaff_r9 || CARRY4(unaff_r9 + 0x260,(uint)bVar35);
    iVar16 = unaff_r9 + 0x260 + (uint)bVar35;
    bVar30 = iVar16 == 0;
  }
  bVar29 = false;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xfffffc5f < unaff_r9 || CARRY4(unaff_r9 + 0x3a0,(uint)bVar33);
    iVar16 = unaff_r9 + 0x3a0 + (uint)bVar33;
    bVar29 = iVar16 == 0;
  }
  bVar30 = false;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = 0xfffffeef < unaff_r9 || CARRY4(unaff_r9 + 0x110,(uint)bVar34);
    iVar16 = unaff_r9 + 0x110 + (uint)bVar34;
    bVar30 = iVar16 == 0;
  }
  bVar29 = false;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xfffffabf < unaff_r9 || CARRY4(unaff_r9 + 0x540,(uint)bVar33);
    iVar16 = unaff_r9 + 0x540 + (uint)bVar33;
    bVar29 = iVar16 == 0;
  }
  bVar30 = false;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = 0xffffc3ff < unaff_r9 || CARRY4(unaff_r9 + 0x3c00,(uint)bVar34);
    iVar16 = unaff_r9 + 0x3c00 + (uint)bVar34;
    bVar30 = iVar16 == 0;
  }
  bVar29 = false;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xfffffe7f < unaff_r9 || CARRY4(unaff_r9 + 0x180,(uint)bVar33);
    iVar16 = unaff_r9 + 0x180 + (uint)bVar33;
    bVar29 = iVar16 == 0;
  }
  bVar30 = false;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = 0xfffff0ff < unaff_r9 || CARRY4(unaff_r9 + 0xf00,(uint)bVar34);
    iVar16 = unaff_r9 + 0xf00 + (uint)bVar34;
    bVar30 = iVar16 == 0;
  }
  bVar29 = false;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xfffff6ff < unaff_r9 || CARRY4(unaff_r9 + 0x900,(uint)bVar33);
    iVar16 = unaff_r9 + 0x900 + (uint)bVar33;
    bVar29 = iVar16 == 0;
  }
  bVar30 = false;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = 0xfffffd3f < unaff_r9 || CARRY4(unaff_r9 + 0x2c0,(uint)bVar34);
    iVar16 = unaff_r9 + 0x2c0 + (uint)bVar34;
    bVar30 = iVar16 == 0;
  }
  bVar29 = false;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xfffff5bf < unaff_r9 || CARRY4(unaff_r9 + 0xa40,(uint)bVar33);
    iVar16 = unaff_r9 + 0xa40 + (uint)bVar33;
    bVar29 = iVar16 == 0;
  }
  bVar30 = false;
  bVar33 = bVar34;
  if (bVar29) {
    bVar33 = CARRY4(unaff_r9,(uint)bVar34);
    iVar16 = unaff_r9 + bVar34;
    bVar30 = iVar16 == 0;
  }
  bVar29 = false;
  bVar34 = bVar33;
  if (bVar30) {
    bVar34 = 0xfffc1fff < uVar8 || CARRY4(uVar8 + 0x3e000,(uint)bVar33);
    iVar19 = uVar8 + 0x3e000 + (uint)bVar33;
    bVar29 = iVar19 == 0;
  }
  if (bVar29) {
    unaff_r10 = unaff_r8 + 0x1700 + (uint)bVar34;
  }
  *(int *)(puVar26 + -4) = iVar19;
  *(undefined4 *)(puVar26 + -8) = uVar18;
  *(undefined4 *)(puVar26 + -0xc) = uVar14;
  puVar36 = (uint *)(puVar26 + -0x10);
  *puVar36 = uVar10;
  if (*(int *)(iVar7 + 0x1c) == 0) {
    func_0x024f83f8(iVar7);
  }
  uVar18 = func_0x024f85fc(*(undefined4 *)(iVar4 + 0xc),0);
  uVar18 = func_0x0357e134(uVar18,iVar16,0,**(undefined4 **)(iVar7 + 0x1c));
  iVar16 = *(int *)(*(int *)(iVar7 + 0x1c) + 4);
  uVar10 = *puVar36;
  uVar14 = *(undefined4 *)(puVar26 + -0xc);
  uVar9 = *(undefined4 *)(puVar26 + -8);
  *(undefined4 *)(puVar26 + -4) = *(undefined4 *)(puVar26 + -4);
  *(uint *)(puVar26 + -8) = unaff_r11;
  *(int *)(puVar26 + -0xc) = unaff_r10;
  *puVar36 = unaff_r9;
  *(int *)(puVar26 + -0x14) = unaff_r8;
  *(uint *)(puVar26 + -0x18) = uVar8;
  *(undefined4 *)(puVar26 + -0x1c) = uVar9;
  *(undefined4 *)(puVar26 + -0x20) = uVar14;
  *(uint *)(puVar26 + -0x24) = uVar10;
  piVar3 = (int *)(iVar16 + 0x1c);
  puVar13 = (undefined4 *)*piVar3;
  if (puVar13 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam03594918 + 0x3593f70));
    func_0x024f83cc(*(undefined4 *)(iRam0359491c + 0x3593f7c));
    func_0x024f83cc(*(undefined4 *)(iRam03594920 + 0x3593f88));
    func_0x024f83cc(*(undefined4 *)(iRam03594924 + 0x3593f94));
    func_0x024f83cc(*(undefined4 *)(iRam03594928 + 0x3593fa0));
    func_0x024f83cc(*(undefined4 *)(iRam0359492c + 0x3593fac));
    func_0x024f83cc(*(undefined4 *)(iRam03594930 + 0x3593fb8));
    func_0x024f83cc(*(undefined4 *)(iRam03594934 + 0x3593fc4));
    func_0x024f83cc(*(undefined4 *)(iRam03594938 + 0x3593fd0));
    func_0x024f83cc(*(undefined4 *)(iRam0359493c + 0x3593fdc));
    func_0x024f83cc(*(undefined4 *)(iRam03594940 + 0x3593fe8));
    func_0x024f83cc(*(undefined4 *)(iRam03594944 + 0x3593ff4));
    func_0x024f83cc(*(undefined4 *)(iRam03594948 + 0x3594000));
    func_0x024f83cc(*(undefined4 *)(iRam0359494c + 0x359400c));
    func_0x024f83cc(*(undefined4 *)(iRam03594950 + 0x3594018));
    func_0x024f83cc(*(undefined4 *)(iRam03594954 + 0x3594024));
    func_0x024f83cc(*(undefined4 *)(iRam03594958 + 0x3594030));
    func_0x024f83cc(*(undefined4 *)(iRam0359495c + 0x359403c));
    func_0x024f83cc(*(undefined4 *)(iRam03594960 + 0x3594048));
    func_0x024f83cc(*(undefined4 *)(iRam03594964 + 0x3594054));
    func_0x024f83cc(*(undefined4 *)(iRam03594968 + 0x3594060));
    func_0x024f83cc(*(undefined4 *)(iRam0359496c + 0x359406c));
    func_0x024f83cc(*(undefined4 *)(iRam03594970 + 0x3594078));
    func_0x024f83cc(*(undefined4 *)(iRam03594974 + 0x3594084));
    func_0x024f83cc(*(undefined4 *)(iRam03594978 + 0x3594090));
    func_0x024f83cc(*(undefined4 *)(iRam0359497c + 0x359409c));
    puVar13 = *(undefined4 **)(iVar16 + 0x1c);
    if (puVar13 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar16);
      puVar13 = *(undefined4 **)(iVar16 + 0x1c);
    }
  }
  piVar15 = *(int **)(iRam03594980 + 0x35940c0);
  uVar14 = *puVar13;
  if (*(int *)(*piVar15 + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar14 = func_0x05171434(uVar14,0);
  piVar20 = *(int **)(iRam03594984 + 0x35940f0);
  if (*(int *)(*piVar20 + 0x74) == 0) {
    func_0x024f83d8();
  }
  iVar19 = func_0x024f85ec(uVar14,0);
  uVar14 = *(undefined4 *)*piVar3;
  if (*(int *)(*piVar15 + 0x74) == 0) {
    func_0x024f83d8();
  }
  piVar5 = (int *)func_0x05171434(uVar14,0);
  if (iVar19 == 0) {
    uVar14 = func_0x05171434(**(undefined4 **)(iRam035949d8 + 0x35941ac),0);
    iVar19 = func_0x0517c82c(piVar5,uVar14,0);
    if (iVar19 == 0) {
      uVar14 = *(undefined4 *)*piVar3;
      if (*(int *)(*piVar15 + 0x74) == 0) {
        func_0x024f83d8();
      }
      piVar5 = (int *)0x0;
      uVar14 = func_0x05171434(uVar14,0);
      uVar9 = func_0x05171434(**(undefined4 **)(iRam035949dc + 0x35942a0),0);
      iVar19 = func_0x0517c82c(uVar14,uVar9,0);
      if (iVar19 == 0) {
        uVar14 = *(undefined4 *)*piVar3;
        if (*(int *)(*piVar15 + 0x74) == 0) {
          func_0x024f83d8();
        }
        piVar5 = (int *)0x0;
        uVar14 = func_0x05171434(uVar14,0);
        uVar9 = func_0x05171434(**(undefined4 **)(iRam035949e0 + 0x35943e8),0);
        iVar19 = func_0x0517c82c(uVar14,uVar9,0);
        if (iVar19 == 0) {
          uVar14 = **(undefined4 **)(iRam035949e4 + 0x3594544);
          if (*(int *)(*piVar15 + 0x74) == 0) {
            func_0x024f83d8();
          }
          uVar14 = func_0x05171434(uVar14,0);
          uVar9 = func_0x05171434(*(undefined4 *)*piVar3,0);
          if (*(int *)(*piVar20 + 0x74) == 0) {
            func_0x024f83d8();
          }
          iVar19 = func_0x024f866c(uVar14,uVar9,0);
          if (iVar19 != 0) {
            uVar14 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
            uVar18 = func_0x024f87e0(uVar14,uVar18,0);
            iVar4 = *(int *)(*piVar3 + 8);
            *(undefined4 *)(puVar26 + -4) = *(undefined4 *)(puVar26 + -4);
            *(undefined4 *)(puVar26 + -8) = *(undefined4 *)(puVar26 + -8);
            *(undefined4 *)(puVar26 + -0xc) = *(undefined4 *)(puVar26 + -0x18);
            *puVar36 = *(uint *)(puVar26 + -0x1c);
            *(undefined4 *)(puVar26 + -0x14) = *(undefined4 *)(puVar26 + -0x20);
            *(uint *)(puVar26 + -0x18) = *(uint *)(puVar26 + -0x24);
            if (*(int *)(iVar4 + 0x1c) == 0) {
              func_0x024f83f8(iVar4);
            }
            piVar3 = (int *)0x0;
            iVar16 = func_0x051b1750(uVar18,0,0);
            if (iVar16 == 0) {
              uVar28 = func_0x0357de74(uVar18,*(undefined4 *)(*(int *)(iVar4 + 0x1c) + 4));
              puVar13 = *(undefined4 **)(iVar4 + 0x1c);
              puVar26[-0x19] = uVar28;
              piVar3 = (int *)func_0x024f83c4(*puVar13,puVar26 + -0x19);
              iVar4 = **(int **)(iVar4 + 0x1c);
              if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                iVar4 = func_0x024f83fc(iVar4);
              }
              if (piVar3 == (int *)0x0) {
                func_0x024f83d4();
              }
              if (*(int *)(*piVar3 + 0x20) == *(int *)(iVar4 + 0x20)) {
                pcVar17 = (char *)func_0x024f83d0(piVar3);
              }
              else {
                pcVar17 = (char *)0x0;
                func_0x024f84a0(piVar3,iVar4);
              }
              cVar1 = *pcVar17;
              func_0x024f85cc(uVar18,0);
              piVar3 = (int *)0x0;
              if (cVar1 != '\0') {
                piVar3 = (int *)0x1;
              }
            }
            return piVar3;
          }
          uVar18 = *(undefined4 *)*piVar3;
          iVar4 = func_0x024f83b8(*(undefined4 *)(iRam035949e8 + 0x3594864));
          if (*(int *)(iVar4 + 0x74) == 0) {
            func_0x024f83d8();
          }
          uVar14 = 0;
          piVar5 = (int *)func_0x05171434(uVar18,0);
          uVar18 = func_0x024f83b8(*(undefined4 *)(iRam035949ec + 0x3594894));
          uVar28 = piVar5 == (int *)0x0;
          uVar31 = 1;
          if (!(bool)uVar28) {
            uVar14 = (**(code **)(*piVar5 + 0xd8))(piVar5,*(undefined4 *)(*piVar5 + 0xdc));
          }
          uVar9 = func_0x024f83b8(*(undefined4 *)(iRam035949f0 + 0x35948c4));
          piVar15 = (int *)func_0x04f6b198(uVar18,uVar14,uVar9,0);
          func_0x024f83b8(*(undefined4 *)(iRam035949f4 + 0x35948e8));
          iVar4 = func_0x024f83c8();
          func_0x051a2e28(iVar4,piVar15,0);
          func_0x024f83c0(iVar4,iVar16);
          func_0x024f83bc();
          goto LAB_0359490c;
        }
        uVar14 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
        uVar18 = func_0x024f87e0(uVar14,uVar18,0);
        iVar4 = func_0x051b1750(uVar18,0,0);
        if (iVar4 != 0) {
          return (int *)0x0;
        }
        piVar15 = (int *)func_0x024f867c(uVar18,0);
      }
      else {
        uVar14 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
        uVar18 = func_0x024f87e0(uVar14,uVar18,0);
        iVar4 = func_0x051b1750(uVar18,0,0);
        if (iVar4 != 0) {
          return (int *)0x0;
        }
        piVar15 = (int *)func_0x024f864c(uVar18,0);
      }
    }
    else {
      uVar14 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
      piVar15 = (int *)func_0x024f87c0(uVar14,uVar18,0);
    }
  }
  else {
    uVar14 = func_0x05171434(**(undefined4 **)(iRam03594988 + 0x3594154),0);
    iVar19 = func_0x0517c82c(piVar5,uVar14,0);
    if (iVar19 == 0) {
      uVar14 = *(undefined4 *)*piVar3;
      if (*(int *)(*piVar15 + 0x74) == 0) {
        func_0x024f83d8();
      }
      uVar14 = func_0x05171434(uVar14,0);
      uVar9 = func_0x05171434(**(undefined4 **)(iRam03594990 + 0x3594220),0);
      iVar19 = func_0x0517c82c(uVar14,uVar9,0);
      if (iVar19 == 0) {
        uVar14 = *(undefined4 *)*piVar3;
        if (*(int *)(*piVar15 + 0x74) == 0) {
          func_0x024f83d8();
        }
        uVar14 = func_0x05171434(uVar14,0);
        uVar9 = func_0x05171434(**(undefined4 **)(iRam03594998 + 0x3594338),0);
        iVar19 = func_0x0517c82c(uVar14,uVar9,0);
        if (iVar19 == 0) {
          uVar14 = *(undefined4 *)*piVar3;
          if (*(int *)(*piVar15 + 0x74) == 0) {
            func_0x024f83d8();
          }
          uVar14 = func_0x05171434(uVar14,0);
          uVar9 = func_0x05171434(**(undefined4 **)(iRam035949a8 + 0x3594480),0);
          iVar19 = func_0x0517c82c(uVar14,uVar9,0);
          if (iVar19 == 0) {
            uVar14 = *(undefined4 *)*piVar3;
            if (*(int *)(*piVar15 + 0x74) == 0) {
              func_0x024f83d8();
            }
            uVar14 = func_0x05171434(uVar14,0);
            uVar9 = func_0x05171434(**(undefined4 **)(iRam035949b0 + 0x359460c),0);
            iVar19 = func_0x0517c82c(uVar14,uVar9,0);
            if (iVar19 == 0) {
              uVar14 = *(undefined4 *)*piVar3;
              if (*(int *)(*piVar15 + 0x74) == 0) {
                func_0x024f83d8();
              }
              uVar14 = func_0x05171434(uVar14,0);
              uVar9 = func_0x05171434(**(undefined4 **)(iRam035949b8 + 0x3594690),0);
              iVar19 = func_0x0517c82c(uVar14,uVar9,0);
              if (iVar19 == 0) {
                uVar14 = *(undefined4 *)*piVar3;
                if (*(int *)(*piVar15 + 0x74) == 0) {
                  func_0x024f83d8();
                }
                uVar14 = func_0x05171434(uVar14,0);
                uVar9 = func_0x05171434(**(undefined4 **)(iRam035949c0 + 0x359470c),0);
                iVar19 = func_0x0517c82c(uVar14,uVar9,0);
                if (iVar19 != 0) {
                  uVar14 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
                  uVar18 = func_0x024f8820(uVar14,uVar18,0);
                  puVar13 = *(undefined4 **)(iRam035949c4 + 0x359474c);
                  goto LAB_03594190;
                }
                uVar14 = *(undefined4 *)*piVar3;
                if (*(int *)(*piVar15 + 0x74) == 0) {
                  func_0x024f83d8();
                }
                uVar14 = func_0x05171434(uVar14,0);
                uVar9 = func_0x05171434(**(undefined4 **)(iRam035949c8 + 0x3594788),0);
                iVar19 = func_0x0517c82c(uVar14,uVar9,0);
                if (iVar19 == 0) {
                  uVar14 = *(undefined4 *)*piVar3;
                  if (*(int *)(*piVar15 + 0x74) == 0) {
                    func_0x024f83d8();
                  }
                  piVar5 = (int *)0x0;
                  uVar14 = func_0x05171434(uVar14,0);
                  uVar9 = func_0x05171434(**(undefined4 **)(iRam035949d0 + 0x3594810),0);
                  iVar19 = func_0x0517c82c(uVar14,uVar9,0);
                  if (iVar19 == 0) {
                    return (int *)0x0;
                  }
                  uVar14 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
                  uVar2 = func_0x024f8840(uVar14,uVar18,0);
                  puVar13 = *(undefined4 **)(iRam035949d4 + 0x3594850);
                  goto LAB_03594648;
                }
                uVar14 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
                uVar37 = func_0x024f8830(uVar14,uVar18,0);
                puVar13 = *(undefined4 **)(iRam035949cc + 0x35947c8);
              }
              else {
                uVar14 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
                uVar37 = func_0x024f8810(uVar14,uVar18,0);
                puVar13 = *(undefined4 **)(iRam035949bc + 0x35946d0);
              }
              uVar18 = (undefined4)uVar37;
              uVar14 = *puVar13;
              *(int *)(puVar26 + -0x2c) = (int)((ulonglong)uVar37 >> 0x20);
              goto LAB_03594194;
            }
            uVar14 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
            uVar2 = func_0x024f8800(uVar14,uVar18,0);
            puVar13 = *(undefined4 **)(iRam035949b4 + 0x359464c);
LAB_03594648:
            uVar14 = *puVar13;
            *(undefined2 *)(puVar26 + -0x30) = uVar2;
            goto LAB_035944c4;
          }
          uVar14 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
          uVar28 = func_0x024f87f0(uVar14,uVar18,0);
          puVar13 = *(undefined4 **)(iRam035949ac + 0x35944c0);
        }
        else {
          if (*(int *)(**(int **)(iRam0359499c + 0x3594360) + 0x74) == 0) {
            func_0x024f83d8();
          }
          func_0x024ef77c(**(undefined4 **)(iRam035949a0 + 0x3594380),0);
          uVar14 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
          uVar28 = func_0x024f87f0(uVar14,uVar18,0);
          puVar13 = *(undefined4 **)(iRam035949a4 + 0x35943a8);
        }
      }
      else {
        uVar14 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
        uVar28 = func_0x024f87d0(uVar14,uVar18,0);
        puVar13 = *(undefined4 **)(iRam03594994 + 0x3594260);
      }
      uVar14 = *puVar13;
      puVar26[-0x30] = uVar28;
    }
    else {
      uVar14 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
      uVar18 = func_0x024f87b0(uVar14,uVar18,0);
      puVar13 = *(undefined4 **)(iRam0359498c + 0x3594194);
LAB_03594190:
      uVar14 = *puVar13;
LAB_03594194:
      *(undefined4 *)(puVar26 + -0x30) = uVar18;
    }
LAB_035944c4:
    piVar15 = (int *)func_0x024f83c4(uVar14,puVar26 + -0x30);
  }
  iVar4 = *(int *)(*piVar3 + 4);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = func_0x024f83fc(iVar4);
  }
  if (piVar15 == (int *)0x0) {
    func_0x024f83d4();
  }
  uVar31 = *(uint *)(iVar4 + 0x20) <= *(uint *)(*piVar15 + 0x20);
  uVar28 = 0;
  if (*(uint *)(*piVar15 + 0x20) == *(uint *)(iVar4 + 0x20)) {
    pcVar17 = (char *)func_0x024f83d0(piVar15);
    return (int *)(uint)(*pcVar17 != '\0');
  }
LAB_0359490c:
  uVar37 = func_0x024f84a0(piVar15,iVar4);
  puVar13 = (undefined4 *)((ulonglong)uVar37 >> 0x20);
  pEVar6 = (Elf32_Rel *)uVar37;
  bVar29 = false;
  bVar30 = (bool)uVar31;
  if ((bool)uVar28) {
    bVar30 = (undefined4 *)0x24000000 < puVar13 ||
             puVar13 + -0x9000000 < (undefined4 *)(uint)(byte)uVar31;
    pEVar6 = (Elf32_Rel *)((int)puVar13 - (!(bool)uVar31 + 0x24000000));
    bVar29 = pEVar6 == (Elf32_Rel *)0x0;
  }
  bVar27 = false;
  bVar32 = bVar30;
  if (bVar29) {
    bVar32 = (undefined4 *)0x1c000000 < puVar13 || puVar13 + -0x7000000 < (undefined4 *)(uint)bVar30
    ;
    pEVar6 = (Elf32_Rel *)((int)puVar13 - (!bVar30 + 0x1c000000));
    bVar27 = pEVar6 == (Elf32_Rel *)0x0;
  }
  bVar29 = false;
  bVar30 = bVar32;
  if (bVar27) {
    bVar30 = (undefined4 *)0x14000000 < puVar13 || puVar13 + -0x5000000 < (undefined4 *)(uint)bVar32
    ;
    pEVar6 = (Elf32_Rel *)((int)puVar13 - (!bVar32 + 0x14000000));
    bVar29 = pEVar6 == (Elf32_Rel *)0x0;
  }
  bVar27 = false;
  bVar32 = bVar30;
  if (bVar29) {
    puVar13 = (undefined4 *)(puVar26 + (-0x30 - (!bVar30 + 0x1c000000)));
    bVar32 = (Elf32_Rel *)&UNK_0001c000 < pEVar6 || pEVar6 + -0x3800 < (Elf32_Rel *)(uint)bVar30;
    iVar4 = (int)pEVar6 - (!bVar30 + 0x1c000);
    bVar27 = iVar4 == 0;
  }
  bVar29 = false;
  bVar30 = bVar32;
  if (bVar27) {
    puVar13 = (undefined4 *)(puVar26 + (-0x30 - (!bVar32 + 0x3000000)));
    piVar15 = (int *)(0x3594960 - (!bVar32 + 0x10000000));
    pEVar6 = (Elf32_Rel *)(puVar26 + (-0x30 - (!bVar32 + 800)));
    bVar30 = __DT_REL + 0x1bd2e < pEVar6 || pEVar6 + -0x24000 < (Elf32_Rel *)(uint)bVar32;
    iVar4 = (int)pEVar6 - (!bVar32 + 0x120000);
    bVar29 = iVar4 == 0;
  }
  bVar27 = false;
  bVar32 = bVar30;
  if (bVar29) {
    puVar13 = (undefined4 *)(puVar26 + (-0x30 - (!bVar30 + 0x17000000)));
    bVar32 = (undefined4 *)0x40000000 < puVar13 ||
             puVar13 + -0x10000000 < (undefined4 *)(uint)bVar30;
    pEVar6 = (Elf32_Rel *)((int)puVar13 - (!bVar30 + 0x40000000));
    bVar27 = pEVar6 == (Elf32_Rel *)0x0;
  }
  bVar29 = false;
  bVar30 = bVar32;
  if (bVar27) {
    puVar13 = (undefined4 *)(puVar26 + (-0x30 - (!bVar32 + 0xb000000)));
    bVar30 = (undefined4 *)0xc000000a < puVar13 || (int)puVar13 + 0x3ffffff6U < (uint)bVar32;
    pEVar6 = (Elf32_Rel *)((int)puVar13 - (!bVar32 + 0xc000000a));
    bVar29 = pEVar6 == (Elf32_Rel *)0x0;
  }
  bVar27 = false;
  bVar32 = bVar30;
  if (bVar29) {
    puVar13 = (undefined4 *)(puVar26 + (-0x30 - (int)(&UNK_05000000 + !bVar30)));
    bVar32 = (undefined4 *)0x2c < puVar13 || puVar13 + -0xb < (undefined4 *)(uint)bVar30;
    pEVar6 = (Elf32_Rel *)((int)puVar13 - (!bVar30 + 0x2c));
    bVar27 = pEVar6 == (Elf32_Rel *)0x0;
  }
  bVar29 = false;
  bVar30 = bVar32;
  if (bVar27) {
    puVar13 = (undefined4 *)(puVar26 + (-0x30 - (!bVar32 + 0xa0)));
    pEVar6 = (Elf32_Rel *)(puVar26 + (-0x30 - (int)(&UNK_02200000 + !bVar32)));
    bVar30 = (Elf32_Rel *)0x90000000 < pEVar6 || pEVar6 + 0xe000000 < (Elf32_Rel *)(uint)bVar32;
    iVar4 = (int)pEVar6 - (!bVar32 + 0x90000000);
    bVar29 = iVar4 == 0;
  }
  bVar27 = false;
  bVar32 = bVar30;
  if (bVar29) {
    bVar32 = (undefined4 *)0xf4 < puVar13 || puVar13 + -0x3d < (undefined4 *)(uint)bVar30;
    pEVar6 = (Elf32_Rel *)((int)puVar13 - (!bVar30 + 0xf4));
    bVar27 = pEVar6 == (Elf32_Rel *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x035949e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (bVar27) {
    piVar3 = (int *)(*(code *)((int)pEVar6 - (!bVar32 + 0x2c0)))();
    return piVar3;
  }
  *(undefined4 *)(puVar26 + -0x34) = 0x3594918;
  *(int **)(puVar26 + -0x38) = piVar20;
  *(int **)(puVar26 + -0x3c) = piVar5;
  *(int *)(puVar26 + -0x40) = iVar16;
  *(int *)(puVar26 + -0x44) = iVar4;
  *(int **)(puVar26 + -0x48) = piVar15;
  pcVar17 = (char *)(_UNK_03594b88 + 0x3594a18);
  if (*pcVar17 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03594b8c + 0x3594a2c));
    *pcVar17 = '\x01';
  }
  piVar3 = (int *)*puVar13;
  if (piVar3 == (int *)0x0) {
    iVar4 = puVar13[1];
    if (iVar4 == 0) {
      cVar1 = *(char *)(puVar13 + 2);
      if (*(int *)(**(int **)(_UNK_03594b90 + 0x3594ac8) + 0x74) == 0) {
        func_0x024f83d8();
      }
      iVar4 = *(int *)(extraout_r2 + 0x10);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = func_0x024f83fc();
      }
      func_0x037543e0(puVar26 + -0x50,cVar1 != '\0',*(undefined4 *)(*(int *)(iVar4 + 0x60) + 0x18));
    }
    else {
      if (*(int *)(**(int **)(_UNK_03594b90 + 0x3594ac8) + 0x74) == 0) {
        func_0x024f83d8();
      }
      iVar16 = *(int *)(extraout_r2 + 0x10);
      if ((*(ushort *)(iVar16 + 0xbd) & 1) == 0) {
        iVar16 = func_0x024f83fc();
      }
      func_0x03753658(puVar26 + -0x50,iVar4,*(undefined4 *)(*(int *)(iVar16 + 0x60) + 0x10));
    }
  }
  else {
    iVar4 = *(int *)(extraout_r2 + 0x10);
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = func_0x024f83fc();
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 4);
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = func_0x024f83fc(iVar4);
    }
    iVar16 = *piVar3;
    uVar8 = (uint)*(ushort *)(iVar16 + 0xb6);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(int *)(iVar16 + 0x58) + 4);
      do {
        if (piVar15[-1] == iVar4) {
          puVar13 = (undefined4 *)(iVar16 + *piVar15 * 8 + 200);
          goto LAB_03594b14;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar8 != 0);
    }
    puVar13 = (undefined4 *)func_0x024f8424(piVar3,iVar4,1);
LAB_03594b14:
    (*(code *)*puVar13)(puVar26 + -0x50,piVar3,puVar13[1]);
  }
  piVar3 = *(int **)(puVar26 + -0x50);
  dVar12 = *(dword *)(puVar26 + -0x4c);
  pEVar6->r_offset = (dword)piVar3;
  pEVar6->r_info = dVar12;
  return piVar3;
}

