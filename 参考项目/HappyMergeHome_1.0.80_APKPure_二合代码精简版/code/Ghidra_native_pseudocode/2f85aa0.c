
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_02f95aa0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int extraout_r2;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  char *pcVar13;
  undefined4 uVar14;
  int iVar15;
  char *unaff_r9;
  char *unaff_r11;
  undefined1 uVar16;
  bool bVar17;
  bool bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  undefined8 uVar22;
  char *pcStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char *pcStack_38;
  char *pcStack_34;
  char *pcStack_30;
  undefined4 uStack_2c;
  char *pcStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar13 = (char *)(_UNK_02f95b80 + 0x2f95ab4);
  if (*pcVar13 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f95b84 + 0x2f95ac8));
    func_0x01438628(*(undefined4 *)(_UNK_02f95b88 + 0x2f95ad4));
    func_0x01438628(*(undefined4 *)(_UNK_02f95b8c + 0x2f95ae0));
    *pcVar13 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x14ed,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x14ed,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar13 = (char *)(_UNK_028a48f4 + 0x28a4814);
    if (*pcVar13 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a48f8 + 0x28a4828),param_1,0);
      *pcVar13 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    pcStack_28 = *(char **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    pcStack_30 = (char *)0x0;
    uStack_20 = 0;
    func_0x024f56c0(&pcStack_48,0);
    pcStack_30 = pcStack_48;
    uStack_2c = uStack_44;
    pcStack_28 = (char *)uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = pcStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&pcStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&pcStack_30,param_1,0);
    iVar12 = *(int *)(iVar2 + 8);
    uVar14 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar12 == 0) {
      func_0x014388e4();
    }
    uVar10 = 2;
    if (iVar2 == 0) {
      uVar10 = 1;
    }
    func_0x024f56d0(iVar12,uVar14,&pcStack_30,uVar10,0,0);
    piVar1 = (int *)func_0x035daef8(&pcStack_30,0,**(undefined4 **)(_UNK_028a48fc + 0x28a48e4));
    return piVar1;
  }
  if (*(int *)(**(int **)(_UNK_02f95b90 + 0x2f95b38) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02f95b94 + 0x2f95b54));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar13 = (char *)**(undefined4 **)(_UNK_02f95b98 + 0x2f95b74);
  puVar9 = *(undefined4 **)(pcVar13 + 0x1c);
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
    puVar9 = *(undefined4 **)(pcVar13 + 0x1c);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x024f83f8(pcVar13);
      puVar9 = *(undefined4 **)(pcVar13 + 0x1c);
    }
  }
  uVar14 = *puVar9;
  iVar12 = *(int *)(iVar2 + 0x44);
  if (*(int *)(**(int **)(iRam0370f034 + 0x370ec18) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar14 = func_0x05171434(uVar14,0);
  if (iVar12 == 0) {
    func_0x024f83d4();
  }
  pcVar3 = (char *)func_0x0475399c(iVar12,uVar14,**(undefined4 **)(iRam0370f038 + 0x370ec5c));
  uVar4 = func_0x02965180(pcVar3,0);
  if (uVar4 < 0xa9d6e18d) {
    if (uVar4 < 0x5470985c) {
      if (uVar4 == 0x2ff386a5) {
        iVar12 = func_0x04f57738(pcVar3,**(undefined4 **)(iRam0370f058 + 0x370ee08),0);
        uVar16 = iVar12 == 0;
        bVar19 = true;
        if (!(bool)uVar16) {
          iVar12 = *(int *)(pcVar13 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x2c);
LAB_0370ef54:
          iVar2 = *(int *)(iVar12 + 4);
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
      else if (uVar4 == 0x422e10b8) {
        iVar12 = func_0x04f57738(pcVar3,**(undefined4 **)(iRam0370f060 + 0x370ee34),0);
        uVar16 = iVar12 == 0;
        bVar19 = true;
        if (!(bool)uVar16) {
          iVar12 = *(int *)(pcVar13 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x34);
          goto LAB_0370ef54;
        }
      }
      else {
        bVar19 = 0x5470985a < uVar4;
        uVar16 = false;
        if (uVar4 == 0x5470985b) {
          iVar12 = func_0x04f57738(pcVar3,**(undefined4 **)(iRam0370f03c + 0x370ecc8),0);
          uVar16 = iVar12 == 0;
          bVar19 = true;
          if (!(bool)uVar16) {
            iVar12 = *(int *)(pcVar13 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x18);
            goto LAB_0370ef54;
          }
        }
      }
    }
    else if (uVar4 == 0x822195a3) {
      iVar12 = func_0x04f57738(pcVar3,**(undefined4 **)(iRam0370f068 + 0x370eeb8),0);
      uVar16 = iVar12 == 0;
      bVar19 = true;
      if (!(bool)uVar16) {
        iVar12 = *(int *)(pcVar13 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x14);
        goto LAB_0370ef54;
      }
    }
    else if (uVar4 == 0x9bda6746) {
      iVar12 = func_0x04f57738(pcVar3,**(undefined4 **)(iRam0370f050 + 0x370eee4),0);
      uVar16 = iVar12 == 0;
      bVar19 = true;
      if (!(bool)uVar16) {
        iVar12 = *(int *)(pcVar13 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x24);
        goto LAB_0370ef54;
      }
    }
    else {
      bVar19 = 0xa9d6e18b < uVar4;
      uVar16 = false;
      if (uVar4 == 0xa9d6e18c) {
        iVar12 = func_0x04f57738(pcVar3,**(undefined4 **)(iRam0370f040 + 0x370ed80),0);
        uVar16 = iVar12 == 0;
        bVar19 = true;
        if (!(bool)uVar16) {
          iVar12 = *(int *)(pcVar13 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x38);
          goto LAB_0370ef54;
        }
      }
    }
  }
  else if (uVar4 < 0xc5b76eff) {
    if (uVar4 == 0xadbdc4cd) {
      iVar12 = func_0x04f57738(pcVar3,**(undefined4 **)(iRam0370f05c + 0x370ee60),0);
      uVar16 = iVar12 == 0;
      bVar19 = true;
      if (!(bool)uVar16) {
        iVar12 = *(int *)(pcVar13 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x30);
        goto LAB_0370ef54;
      }
    }
    else if (uVar4 == 0xbfd53dc1) {
      iVar12 = func_0x04f57738(pcVar3,**(undefined4 **)(iRam0370f04c + 0x370ee8c),0);
      uVar16 = iVar12 == 0;
      bVar19 = true;
      if (!(bool)uVar16) {
        iVar12 = *(int *)(pcVar13 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x1c);
        goto LAB_0370ef54;
      }
    }
    else {
      bVar19 = 0xc5b76efd < uVar4;
      uVar16 = false;
      if (uVar4 == 0xc5b76efe) {
        iVar12 = func_0x04f57738(pcVar3,**(undefined4 **)(iRam0370f044 + 0x370ed2c),0);
        uVar16 = iVar12 == 0;
        bVar19 = true;
        if (!(bool)uVar16) {
          iVar12 = *(int *)(pcVar13 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x3c);
          goto LAB_0370ef54;
        }
      }
    }
  }
  else if (uVar4 == 0xc64b975c) {
    iVar12 = func_0x04f57738(pcVar3,**(undefined4 **)(iRam0370f054 + 0x370ef10),0);
    uVar16 = iVar12 == 0;
    bVar19 = true;
    if (!(bool)uVar16) {
      iVar12 = *(int *)(pcVar13 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x28);
      goto LAB_0370ef54;
    }
  }
  else if (uVar4 == 0xef2136b6) {
    iVar12 = func_0x04f57738(pcVar3,**(undefined4 **)(iRam0370f064 + 0x370ef3c),0);
    uVar16 = iVar12 == 0;
    bVar19 = true;
    if (!(bool)uVar16) {
      iVar12 = *(int *)(pcVar13 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x40);
      goto LAB_0370ef54;
    }
  }
  else {
    bVar19 = 0xfdb518b9 < uVar4;
    uVar16 = false;
    if (uVar4 == 0xfdb518ba) {
      iVar12 = func_0x04f57738(pcVar3,**(undefined4 **)(iRam0370f048 + 0x370eddc),0);
      uVar16 = iVar12 == 0;
      bVar19 = true;
      if (!(bool)uVar16) {
        iVar12 = *(int *)(pcVar13 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x20);
        goto LAB_0370ef54;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam0370f06c + 0x370efbc));
  pcVar5 = (char *)func_0x024f83c8();
  uVar10 = func_0x024f83b8(*(undefined4 *)(iRam0370f070 + 0x370efd0));
  uStack_20 = 0;
  func_0x0509473c(pcVar5,uVar10,pcVar3,0);
  func_0x024f83c0(pcVar5,pcVar13);
  uVar22 = func_0x024f83bc();
  iVar12 = (int)((ulonglong)uVar22 >> 0x20);
  iVar2 = (int)uVar22;
  bVar17 = false;
  bVar20 = bVar19;
  if ((bool)uVar16) {
    bVar20 = (char *)0xffd3ffff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x2c0000),(uint)bVar19);
    pcVar5 = unaff_r9 + bVar19 + 0x2c0000;
    bVar17 = pcVar5 == (char *)0x0;
  }
  bVar18 = false;
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = (char *)0xfff77fff < pcVar5 || CARRY4((uint)(pcVar5 + 0x88000),(uint)bVar20);
    pcVar3 = pcVar5 + bVar20 + 0x88000;
    bVar18 = pcVar3 == (char *)0x0;
  }
  bVar17 = false;
  bVar20 = bVar19;
  if (bVar18) {
    bVar20 = (char *)0xffffffcd < pcVar3 || CARRY4((uint)(pcVar3 + 0x32),(uint)bVar19);
    unaff_r11 = pcVar3 + bVar19 + 0x32;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar18 = false;
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = (char *)0xffffffcf < pcVar3 || CARRY4((uint)(pcVar3 + 0x30),(uint)bVar20);
    unaff_r11 = pcVar3 + bVar20 + 0x30;
    bVar18 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar20 = bVar19;
  if (bVar18) {
    bVar20 = (char *)0xffffffd1 < pcVar3 || CARRY4((uint)(pcVar3 + 0x2e),(uint)bVar19);
    unaff_r11 = pcVar3 + bVar19 + 0x2e;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar18 = false;
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = (char *)0xffffffd3 < pcVar3 || CARRY4((uint)(pcVar3 + 0x2c),(uint)bVar20);
    unaff_r11 = pcVar3 + bVar20 + 0x2c;
    bVar18 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar20 = bVar19;
  if (bVar18) {
    bVar20 = (char *)0xffffffd5 < pcVar3 || CARRY4((uint)(pcVar3 + 0x2a),(uint)bVar19);
    unaff_r11 = pcVar3 + bVar19 + 0x2a;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar18 = false;
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = (char *)0xffffffd7 < pcVar3 || CARRY4((uint)(pcVar3 + 0x28),(uint)bVar20);
    unaff_r11 = pcVar3 + bVar20 + 0x28;
    bVar18 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar20 = bVar19;
  if (bVar18) {
    bVar20 = (char *)0xffffffd9 < pcVar3 || CARRY4((uint)(pcVar3 + 0x26),(uint)bVar19);
    unaff_r11 = pcVar3 + bVar19 + 0x26;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar18 = false;
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = (char *)0xffffffdb < pcVar3 || CARRY4((uint)(pcVar3 + 0x24),(uint)bVar20);
    unaff_r11 = pcVar3 + bVar20 + 0x24;
    bVar18 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar20 = bVar19;
  if (bVar18) {
    bVar20 = (char *)0xffffffdd < pcVar3 || CARRY4((uint)(pcVar3 + 0x22),(uint)bVar19);
    unaff_r11 = pcVar3 + bVar19 + 0x22;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar18 = false;
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = (char *)0xffffffdf < pcVar3 || CARRY4((uint)(pcVar3 + 0x20),(uint)bVar20);
    unaff_r11 = pcVar3 + bVar20 + 0x20;
    bVar18 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar20 = bVar19;
  if (bVar18) {
    bVar20 = (char *)0xffffffe1 < pcVar3 || CARRY4((uint)(pcVar3 + 0x1e),(uint)bVar19);
    unaff_r11 = pcVar3 + bVar19 + 0x1e;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar18 = false;
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = (char *)0xffffffe3 < pcVar3 || CARRY4((uint)(pcVar3 + 0x1c),(uint)bVar20);
    unaff_r11 = pcVar3 + bVar20 + 0x1c;
    bVar18 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar20 = bVar19;
  if (bVar18) {
    bVar20 = (char *)0xffcaffff < pcVar5 || CARRY4((uint)(pcVar5 + 0x350000),(uint)bVar19);
    pcVar3 = pcVar5 + bVar19 + 0x350000;
    bVar17 = pcVar3 == (char *)0x0;
  }
  bVar18 = false;
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = (char *)0xff5fffff < unaff_r9 ||
             CARRY4((uint)(&UNK_00a00000 + (int)unaff_r9),(uint)bVar20);
    pcVar5 = &UNK_00a00000 + (int)(unaff_r9 + bVar20);
    bVar18 = pcVar5 == (char *)0x0;
  }
  bVar17 = false;
  bVar20 = bVar19;
  if (bVar18) {
    bVar20 = (char *)0xffffff87 < pcVar3 || CARRY4((uint)(pcVar3 + 0x78),(uint)bVar19);
    unaff_r11 = pcVar3 + bVar19 + 0x78;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = (char *)0xfffffcbf < pcVar3 || CARRY4((uint)(pcVar3 + 0x340),(uint)bVar20);
  }
  bVar18 = false;
  bVar21 = bVar19;
  if (bVar17 && pcVar3 + bVar20 + 0x340 == (char *)0x0) {
    bVar21 = (char *)0xffffffef < pcVar3 || CARRY4((uint)(pcVar3 + 0x10),(uint)bVar19);
    unaff_r11 = pcVar3 + bVar19 + 0x10;
    bVar18 = unaff_r11 == (char *)0x0;
  }
  bVar19 = bVar21;
  if (bVar18) {
    bVar19 = (char *)0xfffffe4f < pcVar3 || CARRY4((uint)(pcVar3 + 0x1b0),(uint)bVar21);
  }
  bVar18 = bVar18 && pcVar3 + bVar21 + 0x1b0 == (char *)0x0;
  bVar20 = bVar19;
  if (bVar18) {
    bVar20 = (char *)0xfffff2ff < pcVar3 || CARRY4((uint)(pcVar3 + 0xd00),(uint)bVar19);
  }
  bVar18 = bVar18 && pcVar3 + bVar19 + 0xd00 == (char *)0x0;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = (char *)0xfffff8bf < pcVar3 || CARRY4((uint)(pcVar3 + 0x740),(uint)bVar20);
  }
  bVar18 = bVar18 && pcVar3 + bVar20 + 0x740 == (char *)0x0;
  bVar20 = bVar19;
  if (bVar18) {
    bVar20 = (char *)0xfffffaff < pcVar3 || CARRY4((uint)(pcVar3 + 0x500),(uint)bVar19);
  }
  bVar18 = bVar18 && pcVar3 + bVar19 + 0x500 == (char *)0x0;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = (char *)0xffffff3f < pcVar3 || CARRY4((uint)(pcVar3 + 0xc0),(uint)bVar20);
  }
  bVar18 = bVar18 && pcVar3 + bVar20 + 0xc0 == (char *)0x0;
  bVar20 = bVar19;
  if (bVar18) {
    bVar20 = (char *)0xffffffef < pcVar3 || CARRY4((uint)(pcVar3 + 0x10),(uint)bVar19);
  }
  bVar18 = bVar18 && pcVar3 + bVar19 + 0x10 == (char *)0x0;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = (char *)0xffffff7f < pcVar3 || CARRY4((uint)(pcVar3 + 0x80),(uint)bVar20);
  }
  bVar18 = bVar18 && pcVar3 + bVar20 + 0x80 == (char *)0x0;
  bVar20 = bVar19;
  if (bVar18) {
    bVar20 = (char *)0xfffffeff < pcVar3 || CARRY4((uint)(pcVar3 + 0x100),(uint)bVar19);
  }
  bVar18 = bVar18 && pcVar3 + bVar19 + 0x100 == (char *)0x0;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = (char *)0xfffff73f < pcVar3 || CARRY4((uint)(pcVar3 + 0x8c0),(uint)bVar20);
  }
  bVar18 = bVar18 && pcVar3 + bVar20 + 0x8c0 == (char *)0x0;
  bVar20 = bVar19;
  if (bVar18) {
    bVar20 = (char *)0xffffff33 < pcVar5 || CARRY4((uint)(pcVar5 + 0xcc),(uint)bVar19);
  }
  if (bVar18 && pcVar5 + bVar19 + 0xcc == (char *)0x0) {
    pcVar13 = pcVar3 + bVar20 + 3;
  }
  uStack_24 = 0x370effc;
  puVar9 = *(undefined4 **)(iVar12 + 0x1c);
  pcStack_38 = pcVar13;
  pcStack_34 = pcVar5;
  pcStack_30 = pcVar3;
  uStack_2c = uVar14;
  pcStack_28 = unaff_r11;
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
    puVar9 = *(undefined4 **)(iVar12 + 0x1c);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar12);
      puVar9 = *(undefined4 **)(iVar12 + 0x1c);
    }
  }
  uVar14 = *puVar9;
  iVar15 = *(int *)(iVar2 + 0x44);
  if (*(int *)(**(int **)(iRam0370f578 + 0x370f15c) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar14 = func_0x05171434(uVar14,0);
  if (iVar15 == 0) {
    func_0x024f83d4();
  }
  uVar14 = func_0x0475399c(iVar15,uVar14,**(undefined4 **)(iRam0370f57c + 0x370f1a0));
  uVar4 = func_0x02965180(uVar14,0);
  if (uVar4 < 0xa9d6e18d) {
    if (uVar4 < 0x5470985c) {
      if (uVar4 == 0x2ff386a5) {
        iVar15 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f59c + 0x370f34c),0);
        if (iVar15 != 0) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x2c);
          goto LAB_0370f498;
        }
      }
      else if (uVar4 == 0x422e10b8) {
        iVar15 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f5a4 + 0x370f378),0);
        if (iVar15 != 0) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x34);
          goto LAB_0370f498;
        }
      }
      else if ((uVar4 == 0x5470985b) &&
              (iVar15 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f580 + 0x370f20c),0),
              iVar15 != 0)) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
