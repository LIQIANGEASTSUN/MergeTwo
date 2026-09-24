
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_01873378(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  uint unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  undefined *unaff_r11;
  uint extraout_r12;
  uint extraout_r12_00;
  uint extraout_r12_01;
  uint extraout_r12_02;
  uint extraout_r12_03;
  uint extraout_r12_04;
  undefined4 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  int iVar18;
  undefined1 uVar19;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  undefined8 uVar25;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined *puStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  pcVar11 = (char *)(_UNK_01873458 + 0x187338c);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0187345c + 0x18733a0));
    func_0x01438628(*(undefined4 *)(_UNK_01873460 + 0x18733ac));
    func_0x01438628(*(undefined4 *)(_UNK_01873464 + 0x18733b8));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x171e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x171e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar11 = (char *)(_UNK_028a8330 + 0x28a8250);
    if (*pcVar11 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a8334 + 0x28a8264),param_1,0);
      *pcVar11 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    puStack_28 = *(undefined **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    puStack_28 = (undefined *)uStack_40;
    iStack_24 = uStack_3c;
    uStack_20 = iStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar12 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar12 == 0) {
      func_0x014388e4();
    }
    uVar9 = 2;
    if (iVar1 == 0) {
      uVar9 = 1;
    }
    func_0x024f56d0(iVar12,uVar13,&uStack_30,uVar9,0,0);
    piVar2 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a8338 + 0x28a8320));
    return piVar2;
  }
  if (*(int *)(**(int **)(_UNK_01873468 + 0x1873410) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0187346c + 0x187342c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar12 = **(int **)(_UNK_01873470 + 0x187344c);
  puVar8 = *(undefined4 **)(iVar12 + 0x1c);
  if (puVar8 == (undefined4 *)0x0) {
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
    puVar8 = *(undefined4 **)(iVar12 + 0x1c);
    if (puVar8 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar12);
      puVar8 = *(undefined4 **)(iVar12 + 0x1c);
    }
  }
  uVar13 = *puVar8;
  iVar14 = *(int *)(iVar1 + 0x48);
  if (*(int *)(**(int **)(iRam036d8ba8 + 0x36d8744) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar13 = func_0x05171434(uVar13,0);
  if (iVar14 == 0) {
    func_0x024f83d4();
  }
  uVar9 = func_0x0475399c(iVar14,uVar13,**(undefined4 **)(iRam036d8bac + 0x36d8788));
  uVar3 = func_0x02965180(uVar9,0);
  if (uVar3 < 0xa443a856) {
    if (uVar3 < 0x71bf6504) {
      if (uVar3 == 0x13a7e43c) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8bdc + 0x36d8978),0);
        uVar19 = iVar14 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x44);
LAB_036d8ac4:
          iVar1 = *(int *)(iVar12 + 4);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x024f83fc(iVar1);
          }
          piVar10 = (int *)0x0;
          if (piVar2 != (int *)0x0) {
            if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*piVar2 + 0xb8)) &&
               (piVar10 = piVar2,
               *(int *)(*(int *)(*piVar2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1))
            {
              piVar10 = (int *)0x0;
            }
          }
          return piVar10;
        }
      }
      else if (uVar3 == 0x16c0af6f) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8bd0 + 0x36d89a4),0);
        uVar19 = iVar14 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x30);
          goto LAB_036d8ac4;
        }
      }
      else {
        bVar22 = 0x71bf6502 < uVar3;
        uVar19 = false;
        if (uVar3 == 0x71bf6503) {
          iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8bb0 + 0x36d87f4),0);
          uVar19 = iVar14 == 0;
          bVar22 = true;
          if (!(bool)uVar19) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x34);
            goto LAB_036d8ac4;
          }
        }
      }
    }
    else if (uVar3 == 0xa443a855) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8bc4 + 0x36d8a28),0);
      uVar19 = iVar14 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036d8ac4;
      }
    }
    else if (uVar3 == 0x7399d8e1) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8be0 + 0x36d8a54),0);
      uVar19 = iVar14 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x14);
        goto LAB_036d8ac4;
      }
    }
    else {
      bVar22 = 0x7ab1adb3 < uVar3;
      uVar19 = false;
      if (uVar3 == 0x7ab1adb4) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8bb4 + 0x36d88ac),0);
        uVar19 = iVar14 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x40);
          goto LAB_036d8ac4;
        }
      }
    }
  }
  else if (uVar3 < 0xb66b7baf) {
    if (uVar3 == 0xb135ec26) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8bd8 + 0x36d89d0),0);
      uVar19 = iVar14 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x3c);
        goto LAB_036d8ac4;
      }
    }
    else if (uVar3 == 0xb436bd1b) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8bc8 + 0x36d89fc),0);
      uVar19 = iVar14 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036d8ac4;
      }
    }
    else {
      bVar22 = 0xb66b7bad < uVar3;
      uVar19 = false;
      if (uVar3 == 0xb66b7bae) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8bb8 + 0x36d8858),0);
        uVar19 = iVar14 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
          goto LAB_036d8ac4;
        }
      }
    }
  }
  else if (uVar3 < 0xc5a69c53) {
    if (uVar3 == 0xc28ab1a8) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8bcc + 0x36d8a80),0);
      uVar19 = iVar14 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x20);
        goto LAB_036d8ac4;
      }
    }
    else {
      bVar22 = 0xc5a69c51 < uVar3;
      uVar19 = false;
      if (uVar3 == 0xc5a69c52) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8bbc + 0x36d8900),0);
        uVar19 = iVar14 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036d8ac4;
        }
      }
    }
  }
  else if (uVar3 == 0xc5d3516e) {
    iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8bd4 + 0x36d8aac),0);
    uVar19 = iVar14 == 0;
    bVar22 = true;
    if (!(bool)uVar19) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x38);
      goto LAB_036d8ac4;
    }
  }
  else {
    bVar22 = 0xf655d0f8 < uVar3;
    uVar19 = false;
    if (uVar3 == 0xf655d0f9) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8bc0 + 0x36d894c),0);
      uVar19 = iVar14 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036d8ac4;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036d8be4 + 0x36d8b2c));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036d8be8 + 0x36d8b40));
  uStack_20 = 0;
  func_0x0509473c(uVar4,uVar5,uVar9,0);
  func_0x024f83c0(uVar4,iVar12);
  iVar18 = 0x36d8b6c;
  uVar25 = func_0x024f83bc();
  iVar14 = (int)((ulonglong)uVar25 >> 0x20);
  iVar1 = (int)uVar25;
  bVar20 = false;
  bVar23 = bVar22;
  if ((bool)uVar19) {
    bVar23 = 0xfffffcff < extraout_r12 || CARRY4(extraout_r12 + 0x300,(uint)bVar22);
    unaff_r11 = (undefined *)(extraout_r12 + 0x300 + (uint)bVar22);
    bVar20 = unaff_r11 == (undefined *)0x0;
  }
  bVar21 = false;
  uVar3 = extraout_r12;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xfffffe5f < unaff_r8 || CARRY4(unaff_r8 + 0x1a0,(uint)bVar23);
    uVar3 = unaff_r8 + 0x1a0 + (uint)bVar23;
    bVar21 = uVar3 == 0;
  }
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffffebff < unaff_r10 || CARRY4(unaff_r10 + 0x1400,(uint)bVar22);
  }
  bVar21 = bVar21 && unaff_r10 + 0x1400 + (uint)bVar22 == 0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xffffedff < unaff_r10 || CARRY4(unaff_r10 + 0x1200,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0x1200 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffffefff < unaff_r10 || CARRY4(unaff_r10 + 0x1000,(uint)bVar22);
  }
  bVar21 = bVar21 && unaff_r10 + 0x1000 + (uint)bVar22 == 0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xfffff1ff < unaff_r10 || CARRY4(unaff_r10 + 0xe00,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0xe00 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfffff3ff < unaff_r10 || CARRY4(unaff_r10 + 0xc00,(uint)bVar22);
  }
  bVar21 = bVar21 && unaff_r10 + 0xc00 + (uint)bVar22 == 0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xfffff5ff < unaff_r10 || CARRY4(unaff_r10 + 0xa00,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0xa00 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfffff7ff < unaff_r10 || CARRY4(unaff_r10 + 0x800,(uint)bVar22);
  }
  bVar21 = bVar21 && unaff_r10 + 0x800 + (uint)bVar22 == 0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xfffff9ff < unaff_r10 || CARRY4(unaff_r10 + 0x600,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0x600 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfffffbff < unaff_r10 || CARRY4(unaff_r10 + 0x400,(uint)bVar22);
  }
  bVar21 = bVar21 && unaff_r10 + 0x400 + (uint)bVar22 == 0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xfffffdff < unaff_r10 || CARRY4(unaff_r10 + 0x200,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0x200 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = CARRY4(unaff_r10,(uint)bVar22);
  }
  bVar21 = bVar21 && unaff_r10 + bVar22 == 0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xffff07ff < unaff_r10 || CARRY4(unaff_r10 + 0xf800,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0xf800 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffff0fff < unaff_r10 || CARRY4(unaff_r10 + 0xf000,(uint)bVar22);
  }
  bVar20 = false;
  bVar24 = bVar23;
  if (bVar21 && unaff_r10 + 0xf000 + (uint)bVar22 == 0) {
    bVar24 = 0xfffff57f < unaff_r8 || CARRY4(unaff_r8 + 0xa80,(uint)bVar23);
    uVar3 = unaff_r8 + 0xa80 + (uint)bVar23;
    bVar20 = uVar3 == 0;
  }
  bVar21 = false;
  bVar22 = bVar24;
  if (bVar20) {
    bVar22 = 0xfffc0fff < uVar3 || CARRY4(uVar3 + 0x3f000,(uint)bVar24);
    unaff_r11 = (undefined *)(uVar3 + 0x3f000 + (uint)bVar24);
    bVar21 = unaff_r11 == (undefined *)0x0;
  }
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfffc2fff < unaff_r10 ||
             CARRY4((uint)("_ZNSt6__ndk121recursive_timed_mutex6unlockEv" + unaff_r10 + 0xe),
                    (uint)bVar22);
  }
  bVar21 = bVar21 && "_ZNSt6__ndk121recursive_timed_mutex6unlockEv" + (uint)bVar22 + unaff_r10 + 0xe
                     == (char *)0x0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xfffe6fff < unaff_r10 || CARRY4(unaff_r10 + 0x19000,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0x19000 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfffd3fff < unaff_r10 ||
             CARRY4((uint)(
                          "_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5seekpENS_4fposI9mbstate_tEE"
                          + unaff_r10 + 0x3c),(uint)bVar22);
  }
  bVar21 = bVar21 && "_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5seekpENS_4fposI9mbstate_tEE"
                     + (uint)bVar22 + unaff_r10 + 0x3c == (char *)0x0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xffffcfff < unaff_r10 || CARRY4(unaff_r10 + 0x3000,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0x3000 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfff5bfff < unaff_r10 || CARRY4(unaff_r10 + 0xa4000,(uint)bVar22);
  }
  bVar21 = bVar21 && unaff_r10 + 0xa4000 + (uint)bVar22 == 0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xffccffff < unaff_r10 || CARRY4(unaff_r10 + 0x330000,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0x330000 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffff7fff < unaff_r10 || CARRY4(unaff_r10 + 0x8000,(uint)bVar22);
  }
  bVar21 = bVar21 && unaff_r10 + 0x8000 + (uint)bVar22 == 0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xffe1ffff < unaff_r10 || CARRY4(unaff_r10 + 0x1e0000,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0x1e0000 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfffc3fff < unaff_r10 || CARRY4(unaff_r10 + 0x3c000,(uint)bVar22);
  }
  bVar21 = bVar21 && unaff_r10 + 0x3c000 + (uint)bVar22 == 0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xfff1ffff < unaff_r10 || CARRY4(unaff_r10 + 0xe0000,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0xe0000 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfffd3fff < unaff_r10 ||
             CARRY4((uint)(
                          "_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5seekpENS_4fposI9mbstate_tEE"
                          + unaff_r10 + 0x3c),(uint)bVar22);
  }
  bVar21 = bVar21 && "_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5seekpENS_4fposI9mbstate_tEE"
                     + (uint)bVar22 + unaff_r10 + 0x3c == (char *)0x0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xfff77fff < unaff_r10 || CARRY4(unaff_r10 + 0x88000,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0x88000 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffd9ffff < unaff_r10 || CARRY4(unaff_r10 + 0x260000,(uint)bVar22);
  }
  bVar20 = false;
  bVar24 = bVar23;
  if (bVar21 && unaff_r10 + 0x260000 + (uint)bVar22 == 0) {
    bVar24 = 0xe8ffffff < unaff_r8 || CARRY4(unaff_r8 + 0x17000000,(uint)bVar23);
    iVar18 = unaff_r8 + 0x17000000 + (uint)bVar23;
    bVar20 = iVar18 == 0;
  }
  if (bVar20) {
    unaff_r10 = unaff_r9 + 0xc000000 + (uint)bVar24;
  }
  puVar15 = &uStack_40;
  puVar8 = *(undefined4 **)(iVar14 + 0x1c);
  iStack_38 = iVar12;
  uStack_34 = uVar4;
  uStack_30 = uVar9;
  uStack_2c = uVar13;
  puStack_28 = unaff_r11;
  iStack_24 = iVar18;
  if (puVar8 == (undefined4 *)0x0) {
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
    puVar8 = *(undefined4 **)(iVar14 + 0x1c);
    if (puVar8 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar14);
      puVar8 = *(undefined4 **)(iVar14 + 0x1c);
    }
  }
  uVar13 = *puVar8;
  iVar12 = *(int *)(iVar1 + 0x48);
  if (*(int *)(**(int **)(iRam036d9144 + 0x36d8ce0) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar13 = func_0x05171434(uVar13,0);
  if (iVar12 == 0) {
    func_0x024f83d4();
  }
  uVar9 = func_0x0475399c(iVar12,uVar13,**(undefined4 **)(iRam036d9148 + 0x36d8d24));
  uVar3 = func_0x02965180(uVar9,0);
  if (uVar3 < 0xa443a856) {
    if (uVar3 < 0x71bf6504) {
      if (uVar3 == 0x13a7e43c) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9178 + 0x36d8f14),0);
        uVar19 = iVar12 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x44);
LAB_036d9060:
          iVar1 = *(int *)(iVar12 + 4);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x024f83fc(iVar1);
          }
          piVar10 = (int *)0x0;
          if (piVar2 != (int *)0x0) {
            if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*piVar2 + 0xb8)) &&
               (piVar10 = piVar2,
               *(int *)(*(int *)(*piVar2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1))
            {
              piVar10 = (int *)0x0;
            }
          }
          return piVar10;
        }
      }
      else if (uVar3 == 0x16c0af6f) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d916c + 0x36d8f40),0);
        uVar19 = iVar12 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x30);
          goto LAB_036d9060;
        }
      }
      else {
        bVar22 = 0x71bf6502 < uVar3;
        uVar19 = false;
        if (uVar3 == 0x71bf6503) {
          iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d914c + 0x36d8d90),0);
          uVar19 = iVar12 == 0;
          bVar22 = true;
          if (!(bool)uVar19) {
            iVar12 = *(int *)(iVar14 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x34);
            goto LAB_036d9060;
          }
        }
      }
    }
    else if (uVar3 == 0xa443a855) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9160 + 0x36d8fc4),0);
      uVar19 = iVar12 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036d9060;
      }
    }
    else if (uVar3 == 0x7399d8e1) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d917c + 0x36d8ff0),0);
      uVar19 = iVar12 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x14);
        goto LAB_036d9060;
      }
    }
    else {
      bVar22 = 0x7ab1adb3 < uVar3;
      uVar19 = false;
      if (uVar3 == 0x7ab1adb4) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9150 + 0x36d8e48),0);
        uVar19 = iVar12 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x40);
          goto LAB_036d9060;
        }
      }
    }
  }
  else if (uVar3 < 0xb66b7baf) {
    if (uVar3 == 0xb135ec26) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9174 + 0x36d8f6c),0);
      uVar19 = iVar12 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x3c);
        goto LAB_036d9060;
      }
    }
    else if (uVar3 == 0xb436bd1b) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9164 + 0x36d8f98),0);
      uVar19 = iVar12 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036d9060;
      }
    }
    else {
      bVar22 = 0xb66b7bad < uVar3;
      uVar19 = false;
      if (uVar3 == 0xb66b7bae) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9154 + 0x36d8df4),0);
        uVar19 = iVar12 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
          goto LAB_036d9060;
        }
      }
    }
  }
  else if (uVar3 < 0xc5a69c53) {
    if (uVar3 == 0xc28ab1a8) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9168 + 0x36d901c),0);
      uVar19 = iVar12 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x20);
        goto LAB_036d9060;
      }
    }
    else {
      bVar22 = 0xc5a69c51 < uVar3;
      uVar19 = false;
      if (uVar3 == 0xc5a69c52) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9158 + 0x36d8e9c),0);
        uVar19 = iVar12 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036d9060;
        }
      }
    }
  }
  else if (uVar3 == 0xc5d3516e) {
    iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9170 + 0x36d9048),0);
    uVar19 = iVar12 == 0;
    bVar22 = true;
    if (!(bool)uVar19) {
      iVar12 = *(int *)(iVar14 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x38);
      goto LAB_036d9060;
    }
  }
  else {
    bVar22 = 0xf655d0f8 < uVar3;
    uVar19 = false;
    if (uVar3 == 0xf655d0f9) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d915c + 0x36d8ee8),0);
      uVar19 = iVar12 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036d9060;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036d9180 + 0x36d90c8));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036d9184 + 0x36d90dc));
  uStack_40 = 0;
  func_0x0509473c(uVar4,uVar5,uVar9,0);
  func_0x024f83c0(uVar4,iVar14);
  uVar25 = func_0x024f83bc();
  iVar12 = (int)((ulonglong)uVar25 >> 0x20);
  iVar1 = (int)uVar25;
  bVar20 = false;
  bVar23 = bVar22;
  if ((bool)uVar19) {
    bVar23 = 0xfe3fffff < extraout_r12_00 || CARRY4(extraout_r12_00 + 0x1c00000,(uint)bVar22);
    unaff_r11 = (undefined *)(extraout_r12_00 + 0x1c00000 + (uint)bVar22);
    bVar20 = unaff_r11 == (undefined *)0x0;
  }
  bVar21 = false;
  uVar3 = extraout_r12_00;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xffccffff < unaff_r8 || CARRY4(unaff_r8 + 0x330000,(uint)bVar23);
    uVar3 = unaff_r8 + 0x330000 + (uint)bVar23;
    bVar21 = uVar3 == 0;
  }
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfd2fffff < unaff_r10 || CARRY4((uint)(&UNK_02d00000 + unaff_r10),(uint)bVar22);
  }
  bVar21 = bVar21 && &UNK_02d00000 + bVar22 + unaff_r10 == (undefined *)0x0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xfd4fffff < unaff_r10 || CARRY4((uint)(&UNK_02b00000 + unaff_r10),(uint)bVar23);
  }
  bVar21 = bVar21 && &UNK_02b00000 + bVar23 + unaff_r10 == (undefined *)0x0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfd6fffff < unaff_r10 || CARRY4((uint)(&UNK_02900000 + unaff_r10),(uint)bVar22);
  }
  bVar21 = bVar21 && &UNK_02900000 + bVar22 + unaff_r10 == (undefined *)0x0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xfd8fffff < unaff_r10 || CARRY4(unaff_r10 + 0x2700000,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0x2700000 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfdafffff < unaff_r10 || CARRY4((uint)(&UNK_02500000 + unaff_r10),(uint)bVar22);
  }
  bVar21 = bVar21 && &UNK_02500000 + bVar22 + unaff_r10 == (undefined *)0x0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xfdcfffff < unaff_r10 || CARRY4((uint)(&UNK_02300000 + unaff_r10),(uint)bVar23);
  }
  bVar21 = bVar21 && &UNK_02300000 + bVar23 + unaff_r10 == (undefined *)0x0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfdefffff < unaff_r10 || CARRY4((uint)(&UNK_02100000 + unaff_r10),(uint)bVar22);
  }
  bVar21 = bVar21 && &UNK_02100000 + bVar22 + unaff_r10 == (undefined *)0x0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xfe0fffff < unaff_r10 || CARRY4(unaff_r10 + 0x1f00000,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0x1f00000 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfe2fffff < unaff_r10 || CARRY4((uint)(&UNK_01d00000 + unaff_r10),(uint)bVar22);
  }
  bVar21 = bVar21 && &UNK_01d00000 + bVar22 + unaff_r10 == (undefined *)0x0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xfe4fffff < unaff_r10 || CARRY4((uint)(&UNK_01b00000 + unaff_r10),(uint)bVar23);
  }
  bVar21 = bVar21 && &UNK_01b00000 + bVar23 + unaff_r10 == (undefined *)0x0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfe6fffff < unaff_r10 || CARRY4((uint)(&UNK_01900000 + unaff_r10),(uint)bVar22);
  }
  bVar21 = bVar21 && &UNK_01900000 + bVar22 + unaff_r10 == (undefined *)0x0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xfe8fffff < unaff_r10 || CARRY4((uint)(&UNK_01700000 + unaff_r10),(uint)bVar23);
  }
  bVar21 = bVar21 && &UNK_01700000 + bVar23 + unaff_r10 == (undefined *)0x0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfeafffff < unaff_r10 || CARRY4((uint)(&UNK_01500000 + unaff_r10),(uint)bVar22);
  }
  bVar20 = false;
  bVar24 = bVar23;
  if (bVar21 && &UNK_01500000 + bVar22 + unaff_r10 == (undefined *)0x0) {
    bVar24 = 0xfffcffff < unaff_r8 || CARRY4(unaff_r8 + 0x30000,(uint)bVar23);
    uVar3 = unaff_r8 + 0x30000 + (uint)bVar23;
    bVar20 = uVar3 == 0;
  }
  bVar21 = false;
  bVar22 = bVar24;
  if (bVar20) {
    bVar22 = 0xf9ffffff < uVar3 || CARRY4(uVar3 + 0x6000000,(uint)bVar24);
    unaff_r11 = (undefined *)(uVar3 + 0x6000000 + (uint)bVar24);
    bVar21 = unaff_r11 == (undefined *)0x0;
  }
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfa7fffff < unaff_r10 || CARRY4((uint)(&UNK_05800000 + unaff_r10),(uint)bVar22);
  }
  bVar21 = bVar21 && &UNK_05800000 + bVar22 + unaff_r10 == (undefined *)0x0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xcdffffff < unaff_r10 || CARRY4(unaff_r10 + 0x32000000,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0x32000000 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfebfffff < unaff_r10 || CARRY4((uint)(&UNK_01400000 + unaff_r10),(uint)bVar22);
  }
  bVar21 = bVar21 && &UNK_01400000 + bVar22 + unaff_r10 == (undefined *)0x0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xe3ffffff < unaff_r10 || CARRY4(unaff_r10 + 0x1c000000,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0x1c000000 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfdffffff < unaff_r10 || CARRY4(unaff_r10 + 0x2000000,(uint)bVar22);
  }
  bVar21 = bVar21 && unaff_r10 + 0x2000000 + (uint)bVar22 == 0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xcfffffff < unaff_r10 || CARRY4(unaff_r10 + 0x30000000,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0x30000000 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0x93ffffff < unaff_r10 || CARRY4(unaff_r10 + 0x6c000000,(uint)bVar22);
  }
  bVar21 = bVar21 && unaff_r10 + 0x6c000000 + (uint)bVar22 == 0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0x8ffffffc < unaff_r10 || CARRY4(unaff_r10 + 0x70000003,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0x70000003 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0x5fffffff < unaff_r10 || CARRY4(unaff_r10 + 0xa0000000,(uint)bVar22);
  }
  bVar21 = bVar21 && unaff_r10 + 0xa0000000 + (uint)bVar22 == 0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0x8ffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x70000002,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0x70000002 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0x6fffffff < unaff_r10 || CARRY4(unaff_r10 + 0x90000000,(uint)bVar22);
  }
  bVar21 = bVar21 && unaff_r10 + 0x90000000 + (uint)bVar22 == 0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0x13ffffff < unaff_r10 || CARRY4(unaff_r10 + 0xec000000,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0xec000000 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffffffc < unaff_r10 || CARRY4(unaff_r10 + 0xf0000003,(uint)bVar22);
  }
  bVar20 = false;
  bVar24 = bVar23;
  if (bVar21 && unaff_r10 + 0xf0000003 + (uint)bVar22 == 0) {
    bVar24 = 0xfffffcff < unaff_r8 || CARRY4(unaff_r8 + 0x300,(uint)bVar23);
    puVar15 = (undefined4 *)(unaff_r8 + 0x300 + (uint)bVar23);
    bVar20 = (undefined1 *)(unaff_r8 + 0x300 + (uint)bVar23) == (undefined1 *)0x0;
  }
  if (bVar20) {
    unaff_r10 = unaff_r9 + 9 + (uint)bVar24;
  }
  *(undefined4 *)((int)puVar15 + -4) = 0x36d9108;
  *(undefined **)((int)puVar15 + -8) = unaff_r11;
  *(undefined4 *)((int)puVar15 + -0xc) = uVar13;
  *(undefined4 *)((int)puVar15 + -0x10) = uVar9;
  *(undefined4 *)((int)puVar15 + -0x14) = uVar4;
  *(int *)((int)puVar15 + -0x18) = iVar14;
  puVar16 = (undefined1 *)((int)puVar15 + -0x20);
  puVar8 = *(undefined4 **)(iVar12 + 0x1c);
  if (puVar8 == (undefined4 *)0x0) {
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
    puVar8 = *(undefined4 **)(iVar12 + 0x1c);
    if (puVar8 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar12);
      puVar8 = *(undefined4 **)(iVar12 + 0x1c);
    }
  }
  uVar13 = *puVar8;
  iVar14 = *(int *)(iVar1 + 0x50);
  if (*(int *)(**(int **)(iRam036d9788 + 0x36d9294) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar13 = func_0x05171434(uVar13,0);
  if (iVar14 == 0) {
    func_0x024f83d4();
  }
  uVar9 = func_0x0475399c(iVar14,uVar13,**(undefined4 **)(iRam036d978c + 0x36d92d8));
  puVar6 = (undefined *)func_0x02965180(uVar9,0);
  if (puVar6 < (undefined *)0x4a3314ab) {
    if (puVar6 < (undefined *)0x335bb157) {
      if (puVar6 == &UNK_02227698) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d97c4 + 0x36d9550),0);
        uVar19 = iVar14 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x48);
LAB_036d969c:
          iVar1 = *(int *)(iVar12 + 4);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x024f83fc(iVar1);
          }
          piVar10 = (int *)0x0;
          if (piVar2 != (int *)0x0) {
            if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*piVar2 + 0xb8)) &&
               (piVar10 = piVar2,
               *(int *)(*(int *)(*piVar2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1))
            {
              piVar10 = (int *)0x0;
            }
          }
          return piVar10;
        }
      }
      else if (puVar6 == (undefined *)0xe7c632f) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d97ac + 0x36d957c),0);
        uVar19 = iVar14 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x1c);
          goto LAB_036d969c;
        }
      }
      else {
        bVar22 = (undefined *)0x335bb155 < puVar6;
        uVar19 = false;
        if (puVar6 == (undefined *)0x335bb156) {
          iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9790 + 0x36d9344),0);
          uVar19 = iVar14 == 0;
          bVar22 = true;
          if (!(bool)uVar19) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x34);
            goto LAB_036d969c;
          }
        }
      }
    }
    else if (puVar6 < (undefined *)0x44330b39) {
      if (puVar6 == (undefined *)0x39a1cb23) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d97bc + 0x36d95d4),0);
        uVar19 = iVar14 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x38);
          goto LAB_036d969c;
        }
      }
      else {
        bVar22 = (undefined *)0x44330b37 < puVar6;
        uVar19 = false;
        if (puVar6 == (undefined *)0x44330b38) {
          iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9794 + 0x36d93fc),0);
          uVar19 = iVar14 == 0;
          bVar22 = true;
          if (!(bool)uVar19) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x30);
            goto LAB_036d969c;
          }
        }
      }
    }
    else if (puVar6 == (undefined *)0x49331317) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d97b4 + 0x36d9658),0);
      uVar19 = iVar14 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036d969c;
      }
    }
    else {
      bVar22 = (undefined *)0x4a3314a9 < puVar6;
      uVar19 = false;
      if (puVar6 == (undefined *)0x4a3314aa) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9798 + 0x36d94d8),0);
        uVar19 = iVar14 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
          goto LAB_036d969c;
        }
      }
    }
  }
  else if (puVar6 < (undefined *)0xa110364b) {
    if (puVar6 < (undefined *)0x6927558b) {
      if (puVar6 == (undefined *)0x4b33163d) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d97b8 + 0x36d95a8),0);
        uVar19 = iVar14 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036d969c;
        }
      }
      else {
        bVar22 = (undefined *)0x69275589 < puVar6;
        uVar19 = false;
        if (puVar6 == (undefined *)0x6927558a) {
          iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d979c + 0x36d93a8),0);
          uVar19 = iVar14 == 0;
          bVar22 = true;
          if (!(bool)uVar19) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x44);
            goto LAB_036d969c;
          }
        }
      }
    }
    else if (puVar6 == (undefined *)0xa110364a) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d97c0 + 0x36d962c),0);
      uVar19 = iVar14 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x40);
        goto LAB_036d969c;
      }
    }
    else {
      bVar22 = (undefined *)0x757b0316 < puVar6;
      uVar19 = false;
      if (puVar6 == (undefined *)0x757b0317) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d97a0 + 0x36d9494),0);
        uVar19 = iVar14 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x3c);
          goto LAB_036d969c;
        }
      }
    }
  }
  else if (puVar6 < (undefined *)0xc9fcd30e) {
    if (puVar6 == (undefined *)0xbf0e11d1) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d97c8 + 0x36d9600),0);
      uVar19 = iVar14 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036d969c;
      }
    }
    else {
      bVar22 = (undefined *)0xc9fcd30c < puVar6;
      uVar19 = false;
      if (puVar6 == (undefined *)0xc9fcd30d) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d97a4 + 0x36d9450),0);
        uVar19 = iVar14 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x14);
          goto LAB_036d969c;
        }
      }
    }
  }
  else if (puVar6 == (undefined *)0xedb39c44) {
    iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d97b0 + 0x36d9684),0);
    uVar19 = iVar14 == 0;
    bVar22 = true;
    if (!(bool)uVar19) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x20);
      goto LAB_036d969c;
    }
  }
  else {
    bVar22 = (undefined *)0xfe254767 < puVar6;
    uVar19 = false;
    if (puVar6 == (undefined *)0xfe254768) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d97a8 + 0x36d9524),0);
      uVar19 = iVar14 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x4c);
        goto LAB_036d969c;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036d97cc + 0x36d9704));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036d97d0 + 0x36d9718));
  *(undefined4 *)((int)puVar15 + -0x20) = 0;
  func_0x0509473c(uVar4,uVar5,uVar9,0);
  func_0x024f83c0(uVar4,iVar12);
  uVar25 = func_0x024f83bc();
  iVar14 = (int)((ulonglong)uVar25 >> 0x20);
  iVar1 = (int)uVar25;
  bVar20 = false;
  bVar23 = bVar22;
  if ((bool)uVar19) {
    bVar23 = 0xffffffca < extraout_r12_01 || CARRY4(extraout_r12_01 + 0x35,(uint)bVar22);
    unaff_r11 = (undefined *)(extraout_r12_01 + 0x35 + (uint)bVar22);
    bVar20 = unaff_r11 == (undefined *)0x0;
  }
  bVar21 = false;
  uVar3 = extraout_r12_01;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xcfffffff < unaff_r8 || CARRY4(unaff_r8 + 0x30000000,(uint)bVar23);
    uVar3 = unaff_r8 + 0x30000000 + (uint)bVar23;
    bVar21 = uVar3 == 0;
  }
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfffffff2 < unaff_r10 || CARRY4(unaff_r10 + 0xd,(uint)bVar22);
  }
  bVar21 = bVar21 && unaff_r10 + 0xd + (uint)bVar22 == 0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xfffffff4 < unaff_r10 || CARRY4(unaff_r10 + 0xb,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0xb + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfffffff6 < unaff_r10 || CARRY4(unaff_r10 + 9,(uint)bVar22);
  }
  bVar21 = bVar21 && unaff_r10 + 9 + (uint)bVar22 == 0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xfffffff8 < unaff_r10 || CARRY4(unaff_r10 + 7,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 7 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfffffffa < unaff_r10 || CARRY4(unaff_r10 + 5,(uint)bVar22);
  }
  bVar21 = bVar21 && unaff_r10 + 5 + (uint)bVar22 == 0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xfffffffc < unaff_r10 || CARRY4(unaff_r10 + 3,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 3 + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfffffffe < unaff_r10 || CARRY4(unaff_r10 + 1,(uint)bVar22);
  }
  bVar21 = bVar21 && unaff_r10 + 1 + (uint)bVar22 == 0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xffffff03 < unaff_r10 || CARRY4(unaff_r10 + 0xfc,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0xfc + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffffff0b < unaff_r10 || CARRY4(unaff_r10 + 0xf4,(uint)bVar22);
  }
  bVar21 = bVar21 && unaff_r10 + 0xf4 + (uint)bVar22 == 0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xffffff13 < unaff_r10 || CARRY4(unaff_r10 + 0xec,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0xec + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffffff1b < unaff_r10 || CARRY4(unaff_r10 + 0xe4,(uint)bVar22);
  }
  bVar21 = bVar21 && unaff_r10 + 0xe4 + (uint)bVar22 == 0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xffffff23 < unaff_r10 || CARRY4(unaff_r10 + 0xdc,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0xdc + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffffff2b < unaff_r10 || CARRY4(unaff_r10 + 0xd4,(uint)bVar22);
  }
  bVar21 = bVar21 && unaff_r10 + 0xd4 + (uint)bVar22 == 0;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xffffff33 < unaff_r10 || CARRY4(unaff_r10 + 0xcc,(uint)bVar23);
  }
  bVar21 = bVar21 && unaff_r10 + 0xcc + (uint)bVar23 == 0;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffffff3b < unaff_r10 || CARRY4(unaff_r10 + 0xc4,(uint)bVar22);
  }
  bVar20 = false;
  bVar24 = bVar23;
  if (bVar21 && unaff_r10 + 0xc4 + (uint)bVar22 == 0) {
    bVar24 = 0x9ffffffe < unaff_r8 || CARRY4(unaff_r8 + 0x60000001,(uint)bVar23);
    uVar3 = unaff_r8 + 0x60000001 + (uint)bVar23;
    bVar20 = uVar3 == 0;
  }
  bVar21 = false;
  bVar22 = bVar24;
  if (bVar20) {
    bVar22 = 0xffffff53 < uVar3 || CARRY4(uVar3 + 0xac,(uint)bVar24);
    unaff_r11 = (undefined *)(uVar3 + 0xac + (uint)bVar24);
    bVar21 = unaff_r11 == (undefined *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfffffc7f < unaff_r10 || CARRY4(unaff_r10 + 0x380,(uint)bVar22);
    iVar14 = unaff_r10 + 0x380 + (uint)bVar22;
    bVar20 = iVar14 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xffffff7f < unaff_r10 || CARRY4(unaff_r10 + 0x80,(uint)bVar23);
    iVar14 = unaff_r10 + 0x80 + (uint)bVar23;
    bVar21 = iVar14 == 0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfffffa7f < unaff_r10 || CARRY4(unaff_r10 + 0x580,(uint)bVar22);
    iVar14 = unaff_r10 + 0x580 + (uint)bVar22;
    bVar20 = iVar14 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xfffffe1f < unaff_r10 || CARRY4(unaff_r10 + 0x1e0,(uint)bVar23);
    iVar14 = unaff_r10 + 0x1e0 + (uint)bVar23;
    bVar21 = iVar14 == 0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfffff6bf < unaff_r10 || CARRY4(unaff_r10 + 0x940,(uint)bVar22);
    iVar14 = unaff_r10 + 0x940 + (uint)bVar22;
    bVar20 = iVar14 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xfffff3bf < unaff_r10 || CARRY4(unaff_r10 + 0xc40,(uint)bVar23);
    iVar14 = unaff_r10 + 0xc40 + (uint)bVar23;
    bVar21 = iVar14 == 0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfffffeff < unaff_r10 || CARRY4(unaff_r10 + 0x100,(uint)bVar22);
    iVar14 = unaff_r10 + 0x100 + (uint)bVar22;
    bVar20 = iVar14 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xffffd3ff < unaff_r10 || CARRY4(unaff_r10 + 0x2c00,(uint)bVar23);
    iVar14 = unaff_r10 + 0x2c00 + (uint)bVar23;
    bVar21 = iVar14 == 0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffff7fff < unaff_r10 || CARRY4(unaff_r10 + 0x8000,(uint)bVar22);
    iVar14 = unaff_r10 + 0x8000 + (uint)bVar22;
    bVar20 = iVar14 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xffff5bff < unaff_r10 || CARRY4(unaff_r10 + 0xa400,(uint)bVar23);
    iVar14 = unaff_r10 + 0xa400 + (uint)bVar23;
    bVar21 = iVar14 == 0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffffe3ff < unaff_r10 || CARRY4(unaff_r10 + 0x1c00,(uint)bVar22);
    iVar14 = unaff_r10 + 0x1c00 + (uint)bVar22;
    bVar20 = iVar14 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xfffff0ff < unaff_r10 || CARRY4(unaff_r10 + 0xf00,(uint)bVar23);
    iVar14 = unaff_r10 + 0xf00 + (uint)bVar23;
    bVar21 = iVar14 == 0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffff2bff < unaff_r10 || CARRY4(unaff_r10 + 0xd400,(uint)bVar22);
    iVar14 = unaff_r10 + 0xd400 + (uint)bVar22;
    bVar20 = iVar14 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xffffd0ff < unaff_r10 || CARRY4(unaff_r10 + 0x2f00,(uint)bVar23);
    iVar14 = unaff_r10 + 0x2f00 + (uint)bVar23;
    bVar21 = iVar14 == 0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfffffdff < unaff_r10 || CARRY4(unaff_r10 + 0x200,(uint)bVar22);
    iVar14 = unaff_r10 + 0x200 + (uint)bVar22;
    bVar20 = iVar14 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xffdeffff < unaff_r8 || CARRY4(unaff_r8 + 0x210000,(uint)bVar23);
    puVar16 = (undefined1 *)(unaff_r8 + 0x210000 + (uint)bVar23);
    bVar21 = (undefined1 *)(unaff_r8 + 0x210000 + (uint)bVar23) == (undefined1 *)0x0;
  }
  if (bVar21) {
    unaff_r9 = unaff_r9 + 0xe8000 + (uint)bVar22;
  }
  *(undefined4 *)(puVar16 + -4) = 0x36d9744;
  *(undefined **)(puVar16 + -8) = unaff_r11;
  *(undefined4 *)(puVar16 + -0xc) = uVar13;
  *(undefined4 *)(puVar16 + -0x10) = uVar9;
  *(undefined4 *)(puVar16 + -0x14) = uVar4;
  *(int *)(puVar16 + -0x18) = iVar12;
  puVar17 = puVar16 + -0x20;
  puVar8 = *(undefined4 **)(iVar14 + 0x1c);
  if (puVar8 == (undefined4 *)0x0) {
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
    puVar8 = *(undefined4 **)(iVar14 + 0x1c);
    if (puVar8 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar14);
      puVar8 = *(undefined4 **)(iVar14 + 0x1c);
    }
  }
  uVar13 = *puVar8;
  iVar12 = *(int *)(iVar1 + 0x50);
  if (*(int *)(**(int **)(iRam036d9dd4 + 0x36d98e0) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar13 = func_0x05171434(uVar13,0);
  if (iVar12 == 0) {
    func_0x024f83d4();
  }
  uVar9 = func_0x0475399c(iVar12,uVar13,**(undefined4 **)(iRam036d9dd8 + 0x36d9924));
  puVar6 = (undefined *)func_0x02965180(uVar9,0);
  if (puVar6 < (undefined *)0x4a3314ab) {
    if (puVar6 < (undefined *)0x335bb157) {
      if (puVar6 == &UNK_02227698) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9e10 + 0x36d9b9c),0);
        uVar19 = iVar12 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x48);
LAB_036d9ce8:
          iVar1 = *(int *)(iVar12 + 4);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x024f83fc(iVar1);
          }
          piVar10 = (int *)0x0;
          if (piVar2 != (int *)0x0) {
            if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*piVar2 + 0xb8)) &&
               (piVar10 = piVar2,
               *(int *)(*(int *)(*piVar2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1))
            {
              piVar10 = (int *)0x0;
            }
          }
          return piVar10;
        }
      }
      else if (puVar6 == (undefined *)0xe7c632f) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9df8 + 0x36d9bc8),0);
        uVar19 = iVar12 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x1c);
          goto LAB_036d9ce8;
        }
      }
      else {
        bVar22 = (undefined *)0x335bb155 < puVar6;
        uVar19 = false;
        if (puVar6 == (undefined *)0x335bb156) {
          iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9ddc + 0x36d9990),0);
          uVar19 = iVar12 == 0;
          bVar22 = true;
          if (!(bool)uVar19) {
            iVar12 = *(int *)(iVar14 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x34);
            goto LAB_036d9ce8;
          }
        }
      }
    }
    else if (puVar6 < (undefined *)0x44330b39) {
      if (puVar6 == (undefined *)0x39a1cb23) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9e08 + 0x36d9c20),0);
        uVar19 = iVar12 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x38);
          goto LAB_036d9ce8;
        }
      }
      else {
        bVar22 = (undefined *)0x44330b37 < puVar6;
        uVar19 = false;
        if (puVar6 == (undefined *)0x44330b38) {
          iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9de0 + 0x36d9a48),0);
          uVar19 = iVar12 == 0;
          bVar22 = true;
          if (!(bool)uVar19) {
            iVar12 = *(int *)(iVar14 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x30);
            goto LAB_036d9ce8;
          }
        }
      }
    }
    else if (puVar6 == (undefined *)0x49331317) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9e00 + 0x36d9ca4),0);
      uVar19 = iVar12 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036d9ce8;
      }
    }
    else {
      bVar22 = (undefined *)0x4a3314a9 < puVar6;
      uVar19 = false;
      if (puVar6 == (undefined *)0x4a3314aa) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9de4 + 0x36d9b24),0);
        uVar19 = iVar12 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
          goto LAB_036d9ce8;
        }
      }
    }
  }
  else if (puVar6 < (undefined *)0xa110364b) {
    if (puVar6 < (undefined *)0x6927558b) {
      if (puVar6 == (undefined *)0x4b33163d) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9e04 + 0x36d9bf4),0);
        uVar19 = iVar12 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036d9ce8;
        }
      }
      else {
        bVar22 = (undefined *)0x69275589 < puVar6;
        uVar19 = false;
        if (puVar6 == (undefined *)0x6927558a) {
          iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9de8 + 0x36d99f4),0);
          uVar19 = iVar12 == 0;
          bVar22 = true;
          if (!(bool)uVar19) {
            iVar12 = *(int *)(iVar14 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x44);
            goto LAB_036d9ce8;
          }
        }
      }
    }
    else if (puVar6 == (undefined *)0xa110364a) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9e0c + 0x36d9c78),0);
      uVar19 = iVar12 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x40);
        goto LAB_036d9ce8;
      }
    }
    else {
      bVar22 = (undefined *)0x757b0316 < puVar6;
      uVar19 = false;
      if (puVar6 == (undefined *)0x757b0317) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9dec + 0x36d9ae0),0);
        uVar19 = iVar12 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x3c);
          goto LAB_036d9ce8;
        }
      }
    }
  }
  else if (puVar6 < (undefined *)0xc9fcd30e) {
    if (puVar6 == (undefined *)0xbf0e11d1) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9e14 + 0x36d9c4c),0);
      uVar19 = iVar12 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036d9ce8;
      }
    }
    else {
      bVar22 = (undefined *)0xc9fcd30c < puVar6;
      uVar19 = false;
      if (puVar6 == (undefined *)0xc9fcd30d) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9df0 + 0x36d9a9c),0);
        uVar19 = iVar12 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x14);
          goto LAB_036d9ce8;
        }
      }
    }
  }
  else if (puVar6 == (undefined *)0xedb39c44) {
    iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9dfc + 0x36d9cd0),0);
    uVar19 = iVar12 == 0;
    bVar22 = true;
    if (!(bool)uVar19) {
      iVar12 = *(int *)(iVar14 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x20);
      goto LAB_036d9ce8;
    }
  }
  else {
    bVar22 = (undefined *)0xfe254767 < puVar6;
    uVar19 = false;
    if (puVar6 == (undefined *)0xfe254768) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9df4 + 0x36d9b70),0);
      uVar19 = iVar12 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x4c);
        goto LAB_036d9ce8;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036d9e18 + 0x36d9d50));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036d9e1c + 0x36d9d64));
  *(undefined4 *)(puVar16 + -0x20) = 0;
  func_0x0509473c(uVar4,uVar5,uVar9,0);
  func_0x024f83c0(uVar4,iVar14);
  uVar25 = func_0x024f83bc();
  puVar6 = (undefined *)((ulonglong)uVar25 >> 0x20);
  iVar1 = (int)uVar25;
  bVar20 = false;
  bVar23 = bVar22;
  if ((bool)uVar19) {
    bVar23 = 0xfffddfff < extraout_r12_02 || CARRY4(extraout_r12_02 + 0x22000,(uint)bVar22);
    unaff_r10 = extraout_r12_02 + 0x22000 + (uint)bVar22;
    bVar20 = unaff_r10 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xffffc6ff < unaff_r8 || CARRY4(unaff_r8 + 0x3900,(uint)bVar23);
    unaff_r11 = (undefined *)(unaff_r8 + 0x3900 + (uint)bVar23);
    bVar21 = unaff_r11 == (undefined *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfff17fff < unaff_r10 || CARRY4(unaff_r10 + 0xe8000,(uint)bVar22);
    puVar6 = (undefined *)(unaff_r10 + 0xe8000 + (uint)bVar22);
    bVar20 = puVar6 == (undefined *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xfff1ffff < unaff_r10 || CARRY4(unaff_r10 + 0xe0000,(uint)bVar23);
    puVar6 = (undefined *)(unaff_r10 + 0xe0000 + (uint)bVar23);
    bVar21 = puVar6 == (undefined *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfff27fff < unaff_r10 || CARRY4(unaff_r10 + 0xd8000,(uint)bVar22);
    puVar6 = (undefined *)(unaff_r10 + 0xd8000 + (uint)bVar22);
    bVar20 = puVar6 == (undefined *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xfff2ffff < unaff_r10 || CARRY4(unaff_r10 + 0xd0000,(uint)bVar23);
    puVar6 = (undefined *)(unaff_r10 + 0xd0000 + (uint)bVar23);
    bVar21 = puVar6 == (undefined *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfff37fff < unaff_r10 || CARRY4(unaff_r10 + 0xc8000,(uint)bVar22);
    puVar6 = (undefined *)(unaff_r10 + 0xc8000 + (uint)bVar22);
    bVar20 = puVar6 == (undefined *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xfff3ffff < unaff_r10 || CARRY4(unaff_r10 + 0xc0000,(uint)bVar23);
    puVar6 = (undefined *)(unaff_r10 + 0xc0000 + (uint)bVar23);
    bVar21 = puVar6 == (undefined *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfff47fff < unaff_r10 || CARRY4(unaff_r10 + 0xb8000,(uint)bVar22);
    puVar6 = (undefined *)(unaff_r10 + 0xb8000 + (uint)bVar22);
    bVar20 = puVar6 == (undefined *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xfff4ffff < unaff_r10 || CARRY4(unaff_r10 + 0xb0000,(uint)bVar23);
    puVar6 = (undefined *)(unaff_r10 + 0xb0000 + (uint)bVar23);
    bVar21 = puVar6 == (undefined *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfff57fff < unaff_r10 || CARRY4(unaff_r10 + 0xa8000,(uint)bVar22);
    puVar6 = (undefined *)(unaff_r10 + 0xa8000 + (uint)bVar22);
    bVar20 = puVar6 == (undefined *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xfff5ffff < unaff_r10 || CARRY4(unaff_r10 + 0xa0000,(uint)bVar23);
    puVar6 = (undefined *)(unaff_r10 + 0xa0000 + (uint)bVar23);
    bVar21 = puVar6 == (undefined *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfff67fff < unaff_r10 || CARRY4(unaff_r10 + 0x98000,(uint)bVar22);
    puVar6 = (undefined *)(unaff_r10 + 0x98000 + (uint)bVar22);
    bVar20 = puVar6 == (undefined *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xfff6ffff < unaff_r10 || CARRY4(unaff_r10 + 0x90000,(uint)bVar23);
    puVar6 = (undefined *)(unaff_r10 + 0x90000 + (uint)bVar23);
    bVar21 = puVar6 == (undefined *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfff77fff < unaff_r10 || CARRY4(unaff_r10 + 0x88000,(uint)bVar22);
    puVar6 = (undefined *)(unaff_r10 + 0x88000 + (uint)bVar22);
    bVar20 = puVar6 == (undefined *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xfff7ffff < unaff_r10 || CARRY4(unaff_r10 + 0x80000,(uint)bVar23);
    puVar6 = (undefined *)(unaff_r10 + 0x80000 + (uint)bVar23);
    bVar21 = puVar6 == (undefined *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfff87fff < unaff_r10 || CARRY4(unaff_r10 + 0x78000,(uint)bVar22);
    puVar6 = (undefined *)(unaff_r10 + 0x78000 + (uint)bVar22);
    bVar20 = puVar6 == (undefined *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xfffffcff < unaff_r8 || CARRY4(unaff_r8 + 0x300,(uint)bVar23);
    unaff_r11 = (undefined *)(unaff_r8 + 0x300 + (uint)bVar23);
    bVar21 = unaff_r11 == (undefined *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfff9ffff < extraout_r12_02 || CARRY4(extraout_r12_02 + 0x60000,(uint)bVar22);
    unaff_r10 = extraout_r12_02 + 0x60000 + (uint)bVar22;
    bVar20 = unaff_r10 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xffdaffff < unaff_r10 || CARRY4(unaff_r10 + 0x250000,(uint)bVar23);
    puVar6 = (undefined *)(unaff_r10 + 0x250000 + (uint)bVar23);
    bVar21 = puVar6 == (undefined *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xff2bffff < unaff_r10 || CARRY4((uint)(&UNK_00d40000 + unaff_r10),(uint)bVar22);
    puVar6 = &UNK_00d40000 + bVar22 + unaff_r10;
    bVar20 = puVar6 == (undefined *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xfff3ffff < unaff_r10 || CARRY4(unaff_r10 + 0xc0000,(uint)bVar23);
    puVar6 = (undefined *)(unaff_r10 + 0xc0000 + (uint)bVar23);
    bVar21 = puVar6 == (undefined *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfff4ffff < unaff_r10 || CARRY4(unaff_r10 + 0xb0000,(uint)bVar22);
    puVar6 = (undefined *)(unaff_r10 + 0xb0000 + (uint)bVar22);
    bVar20 = puVar6 == (undefined *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xffb7ffff < unaff_r10 || CARRY4(unaff_r10 + 0x480000,(uint)bVar23);
    puVar6 = (undefined *)(unaff_r10 + 0x480000 + (uint)bVar23);
    bVar21 = puVar6 == (undefined *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xff87ffff < unaff_r10 || CARRY4(unaff_r10 + 0x780000,(uint)bVar22);
    puVar6 = (undefined *)(unaff_r10 + 0x780000 + (uint)bVar22);
    bVar20 = puVar6 == (undefined *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xfcefffff < unaff_r10 || CARRY4((uint)(&UNK_03100000 + unaff_r10),(uint)bVar23);
    puVar6 = &UNK_03100000 + bVar23 + unaff_r10;
    bVar21 = puVar6 == (undefined *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfe6fffff < unaff_r10 || CARRY4((uint)(&UNK_01900000 + unaff_r10),(uint)bVar22);
    puVar6 = &UNK_01900000 + bVar22 + unaff_r10;
    bVar20 = puVar6 == (undefined *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xfcbfffff < unaff_r10 || CARRY4((uint)(&UNK_03400000 + unaff_r10),(uint)bVar23);
    puVar6 = &UNK_03400000 + bVar23 + unaff_r10;
    bVar21 = puVar6 == (undefined *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfa7fffff < unaff_r10 || CARRY4((uint)(&UNK_05800000 + unaff_r10),(uint)bVar22);
    puVar6 = &UNK_05800000 + bVar22 + unaff_r10;
    bVar20 = puVar6 == (undefined *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xff6fffff < unaff_r10 || CARRY4((uint)(&UNK_00900000 + unaff_r10),(uint)bVar23);
    puVar6 = &UNK_00900000 + bVar23 + unaff_r10;
    bVar21 = puVar6 == (undefined *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xf0ffffff < unaff_r10 || CARRY4(unaff_r10 + 0xf000000,(uint)bVar22);
    puVar6 = (undefined *)(unaff_r10 + 0xf000000 + (uint)bVar22);
    bVar20 = puVar6 == (undefined *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xf77fffff < unaff_r10 || CARRY4(unaff_r10 + 0x8800000,(uint)bVar23);
    puVar6 = (undefined *)(unaff_r10 + 0x8800000 + (uint)bVar23);
    bVar21 = puVar6 == (undefined *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfe3fffff < unaff_r10 || CARRY4(unaff_r10 + 0x1c00000,(uint)bVar22);
    puVar6 = (undefined *)(unaff_r10 + 0x1c00000 + (uint)bVar22);
    bVar20 = puVar6 == (undefined *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xf43fffff < unaff_r10 || CARRY4(unaff_r10 + 0xbc00000,(uint)bVar23);
    puVar6 = (undefined *)(unaff_r10 + 0xbc00000 + (uint)bVar23);
    bVar21 = puVar6 == (undefined *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0x1fffffff < unaff_r8 || CARRY4(unaff_r8 + 0xe0000000,(uint)bVar22);
    puVar17 = (undefined1 *)(unaff_r8 + 0xe0000000 + (uint)bVar22);
    bVar20 = (undefined1 *)(unaff_r8 + 0xe0000000 + (uint)bVar22) == (undefined1 *)0x0;
  }
  if (bVar20) {
    unaff_r9 = unaff_r9 + -0x64000000 + (uint)bVar23;
  }
  *(undefined4 *)(puVar17 + -4) = 0x36d9d90;
  *(undefined **)(puVar17 + -8) = unaff_r11;
  *(undefined4 *)(puVar17 + -0xc) = uVar13;
  *(undefined4 *)(puVar17 + -0x10) = uVar9;
  *(undefined4 *)(puVar17 + -0x14) = uVar4;
  *(int *)(puVar17 + -0x18) = iVar14;
  puVar8 = *(undefined4 **)(puVar6 + 0x1c);
  if (puVar8 == (undefined4 *)0x0) {
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
    puVar8 = *(undefined4 **)(puVar6 + 0x1c);
    if (puVar8 == (undefined4 *)0x0) {
      func_0x024f83f8(puVar6);
      puVar8 = *(undefined4 **)(puVar6 + 0x1c);
    }
  }
  uVar13 = *puVar8;
  iVar12 = *(int *)(iVar1 + 0x48);
  if (*(int *)(**(int **)(iRam036da378 + 0x36d9f14) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar13 = func_0x05171434(uVar13,0);
  if (iVar12 == 0) {
    func_0x024f83d4();
  }
  uVar9 = func_0x0475399c(iVar12,uVar13,**(undefined4 **)(iRam036da37c + 0x36d9f58));
  puVar7 = (undefined *)func_0x02965180(uVar9,0);
  if (puVar7 < (undefined *)0x87a4488d) {
    if (puVar7 < (undefined *)0x4b393819) {
      if (puVar7 == &UNK_048acfb8) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da3a4 + 0x36da148),0);
        uVar19 = iVar12 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(puVar6 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x34);
LAB_036da294:
          iVar1 = *(int *)(iVar12 + 4);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x024f83fc(iVar1);
          }
          piVar10 = (int *)0x0;
          if (piVar2 != (int *)0x0) {
            if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*piVar2 + 0xb8)) &&
               (piVar10 = piVar2,
               *(int *)(*(int *)(*piVar2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1))
            {
              piVar10 = (int *)0x0;
            }
          }
          return piVar10;
        }
      }
      else if (puVar7 == (undefined *)0x44648d72) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da3a0 + 0x36da174),0);
        uVar19 = iVar12 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(puVar6 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x30);
          goto LAB_036da294;
        }
      }
      else {
        bVar22 = (undefined *)0x4b393817 < puVar7;
        uVar19 = false;
        if (puVar7 == (undefined *)0x4b393818) {
          iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da380 + 0x36d9fc4),0);
          uVar19 = iVar12 == 0;
          bVar22 = true;
          if (!(bool)uVar19) {
            iVar12 = *(int *)(puVar6 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x14);
            goto LAB_036da294;
          }
        }
      }
    }
    else if (puVar7 == (undefined *)0x87a4488c) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da394 + 0x36da1f8),0);
      uVar19 = iVar12 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(puVar6 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036da294;
      }
    }
    else if (puVar7 == (undefined *)0x5bc15335) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da3ac + 0x36da224),0);
      uVar19 = iVar12 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(puVar6 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x44);
        goto LAB_036da294;
      }
    }
    else {
      bVar22 = (undefined *)0x5d6adef6 < puVar7;
      uVar19 = false;
      if (puVar7 == (undefined *)0x5d6adef7) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da384 + 0x36da07c),0);
        uVar19 = iVar12 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(puVar6 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036da294;
        }
      }
    }
  }
  else if (puVar7 < (undefined *)0xaf0e9ec8) {
    if (puVar7 == (undefined *)0x8e74336c) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da39c + 0x36da1a0),0);
      uVar19 = iVar12 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(puVar6 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036da294;
      }
    }
    else if (puVar7 == (undefined *)0x9dbb78b9) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da3a8 + 0x36da1cc),0);
      uVar19 = iVar12 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(puVar6 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x3c);
        goto LAB_036da294;
      }
    }
    else {
      bVar22 = (undefined *)0xaf0e9ec6 < puVar7;
      uVar19 = false;
      if (puVar7 == (undefined *)0xaf0e9ec7) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da388 + 0x36da028),0);
        uVar19 = iVar12 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(puVar6 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x40);
          goto LAB_036da294;
        }
      }
    }
  }
  else if (puVar7 < (undefined *)0xd3917654) {
    if (puVar7 == (undefined *)0xcd1701e0) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da3b0 + 0x36da250),0);
      uVar19 = iVar12 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(puVar6 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036da294;
      }
    }
    else {
      bVar22 = (undefined *)0xd3917652 < puVar7;
      uVar19 = false;
      if (puVar7 == (undefined *)0xd3917653) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da38c + 0x36da0d0),0);
        uVar19 = iVar12 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(puVar6 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
          goto LAB_036da294;
        }
      }
    }
  }
  else if (puVar7 == (undefined *)0xdf1ae323) {
    iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da398 + 0x36da27c),0);
    uVar19 = iVar12 == 0;
    bVar22 = true;
    if (!(bool)uVar19) {
      iVar12 = *(int *)(puVar6 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x20);
      goto LAB_036da294;
    }
  }
  else {
    bVar22 = (undefined *)0xed8e82d0 < puVar7;
    uVar19 = false;
    if (puVar7 == (undefined *)0xed8e82d1) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da390 + 0x36da11c),0);
      uVar19 = iVar12 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(puVar6 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x38);
        goto LAB_036da294;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036da3b4 + 0x36da2fc));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036da3b8 + 0x36da310));
  *(undefined4 *)(puVar17 + -0x20) = 0;
  func_0x0509473c(uVar4,uVar5,uVar9,0);
  func_0x024f83c0(uVar4,puVar6);
  uVar25 = func_0x024f83bc();
  iVar12 = (int)((ulonglong)uVar25 >> 0x20);
  iVar1 = (int)uVar25;
  bVar20 = false;
  bVar23 = bVar22;
  if ((bool)uVar19) {
    bVar23 = 0xf0ffffff < extraout_r12_03 || CARRY4(extraout_r12_03 + 0xf000000,(uint)bVar22);
    unaff_r10 = extraout_r12_03 + 0xf000000 + (uint)bVar22;
    bVar20 = unaff_r10 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xfd9fffff < unaff_r8 || CARRY4((uint)(&UNK_02600000 + unaff_r8),(uint)bVar23);
    unaff_r11 = &UNK_02600000 + bVar23 + unaff_r8;
    bVar21 = unaff_r11 == (undefined *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0x5ffffffd < unaff_r10 || CARRY4(unaff_r10 + 0xa0000002,(uint)bVar22);
    iVar12 = unaff_r10 + 0xa0000002 + (uint)bVar22;
    bVar20 = iVar12 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0x7ffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x80000002,(uint)bVar23);
    iVar12 = unaff_r10 + 0x80000002 + (uint)bVar23;
    bVar21 = iVar12 == 0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0x9ffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x60000002,(uint)bVar22);
    iVar12 = unaff_r10 + 0x60000002 + (uint)bVar22;
    bVar20 = iVar12 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xbffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x40000002,(uint)bVar23);
    iVar12 = unaff_r10 + 0x40000002 + (uint)bVar23;
    bVar21 = iVar12 == 0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xdffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x20000002,(uint)bVar22);
    iVar12 = unaff_r10 + 0x20000002 + (uint)bVar22;
    bVar20 = iVar12 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xfffffffd < unaff_r10 || CARRY4(unaff_r10 + 2,(uint)bVar23);
    iVar12 = unaff_r10 + 2 + (uint)bVar23;
    bVar21 = iVar12 == 0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0x1ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0xe0000001,(uint)bVar22);
    iVar12 = unaff_r10 + 0xe0000001 + (uint)bVar22;
    bVar20 = iVar12 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0x3ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0xc0000001,(uint)bVar23);
    iVar12 = unaff_r10 + 0xc0000001 + (uint)bVar23;
    bVar21 = iVar12 == 0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0x5ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0xa0000001,(uint)bVar22);
    iVar12 = unaff_r10 + 0xa0000001 + (uint)bVar22;
    bVar20 = iVar12 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0x7ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x80000001,(uint)bVar23);
    iVar12 = unaff_r10 + 0x80000001 + (uint)bVar23;
    bVar21 = iVar12 == 0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0x9ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x60000001,(uint)bVar22);
    iVar12 = unaff_r10 + 0x60000001 + (uint)bVar22;
    bVar20 = iVar12 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xbffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x40000001,(uint)bVar23);
    iVar12 = unaff_r10 + 0x40000001 + (uint)bVar23;
    bVar21 = iVar12 == 0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xdffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x20000001,(uint)bVar22);
    iVar12 = unaff_r10 + 0x20000001 + (uint)bVar22;
    bVar20 = iVar12 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xf27fffff < unaff_r8 || CARRY4(unaff_r8 + 0xd800000,(uint)bVar23);
    unaff_r11 = (undefined *)(unaff_r8 + 0xd800000 + (uint)bVar23);
    bVar21 = unaff_r11 == (undefined *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xd3ffffff < extraout_r12_03 || CARRY4(extraout_r12_03 + 0x2c000000,(uint)bVar22);
    unaff_r10 = extraout_r12_03 + 0x2c000000 + (uint)bVar22;
    bVar20 = unaff_r10 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0x3ffffffa < unaff_r10 || CARRY4(unaff_r10 + 0xc0000005,(uint)bVar23);
    iVar12 = unaff_r10 + 0xc0000005 + (uint)bVar23;
    bVar21 = iVar12 == 0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffffffd8 < unaff_r10 || CARRY4(unaff_r10 + 0x27,(uint)bVar22);
    iVar12 = unaff_r10 + 0x27 + (uint)bVar22;
    bVar20 = iVar12 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xffffffc4 < unaff_r10 || CARRY4(unaff_r10 + 0x3b,(uint)bVar23);
    iVar12 = unaff_r10 + 0x3b + (uint)bVar23;
    bVar21 = iVar12 == 0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffffffe5 < unaff_r10 || CARRY4(unaff_r10 + 0x1a,(uint)bVar22);
    iVar12 = unaff_r10 + 0x1a + (uint)bVar22;
    bVar20 = iVar12 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xfffffff9 < unaff_r10 || CARRY4(unaff_r10 + 6,(uint)bVar23);
    iVar12 = unaff_r10 + 6 + (uint)bVar23;
    bVar21 = iVar12 == 0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffffffcf < unaff_r10 || CARRY4(unaff_r10 + 0x30,(uint)bVar22);
    iVar12 = unaff_r10 + 0x30 + (uint)bVar22;
    bVar20 = iVar12 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xfffffdcf < unaff_r10 || CARRY4(unaff_r10 + 0x230,(uint)bVar23);
    iVar1 = unaff_r10 + 0x230 + (uint)bVar23;
    bVar21 = iVar1 == 0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffffff8f < unaff_r10 || CARRY4(unaff_r10 + 0x70,(uint)bVar22);
    iVar12 = unaff_r10 + 0x70 + (uint)bVar22;
    bVar20 = iVar12 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xffffff43 < unaff_r10 || CARRY4(unaff_r10 + 0xbc,(uint)bVar23);
    iVar12 = unaff_r10 + 0xbc + (uint)bVar23;
    bVar21 = iVar12 == 0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffffff23 < unaff_r10 || CARRY4(unaff_r10 + 0xdc,(uint)bVar22);
    iVar12 = unaff_r10 + 0xdc + (uint)bVar22;
    bVar20 = iVar12 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xffffff9f < unaff_r10 || CARRY4(unaff_r10 + 0x60,(uint)bVar23);
    iVar12 = unaff_r10 + 0x60 + (uint)bVar23;
    bVar21 = iVar12 == 0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfffffc1f < unaff_r10 || CARRY4(unaff_r10 + 0x3e0,(uint)bVar22);
    iVar1 = unaff_r10 + 0x3e0 + (uint)bVar22;
    bVar20 = iVar1 == 0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xfffffd0f < unaff_r10 || CARRY4(unaff_r10 + 0x2f0,(uint)bVar23);
    iVar1 = unaff_r10 + 0x2f0 + (uint)bVar23;
    bVar21 = iVar1 == 0;
  }
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffffdcff < unaff_r8 || CARRY4(unaff_r8 + 0x2300,(uint)bVar22);
  }
  if (bVar21 && unaff_r8 + 0x2300 + (uint)bVar22 == 0) {
    unaff_r8 = unaff_r9 + 0xf00 + (uint)bVar23;
  }
  *(undefined4 *)(puVar17 + -0x24) = 0x36da33c;
  *(undefined **)(puVar17 + -0x28) = unaff_r11;
  *(undefined4 *)(puVar17 + -0x2c) = uVar13;
  *(undefined4 *)(puVar17 + -0x30) = uVar9;
  *(undefined4 *)(puVar17 + -0x34) = uVar4;
  *(undefined **)(puVar17 + -0x38) = puVar6;
  puVar8 = *(undefined4 **)(iVar12 + 0x1c);
  if (puVar8 == (undefined4 *)0x0) {
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
    puVar8 = *(undefined4 **)(iVar12 + 0x1c);
    if (puVar8 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar12);
      puVar8 = *(undefined4 **)(iVar12 + 0x1c);
    }
  }
  uVar13 = *puVar8;
  iVar14 = *(int *)(iVar1 + 0x48);
  if (*(int *)(**(int **)(iRam036da914 + 0x36da4b0) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar13 = func_0x05171434(uVar13,0);
  if (iVar14 == 0) {
    func_0x024f83d4();
  }
  uVar13 = func_0x0475399c(iVar14,uVar13,**(undefined4 **)(iRam036da918 + 0x36da4f4));
  puVar6 = (undefined *)func_0x02965180(uVar13,0);
  if (puVar6 < (undefined *)0x87a4488d) {
    if (puVar6 < (undefined *)0x4b393819) {
      if (puVar6 == &UNK_048acfb8) {
        iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da940 + 0x36da6e4),0);
        uVar19 = iVar14 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x34);
LAB_036da830:
          iVar1 = *(int *)(iVar12 + 4);
          if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
            iVar1 = func_0x024f83fc(iVar1);
          }
          piVar10 = (int *)0x0;
          if (piVar2 != (int *)0x0) {
            if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*piVar2 + 0xb8)) &&
               (piVar10 = piVar2,
               *(int *)(*(int *)(*piVar2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1))
            {
              piVar10 = (int *)0x0;
            }
          }
          return piVar10;
        }
      }
      else if (puVar6 == (undefined *)0x44648d72) {
        iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da93c + 0x36da710),0);
        uVar19 = iVar14 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x30);
          goto LAB_036da830;
        }
      }
      else {
        bVar22 = (undefined *)0x4b393817 < puVar6;
        uVar19 = false;
        if (puVar6 == (undefined *)0x4b393818) {
          iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da91c + 0x36da560),0);
          uVar19 = iVar14 == 0;
          bVar22 = true;
          if (!(bool)uVar19) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x14);
            goto LAB_036da830;
          }
        }
      }
    }
    else if (puVar6 == (undefined *)0x87a4488c) {
      iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da930 + 0x36da794),0);
      uVar19 = iVar14 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036da830;
      }
    }
    else if (puVar6 == (undefined *)0x5bc15335) {
      iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da948 + 0x36da7c0),0);
      uVar19 = iVar14 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x44);
        goto LAB_036da830;
      }
    }
    else {
      bVar22 = (undefined *)0x5d6adef6 < puVar6;
      uVar19 = false;
      if (puVar6 == (undefined *)0x5d6adef7) {
        iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da920 + 0x36da618),0);
        uVar19 = iVar14 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036da830;
        }
      }
    }
  }
  else if (puVar6 < (undefined *)0xaf0e9ec8) {
    if (puVar6 == (undefined *)0x8e74336c) {
      iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da938 + 0x36da73c),0);
      uVar19 = iVar14 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036da830;
      }
    }
    else if (puVar6 == (undefined *)0x9dbb78b9) {
      iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da944 + 0x36da768),0);
      uVar19 = iVar14 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x3c);
        goto LAB_036da830;
      }
    }
    else {
      bVar22 = (undefined *)0xaf0e9ec6 < puVar6;
      uVar19 = false;
      if (puVar6 == (undefined *)0xaf0e9ec7) {
        iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da924 + 0x36da5c4),0);
        uVar19 = iVar14 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x40);
          goto LAB_036da830;
        }
      }
    }
  }
  else if (puVar6 < (undefined *)0xd3917654) {
    if (puVar6 == (undefined *)0xcd1701e0) {
      iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da94c + 0x36da7ec),0);
      uVar19 = iVar14 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036da830;
      }
    }
    else {
      bVar22 = (undefined *)0xd3917652 < puVar6;
      uVar19 = false;
      if (puVar6 == (undefined *)0xd3917653) {
        iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da928 + 0x36da66c),0);
        uVar19 = iVar14 == 0;
        bVar22 = true;
        if (!(bool)uVar19) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
          goto LAB_036da830;
        }
      }
    }
  }
  else if (puVar6 == (undefined *)0xdf1ae323) {
    iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da934 + 0x36da818),0);
    uVar19 = iVar14 == 0;
    bVar22 = true;
    if (!(bool)uVar19) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x20);
      goto LAB_036da830;
    }
  }
  else {
    bVar22 = (undefined *)0xed8e82d0 < puVar6;
    uVar19 = false;
    if (puVar6 == (undefined *)0xed8e82d1) {
      iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da92c + 0x36da6b8),0);
      uVar19 = iVar14 == 0;
      bVar22 = true;
      if (!(bool)uVar19) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x38);
        goto LAB_036da830;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036da950 + 0x36da898));
  uVar9 = func_0x024f83c8();
  uVar4 = func_0x024f83b8(*(undefined4 *)(iRam036da954 + 0x36da8ac));
  *(undefined4 *)(puVar17 + -0x40) = 0;
  func_0x0509473c(uVar9,uVar4,uVar13,0);
  func_0x024f83c0(uVar9,iVar12);
  pcVar11 = (char *)func_0x024f83bc();
  bVar23 = bVar22;
  if ((bool)uVar19) {
    bVar23 = 0xfffffd7f < extraout_r12_04 || CARRY4(extraout_r12_04 + 0x280,(uint)bVar22);
  }
  bVar20 = false;
  bVar24 = bVar23;
  if ((bool)uVar19 && extraout_r12_04 + 0x280 + (uint)bVar22 == 0) {
    bVar24 = 0xffffffc0 < unaff_r8 || CARRY4(unaff_r8 + 0x3f,(uint)bVar23);
    unaff_r11 = (undefined *)(unaff_r8 + 0x3f + (uint)bVar23);
    bVar20 = unaff_r11 == (undefined *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar24;
  if (bVar20) {
    bVar22 = 0xffffff3f < unaff_r10 || CARRY4(unaff_r10 + 0xc0,(uint)bVar24);
    pcVar11 = (char *)(unaff_r10 + 0xc0 + (uint)bVar24);
    bVar21 = pcVar11 == (char *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffffffbf < unaff_r10 || CARRY4(unaff_r10 + 0x40,(uint)bVar22);
    pcVar11 = (char *)(unaff_r10 + 0x40 + (uint)bVar22);
    bVar20 = pcVar11 == (char *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xffffc0ff < unaff_r10 || CARRY4(unaff_r10 + 0x3f00,(uint)bVar23);
    pcVar11 = (char *)(unaff_r10 + 0x3f00 + (uint)bVar23);
    bVar21 = pcVar11 == (char *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffffc2ff < unaff_r10 || CARRY4(unaff_r10 + 0x3d00,(uint)bVar22);
    pcVar11 = (char *)(unaff_r10 + 0x3d00 + (uint)bVar22);
    bVar20 = pcVar11 == (char *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xffffc4ff < unaff_r10 || CARRY4(unaff_r10 + 0x3b00,(uint)bVar23);
    pcVar11 = (char *)(unaff_r10 + 0x3b00 + (uint)bVar23);
    bVar21 = pcVar11 == (char *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffffc6ff < unaff_r10 || CARRY4(unaff_r10 + 0x3900,(uint)bVar22);
    pcVar11 = (char *)(unaff_r10 + 0x3900 + (uint)bVar22);
    bVar20 = pcVar11 == (char *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xffffc8ff < unaff_r10 || CARRY4(unaff_r10 + 0x3700,(uint)bVar23);
    pcVar11 = (char *)(unaff_r10 + 0x3700 + (uint)bVar23);
    bVar21 = pcVar11 == (char *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffffcaff < unaff_r10 || CARRY4(unaff_r10 + 0x3500,(uint)bVar22);
    pcVar11 = (char *)(unaff_r10 + 0x3500 + (uint)bVar22);
    bVar20 = pcVar11 == (char *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xffffccff < unaff_r10 || CARRY4(unaff_r10 + 0x3300,(uint)bVar23);
    pcVar11 = (char *)(unaff_r10 + 0x3300 + (uint)bVar23);
    bVar21 = pcVar11 == (char *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffffceff < unaff_r10 || CARRY4(unaff_r10 + 0x3100,(uint)bVar22);
    pcVar11 = (char *)(unaff_r10 + 0x3100 + (uint)bVar22);
    bVar20 = pcVar11 == (char *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xffffd0ff < unaff_r10 || CARRY4(unaff_r10 + 0x2f00,(uint)bVar23);
    pcVar11 = (char *)(unaff_r10 + 0x2f00 + (uint)bVar23);
    bVar21 = pcVar11 == (char *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xffffd2ff < unaff_r10 || CARRY4(unaff_r10 + 0x2d00,(uint)bVar22);
    pcVar11 = (char *)(unaff_r10 + 0x2d00 + (uint)bVar22);
    bVar20 = pcVar11 == (char *)0x0;
  }
  bVar21 = false;
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xffffd4ff < unaff_r10 || CARRY4(unaff_r10 + 0x2b00,(uint)bVar23);
    pcVar11 = (char *)(unaff_r10 + 0x2b00 + (uint)bVar23);
    bVar21 = pcVar11 == (char *)0x0;
  }
  bVar20 = false;
  bVar23 = bVar22;
  if (bVar21) {
    bVar23 = 0xfffffff0 < unaff_r8 || CARRY4(unaff_r8 + 0xf,(uint)bVar22);
    unaff_r11 = (undefined *)(unaff_r8 + 0xf + (uint)bVar22);
    bVar20 = unaff_r11 == (undefined *)0x0;
  }
  bVar22 = bVar23;
  if (bVar20) {
    bVar22 = 0xfffff6ff < extraout_r12_04 || CARRY4(extraout_r12_04 + 0x900,(uint)bVar23);
  }
  bVar21 = false;
  bVar24 = bVar22;
  if (bVar20 && extraout_r12_04 + 0x900 + (uint)bVar23 == 0) {
    bVar24 = 0xffff3fff < unaff_r10 || CARRY4(unaff_r10 + 0xc000,(uint)bVar22);
    pcVar11 = (char *)(unaff_r10 + 0xc000 + (uint)bVar22);
    bVar21 = pcVar11 == (char *)0x0;
  }
  bVar20 = false;
  bVar22 = bVar24;
  if (bVar21) {
    bVar22 = CARRY4(unaff_r10,(uint)bVar24);
    pcVar11 = (char *)(unaff_r10 + bVar24);
    bVar20 = pcVar11 == (char *)0x0;
  }
  bVar21 = false;
  bVar23 = bVar22;
  if (bVar20) {
    bVar23 = 0xffffafff < unaff_r10 || CARRY4(unaff_r10 + 0x5000,(uint)bVar22);
    pcVar11 = (char *)(unaff_r10 + 0x5000 + (uint)bVar22);
    bVar21 = pcVar11 == (char *)0x0;
  }
  bVar20 = false;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xfffccfff < unaff_r10 ||
             CARRY4((uint)(
                          "_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE23__do_get_floating_pointIfEES4_S4_S4_RNS_8ios_baseERjRT_"
                          + unaff_r10 + 0x11),(uint)bVar23);
    pcVar11 = "_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE23__do_get_floating_pointIfEES4_S4_S4_RNS_8ios_baseERjRT_"
              + (uint)bVar23 + unaff_r10 + 0x11;
    bVar20 = pcVar11 == (char *)0x0;
  }
  bVar21 = false;
  bVar23 = bVar22;
  if (bVar20) {
    bVar23 = 0xfffe0fff < unaff_r10 || CARRY4(unaff_r10 + 0x1f000,(uint)bVar22);
    pcVar11 = (char *)(unaff_r10 + 0x1f000 + (uint)bVar22);
    bVar21 = pcVar11 == (char *)0x0;
  }
  bVar20 = false;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xfff6bfff < unaff_r10 || CARRY4(unaff_r10 + 0x94000,(uint)bVar23);
    pcVar11 = (char *)(unaff_r10 + 0x94000 + (uint)bVar23);
    bVar20 = pcVar11 == (char *)0x0;
  }
  bVar21 = false;
  bVar23 = bVar22;
  if (bVar20) {
    bVar23 = 0xffc3ffff < unaff_r10 || CARRY4(unaff_r10 + 0x3c0000,(uint)bVar22);
    pcVar11 = (char *)(unaff_r10 + 0x3c0000 + (uint)bVar22);
    bVar21 = pcVar11 == (char *)0x0;
  }
  bVar20 = false;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xfff2bfff < unaff_r10 || CARRY4(unaff_r10 + 0xd4000,(uint)bVar23);
    pcVar11 = (char *)(unaff_r10 + 0xd4000 + (uint)bVar23);
    bVar20 = pcVar11 == (char *)0x0;
  }
  bVar21 = false;
  bVar23 = bVar22;
  if (bVar20) {
    bVar23 = 0xffff7fff < unaff_r10 || CARRY4(unaff_r10 + 0x8000,(uint)bVar22);
    pcVar11 = (char *)(unaff_r10 + 0x8000 + (uint)bVar22);
    bVar21 = pcVar11 == (char *)0x0;
  }
  bVar20 = false;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xfffeffff < unaff_r10 || CARRY4(unaff_r10 + 0x10000,(uint)bVar23);
    pcVar11 = (char *)(unaff_r10 + 0x10000 + (uint)bVar23);
    bVar20 = pcVar11 == (char *)0x0;
  }
  bVar21 = false;
  bVar23 = bVar22;
  if (bVar20) {
    bVar23 = 0xfff3bfff < unaff_r10 || CARRY4(unaff_r10 + 0xc4000,(uint)bVar22);
    pcVar11 = (char *)(unaff_r10 + 0xc4000 + (uint)bVar22);
    bVar21 = pcVar11 == (char *)0x0;
  }
  bVar20 = false;
  bVar22 = bVar23;
  if (bVar21) {
    bVar22 = 0xfffa3fff < unaff_r10 || CARRY4(unaff_r10 + 0x5c000,(uint)bVar23);
    pcVar11 = (char *)(unaff_r10 + 0x5c000 + (uint)bVar23);
    bVar20 = pcVar11 == (char *)0x0;
  }
  if (bVar20) {
    pcVar11 = (char *)(unaff_r10 + 0x20000 + (uint)bVar22);
  }
  *(undefined4 *)(puVar17 + -0x44) = 0x36da8d8;
  *(undefined **)(puVar17 + -0x48) = unaff_r11;
  *(undefined4 *)(puVar17 + -0x4c) = uVar9;
  *(int *)(puVar17 + -0x50) = iVar12;
  iVar1 = *(int *)(pcVar11 + 0x10);
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
    iVar1 = *(int *)(pcVar11 + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x024f83fc();
    }
    piVar2 = (int *)func_0x049a8660(*(undefined4 *)(*(int *)(iVar1 + 0x60) + 0xc));
    func_0x024f8404();
    iVar1 = *(int *)(pcVar11 + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x024f83fc();
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x024f83fc();
    }
    iVar12 = *(int *)(pcVar11 + 0x10);
    **(int **)(iVar1 + 0x5c) = (int)piVar2;
    if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
      iVar12 = func_0x024f83fc();
    }
    iVar1 = *(int *)(*(int *)(iVar12 + 0x60) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x024f83fc();
    }
    func_0x024f83f0(*(undefined4 *)(iVar1 + 0x5c),piVar2);
  }
  return piVar2;
}

