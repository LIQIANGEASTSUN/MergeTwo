
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0183a460(undefined4 param_1)

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
  uint extraout_r12;
  uint uVar14;
  uint extraout_r12_00;
  uint extraout_r12_01;
  uint extraout_r12_02;
  undefined4 *puVar15;
  undefined1 *puVar16;
  undefined1 uVar17;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined8 uVar23;
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
  
  pcVar10 = (char *)(_UNK_0183a540 + 0x183a474);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0183a544 + 0x183a488));
    func_0x01438628(*(undefined4 *)(_UNK_0183a548 + 0x183a494));
    func_0x01438628(*(undefined4 *)(_UNK_0183a54c + 0x183a4a0));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x923a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x923a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar10 = (char *)(_UNK_02927edc + 0x2927dfc);
    if (*pcVar10 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02927ee0 + 0x2927e10),param_1,0);
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
    piVar2 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02927ee4 + 0x2927ecc));
    return piVar2;
  }
  if (*(int *)(**(int **)(_UNK_0183a550 + 0x183a4f8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0183a554 + 0x183a514));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar11 = **(int **)(_UNK_0183a558 + 0x183a534);
  puVar15 = auStack_20;
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
        uVar17 = iVar13 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
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
        uVar17 = iVar13 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x1c);
          goto LAB_036d969c;
        }
      }
      else {
        bVar20 = (undefined *)0x335bb155 < puVar3;
        uVar17 = false;
        if (puVar3 == (undefined *)0x335bb156) {
          iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9790 + 0x36d9344),0);
          uVar17 = iVar13 == 0;
          bVar20 = true;
          if (!(bool)uVar17) {
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
        uVar17 = iVar13 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x38);
          goto LAB_036d969c;
        }
      }
      else {
        bVar20 = (undefined *)0x44330b37 < puVar3;
        uVar17 = false;
        if (puVar3 == (undefined *)0x44330b38) {
          iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9794 + 0x36d93fc),0);
          uVar17 = iVar13 == 0;
          bVar20 = true;
          if (!(bool)uVar17) {
            iVar11 = *(int *)(iVar11 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x30);
            goto LAB_036d969c;
          }
        }
      }
    }
    else if (puVar3 == (undefined *)0x49331317) {
      iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d97b4 + 0x36d9658),0);
      uVar17 = iVar13 == 0;
      bVar20 = true;
      if (!(bool)uVar17) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036d969c;
      }
    }
    else {
      bVar20 = (undefined *)0x4a3314a9 < puVar3;
      uVar17 = false;
      if (puVar3 == (undefined *)0x4a3314aa) {
        iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9798 + 0x36d94d8),0);
        uVar17 = iVar13 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
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
        uVar17 = iVar13 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036d969c;
        }
      }
      else {
        bVar20 = (undefined *)0x69275589 < puVar3;
        uVar17 = false;
        if (puVar3 == (undefined *)0x6927558a) {
          iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d979c + 0x36d93a8),0);
          uVar17 = iVar13 == 0;
          bVar20 = true;
          if (!(bool)uVar17) {
            iVar11 = *(int *)(iVar11 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x44);
            goto LAB_036d969c;
          }
        }
      }
    }
    else if (puVar3 == (undefined *)0xa110364a) {
      iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d97c0 + 0x36d962c),0);
      uVar17 = iVar13 == 0;
      bVar20 = true;
      if (!(bool)uVar17) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x40);
        goto LAB_036d969c;
      }
    }
    else {
      bVar20 = (undefined *)0x757b0316 < puVar3;
      uVar17 = false;
      if (puVar3 == (undefined *)0x757b0317) {
        iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d97a0 + 0x36d9494),0);
        uVar17 = iVar13 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
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
      uVar17 = iVar13 == 0;
      bVar20 = true;
      if (!(bool)uVar17) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036d969c;
      }
    }
    else {
      bVar20 = (undefined *)0xc9fcd30c < puVar3;
      uVar17 = false;
      if (puVar3 == (undefined *)0xc9fcd30d) {
        iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d97a4 + 0x36d9450),0);
        uVar17 = iVar13 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x14);
          goto LAB_036d969c;
        }
      }
    }
  }
  else if (puVar3 == (undefined *)0xedb39c44) {
    iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d97b0 + 0x36d9684),0);
    uVar17 = iVar13 == 0;
    bVar20 = true;
    if (!(bool)uVar17) {
      iVar11 = *(int *)(iVar11 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x20);
      goto LAB_036d969c;
    }
  }
  else {
    bVar20 = (undefined *)0xfe254767 < puVar3;
    uVar17 = false;
    if (puVar3 == (undefined *)0xfe254768) {
      iVar13 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d97a8 + 0x36d9524),0);
      uVar17 = iVar13 == 0;
      bVar20 = true;
      if (!(bool)uVar17) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x4c);
        goto LAB_036d969c;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036d97cc + 0x36d9704));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036d97d0 + 0x36d9718));
  auStack_20[0] = 0;
  func_0x0509473c(uVar4,uVar5,uVar8,0);
  func_0x024f83c0(uVar4,iVar11);
  uVar23 = func_0x024f83bc();
  iVar13 = (int)((ulonglong)uVar23 >> 0x20);
  iVar1 = (int)uVar23;
  bVar18 = false;
  bVar21 = bVar20;
  if ((bool)uVar17) {
    bVar21 = 0xffffffca < extraout_r12 || CARRY4(extraout_r12 + 0x35,(uint)bVar20);
    unaff_r11 = (undefined *)(extraout_r12 + 0x35 + (uint)bVar20);
    bVar18 = unaff_r11 == (undefined *)0x0;
  }
  bVar19 = false;
  uVar14 = extraout_r12;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xcfffffff < unaff_r8 || CARRY4(unaff_r8 + 0x30000000,(uint)bVar21);
    uVar14 = unaff_r8 + 0x30000000 + (uint)bVar21;
    bVar19 = uVar14 == 0;
  }
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfffffff2 < unaff_r10 || CARRY4(unaff_r10 + 0xd,(uint)bVar20);
  }
  bVar19 = bVar19 && unaff_r10 + 0xd + (uint)bVar20 == 0;
  bVar20 = bVar21;
  if (bVar19) {
    bVar20 = 0xfffffff4 < unaff_r10 || CARRY4(unaff_r10 + 0xb,(uint)bVar21);
  }
  bVar19 = bVar19 && unaff_r10 + 0xb + (uint)bVar21 == 0;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfffffff6 < unaff_r10 || CARRY4(unaff_r10 + 9,(uint)bVar20);
  }
  bVar19 = bVar19 && unaff_r10 + 9 + (uint)bVar20 == 0;
  bVar20 = bVar21;
  if (bVar19) {
    bVar20 = 0xfffffff8 < unaff_r10 || CARRY4(unaff_r10 + 7,(uint)bVar21);
  }
  bVar19 = bVar19 && unaff_r10 + 7 + (uint)bVar21 == 0;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfffffffa < unaff_r10 || CARRY4(unaff_r10 + 5,(uint)bVar20);
  }
  bVar19 = bVar19 && unaff_r10 + 5 + (uint)bVar20 == 0;
  bVar20 = bVar21;
  if (bVar19) {
    bVar20 = 0xfffffffc < unaff_r10 || CARRY4(unaff_r10 + 3,(uint)bVar21);
  }
  bVar19 = bVar19 && unaff_r10 + 3 + (uint)bVar21 == 0;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfffffffe < unaff_r10 || CARRY4(unaff_r10 + 1,(uint)bVar20);
  }
  bVar19 = bVar19 && unaff_r10 + 1 + (uint)bVar20 == 0;
  bVar20 = bVar21;
  if (bVar19) {
    bVar20 = 0xffffff03 < unaff_r10 || CARRY4(unaff_r10 + 0xfc,(uint)bVar21);
  }
  bVar19 = bVar19 && unaff_r10 + 0xfc + (uint)bVar21 == 0;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xffffff0b < unaff_r10 || CARRY4(unaff_r10 + 0xf4,(uint)bVar20);
  }
  bVar19 = bVar19 && unaff_r10 + 0xf4 + (uint)bVar20 == 0;
  bVar20 = bVar21;
  if (bVar19) {
    bVar20 = 0xffffff13 < unaff_r10 || CARRY4(unaff_r10 + 0xec,(uint)bVar21);
  }
  bVar19 = bVar19 && unaff_r10 + 0xec + (uint)bVar21 == 0;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xffffff1b < unaff_r10 || CARRY4(unaff_r10 + 0xe4,(uint)bVar20);
  }
  bVar19 = bVar19 && unaff_r10 + 0xe4 + (uint)bVar20 == 0;
  bVar20 = bVar21;
  if (bVar19) {
    bVar20 = 0xffffff23 < unaff_r10 || CARRY4(unaff_r10 + 0xdc,(uint)bVar21);
  }
  bVar19 = bVar19 && unaff_r10 + 0xdc + (uint)bVar21 == 0;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xffffff2b < unaff_r10 || CARRY4(unaff_r10 + 0xd4,(uint)bVar20);
  }
  bVar19 = bVar19 && unaff_r10 + 0xd4 + (uint)bVar20 == 0;
  bVar20 = bVar21;
  if (bVar19) {
    bVar20 = 0xffffff33 < unaff_r10 || CARRY4(unaff_r10 + 0xcc,(uint)bVar21);
  }
  bVar19 = bVar19 && unaff_r10 + 0xcc + (uint)bVar21 == 0;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xffffff3b < unaff_r10 || CARRY4(unaff_r10 + 0xc4,(uint)bVar20);
  }
  bVar18 = false;
  bVar22 = bVar21;
  if (bVar19 && unaff_r10 + 0xc4 + (uint)bVar20 == 0) {
    bVar22 = 0x9ffffffe < unaff_r8 || CARRY4(unaff_r8 + 0x60000001,(uint)bVar21);
    uVar14 = unaff_r8 + 0x60000001 + (uint)bVar21;
    bVar18 = uVar14 == 0;
  }
  bVar19 = false;
  bVar20 = bVar22;
  if (bVar18) {
    bVar20 = 0xffffff53 < uVar14 || CARRY4(uVar14 + 0xac,(uint)bVar22);
    unaff_r11 = (undefined *)(uVar14 + 0xac + (uint)bVar22);
    bVar19 = unaff_r11 == (undefined *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfffffc7f < unaff_r10 || CARRY4(unaff_r10 + 0x380,(uint)bVar20);
    iVar13 = unaff_r10 + 0x380 + (uint)bVar20;
    bVar18 = iVar13 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xffffff7f < unaff_r10 || CARRY4(unaff_r10 + 0x80,(uint)bVar21);
    iVar13 = unaff_r10 + 0x80 + (uint)bVar21;
    bVar19 = iVar13 == 0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfffffa7f < unaff_r10 || CARRY4(unaff_r10 + 0x580,(uint)bVar20);
    iVar13 = unaff_r10 + 0x580 + (uint)bVar20;
    bVar18 = iVar13 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xfffffe1f < unaff_r10 || CARRY4(unaff_r10 + 0x1e0,(uint)bVar21);
    iVar13 = unaff_r10 + 0x1e0 + (uint)bVar21;
    bVar19 = iVar13 == 0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfffff6bf < unaff_r10 || CARRY4(unaff_r10 + 0x940,(uint)bVar20);
    iVar13 = unaff_r10 + 0x940 + (uint)bVar20;
    bVar18 = iVar13 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xfffff3bf < unaff_r10 || CARRY4(unaff_r10 + 0xc40,(uint)bVar21);
    iVar13 = unaff_r10 + 0xc40 + (uint)bVar21;
    bVar19 = iVar13 == 0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfffffeff < unaff_r10 || CARRY4(unaff_r10 + 0x100,(uint)bVar20);
    iVar13 = unaff_r10 + 0x100 + (uint)bVar20;
    bVar18 = iVar13 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xffffd3ff < unaff_r10 || CARRY4(unaff_r10 + 0x2c00,(uint)bVar21);
    iVar13 = unaff_r10 + 0x2c00 + (uint)bVar21;
    bVar19 = iVar13 == 0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xffff7fff < unaff_r10 || CARRY4(unaff_r10 + 0x8000,(uint)bVar20);
    iVar13 = unaff_r10 + 0x8000 + (uint)bVar20;
    bVar18 = iVar13 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xffff5bff < unaff_r10 || CARRY4(unaff_r10 + 0xa400,(uint)bVar21);
    iVar13 = unaff_r10 + 0xa400 + (uint)bVar21;
    bVar19 = iVar13 == 0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xffffe3ff < unaff_r10 || CARRY4(unaff_r10 + 0x1c00,(uint)bVar20);
    iVar13 = unaff_r10 + 0x1c00 + (uint)bVar20;
    bVar18 = iVar13 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xfffff0ff < unaff_r10 || CARRY4(unaff_r10 + 0xf00,(uint)bVar21);
    iVar13 = unaff_r10 + 0xf00 + (uint)bVar21;
    bVar19 = iVar13 == 0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xffff2bff < unaff_r10 || CARRY4(unaff_r10 + 0xd400,(uint)bVar20);
    iVar13 = unaff_r10 + 0xd400 + (uint)bVar20;
    bVar18 = iVar13 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xffffd0ff < unaff_r10 || CARRY4(unaff_r10 + 0x2f00,(uint)bVar21);
    iVar13 = unaff_r10 + 0x2f00 + (uint)bVar21;
    bVar19 = iVar13 == 0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfffffdff < unaff_r10 || CARRY4(unaff_r10 + 0x200,(uint)bVar20);
    iVar13 = unaff_r10 + 0x200 + (uint)bVar20;
    bVar18 = iVar13 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xffdeffff < unaff_r8 || CARRY4(unaff_r8 + 0x210000,(uint)bVar21);
    puVar15 = (undefined4 *)(unaff_r8 + 0x210000 + (uint)bVar21);
    bVar19 = (undefined1 *)(unaff_r8 + 0x210000 + (uint)bVar21) == (undefined1 *)0x0;
  }
  if (bVar19) {
    unaff_r9 = unaff_r9 + 0xe8000 + (uint)bVar20;
  }
  *(undefined4 *)((int)puVar15 + -4) = 0x36d9744;
  *(undefined **)((int)puVar15 + -8) = unaff_r11;
  *(undefined4 *)((int)puVar15 + -0xc) = uVar12;
  *(undefined4 *)((int)puVar15 + -0x10) = uVar8;
  *(undefined4 *)((int)puVar15 + -0x14) = uVar4;
  *(int *)((int)puVar15 + -0x18) = iVar11;
  puVar16 = (undefined1 *)((int)puVar15 + -0x20);
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
        uVar17 = iVar11 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
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
        uVar17 = iVar11 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
          iVar11 = *(int *)(iVar13 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x1c);
          goto LAB_036d9ce8;
        }
      }
      else {
        bVar20 = (undefined *)0x335bb155 < puVar3;
        uVar17 = false;
        if (puVar3 == (undefined *)0x335bb156) {
          iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9ddc + 0x36d9990),0);
          uVar17 = iVar11 == 0;
          bVar20 = true;
          if (!(bool)uVar17) {
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
        uVar17 = iVar11 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
          iVar11 = *(int *)(iVar13 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x38);
          goto LAB_036d9ce8;
        }
      }
      else {
        bVar20 = (undefined *)0x44330b37 < puVar3;
        uVar17 = false;
        if (puVar3 == (undefined *)0x44330b38) {
          iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9de0 + 0x36d9a48),0);
          uVar17 = iVar11 == 0;
          bVar20 = true;
          if (!(bool)uVar17) {
            iVar11 = *(int *)(iVar13 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x30);
            goto LAB_036d9ce8;
          }
        }
      }
    }
    else if (puVar3 == (undefined *)0x49331317) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9e00 + 0x36d9ca4),0);
      uVar17 = iVar11 == 0;
      bVar20 = true;
      if (!(bool)uVar17) {
        iVar11 = *(int *)(iVar13 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036d9ce8;
      }
    }
    else {
      bVar20 = (undefined *)0x4a3314a9 < puVar3;
      uVar17 = false;
      if (puVar3 == (undefined *)0x4a3314aa) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9de4 + 0x36d9b24),0);
        uVar17 = iVar11 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
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
        uVar17 = iVar11 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
          iVar11 = *(int *)(iVar13 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x2c);
          goto LAB_036d9ce8;
        }
      }
      else {
        bVar20 = (undefined *)0x69275589 < puVar3;
        uVar17 = false;
        if (puVar3 == (undefined *)0x6927558a) {
          iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9de8 + 0x36d99f4),0);
          uVar17 = iVar11 == 0;
          bVar20 = true;
          if (!(bool)uVar17) {
            iVar11 = *(int *)(iVar13 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x44);
            goto LAB_036d9ce8;
          }
        }
      }
    }
    else if (puVar3 == (undefined *)0xa110364a) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9e0c + 0x36d9c78),0);
      uVar17 = iVar11 == 0;
      bVar20 = true;
      if (!(bool)uVar17) {
        iVar11 = *(int *)(iVar13 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x40);
        goto LAB_036d9ce8;
      }
    }
    else {
      bVar20 = (undefined *)0x757b0316 < puVar3;
      uVar17 = false;
      if (puVar3 == (undefined *)0x757b0317) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9dec + 0x36d9ae0),0);
        uVar17 = iVar11 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
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
      uVar17 = iVar11 == 0;
      bVar20 = true;
      if (!(bool)uVar17) {
        iVar11 = *(int *)(iVar13 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036d9ce8;
      }
    }
    else {
      bVar20 = (undefined *)0xc9fcd30c < puVar3;
      uVar17 = false;
      if (puVar3 == (undefined *)0xc9fcd30d) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9df0 + 0x36d9a9c),0);
        uVar17 = iVar11 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
          iVar11 = *(int *)(iVar13 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x14);
          goto LAB_036d9ce8;
        }
      }
    }
  }
  else if (puVar3 == (undefined *)0xedb39c44) {
    iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9dfc + 0x36d9cd0),0);
    uVar17 = iVar11 == 0;
    bVar20 = true;
    if (!(bool)uVar17) {
      iVar11 = *(int *)(iVar13 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x20);
      goto LAB_036d9ce8;
    }
  }
  else {
    bVar20 = (undefined *)0xfe254767 < puVar3;
    uVar17 = false;
    if (puVar3 == (undefined *)0xfe254768) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036d9df4 + 0x36d9b70),0);
      uVar17 = iVar11 == 0;
      bVar20 = true;
      if (!(bool)uVar17) {
        iVar11 = *(int *)(iVar13 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x4c);
        goto LAB_036d9ce8;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036d9e18 + 0x36d9d50));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036d9e1c + 0x36d9d64));
  *(undefined4 *)((int)puVar15 + -0x20) = 0;
  func_0x0509473c(uVar4,uVar5,uVar8,0);
  func_0x024f83c0(uVar4,iVar13);
  uVar23 = func_0x024f83bc();
  puVar3 = (undefined *)((ulonglong)uVar23 >> 0x20);
  iVar1 = (int)uVar23;
  bVar18 = false;
  bVar21 = bVar20;
  if ((bool)uVar17) {
    bVar21 = 0xfffddfff < extraout_r12_00 || CARRY4(extraout_r12_00 + 0x22000,(uint)bVar20);
    unaff_r10 = extraout_r12_00 + 0x22000 + (uint)bVar20;
    bVar18 = unaff_r10 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xffffc6ff < unaff_r8 || CARRY4(unaff_r8 + 0x3900,(uint)bVar21);
    unaff_r11 = (undefined *)(unaff_r8 + 0x3900 + (uint)bVar21);
    bVar19 = unaff_r11 == (undefined *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfff17fff < unaff_r10 || CARRY4(unaff_r10 + 0xe8000,(uint)bVar20);
    puVar3 = (undefined *)(unaff_r10 + 0xe8000 + (uint)bVar20);
    bVar18 = puVar3 == (undefined *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xfff1ffff < unaff_r10 || CARRY4(unaff_r10 + 0xe0000,(uint)bVar21);
    puVar3 = (undefined *)(unaff_r10 + 0xe0000 + (uint)bVar21);
    bVar19 = puVar3 == (undefined *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfff27fff < unaff_r10 || CARRY4(unaff_r10 + 0xd8000,(uint)bVar20);
    puVar3 = (undefined *)(unaff_r10 + 0xd8000 + (uint)bVar20);
    bVar18 = puVar3 == (undefined *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xfff2ffff < unaff_r10 || CARRY4(unaff_r10 + 0xd0000,(uint)bVar21);
    puVar3 = (undefined *)(unaff_r10 + 0xd0000 + (uint)bVar21);
    bVar19 = puVar3 == (undefined *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfff37fff < unaff_r10 || CARRY4(unaff_r10 + 0xc8000,(uint)bVar20);
    puVar3 = (undefined *)(unaff_r10 + 0xc8000 + (uint)bVar20);
    bVar18 = puVar3 == (undefined *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xfff3ffff < unaff_r10 || CARRY4(unaff_r10 + 0xc0000,(uint)bVar21);
    puVar3 = (undefined *)(unaff_r10 + 0xc0000 + (uint)bVar21);
    bVar19 = puVar3 == (undefined *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfff47fff < unaff_r10 || CARRY4(unaff_r10 + 0xb8000,(uint)bVar20);
    puVar3 = (undefined *)(unaff_r10 + 0xb8000 + (uint)bVar20);
    bVar18 = puVar3 == (undefined *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xfff4ffff < unaff_r10 || CARRY4(unaff_r10 + 0xb0000,(uint)bVar21);
    puVar3 = (undefined *)(unaff_r10 + 0xb0000 + (uint)bVar21);
    bVar19 = puVar3 == (undefined *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfff57fff < unaff_r10 || CARRY4(unaff_r10 + 0xa8000,(uint)bVar20);
    puVar3 = (undefined *)(unaff_r10 + 0xa8000 + (uint)bVar20);
    bVar18 = puVar3 == (undefined *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xfff5ffff < unaff_r10 || CARRY4(unaff_r10 + 0xa0000,(uint)bVar21);
    puVar3 = (undefined *)(unaff_r10 + 0xa0000 + (uint)bVar21);
    bVar19 = puVar3 == (undefined *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfff67fff < unaff_r10 || CARRY4(unaff_r10 + 0x98000,(uint)bVar20);
    puVar3 = (undefined *)(unaff_r10 + 0x98000 + (uint)bVar20);
    bVar18 = puVar3 == (undefined *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xfff6ffff < unaff_r10 || CARRY4(unaff_r10 + 0x90000,(uint)bVar21);
    puVar3 = (undefined *)(unaff_r10 + 0x90000 + (uint)bVar21);
    bVar19 = puVar3 == (undefined *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfff77fff < unaff_r10 || CARRY4(unaff_r10 + 0x88000,(uint)bVar20);
    puVar3 = (undefined *)(unaff_r10 + 0x88000 + (uint)bVar20);
    bVar18 = puVar3 == (undefined *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xfff7ffff < unaff_r10 || CARRY4(unaff_r10 + 0x80000,(uint)bVar21);
    puVar3 = (undefined *)(unaff_r10 + 0x80000 + (uint)bVar21);
    bVar19 = puVar3 == (undefined *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfff87fff < unaff_r10 || CARRY4(unaff_r10 + 0x78000,(uint)bVar20);
    puVar3 = (undefined *)(unaff_r10 + 0x78000 + (uint)bVar20);
    bVar18 = puVar3 == (undefined *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xfffffcff < unaff_r8 || CARRY4(unaff_r8 + 0x300,(uint)bVar21);
    unaff_r11 = (undefined *)(unaff_r8 + 0x300 + (uint)bVar21);
    bVar19 = unaff_r11 == (undefined *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfff9ffff < extraout_r12_00 || CARRY4(extraout_r12_00 + 0x60000,(uint)bVar20);
    unaff_r10 = extraout_r12_00 + 0x60000 + (uint)bVar20;
    bVar18 = unaff_r10 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xffdaffff < unaff_r10 || CARRY4(unaff_r10 + 0x250000,(uint)bVar21);
    puVar3 = (undefined *)(unaff_r10 + 0x250000 + (uint)bVar21);
    bVar19 = puVar3 == (undefined *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xff2bffff < unaff_r10 || CARRY4((uint)(&UNK_00d40000 + unaff_r10),(uint)bVar20);
    puVar3 = &UNK_00d40000 + bVar20 + unaff_r10;
    bVar18 = puVar3 == (undefined *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xfff3ffff < unaff_r10 || CARRY4(unaff_r10 + 0xc0000,(uint)bVar21);
    puVar3 = (undefined *)(unaff_r10 + 0xc0000 + (uint)bVar21);
    bVar19 = puVar3 == (undefined *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfff4ffff < unaff_r10 || CARRY4(unaff_r10 + 0xb0000,(uint)bVar20);
    puVar3 = (undefined *)(unaff_r10 + 0xb0000 + (uint)bVar20);
    bVar18 = puVar3 == (undefined *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xffb7ffff < unaff_r10 || CARRY4(unaff_r10 + 0x480000,(uint)bVar21);
    puVar3 = (undefined *)(unaff_r10 + 0x480000 + (uint)bVar21);
    bVar19 = puVar3 == (undefined *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xff87ffff < unaff_r10 || CARRY4(unaff_r10 + 0x780000,(uint)bVar20);
    puVar3 = (undefined *)(unaff_r10 + 0x780000 + (uint)bVar20);
    bVar18 = puVar3 == (undefined *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xfcefffff < unaff_r10 || CARRY4((uint)(&UNK_03100000 + unaff_r10),(uint)bVar21);
    puVar3 = &UNK_03100000 + bVar21 + unaff_r10;
    bVar19 = puVar3 == (undefined *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfe6fffff < unaff_r10 || CARRY4((uint)(&UNK_01900000 + unaff_r10),(uint)bVar20);
    puVar3 = &UNK_01900000 + bVar20 + unaff_r10;
    bVar18 = puVar3 == (undefined *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xfcbfffff < unaff_r10 || CARRY4((uint)(&UNK_03400000 + unaff_r10),(uint)bVar21);
    puVar3 = &UNK_03400000 + bVar21 + unaff_r10;
    bVar19 = puVar3 == (undefined *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfa7fffff < unaff_r10 || CARRY4((uint)(&UNK_05800000 + unaff_r10),(uint)bVar20);
    puVar3 = &UNK_05800000 + bVar20 + unaff_r10;
    bVar18 = puVar3 == (undefined *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xff6fffff < unaff_r10 || CARRY4((uint)(&UNK_00900000 + unaff_r10),(uint)bVar21);
    puVar3 = &UNK_00900000 + bVar21 + unaff_r10;
    bVar19 = puVar3 == (undefined *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xf0ffffff < unaff_r10 || CARRY4(unaff_r10 + 0xf000000,(uint)bVar20);
    puVar3 = (undefined *)(unaff_r10 + 0xf000000 + (uint)bVar20);
    bVar18 = puVar3 == (undefined *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xf77fffff < unaff_r10 || CARRY4(unaff_r10 + 0x8800000,(uint)bVar21);
    puVar3 = (undefined *)(unaff_r10 + 0x8800000 + (uint)bVar21);
    bVar19 = puVar3 == (undefined *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfe3fffff < unaff_r10 || CARRY4(unaff_r10 + 0x1c00000,(uint)bVar20);
    puVar3 = (undefined *)(unaff_r10 + 0x1c00000 + (uint)bVar20);
    bVar18 = puVar3 == (undefined *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xf43fffff < unaff_r10 || CARRY4(unaff_r10 + 0xbc00000,(uint)bVar21);
    puVar3 = (undefined *)(unaff_r10 + 0xbc00000 + (uint)bVar21);
    bVar19 = puVar3 == (undefined *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0x1fffffff < unaff_r8 || CARRY4(unaff_r8 + 0xe0000000,(uint)bVar20);
    puVar16 = (undefined1 *)(unaff_r8 + 0xe0000000 + (uint)bVar20);
    bVar18 = (undefined1 *)(unaff_r8 + 0xe0000000 + (uint)bVar20) == (undefined1 *)0x0;
  }
  if (bVar18) {
    unaff_r9 = unaff_r9 + -0x64000000 + (uint)bVar21;
  }
  *(undefined4 *)(puVar16 + -4) = 0x36d9d90;
  *(undefined **)(puVar16 + -8) = unaff_r11;
  *(undefined4 *)(puVar16 + -0xc) = uVar12;
  *(undefined4 *)(puVar16 + -0x10) = uVar8;
  *(undefined4 *)(puVar16 + -0x14) = uVar4;
  *(int *)(puVar16 + -0x18) = iVar13;
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
        uVar17 = iVar11 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
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
        uVar17 = iVar11 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
          iVar11 = *(int *)(puVar3 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x30);
          goto LAB_036da294;
        }
      }
      else {
        bVar20 = (undefined *)0x4b393817 < puVar6;
        uVar17 = false;
        if (puVar6 == (undefined *)0x4b393818) {
          iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da380 + 0x36d9fc4),0);
          uVar17 = iVar11 == 0;
          bVar20 = true;
          if (!(bool)uVar17) {
            iVar11 = *(int *)(puVar3 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x14);
            goto LAB_036da294;
          }
        }
      }
    }
    else if (puVar6 == (undefined *)0x87a4488c) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da394 + 0x36da1f8),0);
      uVar17 = iVar11 == 0;
      bVar20 = true;
      if (!(bool)uVar17) {
        iVar11 = *(int *)(puVar3 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036da294;
      }
    }
    else if (puVar6 == (undefined *)0x5bc15335) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da3ac + 0x36da224),0);
      uVar17 = iVar11 == 0;
      bVar20 = true;
      if (!(bool)uVar17) {
        iVar11 = *(int *)(puVar3 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x44);
        goto LAB_036da294;
      }
    }
    else {
      bVar20 = (undefined *)0x5d6adef6 < puVar6;
      uVar17 = false;
      if (puVar6 == (undefined *)0x5d6adef7) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da384 + 0x36da07c),0);
        uVar17 = iVar11 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
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
      uVar17 = iVar11 == 0;
      bVar20 = true;
      if (!(bool)uVar17) {
        iVar11 = *(int *)(puVar3 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036da294;
      }
    }
    else if (puVar6 == (undefined *)0x9dbb78b9) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da3a8 + 0x36da1cc),0);
      uVar17 = iVar11 == 0;
      bVar20 = true;
      if (!(bool)uVar17) {
        iVar11 = *(int *)(puVar3 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x3c);
        goto LAB_036da294;
      }
    }
    else {
      bVar20 = (undefined *)0xaf0e9ec6 < puVar6;
      uVar17 = false;
      if (puVar6 == (undefined *)0xaf0e9ec7) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da388 + 0x36da028),0);
        uVar17 = iVar11 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
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
      uVar17 = iVar11 == 0;
      bVar20 = true;
      if (!(bool)uVar17) {
        iVar11 = *(int *)(puVar3 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036da294;
      }
    }
    else {
      bVar20 = (undefined *)0xd3917652 < puVar6;
      uVar17 = false;
      if (puVar6 == (undefined *)0xd3917653) {
        iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da38c + 0x36da0d0),0);
        uVar17 = iVar11 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
          iVar11 = *(int *)(puVar3 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
          goto LAB_036da294;
        }
      }
    }
  }
  else if (puVar6 == (undefined *)0xdf1ae323) {
    iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da398 + 0x36da27c),0);
    uVar17 = iVar11 == 0;
    bVar20 = true;
    if (!(bool)uVar17) {
      iVar11 = *(int *)(puVar3 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x20);
      goto LAB_036da294;
    }
  }
  else {
    bVar20 = (undefined *)0xed8e82d0 < puVar6;
    uVar17 = false;
    if (puVar6 == (undefined *)0xed8e82d1) {
      iVar11 = func_0x04f57738(uVar8,**(undefined4 **)(iRam036da390 + 0x36da11c),0);
      uVar17 = iVar11 == 0;
      bVar20 = true;
      if (!(bool)uVar17) {
        iVar11 = *(int *)(puVar3 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x38);
        goto LAB_036da294;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036da3b4 + 0x36da2fc));
  uVar4 = func_0x024f83c8();
  uVar5 = func_0x024f83b8(*(undefined4 *)(iRam036da3b8 + 0x36da310));
  *(undefined4 *)(puVar16 + -0x20) = 0;
  func_0x0509473c(uVar4,uVar5,uVar8,0);
  func_0x024f83c0(uVar4,puVar3);
  uVar23 = func_0x024f83bc();
  iVar11 = (int)((ulonglong)uVar23 >> 0x20);
  iVar1 = (int)uVar23;
  bVar18 = false;
  bVar21 = bVar20;
  if ((bool)uVar17) {
    bVar21 = 0xf0ffffff < extraout_r12_01 || CARRY4(extraout_r12_01 + 0xf000000,(uint)bVar20);
    unaff_r10 = extraout_r12_01 + 0xf000000 + (uint)bVar20;
    bVar18 = unaff_r10 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xfd9fffff < unaff_r8 || CARRY4((uint)(&UNK_02600000 + unaff_r8),(uint)bVar21);
    unaff_r11 = &UNK_02600000 + bVar21 + unaff_r8;
    bVar19 = unaff_r11 == (undefined *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0x5ffffffd < unaff_r10 || CARRY4(unaff_r10 + 0xa0000002,(uint)bVar20);
    iVar11 = unaff_r10 + 0xa0000002 + (uint)bVar20;
    bVar18 = iVar11 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0x7ffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x80000002,(uint)bVar21);
    iVar11 = unaff_r10 + 0x80000002 + (uint)bVar21;
    bVar19 = iVar11 == 0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0x9ffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x60000002,(uint)bVar20);
    iVar11 = unaff_r10 + 0x60000002 + (uint)bVar20;
    bVar18 = iVar11 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xbffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x40000002,(uint)bVar21);
    iVar11 = unaff_r10 + 0x40000002 + (uint)bVar21;
    bVar19 = iVar11 == 0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xdffffffd < unaff_r10 || CARRY4(unaff_r10 + 0x20000002,(uint)bVar20);
    iVar11 = unaff_r10 + 0x20000002 + (uint)bVar20;
    bVar18 = iVar11 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xfffffffd < unaff_r10 || CARRY4(unaff_r10 + 2,(uint)bVar21);
    iVar11 = unaff_r10 + 2 + (uint)bVar21;
    bVar19 = iVar11 == 0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0x1ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0xe0000001,(uint)bVar20);
    iVar11 = unaff_r10 + 0xe0000001 + (uint)bVar20;
    bVar18 = iVar11 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0x3ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0xc0000001,(uint)bVar21);
    iVar11 = unaff_r10 + 0xc0000001 + (uint)bVar21;
    bVar19 = iVar11 == 0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0x5ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0xa0000001,(uint)bVar20);
    iVar11 = unaff_r10 + 0xa0000001 + (uint)bVar20;
    bVar18 = iVar11 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0x7ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x80000001,(uint)bVar21);
    iVar11 = unaff_r10 + 0x80000001 + (uint)bVar21;
    bVar19 = iVar11 == 0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0x9ffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x60000001,(uint)bVar20);
    iVar11 = unaff_r10 + 0x60000001 + (uint)bVar20;
    bVar18 = iVar11 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xbffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x40000001,(uint)bVar21);
    iVar11 = unaff_r10 + 0x40000001 + (uint)bVar21;
    bVar19 = iVar11 == 0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xdffffffe < unaff_r10 || CARRY4(unaff_r10 + 0x20000001,(uint)bVar20);
    iVar11 = unaff_r10 + 0x20000001 + (uint)bVar20;
    bVar18 = iVar11 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xf27fffff < unaff_r8 || CARRY4(unaff_r8 + 0xd800000,(uint)bVar21);
    unaff_r11 = (undefined *)(unaff_r8 + 0xd800000 + (uint)bVar21);
    bVar19 = unaff_r11 == (undefined *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xd3ffffff < extraout_r12_01 || CARRY4(extraout_r12_01 + 0x2c000000,(uint)bVar20);
    unaff_r10 = extraout_r12_01 + 0x2c000000 + (uint)bVar20;
    bVar18 = unaff_r10 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0x3ffffffa < unaff_r10 || CARRY4(unaff_r10 + 0xc0000005,(uint)bVar21);
    iVar11 = unaff_r10 + 0xc0000005 + (uint)bVar21;
    bVar19 = iVar11 == 0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xffffffd8 < unaff_r10 || CARRY4(unaff_r10 + 0x27,(uint)bVar20);
    iVar11 = unaff_r10 + 0x27 + (uint)bVar20;
    bVar18 = iVar11 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xffffffc4 < unaff_r10 || CARRY4(unaff_r10 + 0x3b,(uint)bVar21);
    iVar11 = unaff_r10 + 0x3b + (uint)bVar21;
    bVar19 = iVar11 == 0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xffffffe5 < unaff_r10 || CARRY4(unaff_r10 + 0x1a,(uint)bVar20);
    iVar11 = unaff_r10 + 0x1a + (uint)bVar20;
    bVar18 = iVar11 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xfffffff9 < unaff_r10 || CARRY4(unaff_r10 + 6,(uint)bVar21);
    iVar11 = unaff_r10 + 6 + (uint)bVar21;
    bVar19 = iVar11 == 0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xffffffcf < unaff_r10 || CARRY4(unaff_r10 + 0x30,(uint)bVar20);
    iVar11 = unaff_r10 + 0x30 + (uint)bVar20;
    bVar18 = iVar11 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xfffffdcf < unaff_r10 || CARRY4(unaff_r10 + 0x230,(uint)bVar21);
    iVar1 = unaff_r10 + 0x230 + (uint)bVar21;
    bVar19 = iVar1 == 0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xffffff8f < unaff_r10 || CARRY4(unaff_r10 + 0x70,(uint)bVar20);
    iVar11 = unaff_r10 + 0x70 + (uint)bVar20;
    bVar18 = iVar11 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xffffff43 < unaff_r10 || CARRY4(unaff_r10 + 0xbc,(uint)bVar21);
    iVar11 = unaff_r10 + 0xbc + (uint)bVar21;
    bVar19 = iVar11 == 0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xffffff23 < unaff_r10 || CARRY4(unaff_r10 + 0xdc,(uint)bVar20);
    iVar11 = unaff_r10 + 0xdc + (uint)bVar20;
    bVar18 = iVar11 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xffffff9f < unaff_r10 || CARRY4(unaff_r10 + 0x60,(uint)bVar21);
    iVar11 = unaff_r10 + 0x60 + (uint)bVar21;
    bVar19 = iVar11 == 0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfffffc1f < unaff_r10 || CARRY4(unaff_r10 + 0x3e0,(uint)bVar20);
    iVar1 = unaff_r10 + 0x3e0 + (uint)bVar20;
    bVar18 = iVar1 == 0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xfffffd0f < unaff_r10 || CARRY4(unaff_r10 + 0x2f0,(uint)bVar21);
    iVar1 = unaff_r10 + 0x2f0 + (uint)bVar21;
    bVar19 = iVar1 == 0;
  }
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xffffdcff < unaff_r8 || CARRY4(unaff_r8 + 0x2300,(uint)bVar20);
  }
  if (bVar19 && unaff_r8 + 0x2300 + (uint)bVar20 == 0) {
    unaff_r8 = unaff_r9 + 0xf00 + (uint)bVar21;
  }
  *(undefined4 *)(puVar16 + -0x24) = 0x36da33c;
  *(undefined **)(puVar16 + -0x28) = unaff_r11;
  *(undefined4 *)(puVar16 + -0x2c) = uVar12;
  *(undefined4 *)(puVar16 + -0x30) = uVar8;
  *(undefined4 *)(puVar16 + -0x34) = uVar4;
  *(undefined **)(puVar16 + -0x38) = puVar3;
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
        uVar17 = iVar13 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
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
        uVar17 = iVar13 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x30);
          goto LAB_036da830;
        }
      }
      else {
        bVar20 = (undefined *)0x4b393817 < puVar3;
        uVar17 = false;
        if (puVar3 == (undefined *)0x4b393818) {
          iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da91c + 0x36da560),0);
          uVar17 = iVar13 == 0;
          bVar20 = true;
          if (!(bool)uVar17) {
            iVar11 = *(int *)(iVar11 + 0x1c);
            piVar2 = *(int **)(iVar1 + 0x14);
            goto LAB_036da830;
          }
        }
      }
    }
    else if (puVar3 == (undefined *)0x87a4488c) {
      iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da930 + 0x36da794),0);
      uVar17 = iVar13 == 0;
      bVar20 = true;
      if (!(bool)uVar17) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x1c);
        goto LAB_036da830;
      }
    }
    else if (puVar3 == (undefined *)0x5bc15335) {
      iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da948 + 0x36da7c0),0);
      uVar17 = iVar13 == 0;
      bVar20 = true;
      if (!(bool)uVar17) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x44);
        goto LAB_036da830;
      }
    }
    else {
      bVar20 = (undefined *)0x5d6adef6 < puVar3;
      uVar17 = false;
      if (puVar3 == (undefined *)0x5d6adef7) {
        iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da920 + 0x36da618),0);
        uVar17 = iVar13 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
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
      uVar17 = iVar13 == 0;
      bVar20 = true;
      if (!(bool)uVar17) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x24);
        goto LAB_036da830;
      }
    }
    else if (puVar3 == (undefined *)0x9dbb78b9) {
      iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da944 + 0x36da768),0);
      uVar17 = iVar13 == 0;
      bVar20 = true;
      if (!(bool)uVar17) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x3c);
        goto LAB_036da830;
      }
    }
    else {
      bVar20 = (undefined *)0xaf0e9ec6 < puVar3;
      uVar17 = false;
      if (puVar3 == (undefined *)0xaf0e9ec7) {
        iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da924 + 0x36da5c4),0);
        uVar17 = iVar13 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
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
      uVar17 = iVar13 == 0;
      bVar20 = true;
      if (!(bool)uVar17) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x18);
        goto LAB_036da830;
      }
    }
    else {
      bVar20 = (undefined *)0xd3917652 < puVar3;
      uVar17 = false;
      if (puVar3 == (undefined *)0xd3917653) {
        iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da928 + 0x36da66c),0);
        uVar17 = iVar13 == 0;
        bVar20 = true;
        if (!(bool)uVar17) {
          iVar11 = *(int *)(iVar11 + 0x1c);
          piVar2 = *(int **)(iVar1 + 0x28);
          goto LAB_036da830;
        }
      }
    }
  }
  else if (puVar3 == (undefined *)0xdf1ae323) {
    iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da934 + 0x36da818),0);
    uVar17 = iVar13 == 0;
    bVar20 = true;
    if (!(bool)uVar17) {
      iVar11 = *(int *)(iVar11 + 0x1c);
      piVar2 = *(int **)(iVar1 + 0x20);
      goto LAB_036da830;
    }
  }
  else {
    bVar20 = (undefined *)0xed8e82d0 < puVar3;
    uVar17 = false;
    if (puVar3 == (undefined *)0xed8e82d1) {
      iVar13 = func_0x04f57738(uVar12,**(undefined4 **)(iRam036da92c + 0x36da6b8),0);
      uVar17 = iVar13 == 0;
      bVar20 = true;
      if (!(bool)uVar17) {
        iVar11 = *(int *)(iVar11 + 0x1c);
        piVar2 = *(int **)(iVar1 + 0x38);
        goto LAB_036da830;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036da950 + 0x36da898));
  uVar8 = func_0x024f83c8();
  uVar4 = func_0x024f83b8(*(undefined4 *)(iRam036da954 + 0x36da8ac));
  *(undefined4 *)(puVar16 + -0x40) = 0;
  func_0x0509473c(uVar8,uVar4,uVar12,0);
  func_0x024f83c0(uVar8,iVar11);
  pcVar10 = (char *)func_0x024f83bc();
  bVar21 = bVar20;
  if ((bool)uVar17) {
    bVar21 = 0xfffffd7f < extraout_r12_02 || CARRY4(extraout_r12_02 + 0x280,(uint)bVar20);
  }
  bVar18 = false;
  bVar22 = bVar21;
  if ((bool)uVar17 && extraout_r12_02 + 0x280 + (uint)bVar20 == 0) {
    bVar22 = 0xffffffc0 < unaff_r8 || CARRY4(unaff_r8 + 0x3f,(uint)bVar21);
    unaff_r11 = (undefined *)(unaff_r8 + 0x3f + (uint)bVar21);
    bVar18 = unaff_r11 == (undefined *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar22;
  if (bVar18) {
    bVar20 = 0xffffff3f < unaff_r10 || CARRY4(unaff_r10 + 0xc0,(uint)bVar22);
    pcVar10 = (char *)(unaff_r10 + 0xc0 + (uint)bVar22);
    bVar19 = pcVar10 == (char *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xffffffbf < unaff_r10 || CARRY4(unaff_r10 + 0x40,(uint)bVar20);
    pcVar10 = (char *)(unaff_r10 + 0x40 + (uint)bVar20);
    bVar18 = pcVar10 == (char *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xffffc0ff < unaff_r10 || CARRY4(unaff_r10 + 0x3f00,(uint)bVar21);
    pcVar10 = (char *)(unaff_r10 + 0x3f00 + (uint)bVar21);
    bVar19 = pcVar10 == (char *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xffffc2ff < unaff_r10 || CARRY4(unaff_r10 + 0x3d00,(uint)bVar20);
    pcVar10 = (char *)(unaff_r10 + 0x3d00 + (uint)bVar20);
    bVar18 = pcVar10 == (char *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xffffc4ff < unaff_r10 || CARRY4(unaff_r10 + 0x3b00,(uint)bVar21);
    pcVar10 = (char *)(unaff_r10 + 0x3b00 + (uint)bVar21);
    bVar19 = pcVar10 == (char *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xffffc6ff < unaff_r10 || CARRY4(unaff_r10 + 0x3900,(uint)bVar20);
    pcVar10 = (char *)(unaff_r10 + 0x3900 + (uint)bVar20);
    bVar18 = pcVar10 == (char *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xffffc8ff < unaff_r10 || CARRY4(unaff_r10 + 0x3700,(uint)bVar21);
    pcVar10 = (char *)(unaff_r10 + 0x3700 + (uint)bVar21);
    bVar19 = pcVar10 == (char *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xffffcaff < unaff_r10 || CARRY4(unaff_r10 + 0x3500,(uint)bVar20);
    pcVar10 = (char *)(unaff_r10 + 0x3500 + (uint)bVar20);
    bVar18 = pcVar10 == (char *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xffffccff < unaff_r10 || CARRY4(unaff_r10 + 0x3300,(uint)bVar21);
    pcVar10 = (char *)(unaff_r10 + 0x3300 + (uint)bVar21);
    bVar19 = pcVar10 == (char *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xffffceff < unaff_r10 || CARRY4(unaff_r10 + 0x3100,(uint)bVar20);
    pcVar10 = (char *)(unaff_r10 + 0x3100 + (uint)bVar20);
    bVar18 = pcVar10 == (char *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xffffd0ff < unaff_r10 || CARRY4(unaff_r10 + 0x2f00,(uint)bVar21);
    pcVar10 = (char *)(unaff_r10 + 0x2f00 + (uint)bVar21);
    bVar19 = pcVar10 == (char *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xffffd2ff < unaff_r10 || CARRY4(unaff_r10 + 0x2d00,(uint)bVar20);
    pcVar10 = (char *)(unaff_r10 + 0x2d00 + (uint)bVar20);
    bVar18 = pcVar10 == (char *)0x0;
  }
  bVar19 = false;
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xffffd4ff < unaff_r10 || CARRY4(unaff_r10 + 0x2b00,(uint)bVar21);
    pcVar10 = (char *)(unaff_r10 + 0x2b00 + (uint)bVar21);
    bVar19 = pcVar10 == (char *)0x0;
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar19) {
    bVar21 = 0xfffffff0 < unaff_r8 || CARRY4(unaff_r8 + 0xf,(uint)bVar20);
    unaff_r11 = (undefined *)(unaff_r8 + 0xf + (uint)bVar20);
    bVar18 = unaff_r11 == (undefined *)0x0;
  }
  bVar20 = bVar21;
  if (bVar18) {
    bVar20 = 0xfffff6ff < extraout_r12_02 || CARRY4(extraout_r12_02 + 0x900,(uint)bVar21);
  }
  bVar19 = false;
  bVar22 = bVar20;
  if (bVar18 && extraout_r12_02 + 0x900 + (uint)bVar21 == 0) {
    bVar22 = 0xffff3fff < unaff_r10 || CARRY4(unaff_r10 + 0xc000,(uint)bVar20);
    pcVar10 = (char *)(unaff_r10 + 0xc000 + (uint)bVar20);
    bVar19 = pcVar10 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar22;
  if (bVar19) {
    bVar20 = CARRY4(unaff_r10,(uint)bVar22);
    pcVar10 = (char *)(unaff_r10 + bVar22);
    bVar18 = pcVar10 == (char *)0x0;
  }
  bVar19 = false;
  bVar21 = bVar20;
  if (bVar18) {
    bVar21 = 0xffffafff < unaff_r10 || CARRY4(unaff_r10 + 0x5000,(uint)bVar20);
    pcVar10 = (char *)(unaff_r10 + 0x5000 + (uint)bVar20);
    bVar19 = pcVar10 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar21;
  if (bVar19) {
    bVar20 = 0xfffccfff < unaff_r10 ||
             CARRY4((uint)(
                          "_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE23__do_get_floating_pointIfEES4_S4_S4_RNS_8ios_baseERjRT_"
                          + unaff_r10 + 0x11),(uint)bVar21);
    pcVar10 = "_ZNKSt6__ndk17num_getIcNS_19istreambuf_iteratorIcNS_11char_traitsIcEEEEE23__do_get_floating_pointIfEES4_S4_S4_RNS_8ios_baseERjRT_"
              + (uint)bVar21 + unaff_r10 + 0x11;
    bVar18 = pcVar10 == (char *)0x0;
  }
  bVar19 = false;
  bVar21 = bVar20;
  if (bVar18) {
    bVar21 = 0xfffe0fff < unaff_r10 || CARRY4(unaff_r10 + 0x1f000,(uint)bVar20);
    pcVar10 = (char *)(unaff_r10 + 0x1f000 + (uint)bVar20);
    bVar19 = pcVar10 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar21;
  if (bVar19) {
    bVar20 = 0xfff6bfff < unaff_r10 || CARRY4(unaff_r10 + 0x94000,(uint)bVar21);
    pcVar10 = (char *)(unaff_r10 + 0x94000 + (uint)bVar21);
    bVar18 = pcVar10 == (char *)0x0;
  }
  bVar19 = false;
  bVar21 = bVar20;
  if (bVar18) {
    bVar21 = 0xffc3ffff < unaff_r10 || CARRY4(unaff_r10 + 0x3c0000,(uint)bVar20);
    pcVar10 = (char *)(unaff_r10 + 0x3c0000 + (uint)bVar20);
    bVar19 = pcVar10 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar21;
  if (bVar19) {
    bVar20 = 0xfff2bfff < unaff_r10 || CARRY4(unaff_r10 + 0xd4000,(uint)bVar21);
    pcVar10 = (char *)(unaff_r10 + 0xd4000 + (uint)bVar21);
    bVar18 = pcVar10 == (char *)0x0;
  }
  bVar19 = false;
  bVar21 = bVar20;
  if (bVar18) {
    bVar21 = 0xffff7fff < unaff_r10 || CARRY4(unaff_r10 + 0x8000,(uint)bVar20);
    pcVar10 = (char *)(unaff_r10 + 0x8000 + (uint)bVar20);
    bVar19 = pcVar10 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar21;
  if (bVar19) {
    bVar20 = 0xfffeffff < unaff_r10 || CARRY4(unaff_r10 + 0x10000,(uint)bVar21);
    pcVar10 = (char *)(unaff_r10 + 0x10000 + (uint)bVar21);
    bVar18 = pcVar10 == (char *)0x0;
  }
  bVar19 = false;
  bVar21 = bVar20;
  if (bVar18) {
    bVar21 = 0xfff3bfff < unaff_r10 || CARRY4(unaff_r10 + 0xc4000,(uint)bVar20);
    pcVar10 = (char *)(unaff_r10 + 0xc4000 + (uint)bVar20);
    bVar19 = pcVar10 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar21;
  if (bVar19) {
    bVar20 = 0xfffa3fff < unaff_r10 || CARRY4(unaff_r10 + 0x5c000,(uint)bVar21);
    pcVar10 = (char *)(unaff_r10 + 0x5c000 + (uint)bVar21);
    bVar18 = pcVar10 == (char *)0x0;
  }
  if (bVar18) {
    pcVar10 = (char *)(unaff_r10 + 0x20000 + (uint)bVar20);
  }
  *(undefined4 *)(puVar16 + -0x44) = 0x36da8d8;
  *(undefined **)(puVar16 + -0x48) = unaff_r11;
  *(undefined4 *)(puVar16 + -0x4c) = uVar8;
  *(int *)(puVar16 + -0x50) = iVar11;
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

