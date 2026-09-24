
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_02fcf848(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
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
  char *unaff_r9;
  char *unaff_r11;
  undefined1 uVar15;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined8 uVar21;
  char *pcStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char *pcStack_38;
  uint uStack_34;
  char *pcStack_30;
  int iStack_2c;
  char *pcStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar13 = (char *)(_UNK_02fcf928 + 0x2fcf85c);
  if (*pcVar13 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fcf92c + 0x2fcf870));
    func_0x01438628(*(undefined4 *)(_UNK_02fcf930 + 0x2fcf87c));
    func_0x01438628(*(undefined4 *)(_UNK_02fcf934 + 0x2fcf888));
    *pcVar13 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x70fa,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x70fa,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar13 = (char *)(_UNK_02916394 + 0x29162b4);
    if (*pcVar13 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02916398 + 0x29162c8),param_1,0);
      *pcVar13 = '\x01';
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    pcStack_28 = *(char **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    pcStack_30 = (char *)0x0;
    uStack_20 = 0;
    func_0x024f56c0(&pcStack_48,0);
    pcStack_30 = pcStack_48;
    iStack_2c = uStack_44;
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
    piVar1 = (int *)func_0x035daef8(&pcStack_30,0,**(undefined4 **)(_UNK_0291639c + 0x2916384));
    return piVar1;
  }
  if (*(int *)(**(int **)(_UNK_02fcf938 + 0x2fcf8e0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02fcf93c + 0x2fcf8fc));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar13 = (char *)**(undefined4 **)(_UNK_02fcf940 + 0x2fcf91c);
  puVar9 = *(undefined4 **)(pcVar13 + 0x1c);
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
    puVar9 = *(undefined4 **)(pcVar13 + 0x1c);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x024f83f8(pcVar13);
      puVar9 = *(undefined4 **)(pcVar13 + 0x1c);
    }
  }
  uVar14 = *puVar9;
  iVar12 = *(int *)(iVar2 + 0x50);
  if (*(int *)(**(int **)(iRam0370e49c + 0x370dfac) + 0x74) == 0) {
    func_0x024f83d8();
  }
  iVar3 = func_0x05171434(uVar14,0);
  if (iVar12 == 0) {
    func_0x024f83d4();
  }
  pcVar4 = (char *)func_0x0475399c(iVar12,iVar3,**(undefined4 **)(iRam0370e4a0 + 0x370dff0));
  uVar5 = func_0x02965180(pcVar4,0);
  if (uVar5 < 0xc3722751) {
    if (uVar5 < 0x6d552bcf) {
      if (uVar5 == 0x2ded4af4) {
        iVar12 = func_0x04f57738(pcVar4,**(undefined4 **)(iRam0370e4d4 + 0x370e264),0);
        uVar15 = iVar12 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(pcVar13 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x44);
LAB_0370e3b0:
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
      else if (uVar5 == 0x2ebf2f09) {
        iVar12 = func_0x04f57738(pcVar4,**(undefined4 **)(iRam0370e4c0 + 0x370e290),0);
        uVar15 = iVar12 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(pcVar13 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_0370e3b0;
        }
      }
      else {
        bVar18 = 0x6d552bcd < uVar5;
        uVar15 = false;
        if (uVar5 == 0x6d552bce) {
          iVar12 = func_0x04f57738(pcVar4,**(undefined4 **)(iRam0370e4a4 + 0x370e05c),0);
          uVar15 = iVar12 == 0;
          bVar18 = true;
          if (!(bool)uVar15) {
            iVar12 = *(int *)(pcVar13 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x4c);
            goto LAB_0370e3b0;
          }
        }
      }
    }
    else if (uVar5 < 0x88941076) {
      if (uVar5 == 0x88941075) {
        iVar12 = func_0x04f57738(pcVar4,**(undefined4 **)(iRam0370e4cc + 0x370e2e8),0);
        uVar15 = iVar12 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(pcVar13 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x38);
          goto LAB_0370e3b0;
        }
      }
      else {
        bVar18 = 0x720dfd0a < uVar5;
        uVar15 = false;
        if (uVar5 == 0x720dfd0b) {
          iVar12 = func_0x04f57738(pcVar4,**(undefined4 **)(iRam0370e4a8 + 0x370e110),0);
          uVar15 = iVar12 == 0;
          bVar18 = true;
          if (!(bool)uVar15) {
            iVar12 = *(int *)(pcVar13 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x14);
            goto LAB_0370e3b0;
          }
        }
      }
    }
    else if (uVar5 == 0x9b075b93) {
      iVar12 = func_0x04f57738(pcVar4,**(undefined4 **)(iRam0370e4dc + 0x370e36c),0);
      uVar15 = iVar12 == 0;
      bVar18 = true;
      if (!(bool)uVar15) {
        iVar12 = *(int *)(pcVar13 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_0370e3b0;
      }
    }
    else {
      bVar18 = 0xc372274f < uVar5;
      uVar15 = false;
      if (uVar5 == 0xc3722750) {
        iVar12 = func_0x04f57738(pcVar4,**(undefined4 **)(iRam0370e4ac + 0x370e1ec),0);
        uVar15 = iVar12 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(pcVar13 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x28);
          goto LAB_0370e3b0;
        }
      }
    }
  }
  else if (uVar5 < 0xc97230c3) {
    if (uVar5 < 0xc47228e4) {
      if (uVar5 == 0xc4176f34) {
        iVar12 = func_0x04f57738(pcVar4,**(undefined4 **)(iRam0370e4c8 + 0x370e2bc),0);
        uVar15 = iVar12 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(pcVar13 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x34);
          goto LAB_0370e3b0;
        }
      }
      else {
        bVar18 = 0xc47228e2 < uVar5;
        uVar15 = false;
        if (uVar5 == 0xc47228e3) {
          iVar12 = func_0x04f57738(pcVar4,**(undefined4 **)(iRam0370e4b0 + 0x370e0c0),0);
          uVar15 = iVar12 == 0;
          bVar18 = true;
          if (!(bool)uVar15) {
            iVar12 = *(int *)(pcVar13 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x2c);
            goto LAB_0370e3b0;
          }
        }
      }
    }
    else if (uVar5 == 0xc6722c09) {
      iVar12 = func_0x04f57738(pcVar4,**(undefined4 **)(iRam0370e4c4 + 0x370e340),0);
      uVar15 = iVar12 == 0;
      bVar18 = true;
      if (!(bool)uVar15) {
        iVar12 = *(int *)(pcVar13 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x24);
        goto LAB_0370e3b0;
      }
    }
    else {
      bVar18 = 0xc97230c1 < uVar5;
      uVar15 = false;
      if (uVar5 == 0xc97230c2) {
        iVar12 = func_0x04f57738(pcVar4,**(undefined4 **)(iRam0370e4b4 + 0x370e1a8),0);
        uVar15 = iVar12 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(pcVar13 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x30);
          goto LAB_0370e3b0;
        }
      }
    }
  }
  else if (uVar5 < 0xcdf8d5d6) {
    if (uVar5 == 0xcbbdf590) {
      iVar12 = func_0x04f57738(pcVar4,**(undefined4 **)(iRam0370e4d0 + 0x370e314),0);
      uVar15 = iVar12 == 0;
      bVar18 = true;
      if (!(bool)uVar15) {
        iVar12 = *(int *)(pcVar13 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x40);
        goto LAB_0370e3b0;
      }
    }
    else {
      bVar18 = 0xcdf8d5d4 < uVar5;
      uVar15 = false;
      if (uVar5 == 0xcdf8d5d5) {
        iVar12 = func_0x04f57738(pcVar4,**(undefined4 **)(iRam0370e4b8 + 0x370e164),0);
        uVar15 = iVar12 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(pcVar13 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x3c);
          goto LAB_0370e3b0;
        }
      }
    }
  }
  else if (uVar5 == 0xf30c65e6) {
    iVar12 = func_0x04f57738(pcVar4,**(undefined4 **)(iRam0370e4d8 + 0x370e398),0);
    uVar15 = iVar12 == 0;
    bVar18 = true;
    if (!(bool)uVar15) {
      iVar12 = *(int *)(pcVar13 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x48);
      goto LAB_0370e3b0;
    }
  }
  else {
    bVar18 = 0xf6c2ac01 < uVar5;
    uVar15 = false;
    if (uVar5 == 0xf6c2ac02) {
      iVar12 = func_0x04f57738(pcVar4,**(undefined4 **)(iRam0370e4bc + 0x370e238),0);
      uVar15 = iVar12 == 0;
      bVar18 = true;
      if (!(bool)uVar15) {
        iVar12 = *(int *)(pcVar13 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x20);
        goto LAB_0370e3b0;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam0370e4e0 + 0x370e418));
  uVar5 = func_0x024f83c8();
  uVar14 = func_0x024f83b8(*(undefined4 *)(iRam0370e4e4 + 0x370e42c));
  uStack_20 = 0;
  func_0x0509473c(uVar5,uVar14,pcVar4,0);
  func_0x024f83c0(uVar5,pcVar13);
  uVar21 = func_0x024f83bc();
  iVar12 = (int)((ulonglong)uVar21 >> 0x20);
  iVar2 = (int)uVar21;
  bVar16 = false;
  bVar19 = bVar18;
  if ((bool)uVar15) {
    bVar19 = (char *)0x43ffffff < unaff_r9 || CARRY4((uint)(unaff_r9 + -0x44000000),(uint)bVar18);
    pcVar4 = unaff_r9 + bVar18 + 0xbc000000;
    bVar16 = pcVar4 == (char *)0x0;
  }
  bVar17 = false;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = 0xff9fffff < uVar5 || CARRY4(uVar5 + 0x600000,(uint)bVar19);
    iVar3 = uVar5 + 0x600000 + (uint)bVar19;
    bVar17 = iVar3 == 0;
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = (char *)0xfffffecf < pcVar4 || CARRY4((uint)(pcVar4 + 0x130),(uint)bVar18);
    unaff_r11 = pcVar4 + bVar18 + 0x130;
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = (char *)0xfffffeef < pcVar4 || CARRY4((uint)(pcVar4 + 0x110),(uint)bVar19);
    unaff_r11 = pcVar4 + bVar19 + 0x110;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = (char *)0xffffff0f < pcVar4 || CARRY4((uint)(pcVar4 + 0xf0),(uint)bVar18);
    unaff_r11 = pcVar4 + bVar18 + 0xf0;
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = (char *)0xffffff2f < pcVar4 || CARRY4((uint)(pcVar4 + 0xd0),(uint)bVar19);
    unaff_r11 = pcVar4 + bVar19 + 0xd0;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = (char *)0xffffff4f < pcVar4 || CARRY4((uint)(pcVar4 + 0xb0),(uint)bVar18);
    unaff_r11 = pcVar4 + bVar18 + 0xb0;
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = (char *)0xffffff6f < pcVar4 || CARRY4((uint)(pcVar4 + 0x90),(uint)bVar19);
    unaff_r11 = pcVar4 + bVar19 + 0x90;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = (char *)0xffffff8f < pcVar4 || CARRY4((uint)(pcVar4 + 0x70),(uint)bVar18);
    unaff_r11 = pcVar4 + bVar18 + 0x70;
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = (char *)0xffffffaf < pcVar4 || CARRY4((uint)(pcVar4 + 0x50),(uint)bVar19);
    unaff_r11 = pcVar4 + bVar19 + 0x50;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = (char *)0xffffffcf < pcVar4 || CARRY4((uint)(pcVar4 + 0x30),(uint)bVar18);
    unaff_r11 = pcVar4 + bVar18 + 0x30;
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = (char *)0xffffffef < pcVar4 || CARRY4((uint)(pcVar4 + 0x10),(uint)bVar19);
    unaff_r11 = pcVar4 + bVar19 + 0x10;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = (char *)0xfffff03f < pcVar4 || CARRY4((uint)(pcVar4 + 0xfc0),(uint)bVar18);
    unaff_r11 = pcVar4 + bVar18 + 0xfc0;
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = (char *)0xfffff0bf < pcVar4 || CARRY4((uint)(pcVar4 + 0xf40),(uint)bVar19);
    unaff_r11 = pcVar4 + bVar19 + 0xf40;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = (char *)0xfffff13f < pcVar4 || CARRY4((uint)(pcVar4 + 0xec0),(uint)bVar18);
    unaff_r11 = pcVar4 + bVar18 + 0xec0;
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = (char *)0xfffff1bf < pcVar4 || CARRY4((uint)(pcVar4 + 0xe40),(uint)bVar19);
    unaff_r11 = pcVar4 + bVar19 + 0xe40;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = (char *)0xfffff23f < pcVar4 || CARRY4((uint)(pcVar4 + 0xdc0),(uint)bVar18);
    unaff_r11 = pcVar4 + bVar18 + 0xdc0;
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = 0xfbffffff < uVar5 || CARRY4(uVar5 + 0x4000000,(uint)bVar19);
    iVar3 = uVar5 + 0x4000000 + (uint)bVar19;
    bVar17 = iVar3 == 0;
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = (char *)0xaffffffd < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x50000002),(uint)bVar18);
    pcVar4 = unaff_r9 + bVar18 + 0x50000002;
    bVar16 = pcVar4 == (char *)0x0;
  }
  bVar17 = false;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = (char *)0xffffc5ff < pcVar4 || CARRY4((uint)(pcVar4 + 0x3a00),(uint)bVar19);
    unaff_r11 = pcVar4 + bVar19 + 0x3a00;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = (char *)0xfffff3ff < pcVar4 || CARRY4((uint)(pcVar4 + 0xc00),(uint)bVar18);
    unaff_r11 = pcVar4 + bVar18 + 0xc00;
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = (char *)0xffff8fff < pcVar4 || CARRY4((uint)(pcVar4 + 0x7000),(uint)bVar19);
    unaff_r11 = pcVar4 + bVar19 + 0x7000;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = (char *)0xffffe4ff < pcVar4 || CARRY4((uint)(pcVar4 + 0x1b00),(uint)bVar18);
    unaff_r11 = pcVar4 + bVar18 + 0x1b00;
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = (char *)0xffff43ff < pcVar4 || CARRY4((uint)(pcVar4 + 0xbc00),(uint)bVar19);
    unaff_r11 = pcVar4 + bVar19 + 0xbc00;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = (char *)0xffff33ff < pcVar4 || CARRY4((uint)(pcVar4 + 0xcc00),(uint)bVar18);
    unaff_r11 = pcVar4 + bVar18 + 0xcc00;
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = (char *)0xfffc0fff < pcVar4 || CARRY4((uint)(pcVar4 + 0x3f000),(uint)bVar19);
    unaff_r11 = pcVar4 + bVar19 + 0x3f000;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = (char *)0xfffcbfff < pcVar4 ||
             CARRY4((uint)(
                          "_ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcm"
                          + (int)(pcVar4 + 0x25)),(uint)bVar18);
    unaff_r11 = "_ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcm"
                + (int)(pcVar4 + bVar18 + 0x25);
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = (char *)0xfff07fff < pcVar4 || CARRY4((uint)(pcVar4 + 0xf8000),(uint)bVar19);
    unaff_r11 = pcVar4 + bVar19 + 0xf8000;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = (char *)0xfffdafff < pcVar4 || CARRY4((uint)(pcVar4 + 0x25000),(uint)bVar18);
    unaff_r11 = pcVar4 + bVar18 + 0x25000;
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = (char *)0xfffe6fff < pcVar4 || CARRY4((uint)(pcVar4 + 0x19000),(uint)bVar19);
    unaff_r11 = pcVar4 + bVar19 + 0x19000;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = (char *)0xfffeffff < pcVar4 || CARRY4((uint)(pcVar4 + 0x10000),(uint)bVar18);
    unaff_r11 = pcVar4 + bVar18 + 0x10000;
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = (char *)0xfffc9fff < pcVar4 ||
             CARRY4((uint)(
                          "_ZNKSt6__ndk19money_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_bRNS_8ios_baseEcRKNS_12basic_stringIcS3_NS_9allocatorIcEEEE"
                          + (int)(pcVar4 + 0x19)),(uint)bVar19);
    unaff_r11 = "_ZNKSt6__ndk19money_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_bRNS_8ios_baseEcRKNS_12basic_stringIcS3_NS_9allocatorIcEEEE"
                + (int)(pcVar4 + bVar19 + 0x19);
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = (char *)0xfff4ffff < pcVar4 || CARRY4((uint)(pcVar4 + 0xb0000),(uint)bVar18);
    unaff_r11 = pcVar4 + bVar18 + 0xb0000;
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = (char *)0xfff13fff < pcVar4 || CARRY4((uint)(pcVar4 + 0xec000),(uint)bVar19);
    unaff_r11 = pcVar4 + bVar19 + 0xec000;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = 0xffff8fff < uVar5 || CARRY4(uVar5 + 0x7000,(uint)bVar18);
  }
  if (bVar17 && uVar5 + 0x7000 + (uint)bVar18 == 0) {
    pcVar13 = pcVar4 + bVar19 + 0x3500;
  }
  uStack_24 = 0x370e458;
  puVar9 = *(undefined4 **)(iVar12 + 0x1c);
  pcStack_38 = pcVar13;
  uStack_34 = uVar5;
  pcStack_30 = pcVar4;
  iStack_2c = iVar3;
  pcStack_28 = unaff_r11;
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
    puVar9 = *(undefined4 **)(iVar12 + 0x1c);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar12);
      puVar9 = *(undefined4 **)(iVar12 + 0x1c);
    }
  }
  uVar14 = *puVar9;
  iVar3 = *(int *)(iVar2 + 0x50);
  if (*(int *)(**(int **)(iRam0370eae4 + 0x370e5f4) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar14 = func_0x05171434(uVar14,0);
  if (iVar3 == 0) {
    func_0x024f83d4();
  }
  pcVar13 = (char *)func_0x0475399c(iVar3,uVar14,**(undefined4 **)(iRam0370eae8 + 0x370e638));
  uVar5 = func_0x02965180(pcVar13,0);
  if (uVar5 < 0xc3722751) {
    if (uVar5 < 0x6d552bcf) {
      if (uVar5 == 0x2ded4af4) {
        iVar3 = func_0x04f57738(pcVar13,**(undefined4 **)(iRam0370eb1c + 0x370e8ac),0);
        uVar15 = iVar3 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x44);
LAB_0370e9f8:
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
      else if (uVar5 == 0x2ebf2f09) {
        iVar3 = func_0x04f57738(pcVar13,**(undefined4 **)(iRam0370eb08 + 0x370e8d8),0);
        uVar15 = iVar3 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_0370e9f8;
        }
      }
      else {
        bVar18 = 0x6d552bcd < uVar5;
        uVar15 = false;
        if (uVar5 == 0x6d552bce) {
          iVar3 = func_0x04f57738(pcVar13,**(undefined4 **)(iRam0370eaec + 0x370e6a4),0);
          uVar15 = iVar3 == 0;
          bVar18 = true;
          if (!(bool)uVar15) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x4c);
            goto LAB_0370e9f8;
          }
        }
      }
    }
    else if (uVar5 < 0x88941076) {
      if (uVar5 == 0x88941075) {
        iVar3 = func_0x04f57738(pcVar13,**(undefined4 **)(iRam0370eb14 + 0x370e930),0);
        uVar15 = iVar3 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x38);
          goto LAB_0370e9f8;
        }
      }
      else {
        bVar18 = 0x720dfd0a < uVar5;
        uVar15 = false;
        if (uVar5 == 0x720dfd0b) {
          iVar3 = func_0x04f57738(pcVar13,**(undefined4 **)(iRam0370eaf0 + 0x370e758),0);
          uVar15 = iVar3 == 0;
          bVar18 = true;
          if (!(bool)uVar15) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x14);
            goto LAB_0370e9f8;
          }
        }
      }
    }
    else if (uVar5 == 0x9b075b93) {
      iVar3 = func_0x04f57738(pcVar13,**(undefined4 **)(iRam0370eb24 + 0x370e9b4),0);
      uVar15 = iVar3 == 0;
      bVar18 = true;
      if (!(bool)uVar15) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_0370e9f8;
      }
    }
    else {
      bVar18 = 0xc372274f < uVar5;
      uVar15 = false;
      if (uVar5 == 0xc3722750) {
        iVar3 = func_0x04f57738(pcVar13,**(undefined4 **)(iRam0370eaf4 + 0x370e834),0);
        uVar15 = iVar3 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x28);
          goto LAB_0370e9f8;
        }
      }
    }
  }
  else if (uVar5 < 0xc97230c3) {
    if (uVar5 < 0xc47228e4) {
      if (uVar5 == 0xc4176f34) {
        iVar3 = func_0x04f57738(pcVar13,**(undefined4 **)(iRam0370eb10 + 0x370e904),0);
        uVar15 = iVar3 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x34);
          goto LAB_0370e9f8;
        }
      }
      else {
        bVar18 = 0xc47228e2 < uVar5;
        uVar15 = false;
        if (uVar5 == 0xc47228e3) {
          iVar3 = func_0x04f57738(pcVar13,**(undefined4 **)(iRam0370eaf8 + 0x370e708),0);
          uVar15 = iVar3 == 0;
          bVar18 = true;
          if (!(bool)uVar15) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x2c);
            goto LAB_0370e9f8;
          }
        }
      }
    }
    else if (uVar5 == 0xc6722c09) {
      iVar3 = func_0x04f57738(pcVar13,**(undefined4 **)(iRam0370eb0c + 0x370e988),0);
      uVar15 = iVar3 == 0;
      bVar18 = true;
      if (!(bool)uVar15) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x24);
        goto LAB_0370e9f8;
      }
    }
    else {
      bVar18 = 0xc97230c1 < uVar5;
      uVar15 = false;
      if (uVar5 == 0xc97230c2) {
        iVar3 = func_0x04f57738(pcVar13,**(undefined4 **)(iRam0370eafc + 0x370e7f0),0);
        uVar15 = iVar3 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x30);
          goto LAB_0370e9f8;
        }
      }
    }
  }
  else if (uVar5 < 0xcdf8d5d6) {
    if (uVar5 == 0xcbbdf590) {
      iVar3 = func_0x04f57738(pcVar13,**(undefined4 **)(iRam0370eb18 + 0x370e95c),0);
      uVar15 = iVar3 == 0;
      bVar18 = true;
      if (!(bool)uVar15) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x40);
        goto LAB_0370e9f8;
      }
    }
    else {
      bVar18 = 0xcdf8d5d4 < uVar5;
      uVar15 = false;
      if (uVar5 == 0xcdf8d5d5) {
        iVar3 = func_0x04f57738(pcVar13,**(undefined4 **)(iRam0370eb00 + 0x370e7ac),0);
        uVar15 = iVar3 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x3c);
          goto LAB_0370e9f8;
        }
      }
    }
  }
  else if (uVar5 == 0xf30c65e6) {
    iVar3 = func_0x04f57738(pcVar13,**(undefined4 **)(iRam0370eb20 + 0x370e9e0),0);
    uVar15 = iVar3 == 0;
    bVar18 = true;
    if (!(bool)uVar15) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x48);
      goto LAB_0370e9f8;
    }
  }
  else {
    bVar18 = 0xf6c2ac01 < uVar5;
    uVar15 = false;
    if (uVar5 == 0xf6c2ac02) {
      iVar3 = func_0x04f57738(pcVar13,**(undefined4 **)(iRam0370eb04 + 0x370e880),0);
      uVar15 = iVar3 == 0;
      bVar18 = true;
      if (!(bool)uVar15) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x20);
        goto LAB_0370e9f8;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam0370eb28 + 0x370ea60));
  pcVar4 = (char *)func_0x024f83c8();
  uVar14 = func_0x024f83b8(*(undefined4 *)(iRam0370eb2c + 0x370ea74));
  uStack_40 = 0;
  func_0x0509473c(pcVar4,uVar14,pcVar13,0);
  func_0x024f83c0(pcVar4,iVar12);
  uVar21 = func_0x024f83bc();
  iVar12 = (int)((ulonglong)uVar21 >> 0x20);
  iVar2 = (int)uVar21;
  bVar16 = false;
  bVar19 = bVar18;
  if ((bool)uVar15) {
    bVar19 = (char *)0xfffff8bf < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x740),(uint)bVar18);
    pcVar4 = unaff_r9 + bVar18 + 0x740;
    bVar16 = pcVar4 == (char *)0x0;
  }
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = (char *)0xffffff2f < pcVar4 || CARRY4((uint)(pcVar4 + 0xd0),(uint)bVar19);
  }
  bVar17 = false;
  bVar20 = bVar18;
  if (bVar16 && pcVar4 + bVar19 + 0xd0 == (char *)0x0) {
    bVar20 = (char *)0xfffeffff < pcVar13 || CARRY4((uint)(pcVar13 + 0x10000),(uint)bVar18);
    unaff_r11 = pcVar13 + bVar18 + 0x10000;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar20;
  if (bVar17) {
    bVar18 = (char *)0xff03ffff < pcVar13 || CARRY4((uint)(pcVar13 + 0xfc0000),(uint)bVar20);
    unaff_r11 = pcVar13 + bVar20 + 0xfc0000;
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = (char *)0xff0bffff < pcVar13 ||
             CARRY4((uint)(&UNK_00f40000 + (int)pcVar13),(uint)bVar18);
    unaff_r11 = &UNK_00f40000 + (int)(pcVar13 + bVar18);
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = (char *)0xff13ffff < pcVar13 ||
             CARRY4((uint)(&UNK_00ec0000 + (int)pcVar13),(uint)bVar19);
    unaff_r11 = &UNK_00ec0000 + (int)(pcVar13 + bVar19);
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = (char *)0xff1bffff < pcVar13 ||
             CARRY4((uint)(&UNK_00e40000 + (int)pcVar13),(uint)bVar18);
    unaff_r11 = &UNK_00e40000 + (int)(pcVar13 + bVar18);
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = (char *)0xff23ffff < pcVar13 ||
             CARRY4((uint)(&UNK_00dc0000 + (int)pcVar13),(uint)bVar19);
    unaff_r11 = &UNK_00dc0000 + (int)(pcVar13 + bVar19);
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = (char *)0xff2bffff < pcVar13 ||
             CARRY4((uint)(&UNK_00d40000 + (int)pcVar13),(uint)bVar18);
    unaff_r11 = &UNK_00d40000 + (int)(pcVar13 + bVar18);
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = (char *)0xff33ffff < pcVar13 ||
             CARRY4((uint)(&UNK_00cc0000 + (int)pcVar13),(uint)bVar19);
    unaff_r11 = &UNK_00cc0000 + (int)(pcVar13 + bVar19);
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = (char *)0xff3bffff < pcVar13 ||
             CARRY4((uint)(&UNK_00c40000 + (int)pcVar13),(uint)bVar18);
    unaff_r11 = &UNK_00c40000 + (int)(pcVar13 + bVar18);
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = (char *)0xff43ffff < pcVar13 ||
             CARRY4((uint)(&UNK_00bc0000 + (int)pcVar13),(uint)bVar19);
    unaff_r11 = &UNK_00bc0000 + (int)(pcVar13 + bVar19);
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = (char *)0xff4bffff < pcVar13 ||
             CARRY4((uint)(&UNK_00b40000 + (int)pcVar13),(uint)bVar18);
    unaff_r11 = &UNK_00b40000 + (int)(pcVar13 + bVar18);
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = (char *)0xff53ffff < pcVar13 ||
             CARRY4((uint)(&UNK_00ac0000 + (int)pcVar13),(uint)bVar19);
    unaff_r11 = &UNK_00ac0000 + (int)(pcVar13 + bVar19);
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = (char *)0xff5bffff < pcVar13 ||
             CARRY4((uint)(&UNK_00a40000 + (int)pcVar13),(uint)bVar18);
    unaff_r11 = &UNK_00a40000 + (int)(pcVar13 + bVar18);
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = (char *)0xff63ffff < pcVar13 ||
             CARRY4((uint)(&UNK_009c0000 + (int)pcVar13),(uint)bVar19);
    unaff_r11 = &UNK_009c0000 + (int)(pcVar13 + bVar19);
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = (char *)0xff6bffff < pcVar13 ||
             CARRY4((uint)(&UNK_00940000 + (int)pcVar13),(uint)bVar18);
    unaff_r11 = &UNK_00940000 + (int)(pcVar13 + bVar18);
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = (char *)0xfffffc1f < pcVar4 || CARRY4((uint)(pcVar4 + 0x3e0),(uint)bVar19);
    pcVar13 = pcVar4 + bVar19 + 0x3e0;
    bVar16 = pcVar13 == (char *)0x0;
  }
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = (char *)0xffffecff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x1300),(uint)bVar18);
  }
  bVar17 = false;
  bVar20 = bVar19;
  if (bVar16 && unaff_r9 + bVar18 + 0x1300 == (char *)0x0) {
    bVar20 = (char *)0xfd7fffff < pcVar13 || CARRY4((uint)(pcVar13 + 0x2800000),(uint)bVar19);
    unaff_r11 = pcVar13 + bVar19 + 0x2800000;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar20;
  if (bVar17) {
    bVar18 = (char *)0xf17fffff < pcVar13 || CARRY4((uint)(pcVar13 + 0xe800000),(uint)bVar20);
    unaff_r11 = pcVar13 + bVar20 + 0xe800000;
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = (char *)0xfd7fffff < pcVar13 || CARRY4((uint)(pcVar13 + 0x2800000),(uint)bVar18);
    unaff_r11 = pcVar13 + bVar18 + 0x2800000;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = (char *)0xff6fffff < pcVar13 ||
             CARRY4((uint)(&UNK_00900000 + (int)pcVar13),(uint)bVar19);
    unaff_r11 = &UNK_00900000 + (int)(pcVar13 + bVar19);
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = (char *)0xf8bfffff < pcVar13 || CARRY4((uint)(pcVar13 + 0x7400000),(uint)bVar18);
    unaff_r11 = pcVar13 + bVar18 + 0x7400000;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = (char *)0xf7bfffff < pcVar13 || CARRY4((uint)(pcVar13 + 0x8400000),(uint)bVar19);
    unaff_r11 = pcVar13 + bVar19 + 0x8400000;
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = (char *)0xd2ffffff < pcVar13 || CARRY4((uint)(pcVar13 + 0x2d000000),(uint)bVar18);
    unaff_r11 = pcVar13 + bVar18 + 0x2d000000;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = (char *)0xddffffff < pcVar13 || CARRY4((uint)(pcVar13 + 0x22000000),(uint)bVar19);
    unaff_r11 = pcVar13 + bVar19 + 0x22000000;
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = (char *)0x4fffffff < pcVar13 || CARRY4((uint)(pcVar13 + -0x50000000),(uint)bVar18);
    unaff_r11 = pcVar13 + bVar18 + 0xb0000000;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = (char *)0xecffffff < pcVar13 || CARRY4((uint)(pcVar13 + 0x13000000),(uint)bVar19);
    unaff_r11 = pcVar13 + bVar19 + 0x13000000;
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = (char *)0xf8ffffff < pcVar13 || CARRY4((uint)(pcVar13 + 0x7000000),(uint)bVar18);
    unaff_r11 = pcVar13 + bVar18 + 0x7000000;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = (char *)0x7ffffff < pcVar13 || CARRY4((uint)(pcVar13 + -0x8000000),(uint)bVar19);
    unaff_r11 = pcVar13 + bVar19 + 0xf8000000;
    bVar16 = unaff_r11 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = (char *)0xdbffffff < pcVar13 || CARRY4((uint)(pcVar13 + 0x24000000),(uint)bVar18);
    unaff_r11 = pcVar13 + bVar18 + 0x24000000;
    bVar17 = unaff_r11 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = (char *)0x97ffffff < pcVar13 || CARRY4((uint)(pcVar13 + 0x68000000),(uint)bVar19);
    unaff_r11 = pcVar13 + bVar19 + 0x68000000;
    bVar16 = unaff_r11 == (char *)0x0;
  }
  if (bVar16) {
    unaff_r11 = pcVar13 + bVar18 + 0xa4000000;
  }
  uStack_44 = 0x370eaa0;
  puVar9 = *(undefined4 **)(iVar12 + 0x1c);
  pcStack_48 = unaff_r11;
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
    puVar9 = *(undefined4 **)(iVar12 + 0x1c);
    if (puVar9 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar12);
      puVar9 = *(undefined4 **)(iVar12 + 0x1c);
    }
  }
  uVar14 = *puVar9;
  iVar3 = *(int *)(iVar2 + 0x44);
  if (*(int *)(**(int **)(iRam0370f034 + 0x370ec18) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar14 = func_0x05171434(uVar14,0);
  if (iVar3 == 0) {
    func_0x024f83d4();
  }
  uVar14 = func_0x0475399c(iVar3,uVar14,**(undefined4 **)(iRam0370f038 + 0x370ec5c));
  uVar5 = func_0x02965180(uVar14,0);
  if (uVar5 < 0xa9d6e18d) {
    if (uVar5 < 0x5470985c) {
      if (uVar5 == 0x2ff386a5) {
        iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f058 + 0x370ee08),0);
        if (iVar3 != 0) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x2c);
          goto LAB_0370ef54;
        }
      }
      else if (uVar5 == 0x422e10b8) {
        iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f060 + 0x370ee34),0);
        if (iVar3 != 0) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x34);
          goto LAB_0370ef54;
        }
      }
      else if ((uVar5 == 0x5470985b) &&
              (iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f03c + 0x370ecc8),0),
              iVar3 != 0)) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
