
/* WARNING: Removing unreachable block (ram,0x036d77c0) */
/* WARNING: Removing unreachable block (ram,0x036d7d04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_018c3218(undefined4 param_1)

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
  char *extraout_r12_00;
  undefined *extraout_r12_01;
  uint extraout_r12_02;
  uint extraout_r12_03;
  uint extraout_r12_04;
  uint extraout_r12_05;
  uint extraout_r12_06;
  uint extraout_r12_07;
  uint extraout_r12_08;
  undefined4 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int iVar22;
  undefined1 uVar23;
  bool bVar24;
  bool bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  undefined8 uVar29;
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
  
  pcVar11 = (char *)(_UNK_018c32f8 + 0x18c322c);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018c32fc + 0x18c3240));
    func_0x01438628(*(undefined4 *)(_UNK_018c3300 + 0x18c324c));
    func_0x01438628(*(undefined4 *)(_UNK_018c3304 + 0x18c3258));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1447,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1447,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar11 = (char *)(_UNK_028a3584 + 0x28a34a4);
    if (*pcVar11 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a3588 + 0x28a34b8),param_1,0);
      *pcVar11 = '\x01';
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
    piVar2 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a358c + 0x28a3574));
    return piVar2;
  }
  if (*(int *)(**(int **)(_UNK_018c3308 + 0x18c32b0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018c330c + 0x18c32cc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar12 = **(int **)(_UNK_018c3310 + 0x18c32ec);
  puVar15 = auStack_20;
  puVar8 = *(undefined4 **)(iVar12 + 0x1c);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam036d774c + 0x36d72a8));
    func_0x024f83cc(*(undefined4 *)(iRam036d7750 + 0x36d72b4));
    func_0x024f83cc(*(undefined4 *)(iRam036d7754 + 0x36d72c0));
    func_0x024f83cc(*(undefined4 *)(iRam036d7758 + 0x36d72cc));
    func_0x024f83cc(*(undefined4 *)(iRam036d775c + 0x36d72d8));
    func_0x024f83cc(*(undefined4 *)(iRam036d7760 + 0x36d72e4));
    func_0x024f83cc(*(undefined4 *)(iRam036d7764 + 0x36d72f0));
    func_0x024f83cc(*(undefined4 *)(iRam036d7768 + 0x36d72fc));
    func_0x024f83cc(*(undefined4 *)(iRam036d776c + 0x36d7308));
    func_0x024f83cc(*(undefined4 *)(iRam036d7770 + 0x36d7314));
    func_0x024f83cc(*(undefined4 *)(iRam036d7774 + 0x36d7320));
    func_0x024f83cc(*(undefined4 *)(iRam036d7778 + 0x36d732c));
    func_0x024f83cc(*(undefined4 *)(iRam036d777c + 0x36d7338));
    func_0x024f83cc(*(undefined4 *)(iRam036d7780 + 0x36d7344));
    puVar8 = *(undefined4 **)(iVar12 + 0x1c);
    if (puVar8 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar12);
      puVar8 = *(undefined4 **)(iVar12 + 0x1c);
    }
  }
  uVar13 = *puVar8;
  iVar14 = *(int *)(iVar1 + 0x44);
  if (*(int *)(**(int **)(iRam036d7784 + 0x36d7368) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar13 = func_0x05171434(uVar13,0);
  if (iVar14 == 0) {
    func_0x024f83d4();
  }
  uVar9 = func_0x0475399c(iVar14,uVar13,**(undefined4 **)(iRam036d7788 + 0x36d73ac));
  uVar3 = func_0x02965180(uVar9,0);
  if (uVar3 < 0x7e952fa7) {
    if (uVar3 < 0x15c32d82) {
      if (uVar3 == 0x9983b70) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d77b0 + 0x36d7558),0);
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x38);
LAB_036d76a4:
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
      else if (uVar3 == 0xd1dd6fb) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d77a4 + 0x36d7584),0);
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036d76a4;
        }
      }
      else {
        bVar26 = 0x15c32d80 < uVar3;
        uVar23 = false;
        if (uVar3 == 0x15c32d81) {
          iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d778c + 0x36d7418),0);
          uVar23 = iVar14 == 0;
          bVar26 = true;
          if (!(bool)uVar23) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x18);
            goto LAB_036d76a4;
          }
        }
      }
    }
    else if (uVar3 == 0x50ed7dc7) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d77a8 + 0x36d7608),0);
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x30);
        goto LAB_036d76a4;
      }
    }
    else if (uVar3 == 0x743f26d4) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d779c + 0x36d7634),0);
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x20);
        goto LAB_036d76a4;
      }
    }
    else {
      bVar26 = 0x7e952fa5 < uVar3;
      uVar23 = false;
      if (uVar3 == 0x7e952fa6) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d7790 + 0x36d74d0),0);
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
          goto LAB_036d76a4;
        }
      }
    }
  }
  else if (uVar3 < 0xa5c4b129) {
    if (uVar3 == 0x8041e93d) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d77b8 + 0x36d75b0),0);
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x14);
        goto LAB_036d76a4;
      }
    }
    else if (uVar3 == 0xa08673da) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d77ac + 0x36d75dc),0);
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x34);
        goto LAB_036d76a4;
      }
    }
    else {
      bVar26 = 0xa5c4b127 < uVar3;
      uVar23 = false;
      if (uVar3 == 0xa5c4b128) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d7794 + 0x36d747c),0);
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x3c);
          goto LAB_036d76a4;
        }
      }
    }
  }
  else if (uVar3 == 0xa74cac98) {
    iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d77b4 + 0x36d7660),0);
    uVar23 = iVar14 == 0;
    bVar26 = true;
    if (!(bool)uVar23) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x40);
      goto LAB_036d76a4;
    }
  }
  else if (uVar3 == 0xb03a466e) {
    iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d77a0 + 0x36d768c),0);
    uVar23 = iVar14 == 0;
    bVar26 = true;
    if (!(bool)uVar23) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x24);
      goto LAB_036d76a4;
    }
  }
  else {
    bVar26 = 0xd78cbe1e < uVar3;
    uVar23 = false;
    if (uVar3 == 0xd78cbe1f) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d7798 + 0x36d752c),0);
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036d76a4;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036d77bc + 0x36d770c));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036d77c0 + 0x36d7720));
  auStack_20[0] = 0;
  func_0x0509473c(uVar4,uVar5,uVar9,0);
  func_0x024f83c0(uVar4,iVar12);
  iVar22 = 0x36d774c;
  uVar29 = func_0x024f83bc();
  iVar14 = (int)((ulonglong)uVar29 >> 0x20);
  iVar1 = (int)uVar29;
  bVar24 = false;
  bVar27 = bVar26;
  if ((bool)uVar23) {
    bVar27 = 0xffffff23 < extraout_r12 || CARRY4(extraout_r12 + 0xdc,(uint)bVar26);
    puVar15 = (undefined4 *)(extraout_r12 + 0xdc + (uint)bVar26);
    bVar24 = (undefined1 *)(extraout_r12 + 0xdc + (uint)bVar26) == (undefined1 *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0x1fffffff < unaff_r8 || CARRY4(unaff_r8 + 0xe0000000,(uint)bVar27);
    iVar22 = unaff_r8 + 0xe0000000 + (uint)bVar27;
    bVar25 = iVar22 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffffc3 < unaff_r10 || CARRY4(unaff_r10 + 0x3c,(uint)bVar26);
    iVar12 = unaff_r10 + 0x3c + (uint)bVar26;
    bVar24 = iVar12 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffffc5 < unaff_r10 || CARRY4(unaff_r10 + 0x3a,(uint)bVar27);
    iVar12 = unaff_r10 + 0x3a + (uint)bVar27;
    bVar25 = iVar12 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffffc7 < unaff_r10 || CARRY4(unaff_r10 + 0x38,(uint)bVar26);
    iVar12 = unaff_r10 + 0x38 + (uint)bVar26;
    bVar24 = iVar12 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffffc9 < unaff_r10 || CARRY4(unaff_r10 + 0x36,(uint)bVar27);
    iVar12 = unaff_r10 + 0x36 + (uint)bVar27;
    bVar25 = iVar12 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffffcb < unaff_r10 || CARRY4(unaff_r10 + 0x34,(uint)bVar26);
    iVar12 = unaff_r10 + 0x34 + (uint)bVar26;
    bVar24 = iVar12 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffffcd < unaff_r10 || CARRY4(unaff_r10 + 0x32,(uint)bVar27);
    iVar12 = unaff_r10 + 0x32 + (uint)bVar27;
    bVar25 = iVar12 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffffcf < unaff_r10 || CARRY4(unaff_r10 + 0x30,(uint)bVar26);
    iVar12 = unaff_r10 + 0x30 + (uint)bVar26;
    bVar24 = iVar12 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffffd1 < unaff_r10 || CARRY4(unaff_r10 + 0x2e,(uint)bVar27);
    iVar12 = unaff_r10 + 0x2e + (uint)bVar27;
    bVar25 = iVar12 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffffd3 < unaff_r10 || CARRY4(unaff_r10 + 0x2c,(uint)bVar26);
    iVar12 = unaff_r10 + 0x2c + (uint)bVar26;
    bVar24 = iVar12 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffffd5 < unaff_r10 || CARRY4(unaff_r10 + 0x2a,(uint)bVar27);
    iVar12 = unaff_r10 + 0x2a + (uint)bVar27;
    bVar25 = iVar12 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffffd7 < unaff_r10 || CARRY4(unaff_r10 + 0x28,(uint)bVar26);
    iVar12 = unaff_r10 + 0x28 + (uint)bVar26;
    bVar24 = iVar12 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffffd9 < unaff_r10 || CARRY4(unaff_r10 + 0x26,(uint)bVar27);
    iVar12 = unaff_r10 + 0x26 + (uint)bVar27;
    bVar25 = iVar12 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xbffffff7 < unaff_r8 || CARRY4(unaff_r8 + 0x40000008,(uint)bVar26);
    iVar22 = unaff_r8 + 0x40000008 + (uint)bVar26;
    bVar24 = iVar22 == 0;
  }
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfffffc9f < extraout_r12 || CARRY4(extraout_r12 + 0x360,(uint)bVar27);
  }
  bVar25 = false;
  bVar28 = bVar26;
  if (bVar24 && extraout_r12 + 0x360 + (uint)bVar27 == 0) {
    bVar28 = 0xffffff47 < unaff_r10 || CARRY4(unaff_r10 + 0xb8,(uint)bVar26);
    iVar12 = unaff_r10 + 0xb8 + (uint)bVar26;
    bVar25 = iVar12 == 0;
  }
  bVar24 = false;
  bVar26 = bVar28;
  if (bVar25) {
    bVar26 = 0xfffffff3 < unaff_r10 || CARRY4(unaff_r10 + 0xc,(uint)bVar28);
    iVar12 = unaff_r10 + 0xc + (uint)bVar28;
    bVar24 = iVar12 == 0;
  }
  bVar25 = false;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = 0xffffffbb < unaff_r10 || CARRY4(unaff_r10 + 0x44,(uint)bVar26);
    iVar12 = unaff_r10 + 0x44 + (uint)bVar26;
    bVar25 = iVar12 == 0;
  }
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfffffdef < unaff_r10 || CARRY4(unaff_r10 + 0x210,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x210 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffff6ff < unaff_r10 || CARRY4(unaff_r10 + 0x900,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0x900 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfffffd7f < unaff_r10 || CARRY4(unaff_r10 + 0x280,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x280 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffffeef < unaff_r10 || CARRY4(unaff_r10 + 0x110,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0x110 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfffff2ff < unaff_r10 || CARRY4(unaff_r10 + 0xd00,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0xd00 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffff23f < unaff_r10 || CARRY4(unaff_r10 + 0xdc0,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0xdc0 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfffffe2f < unaff_r10 || CARRY4(unaff_r10 + 0x1d0,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x1d0 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffff8bf < unaff_r10 || CARRY4(unaff_r10 + 0x740,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0x740 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xffffffcf < unaff_r10 || CARRY4(unaff_r10 + 0x30,(uint)bVar27);
  }
                    /* WARNING: Could not recover jumptable at 0x036d77bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (bVar25 && unaff_r10 + 0x30 + (uint)bVar27 == 0) {
    piVar2 = (int *)(*(code *)(unaff_r8 + 0x1f0000 + (uint)bVar26))();
    return piVar2;
  }
  *(int *)((int)puVar15 + -4) = iVar22;
  *(undefined **)((int)puVar15 + -8) = unaff_r11;
  *(undefined4 *)((int)puVar15 + -0xc) = uVar13;
  *(undefined4 *)((int)puVar15 + -0x10) = uVar9;
  *(undefined4 *)((int)puVar15 + -0x14) = uVar4;
  *(int *)((int)puVar15 + -0x18) = iVar12;
  puVar16 = (undefined1 *)((int)puVar15 + -0x20);
  puVar8 = *(undefined4 **)(iVar14 + 0x1c);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x024f83cc(*(undefined4 *)(iRam036d7c90 + 0x36d77ec));
    func_0x024f83cc(*(undefined4 *)(iRam036d7c94 + 0x36d77f8));
    func_0x024f83cc(*(undefined4 *)(iRam036d7c98 + 0x36d7804));
    func_0x024f83cc(*(undefined4 *)(iRam036d7c9c + 0x36d7810));
    func_0x024f83cc(*(undefined4 *)(iRam036d7ca0 + 0x36d781c));
    func_0x024f83cc(*(undefined4 *)(iRam036d7ca4 + 0x36d7828));
    func_0x024f83cc(*(undefined4 *)(iRam036d7ca8 + 0x36d7834));
    func_0x024f83cc(*(undefined4 *)(iRam036d7cac + 0x36d7840));
    func_0x024f83cc(*(undefined4 *)(iRam036d7cb0 + 0x36d784c));
    func_0x024f83cc(*(undefined4 *)(iRam036d7cb4 + 0x36d7858));
    func_0x024f83cc(*(undefined4 *)(iRam036d7cb8 + 0x36d7864));
    func_0x024f83cc(*(undefined4 *)(iRam036d7cbc + 0x36d7870));
    func_0x024f83cc(*(undefined4 *)(iRam036d7cc0 + 0x36d787c));
    func_0x024f83cc(*(undefined4 *)(iRam036d7cc4 + 0x36d7888));
    puVar8 = *(undefined4 **)(iVar14 + 0x1c);
    if (puVar8 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar14);
      puVar8 = *(undefined4 **)(iVar14 + 0x1c);
    }
  }
  uVar13 = *puVar8;
  iVar12 = *(int *)(iVar1 + 0x44);
  if (*(int *)(**(int **)(iRam036d7cc8 + 0x36d78ac) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar13 = func_0x05171434(uVar13,0);
  if (iVar12 == 0) {
    func_0x024f83d4();
  }
  uVar9 = func_0x0475399c(iVar12,uVar13,**(undefined4 **)(iRam036d7ccc + 0x36d78f0));
  uVar3 = func_0x02965180(uVar9,0);
  if (uVar3 < 0x7e952fa7) {
    if (uVar3 < 0x15c32d82) {
      if (uVar3 == 0x9983b70) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d7cf4 + 0x36d7a9c),0);
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x38);
LAB_036d7be8:
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
      else if (uVar3 == 0xd1dd6fb) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d7ce8 + 0x36d7ac8),0);
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036d7be8;
        }
      }
      else {
        bVar26 = 0x15c32d80 < uVar3;
        uVar23 = false;
        if (uVar3 == 0x15c32d81) {
          iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d7cd0 + 0x36d795c),0);
          uVar23 = iVar12 == 0;
          bVar26 = true;
          if (!(bool)uVar23) {
            iVar12 = *(int *)(iVar14 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x18);
            goto LAB_036d7be8;
          }
        }
      }
    }
    else if (uVar3 == 0x50ed7dc7) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d7cec + 0x36d7b4c),0);
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x30);
        goto LAB_036d7be8;
      }
    }
    else if (uVar3 == 0x743f26d4) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d7ce0 + 0x36d7b78),0);
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x20);
        goto LAB_036d7be8;
      }
    }
    else {
      bVar26 = 0x7e952fa5 < uVar3;
      uVar23 = false;
      if (uVar3 == 0x7e952fa6) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d7cd4 + 0x36d7a14),0);
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
          goto LAB_036d7be8;
        }
      }
    }
  }
  else if (uVar3 < 0xa5c4b129) {
    if (uVar3 == 0x8041e93d) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d7cfc + 0x36d7af4),0);
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x14);
        goto LAB_036d7be8;
      }
    }
    else if (uVar3 == 0xa08673da) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d7cf0 + 0x36d7b20),0);
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x34);
        goto LAB_036d7be8;
      }
    }
    else {
      bVar26 = 0xa5c4b127 < uVar3;
      uVar23 = false;
      if (uVar3 == 0xa5c4b128) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d7cd8 + 0x36d79c0),0);
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x3c);
          goto LAB_036d7be8;
        }
      }
    }
  }
  else if (uVar3 == 0xa74cac98) {
    iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d7cf8 + 0x36d7ba4),0);
    uVar23 = iVar12 == 0;
    bVar26 = true;
    if (!(bool)uVar23) {
      iVar12 = *(int *)(iVar14 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x40);
      goto LAB_036d7be8;
    }
  }
  else if (uVar3 == 0xb03a466e) {
    iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d7ce4 + 0x36d7bd0),0);
    uVar23 = iVar12 == 0;
    bVar26 = true;
    if (!(bool)uVar23) {
      iVar12 = *(int *)(iVar14 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x24);
      goto LAB_036d7be8;
    }
  }
  else {
    bVar26 = 0xd78cbe1e < uVar3;
    uVar23 = false;
    if (uVar3 == 0xd78cbe1f) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d7cdc + 0x36d7a70),0);
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036d7be8;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036d7d00 + 0x36d7c50));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036d7d04 + 0x36d7c64));
  *(undefined4 *)((int)puVar15 + -0x20) = 0;
  func_0x0509473c(uVar4,uVar5,uVar9,0);
  func_0x024f83c0(uVar4,iVar14);
  uVar29 = func_0x024f83bc();
  iVar12 = (int)((ulonglong)uVar29 >> 0x20);
  iVar1 = (int)uVar29;
  bVar24 = false;
  pcVar11 = extraout_r12_00;
  bVar27 = bVar26;
  if ((bool)uVar23) {
    bVar27 = (char *)0xfffd9fff < extraout_r12_00 ||
             CARRY4((uint)("getnameinfo" + (int)(extraout_r12_00 + 0xb)),(uint)bVar26);
    pcVar11 = "getnameinfo" + (int)(extraout_r12_00 + bVar26 + 0xb);
    bVar24 = pcVar11 == (char *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffc2ff < unaff_r8 || CARRY4(unaff_r8 + 0x3d00,(uint)bVar27);
    puVar16 = (undefined1 *)(unaff_r8 + 0x3d00 + (uint)bVar27);
    bVar25 = (undefined1 *)(unaff_r8 + 0x3d00 + (uint)bVar27) == (undefined1 *)0x0;
  }
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffff53ff < unaff_r10 || CARRY4(unaff_r10 + 0xac00,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0xac00 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xffff5bff < unaff_r10 || CARRY4(unaff_r10 + 0xa400,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0xa400 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffff63ff < unaff_r10 || CARRY4(unaff_r10 + 0x9c00,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0x9c00 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xffff6bff < unaff_r10 || CARRY4(unaff_r10 + 0x9400,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x9400 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffff73ff < unaff_r10 || CARRY4(unaff_r10 + 0x8c00,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0x8c00 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xffff7bff < unaff_r10 || CARRY4(unaff_r10 + 0x8400,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x8400 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffff83ff < unaff_r10 || CARRY4(unaff_r10 + 0x7c00,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0x7c00 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xffff8bff < unaff_r10 || CARRY4(unaff_r10 + 0x7400,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x7400 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffff93ff < unaff_r10 || CARRY4(unaff_r10 + 0x6c00,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0x6c00 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xffff9bff < unaff_r10 || CARRY4(unaff_r10 + 0x6400,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x6400 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffa3ff < unaff_r10 || CARRY4(unaff_r10 + 0x5c00,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0x5c00 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xffffabff < unaff_r10 || CARRY4(unaff_r10 + 0x5400,(uint)bVar27);
  }
  bVar24 = false;
  bVar28 = bVar26;
  if (bVar25 && unaff_r10 + 0x5400 + (uint)bVar27 == 0) {
    bVar28 = 0xffffefff < unaff_r8 || CARRY4(unaff_r8 + 0x1000,(uint)bVar26);
    puVar16 = (undefined1 *)(unaff_r8 + 0x1000 + (uint)bVar26);
    bVar24 = (undefined1 *)(unaff_r8 + 0x1000 + (uint)bVar26) == (undefined1 *)0x0;
  }
  bVar26 = bVar28;
  if (bVar24) {
    bVar26 = (char *)0xfff6bfff < pcVar11 || CARRY4((uint)(pcVar11 + 0x94000),(uint)bVar28);
  }
  bVar24 = bVar24 && pcVar11 + bVar28 + 0x94000 == (char *)0x0;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = 0xfffe2fff < unaff_r10 || CARRY4(unaff_r10 + 0x1d000,(uint)bVar26);
  }
  bVar24 = bVar24 && unaff_r10 + 0x1d000 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfff37fff < unaff_r10 || CARRY4(unaff_r10 + 0xc8000,(uint)bVar27);
  }
  bVar24 = bVar24 && unaff_r10 + 0xc8000 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = CARRY4(unaff_r10,(uint)bVar26);
  }
  bVar24 = bVar24 && unaff_r10 + bVar26 == 0;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfffbffff < unaff_r10 || CARRY4(unaff_r10 + 0x40000,(uint)bVar27);
  }
  bVar24 = bVar24 && unaff_r10 + 0x40000 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = 0xffecffff < unaff_r10 || CARRY4(unaff_r10 + 0x130000,(uint)bVar26);
  }
  bVar24 = bVar24 && unaff_r10 + 0x130000 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xff1bffff < unaff_r10 || CARRY4((uint)(&UNK_00e40000 + unaff_r10),(uint)bVar27);
  }
  bVar24 = bVar24 && &UNK_00e40000 + bVar27 + unaff_r10 == (undefined *)0x0;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = CARRY4(unaff_r10,(uint)bVar26);
  }
  bVar24 = bVar24 && unaff_r10 + bVar26 == 0;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffdcffff < unaff_r10 || CARRY4(unaff_r10 + 0x230000,(uint)bVar27);
  }
  bVar24 = bVar24 && unaff_r10 + 0x230000 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = 0xffd9ffff < unaff_r10 || CARRY4(unaff_r10 + 0x260000,(uint)bVar26);
  }
  bVar24 = bVar24 && unaff_r10 + 0x260000 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfffcffff < unaff_r10 || CARRY4(unaff_r10 + 0x30000,(uint)bVar27);
  }
  bVar24 = bVar24 && unaff_r10 + 0x30000 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = 0xfff3ffff < unaff_r10 || CARRY4(unaff_r10 + 0xc0000,(uint)bVar26);
  }
  bVar24 = bVar24 && unaff_r10 + 0xc0000 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffcdffff < unaff_r10 || CARRY4(unaff_r10 + 0x320000,(uint)bVar27);
  }
                    /* WARNING: Could not recover jumptable at 0x036d7d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (bVar24 && unaff_r10 + 0x320000 + (uint)bVar27 == 0) {
    piVar2 = (int *)(*(code *)(unaff_r8 + 0x38000000 + (uint)bVar26))();
    return piVar2;
  }
  *(undefined4 *)(puVar16 + -4) = 0x36d7c90;
  *(undefined **)(puVar16 + -8) = unaff_r11;
  *(undefined4 *)(puVar16 + -0xc) = uVar13;
  *(undefined4 *)(puVar16 + -0x10) = uVar9;
  *(undefined4 *)(puVar16 + -0x14) = uVar4;
  *(int *)(puVar16 + -0x18) = iVar14;
  puVar17 = puVar16 + -0x20;
  puVar8 = *(undefined4 **)(iVar12 + 0x1c);
  if (puVar8 == (undefined4 *)0x0) {
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
    puVar8 = *(undefined4 **)(iVar12 + 0x1c);
    if (puVar8 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar12);
      puVar8 = *(undefined4 **)(iVar12 + 0x1c);
    }
  }
  uVar13 = *puVar8;
  iVar14 = *(int *)(iVar1 + 0x3c);
  if (*(int *)(**(int **)(iRam036d8174 + 0x36d7dd8) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar13 = func_0x05171434(uVar13,0);
  if (iVar14 == 0) {
    func_0x024f83d4();
  }
  uVar9 = func_0x0475399c(iVar14,uVar13,**(undefined4 **)(iRam036d8178 + 0x36d7e1c));
  puVar6 = (undefined *)func_0x02965180(uVar9,0);
  if (puVar6 < (undefined *)0x9da98dd1) {
    if (puVar6 < (undefined *)0x2e754b92) {
      if (puVar6 == &UNK_04d3c1ea) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8194 + 0x36d7fa8),0);
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
LAB_036d809c:
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
      else {
        bVar26 = (undefined *)0x2e754b90 < puVar6;
        uVar23 = false;
        if (puVar6 == (undefined *)0x2e754b91) {
          iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d817c + 0x36d7e78),0);
          uVar23 = iVar14 == 0;
          bVar26 = true;
          if (!(bool)uVar23) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x18);
            goto LAB_036d809c;
          }
        }
      }
    }
    else if (puVar6 == (undefined *)0x8a3c7d59) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8190 + 0x36d8000),0);
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036d809c;
      }
    }
    else if (puVar6 == (undefined *)0x9da98dd0) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d818c + 0x36d802c),0);
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x20);
        goto LAB_036d809c;
      }
    }
    else {
      bVar26 = (undefined *)0x48332842 < puVar6;
      uVar23 = false;
      if (puVar6 == (undefined *)0x48332843) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8180 + 0x36d7f20),0);
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x38);
          goto LAB_036d809c;
        }
      }
    }
  }
  else if (puVar6 < (undefined *)0xa66c61a7) {
    if (puVar6 == (undefined *)0xa2c291f3) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d81a0 + 0x36d7fd4),0);
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x14);
        goto LAB_036d809c;
      }
    }
    else {
      bVar26 = (undefined *)0xa66c61a5 < puVar6;
      uVar23 = false;
      if (puVar6 == (undefined *)0xa66c61a6) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8184 + 0x36d7ecc),0);
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x34);
          goto LAB_036d809c;
        }
      }
    }
  }
  else if (puVar6 == (undefined *)0xbb89f01d) {
    iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8198 + 0x36d8058),0);
    uVar23 = iVar14 == 0;
    bVar26 = true;
    if (!(bool)uVar23) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x2c);
      goto LAB_036d809c;
    }
  }
  else if (puVar6 == (undefined *)0xc9c3c0e8) {
    iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d819c + 0x36d8084),0);
    uVar23 = iVar14 == 0;
    bVar26 = true;
    if (!(bool)uVar23) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x30);
      goto LAB_036d809c;
    }
  }
  else {
    bVar26 = (undefined *)0xdf58028b < puVar6;
    uVar23 = false;
    if (puVar6 == (undefined *)0xdf58028c) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8188 + 0x36d7f7c),0);
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036d809c;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036d81a4 + 0x36d8104));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036d81a8 + 0x36d8118));
  *(undefined4 *)(puVar16 + -0x20) = 0;
  func_0x0509473c(uVar4,uVar5,uVar9,0);
  func_0x024f83c0(uVar4,iVar12);
  iVar22 = 0x36d8144;
  uVar29 = func_0x024f83bc();
  iVar14 = (int)((ulonglong)uVar29 >> 0x20);
  iVar1 = (int)uVar29;
  bVar24 = false;
  puVar6 = extraout_r12_01;
  bVar27 = bVar26;
  if ((bool)uVar23) {
    bVar27 = (undefined *)0xfabfffff < extraout_r12_01 ||
             CARRY4((uint)(&UNK_05400000 + (int)extraout_r12_01),(uint)bVar26);
    puVar6 = &UNK_05400000 + (int)(extraout_r12_01 + bVar26);
    bVar24 = puVar6 == (undefined *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xff4fffff < unaff_r8 || CARRY4((uint)(&UNK_00b00000 + unaff_r8),(uint)bVar27);
    puVar17 = &UNK_00b00000 + bVar27 + unaff_r8;
    bVar25 = &UNK_00b00000 + bVar27 + unaff_r8 == (undefined1 *)0x0;
  }
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffe3ffff < unaff_r10 || CARRY4(unaff_r10 + 0x1c0000,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0x1c0000 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xffebffff < unaff_r10 || CARRY4(unaff_r10 + 0x140000,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x140000 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfff3ffff < unaff_r10 || CARRY4(unaff_r10 + 0xc0000,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0xc0000 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfffbffff < unaff_r10 || CARRY4(unaff_r10 + 0x40000,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x40000 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfc0fffff < unaff_r10 || CARRY4(unaff_r10 + 0x3f00000,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0x3f00000 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfc2fffff < unaff_r10 || CARRY4((uint)(&UNK_03d00000 + unaff_r10),(uint)bVar27);
  }
  bVar25 = bVar25 && &UNK_03d00000 + bVar27 + unaff_r10 == (undefined *)0x0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfc4fffff < unaff_r10 || CARRY4((uint)(&UNK_03b00000 + unaff_r10),(uint)bVar26);
  }
  bVar25 = bVar25 && &UNK_03b00000 + bVar26 + unaff_r10 == (undefined *)0x0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfc6fffff < unaff_r10 || CARRY4((uint)(&UNK_03900000 + unaff_r10),(uint)bVar27);
  }
  bVar25 = bVar25 && &UNK_03900000 + bVar27 + unaff_r10 == (undefined *)0x0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfc8fffff < unaff_r10 || CARRY4((uint)(&UNK_03700000 + unaff_r10),(uint)bVar26);
  }
  bVar25 = bVar25 && &UNK_03700000 + bVar26 + unaff_r10 == (undefined *)0x0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfcafffff < unaff_r10 || CARRY4((uint)(&UNK_03500000 + unaff_r10),(uint)bVar27);
  }
  bVar24 = false;
  bVar28 = bVar26;
  if (bVar25 && &UNK_03500000 + bVar27 + unaff_r10 == (undefined *)0x0) {
    bVar28 = 0xffebffff < unaff_r8 || CARRY4(unaff_r8 + 0x140000,(uint)bVar26);
    puVar17 = (undefined1 *)(unaff_r8 + 0x140000 + (uint)bVar26);
    bVar24 = (undefined1 *)(unaff_r8 + 0x140000 + (uint)bVar26) == (undefined1 *)0x0;
  }
  bVar26 = bVar28;
  if (bVar24) {
    bVar26 = (undefined *)0xe5ffffff < puVar6 || CARRY4((uint)(puVar6 + 0x1a000000),(uint)bVar28);
  }
  bVar24 = bVar24 && puVar6 + bVar28 + 0x1a000000 == (undefined *)0x0;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = 0xf03fffff < unaff_r10 || CARRY4(unaff_r10 + 0xfc00000,(uint)bVar26);
  }
  bVar24 = bVar24 && unaff_r10 + 0xfc00000 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfb7fffff < unaff_r10 || CARRY4((uint)(&UNK_04800000 + unaff_r10),(uint)bVar27);
  }
  bVar24 = bVar24 && &UNK_04800000 + bVar27 + unaff_r10 == (undefined *)0x0;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = 0xf47fffff < unaff_r10 || CARRY4(unaff_r10 + 0xb800000,(uint)bVar26);
  }
  bVar24 = bVar24 && unaff_r10 + 0xb800000 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xc3ffffff < unaff_r10 || CARRY4(unaff_r10 + 0x3c000000,(uint)bVar27);
  }
  bVar24 = bVar24 && unaff_r10 + 0x3c000000 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = 0xe8ffffff < unaff_r10 || CARRY4(unaff_r10 + 0x17000000,(uint)bVar26);
  }
  bVar24 = bVar24 && unaff_r10 + 0x17000000 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xe3ffffff < unaff_r10 || CARRY4(unaff_r10 + 0x1c000000,(uint)bVar27);
  }
  bVar24 = bVar24 && unaff_r10 + 0x1c000000 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = 0xc9ffffff < unaff_r10 || CARRY4(unaff_r10 + 0x36000000,(uint)bVar26);
  }
  bVar24 = bVar24 && unaff_r10 + 0x36000000 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xf7ffffff < unaff_r10 || CARRY4(unaff_r10 + 0x8000000,(uint)bVar27);
  }
  bVar24 = bVar24 && unaff_r10 + 0x8000000 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = 0x1fffffff < unaff_r10 || CARRY4(unaff_r10 + 0xe0000000,(uint)bVar26);
  }
  bVar24 = bVar24 && unaff_r10 + 0xe0000000 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xd5ffffff < unaff_r10 || CARRY4(unaff_r10 + 0x2a000000,(uint)bVar27);
  }
  bVar25 = false;
  bVar28 = bVar26;
  if (bVar24 && unaff_r10 + 0x2a000000 + (uint)bVar27 == 0) {
    bVar28 = 0xfffffdef < unaff_r8 || CARRY4(unaff_r8 + 0x210,(uint)bVar26);
    iVar22 = unaff_r8 + 0x210 + (uint)bVar26;
    bVar25 = iVar22 == 0;
  }
  if (bVar25) {
    unaff_r11 = (undefined *)(unaff_r9 + 0xe8 + (uint)bVar28);
  }
  *(int *)(puVar17 + -4) = iVar22;
  *(undefined **)(puVar17 + -8) = unaff_r11;
  *(undefined4 *)(puVar17 + -0xc) = uVar13;
  *(undefined4 *)(puVar17 + -0x10) = uVar9;
  *(undefined4 *)(puVar17 + -0x14) = uVar4;
  *(int *)(puVar17 + -0x18) = iVar12;
  puVar18 = puVar17 + -0x20;
  puVar8 = *(undefined4 **)(iVar14 + 0x1c);
  if (puVar8 == (undefined4 *)0x0) {
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
    puVar8 = *(undefined4 **)(iVar14 + 0x1c);
    if (puVar8 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar14);
      puVar8 = *(undefined4 **)(iVar14 + 0x1c);
    }
  }
  uVar13 = *puVar8;
  iVar12 = *(int *)(iVar1 + 0x3c);
  if (*(int *)(**(int **)(iRam036d8618 + 0x36d827c) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar13 = func_0x05171434(uVar13,0);
  if (iVar12 == 0) {
    func_0x024f83d4();
  }
  uVar9 = func_0x0475399c(iVar12,uVar13,**(undefined4 **)(iRam036d861c + 0x36d82c0));
  puVar6 = (undefined *)func_0x02965180(uVar9,0);
  if (puVar6 < (undefined *)0x9da98dd1) {
    if (puVar6 < (undefined *)0x2e754b92) {
      if (puVar6 == &UNK_04d3c1ea) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8638 + 0x36d844c),0);
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
LAB_036d8540:
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
      else {
        bVar26 = (undefined *)0x2e754b90 < puVar6;
        uVar23 = false;
        if (puVar6 == (undefined *)0x2e754b91) {
          iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8620 + 0x36d831c),0);
          uVar23 = iVar12 == 0;
          bVar26 = true;
          if (!(bool)uVar23) {
            iVar12 = *(int *)(iVar14 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x18);
            goto LAB_036d8540;
          }
        }
      }
    }
    else if (puVar6 == (undefined *)0x8a3c7d59) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8634 + 0x36d84a4),0);
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036d8540;
      }
    }
    else if (puVar6 == (undefined *)0x9da98dd0) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8630 + 0x36d84d0),0);
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x20);
        goto LAB_036d8540;
      }
    }
    else {
      bVar26 = (undefined *)0x48332842 < puVar6;
      uVar23 = false;
      if (puVar6 == (undefined *)0x48332843) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8624 + 0x36d83c4),0);
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x38);
          goto LAB_036d8540;
        }
      }
    }
  }
  else if (puVar6 < (undefined *)0xa66c61a7) {
    if (puVar6 == (undefined *)0xa2c291f3) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8644 + 0x36d8478),0);
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x14);
        goto LAB_036d8540;
      }
    }
    else {
      bVar26 = (undefined *)0xa66c61a5 < puVar6;
      uVar23 = false;
      if (puVar6 == (undefined *)0xa66c61a6) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8628 + 0x36d8370),0);
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x34);
          goto LAB_036d8540;
        }
      }
    }
  }
  else if (puVar6 == (undefined *)0xbb89f01d) {
    iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d863c + 0x36d84fc),0);
    uVar23 = iVar12 == 0;
    bVar26 = true;
    if (!(bool)uVar23) {
      iVar12 = *(int *)(iVar14 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x2c);
      goto LAB_036d8540;
    }
  }
  else if (puVar6 == (undefined *)0xc9c3c0e8) {
    iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8640 + 0x36d8528),0);
    uVar23 = iVar12 == 0;
    bVar26 = true;
    if (!(bool)uVar23) {
      iVar12 = *(int *)(iVar14 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x30);
      goto LAB_036d8540;
    }
  }
  else {
    bVar26 = (undefined *)0xdf58028b < puVar6;
    uVar23 = false;
    if (puVar6 == (undefined *)0xdf58028c) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d862c + 0x36d8420),0);
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036d8540;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036d8648 + 0x36d85a8));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036d864c + 0x36d85bc));
  *(undefined4 *)(puVar17 + -0x20) = 0;
  func_0x0509473c(uVar4,uVar5,uVar9,0);
  func_0x024f83c0(uVar4,iVar14);
  iVar22 = 0x36d85e8;
  uVar29 = func_0x024f83bc();
  iVar12 = (int)((ulonglong)uVar29 >> 0x20);
  iVar1 = (int)uVar29;
  bVar24 = false;
  uVar3 = extraout_r12_02;
  bVar27 = bVar26;
  if ((bool)uVar23) {
    bVar27 = 0xffffffd3 < extraout_r12_02 || CARRY4(extraout_r12_02 + 0x2c,(uint)bVar26);
    uVar3 = extraout_r12_02 + 0x2c + (uint)bVar26;
    bVar24 = uVar3 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xf3ffffff < unaff_r8 || CARRY4(unaff_r8 + 0xc000000,(uint)bVar27);
    puVar18 = (undefined1 *)(unaff_r8 + 0xc000000 + (uint)bVar27);
    bVar25 = (undefined1 *)(unaff_r8 + 0xc000000 + (uint)bVar27) == (undefined1 *)0x0;
  }
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0x1ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0xe0000001,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0xe0000001 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0x3ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0xc0000001,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0xc0000001 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0x5ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0xa0000001,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0xa0000001 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0x7ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x80000001,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x80000001 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0x9ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x60000001,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0x60000001 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xbffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x40000001,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x40000001 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xdffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x20000001,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0x20000001 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfffffffe < unaff_r10 || CARRY4(unaff_r10 + 1,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 1 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0x1fffffff < unaff_r10 || CARRY4(unaff_r10 + 0xe0000000,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0xe0000000 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0x3fffffff < unaff_r10 || CARRY4(unaff_r10 + 0xc0000000,(uint)bVar27);
  }
  bVar24 = false;
  bVar28 = bVar26;
  if (bVar25 && unaff_r10 + 0xc0000000 + (uint)bVar27 == 0) {
    bVar28 = 0x3ffffffe < unaff_r8 || CARRY4(unaff_r8 + 0xc0000001,(uint)bVar26);
    puVar18 = (undefined1 *)(unaff_r8 + 0xc0000001 + (uint)bVar26);
    bVar24 = (undefined1 *)(unaff_r8 + 0xc0000001 + (uint)bVar26) == (undefined1 *)0x0;
  }
  bVar26 = bVar28;
  if (bVar24) {
    bVar26 = 0xffffff3b < uVar3 || CARRY4(uVar3 + 0xc4,(uint)bVar28);
  }
  bVar24 = bVar24 && uVar3 + 0xc4 + (uint)bVar28 == 0;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = 0x7ffffffa < unaff_r10 || CARRY4(unaff_r10 + 0x80000005,(uint)bVar26);
  }
  bVar24 = bVar24 && unaff_r10 + 0x80000005 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffffd6 < unaff_r10 || CARRY4(unaff_r10 + 0x29,(uint)bVar27);
  }
  bVar24 = bVar24 && unaff_r10 + 0x29 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = 0xbffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x40000001,(uint)bVar26);
  }
  bVar24 = bVar24 && unaff_r10 + 0x40000001 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffffec < unaff_r10 || CARRY4(unaff_r10 + 0x13,(uint)bVar27);
  }
  bVar24 = bVar24 && unaff_r10 + 0x13 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = 0xffffff47 < unaff_r10 || CARRY4(unaff_r10 + 0xb8,(uint)bVar26);
  }
  bVar24 = bVar24 && unaff_r10 + 0xb8 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffff33 < unaff_r10 || CARRY4(unaff_r10 + 0xcc,(uint)bVar27);
  }
  bVar24 = bVar24 && unaff_r10 + 0xcc + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = 0xfffffff2 < unaff_r10 || CARRY4(unaff_r10 + 0xd,(uint)bVar26);
  }
  bVar24 = bVar24 && unaff_r10 + 0xd + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffff83 < unaff_r10 || CARRY4(unaff_r10 + 0x7c,(uint)bVar27);
  }
  bVar24 = bVar24 && unaff_r10 + 0x7c + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = 0xffffffc3 < unaff_r10 || CARRY4(unaff_r10 + 0x3c,(uint)bVar26);
  }
  bVar24 = bVar24 && unaff_r10 + 0x3c + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfffffffe < unaff_r10 || CARRY4(unaff_r10 + 1,(uint)bVar27);
  }
  bVar25 = false;
  bVar28 = bVar26;
  if (bVar24 && unaff_r10 + 1 + (uint)bVar27 == 0) {
    bVar28 = 0xfff1ffff < unaff_r8 || CARRY4(unaff_r8 + 0xe0000,(uint)bVar26);
    iVar22 = unaff_r8 + 0xe0000 + (uint)bVar26;
    bVar25 = iVar22 == 0;
  }
  if (bVar25) {
    unaff_r10 = unaff_r9 + 0x4400 + (uint)bVar28;
  }
  *(int *)(puVar18 + -4) = iVar22;
  *(undefined **)(puVar18 + -8) = unaff_r11;
  *(undefined4 *)(puVar18 + -0xc) = uVar13;
  *(undefined4 *)(puVar18 + -0x10) = uVar9;
  *(undefined4 *)(puVar18 + -0x14) = uVar4;
  *(int *)(puVar18 + -0x18) = iVar14;
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
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
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
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x30);
          goto LAB_036d8ac4;
        }
      }
      else {
        bVar26 = 0x71bf6502 < uVar3;
        uVar23 = false;
        if (uVar3 == 0x71bf6503) {
          iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8bb0 + 0x36d87f4),0);
          uVar23 = iVar14 == 0;
          bVar26 = true;
          if (!(bool)uVar23) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x34);
            goto LAB_036d8ac4;
          }
        }
      }
    }
    else if (uVar3 == 0xa443a855) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8bc4 + 0x36d8a28),0);
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036d8ac4;
      }
    }
    else if (uVar3 == 0x7399d8e1) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8be0 + 0x36d8a54),0);
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x14);
        goto LAB_036d8ac4;
      }
    }
    else {
      bVar26 = 0x7ab1adb3 < uVar3;
      uVar23 = false;
      if (uVar3 == 0x7ab1adb4) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8bb4 + 0x36d88ac),0);
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
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
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x3c);
        goto LAB_036d8ac4;
      }
    }
    else if (uVar3 == 0xb436bd1b) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8bc8 + 0x36d89fc),0);
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036d8ac4;
      }
    }
    else {
      bVar26 = 0xb66b7bad < uVar3;
      uVar23 = false;
      if (uVar3 == 0xb66b7bae) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8bb8 + 0x36d8858),0);
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
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
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x20);
        goto LAB_036d8ac4;
      }
    }
    else {
      bVar26 = 0xc5a69c51 < uVar3;
      uVar23 = false;
      if (uVar3 == 0xc5a69c52) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8bbc + 0x36d8900),0);
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036d8ac4;
        }
      }
    }
  }
  else if (uVar3 == 0xc5d3516e) {
    iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8bd4 + 0x36d8aac),0);
    uVar23 = iVar14 == 0;
    bVar26 = true;
    if (!(bool)uVar23) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x38);
      goto LAB_036d8ac4;
    }
  }
  else {
    bVar26 = 0xf655d0f8 < uVar3;
    uVar23 = false;
    if (uVar3 == 0xf655d0f9) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d8bc0 + 0x36d894c),0);
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036d8ac4;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036d8be4 + 0x36d8b2c));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036d8be8 + 0x36d8b40));
  *(undefined4 *)(puVar18 + -0x20) = 0;
  func_0x0509473c(uVar4,uVar5,uVar9,0);
  func_0x024f83c0(uVar4,iVar12);
  iVar22 = 0x36d8b6c;
  uVar29 = func_0x024f83bc();
  iVar14 = (int)((ulonglong)uVar29 >> 0x20);
  iVar1 = (int)uVar29;
  bVar24 = false;
  bVar27 = bVar26;
  if ((bool)uVar23) {
    bVar27 = 0xfffffcff < extraout_r12_03 || CARRY4(extraout_r12_03 + 0x300,(uint)bVar26);
    unaff_r11 = (undefined *)(extraout_r12_03 + 0x300 + (uint)bVar26);
    bVar24 = unaff_r11 == (undefined *)0x0;
  }
  bVar25 = false;
  uVar3 = extraout_r12_03;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfffffe5f < unaff_r8 || CARRY4(unaff_r8 + 0x1a0,(uint)bVar27);
    uVar3 = unaff_r8 + 0x1a0 + (uint)bVar27;
    bVar25 = uVar3 == 0;
  }
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffebff < unaff_r10 || CARRY4(unaff_r10 + 0x1400,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0x1400 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xffffedff < unaff_r10 || CARRY4(unaff_r10 + 0x1200,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x1200 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffefff < unaff_r10 || CARRY4(unaff_r10 + 0x1000,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0x1000 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfffff1ff < unaff_r10 || CARRY4(unaff_r10 + 0xe00,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0xe00 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffff3ff < unaff_r10 || CARRY4(unaff_r10 + 0xc00,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0xc00 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfffff5ff < unaff_r10 || CARRY4(unaff_r10 + 0xa00,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0xa00 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffff7ff < unaff_r10 || CARRY4(unaff_r10 + 0x800,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0x800 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfffff9ff < unaff_r10 || CARRY4(unaff_r10 + 0x600,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x600 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffffbff < unaff_r10 || CARRY4(unaff_r10 + 0x400,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0x400 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfffffdff < unaff_r10 || CARRY4(unaff_r10 + 0x200,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x200 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = CARRY4(unaff_r10,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xffff07ff < unaff_r10 || CARRY4(unaff_r10 + 0xf800,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0xf800 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffff0fff < unaff_r10 || CARRY4(unaff_r10 + 0xf000,(uint)bVar26);
  }
  bVar24 = false;
  bVar28 = bVar27;
  if (bVar25 && unaff_r10 + 0xf000 + (uint)bVar26 == 0) {
    bVar28 = 0xfffff57f < unaff_r8 || CARRY4(unaff_r8 + 0xa80,(uint)bVar27);
    uVar3 = unaff_r8 + 0xa80 + (uint)bVar27;
    bVar24 = uVar3 == 0;
  }
  bVar25 = false;
  bVar26 = bVar28;
  if (bVar24) {
    bVar26 = 0xfffc0fff < uVar3 || CARRY4(uVar3 + 0x3f000,(uint)bVar28);
    unaff_r11 = (undefined *)(uVar3 + 0x3f000 + (uint)bVar28);
    bVar25 = unaff_r11 == (undefined *)0x0;
  }
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffc2fff < unaff_r10 ||
             CARRY4((uint)("_ZNSt6__ndk121recursive_timed_mutex6unlockEv" + unaff_r10 + 0xe),
                    (uint)bVar26);
  }
  bVar25 = bVar25 && "_ZNSt6__ndk121recursive_timed_mutex6unlockEv" + (uint)bVar26 + unaff_r10 + 0xe
                     == (char *)0x0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfffe6fff < unaff_r10 || CARRY4(unaff_r10 + 0x19000,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x19000 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffd3fff < unaff_r10 ||
             CARRY4((uint)(
                          "_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5seekpENS_4fposI9mbstate_tEE"
                          + unaff_r10 + 0x3c),(uint)bVar26);
  }
  bVar25 = bVar25 && "_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5seekpENS_4fposI9mbstate_tEE"
                     + (uint)bVar26 + unaff_r10 + 0x3c == (char *)0x0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xffffcfff < unaff_r10 || CARRY4(unaff_r10 + 0x3000,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x3000 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfff5bfff < unaff_r10 || CARRY4(unaff_r10 + 0xa4000,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0xa4000 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xffccffff < unaff_r10 || CARRY4(unaff_r10 + 0x330000,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x330000 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffff7fff < unaff_r10 || CARRY4(unaff_r10 + 0x8000,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0x8000 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xffe1ffff < unaff_r10 || CARRY4(unaff_r10 + 0x1e0000,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x1e0000 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffc3fff < unaff_r10 || CARRY4(unaff_r10 + 0x3c000,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0x3c000 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfff1ffff < unaff_r10 || CARRY4(unaff_r10 + 0xe0000,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0xe0000 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffd3fff < unaff_r10 ||
             CARRY4((uint)(
                          "_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5seekpENS_4fposI9mbstate_tEE"
                          + unaff_r10 + 0x3c),(uint)bVar26);
  }
  bVar25 = bVar25 && "_ZNSt6__ndk113basic_ostreamIcNS_11char_traitsIcEEE5seekpENS_4fposI9mbstate_tEE"
                     + (uint)bVar26 + unaff_r10 + 0x3c == (char *)0x0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfff77fff < unaff_r10 || CARRY4(unaff_r10 + 0x88000,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x88000 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffd9ffff < unaff_r10 || CARRY4(unaff_r10 + 0x260000,(uint)bVar26);
  }
  bVar24 = false;
  bVar28 = bVar27;
  if (bVar25 && unaff_r10 + 0x260000 + (uint)bVar26 == 0) {
    bVar28 = 0xe8ffffff < unaff_r8 || CARRY4(unaff_r8 + 0x17000000,(uint)bVar27);
    iVar22 = unaff_r8 + 0x17000000 + (uint)bVar27;
    bVar24 = iVar22 == 0;
  }
  if (bVar24) {
    unaff_r10 = unaff_r9 + 0xc000000 + (uint)bVar28;
  }
  *(int *)(puVar18 + -0x24) = iVar22;
  *(undefined **)(puVar18 + -0x28) = unaff_r11;
  *(undefined4 *)(puVar18 + -0x2c) = uVar13;
  *(undefined4 *)(puVar18 + -0x30) = uVar9;
  *(undefined4 *)(puVar18 + -0x34) = uVar4;
  *(int *)(puVar18 + -0x38) = iVar12;
  puVar19 = puVar18 + -0x40;
  puVar8 = *(undefined4 **)(iVar14 + 0x1c);
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
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
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
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x30);
          goto LAB_036d9060;
        }
      }
      else {
        bVar26 = 0x71bf6502 < uVar3;
        uVar23 = false;
        if (uVar3 == 0x71bf6503) {
          iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d914c + 0x36d8d90),0);
          uVar23 = iVar12 == 0;
          bVar26 = true;
          if (!(bool)uVar23) {
            iVar12 = *(int *)(iVar14 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x34);
            goto LAB_036d9060;
          }
        }
      }
    }
    else if (uVar3 == 0xa443a855) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9160 + 0x36d8fc4),0);
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036d9060;
      }
    }
    else if (uVar3 == 0x7399d8e1) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d917c + 0x36d8ff0),0);
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x14);
        goto LAB_036d9060;
      }
    }
    else {
      bVar26 = 0x7ab1adb3 < uVar3;
      uVar23 = false;
      if (uVar3 == 0x7ab1adb4) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9150 + 0x36d8e48),0);
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
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
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x3c);
        goto LAB_036d9060;
      }
    }
    else if (uVar3 == 0xb436bd1b) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9164 + 0x36d8f98),0);
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036d9060;
      }
    }
    else {
      bVar26 = 0xb66b7bad < uVar3;
      uVar23 = false;
      if (uVar3 == 0xb66b7bae) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9154 + 0x36d8df4),0);
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
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
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x20);
        goto LAB_036d9060;
      }
    }
    else {
      bVar26 = 0xc5a69c51 < uVar3;
      uVar23 = false;
      if (uVar3 == 0xc5a69c52) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9158 + 0x36d8e9c),0);
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036d9060;
        }
      }
    }
  }
  else if (uVar3 == 0xc5d3516e) {
    iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9170 + 0x36d9048),0);
    uVar23 = iVar12 == 0;
    bVar26 = true;
    if (!(bool)uVar23) {
      iVar12 = *(int *)(iVar14 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x38);
      goto LAB_036d9060;
    }
  }
  else {
    bVar26 = 0xf655d0f8 < uVar3;
    uVar23 = false;
    if (uVar3 == 0xf655d0f9) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d915c + 0x36d8ee8),0);
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036d9060;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036d9180 + 0x36d90c8));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036d9184 + 0x36d90dc));
  *(undefined4 *)(puVar18 + -0x40) = 0;
  func_0x0509473c(uVar4,uVar5,uVar9,0);
  func_0x024f83c0(uVar4,iVar14);
  uVar29 = func_0x024f83bc();
  iVar12 = (int)((ulonglong)uVar29 >> 0x20);
  iVar1 = (int)uVar29;
  bVar24 = false;
  bVar27 = bVar26;
  if ((bool)uVar23) {
    bVar27 = 0xfe3fffff < extraout_r12_04 || CARRY4(extraout_r12_04 + 0x1c00000,(uint)bVar26);
    unaff_r11 = (undefined *)(extraout_r12_04 + 0x1c00000 + (uint)bVar26);
    bVar24 = unaff_r11 == (undefined *)0x0;
  }
  bVar25 = false;
  uVar3 = extraout_r12_04;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffccffff < unaff_r8 || CARRY4(unaff_r8 + 0x330000,(uint)bVar27);
    uVar3 = unaff_r8 + 0x330000 + (uint)bVar27;
    bVar25 = uVar3 == 0;
  }
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfd2fffff < unaff_r10 || CARRY4((uint)(&UNK_02d00000 + unaff_r10),(uint)bVar26);
  }
  bVar25 = bVar25 && &UNK_02d00000 + bVar26 + unaff_r10 == (undefined *)0x0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfd4fffff < unaff_r10 || CARRY4((uint)(&UNK_02b00000 + unaff_r10),(uint)bVar27);
  }
  bVar25 = bVar25 && &UNK_02b00000 + bVar27 + unaff_r10 == (undefined *)0x0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfd6fffff < unaff_r10 || CARRY4((uint)(&UNK_02900000 + unaff_r10),(uint)bVar26);
  }
  bVar25 = bVar25 && &UNK_02900000 + bVar26 + unaff_r10 == (undefined *)0x0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfd8fffff < unaff_r10 || CARRY4(unaff_r10 + 0x2700000,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x2700000 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfdafffff < unaff_r10 || CARRY4((uint)(&UNK_02500000 + unaff_r10),(uint)bVar26);
  }
  bVar25 = bVar25 && &UNK_02500000 + bVar26 + unaff_r10 == (undefined *)0x0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfdcfffff < unaff_r10 || CARRY4((uint)(&UNK_02300000 + unaff_r10),(uint)bVar27);
  }
  bVar25 = bVar25 && &UNK_02300000 + bVar27 + unaff_r10 == (undefined *)0x0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfdefffff < unaff_r10 || CARRY4((uint)(&UNK_02100000 + unaff_r10),(uint)bVar26);
  }
  bVar25 = bVar25 && &UNK_02100000 + bVar26 + unaff_r10 == (undefined *)0x0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfe0fffff < unaff_r10 || CARRY4(unaff_r10 + 0x1f00000,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x1f00000 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfe2fffff < unaff_r10 || CARRY4((uint)(&UNK_01d00000 + unaff_r10),(uint)bVar26);
  }
  bVar25 = bVar25 && &UNK_01d00000 + bVar26 + unaff_r10 == (undefined *)0x0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfe4fffff < unaff_r10 || CARRY4((uint)(&UNK_01b00000 + unaff_r10),(uint)bVar27);
  }
  bVar25 = bVar25 && &UNK_01b00000 + bVar27 + unaff_r10 == (undefined *)0x0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfe6fffff < unaff_r10 || CARRY4((uint)(&UNK_01900000 + unaff_r10),(uint)bVar26);
  }
  bVar25 = bVar25 && &UNK_01900000 + bVar26 + unaff_r10 == (undefined *)0x0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfe8fffff < unaff_r10 || CARRY4((uint)(&UNK_01700000 + unaff_r10),(uint)bVar27);
  }
  bVar25 = bVar25 && &UNK_01700000 + bVar27 + unaff_r10 == (undefined *)0x0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfeafffff < unaff_r10 || CARRY4((uint)(&UNK_01500000 + unaff_r10),(uint)bVar26);
  }
  bVar24 = false;
  bVar28 = bVar27;
  if (bVar25 && &UNK_01500000 + bVar26 + unaff_r10 == (undefined *)0x0) {
    bVar28 = 0xfffcffff < unaff_r8 || CARRY4(unaff_r8 + 0x30000,(uint)bVar27);
    uVar3 = unaff_r8 + 0x30000 + (uint)bVar27;
    bVar24 = uVar3 == 0;
  }
  bVar25 = false;
  bVar26 = bVar28;
  if (bVar24) {
    bVar26 = 0xf9ffffff < uVar3 || CARRY4(uVar3 + 0x6000000,(uint)bVar28);
    unaff_r11 = (undefined *)(uVar3 + 0x6000000 + (uint)bVar28);
    bVar25 = unaff_r11 == (undefined *)0x0;
  }
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfa7fffff < unaff_r10 || CARRY4((uint)(&UNK_05800000 + unaff_r10),(uint)bVar26);
  }
  bVar25 = bVar25 && &UNK_05800000 + bVar26 + unaff_r10 == (undefined *)0x0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xcdffffff < unaff_r10 || CARRY4(unaff_r10 + 0x32000000,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x32000000 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfebfffff < unaff_r10 || CARRY4((uint)(&UNK_01400000 + unaff_r10),(uint)bVar26);
  }
  bVar25 = bVar25 && &UNK_01400000 + bVar26 + unaff_r10 == (undefined *)0x0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xe3ffffff < unaff_r10 || CARRY4(unaff_r10 + 0x1c000000,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x1c000000 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfdffffff < unaff_r10 || CARRY4(unaff_r10 + 0x2000000,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0x2000000 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xcfffffff < unaff_r10 || CARRY4(unaff_r10 + 0x30000000,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x30000000 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0x93ffffff < unaff_r10 || CARRY4(unaff_r10 + 0x6c000000,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0x6c000000 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0x8ffffffc < unaff_r10 || CARRY4(unaff_r10 + 0x70000003,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x70000003 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0x5fffffff < unaff_r10 || CARRY4(unaff_r10 + 0xa0000000,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0xa0000000 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0x8ffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x70000002,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0x70000002 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0x6fffffff < unaff_r10 || CARRY4(unaff_r10 + 0x90000000,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0x90000000 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0x13ffffff < unaff_r10 || CARRY4(unaff_r10 + 0xec000000,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0xec000000 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffffc < unaff_r10 || CARRY4(unaff_r10 + 0xf0000003,(uint)bVar26);
  }
  bVar24 = false;
  bVar28 = bVar27;
  if (bVar25 && unaff_r10 + 0xf0000003 + (uint)bVar26 == 0) {
    bVar28 = 0xfffffcff < unaff_r8 || CARRY4(unaff_r8 + 0x300,(uint)bVar27);
    puVar19 = (undefined1 *)(unaff_r8 + 0x300 + (uint)bVar27);
    bVar24 = (undefined1 *)(unaff_r8 + 0x300 + (uint)bVar27) == (undefined1 *)0x0;
  }
  if (bVar24) {
    unaff_r10 = unaff_r9 + 9 + (uint)bVar28;
  }
  *(undefined4 *)(puVar19 + -4) = 0x36d9108;
  *(undefined **)(puVar19 + -8) = unaff_r11;
  *(undefined4 *)(puVar19 + -0xc) = uVar13;
  *(undefined4 *)(puVar19 + -0x10) = uVar9;
  *(undefined4 *)(puVar19 + -0x14) = uVar4;
  *(int *)(puVar19 + -0x18) = iVar14;
  puVar20 = puVar19 + -0x20;
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
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
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
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x1c);
          goto LAB_036d969c;
        }
      }
      else {
        bVar26 = (undefined *)0x335bb155 < puVar6;
        uVar23 = false;
        if (puVar6 == (undefined *)0x335bb156) {
          iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9790 + 0x36d9344),0);
          uVar23 = iVar14 == 0;
          bVar26 = true;
          if (!(bool)uVar23) {
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
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x38);
          goto LAB_036d969c;
        }
      }
      else {
        bVar26 = (undefined *)0x44330b37 < puVar6;
        uVar23 = false;
        if (puVar6 == (undefined *)0x44330b38) {
          iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9794 + 0x36d93fc),0);
          uVar23 = iVar14 == 0;
          bVar26 = true;
          if (!(bool)uVar23) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x30);
            goto LAB_036d969c;
          }
        }
      }
    }
    else if (puVar6 == (undefined *)0x49331317) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d97b4 + 0x36d9658),0);
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036d969c;
      }
    }
    else {
      bVar26 = (undefined *)0x4a3314a9 < puVar6;
      uVar23 = false;
      if (puVar6 == (undefined *)0x4a3314aa) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9798 + 0x36d94d8),0);
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
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
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036d969c;
        }
      }
      else {
        bVar26 = (undefined *)0x69275589 < puVar6;
        uVar23 = false;
        if (puVar6 == (undefined *)0x6927558a) {
          iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d979c + 0x36d93a8),0);
          uVar23 = iVar14 == 0;
          bVar26 = true;
          if (!(bool)uVar23) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x44);
            goto LAB_036d969c;
          }
        }
      }
    }
    else if (puVar6 == (undefined *)0xa110364a) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d97c0 + 0x36d962c),0);
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x40);
        goto LAB_036d969c;
      }
    }
    else {
      bVar26 = (undefined *)0x757b0316 < puVar6;
      uVar23 = false;
      if (puVar6 == (undefined *)0x757b0317) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d97a0 + 0x36d9494),0);
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
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
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036d969c;
      }
    }
    else {
      bVar26 = (undefined *)0xc9fcd30c < puVar6;
      uVar23 = false;
      if (puVar6 == (undefined *)0xc9fcd30d) {
        iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d97a4 + 0x36d9450),0);
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x14);
          goto LAB_036d969c;
        }
      }
    }
  }
  else if (puVar6 == (undefined *)0xedb39c44) {
    iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d97b0 + 0x36d9684),0);
    uVar23 = iVar14 == 0;
    bVar26 = true;
    if (!(bool)uVar23) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x20);
      goto LAB_036d969c;
    }
  }
  else {
    bVar26 = (undefined *)0xfe254767 < puVar6;
    uVar23 = false;
    if (puVar6 == (undefined *)0xfe254768) {
      iVar14 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d97a8 + 0x36d9524),0);
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x4c);
        goto LAB_036d969c;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036d97cc + 0x36d9704));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036d97d0 + 0x36d9718));
  *(undefined4 *)(puVar19 + -0x20) = 0;
  func_0x0509473c(uVar4,uVar5,uVar9,0);
  func_0x024f83c0(uVar4,iVar12);
  uVar29 = func_0x024f83bc();
  iVar14 = (int)((ulonglong)uVar29 >> 0x20);
  iVar1 = (int)uVar29;
  bVar24 = false;
  bVar27 = bVar26;
  if ((bool)uVar23) {
    bVar27 = 0xffffffca < extraout_r12_05 || CARRY4(extraout_r12_05 + 0x35,(uint)bVar26);
    unaff_r11 = (undefined *)(extraout_r12_05 + 0x35 + (uint)bVar26);
    bVar24 = unaff_r11 == (undefined *)0x0;
  }
  bVar25 = false;
  uVar3 = extraout_r12_05;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xcfffffff < unaff_r8 || CARRY4(unaff_r8 + 0x30000000,(uint)bVar27);
    uVar3 = unaff_r8 + 0x30000000 + (uint)bVar27;
    bVar25 = uVar3 == 0;
  }
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffffff2 < unaff_r10 || CARRY4(unaff_r10 + 0xd,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0xd + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfffffff4 < unaff_r10 || CARRY4(unaff_r10 + 0xb,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0xb + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffffff6 < unaff_r10 || CARRY4(unaff_r10 + 9,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 9 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfffffff8 < unaff_r10 || CARRY4(unaff_r10 + 7,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 7 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffffffa < unaff_r10 || CARRY4(unaff_r10 + 5,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 5 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfffffffc < unaff_r10 || CARRY4(unaff_r10 + 3,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 3 + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffffffe < unaff_r10 || CARRY4(unaff_r10 + 1,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 1 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xffffff03 < unaff_r10 || CARRY4(unaff_r10 + 0xfc,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0xfc + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffff0b < unaff_r10 || CARRY4(unaff_r10 + 0xf4,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0xf4 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xffffff13 < unaff_r10 || CARRY4(unaff_r10 + 0xec,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0xec + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffff1b < unaff_r10 || CARRY4(unaff_r10 + 0xe4,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0xe4 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xffffff23 < unaff_r10 || CARRY4(unaff_r10 + 0xdc,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0xdc + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffff2b < unaff_r10 || CARRY4(unaff_r10 + 0xd4,(uint)bVar26);
  }
  bVar25 = bVar25 && unaff_r10 + 0xd4 + (uint)bVar26 == 0;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xffffff33 < unaff_r10 || CARRY4(unaff_r10 + 0xcc,(uint)bVar27);
  }
  bVar25 = bVar25 && unaff_r10 + 0xcc + (uint)bVar27 == 0;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffff3b < unaff_r10 || CARRY4(unaff_r10 + 0xc4,(uint)bVar26);
  }
  bVar24 = false;
  bVar28 = bVar27;
  if (bVar25 && unaff_r10 + 0xc4 + (uint)bVar26 == 0) {
    bVar28 = 0x9ffffffe < unaff_r8 || CARRY4(unaff_r8 + 0x60000001,(uint)bVar27);
    uVar3 = unaff_r8 + 0x60000001 + (uint)bVar27;
    bVar24 = uVar3 == 0;
  }
  bVar25 = false;
  bVar26 = bVar28;
  if (bVar24) {
    bVar26 = 0xffffff53 < uVar3 || CARRY4(uVar3 + 0xac,(uint)bVar28);
    unaff_r11 = (undefined *)(uVar3 + 0xac + (uint)bVar28);
    bVar25 = unaff_r11 == (undefined *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffffc7f < unaff_r10 || CARRY4(unaff_r10 + 0x380,(uint)bVar26);
    iVar14 = unaff_r10 + 0x380 + (uint)bVar26;
    bVar24 = iVar14 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffff7f < unaff_r10 || CARRY4(unaff_r10 + 0x80,(uint)bVar27);
    iVar14 = unaff_r10 + 0x80 + (uint)bVar27;
    bVar25 = iVar14 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffffa7f < unaff_r10 || CARRY4(unaff_r10 + 0x580,(uint)bVar26);
    iVar14 = unaff_r10 + 0x580 + (uint)bVar26;
    bVar24 = iVar14 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfffffe1f < unaff_r10 || CARRY4(unaff_r10 + 0x1e0,(uint)bVar27);
    iVar14 = unaff_r10 + 0x1e0 + (uint)bVar27;
    bVar25 = iVar14 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffff6bf < unaff_r10 || CARRY4(unaff_r10 + 0x940,(uint)bVar26);
    iVar14 = unaff_r10 + 0x940 + (uint)bVar26;
    bVar24 = iVar14 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfffff3bf < unaff_r10 || CARRY4(unaff_r10 + 0xc40,(uint)bVar27);
    iVar14 = unaff_r10 + 0xc40 + (uint)bVar27;
    bVar25 = iVar14 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffffeff < unaff_r10 || CARRY4(unaff_r10 + 0x100,(uint)bVar26);
    iVar14 = unaff_r10 + 0x100 + (uint)bVar26;
    bVar24 = iVar14 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffd3ff < unaff_r10 || CARRY4(unaff_r10 + 0x2c00,(uint)bVar27);
    iVar14 = unaff_r10 + 0x2c00 + (uint)bVar27;
    bVar25 = iVar14 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffff7fff < unaff_r10 || CARRY4(unaff_r10 + 0x8000,(uint)bVar26);
    iVar14 = unaff_r10 + 0x8000 + (uint)bVar26;
    bVar24 = iVar14 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffff5bff < unaff_r10 || CARRY4(unaff_r10 + 0xa400,(uint)bVar27);
    iVar14 = unaff_r10 + 0xa400 + (uint)bVar27;
    bVar25 = iVar14 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffe3ff < unaff_r10 || CARRY4(unaff_r10 + 0x1c00,(uint)bVar26);
    iVar14 = unaff_r10 + 0x1c00 + (uint)bVar26;
    bVar24 = iVar14 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfffff0ff < unaff_r10 || CARRY4(unaff_r10 + 0xf00,(uint)bVar27);
    iVar14 = unaff_r10 + 0xf00 + (uint)bVar27;
    bVar25 = iVar14 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffff2bff < unaff_r10 || CARRY4(unaff_r10 + 0xd400,(uint)bVar26);
    iVar14 = unaff_r10 + 0xd400 + (uint)bVar26;
    bVar24 = iVar14 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffd0ff < unaff_r10 || CARRY4(unaff_r10 + 0x2f00,(uint)bVar27);
    iVar14 = unaff_r10 + 0x2f00 + (uint)bVar27;
    bVar25 = iVar14 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffffdff < unaff_r10 || CARRY4(unaff_r10 + 0x200,(uint)bVar26);
    iVar14 = unaff_r10 + 0x200 + (uint)bVar26;
    bVar24 = iVar14 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffdeffff < unaff_r8 || CARRY4(unaff_r8 + 0x210000,(uint)bVar27);
    puVar20 = (undefined1 *)(unaff_r8 + 0x210000 + (uint)bVar27);
    bVar25 = (undefined1 *)(unaff_r8 + 0x210000 + (uint)bVar27) == (undefined1 *)0x0;
  }
  if (bVar25) {
    unaff_r9 = unaff_r9 + 0xe8000 + (uint)bVar26;
  }
  *(undefined4 *)(puVar20 + -4) = 0x36d9744;
  *(undefined **)(puVar20 + -8) = unaff_r11;
  *(undefined4 *)(puVar20 + -0xc) = uVar13;
  *(undefined4 *)(puVar20 + -0x10) = uVar9;
  *(undefined4 *)(puVar20 + -0x14) = uVar4;
  *(int *)(puVar20 + -0x18) = iVar12;
  puVar21 = puVar20 + -0x20;
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
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
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
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x1c);
          goto LAB_036d9ce8;
        }
      }
      else {
        bVar26 = (undefined *)0x335bb155 < puVar6;
        uVar23 = false;
        if (puVar6 == (undefined *)0x335bb156) {
          iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9ddc + 0x36d9990),0);
          uVar23 = iVar12 == 0;
          bVar26 = true;
          if (!(bool)uVar23) {
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
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x38);
          goto LAB_036d9ce8;
        }
      }
      else {
        bVar26 = (undefined *)0x44330b37 < puVar6;
        uVar23 = false;
        if (puVar6 == (undefined *)0x44330b38) {
          iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9de0 + 0x36d9a48),0);
          uVar23 = iVar12 == 0;
          bVar26 = true;
          if (!(bool)uVar23) {
            iVar12 = *(int *)(iVar14 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x30);
            goto LAB_036d9ce8;
          }
        }
      }
    }
    else if (puVar6 == (undefined *)0x49331317) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9e00 + 0x36d9ca4),0);
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036d9ce8;
      }
    }
    else {
      bVar26 = (undefined *)0x4a3314a9 < puVar6;
      uVar23 = false;
      if (puVar6 == (undefined *)0x4a3314aa) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9de4 + 0x36d9b24),0);
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
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
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036d9ce8;
        }
      }
      else {
        bVar26 = (undefined *)0x69275589 < puVar6;
        uVar23 = false;
        if (puVar6 == (undefined *)0x6927558a) {
          iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9de8 + 0x36d99f4),0);
          uVar23 = iVar12 == 0;
          bVar26 = true;
          if (!(bool)uVar23) {
            iVar12 = *(int *)(iVar14 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x44);
            goto LAB_036d9ce8;
          }
        }
      }
    }
    else if (puVar6 == (undefined *)0xa110364a) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9e0c + 0x36d9c78),0);
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x40);
        goto LAB_036d9ce8;
      }
    }
    else {
      bVar26 = (undefined *)0x757b0316 < puVar6;
      uVar23 = false;
      if (puVar6 == (undefined *)0x757b0317) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9dec + 0x36d9ae0),0);
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
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
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036d9ce8;
      }
    }
    else {
      bVar26 = (undefined *)0xc9fcd30c < puVar6;
      uVar23 = false;
      if (puVar6 == (undefined *)0xc9fcd30d) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9df0 + 0x36d9a9c),0);
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar14 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x14);
          goto LAB_036d9ce8;
        }
      }
    }
  }
  else if (puVar6 == (undefined *)0xedb39c44) {
    iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9dfc + 0x36d9cd0),0);
    uVar23 = iVar12 == 0;
    bVar26 = true;
    if (!(bool)uVar23) {
      iVar12 = *(int *)(iVar14 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x20);
      goto LAB_036d9ce8;
    }
  }
  else {
    bVar26 = (undefined *)0xfe254767 < puVar6;
    uVar23 = false;
    if (puVar6 == (undefined *)0xfe254768) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036d9df4 + 0x36d9b70),0);
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar14 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x4c);
        goto LAB_036d9ce8;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036d9e18 + 0x36d9d50));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036d9e1c + 0x36d9d64));
  *(undefined4 *)(puVar20 + -0x20) = 0;
  func_0x0509473c(uVar4,uVar5,uVar9,0);
  func_0x024f83c0(uVar4,iVar14);
  uVar29 = func_0x024f83bc();
  puVar6 = (undefined *)((ulonglong)uVar29 >> 0x20);
  iVar1 = (int)uVar29;
  bVar24 = false;
  bVar27 = bVar26;
  if ((bool)uVar23) {
    bVar27 = 0xfffddfff < extraout_r12_06 || CARRY4(extraout_r12_06 + 0x22000,(uint)bVar26);
    unaff_r10 = extraout_r12_06 + 0x22000 + (uint)bVar26;
    bVar24 = unaff_r10 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffc6ff < unaff_r8 || CARRY4(unaff_r8 + 0x3900,(uint)bVar27);
    unaff_r11 = (undefined *)(unaff_r8 + 0x3900 + (uint)bVar27);
    bVar25 = unaff_r11 == (undefined *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfff17fff < unaff_r10 || CARRY4(unaff_r10 + 0xe8000,(uint)bVar26);
    puVar6 = (undefined *)(unaff_r10 + 0xe8000 + (uint)bVar26);
    bVar24 = puVar6 == (undefined *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfff1ffff < unaff_r10 || CARRY4(unaff_r10 + 0xe0000,(uint)bVar27);
    puVar6 = (undefined *)(unaff_r10 + 0xe0000 + (uint)bVar27);
    bVar25 = puVar6 == (undefined *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfff27fff < unaff_r10 || CARRY4(unaff_r10 + 0xd8000,(uint)bVar26);
    puVar6 = (undefined *)(unaff_r10 + 0xd8000 + (uint)bVar26);
    bVar24 = puVar6 == (undefined *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfff2ffff < unaff_r10 || CARRY4(unaff_r10 + 0xd0000,(uint)bVar27);
    puVar6 = (undefined *)(unaff_r10 + 0xd0000 + (uint)bVar27);
    bVar25 = puVar6 == (undefined *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfff37fff < unaff_r10 || CARRY4(unaff_r10 + 0xc8000,(uint)bVar26);
    puVar6 = (undefined *)(unaff_r10 + 0xc8000 + (uint)bVar26);
    bVar24 = puVar6 == (undefined *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfff3ffff < unaff_r10 || CARRY4(unaff_r10 + 0xc0000,(uint)bVar27);
    puVar6 = (undefined *)(unaff_r10 + 0xc0000 + (uint)bVar27);
    bVar25 = puVar6 == (undefined *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfff47fff < unaff_r10 || CARRY4(unaff_r10 + 0xb8000,(uint)bVar26);
    puVar6 = (undefined *)(unaff_r10 + 0xb8000 + (uint)bVar26);
    bVar24 = puVar6 == (undefined *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfff4ffff < unaff_r10 || CARRY4(unaff_r10 + 0xb0000,(uint)bVar27);
    puVar6 = (undefined *)(unaff_r10 + 0xb0000 + (uint)bVar27);
    bVar25 = puVar6 == (undefined *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfff57fff < unaff_r10 || CARRY4(unaff_r10 + 0xa8000,(uint)bVar26);
    puVar6 = (undefined *)(unaff_r10 + 0xa8000 + (uint)bVar26);
    bVar24 = puVar6 == (undefined *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfff5ffff < unaff_r10 || CARRY4(unaff_r10 + 0xa0000,(uint)bVar27);
    puVar6 = (undefined *)(unaff_r10 + 0xa0000 + (uint)bVar27);
    bVar25 = puVar6 == (undefined *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfff67fff < unaff_r10 || CARRY4(unaff_r10 + 0x98000,(uint)bVar26);
    puVar6 = (undefined *)(unaff_r10 + 0x98000 + (uint)bVar26);
    bVar24 = puVar6 == (undefined *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfff6ffff < unaff_r10 || CARRY4(unaff_r10 + 0x90000,(uint)bVar27);
    puVar6 = (undefined *)(unaff_r10 + 0x90000 + (uint)bVar27);
    bVar25 = puVar6 == (undefined *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfff77fff < unaff_r10 || CARRY4(unaff_r10 + 0x88000,(uint)bVar26);
    puVar6 = (undefined *)(unaff_r10 + 0x88000 + (uint)bVar26);
    bVar24 = puVar6 == (undefined *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfff7ffff < unaff_r10 || CARRY4(unaff_r10 + 0x80000,(uint)bVar27);
    puVar6 = (undefined *)(unaff_r10 + 0x80000 + (uint)bVar27);
    bVar25 = puVar6 == (undefined *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfff87fff < unaff_r10 || CARRY4(unaff_r10 + 0x78000,(uint)bVar26);
    puVar6 = (undefined *)(unaff_r10 + 0x78000 + (uint)bVar26);
    bVar24 = puVar6 == (undefined *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfffffcff < unaff_r8 || CARRY4(unaff_r8 + 0x300,(uint)bVar27);
    unaff_r11 = (undefined *)(unaff_r8 + 0x300 + (uint)bVar27);
    bVar25 = unaff_r11 == (undefined *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfff9ffff < extraout_r12_06 || CARRY4(extraout_r12_06 + 0x60000,(uint)bVar26);
    unaff_r10 = extraout_r12_06 + 0x60000 + (uint)bVar26;
    bVar24 = unaff_r10 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffdaffff < unaff_r10 || CARRY4(unaff_r10 + 0x250000,(uint)bVar27);
    puVar6 = (undefined *)(unaff_r10 + 0x250000 + (uint)bVar27);
    bVar25 = puVar6 == (undefined *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xff2bffff < unaff_r10 || CARRY4((uint)(&UNK_00d40000 + unaff_r10),(uint)bVar26);
    puVar6 = &UNK_00d40000 + bVar26 + unaff_r10;
    bVar24 = puVar6 == (undefined *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfff3ffff < unaff_r10 || CARRY4(unaff_r10 + 0xc0000,(uint)bVar27);
    puVar6 = (undefined *)(unaff_r10 + 0xc0000 + (uint)bVar27);
    bVar25 = puVar6 == (undefined *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfff4ffff < unaff_r10 || CARRY4(unaff_r10 + 0xb0000,(uint)bVar26);
    puVar6 = (undefined *)(unaff_r10 + 0xb0000 + (uint)bVar26);
    bVar24 = puVar6 == (undefined *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffb7ffff < unaff_r10 || CARRY4(unaff_r10 + 0x480000,(uint)bVar27);
    puVar6 = (undefined *)(unaff_r10 + 0x480000 + (uint)bVar27);
    bVar25 = puVar6 == (undefined *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xff87ffff < unaff_r10 || CARRY4(unaff_r10 + 0x780000,(uint)bVar26);
    puVar6 = (undefined *)(unaff_r10 + 0x780000 + (uint)bVar26);
    bVar24 = puVar6 == (undefined *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfcefffff < unaff_r10 || CARRY4((uint)(&UNK_03100000 + unaff_r10),(uint)bVar27);
    puVar6 = &UNK_03100000 + bVar27 + unaff_r10;
    bVar25 = puVar6 == (undefined *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfe6fffff < unaff_r10 || CARRY4((uint)(&UNK_01900000 + unaff_r10),(uint)bVar26);
    puVar6 = &UNK_01900000 + bVar26 + unaff_r10;
    bVar24 = puVar6 == (undefined *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfcbfffff < unaff_r10 || CARRY4((uint)(&UNK_03400000 + unaff_r10),(uint)bVar27);
    puVar6 = &UNK_03400000 + bVar27 + unaff_r10;
    bVar25 = puVar6 == (undefined *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfa7fffff < unaff_r10 || CARRY4((uint)(&UNK_05800000 + unaff_r10),(uint)bVar26);
    puVar6 = &UNK_05800000 + bVar26 + unaff_r10;
    bVar24 = puVar6 == (undefined *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xff6fffff < unaff_r10 || CARRY4((uint)(&UNK_00900000 + unaff_r10),(uint)bVar27);
    puVar6 = &UNK_00900000 + bVar27 + unaff_r10;
    bVar25 = puVar6 == (undefined *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xf0ffffff < unaff_r10 || CARRY4(unaff_r10 + 0xf000000,(uint)bVar26);
    puVar6 = (undefined *)(unaff_r10 + 0xf000000 + (uint)bVar26);
    bVar24 = puVar6 == (undefined *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xf77fffff < unaff_r10 || CARRY4(unaff_r10 + 0x8800000,(uint)bVar27);
    puVar6 = (undefined *)(unaff_r10 + 0x8800000 + (uint)bVar27);
    bVar25 = puVar6 == (undefined *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfe3fffff < unaff_r10 || CARRY4(unaff_r10 + 0x1c00000,(uint)bVar26);
    puVar6 = (undefined *)(unaff_r10 + 0x1c00000 + (uint)bVar26);
    bVar24 = puVar6 == (undefined *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xf43fffff < unaff_r10 || CARRY4(unaff_r10 + 0xbc00000,(uint)bVar27);
    puVar6 = (undefined *)(unaff_r10 + 0xbc00000 + (uint)bVar27);
    bVar25 = puVar6 == (undefined *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0x1fffffff < unaff_r8 || CARRY4(unaff_r8 + 0xe0000000,(uint)bVar26);
    puVar21 = (undefined1 *)(unaff_r8 + 0xe0000000 + (uint)bVar26);
    bVar24 = (undefined1 *)(unaff_r8 + 0xe0000000 + (uint)bVar26) == (undefined1 *)0x0;
  }
  if (bVar24) {
    unaff_r9 = unaff_r9 + -0x64000000 + (uint)bVar27;
  }
  *(undefined4 *)(puVar21 + -4) = 0x36d9d90;
  *(undefined **)(puVar21 + -8) = unaff_r11;
  *(undefined4 *)(puVar21 + -0xc) = uVar13;
  *(undefined4 *)(puVar21 + -0x10) = uVar9;
  *(undefined4 *)(puVar21 + -0x14) = uVar4;
  *(int *)(puVar21 + -0x18) = iVar14;
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
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
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
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(puVar6 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x30);
          goto LAB_036da294;
        }
      }
      else {
        bVar26 = (undefined *)0x4b393817 < puVar7;
        uVar23 = false;
        if (puVar7 == (undefined *)0x4b393818) {
          iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da380 + 0x36d9fc4),0);
          uVar23 = iVar12 == 0;
          bVar26 = true;
          if (!(bool)uVar23) {
            iVar12 = *(int *)(puVar6 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x14);
            goto LAB_036da294;
          }
        }
      }
    }
    else if (puVar7 == (undefined *)0x87a4488c) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da394 + 0x36da1f8),0);
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(puVar6 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036da294;
      }
    }
    else if (puVar7 == (undefined *)0x5bc15335) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da3ac + 0x36da224),0);
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(puVar6 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x44);
        goto LAB_036da294;
      }
    }
    else {
      bVar26 = (undefined *)0x5d6adef6 < puVar7;
      uVar23 = false;
      if (puVar7 == (undefined *)0x5d6adef7) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da384 + 0x36da07c),0);
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
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
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(puVar6 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036da294;
      }
    }
    else if (puVar7 == (undefined *)0x9dbb78b9) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da3a8 + 0x36da1cc),0);
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(puVar6 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x3c);
        goto LAB_036da294;
      }
    }
    else {
      bVar26 = (undefined *)0xaf0e9ec6 < puVar7;
      uVar23 = false;
      if (puVar7 == (undefined *)0xaf0e9ec7) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da388 + 0x36da028),0);
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
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
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(puVar6 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036da294;
      }
    }
    else {
      bVar26 = (undefined *)0xd3917652 < puVar7;
      uVar23 = false;
      if (puVar7 == (undefined *)0xd3917653) {
        iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da38c + 0x36da0d0),0);
        uVar23 = iVar12 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(puVar6 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
          goto LAB_036da294;
        }
      }
    }
  }
  else if (puVar7 == (undefined *)0xdf1ae323) {
    iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da398 + 0x36da27c),0);
    uVar23 = iVar12 == 0;
    bVar26 = true;
    if (!(bool)uVar23) {
      iVar12 = *(int *)(puVar6 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x20);
      goto LAB_036da294;
    }
  }
  else {
    bVar26 = (undefined *)0xed8e82d0 < puVar7;
    uVar23 = false;
    if (puVar7 == (undefined *)0xed8e82d1) {
      iVar12 = func_0x04f57738(uVar9,**(undefined4 **)(iRam036da390 + 0x36da11c),0);
      uVar23 = iVar12 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(puVar6 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x38);
        goto LAB_036da294;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036da3b4 + 0x36da2fc));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036da3b8 + 0x36da310));
  *(undefined4 *)(puVar21 + -0x20) = 0;
  func_0x0509473c(uVar4,uVar5,uVar9,0);
  func_0x024f83c0(uVar4,puVar6);
  uVar29 = func_0x024f83bc();
  iVar12 = (int)((ulonglong)uVar29 >> 0x20);
  iVar1 = (int)uVar29;
  bVar24 = false;
  bVar27 = bVar26;
  if ((bool)uVar23) {
    bVar27 = 0xf0ffffff < extraout_r12_07 || CARRY4(extraout_r12_07 + 0xf000000,(uint)bVar26);
    unaff_r10 = extraout_r12_07 + 0xf000000 + (uint)bVar26;
    bVar24 = unaff_r10 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfd9fffff < unaff_r8 || CARRY4((uint)(&UNK_02600000 + unaff_r8),(uint)bVar27);
    unaff_r11 = &UNK_02600000 + bVar27 + unaff_r8;
    bVar25 = unaff_r11 == (undefined *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0x5ffffffd < unaff_r10 || CARRY4(unaff_r10 + 0xa0000002,(uint)bVar26);
    iVar12 = unaff_r10 + 0xa0000002 + (uint)bVar26;
    bVar24 = iVar12 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0x7ffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x80000002,(uint)bVar27);
    iVar12 = unaff_r10 + 0x80000002 + (uint)bVar27;
    bVar25 = iVar12 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0x9ffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x60000002,(uint)bVar26);
    iVar12 = unaff_r10 + 0x60000002 + (uint)bVar26;
    bVar24 = iVar12 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xbffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x40000002,(uint)bVar27);
    iVar12 = unaff_r10 + 0x40000002 + (uint)bVar27;
    bVar25 = iVar12 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xdffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x20000002,(uint)bVar26);
    iVar12 = unaff_r10 + 0x20000002 + (uint)bVar26;
    bVar24 = iVar12 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfffffffd < unaff_r10 || CARRY4(unaff_r10 + 2,(uint)bVar27);
    iVar12 = unaff_r10 + 2 + (uint)bVar27;
    bVar25 = iVar12 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0x1ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0xe0000001,(uint)bVar26);
    iVar12 = unaff_r10 + 0xe0000001 + (uint)bVar26;
    bVar24 = iVar12 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0x3ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0xc0000001,(uint)bVar27);
    iVar12 = unaff_r10 + 0xc0000001 + (uint)bVar27;
    bVar25 = iVar12 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0x5ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0xa0000001,(uint)bVar26);
    iVar12 = unaff_r10 + 0xa0000001 + (uint)bVar26;
    bVar24 = iVar12 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0x7ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x80000001,(uint)bVar27);
    iVar12 = unaff_r10 + 0x80000001 + (uint)bVar27;
    bVar25 = iVar12 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0x9ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x60000001,(uint)bVar26);
    iVar12 = unaff_r10 + 0x60000001 + (uint)bVar26;
    bVar24 = iVar12 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xbffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x40000001,(uint)bVar27);
    iVar12 = unaff_r10 + 0x40000001 + (uint)bVar27;
    bVar25 = iVar12 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xdffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x20000001,(uint)bVar26);
    iVar12 = unaff_r10 + 0x20000001 + (uint)bVar26;
    bVar24 = iVar12 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xf27fffff < unaff_r8 || CARRY4(unaff_r8 + 0xd800000,(uint)bVar27);
    unaff_r11 = (undefined *)(unaff_r8 + 0xd800000 + (uint)bVar27);
    bVar25 = unaff_r11 == (undefined *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xd3ffffff < extraout_r12_07 || CARRY4(extraout_r12_07 + 0x2c000000,(uint)bVar26);
    unaff_r10 = extraout_r12_07 + 0x2c000000 + (uint)bVar26;
    bVar24 = unaff_r10 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0x3ffffffa < unaff_r10 || CARRY4(unaff_r10 + 0xc0000005,(uint)bVar27);
    iVar12 = unaff_r10 + 0xc0000005 + (uint)bVar27;
    bVar25 = iVar12 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffffd8 < unaff_r10 || CARRY4(unaff_r10 + 0x27,(uint)bVar26);
    iVar12 = unaff_r10 + 0x27 + (uint)bVar26;
    bVar24 = iVar12 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffffc4 < unaff_r10 || CARRY4(unaff_r10 + 0x3b,(uint)bVar27);
    iVar12 = unaff_r10 + 0x3b + (uint)bVar27;
    bVar25 = iVar12 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffffe5 < unaff_r10 || CARRY4(unaff_r10 + 0x1a,(uint)bVar26);
    iVar12 = unaff_r10 + 0x1a + (uint)bVar26;
    bVar24 = iVar12 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfffffff9 < unaff_r10 || CARRY4(unaff_r10 + 6,(uint)bVar27);
    iVar12 = unaff_r10 + 6 + (uint)bVar27;
    bVar25 = iVar12 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffffcf < unaff_r10 || CARRY4(unaff_r10 + 0x30,(uint)bVar26);
    iVar12 = unaff_r10 + 0x30 + (uint)bVar26;
    bVar24 = iVar12 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfffffdcf < unaff_r10 || CARRY4(unaff_r10 + 0x230,(uint)bVar27);
    iVar1 = unaff_r10 + 0x230 + (uint)bVar27;
    bVar25 = iVar1 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffff8f < unaff_r10 || CARRY4(unaff_r10 + 0x70,(uint)bVar26);
    iVar12 = unaff_r10 + 0x70 + (uint)bVar26;
    bVar24 = iVar12 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffff43 < unaff_r10 || CARRY4(unaff_r10 + 0xbc,(uint)bVar27);
    iVar12 = unaff_r10 + 0xbc + (uint)bVar27;
    bVar25 = iVar12 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffff23 < unaff_r10 || CARRY4(unaff_r10 + 0xdc,(uint)bVar26);
    iVar12 = unaff_r10 + 0xdc + (uint)bVar26;
    bVar24 = iVar12 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffff9f < unaff_r10 || CARRY4(unaff_r10 + 0x60,(uint)bVar27);
    iVar12 = unaff_r10 + 0x60 + (uint)bVar27;
    bVar25 = iVar12 == 0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffffc1f < unaff_r10 || CARRY4(unaff_r10 + 0x3e0,(uint)bVar26);
    iVar1 = unaff_r10 + 0x3e0 + (uint)bVar26;
    bVar24 = iVar1 == 0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfffffd0f < unaff_r10 || CARRY4(unaff_r10 + 0x2f0,(uint)bVar27);
    iVar1 = unaff_r10 + 0x2f0 + (uint)bVar27;
    bVar25 = iVar1 == 0;
  }
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffdcff < unaff_r8 || CARRY4(unaff_r8 + 0x2300,(uint)bVar26);
  }
  if (bVar25 && unaff_r8 + 0x2300 + (uint)bVar26 == 0) {
    unaff_r8 = unaff_r9 + 0xf00 + (uint)bVar27;
  }
  *(undefined4 *)(puVar21 + -0x24) = 0x36da33c;
  *(undefined **)(puVar21 + -0x28) = unaff_r11;
  *(undefined4 *)(puVar21 + -0x2c) = uVar13;
  *(undefined4 *)(puVar21 + -0x30) = uVar9;
  *(undefined4 *)(puVar21 + -0x34) = uVar4;
  *(undefined **)(puVar21 + -0x38) = puVar6;
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
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
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
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x30);
          goto LAB_036da830;
        }
      }
      else {
        bVar26 = (undefined *)0x4b393817 < puVar6;
        uVar23 = false;
        if (puVar6 == (undefined *)0x4b393818) {
          iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da91c + 0x36da560),0);
          uVar23 = iVar14 == 0;
          bVar26 = true;
          if (!(bool)uVar23) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x14);
            goto LAB_036da830;
          }
        }
      }
    }
    else if (puVar6 == (undefined *)0x87a4488c) {
      iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da930 + 0x36da794),0);
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036da830;
      }
    }
    else if (puVar6 == (undefined *)0x5bc15335) {
      iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da948 + 0x36da7c0),0);
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x44);
        goto LAB_036da830;
      }
    }
    else {
      bVar26 = (undefined *)0x5d6adef6 < puVar6;
      uVar23 = false;
      if (puVar6 == (undefined *)0x5d6adef7) {
        iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da920 + 0x36da618),0);
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
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
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036da830;
      }
    }
    else if (puVar6 == (undefined *)0x9dbb78b9) {
      iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da944 + 0x36da768),0);
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x3c);
        goto LAB_036da830;
      }
    }
    else {
      bVar26 = (undefined *)0xaf0e9ec6 < puVar6;
      uVar23 = false;
      if (puVar6 == (undefined *)0xaf0e9ec7) {
        iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da924 + 0x36da5c4),0);
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
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
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036da830;
      }
    }
    else {
      bVar26 = (undefined *)0xd3917652 < puVar6;
      uVar23 = false;
      if (puVar6 == (undefined *)0xd3917653) {
        iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da928 + 0x36da66c),0);
        uVar23 = iVar14 == 0;
        bVar26 = true;
        if (!(bool)uVar23) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
          goto LAB_036da830;
        }
      }
    }
  }
  else if (puVar6 == (undefined *)0xdf1ae323) {
    iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da934 + 0x36da818),0);
    uVar23 = iVar14 == 0;
    bVar26 = true;
    if (!(bool)uVar23) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x20);
      goto LAB_036da830;
    }
  }
  else {
    bVar26 = (undefined *)0xed8e82d0 < puVar6;
    uVar23 = false;
    if (puVar6 == (undefined *)0xed8e82d1) {
      iVar14 = func_0x04f57738(uVar13,**(undefined4 **)(iRam036da92c + 0x36da6b8),0);
      uVar23 = iVar14 == 0;
      bVar26 = true;
      if (!(bool)uVar23) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x38);
        goto LAB_036da830;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036da950 + 0x36da898));
  uVar9 = func_0x024f83c8();
  uVar4 = func_0x024f83b8(*(undefined4 *)(iRam036da954 + 0x36da8ac));
  *(undefined4 *)(puVar21 + -0x40) = 0;
  func_0x0509473c(uVar9,uVar4,uVar13,0);
  func_0x024f83c0(uVar9,iVar12);
  pcVar11 = (char *)func_0x024f83bc();
  bVar27 = bVar26;
  if ((bool)uVar23) {
    bVar27 = 0xfffffd7f < extraout_r12_08 || CARRY4(extraout_r12_08 + 0x280,(uint)bVar26);
  }
  bVar24 = false;
  bVar28 = bVar27;
  if ((bool)uVar23 && extraout_r12_08 + 0x280 + (uint)bVar26 == 0) {
    bVar28 = 0xffffffc0 < unaff_r8 || CARRY4(unaff_r8 + 0x3f,(uint)bVar27);
    unaff_r11 = (undefined *)(unaff_r8 + 0x3f + (uint)bVar27);
    bVar24 = unaff_r11 == (undefined *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar28;
  if (bVar24) {
    bVar26 = 0xffffff3f < unaff_r10 || CARRY4(unaff_r10 + 0xc0,(uint)bVar28);
    pcVar11 = (char *)(unaff_r10 + 0xc0 + (uint)bVar28);
    bVar25 = pcVar11 == (char *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffffbf < unaff_r10 || CARRY4(unaff_r10 + 0x40,(uint)bVar26);
    pcVar11 = (char *)(unaff_r10 + 0x40 + (uint)bVar26);
    bVar24 = pcVar11 == (char *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffc0ff < unaff_r10 || CARRY4(unaff_r10 + 0x3f00,(uint)bVar27);
    pcVar11 = (char *)(unaff_r10 + 0x3f00 + (uint)bVar27);
    bVar25 = pcVar11 == (char *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffc2ff < unaff_r10 || CARRY4(unaff_r10 + 0x3d00,(uint)bVar26);
    pcVar11 = (char *)(unaff_r10 + 0x3d00 + (uint)bVar26);
    bVar24 = pcVar11 == (char *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffc4ff < unaff_r10 || CARRY4(unaff_r10 + 0x3b00,(uint)bVar27);
    pcVar11 = (char *)(unaff_r10 + 0x3b00 + (uint)bVar27);
    bVar25 = pcVar11 == (char *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffc6ff < unaff_r10 || CARRY4(unaff_r10 + 0x3900,(uint)bVar26);
    pcVar11 = (char *)(unaff_r10 + 0x3900 + (uint)bVar26);
    bVar24 = pcVar11 == (char *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffc8ff < unaff_r10 || CARRY4(unaff_r10 + 0x3700,(uint)bVar27);
    pcVar11 = (char *)(unaff_r10 + 0x3700 + (uint)bVar27);
    bVar25 = pcVar11 == (char *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffcaff < unaff_r10 || CARRY4(unaff_r10 + 0x3500,(uint)bVar26);
    pcVar11 = (char *)(unaff_r10 + 0x3500 + (uint)bVar26);
    bVar24 = pcVar11 == (char *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffccff < unaff_r10 || CARRY4(unaff_r10 + 0x3300,(uint)bVar27);
    pcVar11 = (char *)(unaff_r10 + 0x3300 + (uint)bVar27);
    bVar25 = pcVar11 == (char *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffceff < unaff_r10 || CARRY4(unaff_r10 + 0x3100,(uint)bVar26);
    pcVar11 = (char *)(unaff_r10 + 0x3100 + (uint)bVar26);
    bVar24 = pcVar11 == (char *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffd0ff < unaff_r10 || CARRY4(unaff_r10 + 0x2f00,(uint)bVar27);
    pcVar11 = (char *)(unaff_r10 + 0x2f00 + (uint)bVar27);
    bVar25 = pcVar11 == (char *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xffffd2ff < unaff_r10 || CARRY4(unaff_r10 + 0x2d00,(uint)bVar26);
    pcVar11 = (char *)(unaff_r10 + 0x2d00 + (uint)bVar26);
    bVar24 = pcVar11 == (char *)0x0;
  }
  bVar25 = false;
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xffffd4ff < unaff_r10 || CARRY4(unaff_r10 + 0x2b00,(uint)bVar27);
    pcVar11 = (char *)(unaff_r10 + 0x2b00 + (uint)bVar27);
    bVar25 = pcVar11 == (char *)0x0;
  }
  bVar24 = false;
  bVar27 = bVar26;
  if (bVar25) {
    bVar27 = 0xfffffff0 < unaff_r8 || CARRY4(unaff_r8 + 0xf,(uint)bVar26);
    unaff_r11 = (undefined *)(unaff_r8 + 0xf + (uint)bVar26);
    bVar24 = unaff_r11 == (undefined *)0x0;
  }
  bVar26 = bVar27;
  if (bVar24) {
    bVar26 = 0xfffff6ff < extraout_r12_08 || CARRY4(extraout_r12_08 + 0x900,(uint)bVar27);
  }
  bVar25 = false;
  bVar28 = bVar26;
  if (bVar24 && extraout_r12_08 + 0x900 + (uint)bVar27 == 0) {
    bVar28 = 0xffff3fff < unaff_r10 || CARRY4(unaff_r10 + 0xc000,(uint)bVar26);
    pcVar11 = (char *)(unaff_r10 + 0xc000 + (uint)bVar26);
    bVar25 = pcVar11 == (char *)0x0;
  }
  bVar24 = false;
  bVar26 = bVar28;
  if (bVar25) {
    bVar26 = CARRY4(unaff_r10,(uint)bVar28);
    pcVar11 = (char *)(unaff_r10 + bVar28);
    bVar24 = pcVar11 == (char *)0x0;
  }
  bVar25 = false;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = 0xffffafff < unaff_r10 || CARRY4(unaff_r10 + 0x5000,(uint)bVar26);
    pcVar11 = (char *)(unaff_r10 + 0x5000 + (uint)bVar26);
    bVar25 = pcVar11 == (char *)0x0;
  }
  bVar24 = false;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfffccfff < unaff_r10 ||
             CARRY4((uint)(
                          "_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE23__do_get_floating_pointIfEES4_S4_S4_RNS_8ios_baseERjRT_"
                          + unaff_r10 + 0x11),(uint)bVar27);
    pcVar11 = "_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE23__do_get_floating_pointIfEES4_S4_S4_RNS_8ios_baseERjRT_"
              + (uint)bVar27 + unaff_r10 + 0x11;
    bVar24 = pcVar11 == (char *)0x0;
  }
  bVar25 = false;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = 0xfffe0fff < unaff_r10 || CARRY4(unaff_r10 + 0x1f000,(uint)bVar26);
    pcVar11 = (char *)(unaff_r10 + 0x1f000 + (uint)bVar26);
    bVar25 = pcVar11 == (char *)0x0;
  }
  bVar24 = false;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfff6bfff < unaff_r10 || CARRY4(unaff_r10 + 0x94000,(uint)bVar27);
    pcVar11 = (char *)(unaff_r10 + 0x94000 + (uint)bVar27);
    bVar24 = pcVar11 == (char *)0x0;
  }
  bVar25 = false;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = 0xffc3ffff < unaff_r10 || CARRY4(unaff_r10 + 0x3c0000,(uint)bVar26);
    pcVar11 = (char *)(unaff_r10 + 0x3c0000 + (uint)bVar26);
    bVar25 = pcVar11 == (char *)0x0;
  }
  bVar24 = false;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfff2bfff < unaff_r10 || CARRY4(unaff_r10 + 0xd4000,(uint)bVar27);
    pcVar11 = (char *)(unaff_r10 + 0xd4000 + (uint)bVar27);
    bVar24 = pcVar11 == (char *)0x0;
  }
  bVar25 = false;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = 0xffff7fff < unaff_r10 || CARRY4(unaff_r10 + 0x8000,(uint)bVar26);
    pcVar11 = (char *)(unaff_r10 + 0x8000 + (uint)bVar26);
    bVar25 = pcVar11 == (char *)0x0;
  }
  bVar24 = false;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfffeffff < unaff_r10 || CARRY4(unaff_r10 + 0x10000,(uint)bVar27);
    pcVar11 = (char *)(unaff_r10 + 0x10000 + (uint)bVar27);
    bVar24 = pcVar11 == (char *)0x0;
  }
  bVar25 = false;
  bVar27 = bVar26;
  if (bVar24) {
    bVar27 = 0xfff3bfff < unaff_r10 || CARRY4(unaff_r10 + 0xc4000,(uint)bVar26);
    pcVar11 = (char *)(unaff_r10 + 0xc4000 + (uint)bVar26);
    bVar25 = pcVar11 == (char *)0x0;
  }
  bVar24 = false;
  bVar26 = bVar27;
  if (bVar25) {
    bVar26 = 0xfffa3fff < unaff_r10 || CARRY4(unaff_r10 + 0x5c000,(uint)bVar27);
    pcVar11 = (char *)(unaff_r10 + 0x5c000 + (uint)bVar27);
    bVar24 = pcVar11 == (char *)0x0;
  }
  if (bVar24) {
    pcVar11 = (char *)(unaff_r10 + 0x20000 + (uint)bVar26);
  }
  *(undefined4 *)(puVar21 + -0x44) = 0x36da8d8;
  *(undefined **)(puVar21 + -0x48) = unaff_r11;
  *(undefined4 *)(puVar21 + -0x4c) = uVar9;
  *(int *)(puVar21 + -0x50) = iVar12;
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