LAB_0370f498:
        iVar2 = *(int *)(iVar12 + 4);
        if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = func_0x024f83fc(iVar2);
        }
        piVar11 = (int *)0x0;
        if (piVar1 != (int *)0x0) {
          if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
             (piVar11 = piVar1,
             *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2)) {
            piVar11 = (int *)0x0;
          }
        }
        return piVar11;
      }
    }
    else if (uVar4 == 0x822195a3) {
      iVar15 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f5ac + 0x370f3fc),0);
      if (iVar15 != 0) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x14);
        goto LAB_0370f498;
      }
    }
    else if (uVar4 == 0x9bda6746) {
      iVar15 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f594 + 0x370f428),0);
      if (iVar15 != 0) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x24);
        goto LAB_0370f498;
      }
    }
    else if ((uVar4 == 0xa9d6e18c) &&
            (iVar15 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f584 + 0x370f2c4),0),
            iVar15 != 0)) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x38);
      goto LAB_0370f498;
    }
  }
  else if (uVar4 < 0xc5b76eff) {
    if (uVar4 == 0xadbdc4cd) {
      iVar15 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f5a0 + 0x370f3a4),0);
      if (iVar15 != 0) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x30);
        goto LAB_0370f498;
      }
    }
    else if (uVar4 == 0xbfd53dc1) {
      iVar15 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f590 + 0x370f3d0),0);
      if (iVar15 != 0) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x1c);
        goto LAB_0370f498;
      }
    }
    else if ((uVar4 == 0xc5b76efe) &&
            (iVar15 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f588 + 0x370f270),0),
            iVar15 != 0)) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x3c);
      goto LAB_0370f498;
    }
  }
  else if (uVar4 == 0xc64b975c) {
    iVar15 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f598 + 0x370f454),0);
    if (iVar15 != 0) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x28);
      goto LAB_0370f498;
    }
  }
  else if (uVar4 == 0xef2136b6) {
    iVar15 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f5a8 + 0x370f480),0);
    if (iVar15 != 0) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x40);
      goto LAB_0370f498;
    }
  }
  else if ((uVar4 == 0xfdb518ba) &&
          (iVar15 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f58c + 0x370f320),0),
          iVar15 != 0)) {
    iVar12 = *(int *)(iVar12 + 0x1c);
    piVar1 = *(int **)(iVar2 + 0x20);
    goto LAB_0370f498;
  }
  func_0x024f83b8(*(undefined4 *)(iRam0370f5b0 + 0x370f500));
  uVar10 = func_0x024f83c8();
  uVar6 = func_0x024f83b8(*(undefined4 *)(iRam0370f5b4 + 0x370f514));
  uStack_40 = 0;
  func_0x0509473c(uVar10,uVar6,uVar14,0);
  func_0x024f83c0(uVar10,iVar12);
  uVar22 = func_0x024f83bc();
  iVar12 = (int)((ulonglong)uVar22 >> 0x20);
  iVar2 = (int)uVar22;
  uStack_44 = 0x370f540;
  puVar9 = *(undefined4 **)(iVar12 + 0x1c);
  pcStack_48 = unaff_r11;
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
    puVar9 = *(undefined4 **)(iVar12 + 0x1c);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar12);
      puVar9 = *(undefined4 **)(iVar12 + 0x1c);
    }
  }
  uVar14 = *puVar9;
  iVar15 = *(int *)(iVar2 + 0x50);
  if (*(int *)(**(int **)(iRam0370fbb8 + 0x370f6c4) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar14 = func_0x05171434(uVar14,0);
  if (iVar15 == 0) {
    func_0x024f83d4();
  }
  uVar4 = func_0x0475399c(iVar15,uVar14,**(undefined4 **)(iRam0370fbbc + 0x370f708));
  uVar7 = func_0x02965180(uVar4,0);
  if (uVar7 < 0x35a83e7c) {
    if (uVar7 < 0x1f222a57) {
      if (uVar7 == 0x11e4781a) {
        iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbec + 0x370f980),0);
        if (iVar15 != 0) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x34);
          goto LAB_0370facc;
        }
      }
      else if (uVar7 == 0x1c7b49cc) {
        iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbf4 + 0x370f9ac),0);
        if (iVar15 != 0) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x48);
          goto LAB_0370facc;
        }
      }
      else if ((uVar7 == 0x1f222a56) &&
              (iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbc0 + 0x370f774),0),
              iVar15 != 0)) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x40);