LAB_0370ef54:
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
    else if (uVar5 == 0x822195a3) {
      iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f068 + 0x370eeb8),0);
      if (iVar3 != 0) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x14);
        goto LAB_0370ef54;
      }
    }
    else if (uVar5 == 0x9bda6746) {
      iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f050 + 0x370eee4),0);
      if (iVar3 != 0) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x24);
        goto LAB_0370ef54;
      }
    }
    else if ((uVar5 == 0xa9d6e18c) &&
            (iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f040 + 0x370ed80),0),
            iVar3 != 0)) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x38);
      goto LAB_0370ef54;
    }
  }
  else if (uVar5 < 0xc5b76eff) {
    if (uVar5 == 0xadbdc4cd) {
      iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f05c + 0x370ee60),0);
      if (iVar3 != 0) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x30);
        goto LAB_0370ef54;
      }
    }
    else if (uVar5 == 0xbfd53dc1) {
      iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f04c + 0x370ee8c),0);
      if (iVar3 != 0) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x1c);
        goto LAB_0370ef54;
      }
    }
    else if ((uVar5 == 0xc5b76efe) &&
            (iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f044 + 0x370ed2c),0),
            iVar3 != 0)) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x3c);
      goto LAB_0370ef54;
    }
  }
  else if (uVar5 == 0xc64b975c) {
    iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f054 + 0x370ef10),0);
    if (iVar3 != 0) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x28);
      goto LAB_0370ef54;
    }
  }
  else if (uVar5 == 0xef2136b6) {
    iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f064 + 0x370ef3c),0);
    if (iVar3 != 0) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x40);
      goto LAB_0370ef54;
    }
  }
  else if ((uVar5 == 0xfdb518ba) &&
          (iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f048 + 0x370eddc),0), iVar3 != 0
          )) {
    iVar12 = *(int *)(iVar12 + 0x1c);
    piVar1 = *(int **)(iVar2 + 0x20);
    goto LAB_0370ef54;
  }
  func_0x024f83b8(*(undefined4 *)(iRam0370f06c + 0x370efbc));
  uVar10 = func_0x024f83c8();
  uVar6 = func_0x024f83b8(*(undefined4 *)(iRam0370f070 + 0x370efd0));
  func_0x0509473c(uVar10,uVar6,uVar14,0,0);
  func_0x024f83c0(uVar10,iVar12);
  uVar21 = func_0x024f83bc();
  iVar12 = (int)((ulonglong)uVar21 >> 0x20);
  iVar2 = (int)uVar21;
  puVar9 = *(undefined4 **)(iVar12 + 0x1c);
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
  iVar3 = *(int *)(iVar2 + 0x44);
  if (*(int *)(**(int **)(iRam0370f578 + 0x370f15c) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar14 = func_0x05171434(uVar14,0);
  if (iVar3 == 0) {
    func_0x024f83d4();
  }
  uVar14 = func_0x0475399c(iVar3,uVar14,**(undefined4 **)(iRam0370f57c + 0x370f1a0));
  uVar5 = func_0x02965180(uVar14,0);
  if (uVar5 < 0xa9d6e18d) {
    if (uVar5 < 0x5470985c) {
      if (uVar5 == 0x2ff386a5) {
        iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f59c + 0x370f34c),0);
        if (iVar3 != 0) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x2c);
          goto LAB_0370f498;
        }
      }
      else if (uVar5 == 0x422e10b8) {
        iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f5a4 + 0x370f378),0);
        if (iVar3 != 0) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x34);
          goto LAB_0370f498;
        }
      }
      else if ((uVar5 == 0x5470985b) &&
              (iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f580 + 0x370f20c),0),
              iVar3 != 0)) {
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
    else if (uVar5 == 0x822195a3) {
      iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f5ac + 0x370f3fc),0);
      if (iVar3 != 0) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x14);
        goto LAB_0370f498;
      }
    }
    else if (uVar5 == 0x9bda6746) {
      iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f594 + 0x370f428),0);
      if (iVar3 != 0) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x24);
        goto LAB_0370f498;
      }
    }
    else if ((uVar5 == 0xa9d6e18c) &&
            (iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f584 + 0x370f2c4),0),
            iVar3 != 0)) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x38);
      goto LAB_0370f498;
    }
  }
  else if (uVar5 < 0xc5b76eff) {
    if (uVar5 == 0xadbdc4cd) {
      iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f5a0 + 0x370f3a4),0);
      if (iVar3 != 0) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x30);
        goto LAB_0370f498;
      }
    }
    else if (uVar5 == 0xbfd53dc1) {
      iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f590 + 0x370f3d0),0);
      if (iVar3 != 0) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x1c);
        goto LAB_0370f498;
      }
    }
    else if ((uVar5 == 0xc5b76efe) &&
            (iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f588 + 0x370f270),0),
            iVar3 != 0)) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x3c);
      goto LAB_0370f498;
    }
  }
  else if (uVar5 == 0xc64b975c) {
    iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f598 + 0x370f454),0);
    if (iVar3 != 0) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x28);
      goto LAB_0370f498;
    }
  }
  else if (uVar5 == 0xef2136b6) {
    iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f5a8 + 0x370f480),0);
    if (iVar3 != 0) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x40);
      goto LAB_0370f498;
    }
  }
  else if ((uVar5 == 0xfdb518ba) &&
          (iVar3 = func_0x04f57738(uVar14,**(undefined4 **)(iRam0370f58c + 0x370f320),0), iVar3 != 0
          )) {
    iVar12 = *(int *)(iVar12 + 0x1c);
    piVar1 = *(int **)(iVar2 + 0x20);
    goto LAB_0370f498;
  }
  func_0x024f83b8(*(undefined4 *)(iRam0370f5b0 + 0x370f500));
  uVar10 = func_0x024f83c8();
  uVar6 = func_0x024f83b8(*(undefined4 *)(iRam0370f5b4 + 0x370f514));
  func_0x0509473c(uVar10,uVar6,uVar14,0,0);
  func_0x024f83c0(uVar10,iVar12);
  uVar21 = func_0x024f83bc();
  iVar12 = (int)((ulonglong)uVar21 >> 0x20);
  iVar2 = (int)uVar21;
  puVar9 = *(undefined4 **)(iVar12 + 0x1c);
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
  iVar3 = *(int *)(iVar2 + 0x50);
  if (*(int *)(**(int **)(iRam0370fbb8 + 0x370f6c4) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar14 = func_0x05171434(uVar14,0);
  if (iVar3 == 0) {
    func_0x024f83d4();
  }
  uVar5 = func_0x0475399c(iVar3,uVar14,**(undefined4 **)(iRam0370fbbc + 0x370f708));
  uVar7 = func_0x02965180(uVar5,0);
  if (uVar7 < 0x35a83e7c) {
    if (uVar7 < 0x1f222a57) {
      if (uVar7 == 0x11e4781a) {
        iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam0370fbec + 0x370f980),0);
        if (iVar3 != 0) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x34);
          goto LAB_0370facc;
        }
      }
      else if (uVar7 == 0x1c7b49cc) {
        iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam0370fbf4 + 0x370f9ac),0);
        if (iVar3 != 0) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x48);
          goto LAB_0370facc;
        }
      }
      else if ((uVar7 == 0x1f222a56) &&
              (iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam0370fbc0 + 0x370f774),0),
              iVar3 != 0)) {
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
        iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam0370fbe0 + 0x370fa04),0);
        if (iVar3 != 0) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_0370facc;
        }
      }
      else if ((uVar7 == 0x24f2476f) &&
              (iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam0370fbc4 + 0x370f82c),0),
              iVar3 != 0)) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x38);
        goto LAB_0370facc;
      }
    }
    else if (uVar7 == 0x297b851e) {
      iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam0370fbf0 + 0x370fa88),0);
      if (iVar3 != 0) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x44);
        goto LAB_0370facc;
      }
    }
    else if ((uVar7 == 0x35a83e7b) &&
            (iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam0370fbc8 + 0x370f908),0),
            iVar3 != 0)) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x3c);
      goto LAB_0370facc;
    }
  }
  else if (uVar7 < 0x9e742f05) {
    if (uVar7 < 0x42250021) {
      if (uVar7 == 0x3ff3d659) {
        iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam0370fbf8 + 0x370f9d8),0);
        if (iVar3 != 0) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x14);
          goto LAB_0370facc;
        }
      }
      else if ((uVar7 == 0x42250020) &&
              (iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam0370fbcc + 0x370f7d8),0),
              iVar3 != 0)) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x20);
        goto LAB_0370facc;
      }
    }
    else if (uVar7 == 0x8f22eb81) {
      iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam0370fbdc + 0x370fa5c),0);
      if (iVar3 != 0) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_0370facc;
      }
    }
    else if ((uVar7 == 0x9e742f04) &&
            (iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam0370fbd0 + 0x370f8c4),0),
            iVar3 != 0)) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x4c);
      goto LAB_0370facc;
    }
  }
  else if (uVar7 < 0xb5cc8887) {
    if (uVar7 == 0xb4cc86f3) {
      iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam0370fbe4 + 0x370fa30),0);
      if (iVar3 != 0) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x24);
        goto LAB_0370facc;
      }
    }
    else if ((uVar7 == 0xb5cc8886) &&
            (iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam0370fbd4 + 0x370f880),0),
            iVar3 != 0)) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x28);
      goto LAB_0370facc;
    }
  }
  else if (uVar7 == 0xb6cc8a19) {
    iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam0370fbe8 + 0x370fab4),0);
    if (iVar3 != 0) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x2c);
      goto LAB_0370facc;
    }
  }
  else if ((uVar7 == 0xb7cc8bac) &&
          (iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam0370fbd8 + 0x370f954),0), iVar3 != 0)
          ) {
    iVar12 = *(int *)(iVar12 + 0x1c);
    piVar1 = *(int **)(iVar2 + 0x30);
    goto LAB_0370facc;
  }
  func_0x024f83b8(*(undefined4 *)(iRam0370fbfc + 0x370fb34));
  uVar7 = func_0x024f83c8();
  uVar14 = func_0x024f83b8(*(undefined4 *)(iRam0370fc00 + 0x370fb48));
  func_0x0509473c(uVar7,uVar14,uVar5,0,0);
  func_0x024f83c0(uVar7,iVar12);
  uVar21 = func_0x024f83bc();
  iVar12 = (int)((ulonglong)uVar21 >> 0x20);
  iVar2 = (int)uVar21;
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
  iVar3 = *(int *)(iVar2 + 0x50);
  if (*(int *)(**(int **)(iRam03710204 + 0x370fd10) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar14 = func_0x05171434(uVar14,0);
  if (iVar3 == 0) {
    func_0x024f83d4();
  }
  uVar5 = func_0x0475399c(iVar3,uVar14,**(undefined4 **)(iRam03710208 + 0x370fd54));
  uVar7 = func_0x02965180(uVar5,0);
  if (uVar7 < 0x35a83e7c) {
    if (uVar7 < 0x1f222a57) {
      if (uVar7 == 0x11e4781a) {
        iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam03710238 + 0x370ffcc),0);
        uVar15 = iVar3 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
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
        iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam03710240 + 0x370fff8),0);
        uVar15 = iVar3 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x48);
          goto LAB_03710118;
        }
      }
      else {
        bVar18 = 0x1f222a55 < uVar7;
        uVar15 = false;
        if (uVar7 == 0x1f222a56) {
          iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam0371020c + 0x370fdc0),0);
          uVar15 = iVar3 == 0;
          bVar18 = true;
          if (!(bool)uVar15) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x40);
            goto LAB_03710118;
          }
        }
      }
    }
    else if (uVar7 < 0x24f24770) {
      if (uVar7 == 0x22d6d693) {
        iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam0371022c + 0x3710050),0);
        uVar15 = iVar3 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_03710118;
        }
      }
      else {
        bVar18 = 0x24f2476e < uVar7;
        uVar15 = false;
        if (uVar7 == 0x24f2476f) {
          iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam03710210 + 0x370fe78),0);
          uVar15 = iVar3 == 0;
          bVar18 = true;
          if (!(bool)uVar15) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x38);
            goto LAB_03710118;
          }
        }
      }
    }
    else if (uVar7 == 0x297b851e) {
      iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam0371023c + 0x37100d4),0);
      uVar15 = iVar3 == 0;
      bVar18 = true;
      if (!(bool)uVar15) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x44);
        goto LAB_03710118;
      }
    }
    else {
      bVar18 = 0x35a83e7a < uVar7;
      uVar15 = false;
      if (uVar7 == 0x35a83e7b) {
        iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam03710214 + 0x370ff54),0);
        uVar15 = iVar3 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
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
        iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam03710244 + 0x3710024),0);
        uVar15 = iVar3 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x14);
          goto LAB_03710118;
        }
      }
      else {
        bVar18 = 0x4225001f < uVar7;
        uVar15 = false;
        if (uVar7 == 0x42250020) {
          iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam03710218 + 0x370fe24),0);
          uVar15 = iVar3 == 0;
          bVar18 = true;
          if (!(bool)uVar15) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x20);
            goto LAB_03710118;
          }
        }
      }
    }
    else if (uVar7 == 0x8f22eb81) {
      iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam03710228 + 0x37100a8),0);
      uVar15 = iVar3 == 0;
      bVar18 = true;
      if (!(bool)uVar15) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_03710118;
      }
    }
    else {
      bVar18 = 0x9e742f03 < uVar7;
      uVar15 = false;
      if (uVar7 == 0x9e742f04) {
        iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam0371021c + 0x370ff10),0);
        uVar15 = iVar3 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x4c);
          goto LAB_03710118;
        }
      }
    }
  }
  else if (uVar7 < 0xb5cc8887) {
    if (uVar7 == 0xb4cc86f3) {
      iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam03710230 + 0x371007c),0);
      uVar15 = iVar3 == 0;
      bVar18 = true;
      if (!(bool)uVar15) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x24);
        goto LAB_03710118;
      }
    }
    else {
      bVar18 = 0xb5cc8885 < uVar7;
      uVar15 = false;
      if (uVar7 == 0xb5cc8886) {
        iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam03710220 + 0x370fecc),0);
        uVar15 = iVar3 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x28);
          goto LAB_03710118;
        }
      }
    }
  }
  else if (uVar7 == 0xb6cc8a19) {
    iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam03710234 + 0x3710100),0);
    uVar15 = iVar3 == 0;
    bVar18 = true;
    if (!(bool)uVar15) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x2c);
      goto LAB_03710118;
    }
  }
  else {
    bVar18 = 0xb7cc8bab < uVar7;
    uVar15 = false;
    if (uVar7 == 0xb7cc8bac) {
      iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam03710224 + 0x370ffa0),0);
      uVar15 = iVar3 == 0;
      bVar18 = true;
      if (!(bool)uVar15) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x30);
        goto LAB_03710118;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam03710248 + 0x3710180));
  uVar7 = func_0x024f83c8();
  uVar14 = func_0x024f83b8(*(undefined4 *)(iRam0371024c + 0x3710194));
  func_0x0509473c(uVar7,uVar14,uVar5,0,0);
  func_0x024f83c0(uVar7,iVar12);
  uVar21 = func_0x024f83bc();
  iVar12 = (int)((ulonglong)uVar21 >> 0x20);
  iVar2 = (int)uVar21;
  bVar19 = bVar18;
  if ((bool)uVar15) {
    bVar19 = (char *)0xfe9fffff < unaff_r9 ||
             CARRY4((uint)(&UNK_01600000 + (int)unaff_r9),(uint)bVar18);
  }
  bVar16 = false;
  bVar20 = bVar19;
  if ((bool)uVar15 && &UNK_01600000 + (int)(unaff_r9 + bVar18) == (undefined *)0x0) {
    bVar20 = 0xffd2ffff < uVar7 || CARRY4(uVar7 + 0x2d0000,(uint)bVar19);
    uVar7 = uVar7 + 0x2d0000 + (uint)bVar19;
    bVar16 = uVar7 == 0;
  }
  bVar18 = bVar20;
  if (bVar16) {
    bVar18 = 0xffffffe7 < uVar5 || CARRY4(uVar5 + 0x18,(uint)bVar20);
  }
  bVar16 = bVar16 && uVar5 + 0x18 + (uint)bVar20 == 0;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xffffffef < uVar5 || CARRY4(uVar5 + 0x10,(uint)bVar18);
  }
  bVar16 = bVar16 && uVar5 + 0x10 + (uint)bVar18 == 0;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = 0xfffffff7 < uVar5 || CARRY4(uVar5 + 8,(uint)bVar19);
  }
  bVar16 = bVar16 && uVar5 + 8 + (uint)bVar19 == 0;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = CARRY4(uVar5,(uint)bVar18);
  }
  bVar17 = false;
  bVar20 = bVar19;
  if (bVar16 && uVar5 + bVar18 == 0) {
    bVar20 = 0xfffffc1f < uVar5 || CARRY4(uVar5 + 0x3e0,(uint)bVar19);
    unaff_r9 = (char *)(uVar5 + 0x3e0 + (uint)bVar19);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar20;
  if (bVar17) {
    bVar18 = 0xfffffc3f < uVar5 || CARRY4(uVar5 + 0x3c0,(uint)bVar20);
    unaff_r9 = (char *)(uVar5 + 0x3c0 + (uint)bVar20);
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xfffffc5f < uVar5 || CARRY4(uVar5 + 0x3a0,(uint)bVar18);
    unaff_r9 = (char *)(uVar5 + 0x3a0 + (uint)bVar18);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = 0xfffffc7f < uVar5 || CARRY4(uVar5 + 0x380,(uint)bVar19);
    unaff_r9 = (char *)(uVar5 + 0x380 + (uint)bVar19);
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xfffffc9f < uVar5 || CARRY4(uVar5 + 0x360,(uint)bVar18);
    unaff_r9 = (char *)(uVar5 + 0x360 + (uint)bVar18);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = 0xfffffcbf < uVar5 || CARRY4(uVar5 + 0x340,(uint)bVar19);
    unaff_r9 = (char *)(uVar5 + 0x340 + (uint)bVar19);
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xfffffcdf < uVar5 || CARRY4(uVar5 + 800,(uint)bVar18);
    unaff_r9 = (char *)(uVar5 + 800 + (uint)bVar18);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = 0xfffffcff < uVar5 || CARRY4(uVar5 + 0x300,(uint)bVar19);
    unaff_r9 = (char *)(uVar5 + 0x300 + (uint)bVar19);
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xfffffd1f < uVar5 || CARRY4(uVar5 + 0x2e0,(uint)bVar18);
    unaff_r9 = (char *)(uVar5 + 0x2e0 + (uint)bVar18);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = 0xfffffd3f < uVar5 || CARRY4(uVar5 + 0x2c0,(uint)bVar19);
    unaff_r9 = (char *)(uVar5 + 0x2c0 + (uint)bVar19);
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xfffffd5f < uVar5 || CARRY4(uVar5 + 0x2a0,(uint)bVar18);
    unaff_r9 = (char *)(uVar5 + 0x2a0 + (uint)bVar18);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = 0xff23ffff < uVar7 || CARRY4((uint)(&UNK_00dc0000 + uVar7),(uint)bVar19);
    bVar16 = &UNK_00dc0000 + bVar19 + uVar7 == (undefined *)0x0;
  }
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = (char *)0xfcffffff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x3000000),(uint)bVar18);
  }
  bVar17 = false;
  bVar20 = bVar19;
  if (bVar16 && unaff_r9 + bVar18 + 0x3000000 == (char *)0x0) {
    bVar20 = 0xfffff57f < uVar5 || CARRY4(uVar5 + 0xa80,(uint)bVar19);
    unaff_r9 = (char *)(uVar5 + 0xa80 + (uint)bVar19);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar20;
  if (bVar17) {
    bVar18 = 0xffffc1ff < uVar5 || CARRY4(uVar5 + 0x3e00,(uint)bVar20);
    unaff_r9 = (char *)(uVar5 + 0x3e00 + (uint)bVar20);
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xfffff2ff < uVar5 || CARRY4(uVar5 + 0xd00,(uint)bVar18);
    unaff_r9 = (char *)(uVar5 + 0xd00 + (uint)bVar18);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = 0xfffffa7f < uVar5 || CARRY4(uVar5 + 0x580,(uint)bVar19);
    unaff_r9 = (char *)(uVar5 + 0x580 + (uint)bVar19);
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xffffdfff < uVar5 || CARRY4(uVar5 + 0x2000,(uint)bVar18);
    unaff_r9 = (char *)(uVar5 + 0x2000 + (uint)bVar18);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = 0xffffcfff < uVar5 || CARRY4(uVar5 + 0x3000,(uint)bVar19);
    unaff_r9 = (char *)(uVar5 + 0x3000 + (uint)bVar19);
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xffff2bff < uVar5 || CARRY4(uVar5 + 0xd400,(uint)bVar18);
    unaff_r9 = (char *)(uVar5 + 0xd400 + (uint)bVar18);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = 0xfffc8fff < uVar5 ||
             CARRY4((uint)(
                          "_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initIPKwEENS_9_MetaBaseIXsr27__is_cpp17_forward_iteratorIT_EE5valueEE13_EnableIfImplIvEESA_SA_"
                          + uVar5 + 0x91),(uint)bVar19);
    unaff_r9 = "_ZNSt6__ndk112basic_stringIwNS_11char_traitsIwEENS_9allocatorIwEEE6__initIPKwEENS_9_MetaBaseIXsr27__is_cpp17_forward_iteratorIT_EE5valueEE13_EnableIfImplIvEESA_SA_"
               + (uint)bVar19 + uVar5 + 0x91;
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xffffbbff < uVar5 || CARRY4(uVar5 + 0x4400,(uint)bVar18);
    unaff_r9 = (char *)(uVar5 + 0x4400 + (uint)bVar18);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = 0xfffc6fff < uVar5 ||
             CARRY4((uint)("_ZNSt6__ndk16localeC2ERKS0_PKci" + uVar5 + 0x15),(uint)bVar19);
    unaff_r9 = "_ZNSt6__ndk16localeC2ERKS0_PKci" + (uint)bVar19 + uVar5 + 0x15;
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xfffe1fff < uVar5 || CARRY4(uVar5 + 0x1e000,(uint)bVar18);
    unaff_r9 = (char *)(uVar5 + 0x1e000 + (uint)bVar18);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = 0xffff67ff < uVar5 || CARRY4(uVar5 + 0x9800,(uint)bVar19);
    unaff_r9 = (char *)(uVar5 + 0x9800 + (uint)bVar19);
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xfffd4fff < uVar5 ||
             CARRY4((uint)(
                          "_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEEC2EPNS_15basic_streambufIcS2_EE"
                          + uVar5 + 0x1d),(uint)bVar18);
    unaff_r9 = "_ZNSt6__ndk113basic_istreamIcNS_11char_traitsIcEEEC2EPNS_15basic_streambufIcS2_EE" +
               (uint)bVar18 + uVar5 + 0x1d;
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = 0xffff8bff < uVar5 || CARRY4(uVar5 + 0x7400,(uint)bVar19);
    unaff_r9 = (char *)(uVar5 + 0x7400 + (uint)bVar19);
    bVar16 = unaff_r9 == (char *)0x0;
  }
  if (bVar16) {
    unaff_r9 = (char *)(uVar5 + 0x3800 + (uint)bVar18);
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
  iVar3 = *(int *)(iVar2 + 0x3c);
  if (*(int *)(**(int **)(iRam037106bc + 0x3710320) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar14 = func_0x05171434(uVar14,0);
  if (iVar3 == 0) {
    func_0x024f83d4();
  }
  uVar5 = func_0x0475399c(iVar3,uVar14,**(undefined4 **)(iRam037106c0 + 0x3710364));
  uVar7 = func_0x02965180(uVar5,0);
  if (uVar7 < 0xa5621015) {
    if (uVar7 < 0x775ef500) {
      if (uVar7 == 0x392d1efa) {
        iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam037106e8 + 0x37104f0),0);
        uVar15 = iVar3 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
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
        bVar18 = 0x775ef4fe < uVar7;
        uVar15 = false;
        if (uVar7 == 0x775ef4ff) {
          iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam037106c4 + 0x37103c0),0);
          uVar15 = iVar3 == 0;
          bVar18 = true;
          if (!(bool)uVar15) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x28);
            goto LAB_037105e4;
          }
        }
      }
    }
    else if (uVar7 == 0x8950c121) {
      iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam037106d4 + 0x3710548),0);
      uVar15 = iVar3 == 0;
      bVar18 = true;
      if (!(bool)uVar15) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_037105e4;
      }
    }
    else if (uVar7 == 0xa4ebb130) {
      iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam037106e4 + 0x3710574),0);
      uVar15 = iVar3 == 0;
      bVar18 = true;
      if (!(bool)uVar15) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x38);
        goto LAB_037105e4;
      }
    }
    else {
      bVar18 = 0xa5621013 < uVar7;
      uVar15 = false;
      if (uVar7 == 0xa5621014) {
        iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam037106c8 + 0x3710468),0);
        uVar15 = iVar3 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x30);
          goto LAB_037105e4;
        }
      }
    }
  }
  else if (uVar7 < 0xb9cd4293) {
    if (uVar7 == 0xb881e6cb) {
      iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam037106e0 + 0x371051c),0);
      uVar15 = iVar3 == 0;
      bVar18 = true;
      if (!(bool)uVar15) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x34);
        goto LAB_037105e4;
      }
    }
    else {
      bVar18 = 0xb9cd4291 < uVar7;
      uVar15 = false;
      if (uVar7 == 0xb9cd4292) {
        iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam037106cc + 0x3710414),0);
        uVar15 = iVar3 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_037105e4;
        }
      }
    }
  }
  else if (uVar7 == 0xbafc2442) {
    iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam037106dc + 0x37105a0),0);
    uVar15 = iVar3 == 0;
    bVar18 = true;
    if (!(bool)uVar15) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x2c);
      goto LAB_037105e4;
    }
  }
  else if (uVar7 == 0xc16fefa5) {
    iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam037106d8 + 0x37105cc),0);
    uVar15 = iVar3 == 0;
    bVar18 = true;
    if (!(bool)uVar15) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x24);
      goto LAB_037105e4;
    }
  }
  else {
    bVar18 = 0xec3691f0 < uVar7;
    uVar15 = false;
    if (uVar7 == 0xec3691f1) {
      iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam037106d0 + 0x37104c4),0);
      uVar15 = iVar3 == 0;
      bVar18 = true;
      if (!(bool)uVar15) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x20);
        goto LAB_037105e4;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam037106ec + 0x371064c));
  uVar7 = func_0x024f83c8();
  uVar14 = func_0x024f83b8(*(undefined4 *)(iRam037106f0 + 0x3710660));
  func_0x0509473c(uVar7,uVar14,uVar5,0,0);
  func_0x024f83c0(uVar7,iVar12);
  uVar21 = func_0x024f83bc();
  iVar12 = (int)((ulonglong)uVar21 >> 0x20);
  iVar2 = (int)uVar21;
  bVar19 = bVar18;
  if ((bool)uVar15) {
    bVar19 = (char *)0xfffffffc < unaff_r9 || CARRY4((uint)(unaff_r9 + 3),(uint)bVar18);
  }
  bVar16 = false;
  bVar20 = bVar19;
  if ((bool)uVar15 && unaff_r9 + bVar18 + 3 == (char *)0x0) {
    bVar20 = 0x5ffffffe < uVar7 || CARRY4(uVar7 + 0xa0000001,(uint)bVar19);
    uVar7 = uVar7 + 0xa0000001 + (uint)bVar19;
    bVar16 = uVar7 == 0;
  }
  bVar17 = false;
  bVar18 = bVar20;
  if (bVar16) {
    bVar18 = 0xff1fffff < uVar5 || CARRY4(uVar5 + 0xe00000,(uint)bVar20);
    unaff_r9 = (char *)(uVar5 + 0xe00000 + (uint)bVar20);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = 0xff27ffff < uVar5 || CARRY4((uint)(&UNK_00d80000 + uVar5),(uint)bVar18);
    unaff_r9 = &UNK_00d80000 + bVar18 + uVar5;
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = 0xff2fffff < uVar5 || CARRY4((uint)(&UNK_00d00000 + uVar5),(uint)bVar19);
    unaff_r9 = &UNK_00d00000 + bVar19 + uVar5;
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = 0xff37ffff < uVar5 || CARRY4((uint)(&UNK_00c80000 + uVar5),(uint)bVar18);
    unaff_r9 = &UNK_00c80000 + bVar18 + uVar5;
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = 0xff3fffff < uVar5 || CARRY4(uVar5 + 0xc00000,(uint)bVar19);
    unaff_r9 = (char *)(uVar5 + 0xc00000 + (uint)bVar19);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = 0xff47ffff < uVar5 || CARRY4((uint)(&UNK_00b80000 + uVar5),(uint)bVar18);
    unaff_r9 = &UNK_00b80000 + bVar18 + uVar5;
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = 0xff4fffff < uVar5 || CARRY4((uint)(&UNK_00b00000 + uVar5),(uint)bVar19);
    unaff_r9 = &UNK_00b00000 + bVar19 + uVar5;
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = 0xff57ffff < uVar5 || CARRY4((uint)(&UNK_00a80000 + uVar5),(uint)bVar18);
    unaff_r9 = &UNK_00a80000 + bVar18 + uVar5;
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = 0xff5fffff < uVar5 || CARRY4((uint)(&UNK_00a00000 + uVar5),(uint)bVar19);
    unaff_r9 = &UNK_00a00000 + bVar19 + uVar5;
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar19 = bVar18;
  if (bVar17) {
    bVar19 = 0xff67ffff < uVar5 || CARRY4((uint)(&UNK_00980000 + uVar5),(uint)bVar18);
    unaff_r9 = &UNK_00980000 + bVar18 + uVar5;
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = 0x3ffffff3 < uVar7 || CARRY4(uVar7 + 0xc000000c,(uint)bVar19);
  }
  bVar16 = bVar16 && uVar7 + 0xc000000c + (uint)bVar19 == 0;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = (char *)0xffffffdf < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x20),(uint)bVar18);
  }
  bVar17 = false;
  bVar20 = bVar19;
  if (bVar16 && unaff_r9 + bVar18 + 0x20 == (char *)0x0) {
    bVar20 = 0xfcefffff < uVar5 || CARRY4((uint)(&UNK_03100000 + uVar5),(uint)bVar19);
    unaff_r9 = &UNK_03100000 + bVar19 + uVar5;
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar20;
  if (bVar17) {
    bVar18 = 0xffcfffff < uVar5 || CARRY4(uVar5 + 0x300000,(uint)bVar20);
    unaff_r9 = (char *)(uVar5 + 0x300000 + (uint)bVar20);
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xfe1fffff < uVar5 || CARRY4(uVar5 + 0x1e00000,(uint)bVar18);
    unaff_r9 = (char *)(uVar5 + 0x1e00000 + (uint)bVar18);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = 0xf3bfffff < uVar5 || CARRY4(uVar5 + 0xc400000,(uint)bVar19);
    unaff_r9 = (char *)(uVar5 + 0xc400000 + (uint)bVar19);
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xfd7fffff < uVar5 || CARRY4(uVar5 + 0x2800000,(uint)bVar18);
    unaff_r9 = (char *)(uVar5 + 0x2800000 + (uint)bVar18);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = 0xceffffff < uVar5 || CARRY4(uVar5 + 0x31000000,(uint)bVar19);
    unaff_r9 = (char *)(uVar5 + 0x31000000 + (uint)bVar19);
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xc9ffffff < uVar5 || CARRY4(uVar5 + 0x36000000,(uint)bVar18);
    unaff_r9 = (char *)(uVar5 + 0x36000000 + (uint)bVar18);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = 0xf87fffff < uVar5 || CARRY4(uVar5 + 0x7800000,(uint)bVar19);
    unaff_r9 = (char *)(uVar5 + 0x7800000 + (uint)bVar19);
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xff3fffff < uVar5 || CARRY4(uVar5 + 0xc00000,(uint)bVar18);
    unaff_r9 = (char *)(uVar5 + 0xc00000 + (uint)bVar18);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  if (bVar17) {
    unaff_r9 = (char *)(uVar5 + 0x8c00000 + (uint)bVar19);
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
  iVar3 = *(int *)(iVar2 + 0x3c);
  if (*(int *)(**(int **)(iRam03710b60 + 0x37107c4) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar14 = func_0x05171434(uVar14,0);
  if (iVar3 == 0) {
    func_0x024f83d4();
  }
  uVar5 = func_0x0475399c(iVar3,uVar14,**(undefined4 **)(iRam03710b64 + 0x3710808));
  uVar7 = func_0x02965180(uVar5,0);
  if (uVar7 < 0xa5621015) {
    if (uVar7 < 0x775ef500) {
      if (uVar7 == 0x392d1efa) {
        iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam03710b8c + 0x3710994),0);
        uVar15 = iVar3 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
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
        bVar18 = 0x775ef4fe < uVar7;
        uVar15 = false;
        if (uVar7 == 0x775ef4ff) {
          iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam03710b68 + 0x3710864),0);
          uVar15 = iVar3 == 0;
          bVar18 = true;
          if (!(bool)uVar15) {
            iVar12 = *(int *)(iVar12 + 0x1c);
            piVar1 = *(int **)(iVar2 + 0x28);
            goto LAB_03710a88;
          }
        }
      }
    }
    else if (uVar7 == 0x8950c121) {
      iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam03710b78 + 0x37109ec),0);
      uVar15 = iVar3 == 0;
      bVar18 = true;
      if (!(bool)uVar15) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x18);
        goto LAB_03710a88;
      }
    }
    else if (uVar7 == 0xa4ebb130) {
      iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam03710b88 + 0x3710a18),0);
      uVar15 = iVar3 == 0;
      bVar18 = true;
      if (!(bool)uVar15) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x38);
        goto LAB_03710a88;
      }
    }
    else {
      bVar18 = 0xa5621013 < uVar7;
      uVar15 = false;
      if (uVar7 == 0xa5621014) {
        iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam03710b6c + 0x371090c),0);
        uVar15 = iVar3 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x30);
          goto LAB_03710a88;
        }
      }
    }
  }
  else if (uVar7 < 0xb9cd4293) {
    if (uVar7 == 0xb881e6cb) {
      iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam03710b84 + 0x37109c0),0);
      uVar15 = iVar3 == 0;
      bVar18 = true;
      if (!(bool)uVar15) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x34);
        goto LAB_03710a88;
      }
    }
    else {
      bVar18 = 0xb9cd4291 < uVar7;
      uVar15 = false;
      if (uVar7 == 0xb9cd4292) {
        iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam03710b70 + 0x37108b8),0);
        uVar15 = iVar3 == 0;
        bVar18 = true;
        if (!(bool)uVar15) {
          iVar12 = *(int *)(iVar12 + 0x1c);
          piVar1 = *(int **)(iVar2 + 0x1c);
          goto LAB_03710a88;
        }
      }
    }
  }
  else if (uVar7 == 0xbafc2442) {
    iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam03710b80 + 0x3710a44),0);
    uVar15 = iVar3 == 0;
    bVar18 = true;
    if (!(bool)uVar15) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x2c);
      goto LAB_03710a88;
    }
  }
  else if (uVar7 == 0xc16fefa5) {
    iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam03710b7c + 0x3710a70),0);
    uVar15 = iVar3 == 0;
    bVar18 = true;
    if (!(bool)uVar15) {
      iVar12 = *(int *)(iVar12 + 0x1c);
      piVar1 = *(int **)(iVar2 + 0x24);
      goto LAB_03710a88;
    }
  }
  else {
    bVar18 = 0xec3691f0 < uVar7;
    uVar15 = false;
    if (uVar7 == 0xec3691f1) {
      iVar3 = func_0x04f57738(uVar5,**(undefined4 **)(iRam03710b74 + 0x3710968),0);
      uVar15 = iVar3 == 0;
      bVar18 = true;
      if (!(bool)uVar15) {
        iVar12 = *(int *)(iVar12 + 0x1c);
        piVar1 = *(int **)(iVar2 + 0x20);
        goto LAB_03710a88;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam03710b90 + 0x3710af0));
  uVar7 = func_0x024f83c8();
  uVar14 = func_0x024f83b8(*(undefined4 *)(iRam03710b94 + 0x3710b04));
  func_0x0509473c(uVar7,uVar14,uVar5,0,0);
  func_0x024f83c0(uVar7,iVar12);
  uVar21 = func_0x024f83bc();
  iVar2 = (int)((ulonglong)uVar21 >> 0x20);
  bVar19 = bVar18;
  if ((bool)uVar15) {
    bVar19 = (char *)0xffff97ff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x6800),(uint)bVar18);
  }
  bVar16 = (bool)uVar15 && unaff_r9 + bVar18 + 0x6800 == (char *)0x0;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = 0xfffff3bf < uVar7 || CARRY4(uVar7 + 0xc40,(uint)bVar19);
  }
  bVar17 = false;
  bVar20 = bVar18;
  if (bVar16 && uVar7 + 0xc40 + (uint)bVar19 == 0) {
    bVar20 = 0xc3ffffff < uVar5 || CARRY4(uVar5 + 0x3c000000,(uint)bVar18);
    unaff_r9 = (char *)(uVar5 + 0x3c000000 + (uint)bVar18);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar20;
  if (bVar17) {
    bVar18 = 0xcbffffff < uVar5 || CARRY4(uVar5 + 0x34000000,(uint)bVar20);
    unaff_r9 = (char *)(uVar5 + 0x34000000 + (uint)bVar20);
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xd3ffffff < uVar5 || CARRY4(uVar5 + 0x2c000000,(uint)bVar18);
    unaff_r9 = (char *)(uVar5 + 0x2c000000 + (uint)bVar18);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = 0xdbffffff < uVar5 || CARRY4(uVar5 + 0x24000000,(uint)bVar19);
    unaff_r9 = (char *)(uVar5 + 0x24000000 + (uint)bVar19);
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xe3ffffff < uVar5 || CARRY4(uVar5 + 0x1c000000,(uint)bVar18);
    unaff_r9 = (char *)(uVar5 + 0x1c000000 + (uint)bVar18);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = 0xebffffff < uVar5 || CARRY4(uVar5 + 0x14000000,(uint)bVar19);
    unaff_r9 = (char *)(uVar5 + 0x14000000 + (uint)bVar19);
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xf3ffffff < uVar5 || CARRY4(uVar5 + 0xc000000,(uint)bVar18);
    unaff_r9 = (char *)(uVar5 + 0xc000000 + (uint)bVar18);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = 0xfbffffff < uVar5 || CARRY4(uVar5 + 0x4000000,(uint)bVar19);
    unaff_r9 = (char *)(uVar5 + 0x4000000 + (uint)bVar19);
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar17 = false;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xffffffc < uVar5 || CARRY4(uVar5 + 0xf0000003,(uint)bVar18);
    unaff_r9 = (char *)(uVar5 + 0xf0000003 + (uint)bVar18);
    bVar17 = unaff_r9 == (char *)0x0;
  }
  bVar16 = false;
  bVar18 = bVar19;
  if (bVar17) {
    bVar18 = 0x2ffffffc < uVar5 || CARRY4(uVar5 + 0xd0000003,(uint)bVar19);
    unaff_r9 = (char *)(uVar5 + 0xd0000003 + (uint)bVar19);
    bVar16 = unaff_r9 == (char *)0x0;
  }
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xfffffd7f < uVar7 || CARRY4(uVar7 + 0x280,(uint)bVar18);
  }
  bVar16 = bVar16 && uVar7 + 0x280 + (uint)bVar18 == 0;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = (char *)0xfffe0fff < unaff_r9 || CARRY4((uint)(unaff_r9 + 0x1f000),(uint)bVar19);
  }
  bVar16 = bVar16 && unaff_r9 + bVar19 + 0x1f000 == (char *)0x0;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0x7fffffff < uVar5 || CARRY4(uVar5 + 0x80000000,(uint)bVar18);
  }
  bVar16 = bVar16 && uVar5 + 0x80000000 + (uint)bVar18 == 0;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = 0x7ffffff9 < uVar5 || CARRY4(uVar5 + 0x80000006,(uint)bVar19);
  }
  bVar16 = bVar16 && uVar5 + 0x80000006 + (uint)bVar19 == 0;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xbffffff2 < uVar5 || CARRY4(uVar5 + 0x4000000d,(uint)bVar18);
  }
  bVar16 = bVar16 && uVar5 + 0x4000000d + (uint)bVar18 == 0;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = 0xfffffffd < uVar5 || CARRY4(uVar5 + 2,(uint)bVar19);
  }
  bVar16 = bVar16 && uVar5 + 2 + (uint)bVar19 == 0;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xffffffde < uVar5 || CARRY4(uVar5 + 0x21,(uint)bVar18);
  }
  bVar16 = bVar16 && uVar5 + 0x21 + (uint)bVar18 == 0;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = 0xfffffff7 < uVar5 || CARRY4(uVar5 + 8,(uint)bVar19);
  }
  bVar16 = bVar16 && uVar5 + 8 + (uint)bVar19 == 0;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xfffffff2 < uVar5 || CARRY4(uVar5 + 0xd,(uint)bVar18);
  }
  bVar16 = bVar16 && uVar5 + 0xd + (uint)bVar18 == 0;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = 0xffffffca < uVar5 || CARRY4(uVar5 + 0x35,(uint)bVar19);
  }
  bVar16 = bVar16 && uVar5 + 0x35 + (uint)bVar19 == 0;
  bVar19 = bVar18;
  if (bVar16) {
    bVar19 = 0xffffffe5 < uVar5 || CARRY4(uVar5 + 0x1a,(uint)bVar18);
  }
  bVar16 = bVar16 && uVar5 + 0x1a + (uint)bVar18 == 0;
  bVar18 = bVar19;
  if (bVar16) {
    bVar18 = 0xffffffc5 < uVar5 || CARRY4(uVar5 + 0x3a,(uint)bVar19);
  }
  bVar17 = false;
  bVar20 = bVar18;
  if (bVar16 && uVar5 + 0x3a + (uint)bVar19 == 0) {
    bVar20 = 0xd9ffffff < uVar7 || CARRY4(uVar7 + 0x26000000,(uint)bVar18);
    uVar5 = uVar7 + 0x26000000 + (uint)bVar18;
    bVar17 = uVar5 == 0;
  }
  iVar12 = extraout_r2;
  if (bVar17) {
    iVar12 = uVar5 + 0xfc00000 + (uint)bVar20;
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
  iVar3 = func_0x024ef144(iVar2,0,0);
  if (iVar3 != 0) {
    if (iVar2 == 0) {
      func_0x024f83d4();
    }
    piVar1 = (int *)func_0x03639de0(iVar2,**(undefined4 **)(iVar12 + 0x1c));
    if (piVar1 == (int *)0x0) {
      piVar11 = (int *)func_0x024f8400(**(undefined4 **)(_UNK_03710e78 + 0x3710c74),3);
      if ((int)uVar21 == 0) {
        func_0x024f83d4();
      }
      piVar1 = (int *)func_0x051b16a4((int)uVar21,0);
      if (piVar1 == (int *)0x0) {
        func_0x024f83d4();
      }
      iVar3 = (**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
      if (piVar11 == (int *)0x0) {
        func_0x024f83d4();
      }
      if ((iVar3 != 0) &&
         (iVar8 = func_0x024f83e4(iVar3,*(undefined4 *)(*piVar11 + 0x20)), iVar8 == 0)) {
        uVar14 = func_0x024f83e8();
        func_0x024f83c0(uVar14,0);
      }
      if (piVar11[3] == 0) {
        func_0x024f83ec();
      }
      piVar11[4] = iVar3;
      func_0x024f83f0(piVar11 + 4,iVar3);
      if (iVar2 == 0) {
        func_0x024f83d4();
      }
      iVar2 = func_0x024ef0f0(iVar2,0);
      if ((iVar2 != 0) &&
         (iVar3 = func_0x024f83e4(iVar2,*(undefined4 *)(*piVar11 + 0x20)), iVar3 == 0)) {
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

