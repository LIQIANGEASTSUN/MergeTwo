
/* WARNING: Removing unreachable block (ram,0x035949e4) */
/* WARNING: Removing unreachable block (ram,0x036e8000) */
/* WARNING: Removing unreachable block (ram,0x035949f0) */
/* WARNING: Removing unreachable block (ram,0x035949e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_030d27b8(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  Elf32_Rel *pEVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  dword dVar11;
  undefined4 *puVar12;
  int extraout_r2;
  int extraout_r2_00;
  int iVar13;
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
  bool bVar23;
  undefined1 uVar24;
  bool bVar25;
  bool bVar26;
  undefined1 uVar27;
  bool bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  uint *puVar32;
  undefined8 uVar33;
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
  
  pcVar17 = (char *)(_UNK_030d2898 + 0x30d27cc);
  if (*pcVar17 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030d289c + 0x30d27e0));
    func_0x01438628(*(undefined4 *)(_UNK_030d28a0 + 0x30d27ec));
    func_0x01438628(*(undefined4 *)(_UNK_030d28a4 + 0x30d27f8));
    *pcVar17 = '\x01';
  }
  iVar4 = func_0x02953fd4(0x1547,0);
  if (iVar4 != 0) {
    iVar4 = func_0x029540a4(0x1547,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    pcVar17 = (char *)(_UNK_028a5228 + 0x28a5148);
    if (*pcVar17 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a522c + 0x28a515c),param_1,0);
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
    piVar3 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a5230 + 0x28a5218));
    return piVar3;
  }
  if (*(int *)(**(int **)(_UNK_030d28a8 + 0x30d2850) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_030d28ac + 0x30d286c));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar16 = **(int **)(_UNK_030d28b0 + 0x30d288c);
  puVar21 = auStack_20;
  puVar12 = *(undefined4 **)(iVar16 + 0x1c);
  if (puVar12 == (undefined4 *)0x0) {
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
    puVar12 = *(undefined4 **)(iVar16 + 0x1c);
    if (puVar12 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar16);
      puVar12 = *(undefined4 **)(iVar16 + 0x1c);
    }
  }
  uVar18 = *puVar12;
  iVar19 = *(int *)(iVar4 + 0x44);
  if (*(int *)(**(int **)(iRam036e7fc4 + 0x36e7ba8) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar7 = func_0x05171434(uVar18,0);
  if (iVar19 == 0) {
    func_0x024f83d4();
  }
  uVar18 = func_0x0475399c(iVar19,uVar7,**(undefined4 **)(iRam036e7fc8 + 0x36e7bec));
  uVar8 = func_0x02965180(uVar18,0);
  if (uVar8 < 0x69935fe7) {
    if (uVar8 < 0x46e7cfbd) {
      if (uVar8 == 0xe0ad569) {
        iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7ff8 + 0x36e7d98),0);
        uVar24 = iVar19 == 0;
        bVar29 = true;
        if (!(bool)uVar24) {
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
      else if (uVar8 == 0x370b91cb) {
        iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7fe8 + 0x36e7dc4),0);
        uVar24 = iVar19 == 0;
        bVar29 = true;
        if (!(bool)uVar24) {
          iVar16 = *(int *)(iVar16 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x30);
          goto LAB_036e7ee4;
        }
      }
      else {
        bVar29 = 0x46e7cfbb < uVar8;
        uVar24 = false;
        if (uVar8 == 0x46e7cfbc) {
          iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7fcc + 0x36e7c58),0);
          uVar24 = iVar19 == 0;
          bVar29 = true;
          if (!(bool)uVar24) {
            iVar16 = *(int *)(iVar16 + 0x1c);
            piVar3 = *(int **)(iVar4 + 0x3c);
            goto LAB_036e7ee4;
          }
        }
      }
    }
    else if (uVar8 == 0x5c32e71d) {
      iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7fdc + 0x36e7e48),0);
      uVar24 = iVar19 == 0;
      bVar29 = true;
      if (!(bool)uVar24) {
        iVar16 = *(int *)(iVar16 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x18);
        goto LAB_036e7ee4;
      }
    }
    else if (uVar8 == 0x6020ab4e) {
      iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7ff0 + 0x36e7e74),0);
      uVar24 = iVar19 == 0;
      bVar29 = true;
      if (!(bool)uVar24) {
        iVar16 = *(int *)(iVar16 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x38);
        goto LAB_036e7ee4;
      }
    }
    else {
      bVar29 = 0x69935fe5 < uVar8;
      uVar24 = false;
      if (uVar8 == 0x69935fe6) {
        iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7fd0 + 0x36e7d10),0);
        uVar24 = iVar19 == 0;
        bVar29 = true;
        if (!(bool)uVar24) {
          iVar16 = *(int *)(iVar16 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x24);
          goto LAB_036e7ee4;
        }
      }
    }
  }
  else if (uVar8 < 0xa7300587) {
    if (uVar8 == 0x858d4954) {
      iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7ff4 + 0x36e7df0),0);
      uVar24 = iVar19 == 0;
      bVar29 = true;
      if (!(bool)uVar24) {
        iVar16 = *(int *)(iVar16 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x40);
        goto LAB_036e7ee4;
      }
    }
    else if (uVar8 == 0xa7300586) {
      iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7fec + 0x36e7e1c),0);
      uVar24 = iVar19 == 0;
      bVar29 = true;
      if (!(bool)uVar24) {
        iVar16 = *(int *)(iVar16 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x34);
        goto LAB_036e7ee4;
      }
    }
    else {
      bVar29 = 0x70a33522 < uVar8;
      uVar24 = false;
      if (uVar8 == 0x70a33523) {
        iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7fd4 + 0x36e7cbc),0);
        uVar24 = iVar19 == 0;
        bVar29 = true;
        if (!(bool)uVar24) {
          iVar16 = *(int *)(iVar16 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x1c);
          goto LAB_036e7ee4;
        }
      }
    }
  }
  else if (uVar8 == 0xb0e0c2ca) {
    iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7fe4 + 0x36e7ea0),0);
    uVar24 = iVar19 == 0;
    bVar29 = true;
    if (!(bool)uVar24) {
      iVar16 = *(int *)(iVar16 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x28);
      goto LAB_036e7ee4;
    }
  }
  else if (uVar8 == 0xb1a9d450) {
    iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7fe0 + 0x36e7ecc),0);
    uVar24 = iVar19 == 0;
    bVar29 = true;
    if (!(bool)uVar24) {
      iVar16 = *(int *)(iVar16 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x20);
      goto LAB_036e7ee4;
    }
  }
  else {
    bVar29 = 0xeac3c916 < uVar8;
    uVar24 = false;
    if (uVar8 == 0xeac3c917) {
      iVar19 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e7fd8 + 0x36e7d6c),0);
      uVar24 = iVar19 == 0;
      bVar29 = true;
      if (!(bool)uVar24) {
        iVar16 = *(int *)(iVar16 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x2c);
        goto LAB_036e7ee4;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036e7ffc + 0x36e7f4c));
  uVar14 = func_0x024f83c8();
  uVar9 = func_0x024f83b8(*(undefined4 *)(iRam036e8000 + 0x36e7f60));
  auStack_20[0] = 0;
  func_0x0509473c(uVar14,uVar9,uVar18,0);
  func_0x024f83c0(uVar14,iVar16);
  uVar33 = func_0x024f83bc();
  uVar8 = (uint)((ulonglong)uVar33 >> 0x20);
  iVar4 = (int)uVar33;
  bVar30 = bVar29;
  if ((bool)uVar24) {
    bVar30 = 0xff63ffff < unaff_r11 || CARRY4((uint)(&UNK_009c0000 + unaff_r11),(uint)bVar29);
  }
  bVar25 = false;
  bVar31 = bVar30;
  if ((bool)uVar24 && &UNK_009c0000 + bVar29 + unaff_r11 == (undefined *)0x0) {
    bVar31 = 0xfff07fff < uVar7 || CARRY4(uVar7 + 0xf8000,(uint)bVar30);
    puVar21 = (undefined4 *)(uVar7 + 0xf8000 + (uint)bVar30);
    bVar25 = (undefined1 *)(uVar7 + 0xf8000 + (uint)bVar30) == (undefined1 *)0x0;
  }
  bVar29 = bVar31;
  if (bVar25) {
    bVar29 = 0xf27fffff < unaff_r9 || CARRY4(unaff_r9 + 0xd800000,(uint)bVar31);
  }
  bVar25 = bVar25 && unaff_r9 + 0xd800000 + (uint)bVar31 == 0;
  bVar30 = bVar29;
  if (bVar25) {
    bVar30 = 0xf2ffffff < unaff_r9 || CARRY4(unaff_r9 + 0xd000000,(uint)bVar29);
  }
  bVar25 = bVar25 && unaff_r9 + 0xd000000 + (uint)bVar29 == 0;
  bVar29 = bVar30;
  if (bVar25) {
    bVar29 = 0xf37fffff < unaff_r9 || CARRY4(unaff_r9 + 0xc800000,(uint)bVar30);
  }
  bVar25 = bVar25 && unaff_r9 + 0xc800000 + (uint)bVar30 == 0;
  bVar30 = bVar29;
  if (bVar25) {
    bVar30 = 0xf3ffffff < unaff_r9 || CARRY4(unaff_r9 + 0xc000000,(uint)bVar29);
  }
  bVar25 = bVar25 && unaff_r9 + 0xc000000 + (uint)bVar29 == 0;
  bVar29 = bVar30;
  if (bVar25) {
    bVar29 = 0xf47fffff < unaff_r9 || CARRY4(unaff_r9 + 0xb800000,(uint)bVar30);
  }
  bVar25 = bVar25 && unaff_r9 + 0xb800000 + (uint)bVar30 == 0;
  bVar30 = bVar29;
  if (bVar25) {
    bVar30 = 0xf4ffffff < unaff_r9 || CARRY4(unaff_r9 + 0xb000000,(uint)bVar29);
  }
  bVar25 = bVar25 && unaff_r9 + 0xb000000 + (uint)bVar29 == 0;
  bVar29 = bVar30;
  if (bVar25) {
    bVar29 = 0xf57fffff < unaff_r9 || CARRY4(unaff_r9 + 0xa800000,(uint)bVar30);
  }
  bVar25 = bVar25 && unaff_r9 + 0xa800000 + (uint)bVar30 == 0;
  bVar30 = bVar29;
  if (bVar25) {
    bVar30 = 0xf5ffffff < unaff_r9 || CARRY4(unaff_r9 + 0xa000000,(uint)bVar29);
  }
  bVar25 = bVar25 && unaff_r9 + 0xa000000 + (uint)bVar29 == 0;
  bVar29 = bVar30;
  if (bVar25) {
    bVar29 = 0xf67fffff < unaff_r9 || CARRY4(unaff_r9 + 0x9800000,(uint)bVar30);
  }
  bVar25 = bVar25 && unaff_r9 + 0x9800000 + (uint)bVar30 == 0;
  bVar30 = bVar29;
  if (bVar25) {
    bVar30 = 0xf6ffffff < unaff_r9 || CARRY4(unaff_r9 + 0x9000000,(uint)bVar29);
  }
  bVar25 = bVar25 && unaff_r9 + 0x9000000 + (uint)bVar29 == 0;
  bVar29 = bVar30;
  if (bVar25) {
    bVar29 = 0xf77fffff < unaff_r9 || CARRY4(unaff_r9 + 0x8800000,(uint)bVar30);
  }
  bVar25 = bVar25 && unaff_r9 + 0x8800000 + (uint)bVar30 == 0;
  bVar30 = bVar29;
  if (bVar25) {
    bVar30 = 0xf7ffffff < unaff_r9 || CARRY4(unaff_r9 + 0x8000000,(uint)bVar29);
  }
  bVar26 = false;
  bVar31 = bVar30;
  if (bVar25 && unaff_r9 + 0x8000000 + (uint)bVar29 == 0) {
    bVar31 = 0xfffbbfff < uVar7 || CARRY4(uVar7 + 0x44000,(uint)bVar30);
    puVar21 = (undefined4 *)(uVar7 + 0x44000 + (uint)bVar30);
    bVar26 = (undefined1 *)(uVar7 + 0x44000 + (uint)bVar30) == (undefined1 *)0x0;
  }
  bVar29 = bVar31;
  if (bVar26) {
    bVar29 = 0xfd9fffff < unaff_r11 || CARRY4((uint)(&UNK_02600000 + unaff_r11),(uint)bVar31);
  }
  bVar26 = bVar26 && &UNK_02600000 + bVar31 + unaff_r11 == (undefined *)0x0;
  bVar30 = bVar29;
  if (bVar26) {
    bVar30 = 0xd4ffffff < unaff_r9 || CARRY4(unaff_r9 + 0x2b000000,(uint)bVar29);
  }
  bVar26 = bVar26 && unaff_r9 + 0x2b000000 + (uint)bVar29 == 0;
  bVar29 = bVar30;
  if (bVar26) {
    bVar29 = 0x23ffffff < unaff_r9 || CARRY4(unaff_r9 + 0xdc000000,(uint)bVar30);
  }
  bVar26 = bVar26 && unaff_r9 + 0xdc000000 + (uint)bVar30 == 0;
  bVar30 = bVar29;
  if (bVar26) {
    bVar30 = 0xf4ffffff < unaff_r9 || CARRY4(unaff_r9 + 0xb000000,(uint)bVar29);
  }
  bVar26 = bVar26 && unaff_r9 + 0xb000000 + (uint)bVar29 == 0;
  bVar29 = bVar30;
  if (bVar26) {
    bVar29 = 0x77ffffff < unaff_r9 || CARRY4(unaff_r9 + 0x88000000,(uint)bVar30);
  }
  bVar26 = bVar26 && unaff_r9 + 0x88000000 + (uint)bVar30 == 0;
  bVar30 = bVar29;
  if (bVar26) {
    bVar30 = 0x9ffffffd < unaff_r9 || CARRY4(unaff_r9 + 0x60000002,(uint)bVar29);
  }
  bVar26 = bVar26 && unaff_r9 + 0x60000002 + (uint)bVar29 == 0;
  bVar29 = bVar30;
  if (bVar26) {
    bVar29 = 0x2fffffff < unaff_r9 || CARRY4(unaff_r9 + 0xd0000000,(uint)bVar30);
  }
  bVar26 = bVar26 && unaff_r9 + 0xd0000000 + (uint)bVar30 == 0;
  bVar30 = bVar29;
  if (bVar26) {
    bVar30 = 0x8ffffffe < unaff_r9 || CARRY4(unaff_r9 + 0x70000001,(uint)bVar29);
  }
  bVar26 = bVar26 && unaff_r9 + 0x70000001 + (uint)bVar29 == 0;
  bVar29 = bVar30;
  if (bVar26) {
    bVar29 = 0xcbffffff < unaff_r9 || CARRY4(unaff_r9 + 0x34000000,(uint)bVar30);
  }
  bVar26 = bVar26 && unaff_r9 + 0x34000000 + (uint)bVar30 == 0;
  bVar30 = bVar29;
  if (bVar26) {
    bVar30 = 0xaffffffc < unaff_r9 || CARRY4(unaff_r9 + 0x50000003,(uint)bVar29);
  }
  bVar26 = bVar26 && unaff_r9 + 0x50000003 + (uint)bVar29 == 0;
  bVar29 = bVar30;
  if (bVar26) {
    bVar29 = 0x3ffffffe < unaff_r9 || CARRY4(unaff_r9 + 0xc0000001,(uint)bVar30);
  }
  bVar26 = bVar26 && unaff_r9 + 0xc0000001 + (uint)bVar30 == 0;
  bVar30 = bVar29;
  if (bVar26) {
    bVar30 = 0x5ffffffc < unaff_r9 || CARRY4(unaff_r9 + 0xa0000003,(uint)bVar29);
  }
  bVar26 = bVar26 && unaff_r9 + 0xa0000003 + (uint)bVar29 == 0;
  bVar29 = bVar30;
  if (bVar26) {
    bVar29 = 0xbbffffff < unaff_r9 || CARRY4(unaff_r9 + 0x44000000,(uint)bVar30);
  }
                    /* WARNING: Could not recover jumptable at 0x036e7ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (bVar26 && unaff_r9 + 0x44000000 + (uint)bVar30 == 0) {
    piVar3 = (int *)(*(code *)(uVar7 + 0xf + (uint)bVar29))();
    return piVar3;
  }
  *(undefined4 *)((int)puVar21 + -4) = 0x36e7f8c;
  *(uint *)((int)puVar21 + -8) = unaff_r11;
  *(uint *)((int)puVar21 + -0xc) = uVar7;
  *(undefined4 *)((int)puVar21 + -0x10) = uVar18;
  *(undefined4 *)((int)puVar21 + -0x14) = uVar14;
  *(int *)((int)puVar21 + -0x18) = iVar16;
  puVar22 = (undefined1 *)((int)puVar21 + -0x20);
  puVar12 = *(undefined4 **)(uVar8 + 0x1c);
  if (puVar12 == (undefined4 *)0x0) {
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
    puVar12 = *(undefined4 **)(uVar8 + 0x1c);
    if (puVar12 == (undefined4 *)0x0) {
      func_0x024f83f8(uVar8);
      puVar12 = *(undefined4 **)(uVar8 + 0x1c);
    }
  }
  uVar18 = *puVar12;
  iVar16 = *(int *)(iVar4 + 0x44);
  if (*(int *)(**(int **)(iRam036e8508 + 0x36e80ec) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar7 = func_0x05171434(uVar18,0);
  if (iVar16 == 0) {
    func_0x024f83d4();
  }
  uVar18 = func_0x0475399c(iVar16,uVar7,**(undefined4 **)(iRam036e850c + 0x36e8130));
  uVar10 = func_0x02965180(uVar18,0);
  if (uVar10 < 0x69935fe7) {
    if (uVar10 < 0x46e7cfbd) {
      if (uVar10 == 0xe0ad569) {
        iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e853c + 0x36e82dc),0);
        uVar24 = iVar16 == 0;
        bVar29 = true;
        if (!(bool)uVar24) {
          iVar16 = *(int *)(uVar8 + 0x1c);
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
      else if (uVar10 == 0x370b91cb) {
        iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e852c + 0x36e8308),0);
        uVar24 = iVar16 == 0;
        bVar29 = true;
        if (!(bool)uVar24) {
          iVar16 = *(int *)(uVar8 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x30);
          goto LAB_036e8428;
        }
      }
      else {
        bVar29 = 0x46e7cfbb < uVar10;
        uVar24 = false;
        if (uVar10 == 0x46e7cfbc) {
          iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e8510 + 0x36e819c),0);
          uVar24 = iVar16 == 0;
          bVar29 = true;
          if (!(bool)uVar24) {
            iVar16 = *(int *)(uVar8 + 0x1c);
            piVar3 = *(int **)(iVar4 + 0x3c);
            goto LAB_036e8428;
          }
        }
      }
    }
    else if (uVar10 == 0x5c32e71d) {
      iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e8520 + 0x36e838c),0);
      uVar24 = iVar16 == 0;
      bVar29 = true;
      if (!(bool)uVar24) {
        iVar16 = *(int *)(uVar8 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x18);
        goto LAB_036e8428;
      }
    }
    else if (uVar10 == 0x6020ab4e) {
      iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e8534 + 0x36e83b8),0);
      uVar24 = iVar16 == 0;
      bVar29 = true;
      if (!(bool)uVar24) {
        iVar16 = *(int *)(uVar8 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x38);
        goto LAB_036e8428;
      }
    }
    else {
      bVar29 = 0x69935fe5 < uVar10;
      uVar24 = false;
      if (uVar10 == 0x69935fe6) {
        iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e8514 + 0x36e8254),0);
        uVar24 = iVar16 == 0;
        bVar29 = true;
        if (!(bool)uVar24) {
          iVar16 = *(int *)(uVar8 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x24);
          goto LAB_036e8428;
        }
      }
    }
  }
  else if (uVar10 < 0xa7300587) {
    if (uVar10 == 0x858d4954) {
      iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e8538 + 0x36e8334),0);
      uVar24 = iVar16 == 0;
      bVar29 = true;
      if (!(bool)uVar24) {
        iVar16 = *(int *)(uVar8 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x40);
        goto LAB_036e8428;
      }
    }
    else if (uVar10 == 0xa7300586) {
      iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e8530 + 0x36e8360),0);
      uVar24 = iVar16 == 0;
      bVar29 = true;
      if (!(bool)uVar24) {
        iVar16 = *(int *)(uVar8 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x34);
        goto LAB_036e8428;
      }
    }
    else {
      bVar29 = 0x70a33522 < uVar10;
      uVar24 = false;
      if (uVar10 == 0x70a33523) {
        iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e8518 + 0x36e8200),0);
        uVar24 = iVar16 == 0;
        bVar29 = true;
        if (!(bool)uVar24) {
          iVar16 = *(int *)(uVar8 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x1c);
          goto LAB_036e8428;
        }
      }
    }
  }
  else if (uVar10 == 0xb0e0c2ca) {
    iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e8528 + 0x36e83e4),0);
    uVar24 = iVar16 == 0;
    bVar29 = true;
    if (!(bool)uVar24) {
      iVar16 = *(int *)(uVar8 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x28);
      goto LAB_036e8428;
    }
  }
  else if (uVar10 == 0xb1a9d450) {
    iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e8524 + 0x36e8410),0);
    uVar24 = iVar16 == 0;
    bVar29 = true;
    if (!(bool)uVar24) {
      iVar16 = *(int *)(uVar8 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x20);
      goto LAB_036e8428;
    }
  }
  else {
    bVar29 = 0xeac3c916 < uVar10;
    uVar24 = false;
    if (uVar10 == 0xeac3c917) {
      iVar16 = func_0x04f57738(uVar18,**(undefined4 **)(iRam036e851c + 0x36e82b0),0);
      uVar24 = iVar16 == 0;
      bVar29 = true;
      if (!(bool)uVar24) {
        iVar16 = *(int *)(uVar8 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x2c);
        goto LAB_036e8428;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036e8540 + 0x36e8490));
  uVar14 = func_0x024f83c8();
  uVar9 = func_0x024f83b8(*(undefined4 *)(iRam036e8544 + 0x36e84a4));
  *(undefined4 *)((int)puVar21 + -0x20) = 0;
  func_0x0509473c(uVar14,uVar9,uVar18,0);
  func_0x024f83c0(uVar14,uVar8);
  iVar19 = 0x36e84d0;
  uVar33 = func_0x024f83bc();
  iVar16 = (int)((ulonglong)uVar33 >> 0x20);
  iVar4 = (int)uVar33;
  bVar30 = bVar29;
  if ((bool)uVar24) {
    bVar30 = 0x9ffffffe < unaff_r11 || CARRY4(unaff_r11 + 0x60000001,(uint)bVar29);
  }
  bVar25 = false;
  bVar31 = bVar30;
  if ((bool)uVar24 && unaff_r11 + 0x60000001 + (uint)bVar29 == 0) {
    bVar31 = 0xd2ffffff < uVar7 || CARRY4(uVar7 + 0x2d000000,(uint)bVar30);
    puVar22 = (undefined1 *)(uVar7 + 0x2d000000 + (uint)bVar30);
    bVar25 = (undefined1 *)(uVar7 + 0x2d000000 + (uint)bVar30) == (undefined1 *)0x0;
  }
  bVar26 = false;
  iVar13 = extraout_r2_00;
  bVar29 = bVar31;
  if (bVar25) {
    bVar29 = 0xffffffda < unaff_r9 || CARRY4(unaff_r9 + 0x25,(uint)bVar31);
    iVar13 = unaff_r9 + 0x25 + (uint)bVar31;
    bVar26 = iVar13 == 0;
  }
  bVar25 = false;
  bVar30 = bVar29;
  if (bVar26) {
    bVar30 = 0xffffffdc < unaff_r9 || CARRY4(unaff_r9 + 0x23,(uint)bVar29);
    iVar13 = unaff_r9 + 0x23 + (uint)bVar29;
    bVar25 = iVar13 == 0;
  }
  bVar26 = false;
  bVar29 = bVar30;
  if (bVar25) {
    bVar29 = 0xffffffde < unaff_r9 || CARRY4(unaff_r9 + 0x21,(uint)bVar30);
    iVar13 = unaff_r9 + 0x21 + (uint)bVar30;
    bVar26 = iVar13 == 0;
  }
  bVar25 = false;
  bVar30 = bVar29;
  if (bVar26) {
    bVar30 = 0xffffffe0 < unaff_r9 || CARRY4(unaff_r9 + 0x1f,(uint)bVar29);
    iVar13 = unaff_r9 + 0x1f + (uint)bVar29;
    bVar25 = iVar13 == 0;
  }
  bVar26 = false;
  bVar29 = bVar30;
  if (bVar25) {
    bVar29 = 0xffffffe2 < unaff_r9 || CARRY4(unaff_r9 + 0x1d,(uint)bVar30);
    iVar13 = unaff_r9 + 0x1d + (uint)bVar30;
    bVar26 = iVar13 == 0;
  }
  bVar25 = false;
  bVar30 = bVar29;
  if (bVar26) {
    bVar30 = 0xffffffe4 < unaff_r9 || CARRY4(unaff_r9 + 0x1b,(uint)bVar29);
    iVar13 = unaff_r9 + 0x1b + (uint)bVar29;
    bVar25 = iVar13 == 0;
  }
  bVar26 = false;
  bVar29 = bVar30;
  if (bVar25) {
    bVar29 = 0xffffffe6 < unaff_r9 || CARRY4(unaff_r9 + 0x19,(uint)bVar30);
    iVar13 = unaff_r9 + 0x19 + (uint)bVar30;
    bVar26 = iVar13 == 0;
  }
  bVar25 = false;
  bVar30 = bVar29;
  if (bVar26) {
    bVar30 = 0xffffffe8 < unaff_r9 || CARRY4(unaff_r9 + 0x17,(uint)bVar29);
    iVar13 = unaff_r9 + 0x17 + (uint)bVar29;
    bVar25 = iVar13 == 0;
  }
  bVar26 = false;
  bVar29 = bVar30;
  if (bVar25) {
    bVar29 = 0xffffffea < unaff_r9 || CARRY4(unaff_r9 + 0x15,(uint)bVar30);
    iVar13 = unaff_r9 + 0x15 + (uint)bVar30;
    bVar26 = iVar13 == 0;
  }
  bVar25 = false;
  bVar30 = bVar29;
  if (bVar26) {
    bVar30 = 0xffffffec < unaff_r9 || CARRY4(unaff_r9 + 0x13,(uint)bVar29);
    iVar13 = unaff_r9 + 0x13 + (uint)bVar29;
    bVar25 = iVar13 == 0;
  }
  bVar26 = false;
  bVar29 = bVar30;
  if (bVar25) {
    bVar29 = 0xffffffee < unaff_r9 || CARRY4(unaff_r9 + 0x11,(uint)bVar30);
    iVar13 = unaff_r9 + 0x11 + (uint)bVar30;
    bVar26 = iVar13 == 0;
  }
  bVar25 = false;
  bVar30 = bVar29;
  if (bVar26) {
    bVar30 = 0xfffffff0 < unaff_r9 || CARRY4(unaff_r9 + 0xf,(uint)bVar29);
    iVar13 = unaff_r9 + 0xf + (uint)bVar29;
    bVar25 = iVar13 == 0;
  }
  bVar26 = false;
  bVar29 = bVar30;
  if (bVar25) {
    bVar29 = CARRY4(uVar7,(uint)bVar30);
    puVar22 = (undefined1 *)(uVar7 + bVar30);
    bVar26 = (undefined1 *)(uVar7 + bVar30) == (undefined1 *)0x0;
  }
  bVar30 = bVar29;
  if (bVar26) {
    bVar30 = 0xbffffffa < unaff_r11 || CARRY4(unaff_r11 + 0x40000005,(uint)bVar29);
  }
  bVar25 = false;
  bVar31 = bVar30;
  if (bVar26 && unaff_r11 + 0x40000005 + (uint)bVar29 == 0) {
    bVar31 = 0xffffff97 < unaff_r9 || CARRY4(unaff_r9 + 0x68,(uint)bVar30);
    iVar13 = unaff_r9 + 0x68 + (uint)bVar30;
    bVar25 = iVar13 == 0;
  }
  bVar26 = false;
  bVar29 = bVar31;
  if (bVar25) {
    bVar29 = 0xfffffd9f < unaff_r9 || CARRY4(unaff_r9 + 0x260,(uint)bVar31);
    iVar16 = unaff_r9 + 0x260 + (uint)bVar31;
    bVar26 = iVar16 == 0;
  }
  bVar25 = false;
  bVar30 = bVar29;
  if (bVar26) {
    bVar30 = 0xfffffc5f < unaff_r9 || CARRY4(unaff_r9 + 0x3a0,(uint)bVar29);
    iVar16 = unaff_r9 + 0x3a0 + (uint)bVar29;
    bVar25 = iVar16 == 0;
  }
  bVar26 = false;
  bVar29 = bVar30;
  if (bVar25) {
    bVar29 = 0xfffffeef < unaff_r9 || CARRY4(unaff_r9 + 0x110,(uint)bVar30);
    iVar16 = unaff_r9 + 0x110 + (uint)bVar30;
    bVar26 = iVar16 == 0;
  }
  bVar25 = false;
  bVar30 = bVar29;
  if (bVar26) {
    bVar30 = 0xfffffabf < unaff_r9 || CARRY4(unaff_r9 + 0x540,(uint)bVar29);
    iVar16 = unaff_r9 + 0x540 + (uint)bVar29;
    bVar25 = iVar16 == 0;
  }
  bVar26 = false;
  bVar29 = bVar30;
  if (bVar25) {
    bVar29 = 0xffffc3ff < unaff_r9 || CARRY4(unaff_r9 + 0x3c00,(uint)bVar30);
    iVar16 = unaff_r9 + 0x3c00 + (uint)bVar30;
    bVar26 = iVar16 == 0;
  }
  bVar25 = false;
  bVar30 = bVar29;
  if (bVar26) {
    bVar30 = 0xfffffe7f < unaff_r9 || CARRY4(unaff_r9 + 0x180,(uint)bVar29);
    iVar16 = unaff_r9 + 0x180 + (uint)bVar29;
    bVar25 = iVar16 == 0;
  }
  bVar26 = false;
  bVar29 = bVar30;
  if (bVar25) {
    bVar29 = 0xfffff0ff < unaff_r9 || CARRY4(unaff_r9 + 0xf00,(uint)bVar30);
    iVar16 = unaff_r9 + 0xf00 + (uint)bVar30;
    bVar26 = iVar16 == 0;
  }
  bVar25 = false;
  bVar30 = bVar29;
  if (bVar26) {
    bVar30 = 0xfffff6ff < unaff_r9 || CARRY4(unaff_r9 + 0x900,(uint)bVar29);
    iVar16 = unaff_r9 + 0x900 + (uint)bVar29;
    bVar25 = iVar16 == 0;
  }
  bVar26 = false;
  bVar29 = bVar30;
  if (bVar25) {
    bVar29 = 0xfffffd3f < unaff_r9 || CARRY4(unaff_r9 + 0x2c0,(uint)bVar30);
    iVar16 = unaff_r9 + 0x2c0 + (uint)bVar30;
    bVar26 = iVar16 == 0;
  }
  bVar25 = false;
  bVar30 = bVar29;
  if (bVar26) {
    bVar30 = 0xfffff5bf < unaff_r9 || CARRY4(unaff_r9 + 0xa40,(uint)bVar29);
    iVar16 = unaff_r9 + 0xa40 + (uint)bVar29;
    bVar25 = iVar16 == 0;
  }
  bVar26 = false;
  bVar29 = bVar30;
  if (bVar25) {
    bVar29 = CARRY4(unaff_r9,(uint)bVar30);
    iVar16 = unaff_r9 + bVar30;
    bVar26 = iVar16 == 0;
  }
  bVar25 = false;
  bVar30 = bVar29;
  if (bVar26) {
    bVar30 = 0xfffc1fff < uVar7 || CARRY4(uVar7 + 0x3e000,(uint)bVar29);
    iVar19 = uVar7 + 0x3e000 + (uint)bVar29;
    bVar25 = iVar19 == 0;
  }
  if (bVar25) {
    unaff_r10 = unaff_r8 + 0x1700 + (uint)bVar30;
  }
  *(int *)(puVar22 + -4) = iVar19;
  *(undefined4 *)(puVar22 + -8) = uVar18;
  *(undefined4 *)(puVar22 + -0xc) = uVar14;
  puVar32 = (uint *)(puVar22 + -0x10);
  *puVar32 = uVar8;
  if (*(int *)(iVar13 + 0x1c) == 0) {
    func_0x024f83f8(iVar13);
  }
  uVar18 = func_0x024f85fc(*(undefined4 *)(iVar4 + 0xc),0);
  uVar18 = func_0x0357e134(uVar18,iVar16,0,**(undefined4 **)(iVar13 + 0x1c));
  iVar16 = *(int *)(*(int *)(iVar13 + 0x1c) + 4);
  uVar8 = *puVar32;
  uVar14 = *(undefined4 *)(puVar22 + -0xc);
  uVar9 = *(undefined4 *)(puVar22 + -8);
  *(undefined4 *)(puVar22 + -4) = *(undefined4 *)(puVar22 + -4);
  *(uint *)(puVar22 + -8) = unaff_r11;
  *(int *)(puVar22 + -0xc) = unaff_r10;
  *puVar32 = unaff_r9;
  *(int *)(puVar22 + -0x14) = unaff_r8;
  *(uint *)(puVar22 + -0x18) = uVar7;
  *(undefined4 *)(puVar22 + -0x1c) = uVar9;
  *(undefined4 *)(puVar22 + -0x20) = uVar14;
  *(uint *)(puVar22 + -0x24) = uVar8;
  piVar3 = (int *)(iVar16 + 0x1c);
  puVar12 = (undefined4 *)*piVar3;
  if (puVar12 == (undefined4 *)0x0) {
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
    puVar12 = *(undefined4 **)(iVar16 + 0x1c);
    if (puVar12 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar16);
      puVar12 = *(undefined4 **)(iVar16 + 0x1c);
    }
  }
  piVar15 = *(int **)(iRam03594980 + 0x35940c0);
  uVar14 = *puVar12;
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
            *(undefined4 *)(puVar22 + -4) = *(undefined4 *)(puVar22 + -4);
            *(undefined4 *)(puVar22 + -8) = *(undefined4 *)(puVar22 + -8);
            *(undefined4 *)(puVar22 + -0xc) = *(undefined4 *)(puVar22 + -0x18);
            *puVar32 = *(uint *)(puVar22 + -0x1c);
            *(undefined4 *)(puVar22 + -0x14) = *(undefined4 *)(puVar22 + -0x20);
            *(uint *)(puVar22 + -0x18) = *(uint *)(puVar22 + -0x24);
            if (*(int *)(iVar4 + 0x1c) == 0) {
              func_0x024f83f8(iVar4);
            }
            piVar3 = (int *)0x0;
            iVar16 = func_0x051b1750(uVar18,0,0);
            if (iVar16 == 0) {
              uVar24 = func_0x0357de74(uVar18,*(undefined4 *)(*(int *)(iVar4 + 0x1c) + 4));
              puVar12 = *(undefined4 **)(iVar4 + 0x1c);
              puVar22[-0x19] = uVar24;
              piVar3 = (int *)func_0x024f83c4(*puVar12,puVar22 + -0x19);
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
          uVar24 = piVar5 == (int *)0x0;
          uVar27 = 1;
          if (!(bool)uVar24) {
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
                  puVar12 = *(undefined4 **)(iRam035949c4 + 0x359474c);
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
                  puVar12 = *(undefined4 **)(iRam035949d4 + 0x3594850);
                  goto LAB_03594648;
                }
                uVar14 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
                uVar33 = func_0x024f8830(uVar14,uVar18,0);
                puVar12 = *(undefined4 **)(iRam035949cc + 0x35947c8);
              }
              else {
                uVar14 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
                uVar33 = func_0x024f8810(uVar14,uVar18,0);
                puVar12 = *(undefined4 **)(iRam035949bc + 0x35946d0);
              }
              uVar18 = (undefined4)uVar33;
              uVar14 = *puVar12;
              *(int *)(puVar22 + -0x2c) = (int)((ulonglong)uVar33 >> 0x20);
              goto LAB_03594194;
            }
            uVar14 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
            uVar2 = func_0x024f8800(uVar14,uVar18,0);
            puVar12 = *(undefined4 **)(iRam035949b4 + 0x359464c);
LAB_03594648:
            uVar14 = *puVar12;
            *(undefined2 *)(puVar22 + -0x30) = uVar2;
            goto LAB_035944c4;
          }
          uVar14 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
          uVar24 = func_0x024f87f0(uVar14,uVar18,0);
          puVar12 = *(undefined4 **)(iRam035949ac + 0x35944c0);
        }
        else {
          if (*(int *)(**(int **)(iRam0359499c + 0x3594360) + 0x74) == 0) {
            func_0x024f83d8();
          }
          func_0x024ef77c(**(undefined4 **)(iRam035949a0 + 0x3594380),0);
          uVar14 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
          uVar24 = func_0x024f87f0(uVar14,uVar18,0);
          puVar12 = *(undefined4 **)(iRam035949a4 + 0x35943a8);
        }
      }
      else {
        uVar14 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
        uVar24 = func_0x024f87d0(uVar14,uVar18,0);
        puVar12 = *(undefined4 **)(iRam03594994 + 0x3594260);
      }
      uVar14 = *puVar12;
      puVar22[-0x30] = uVar24;
    }
    else {
      uVar14 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
      uVar18 = func_0x024f87b0(uVar14,uVar18,0);
      puVar12 = *(undefined4 **)(iRam0359498c + 0x3594194);
LAB_03594190:
      uVar14 = *puVar12;
LAB_03594194:
      *(undefined4 *)(puVar22 + -0x30) = uVar18;
    }
LAB_035944c4:
    piVar15 = (int *)func_0x024f83c4(uVar14,puVar22 + -0x30);
  }
  iVar4 = *(int *)(*piVar3 + 4);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = func_0x024f83fc(iVar4);
  }
  if (piVar15 == (int *)0x0) {
    func_0x024f83d4();
  }
  uVar27 = *(uint *)(iVar4 + 0x20) <= *(uint *)(*piVar15 + 0x20);
  uVar24 = 0;
  if (*(uint *)(*piVar15 + 0x20) == *(uint *)(iVar4 + 0x20)) {
    pcVar17 = (char *)func_0x024f83d0(piVar15);
    return (int *)(uint)(*pcVar17 != '\0');
  }
LAB_0359490c:
  uVar33 = func_0x024f84a0(piVar15,iVar4);
  puVar12 = (undefined4 *)((ulonglong)uVar33 >> 0x20);
  pEVar6 = (Elf32_Rel *)uVar33;
  bVar25 = false;
  bVar26 = (bool)uVar27;
  if ((bool)uVar24) {
    bVar26 = (undefined4 *)0x24000000 < puVar12 ||
             puVar12 + -0x9000000 < (undefined4 *)(uint)(byte)uVar27;
    pEVar6 = (Elf32_Rel *)((int)puVar12 - (!(bool)uVar27 + 0x24000000));
    bVar25 = pEVar6 == (Elf32_Rel *)0x0;
  }
  bVar23 = false;
  bVar28 = bVar26;
  if (bVar25) {
    bVar28 = (undefined4 *)0x1c000000 < puVar12 || puVar12 + -0x7000000 < (undefined4 *)(uint)bVar26
    ;
    pEVar6 = (Elf32_Rel *)((int)puVar12 - (!bVar26 + 0x1c000000));
    bVar23 = pEVar6 == (Elf32_Rel *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar28;
  if (bVar23) {
    bVar26 = (undefined4 *)0x14000000 < puVar12 || puVar12 + -0x5000000 < (undefined4 *)(uint)bVar28
    ;
    pEVar6 = (Elf32_Rel *)((int)puVar12 - (!bVar28 + 0x14000000));
    bVar25 = pEVar6 == (Elf32_Rel *)0x0;
  }
  bVar23 = false;
  bVar28 = bVar26;
  if (bVar25) {
    puVar12 = (undefined4 *)(puVar22 + (-0x30 - (!bVar26 + 0x1c000000)));
    bVar28 = (Elf32_Rel *)&UNK_0001c000 < pEVar6 || pEVar6 + -0x3800 < (Elf32_Rel *)(uint)bVar26;
    iVar4 = (int)pEVar6 - (!bVar26 + 0x1c000);
    bVar23 = iVar4 == 0;
  }
  bVar25 = false;
  bVar26 = bVar28;
  if (bVar23) {
    puVar12 = (undefined4 *)(puVar22 + (-0x30 - (!bVar28 + 0x3000000)));
    piVar15 = (int *)(0x3594960 - (!bVar28 + 0x10000000));
    pEVar6 = (Elf32_Rel *)(puVar22 + (-0x30 - (!bVar28 + 800)));
    bVar26 = __DT_REL + 0x1bd2e < pEVar6 || pEVar6 + -0x24000 < (Elf32_Rel *)(uint)bVar28;
    iVar4 = (int)pEVar6 - (!bVar28 + 0x120000);
    bVar25 = iVar4 == 0;
  }
  bVar23 = false;
  bVar28 = bVar26;
  if (bVar25) {
    puVar12 = (undefined4 *)(puVar22 + (-0x30 - (!bVar26 + 0x17000000)));
    bVar28 = (undefined4 *)0x40000000 < puVar12 ||
             puVar12 + -0x10000000 < (undefined4 *)(uint)bVar26;
    pEVar6 = (Elf32_Rel *)((int)puVar12 - (!bVar26 + 0x40000000));
    bVar23 = pEVar6 == (Elf32_Rel *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar28;
  if (bVar23) {
    puVar12 = (undefined4 *)(puVar22 + (-0x30 - (!bVar28 + 0xb000000)));
    bVar26 = (undefined4 *)0xc000000a < puVar12 || (int)puVar12 + 0x3ffffff6U < (uint)bVar28;
    pEVar6 = (Elf32_Rel *)((int)puVar12 - (!bVar28 + 0xc000000a));
    bVar25 = pEVar6 == (Elf32_Rel *)0x0;
  }
  bVar23 = false;
  bVar28 = bVar26;
  if (bVar25) {
    puVar12 = (undefined4 *)(puVar22 + (-0x30 - (int)(&UNK_05000000 + !bVar26)));
    bVar28 = (undefined4 *)0x2c < puVar12 || puVar12 + -0xb < (undefined4 *)(uint)bVar26;
    pEVar6 = (Elf32_Rel *)((int)puVar12 - (!bVar26 + 0x2c));
    bVar23 = pEVar6 == (Elf32_Rel *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar28;
  if (bVar23) {
    puVar12 = (undefined4 *)(puVar22 + (-0x30 - (!bVar28 + 0xa0)));
    pEVar6 = (Elf32_Rel *)(puVar22 + (-0x30 - (int)(&UNK_02200000 + !bVar28)));
    bVar26 = (Elf32_Rel *)0x90000000 < pEVar6 || pEVar6 + 0xe000000 < (Elf32_Rel *)(uint)bVar28;
    iVar4 = (int)pEVar6 - (!bVar28 + 0x90000000);
    bVar25 = iVar4 == 0;
  }
  bVar23 = false;
  bVar28 = bVar26;
  if (bVar25) {
    bVar28 = (undefined4 *)0xf4 < puVar12 || puVar12 + -0x3d < (undefined4 *)(uint)bVar26;
    pEVar6 = (Elf32_Rel *)((int)puVar12 - (!bVar26 + 0xf4));
    bVar23 = pEVar6 == (Elf32_Rel *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x035949e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (bVar23) {
    piVar3 = (int *)(*(code *)((int)pEVar6 - (!bVar28 + 0x2c0)))();
    return piVar3;
  }
  *(undefined4 *)(puVar22 + -0x34) = 0x3594918;
  *(int **)(puVar22 + -0x38) = piVar20;
  *(int **)(puVar22 + -0x3c) = piVar5;
  *(int *)(puVar22 + -0x40) = iVar16;
  *(int *)(puVar22 + -0x44) = iVar4;
  *(int **)(puVar22 + -0x48) = piVar15;
  pcVar17 = (char *)(_UNK_03594b88 + 0x3594a18);
  if (*pcVar17 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03594b8c + 0x3594a2c));
    *pcVar17 = '\x01';
  }
  piVar3 = (int *)*puVar12;
  if (piVar3 == (int *)0x0) {
    iVar4 = puVar12[1];
    if (iVar4 == 0) {
      cVar1 = *(char *)(puVar12 + 2);
      if (*(int *)(**(int **)(_UNK_03594b90 + 0x3594ac8) + 0x74) == 0) {
        func_0x024f83d8();
      }
      iVar4 = *(int *)(extraout_r2 + 0x10);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = func_0x024f83fc();
      }
      func_0x037543e0(puVar22 + -0x50,cVar1 != '\0',*(undefined4 *)(*(int *)(iVar4 + 0x60) + 0x18));
    }
    else {
      if (*(int *)(**(int **)(_UNK_03594b90 + 0x3594ac8) + 0x74) == 0) {
        func_0x024f83d8();
      }
      iVar16 = *(int *)(extraout_r2 + 0x10);
      if ((*(ushort *)(iVar16 + 0xbd) & 1) == 0) {
        iVar16 = func_0x024f83fc();
      }
      func_0x03753658(puVar22 + -0x50,iVar4,*(undefined4 *)(*(int *)(iVar16 + 0x60) + 0x10));
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
    uVar7 = (uint)*(ushort *)(iVar16 + 0xb6);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(int *)(iVar16 + 0x58) + 4);
      do {
        if (piVar15[-1] == iVar4) {
          puVar12 = (undefined4 *)(iVar16 + *piVar15 * 8 + 200);
          goto LAB_03594b14;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar7 != 0);
    }
    puVar12 = (undefined4 *)func_0x024f8424(piVar3,iVar4,1);
LAB_03594b14:
    (*(code *)*puVar12)(puVar22 + -0x50,piVar3,puVar12[1]);
  }
  piVar3 = *(int **)(puVar22 + -0x50);
  dVar11 = *(dword *)(puVar22 + -0x4c);
  pEVar6->r_offset = (dword)piVar3;
  pEVar6->r_info = dVar11;
  return piVar3;
}