LAB_0370facc:
        iVar2 = *(int *)(iVar12 + 4);
        if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = func_0x024f83fc(iVar2);
        }
        piVar11 = (int *)0x0;
        if (piVar1 != (int *)0x0) {
          if (((uint)*(byte *)(iVar2 + 0xb8) <= (uint)*(byte *)(*piVar1 + 0xb8)) &&
             (piVar11 = piVar1,
             *(int *)(*(int *)(*piVar1 + 100) + (uint)*(byte *)(iVar2 + 0xb8) * 4 + -4) != iVar2)) {
            piVar11 = (int *)0x0;
          }
        }
        return piVar11;
      }
    }
    else if (uVar7 < 0x24f24770) {
      if (uVar7 == 0x22d6d693) {
        iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbe0 + 0x370fa04),0);
        if (iVar15 != 0) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_0370facc;
        }
      }
      else if ((uVar7 == 0x24f2476f) &&
              (iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbc4 + 0x370f82c),0),
              iVar15 != 0)) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x38);
        goto LAB_0370facc;
      }
    }
    else if (uVar7 == 0x297b851e) {
      iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbf0 + 0x370fa88),0);
      if (iVar15 != 0) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x44);
        goto LAB_0370facc;
      }
    }
    else if ((uVar7 == 0x35a83e7b) &&
            (iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbc8 + 0x370f908),0),
            iVar15 != 0)) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x3c);
      goto LAB_0370facc;
    }
  }
  else if (uVar7 < 0x9e742f05) {
    if (uVar7 < 0x42250021) {
      if (uVar7 == 0x3ff3d659) {
        iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbf8 + 0x370f9d8),0);
        if (iVar15 != 0) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x14);
          goto LAB_0370facc;
        }
      }
      else if ((uVar7 == 0x42250020) &&
              (iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbcc + 0x370f7d8),0),
              iVar15 != 0)) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x20);
        goto LAB_0370facc;
      }
    }
    else if (uVar7 == 0x8f22eb81) {
      iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbdc + 0x370fa5c),0);
      if (iVar15 != 0) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_0370facc;
      }
    }
    else if ((uVar7 == 0x9e742f04) &&
            (iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbd0 + 0x370f8c4),0),
            iVar15 != 0)) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x4c);
      goto LAB_0370facc;
    }
  }
  else if (uVar7 < 0xb5cc8887) {
    if (uVar7 == 0xb4cc86f3) {
      iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbe4 + 0x370fa30),0);
      if (iVar15 != 0) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x24);
        goto LAB_0370facc;
      }
    }
    else if ((uVar7 == 0xb5cc8886) &&
            (iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbd4 + 0x370f880),0),
            iVar15 != 0)) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x28);
      goto LAB_0370facc;
    }
  }
  else if (uVar7 == 0xb6cc8a19) {
    iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbe8 + 0x370fab4),0);
    if (iVar15 != 0) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x2c);
      goto LAB_0370facc;
    }
  }
  else if ((uVar7 == 0xb7cc8bac) &&
          (iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0370fbd8 + 0x370f954),0),
          iVar15 != 0)) {
    iVar12 = *(int *)(iVar12 + 0x1c);
    piVar1 = *(int **)(iVar2 + 0x30);
    goto LAB_0370facc;
  }
  func_0x024f83b8(*(undefined4 *)(iRam0370fbfc + 0x370fb34));
  uVar7 = func_0x024f83c8();
  uVar14 = func_0x024f83b8(*(undefined4 *)(iRam0370fc00 + 0x370fb48));
  func_0x0509473c(uVar7,uVar14,uVar4,0,0);
  func_0x024f83c0(uVar7,iVar12);
  uVar22 = func_0x024f83bc();
  iVar12 = (int)((ulonglong)uVar22 >> 0x20);
  iVar2 = (int)uVar22;
  puVar9 = *(undefined4 **)(iVar12 + 0x1c);
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
    puVar9 = *(undefined4 **)(iVar12 + 0x1c);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar12);
      puVar9 = *(undefined4 **)(iVar12 + 0x1c);
    }
  }
  uVar14 = *puVar9;
  iVar15 = *(int *)(iVar2 + 0x50);
  if (*(int *)(**(int **)(iRam03710204 + 0x370fd10) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar14 = func_0x05171434(uVar14,0);
  if (iVar15 == 0) {
    func_0x024f83d4();
  }
  uVar4 = func_0x0475399c(iVar15,uVar14,**(undefined4 **)(iRam03710208 + 0x370fd54));
  uVar7 = func_0x02965180(uVar4,0);
  if (uVar7 < 0x35a83e7c) {
    if (uVar7 < 0x1f222a57) {
      if (uVar7 == 0x11e4781a) {
        iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710238 + 0x370ffcc),0);
        uVar16 = iVar15 == 0;
        bVar19 = true;
        if (!(bool)uVar16) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x34);
LAB_03710118:
          iVar2 = *(int *)(iVar12 + 4);
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
      else if (uVar7 == 0x1c7b49cc) {
        iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710240 + 0x370fff8),0);
        uVar16 = iVar15 == 0;
        bVar19 = true;
        if (!(bool)uVar16) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x48);
          goto LAB_03710118;
        }
      }
      else {
        bVar19 = 0x1f222a55 < uVar7;
        uVar16 = false;
        if (uVar7 == 0x1f222a56) {
          iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0371020c + 0x370fdc0),0);
          uVar16 = iVar15 == 0;
          bVar19 = true;
          if (!(bool)uVar16) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x40);
            goto LAB_03710118;
          }
        }
      }
    }
    else if (uVar7 < 0x24f24770) {
      if (uVar7 == 0x22d6d693) {
        iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0371022c + 0x3710050),0);
        uVar16 = iVar15 == 0;
        bVar19 = true;
        if (!(bool)uVar16) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_03710118;
        }
      }
      else {
        bVar19 = 0x24f2476e < uVar7;
        uVar16 = false;
        if (uVar7 == 0x24f2476f) {
          iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710210 + 0x370fe78),0);
          uVar16 = iVar15 == 0;
          bVar19 = true;
          if (!(bool)uVar16) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x38);
            goto LAB_03710118;
          }
        }
      }
    }
    else if (uVar7 == 0x297b851e) {
      iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0371023c + 0x37100d4),0);
      uVar16 = iVar15 == 0;
      bVar19 = true;
      if (!(bool)uVar16) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x44);
        goto LAB_03710118;
      }
    }
    else {
      bVar19 = 0x35a83e7a < uVar7;
      uVar16 = false;
      if (uVar7 == 0x35a83e7b) {
        iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710214 + 0x370ff54),0);
        uVar16 = iVar15 == 0;
        bVar19 = true;
        if (!(bool)uVar16) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x3c);
          goto LAB_03710118;
        }
      }
    }
  }
  else if (uVar7 < 0x9e742f05) {
    if (uVar7 < 0x42250021) {
      if (uVar7 == 0x3ff3d659) {
        iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710244 + 0x3710024),0);
        uVar16 = iVar15 == 0;
        bVar19 = true;
        if (!(bool)uVar16) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x14);
          goto LAB_03710118;
        }
      }
      else {
        bVar19 = 0x4225001f < uVar7;
        uVar16 = false;
        if (uVar7 == 0x42250020) {
          iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710218 + 0x370fe24),0);
          uVar16 = iVar15 == 0;
          bVar19 = true;
          if (!(bool)uVar16) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x20);
            goto LAB_03710118;
          }
        }
      }
    }
    else if (uVar7 == 0x8f22eb81) {
      iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710228 + 0x37100a8),0);
      uVar16 = iVar15 == 0;
      bVar19 = true;
      if (!(bool)uVar16) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_03710118;
      }
    }
    else {
      bVar19 = 0x9e742f03 < uVar7;
      uVar16 = false;
      if (uVar7 == 0x9e742f04) {
        iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam0371021c + 0x370ff10),0);
        uVar16 = iVar15 == 0;
        bVar19 = true;
        if (!(bool)uVar16) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x4c);
          goto LAB_03710118;
        }
      }
    }
  }
  else if (uVar7 < 0xb5cc8887) {
    if (uVar7 == 0xb4cc86f3) {
      iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710230 + 0x371007c),0);
      uVar16 = iVar15 == 0;
      bVar19 = true;
      if (!(bool)uVar16) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x24);
        goto LAB_03710118;
      }
    }
    else {
      bVar19 = 0xb5cc8885 < uVar7;
      uVar16 = false;
      if (uVar7 == 0xb5cc8886) {
        iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710220 + 0x370fecc),0);
        uVar16 = iVar15 == 0;
        bVar19 = true;
        if (!(bool)uVar16) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x28);
          goto LAB_03710118;
        }
      }
    }
  }
  else if (uVar7 == 0xb6cc8a19) {
    iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710234 + 0x3710100),0);
    uVar16 = iVar15 == 0;
    bVar19 = true;
    if (!(bool)uVar16) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x2c);
      goto LAB_03710118;
    }
  }
  else {
    bVar19 = 0xb7cc8bab < uVar7;
    uVar16 = false;
    if (uVar7 == 0xb7cc8bac) {
      iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710224 + 0x370ffa0),0);
      uVar16 = iVar15 == 0;
      bVar19 = true;
      if (!(bool)uVar16) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x30);
        goto LAB_03710118;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam03710248 + 0x3710180));
  uVar7 = func_0x024f83c8();
  uVar14 = func_0x024f83b8(*(undefined4 *)(iRam0371024c + 0x3710194));
  func_0x0509473c(uVar7,uVar14,uVar4,0,0);
  func_0x024f83c0(uVar7,iVar12);
  uVar22 = func_0x024f83bc();
  iVar12 = (int)((ulonglong)uVar22 >> 0x20);
  iVar2 = (int)uVar22;
  bVar20 = bVar19;
  if ((bool)uVar16) {
    bVar20 = (char *)0xfe9fffff < unaff_r9 ||
             CARRY4((uint)(&UNK_01600000 + (int)unaff_r9),(uint)bVar19);
  }
  bVar17 = false;
  bVar21 = bVar20;
  if ((bool)uVar16 && &UNK_01600000 + (int)(unaff_r9 + bVar19) == (undefined *)0x0) {
    bVar21 = 0xffd2ffff < uVar7 || CARRY4(uVar7 + 0x2d0000,(uint)bVar20);
    uVar7 = uVar7 + 0x2d0000 + (uint)bVar20;
    bVar17 = uVar7 == 0;
  }
  bVar19 = bVar21;
  if (bVar17) {
    bVar19 = 0xffffffe7 < uVar4 || CARRY4(uVar4 + 0x18,(uint)bVar21);
  }
  bVar17 = bVar17 && uVar4 + 0x18 + (uint)bVar21 == 0;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xffffffef < uVar4 || CARRY4(uVar4 + 0x10,(uint)bVar19);
  }
  bVar17 = bVar17 && uVar4 + 0x10 + (uint)bVar19 == 0;
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = 0xfffffff7 < uVar4 || CARRY4(uVar4 + 8,(uint)bVar20);
  }
  bVar17 = bVar17 && uVar4 + 8 + (uint)bVar20 == 0;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = CARRY4(uVar4,(uint)bVar19);
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar17 && uVar4 + bVar19 == 0) {
    bVar21 = 0xfffffc1f < uVar4 || CARRY4(uVar4 + 0x3e0,(uint)bVar20);
    unaff_r9 = (char *)(uVar4 + 0x3e0 + (uint)bVar20);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar21;
  if (bVar18) {
    bVar19 = 0xfffffc3f < uVar4 || CARRY4(uVar4 + 0x3c0,(uint)bVar21);
    unaff_r9 = (char *)(uVar4 + 0x3c0 + (uint)bVar21);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xfffffc5f < uVar4 || CARRY4(uVar4 + 0x3a0,(uint)bVar19);
    unaff_r9 = (char *)(uVar4 + 0x3a0 + (uint)bVar19);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = 0xfffffc7f < uVar4 || CARRY4(uVar4 + 0x380,(uint)bVar20);
    unaff_r9 = (char *)(uVar4 + 0x380 + (uint)bVar20);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xfffffc9f < uVar4 || CARRY4(uVar4 + 0x360,(uint)bVar19);
    unaff_r9 = (char *)(uVar4 + 0x360 + (uint)bVar19);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = 0xfffffcbf < uVar4 || CARRY4(uVar4 + 0x340,(uint)bVar20);
    unaff_r9 = (char *)(uVar4 + 0x340 + (uint)bVar20);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xfffffcdf < uVar4 || CARRY4(uVar4 + 800,(uint)bVar19);
    unaff_r9 = (char *)(uVar4 + 800 + (uint)bVar19);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = 0xfffffcff < uVar4 || CARRY4(uVar4 + 0x300,(uint)bVar20);
    unaff_r9 = (char *)(uVar4 + 0x300 + (uint)bVar20);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xfffffd1f < uVar4 || CARRY4(uVar4 + 0x2e0,(uint)bVar19);
    unaff_r9 = (char *)(uVar4 + 0x2e0 + (uint)bVar19);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = 0xfffffd3f < uVar4 || CARRY4(uVar4 + 0x2c0,(uint)bVar20);
    unaff_r9 = (char *)(uVar4 + 0x2c0 + (uint)bVar20);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xfffffd5f < uVar4 || CARRY4(uVar4 + 0x2a0,(uint)bVar19);
    unaff_r9 = (char *)(uVar4 + 0x2a0 + (uint)bVar19);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = 0xff23ffff < uVar7 || CARRY4((uint)(&UNK_00dc0000 + uVar7),(uint)bVar20);
    bVar17 = &UNK_00dc0000 + bVar20 + uVar7 == (undefined *)0x0;
  }
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = (char *)0xfcffffff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x3000000),(uint)bVar19);
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar17 && unaff_r9 + bVar19 + 0x3000000 == (char *)0x0) {
    bVar21 = 0xfffff57f < uVar4 || CARRY4(uVar4 + 0xa80,(uint)bVar20);
    unaff_r9 = (char *)(uVar4 + 0xa80 + (uint)bVar20);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar21;
  if (bVar18) {
    bVar19 = 0xffffc1ff < uVar4 || CARRY4(uVar4 + 0x3e00,(uint)bVar21);
    unaff_r9 = (char *)(uVar4 + 0x3e00 + (uint)bVar21);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xfffff2ff < uVar4 || CARRY4(uVar4 + 0xd00,(uint)bVar19);
    unaff_r9 = (char *)(uVar4 + 0xd00 + (uint)bVar19);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = 0xfffffa7f < uVar4 || CARRY4(uVar4 + 0x580,(uint)bVar20);
    unaff_r9 = (char *)(uVar4 + 0x580 + (uint)bVar20);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xffffdfff < uVar4 || CARRY4(uVar4 + 0x2000,(uint)bVar19);
    unaff_r9 = (char *)(uVar4 + 0x2000 + (uint)bVar19);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = 0xffffcfff < uVar4 || CARRY4(uVar4 + 0x3000,(uint)bVar20);
    unaff_r9 = (char *)(uVar4 + 0x3000 + (uint)bVar20);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xffff2bff < uVar4 || CARRY4(uVar4 + 0xd400,(uint)bVar19);
    unaff_r9 = (char *)(uVar4 + 0xd400 + (uint)bVar19);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = 0xfffc8fff < uVar4 ||
             CARRY4((uint)(
                          "_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initIPKwEENS_9_MetaBaseIXsr27__is_cpp17_forward_iteratorIT_EE5valueEE13_EnableIfImplIvEESA_SA_"
                          + uVar4 + 0x91),(uint)bVar20);
    unaff_r9 = "_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initIPKwEENS_9_MetaBaseIXsr27__is_cpp17_forward_iteratorIT_EE5valueEE13_EnableIfImplIvEESA_SA_"
               + (uint)bVar20 + uVar4 + 0x91;
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xffffbbff < uVar4 || CARRY4(uVar4 + 0x4400,(uint)bVar19);
    unaff_r9 = (char *)(uVar4 + 0x4400 + (uint)bVar19);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = 0xfffc6fff < uVar4 ||
             CARRY4((uint)("_ZNSt6__ndk16localeC2ERKS0_PKci" + uVar4 + 0x15),(uint)bVar20);
    unaff_r9 = "_ZNSt6__ndk16localeC2ERKS0_PKci" + (uint)bVar20 + uVar4 + 0x15;
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xfffe1fff < uVar4 || CARRY4(uVar4 + 0x1e000,(uint)bVar19);
    unaff_r9 = (char *)(uVar4 + 0x1e000 + (uint)bVar19);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = 0xffff67ff < uVar4 || CARRY4(uVar4 + 0x9800,(uint)bVar20);
    unaff_r9 = (char *)(uVar4 + 0x9800 + (uint)bVar20);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xfffd4fff < uVar4 ||
             CARRY4((uint)(
                          "_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEEC2EPNS_15basic_streambufIcS2_EE"
                          + uVar4 + 0x1d),(uint)bVar19);
    unaff_r9 = "_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEEC2EPNS_15basic_streambufIcS2_EE" +
               (uint)bVar19 + uVar4 + 0x1d;
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = 0xffff8bff < uVar4 || CARRY4(uVar4 + 0x7400,(uint)bVar20);
    unaff_r9 = (char *)(uVar4 + 0x7400 + (uint)bVar20);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  if (bVar17) {
    unaff_r9 = (char *)(uVar4 + 0x3800 + (uint)bVar19);
  }
  puVar9 = *(undefined4 **)(iVar12 + 0x1c);
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
    puVar9 = *(undefined4 **)(iVar12 + 0x1c);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar12);
      puVar9 = *(undefined4 **)(iVar12 + 0x1c);
    }
  }
  uVar14 = *puVar9;
  iVar15 = *(int *)(iVar2 + 0x3c);
  if (*(int *)(**(int **)(iRam037106bc + 0x3710320) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar14 = func_0x05171434(uVar14,0);
  if (iVar15 == 0) {
    func_0x024f83d4();
  }
  uVar4 = func_0x0475399c(iVar15,uVar14,**(undefined4 **)(iRam037106c0 + 0x3710364));
  uVar7 = func_0x02965180(uVar4,0);
  if (uVar7 < 0xa5621015) {
    if (uVar7 < 0x775ef500) {
      if (uVar7 == 0x392d1efa) {
        iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam037106e8 + 0x37104f0),0);
        uVar16 = iVar15 == 0;
        bVar19 = true;
        if (!(bool)uVar16) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x14);
LAB_037105e4:
          iVar2 = *(int *)(iVar12 + 4);
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
        bVar19 = 0x775ef4fe < uVar7;
        uVar16 = false;
        if (uVar7 == 0x775ef4ff) {
          iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam037106c4 + 0x37103c0),0);
          uVar16 = iVar15 == 0;
          bVar19 = true;
          if (!(bool)uVar16) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x28);
            goto LAB_037105e4;
          }
        }
      }
    }
    else if (uVar7 == 0x8950c121) {
      iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam037106d4 + 0x3710548),0);
      uVar16 = iVar15 == 0;
      bVar19 = true;
      if (!(bool)uVar16) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_037105e4;
      }
    }
    else if (uVar7 == 0xa4ebb130) {
      iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam037106e4 + 0x3710574),0);
      uVar16 = iVar15 == 0;
      bVar19 = true;
      if (!(bool)uVar16) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x38);
        goto LAB_037105e4;
      }
    }
    else {
      bVar19 = 0xa5621013 < uVar7;
      uVar16 = false;
      if (uVar7 == 0xa5621014) {
        iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam037106c8 + 0x3710468),0);
        uVar16 = iVar15 == 0;
        bVar19 = true;
        if (!(bool)uVar16) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x30);
          goto LAB_037105e4;
        }
      }
    }
  }
  else if (uVar7 < 0xb9cd4293) {
    if (uVar7 == 0xb881e6cb) {
      iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam037106e0 + 0x371051c),0);
      uVar16 = iVar15 == 0;
      bVar19 = true;
      if (!(bool)uVar16) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x34);
        goto LAB_037105e4;
      }
    }
    else {
      bVar19 = 0xb9cd4291 < uVar7;
      uVar16 = false;
      if (uVar7 == 0xb9cd4292) {
        iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam037106cc + 0x3710414),0);
        uVar16 = iVar15 == 0;
        bVar19 = true;
        if (!(bool)uVar16) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_037105e4;
        }
      }
    }
  }
  else if (uVar7 == 0xbafc2442) {
    iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam037106dc + 0x37105a0),0);
    uVar16 = iVar15 == 0;
    bVar19 = true;
    if (!(bool)uVar16) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x2c);
      goto LAB_037105e4;
    }
  }
  else if (uVar7 == 0xc16fefa5) {
    iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam037106d8 + 0x37105cc),0);
    uVar16 = iVar15 == 0;
    bVar19 = true;
    if (!(bool)uVar16) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x24);
      goto LAB_037105e4;
    }
  }
  else {
    bVar19 = 0xec3691f0 < uVar7;
    uVar16 = false;
    if (uVar7 == 0xec3691f1) {
      iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam037106d0 + 0x37104c4),0);
      uVar16 = iVar15 == 0;
      bVar19 = true;
      if (!(bool)uVar16) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x20);
        goto LAB_037105e4;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam037106ec + 0x371064c));
  uVar7 = func_0x024f83c8();
  uVar14 = func_0x024f83b8(*(undefined4 *)(iRam037106f0 + 0x3710660));
  func_0x0509473c(uVar7,uVar14,uVar4,0,0);
  func_0x024f83c0(uVar7,iVar12);
  uVar22 = func_0x024f83bc();
  iVar12 = (int)((ulonglong)uVar22 >> 0x20);
  iVar2 = (int)uVar22;
  bVar20 = bVar19;
  if ((bool)uVar16) {
    bVar20 = (char *)0xfffffffc < unaff_r9 || CARRY4((uint)(unaff_r9 + 3),(uint)bVar19);
  }
  bVar17 = false;
  bVar21 = bVar20;
  if ((bool)uVar16 && unaff_r9 + bVar19 + 3 == (char *)0x0) {
    bVar21 = 0x5ffffffe < uVar7 || CARRY4(uVar7 + 0xa0000001,(uint)bVar20);
    uVar7 = uVar7 + 0xa0000001 + (uint)bVar20;
    bVar17 = uVar7 == 0;
  }
  bVar18 = false;
  bVar19 = bVar21;
  if (bVar17) {
    bVar19 = 0xff1fffff < uVar4 || CARRY4(uVar4 + 0xe00000,(uint)bVar21);
    unaff_r9 = (char *)(uVar4 + 0xe00000 + (uint)bVar21);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar20 = bVar19;
  if (bVar18) {
    bVar20 = 0xff27ffff < uVar4 || CARRY4((uint)(&UNK_00d80000 + uVar4),(uint)bVar19);
    unaff_r9 = &UNK_00d80000 + bVar19 + uVar4;
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = 0xff2fffff < uVar4 || CARRY4((uint)(&UNK_00d00000 + uVar4),(uint)bVar20);
    unaff_r9 = &UNK_00d00000 + bVar20 + uVar4;
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar20 = bVar19;
  if (bVar18) {
    bVar20 = 0xff37ffff < uVar4 || CARRY4((uint)(&UNK_00c80000 + uVar4),(uint)bVar19);
    unaff_r9 = &UNK_00c80000 + bVar19 + uVar4;
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = 0xff3fffff < uVar4 || CARRY4(uVar4 + 0xc00000,(uint)bVar20);
    unaff_r9 = (char *)(uVar4 + 0xc00000 + (uint)bVar20);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar20 = bVar19;
  if (bVar18) {
    bVar20 = 0xff47ffff < uVar4 || CARRY4((uint)(&UNK_00b80000 + uVar4),(uint)bVar19);
    unaff_r9 = &UNK_00b80000 + bVar19 + uVar4;
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = 0xff4fffff < uVar4 || CARRY4((uint)(&UNK_00b00000 + uVar4),(uint)bVar20);
    unaff_r9 = &UNK_00b00000 + bVar20 + uVar4;
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar20 = bVar19;
  if (bVar18) {
    bVar20 = 0xff57ffff < uVar4 || CARRY4((uint)(&UNK_00a80000 + uVar4),(uint)bVar19);
    unaff_r9 = &UNK_00a80000 + bVar19 + uVar4;
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = 0xff5fffff < uVar4 || CARRY4((uint)(&UNK_00a00000 + uVar4),(uint)bVar20);
    unaff_r9 = &UNK_00a00000 + bVar20 + uVar4;
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar20 = bVar19;
  if (bVar18) {
    bVar20 = 0xff67ffff < uVar4 || CARRY4((uint)(&UNK_00980000 + uVar4),(uint)bVar19);
    unaff_r9 = &UNK_00980000 + bVar19 + uVar4;
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = 0x3ffffff3 < uVar7 || CARRY4(uVar7 + 0xc000000c,(uint)bVar20);
  }
  bVar17 = bVar17 && uVar7 + 0xc000000c + (uint)bVar20 == 0;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = (char *)0xffffffdf < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x20),(uint)bVar19);
  }
  bVar18 = false;
  bVar21 = bVar20;
  if (bVar17 && unaff_r9 + bVar19 + 0x20 == (char *)0x0) {
    bVar21 = 0xfcefffff < uVar4 || CARRY4((uint)(&UNK_03100000 + uVar4),(uint)bVar20);
    unaff_r9 = &UNK_03100000 + bVar20 + uVar4;
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar21;
  if (bVar18) {
    bVar19 = 0xffcfffff < uVar4 || CARRY4(uVar4 + 0x300000,(uint)bVar21);
    unaff_r9 = (char *)(uVar4 + 0x300000 + (uint)bVar21);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xfe1fffff < uVar4 || CARRY4(uVar4 + 0x1e00000,(uint)bVar19);
    unaff_r9 = (char *)(uVar4 + 0x1e00000 + (uint)bVar19);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = 0xf3bfffff < uVar4 || CARRY4(uVar4 + 0xc400000,(uint)bVar20);
    unaff_r9 = (char *)(uVar4 + 0xc400000 + (uint)bVar20);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xfd7fffff < uVar4 || CARRY4(uVar4 + 0x2800000,(uint)bVar19);
    unaff_r9 = (char *)(uVar4 + 0x2800000 + (uint)bVar19);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = 0xceffffff < uVar4 || CARRY4(uVar4 + 0x31000000,(uint)bVar20);
    unaff_r9 = (char *)(uVar4 + 0x31000000 + (uint)bVar20);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xc9ffffff < uVar4 || CARRY4(uVar4 + 0x36000000,(uint)bVar19);
    unaff_r9 = (char *)(uVar4 + 0x36000000 + (uint)bVar19);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = 0xf87fffff < uVar4 || CARRY4(uVar4 + 0x7800000,(uint)bVar20);
    unaff_r9 = (char *)(uVar4 + 0x7800000 + (uint)bVar20);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xff3fffff < uVar4 || CARRY4(uVar4 + 0xc00000,(uint)bVar19);
    unaff_r9 = (char *)(uVar4 + 0xc00000 + (uint)bVar19);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  if (bVar18) {
    unaff_r9 = (char *)(uVar4 + 0x8c00000 + (uint)bVar20);
  }
  puVar9 = *(undefined4 **)(iVar12 + 0x1c);
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
    puVar9 = *(undefined4 **)(iVar12 + 0x1c);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar12);
      puVar9 = *(undefined4 **)(iVar12 + 0x1c);
    }
  }
  uVar14 = *puVar9;
  iVar15 = *(int *)(iVar2 + 0x3c);
  if (*(int *)(**(int **)(iRam03710b60 + 0x37107c4) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar14 = func_0x05171434(uVar14,0);
  if (iVar15 == 0) {
    func_0x024f83d4();
  }
  uVar4 = func_0x0475399c(iVar15,uVar14,**(undefined4 **)(iRam03710b64 + 0x3710808));
  uVar7 = func_0x02965180(uVar4,0);
  if (uVar7 < 0xa5621015) {
    if (uVar7 < 0x775ef500) {
      if (uVar7 == 0x392d1efa) {
        iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710b8c + 0x3710994),0);
        uVar16 = iVar15 == 0;
        bVar19 = true;
        if (!(bool)uVar16) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x14);
LAB_03710a88:
          iVar2 = *(int *)(iVar12 + 4);
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
        bVar19 = 0x775ef4fe < uVar7;
        uVar16 = false;
        if (uVar7 == 0x775ef4ff) {
          iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710b68 + 0x3710864),0);
          uVar16 = iVar15 == 0;
          bVar19 = true;
          if (!(bool)uVar16) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x28);
            goto LAB_03710a88;
          }
        }
      }
    }
    else if (uVar7 == 0x8950c121) {
      iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710b78 + 0x37109ec),0);
      uVar16 = iVar15 == 0;
      bVar19 = true;
      if (!(bool)uVar16) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_03710a88;
      }
    }
    else if (uVar7 == 0xa4ebb130) {
      iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710b88 + 0x3710a18),0);
      uVar16 = iVar15 == 0;
      bVar19 = true;
      if (!(bool)uVar16) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x38);
        goto LAB_03710a88;
      }
    }
    else {
      bVar19 = 0xa5621013 < uVar7;
      uVar16 = false;
      if (uVar7 == 0xa5621014) {
        iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710b6c + 0x371090c),0);
        uVar16 = iVar15 == 0;
        bVar19 = true;
        if (!(bool)uVar16) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x30);
          goto LAB_03710a88;
        }
      }
    }
  }
  else if (uVar7 < 0xb9cd4293) {
    if (uVar7 == 0xb881e6cb) {
      iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710b84 + 0x37109c0),0);
      uVar16 = iVar15 == 0;
      bVar19 = true;
      if (!(bool)uVar16) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x34);
        goto LAB_03710a88;
      }
    }
    else {
      bVar19 = 0xb9cd4291 < uVar7;
      uVar16 = false;
      if (uVar7 == 0xb9cd4292) {
        iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710b70 + 0x37108b8),0);
        uVar16 = iVar15 == 0;
        bVar19 = true;
        if (!(bool)uVar16) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_03710a88;
        }
      }
    }
  }
  else if (uVar7 == 0xbafc2442) {
    iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710b80 + 0x3710a44),0);
    uVar16 = iVar15 == 0;
    bVar19 = true;
    if (!(bool)uVar16) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x2c);
      goto LAB_03710a88;
    }
  }
  else if (uVar7 == 0xc16fefa5) {
    iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710b7c + 0x3710a70),0);
    uVar16 = iVar15 == 0;
    bVar19 = true;
    if (!(bool)uVar16) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x24);
      goto LAB_03710a88;
    }
  }
  else {
    bVar19 = 0xec3691f0 < uVar7;
    uVar16 = false;
    if (uVar7 == 0xec3691f1) {
      iVar15 = func_0x04f57738(uVar4,**(undefined4 **)(iRam03710b74 + 0x3710968),0);
      uVar16 = iVar15 == 0;
      bVar19 = true;
      if (!(bool)uVar16) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x20);
        goto LAB_03710a88;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam03710b90 + 0x3710af0));
  uVar7 = func_0x024f83c8();
  uVar14 = func_0x024f83b8(*(undefined4 *)(iRam03710b94 + 0x3710b04));
  func_0x0509473c(uVar7,uVar14,uVar4,0,0);
  func_0x024f83c0(uVar7,iVar12);
  uVar22 = func_0x024f83bc();
  iVar2 = (int)((ulonglong)uVar22 >> 0x20);
  bVar20 = bVar19;
  if ((bool)uVar16) {
    bVar20 = (char *)0xffff97ff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x6800),(uint)bVar19);
  }
  bVar17 = (bool)uVar16 && unaff_r9 + bVar19 + 0x6800 == (char *)0x0;
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = 0xfffff3bf < uVar7 || CARRY4(uVar7 + 0xc40,(uint)bVar20);
  }
  bVar18 = false;
  bVar21 = bVar19;
  if (bVar17 && uVar7 + 0xc40 + (uint)bVar20 == 0) {
    bVar21 = 0xc3ffffff < uVar4 || CARRY4(uVar4 + 0x3c000000,(uint)bVar19);
    unaff_r9 = (char *)(uVar4 + 0x3c000000 + (uint)bVar19);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar21;
  if (bVar18) {
    bVar19 = 0xcbffffff < uVar4 || CARRY4(uVar4 + 0x34000000,(uint)bVar21);
    unaff_r9 = (char *)(uVar4 + 0x34000000 + (uint)bVar21);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xd3ffffff < uVar4 || CARRY4(uVar4 + 0x2c000000,(uint)bVar19);
    unaff_r9 = (char *)(uVar4 + 0x2c000000 + (uint)bVar19);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = 0xdbffffff < uVar4 || CARRY4(uVar4 + 0x24000000,(uint)bVar20);
    unaff_r9 = (char *)(uVar4 + 0x24000000 + (uint)bVar20);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xe3ffffff < uVar4 || CARRY4(uVar4 + 0x1c000000,(uint)bVar19);
    unaff_r9 = (char *)(uVar4 + 0x1c000000 + (uint)bVar19);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = 0xebffffff < uVar4 || CARRY4(uVar4 + 0x14000000,(uint)bVar20);
    unaff_r9 = (char *)(uVar4 + 0x14000000 + (uint)bVar20);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xf3ffffff < uVar4 || CARRY4(uVar4 + 0xc000000,(uint)bVar19);
    unaff_r9 = (char *)(uVar4 + 0xc000000 + (uint)bVar19);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = 0xfbffffff < uVar4 || CARRY4(uVar4 + 0x4000000,(uint)bVar20);
    unaff_r9 = (char *)(uVar4 + 0x4000000 + (uint)bVar20);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar18 = false;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xffffffc < uVar4 || CARRY4(uVar4 + 0xf0000003,(uint)bVar19);
    unaff_r9 = (char *)(uVar4 + 0xf0000003 + (uint)bVar19);
    bVar18 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar20;
  if (bVar18) {
    bVar19 = 0x2ffffffc < uVar4 || CARRY4(uVar4 + 0xd0000003,(uint)bVar20);
    unaff_r9 = (char *)(uVar4 + 0xd0000003 + (uint)bVar20);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xfffffd7f < uVar7 || CARRY4(uVar7 + 0x280,(uint)bVar19);
  }
  bVar17 = bVar17 && uVar7 + 0x280 + (uint)bVar19 == 0;
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = (char *)0xfffe0fff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x1f000),(uint)bVar20);
  }
  bVar17 = bVar17 && unaff_r9 + bVar20 + 0x1f000 == (char *)0x0;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0x7fffffff < uVar4 || CARRY4(uVar4 + 0x80000000,(uint)bVar19);
  }
  bVar17 = bVar17 && uVar4 + 0x80000000 + (uint)bVar19 == 0;
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = 0x7ffffff9 < uVar4 || CARRY4(uVar4 + 0x80000006,(uint)bVar20);
  }
  bVar17 = bVar17 && uVar4 + 0x80000006 + (uint)bVar20 == 0;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xbffffff2 < uVar4 || CARRY4(uVar4 + 0x4000000d,(uint)bVar19);
  }
  bVar17 = bVar17 && uVar4 + 0x4000000d + (uint)bVar19 == 0;
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = 0xfffffffd < uVar4 || CARRY4(uVar4 + 2,(uint)bVar20);
  }
  bVar17 = bVar17 && uVar4 + 2 + (uint)bVar20 == 0;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xffffffde < uVar4 || CARRY4(uVar4 + 0x21,(uint)bVar19);
  }
  bVar17 = bVar17 && uVar4 + 0x21 + (uint)bVar19 == 0;
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = 0xfffffff7 < uVar4 || CARRY4(uVar4 + 8,(uint)bVar20);
  }
  bVar17 = bVar17 && uVar4 + 8 + (uint)bVar20 == 0;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xfffffff2 < uVar4 || CARRY4(uVar4 + 0xd,(uint)bVar19);
  }
  bVar17 = bVar17 && uVar4 + 0xd + (uint)bVar19 == 0;
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = 0xffffffca < uVar4 || CARRY4(uVar4 + 0x35,(uint)bVar20);
  }
  bVar17 = bVar17 && uVar4 + 0x35 + (uint)bVar20 == 0;
  bVar20 = bVar19;
  if (bVar17) {
    bVar20 = 0xffffffe5 < uVar4 || CARRY4(uVar4 + 0x1a,(uint)bVar19);
  }
  bVar17 = bVar17 && uVar4 + 0x1a + (uint)bVar19 == 0;
  bVar19 = bVar20;
  if (bVar17) {
    bVar19 = 0xffffffc5 < uVar4 || CARRY4(uVar4 + 0x3a,(uint)bVar20);
  }
  bVar18 = false;
  bVar21 = bVar19;
  if (bVar17 && uVar4 + 0x3a + (uint)bVar20 == 0) {
    bVar21 = 0xd9ffffff < uVar7 || CARRY4(uVar7 + 0x26000000,(uint)bVar19);
    uVar4 = uVar7 + 0x26000000 + (uint)bVar19;
    bVar18 = uVar4 == 0;
  }
  iVar12 = extraout_r2;
  if (bVar18) {
    iVar12 = uVar4 + 0xfc00000 + (uint)bVar21;
  }
  if (*(int *)(iVar12 + 0x1c) == 0) {
    func_0x024f83cc(*(undefined4 *)(_UNK_03710e60 + 0x3710bc0));
    func_0x024f83cc(*(undefined4 *)(_UNK_03710e64 + 0x3710bcc));
    func_0x024f83cc(*(undefined4 *)(_UNK_03710e68 + 0x3710bd8));
    func_0x024f83cc(*(undefined4 *)(_UNK_03710e6c + 0x3710be4));
    func_0x024f83cc(*(undefined4 *)(_UNK_03710e70 + 0x3710bf0));
    if (*(int *)(iVar12 + 0x1c) == 0) {
      func_0x024f83f8(iVar12);
    }
  }
  if (*(int *)(**(int **)(_UNK_03710e74 + 0x3710c10) + 0x74) == 0) {
    func_0x024f83d8();
  }
  piVar1 = (int *)0x0;
  iVar15 = func_0x024ef144(iVar2,0,0);
  if (iVar15 != 0) {
    if (iVar2 == 0) {
      func_0x024f83d4();
    }
    piVar1 = (int *)func_0x03639de0(iVar2,**(undefined4 **)(iVar12 + 0x1c));
    if (piVar1 == (int *)0x0) {
      piVar11 = (int *)func_0x024f8400(**(undefined4 **)(_UNK_03710e78 + 0x3710c74),3);
      if ((int)uVar22 == 0) {
        func_0x024f83d4();
      }
      piVar1 = (int *)func_0x051b16a4((int)uVar22,0);
      if (piVar1 == (int *)0x0) {
        func_0x024f83d4();
      }
      iVar15 = (**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
      if (piVar11 == (int *)0x0) {
        func_0x024f83d4();
      }
      if ((iVar15 != 0) &&
         (iVar8 = func_0x024f83e4(iVar15,*(undefined4 *)(*piVar11 + 0x20)), iVar8 == 0)) {
        uVar14 = func_0x024f83e8();
        func_0x024f83c0(uVar14,0);
      }
      if (piVar11[3] == 0) {
        func_0x024f83ec();
      }
      piVar11[4] = iVar15;
      func_0x024f83f0(piVar11 + 4,iVar15);
      if (iVar2 == 0) {
        func_0x024f83d4();
      }
      iVar2 = func_0x024ef0f0(iVar2,0);
      if ((iVar2 != 0) &&
         (iVar15 = func_0x024f83e4(iVar2,*(undefined4 *)(*piVar11 + 0x20)), iVar15 == 0)) {
        uVar14 = func_0x024f83e8();
        func_0x024f83c0(uVar14,0);
      }
      if ((uint)piVar11[3] < 2) {
        func_0x024f83ec();
      }
      piVar11[5] = iVar2;
      func_0x024f83f0(piVar11 + 5,iVar2);
      uVar14 = *(undefined4 *)(*(int *)(iVar12 + 0x1c) + 8);
      if (*(int *)(**(int **)(_UNK_03710e7c + 0x3710d8c) + 0x74) == 0) {
        func_0x024f83d8();
      }
      piVar1 = (int *)func_0x05171434(uVar14,0);
      if (piVar1 == (int *)0x0) {
        func_0x024f83d4();
      }
      iVar2 = (**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
      if ((iVar2 != 0) &&
         (iVar12 = func_0x024f83e4(iVar2,*(undefined4 *)(*piVar11 + 0x20)), iVar12 == 0)) {
        uVar14 = func_0x024f83e8();
        func_0x024f83c0(uVar14,0);
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

