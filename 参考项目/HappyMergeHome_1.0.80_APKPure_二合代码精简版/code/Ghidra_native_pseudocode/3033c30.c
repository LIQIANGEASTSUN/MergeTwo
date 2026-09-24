
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_03043c30(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int extraout_r2;
  undefined4 uVar10;
  int *piVar11;
  char *pcVar12;
  undefined *puVar13;
  int iVar14;
  char *pcVar15;
  undefined4 uVar16;
  int iVar17;
  char *unaff_r8;
  char *unaff_r9;
  char *unaff_r11;
  undefined4 *puVar18;
  undefined1 *puVar19;
  undefined1 uVar20;
  bool bVar21;
  bool bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined8 uVar26;
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
  
  pcVar15 = (char *)(_UNK_03043d10 + 0x3043c44);
  if (*pcVar15 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03043d14 + 0x3043c58));
    func_0x01438628(*(undefined4 *)(_UNK_03043d18 + 0x3043c64));
    func_0x01438628(*(undefined4 *)(_UNK_03043d1c + 0x3043c70));
    *pcVar15 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1498,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1498,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar15 = (char *)(_UNK_028a40c8 + 0x28a3fe8);
    if (*pcVar15 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a40cc + 0x28a3ffc),param_1,0);
      *pcVar15 = '\x01';
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar14 = *(int *)(iVar2 + 8);
    uVar16 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar14 == 0) {
      func_0x014388e4();
    }
    uVar10 = 2;
    if (iVar2 == 0) {
      uVar10 = 1;
    }
    func_0x024f56d0(iVar14,uVar16,&uStack_30,uVar10,0,0);
    piVar1 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a40d0 + 0x28a40b8));
    return piVar1;
  }
  if (*(int *)(**(int **)(_UNK_03043d20 + 0x3043cc8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_03043d24 + 0x3043ce4));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar14 = **(int **)(_UNK_03043d28 + 0x3043d04);
  puVar18 = auStack_20;
  puVar9 = *(undefined4 **)(iVar14 + 0x1c);
  if (puVar9 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam0370cd44 + 0x370c7b0));
    func_0x024f83cc(*(undefined4 *)(iRam0370cd48 + 0x370c7bc));
    func_0x024f83cc(*(undefined4 *)(iRam0370cd4c + 0x370c7c8));
    func_0x024f83cc(*(undefined4 *)(iRam0370cd50 + 0x370c7d4));
    func_0x024f83cc(*(undefined4 *)(iRam0370cd54 + 0x370c7e0));
    func_0x024f83cc(*(undefined4 *)(iRam0370cd58 + 0x370c7ec));
    func_0x024f83cc(*(undefined4 *)(iRam0370cd5c + 0x370c7f8));
    func_0x024f83cc(*(undefined4 *)(iRam0370cd60 + 0x370c804));
    func_0x024f83cc(*(undefined4 *)(iRam0370cd64 + 0x370c810));
    func_0x024f83cc(*(undefined4 *)(iRam0370cd68 + 0x370c81c));
    func_0x024f83cc(*(undefined4 *)(iRam0370cd6c + 0x370c828));
    func_0x024f83cc(*(undefined4 *)(iRam0370cd70 + 0x370c834));
    func_0x024f83cc(*(undefined4 *)(iRam0370cd74 + 0x370c840));
    func_0x024f83cc(*(undefined4 *)(iRam0370cd78 + 0x370c84c));
    func_0x024f83cc(*(undefined4 *)(iRam0370cd7c + 0x370c858));
    func_0x024f83cc(*(undefined4 *)(iRam0370cd80 + 0x370c864));
    func_0x024f83cc(*(undefined4 *)(iRam0370cd84 + 0x370c870));
    puVar9 = *(undefined4 **)(iVar14 + 0x1c);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar14);
      puVar9 = *(undefined4 **)(iVar14 + 0x1c);
    }
  }
  uVar16 = *puVar9;
  iVar17 = *(int *)(iVar2 + 0x50);
  if (*(int *)(**(int **)(iRam0370cd88 + 0x370c894) + 0x74) == 0) {
    func_0x024f83d8();
  }
  pcVar15 = (char *)func_0x05171434(uVar16,0);
  if (iVar17 == 0) {
    func_0x024f83d4();
  }
  uVar3 = func_0x0475399c(iVar17,pcVar15,**(undefined4 **)(iRam0370cd8c + 0x370c8d8));
  uVar4 = func_0x02965180(uVar3,0);
  if (uVar4 < 0x54328729) {
    if (uVar4 < 0x2b17065f) {
      if (uVar4 == 0xf8d382d) {
        iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370cdbc + 0x370cb50),0);
        uVar20 = iVar17 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar14 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x3c);
