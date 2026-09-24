
/* WARNING: Removing unreachable block (ram,0x035949e4) */
/* WARNING: Removing unreachable block (ram,0x036e7abc) */
/* WARNING: Removing unreachable block (ram,0x036e7578) */
/* WARNING: Removing unreachable block (ram,0x036e8000) */
/* WARNING: Removing unreachable block (ram,0x035949f0) */
/* WARNING: Removing unreachable block (ram,0x035949e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0310bd74(undefined4 param_1)

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
  undefined4 uVar13;
  int *piVar14;
  int iVar15;
  char *pcVar16;
  undefined4 uVar17;
  int iVar18;
  int unaff_r8;
  uint unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  int *piVar19;
  undefined4 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  int iVar24;
  bool bVar25;
  undefined1 uVar26;
  bool bVar27;
  bool bVar28;
  undefined1 uVar29;
  bool bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  uint *puVar34;
  undefined8 uVar35;
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
  
  pcVar16 = (char *)(_UNK_0310be54 + 0x310bd88);
  if (*pcVar16 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0310be58 + 0x310bd9c));
    func_0x01438628(*(undefined4 *)(_UNK_0310be5c + 0x310bda8));
    func_0x01438628(*(undefined4 *)(_UNK_0310be60 + 0x310bdb4));
    *pcVar16 = '\x01';
  }
  iVar4 = func_0x02953fd4(0x7887,0);
  if (iVar4 != 0) {
    iVar4 = func_0x029540a4(0x7887,0);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    pcVar16 = (char *)(_UNK_0291a710 + 0x291a630);
    if (*pcVar16 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0291a714 + 0x291a644),param_1,0);
      *pcVar16 = '\x01';
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
    iVar15 = *(int *)(iVar4 + 8);
    uVar17 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar15 == 0) {
      func_0x014388e4();
    }
    uVar13 = 2;
    if (iVar4 == 0) {
      uVar13 = 1;
    }
    func_0x024f56d0(iVar15,uVar17,&uStack_30,uVar13,0,0);
    piVar3 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_0291a718 + 0x291a700));
    return piVar3;
  }
  if (*(int *)(**(int **)(_UNK_0310be64 + 0x310be0c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0310be68 + 0x310be28));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar15 = **(int **)(_UNK_0310be6c + 0x310be48);
  puVar20 = auStack_20;
  puVar12 = *(undefined4 **)(iVar15 + 0x1c);
  if (puVar12 == (undefined4 *)0x0) {
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
    puVar12 = *(undefined4 **)(iVar15 + 0x1c);
    if (puVar12 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar15);
      puVar12 = *(undefined4 **)(iVar15 + 0x1c);
    }
  }
  uVar17 = *puVar12;
  iVar18 = *(int *)(iVar4 + 0x44);
  if (*(int *)(**(int **)(iRam036e753c + 0x36e7120) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar7 = func_0x05171434(uVar17,0);
  if (iVar18 == 0) {
    func_0x024f83d4();
  }
  uVar17 = func_0x0475399c(iVar18,uVar7,**(undefined4 **)(iRam036e7540 + 0x36e7164));
  uVar8 = func_0x02965180(uVar17,0);
  if (uVar8 < 0x787a9e7c) {
    if (uVar8 < 0x4715ab4f) {
      if (uVar8 == 0x1156f848) {
        iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7570 + 0x36e7310),0);
        uVar26 = iVar18 == 0;
        bVar31 = true;
        if (!(bool)uVar26) {
          iVar15 = *(int *)(iVar15 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x20);
LAB_036e745c:
          iVar4 = *(int *)(iVar15 + 4);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x024f83fc(iVar4);
          }
          piVar14 = (int *)0x0;
          if (piVar3 != (int *)0x0) {
            if (((uint)*(byte *)(iVar4 + 0xb8) <= (uint)*(byte *)(*piVar3 + 0xb8)) &&
               (piVar14 = piVar3,
               *(int *)(*(int *)(*piVar3 + 100) + (uint)*(byte *)(iVar4 + 0xb8) * 4 + -4) != iVar4))
            {
              piVar14 = (int *)0x0;
            }
          }
          return piVar14;
        }
      }
      else if (uVar8 == 0x3169fa72) {
        iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7558 + 0x36e733c),0);
        uVar26 = iVar18 == 0;
        bVar31 = true;
        if (!(bool)uVar26) {
          iVar15 = *(int *)(iVar15 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x28);
          goto LAB_036e745c;
        }
      }
      else {
        bVar31 = 0x4715ab4d < uVar8;
        uVar26 = false;
        if (uVar8 == 0x4715ab4e) {
          iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7544 + 0x36e71d0),0);
          uVar26 = iVar18 == 0;
          bVar31 = true;
          if (!(bool)uVar26) {
            iVar15 = *(int *)(iVar15 + 0x1c);
            piVar3 = *(int **)(iVar4 + 0x34);
            goto LAB_036e745c;
          }
        }
      }
    }
    else if (uVar8 == 0x4ffedf5c) {
      iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e756c + 0x36e73c0),0);
      uVar26 = iVar18 == 0;
      bVar31 = true;
      if (!(bool)uVar26) {
        iVar15 = *(int *)(iVar15 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x40);
        goto LAB_036e745c;
      }
    }
    else if (uVar8 == 0x6d81ef27) {
      iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e755c + 0x36e73ec),0);
      uVar26 = iVar18 == 0;
      bVar31 = true;
      if (!(bool)uVar26) {
        iVar15 = *(int *)(iVar15 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x2c);
        goto LAB_036e745c;
      }
    }
    else {
      bVar31 = 0x787a9e7a < uVar8;
      uVar26 = false;
      if (uVar8 == 0x787a9e7b) {
        iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7548 + 0x36e7288),0);
        uVar26 = iVar18 == 0;
        bVar31 = true;
        if (!(bool)uVar26) {
          iVar15 = *(int *)(iVar15 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x1c);
          goto LAB_036e745c;
        }
      }
    }
  }
  else if (uVar8 < 0xa3b10e3e) {
    if (uVar8 == 0x80fccce3) {
      iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7560 + 0x36e7368),0);
      uVar26 = iVar18 == 0;
      bVar31 = true;
      if (!(bool)uVar26) {
        iVar15 = *(int *)(iVar15 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x30);
        goto LAB_036e745c;
      }
    }
    else if (uVar8 == 0x8bafe426) {
      iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7554 + 0x36e7394),0);
      uVar26 = iVar18 == 0;
      bVar31 = true;
      if (!(bool)uVar26) {
        iVar15 = *(int *)(iVar15 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x24);
        goto LAB_036e745c;
      }
    }
    else {
      bVar31 = 0xa3b10e3c < uVar8;
      uVar26 = false;
      if (uVar8 == 0xa3b10e3d) {
        iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e754c + 0x36e7234),0);
        uVar26 = iVar18 == 0;
        bVar31 = true;
        if (!(bool)uVar26) {
          iVar15 = *(int *)(iVar15 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x18);
          goto LAB_036e745c;
        }
      }
    }
  }
  else if (uVar8 == 0xd9f47ec6) {
    iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7564 + 0x36e7418),0);
    uVar26 = iVar18 == 0;
    bVar31 = true;
    if (!(bool)uVar26) {
      iVar15 = *(int *)(iVar15 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x38);
      goto LAB_036e745c;
    }
  }
  else if (uVar8 == 0xc4e0c914) {
    iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7568 + 0x36e7444),0);
    uVar26 = iVar18 == 0;
    bVar31 = true;
    if (!(bool)uVar26) {
      iVar15 = *(int *)(iVar15 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x3c);
      goto LAB_036e745c;
    }
  }
  else {
    bVar31 = 0xb139f700 < uVar8;
    uVar26 = false;
    if (uVar8 == 0xb139f701) {
      iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7550 + 0x36e72e4),0);
      uVar26 = iVar18 == 0;
      bVar31 = true;
      if (!(bool)uVar26) {
        iVar15 = *(int *)(iVar15 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x14);
        goto LAB_036e745c;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036e7574 + 0x36e74c4));
  uVar13 = func_0x024f83c8();
  uVar9 = func_0x024f83b8(*(undefined4 *)(iRam036e7578 + 0x36e74d8));
  auStack_20[0] = 0;
  func_0x0509473c(uVar13,uVar9,uVar17,0);
  func_0x024f83c0(uVar13,iVar15);
  iVar24 = 0x36e7504;
  uVar35 = func_0x024f83bc();
  iVar18 = (int)((ulonglong)uVar35 >> 0x20);
  iVar4 = (int)uVar35;
  bVar27 = false;
  bVar32 = bVar31;
  if ((bool)uVar26) {
    bVar32 = 0x6fffffff < unaff_r11 || CARRY4(unaff_r11 + 0x90000000,(uint)bVar31);
    puVar20 = (undefined4 *)(unaff_r11 + 0x90000000 + (uint)bVar31);
    bVar27 = (undefined1 *)(unaff_r11 + 0x90000000 + (uint)bVar31) == (undefined1 *)0x0;
  }
  bVar28 = false;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = 0xdfffffff < uVar7 || CARRY4(uVar7 + 0x20000000,(uint)bVar32);
    iVar24 = uVar7 + 0x20000000 + (uint)bVar32;
    bVar28 = iVar24 == 0;
  }
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xfffffffc < unaff_r9 || CARRY4(unaff_r9 + 3,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 3 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0x7ffffffd < unaff_r9 || CARRY4(unaff_r9 + 0x80000002,(uint)bVar32);
  }
  bVar28 = bVar28 && unaff_r9 + 0x80000002 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xfffffffd < unaff_r9 || CARRY4(unaff_r9 + 2,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 2 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0x7ffffffe < unaff_r9 || CARRY4(unaff_r9 + 0x80000001,(uint)bVar32);
  }
  bVar28 = bVar28 && unaff_r9 + 0x80000001 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xfffffffe < unaff_r9 || CARRY4(unaff_r9 + 1,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 1 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0x7fffffff < unaff_r9 || CARRY4(unaff_r9 + 0x80000000,(uint)bVar32);
  }
  bVar28 = bVar28 && unaff_r9 + 0x80000000 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = CARRY4(unaff_r9,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0xffffffc1 < unaff_r9 || CARRY4(unaff_r9 + 0x3e,(uint)bVar32);
  }
  bVar28 = bVar28 && unaff_r9 + 0x3e + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xffffffc3 < unaff_r9 || CARRY4(unaff_r9 + 0x3c,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 0x3c + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0xffffffc5 < unaff_r9 || CARRY4(unaff_r9 + 0x3a,(uint)bVar32);
  }
  bVar28 = bVar28 && unaff_r9 + 0x3a + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xffffffc7 < unaff_r9 || CARRY4(unaff_r9 + 0x38,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 0x38 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0xffffffc9 < unaff_r9 || CARRY4(unaff_r9 + 0x36,(uint)bVar32);
  }
  bVar27 = false;
  bVar33 = bVar31;
  if (bVar28 && unaff_r9 + 0x36 + (uint)bVar32 == 0) {
    bVar33 = 0x33ffffff < uVar7 || CARRY4(uVar7 + 0xcc000000,(uint)bVar31);
    iVar24 = uVar7 + 0xcc000000 + (uint)bVar31;
    bVar27 = iVar24 == 0;
  }
  bVar28 = false;
  bVar31 = bVar33;
  if (bVar27) {
    bVar31 = 0xfffffffd < unaff_r11 || CARRY4(unaff_r11 + 2,(uint)bVar33);
    puVar20 = (undefined4 *)(unaff_r11 + 2 + (uint)bVar33);
    bVar28 = (undefined1 *)(unaff_r11 + 2 + (uint)bVar33) == (undefined1 *)0x0;
  }
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xfffffffe < unaff_r9 || CARRY4(unaff_r9 + 1,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 1 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0xffffffc3 < unaff_r9 || CARRY4(unaff_r9 + 0x3c,(uint)bVar32);
  }
  bVar28 = bVar28 && unaff_r9 + 0x3c + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xffffff8b < unaff_r9 || CARRY4(unaff_r9 + 0x74,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 0x74 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0xfffffc6f < unaff_r9 || CARRY4(unaff_r9 + 0x390,(uint)bVar32);
  }
  bVar28 = bVar28 && unaff_r9 + 0x390 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xffffff9f < unaff_r9 || CARRY4(unaff_r9 + 0x60,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 0x60 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0xfffffdaf < unaff_r9 || CARRY4(unaff_r9 + 0x250,(uint)bVar32);
  }
  bVar28 = bVar28 && unaff_r9 + 0x250 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xfffff2ff < unaff_r9 || CARRY4(unaff_r9 + 0xd00,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 0xd00 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0xfffffe6f < unaff_r9 || CARRY4(unaff_r9 + 400,(uint)bVar32);
  }
  bVar28 = bVar28 && unaff_r9 + 400 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xfffff57f < unaff_r9 || CARRY4(unaff_r9 + 0xa80,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 0xa80 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0xfffff93f < unaff_r9 || CARRY4(unaff_r9 + 0x6c0,(uint)bVar32);
  }
  bVar28 = bVar28 && unaff_r9 + 0x6c0 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xfffff07f < unaff_r9 || CARRY4(unaff_r9 + 0xf80,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 0xf80 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0xfffffd6f < unaff_r9 || CARRY4(unaff_r9 + 0x290,(uint)bVar32);
  }
                    /* WARNING: Could not recover jumptable at 0x036e7574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (bVar28 && unaff_r9 + 0x290 + (uint)bVar32 == 0) {
    piVar3 = (int *)(*(code *)(
                              "_ZNKSt6__ndk115__codecvt_utf16IwLb1EE6do_outER9mbstate_tPKwS5_RS5_PcS7_RS7_"
                              + (uint)bVar31 + uVar7 + 0x10))();
    return piVar3;
  }
  *(int *)((int)puVar20 + -4) = iVar24;
  *(uint *)((int)puVar20 + -8) = unaff_r11;
  *(uint *)((int)puVar20 + -0xc) = uVar7;
  *(undefined4 *)((int)puVar20 + -0x10) = uVar17;
  *(undefined4 *)((int)puVar20 + -0x14) = uVar13;
  *(int *)((int)puVar20 + -0x18) = iVar15;
  puVar21 = (undefined1 *)((int)puVar20 + -0x20);
  puVar12 = *(undefined4 **)(iVar18 + 0x1c);
  if (puVar12 == (undefined4 *)0x0) {
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
    puVar12 = *(undefined4 **)(iVar18 + 0x1c);
    if (puVar12 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar18);
      puVar12 = *(undefined4 **)(iVar18 + 0x1c);
    }
  }
  uVar17 = *puVar12;
  iVar15 = *(int *)(iVar4 + 0x44);
  if (*(int *)(**(int **)(iRam036e7a80 + 0x36e7664) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar7 = func_0x05171434(uVar17,0);
  if (iVar15 == 0) {
    func_0x024f83d4();
  }
  uVar17 = func_0x0475399c(iVar15,uVar7,**(undefined4 **)(iRam036e7a84 + 0x36e76a8));
  uVar8 = func_0x02965180(uVar17,0);
  if (uVar8 < 0x787a9e7c) {
    if (uVar8 < 0x4715ab4f) {
      if (uVar8 == 0x1156f848) {
        iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7ab4 + 0x36e7854),0);
        uVar26 = iVar15 == 0;
        bVar31 = true;
        if (!(bool)uVar26) {
          iVar15 = *(int *)(iVar18 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x20);
LAB_036e79a0:
          iVar4 = *(int *)(iVar15 + 4);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x024f83fc(iVar4);
          }
          piVar14 = (int *)0x0;
          if (piVar3 != (int *)0x0) {
            if (((uint)*(byte *)(iVar4 + 0xb8) <= (uint)*(byte *)(*piVar3 + 0xb8)) &&
               (piVar14 = piVar3,
               *(int *)(*(int *)(*piVar3 + 100) + (uint)*(byte *)(iVar4 + 0xb8) * 4 + -4) != iVar4))
            {
              piVar14 = (int *)0x0;
            }
          }
          return piVar14;
        }
      }
      else if (uVar8 == 0x3169fa72) {
        iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7a9c + 0x36e7880),0);
        uVar26 = iVar15 == 0;
        bVar31 = true;
        if (!(bool)uVar26) {
          iVar15 = *(int *)(iVar18 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x28);
          goto LAB_036e79a0;
        }
      }
      else {
        bVar31 = 0x4715ab4d < uVar8;
        uVar26 = false;
        if (uVar8 == 0x4715ab4e) {
          iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7a88 + 0x36e7714),0);
          uVar26 = iVar15 == 0;
          bVar31 = true;
          if (!(bool)uVar26) {
            iVar15 = *(int *)(iVar18 + 0x1c);
            piVar3 = *(int **)(iVar4 + 0x34);
            goto LAB_036e79a0;
          }
        }
      }
    }
    else if (uVar8 == 0x4ffedf5c) {
      iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7ab0 + 0x36e7904),0);
      uVar26 = iVar15 == 0;
      bVar31 = true;
      if (!(bool)uVar26) {
        iVar15 = *(int *)(iVar18 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x40);
        goto LAB_036e79a0;
      }
    }
    else if (uVar8 == 0x6d81ef27) {
      iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7aa0 + 0x36e7930),0);
      uVar26 = iVar15 == 0;
      bVar31 = true;
      if (!(bool)uVar26) {
        iVar15 = *(int *)(iVar18 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x2c);
        goto LAB_036e79a0;
      }
    }
    else {
      bVar31 = 0x787a9e7a < uVar8;
      uVar26 = false;
      if (uVar8 == 0x787a9e7b) {
        iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7a8c + 0x36e77cc),0);
        uVar26 = iVar15 == 0;
        bVar31 = true;
        if (!(bool)uVar26) {
          iVar15 = *(int *)(iVar18 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x1c);
          goto LAB_036e79a0;
        }
      }
    }
  }
  else if (uVar8 < 0xa3b10e3e) {
    if (uVar8 == 0x80fccce3) {
      iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7aa4 + 0x36e78ac),0);
      uVar26 = iVar15 == 0;
      bVar31 = true;
      if (!(bool)uVar26) {
        iVar15 = *(int *)(iVar18 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x30);
        goto LAB_036e79a0;
      }
    }
    else if (uVar8 == 0x8bafe426) {
      iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7a98 + 0x36e78d8),0);
      uVar26 = iVar15 == 0;
      bVar31 = true;
      if (!(bool)uVar26) {
        iVar15 = *(int *)(iVar18 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x24);
        goto LAB_036e79a0;
      }
    }
    else {
      bVar31 = 0xa3b10e3c < uVar8;
      uVar26 = false;
      if (uVar8 == 0xa3b10e3d) {
        iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7a90 + 0x36e7778),0);
        uVar26 = iVar15 == 0;
        bVar31 = true;
        if (!(bool)uVar26) {
          iVar15 = *(int *)(iVar18 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x18);
          goto LAB_036e79a0;
        }
      }
    }
  }
  else if (uVar8 == 0xd9f47ec6) {
    iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7aa8 + 0x36e795c),0);
    uVar26 = iVar15 == 0;
    bVar31 = true;
    if (!(bool)uVar26) {
      iVar15 = *(int *)(iVar18 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x38);
      goto LAB_036e79a0;
    }
  }
  else if (uVar8 == 0xc4e0c914) {
    iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7aac + 0x36e7988),0);
    uVar26 = iVar15 == 0;
    bVar31 = true;
    if (!(bool)uVar26) {
      iVar15 = *(int *)(iVar18 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x3c);
      goto LAB_036e79a0;
    }
  }
  else {
    bVar31 = 0xb139f700 < uVar8;
    uVar26 = false;
    if (uVar8 == 0xb139f701) {
      iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7a94 + 0x36e7828),0);
      uVar26 = iVar15 == 0;
      bVar31 = true;
      if (!(bool)uVar26) {
        iVar15 = *(int *)(iVar18 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x14);
        goto LAB_036e79a0;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036e7ab8 + 0x36e7a08));
  uVar13 = func_0x024f83c8();
  uVar9 = func_0x024f83b8(*(undefined4 *)(iRam036e7abc + 0x36e7a1c));
  *(undefined4 *)((int)puVar20 + -0x20) = 0;
  func_0x0509473c(uVar13,uVar9,uVar17,0);
  func_0x024f83c0(uVar13,iVar18);
  iVar24 = 0x36e7a48;
  uVar35 = func_0x024f83bc();
  iVar15 = (int)((ulonglong)uVar35 >> 0x20);
  iVar4 = (int)uVar35;
  bVar32 = bVar31;
  if ((bool)uVar26) {
    bVar32 = 0xffffc7ff < unaff_r11 || CARRY4(unaff_r11 + 0x3800,(uint)bVar31);
  }
  bVar27 = false;
  bVar33 = bVar32;
  if ((bool)uVar26 && unaff_r11 + 0x3800 + (uint)bVar31 == 0) {
    bVar33 = 0xffffffc3 < uVar7 || CARRY4(uVar7 + 0x3c,(uint)bVar32);
    iVar24 = uVar7 + 0x3c + (uint)bVar32;
    bVar27 = iVar24 == 0;
  }
  bVar31 = bVar33;
  if (bVar27) {
    bVar31 = 0xffff13ff < unaff_r9 || CARRY4(unaff_r9 + 0xec00,(uint)bVar33);
  }
  bVar27 = bVar27 && unaff_r9 + 0xec00 + (uint)bVar33 == 0;
  bVar32 = bVar31;
  if (bVar27) {
    bVar32 = 0xffff1bff < unaff_r9 || CARRY4(unaff_r9 + 0xe400,(uint)bVar31);
  }
  bVar27 = bVar27 && unaff_r9 + 0xe400 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = 0xffff23ff < unaff_r9 || CARRY4(unaff_r9 + 0xdc00,(uint)bVar32);
  }
  bVar27 = bVar27 && unaff_r9 + 0xdc00 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar27) {
    bVar32 = 0xffff2bff < unaff_r9 || CARRY4(unaff_r9 + 0xd400,(uint)bVar31);
  }
  bVar27 = bVar27 && unaff_r9 + 0xd400 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = 0xffff33ff < unaff_r9 || CARRY4(unaff_r9 + 0xcc00,(uint)bVar32);
  }
  bVar27 = bVar27 && unaff_r9 + 0xcc00 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar27) {
    bVar32 = 0xffff3bff < unaff_r9 || CARRY4(unaff_r9 + 0xc400,(uint)bVar31);
  }
  bVar27 = bVar27 && unaff_r9 + 0xc400 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = 0xffff43ff < unaff_r9 || CARRY4(unaff_r9 + 0xbc00,(uint)bVar32);
  }
  bVar27 = bVar27 && unaff_r9 + 0xbc00 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar27) {
    bVar32 = 0xffff4bff < unaff_r9 || CARRY4(unaff_r9 + 0xb400,(uint)bVar31);
  }
  bVar27 = bVar27 && unaff_r9 + 0xb400 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = 0xffff53ff < unaff_r9 || CARRY4(unaff_r9 + 0xac00,(uint)bVar32);
  }
  bVar27 = bVar27 && unaff_r9 + 0xac00 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar27) {
    bVar32 = 0xffff5bff < unaff_r9 || CARRY4(unaff_r9 + 0xa400,(uint)bVar31);
  }
  bVar27 = bVar27 && unaff_r9 + 0xa400 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = 0xffff63ff < unaff_r9 || CARRY4(unaff_r9 + 0x9c00,(uint)bVar32);
  }
  bVar27 = bVar27 && unaff_r9 + 0x9c00 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar27) {
    bVar32 = 0xffff6bff < unaff_r9 || CARRY4(unaff_r9 + 0x9400,(uint)bVar31);
  }
  bVar28 = false;
  bVar33 = bVar32;
  if (bVar27 && unaff_r9 + 0x9400 + (uint)bVar31 == 0) {
    bVar33 = 0xfffffddf < uVar7 || CARRY4(uVar7 + 0x220,(uint)bVar32);
    puVar21 = (undefined1 *)(uVar7 + 0x220 + (uint)bVar32);
    bVar28 = (undefined1 *)(uVar7 + 0x220 + (uint)bVar32) == (undefined1 *)0x0;
  }
  bVar31 = bVar33;
  if (bVar28) {
    bVar31 = 0xffff23ff < unaff_r11 || CARRY4(unaff_r11 + 0xdc00,(uint)bVar33);
  }
  bVar28 = bVar28 && unaff_r11 + 0xdc00 + (uint)bVar33 == 0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xfffcffff < unaff_r9 || CARRY4(unaff_r9 + 0x30000,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 0x30000 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0xfff07fff < unaff_r9 || CARRY4(unaff_r9 + 0xf8000,(uint)bVar32);
  }
  bVar28 = bVar28 && unaff_r9 + 0xf8000 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xffff3fff < unaff_r9 || CARRY4(unaff_r9 + 0xc000,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 0xc000 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0xfff5ffff < unaff_r9 || CARRY4(unaff_r9 + 0xa0000,(uint)bVar32);
  }
  bVar28 = bVar28 && unaff_r9 + 0xa0000 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xffcaffff < unaff_r9 || CARRY4(unaff_r9 + 0x350000,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 0x350000 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0xfffaffff < unaff_r9 || CARRY4(unaff_r9 + 0x50000,(uint)bVar32);
  }
  bVar28 = bVar28 && unaff_r9 + 0x50000 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xffdcffff < unaff_r9 || CARRY4(unaff_r9 + 0x230000,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 0x230000 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0xfffdffff < unaff_r9 || CARRY4(unaff_r9 + 0x20000,(uint)bVar32);
  }
  bVar28 = bVar28 && unaff_r9 + 0x20000 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xffe6ffff < unaff_r9 || CARRY4(unaff_r9 + 0x190000,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 0x190000 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0xfff5ffff < unaff_r9 || CARRY4(unaff_r9 + 0xa0000,(uint)bVar32);
  }
  bVar28 = bVar28 && unaff_r9 + 0xa0000 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xffd2ffff < unaff_r9 || CARRY4(unaff_r9 + 0x2d0000,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 0x2d0000 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0xfff9ffff < unaff_r9 || CARRY4(unaff_r9 + 0x60000,(uint)bVar32);
  }
                    /* WARNING: Could not recover jumptable at 0x036e7ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (bVar28 && unaff_r9 + 0x60000 + (uint)bVar32 == 0) {
    piVar3 = (int *)(*(code *)(uVar7 + 0x8000000 + (uint)bVar31))();
    return piVar3;
  }
  *(int *)(puVar21 + -4) = iVar24;
  *(uint *)(puVar21 + -8) = unaff_r11;
  *(uint *)(puVar21 + -0xc) = uVar7;
  *(undefined4 *)(puVar21 + -0x10) = uVar17;
  *(undefined4 *)(puVar21 + -0x14) = uVar13;
  *(int *)(puVar21 + -0x18) = iVar18;
  puVar22 = puVar21 + -0x20;
  puVar12 = *(undefined4 **)(iVar15 + 0x1c);
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
    puVar12 = *(undefined4 **)(iVar15 + 0x1c);
    if (puVar12 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar15);
      puVar12 = *(undefined4 **)(iVar15 + 0x1c);
    }
  }
  uVar17 = *puVar12;
  iVar18 = *(int *)(iVar4 + 0x44);
  if (*(int *)(**(int **)(iRam036e7fc4 + 0x36e7ba8) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar7 = func_0x05171434(uVar17,0);
  if (iVar18 == 0) {
    func_0x024f83d4();
  }
  uVar17 = func_0x0475399c(iVar18,uVar7,**(undefined4 **)(iRam036e7fc8 + 0x36e7bec));
  uVar8 = func_0x02965180(uVar17,0);
  if (uVar8 < 0x69935fe7) {
    if (uVar8 < 0x46e7cfbd) {
      if (uVar8 == 0xe0ad569) {
        iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7ff8 + 0x36e7d98),0);
        uVar26 = iVar18 == 0;
        bVar31 = true;
        if (!(bool)uVar26) {
          iVar15 = *(int *)(iVar15 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x14);
LAB_036e7ee4:
          iVar4 = *(int *)(iVar15 + 4);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x024f83fc(iVar4);
          }
          piVar14 = (int *)0x0;
          if (piVar3 != (int *)0x0) {
            if (((uint)*(byte *)(iVar4 + 0xb8) <= (uint)*(byte *)(*piVar3 + 0xb8)) &&
               (piVar14 = piVar3,
               *(int *)(*(int *)(*piVar3 + 100) + (uint)*(byte *)(iVar4 + 0xb8) * 4 + -4) != iVar4))
            {
              piVar14 = (int *)0x0;
            }
          }
          return piVar14;
        }
      }
      else if (uVar8 == 0x370b91cb) {
        iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7fe8 + 0x36e7dc4),0);
        uVar26 = iVar18 == 0;
        bVar31 = true;
        if (!(bool)uVar26) {
          iVar15 = *(int *)(iVar15 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x30);
          goto LAB_036e7ee4;
        }
      }
      else {
        bVar31 = 0x46e7cfbb < uVar8;
        uVar26 = false;
        if (uVar8 == 0x46e7cfbc) {
          iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7fcc + 0x36e7c58),0);
          uVar26 = iVar18 == 0;
          bVar31 = true;
          if (!(bool)uVar26) {
            iVar15 = *(int *)(iVar15 + 0x1c);
            piVar3 = *(int **)(iVar4 + 0x3c);
            goto LAB_036e7ee4;
          }
        }
      }
    }
    else if (uVar8 == 0x5c32e71d) {
      iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7fdc + 0x36e7e48),0);
      uVar26 = iVar18 == 0;
      bVar31 = true;
      if (!(bool)uVar26) {
        iVar15 = *(int *)(iVar15 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x18);
        goto LAB_036e7ee4;
      }
    }
    else if (uVar8 == 0x6020ab4e) {
      iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7ff0 + 0x36e7e74),0);
      uVar26 = iVar18 == 0;
      bVar31 = true;
      if (!(bool)uVar26) {
        iVar15 = *(int *)(iVar15 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x38);
        goto LAB_036e7ee4;
      }
    }
    else {
      bVar31 = 0x69935fe5 < uVar8;
      uVar26 = false;
      if (uVar8 == 0x69935fe6) {
        iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7fd0 + 0x36e7d10),0);
        uVar26 = iVar18 == 0;
        bVar31 = true;
        if (!(bool)uVar26) {
          iVar15 = *(int *)(iVar15 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x24);
          goto LAB_036e7ee4;
        }
      }
    }
  }
  else if (uVar8 < 0xa7300587) {
    if (uVar8 == 0x858d4954) {
      iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7ff4 + 0x36e7df0),0);
      uVar26 = iVar18 == 0;
      bVar31 = true;
      if (!(bool)uVar26) {
        iVar15 = *(int *)(iVar15 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x40);
        goto LAB_036e7ee4;
      }
    }
    else if (uVar8 == 0xa7300586) {
      iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7fec + 0x36e7e1c),0);
      uVar26 = iVar18 == 0;
      bVar31 = true;
      if (!(bool)uVar26) {
        iVar15 = *(int *)(iVar15 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x34);
        goto LAB_036e7ee4;
      }
    }
    else {
      bVar31 = 0x70a33522 < uVar8;
      uVar26 = false;
      if (uVar8 == 0x70a33523) {
        iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7fd4 + 0x36e7cbc),0);
        uVar26 = iVar18 == 0;
        bVar31 = true;
        if (!(bool)uVar26) {
          iVar15 = *(int *)(iVar15 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x1c);
          goto LAB_036e7ee4;
        }
      }
    }
  }
  else if (uVar8 == 0xb0e0c2ca) {
    iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7fe4 + 0x36e7ea0),0);
    uVar26 = iVar18 == 0;
    bVar31 = true;
    if (!(bool)uVar26) {
      iVar15 = *(int *)(iVar15 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x28);
      goto LAB_036e7ee4;
    }
  }
  else if (uVar8 == 0xb1a9d450) {
    iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7fe0 + 0x36e7ecc),0);
    uVar26 = iVar18 == 0;
    bVar31 = true;
    if (!(bool)uVar26) {
      iVar15 = *(int *)(iVar15 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x20);
      goto LAB_036e7ee4;
    }
  }
  else {
    bVar31 = 0xeac3c916 < uVar8;
    uVar26 = false;
    if (uVar8 == 0xeac3c917) {
      iVar18 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e7fd8 + 0x36e7d6c),0);
      uVar26 = iVar18 == 0;
      bVar31 = true;
      if (!(bool)uVar26) {
        iVar15 = *(int *)(iVar15 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x2c);
        goto LAB_036e7ee4;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036e7ffc + 0x36e7f4c));
  uVar13 = func_0x024f83c8();
  uVar9 = func_0x024f83b8(*(undefined4 *)(iRam036e8000 + 0x36e7f60));
  *(undefined4 *)(puVar21 + -0x20) = 0;
  func_0x0509473c(uVar13,uVar9,uVar17,0);
  func_0x024f83c0(uVar13,iVar15);
  uVar35 = func_0x024f83bc();
  uVar8 = (uint)((ulonglong)uVar35 >> 0x20);
  iVar4 = (int)uVar35;
  bVar32 = bVar31;
  if ((bool)uVar26) {
    bVar32 = 0xff63ffff < unaff_r11 || CARRY4((uint)(&UNK_009c0000 + unaff_r11),(uint)bVar31);
  }
  bVar27 = false;
  bVar33 = bVar32;
  if ((bool)uVar26 && &UNK_009c0000 + bVar31 + unaff_r11 == (undefined *)0x0) {
    bVar33 = 0xfff07fff < uVar7 || CARRY4(uVar7 + 0xf8000,(uint)bVar32);
    puVar22 = (undefined1 *)(uVar7 + 0xf8000 + (uint)bVar32);
    bVar27 = (undefined1 *)(uVar7 + 0xf8000 + (uint)bVar32) == (undefined1 *)0x0;
  }
  bVar31 = bVar33;
  if (bVar27) {
    bVar31 = 0xf27fffff < unaff_r9 || CARRY4(unaff_r9 + 0xd800000,(uint)bVar33);
  }
  bVar27 = bVar27 && unaff_r9 + 0xd800000 + (uint)bVar33 == 0;
  bVar32 = bVar31;
  if (bVar27) {
    bVar32 = 0xf2ffffff < unaff_r9 || CARRY4(unaff_r9 + 0xd000000,(uint)bVar31);
  }
  bVar27 = bVar27 && unaff_r9 + 0xd000000 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = 0xf37fffff < unaff_r9 || CARRY4(unaff_r9 + 0xc800000,(uint)bVar32);
  }
  bVar27 = bVar27 && unaff_r9 + 0xc800000 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar27) {
    bVar32 = 0xf3ffffff < unaff_r9 || CARRY4(unaff_r9 + 0xc000000,(uint)bVar31);
  }
  bVar27 = bVar27 && unaff_r9 + 0xc000000 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = 0xf47fffff < unaff_r9 || CARRY4(unaff_r9 + 0xb800000,(uint)bVar32);
  }
  bVar27 = bVar27 && unaff_r9 + 0xb800000 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar27) {
    bVar32 = 0xf4ffffff < unaff_r9 || CARRY4(unaff_r9 + 0xb000000,(uint)bVar31);
  }
  bVar27 = bVar27 && unaff_r9 + 0xb000000 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = 0xf57fffff < unaff_r9 || CARRY4(unaff_r9 + 0xa800000,(uint)bVar32);
  }
  bVar27 = bVar27 && unaff_r9 + 0xa800000 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar27) {
    bVar32 = 0xf5ffffff < unaff_r9 || CARRY4(unaff_r9 + 0xa000000,(uint)bVar31);
  }
  bVar27 = bVar27 && unaff_r9 + 0xa000000 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = 0xf67fffff < unaff_r9 || CARRY4(unaff_r9 + 0x9800000,(uint)bVar32);
  }
  bVar27 = bVar27 && unaff_r9 + 0x9800000 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar27) {
    bVar32 = 0xf6ffffff < unaff_r9 || CARRY4(unaff_r9 + 0x9000000,(uint)bVar31);
  }
  bVar27 = bVar27 && unaff_r9 + 0x9000000 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = 0xf77fffff < unaff_r9 || CARRY4(unaff_r9 + 0x8800000,(uint)bVar32);
  }
  bVar27 = bVar27 && unaff_r9 + 0x8800000 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar27) {
    bVar32 = 0xf7ffffff < unaff_r9 || CARRY4(unaff_r9 + 0x8000000,(uint)bVar31);
  }
  bVar28 = false;
  bVar33 = bVar32;
  if (bVar27 && unaff_r9 + 0x8000000 + (uint)bVar31 == 0) {
    bVar33 = 0xfffbbfff < uVar7 || CARRY4(uVar7 + 0x44000,(uint)bVar32);
    puVar22 = (undefined1 *)(uVar7 + 0x44000 + (uint)bVar32);
    bVar28 = (undefined1 *)(uVar7 + 0x44000 + (uint)bVar32) == (undefined1 *)0x0;
  }
  bVar31 = bVar33;
  if (bVar28) {
    bVar31 = 0xfd9fffff < unaff_r11 || CARRY4((uint)(&UNK_02600000 + unaff_r11),(uint)bVar33);
  }
  bVar28 = bVar28 && &UNK_02600000 + bVar33 + unaff_r11 == (undefined *)0x0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xd4ffffff < unaff_r9 || CARRY4(unaff_r9 + 0x2b000000,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 0x2b000000 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0x23ffffff < unaff_r9 || CARRY4(unaff_r9 + 0xdc000000,(uint)bVar32);
  }
  bVar28 = bVar28 && unaff_r9 + 0xdc000000 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xf4ffffff < unaff_r9 || CARRY4(unaff_r9 + 0xb000000,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 0xb000000 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0x77ffffff < unaff_r9 || CARRY4(unaff_r9 + 0x88000000,(uint)bVar32);
  }
  bVar28 = bVar28 && unaff_r9 + 0x88000000 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0x9ffffffd < unaff_r9 || CARRY4(unaff_r9 + 0x60000002,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 0x60000002 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0x2fffffff < unaff_r9 || CARRY4(unaff_r9 + 0xd0000000,(uint)bVar32);
  }
  bVar28 = bVar28 && unaff_r9 + 0xd0000000 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0x8ffffffe < unaff_r9 || CARRY4(unaff_r9 + 0x70000001,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 0x70000001 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0xcbffffff < unaff_r9 || CARRY4(unaff_r9 + 0x34000000,(uint)bVar32);
  }
  bVar28 = bVar28 && unaff_r9 + 0x34000000 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xaffffffc < unaff_r9 || CARRY4(unaff_r9 + 0x50000003,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 0x50000003 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0x3ffffffe < unaff_r9 || CARRY4(unaff_r9 + 0xc0000001,(uint)bVar32);
  }
  bVar28 = bVar28 && unaff_r9 + 0xc0000001 + (uint)bVar32 == 0;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0x5ffffffc < unaff_r9 || CARRY4(unaff_r9 + 0xa0000003,(uint)bVar31);
  }
  bVar28 = bVar28 && unaff_r9 + 0xa0000003 + (uint)bVar31 == 0;
  bVar31 = bVar32;
  if (bVar28) {
    bVar31 = 0xbbffffff < unaff_r9 || CARRY4(unaff_r9 + 0x44000000,(uint)bVar32);
  }
                    /* WARNING: Could not recover jumptable at 0x036e7ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (bVar28 && unaff_r9 + 0x44000000 + (uint)bVar32 == 0) {
    piVar3 = (int *)(*(code *)(uVar7 + 0xf + (uint)bVar31))();
    return piVar3;
  }
  *(undefined4 *)(puVar22 + -4) = 0x36e7f8c;
  *(uint *)(puVar22 + -8) = unaff_r11;
  *(uint *)(puVar22 + -0xc) = uVar7;
  *(undefined4 *)(puVar22 + -0x10) = uVar17;
  *(undefined4 *)(puVar22 + -0x14) = uVar13;
  *(int *)(puVar22 + -0x18) = iVar15;
  puVar23 = puVar22 + -0x20;
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
  uVar17 = *puVar12;
  iVar15 = *(int *)(iVar4 + 0x44);
  if (*(int *)(**(int **)(iRam036e8508 + 0x36e80ec) + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar7 = func_0x05171434(uVar17,0);
  if (iVar15 == 0) {
    func_0x024f83d4();
  }
  uVar17 = func_0x0475399c(iVar15,uVar7,**(undefined4 **)(iRam036e850c + 0x36e8130));
  uVar10 = func_0x02965180(uVar17,0);
  if (uVar10 < 0x69935fe7) {
    if (uVar10 < 0x46e7cfbd) {
      if (uVar10 == 0xe0ad569) {
        iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e853c + 0x36e82dc),0);
        uVar26 = iVar15 == 0;
        bVar31 = true;
        if (!(bool)uVar26) {
          iVar15 = *(int *)(uVar8 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x14);
LAB_036e8428:
          iVar4 = *(int *)(iVar15 + 4);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x024f83fc(iVar4);
          }
          piVar14 = (int *)0x0;
          if (piVar3 != (int *)0x0) {
            if (((uint)*(byte *)(iVar4 + 0xb8) <= (uint)*(byte *)(*piVar3 + 0xb8)) &&
               (piVar14 = piVar3,
               *(int *)(*(int *)(*piVar3 + 100) + (uint)*(byte *)(iVar4 + 0xb8) * 4 + -4) != iVar4))
            {
              piVar14 = (int *)0x0;
            }
          }
          return piVar14;
        }
      }
      else if (uVar10 == 0x370b91cb) {
        iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e852c + 0x36e8308),0);
        uVar26 = iVar15 == 0;
        bVar31 = true;
        if (!(bool)uVar26) {
          iVar15 = *(int *)(uVar8 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x30);
          goto LAB_036e8428;
        }
      }
      else {
        bVar31 = 0x46e7cfbb < uVar10;
        uVar26 = false;
        if (uVar10 == 0x46e7cfbc) {
          iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e8510 + 0x36e819c),0);
          uVar26 = iVar15 == 0;
          bVar31 = true;
          if (!(bool)uVar26) {
            iVar15 = *(int *)(uVar8 + 0x1c);
            piVar3 = *(int **)(iVar4 + 0x3c);
            goto LAB_036e8428;
          }
        }
      }
    }
    else if (uVar10 == 0x5c32e71d) {
      iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e8520 + 0x36e838c),0);
      uVar26 = iVar15 == 0;
      bVar31 = true;
      if (!(bool)uVar26) {
        iVar15 = *(int *)(uVar8 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x18);
        goto LAB_036e8428;
      }
    }
    else if (uVar10 == 0x6020ab4e) {
      iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e8534 + 0x36e83b8),0);
      uVar26 = iVar15 == 0;
      bVar31 = true;
      if (!(bool)uVar26) {
        iVar15 = *(int *)(uVar8 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x38);
        goto LAB_036e8428;
      }
    }
    else {
      bVar31 = 0x69935fe5 < uVar10;
      uVar26 = false;
      if (uVar10 == 0x69935fe6) {
        iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e8514 + 0x36e8254),0);
        uVar26 = iVar15 == 0;
        bVar31 = true;
        if (!(bool)uVar26) {
          iVar15 = *(int *)(uVar8 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x24);
          goto LAB_036e8428;
        }
      }
    }
  }
  else if (uVar10 < 0xa7300587) {
    if (uVar10 == 0x858d4954) {
      iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e8538 + 0x36e8334),0);
      uVar26 = iVar15 == 0;
      bVar31 = true;
      if (!(bool)uVar26) {
        iVar15 = *(int *)(uVar8 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x40);
        goto LAB_036e8428;
      }
    }
    else if (uVar10 == 0xa7300586) {
      iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e8530 + 0x36e8360),0);
      uVar26 = iVar15 == 0;
      bVar31 = true;
      if (!(bool)uVar26) {
        iVar15 = *(int *)(uVar8 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x34);
        goto LAB_036e8428;
      }
    }
    else {
      bVar31 = 0x70a33522 < uVar10;
      uVar26 = false;
      if (uVar10 == 0x70a33523) {
        iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e8518 + 0x36e8200),0);
        uVar26 = iVar15 == 0;
        bVar31 = true;
        if (!(bool)uVar26) {
          iVar15 = *(int *)(uVar8 + 0x1c);
          piVar3 = *(int **)(iVar4 + 0x1c);
          goto LAB_036e8428;
        }
      }
    }
  }
  else if (uVar10 == 0xb0e0c2ca) {
    iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e8528 + 0x36e83e4),0);
    uVar26 = iVar15 == 0;
    bVar31 = true;
    if (!(bool)uVar26) {
      iVar15 = *(int *)(uVar8 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x28);
      goto LAB_036e8428;
    }
  }
  else if (uVar10 == 0xb1a9d450) {
    iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e8524 + 0x36e8410),0);
    uVar26 = iVar15 == 0;
    bVar31 = true;
    if (!(bool)uVar26) {
      iVar15 = *(int *)(uVar8 + 0x1c);
      piVar3 = *(int **)(iVar4 + 0x20);
      goto LAB_036e8428;
    }
  }
  else {
    bVar31 = 0xeac3c916 < uVar10;
    uVar26 = false;
    if (uVar10 == 0xeac3c917) {
      iVar15 = func_0x04f57738(uVar17,**(undefined4 **)(iRam036e851c + 0x36e82b0),0);
      uVar26 = iVar15 == 0;
      bVar31 = true;
      if (!(bool)uVar26) {
        iVar15 = *(int *)(uVar8 + 0x1c);
        piVar3 = *(int **)(iVar4 + 0x2c);
        goto LAB_036e8428;
      }
    }
  }
  func_0x024f83b8(*(undefined4 *)(iRam036e8540 + 0x36e8490));
  uVar13 = func_0x024f83c8();
  uVar9 = func_0x024f83b8(*(undefined4 *)(iRam036e8544 + 0x36e84a4));
  *(undefined4 *)(puVar22 + -0x20) = 0;
  func_0x0509473c(uVar13,uVar9,uVar17,0);
  func_0x024f83c0(uVar13,uVar8);
  iVar18 = 0x36e84d0;
  uVar35 = func_0x024f83bc();
  iVar15 = (int)((ulonglong)uVar35 >> 0x20);
  iVar4 = (int)uVar35;
  bVar32 = bVar31;
  if ((bool)uVar26) {
    bVar32 = 0x9ffffffe < unaff_r11 || CARRY4(unaff_r11 + 0x60000001,(uint)bVar31);
  }
  bVar27 = false;
  bVar33 = bVar32;
  if ((bool)uVar26 && unaff_r11 + 0x60000001 + (uint)bVar31 == 0) {
    bVar33 = 0xd2ffffff < uVar7 || CARRY4(uVar7 + 0x2d000000,(uint)bVar32);
    puVar23 = (undefined1 *)(uVar7 + 0x2d000000 + (uint)bVar32);
    bVar27 = (undefined1 *)(uVar7 + 0x2d000000 + (uint)bVar32) == (undefined1 *)0x0;
  }
  bVar28 = false;
  iVar24 = extraout_r2_00;
  bVar31 = bVar33;
  if (bVar27) {
    bVar31 = 0xffffffda < unaff_r9 || CARRY4(unaff_r9 + 0x25,(uint)bVar33);
    iVar24 = unaff_r9 + 0x25 + (uint)bVar33;
    bVar28 = iVar24 == 0;
  }
  bVar27 = false;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xffffffdc < unaff_r9 || CARRY4(unaff_r9 + 0x23,(uint)bVar31);
    iVar24 = unaff_r9 + 0x23 + (uint)bVar31;
    bVar27 = iVar24 == 0;
  }
  bVar28 = false;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = 0xffffffde < unaff_r9 || CARRY4(unaff_r9 + 0x21,(uint)bVar32);
    iVar24 = unaff_r9 + 0x21 + (uint)bVar32;
    bVar28 = iVar24 == 0;
  }
  bVar27 = false;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xffffffe0 < unaff_r9 || CARRY4(unaff_r9 + 0x1f,(uint)bVar31);
    iVar24 = unaff_r9 + 0x1f + (uint)bVar31;
    bVar27 = iVar24 == 0;
  }
  bVar28 = false;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = 0xffffffe2 < unaff_r9 || CARRY4(unaff_r9 + 0x1d,(uint)bVar32);
    iVar24 = unaff_r9 + 0x1d + (uint)bVar32;
    bVar28 = iVar24 == 0;
  }
  bVar27 = false;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xffffffe4 < unaff_r9 || CARRY4(unaff_r9 + 0x1b,(uint)bVar31);
    iVar24 = unaff_r9 + 0x1b + (uint)bVar31;
    bVar27 = iVar24 == 0;
  }
  bVar28 = false;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = 0xffffffe6 < unaff_r9 || CARRY4(unaff_r9 + 0x19,(uint)bVar32);
    iVar24 = unaff_r9 + 0x19 + (uint)bVar32;
    bVar28 = iVar24 == 0;
  }
  bVar27 = false;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xffffffe8 < unaff_r9 || CARRY4(unaff_r9 + 0x17,(uint)bVar31);
    iVar24 = unaff_r9 + 0x17 + (uint)bVar31;
    bVar27 = iVar24 == 0;
  }
  bVar28 = false;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = 0xffffffea < unaff_r9 || CARRY4(unaff_r9 + 0x15,(uint)bVar32);
    iVar24 = unaff_r9 + 0x15 + (uint)bVar32;
    bVar28 = iVar24 == 0;
  }
  bVar27 = false;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xffffffec < unaff_r9 || CARRY4(unaff_r9 + 0x13,(uint)bVar31);
    iVar24 = unaff_r9 + 0x13 + (uint)bVar31;
    bVar27 = iVar24 == 0;
  }
  bVar28 = false;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = 0xffffffee < unaff_r9 || CARRY4(unaff_r9 + 0x11,(uint)bVar32);
    iVar24 = unaff_r9 + 0x11 + (uint)bVar32;
    bVar28 = iVar24 == 0;
  }
  bVar27 = false;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xfffffff0 < unaff_r9 || CARRY4(unaff_r9 + 0xf,(uint)bVar31);
    iVar24 = unaff_r9 + 0xf + (uint)bVar31;
    bVar27 = iVar24 == 0;
  }
  bVar28 = false;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = CARRY4(uVar7,(uint)bVar32);
    puVar23 = (undefined1 *)(uVar7 + bVar32);
    bVar28 = (undefined1 *)(uVar7 + bVar32) == (undefined1 *)0x0;
  }
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xbffffffa < unaff_r11 || CARRY4(unaff_r11 + 0x40000005,(uint)bVar31);
  }
  bVar27 = false;
  bVar33 = bVar32;
  if (bVar28 && unaff_r11 + 0x40000005 + (uint)bVar31 == 0) {
    bVar33 = 0xffffff97 < unaff_r9 || CARRY4(unaff_r9 + 0x68,(uint)bVar32);
    iVar24 = unaff_r9 + 0x68 + (uint)bVar32;
    bVar27 = iVar24 == 0;
  }
  bVar28 = false;
  bVar31 = bVar33;
  if (bVar27) {
    bVar31 = 0xfffffd9f < unaff_r9 || CARRY4(unaff_r9 + 0x260,(uint)bVar33);
    iVar15 = unaff_r9 + 0x260 + (uint)bVar33;
    bVar28 = iVar15 == 0;
  }
  bVar27 = false;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xfffffc5f < unaff_r9 || CARRY4(unaff_r9 + 0x3a0,(uint)bVar31);
    iVar15 = unaff_r9 + 0x3a0 + (uint)bVar31;
    bVar27 = iVar15 == 0;
  }
  bVar28 = false;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = 0xfffffeef < unaff_r9 || CARRY4(unaff_r9 + 0x110,(uint)bVar32);
    iVar15 = unaff_r9 + 0x110 + (uint)bVar32;
    bVar28 = iVar15 == 0;
  }
  bVar27 = false;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xfffffabf < unaff_r9 || CARRY4(unaff_r9 + 0x540,(uint)bVar31);
    iVar15 = unaff_r9 + 0x540 + (uint)bVar31;
    bVar27 = iVar15 == 0;
  }
  bVar28 = false;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = 0xffffc3ff < unaff_r9 || CARRY4(unaff_r9 + 0x3c00,(uint)bVar32);
    iVar15 = unaff_r9 + 0x3c00 + (uint)bVar32;
    bVar28 = iVar15 == 0;
  }
  bVar27 = false;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xfffffe7f < unaff_r9 || CARRY4(unaff_r9 + 0x180,(uint)bVar31);
    iVar15 = unaff_r9 + 0x180 + (uint)bVar31;
    bVar27 = iVar15 == 0;
  }
  bVar28 = false;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = 0xfffff0ff < unaff_r9 || CARRY4(unaff_r9 + 0xf00,(uint)bVar32);
    iVar15 = unaff_r9 + 0xf00 + (uint)bVar32;
    bVar28 = iVar15 == 0;
  }
  bVar27 = false;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xfffff6ff < unaff_r9 || CARRY4(unaff_r9 + 0x900,(uint)bVar31);
    iVar15 = unaff_r9 + 0x900 + (uint)bVar31;
    bVar27 = iVar15 == 0;
  }
  bVar28 = false;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = 0xfffffd3f < unaff_r9 || CARRY4(unaff_r9 + 0x2c0,(uint)bVar32);
    iVar15 = unaff_r9 + 0x2c0 + (uint)bVar32;
    bVar28 = iVar15 == 0;
  }
  bVar27 = false;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xfffff5bf < unaff_r9 || CARRY4(unaff_r9 + 0xa40,(uint)bVar31);
    iVar15 = unaff_r9 + 0xa40 + (uint)bVar31;
    bVar27 = iVar15 == 0;
  }
  bVar28 = false;
  bVar31 = bVar32;
  if (bVar27) {
    bVar31 = CARRY4(unaff_r9,(uint)bVar32);
    iVar15 = unaff_r9 + bVar32;
    bVar28 = iVar15 == 0;
  }
  bVar27 = false;
  bVar32 = bVar31;
  if (bVar28) {
    bVar32 = 0xfffc1fff < uVar7 || CARRY4(uVar7 + 0x3e000,(uint)bVar31);
    iVar18 = uVar7 + 0x3e000 + (uint)bVar31;
    bVar27 = iVar18 == 0;
  }
  if (bVar27) {
    unaff_r10 = unaff_r8 + 0x1700 + (uint)bVar32;
  }
  *(int *)(puVar23 + -4) = iVar18;
  *(undefined4 *)(puVar23 + -8) = uVar17;
  *(undefined4 *)(puVar23 + -0xc) = uVar13;
  puVar34 = (uint *)(puVar23 + -0x10);
  *puVar34 = uVar8;
  if (*(int *)(iVar24 + 0x1c) == 0) {
    func_0x024f83f8(iVar24);
  }
  uVar17 = func_0x024f85fc(*(undefined4 *)(iVar4 + 0xc),0);
  uVar17 = func_0x0357e134(uVar17,iVar15,0,**(undefined4 **)(iVar24 + 0x1c));
  iVar15 = *(int *)(*(int *)(iVar24 + 0x1c) + 4);
  uVar8 = *puVar34;
  uVar13 = *(undefined4 *)(puVar23 + -0xc);
  uVar9 = *(undefined4 *)(puVar23 + -8);
  *(undefined4 *)(puVar23 + -4) = *(undefined4 *)(puVar23 + -4);
  *(uint *)(puVar23 + -8) = unaff_r11;
  *(int *)(puVar23 + -0xc) = unaff_r10;
  *puVar34 = unaff_r9;
  *(int *)(puVar23 + -0x14) = unaff_r8;
  *(uint *)(puVar23 + -0x18) = uVar7;
  *(undefined4 *)(puVar23 + -0x1c) = uVar9;
  *(undefined4 *)(puVar23 + -0x20) = uVar13;
  *(uint *)(puVar23 + -0x24) = uVar8;
  piVar3 = (int *)(iVar15 + 0x1c);
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
    puVar12 = *(undefined4 **)(iVar15 + 0x1c);
    if (puVar12 == (undefined4 *)0x0) {
      func_0x024f83f8(iVar15);
      puVar12 = *(undefined4 **)(iVar15 + 0x1c);
    }
  }
  piVar14 = *(int **)(iRam03594980 + 0x35940c0);
  uVar13 = *puVar12;
  if (*(int *)(*piVar14 + 0x74) == 0) {
    func_0x024f83d8();
  }
  uVar13 = func_0x05171434(uVar13,0);
  piVar19 = *(int **)(iRam03594984 + 0x35940f0);
  if (*(int *)(*piVar19 + 0x74) == 0) {
    func_0x024f83d8();
  }
  iVar18 = func_0x024f85ec(uVar13,0);
  uVar13 = *(undefined4 *)*piVar3;
  if (*(int *)(*piVar14 + 0x74) == 0) {
    func_0x024f83d8();
  }
  piVar5 = (int *)func_0x05171434(uVar13,0);
  if (iVar18 == 0) {
    uVar13 = func_0x05171434(**(undefined4 **)(iRam035949d8 + 0x35941ac),0);
    iVar18 = func_0x0517c82c(piVar5,uVar13,0);
    if (iVar18 == 0) {
      uVar13 = *(undefined4 *)*piVar3;
      if (*(int *)(*piVar14 + 0x74) == 0) {
        func_0x024f83d8();
      }
      piVar5 = (int *)0x0;
      uVar13 = func_0x05171434(uVar13,0);
      uVar9 = func_0x05171434(**(undefined4 **)(iRam035949dc + 0x35942a0),0);
      iVar18 = func_0x0517c82c(uVar13,uVar9,0);
      if (iVar18 == 0) {
        uVar13 = *(undefined4 *)*piVar3;
        if (*(int *)(*piVar14 + 0x74) == 0) {
          func_0x024f83d8();
        }
        piVar5 = (int *)0x0;
        uVar13 = func_0x05171434(uVar13,0);
        uVar9 = func_0x05171434(**(undefined4 **)(iRam035949e0 + 0x35943e8),0);
        iVar18 = func_0x0517c82c(uVar13,uVar9,0);
        if (iVar18 == 0) {
          uVar13 = **(undefined4 **)(iRam035949e4 + 0x3594544);
          if (*(int *)(*piVar14 + 0x74) == 0) {
            func_0x024f83d8();
          }
          uVar13 = func_0x05171434(uVar13,0);
          uVar9 = func_0x05171434(*(undefined4 *)*piVar3,0);
          if (*(int *)(*piVar19 + 0x74) == 0) {
            func_0x024f83d8();
          }
          iVar18 = func_0x024f866c(uVar13,uVar9,0);
          if (iVar18 != 0) {
            uVar13 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
            uVar17 = func_0x024f87e0(uVar13,uVar17,0);
            iVar4 = *(int *)(*piVar3 + 8);
            *(undefined4 *)(puVar23 + -4) = *(undefined4 *)(puVar23 + -4);
            *(undefined4 *)(puVar23 + -8) = *(undefined4 *)(puVar23 + -8);
            *(undefined4 *)(puVar23 + -0xc) = *(undefined4 *)(puVar23 + -0x18);
            *puVar34 = *(uint *)(puVar23 + -0x1c);
            *(undefined4 *)(puVar23 + -0x14) = *(undefined4 *)(puVar23 + -0x20);
            *(uint *)(puVar23 + -0x18) = *(uint *)(puVar23 + -0x24);
            if (*(int *)(iVar4 + 0x1c) == 0) {
              func_0x024f83f8(iVar4);
            }
            piVar3 = (int *)0x0;
            iVar15 = func_0x051b1750(uVar17,0,0);
            if (iVar15 == 0) {
              uVar26 = func_0x0357de74(uVar17,*(undefined4 *)(*(int *)(iVar4 + 0x1c) + 4));
              puVar12 = *(undefined4 **)(iVar4 + 0x1c);
              puVar23[-0x19] = uVar26;
              piVar3 = (int *)func_0x024f83c4(*puVar12,puVar23 + -0x19);
              iVar4 = **(int **)(iVar4 + 0x1c);
              if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                iVar4 = func_0x024f83fc(iVar4);
              }
              if (piVar3 == (int *)0x0) {
                func_0x024f83d4();
              }
              if (*(int *)(*piVar3 + 0x20) == *(int *)(iVar4 + 0x20)) {
                pcVar16 = (char *)func_0x024f83d0(piVar3);
              }
              else {
                pcVar16 = (char *)0x0;
                func_0x024f84a0(piVar3,iVar4);
              }
              cVar1 = *pcVar16;
              func_0x024f85cc(uVar17,0);
              piVar3 = (int *)0x0;
              if (cVar1 != '\0') {
                piVar3 = (int *)0x1;
              }
            }
            return piVar3;
          }
          uVar17 = *(undefined4 *)*piVar3;
          iVar4 = func_0x024f83b8(*(undefined4 *)(iRam035949e8 + 0x3594864));
          if (*(int *)(iVar4 + 0x74) == 0) {
            func_0x024f83d8();
          }
          uVar13 = 0;
          piVar5 = (int *)func_0x05171434(uVar17,0);
          uVar17 = func_0x024f83b8(*(undefined4 *)(iRam035949ec + 0x3594894));
          uVar26 = piVar5 == (int *)0x0;
          uVar29 = 1;
          if (!(bool)uVar26) {
            uVar13 = (**(code **)(*piVar5 + 0xd8))(piVar5,*(undefined4 *)(*piVar5 + 0xdc));
          }
          uVar9 = func_0x024f83b8(*(undefined4 *)(iRam035949f0 + 0x35948c4));
          piVar14 = (int *)func_0x04f6b198(uVar17,uVar13,uVar9,0);
          func_0x024f83b8(*(undefined4 *)(iRam035949f4 + 0x35948e8));
          iVar4 = func_0x024f83c8();
          func_0x051a2e28(iVar4,piVar14,0);
          func_0x024f83c0(iVar4,iVar15);
          func_0x024f83bc();
          goto LAB_0359490c;
        }
        uVar13 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
        uVar17 = func_0x024f87e0(uVar13,uVar17,0);
        iVar4 = func_0x051b1750(uVar17,0,0);
        if (iVar4 != 0) {
          return (int *)0x0;
        }
        piVar14 = (int *)func_0x024f867c(uVar17,0);
      }
      else {
        uVar13 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
        uVar17 = func_0x024f87e0(uVar13,uVar17,0);
        iVar4 = func_0x051b1750(uVar17,0,0);
        if (iVar4 != 0) {
          return (int *)0x0;
        }
        piVar14 = (int *)func_0x024f864c(uVar17,0);
      }
    }
    else {
      uVar13 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
      piVar14 = (int *)func_0x024f87c0(uVar13,uVar17,0);
    }
  }
  else {
    uVar13 = func_0x05171434(**(undefined4 **)(iRam03594988 + 0x3594154),0);
    iVar18 = func_0x0517c82c(piVar5,uVar13,0);
    if (iVar18 == 0) {
      uVar13 = *(undefined4 *)*piVar3;
      if (*(int *)(*piVar14 + 0x74) == 0) {
        func_0x024f83d8();
      }
      uVar13 = func_0x05171434(uVar13,0);
      uVar9 = func_0x05171434(**(undefined4 **)(iRam03594990 + 0x3594220),0);
      iVar18 = func_0x0517c82c(uVar13,uVar9,0);
      if (iVar18 == 0) {
        uVar13 = *(undefined4 *)*piVar3;
        if (*(int *)(*piVar14 + 0x74) == 0) {
          func_0x024f83d8();
        }
        uVar13 = func_0x05171434(uVar13,0);
        uVar9 = func_0x05171434(**(undefined4 **)(iRam03594998 + 0x3594338),0);
        iVar18 = func_0x0517c82c(uVar13,uVar9,0);
        if (iVar18 == 0) {
          uVar13 = *(undefined4 *)*piVar3;
          if (*(int *)(*piVar14 + 0x74) == 0) {
            func_0x024f83d8();
          }
          uVar13 = func_0x05171434(uVar13,0);
          uVar9 = func_0x05171434(**(undefined4 **)(iRam035949a8 + 0x3594480),0);
          iVar18 = func_0x0517c82c(uVar13,uVar9,0);
          if (iVar18 == 0) {
            uVar13 = *(undefined4 *)*piVar3;
            if (*(int *)(*piVar14 + 0x74) == 0) {
              func_0x024f83d8();
            }
            uVar13 = func_0x05171434(uVar13,0);
            uVar9 = func_0x05171434(**(undefined4 **)(iRam035949b0 + 0x359460c),0);
            iVar18 = func_0x0517c82c(uVar13,uVar9,0);
            if (iVar18 == 0) {
              uVar13 = *(undefined4 *)*piVar3;
              if (*(int *)(*piVar14 + 0x74) == 0) {
                func_0x024f83d8();
              }
              uVar13 = func_0x05171434(uVar13,0);
              uVar9 = func_0x05171434(**(undefined4 **)(iRam035949b8 + 0x3594690),0);
              iVar18 = func_0x0517c82c(uVar13,uVar9,0);
              if (iVar18 == 0) {
                uVar13 = *(undefined4 *)*piVar3;
                if (*(int *)(*piVar14 + 0x74) == 0) {
                  func_0x024f83d8();
                }
                uVar13 = func_0x05171434(uVar13,0);
                uVar9 = func_0x05171434(**(undefined4 **)(iRam035949c0 + 0x359470c),0);
                iVar18 = func_0x0517c82c(uVar13,uVar9,0);
                if (iVar18 != 0) {
                  uVar13 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
                  uVar17 = func_0x024f8820(uVar13,uVar17,0);
                  puVar12 = *(undefined4 **)(iRam035949c4 + 0x359474c);
                  goto LAB_03594190;
                }
                uVar13 = *(undefined4 *)*piVar3;
                if (*(int *)(*piVar14 + 0x74) == 0) {
                  func_0x024f83d8();
                }
                uVar13 = func_0x05171434(uVar13,0);
                uVar9 = func_0x05171434(**(undefined4 **)(iRam035949c8 + 0x3594788),0);
                iVar18 = func_0x0517c82c(uVar13,uVar9,0);
                if (iVar18 == 0) {
                  uVar13 = *(undefined4 *)*piVar3;
                  if (*(int *)(*piVar14 + 0x74) == 0) {
                    func_0x024f83d8();
                  }
                  piVar5 = (int *)0x0;
                  uVar13 = func_0x05171434(uVar13,0);
                  uVar9 = func_0x05171434(**(undefined4 **)(iRam035949d0 + 0x3594810),0);
                  iVar18 = func_0x0517c82c(uVar13,uVar9,0);
                  if (iVar18 == 0) {
                    return (int *)0x0;
                  }
                  uVar13 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
                  uVar2 = func_0x024f8840(uVar13,uVar17,0);
                  puVar12 = *(undefined4 **)(iRam035949d4 + 0x3594850);
                  goto LAB_03594648;
                }
                uVar13 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
                uVar35 = func_0x024f8830(uVar13,uVar17,0);
                puVar12 = *(undefined4 **)(iRam035949cc + 0x35947c8);
              }
              else {
                uVar13 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
                uVar35 = func_0x024f8810(uVar13,uVar17,0);
                puVar12 = *(undefined4 **)(iRam035949bc + 0x35946d0);
              }
              uVar17 = (undefined4)uVar35;
              uVar13 = *puVar12;
              *(int *)(puVar23 + -0x2c) = (int)((ulonglong)uVar35 >> 0x20);
              goto LAB_03594194;
            }
            uVar13 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
            uVar2 = func_0x024f8800(uVar13,uVar17,0);
            puVar12 = *(undefined4 **)(iRam035949b4 + 0x359464c);
LAB_03594648:
            uVar13 = *puVar12;
            *(undefined2 *)(puVar23 + -0x30) = uVar2;
            goto LAB_035944c4;
          }
          uVar13 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
          uVar26 = func_0x024f87f0(uVar13,uVar17,0);
          puVar12 = *(undefined4 **)(iRam035949ac + 0x35944c0);
        }
        else {
          if (*(int *)(**(int **)(iRam0359499c + 0x3594360) + 0x74) == 0) {
            func_0x024f83d8();
          }
          func_0x024ef77c(**(undefined4 **)(iRam035949a0 + 0x3594380),0);
          uVar13 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
          uVar26 = func_0x024f87f0(uVar13,uVar17,0);
          puVar12 = *(undefined4 **)(iRam035949a4 + 0x35943a8);
        }
      }
      else {
        uVar13 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
        uVar26 = func_0x024f87d0(uVar13,uVar17,0);
        puVar12 = *(undefined4 **)(iRam03594994 + 0x3594260);
      }
      uVar13 = *puVar12;
      puVar23[-0x30] = uVar26;
    }
    else {
      uVar13 = func_0x024f85fc(*(undefined4 *)(iVar4 + 8),0);
      uVar17 = func_0x024f87b0(uVar13,uVar17,0);
      puVar12 = *(undefined4 **)(iRam0359498c + 0x3594194);
LAB_03594190:
      uVar13 = *puVar12;
LAB_03594194:
      *(undefined4 *)(puVar23 + -0x30) = uVar17;
    }
LAB_035944c4:
    piVar14 = (int *)func_0x024f83c4(uVar13,puVar23 + -0x30);
  }
  iVar4 = *(int *)(*piVar3 + 4);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = func_0x024f83fc(iVar4);
  }
  if (piVar14 == (int *)0x0) {
    func_0x024f83d4();
  }
  uVar29 = *(uint *)(iVar4 + 0x20) <= *(uint *)(*piVar14 + 0x20);
  uVar26 = 0;
  if (*(uint *)(*piVar14 + 0x20) == *(uint *)(iVar4 + 0x20)) {
    pcVar16 = (char *)func_0x024f83d0(piVar14);
    return (int *)(uint)(*pcVar16 != '\0');
  }
LAB_0359490c:
  uVar35 = func_0x024f84a0(piVar14,iVar4);
  puVar12 = (undefined4 *)((ulonglong)uVar35 >> 0x20);
  pEVar6 = (Elf32_Rel *)uVar35;
  bVar27 = false;
  bVar28 = (bool)uVar29;
  if ((bool)uVar26) {
    bVar28 = (undefined4 *)0x24000000 < puVar12 ||
             puVar12 + -0x9000000 < (undefined4 *)(uint)(byte)uVar29;
    pEVar6 = (Elf32_Rel *)((int)puVar12 - (!(bool)uVar29 + 0x24000000));
    bVar27 = pEVar6 == (Elf32_Rel *)0x0;
  }
  bVar25 = false;
  bVar30 = bVar28;
  if (bVar27) {
    bVar30 = (undefined4 *)0x1c000000 < puVar12 || puVar12 + -0x7000000 < (undefined4 *)(uint)bVar28
    ;
    pEVar6 = (Elf32_Rel *)((int)puVar12 - (!bVar28 + 0x1c000000));
    bVar25 = pEVar6 == (Elf32_Rel *)0x0;
  }
  bVar27 = false;
  bVar28 = bVar30;
  if (bVar25) {
    bVar28 = (undefined4 *)0x14000000 < puVar12 || puVar12 + -0x5000000 < (undefined4 *)(uint)bVar30
    ;
    pEVar6 = (Elf32_Rel *)((int)puVar12 - (!bVar30 + 0x14000000));
    bVar27 = pEVar6 == (Elf32_Rel *)0x0;
  }
  bVar25 = false;
  bVar30 = bVar28;
  if (bVar27) {
    puVar12 = (undefined4 *)(puVar23 + (-0x30 - (!bVar28 + 0x1c000000)));
    bVar30 = (Elf32_Rel *)&UNK_0001c000 < pEVar6 || pEVar6 + -0x3800 < (Elf32_Rel *)(uint)bVar28;
    iVar4 = (int)pEVar6 - (!bVar28 + 0x1c000);
    bVar25 = iVar4 == 0;
  }
  bVar27 = false;
  bVar28 = bVar30;
  if (bVar25) {
    puVar12 = (undefined4 *)(puVar23 + (-0x30 - (!bVar30 + 0x3000000)));
    piVar14 = (int *)(0x3594960 - (!bVar30 + 0x10000000));
    pEVar6 = (Elf32_Rel *)(puVar23 + (-0x30 - (!bVar30 + 800)));
    bVar28 = __DT_REL + 0x1bd2e < pEVar6 || pEVar6 + -0x24000 < (Elf32_Rel *)(uint)bVar30;
    iVar4 = (int)pEVar6 - (!bVar30 + 0x120000);
    bVar27 = iVar4 == 0;
  }
  bVar25 = false;
  bVar30 = bVar28;
  if (bVar27) {
    puVar12 = (undefined4 *)(puVar23 + (-0x30 - (!bVar28 + 0x17000000)));
    bVar30 = (undefined4 *)0x40000000 < puVar12 ||
             puVar12 + -0x10000000 < (undefined4 *)(uint)bVar28;
    pEVar6 = (Elf32_Rel *)((int)puVar12 - (!bVar28 + 0x40000000));
    bVar25 = pEVar6 == (Elf32_Rel *)0x0;
  }
  bVar27 = false;
  bVar28 = bVar30;
  if (bVar25) {
    puVar12 = (undefined4 *)(puVar23 + (-0x30 - (!bVar30 + 0xb000000)));
    bVar28 = (undefined4 *)0xc000000a < puVar12 || (int)puVar12 + 0x3ffffff6U < (uint)bVar30;
    pEVar6 = (Elf32_Rel *)((int)puVar12 - (!bVar30 + 0xc000000a));
    bVar27 = pEVar6 == (Elf32_Rel *)0x0;
  }
  bVar25 = false;
  bVar30 = bVar28;
  if (bVar27) {
    puVar12 = (undefined4 *)(puVar23 + (-0x30 - (int)(&UNK_05000000 + !bVar28)));
    bVar30 = (undefined4 *)0x2c < puVar12 || puVar12 + -0xb < (undefined4 *)(uint)bVar28;
    pEVar6 = (Elf32_Rel *)((int)puVar12 - (!bVar28 + 0x2c));
    bVar25 = pEVar6 == (Elf32_Rel *)0x0;
  }
  bVar27 = false;
  bVar28 = bVar30;
  if (bVar25) {
    puVar12 = (undefined4 *)(puVar23 + (-0x30 - (!bVar30 + 0xa0)));
    pEVar6 = (Elf32_Rel *)(puVar23 + (-0x30 - (int)(&UNK_02200000 + !bVar30)));
    bVar28 = (Elf32_Rel *)0x90000000 < pEVar6 || pEVar6 + 0xe000000 < (Elf32_Rel *)(uint)bVar30;
    iVar4 = (int)pEVar6 - (!bVar30 + 0x90000000);
    bVar27 = iVar4 == 0;
  }
  bVar25 = false;
  bVar30 = bVar28;
  if (bVar27) {
    bVar30 = (undefined4 *)0xf4 < puVar12 || puVar12 + -0x3d < (undefined4 *)(uint)bVar28;
    pEVar6 = (Elf32_Rel *)((int)puVar12 - (!bVar28 + 0xf4));
    bVar25 = pEVar6 == (Elf32_Rel *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x035949e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (bVar25) {
    piVar3 = (int *)(*(code *)((int)pEVar6 - (!bVar30 + 0x2c0)))();
    return piVar3;
  }
  *(undefined4 *)(puVar23 + -0x34) = 0x3594918;
  *(int **)(puVar23 + -0x38) = piVar19;
  *(int **)(puVar23 + -0x3c) = piVar5;
  *(int *)(puVar23 + -0x40) = iVar15;
  *(int *)(puVar23 + -0x44) = iVar4;
  *(int **)(puVar23 + -0x48) = piVar14;
  pcVar16 = (char *)(_UNK_03594b88 + 0x3594a18);
  if (*pcVar16 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03594b8c + 0x3594a2c));
    *pcVar16 = '\x01';
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
      func_0x037543e0(puVar23 + -0x50,cVar1 != '\0',*(undefined4 *)(*(int *)(iVar4 + 0x60) + 0x18));
    }
    else {
      if (*(int *)(**(int **)(_UNK_03594b90 + 0x3594ac8) + 0x74) == 0) {
        func_0x024f83d8();
      }
      iVar15 = *(int *)(extraout_r2 + 0x10);
      if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
        iVar15 = func_0x024f83fc();
      }
      func_0x03753658(puVar23 + -0x50,iVar4,*(undefined4 *)(*(int *)(iVar15 + 0x60) + 0x10));
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
    iVar15 = *piVar3;
    uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
    if (uVar7 != 0) {
      piVar14 = (int *)(*(int *)(iVar15 + 0x58) + 4);
      do {
        if (piVar14[-1] == iVar4) {
          puVar12 = (undefined4 *)(iVar15 + *piVar14 * 8 + 200);
          goto LAB_03594b14;
        }
        uVar7 = uVar7 - 1;
        piVar14 = piVar14 + 2;
      } while (uVar7 != 0);
    }
    puVar12 = (undefined4 *)func_0x024f8424(piVar3,iVar4,1);
LAB_03594b14:
    (*(code *)*puVar12)(puVar23 + -0x50,piVar3,puVar12[1]);
  }
  piVar3 = *(int **)(puVar23 + -0x50);
  dVar11 = *(dword *)(puVar23 + -0x4c);
  pEVar6->r_offset = (dword)piVar3;
  pEVar6->r_info = dVar11;
  return piVar3;
}

