
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_02f44764(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int extraout_r2;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  char *unaff_r9;
  undefined1 uVar13;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 uVar19;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char *pcStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar11 = (char *)(_UNK_02f44844 + 0x2f44778);
  if (*pcVar11 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f44848 + 0x2f4478c));
    func_0x01438628(*(undefined4 *)(_UNK_02f4484c + 0x2f44798));
    func_0x01438628(*(undefined4 *)(_UNK_02f44850 + 0x2f447a4));
    *pcVar11 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x14cb,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x14cb,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar11 = (char *)(_UNK_028a45dc + 0x28a44fc);
    if (*pcVar11 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a45e0 + 0x28a4510),param_1,0);
      *pcVar11 = '\x01';
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = pcStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar10 = *(int *)(iVar2 + 8);
    uVar12 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    uVar8 = 2;
    if (iVar2 == 0) {
      uVar8 = 1;
    }
    func_0x024f56d0(iVar10,uVar12,&uStack_30,uVar8,0,0);
    piVar1 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a45e4 + 0x28a45cc));
    return piVar1;
  }
  if (*(int *)(**(int **)(_UNK_02f44854 + 0x2f447fc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02f44858 + 0x2f44818));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar11 = (char *)**(undefined4 **)(_UNK_02f4485c + 0x2f44838);
  puVar7 = *(undefined4 **)(pcVar11 + 0x1c);
  if (puVar7 == (undefined4 *)0x0) {
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
    puVar7 = *(undefined4 **)(pcVar11 + 0x1c);
    if (puVar7 == (undefined4 *)0x0) {
      func_0x024f83f8(pcVar11);
      puVar7 = *(undefined4 **)(pcVar11 + 0x1c);
    }
  }
  uVar12 = *puVar7;
  iVar10 = *(int *)(iVar2 + 0x50);
  if (*(int *)(**(int **)(iRam0370fbb8 + 0x370f6c4) + 0x74) == 0) {
    func_0x024f83d8();
  }
  iVar3 = func_0x05171434(uVar12,0);
  if (iVar10 == 0) {
    func_0x024f83d4();
  }
  uVar4 = func_0x0475399c(iVar10,iVar3,**(undefined4 **)(iRam0370fbbc + 0x370f708));
  uVar5 = func_0x02965180(uVar4,0);
  if (uVar5 < 0x35a83e7c) {
    if (uVar5 < 0x1f222a57) {
      if (uVar5 == 0x11e4781a) {
        iVar10 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbec + 0x370f980),0);
        uVar13 = iVar10 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(pcVar11 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x34);
LAB_0370facc:
          iVar2 = *(int *)(iVar10 + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x024f83fc(iVar2);
          }
          piVar9 = (int *)0x0;
          if (piVar1 != (int *)0x0) {
            if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
               (piVar9 = piVar1,
               *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
            {
              piVar9 = (int *)0x0;
            }
          }
          return piVar9;
        }
      }
      else if (uVar5 == 0x1c7b49cc) {
        iVar10 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbf4 + 0x370f9ac),0);
        uVar13 = iVar10 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(pcVar11 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x48);
          goto LAB_0370facc;
        }
      }
      else {
        bVar16 = 0x1f222a55 < uVar5;
        uVar13 = false;
        if (uVar5 == 0x1f222a56) {
          iVar10 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbc0 + 0x370f774),0);
          uVar13 = iVar10 == 0;
          bVar16 = true;
          if (!(bool)uVar13) {
            iVar10 = *(int *)(pcVar11 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x40);
            goto LAB_0370facc;
          }
        }
      }
    }
    else if (uVar5 < 0x24f24770) {
      if (uVar5 == 0x22d6d693) {
        iVar10 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbe0 + 0x370fa04),0);
        uVar13 = iVar10 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(pcVar11 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_0370facc;
        }
      }
      else {
        bVar16 = 0x24f2476e < uVar5;
        uVar13 = false;
        if (uVar5 == 0x24f2476f) {
          iVar10 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbc4 + 0x370f82c),0);
          uVar13 = iVar10 == 0;
          bVar16 = true;
          if (!(bool)uVar13) {
            iVar10 = *(int *)(pcVar11 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x38);
            goto LAB_0370facc;
          }
        }
      }
    }
    else if (uVar5 == 0x297b851e) {
      iVar10 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbf0 + 0x370fa88),0);
      uVar13 = iVar10 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(pcVar11 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x44);
        goto LAB_0370facc;
      }
    }
    else {
      bVar16 = 0x35a83e7a < uVar5;
      uVar13 = false;
      if (uVar5 == 0x35a83e7b) {
        iVar10 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbc8 + 0x370f908),0);
        uVar13 = iVar10 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(pcVar11 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x3c);
          goto LAB_0370facc;
        }
      }
    }
  }
  else if (uVar5 < 0x9e742f05) {
    if (uVar5 < 0x42250021) {
      if (uVar5 == 0x3ff3d659) {
        iVar10 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbf8 + 0x370f9d8),0);
        uVar13 = iVar10 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(pcVar11 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x14);
          goto LAB_0370facc;
        }
      }
      else {
        bVar16 = 0x4225001f < uVar5;
        uVar13 = false;
        if (uVar5 == 0x42250020) {
          iVar10 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbcc + 0x370f7d8),0);
          uVar13 = iVar10 == 0;
          bVar16 = true;
          if (!(bool)uVar13) {
            iVar10 = *(int *)(pcVar11 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x20);
            goto LAB_0370facc;
          }
        }
      }
    }
    else if (uVar5 == 0x8f22eb81) {
      iVar10 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbdc + 0x370fa5c),0);
      uVar13 = iVar10 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(pcVar11 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_0370facc;
      }
    }
    else {
      bVar16 = 0x9e742f03 < uVar5;
      uVar13 = false;
      if (uVar5 == 0x9e742f04) {
        iVar10 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbd0 + 0x370f8c4),0);
        uVar13 = iVar10 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(pcVar11 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x4c);
          goto LAB_0370facc;
        }
      }
    }
  }
  else if (uVar5 < 0xb5cc8887) {
    if (uVar5 == 0xb4cc86f3) {
      iVar10 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbe4 + 0x370fa30),0);
      uVar13 = iVar10 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(pcVar11 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x24);
        goto LAB_0370facc;
      }
    }
    else {
      bVar16 = 0xb5cc8885 < uVar5;
      uVar13 = false;
      if (uVar5 == 0xb5cc8886) {
        iVar10 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbd4 + 0x370f880),0);
        uVar13 = iVar10 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(pcVar11 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x28);
          goto LAB_0370facc;
        }
      }
    }
  }
  else if (uVar5 == 0xb6cc8a19) {
    iVar10 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbe8 + 0x370fab4),0);
    uVar13 = iVar10 == 0;
    bVar16 = true;
    if (!(bool)uVar13) {
      iVar10 = *(int *)(pcVar11 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x2c);
      goto LAB_0370facc;
    }
  }
  else {
    bVar16 = 0xb7cc8bab < uVar5;
    uVar13 = false;
    if (uVar5 == 0xb7cc8bac) {
      iVar10 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbd8 + 0x370f954),0);
      uVar13 = iVar10 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(pcVar11 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x30);
        goto LAB_0370facc;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam0370fbfc + 0x370fb34));
  uVar5 = func_0x024f83c8();
  uVar12 = func_0x024f83b8(*(undefined4 *)(iRam0370fc00 + 0x370fb48));
  uStack_20 = 0;
  func_0x0509473c(uVar5,uVar12,uVar4,0);
  func_0x024f83c0(uVar5,pcVar11);
  uVar19 = func_0x024f83bc();
  iVar10 = (int)((ulonglong)uVar19 >> 0x20);
  iVar2 = (int)uVar19;
  bVar14 = false;
  bVar17 = bVar16;
  if ((bool)uVar13) {
    bVar17 = (char *)0xffffd6ff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x2900),(uint)bVar16);
    pcVar11 = unaff_r9 + bVar16 + 0x2900;
    bVar14 = pcVar11 == (char *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = CARRY4(uVar5,(uint)bVar17);
    uVar4 = uVar5 + bVar17;
    bVar15 = uVar4 == 0;
  }
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xf9bfffff < uVar4 || CARRY4((uint)(&DAT_06400000 + uVar4),(uint)bVar16);
  }
  bVar15 = bVar15 && &DAT_06400000 + bVar16 + uVar4 == (undefined *)0x0;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xfa3fffff < uVar4 || CARRY4((uint)(&UNK_05c00000 + uVar4),(uint)bVar17);
  }
  bVar15 = bVar15 && &UNK_05c00000 + bVar17 + uVar4 == (undefined *)0x0;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xfabfffff < uVar4 || CARRY4((uint)(&UNK_05400000 + uVar4),(uint)bVar16);
  }
  bVar15 = bVar15 && &UNK_05400000 + bVar16 + uVar4 == (undefined *)0x0;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xfb3fffff < uVar4 || CARRY4((uint)(&UNK_04c00000 + uVar4),(uint)bVar17);
  }
  bVar15 = bVar15 && &UNK_04c00000 + bVar17 + uVar4 == (undefined *)0x0;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xfbbfffff < uVar4 || CARRY4((uint)(&UNK_04400000 + uVar4),(uint)bVar16);
  }
  bVar15 = bVar15 && &UNK_04400000 + bVar16 + uVar4 == (undefined *)0x0;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xfc3fffff < uVar4 || CARRY4(uVar4 + 0x3c00000,(uint)bVar17);
  }
  bVar15 = bVar15 && uVar4 + 0x3c00000 + (uint)bVar17 == 0;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xfcbfffff < uVar4 || CARRY4((uint)(&UNK_03400000 + uVar4),(uint)bVar16);
  }
  bVar15 = bVar15 && &UNK_03400000 + bVar16 + uVar4 == (undefined *)0x0;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xfd3fffff < uVar4 || CARRY4((uint)(&UNK_02c00000 + uVar4),(uint)bVar17);
  }
  bVar15 = bVar15 && &UNK_02c00000 + bVar17 + uVar4 == (undefined *)0x0;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xfdbfffff < uVar4 || CARRY4((uint)(&UNK_02400000 + uVar4),(uint)bVar16);
  }
  bVar15 = bVar15 && &UNK_02400000 + bVar16 + uVar4 == (undefined *)0x0;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xfe3fffff < uVar4 || CARRY4(uVar4 + 0x1c00000,(uint)bVar17);
  }
  bVar15 = bVar15 && uVar4 + 0x1c00000 + (uint)bVar17 == 0;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xfebfffff < uVar4 || CARRY4((uint)(&UNK_01400000 + uVar4),(uint)bVar16);
  }
  bVar15 = bVar15 && &UNK_01400000 + bVar16 + uVar4 == (undefined *)0x0;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xff3fffff < uVar4 || CARRY4(uVar4 + 0xc00000,(uint)bVar17);
  }
  bVar15 = bVar15 && uVar4 + 0xc00000 + (uint)bVar17 == 0;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xffbfffff < uVar4 || CARRY4(uVar4 + 0x400000,(uint)bVar16);
  }
  bVar15 = bVar15 && uVar4 + 0x400000 + (uint)bVar16 == 0;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xc0ffffff < uVar4 || CARRY4(uVar4 + 0x3f000000,(uint)bVar17);
  }
  bVar15 = bVar15 && uVar4 + 0x3f000000 + (uint)bVar17 == 0;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xc2ffffff < uVar4 || CARRY4(uVar4 + 0x3d000000,(uint)bVar16);
  }
  bVar14 = false;
  bVar18 = bVar17;
  if (bVar15 && uVar4 + 0x3d000000 + (uint)bVar16 == 0) {
    bVar18 = 0xffffff5f < uVar5 || CARRY4(uVar5 + 0xa0,(uint)bVar17);
    uVar5 = uVar5 + 0xa0 + (uint)bVar17;
    bVar14 = uVar5 == 0;
  }
  bVar15 = false;
  bVar16 = bVar18;
  if (bVar14) {
    bVar16 = (char *)0xffff83ff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x7c00),(uint)bVar18);
    pcVar11 = unaff_r9 + bVar18 + 0x7c00;
    bVar15 = pcVar11 == (char *)0x0;
  }
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xbffffff < uVar4 || CARRY4(uVar4 + 0xf4000000,(uint)bVar16);
  }
  bVar15 = bVar15 && uVar4 + 0xf4000000 + (uint)bVar16 == 0;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xbbffffff < uVar4 || CARRY4(uVar4 + 0x44000000,(uint)bVar17);
  }
  bVar15 = bVar15 && uVar4 + 0x44000000 + (uint)bVar17 == 0;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xfffffffd < uVar4 || CARRY4(uVar4 + 2,(uint)bVar16);
  }
  bVar15 = bVar15 && uVar4 + 2 + (uint)bVar16 == 0;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0x5bffffff < uVar4 || CARRY4(uVar4 + 0xa4000000,(uint)bVar17);
  }
  bVar15 = bVar15 && uVar4 + 0xa4000000 + (uint)bVar17 == 0;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xcffffffc < uVar4 || CARRY4(uVar4 + 0x30000003,(uint)bVar16);
  }
  bVar15 = bVar15 && uVar4 + 0x30000003 + (uint)bVar16 == 0;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xf3ffffff < uVar4 || CARRY4(uVar4 + 0xc000000,(uint)bVar17);
  }
  bVar15 = bVar15 && uVar4 + 0xc000000 + (uint)bVar17 == 0;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0x7fffffff < uVar4 || CARRY4(uVar4 + 0x80000000,(uint)bVar16);
  }
  bVar15 = bVar15 && uVar4 + 0x80000000 + (uint)bVar16 == 0;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0x7ffffffd < uVar4 || CARRY4(uVar4 + 0x80000002,(uint)bVar17);
  }
  bVar15 = bVar15 && uVar4 + 0x80000002 + (uint)bVar17 == 0;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xfffffff6 < uVar4 || CARRY4(uVar4 + 9,(uint)bVar16);
  }
  bVar15 = bVar15 && uVar4 + 9 + (uint)bVar16 == 0;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xfffffffc < uVar4 || CARRY4(uVar4 + 3,(uint)bVar17);
  }
  bVar15 = bVar15 && uVar4 + 3 + (uint)bVar17 == 0;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xffffffce < uVar4 || CARRY4(uVar4 + 0x31,(uint)bVar16);
  }
  bVar15 = bVar15 && uVar4 + 0x31 + (uint)bVar16 == 0;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xbffffff1 < uVar4 || CARRY4(uVar4 + 0x4000000e,(uint)bVar17);
  }
  bVar15 = bVar15 && uVar4 + 0x4000000e + (uint)bVar17 == 0;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xffffffc1 < uVar4 || CARRY4(uVar4 + 0x3e,(uint)bVar16);
  }
  bVar15 = bVar15 && uVar4 + 0x3e + (uint)bVar16 == 0;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xfffffff3 < uVar4 || CARRY4(uVar4 + 0xc,(uint)bVar17);
  }
  bVar15 = bVar15 && uVar4 + 0xc + (uint)bVar17 == 0;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xbffffff7 < uVar4 || CARRY4(uVar4 + 0x40000008,(uint)bVar16);
  }
  if (bVar15 && uVar4 + 0x40000008 + (uint)bVar16 == 0) {
    iVar3 = uVar5 + 0x15000000 + (uint)bVar17;
  }
  uStack_24 = 0x370fb74;
  puVar7 = *(undefined4 **)(iVar10 + 0x1c);
  pcStack_38 = pcVar11;
  uStack_34 = uVar5;
  uStack_30 = uVar4;
  iStack_2c = iVar3;
  if (puVar7 == (undefined4 *)0x0) {
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
    puVar7 = *(undefined4 **)(iVar10 + 0x1c);
    if (puVar7 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar10);
      puVar7 = *(undefined4 **)(iVar10 + 0x1c);
    }
  }
  uVar12 = *puVar7;
  iVar3 = *(int *)(iVar2 + 0x50);
  if (*(int *)(**(int **)(iRam03710204 + 0x370fd10) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar12 = func_0x05171434(uVar12,0);
  if (iVar3 == 0) {
    func_0x024f83d4();
  }
  uVar4 = func_0x0475399c(iVar3,uVar12,**(undefined4 **)(iRam03710208 + 0x370fd54));
  uVar5 = func_0x02965180(uVar4,0);
  if (uVar5 < 0x35a83e7c) {
    if (uVar5 < 0x1f222a57) {
      if (uVar5 == 0x11e4781a) {
        iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710238 + 0x370ffcc),0);
        uVar13 = iVar3 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar10 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x34);
LAB_03710118:
          iVar2 = *(int *)(iVar10 + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x024f83fc(iVar2);
          }
          piVar9 = (int *)0x0;
          if (piVar1 != (int *)0x0) {
            if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
               (piVar9 = piVar1,
               *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
            {
              piVar9 = (int *)0x0;
            }
          }
          return piVar9;
        }
      }
      else if (uVar5 == 0x1c7b49cc) {
        iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710240 + 0x370fff8),0);
        uVar13 = iVar3 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar10 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x48);
          goto LAB_03710118;
        }
      }
      else {
        bVar16 = 0x1f222a55 < uVar5;
        uVar13 = false;
        if (uVar5 == 0x1f222a56) {
          iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0371020c + 0x370fdc0),0);
          uVar13 = iVar3 == 0;
          bVar16 = true;
          if (!(bool)uVar13) {
            iVar10 = *(int *)(iVar10 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x40);
            goto LAB_03710118;
          }
        }
      }
    }
    else if (uVar5 < 0x24f24770) {
      if (uVar5 == 0x22d6d693) {
        iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0371022c + 0x3710050),0);
        uVar13 = iVar3 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar10 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_03710118;
        }
      }
      else {
        bVar16 = 0x24f2476e < uVar5;
        uVar13 = false;
        if (uVar5 == 0x24f2476f) {
          iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710210 + 0x370fe78),0);
          uVar13 = iVar3 == 0;
          bVar16 = true;
          if (!(bool)uVar13) {
            iVar10 = *(int *)(iVar10 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x38);
            goto LAB_03710118;
          }
        }
      }
    }
    else if (uVar5 == 0x297b851e) {
      iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0371023c + 0x37100d4),0);
      uVar13 = iVar3 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar10 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x44);
        goto LAB_03710118;
      }
    }
    else {
      bVar16 = 0x35a83e7a < uVar5;
      uVar13 = false;
      if (uVar5 == 0x35a83e7b) {
        iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710214 + 0x370ff54),0);
        uVar13 = iVar3 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar10 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x3c);
          goto LAB_03710118;
        }
      }
    }
  }
  else if (uVar5 < 0x9e742f05) {
    if (uVar5 < 0x42250021) {
      if (uVar5 == 0x3ff3d659) {
        iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710244 + 0x3710024),0);
        uVar13 = iVar3 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar10 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x14);
          goto LAB_03710118;
        }
      }
      else {
        bVar16 = 0x4225001f < uVar5;
        uVar13 = false;
        if (uVar5 == 0x42250020) {
          iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710218 + 0x370fe24),0);
          uVar13 = iVar3 == 0;
          bVar16 = true;
          if (!(bool)uVar13) {
            iVar10 = *(int *)(iVar10 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x20);
            goto LAB_03710118;
          }
        }
      }
    }
    else if (uVar5 == 0x8f22eb81) {
      iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710228 + 0x37100a8),0);
      uVar13 = iVar3 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar10 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_03710118;
      }
    }
    else {
      bVar16 = 0x9e742f03 < uVar5;
      uVar13 = false;
      if (uVar5 == 0x9e742f04) {
        iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0371021c + 0x370ff10),0);
        uVar13 = iVar3 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar10 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x4c);
          goto LAB_03710118;
        }
      }
    }
  }
  else if (uVar5 < 0xb5cc8887) {
    if (uVar5 == 0xb4cc86f3) {
      iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710230 + 0x371007c),0);
      uVar13 = iVar3 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar10 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x24);
        goto LAB_03710118;
      }
    }
    else {
      bVar16 = 0xb5cc8885 < uVar5;
      uVar13 = false;
      if (uVar5 == 0xb5cc8886) {
        iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710220 + 0x370fecc),0);
        uVar13 = iVar3 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar10 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x28);
          goto LAB_03710118;
        }
      }
    }
  }
  else if (uVar5 == 0xb6cc8a19) {
    iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710234 + 0x3710100),0);
    uVar13 = iVar3 == 0;
    bVar16 = true;
    if (!(bool)uVar13) {
      iVar10 = *(int *)(iVar10 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x2c);
      goto LAB_03710118;
    }
  }
  else {
    bVar16 = 0xb7cc8bab < uVar5;
    uVar13 = false;
    if (uVar5 == 0xb7cc8bac) {
      iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710224 + 0x370ffa0),0);
      uVar13 = iVar3 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar10 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x30);
        goto LAB_03710118;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam03710248 + 0x3710180));
  uVar5 = func_0x024f83c8();
  uVar12 = func_0x024f83b8(*(undefined4 *)(iRam0371024c + 0x3710194));
  uStack_40 = 0;
  func_0x0509473c(uVar5,uVar12,uVar4,0);
  func_0x024f83c0(uVar5,iVar10);
  uVar19 = func_0x024f83bc();
  iVar10 = (int)((ulonglong)uVar19 >> 0x20);
  iVar2 = (int)uVar19;
  bVar17 = bVar16;
  if ((bool)uVar13) {
    bVar17 = (char *)0xfe9fffff < unaff_r9 ||
             CARRY4((uint)(&UNK_01600000 + (int)unaff_r9),(uint)bVar16);
  }
  bVar14 = false;
  bVar18 = bVar17;
  if ((bool)uVar13 && &UNK_01600000 + (int)(unaff_r9 + bVar16) == (undefined *)0x0) {
    bVar18 = 0xffd2ffff < uVar5 || CARRY4(uVar5 + 0x2d0000,(uint)bVar17);
    uVar5 = uVar5 + 0x2d0000 + (uint)bVar17;
    bVar14 = uVar5 == 0;
  }
  bVar16 = bVar18;
  if (bVar14) {
    bVar16 = 0xffffffe7 < uVar4 || CARRY4(uVar4 + 0x18,(uint)bVar18);
  }
  bVar14 = bVar14 && uVar4 + 0x18 + (uint)bVar18 == 0;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xffffffef < uVar4 || CARRY4(uVar4 + 0x10,(uint)bVar16);
  }
  bVar14 = bVar14 && uVar4 + 0x10 + (uint)bVar16 == 0;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xfffffff7 < uVar4 || CARRY4(uVar4 + 8,(uint)bVar17);
  }
  bVar14 = bVar14 && uVar4 + 8 + (uint)bVar17 == 0;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = CARRY4(uVar4,(uint)bVar16);
  }
  bVar15 = false;
  bVar18 = bVar17;
  if (bVar14 && uVar4 + bVar16 == 0) {
    bVar18 = 0xfffffc1f < uVar4 || CARRY4(uVar4 + 0x3e0,(uint)bVar17);
    unaff_r9 = (char *)(uVar4 + 0x3e0 + (uint)bVar17);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar18;
  if (bVar15) {
    bVar16 = 0xfffffc3f < uVar4 || CARRY4(uVar4 + 0x3c0,(uint)bVar18);
    unaff_r9 = (char *)(uVar4 + 0x3c0 + (uint)bVar18);
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xfffffc5f < uVar4 || CARRY4(uVar4 + 0x3a0,(uint)bVar16);
    unaff_r9 = (char *)(uVar4 + 0x3a0 + (uint)bVar16);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xfffffc7f < uVar4 || CARRY4(uVar4 + 0x380,(uint)bVar17);
    unaff_r9 = (char *)(uVar4 + 0x380 + (uint)bVar17);
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xfffffc9f < uVar4 || CARRY4(uVar4 + 0x360,(uint)bVar16);
    unaff_r9 = (char *)(uVar4 + 0x360 + (uint)bVar16);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xfffffcbf < uVar4 || CARRY4(uVar4 + 0x340,(uint)bVar17);
    unaff_r9 = (char *)(uVar4 + 0x340 + (uint)bVar17);
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xfffffcdf < uVar4 || CARRY4(uVar4 + 800,(uint)bVar16);
    unaff_r9 = (char *)(uVar4 + 800 + (uint)bVar16);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xfffffcff < uVar4 || CARRY4(uVar4 + 0x300,(uint)bVar17);
    unaff_r9 = (char *)(uVar4 + 0x300 + (uint)bVar17);
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xfffffd1f < uVar4 || CARRY4(uVar4 + 0x2e0,(uint)bVar16);
    unaff_r9 = (char *)(uVar4 + 0x2e0 + (uint)bVar16);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xfffffd3f < uVar4 || CARRY4(uVar4 + 0x2c0,(uint)bVar17);
    unaff_r9 = (char *)(uVar4 + 0x2c0 + (uint)bVar17);
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xfffffd5f < uVar4 || CARRY4(uVar4 + 0x2a0,(uint)bVar16);
    unaff_r9 = (char *)(uVar4 + 0x2a0 + (uint)bVar16);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xff23ffff < uVar5 || CARRY4((uint)(&UNK_00dc0000 + uVar5),(uint)bVar17);
    bVar14 = &UNK_00dc0000 + bVar17 + uVar5 == (undefined *)0x0;
  }
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = (char *)0xfcffffff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x3000000),(uint)bVar16);
  }
  bVar15 = false;
  bVar18 = bVar17;
  if (bVar14 && unaff_r9 + bVar16 + 0x3000000 == (char *)0x0) {
    bVar18 = 0xfffff57f < uVar4 || CARRY4(uVar4 + 0xa80,(uint)bVar17);
    unaff_r9 = (char *)(uVar4 + 0xa80 + (uint)bVar17);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar18;
  if (bVar15) {
    bVar16 = 0xffffc1ff < uVar4 || CARRY4(uVar4 + 0x3e00,(uint)bVar18);
    unaff_r9 = (char *)(uVar4 + 0x3e00 + (uint)bVar18);
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xfffff2ff < uVar4 || CARRY4(uVar4 + 0xd00,(uint)bVar16);
    unaff_r9 = (char *)(uVar4 + 0xd00 + (uint)bVar16);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xfffffa7f < uVar4 || CARRY4(uVar4 + 0x580,(uint)bVar17);
    unaff_r9 = (char *)(uVar4 + 0x580 + (uint)bVar17);
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xffffdfff < uVar4 || CARRY4(uVar4 + 0x2000,(uint)bVar16);
    unaff_r9 = (char *)(uVar4 + 0x2000 + (uint)bVar16);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xffffcfff < uVar4 || CARRY4(uVar4 + 0x3000,(uint)bVar17);
    unaff_r9 = (char *)(uVar4 + 0x3000 + (uint)bVar17);
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xffff2bff < uVar4 || CARRY4(uVar4 + 0xd400,(uint)bVar16);
    unaff_r9 = (char *)(uVar4 + 0xd400 + (uint)bVar16);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xfffc8fff < uVar4 ||
             CARRY4((uint)(
                          "_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initIPKwEENS_9_MetaBaseIXsr27__is_cpp17_forward_iteratorIT_EE5valueEE13_EnableIfImplIvEESA_SA_"
                          + uVar4 + 0x91),(uint)bVar17);
    unaff_r9 = "_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initIPKwEENS_9_MetaBaseIXsr27__is_cpp17_forward_iteratorIT_EE5valueEE13_EnableIfImplIvEESA_SA_"
               + (uint)bVar17 + uVar4 + 0x91;
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xffffbbff < uVar4 || CARRY4(uVar4 + 0x4400,(uint)bVar16);
    unaff_r9 = (char *)(uVar4 + 0x4400 + (uint)bVar16);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xfffc6fff < uVar4 ||
             CARRY4((uint)("_ZNSt6__ndk16localeC2ERKS0_PKci" + uVar4 + 0x15),(uint)bVar17);
    unaff_r9 = "_ZNSt6__ndk16localeC2ERKS0_PKci" + (uint)bVar17 + uVar4 + 0x15;
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xfffe1fff < uVar4 || CARRY4(uVar4 + 0x1e000,(uint)bVar16);
    unaff_r9 = (char *)(uVar4 + 0x1e000 + (uint)bVar16);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xffff67ff < uVar4 || CARRY4(uVar4 + 0x9800,(uint)bVar17);
    unaff_r9 = (char *)(uVar4 + 0x9800 + (uint)bVar17);
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xfffd4fff < uVar4 ||
             CARRY4((uint)(
                          "_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEEC2EPNS_15basic_streambufIcS2_EE"
                          + uVar4 + 0x1d),(uint)bVar16);
    unaff_r9 = "_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEEC2EPNS_15basic_streambufIcS2_EE" +
               (uint)bVar16 + uVar4 + 0x1d;
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xffff8bff < uVar4 || CARRY4(uVar4 + 0x7400,(uint)bVar17);
    unaff_r9 = (char *)(uVar4 + 0x7400 + (uint)bVar17);
    bVar14 = unaff_r9 == (char *)0x0;
  }
  if (bVar14) {
    unaff_r9 = (char *)(uVar4 + 0x3800 + (uint)bVar16);
  }
  uStack_44 = 0x37101c0;
  puVar7 = *(undefined4 **)(iVar10 + 0x1c);
  if (puVar7 == (undefined4 *)0x0) {
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
    puVar7 = *(undefined4 **)(iVar10 + 0x1c);
    if (puVar7 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar10);
      puVar7 = *(undefined4 **)(iVar10 + 0x1c);
    }
  }
  uVar12 = *puVar7;
  iVar3 = *(int *)(iVar2 + 0x3c);
  if (*(int *)(**(int **)(iRam037106bc + 0x3710320) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar12 = func_0x05171434(uVar12,0);
  if (iVar3 == 0) {
    func_0x024f83d4();
  }
  uVar4 = func_0x0475399c(iVar3,uVar12,**(undefined4 **)(iRam037106c0 + 0x3710364));
  uVar5 = func_0x02965180(uVar4,0);
  if (uVar5 < 0xa5621015) {
    if (uVar5 < 0x775ef500) {
      if (uVar5 == 0x392d1efa) {
        iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam037106e8 + 0x37104f0),0);
        uVar13 = iVar3 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar10 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x14);
LAB_037105e4:
          iVar2 = *(int *)(iVar10 + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x024f83fc(iVar2);
          }
          piVar9 = (int *)0x0;
          if (piVar1 != (int *)0x0) {
            if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
               (piVar9 = piVar1,
               *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
            {
              piVar9 = (int *)0x0;
            }
          }
          return piVar9;
        }
      }
      else {
        bVar16 = 0x775ef4fe < uVar5;
        uVar13 = false;
        if (uVar5 == 0x775ef4ff) {
          iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam037106c4 + 0x37103c0),0);
          uVar13 = iVar3 == 0;
          bVar16 = true;
          if (!(bool)uVar13) {
            iVar10 = *(int *)(iVar10 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x28);
            goto LAB_037105e4;
          }
        }
      }
    }
    else if (uVar5 == 0x8950c121) {
      iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam037106d4 + 0x3710548),0);
      uVar13 = iVar3 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar10 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_037105e4;
      }
    }
    else if (uVar5 == 0xa4ebb130) {
      iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam037106e4 + 0x3710574),0);
      uVar13 = iVar3 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar10 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x38);
        goto LAB_037105e4;
      }
    }
    else {
      bVar16 = 0xa5621013 < uVar5;
      uVar13 = false;
      if (uVar5 == 0xa5621014) {
        iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam037106c8 + 0x3710468),0);
        uVar13 = iVar3 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar10 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x30);
          goto LAB_037105e4;
        }
      }
    }
  }
  else if (uVar5 < 0xb9cd4293) {
    if (uVar5 == 0xb881e6cb) {
      iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam037106e0 + 0x371051c),0);
      uVar13 = iVar3 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar10 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x34);
        goto LAB_037105e4;
      }
    }
    else {
      bVar16 = 0xb9cd4291 < uVar5;
      uVar13 = false;
      if (uVar5 == 0xb9cd4292) {
        iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam037106cc + 0x3710414),0);
        uVar13 = iVar3 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar10 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_037105e4;
        }
      }
    }
  }
  else if (uVar5 == 0xbafc2442) {
    iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam037106dc + 0x37105a0),0);
    uVar13 = iVar3 == 0;
    bVar16 = true;
    if (!(bool)uVar13) {
      iVar10 = *(int *)(iVar10 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x2c);
      goto LAB_037105e4;
    }
  }
  else if (uVar5 == 0xc16fefa5) {
    iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam037106d8 + 0x37105cc),0);
    uVar13 = iVar3 == 0;
    bVar16 = true;
    if (!(bool)uVar13) {
      iVar10 = *(int *)(iVar10 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x24);
      goto LAB_037105e4;
    }
  }
  else {
    bVar16 = 0xec3691f0 < uVar5;
    uVar13 = false;
    if (uVar5 == 0xec3691f1) {
      iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam037106d0 + 0x37104c4),0);
      uVar13 = iVar3 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar10 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x20);
        goto LAB_037105e4;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam037106ec + 0x371064c));
  uVar5 = func_0x024f83c8();
  uVar12 = func_0x024f83b8(*(undefined4 *)(iRam037106f0 + 0x3710660));
  func_0x0509473c(uVar5,uVar12,uVar4,0,0);
  func_0x024f83c0(uVar5,iVar10);
  uVar19 = func_0x024f83bc();
  iVar10 = (int)((ulonglong)uVar19 >> 0x20);
  iVar2 = (int)uVar19;
  bVar17 = bVar16;
  if ((bool)uVar13) {
    bVar17 = (char *)0xfffffffc < unaff_r9 || CARRY4((uint)(unaff_r9 + 3),(uint)bVar16);
  }
  bVar14 = false;
  bVar18 = bVar17;
  if ((bool)uVar13 && unaff_r9 + bVar16 + 3 == (char *)0x0) {
    bVar18 = 0x5ffffffe < uVar5 || CARRY4(uVar5 + 0xa0000001,(uint)bVar17);
    uVar5 = uVar5 + 0xa0000001 + (uint)bVar17;
    bVar14 = uVar5 == 0;
  }
  bVar15 = false;
  bVar16 = bVar18;
  if (bVar14) {
    bVar16 = 0xff1fffff < uVar4 || CARRY4(uVar4 + 0xe00000,(uint)bVar18);
    unaff_r9 = (char *)(uVar4 + 0xe00000 + (uint)bVar18);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xff27ffff < uVar4 || CARRY4((uint)(&UNK_00d80000 + uVar4),(uint)bVar16);
    unaff_r9 = &UNK_00d80000 + bVar16 + uVar4;
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xff2fffff < uVar4 || CARRY4((uint)(&UNK_00d00000 + uVar4),(uint)bVar17);
    unaff_r9 = &UNK_00d00000 + bVar17 + uVar4;
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xff37ffff < uVar4 || CARRY4((uint)(&UNK_00c80000 + uVar4),(uint)bVar16);
    unaff_r9 = &UNK_00c80000 + bVar16 + uVar4;
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xff3fffff < uVar4 || CARRY4(uVar4 + 0xc00000,(uint)bVar17);
    unaff_r9 = (char *)(uVar4 + 0xc00000 + (uint)bVar17);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xff47ffff < uVar4 || CARRY4((uint)(&UNK_00b80000 + uVar4),(uint)bVar16);
    unaff_r9 = &UNK_00b80000 + bVar16 + uVar4;
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xff4fffff < uVar4 || CARRY4((uint)(&UNK_00b00000 + uVar4),(uint)bVar17);
    unaff_r9 = &UNK_00b00000 + bVar17 + uVar4;
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xff57ffff < uVar4 || CARRY4((uint)(&UNK_00a80000 + uVar4),(uint)bVar16);
    unaff_r9 = &UNK_00a80000 + bVar16 + uVar4;
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xff5fffff < uVar4 || CARRY4((uint)(&UNK_00a00000 + uVar4),(uint)bVar17);
    unaff_r9 = &UNK_00a00000 + bVar17 + uVar4;
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar17 = bVar16;
  if (bVar15) {
    bVar17 = 0xff67ffff < uVar4 || CARRY4((uint)(&UNK_00980000 + uVar4),(uint)bVar16);
    unaff_r9 = &UNK_00980000 + bVar16 + uVar4;
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0x3ffffff3 < uVar5 || CARRY4(uVar5 + 0xc000000c,(uint)bVar17);
  }
  bVar14 = bVar14 && uVar5 + 0xc000000c + (uint)bVar17 == 0;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = (char *)0xffffffdf < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x20),(uint)bVar16);
  }
  bVar15 = false;
  bVar18 = bVar17;
  if (bVar14 && unaff_r9 + bVar16 + 0x20 == (char *)0x0) {
    bVar18 = 0xfcefffff < uVar4 || CARRY4((uint)(&UNK_03100000 + uVar4),(uint)bVar17);
    unaff_r9 = &UNK_03100000 + bVar17 + uVar4;
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar18;
  if (bVar15) {
    bVar16 = 0xffcfffff < uVar4 || CARRY4(uVar4 + 0x300000,(uint)bVar18);
    unaff_r9 = (char *)(uVar4 + 0x300000 + (uint)bVar18);
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xfe1fffff < uVar4 || CARRY4(uVar4 + 0x1e00000,(uint)bVar16);
    unaff_r9 = (char *)(uVar4 + 0x1e00000 + (uint)bVar16);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xf3bfffff < uVar4 || CARRY4(uVar4 + 0xc400000,(uint)bVar17);
    unaff_r9 = (char *)(uVar4 + 0xc400000 + (uint)bVar17);
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xfd7fffff < uVar4 || CARRY4(uVar4 + 0x2800000,(uint)bVar16);
    unaff_r9 = (char *)(uVar4 + 0x2800000 + (uint)bVar16);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xceffffff < uVar4 || CARRY4(uVar4 + 0x31000000,(uint)bVar17);
    unaff_r9 = (char *)(uVar4 + 0x31000000 + (uint)bVar17);
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xc9ffffff < uVar4 || CARRY4(uVar4 + 0x36000000,(uint)bVar16);
    unaff_r9 = (char *)(uVar4 + 0x36000000 + (uint)bVar16);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xf87fffff < uVar4 || CARRY4(uVar4 + 0x7800000,(uint)bVar17);
    unaff_r9 = (char *)(uVar4 + 0x7800000 + (uint)bVar17);
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xff3fffff < uVar4 || CARRY4(uVar4 + 0xc00000,(uint)bVar16);
    unaff_r9 = (char *)(uVar4 + 0xc00000 + (uint)bVar16);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  if (bVar15) {
    unaff_r9 = (char *)(uVar4 + 0x8c00000 + (uint)bVar17);
  }
  puVar7 = *(undefined4 **)(iVar10 + 0x1c);
  if (puVar7 == (undefined4 *)0x0) {
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
    puVar7 = *(undefined4 **)(iVar10 + 0x1c);
    if (puVar7 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar10);
      puVar7 = *(undefined4 **)(iVar10 + 0x1c);
    }
  }
  uVar12 = *puVar7;
  iVar3 = *(int *)(iVar2 + 0x3c);
  if (*(int *)(**(int **)(iRam03710b60 + 0x37107c4) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar12 = func_0x05171434(uVar12,0);
  if (iVar3 == 0) {
    func_0x024f83d4();
  }
  uVar4 = func_0x0475399c(iVar3,uVar12,**(undefined4 **)(iRam03710b64 + 0x3710808));
  uVar5 = func_0x02965180(uVar4,0);
  if (uVar5 < 0xa5621015) {
    if (uVar5 < 0x775ef500) {
      if (uVar5 == 0x392d1efa) {
        iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710b8c + 0x3710994),0);
        uVar13 = iVar3 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar10 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x14);
LAB_03710a88:
          iVar2 = *(int *)(iVar10 + 4);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x024f83fc(iVar2);
          }
          piVar9 = (int *)0x0;
          if (piVar1 != (int *)0x0) {
            if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
               (piVar9 = piVar1,
               *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2))
            {
              piVar9 = (int *)0x0;
            }
          }
          return piVar9;
        }
      }
      else {
        bVar16 = 0x775ef4fe < uVar5;
        uVar13 = false;
        if (uVar5 == 0x775ef4ff) {
          iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710b68 + 0x3710864),0);
          uVar13 = iVar3 == 0;
          bVar16 = true;
          if (!(bool)uVar13) {
            iVar10 = *(int *)(iVar10 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x28);
            goto LAB_03710a88;
          }
        }
      }
    }
    else if (uVar5 == 0x8950c121) {
      iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710b78 + 0x37109ec),0);
      uVar13 = iVar3 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar10 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_03710a88;
      }
    }
    else if (uVar5 == 0xa4ebb130) {
      iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710b88 + 0x3710a18),0);
      uVar13 = iVar3 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar10 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x38);
        goto LAB_03710a88;
      }
    }
    else {
      bVar16 = 0xa5621013 < uVar5;
      uVar13 = false;
      if (uVar5 == 0xa5621014) {
        iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710b6c + 0x371090c),0);
        uVar13 = iVar3 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar10 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x30);
          goto LAB_03710a88;
        }
      }
    }
  }
  else if (uVar5 < 0xb9cd4293) {
    if (uVar5 == 0xb881e6cb) {
      iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710b84 + 0x37109c0),0);
      uVar13 = iVar3 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar10 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x34);
        goto LAB_03710a88;
      }
    }
    else {
      bVar16 = 0xb9cd4291 < uVar5;
      uVar13 = false;
      if (uVar5 == 0xb9cd4292) {
        iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710b70 + 0x37108b8),0);
        uVar13 = iVar3 == 0;
        bVar16 = true;
        if (!(bool)uVar13) {
          iVar10 = *(int *)(iVar10 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_03710a88;
        }
      }
    }
  }
  else if (uVar5 == 0xbafc2442) {
    iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710b80 + 0x3710a44),0);
    uVar13 = iVar3 == 0;
    bVar16 = true;
    if (!(bool)uVar13) {
      iVar10 = *(int *)(iVar10 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x2c);
      goto LAB_03710a88;
    }
  }
  else if (uVar5 == 0xc16fefa5) {
    iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710b7c + 0x3710a70),0);
    uVar13 = iVar3 == 0;
    bVar16 = true;
    if (!(bool)uVar13) {
      iVar10 = *(int *)(iVar10 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x24);
      goto LAB_03710a88;
    }
  }
  else {
    bVar16 = 0xec3691f0 < uVar5;
    uVar13 = false;
    if (uVar5 == 0xec3691f1) {
      iVar3 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710b74 + 0x3710968),0);
      uVar13 = iVar3 == 0;
      bVar16 = true;
      if (!(bool)uVar13) {
        iVar10 = *(int *)(iVar10 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x20);
        goto LAB_03710a88;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam03710b90 + 0x3710af0));
  uVar5 = func_0x024f83c8();
  uVar12 = func_0x024f83b8(*(undefined4 *)(iRam03710b94 + 0x3710b04));
  func_0x0509473c(uVar5,uVar12,uVar4,0,0);
  func_0x024f83c0(uVar5,iVar10);
  uVar19 = func_0x024f83bc();
  iVar2 = (int)((ulonglong)uVar19 >> 0x20);
  bVar17 = bVar16;
  if ((bool)uVar13) {
    bVar17 = (char *)0xffff97ff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x6800),(uint)bVar16);
  }
  bVar14 = (bool)uVar13 && unaff_r9 + bVar16 + 0x6800 == (char *)0x0;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xfffff3bf < uVar5 || CARRY4(uVar5 + 0xc40,(uint)bVar17);
  }
  bVar15 = false;
  bVar18 = bVar16;
  if (bVar14 && uVar5 + 0xc40 + (uint)bVar17 == 0) {
    bVar18 = 0xc3ffffff < uVar4 || CARRY4(uVar4 + 0x3c000000,(uint)bVar16);
    unaff_r9 = (char *)(uVar4 + 0x3c000000 + (uint)bVar16);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar18;
  if (bVar15) {
    bVar16 = 0xcbffffff < uVar4 || CARRY4(uVar4 + 0x34000000,(uint)bVar18);
    unaff_r9 = (char *)(uVar4 + 0x34000000 + (uint)bVar18);
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xd3ffffff < uVar4 || CARRY4(uVar4 + 0x2c000000,(uint)bVar16);
    unaff_r9 = (char *)(uVar4 + 0x2c000000 + (uint)bVar16);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xdbffffff < uVar4 || CARRY4(uVar4 + 0x24000000,(uint)bVar17);
    unaff_r9 = (char *)(uVar4 + 0x24000000 + (uint)bVar17);
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xe3ffffff < uVar4 || CARRY4(uVar4 + 0x1c000000,(uint)bVar16);
    unaff_r9 = (char *)(uVar4 + 0x1c000000 + (uint)bVar16);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xebffffff < uVar4 || CARRY4(uVar4 + 0x14000000,(uint)bVar17);
    unaff_r9 = (char *)(uVar4 + 0x14000000 + (uint)bVar17);
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xf3ffffff < uVar4 || CARRY4(uVar4 + 0xc000000,(uint)bVar16);
    unaff_r9 = (char *)(uVar4 + 0xc000000 + (uint)bVar16);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0xfbffffff < uVar4 || CARRY4(uVar4 + 0x4000000,(uint)bVar17);
    unaff_r9 = (char *)(uVar4 + 0x4000000 + (uint)bVar17);
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar15 = false;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xffffffc < uVar4 || CARRY4(uVar4 + 0xf0000003,(uint)bVar16);
    unaff_r9 = (char *)(uVar4 + 0xf0000003 + (uint)bVar16);
    bVar15 = unaff_r9 == (char *)0x0;
  }
  bVar14 = false;
  bVar16 = bVar17;
  if (bVar15) {
    bVar16 = 0x2ffffffc < uVar4 || CARRY4(uVar4 + 0xd0000003,(uint)bVar17);
    unaff_r9 = (char *)(uVar4 + 0xd0000003 + (uint)bVar17);
    bVar14 = unaff_r9 == (char *)0x0;
  }
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xfffffd7f < uVar5 || CARRY4(uVar5 + 0x280,(uint)bVar16);
  }
  bVar14 = bVar14 && uVar5 + 0x280 + (uint)bVar16 == 0;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = (char *)0xfffe0fff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x1f000),(uint)bVar17);
  }
  bVar14 = bVar14 && unaff_r9 + bVar17 + 0x1f000 == (char *)0x0;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0x7fffffff < uVar4 || CARRY4(uVar4 + 0x80000000,(uint)bVar16);
  }
  bVar14 = bVar14 && uVar4 + 0x80000000 + (uint)bVar16 == 0;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0x7ffffff9 < uVar4 || CARRY4(uVar4 + 0x80000006,(uint)bVar17);
  }
  bVar14 = bVar14 && uVar4 + 0x80000006 + (uint)bVar17 == 0;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xbffffff2 < uVar4 || CARRY4(uVar4 + 0x4000000d,(uint)bVar16);
  }
  bVar14 = bVar14 && uVar4 + 0x4000000d + (uint)bVar16 == 0;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xfffffffd < uVar4 || CARRY4(uVar4 + 2,(uint)bVar17);
  }
  bVar14 = bVar14 && uVar4 + 2 + (uint)bVar17 == 0;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xffffffde < uVar4 || CARRY4(uVar4 + 0x21,(uint)bVar16);
  }
  bVar14 = bVar14 && uVar4 + 0x21 + (uint)bVar16 == 0;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xfffffff7 < uVar4 || CARRY4(uVar4 + 8,(uint)bVar17);
  }
  bVar14 = bVar14 && uVar4 + 8 + (uint)bVar17 == 0;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xfffffff2 < uVar4 || CARRY4(uVar4 + 0xd,(uint)bVar16);
  }
  bVar14 = bVar14 && uVar4 + 0xd + (uint)bVar16 == 0;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xffffffca < uVar4 || CARRY4(uVar4 + 0x35,(uint)bVar17);
  }
  bVar14 = bVar14 && uVar4 + 0x35 + (uint)bVar17 == 0;
  bVar17 = bVar16;
  if (bVar14) {
    bVar17 = 0xffffffe5 < uVar4 || CARRY4(uVar4 + 0x1a,(uint)bVar16);
  }
  bVar14 = bVar14 && uVar4 + 0x1a + (uint)bVar16 == 0;
  bVar16 = bVar17;
  if (bVar14) {
    bVar16 = 0xffffffc5 < uVar4 || CARRY4(uVar4 + 0x3a,(uint)bVar17);
  }
  bVar15 = false;
  bVar18 = bVar16;
  if (bVar14 && uVar4 + 0x3a + (uint)bVar17 == 0) {
    bVar18 = 0xd9ffffff < uVar5 || CARRY4(uVar5 + 0x26000000,(uint)bVar16);
    uVar4 = uVar5 + 0x26000000 + (uint)bVar16;
    bVar15 = uVar4 == 0;
  }
  iVar10 = extraout_r2;
  if (bVar15) {
    iVar10 = uVar4 + 0xfc00000 + (uint)bVar18;
  }
  if (*(int *)(iVar10 + 0x1c) == 0) {
    func_0x024f83cc(*(undefined4 *)(_UNK_03710e60 + 0x3710bc0));
    func_0x024f83cc(*(undefined4 *)(_UNK_03710e64 + 0x3710bcc));
    func_0x024f83cc(*(undefined4 *)(_UNK_03710e68 + 0x3710bd8));
    func_0x024f83cc(*(undefined4 *)(_UNK_03710e6c + 0x3710be4));
    func_0x024f83cc(*(undefined4 *)(_UNK_03710e70 + 0x3710bf0));
    if (*(int *)(iVar10 + 0x1c) == 0) {
      func_0x024f83f8(iVar10);
    }
  }
  if (*(int *)(**(int **)(_UNK_03710e74 + 0x3710c10) + 0x74) == 0) {
    func_0x024f83d8();
  }
  piVar1 = (int *)0x0;
  iVar3 = func_0x024ef144(iVar2,0,0);
  if (iVar3 != 0) {
    if (iVar2 == 0) {
      func_0x024f83d4();
    }
    piVar1 = (int *)func_0x03639de0(iVar2,**(undefined4 **)(iVar10 + 0x1c));
    if (piVar1 == (int *)0x0) {
      piVar9 = (int *)func_0x024f8400(**(undefined4 **)(_UNK_03710e78 + 0x3710c74),3);
      if ((int)uVar19 == 0) {
        func_0x024f83d4();
      }
      piVar1 = (int *)func_0x051b16a4((int)uVar19,0);
      if (piVar1 == (int *)0x0) {
        func_0x024f83d4();
      }
      iVar3 = (**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
      if (piVar9 == (int *)0x0) {
        func_0x024f83d4();
      }
      if ((iVar3 != 0) &&
         (iVar6 = func_0x024f83e4(iVar3,*(undefined4 *)(*piVar9 + 0x20)), iVar6 == 0)) {
        uVar12 = func_0x024f83e8();
        func_0x024f83c0(uVar12,0);
      }
      if (piVar9[3] == 0) {
        func_0x024f83ec();
      }
      piVar9[4] = iVar3;
      func_0x024f83f0(piVar9 + 4,iVar3);
      if (iVar2 == 0) {
        func_0x024f83d4();
      }
      iVar2 = func_0x024ef0f0(iVar2,0);
      if ((iVar2 != 0) &&
         (iVar3 = func_0x024f83e4(iVar2,*(undefined4 *)(*piVar9 + 0x20)), iVar3 == 0)) {
        uVar12 = func_0x024f83e8();
        func_0x024f83c0(uVar12,0);
      }
      if ((uint)piVar9[3] < 2) {
        func_0x024f83ec();
      }
      piVar9[5] = iVar2;
      func_0x024f83f0(piVar9 + 5,iVar2);
      uVar12 = *(undefined4 *)(*(int *)(iVar10 + 0x1c) + 8);
      if (*(int *)(**(int **)(_UNK_03710e7c + 0x3710d8c) + 0x74) == 0) {
        func_0x024f83d8();
      }
      piVar1 = (int *)func_0x05171434(uVar12,0);
      if (piVar1 == (int *)0x0) {
        func_0x024f83d4();
      }
      iVar2 = (**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
      if ((iVar2 != 0) &&
         (iVar10 = func_0x024f83e4(iVar2,*(undefined4 *)(*piVar9 + 0x20)), iVar10 == 0)) {
        uVar12 = func_0x024f83e8();
        func_0x024f83c0(uVar12,0);
      }
      if ((uint)piVar9[3] < 3) {
        func_0x024f83ec();
      }
      piVar9[6] = iVar2;
      func_0x024f83f0(piVar9 + 6,iVar2);
      if (*(int *)(**(int **)(_UNK_03710e80 + 0x3710e2c) + 0x74) == 0) {
        func_0x024f83d8();
      }
      piVar1 = (int *)0x0;
      func_0x026795f8(**(undefined4 **)(_UNK_03710e84 + 0x3710e54),piVar9,0);
    }
  }
  return piVar1;
}