LAB_0370cc9c:
          iVar2 = *(int *)(iVar14 + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x024f83fc(iVar2);
          }
          piVar11 = (int *)0x0;
          if (piVar1 != (int *)0x0) {
            if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
               (piVar11 = piVar1,
               *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
            {
              piVar11 = (int *)0x0;
            }
          }
          return piVar11;
        }
      }
      else if (uVar4 == 0x1157da5a) {
        iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370cdac + 0x370cb7c),0);
        uVar20 = iVar17 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar14 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x20);
          goto LAB_0370cc9c;
        }
      }
      else {
        bVar23 = 0x2b17065d < uVar4;
        uVar20 = false;
        if (uVar4 == 0x2b17065e) {
          iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370cd90 + 0x370c944),0);
          uVar20 = iVar17 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(iVar14 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x48);
            goto LAB_0370cc9c;
          }
        }
      }
    }
    else if (uVar4 < 0x487bd458) {
      if (uVar4 == 0x2bdbd67c) {
        iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370cdb4 + 0x370cbd4),0);
        uVar20 = iVar17 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar14 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x34);
          goto LAB_0370cc9c;
        }
      }
      else {
        bVar23 = 0x487bd456 < uVar4;
        uVar20 = false;
        if (uVar4 == 0x487bd457) {
          iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370cd94 + 0x370c9fc),0);
          uVar20 = iVar17 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(iVar14 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x18);
            goto LAB_0370cc9c;
          }
        }
      }
    }
    else if (uVar4 == 0x5030a485) {
      iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370cdb8 + 0x370cc58),0);
      uVar20 = iVar17 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar14 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x38);
        goto LAB_0370cc9c;
      }
    }
    else {
      bVar23 = 0x54328727 < uVar4;
      uVar20 = false;
      if (uVar4 == 0x54328728) {
        iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370cd98 + 0x370cad8),0);
        uVar20 = iVar17 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar14 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x28);
          goto LAB_0370cc9c;
        }
      }
    }
  }
  else if (uVar4 < 0xa85fd2ad) {
    if (uVar4 < 0x57328be2) {
      if (uVar4 == 0x553288bb) {
        iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370cdb0 + 0x370cba8),0);
        uVar20 = iVar17 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar14 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x2c);
          goto LAB_0370cc9c;
        }
      }
      else {
        bVar23 = 0x57328be0 < uVar4;
        uVar20 = false;
        if (uVar4 == 0x57328be1) {
          iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370cd9c + 0x370c9a8),0);
          uVar20 = iVar17 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(iVar14 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x24);
            goto LAB_0370cc9c;
          }
        }
      }
    }
    else if (uVar4 == 0xa85fd2ac) {
      iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370cdc0 + 0x370cc2c),0);
      uVar20 = iVar17 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar14 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x44);
        goto LAB_0370cc9c;
      }
    }
    else {
      bVar23 = 0x5a329099 < uVar4;
      uVar20 = false;
      if (uVar4 == 0x5a32909a) {
        iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370cda0 + 0x370ca94),0);
        uVar20 = iVar17 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar14 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x30);
          goto LAB_0370cc9c;
        }
      }
    }
  }
  else if (uVar4 < 0xd03b0219) {
    if (uVar4 == 0xbfd08821) {
      iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370cdc8 + 0x370cc00),0);
      uVar20 = iVar17 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar14 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x1c);
        goto LAB_0370cc9c;
      }
    }
    else {
      bVar23 = 0xd03b0217 < uVar4;
      uVar20 = false;
      if (uVar4 == 0xd03b0218) {
        iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370cda4 + 0x370ca50),0);
        uVar20 = iVar17 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar14 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x40);
          goto LAB_0370cc9c;
        }
      }
    }
  }
  else if (uVar4 == 0xe23f7956) {
    iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370cdc4 + 0x370cc84),0);
    uVar20 = iVar17 == 0;
    bVar23 = true;
    if (!(bool)uVar20) {
      iVar14 = *(int *)(iVar14 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x4c);
      goto LAB_0370cc9c;
    }
  }
  else {
    bVar23 = 0xe2992842 < uVar4;
    uVar20 = false;
    if (uVar4 == 0xe2992843) {
      iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370cda8 + 0x370cb24),0);
      uVar20 = iVar17 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar14 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x14);
        goto LAB_0370cc9c;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam0370cdcc + 0x370cd04));
  uVar4 = func_0x024f83c8();
  uVar16 = func_0x024f83b8(*(undefined4 *)(iRam0370cdd0 + 0x370cd18));
  auStack_20[0] = 0;
  func_0x0509473c(uVar4,uVar16,uVar3,0);
  func_0x024f83c0(uVar4,iVar14);
  uVar26 = func_0x024f83bc();
  iVar17 = (int)((ulonglong)uVar26 >> 0x20);
  iVar2 = (int)uVar26;
  bVar21 = false;
  bVar24 = bVar23;
  if ((bool)uVar20) {
    bVar24 = (char *)0xfffcafff < unaff_r9 ||
             CARRY4((uint)(
                          "_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE17__get_white_spaceERS4_S4_RjRKNS_5ctypeIcEE"
                          + (int)(unaff_r9 + 0x40)),(uint)bVar23);
    pcVar15 = "_ZNKSt6__ndk18time_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE17__get_white_spaceERS4_S4_RjRKNS_5ctypeIcEE"
              + (int)(unaff_r9 + bVar23 + 0x40);
    bVar21 = pcVar15 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xfffffcff < uVar4 || CARRY4(uVar4 + 0x300,(uint)bVar24);
    unaff_r8 = (char *)(uVar4 + 0x300 + (uint)bVar24);
    bVar22 = unaff_r8 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xffcbffff < uVar3 || CARRY4(uVar3 + 0x340000,(uint)bVar23);
    puVar18 = (undefined4 *)(uVar3 + 0x340000 + (uint)bVar23);
    bVar21 = (undefined1 *)(uVar3 + 0x340000 + (uint)bVar23) == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xffd3ffff < uVar3 || CARRY4(uVar3 + 0x2c0000,(uint)bVar24);
    puVar18 = (undefined4 *)(uVar3 + 0x2c0000 + (uint)bVar24);
    bVar22 = (undefined1 *)(uVar3 + 0x2c0000 + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xffdbffff < uVar3 || CARRY4(uVar3 + 0x240000,(uint)bVar23);
    puVar18 = (undefined4 *)(uVar3 + 0x240000 + (uint)bVar23);
    bVar21 = (undefined1 *)(uVar3 + 0x240000 + (uint)bVar23) == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xffe3ffff < uVar3 || CARRY4(uVar3 + 0x1c0000,(uint)bVar24);
    puVar18 = (undefined4 *)(uVar3 + 0x1c0000 + (uint)bVar24);
    bVar22 = (undefined1 *)(uVar3 + 0x1c0000 + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xffebffff < uVar3 || CARRY4(uVar3 + 0x140000,(uint)bVar23);
    puVar18 = (undefined4 *)(uVar3 + 0x140000 + (uint)bVar23);
    bVar21 = (undefined1 *)(uVar3 + 0x140000 + (uint)bVar23) == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xfff3ffff < uVar3 || CARRY4(uVar3 + 0xc0000,(uint)bVar24);
    puVar18 = (undefined4 *)(uVar3 + 0xc0000 + (uint)bVar24);
    bVar22 = (undefined1 *)(uVar3 + 0xc0000 + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xfffbffff < uVar3 || CARRY4(uVar3 + 0x40000,(uint)bVar23);
    puVar18 = (undefined4 *)(uVar3 + 0x40000 + (uint)bVar23);
    bVar21 = (undefined1 *)(uVar3 + 0x40000 + (uint)bVar23) == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xfc0fffff < uVar3 || CARRY4(uVar3 + 0x3f00000,(uint)bVar24);
    puVar18 = (undefined4 *)(uVar3 + 0x3f00000 + (uint)bVar24);
    bVar22 = (undefined1 *)(uVar3 + 0x3f00000 + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xfc2fffff < uVar3 || CARRY4((uint)(&UNK_03d00000 + uVar3),(uint)bVar23);
    puVar18 = (undefined4 *)(&UNK_03d00000 + bVar23 + uVar3);
    bVar21 = &UNK_03d00000 + bVar23 + uVar3 == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xfc4fffff < uVar3 || CARRY4((uint)(&UNK_03b00000 + uVar3),(uint)bVar24);
    puVar18 = (undefined4 *)(&UNK_03b00000 + bVar24 + uVar3);
    bVar22 = &UNK_03b00000 + bVar24 + uVar3 == (undefined1 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xfc6fffff < uVar3 || CARRY4((uint)(&UNK_03900000 + uVar3),(uint)bVar23);
    puVar18 = (undefined4 *)(&UNK_03900000 + bVar23 + uVar3);
    bVar21 = &UNK_03900000 + bVar23 + uVar3 == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xfc8fffff < uVar3 || CARRY4((uint)(&UNK_03700000 + uVar3),(uint)bVar24);
    puVar18 = (undefined4 *)(&UNK_03700000 + bVar24 + uVar3);
    bVar22 = &UNK_03700000 + bVar24 + uVar3 == (undefined1 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xfcafffff < uVar3 || CARRY4((uint)(&UNK_03500000 + uVar3),(uint)bVar23);
    puVar18 = (undefined4 *)(&UNK_03500000 + bVar23 + uVar3);
    bVar21 = &UNK_03500000 + bVar23 + uVar3 == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xfccfffff < uVar3 || CARRY4((uint)(&UNK_03300000 + uVar3),(uint)bVar24);
    puVar18 = (undefined4 *)(&UNK_03300000 + bVar24 + uVar3);
    bVar22 = &UNK_03300000 + bVar24 + uVar3 == (undefined1 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xfcefffff < uVar3 || CARRY4((uint)(&UNK_03100000 + uVar3),(uint)bVar23);
    puVar18 = (undefined4 *)(&UNK_03100000 + bVar23 + uVar3);
    bVar21 = &UNK_03100000 + bVar23 + uVar3 == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xffffe9ff < uVar4 || CARRY4(uVar4 + 0x1600,(uint)bVar24);
    unaff_r8 = (char *)(uVar4 + 0x1600 + (uint)bVar24);
    bVar22 = unaff_r8 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfff53fff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0xac000),(uint)bVar23);
    pcVar15 = unaff_r9 + bVar23 + 0xac000;
    bVar21 = pcVar15 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xf43fffff < uVar3 || CARRY4(uVar3 + 0xbc00000,(uint)bVar24);
    puVar18 = (undefined4 *)(uVar3 + 0xbc00000 + (uint)bVar24);
    bVar22 = (undefined1 *)(uVar3 + 0xbc00000 + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xfd7fffff < uVar3 || CARRY4(uVar3 + 0x2800000,(uint)bVar23);
    puVar18 = (undefined4 *)(uVar3 + 0x2800000 + (uint)bVar23);
    bVar21 = (undefined1 *)(uVar3 + 0x2800000 + (uint)bVar23) == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xf0ffffff < uVar3 || CARRY4(uVar3 + 0xf000000,(uint)bVar24);
    puVar18 = (undefined4 *)(uVar3 + 0xf000000 + (uint)bVar24);
    bVar22 = (undefined1 *)(uVar3 + 0xf000000 + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xf8ffffff < uVar3 || CARRY4(uVar3 + 0x7000000,(uint)bVar23);
    puVar18 = (undefined4 *)(uVar3 + 0x7000000 + (uint)bVar23);
    bVar21 = (undefined1 *)(uVar3 + 0x7000000 + (uint)bVar23) == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xddffffff < uVar3 || CARRY4(uVar3 + 0x22000000,(uint)bVar24);
    puVar18 = (undefined4 *)(uVar3 + 0x22000000 + (uint)bVar24);
    bVar22 = (undefined1 *)(uVar3 + 0x22000000 + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xcbffffff < uVar3 || CARRY4(uVar3 + 0x34000000,(uint)bVar23);
    puVar18 = (undefined4 *)(uVar3 + 0x34000000 + (uint)bVar23);
    bVar21 = (undefined1 *)(uVar3 + 0x34000000 + (uint)bVar23) == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0x27ffffff < uVar3 || CARRY4(uVar3 + 0xd8000000,(uint)bVar24);
    puVar18 = (undefined4 *)(uVar3 + 0xd8000000 + (uint)bVar24);
    bVar22 = (undefined1 *)(uVar3 + 0xd8000000 + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0x4fffffff < uVar3 || CARRY4(uVar3 + 0xb0000000,(uint)bVar23);
    puVar18 = (undefined4 *)(uVar3 + 0xb0000000 + (uint)bVar23);
    bVar21 = (undefined1 *)(uVar3 + 0xb0000000 + (uint)bVar23) == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0x9fffffff < uVar3 || CARRY4(uVar3 + 0x60000000,(uint)bVar24);
    puVar18 = (undefined4 *)(uVar3 + 0x60000000 + (uint)bVar24);
    bVar22 = (undefined1 *)(uVar3 + 0x60000000 + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xc7ffffff < uVar3 || CARRY4(uVar3 + 0x38000000,(uint)bVar23);
    puVar18 = (undefined4 *)(uVar3 + 0x38000000 + (uint)bVar23);
    bVar21 = (undefined1 *)(uVar3 + 0x38000000 + (uint)bVar23) == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0x1ffffffd < uVar3 || CARRY4(uVar3 + 0xe0000002,(uint)bVar24);
    puVar18 = (undefined4 *)(uVar3 + 0xe0000002 + (uint)bVar24);
    bVar22 = (undefined1 *)(uVar3 + 0xe0000002 + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0x1bffffff < uVar3 || CARRY4(uVar3 + 0xe4000000,(uint)bVar23);
    puVar18 = (undefined4 *)(uVar3 + 0xe4000000 + (uint)bVar23);
    bVar21 = (undefined1 *)(uVar3 + 0xe4000000 + (uint)bVar23) == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0x9ffffffc < uVar3 || CARRY4(uVar3 + 0x60000003,(uint)bVar24);
    puVar18 = (undefined4 *)(uVar3 + 0x60000003 + (uint)bVar24);
    bVar22 = (undefined1 *)(uVar3 + 0x60000003 + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0x6ffffffd < uVar3 || CARRY4(uVar3 + 0x90000002,(uint)bVar23);
    puVar18 = (undefined4 *)(uVar3 + 0x90000002 + (uint)bVar23);
    bVar21 = (undefined1 *)(uVar3 + 0x90000002 + (uint)bVar23) == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xcfffffff < uVar3 || CARRY4(uVar3 + 0x30000000,(uint)bVar24);
    puVar18 = (undefined4 *)(uVar3 + 0x30000000 + (uint)bVar24);
    bVar22 = (undefined1 *)(uVar3 + 0x30000000 + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xeffffffd < uVar4 || CARRY4(uVar4 + 0x10000002,(uint)bVar23);
  }
  if (bVar22 && uVar4 + 0x10000002 + (uint)bVar23 == 0) {
    uVar3 = uVar3 + 0xe8000000 + (uint)bVar24;
  }
  *(undefined4 *)((int)puVar18 + -4) = 0x370cd44;
  *(char **)((int)puVar18 + -8) = unaff_r11;
  *(char **)((int)puVar18 + -0xc) = pcVar15;
  *(uint *)((int)puVar18 + -0x10) = uVar3;
  *(uint *)((int)puVar18 + -0x14) = uVar4;
  *(int *)((int)puVar18 + -0x18) = iVar14;
  puVar19 = (undefined1 *)((int)puVar18 + -0x20);
  puVar9 = *(undefined4 **)(iVar17 + 0x1c);
  if (puVar9 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam0370d390 + 0x370cdfc));
    func_0x024f83cc(*(undefined4 *)(iRam0370d394 + 0x370ce08));
    func_0x024f83cc(*(undefined4 *)(iRam0370d398 + 0x370ce14));
    func_0x024f83cc(*(undefined4 *)(iRam0370d39c + 0x370ce20));
    func_0x024f83cc(*(undefined4 *)(iRam0370d3a0 + 0x370ce2c));
    func_0x024f83cc(*(undefined4 *)(iRam0370d3a4 + 0x370ce38));
    func_0x024f83cc(*(undefined4 *)(iRam0370d3a8 + 0x370ce44));
    func_0x024f83cc(*(undefined4 *)(iRam0370d3ac + 0x370ce50));
    func_0x024f83cc(*(undefined4 *)(iRam0370d3b0 + 0x370ce5c));
    func_0x024f83cc(*(undefined4 *)(iRam0370d3b4 + 0x370ce68));
    func_0x024f83cc(*(undefined4 *)(iRam0370d3b8 + 0x370ce74));
    func_0x024f83cc(*(undefined4 *)(iRam0370d3bc + 0x370ce80));
    func_0x024f83cc(*(undefined4 *)(iRam0370d3c0 + 0x370ce8c));
    func_0x024f83cc(*(undefined4 *)(iRam0370d3c4 + 0x370ce98));
    func_0x024f83cc(*(undefined4 *)(iRam0370d3c8 + 0x370cea4));
    func_0x024f83cc(*(undefined4 *)(iRam0370d3cc + 0x370ceb0));
    func_0x024f83cc(*(undefined4 *)(iRam0370d3d0 + 0x370cebc));
    puVar9 = *(undefined4 **)(iVar17 + 0x1c);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar17);
      puVar9 = *(undefined4 **)(iVar17 + 0x1c);
    }
  }
  uVar16 = *puVar9;
  iVar14 = *(int *)(iVar2 + 0x50);
  if (*(int *)(**(int **)(iRam0370d3d4 + 0x370cee0) + 0x74) == 0) {
    func_0x024f83d8();
  }
  pcVar15 = (char *)func_0x05171434(uVar16,0);
  if (iVar14 == 0) {
    func_0x024f83d4();
  }
  uVar3 = func_0x0475399c(iVar14,pcVar15,**(undefined4 **)(iRam0370d3d8 + 0x370cf24));
  uVar4 = func_0x02965180(uVar3,0);
  if (uVar4 < 0x54328729) {
    if (uVar4 < 0x2b17065f) {
      if (uVar4 == 0xf8d382d) {
        iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370d408 + 0x370d19c),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar17 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x3c);
LAB_0370d2e8:
          iVar2 = *(int *)(iVar14 + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x024f83fc(iVar2);
          }
          piVar11 = (int *)0x0;
          if (piVar1 != (int *)0x0) {
            if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
               (piVar11 = piVar1,
               *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
            {
              piVar11 = (int *)0x0;
            }
          }
          return piVar11;
        }
      }
      else if (uVar4 == 0x1157da5a) {
        iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370d3f8 + 0x370d1c8),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar17 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x20);
          goto LAB_0370d2e8;
        }
      }
      else {
        bVar23 = 0x2b17065d < uVar4;
        uVar20 = false;
        if (uVar4 == 0x2b17065e) {
          iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370d3dc + 0x370cf90),0);
          uVar20 = iVar14 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(iVar17 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x48);
            goto LAB_0370d2e8;
          }
        }
      }
    }
    else if (uVar4 < 0x487bd458) {
      if (uVar4 == 0x2bdbd67c) {
        iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370d400 + 0x370d220),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar17 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x34);
          goto LAB_0370d2e8;
        }
      }
      else {
        bVar23 = 0x487bd456 < uVar4;
        uVar20 = false;
        if (uVar4 == 0x487bd457) {
          iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370d3e0 + 0x370d048),0);
          uVar20 = iVar14 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(iVar17 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x18);
            goto LAB_0370d2e8;
          }
        }
      }
    }
    else if (uVar4 == 0x5030a485) {
      iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370d404 + 0x370d2a4),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar17 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x38);
        goto LAB_0370d2e8;
      }
    }
    else {
      bVar23 = 0x54328727 < uVar4;
      uVar20 = false;
      if (uVar4 == 0x54328728) {
        iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370d3e4 + 0x370d124),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar17 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x28);
          goto LAB_0370d2e8;
        }
      }
    }
  }
  else if (uVar4 < 0xa85fd2ad) {
    if (uVar4 < 0x57328be2) {
      if (uVar4 == 0x553288bb) {
        iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370d3fc + 0x370d1f4),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar17 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x2c);
          goto LAB_0370d2e8;
        }
      }
      else {
        bVar23 = 0x57328be0 < uVar4;
        uVar20 = false;
        if (uVar4 == 0x57328be1) {
          iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370d3e8 + 0x370cff4),0);
          uVar20 = iVar14 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(iVar17 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x24);
            goto LAB_0370d2e8;
          }
        }
      }
    }
    else if (uVar4 == 0xa85fd2ac) {
      iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370d40c + 0x370d278),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar17 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x44);
        goto LAB_0370d2e8;
      }
    }
    else {
      bVar23 = 0x5a329099 < uVar4;
      uVar20 = false;
      if (uVar4 == 0x5a32909a) {
        iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370d3ec + 0x370d0e0),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar17 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x30);
          goto LAB_0370d2e8;
        }
      }
    }
  }
  else if (uVar4 < 0xd03b0219) {
    if (uVar4 == 0xbfd08821) {
      iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370d414 + 0x370d24c),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar17 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x1c);
        goto LAB_0370d2e8;
      }
    }
    else {
      bVar23 = 0xd03b0217 < uVar4;
      uVar20 = false;
      if (uVar4 == 0xd03b0218) {
        iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370d3f0 + 0x370d09c),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar17 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x40);
          goto LAB_0370d2e8;
        }
      }
    }
  }
  else if (uVar4 == 0xe23f7956) {
    iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370d410 + 0x370d2d0),0);
    uVar20 = iVar14 == 0;
    bVar23 = true;
    if (!(bool)uVar20) {
      iVar14 = *(int *)(iVar17 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x4c);
      goto LAB_0370d2e8;
    }
  }
  else {
    bVar23 = 0xe2992842 < uVar4;
    uVar20 = false;
    if (uVar4 == 0xe2992843) {
      iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370d3f4 + 0x370d170),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar17 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x14);
        goto LAB_0370d2e8;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam0370d418 + 0x370d350));
  uVar4 = func_0x024f83c8();
  uVar16 = func_0x024f83b8(*(undefined4 *)(iRam0370d41c + 0x370d364));
  *(undefined4 *)((int)puVar18 + -0x20) = 0;
  func_0x0509473c(uVar4,uVar16,uVar3,0);
  func_0x024f83c0(uVar4,iVar17);
  uVar26 = func_0x024f83bc();
  iVar14 = (int)((ulonglong)uVar26 >> 0x20);
  iVar2 = (int)uVar26;
  bVar21 = false;
  bVar24 = bVar23;
  if ((bool)uVar20) {
    bVar24 = (char *)0xddffffff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x22000000),(uint)bVar23);
    pcVar15 = unaff_r9 + bVar23 + 0x22000000;
    bVar21 = pcVar15 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xfc6fffff < uVar4 || CARRY4((uint)(&UNK_03900000 + uVar4),(uint)bVar24);
    unaff_r8 = &UNK_03900000 + bVar24 + uVar4;
    bVar22 = unaff_r8 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xffffffc5 < uVar3 || CARRY4(uVar3 + 0x3a,(uint)bVar23);
    puVar19 = (undefined1 *)(uVar3 + 0x3a + (uint)bVar23);
    bVar21 = (undefined1 *)(uVar3 + 0x3a + (uint)bVar23) == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xffffffc7 < uVar3 || CARRY4(uVar3 + 0x38,(uint)bVar24);
    puVar19 = (undefined1 *)(uVar3 + 0x38 + (uint)bVar24);
    bVar22 = (undefined1 *)(uVar3 + 0x38 + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xffffffc9 < uVar3 || CARRY4(uVar3 + 0x36,(uint)bVar23);
    puVar19 = (undefined1 *)(uVar3 + 0x36 + (uint)bVar23);
    bVar21 = (undefined1 *)(uVar3 + 0x36 + (uint)bVar23) == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xffffffcb < uVar3 || CARRY4(uVar3 + 0x34,(uint)bVar24);
    puVar19 = (undefined1 *)(uVar3 + 0x34 + (uint)bVar24);
    bVar22 = (undefined1 *)(uVar3 + 0x34 + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xffffffcd < uVar3 || CARRY4(uVar3 + 0x32,(uint)bVar23);
    puVar19 = (undefined1 *)(uVar3 + 0x32 + (uint)bVar23);
    bVar21 = (undefined1 *)(uVar3 + 0x32 + (uint)bVar23) == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xffffffcf < uVar3 || CARRY4(uVar3 + 0x30,(uint)bVar24);
    puVar19 = (undefined1 *)(uVar3 + 0x30 + (uint)bVar24);
    bVar22 = (undefined1 *)(uVar3 + 0x30 + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xffffffd1 < uVar3 || CARRY4(uVar3 + 0x2e,(uint)bVar23);
    puVar19 = (undefined1 *)(uVar3 + 0x2e + (uint)bVar23);
    bVar21 = (undefined1 *)(uVar3 + 0x2e + (uint)bVar23) == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xffffffd3 < uVar3 || CARRY4(uVar3 + 0x2c,(uint)bVar24);
    puVar19 = (undefined1 *)(uVar3 + 0x2c + (uint)bVar24);
    bVar22 = (undefined1 *)(uVar3 + 0x2c + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xffffffd5 < uVar3 || CARRY4(uVar3 + 0x2a,(uint)bVar23);
    puVar19 = (undefined1 *)(uVar3 + 0x2a + (uint)bVar23);
    bVar21 = (undefined1 *)(uVar3 + 0x2a + (uint)bVar23) == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xffffffd7 < uVar3 || CARRY4(uVar3 + 0x28,(uint)bVar24);
    puVar19 = (undefined1 *)(uVar3 + 0x28 + (uint)bVar24);
    bVar22 = (undefined1 *)(uVar3 + 0x28 + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xffffffd9 < uVar3 || CARRY4(uVar3 + 0x26,(uint)bVar23);
    puVar19 = (undefined1 *)(uVar3 + 0x26 + (uint)bVar23);
    bVar21 = (undefined1 *)(uVar3 + 0x26 + (uint)bVar23) == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xffffffdb < uVar3 || CARRY4(uVar3 + 0x24,(uint)bVar24);
    puVar19 = (undefined1 *)(uVar3 + 0x24 + (uint)bVar24);
    bVar22 = (undefined1 *)(uVar3 + 0x24 + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xffffffdd < uVar3 || CARRY4(uVar3 + 0x22,(uint)bVar23);
    puVar19 = (undefined1 *)(uVar3 + 0x22 + (uint)bVar23);
    bVar21 = (undefined1 *)(uVar3 + 0x22 + (uint)bVar23) == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xffffffdf < uVar3 || CARRY4(uVar3 + 0x20,(uint)bVar24);
    puVar19 = (undefined1 *)(uVar3 + 0x20 + (uint)bVar24);
    bVar22 = (undefined1 *)(uVar3 + 0x20 + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xffffffe1 < uVar3 || CARRY4(uVar3 + 0x1e,(uint)bVar23);
    puVar19 = (undefined1 *)(uVar3 + 0x1e + (uint)bVar23);
    bVar21 = (undefined1 *)(uVar3 + 0x1e + (uint)bVar23) == (undefined1 *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xffcfffff < uVar4 || CARRY4(uVar4 + 0x300000,(uint)bVar24);
    unaff_r8 = (char *)(uVar4 + 0x300000 + (uint)bVar24);
    bVar22 = unaff_r8 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0x9fffffff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x60000000),(uint)bVar23);
    pcVar15 = unaff_r9 + bVar23 + 0x60000000;
    bVar21 = pcVar15 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xffffff8f < uVar3 || CARRY4(uVar3 + 0x70,(uint)bVar24);
    puVar19 = (undefined1 *)(uVar3 + 0x70 + (uint)bVar24);
    bVar22 = (undefined1 *)(uVar3 + 0x70 + (uint)bVar24) == (undefined1 *)0x0;
  }
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xfffffc8f < uVar3 || CARRY4(uVar3 + 0x370,(uint)bVar23);
  }
  bVar22 = bVar22 && uVar3 + 0x370 + (uint)bVar23 == 0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = 0xfffff0ff < uVar3 || CARRY4(uVar3 + 0xf00,(uint)bVar24);
  }
  bVar21 = false;
  bVar25 = bVar23;
  if (bVar22 && uVar3 + 0xf00 + (uint)bVar24 == 0) {
    bVar25 = 0xffffffdb < uVar3 || CARRY4(uVar3 + 0x24,(uint)bVar23);
    puVar19 = (undefined1 *)(uVar3 + 0x24 + (uint)bVar23);
    bVar21 = (undefined1 *)(uVar3 + 0x24 + (uint)bVar23) == (undefined1 *)0x0;
  }
  bVar23 = bVar25;
  if (bVar21) {
    bVar23 = 0xffffff0f < uVar3 || CARRY4(uVar3 + 0xf0,(uint)bVar25);
  }
  bVar21 = bVar21 && uVar3 + 0xf0 + (uint)bVar25 == 0;
  bVar24 = bVar23;
  if (bVar21) {
    bVar24 = 0xfffffdef < uVar3 || CARRY4(uVar3 + 0x210,(uint)bVar23);
  }
  bVar21 = bVar21 && uVar3 + 0x210 + (uint)bVar23 == 0;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xfffff73f < uVar3 || CARRY4(uVar3 + 0x8c0,(uint)bVar24);
  }
  bVar21 = bVar21 && uVar3 + 0x8c0 + (uint)bVar24 == 0;
  bVar24 = bVar23;
  if (bVar21) {
    bVar24 = 0xfffff9bf < uVar3 || CARRY4(uVar3 + 0x640,(uint)bVar23);
  }
  bVar21 = bVar21 && uVar3 + 0x640 + (uint)bVar23 == 0;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xfffffebf < uVar3 || CARRY4(uVar3 + 0x140,(uint)bVar24);
  }
  bVar21 = bVar21 && uVar3 + 0x140 + (uint)bVar24 == 0;
  bVar24 = bVar23;
  if (bVar21) {
    bVar24 = 0xffffc4ff < uVar3 || CARRY4(uVar3 + 0x3b00,(uint)bVar23);
  }
  bVar21 = bVar21 && uVar3 + 0x3b00 + (uint)bVar23 == 0;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xffffe4ff < uVar3 || CARRY4(uVar3 + 0x1b00,(uint)bVar24);
  }
  bVar21 = bVar21 && uVar3 + 0x1b00 + (uint)bVar24 == 0;
  bVar24 = bVar23;
  if (bVar21) {
    bVar24 = 0xfffff67f < uVar3 || CARRY4(uVar3 + 0x980,(uint)bVar23);
  }
  bVar21 = bVar21 && uVar3 + 0x980 + (uint)bVar23 == 0;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xffffdcff < uVar3 || CARRY4(uVar3 + 0x2300,(uint)bVar24);
  }
  bVar21 = bVar21 && uVar3 + 0x2300 + (uint)bVar24 == 0;
  bVar24 = bVar23;
  if (bVar21) {
    bVar24 = 0xffffe9ff < uVar3 || CARRY4(uVar3 + 0x1600,(uint)bVar23);
  }
  bVar21 = bVar21 && uVar3 + 0x1600 + (uint)bVar23 == 0;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xffffc6ff < uVar3 || CARRY4(uVar3 + 0x3900,(uint)bVar24);
  }
  bVar22 = false;
  bVar25 = bVar23;
  if (bVar21 && uVar3 + 0x3900 + (uint)bVar24 == 0) {
    bVar25 = 0xfffff1ff < uVar4 || CARRY4(uVar4 + 0xe00,(uint)bVar23);
    unaff_r9 = (char *)(uVar4 + 0xe00 + (uint)bVar23);
    bVar22 = unaff_r9 == (char *)0x0;
  }
  if (bVar22) {
    uVar4 = uVar3 + 0x9c0 + (uint)bVar25;
  }
  *(undefined4 *)(puVar19 + -4) = 0x370d390;
  *(char **)(puVar19 + -8) = unaff_r11;
  *(char **)(puVar19 + -0xc) = pcVar15;
  *(uint *)(puVar19 + -0x10) = uVar3;
  *(uint *)(puVar19 + -0x14) = uVar4;
  *(int *)(puVar19 + -0x18) = iVar17;
  puVar9 = *(undefined4 **)(iVar14 + 0x1c);
  if (puVar9 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam0370d8e8 + 0x370d448));
    func_0x024f83cc(*(undefined4 *)(iRam0370d8ec + 0x370d454));
    func_0x024f83cc(*(undefined4 *)(iRam0370d8f0 + 0x370d460));
    func_0x024f83cc(*(undefined4 *)(iRam0370d8f4 + 0x370d46c));
    func_0x024f83cc(*(undefined4 *)(iRam0370d8f8 + 0x370d478));
    func_0x024f83cc(*(undefined4 *)(iRam0370d8fc + 0x370d484));
    func_0x024f83cc(*(undefined4 *)(iRam0370d900 + 0x370d490));
    func_0x024f83cc(*(undefined4 *)(iRam0370d904 + 0x370d49c));
    func_0x024f83cc(*(undefined4 *)(iRam0370d908 + 0x370d4a8));
    func_0x024f83cc(*(undefined4 *)(iRam0370d90c + 0x370d4b4));
    func_0x024f83cc(*(undefined4 *)(iRam0370d910 + 0x370d4c0));
    func_0x024f83cc(*(undefined4 *)(iRam0370d914 + 0x370d4cc));
    func_0x024f83cc(*(undefined4 *)(iRam0370d918 + 0x370d4d8));
    func_0x024f83cc(*(undefined4 *)(iRam0370d91c + 0x370d4e4));
    puVar9 = *(undefined4 **)(iVar14 + 0x1c);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar14);
      puVar9 = *(undefined4 **)(iVar14 + 0x1c);
    }
  }
  uVar16 = *puVar9;
  iVar17 = *(int *)(iVar2 + 0x44);
  if (*(int *)(**(int **)(iRam0370d920 + 0x370d508) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar16 = func_0x05171434(uVar16,0);
  if (iVar17 == 0) {
    func_0x024f83d4();
  }
  pcVar15 = (char *)func_0x0475399c(iVar17,uVar16,**(undefined4 **)(iRam0370d924 + 0x370d54c));
  uVar3 = func_0x02965180(pcVar15,0);
  if (uVar3 < 0x70e51c84) {
    if (uVar3 < 0x5c05f5a9) {
      if (uVar3 == 0x17560e62) {
        iVar17 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370d938 + 0x370d6f4),0);
        uVar20 = iVar17 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar14 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
LAB_0370d840:
          iVar2 = *(int *)(iVar14 + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x024f83fc(iVar2);
          }
          piVar11 = (int *)0x0;
          if (piVar1 != (int *)0x0) {
            if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
               (piVar11 = piVar1,
               *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
            {
              piVar11 = (int *)0x0;
            }
          }
          return piVar11;
        }
      }
      else if (uVar3 == 0x37674e95) {
        iVar17 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370d93c + 0x370d720),0);
        uVar20 = iVar17 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar14 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x20);
          goto LAB_0370d840;
        }
      }
      else {
        bVar23 = 0x5c05f5a7 < uVar3;
        uVar20 = false;
        if (uVar3 == 0x5c05f5a8) {
          iVar17 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370d928 + 0x370d5b8),0);
          uVar20 = iVar17 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(iVar14 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x2c);
            goto LAB_0370d840;
          }
        }
      }
    }
    else if (uVar3 == 0x5d47dc1f) {
      iVar17 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370d948 + 0x370d7a4),0);
      uVar20 = iVar17 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar14 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x38);
        goto LAB_0370d840;
      }
    }
    else if (uVar3 == 0x621d84e1) {
      iVar17 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370d944 + 0x370d7d0),0);
      uVar20 = iVar17 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar14 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x28);
        goto LAB_0370d840;
      }
    }
    else {
      bVar23 = 0x70e51c82 < uVar3;
      uVar20 = false;
      if (uVar3 == 0x70e51c83) {
        iVar17 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370d92c + 0x370d66c),0);
        uVar20 = iVar17 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar14 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x34);
          goto LAB_0370d840;
        }
      }
    }
  }
  else if (uVar3 < 0x8cf8968c) {
    if (uVar3 == 0x8cf8968b) {
      iVar17 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370d940 + 0x370d74c),0);
      uVar20 = iVar17 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar14 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x24);
        goto LAB_0370d840;
      }
    }
    else if (uVar3 == 0x7609ad4f) {
      iVar17 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370d950 + 0x370d778),0);
      uVar20 = iVar17 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar14 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x40);
        goto LAB_0370d840;
      }
    }
    else {
      bVar23 = 0x7f709451 < uVar3;
      uVar20 = false;
      if (uVar3 == 0x7f709452) {
        iVar17 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370d930 + 0x370d618),0);
        uVar20 = iVar17 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar14 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x30);
          goto LAB_0370d840;
        }
      }
    }
  }
  else if (uVar3 == 0x9c594cd1) {
    iVar17 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370d94c + 0x370d7fc),0);
    uVar20 = iVar17 == 0;
    bVar23 = true;
    if (!(bool)uVar20) {
      iVar14 = *(int *)(iVar14 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x3c);
      goto LAB_0370d840;
    }
  }
  else if (uVar3 == 0xde4d7796) {
    iVar17 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370d954 + 0x370d828),0);
    uVar20 = iVar17 == 0;
    bVar23 = true;
    if (!(bool)uVar20) {
      iVar14 = *(int *)(iVar14 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x18);
      goto LAB_0370d840;
    }
  }
  else {
    bVar23 = 0xd0137149 < uVar3;
    uVar20 = false;
    if (uVar3 == 0xd013714a) {
      iVar17 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370d934 + 0x370d6c8),0);
      uVar20 = iVar17 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar14 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x14);
        goto LAB_0370d840;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam0370d958 + 0x370d8a8));
  pcVar5 = (char *)func_0x024f83c8();
  uVar10 = func_0x024f83b8(*(undefined4 *)(iRam0370d95c + 0x370d8bc));
  *(undefined4 *)(puVar19 + -0x20) = 0;
  func_0x0509473c(pcVar5,uVar10,pcVar15,0);
  func_0x024f83c0(pcVar5,iVar14);
  uVar26 = func_0x024f83bc();
  iVar17 = (int)((ulonglong)uVar26 >> 0x20);
  iVar2 = (int)uVar26;
  bVar21 = false;
  bVar24 = bVar23;
  if ((bool)uVar20) {
    bVar24 = (char *)0xffffff0f < unaff_r9 || CARRY4((uint)(unaff_r9 + 0xf0),(uint)bVar23);
    pcVar15 = unaff_r9 + bVar23 + 0xf0;
    bVar21 = pcVar15 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xffffffd9 < pcVar5 || CARRY4((uint)(pcVar5 + 0x26),(uint)bVar24);
    unaff_r8 = pcVar5 + bVar24 + 0x26;
    bVar22 = unaff_r8 == (char *)0x0;
  }
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfff57fff < pcVar15 || CARRY4((uint)(pcVar15 + 0xa8000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar15 + bVar23 + 0xa8000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xfff5ffff < pcVar15 || CARRY4((uint)(pcVar15 + 0xa0000),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar15 + bVar24 + 0xa0000 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfff67fff < pcVar15 || CARRY4((uint)(pcVar15 + 0x98000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar15 + bVar23 + 0x98000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xfff6ffff < pcVar15 || CARRY4((uint)(pcVar15 + 0x90000),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar15 + bVar24 + 0x90000 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfff77fff < pcVar15 || CARRY4((uint)(pcVar15 + 0x88000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar15 + bVar23 + 0x88000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xfff7ffff < pcVar15 || CARRY4((uint)(pcVar15 + 0x80000),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar15 + bVar24 + 0x80000 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfff87fff < pcVar15 || CARRY4((uint)(pcVar15 + 0x78000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar15 + bVar23 + 0x78000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xfff8ffff < pcVar15 || CARRY4((uint)(pcVar15 + 0x70000),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar15 + bVar24 + 0x70000 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfff97fff < pcVar15 || CARRY4((uint)(pcVar15 + 0x68000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar15 + bVar23 + 0x68000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xfff9ffff < pcVar15 || CARRY4((uint)(pcVar15 + 0x60000),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar15 + bVar24 + 0x60000 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfffa7fff < pcVar15 || CARRY4((uint)(pcVar15 + 0x58000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar15 + bVar23 + 0x58000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xfffaffff < pcVar15 || CARRY4((uint)(pcVar15 + 0x50000),(uint)bVar24);
  }
  bVar21 = false;
  bVar25 = bVar23;
  if (bVar22 && pcVar15 + bVar24 + 0x50000 == (char *)0x0) {
    bVar25 = (char *)0xffffff1b < pcVar5 || CARRY4((uint)(pcVar5 + 0xe4),(uint)bVar23);
    unaff_r8 = pcVar5 + bVar23 + 0xe4;
    bVar21 = unaff_r8 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar25;
  if (bVar21) {
    bVar23 = (char *)0xfffffc7f < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x380),(uint)bVar25);
    pcVar15 = unaff_r9 + bVar25 + 0x380;
    bVar22 = pcVar15 == (char *)0x0;
  }
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffe2ffff < pcVar15 || CARRY4((uint)(pcVar15 + 0x1d0000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar15 + bVar23 + 0x1d0000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xff43ffff < pcVar15 ||
             CARRY4((uint)(&UNK_00bc0000 + (int)pcVar15),(uint)bVar24);
  }
  bVar22 = bVar22 && &UNK_00bc0000 + (int)(pcVar15 + bVar24) == (undefined *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfff8ffff < pcVar15 || CARRY4((uint)(pcVar15 + 0x70000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar15 + bVar23 + 0x70000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xffb7ffff < pcVar15 || CARRY4((uint)(pcVar15 + 0x480000),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar15 + bVar24 + 0x480000 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffebffff < pcVar15 || CARRY4((uint)(pcVar15 + 0x140000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar15 + bVar23 + 0x140000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xfffbffff < pcVar15 || CARRY4((uint)(pcVar15 + 0x40000),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar15 + bVar24 + 0x40000 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfc6fffff < pcVar15 ||
             CARRY4((uint)(&UNK_03900000 + (int)pcVar15),(uint)bVar23);
  }
  bVar22 = bVar22 && &UNK_03900000 + (int)(pcVar15 + bVar23) == (undefined *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xfecfffff < pcVar15 ||
             CARRY4((uint)(&UNK_01300000 + (int)pcVar15),(uint)bVar24);
  }
  bVar22 = bVar22 && &UNK_01300000 + (int)(pcVar15 + bVar24) == (undefined *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfe2fffff < pcVar15 ||
             CARRY4((uint)(&UNK_01d00000 + (int)pcVar15),(uint)bVar23);
  }
  bVar22 = bVar22 && &UNK_01d00000 + (int)(pcVar15 + bVar23) == (undefined *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xffbfffff < pcVar15 || CARRY4((uint)(pcVar15 + 0x400000),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar15 + bVar24 + 0x400000 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfd5fffff < pcVar15 || CARRY4((uint)(pcVar15 + 0x2a00000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar15 + bVar23 + 0x2a00000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xf13fffff < pcVar15 || CARRY4((uint)(pcVar15 + 0xec00000),(uint)bVar24);
  }
  bVar21 = false;
  bVar25 = bVar23;
  if (bVar22 && pcVar15 + bVar24 + 0xec00000 == (char *)0x0) {
    bVar25 = (char *)0xfc7fffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x3800000),(uint)bVar23);
    unaff_r9 = pcVar5 + bVar23 + 0x3800000;
    bVar21 = unaff_r9 == (char *)0x0;
  }
  if (bVar21) {
    pcVar5 = pcVar15 + bVar25 + 0x110000;
  }
  *(undefined4 *)(puVar19 + -0x24) = 0x370d8e8;
  *(char **)(puVar19 + -0x28) = unaff_r11;
  *(undefined4 *)(puVar19 + -0x2c) = uVar16;
  *(char **)(puVar19 + -0x30) = pcVar15;
  *(char **)(puVar19 + -0x34) = pcVar5;
  *(int *)(puVar19 + -0x38) = iVar14;
  puVar9 = *(undefined4 **)(iVar17 + 0x1c);
  if (puVar9 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam0370de28 + 0x370d988));
    func_0x024f83cc(*(undefined4 *)(iRam0370de2c + 0x370d994));
    func_0x024f83cc(*(undefined4 *)(iRam0370de30 + 0x370d9a0));
    func_0x024f83cc(*(undefined4 *)(iRam0370de34 + 0x370d9ac));
    func_0x024f83cc(*(undefined4 *)(iRam0370de38 + 0x370d9b8));
    func_0x024f83cc(*(undefined4 *)(iRam0370de3c + 0x370d9c4));
    func_0x024f83cc(*(undefined4 *)(iRam0370de40 + 0x370d9d0));
    func_0x024f83cc(*(undefined4 *)(iRam0370de44 + 0x370d9dc));
    func_0x024f83cc(*(undefined4 *)(iRam0370de48 + 0x370d9e8));
    func_0x024f83cc(*(undefined4 *)(iRam0370de4c + 0x370d9f4));
    func_0x024f83cc(*(undefined4 *)(iRam0370de50 + 0x370da00));
    func_0x024f83cc(*(undefined4 *)(iRam0370de54 + 0x370da0c));
    func_0x024f83cc(*(undefined4 *)(iRam0370de58 + 0x370da18));
    func_0x024f83cc(*(undefined4 *)(iRam0370de5c + 0x370da24));
    puVar9 = *(undefined4 **)(iVar17 + 0x1c);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar17);
      puVar9 = *(undefined4 **)(iVar17 + 0x1c);
    }
  }
  uVar16 = *puVar9;
  iVar14 = *(int *)(iVar2 + 0x44);
  if (*(int *)(**(int **)(iRam0370de60 + 0x370da48) + 0x74) == 0) {
    func_0x024f83d8();
  }
  pcVar15 = (char *)func_0x05171434(uVar16,0);
  if (iVar14 == 0) {
    func_0x024f83d4();
  }
  pcVar5 = (char *)func_0x0475399c(iVar14,pcVar15,**(undefined4 **)(iRam0370de64 + 0x370da8c));
  uVar3 = func_0x02965180(pcVar5,0);
  if (uVar3 < 0x70e51c84) {
    if (uVar3 < 0x5c05f5a9) {
      if (uVar3 == 0x17560e62) {
        iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370de78 + 0x370dc34),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar17 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
LAB_0370dd80:
          iVar2 = *(int *)(iVar14 + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x024f83fc(iVar2);
          }
          piVar11 = (int *)0x0;
          if (piVar1 != (int *)0x0) {
            if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
               (piVar11 = piVar1,
               *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
            {
              piVar11 = (int *)0x0;
            }
          }
          return piVar11;
        }
      }
      else if (uVar3 == 0x37674e95) {
        iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370de7c + 0x370dc60),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar17 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x20);
          goto LAB_0370dd80;
        }
      }
      else {
        bVar23 = 0x5c05f5a7 < uVar3;
        uVar20 = false;
        if (uVar3 == 0x5c05f5a8) {
          iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370de68 + 0x370daf8),0);
          uVar20 = iVar14 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(iVar17 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x2c);
            goto LAB_0370dd80;
          }
        }
      }
    }
    else if (uVar3 == 0x5d47dc1f) {
      iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370de88 + 0x370dce4),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar17 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x38);
        goto LAB_0370dd80;
      }
    }
    else if (uVar3 == 0x621d84e1) {
      iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370de84 + 0x370dd10),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar17 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x28);
        goto LAB_0370dd80;
      }
    }
    else {
      bVar23 = 0x70e51c82 < uVar3;
      uVar20 = false;
      if (uVar3 == 0x70e51c83) {
        iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370de6c + 0x370dbac),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar17 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x34);
          goto LAB_0370dd80;
        }
      }
    }
  }
  else if (uVar3 < 0x8cf8968c) {
    if (uVar3 == 0x8cf8968b) {
      iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370de80 + 0x370dc8c),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar17 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x24);
        goto LAB_0370dd80;
      }
    }
    else if (uVar3 == 0x7609ad4f) {
      iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370de90 + 0x370dcb8),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar17 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x40);
        goto LAB_0370dd80;
      }
    }
    else {
      bVar23 = 0x7f709451 < uVar3;
      uVar20 = false;
      if (uVar3 == 0x7f709452) {
        iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370de70 + 0x370db58),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar17 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x30);
          goto LAB_0370dd80;
        }
      }
    }
  }
  else if (uVar3 == 0x9c594cd1) {
    iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370de8c + 0x370dd3c),0);
    uVar20 = iVar14 == 0;
    bVar23 = true;
    if (!(bool)uVar20) {
      iVar14 = *(int *)(iVar17 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x3c);
      goto LAB_0370dd80;
    }
  }
  else if (uVar3 == 0xde4d7796) {
    iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370de94 + 0x370dd68),0);
    uVar20 = iVar14 == 0;
    bVar23 = true;
    if (!(bool)uVar20) {
      iVar14 = *(int *)(iVar17 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x18);
      goto LAB_0370dd80;
    }
  }
  else {
    bVar23 = 0xd0137149 < uVar3;
    uVar20 = false;
    if (uVar3 == 0xd013714a) {
      iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370de74 + 0x370dc08),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar17 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x14);
        goto LAB_0370dd80;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam0370de98 + 0x370dde8));
  pcVar6 = (char *)func_0x024f83c8();
  uVar16 = func_0x024f83b8(*(undefined4 *)(iRam0370de9c + 0x370ddfc));
  *(undefined4 *)(puVar19 + -0x40) = 0;
  func_0x0509473c(pcVar6,uVar16,pcVar5,0);
  func_0x024f83c0(pcVar6,iVar17);
  uVar26 = func_0x024f83bc();
  pcVar12 = (char *)((ulonglong)uVar26 >> 0x20);
  iVar2 = (int)uVar26;
  bVar21 = false;
  bVar24 = bVar23;
  if ((bool)uVar20) {
    bVar24 = (char *)0xffc0ffff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x3f0000),(uint)bVar23);
    pcVar5 = unaff_r9 + bVar23 + 0x3f0000;
    bVar21 = pcVar5 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xffffa7ff < pcVar6 || CARRY4((uint)(pcVar6 + 0x5800),(uint)bVar24);
    pcVar15 = pcVar6 + bVar24 + 0x5800;
    bVar22 = pcVar15 == (char *)0x0;
  }
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xe5ffffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x1a000000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0x1a000000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xe7ffffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x18000000),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar5 + bVar24 + 0x18000000 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xe9ffffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x16000000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0x16000000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xebffffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x14000000),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar5 + bVar24 + 0x14000000 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xedffffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x12000000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0x12000000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xefffffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x10000000),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar5 + bVar24 + 0x10000000 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xf1ffffff < pcVar5 || CARRY4((uint)(pcVar5 + 0xe000000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0xe000000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xf3ffffff < pcVar5 || CARRY4((uint)(pcVar5 + 0xc000000),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar5 + bVar24 + 0xc000000 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xf5ffffff < pcVar5 || CARRY4((uint)(pcVar5 + 0xa000000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0xa000000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xf7ffffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x8000000),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar5 + bVar24 + 0x8000000 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xf9ffffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x6000000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0x6000000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xfbffffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x4000000),(uint)bVar24);
  }
  bVar21 = false;
  bVar25 = bVar23;
  if (bVar22 && pcVar5 + bVar24 + 0x4000000 == (char *)0x0) {
    bVar25 = (char *)0xfffd6fff < pcVar6 ||
             CARRY4((uint)("mono_image_get_filename" + (int)(pcVar6 + 0xe)),(uint)bVar23);
    pcVar15 = "mono_image_get_filename" + (int)(pcVar6 + bVar23 + 0xe);
    bVar21 = pcVar15 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar25;
  if (bVar21) {
    bVar23 = (char *)0xff07ffff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0xf80000),(uint)bVar25);
    pcVar5 = unaff_r9 + bVar25 + 0xf80000;
    bVar22 = pcVar5 == (char *)0x0;
  }
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xcbffffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x34000000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0x34000000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xffffffe < pcVar5 || CARRY4((uint)(pcVar5 + -0xfffffff),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar5 + bVar24 + 0xf0000001 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0x8ffffffc < pcVar5 || CARRY4((uint)(pcVar5 + 0x70000003),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0x70000003 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xdfffffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x20000000),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar5 + bVar24 + 0x20000000 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xbffffff2 < pcVar5 || CARRY4((uint)(pcVar5 + 0x4000000d),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0x4000000d == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xbffffff3 < pcVar5 || CARRY4((uint)(pcVar5 + 0x4000000c),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar5 + bVar24 + 0x4000000c == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xbffffff5 < pcVar5 || CARRY4((uint)(pcVar5 + 0x4000000a),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0x4000000a == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0x3fffffff < pcVar5 || CARRY4((uint)(pcVar5 + -0x40000000),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar5 + bVar24 + 0xc0000000 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xbffffffc < pcVar5 || CARRY4((uint)(pcVar5 + 0x40000003),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0x40000003 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xffffffcb < pcVar5 || CARRY4((uint)(pcVar5 + 0x34),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar5 + bVar24 + 0x34 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0x7ffffff9 < pcVar5 || CARRY4((uint)(pcVar5 + -0x7ffffffa),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0x80000006 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xffffffd4 < pcVar5 || CARRY4((uint)(pcVar5 + 0x2b),(uint)bVar24);
  }
  bVar21 = false;
  bVar25 = bVar23;
  if (bVar22 && pcVar5 + bVar24 + 0x2b == (char *)0x0) {
    bVar25 = (char *)0xfffffff5 < pcVar6 || CARRY4((uint)(pcVar6 + 10),(uint)bVar23);
    unaff_r9 = pcVar6 + bVar23 + 10;
    bVar21 = unaff_r9 == (char *)0x0;
  }
  if (bVar21) {
    pcVar6 = pcVar5 + bVar25 + 0x4000000;
  }
  *(undefined4 *)(puVar19 + -0x44) = 0x370de28;
  *(char **)(puVar19 + -0x48) = unaff_r11;
  *(char **)(puVar19 + -0x4c) = pcVar15;
  *(char **)(puVar19 + -0x50) = pcVar5;
  *(char **)(puVar19 + -0x54) = pcVar6;
  *(int *)(puVar19 + -0x58) = iVar17;
  puVar9 = *(undefined4 **)(pcVar12 + 0x1c);
  if (puVar9 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam0370e458 + 0x370dec8));
    func_0x024f83cc(*(undefined4 *)(iRam0370e45c + 0x370ded4));
    func_0x024f83cc(*(undefined4 *)(iRam0370e460 + 0x370dee0));
    func_0x024f83cc(*(undefined4 *)(iRam0370e464 + 0x370deec));
    func_0x024f83cc(*(undefined4 *)(iRam0370e468 + 0x370def8));
    func_0x024f83cc(*(undefined4 *)(iRam0370e46c + 0x370df04));
    func_0x024f83cc(*(undefined4 *)(iRam0370e470 + 0x370df10));
    func_0x024f83cc(*(undefined4 *)(iRam0370e474 + 0x370df1c));
    func_0x024f83cc(*(undefined4 *)(iRam0370e478 + 0x370df28));
    func_0x024f83cc(*(undefined4 *)(iRam0370e47c + 0x370df34));
    func_0x024f83cc(*(undefined4 *)(iRam0370e480 + 0x370df40));
    func_0x024f83cc(*(undefined4 *)(iRam0370e484 + 0x370df4c));
    func_0x024f83cc(*(undefined4 *)(iRam0370e488 + 0x370df58));
    func_0x024f83cc(*(undefined4 *)(iRam0370e48c + 0x370df64));
    func_0x024f83cc(*(undefined4 *)(iRam0370e490 + 0x370df70));
    func_0x024f83cc(*(undefined4 *)(iRam0370e494 + 0x370df7c));
    func_0x024f83cc(*(undefined4 *)(iRam0370e498 + 0x370df88));
    puVar9 = *(undefined4 **)(pcVar12 + 0x1c);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x024f83f8(pcVar12);
      puVar9 = *(undefined4 **)(pcVar12 + 0x1c);
    }
  }
  uVar16 = *puVar9;
  iVar14 = *(int *)(iVar2 + 0x50);
  if (*(int *)(**(int **)(iRam0370e49c + 0x370dfac) + 0x74) == 0) {
    func_0x024f83d8();
  }
  iVar17 = func_0x05171434(uVar16,0);
  if (iVar14 == 0) {
    func_0x024f83d4();
  }
  pcVar15 = (char *)func_0x0475399c(iVar14,iVar17,**(undefined4 **)(iRam0370e4a0 + 0x370dff0));
  uVar3 = func_0x02965180(pcVar15,0);
  if (uVar3 < 0xc3722751) {
    if (uVar3 < 0x6d552bcf) {
      if (uVar3 == 0x2ded4af4) {
        iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370e4d4 + 0x370e264),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x44);
LAB_0370e3b0:
          iVar2 = *(int *)(iVar14 + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x024f83fc(iVar2);
          }
          piVar11 = (int *)0x0;
          if (piVar1 != (int *)0x0) {
            if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
               (piVar11 = piVar1,
               *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
            {
              piVar11 = (int *)0x0;
            }
          }
          return piVar11;
        }
      }
      else if (uVar3 == 0x2ebf2f09) {
        iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370e4c0 + 0x370e290),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_0370e3b0;
        }
      }
      else {
        bVar23 = 0x6d552bcd < uVar3;
        uVar20 = false;
        if (uVar3 == 0x6d552bce) {
          iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370e4a4 + 0x370e05c),0);
          uVar20 = iVar14 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(pcVar12 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x4c);
            goto LAB_0370e3b0;
          }
        }
      }
    }
    else if (uVar3 < 0x88941076) {
      if (uVar3 == 0x88941075) {
        iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370e4cc + 0x370e2e8),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x38);
          goto LAB_0370e3b0;
        }
      }
      else {
        bVar23 = 0x720dfd0a < uVar3;
        uVar20 = false;
        if (uVar3 == 0x720dfd0b) {
          iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370e4a8 + 0x370e110),0);
          uVar20 = iVar14 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(pcVar12 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x14);
            goto LAB_0370e3b0;
          }
        }
      }
    }
    else if (uVar3 == 0x9b075b93) {
      iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370e4dc + 0x370e36c),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(pcVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_0370e3b0;
      }
    }
    else {
      bVar23 = 0xc372274f < uVar3;
      uVar20 = false;
      if (uVar3 == 0xc3722750) {
        iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370e4ac + 0x370e1ec),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x28);
          goto LAB_0370e3b0;
        }
      }
    }
  }
  else if (uVar3 < 0xc97230c3) {
    if (uVar3 < 0xc47228e4) {
      if (uVar3 == 0xc4176f34) {
        iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370e4c8 + 0x370e2bc),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x34);
          goto LAB_0370e3b0;
        }
      }
      else {
        bVar23 = 0xc47228e2 < uVar3;
        uVar20 = false;
        if (uVar3 == 0xc47228e3) {
          iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370e4b0 + 0x370e0c0),0);
          uVar20 = iVar14 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(pcVar12 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x2c);
            goto LAB_0370e3b0;
          }
        }
      }
    }
    else if (uVar3 == 0xc6722c09) {
      iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370e4c4 + 0x370e340),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(pcVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x24);
        goto LAB_0370e3b0;
      }
    }
    else {
      bVar23 = 0xc97230c1 < uVar3;
      uVar20 = false;
      if (uVar3 == 0xc97230c2) {
        iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370e4b4 + 0x370e1a8),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x30);
          goto LAB_0370e3b0;
        }
      }
    }
  }
  else if (uVar3 < 0xcdf8d5d6) {
    if (uVar3 == 0xcbbdf590) {
      iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370e4d0 + 0x370e314),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(pcVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x40);
        goto LAB_0370e3b0;
      }
    }
    else {
      bVar23 = 0xcdf8d5d4 < uVar3;
      uVar20 = false;
      if (uVar3 == 0xcdf8d5d5) {
        iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370e4b8 + 0x370e164),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x3c);
          goto LAB_0370e3b0;
        }
      }
    }
  }
  else if (uVar3 == 0xf30c65e6) {
    iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370e4d8 + 0x370e398),0);
    uVar20 = iVar14 == 0;
    bVar23 = true;
    if (!(bool)uVar20) {
      iVar14 = *(int *)(pcVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x48);
      goto LAB_0370e3b0;
    }
  }
  else {
    bVar23 = 0xf6c2ac01 < uVar3;
    uVar20 = false;
    if (uVar3 == 0xf6c2ac02) {
      iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370e4bc + 0x370e238),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(pcVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x20);
        goto LAB_0370e3b0;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam0370e4e0 + 0x370e418));
  uVar3 = func_0x024f83c8();
  uVar16 = func_0x024f83b8(*(undefined4 *)(iRam0370e4e4 + 0x370e42c));
  *(undefined4 *)(puVar19 + -0x60) = 0;
  func_0x0509473c(uVar3,uVar16,pcVar15,0);
  func_0x024f83c0(uVar3,pcVar12);
  uVar26 = func_0x024f83bc();
  puVar13 = (undefined *)((ulonglong)uVar26 >> 0x20);
  iVar2 = (int)uVar26;
  bVar21 = false;
  bVar24 = bVar23;
  if ((bool)uVar20) {
    bVar24 = (char *)0x43ffffff < unaff_r9 || CARRY4((uint)(unaff_r9 + -0x44000000),(uint)bVar23);
    pcVar15 = unaff_r9 + bVar23 + 0xbc000000;
    bVar21 = pcVar15 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xff9fffff < uVar3 || CARRY4(uVar3 + 0x600000,(uint)bVar24);
    iVar17 = uVar3 + 0x600000 + (uint)bVar24;
    bVar22 = iVar17 == 0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfffffecf < pcVar15 || CARRY4((uint)(pcVar15 + 0x130),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0x130;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xfffffeef < pcVar15 || CARRY4((uint)(pcVar15 + 0x110),(uint)bVar24);
    unaff_r11 = pcVar15 + bVar24 + 0x110;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffffff0f < pcVar15 || CARRY4((uint)(pcVar15 + 0xf0),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0xf0;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xffffff2f < pcVar15 || CARRY4((uint)(pcVar15 + 0xd0),(uint)bVar24);
    unaff_r11 = pcVar15 + bVar24 + 0xd0;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffffff4f < pcVar15 || CARRY4((uint)(pcVar15 + 0xb0),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0xb0;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xffffff6f < pcVar15 || CARRY4((uint)(pcVar15 + 0x90),(uint)bVar24);
    unaff_r11 = pcVar15 + bVar24 + 0x90;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffffff8f < pcVar15 || CARRY4((uint)(pcVar15 + 0x70),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0x70;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xffffffaf < pcVar15 || CARRY4((uint)(pcVar15 + 0x50),(uint)bVar24);
    unaff_r11 = pcVar15 + bVar24 + 0x50;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffffffcf < pcVar15 || CARRY4((uint)(pcVar15 + 0x30),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0x30;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xffffffef < pcVar15 || CARRY4((uint)(pcVar15 + 0x10),(uint)bVar24);
    unaff_r11 = pcVar15 + bVar24 + 0x10;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfffff03f < pcVar15 || CARRY4((uint)(pcVar15 + 0xfc0),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0xfc0;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xfffff0bf < pcVar15 || CARRY4((uint)(pcVar15 + 0xf40),(uint)bVar24);
    unaff_r11 = pcVar15 + bVar24 + 0xf40;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfffff13f < pcVar15 || CARRY4((uint)(pcVar15 + 0xec0),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0xec0;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xfffff1bf < pcVar15 || CARRY4((uint)(pcVar15 + 0xe40),(uint)bVar24);
    unaff_r11 = pcVar15 + bVar24 + 0xe40;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfffff23f < pcVar15 || CARRY4((uint)(pcVar15 + 0xdc0),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0xdc0;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xfbffffff < uVar3 || CARRY4(uVar3 + 0x4000000,(uint)bVar24);
    iVar17 = uVar3 + 0x4000000 + (uint)bVar24;
    bVar22 = iVar17 == 0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xaffffffd < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x50000002),(uint)bVar23);
    pcVar15 = unaff_r9 + bVar23 + 0x50000002;
    bVar21 = pcVar15 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xffffc5ff < pcVar15 || CARRY4((uint)(pcVar15 + 0x3a00),(uint)bVar24);
    unaff_r11 = pcVar15 + bVar24 + 0x3a00;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfffff3ff < pcVar15 || CARRY4((uint)(pcVar15 + 0xc00),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0xc00;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xffff8fff < pcVar15 || CARRY4((uint)(pcVar15 + 0x7000),(uint)bVar24);
    unaff_r11 = pcVar15 + bVar24 + 0x7000;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffffe4ff < pcVar15 || CARRY4((uint)(pcVar15 + 0x1b00),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0x1b00;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xffff43ff < pcVar15 || CARRY4((uint)(pcVar15 + 0xbc00),(uint)bVar24);
    unaff_r11 = pcVar15 + bVar24 + 0xbc00;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffff33ff < pcVar15 || CARRY4((uint)(pcVar15 + 0xcc00),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0xcc00;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xfffc0fff < pcVar15 || CARRY4((uint)(pcVar15 + 0x3f000),(uint)bVar24);
    unaff_r11 = pcVar15 + bVar24 + 0x3f000;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfffcbfff < pcVar15 ||
             CARRY4((uint)(
                          "_ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcm"
                          + (int)(pcVar15 + 0x25)),(uint)bVar23);
    unaff_r11 = "_ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcm"
                + (int)(pcVar15 + bVar23 + 0x25);
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xfff07fff < pcVar15 || CARRY4((uint)(pcVar15 + 0xf8000),(uint)bVar24);
    unaff_r11 = pcVar15 + bVar24 + 0xf8000;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfffdafff < pcVar15 || CARRY4((uint)(pcVar15 + 0x25000),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0x25000;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xfffe6fff < pcVar15 || CARRY4((uint)(pcVar15 + 0x19000),(uint)bVar24);
    unaff_r11 = pcVar15 + bVar24 + 0x19000;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfffeffff < pcVar15 || CARRY4((uint)(pcVar15 + 0x10000),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0x10000;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xfffc9fff < pcVar15 ||
             CARRY4((uint)(
                          "_ZNKSt6__ndk19money_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_bRNS_8ios_baseEcRKNS_12basic_stringIcS3_NS_9allocatorIcEEEE"
                          + (int)(pcVar15 + 0x19)),(uint)bVar24);
    unaff_r11 = "_ZNKSt6__ndk19money_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_bRNS_8ios_baseEcRKNS_12basic_stringIcS3_NS_9allocatorIcEEEE"
                + (int)(pcVar15 + bVar24 + 0x19);
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfff4ffff < pcVar15 || CARRY4((uint)(pcVar15 + 0xb0000),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0xb0000;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xfff13fff < pcVar15 || CARRY4((uint)(pcVar15 + 0xec000),(uint)bVar24);
    unaff_r11 = pcVar15 + bVar24 + 0xec000;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xffff8fff < uVar3 || CARRY4(uVar3 + 0x7000,(uint)bVar23);
    unaff_r8 = (char *)(uVar3 + 0x7000 + (uint)bVar23);
    bVar21 = unaff_r8 == (char *)0x0;
  }
  if (bVar21) {
    pcVar12 = pcVar15 + bVar24 + 0x3500;
  }
  *(undefined4 *)(puVar19 + -100) = 0x370e458;
  *(char **)(puVar19 + -0x68) = unaff_r11;
  *(int *)(puVar19 + -0x6c) = iVar17;
  *(char **)(puVar19 + -0x70) = pcVar15;
  *(uint *)(puVar19 + -0x74) = uVar3;
  *(char **)(puVar19 + -0x78) = pcVar12;
  puVar9 = *(undefined4 **)(puVar13 + 0x1c);
  if (puVar9 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam0370eaa0 + 0x370e510));
    func_0x024f83cc(*(undefined4 *)(iRam0370eaa4 + 0x370e51c));
    func_0x024f83cc(*(undefined4 *)(iRam0370eaa8 + 0x370e528));
    func_0x024f83cc(*(undefined4 *)(iRam0370eaac + 0x370e534));
    func_0x024f83cc(*(undefined4 *)(iRam0370eab0 + 0x370e540));
    func_0x024f83cc(*(undefined4 *)(iRam0370eab4 + 0x370e54c));
    func_0x024f83cc(*(undefined4 *)(iRam0370eab8 + 0x370e558));
    func_0x024f83cc(*(undefined4 *)(iRam0370eabc + 0x370e564));
    func_0x024f83cc(*(undefined4 *)(iRam0370eac0 + 0x370e570));
    func_0x024f83cc(*(undefined4 *)(iRam0370eac4 + 0x370e57c));
    func_0x024f83cc(*(undefined4 *)(iRam0370eac8 + 0x370e588));
    func_0x024f83cc(*(undefined4 *)(iRam0370eacc + 0x370e594));
    func_0x024f83cc(*(undefined4 *)(iRam0370ead0 + 0x370e5a0));
    func_0x024f83cc(*(undefined4 *)(iRam0370ead4 + 0x370e5ac));
    func_0x024f83cc(*(undefined4 *)(iRam0370ead8 + 0x370e5b8));
    func_0x024f83cc(*(undefined4 *)(iRam0370eadc + 0x370e5c4));
    func_0x024f83cc(*(undefined4 *)(iRam0370eae0 + 0x370e5d0));
    puVar9 = *(undefined4 **)(puVar13 + 0x1c);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x024f83f8(puVar13);
      puVar9 = *(undefined4 **)(puVar13 + 0x1c);
    }
  }
  uVar16 = *puVar9;
  iVar14 = *(int *)(iVar2 + 0x50);
  if (*(int *)(**(int **)(iRam0370eae4 + 0x370e5f4) + 0x74) == 0) {
    func_0x024f83d8();
  }
  pcVar15 = (char *)func_0x05171434(uVar16,0);
  if (iVar14 == 0) {
    func_0x024f83d4();
  }
  pcVar5 = (char *)func_0x0475399c(iVar14,pcVar15,**(undefined4 **)(iRam0370eae8 + 0x370e638));
  uVar3 = func_0x02965180(pcVar5,0);
  if (uVar3 < 0xc3722751) {
    if (uVar3 < 0x6d552bcf) {
      if (uVar3 == 0x2ded4af4) {
        iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370eb1c + 0x370e8ac),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(puVar13 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x44);
LAB_0370e9f8:
          iVar2 = *(int *)(iVar14 + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x024f83fc(iVar2);
          }
          piVar11 = (int *)0x0;
          if (piVar1 != (int *)0x0) {
            if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
               (piVar11 = piVar1,
               *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
            {
              piVar11 = (int *)0x0;
            }
          }
          return piVar11;
        }
      }
      else if (uVar3 == 0x2ebf2f09) {
        iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370eb08 + 0x370e8d8),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(puVar13 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_0370e9f8;
        }
      }
      else {
        bVar23 = 0x6d552bcd < uVar3;
        uVar20 = false;
        if (uVar3 == 0x6d552bce) {
          iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370eaec + 0x370e6a4),0);
          uVar20 = iVar14 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(puVar13 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x4c);
            goto LAB_0370e9f8;
          }
        }
      }
    }
    else if (uVar3 < 0x88941076) {
      if (uVar3 == 0x88941075) {
        iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370eb14 + 0x370e930),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(puVar13 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x38);
          goto LAB_0370e9f8;
        }
      }
      else {
        bVar23 = 0x720dfd0a < uVar3;
        uVar20 = false;
        if (uVar3 == 0x720dfd0b) {
          iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370eaf0 + 0x370e758),0);
          uVar20 = iVar14 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(puVar13 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x14);
            goto LAB_0370e9f8;
          }
        }
      }
    }
    else if (uVar3 == 0x9b075b93) {
      iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370eb24 + 0x370e9b4),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(puVar13 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_0370e9f8;
      }
    }
    else {
      bVar23 = 0xc372274f < uVar3;
      uVar20 = false;
      if (uVar3 == 0xc3722750) {
        iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370eaf4 + 0x370e834),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(puVar13 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x28);
          goto LAB_0370e9f8;
        }
      }
    }
  }
  else if (uVar3 < 0xc97230c3) {
    if (uVar3 < 0xc47228e4) {
      if (uVar3 == 0xc4176f34) {
        iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370eb10 + 0x370e904),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(puVar13 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x34);
          goto LAB_0370e9f8;
        }
      }
      else {
        bVar23 = 0xc47228e2 < uVar3;
        uVar20 = false;
        if (uVar3 == 0xc47228e3) {
          iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370eaf8 + 0x370e708),0);
          uVar20 = iVar14 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(puVar13 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x2c);
            goto LAB_0370e9f8;
          }
        }
      }
    }
    else if (uVar3 == 0xc6722c09) {
      iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370eb0c + 0x370e988),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(puVar13 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x24);
        goto LAB_0370e9f8;
      }
    }
    else {
      bVar23 = 0xc97230c1 < uVar3;
      uVar20 = false;
      if (uVar3 == 0xc97230c2) {
        iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370eafc + 0x370e7f0),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(puVar13 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x30);
          goto LAB_0370e9f8;
        }
      }
    }
  }
  else if (uVar3 < 0xcdf8d5d6) {
    if (uVar3 == 0xcbbdf590) {
      iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370eb18 + 0x370e95c),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(puVar13 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x40);
        goto LAB_0370e9f8;
      }
    }
    else {
      bVar23 = 0xcdf8d5d4 < uVar3;
      uVar20 = false;
      if (uVar3 == 0xcdf8d5d5) {
        iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370eb00 + 0x370e7ac),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(puVar13 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x3c);
          goto LAB_0370e9f8;
        }
      }
    }
  }
  else if (uVar3 == 0xf30c65e6) {
    iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370eb20 + 0x370e9e0),0);
    uVar20 = iVar14 == 0;
    bVar23 = true;
    if (!(bool)uVar20) {
      iVar14 = *(int *)(puVar13 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x48);
      goto LAB_0370e9f8;
    }
  }
  else {
    bVar23 = 0xf6c2ac01 < uVar3;
    uVar20 = false;
    if (uVar3 == 0xf6c2ac02) {
      iVar14 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370eb04 + 0x370e880),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(puVar13 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x20);
        goto LAB_0370e9f8;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam0370eb28 + 0x370ea60));
  pcVar6 = (char *)func_0x024f83c8();
  uVar16 = func_0x024f83b8(*(undefined4 *)(iRam0370eb2c + 0x370ea74));
  *(undefined4 *)(puVar19 + -0x80) = 0;
  func_0x0509473c(pcVar6,uVar16,pcVar5,0);
  func_0x024f83c0(pcVar6,puVar13);
  uVar26 = func_0x024f83bc();
  pcVar12 = (char *)((ulonglong)uVar26 >> 0x20);
  iVar2 = (int)uVar26;
  bVar21 = false;
  bVar24 = bVar23;
  if ((bool)uVar20) {
    bVar24 = (char *)0xfffff8bf < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x740),(uint)bVar23);
    pcVar6 = unaff_r9 + bVar23 + 0x740;
    bVar21 = pcVar6 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xffffff2f < pcVar6 || CARRY4((uint)(pcVar6 + 0xd0),(uint)bVar24);
    pcVar15 = pcVar6 + bVar24 + 0xd0;
    bVar22 = pcVar15 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfffeffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x10000),(uint)bVar23);
    unaff_r11 = pcVar5 + bVar23 + 0x10000;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xff03ffff < pcVar5 || CARRY4((uint)(pcVar5 + 0xfc0000),(uint)bVar24);
    unaff_r11 = pcVar5 + bVar24 + 0xfc0000;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xff0bffff < pcVar5 || CARRY4((uint)(&UNK_00f40000 + (int)pcVar5),(uint)bVar23)
    ;
    unaff_r11 = &UNK_00f40000 + (int)(pcVar5 + bVar23);
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xff13ffff < pcVar5 || CARRY4((uint)(&UNK_00ec0000 + (int)pcVar5),(uint)bVar24)
    ;
    unaff_r11 = &UNK_00ec0000 + (int)(pcVar5 + bVar24);
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xff1bffff < pcVar5 || CARRY4((uint)(&UNK_00e40000 + (int)pcVar5),(uint)bVar23)
    ;
    unaff_r11 = &UNK_00e40000 + (int)(pcVar5 + bVar23);
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xff23ffff < pcVar5 || CARRY4((uint)(&UNK_00dc0000 + (int)pcVar5),(uint)bVar24)
    ;
    unaff_r11 = &UNK_00dc0000 + (int)(pcVar5 + bVar24);
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xff2bffff < pcVar5 || CARRY4((uint)(&UNK_00d40000 + (int)pcVar5),(uint)bVar23)
    ;
    unaff_r11 = &UNK_00d40000 + (int)(pcVar5 + bVar23);
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xff33ffff < pcVar5 || CARRY4((uint)(&UNK_00cc0000 + (int)pcVar5),(uint)bVar24)
    ;
    unaff_r11 = &UNK_00cc0000 + (int)(pcVar5 + bVar24);
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xff3bffff < pcVar5 || CARRY4((uint)(&UNK_00c40000 + (int)pcVar5),(uint)bVar23)
    ;
    unaff_r11 = &UNK_00c40000 + (int)(pcVar5 + bVar23);
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xff43ffff < pcVar5 || CARRY4((uint)(&UNK_00bc0000 + (int)pcVar5),(uint)bVar24)
    ;
    unaff_r11 = &UNK_00bc0000 + (int)(pcVar5 + bVar24);
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xff4bffff < pcVar5 || CARRY4((uint)(&UNK_00b40000 + (int)pcVar5),(uint)bVar23)
    ;
    unaff_r11 = &UNK_00b40000 + (int)(pcVar5 + bVar23);
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xff53ffff < pcVar5 || CARRY4((uint)(&UNK_00ac0000 + (int)pcVar5),(uint)bVar24)
    ;
    unaff_r11 = &UNK_00ac0000 + (int)(pcVar5 + bVar24);
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xff5bffff < pcVar5 || CARRY4((uint)(&UNK_00a40000 + (int)pcVar5),(uint)bVar23)
    ;
    unaff_r11 = &UNK_00a40000 + (int)(pcVar5 + bVar23);
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xff63ffff < pcVar5 || CARRY4((uint)(&UNK_009c0000 + (int)pcVar5),(uint)bVar24)
    ;
    unaff_r11 = &UNK_009c0000 + (int)(pcVar5 + bVar24);
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xff6bffff < pcVar5 || CARRY4((uint)(&UNK_00940000 + (int)pcVar5),(uint)bVar23)
    ;
    unaff_r11 = &UNK_00940000 + (int)(pcVar5 + bVar23);
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xfffffc1f < pcVar6 || CARRY4((uint)(pcVar6 + 0x3e0),(uint)bVar24);
    pcVar5 = pcVar6 + bVar24 + 0x3e0;
    bVar22 = pcVar5 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffffecff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x1300),(uint)bVar23);
    pcVar6 = unaff_r9 + bVar23 + 0x1300;
    bVar21 = pcVar6 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xfd7fffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x2800000),(uint)bVar24);
    unaff_r11 = pcVar5 + bVar24 + 0x2800000;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xf17fffff < pcVar5 || CARRY4((uint)(pcVar5 + 0xe800000),(uint)bVar23);
    unaff_r11 = pcVar5 + bVar23 + 0xe800000;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xfd7fffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x2800000),(uint)bVar24);
    unaff_r11 = pcVar5 + bVar24 + 0x2800000;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xff6fffff < pcVar5 || CARRY4((uint)(&UNK_00900000 + (int)pcVar5),(uint)bVar23)
    ;
    unaff_r11 = &UNK_00900000 + (int)(pcVar5 + bVar23);
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xf8bfffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x7400000),(uint)bVar24);
    unaff_r11 = pcVar5 + bVar24 + 0x7400000;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xf7bfffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x8400000),(uint)bVar23);
    unaff_r11 = pcVar5 + bVar23 + 0x8400000;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xd2ffffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x2d000000),(uint)bVar24);
    unaff_r11 = pcVar5 + bVar24 + 0x2d000000;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xddffffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x22000000),(uint)bVar23);
    unaff_r11 = pcVar5 + bVar23 + 0x22000000;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0x4fffffff < pcVar5 || CARRY4((uint)(pcVar5 + -0x50000000),(uint)bVar24);
    unaff_r11 = pcVar5 + bVar24 + 0xb0000000;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xecffffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x13000000),(uint)bVar23);
    unaff_r11 = pcVar5 + bVar23 + 0x13000000;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xf8ffffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x7000000),(uint)bVar24);
    unaff_r11 = pcVar5 + bVar24 + 0x7000000;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0x7ffffff < pcVar5 || CARRY4((uint)(pcVar5 + -0x8000000),(uint)bVar23);
    unaff_r11 = pcVar5 + bVar23 + 0xf8000000;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xdbffffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x24000000),(uint)bVar24);
    unaff_r11 = pcVar5 + bVar24 + 0x24000000;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0x97ffffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x68000000),(uint)bVar23);
    unaff_r11 = pcVar5 + bVar23 + 0x68000000;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0x5bffffff < pcVar5 || CARRY4((uint)(pcVar5 + -0x5c000000),(uint)bVar24);
    unaff_r11 = pcVar5 + bVar24 + 0xa4000000;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfd7fffff < pcVar6 || CARRY4((uint)(pcVar6 + 0x2800000),(uint)bVar23);
    unaff_r8 = pcVar6 + bVar23 + 0x2800000;
    bVar21 = unaff_r8 == (char *)0x0;
  }
  if (bVar21) {
    puVar13 = &UNK_02300000 + (int)(pcVar5 + bVar24);
  }
  *(undefined4 *)(puVar19 + -0x84) = 0x370eaa0;
  *(char **)(puVar19 + -0x88) = unaff_r11;
  *(char **)(puVar19 + -0x8c) = pcVar15;
  *(char **)(puVar19 + -0x90) = pcVar5;
  *(char **)(puVar19 + -0x94) = pcVar6;
  *(undefined **)(puVar19 + -0x98) = puVar13;
  puVar9 = *(undefined4 **)(pcVar12 + 0x1c);
  if (puVar9 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam0370effc + 0x370eb58));
    func_0x024f83cc(*(undefined4 *)(iRam0370f000 + 0x370eb64));
    func_0x024f83cc(*(undefined4 *)(iRam0370f004 + 0x370eb70));
    func_0x024f83cc(*(undefined4 *)(iRam0370f008 + 0x370eb7c));
    func_0x024f83cc(*(undefined4 *)(iRam0370f00c + 0x370eb88));
    func_0x024f83cc(*(undefined4 *)(iRam0370f010 + 0x370eb94));
    func_0x024f83cc(*(undefined4 *)(iRam0370f014 + 0x370eba0));
    func_0x024f83cc(*(undefined4 *)(iRam0370f018 + 0x370ebac));
    func_0x024f83cc(*(undefined4 *)(iRam0370f01c + 0x370ebb8));
    func_0x024f83cc(*(undefined4 *)(iRam0370f020 + 0x370ebc4));
    func_0x024f83cc(*(undefined4 *)(iRam0370f024 + 0x370ebd0));
    func_0x024f83cc(*(undefined4 *)(iRam0370f028 + 0x370ebdc));
    func_0x024f83cc(*(undefined4 *)(iRam0370f02c + 0x370ebe8));
    func_0x024f83cc(*(undefined4 *)(iRam0370f030 + 0x370ebf4));
    puVar9 = *(undefined4 **)(pcVar12 + 0x1c);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x024f83f8(pcVar12);
      puVar9 = *(undefined4 **)(pcVar12 + 0x1c);
    }
  }
  uVar16 = *puVar9;
  iVar14 = *(int *)(iVar2 + 0x44);
  if (*(int *)(**(int **)(iRam0370f034 + 0x370ec18) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar16 = func_0x05171434(uVar16,0);
  if (iVar14 == 0) {
    func_0x024f83d4();
  }
  pcVar15 = (char *)func_0x0475399c(iVar14,uVar16,**(undefined4 **)(iRam0370f038 + 0x370ec5c));
  uVar3 = func_0x02965180(pcVar15,0);
  if (uVar3 < 0xa9d6e18d) {
    if (uVar3 < 0x5470985c) {
      if (uVar3 == 0x2ff386a5) {
        iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370f058 + 0x370ee08),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x2c);
LAB_0370ef54:
          iVar2 = *(int *)(iVar14 + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x024f83fc(iVar2);
          }
          piVar11 = (int *)0x0;
          if (piVar1 != (int *)0x0) {
            if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
               (piVar11 = piVar1,
               *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
            {
              piVar11 = (int *)0x0;
            }
          }
          return piVar11;
        }
      }
      else if (uVar3 == 0x422e10b8) {
        iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370f060 + 0x370ee34),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x34);
          goto LAB_0370ef54;
        }
      }
      else {
        bVar23 = 0x5470985a < uVar3;
        uVar20 = false;
        if (uVar3 == 0x5470985b) {
          iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370f03c + 0x370ecc8),0);
          uVar20 = iVar14 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(pcVar12 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x18);
            goto LAB_0370ef54;
          }
        }
      }
    }
    else if (uVar3 == 0x822195a3) {
      iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370f068 + 0x370eeb8),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(pcVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x14);
        goto LAB_0370ef54;
      }
    }
    else if (uVar3 == 0x9bda6746) {
      iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370f050 + 0x370eee4),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(pcVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x24);
        goto LAB_0370ef54;
      }
    }
    else {
      bVar23 = 0xa9d6e18b < uVar3;
      uVar20 = false;
      if (uVar3 == 0xa9d6e18c) {
        iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370f040 + 0x370ed80),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x38);
          goto LAB_0370ef54;
        }
      }
    }
  }
  else if (uVar3 < 0xc5b76eff) {
    if (uVar3 == 0xadbdc4cd) {
      iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370f05c + 0x370ee60),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(pcVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x30);
        goto LAB_0370ef54;
      }
    }
    else if (uVar3 == 0xbfd53dc1) {
      iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370f04c + 0x370ee8c),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(pcVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x1c);
        goto LAB_0370ef54;
      }
    }
    else {
      bVar23 = 0xc5b76efd < uVar3;
      uVar20 = false;
      if (uVar3 == 0xc5b76efe) {
        iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370f044 + 0x370ed2c),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x3c);
          goto LAB_0370ef54;
        }
      }
    }
  }
  else if (uVar3 == 0xc64b975c) {
    iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370f054 + 0x370ef10),0);
    uVar20 = iVar14 == 0;
    bVar23 = true;
    if (!(bool)uVar20) {
      iVar14 = *(int *)(pcVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x28);
      goto LAB_0370ef54;
    }
  }
  else if (uVar3 == 0xef2136b6) {
    iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370f064 + 0x370ef3c),0);
    uVar20 = iVar14 == 0;
    bVar23 = true;
    if (!(bool)uVar20) {
      iVar14 = *(int *)(pcVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x40);
      goto LAB_0370ef54;
    }
  }
  else {
    bVar23 = 0xfdb518b9 < uVar3;
    uVar20 = false;
    if (uVar3 == 0xfdb518ba) {
      iVar14 = func_0x04f57738(pcVar15,**(undefined4 **)(iRam0370f048 + 0x370eddc),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(pcVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x20);
        goto LAB_0370ef54;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam0370f06c + 0x370efbc));
  pcVar5 = (char *)func_0x024f83c8();
  uVar10 = func_0x024f83b8(*(undefined4 *)(iRam0370f070 + 0x370efd0));
  *(undefined4 *)(puVar19 + -0xa0) = 0;
  func_0x0509473c(pcVar5,uVar10,pcVar15,0);
  func_0x024f83c0(pcVar5,pcVar12);
  uVar26 = func_0x024f83bc();
  iVar14 = (int)((ulonglong)uVar26 >> 0x20);
  iVar2 = (int)uVar26;
  bVar21 = false;
  bVar24 = bVar23;
  if ((bool)uVar20) {
    bVar24 = (char *)0xffd3ffff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x2c0000),(uint)bVar23);
    pcVar5 = unaff_r9 + bVar23 + 0x2c0000;
    bVar21 = pcVar5 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xfff77fff < pcVar5 || CARRY4((uint)(pcVar5 + 0x88000),(uint)bVar24);
    pcVar15 = pcVar5 + bVar24 + 0x88000;
    bVar22 = pcVar15 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffffffcd < pcVar15 || CARRY4((uint)(pcVar15 + 0x32),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0x32;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xffffffcf < pcVar15 || CARRY4((uint)(pcVar15 + 0x30),(uint)bVar24);
    unaff_r11 = pcVar15 + bVar24 + 0x30;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffffffd1 < pcVar15 || CARRY4((uint)(pcVar15 + 0x2e),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0x2e;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xffffffd3 < pcVar15 || CARRY4((uint)(pcVar15 + 0x2c),(uint)bVar24);
    unaff_r11 = pcVar15 + bVar24 + 0x2c;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffffffd5 < pcVar15 || CARRY4((uint)(pcVar15 + 0x2a),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0x2a;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xffffffd7 < pcVar15 || CARRY4((uint)(pcVar15 + 0x28),(uint)bVar24);
    unaff_r11 = pcVar15 + bVar24 + 0x28;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffffffd9 < pcVar15 || CARRY4((uint)(pcVar15 + 0x26),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0x26;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xffffffdb < pcVar15 || CARRY4((uint)(pcVar15 + 0x24),(uint)bVar24);
    unaff_r11 = pcVar15 + bVar24 + 0x24;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffffffdd < pcVar15 || CARRY4((uint)(pcVar15 + 0x22),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0x22;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xffffffdf < pcVar15 || CARRY4((uint)(pcVar15 + 0x20),(uint)bVar24);
    unaff_r11 = pcVar15 + bVar24 + 0x20;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffffffe1 < pcVar15 || CARRY4((uint)(pcVar15 + 0x1e),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0x1e;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xffffffe3 < pcVar15 || CARRY4((uint)(pcVar15 + 0x1c),(uint)bVar24);
    unaff_r11 = pcVar15 + bVar24 + 0x1c;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffcaffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x350000),(uint)bVar23);
    pcVar15 = pcVar5 + bVar23 + 0x350000;
    bVar21 = pcVar15 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xff5fffff < unaff_r9 ||
             CARRY4((uint)(&UNK_00a00000 + (int)unaff_r9),(uint)bVar24);
    pcVar5 = &UNK_00a00000 + (int)(unaff_r9 + bVar24);
    bVar22 = pcVar5 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffffff87 < pcVar15 || CARRY4((uint)(pcVar15 + 0x78),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0x78;
    bVar21 = unaff_r11 == (char *)0x0;
  }
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xfffffcbf < pcVar15 || CARRY4((uint)(pcVar15 + 0x340),(uint)bVar24);
  }
  bVar22 = false;
  bVar25 = bVar23;
  if (bVar21 && pcVar15 + bVar24 + 0x340 == (char *)0x0) {
    bVar25 = (char *)0xffffffef < pcVar15 || CARRY4((uint)(pcVar15 + 0x10),(uint)bVar23);
    unaff_r11 = pcVar15 + bVar23 + 0x10;
    bVar22 = unaff_r11 == (char *)0x0;
  }
  bVar23 = bVar25;
  if (bVar22) {
    bVar23 = (char *)0xfffffe4f < pcVar15 || CARRY4((uint)(pcVar15 + 0x1b0),(uint)bVar25);
  }
  bVar22 = bVar22 && pcVar15 + bVar25 + 0x1b0 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfffff2ff < pcVar15 || CARRY4((uint)(pcVar15 + 0xd00),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar15 + bVar23 + 0xd00 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xfffff8bf < pcVar15 || CARRY4((uint)(pcVar15 + 0x740),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar15 + bVar24 + 0x740 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfffffaff < pcVar15 || CARRY4((uint)(pcVar15 + 0x500),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar15 + bVar23 + 0x500 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xffffff3f < pcVar15 || CARRY4((uint)(pcVar15 + 0xc0),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar15 + bVar24 + 0xc0 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffffffef < pcVar15 || CARRY4((uint)(pcVar15 + 0x10),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar15 + bVar23 + 0x10 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xffffff7f < pcVar15 || CARRY4((uint)(pcVar15 + 0x80),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar15 + bVar24 + 0x80 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfffffeff < pcVar15 || CARRY4((uint)(pcVar15 + 0x100),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar15 + bVar23 + 0x100 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xfffff73f < pcVar15 || CARRY4((uint)(pcVar15 + 0x8c0),(uint)bVar24);
  }
  bVar21 = false;
  bVar25 = bVar23;
  if (bVar22 && pcVar15 + bVar24 + 0x8c0 == (char *)0x0) {
    bVar25 = (char *)0xffffff33 < pcVar5 || CARRY4((uint)(pcVar5 + 0xcc),(uint)bVar23);
    unaff_r8 = pcVar5 + bVar23 + 0xcc;
    bVar21 = unaff_r8 == (char *)0x0;
  }
  if (bVar21) {
    pcVar12 = pcVar15 + bVar25 + 3;
  }
  *(undefined4 *)(puVar19 + -0xa4) = 0x370effc;
  *(char **)(puVar19 + -0xa8) = unaff_r11;
  *(undefined4 *)(puVar19 + -0xac) = uVar16;
  *(char **)(puVar19 + -0xb0) = pcVar15;
  *(char **)(puVar19 + -0xb4) = pcVar5;
  *(char **)(puVar19 + -0xb8) = pcVar12;
  puVar9 = *(undefined4 **)(iVar14 + 0x1c);
  if (puVar9 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam0370f540 + 0x370f09c));
    func_0x024f83cc(*(undefined4 *)(iRam0370f544 + 0x370f0a8));
    func_0x024f83cc(*(undefined4 *)(iRam0370f548 + 0x370f0b4));
    func_0x024f83cc(*(undefined4 *)(iRam0370f54c + 0x370f0c0));
    func_0x024f83cc(*(undefined4 *)(iRam0370f550 + 0x370f0cc));
    func_0x024f83cc(*(undefined4 *)(iRam0370f554 + 0x370f0d8));
    func_0x024f83cc(*(undefined4 *)(iRam0370f558 + 0x370f0e4));
    func_0x024f83cc(*(undefined4 *)(iRam0370f55c + 0x370f0f0));
    func_0x024f83cc(*(undefined4 *)(iRam0370f560 + 0x370f0fc));
    func_0x024f83cc(*(undefined4 *)(iRam0370f564 + 0x370f108));
    func_0x024f83cc(*(undefined4 *)(iRam0370f568 + 0x370f114));
    func_0x024f83cc(*(undefined4 *)(iRam0370f56c + 0x370f120));
    func_0x024f83cc(*(undefined4 *)(iRam0370f570 + 0x370f12c));
    func_0x024f83cc(*(undefined4 *)(iRam0370f574 + 0x370f138));
    puVar9 = *(undefined4 **)(iVar14 + 0x1c);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar14);
      puVar9 = *(undefined4 **)(iVar14 + 0x1c);
    }
  }
  uVar16 = *puVar9;
  iVar17 = *(int *)(iVar2 + 0x44);
  if (*(int *)(**(int **)(iRam0370f578 + 0x370f15c) + 0x74) == 0) {
    func_0x024f83d8();
  }
  pcVar15 = (char *)func_0x05171434(uVar16,0);
  if (iVar17 == 0) {
    func_0x024f83d4();
  }
  pcVar5 = (char *)func_0x0475399c(iVar17,pcVar15,**(undefined4 **)(iRam0370f57c + 0x370f1a0));
  uVar3 = func_0x02965180(pcVar5,0);
  if (uVar3 < 0xa9d6e18d) {
    if (uVar3 < 0x5470985c) {
      if (uVar3 == 0x2ff386a5) {
        iVar17 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370f59c + 0x370f34c),0);
        uVar20 = iVar17 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar14 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x2c);
LAB_0370f498:
          iVar2 = *(int *)(iVar14 + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x024f83fc(iVar2);
          }
          piVar11 = (int *)0x0;
          if (piVar1 != (int *)0x0) {
            if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
               (piVar11 = piVar1,
               *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
            {
              piVar11 = (int *)0x0;
            }
          }
          return piVar11;
        }
      }
      else if (uVar3 == 0x422e10b8) {
        iVar17 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370f5a4 + 0x370f378),0);
        uVar20 = iVar17 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar14 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x34);
          goto LAB_0370f498;
        }
      }
      else {
        bVar23 = 0x5470985a < uVar3;
        uVar20 = false;
        if (uVar3 == 0x5470985b) {
          iVar17 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370f580 + 0x370f20c),0);
          uVar20 = iVar17 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(iVar14 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x18);
            goto LAB_0370f498;
          }
        }
      }
    }
    else if (uVar3 == 0x822195a3) {
      iVar17 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370f5ac + 0x370f3fc),0);
      uVar20 = iVar17 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar14 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x14);
        goto LAB_0370f498;
      }
    }
    else if (uVar3 == 0x9bda6746) {
      iVar17 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370f594 + 0x370f428),0);
      uVar20 = iVar17 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar14 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x24);
        goto LAB_0370f498;
      }
    }
    else {
      bVar23 = 0xa9d6e18b < uVar3;
      uVar20 = false;
      if (uVar3 == 0xa9d6e18c) {
        iVar17 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370f584 + 0x370f2c4),0);
        uVar20 = iVar17 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar14 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x38);
          goto LAB_0370f498;
        }
      }
    }
  }
  else if (uVar3 < 0xc5b76eff) {
    if (uVar3 == 0xadbdc4cd) {
      iVar17 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370f5a0 + 0x370f3a4),0);
      uVar20 = iVar17 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar14 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x30);
        goto LAB_0370f498;
      }
    }
    else if (uVar3 == 0xbfd53dc1) {
      iVar17 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370f590 + 0x370f3d0),0);
      uVar20 = iVar17 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar14 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x1c);
        goto LAB_0370f498;
      }
    }
    else {
      bVar23 = 0xc5b76efd < uVar3;
      uVar20 = false;
      if (uVar3 == 0xc5b76efe) {
        iVar17 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370f588 + 0x370f270),0);
        uVar20 = iVar17 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar14 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x3c);
          goto LAB_0370f498;
        }
      }
    }
  }
  else if (uVar3 == 0xc64b975c) {
    iVar17 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370f598 + 0x370f454),0);
    uVar20 = iVar17 == 0;
    bVar23 = true;
    if (!(bool)uVar20) {
      iVar14 = *(int *)(iVar14 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x28);
      goto LAB_0370f498;
    }
  }
  else if (uVar3 == 0xef2136b6) {
    iVar17 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370f5a8 + 0x370f480),0);
    uVar20 = iVar17 == 0;
    bVar23 = true;
    if (!(bool)uVar20) {
      iVar14 = *(int *)(iVar14 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x40);
      goto LAB_0370f498;
    }
  }
  else {
    bVar23 = 0xfdb518b9 < uVar3;
    uVar20 = false;
    if (uVar3 == 0xfdb518ba) {
      iVar17 = func_0x04f57738(pcVar5,**(undefined4 **)(iRam0370f58c + 0x370f320),0);
      uVar20 = iVar17 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar14 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x20);
        goto LAB_0370f498;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam0370f5b0 + 0x370f500));
  pcVar6 = (char *)func_0x024f83c8();
  uVar16 = func_0x024f83b8(*(undefined4 *)(iRam0370f5b4 + 0x370f514));
  *(undefined4 *)(puVar19 + -0xc0) = 0;
  func_0x0509473c(pcVar6,uVar16,pcVar5,0);
  func_0x024f83c0(pcVar6,iVar14);
  uVar26 = func_0x024f83bc();
  pcVar12 = (char *)((ulonglong)uVar26 >> 0x20);
  iVar2 = (int)uVar26;
  bVar21 = false;
  bVar24 = bVar23;
  if ((bool)uVar20) {
    bVar24 = (char *)0x7ffffff1 < unaff_r9 || CARRY4((uint)(unaff_r9 + -0x7ffffff2),(uint)bVar23);
    pcVar6 = unaff_r9 + bVar23 + 0x8000000e;
    bVar21 = pcVar6 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xeeffffff < pcVar6 || CARRY4((uint)(pcVar6 + 0x11000000),(uint)bVar24);
    pcVar5 = pcVar6 + bVar24 + 0x11000000;
    bVar22 = pcVar5 == (char *)0x0;
  }
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffff7bff < pcVar5 || CARRY4((uint)(pcVar5 + 0x8400),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0x8400 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xffff83ff < pcVar5 || CARRY4((uint)(pcVar5 + 0x7c00),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar5 + bVar24 + 0x7c00 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffff8bff < pcVar5 || CARRY4((uint)(pcVar5 + 0x7400),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0x7400 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xffff93ff < pcVar5 || CARRY4((uint)(pcVar5 + 0x6c00),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar5 + bVar24 + 0x6c00 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffff9bff < pcVar5 || CARRY4((uint)(pcVar5 + 0x6400),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0x6400 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xffffa3ff < pcVar5 || CARRY4((uint)(pcVar5 + 0x5c00),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar5 + bVar24 + 0x5c00 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffffabff < pcVar5 || CARRY4((uint)(pcVar5 + 0x5400),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0x5400 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xffffb3ff < pcVar5 || CARRY4((uint)(pcVar5 + 0x4c00),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar5 + bVar24 + 0x4c00 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffffbbff < pcVar5 || CARRY4((uint)(pcVar5 + 0x4400),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0x4400 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xffffc3ff < pcVar5 || CARRY4((uint)(pcVar5 + 0x3c00),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar5 + bVar24 + 0x3c00 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffffcbff < pcVar5 || CARRY4((uint)(pcVar5 + 0x3400),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0x3400 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xffffd3ff < pcVar5 || CARRY4((uint)(pcVar5 + 0x2c00),(uint)bVar24);
  }
  bVar21 = false;
  bVar25 = bVar23;
  if (bVar22 && pcVar5 + bVar24 + 0x2c00 == (char *)0x0) {
    bVar25 = (char *)0x6fffffff < pcVar6 || CARRY4((uint)(pcVar6 + -0x70000000),(uint)bVar23);
    pcVar5 = pcVar6 + bVar23 + 0x90000000;
    bVar21 = pcVar5 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar25;
  if (bVar21) {
    bVar23 = (char *)0xffffffc6 < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x39),(uint)bVar25);
    pcVar6 = unaff_r9 + bVar25 + 0x39;
    bVar22 = pcVar6 == (char *)0x0;
  }
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffff2fff < pcVar5 || CARRY4((uint)(pcVar5 + 0xd000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0xd000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xfff73fff < pcVar5 || CARRY4((uint)(pcVar5 + 0x8c000),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar5 + bVar24 + 0x8c000 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfff33fff < pcVar5 || CARRY4((uint)(pcVar5 + 0xcc000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0xcc000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xfffd7fff < pcVar5 ||
             CARRY4((uint)("il2cpp_method_is_instance" + (int)(pcVar5 + 2)),(uint)bVar24);
  }
  bVar22 = bVar22 && "il2cpp_method_is_instance" + (int)(pcVar5 + bVar24 + 2) == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffdcffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x230000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0x230000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xfff3ffff < pcVar5 || CARRY4((uint)(pcVar5 + 0xc0000),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar5 + bVar24 + 0xc0000 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfffcffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x30000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0x30000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xffc4ffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x3b0000),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar5 + bVar24 + 0x3b0000 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xffcfffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x300000),(uint)bVar23);
  }
  bVar22 = bVar22 && pcVar5 + bVar23 + 0x300000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xffc8ffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x370000),(uint)bVar24);
  }
  bVar22 = bVar22 && pcVar5 + bVar24 + 0x370000 == (char *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xff33ffff < pcVar5 || CARRY4((uint)(&UNK_00cc0000 + (int)pcVar5),(uint)bVar23)
    ;
  }
  bVar22 = bVar22 && &UNK_00cc0000 + (int)(pcVar5 + bVar23) == (undefined *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (char *)0xffedffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x120000),(uint)bVar24);
  }
  if (bVar22 && pcVar5 + bVar24 + 0x120000 == (char *)0x0) {
    pcVar15 = pcVar6 + bVar23 + 0x22000;
  }
  *(undefined4 *)(puVar19 + -0xc4) = 0x370f540;
  *(char **)(puVar19 + -200) = unaff_r11;
  *(char **)(puVar19 + -0xcc) = pcVar15;
  *(char **)(puVar19 + -0xd0) = pcVar5;
  *(char **)(puVar19 + -0xd4) = pcVar6;
  *(int *)(puVar19 + -0xd8) = iVar14;
  puVar9 = *(undefined4 **)(pcVar12 + 0x1c);
  if (puVar9 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam0370fb74 + 0x370f5e0));
    func_0x024f83cc(*(undefined4 *)(iRam0370fb78 + 0x370f5ec));
    func_0x024f83cc(*(undefined4 *)(iRam0370fb7c + 0x370f5f8));
    func_0x024f83cc(*(undefined4 *)(iRam0370fb80 + 0x370f604));
    func_0x024f83cc(*(undefined4 *)(iRam0370fb84 + 0x370f610));
    func_0x024f83cc(*(undefined4 *)(iRam0370fb88 + 0x370f61c));
    func_0x024f83cc(*(undefined4 *)(iRam0370fb8c + 0x370f628));
    func_0x024f83cc(*(undefined4 *)(iRam0370fb90 + 0x370f634));
    func_0x024f83cc(*(undefined4 *)(iRam0370fb94 + 0x370f640));
    func_0x024f83cc(*(undefined4 *)(iRam0370fb98 + 0x370f64c));
    func_0x024f83cc(*(undefined4 *)(iRam0370fb9c + 0x370f658));
    func_0x024f83cc(*(undefined4 *)(iRam0370fba0 + 0x370f664));
    func_0x024f83cc(*(undefined4 *)(iRam0370fba4 + 0x370f670));
    func_0x024f83cc(*(undefined4 *)(iRam0370fba8 + 0x370f67c));
    func_0x024f83cc(*(undefined4 *)(iRam0370fbac + 0x370f688));
    func_0x024f83cc(*(undefined4 *)(iRam0370fbb0 + 0x370f694));
    func_0x024f83cc(*(undefined4 *)(iRam0370fbb4 + 0x370f6a0));
    puVar9 = *(undefined4 **)(pcVar12 + 0x1c);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x024f83f8(pcVar12);
      puVar9 = *(undefined4 **)(pcVar12 + 0x1c);
    }
  }
  uVar16 = *puVar9;
  iVar14 = *(int *)(iVar2 + 0x50);
  if (*(int *)(**(int **)(iRam0370fbb8 + 0x370f6c4) + 0x74) == 0) {
    func_0x024f83d8();
  }
  iVar17 = func_0x05171434(uVar16,0);
  if (iVar14 == 0) {
    func_0x024f83d4();
  }
  uVar3 = func_0x0475399c(iVar14,iVar17,**(undefined4 **)(iRam0370fbbc + 0x370f708));
  uVar4 = func_0x02965180(uVar3,0);
  if (uVar4 < 0x35a83e7c) {
    if (uVar4 < 0x1f222a57) {
      if (uVar4 == 0x11e4781a) {
        iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370fbec + 0x370f980),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x34);
LAB_0370facc:
          iVar2 = *(int *)(iVar14 + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x024f83fc(iVar2);
          }
          piVar11 = (int *)0x0;
          if (piVar1 != (int *)0x0) {
            if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
               (piVar11 = piVar1,
               *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
            {
              piVar11 = (int *)0x0;
            }
          }
          return piVar11;
        }
      }
      else if (uVar4 == 0x1c7b49cc) {
        iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370fbf4 + 0x370f9ac),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x48);
          goto LAB_0370facc;
        }
      }
      else {
        bVar23 = 0x1f222a55 < uVar4;
        uVar20 = false;
        if (uVar4 == 0x1f222a56) {
          iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370fbc0 + 0x370f774),0);
          uVar20 = iVar14 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(pcVar12 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x40);
            goto LAB_0370facc;
          }
        }
      }
    }
    else if (uVar4 < 0x24f24770) {
      if (uVar4 == 0x22d6d693) {
        iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370fbe0 + 0x370fa04),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_0370facc;
        }
      }
      else {
        bVar23 = 0x24f2476e < uVar4;
        uVar20 = false;
        if (uVar4 == 0x24f2476f) {
          iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370fbc4 + 0x370f82c),0);
          uVar20 = iVar14 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(pcVar12 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x38);
            goto LAB_0370facc;
          }
        }
      }
    }
    else if (uVar4 == 0x297b851e) {
      iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370fbf0 + 0x370fa88),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(pcVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x44);
        goto LAB_0370facc;
      }
    }
    else {
      bVar23 = 0x35a83e7a < uVar4;
      uVar20 = false;
      if (uVar4 == 0x35a83e7b) {
        iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370fbc8 + 0x370f908),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x3c);
          goto LAB_0370facc;
        }
      }
    }
  }
  else if (uVar4 < 0x9e742f05) {
    if (uVar4 < 0x42250021) {
      if (uVar4 == 0x3ff3d659) {
        iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370fbf8 + 0x370f9d8),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x14);
          goto LAB_0370facc;
        }
      }
      else {
        bVar23 = 0x4225001f < uVar4;
        uVar20 = false;
        if (uVar4 == 0x42250020) {
          iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370fbcc + 0x370f7d8),0);
          uVar20 = iVar14 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(pcVar12 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x20);
            goto LAB_0370facc;
          }
        }
      }
    }
    else if (uVar4 == 0x8f22eb81) {
      iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370fbdc + 0x370fa5c),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(pcVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_0370facc;
      }
    }
    else {
      bVar23 = 0x9e742f03 < uVar4;
      uVar20 = false;
      if (uVar4 == 0x9e742f04) {
        iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370fbd0 + 0x370f8c4),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x4c);
          goto LAB_0370facc;
        }
      }
    }
  }
  else if (uVar4 < 0xb5cc8887) {
    if (uVar4 == 0xb4cc86f3) {
      iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370fbe4 + 0x370fa30),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(pcVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x24);
        goto LAB_0370facc;
      }
    }
    else {
      bVar23 = 0xb5cc8885 < uVar4;
      uVar20 = false;
      if (uVar4 == 0xb5cc8886) {
        iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370fbd4 + 0x370f880),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x28);
          goto LAB_0370facc;
        }
      }
    }
  }
  else if (uVar4 == 0xb6cc8a19) {
    iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370fbe8 + 0x370fab4),0);
    uVar20 = iVar14 == 0;
    bVar23 = true;
    if (!(bool)uVar20) {
      iVar14 = *(int *)(pcVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x2c);
      goto LAB_0370facc;
    }
  }
  else {
    bVar23 = 0xb7cc8bab < uVar4;
    uVar20 = false;
    if (uVar4 == 0xb7cc8bac) {
      iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam0370fbd8 + 0x370f954),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(pcVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x30);
        goto LAB_0370facc;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam0370fbfc + 0x370fb34));
  uVar4 = func_0x024f83c8();
  uVar16 = func_0x024f83b8(*(undefined4 *)(iRam0370fc00 + 0x370fb48));
  *(undefined4 *)(puVar19 + -0xe0) = 0;
  func_0x0509473c(uVar4,uVar16,uVar3,0);
  func_0x024f83c0(uVar4,pcVar12);
  uVar26 = func_0x024f83bc();
  pcVar15 = (char *)((ulonglong)uVar26 >> 0x20);
  iVar2 = (int)uVar26;
  bVar21 = false;
  bVar24 = bVar23;
  if ((bool)uVar20) {
    bVar24 = (char *)0xffffd6ff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x2900),(uint)bVar23);
    pcVar12 = unaff_r9 + bVar23 + 0x2900;
    bVar21 = pcVar12 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = CARRY4(uVar4,(uint)bVar24);
    uVar3 = uVar4 + bVar24;
    bVar22 = uVar3 == 0;
  }
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xf9bfffff < uVar3 || CARRY4((uint)(&DAT_06400000 + uVar3),(uint)bVar23);
  }
  bVar22 = bVar22 && &DAT_06400000 + bVar23 + uVar3 == (undefined *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = 0xfa3fffff < uVar3 || CARRY4((uint)(&UNK_05c00000 + uVar3),(uint)bVar24);
  }
  bVar22 = bVar22 && &UNK_05c00000 + bVar24 + uVar3 == (undefined *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xfabfffff < uVar3 || CARRY4((uint)(&UNK_05400000 + uVar3),(uint)bVar23);
  }
  bVar22 = bVar22 && &UNK_05400000 + bVar23 + uVar3 == (undefined *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = 0xfb3fffff < uVar3 || CARRY4((uint)(&UNK_04c00000 + uVar3),(uint)bVar24);
  }
  bVar22 = bVar22 && &UNK_04c00000 + bVar24 + uVar3 == (undefined *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xfbbfffff < uVar3 || CARRY4((uint)(&UNK_04400000 + uVar3),(uint)bVar23);
  }
  bVar22 = bVar22 && &UNK_04400000 + bVar23 + uVar3 == (undefined *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = 0xfc3fffff < uVar3 || CARRY4(uVar3 + 0x3c00000,(uint)bVar24);
  }
  bVar22 = bVar22 && uVar3 + 0x3c00000 + (uint)bVar24 == 0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xfcbfffff < uVar3 || CARRY4((uint)(&UNK_03400000 + uVar3),(uint)bVar23);
  }
  bVar22 = bVar22 && &UNK_03400000 + bVar23 + uVar3 == (undefined *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = 0xfd3fffff < uVar3 || CARRY4((uint)(&UNK_02c00000 + uVar3),(uint)bVar24);
  }
  bVar22 = bVar22 && &UNK_02c00000 + bVar24 + uVar3 == (undefined *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xfdbfffff < uVar3 || CARRY4((uint)(&UNK_02400000 + uVar3),(uint)bVar23);
  }
  bVar22 = bVar22 && &UNK_02400000 + bVar23 + uVar3 == (undefined *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = 0xfe3fffff < uVar3 || CARRY4(uVar3 + 0x1c00000,(uint)bVar24);
  }
  bVar22 = bVar22 && uVar3 + 0x1c00000 + (uint)bVar24 == 0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xfebfffff < uVar3 || CARRY4((uint)(&UNK_01400000 + uVar3),(uint)bVar23);
  }
  bVar22 = bVar22 && &UNK_01400000 + bVar23 + uVar3 == (undefined *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = 0xff3fffff < uVar3 || CARRY4(uVar3 + 0xc00000,(uint)bVar24);
  }
  bVar22 = bVar22 && uVar3 + 0xc00000 + (uint)bVar24 == 0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xffbfffff < uVar3 || CARRY4(uVar3 + 0x400000,(uint)bVar23);
  }
  bVar22 = bVar22 && uVar3 + 0x400000 + (uint)bVar23 == 0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = 0xc0ffffff < uVar3 || CARRY4(uVar3 + 0x3f000000,(uint)bVar24);
  }
  bVar22 = bVar22 && uVar3 + 0x3f000000 + (uint)bVar24 == 0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xc2ffffff < uVar3 || CARRY4(uVar3 + 0x3d000000,(uint)bVar23);
  }
  bVar21 = false;
  bVar25 = bVar24;
  if (bVar22 && uVar3 + 0x3d000000 + (uint)bVar23 == 0) {
    bVar25 = 0xffffff5f < uVar4 || CARRY4(uVar4 + 0xa0,(uint)bVar24);
    uVar4 = uVar4 + 0xa0 + (uint)bVar24;
    bVar21 = uVar4 == 0;
  }
  bVar22 = false;
  bVar23 = bVar25;
  if (bVar21) {
    bVar23 = (char *)0xffff83ff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x7c00),(uint)bVar25);
    pcVar12 = unaff_r9 + bVar25 + 0x7c00;
    bVar22 = pcVar12 == (char *)0x0;
  }
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xbffffff < uVar3 || CARRY4(uVar3 + 0xf4000000,(uint)bVar23);
  }
  bVar22 = bVar22 && uVar3 + 0xf4000000 + (uint)bVar23 == 0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = 0xbbffffff < uVar3 || CARRY4(uVar3 + 0x44000000,(uint)bVar24);
  }
  bVar22 = bVar22 && uVar3 + 0x44000000 + (uint)bVar24 == 0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xfffffffd < uVar3 || CARRY4(uVar3 + 2,(uint)bVar23);
  }
  bVar22 = bVar22 && uVar3 + 2 + (uint)bVar23 == 0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = 0x5bffffff < uVar3 || CARRY4(uVar3 + 0xa4000000,(uint)bVar24);
  }
  bVar22 = bVar22 && uVar3 + 0xa4000000 + (uint)bVar24 == 0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xcffffffc < uVar3 || CARRY4(uVar3 + 0x30000003,(uint)bVar23);
  }
  bVar22 = bVar22 && uVar3 + 0x30000003 + (uint)bVar23 == 0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = 0xf3ffffff < uVar3 || CARRY4(uVar3 + 0xc000000,(uint)bVar24);
  }
  bVar22 = bVar22 && uVar3 + 0xc000000 + (uint)bVar24 == 0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0x7fffffff < uVar3 || CARRY4(uVar3 + 0x80000000,(uint)bVar23);
  }
  bVar22 = bVar22 && uVar3 + 0x80000000 + (uint)bVar23 == 0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = 0x7ffffffd < uVar3 || CARRY4(uVar3 + 0x80000002,(uint)bVar24);
  }
  bVar22 = bVar22 && uVar3 + 0x80000002 + (uint)bVar24 == 0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xfffffff6 < uVar3 || CARRY4(uVar3 + 9,(uint)bVar23);
  }
  bVar22 = bVar22 && uVar3 + 9 + (uint)bVar23 == 0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = 0xfffffffc < uVar3 || CARRY4(uVar3 + 3,(uint)bVar24);
  }
  bVar22 = bVar22 && uVar3 + 3 + (uint)bVar24 == 0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xffffffce < uVar3 || CARRY4(uVar3 + 0x31,(uint)bVar23);
  }
  bVar22 = bVar22 && uVar3 + 0x31 + (uint)bVar23 == 0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = 0xbffffff1 < uVar3 || CARRY4(uVar3 + 0x4000000e,(uint)bVar24);
  }
  bVar22 = bVar22 && uVar3 + 0x4000000e + (uint)bVar24 == 0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xffffffc1 < uVar3 || CARRY4(uVar3 + 0x3e,(uint)bVar23);
  }
  bVar22 = bVar22 && uVar3 + 0x3e + (uint)bVar23 == 0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = 0xfffffff3 < uVar3 || CARRY4(uVar3 + 0xc,(uint)bVar24);
  }
  bVar22 = bVar22 && uVar3 + 0xc + (uint)bVar24 == 0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xbffffff7 < uVar3 || CARRY4(uVar3 + 0x40000008,(uint)bVar23);
  }
  if (bVar22 && uVar3 + 0x40000008 + (uint)bVar23 == 0) {
    iVar17 = uVar4 + 0x15000000 + (uint)bVar24;
  }
  *(undefined4 *)(puVar19 + -0xe4) = 0x370fb74;
  *(char **)(puVar19 + -0xe8) = unaff_r11;
  *(int *)(puVar19 + -0xec) = iVar17;
  *(uint *)(puVar19 + -0xf0) = uVar3;
  *(uint *)(puVar19 + -0xf4) = uVar4;
  *(char **)(puVar19 + -0xf8) = pcVar12;
  puVar9 = *(undefined4 **)(pcVar15 + 0x1c);
  if (puVar9 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam037101c0 + 0x370fc2c));
    func_0x024f83cc(*(undefined4 *)(iRam037101c4 + 0x370fc38));
    func_0x024f83cc(*(undefined4 *)(iRam037101c8 + 0x370fc44));
    func_0x024f83cc(*(undefined4 *)(iRam037101cc + 0x370fc50));
    func_0x024f83cc(*(undefined4 *)(iRam037101d0 + 0x370fc5c));
    func_0x024f83cc(*(undefined4 *)(iRam037101d4 + 0x370fc68));
    func_0x024f83cc(*(undefined4 *)(iRam037101d8 + 0x370fc74));
    func_0x024f83cc(*(undefined4 *)(iRam037101dc + 0x370fc80));
    func_0x024f83cc(*(undefined4 *)(iRam037101e0 + 0x370fc8c));
    func_0x024f83cc(*(undefined4 *)(iRam037101e4 + 0x370fc98));
    func_0x024f83cc(*(undefined4 *)(iRam037101e8 + 0x370fca4));
    func_0x024f83cc(*(undefined4 *)(iRam037101ec + 0x370fcb0));
    func_0x024f83cc(*(undefined4 *)(iRam037101f0 + 0x370fcbc));
    func_0x024f83cc(*(undefined4 *)(iRam037101f4 + 0x370fcc8));
    func_0x024f83cc(*(undefined4 *)(iRam037101f8 + 0x370fcd4));
    func_0x024f83cc(*(undefined4 *)(iRam037101fc + 0x370fce0));
    func_0x024f83cc(*(undefined4 *)(iRam03710200 + 0x370fcec));
    puVar9 = *(undefined4 **)(pcVar15 + 0x1c);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x024f83f8(pcVar15);
      puVar9 = *(undefined4 **)(pcVar15 + 0x1c);
    }
  }
  uVar16 = *puVar9;
  iVar14 = *(int *)(iVar2 + 0x50);
  if (*(int *)(**(int **)(iRam03710204 + 0x370fd10) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar16 = func_0x05171434(uVar16,0);
  if (iVar14 == 0) {
    func_0x024f83d4();
  }
  puVar13 = (undefined *)func_0x0475399c(iVar14,uVar16,**(undefined4 **)(iRam03710208 + 0x370fd54));
  uVar3 = func_0x02965180(puVar13,0);
  if (uVar3 < 0x35a83e7c) {
    if (uVar3 < 0x1f222a57) {
      if (uVar3 == 0x11e4781a) {
        iVar14 = func_0x04f57738(puVar13,**(undefined4 **)(iRam03710238 + 0x370ffcc),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar15 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x34);
LAB_03710118:
          iVar2 = *(int *)(iVar14 + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x024f83fc(iVar2);
          }
          piVar11 = (int *)0x0;
          if (piVar1 != (int *)0x0) {
            if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
               (piVar11 = piVar1,
               *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
            {
              piVar11 = (int *)0x0;
            }
          }
          return piVar11;
        }
      }
      else if (uVar3 == 0x1c7b49cc) {
        iVar14 = func_0x04f57738(puVar13,**(undefined4 **)(iRam03710240 + 0x370fff8),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar15 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x48);
          goto LAB_03710118;
        }
      }
      else {
        bVar23 = 0x1f222a55 < uVar3;
        uVar20 = false;
        if (uVar3 == 0x1f222a56) {
          iVar14 = func_0x04f57738(puVar13,**(undefined4 **)(iRam0371020c + 0x370fdc0),0);
          uVar20 = iVar14 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(pcVar15 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x40);
            goto LAB_03710118;
          }
        }
      }
    }
    else if (uVar3 < 0x24f24770) {
      if (uVar3 == 0x22d6d693) {
        iVar14 = func_0x04f57738(puVar13,**(undefined4 **)(iRam0371022c + 0x3710050),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar15 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_03710118;
        }
      }
      else {
        bVar23 = 0x24f2476e < uVar3;
        uVar20 = false;
        if (uVar3 == 0x24f2476f) {
          iVar14 = func_0x04f57738(puVar13,**(undefined4 **)(iRam03710210 + 0x370fe78),0);
          uVar20 = iVar14 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(pcVar15 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x38);
            goto LAB_03710118;
          }
        }
      }
    }
    else if (uVar3 == 0x297b851e) {
      iVar14 = func_0x04f57738(puVar13,**(undefined4 **)(iRam0371023c + 0x37100d4),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(pcVar15 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x44);
        goto LAB_03710118;
      }
    }
    else {
      bVar23 = 0x35a83e7a < uVar3;
      uVar20 = false;
      if (uVar3 == 0x35a83e7b) {
        iVar14 = func_0x04f57738(puVar13,**(undefined4 **)(iRam03710214 + 0x370ff54),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar15 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x3c);
          goto LAB_03710118;
        }
      }
    }
  }
  else if (uVar3 < 0x9e742f05) {
    if (uVar3 < 0x42250021) {
      if (uVar3 == 0x3ff3d659) {
        iVar14 = func_0x04f57738(puVar13,**(undefined4 **)(iRam03710244 + 0x3710024),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar15 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x14);
          goto LAB_03710118;
        }
      }
      else {
        bVar23 = 0x4225001f < uVar3;
        uVar20 = false;
        if (uVar3 == 0x42250020) {
          iVar14 = func_0x04f57738(puVar13,**(undefined4 **)(iRam03710218 + 0x370fe24),0);
          uVar20 = iVar14 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(pcVar15 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x20);
            goto LAB_03710118;
          }
        }
      }
    }
    else if (uVar3 == 0x8f22eb81) {
      iVar14 = func_0x04f57738(puVar13,**(undefined4 **)(iRam03710228 + 0x37100a8),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(pcVar15 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_03710118;
      }
    }
    else {
      bVar23 = 0x9e742f03 < uVar3;
      uVar20 = false;
      if (uVar3 == 0x9e742f04) {
        iVar14 = func_0x04f57738(puVar13,**(undefined4 **)(iRam0371021c + 0x370ff10),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar15 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x4c);
          goto LAB_03710118;
        }
      }
    }
  }
  else if (uVar3 < 0xb5cc8887) {
    if (uVar3 == 0xb4cc86f3) {
      iVar14 = func_0x04f57738(puVar13,**(undefined4 **)(iRam03710230 + 0x371007c),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(pcVar15 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x24);
        goto LAB_03710118;
      }
    }
    else {
      bVar23 = 0xb5cc8885 < uVar3;
      uVar20 = false;
      if (uVar3 == 0xb5cc8886) {
        iVar14 = func_0x04f57738(puVar13,**(undefined4 **)(iRam03710220 + 0x370fecc),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar15 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x28);
          goto LAB_03710118;
        }
      }
    }
  }
  else if (uVar3 == 0xb6cc8a19) {
    iVar14 = func_0x04f57738(puVar13,**(undefined4 **)(iRam03710234 + 0x3710100),0);
    uVar20 = iVar14 == 0;
    bVar23 = true;
    if (!(bool)uVar20) {
      iVar14 = *(int *)(pcVar15 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x2c);
      goto LAB_03710118;
    }
  }
  else {
    bVar23 = 0xb7cc8bab < uVar3;
    uVar20 = false;
    if (uVar3 == 0xb7cc8bac) {
      iVar14 = func_0x04f57738(puVar13,**(undefined4 **)(iRam03710224 + 0x370ffa0),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(pcVar15 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x30);
        goto LAB_03710118;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam03710248 + 0x3710180));
  puVar7 = (undefined *)func_0x024f83c8();
  uVar10 = func_0x024f83b8(*(undefined4 *)(iRam0371024c + 0x3710194));
  *(undefined4 *)(puVar19 + -0x100) = 0;
  func_0x0509473c(puVar7,uVar10,puVar13,0);
  func_0x024f83c0(puVar7,pcVar15);
  uVar26 = func_0x024f83bc();
  pcVar5 = (char *)((ulonglong)uVar26 >> 0x20);
  iVar2 = (int)uVar26;
  bVar21 = false;
  bVar24 = bVar23;
  if ((bool)uVar20) {
    bVar24 = (char *)0xfe9fffff < unaff_r9 ||
             CARRY4((uint)(&UNK_01600000 + (int)unaff_r9),(uint)bVar23);
    pcVar15 = &UNK_01600000 + (int)(unaff_r9 + bVar23);
    bVar21 = pcVar15 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (undefined *)0xffd2ffff < puVar7 || CARRY4((uint)(puVar7 + 0x2d0000),(uint)bVar24);
    puVar7 = puVar7 + bVar24 + 0x2d0000;
    bVar22 = puVar7 == (undefined *)0x0;
  }
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (undefined *)0xffffffe7 < puVar13 || CARRY4((uint)(puVar13 + 0x18),(uint)bVar23);
  }
  bVar22 = bVar22 && puVar13 + bVar23 + 0x18 == (undefined *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = (undefined *)0xffffffef < puVar13 || CARRY4((uint)(puVar13 + 0x10),(uint)bVar24);
  }
  bVar22 = bVar22 && puVar13 + bVar24 + 0x10 == (undefined *)0x0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (undefined *)0xfffffff7 < puVar13 || CARRY4((uint)(puVar13 + 8),(uint)bVar23);
  }
  bVar22 = bVar22 && puVar13 + bVar23 + 8 == (undefined *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = CARRY4((uint)puVar13,(uint)bVar24);
  }
  bVar21 = false;
  bVar25 = bVar23;
  if (bVar22 && puVar13 + bVar24 == (undefined *)0x0) {
    bVar25 = (undefined *)0xfffffc1f < puVar13 || CARRY4((uint)(puVar13 + 0x3e0),(uint)bVar23);
    unaff_r9 = puVar13 + bVar23 + 0x3e0;
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar25;
  if (bVar21) {
    bVar23 = (undefined *)0xfffffc3f < puVar13 || CARRY4((uint)(puVar13 + 0x3c0),(uint)bVar25);
    unaff_r9 = puVar13 + bVar25 + 0x3c0;
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (undefined *)0xfffffc5f < puVar13 || CARRY4((uint)(puVar13 + 0x3a0),(uint)bVar23);
    unaff_r9 = puVar13 + bVar23 + 0x3a0;
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (undefined *)0xfffffc7f < puVar13 || CARRY4((uint)(puVar13 + 0x380),(uint)bVar24);
    unaff_r9 = puVar13 + bVar24 + 0x380;
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (undefined *)0xfffffc9f < puVar13 || CARRY4((uint)(puVar13 + 0x360),(uint)bVar23);
    unaff_r9 = puVar13 + bVar23 + 0x360;
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (undefined *)0xfffffcbf < puVar13 || CARRY4((uint)(puVar13 + 0x340),(uint)bVar24);
    unaff_r9 = puVar13 + bVar24 + 0x340;
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (undefined *)0xfffffcdf < puVar13 || CARRY4((uint)(puVar13 + 800),(uint)bVar23);
    unaff_r9 = puVar13 + bVar23 + 800;
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (undefined *)0xfffffcff < puVar13 || CARRY4((uint)(puVar13 + 0x300),(uint)bVar24);
    unaff_r9 = puVar13 + bVar24 + 0x300;
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (undefined *)0xfffffd1f < puVar13 || CARRY4((uint)(puVar13 + 0x2e0),(uint)bVar23);
    unaff_r9 = puVar13 + bVar23 + 0x2e0;
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (undefined *)0xfffffd3f < puVar13 || CARRY4((uint)(puVar13 + 0x2c0),(uint)bVar24);
    unaff_r9 = puVar13 + bVar24 + 0x2c0;
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (undefined *)0xfffffd5f < puVar13 || CARRY4((uint)(puVar13 + 0x2a0),(uint)bVar23);
    unaff_r9 = puVar13 + bVar23 + 0x2a0;
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (undefined *)0xff23ffff < puVar7 ||
             CARRY4((uint)(&UNK_00dc0000 + (int)puVar7),(uint)bVar24);
    puVar7 = &UNK_00dc0000 + (int)(puVar7 + bVar24);
    bVar22 = puVar7 == (undefined *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfcffffff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x3000000),(uint)bVar23);
    pcVar15 = unaff_r9 + bVar23 + 0x3000000;
    bVar21 = pcVar15 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (undefined *)0xfffff57f < puVar13 || CARRY4((uint)(puVar13 + 0xa80),(uint)bVar24);
    unaff_r9 = puVar13 + bVar24 + 0xa80;
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (undefined *)0xffffc1ff < puVar13 || CARRY4((uint)(puVar13 + 0x3e00),(uint)bVar23);
    unaff_r9 = puVar13 + bVar23 + 0x3e00;
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (undefined *)0xfffff2ff < puVar13 || CARRY4((uint)(puVar13 + 0xd00),(uint)bVar24);
    unaff_r9 = puVar13 + bVar24 + 0xd00;
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (undefined *)0xfffffa7f < puVar13 || CARRY4((uint)(puVar13 + 0x580),(uint)bVar23);
    unaff_r9 = puVar13 + bVar23 + 0x580;
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (undefined *)0xffffdfff < puVar13 || CARRY4((uint)(puVar13 + 0x2000),(uint)bVar24);
    unaff_r9 = puVar13 + bVar24 + 0x2000;
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (undefined *)0xffffcfff < puVar13 || CARRY4((uint)(puVar13 + 0x3000),(uint)bVar23);
    unaff_r9 = puVar13 + bVar23 + 0x3000;
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (undefined *)0xffff2bff < puVar13 || CARRY4((uint)(puVar13 + 0xd400),(uint)bVar24);
    unaff_r9 = puVar13 + bVar24 + 0xd400;
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (undefined *)0xfffc8fff < puVar13 ||
             CARRY4((uint)(
                          "_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initIPKwEENS_9_MetaBaseIXsr27__is_cpp17_forward_iteratorIT_EE5valueEE13_EnableIfImplIvEESA_SA_"
                          + (int)(puVar13 + 0x91)),(uint)bVar23);
    unaff_r9 = "_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initIPKwEENS_9_MetaBaseIXsr27__is_cpp17_forward_iteratorIT_EE5valueEE13_EnableIfImplIvEESA_SA_"
               + (int)(puVar13 + bVar23 + 0x91);
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (undefined *)0xffffbbff < puVar13 || CARRY4((uint)(puVar13 + 0x4400),(uint)bVar24);
    unaff_r9 = puVar13 + bVar24 + 0x4400;
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (undefined *)0xfffc6fff < puVar13 ||
             CARRY4((uint)("_ZNSt6__ndk16localeC2ERKS0_PKci" + (int)(puVar13 + 0x15)),(uint)bVar23);
    unaff_r9 = "_ZNSt6__ndk16localeC2ERKS0_PKci" + (int)(puVar13 + bVar23 + 0x15);
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (undefined *)0xfffe1fff < puVar13 || CARRY4((uint)(puVar13 + 0x1e000),(uint)bVar24);
    unaff_r9 = puVar13 + bVar24 + 0x1e000;
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (undefined *)0xffff67ff < puVar13 || CARRY4((uint)(puVar13 + 0x9800),(uint)bVar23);
    unaff_r9 = puVar13 + bVar23 + 0x9800;
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (undefined *)0xfffd4fff < puVar13 ||
             CARRY4((uint)(
                          "_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEEC2EPNS_15basic_streambufIcS2_EE"
                          + (int)(puVar13 + 0x1d)),(uint)bVar24);
    unaff_r9 = "_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEEC2EPNS_15basic_streambufIcS2_EE" +
               (int)(puVar13 + bVar24 + 0x1d);
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (undefined *)0xffff8bff < puVar13 || CARRY4((uint)(puVar13 + 0x7400),(uint)bVar23);
    unaff_r9 = puVar13 + bVar23 + 0x7400;
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (undefined *)0xffffc7ff < puVar13 || CARRY4((uint)(puVar13 + 0x3800),(uint)bVar24);
    unaff_r9 = puVar13 + bVar24 + 0x3800;
    bVar22 = unaff_r9 == (char *)0x0;
  }
  if (bVar22) {
    puVar13 = puVar7 + bVar23 + 0x20;
  }
  *(undefined4 *)(puVar19 + -0x104) = 0x37101c0;
  *(char **)(puVar19 + -0x108) = unaff_r11;
  *(undefined4 *)(puVar19 + -0x10c) = uVar16;
  *(undefined **)(puVar19 + -0x110) = puVar13;
  *(undefined **)(puVar19 + -0x114) = puVar7;
  *(char **)(puVar19 + -0x118) = pcVar15;
  puVar9 = *(undefined4 **)(pcVar5 + 0x1c);
  if (puVar9 == (undefined4 *)0x0) {
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
    puVar9 = *(undefined4 **)(pcVar5 + 0x1c);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x024f83f8(pcVar5);
      puVar9 = *(undefined4 **)(pcVar5 + 0x1c);
    }
  }
  uVar16 = *puVar9;
  iVar14 = *(int *)(iVar2 + 0x3c);
  if (*(int *)(**(int **)(iRam037106bc + 0x3710320) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar16 = func_0x05171434(uVar16,0);
  if (iVar14 == 0) {
    func_0x024f83d4();
  }
  uVar3 = func_0x0475399c(iVar14,uVar16,**(undefined4 **)(iRam037106c0 + 0x3710364));
  uVar4 = func_0x02965180(uVar3,0);
  if (uVar4 < 0xa5621015) {
    if (uVar4 < 0x775ef500) {
      if (uVar4 == 0x392d1efa) {
        iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam037106e8 + 0x37104f0),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar5 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x14);
LAB_037105e4:
          iVar2 = *(int *)(iVar14 + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x024f83fc(iVar2);
          }
          piVar11 = (int *)0x0;
          if (piVar1 != (int *)0x0) {
            if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
               (piVar11 = piVar1,
               *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
            {
              piVar11 = (int *)0x0;
            }
          }
          return piVar11;
        }
      }
      else {
        bVar23 = 0x775ef4fe < uVar4;
        uVar20 = false;
        if (uVar4 == 0x775ef4ff) {
          iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam037106c4 + 0x37103c0),0);
          uVar20 = iVar14 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(pcVar5 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x28);
            goto LAB_037105e4;
          }
        }
      }
    }
    else if (uVar4 == 0x8950c121) {
      iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam037106d4 + 0x3710548),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(pcVar5 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_037105e4;
      }
    }
    else if (uVar4 == 0xa4ebb130) {
      iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam037106e4 + 0x3710574),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(pcVar5 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x38);
        goto LAB_037105e4;
      }
    }
    else {
      bVar23 = 0xa5621013 < uVar4;
      uVar20 = false;
      if (uVar4 == 0xa5621014) {
        iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam037106c8 + 0x3710468),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar5 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x30);
          goto LAB_037105e4;
        }
      }
    }
  }
  else if (uVar4 < 0xb9cd4293) {
    if (uVar4 == 0xb881e6cb) {
      iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam037106e0 + 0x371051c),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(pcVar5 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x34);
        goto LAB_037105e4;
      }
    }
    else {
      bVar23 = 0xb9cd4291 < uVar4;
      uVar20 = false;
      if (uVar4 == 0xb9cd4292) {
        iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam037106cc + 0x3710414),0);
        uVar20 = iVar14 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(pcVar5 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_037105e4;
        }
      }
    }
  }
  else if (uVar4 == 0xbafc2442) {
    iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam037106dc + 0x37105a0),0);
    uVar20 = iVar14 == 0;
    bVar23 = true;
    if (!(bool)uVar20) {
      iVar14 = *(int *)(pcVar5 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x2c);
      goto LAB_037105e4;
    }
  }
  else if (uVar4 == 0xc16fefa5) {
    iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam037106d8 + 0x37105cc),0);
    uVar20 = iVar14 == 0;
    bVar23 = true;
    if (!(bool)uVar20) {
      iVar14 = *(int *)(pcVar5 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x24);
      goto LAB_037105e4;
    }
  }
  else {
    bVar23 = 0xec3691f0 < uVar4;
    uVar20 = false;
    if (uVar4 == 0xec3691f1) {
      iVar14 = func_0x04f57738(uVar3,**(undefined4 **)(iRam037106d0 + 0x37104c4),0);
      uVar20 = iVar14 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(pcVar5 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x20);
        goto LAB_037105e4;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam037106ec + 0x371064c));
  uVar4 = func_0x024f83c8();
  uVar10 = func_0x024f83b8(*(undefined4 *)(iRam037106f0 + 0x3710660));
  *(undefined4 *)(puVar19 + -0x120) = 0;
  func_0x0509473c(uVar4,uVar10,uVar3,0);
  func_0x024f83c0(uVar4,pcVar5);
  uVar26 = func_0x024f83bc();
  iVar14 = (int)((ulonglong)uVar26 >> 0x20);
  iVar2 = (int)uVar26;
  bVar21 = false;
  bVar24 = bVar23;
  if ((bool)uVar20) {
    bVar24 = (char *)0xfffffffc < unaff_r9 || CARRY4((uint)(unaff_r9 + 3),(uint)bVar23);
    pcVar5 = unaff_r9 + bVar23 + 3;
    bVar21 = pcVar5 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0x5ffffffe < uVar4 || CARRY4(uVar4 + 0xa0000001,(uint)bVar24);
    uVar4 = uVar4 + 0xa0000001 + (uint)bVar24;
    bVar22 = uVar4 == 0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xff1fffff < uVar3 || CARRY4(uVar3 + 0xe00000,(uint)bVar23);
    unaff_r9 = (char *)(uVar3 + 0xe00000 + (uint)bVar23);
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xff27ffff < uVar3 || CARRY4((uint)(&UNK_00d80000 + uVar3),(uint)bVar24);
    unaff_r9 = &UNK_00d80000 + bVar24 + uVar3;
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xff2fffff < uVar3 || CARRY4((uint)(&UNK_00d00000 + uVar3),(uint)bVar23);
    unaff_r9 = &UNK_00d00000 + bVar23 + uVar3;
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xff37ffff < uVar3 || CARRY4((uint)(&UNK_00c80000 + uVar3),(uint)bVar24);
    unaff_r9 = &UNK_00c80000 + bVar24 + uVar3;
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xff3fffff < uVar3 || CARRY4(uVar3 + 0xc00000,(uint)bVar23);
    unaff_r9 = (char *)(uVar3 + 0xc00000 + (uint)bVar23);
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xff47ffff < uVar3 || CARRY4((uint)(&UNK_00b80000 + uVar3),(uint)bVar24);
    unaff_r9 = &UNK_00b80000 + bVar24 + uVar3;
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xff4fffff < uVar3 || CARRY4((uint)(&UNK_00b00000 + uVar3),(uint)bVar23);
    unaff_r9 = &UNK_00b00000 + bVar23 + uVar3;
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xff57ffff < uVar3 || CARRY4((uint)(&UNK_00a80000 + uVar3),(uint)bVar24);
    unaff_r9 = &UNK_00a80000 + bVar24 + uVar3;
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xff5fffff < uVar3 || CARRY4((uint)(&UNK_00a00000 + uVar3),(uint)bVar23);
    unaff_r9 = &UNK_00a00000 + bVar23 + uVar3;
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xff67ffff < uVar3 || CARRY4((uint)(&UNK_00980000 + uVar3),(uint)bVar24);
    unaff_r9 = &UNK_00980000 + bVar24 + uVar3;
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0x3ffffff3 < uVar4 || CARRY4(uVar4 + 0xc000000c,(uint)bVar23);
    uVar4 = uVar4 + 0xc000000c + (uint)bVar23;
    bVar21 = uVar4 == 0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = (char *)0xffffffdf < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x20),(uint)bVar24);
    pcVar5 = unaff_r9 + bVar24 + 0x20;
    bVar22 = pcVar5 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xfcefffff < uVar3 || CARRY4((uint)(&UNK_03100000 + uVar3),(uint)bVar23);
    unaff_r9 = &UNK_03100000 + bVar23 + uVar3;
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xffcfffff < uVar3 || CARRY4(uVar3 + 0x300000,(uint)bVar24);
    unaff_r9 = (char *)(uVar3 + 0x300000 + (uint)bVar24);
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xfe1fffff < uVar3 || CARRY4(uVar3 + 0x1e00000,(uint)bVar23);
    unaff_r9 = (char *)(uVar3 + 0x1e00000 + (uint)bVar23);
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xf3bfffff < uVar3 || CARRY4(uVar3 + 0xc400000,(uint)bVar24);
    unaff_r9 = (char *)(uVar3 + 0xc400000 + (uint)bVar24);
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xfd7fffff < uVar3 || CARRY4(uVar3 + 0x2800000,(uint)bVar23);
    unaff_r9 = (char *)(uVar3 + 0x2800000 + (uint)bVar23);
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xceffffff < uVar3 || CARRY4(uVar3 + 0x31000000,(uint)bVar24);
    unaff_r9 = (char *)(uVar3 + 0x31000000 + (uint)bVar24);
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xc9ffffff < uVar3 || CARRY4(uVar3 + 0x36000000,(uint)bVar23);
    unaff_r9 = (char *)(uVar3 + 0x36000000 + (uint)bVar23);
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xf87fffff < uVar3 || CARRY4(uVar3 + 0x7800000,(uint)bVar24);
    unaff_r9 = (char *)(uVar3 + 0x7800000 + (uint)bVar24);
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xff3fffff < uVar3 || CARRY4(uVar3 + 0xc00000,(uint)bVar23);
    unaff_r9 = (char *)(uVar3 + 0xc00000 + (uint)bVar23);
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xf73fffff < uVar3 || CARRY4(uVar3 + 0x8c00000,(uint)bVar24);
    unaff_r9 = (char *)(uVar3 + 0x8c00000 + (uint)bVar24);
    bVar22 = unaff_r9 == (char *)0x0;
  }
  if (bVar22) {
    uVar3 = uVar4 + 0x3c000 + (uint)bVar23;
  }
  *(undefined4 *)(puVar19 + -0x124) = 0x371068c;
  *(char **)(puVar19 + -0x128) = unaff_r11;
  *(undefined4 *)(puVar19 + -300) = uVar16;
  *(uint *)(puVar19 + -0x130) = uVar3;
  *(uint *)(puVar19 + -0x134) = uVar4;
  *(char **)(puVar19 + -0x138) = pcVar5;
  puVar9 = *(undefined4 **)(iVar14 + 0x1c);
  if (puVar9 == (undefined4 *)0x0) {
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
    puVar9 = *(undefined4 **)(iVar14 + 0x1c);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar14);
      puVar9 = *(undefined4 **)(iVar14 + 0x1c);
    }
  }
  uVar16 = *puVar9;
  iVar17 = *(int *)(iVar2 + 0x3c);
  if (*(int *)(**(int **)(iRam03710b60 + 0x37107c4) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar16 = func_0x05171434(uVar16,0);
  if (iVar17 == 0) {
    func_0x024f83d4();
  }
  uVar3 = func_0x0475399c(iVar17,uVar16,**(undefined4 **)(iRam03710b64 + 0x3710808));
  uVar4 = func_0x02965180(uVar3,0);
  if (uVar4 < 0xa5621015) {
    if (uVar4 < 0x775ef500) {
      if (uVar4 == 0x392d1efa) {
        iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam03710b8c + 0x3710994),0);
        uVar20 = iVar17 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar14 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x14);
LAB_03710a88:
          iVar2 = *(int *)(iVar14 + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x024f83fc(iVar2);
          }
          piVar11 = (int *)0x0;
          if (piVar1 != (int *)0x0) {
            if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
               (piVar11 = piVar1,
               *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
            {
              piVar11 = (int *)0x0;
            }
          }
          return piVar11;
        }
      }
      else {
        bVar23 = 0x775ef4fe < uVar4;
        uVar20 = false;
        if (uVar4 == 0x775ef4ff) {
          iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam03710b68 + 0x3710864),0);
          uVar20 = iVar17 == 0;
          bVar23 = true;
          if (!(bool)uVar20) {
            iVar14 = *(int *)(iVar14 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x28);
            goto LAB_03710a88;
          }
        }
      }
    }
    else if (uVar4 == 0x8950c121) {
      iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam03710b78 + 0x37109ec),0);
      uVar20 = iVar17 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar14 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_03710a88;
      }
    }
    else if (uVar4 == 0xa4ebb130) {
      iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam03710b88 + 0x3710a18),0);
      uVar20 = iVar17 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar14 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x38);
        goto LAB_03710a88;
      }
    }
    else {
      bVar23 = 0xa5621013 < uVar4;
      uVar20 = false;
      if (uVar4 == 0xa5621014) {
        iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam03710b6c + 0x371090c),0);
        uVar20 = iVar17 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar14 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x30);
          goto LAB_03710a88;
        }
      }
    }
  }
  else if (uVar4 < 0xb9cd4293) {
    if (uVar4 == 0xb881e6cb) {
      iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam03710b84 + 0x37109c0),0);
      uVar20 = iVar17 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar14 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x34);
        goto LAB_03710a88;
      }
    }
    else {
      bVar23 = 0xb9cd4291 < uVar4;
      uVar20 = false;
      if (uVar4 == 0xb9cd4292) {
        iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam03710b70 + 0x37108b8),0);
        uVar20 = iVar17 == 0;
        bVar23 = true;
        if (!(bool)uVar20) {
          iVar14 = *(int *)(iVar14 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_03710a88;
        }
      }
    }
  }
  else if (uVar4 == 0xbafc2442) {
    iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam03710b80 + 0x3710a44),0);
    uVar20 = iVar17 == 0;
    bVar23 = true;
    if (!(bool)uVar20) {
      iVar14 = *(int *)(iVar14 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x2c);
      goto LAB_03710a88;
    }
  }
  else if (uVar4 == 0xc16fefa5) {
    iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam03710b7c + 0x3710a70),0);
    uVar20 = iVar17 == 0;
    bVar23 = true;
    if (!(bool)uVar20) {
      iVar14 = *(int *)(iVar14 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x24);
      goto LAB_03710a88;
    }
  }
  else {
    bVar23 = 0xec3691f0 < uVar4;
    uVar20 = false;
    if (uVar4 == 0xec3691f1) {
      iVar17 = func_0x04f57738(uVar3,**(undefined4 **)(iRam03710b74 + 0x3710968),0);
      uVar20 = iVar17 == 0;
      bVar23 = true;
      if (!(bool)uVar20) {
        iVar14 = *(int *)(iVar14 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x20);
        goto LAB_03710a88;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam03710b90 + 0x3710af0));
  uVar4 = func_0x024f83c8();
  uVar10 = func_0x024f83b8(*(undefined4 *)(iRam03710b94 + 0x3710b04));
  *(undefined4 *)(puVar19 + -0x140) = 0;
  func_0x0509473c(uVar4,uVar10,uVar3,0);
  func_0x024f83c0(uVar4,iVar14);
  uVar26 = func_0x024f83bc();
  iVar2 = (int)((ulonglong)uVar26 >> 0x20);
  bVar24 = bVar23;
  if ((bool)uVar20) {
    bVar24 = (char *)0xffff97ff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x6800),(uint)bVar23);
  }
  bVar21 = false;
  bVar25 = bVar24;
  if ((bool)uVar20 && unaff_r9 + bVar23 + 0x6800 == (char *)0x0) {
    bVar25 = 0xfffff3bf < uVar4 || CARRY4(uVar4 + 0xc40,(uint)bVar24);
    iVar14 = uVar4 + 0xc40 + (uint)bVar24;
    bVar21 = iVar14 == 0;
  }
  bVar22 = false;
  bVar23 = bVar25;
  if (bVar21) {
    bVar23 = 0xc3ffffff < uVar3 || CARRY4(uVar3 + 0x3c000000,(uint)bVar25);
    unaff_r9 = (char *)(uVar3 + 0x3c000000 + (uint)bVar25);
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xcbffffff < uVar3 || CARRY4(uVar3 + 0x34000000,(uint)bVar23);
    unaff_r9 = (char *)(uVar3 + 0x34000000 + (uint)bVar23);
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xd3ffffff < uVar3 || CARRY4(uVar3 + 0x2c000000,(uint)bVar24);
    unaff_r9 = (char *)(uVar3 + 0x2c000000 + (uint)bVar24);
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xdbffffff < uVar3 || CARRY4(uVar3 + 0x24000000,(uint)bVar23);
    unaff_r9 = (char *)(uVar3 + 0x24000000 + (uint)bVar23);
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xe3ffffff < uVar3 || CARRY4(uVar3 + 0x1c000000,(uint)bVar24);
    unaff_r9 = (char *)(uVar3 + 0x1c000000 + (uint)bVar24);
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xebffffff < uVar3 || CARRY4(uVar3 + 0x14000000,(uint)bVar23);
    unaff_r9 = (char *)(uVar3 + 0x14000000 + (uint)bVar23);
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xf3ffffff < uVar3 || CARRY4(uVar3 + 0xc000000,(uint)bVar24);
    unaff_r9 = (char *)(uVar3 + 0xc000000 + (uint)bVar24);
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xfbffffff < uVar3 || CARRY4(uVar3 + 0x4000000,(uint)bVar23);
    unaff_r9 = (char *)(uVar3 + 0x4000000 + (uint)bVar23);
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xffffffc < uVar3 || CARRY4(uVar3 + 0xf0000003,(uint)bVar24);
    unaff_r9 = (char *)(uVar3 + 0xf0000003 + (uint)bVar24);
    bVar22 = unaff_r9 == (char *)0x0;
  }
  bVar21 = false;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0x2ffffffc < uVar3 || CARRY4(uVar3 + 0xd0000003,(uint)bVar23);
    unaff_r9 = (char *)(uVar3 + 0xd0000003 + (uint)bVar23);
    bVar21 = unaff_r9 == (char *)0x0;
  }
  bVar22 = false;
  bVar23 = bVar24;
  if (bVar21) {
    bVar23 = 0xfffffd7f < uVar4 || CARRY4(uVar4 + 0x280,(uint)bVar24);
    iVar14 = uVar4 + 0x280 + (uint)bVar24;
    bVar22 = iVar14 == 0;
  }
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = (char *)0xfffe0fff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x1f000),(uint)bVar23);
  }
  bVar22 = bVar22 && unaff_r9 + bVar23 + 0x1f000 == (char *)0x0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = 0x7fffffff < uVar3 || CARRY4(uVar3 + 0x80000000,(uint)bVar24);
  }
  bVar22 = bVar22 && uVar3 + 0x80000000 + (uint)bVar24 == 0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0x7ffffff9 < uVar3 || CARRY4(uVar3 + 0x80000006,(uint)bVar23);
  }
  bVar22 = bVar22 && uVar3 + 0x80000006 + (uint)bVar23 == 0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = 0xbffffff2 < uVar3 || CARRY4(uVar3 + 0x4000000d,(uint)bVar24);
  }
  bVar22 = bVar22 && uVar3 + 0x4000000d + (uint)bVar24 == 0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xfffffffd < uVar3 || CARRY4(uVar3 + 2,(uint)bVar23);
  }
  bVar22 = bVar22 && uVar3 + 2 + (uint)bVar23 == 0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = 0xffffffde < uVar3 || CARRY4(uVar3 + 0x21,(uint)bVar24);
  }
  bVar22 = bVar22 && uVar3 + 0x21 + (uint)bVar24 == 0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xfffffff7 < uVar3 || CARRY4(uVar3 + 8,(uint)bVar23);
  }
  bVar22 = bVar22 && uVar3 + 8 + (uint)bVar23 == 0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = 0xfffffff2 < uVar3 || CARRY4(uVar3 + 0xd,(uint)bVar24);
  }
  bVar22 = bVar22 && uVar3 + 0xd + (uint)bVar24 == 0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xffffffca < uVar3 || CARRY4(uVar3 + 0x35,(uint)bVar23);
  }
  bVar22 = bVar22 && uVar3 + 0x35 + (uint)bVar23 == 0;
  bVar23 = bVar24;
  if (bVar22) {
    bVar23 = 0xffffffe5 < uVar3 || CARRY4(uVar3 + 0x1a,(uint)bVar24);
  }
  bVar22 = bVar22 && uVar3 + 0x1a + (uint)bVar24 == 0;
  bVar24 = bVar23;
  if (bVar22) {
    bVar24 = 0xffffffc5 < uVar3 || CARRY4(uVar3 + 0x3a,(uint)bVar23);
  }
  bVar21 = false;
  bVar25 = bVar24;
  if (bVar22 && uVar3 + 0x3a + (uint)bVar23 == 0) {
    bVar25 = 0xd9ffffff < uVar4 || CARRY4(uVar4 + 0x26000000,(uint)bVar24);
    uVar3 = uVar4 + 0x26000000 + (uint)bVar24;
    bVar21 = uVar3 == 0;
  }
  iVar17 = extraout_r2;
  if (bVar21) {
    iVar17 = uVar3 + 0xfc00000 + (uint)bVar25;
  }
  *(undefined4 *)(puVar19 + -0x144) = 0x3710b30;
  *(char **)(puVar19 + -0x148) = unaff_r8;
  *(undefined4 *)(puVar19 + -0x14c) = uVar16;
  *(uint *)(puVar19 + -0x150) = uVar3;
  *(uint *)(puVar19 + -0x154) = uVar4;
  *(int *)(puVar19 + -0x158) = iVar14;
  if (*(int *)(iVar17 + 0x1c) == 0) {
    func_0x024f83cc(*(undefined4 *)(_UNK_03710e60 + 0x3710bc0));
    func_0x024f83cc(*(undefined4 *)(_UNK_03710e64 + 0x3710bcc));
    func_0x024f83cc(*(undefined4 *)(_UNK_03710e68 + 0x3710bd8));
    func_0x024f83cc(*(undefined4 *)(_UNK_03710e6c + 0x3710be4));
    func_0x024f83cc(*(undefined4 *)(_UNK_03710e70 + 0x3710bf0));
    if (*(int *)(iVar17 + 0x1c) == 0) {
      func_0x024f83f8(iVar17);
    }
  }
  if (*(int *)(**(int **)(_UNK_03710e74 + 0x3710c10) + 0x74) == 0) {
    func_0x024f83d8();
  }
  piVar1 = (int *)0x0;
  iVar14 = func_0x024ef144(iVar2,0,0);
  if (iVar14 != 0) {
    if (iVar2 == 0) {
      func_0x024f83d4();
    }
    piVar1 = (int *)func_0x03639de0(iVar2,**(undefined4 **)(iVar17 + 0x1c));
    if (piVar1 == (int *)0x0) {
      piVar11 = (int *)func_0x024f8400(**(undefined4 **)(_UNK_03710e78 + 0x3710c74),3);
      if ((int)uVar26 == 0) {
        func_0x024f83d4();
      }
      piVar1 = (int *)func_0x051b16a4((int)uVar26,0);
      if (piVar1 == (int *)0x0) {
        func_0x024f83d4();
      }
      iVar14 = (**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
      if (piVar11 == (int *)0x0) {
        func_0x024f83d4();
      }
      if ((iVar14 != 0) &&
         (iVar8 = func_0x024f83e4(iVar14,*(undefined4 *)(*piVar11 + 0x20)), iVar8 == 0)) {
        uVar16 = func_0x024f83e8();
        func_0x024f83c0(uVar16,0);
      }
      if (piVar11[3] == 0) {
        func_0x024f83ec();
      }
      piVar11[4] = iVar14;
      func_0x024f83f0(piVar11 + 4,iVar14);
      if (iVar2 == 0) {
        func_0x024f83d4();
      }
      iVar2 = func_0x024ef0f0(iVar2,0);
      if ((iVar2 != 0) &&
         (iVar14 = func_0x024f83e4(iVar2,*(undefined4 *)(*piVar11 + 0x20)), iVar14 == 0)) {
        uVar16 = func_0x024f83e8();
        func_0x024f83c0(uVar16,0);
      }
      if ((uint)piVar11[3] < 2) {
        func_0x024f83ec();
      }
      piVar11[5] = iVar2;
      func_0x024f83f0(piVar11 + 5,iVar2);
      uVar16 = *(undefined4 *)(*(int *)(iVar17 + 0x1c) + 8);
      if (*(int *)(**(int **)(_UNK_03710e7c + 0x3710d8c) + 0x74) == 0) {
        func_0x024f83d8();
      }
      piVar1 = (int *)func_0x05171434(uVar16,0);
      if (piVar1 == (int *)0x0) {
        func_0x024f83d4();
      }
      iVar2 = (**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
      if ((iVar2 != 0) &&
         (iVar14 = func_0x024f83e4(iVar2,*(undefined4 *)(*piVar11 + 0x20)), iVar14 == 0)) {
        uVar16 = func_0x024f83e8();
        func_0x024f83c0(uVar16,0);
      }
      if ((uint)piVar11[3] < 3) {
        func_0x024f83ec();
      }
      piVar11[6] = iVar2;
      func_0x024f83f0(piVar11 + 6,iVar2);
      if (*(int *)(**(int **)(_UNK_03710e80 + 0x3710e2c) + 0x74) == 0) {
        func_0x024f83d8();
      }
      piVar1 = (int *)0x0;
      func_0x026795f8(**(undefined4 **)(_UNK_03710e84 + 0x3710e54),piVar11,0);
    }
  }
  return piVar1;
}

