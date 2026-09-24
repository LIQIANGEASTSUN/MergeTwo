/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ConfHelper$$RefreshResMap RVA 0x1c0f094 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c1f094(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar2 = (char *)(_UNK_01c1f138 + 0x1c1f0a4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c1f13c + 0x1c1f0b8));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xd59,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xd59,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar3 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar6,uVar5,&uStack_30,uVar3,0,0);
    return;
  }
  uVar3 = func_0x02c41808(0);
  piVar4 = *(int **)(_UNK_01c1f140 + 0x1c1f118);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  **(undefined4 **)(iVar1 + 0x5c) = uVar3;
  return;
}



// ===== FAT.ConfHelper$$CheckUpdateAndRefreshResMap RVA 0x1c0f144 =====

/* WARNING: Possible PIC construction at 0x02f868b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f868b8) */
/* WARNING: Removing unreachable block (ram,0x02f86468) */
/* WARNING: Removing unreachable block (ram,0x02f85c3c) */
/* WARNING: Removing unreachable block (ram,0x02f854dc) */
/* WARNING: Removing unreachable block (ram,0x02f84d44) */
/* WARNING: Removing unreachable block (ram,0x02f845c0) */
/* WARNING: Removing unreachable block (ram,0x02f83e50) */
/* WARNING: Removing unreachable block (ram,0x02f83a28) */
/* WARNING: Removing unreachable block (ram,0x02f83a44) */
/* WARNING: Removing unreachable block (ram,0x02f83a4c) */
/* WARNING: Removing unreachable block (ram,0x02f83a74) */
/* WARNING: Removing unreachable block (ram,0x02f83a58) */
/* WARNING: Removing unreachable block (ram,0x02f83a64) */
/* WARNING: Removing unreachable block (ram,0x02f83a80) */
/* WARNING: Removing unreachable block (ram,0x02f83314) */
/* WARNING: Removing unreachable block (ram,0x02f82eec) */
/* WARNING: Removing unreachable block (ram,0x02f82f08) */
/* WARNING: Removing unreachable block (ram,0x02f82f10) */
/* WARNING: Removing unreachable block (ram,0x02f82f38) */
/* WARNING: Removing unreachable block (ram,0x02f82f1c) */
/* WARNING: Removing unreachable block (ram,0x02f82f28) */
/* WARNING: Removing unreachable block (ram,0x02f82f44) */
/* WARNING: Removing unreachable block (ram,0x02f827d8) */
/* WARNING: Removing unreachable block (ram,0x02f82064) */
/* WARNING: Removing unreachable block (ram,0x02f81a9c) */
/* WARNING: Removing unreachable block (ram,0x02f814d4) */
/* WARNING: Removing unreachable block (ram,0x02f817b8) */
/* WARNING: Removing unreachable block (ram,0x02f81d80) */
/* WARNING: Removing unreachable block (ram,0x02f82420) */
/* WARNING: Removing unreachable block (ram,0x02f82b90) */
/* WARNING: Removing unreachable block (ram,0x02f82f5c) */
/* WARNING: Removing unreachable block (ram,0x02f836cc) */
/* WARNING: Removing unreachable block (ram,0x02f83a98) */
/* WARNING: Removing unreachable block (ram,0x02f84208) */
/* WARNING: Removing unreachable block (ram,0x02f84978) */
/* WARNING: Removing unreachable block (ram,0x02f85110) */
/* WARNING: Removing unreachable block (ram,0x02f85894) */
/* WARNING: Removing unreachable block (ram,0x02f85fe4) */
/* WARNING: Removing unreachable block (ram,0x02f86830) */
/* WARNING: Removing unreachable block (ram,0x02f81d10) */
/* WARNING: Removing unreachable block (ram,0x02f81d2c) */
/* WARNING: Removing unreachable block (ram,0x02f81d34) */
/* WARNING: Removing unreachable block (ram,0x02f81d5c) */
/* WARNING: Removing unreachable block (ram,0x02f81d40) */
/* WARNING: Removing unreachable block (ram,0x02f81d4c) */
/* WARNING: Removing unreachable block (ram,0x02f81d68) */
/* WARNING: Removing unreachable block (ram,0x02f81748) */
/* WARNING: Removing unreachable block (ram,0x02f81764) */
/* WARNING: Removing unreachable block (ram,0x02f8176c) */
/* WARNING: Removing unreachable block (ram,0x02f81794) */
/* WARNING: Removing unreachable block (ram,0x02f81778) */
/* WARNING: Removing unreachable block (ram,0x02f81784) */
/* WARNING: Removing unreachable block (ram,0x02f817a0) */
/* WARNING: Removing unreachable block (ram,0x02f81464) */
/* WARNING: Removing unreachable block (ram,0x02f81480) */
/* WARNING: Removing unreachable block (ram,0x02f81488) */
/* WARNING: Removing unreachable block (ram,0x02f814b0) */
/* WARNING: Removing unreachable block (ram,0x02f81494) */
/* WARNING: Removing unreachable block (ram,0x02f814a0) */
/* WARNING: Removing unreachable block (ram,0x02f814bc) */
/* WARNING: Removing unreachable block (ram,0x02f81a2c) */
/* WARNING: Removing unreachable block (ram,0x02f81a48) */
/* WARNING: Removing unreachable block (ram,0x02f81a50) */
/* WARNING: Removing unreachable block (ram,0x02f81a78) */
/* WARNING: Removing unreachable block (ram,0x02f81a5c) */
/* WARNING: Removing unreachable block (ram,0x02f81a68) */
/* WARNING: Removing unreachable block (ram,0x02f81a84) */
/* WARNING: Removing unreachable block (ram,0x02f81ff4) */
/* WARNING: Removing unreachable block (ram,0x02f82010) */
/* WARNING: Removing unreachable block (ram,0x02f82018) */
/* WARNING: Removing unreachable block (ram,0x02f82040) */
/* WARNING: Removing unreachable block (ram,0x02f82024) */
/* WARNING: Removing unreachable block (ram,0x02f82030) */
/* WARNING: Removing unreachable block (ram,0x02f8204c) */
/* WARNING: Removing unreachable block (ram,0x02f858b0) */
/* WARNING: Removing unreachable block (ram,0x02f854f8) */
/* WARNING: Removing unreachable block (ram,0x02f8512c) */
/* WARNING: Removing unreachable block (ram,0x02f84d60) */
/* WARNING: Removing unreachable block (ram,0x02f84994) */
/* WARNING: Removing unreachable block (ram,0x02f849a0) */
/* WARNING: Removing unreachable block (ram,0x02f84d6c) */
/* WARNING: Removing unreachable block (ram,0x02f85138) */
/* WARNING: Removing unreachable block (ram,0x02f85504) */
/* WARNING: Removing unreachable block (ram,0x02f858bc) */
/* WARNING: Removing unreachable block (ram,0x02f854fc) */
/* WARNING: Removing unreachable block (ram,0x02f84d64) */
/* WARNING: Removing unreachable block (ram,0x02f84998) */
/* WARNING: Removing unreachable block (ram,0x02f85130) */
/* WARNING: Removing unreachable block (ram,0x02f858b4) */
/* WARNING: Removing unreachable block (ram,0x02f85500) */
/* WARNING: Removing unreachable block (ram,0x02f84d68) */
/* WARNING: Removing unreachable block (ram,0x02f85134) */
/* WARNING: Removing unreachable block (ram,0x02f858b8) */
/* WARNING: Removing unreachable block (ram,0x02f8499c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_01c1f144(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  int extraout_r2_04;
  int extraout_r2_05;
  int extraout_r2_06;
  int extraout_r2_07;
  int extraout_r2_08;
  int extraout_r2_09;
  int extraout_r2_10;
  int extraout_r2_11;
  int extraout_r2_12;
  int extraout_r2_13;
  int extraout_r2_14;
  int extraout_r2_15;
  int extraout_r2_16;
  int extraout_r2_17;
  int extraout_r2_18;
  int extraout_r2_19;
  int extraout_r2_20;
  int *piVar9;
  int *piVar10;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int extraout_r3_02;
  int extraout_r3_03;
  int extraout_r3_04;
  int extraout_r3_05;
  int extraout_r3_06;
  int extraout_r3_07;
  int extraout_r3_08;
  int extraout_r3_09;
  int extraout_r3_10;
  int extraout_r3_11;
  int extraout_r3_12;
  int extraout_r3_13;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  code *pcVar16;
  undefined1 *puVar17;
  code *unaff_r7;
  undefined4 *puVar18;
  code *pcVar19;
  undefined4 *puVar20;
  int *piVar21;
  undefined4 unaff_r9;
  int iVar22;
  undefined4 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  int iVar27;
  bool bVar28;
  bool bVar29;
  undefined1 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined4 auStack_b0 [2];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int *piStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_8c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int *piStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar11 = (char *)(_UNK_01c1f34c + 0x1c1f154);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c1f350 + 0x1c1f168));
    func_0x01384978(*(undefined4 *)(_UNK_01c1f354 + 0x1c1f174));
    func_0x01384978(*(undefined4 *)(_UNK_01c1f358 + 0x1c1f180));
    func_0x01384978(*(undefined4 *)(_UNK_01c1f35c + 0x1c1f18c));
    func_0x01384978(*(undefined4 *)(_UNK_01c1f360 + 0x1c1f198));
    func_0x01384978(*(undefined4 *)(_UNK_01c1f364 + 0x1c1f1a4));
    func_0x01384978(*(undefined4 *)(_UNK_01c1f368 + 0x1c1f1b0));
    func_0x01384978(*(undefined4 *)(_UNK_01c1f36c + 0x1c1f1bc));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xd55,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xd55,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar12 = 0;
    piStack_30 = (int *)0x0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    piStack_30 = (int *)uStack_48;
    iStack_2c = uStack_48._4_4_;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&piStack_30,*(int *)(iVar1 + 0x10),0);
      uVar12 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar12 = 1;
      }
    }
    iVar15 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar15 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar15,uVar13,&piStack_30,uVar12);
    piVar2 = (int *)func_0x0245496c(&piStack_30,0,0);
    return piVar2;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01c1f370 + 0x1c1f210));
  func_0x0244f5a0(iVar1,0);
  iVar15 = func_0x02c41808(0);
  if (iVar15 == 0) {
    func_0x01384bf0();
  }
  uVar12 = *(undefined4 *)(iVar15 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = *(int **)(_UNK_01c1f374 + 0x1c1f254);
  *(undefined4 *)(iVar1 + 0xc) = uVar12;
  iVar15 = *piVar2;
  if (*(int *)(iVar15 + 0x74) == 0) {
    func_0x01384ab4();
    iVar15 = *piVar2;
  }
  iVar15 = **(int **)(iVar15 + 0x5c);
  if (iVar15 == 0) {
    func_0x01384bf0();
  }
  puVar18 = *(undefined4 **)(_UNK_01c1f378 + 0x1c1f28c);
  uVar13 = *(undefined4 *)(iVar1 + 0xc);
  uVar12 = *puVar18;
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar15 + 8);
  uVar12 = func_0x01384be4(uVar12);
  func_0x02450e9c(uVar12,iVar1,**(undefined4 **)(_UNK_01c1f37c + 0x1c1f2b4),0);
  puVar20 = *(undefined4 **)(_UNK_01c1f380 + 0x1c1f2d0);
  uVar12 = func_0x02fb71ac(uVar13,uVar12,*puVar20);
  uVar14 = *(undefined4 *)(iVar1 + 8);
  uVar13 = func_0x01384be4(*puVar18);
  func_0x02450e9c(uVar13,iVar1,**(undefined4 **)(_UNK_01c1f384 + 0x1c1f2fc),0);
  uVar13 = func_0x02fb71ac(uVar14,uVar13,*puVar20);
  piVar2 = (int *)func_0x02fb66a4(uVar12,uVar13,**(undefined4 **)(_UNK_01c1f388 + 0x1c1f324));
  FUN_01c1f094();
  iVar1 = **(int **)(_UNK_01c1f38c + 0x1c1f340);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f814e8 + 0x2f81240));
    func_0x01384978(*(undefined4 *)(iRam02f814ec + 0x2f8124c));
    if (*(int *)(iVar1 + 0x1c) == 0) {
      func_0x0140024c(iVar1);
    }
  }
  if (piVar2 != (int *)0x0) {
    iVar1 = **(int **)(iVar1 + 0x1c);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0(iVar1);
    }
    iVar15 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar15 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar1) {
          puVar18 = (undefined4 *)(iVar15 + *piVar9 * 8 + 0xc0);
          goto LAB_02f812d4;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar2,iVar1,0);
LAB_02f812d4:
    piVar2 = (int *)(*(code *)*puVar18)(piVar2,puVar18[1]);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(iRam02f814f0 + 0x2f81304)) {
          puVar18 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_02f8134c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f814f0 + 0x2f81304),0);
LAB_02f8134c:
    uVar7 = (*(code *)*puVar18)(piVar2,puVar18[1]);
    iVar1 = 7;
    if (uVar7 != 0) {
      iVar1 = 6;
    }
    iVar15 = 0;
LAB_02f81370:
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(iRam02f814f4 + 0x2f81388)) {
            puVar18 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
            goto LAB_02f813d0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f814f4 + 0x2f81388),0);
LAB_02f813d0:
      (*(code *)*puVar18)(piVar2,puVar18[1]);
    }
    if (iVar15 != 0) {
      func_0x01384bec(iVar15);
    }
    return (int *)(iVar1 == 6 & uVar7);
  }
  uVar12 = func_0x01384988(*(undefined4 *)(iRam02f814fc + 0x2f81410));
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,iVar1);
  uVar31 = func_0x01384928();
  uVar12 = (undefined4)uVar31;
  if ((int)((ulonglong)uVar31 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar12);
    iVar15 = *piVar2;
    iVar1 = 0;
    func_0x0145b0f8();
    uVar7 = 0;
    piVar2 = (int *)0x0;
    goto LAB_02f81370;
  }
  uVar30 = 1;
  func_0x01459844(uVar12);
  iVar3 = 0x2f814e8;
  uVar31 = func_0x01062280();
  iVar15 = (int)((ulonglong)uVar31 >> 0x20);
  piVar9 = (int *)uVar31;
  if ((bool)uVar30) {
    uVar12 = 0xfd087b10;
  }
  if (((bool)uVar30 && iVar15 == -0x2ffffffe) && iVar15 == -0x3ffffff1) {
    uVar12 = 0xfd0dab00;
    iVar3 = 0x2f00 - iVar15;
  }
  uStack_20 = 0;
  piStack_30 = piVar2;
  iStack_2c = iVar1;
  uStack_28 = uVar12;
  iStack_1c = iVar3;
  if (*(int *)(iVar15 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f817cc + 0x2f81524));
    func_0x01384978(*(undefined4 *)(iRam02f817d0 + 0x2f81530));
    if (*(int *)(iVar15 + 0x1c) == 0) {
      func_0x0140024c(iVar15);
    }
  }
  if (piVar9 != (int *)0x0) {
    iVar1 = **(int **)(iVar15 + 0x1c);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0(iVar1);
    }
    iVar15 = *piVar9;
    uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(int *)(iVar15 + 0x58) + 4);
      do {
        if (piVar2[-1] == iVar1) {
          puVar18 = (undefined4 *)(iVar15 + *piVar2 * 8 + 0xc0);
          goto LAB_02f815b8;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar9,iVar1,0);
LAB_02f815b8:
    piVar2 = (int *)(*(code *)*puVar18)(piVar9,puVar18[1]);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(iRam02f817d4 + 0x2f815e8)) {
          puVar18 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_02f81630;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f817d4 + 0x2f815e8),0);
LAB_02f81630:
    uVar7 = (*(code *)*puVar18)(piVar2,puVar18[1]);
    iVar1 = 7;
    if (uVar7 != 0) {
      iVar1 = 6;
    }
    iVar15 = 0;
LAB_02f81654:
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(iRam02f817d8 + 0x2f8166c)) {
            puVar18 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
            goto LAB_02f816b4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f817d8 + 0x2f8166c),0);
LAB_02f816b4:
      (*(code *)*puVar18)(piVar2,puVar18[1]);
    }
    if (iVar15 != 0) {
      func_0x01384bec(iVar15);
    }
    return (int *)(iVar1 == 6 & uVar7);
  }
  uVar12 = func_0x01384988(*(undefined4 *)(iRam02f817e0 + 0x2f816f4));
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,iVar15);
  uVar32 = func_0x01384928();
  uVar12 = (undefined4)uVar32;
  if ((int)((ulonglong)uVar32 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar12);
    iVar15 = *piVar2;
    iVar1 = 0;
    func_0x0145b0f8();
    uVar7 = 0;
    piVar2 = (int *)0x0;
    goto LAB_02f81654;
  }
  uVar30 = 1;
  func_0x01459844(uVar12);
  iVar15 = 0x2f817cc;
  uVar32 = func_0x01062280();
  iVar1 = (int)((ulonglong)uVar32 >> 0x20);
  piVar2 = (int *)uVar32;
  if ((bool)uVar30) {
    uVar12 = 0xfd32e82c;
  }
  if (((bool)uVar30 && iVar1 == 0xd0) && iVar1 == 0x18) {
    uVar12 = 0xfee7e81c;
    iVar15 = 0xd8000 - iVar1;
  }
  uStack_38 = 0;
  uStack_40 = uVar12;
  iStack_34 = iVar15;
  uStack_48 = uVar31;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f81ab0 + 0x2f81808));
    func_0x01384978(*(undefined4 *)(iRam02f81ab4 + 0x2f81814));
    if (*(int *)(iVar1 + 0x1c) == 0) {
      func_0x0140024c(iVar1);
    }
  }
  if (piVar2 != (int *)0x0) {
    iVar1 = **(int **)(iVar1 + 0x1c);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0(iVar1);
    }
    iVar15 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar15 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar1) {
          puVar18 = (undefined4 *)(iVar15 + *piVar9 * 8 + 0xc0);
          goto LAB_02f8189c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar2,iVar1,0);
LAB_02f8189c:
    piVar2 = (int *)(*(code *)*puVar18)(piVar2,puVar18[1]);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(iRam02f81ab8 + 0x2f818cc)) {
          puVar18 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_02f81914;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f81ab8 + 0x2f818cc),0);
LAB_02f81914:
    uVar7 = (*(code *)*puVar18)(piVar2,puVar18[1]);
    iVar1 = 7;
    if (uVar7 != 0) {
      iVar1 = 6;
    }
    iVar15 = 0;
LAB_02f81938:
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(iRam02f81abc + 0x2f81950)) {
            puVar18 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
            goto LAB_02f81998;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f81abc + 0x2f81950),0);
LAB_02f81998:
      (*(code *)*puVar18)(piVar2,puVar18[1]);
    }
    if (iVar15 != 0) {
      func_0x01384bec(iVar15);
    }
    return (int *)(iVar1 == 6 & uVar7);
  }
  uVar12 = func_0x01384988(*(undefined4 *)(iRam02f81ac4 + 0x2f819d8));
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,iVar1);
  uVar31 = func_0x01384928();
  if ((int)((ulonglong)uVar31 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008((int)uVar31);
    iVar15 = *piVar2;
    iVar1 = 0;
    func_0x0145b0f8();
    uVar7 = 0;
    piVar2 = (int *)0x0;
    goto LAB_02f81938;
  }
  func_0x01459844((int)uVar31);
  uVar31 = func_0x01062280();
  iVar1 = (int)((ulonglong)uVar31 >> 0x20);
  piVar2 = (int *)uVar31;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f81d94 + 0x2f81aec));
    func_0x01384978(*(undefined4 *)(iRam02f81d98 + 0x2f81af8));
    if (*(int *)(iVar1 + 0x1c) == 0) {
      func_0x0140024c(iVar1);
    }
  }
  if (piVar2 != (int *)0x0) {
    iVar1 = **(int **)(iVar1 + 0x1c);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0(iVar1);
    }
    iVar15 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar15 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar1) {
          puVar18 = (undefined4 *)(iVar15 + *piVar9 * 8 + 0xc0);
          goto LAB_02f81b80;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar2,iVar1,0);
LAB_02f81b80:
    piVar2 = (int *)(*(code *)*puVar18)(piVar2,puVar18[1]);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(iRam02f81d9c + 0x2f81bb0)) {
          puVar18 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_02f81bf8;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f81d9c + 0x2f81bb0),0);
LAB_02f81bf8:
    uVar7 = (*(code *)*puVar18)(piVar2,puVar18[1]);
    iVar1 = 7;
    if (uVar7 != 0) {
      iVar1 = 6;
    }
    iVar15 = 0;
LAB_02f81c1c:
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(iRam02f81da0 + 0x2f81c34)) {
            puVar18 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
            goto LAB_02f81c7c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f81da0 + 0x2f81c34),0);
LAB_02f81c7c:
      (*(code *)*puVar18)(piVar2,puVar18[1]);
    }
    if (iVar15 != 0) {
      func_0x01384bec(iVar15);
    }
    return (int *)(iVar1 == 6 & uVar7);
  }
  uVar12 = func_0x01384988(*(undefined4 *)(iRam02f81da8 + 0x2f81cbc));
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,iVar1);
  uVar31 = func_0x01384928();
  if ((int)((ulonglong)uVar31 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008((int)uVar31);
    iVar15 = *piVar2;
    iVar1 = 0;
    func_0x0145b0f8();
    uVar7 = 0;
    piVar2 = (int *)0x0;
    goto LAB_02f81c1c;
  }
  func_0x01459844((int)uVar31);
  uVar31 = func_0x01062280();
  iVar1 = (int)((ulonglong)uVar31 >> 0x20);
  piVar2 = (int *)uVar31;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f82078 + 0x2f81dd0));
    func_0x01384978(*(undefined4 *)(iRam02f8207c + 0x2f81ddc));
    if (*(int *)(iVar1 + 0x1c) == 0) {
      func_0x0140024c(iVar1);
    }
  }
  if (piVar2 != (int *)0x0) {
    iVar1 = **(int **)(iVar1 + 0x1c);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0(iVar1);
    }
    iVar15 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar15 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar1) {
          puVar18 = (undefined4 *)(iVar15 + *piVar9 * 8 + 0xc0);
          goto LAB_02f81e64;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar2,iVar1,0);
LAB_02f81e64:
    piVar2 = (int *)(*(code *)*puVar18)(piVar2,puVar18[1]);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(iRam02f82080 + 0x2f81e94)) {
          puVar18 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_02f81edc;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f82080 + 0x2f81e94),0);
LAB_02f81edc:
    uVar7 = (*(code *)*puVar18)(piVar2,puVar18[1]);
    iVar1 = 7;
    if (uVar7 != 0) {
      iVar1 = 6;
    }
    iVar15 = 0;
LAB_02f81f00:
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(iRam02f82084 + 0x2f81f18)) {
            puVar18 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
            goto LAB_02f81f60;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f82084 + 0x2f81f18),0);
LAB_02f81f60:
      (*(code *)*puVar18)(piVar2,puVar18[1]);
    }
    if (iVar15 != 0) {
      func_0x01384bec(iVar15);
    }
    return (int *)(iVar1 == 6 & uVar7);
  }
  uVar12 = func_0x01384988(*(undefined4 *)(iRam02f8208c + 0x2f81fa0));
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,iVar1);
  uVar31 = func_0x01384928();
  uVar12 = (undefined4)uVar31;
  if ((int)((ulonglong)uVar31 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar12);
    iVar15 = *piVar2;
    iVar1 = 0;
    func_0x0145b0f8();
    uVar7 = 0;
    piVar2 = (int *)0x0;
    goto LAB_02f81f00;
  }
  piVar21 = (int *)0x0;
  uVar30 = 1;
  func_0x01459844(uVar12);
  uVar31 = func_0x01062280();
  iVar3 = (int)((ulonglong)uVar31 >> 0x20);
  piVar9 = (int *)uVar31;
  bVar28 = false;
  iVar15 = extraout_r2;
  if ((bool)uVar30) {
    uVar12 = 0xfd07df80;
    iVar15 = 0x240000 - iVar3;
    bVar28 = iVar15 == 0;
  }
  bVar29 = false;
  if (bVar28) {
    iVar15 = (int)&UNK_01b00000 - iVar3;
    bVar29 = iVar15 == 0;
  }
  if (bVar29) {
    iVar1 = -0x2f813d0;
  }
  uStack_8c = 0;
  puVar23 = auStack_b0;
  piStack_9c = piVar2;
  iStack_98 = iVar1;
  uStack_94 = uVar12;
  if (*(int *)(iVar15 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f82434 + 0x2f820bc));
    func_0x01384978(*(undefined4 *)(iRam02f82438 + 0x2f820c8));
    if (*(int *)(iVar15 + 0x1c) == 0) {
      func_0x0140024c(iVar15);
    }
  }
  if (piVar9 == (int *)0x0) {
    uVar12 = *(undefined4 *)(iRam02f8243c + 0x2f82348);
  }
  else {
    if (iVar3 != 0) {
      iVar1 = **(int **)(iVar15 + 0x1c);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0(iVar1);
      }
      iVar4 = *piVar9;
      uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar1) {
            puVar18 = (undefined4 *)(iVar4 + *piVar2 * 8 + 0xc0);
            goto LAB_02f82158;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar9,iVar1,0);
LAB_02f82158:
      piVar9 = (int *)(*(code *)*puVar18)(piVar9,puVar18[1]);
      piVar2 = *(int **)(iRam02f82444 + 0x2f8217c);
      do {
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar9;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 != 0) {
          piVar21 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar21[-1] == *piVar2) {
              puVar18 = (undefined4 *)(iVar1 + *piVar21 * 8 + 0xc0);
              goto LAB_02f821d4;
            }
            uVar7 = uVar7 - 1;
            piVar21 = piVar21 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar9,*piVar2,0);
LAB_02f821d4:
        piVar21 = (int *)(*(code *)*puVar18)(piVar9,puVar18[1]);
        if (piVar21 == (int *)0x0) {
          iVar1 = 0;
          piVar21 = (int *)0x0;
          goto LAB_02f822b0;
        }
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(*(int *)(iVar15 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar4 = *piVar9;
        uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar1) {
              puVar18 = (undefined4 *)(iVar4 + *piVar10 * 8 + 0xc0);
              goto LAB_02f82268;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar9,iVar1,0);
LAB_02f82268:
        (*(code *)*puVar18)(&uStack_a8,piVar9,puVar18[1]);
        auStack_b0[0] = *(undefined4 *)(iVar3 + 0x14);
        iVar1 = (**(code **)(iVar3 + 0xc))
                          (*(undefined4 *)(iVar3 + 0x20),uStack_a8,uStack_a4,uStack_a0);
      } while (iVar1 == 0);
      iVar1 = 0;
      goto LAB_02f822b0;
    }
    uVar12 = *(undefined4 *)(iRam02f82440 + 0x2f82354);
  }
  uVar12 = func_0x01384988(uVar12);
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,iVar15);
  uVar31 = func_0x01384928();
  uVar12 = (undefined4)uVar31;
  if ((int)((ulonglong)uVar31 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar12);
    iVar1 = *piVar2;
    piVar21 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f822b0:
    if (piVar9 != (int *)0x0) {
      iVar15 = *piVar9;
      uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar15 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(iRam02f82448 + 0x2f822c8)) {
            puVar18 = (undefined4 *)(iVar15 + *piVar2 * 8 + 0xc0);
            goto LAB_02f82310;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(iRam02f82448 + 0x2f822c8),0);
LAB_02f82310:
      (*(code *)*puVar18)(piVar9,puVar18[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar21;
  }
  uVar13 = 0;
  if (piVar9 != (int *)0x0) {
    iVar1 = *piVar9;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar2[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f8244c + 0x2f823c0)) {
          puVar18 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_02f82408;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar9,(code *)**(int **)(iRam02f8244c + 0x2f823c0),0);
LAB_02f82408:
    (*(code *)*puVar18)(piVar9,puVar18[1]);
  }
  uVar30 = 1;
  func_0x01459844(uVar12);
  uVar31 = func_0x01062280();
  iVar4 = (int)((ulonglong)uVar31 >> 0x20);
  piVar2 = (int *)uVar31;
  bVar28 = false;
  iVar1 = extraout_r2_00;
  if ((bool)uVar30) {
    uVar13 = 0xfd07dd04;
    iVar1 = 0xe000000 - iVar4;
    bVar28 = iVar1 == 0;
  }
  bVar29 = false;
  if (bVar28) {
    puVar23 = (undefined4 *)(-iVar4 + 0x840);
    bVar29 = -iVar4 == -0x840;
  }
  bVar28 = false;
  if (bVar29) {
    iVar15 = (int)&UNK_00bc0000 - extraout_r3;
    bVar28 = iVar15 == 0;
  }
  bVar29 = false;
  if (bVar28) {
    iVar1 = -0x7c000000 - iVar4;
    bVar29 = iVar1 == 0;
  }
  if (bVar29) {
    uVar13 = 0xfd081bac;
  }
  *(undefined4 *)((int)puVar23 + -4) = 0x2f82434;
  *(int *)((int)puVar23 + -8) = iVar15;
  *(undefined4 *)((int)puVar23 + -0xc) = unaff_r9;
  *(undefined4 *)((int)puVar23 + -0x10) = 0;
  *(code **)((int)puVar23 + -0x14) = unaff_r7;
  *(undefined4 *)((int)puVar23 + -0x18) = uVar12;
  *(undefined4 *)((int)puVar23 + -0x1c) = uVar13;
  *(int **)((int)puVar23 + -0x20) = piVar9;
  puVar24 = (undefined1 *)((int)puVar23 + -0x28);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f827ec + 0x2f8247c));
    func_0x01384978(*(undefined4 *)(iRam02f827f0 + 0x2f82488));
    if (*(int *)(iVar1 + 0x1c) == 0) {
      func_0x0140024c(iVar1);
    }
  }
  if (piVar2 == (int *)0x0) {
    uVar12 = *(undefined4 *)(iRam02f827f4 + 0x2f82700);
  }
  else {
    if (iVar4 != 0) {
      iVar15 = **(int **)(iVar1 + 0x1c);
      if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
        iVar15 = func_0x014001f0(iVar15);
      }
      iVar3 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar9[-1] == iVar15) {
            puVar18 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
            goto LAB_02f82518;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar2,iVar15,0);
LAB_02f82518:
      piVar2 = (int *)(*(code *)*puVar18)(piVar2,puVar18[1]);
      piVar9 = *(int **)(iRam02f827fc + 0x2f8253c);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar15 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
        if (uVar7 != 0) {
          piVar21 = (int *)(*(int *)(iVar15 + 0x58) + 4);
          do {
            if (piVar21[-1] == *piVar9) {
              puVar18 = (undefined4 *)(iVar15 + *piVar21 * 8 + 0xc0);
              goto LAB_02f82594;
            }
            uVar7 = uVar7 - 1;
            piVar21 = piVar21 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar2,*piVar9,0);
LAB_02f82594:
        piVar21 = (int *)(*(code *)*puVar18)(piVar2,puVar18[1]);
        if (piVar21 == (int *)0x0) {
          iVar1 = 0;
          piVar21 = (int *)0x0;
          goto LAB_02f82668;
        }
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar15 = *(int *)(*(int *)(iVar1 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
          iVar15 = func_0x014001f0(iVar15);
        }
        iVar3 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar15) {
              puVar18 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
              goto LAB_02f82628;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar2,iVar15,0);
LAB_02f82628:
        (*(code *)*puVar18)((undefined1 *)((int)puVar23 + -0x28),piVar2,puVar18[1]);
        iVar15 = (**(code **)(iVar4 + 0xc))
                           (*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)((int)puVar23 + -0x28),
                            *(undefined4 *)((int)puVar23 + -0x24),*(undefined4 *)(iVar4 + 0x14));
      } while (iVar15 == 0);
      iVar1 = 0;
      goto LAB_02f82668;
    }
    uVar12 = *(undefined4 *)(iRam02f827f8 + 0x2f8270c);
  }
  uVar12 = func_0x01384988(uVar12);
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,iVar1);
  uVar31 = func_0x01384928();
  uVar12 = (undefined4)uVar31;
  if ((int)((ulonglong)uVar31 >> 0x20) == 1) {
    piVar9 = (int *)func_0x0145b008(uVar12);
    iVar1 = *piVar9;
    piVar21 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f82668:
    if (piVar2 != (int *)0x0) {
      iVar15 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar15 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(iRam02f82800 + 0x2f82680)) {
            puVar18 = (undefined4 *)(iVar15 + *piVar9 * 8 + 0xc0);
            goto LAB_02f826c8;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f82800 + 0x2f82680),0);
LAB_02f826c8:
      (*(code *)*puVar18)(piVar2,puVar18[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar21;
  }
  uVar13 = 0;
  if (piVar2 != (int *)0x0) {
    iVar15 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar15 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar9[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f82804 + 0x2f82778)) {
          puVar18 = (undefined4 *)(iVar15 + *piVar9 * 8 + 0xc0);
          goto LAB_02f827c0;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar2,(code *)**(int **)(iRam02f82804 + 0x2f82778),0);
LAB_02f827c0:
    (*(code *)*puVar18)(piVar2,puVar18[1]);
  }
  uVar30 = 1;
  func_0x01459844(uVar12);
  uVar31 = func_0x01062280();
  iVar4 = (int)((ulonglong)uVar31 >> 0x20);
  piVar9 = (int *)uVar31;
  bVar28 = false;
  iVar15 = extraout_r2_01;
  if ((bool)uVar30) {
    uVar13 = 0xfd0d180c;
    iVar15 = 0x1e - iVar4;
    bVar28 = iVar15 == 0;
  }
  bVar29 = false;
  if (bVar28) {
    puVar24 = (undefined1 *)((int)__DT_REL + -iVar4 + 0x8a934);
    bVar29 = -iVar4 == -0xcc000;
  }
  bVar28 = false;
  if (bVar29) {
    iVar1 = 0x1000000 - extraout_r3_00;
    bVar28 = iVar1 == 0;
  }
  bVar29 = false;
  if (bVar28) {
    iVar15 = 0xc4 - iVar4;
    bVar29 = iVar15 == 0;
  }
  if (bVar29) {
    uVar13 = 0xfe67d7f4;
  }
  *(undefined4 *)(puVar24 + -4) = 0x2f827ec;
  *(int *)(puVar24 + -8) = iVar1;
  *(undefined4 *)(puVar24 + -0xc) = unaff_r9;
  *(undefined4 *)(puVar24 + -0x10) = 0;
  *(code **)(puVar24 + -0x14) = unaff_r7;
  *(undefined4 *)(puVar24 + -0x18) = uVar12;
  *(undefined4 *)(puVar24 + -0x1c) = uVar13;
  *(int **)(puVar24 + -0x20) = piVar2;
  puVar25 = puVar24 + -0x28;
  if (*(int *)(iVar15 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f82ba4 + 0x2f82834));
    func_0x01384978(*(undefined4 *)(iRam02f82ba8 + 0x2f82840));
    if (*(int *)(iVar15 + 0x1c) == 0) {
      func_0x0140024c(iVar15);
    }
  }
  if (piVar9 == (int *)0x0) {
    uVar12 = *(undefined4 *)(iRam02f82bac + 0x2f82ab8);
  }
  else {
    if (iVar4 != 0) {
      iVar1 = **(int **)(iVar15 + 0x1c);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0(iVar1);
      }
      iVar3 = *piVar9;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar1) {
            puVar18 = (undefined4 *)(iVar3 + *piVar2 * 8 + 0xc0);
            goto LAB_02f828d0;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar9,iVar1,0);
LAB_02f828d0:
      piVar9 = (int *)(*(code *)*puVar18)(piVar9,puVar18[1]);
      piVar2 = *(int **)(iRam02f82bb4 + 0x2f828f4);
      do {
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar9;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 != 0) {
          piVar21 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar21[-1] == *piVar2) {
              puVar18 = (undefined4 *)(iVar1 + *piVar21 * 8 + 0xc0);
              goto LAB_02f8294c;
            }
            uVar7 = uVar7 - 1;
            piVar21 = piVar21 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar9,*piVar2,0);
LAB_02f8294c:
        piVar21 = (int *)(*(code *)*puVar18)(piVar9,puVar18[1]);
        if (piVar21 == (int *)0x0) {
          iVar1 = 0;
          piVar21 = (int *)0x0;
          goto LAB_02f82a20;
        }
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(*(int *)(iVar15 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar3 = *piVar9;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar1) {
              puVar18 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
              goto LAB_02f829e0;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar9,iVar1,0);
LAB_02f829e0:
        (*(code *)*puVar18)(puVar24 + -0x28,piVar9,puVar18[1]);
        iVar1 = (**(code **)(iVar4 + 0xc))
                          (*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(puVar24 + -0x28),
                           *(undefined4 *)(puVar24 + -0x24),*(undefined4 *)(iVar4 + 0x14));
      } while (iVar1 == 0);
      iVar1 = 0;
      goto LAB_02f82a20;
    }
    uVar12 = *(undefined4 *)(iRam02f82bb0 + 0x2f82ac4);
  }
  uVar12 = func_0x01384988(uVar12);
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,iVar15);
  uVar31 = func_0x01384928();
  uVar12 = (undefined4)uVar31;
  if ((int)((ulonglong)uVar31 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar12);
    iVar1 = *piVar2;
    piVar21 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f82a20:
    if (piVar9 != (int *)0x0) {
      iVar15 = *piVar9;
      uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar15 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(iRam02f82bb8 + 0x2f82a38)) {
            puVar18 = (undefined4 *)(iVar15 + *piVar2 * 8 + 0xc0);
            goto LAB_02f82a80;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(iRam02f82bb8 + 0x2f82a38),0);
LAB_02f82a80:
      (*(code *)*puVar18)(piVar9,puVar18[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar21;
  }
  uVar13 = 0;
  if (piVar9 != (int *)0x0) {
    iVar1 = *piVar9;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar2[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f82bbc + 0x2f82b30)) {
          puVar18 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_02f82b78;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar9,(code *)**(int **)(iRam02f82bbc + 0x2f82b30),0);
LAB_02f82b78:
    (*(code *)*puVar18)(piVar9,puVar18[1]);
  }
  uVar30 = 1;
  func_0x01459844(uVar12);
  uVar31 = func_0x01062280();
  iVar1 = (int)((ulonglong)uVar31 >> 0x20);
  piVar2 = (int *)uVar31;
  bVar28 = false;
  if ((bool)uVar30) {
    uVar13 = 0x6c7d454;
    iVar1 = 0x3000 - iVar1;
    bVar28 = iVar1 == 0;
  }
  bVar29 = false;
  if (bVar28) {
    puVar25 = (undefined1 *)((int)__DT_REL + -iVar1 + 0x4be934);
    bVar29 = -iVar1 == -0x500000;
  }
  bVar28 = false;
  if (bVar29) {
    iVar15 = 0x13 - extraout_r3_01;
    bVar28 = iVar15 == 0;
  }
  bVar29 = false;
  if (bVar28) {
    iVar1 = 0x300 - iVar1;
    bVar29 = iVar1 == 0;
  }
  if (bVar29) {
    uVar13 = 0x7d07d43e;
  }
  *(undefined4 *)(puVar25 + -4) = 0x2f82ba4;
  *(int *)(puVar25 + -8) = iVar3;
  *(int *)(puVar25 + -0xc) = iVar15;
  *(undefined4 *)(puVar25 + -0x10) = unaff_r9;
  *(undefined4 *)(puVar25 + -0x14) = 0;
  *(code **)(puVar25 + -0x18) = unaff_r7;
  *(undefined4 *)(puVar25 + -0x1c) = uVar12;
  *(undefined4 *)(puVar25 + -0x20) = uVar13;
  *(int **)(puVar25 + -0x24) = piVar9;
  puVar26 = puVar25 + -0x48;
  if (*(int *)(extraout_r2_02 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f82f70 + 0x2f82bec));
    func_0x01384978(*(undefined4 *)(iRam02f82f74 + 0x2f82bf8));
    if (*(int *)(extraout_r2_02 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_02);
    }
  }
  if (piVar2 == (int *)0x0) {
    uVar12 = *(undefined4 *)(iRam02f82f78 + 0x2f82e84);
  }
  else {
    if (iVar1 != 0) {
      iVar15 = **(int **)(extraout_r2_02 + 0x1c);
      if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
        iVar15 = func_0x014001f0(iVar15);
      }
      iVar3 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar9[-1] == iVar15) {
            puVar18 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
            goto LAB_02f82c88;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar2,iVar15,0);
LAB_02f82c88:
      piVar21 = (int *)(*(code *)*puVar18)(piVar2,puVar18[1]);
      do {
        if (piVar21 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar15 = *piVar21;
        uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
        if (uVar7 != 0) {
          piVar2 = (int *)(*(int *)(iVar15 + 0x58) + 4);
          do {
            if (piVar2[-1] == **(int **)(iRam02f82f80 + 0x2f82cc0)) {
              puVar18 = (undefined4 *)(iVar15 + *piVar2 * 8 + 0xc0);
              goto LAB_02f82d08;
            }
            uVar7 = uVar7 - 1;
            piVar2 = piVar2 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar21,**(int **)(iRam02f82f80 + 0x2f82cc0),0);
LAB_02f82d08:
        piVar2 = (int *)(*(code *)*puVar18)(piVar21,puVar18[1]);
        if (piVar2 == (int *)0x0) {
          iVar1 = 0;
          piVar2 = (int *)0x0;
          goto LAB_02f82dec;
        }
        if (piVar21 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar15 = *(int *)(*(int *)(extraout_r2_02 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
          iVar15 = func_0x014001f0(iVar15);
        }
        iVar3 = *piVar21;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar9[-1] == iVar15) {
              puVar18 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
              goto LAB_02f82d9c;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar21,iVar15,0);
LAB_02f82d9c:
        (*(code *)*puVar18)(puVar25 + -0x38,piVar21,puVar18[1]);
        uVar12 = *(undefined4 *)(iVar1 + 0x20);
        pcVar16 = *(code **)(iVar1 + 0xc);
        uVar13 = *(undefined4 *)(iVar1 + 0x14);
        *(undefined4 *)(puVar25 + -0x48) = *(undefined4 *)(puVar25 + -0x30);
        *(undefined4 *)(puVar25 + -0x44) = *(undefined4 *)(puVar25 + -0x2c);
        *(undefined4 *)(puVar25 + -0x40) = uVar13;
        iVar15 = (*pcVar16)(uVar12,*(undefined4 *)(puVar25 + -0x30),*(undefined4 *)(puVar25 + -0x38)
                            ,*(undefined4 *)(puVar25 + -0x34));
      } while (iVar15 == 0);
      iVar1 = 0;
      goto LAB_02f82dec;
    }
    uVar12 = *(undefined4 *)(iRam02f82f7c + 0x2f82e90);
  }
  uVar12 = func_0x01384988(uVar12);
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,extraout_r2_02);
  uVar31 = func_0x01384928();
  uVar12 = (undefined4)uVar31;
  if ((int)((ulonglong)uVar31 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar12);
    iVar1 = *piVar2;
    piVar2 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f82dec:
    if (piVar21 != (int *)0x0) {
      iVar15 = *piVar21;
      uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar15 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(iRam02f82f84 + 0x2f82e04)) {
            puVar18 = (undefined4 *)(iVar15 + *piVar9 * 8 + 0xc0);
            goto LAB_02f82e4c;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar21,**(int **)(iRam02f82f84 + 0x2f82e04),0);
LAB_02f82e4c:
      (*(code *)*puVar18)(piVar21,puVar18[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar2;
  }
  uVar13 = 0;
  uVar30 = 1;
  func_0x01459844(uVar12);
  uVar31 = func_0x01062280();
  iVar15 = (int)((ulonglong)uVar31 >> 0x20);
  piVar9 = (int *)uVar31;
  bVar28 = false;
  if ((bool)uVar30) {
    uVar13 = 0x3d07d096;
    iVar15 = 0x8000 - iVar15;
    bVar28 = iVar15 == 0;
  }
  bVar29 = false;
  if (bVar28) {
    puVar26 = (undefined1 *)(-iVar15 + 0x20000001);
    bVar29 = -iVar15 == -0x20000001;
  }
  bVar28 = false;
  iVar4 = extraout_r2_02;
  if (bVar29) {
    iVar4 = 0x2000 - extraout_r3_02;
    bVar28 = iVar4 == 0;
  }
  bVar29 = false;
  if (bVar28) {
    iVar15 = 0x100000 - iVar15;
    bVar29 = iVar15 == 0;
  }
  if (bVar29) {
    uVar13 = 0xfd07d140;
    piVar2 = (int *)0xfd07d3c0;
  }
  *(undefined4 *)(puVar26 + -4) = 0x2f82f70;
  *(int *)(puVar26 + -8) = iVar1;
  *(int *)(puVar26 + -0xc) = iVar4;
  *(undefined4 *)(puVar26 + -0x10) = 0;
  *(code **)(puVar26 + -0x14) = unaff_r7;
  *(undefined4 *)(puVar26 + -0x18) = uVar12;
  *(undefined4 *)(puVar26 + -0x1c) = uVar13;
  *(int **)(puVar26 + -0x20) = piVar2;
  if (*(int *)(extraout_r2_03 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f83328 + 0x2f82fb8));
    func_0x01384978(*(undefined4 *)(iRam02f8332c + 0x2f82fc4));
    if (*(int *)(extraout_r2_03 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_03);
    }
  }
  if (piVar9 == (int *)0x0) {
    uVar12 = *(undefined4 *)(iRam02f83330 + 0x2f8323c);
  }
  else {
    if (iVar15 != 0) {
      iVar1 = **(int **)(extraout_r2_03 + 0x1c);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0(iVar1);
      }
      iVar3 = *piVar9;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar1) {
            puVar18 = (undefined4 *)(iVar3 + *piVar2 * 8 + 0xc0);
            goto LAB_02f83054;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar9,iVar1,0);
LAB_02f83054:
      piVar9 = (int *)(*(code *)*puVar18)(piVar9,puVar18[1]);
      piVar2 = *(int **)(iRam02f83338 + 0x2f83078);
      do {
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar9;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 != 0) {
          piVar21 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar21[-1] == *piVar2) {
              puVar18 = (undefined4 *)(iVar1 + *piVar21 * 8 + 0xc0);
              goto LAB_02f830d0;
            }
            uVar7 = uVar7 - 1;
            piVar21 = piVar21 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar9,*piVar2,0);
LAB_02f830d0:
        piVar21 = (int *)(*(code *)*puVar18)(piVar9,puVar18[1]);
        if (piVar21 == (int *)0x0) {
          iVar1 = 0;
          piVar21 = (int *)0x0;
          goto LAB_02f831a4;
        }
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(*(int *)(extraout_r2_03 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar3 = *piVar9;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar1) {
              puVar18 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
              goto LAB_02f83164;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar9,iVar1,0);
LAB_02f83164:
        (*(code *)*puVar18)(puVar26 + -0x28,piVar9,puVar18[1]);
        iVar1 = (**(code **)(iVar15 + 0xc))
                          (*(undefined4 *)(iVar15 + 0x20),*(undefined4 *)(puVar26 + -0x28),
                           *(undefined4 *)(puVar26 + -0x24),*(undefined4 *)(iVar15 + 0x14));
      } while (iVar1 == 0);
      iVar1 = 0;
      goto LAB_02f831a4;
    }
    uVar12 = *(undefined4 *)(iRam02f83334 + 0x2f83248);
  }
  uVar12 = func_0x01384988(uVar12);
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,extraout_r2_03);
  uVar31 = func_0x01384928();
  uVar12 = (undefined4)uVar31;
  if ((int)((ulonglong)uVar31 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar12);
    iVar1 = *piVar2;
    piVar21 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f831a4:
    if (piVar9 != (int *)0x0) {
      iVar15 = *piVar9;
      uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar15 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(iRam02f8333c + 0x2f831bc)) {
            puVar18 = (undefined4 *)(iVar15 + *piVar2 * 8 + 0xc0);
            goto LAB_02f83204;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(iRam02f8333c + 0x2f831bc),0);
LAB_02f83204:
      (*(code *)*puVar18)(piVar9,puVar18[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar21;
  }
  if (piVar9 != (int *)0x0) {
    iVar1 = *piVar9;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar2[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f83340 + 0x2f832b4)) {
          puVar18 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_02f832fc;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar9,(code *)**(int **)(iRam02f83340 + 0x2f832b4),0);
LAB_02f832fc:
    (*(code *)*puVar18)(piVar9,puVar18[1]);
  }
  uVar30 = 1;
  func_0x01459844(uVar12);
  uVar31 = func_0x01062280();
  iVar1 = (int)((ulonglong)uVar31 >> 0x20);
  piVar2 = (int *)uVar31;
  bVar28 = false;
  if ((bool)uVar30) {
    piVar9 = (int *)0xfd07cd30;
    iVar1 = 0x3c00000 - iVar1;
    bVar28 = iVar1 == 0;
  }
  bVar29 = false;
  if (bVar28 && iVar1 == 0x240) {
    iVar4 = 0x320000 - extraout_r3_03;
    bVar29 = iVar4 == 0;
  }
  bVar28 = false;
  if (bVar29) {
    iVar1 = 0x22000000 - iVar1;
    bVar28 = iVar1 == 0;
  }
  if (bVar28) {
    piVar9 = (int *)0xfd07e8b8;
  }
  *(undefined4 *)(puVar26 + -0x2c) = 0x2f83328;
  *(int *)(puVar26 + -0x30) = extraout_r2_03;
  *(int *)(puVar26 + -0x34) = iVar4;
  *(undefined4 *)(puVar26 + -0x38) = 0;
  *(code **)(puVar26 + -0x3c) = unaff_r7;
  *(undefined4 *)(puVar26 + -0x40) = uVar12;
  *(undefined4 *)(puVar26 + -0x44) = 0;
  *(int **)(puVar26 + -0x48) = piVar9;
  if (*(int *)(extraout_r2_04 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f836e0 + 0x2f83370));
    func_0x01384978(*(undefined4 *)(iRam02f836e4 + 0x2f8337c));
    if (*(int *)(extraout_r2_04 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_04);
    }
  }
  if (piVar2 == (int *)0x0) {
    uVar12 = *(undefined4 *)(iRam02f836e8 + 0x2f835f4);
  }
  else {
    if (iVar1 != 0) {
      iVar15 = **(int **)(extraout_r2_04 + 0x1c);
      if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
        iVar15 = func_0x014001f0(iVar15);
      }
      iVar3 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar9[-1] == iVar15) {
            puVar18 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
            goto LAB_02f8340c;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar2,iVar15,0);
LAB_02f8340c:
      piVar2 = (int *)(*(code *)*puVar18)(piVar2,puVar18[1]);
      piVar9 = *(int **)(iRam02f836f0 + 0x2f83430);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar15 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
        if (uVar7 != 0) {
          piVar21 = (int *)(*(int *)(iVar15 + 0x58) + 4);
          do {
            if (piVar21[-1] == *piVar9) {
              puVar18 = (undefined4 *)(iVar15 + *piVar21 * 8 + 0xc0);
              goto LAB_02f83488;
            }
            uVar7 = uVar7 - 1;
            piVar21 = piVar21 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar2,*piVar9,0);
LAB_02f83488:
        piVar21 = (int *)(*(code *)*puVar18)(piVar2,puVar18[1]);
        if (piVar21 == (int *)0x0) {
          iVar1 = 0;
          piVar21 = (int *)0x0;
          goto LAB_02f8355c;
        }
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar15 = *(int *)(*(int *)(extraout_r2_04 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
          iVar15 = func_0x014001f0(iVar15);
        }
        iVar3 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar15) {
              puVar18 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
              goto LAB_02f8351c;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar2,iVar15,0);
LAB_02f8351c:
        (*(code *)*puVar18)(puVar26 + -0x50,piVar2,puVar18[1]);
        iVar15 = (**(code **)(iVar1 + 0xc))
                           (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(puVar26 + -0x50),
                            *(undefined4 *)(puVar26 + -0x4c),*(undefined4 *)(iVar1 + 0x14));
      } while (iVar15 == 0);
      iVar1 = 0;
      goto LAB_02f8355c;
    }
    uVar12 = *(undefined4 *)(iRam02f836ec + 0x2f83600);
  }
  uVar12 = func_0x01384988(uVar12);
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,extraout_r2_04);
  uVar31 = func_0x01384928();
  uVar12 = (undefined4)uVar31;
  if ((int)((ulonglong)uVar31 >> 0x20) == 1) {
    piVar9 = (int *)func_0x0145b008(uVar12);
    iVar1 = *piVar9;
    piVar21 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f8355c:
    if (piVar2 != (int *)0x0) {
      iVar15 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar15 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(iRam02f836f4 + 0x2f83574)) {
            puVar18 = (undefined4 *)(iVar15 + *piVar9 * 8 + 0xc0);
            goto LAB_02f835bc;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f836f4 + 0x2f83574),0);
LAB_02f835bc:
      (*(code *)*puVar18)(piVar2,puVar18[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar21;
  }
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar9[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f836f8 + 0x2f8366c)) {
          puVar18 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_02f836b4;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar2,(code *)**(int **)(iRam02f836f8 + 0x2f8366c),0);
LAB_02f836b4:
    (*(code *)*puVar18)(piVar2,puVar18[1]);
  }
  uVar30 = 1;
  func_0x01459844(uVar12);
  uVar31 = func_0x01062280();
  pcVar11 = (char *)((ulonglong)uVar31 >> 0x20);
  piVar9 = (int *)uVar31;
  bVar28 = false;
  if ((bool)uVar30) {
    piVar2 = (int *)0xfd094918;
    pcVar11 = (char *)(0x40000008 - (int)pcVar11);
    bVar28 = pcVar11 == (char *)0x0;
  }
  bVar29 = false;
  if (bVar28 && pcVar11 == "EEE6do_getES4_S4_bRNS_8ios_baseERjRe") {
    iVar4 = 0x1000000 - extraout_r3_04;
    bVar29 = iVar4 == 0;
  }
  bVar28 = false;
  if (bVar29) {
    pcVar11 = (char *)(0x34 - (int)pcVar11);
    bVar28 = pcVar11 == (char *)0x0;
  }
  if (bVar28) {
    piVar2 = (int *)0xfd6bc900;
  }
  *(undefined4 *)(puVar26 + -0x54) = 0x2f836e0;
  *(int *)(puVar26 + -0x58) = iVar3;
  *(int *)(puVar26 + -0x5c) = extraout_r2_04;
  *(int *)(puVar26 + -0x60) = iVar4;
  *(undefined4 *)(puVar26 + -100) = 0;
  *(code **)(puVar26 + -0x68) = unaff_r7;
  *(undefined4 *)(puVar26 + -0x6c) = uVar12;
  *(undefined4 *)(puVar26 + -0x70) = 0;
  *(int **)(puVar26 + -0x74) = piVar2;
  if (*(int *)(extraout_r2_05 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f83aac + 0x2f83728));
    func_0x01384978(*(undefined4 *)(iRam02f83ab0 + 0x2f83734));
    if (*(int *)(extraout_r2_05 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_05);
    }
  }
  if (piVar9 == (int *)0x0) {
    uVar12 = *(undefined4 *)(iRam02f83ab4 + 0x2f839c0);
  }
  else {
    if (pcVar11 != (char *)0x0) {
      iVar1 = **(int **)(extraout_r2_05 + 0x1c);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0(iVar1);
      }
      iVar15 = *piVar9;
      uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar15 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar1) {
            puVar18 = (undefined4 *)(iVar15 + *piVar2 * 8 + 0xc0);
            goto LAB_02f837c4;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar9,iVar1,0);
LAB_02f837c4:
      piVar21 = (int *)(*(code *)*puVar18)(piVar9,puVar18[1]);
      do {
        if (piVar21 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar21;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 != 0) {
          piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar2[-1] == **(int **)(iRam02f83abc + 0x2f837fc)) {
              puVar18 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
              goto LAB_02f83844;
            }
            uVar7 = uVar7 - 1;
            piVar2 = piVar2 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar21,**(int **)(iRam02f83abc + 0x2f837fc),0);
LAB_02f83844:
        piVar2 = (int *)(*(code *)*puVar18)(piVar21,puVar18[1]);
        if (piVar2 == (int *)0x0) {
          iVar1 = 0;
          piVar2 = (int *)0x0;
          goto LAB_02f83928;
        }
        if (piVar21 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(*(int *)(extraout_r2_05 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar15 = *piVar21;
        uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar15 + 0x58) + 4);
          do {
            if (piVar9[-1] == iVar1) {
              puVar18 = (undefined4 *)(iVar15 + *piVar9 * 8 + 0xc0);
              goto LAB_02f838d8;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar21,iVar1,0);
LAB_02f838d8:
        (*(code *)*puVar18)(puVar26 + -0x88,piVar21,puVar18[1]);
        uVar12 = *(undefined4 *)(pcVar11 + 0x20);
        pcVar16 = *(code **)(pcVar11 + 0xc);
        uVar13 = *(undefined4 *)(pcVar11 + 0x14);
        *(undefined4 *)(puVar26 + -0x98) = *(undefined4 *)(puVar26 + -0x80);
        *(undefined4 *)(puVar26 + -0x94) = *(undefined4 *)(puVar26 + -0x7c);
        *(undefined4 *)(puVar26 + -0x90) = uVar13;
        iVar1 = (*pcVar16)(uVar12,*(undefined4 *)(puVar26 + -0x80),*(undefined4 *)(puVar26 + -0x88),
                           *(undefined4 *)(puVar26 + -0x84));
      } while (iVar1 == 0);
      iVar1 = 0;
      goto LAB_02f83928;
    }
    uVar12 = *(undefined4 *)(iRam02f83ab8 + 0x2f839cc);
  }
  uVar12 = func_0x01384988(uVar12);
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,extraout_r2_05);
  uVar31 = func_0x01384928();
  uVar12 = (undefined4)uVar31;
  if ((int)((ulonglong)uVar31 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar12);
    iVar1 = *piVar2;
    piVar2 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f83928:
    if (piVar21 != (int *)0x0) {
      iVar15 = *piVar21;
      uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar15 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(iRam02f83ac0 + 0x2f83940)) {
            puVar18 = (undefined4 *)(iVar15 + *piVar9 * 8 + 0xc0);
            goto LAB_02f83988;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar21,**(int **)(iRam02f83ac0 + 0x2f83940),0);
LAB_02f83988:
      (*(code *)*puVar18)(piVar21,puVar18[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar2;
  }
  uVar30 = 1;
  func_0x01459844(uVar12);
  uVar31 = func_0x01062280();
  iVar1 = (int)((ulonglong)uVar31 >> 0x20);
  piVar2 = (int *)uVar31;
  bVar28 = false;
  if ((bool)uVar30) {
    piVar9 = (int *)0xffa7c54c;
    piVar2 = (int *)(0xcc0 - iVar1);
    bVar28 = piVar2 == (int *)0x0;
  }
  bVar29 = false;
  iVar15 = extraout_r2_05;
  if (bVar28 && iVar1 == 0xc0000) {
    iVar15 = 0x40000004 - extraout_r3_05;
    bVar29 = iVar15 == 0;
  }
  bVar28 = false;
  if (bVar29) {
    piVar2 = (int *)(0x40 - iVar1);
    bVar28 = piVar2 == (int *)0x0;
  }
  if (bVar28) {
    piVar9 = (int *)0x9507c534;
  }
  *(undefined4 *)(puVar26 + -0x9c) = 0x2f83aac;
  *(char **)(puVar26 + -0xa0) = pcVar11;
  *(int *)(puVar26 + -0xa4) = iVar15;
  *(undefined4 *)(puVar26 + -0xa8) = 0;
  *(code **)(puVar26 + -0xac) = unaff_r7;
  *(undefined4 *)(puVar26 + -0xb0) = uVar12;
  *(undefined4 *)(puVar26 + -0xb4) = 0;
  *(int **)(puVar26 + -0xb8) = piVar9;
  if (*(int *)(extraout_r2_06 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f83e64 + 0x2f83af4));
    func_0x01384978(*(undefined4 *)(iRam02f83e68 + 0x2f83b00));
    if (*(int *)(extraout_r2_06 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_06);
    }
  }
  if (piVar2 == (int *)0x0) {
    uVar12 = *(undefined4 *)(iRam02f83e6c + 0x2f83d78);
  }
  else {
    if (iVar1 != 0) {
      iVar15 = **(int **)(extraout_r2_06 + 0x1c);
      if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
        iVar15 = func_0x014001f0(iVar15);
      }
      iVar3 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar9[-1] == iVar15) {
            puVar18 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
            goto LAB_02f83b90;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar2,iVar15,0);
LAB_02f83b90:
      piVar2 = (int *)(*(code *)*puVar18)(piVar2,puVar18[1]);
      piVar9 = *(int **)(iRam02f83e74 + 0x2f83bb4);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar15 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
        if (uVar7 != 0) {
          piVar21 = (int *)(*(int *)(iVar15 + 0x58) + 4);
          do {
            if (piVar21[-1] == *piVar9) {
              puVar18 = (undefined4 *)(iVar15 + *piVar21 * 8 + 0xc0);
              goto LAB_02f83c0c;
            }
            uVar7 = uVar7 - 1;
            piVar21 = piVar21 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar2,*piVar9,0);
LAB_02f83c0c:
        piVar21 = (int *)(*(code *)*puVar18)(piVar2,puVar18[1]);
        if (piVar21 == (int *)0x0) {
          iVar1 = 0;
          piVar21 = (int *)0x0;
          goto LAB_02f83ce0;
        }
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar15 = *(int *)(*(int *)(extraout_r2_06 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
          iVar15 = func_0x014001f0(iVar15);
        }
        iVar3 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar15) {
              puVar18 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
              goto LAB_02f83ca0;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar2,iVar15,0);
LAB_02f83ca0:
        (*(code *)*puVar18)(puVar26 + -0xc0,piVar2,puVar18[1]);
        iVar15 = (**(code **)(iVar1 + 0xc))
                           (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(puVar26 + -0xc0),
                            *(undefined4 *)(puVar26 + -0xbc),*(undefined4 *)(iVar1 + 0x14));
      } while (iVar15 == 0);
      iVar1 = 0;
      goto LAB_02f83ce0;
    }
    uVar12 = *(undefined4 *)(iRam02f83e70 + 0x2f83d84);
  }
  uVar12 = func_0x01384988(uVar12);
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,extraout_r2_06);
  uVar31 = func_0x01384928();
  uVar12 = (undefined4)uVar31;
  if ((int)((ulonglong)uVar31 >> 0x20) == 1) {
    piVar9 = (int *)func_0x0145b008(uVar12);
    iVar1 = *piVar9;
    piVar21 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f83ce0:
    if (piVar2 != (int *)0x0) {
      iVar15 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar15 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(iRam02f83e78 + 0x2f83cf8)) {
            puVar18 = (undefined4 *)(iVar15 + *piVar9 * 8 + 0xc0);
            goto LAB_02f83d40;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f83e78 + 0x2f83cf8),0);
LAB_02f83d40:
      (*(code *)*puVar18)(piVar2,puVar18[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar21;
  }
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar9[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f83e7c + 0x2f83df0)) {
          puVar18 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_02f83e38;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar2,(code *)**(int **)(iRam02f83e7c + 0x2f83df0),0);
LAB_02f83e38:
    (*(code *)*puVar18)(piVar2,puVar18[1]);
  }
  uVar30 = 1;
  func_0x01459844(uVar12);
  uVar31 = func_0x01062280();
  iVar1 = (int)((ulonglong)uVar31 >> 0x20);
  piVar9 = (int *)uVar31;
  bVar28 = false;
  if ((bool)uVar30) {
    piVar2 = (int *)0x6d07c197;
    piVar9 = (int *)-iVar1;
    bVar28 = piVar9 == (int *)0x0;
  }
  bVar29 = false;
  if (bVar28 && iVar1 == 0x54000000) {
    piVar21 = (int *)(0x8c0 - extraout_r3_06);
    bVar29 = piVar21 == (int *)0x0;
  }
  bVar28 = false;
  if (bVar29) {
    piVar9 = (int *)((int)__DT_REL + (0xa934 - iVar1));
    bVar28 = piVar9 == (int *)0x0;
  }
  if (bVar28) {
    piVar2 = (int *)0xfd07c25c;
  }
  *(undefined4 *)(puVar26 + -0xc4) = 0x2f83e64;
  *(int *)(puVar26 + -200) = extraout_r2_06;
  *(int *)(puVar26 + -0xcc) = iVar15;
  *(int **)(puVar26 + -0xd0) = piVar21;
  *(code **)(puVar26 + -0xd4) = unaff_r7;
  *(undefined4 *)(puVar26 + -0xd8) = uVar12;
  *(undefined4 *)(puVar26 + -0xdc) = 0;
  *(int **)(puVar26 + -0xe0) = piVar2;
  if (*(int *)(extraout_r2_07 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f8421c + 0x2f83eac));
    func_0x01384978(*(undefined4 *)(iRam02f84220 + 0x2f83eb8));
    if (*(int *)(extraout_r2_07 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_07);
    }
  }
  if (piVar9 == (int *)0x0) {
    uVar12 = *(undefined4 *)(iRam02f84224 + 0x2f84130);
  }
  else {
    if (iVar1 != 0) {
      iVar15 = **(int **)(extraout_r2_07 + 0x1c);
      if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
        iVar15 = func_0x014001f0(iVar15);
      }
      iVar3 = *piVar9;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar15) {
            puVar18 = (undefined4 *)(iVar3 + *piVar2 * 8 + 0xc0);
            goto LAB_02f83f48;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar9,iVar15,0);
LAB_02f83f48:
      piVar9 = (int *)(*(code *)*puVar18)(piVar9,puVar18[1]);
      piVar2 = *(int **)(iRam02f8422c + 0x2f83f6c);
      do {
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar15 = *piVar9;
        uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
        if (uVar7 != 0) {
          piVar21 = (int *)(*(int *)(iVar15 + 0x58) + 4);
          do {
            if (piVar21[-1] == *piVar2) {
              puVar18 = (undefined4 *)(iVar15 + *piVar21 * 8 + 0xc0);
              goto LAB_02f83fc4;
            }
            uVar7 = uVar7 - 1;
            piVar21 = piVar21 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar9,*piVar2,0);
LAB_02f83fc4:
        piVar21 = (int *)(*(code *)*puVar18)(piVar9,puVar18[1]);
        if (piVar21 == (int *)0x0) {
          iVar1 = 0;
          piVar21 = (int *)0x0;
          goto LAB_02f84098;
        }
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar15 = *(int *)(*(int *)(extraout_r2_07 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
          iVar15 = func_0x014001f0(iVar15);
        }
        iVar3 = *piVar9;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar15) {
              puVar18 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
              goto LAB_02f84058;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar9,iVar15,0);
LAB_02f84058:
        (*(code *)*puVar18)(puVar26 + -0xe8,piVar9,puVar18[1]);
        iVar15 = (**(code **)(iVar1 + 0xc))
                           (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(puVar26 + -0xe8),
                            *(undefined4 *)(puVar26 + -0xe4),*(undefined4 *)(iVar1 + 0x14));
      } while (iVar15 == 0);
      iVar1 = 0;
      goto LAB_02f84098;
    }
    uVar12 = *(undefined4 *)(iRam02f84228 + 0x2f8413c);
  }
  uVar12 = func_0x01384988(uVar12);
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,extraout_r2_07);
  uVar31 = func_0x01384928();
  uVar12 = (undefined4)uVar31;
  if ((int)((ulonglong)uVar31 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar12);
    iVar1 = *piVar2;
    piVar21 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f84098:
    if (piVar9 != (int *)0x0) {
      iVar15 = *piVar9;
      uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar15 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(iRam02f84230 + 0x2f840b0)) {
            puVar18 = (undefined4 *)(iVar15 + *piVar2 * 8 + 0xc0);
            goto LAB_02f840f8;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(iRam02f84230 + 0x2f840b0),0);
LAB_02f840f8:
      (*(code *)*puVar18)(piVar9,puVar18[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar21;
  }
  if (piVar9 != (int *)0x0) {
    iVar1 = *piVar9;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar2[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f84234 + 0x2f841a8)) {
          puVar18 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_02f841f0;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar9,(code *)**(int **)(iRam02f84234 + 0x2f841a8),0);
LAB_02f841f0:
    (*(code *)*puVar18)(piVar9,puVar18[1]);
  }
  uVar30 = 1;
  func_0x01459844(uVar12);
  uVar31 = func_0x01062280();
  iVar1 = (int)((ulonglong)uVar31 >> 0x20);
  piVar2 = (int *)uVar31;
  bVar28 = false;
  if ((bool)uVar30) {
    piVar9 = (int *)0xfd07be00;
    piVar2 = (int *)(&UNK_01200000 + -iVar1);
    bVar28 = piVar2 == (int *)0x0;
  }
  bVar29 = false;
  if (bVar28 && iVar1 == 0x9c) {
    piVar21 = (int *)((int)__DT_REL + (0x92934 - extraout_r3_07));
    bVar29 = piVar21 == (int *)0x0;
  }
  if (bVar29) {
    piVar2 = (int *)(0x9400000 - iVar1);
  }
  *(undefined4 *)(puVar26 + -0xec) = 0x2f8421c;
  *(int *)(puVar26 + -0xf0) = extraout_r2_07;
  *(int *)(puVar26 + -0xf4) = iVar15;
  *(int **)(puVar26 + -0xf8) = piVar21;
  *(code **)(puVar26 + -0xfc) = unaff_r7;
  *(undefined4 *)(puVar26 + -0x100) = uVar12;
  *(undefined4 *)(puVar26 + -0x104) = 0;
  *(int **)(puVar26 + -0x108) = piVar9;
  if (*(int *)(extraout_r2_08 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f845d4 + 0x2f84264));
    func_0x01384978(*(undefined4 *)(iRam02f845d8 + 0x2f84270));
    if (*(int *)(extraout_r2_08 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_08);
    }
  }
  if (piVar2 == (int *)0x0) {
    uVar12 = *(undefined4 *)(iRam02f845dc + 0x2f844e8);
  }
  else {
    if (iVar1 != 0) {
      iVar15 = **(int **)(extraout_r2_08 + 0x1c);
      if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
        iVar15 = func_0x014001f0(iVar15);
      }
      iVar3 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar9[-1] == iVar15) {
            puVar18 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
            goto LAB_02f84300;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar2,iVar15,0);
LAB_02f84300:
      piVar2 = (int *)(*(code *)*puVar18)(piVar2,puVar18[1]);
      piVar9 = *(int **)(iRam02f845e4 + 0x2f84324);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar15 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
        if (uVar7 != 0) {
          piVar21 = (int *)(*(int *)(iVar15 + 0x58) + 4);
          do {
            if (piVar21[-1] == *piVar9) {
              puVar18 = (undefined4 *)(iVar15 + *piVar21 * 8 + 0xc0);
              goto LAB_02f8437c;
            }
            uVar7 = uVar7 - 1;
            piVar21 = piVar21 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar2,*piVar9,0);
LAB_02f8437c:
        piVar21 = (int *)(*(code *)*puVar18)(piVar2,puVar18[1]);
        if (piVar21 == (int *)0x0) {
          iVar1 = 0;
          piVar21 = (int *)0x0;
          goto LAB_02f84450;
        }
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar15 = *(int *)(*(int *)(extraout_r2_08 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
          iVar15 = func_0x014001f0(iVar15);
        }
        iVar3 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar15) {
              puVar18 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
              goto LAB_02f84410;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar2,iVar15,0);
LAB_02f84410:
        (*(code *)*puVar18)(puVar26 + -0x110,piVar2,puVar18[1]);
        iVar15 = (**(code **)(iVar1 + 0xc))
                           (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(puVar26 + -0x110),
                            *(undefined4 *)(puVar26 + -0x10c),*(undefined4 *)(iVar1 + 0x14));
      } while (iVar15 == 0);
      iVar1 = 0;
      goto LAB_02f84450;
    }
    uVar12 = *(undefined4 *)(iRam02f845e0 + 0x2f844f4);
  }
  uVar12 = func_0x01384988(uVar12);
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,extraout_r2_08);
  uVar31 = func_0x01384928();
  uVar12 = (undefined4)uVar31;
  if ((int)((ulonglong)uVar31 >> 0x20) == 1) {
    piVar9 = (int *)func_0x0145b008(uVar12);
    iVar1 = *piVar9;
    piVar21 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f84450:
    if (piVar2 != (int *)0x0) {
      iVar15 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar15 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(iRam02f845e8 + 0x2f84468)) {
            puVar18 = (undefined4 *)(iVar15 + *piVar9 * 8 + 0xc0);
            goto LAB_02f844b0;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f845e8 + 0x2f84468),0);
LAB_02f844b0:
      (*(code *)*puVar18)(piVar2,puVar18[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar21;
  }
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar9[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f845ec + 0x2f84560)) {
          puVar18 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_02f845a8;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar2,(code *)**(int **)(iRam02f845ec + 0x2f84560),0);
LAB_02f845a8:
    (*(code *)*puVar18)(piVar2,puVar18[1]);
  }
  uVar30 = 1;
  func_0x01459844(uVar12);
  uVar31 = func_0x01062280();
  iVar4 = (int)((ulonglong)uVar31 >> 0x20);
  piVar9 = (int *)uVar31;
  bVar28 = false;
  iVar1 = extraout_r3_08;
  if ((bool)uVar30) {
    iVar1 = -0x2f7d9dc;
    piVar9 = (int *)(0x40000002 - iVar4);
    bVar28 = piVar9 == (int *)0x0;
  }
  bVar29 = false;
  if (bVar28) {
    iVar3 = 0xe400 - iVar4;
    bVar29 = iVar3 == 0;
  }
  bVar28 = false;
  if (bVar29) {
    piVar21 = (int *)(0x700000 - iVar1);
    bVar28 = piVar21 == (int *)0x0;
  }
  if (bVar28) {
    piVar9 = (int *)(-0x3ffffff3 - iVar4);
  }
  *(undefined4 *)(puVar26 + -0x114) = 0x2f845d4;
  *(int *)(puVar26 + -0x118) = extraout_r2_08;
  *(int *)(puVar26 + -0x11c) = iVar15;
  *(int **)(puVar26 + -0x120) = piVar21;
  *(code **)(puVar26 + -0x124) = unaff_r7;
  *(undefined4 *)(puVar26 + -0x128) = uVar12;
  *(undefined4 *)(puVar26 + -300) = 0;
  *(int **)(puVar26 + -0x130) = piVar2;
  if (*(int *)(extraout_r2_09 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f8498c + 0x2f8461c));
    func_0x01384978(*(undefined4 *)(iRam02f84990 + 0x2f84628));
    if (*(int *)(extraout_r2_09 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_09);
    }
  }
  if (piVar9 == (int *)0x0) {
    uVar12 = *(undefined4 *)(iRam02f84994 + 0x2f848a0);
  }
  else {
    if (iVar4 != 0) {
      iVar1 = **(int **)(extraout_r2_09 + 0x1c);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0(iVar1);
      }
      iVar15 = *piVar9;
      uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar15 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar1) {
            puVar18 = (undefined4 *)(iVar15 + *piVar2 * 8 + 0xc0);
            goto LAB_02f846b8;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar9,iVar1,0);
LAB_02f846b8:
      piVar9 = (int *)(*(code *)*puVar18)(piVar9,puVar18[1]);
      piVar2 = *(int **)(iRam02f8499c + 0x2f846dc);
      do {
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar9;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 != 0) {
          piVar21 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar21[-1] == *piVar2) {
              puVar18 = (undefined4 *)(iVar1 + *piVar21 * 8 + 0xc0);
              goto LAB_02f84734;
            }
            uVar7 = uVar7 - 1;
            piVar21 = piVar21 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar9,*piVar2,0);
LAB_02f84734:
        piVar21 = (int *)(*(code *)*puVar18)(piVar9,puVar18[1]);
        if (piVar21 == (int *)0x0) {
          iVar1 = 0;
          piVar21 = (int *)0x0;
          goto LAB_02f84808;
        }
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(*(int *)(extraout_r2_09 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar15 = *piVar9;
        uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar15 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar1) {
              puVar18 = (undefined4 *)(iVar15 + *piVar10 * 8 + 0xc0);
              goto LAB_02f847c8;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar9,iVar1,0);
LAB_02f847c8:
        (*(code *)*puVar18)(puVar26 + -0x138,piVar9,puVar18[1]);
        iVar1 = (**(code **)(iVar4 + 0xc))
                          (*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(puVar26 + -0x138),
                           *(undefined4 *)(puVar26 + -0x134),*(undefined4 *)(iVar4 + 0x14));
      } while (iVar1 == 0);
      iVar1 = 0;
      goto LAB_02f84808;
    }
    uVar12 = *(undefined4 *)(iRam02f84998 + 0x2f848ac);
  }
  uVar12 = func_0x01384988(uVar12);
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,extraout_r2_09);
  uVar31 = func_0x01384928();
  uVar12 = (undefined4)uVar31;
  if ((int)((ulonglong)uVar31 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar12);
    iVar1 = *piVar2;
    piVar21 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f84808:
    if (piVar9 != (int *)0x0) {
      iVar15 = *piVar9;
      uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar15 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(iRam02f849a0 + 0x2f84820)) {
            puVar18 = (undefined4 *)(iVar15 + *piVar2 * 8 + 0xc0);
            goto LAB_02f84868;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(iRam02f849a0 + 0x2f84820),0);
LAB_02f84868:
      (*(code *)*puVar18)(piVar9,puVar18[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar21;
  }
  if (piVar9 != (int *)0x0) {
    iVar1 = *piVar9;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar2[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f849a4 + 0x2f84918)) {
          puVar18 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_02f84960;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar9,(code *)**(int **)(iRam02f849a4 + 0x2f84918),0);
LAB_02f84960:
    (*(code *)*puVar18)(piVar9,puVar18[1]);
  }
  uVar30 = 1;
  func_0x01459844(uVar12);
  uVar31 = func_0x01062280();
  iVar1 = (int)((ulonglong)uVar31 >> 0x20);
  piVar2 = (int *)uVar31;
  if ((bool)uVar30) {
                    /* WARNING: Could not recover jumptable at 0x02f84990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar2 = (int *)(*(code *)(0x360 - (int)piVar2))();
    return piVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x02f8499c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  *(undefined4 *)(puVar26 + -0x13c) = 0x2f8498c;
  *(int *)(puVar26 + -0x140) = iVar3;
  *(int *)(puVar26 + -0x144) = extraout_r2_09;
  *(int *)(puVar26 + -0x148) = iVar15;
  *(int **)(puVar26 + -0x14c) = piVar21;
  *(code **)(puVar26 + -0x150) = unaff_r7;
  *(undefined4 *)(puVar26 + -0x154) = uVar12;
  *(undefined4 *)(puVar26 + -0x158) = 0;
  *(int **)(puVar26 + -0x15c) = piVar9;
  if (*(int *)(extraout_r2_10 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f84d58 + 0x2f849d4));
    func_0x01384978(*(undefined4 *)(iRam02f84d5c + 0x2f849e0));
    if (*(int *)(extraout_r2_10 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_10);
    }
  }
  if (piVar2 == (int *)0x0) {
    uVar12 = *(undefined4 *)(iRam02f84d60 + 0x2f84c6c);
  }
  else {
    if (iVar1 != 0) {
      iVar15 = **(int **)(extraout_r2_10 + 0x1c);
      if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
        iVar15 = func_0x014001f0(iVar15);
      }
      iVar3 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar9[-1] == iVar15) {
            puVar18 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
            goto LAB_02f84a70;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar2,iVar15,0);
LAB_02f84a70:
      piVar21 = (int *)(*(code *)*puVar18)(piVar2,puVar18[1]);
      do {
        if (piVar21 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar15 = *piVar21;
        uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
        if (uVar7 != 0) {
          piVar2 = (int *)(*(int *)(iVar15 + 0x58) + 4);
          do {
            if (piVar2[-1] == **(int **)(iRam02f84d68 + 0x2f84aa8)) {
              puVar18 = (undefined4 *)(iVar15 + *piVar2 * 8 + 0xc0);
              goto LAB_02f84af0;
            }
            uVar7 = uVar7 - 1;
            piVar2 = piVar2 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar21,**(int **)(iRam02f84d68 + 0x2f84aa8),0);
LAB_02f84af0:
        piVar2 = (int *)(*(code *)*puVar18)(piVar21,puVar18[1]);
        if (piVar2 == (int *)0x0) {
          iVar1 = 0;
          piVar2 = (int *)0x0;
          goto LAB_02f84bd4;
        }
        if (piVar21 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar15 = *(int *)(*(int *)(extraout_r2_10 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
          iVar15 = func_0x014001f0(iVar15);
        }
        iVar3 = *piVar21;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar9[-1] == iVar15) {
              puVar18 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
              goto LAB_02f84b84;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar21,iVar15,0);
LAB_02f84b84:
        (*(code *)*puVar18)(puVar26 + -0x170,piVar21,puVar18[1]);
        uVar12 = *(undefined4 *)(iVar1 + 0x20);
        pcVar16 = *(code **)(iVar1 + 0xc);
        uVar13 = *(undefined4 *)(iVar1 + 0x14);
        *(undefined4 *)(puVar26 + -0x180) = *(undefined4 *)(puVar26 + -0x168);
        *(undefined4 *)(puVar26 + -0x17c) = *(undefined4 *)(puVar26 + -0x164);
        *(undefined4 *)(puVar26 + -0x178) = uVar13;
        iVar15 = (*pcVar16)(uVar12,*(undefined4 *)(puVar26 + -0x168),
                            *(undefined4 *)(puVar26 + -0x170),*(undefined4 *)(puVar26 + -0x16c));
      } while (iVar15 == 0);
      iVar1 = 0;
      goto LAB_02f84bd4;
    }
    uVar12 = *(undefined4 *)(iRam02f84d64 + 0x2f84c78);
  }
  uVar12 = func_0x01384988(uVar12);
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,extraout_r2_10);
  uVar31 = func_0x01384928();
  uVar12 = (undefined4)uVar31;
  if ((int)((ulonglong)uVar31 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar12);
    iVar1 = *piVar2;
    piVar2 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f84bd4:
    if (piVar21 != (int *)0x0) {
      iVar15 = *piVar21;
      uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar15 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(iRam02f84d6c + 0x2f84bec)) {
            puVar18 = (undefined4 *)(iVar15 + *piVar9 * 8 + 0xc0);
            goto LAB_02f84c34;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar21,**(int **)(iRam02f84d6c + 0x2f84bec),0);
LAB_02f84c34:
      (*(code *)*puVar18)(piVar21,puVar18[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar2;
  }
  if (piVar21 != (int *)0x0) {
    iVar15 = *piVar21;
    uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar15 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar9[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f84d70 + 0x2f84ce4)) {
          puVar18 = (undefined4 *)(iVar15 + *piVar9 * 8 + 0xc0);
          goto LAB_02f84d2c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar21,(code *)**(int **)(iRam02f84d70 + 0x2f84ce4),0);
LAB_02f84d2c:
    (*(code *)*puVar18)(piVar21,puVar18[1]);
  }
  uVar30 = 1;
  func_0x01459844(uVar12);
  uVar31 = func_0x01062280();
  iVar15 = (int)((ulonglong)uVar31 >> 0x20);
  piVar9 = (int *)uVar31;
  if ((bool)uVar30) {
                    /* WARNING: Could not recover jumptable at 0x02f84d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar2 = (int *)(*(code *)(0x2000 - (int)piVar9))();
    return piVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x02f84d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  *(undefined4 *)(puVar26 + -0x184) = 0x2f84d58;
  *(int *)(puVar26 + -0x188) = iVar3;
  *(int *)(puVar26 + -0x18c) = iVar1;
  *(int *)(puVar26 + -400) = extraout_r2_10;
  *(int **)(puVar26 + -0x194) = piVar21;
  *(code **)(puVar26 + -0x198) = unaff_r7;
  *(undefined4 *)(puVar26 + -0x19c) = uVar12;
  *(undefined4 *)(puVar26 + -0x1a0) = 0;
  *(int **)(puVar26 + -0x1a4) = piVar2;
  if (*(int *)(extraout_r2_11 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f85124 + 0x2f84da0));
    func_0x01384978(*(undefined4 *)(iRam02f85128 + 0x2f84dac));
    if (*(int *)(extraout_r2_11 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_11);
    }
  }
  if (piVar9 == (int *)0x0) {
    uVar12 = *(undefined4 *)(iRam02f8512c + 0x2f85038);
  }
  else {
    if (iVar15 != 0) {
      iVar1 = **(int **)(extraout_r2_11 + 0x1c);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0(iVar1);
      }
      iVar3 = *piVar9;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar1) {
            puVar18 = (undefined4 *)(iVar3 + *piVar2 * 8 + 0xc0);
            goto LAB_02f84e3c;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar9,iVar1,0);
LAB_02f84e3c:
      piVar21 = (int *)(*(code *)*puVar18)(piVar9,puVar18[1]);
      do {
        if (piVar21 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar21;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 != 0) {
          piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar2[-1] == **(int **)(iRam02f85134 + 0x2f84e74)) {
              puVar18 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
              goto LAB_02f84ebc;
            }
            uVar7 = uVar7 - 1;
            piVar2 = piVar2 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar21,**(int **)(iRam02f85134 + 0x2f84e74),0);
LAB_02f84ebc:
        piVar2 = (int *)(*(code *)*puVar18)(piVar21,puVar18[1]);
        if (piVar2 == (int *)0x0) {
          iVar1 = 0;
          piVar2 = (int *)0x0;
          goto LAB_02f84fa0;
        }
        if (piVar21 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(*(int *)(extraout_r2_11 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar3 = *piVar21;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar9[-1] == iVar1) {
              puVar18 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
              goto LAB_02f84f50;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar21,iVar1,0);
LAB_02f84f50:
        (*(code *)*puVar18)(puVar26 + -0x1b8,piVar21,puVar18[1]);
        uVar12 = *(undefined4 *)(iVar15 + 0x20);
        pcVar16 = *(code **)(iVar15 + 0xc);
        uVar13 = *(undefined4 *)(iVar15 + 0x14);
        *(undefined4 *)(puVar26 + -0x1c8) = *(undefined4 *)(puVar26 + -0x1b0);
        *(undefined4 *)(puVar26 + -0x1c4) = *(undefined4 *)(puVar26 + -0x1ac);
        *(undefined4 *)(puVar26 + -0x1c0) = uVar13;
        iVar1 = (*pcVar16)(uVar12,*(undefined4 *)(puVar26 + -0x1b0),
                           *(undefined4 *)(puVar26 + -0x1b8),*(undefined4 *)(puVar26 + -0x1b4));
      } while (iVar1 == 0);
      iVar1 = 0;
      goto LAB_02f84fa0;
    }
    uVar12 = *(undefined4 *)(iRam02f85130 + 0x2f85044);
  }
  uVar12 = func_0x01384988(uVar12);
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,extraout_r2_11);
  uVar31 = func_0x01384928();
  uVar12 = (undefined4)uVar31;
  if ((int)((ulonglong)uVar31 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar12);
    iVar1 = *piVar2;
    piVar2 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f84fa0:
    if (piVar21 != (int *)0x0) {
      iVar15 = *piVar21;
      uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar15 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(iRam02f85138 + 0x2f84fb8)) {
            puVar18 = (undefined4 *)(iVar15 + *piVar9 * 8 + 0xc0);
            goto LAB_02f85000;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar21,**(int **)(iRam02f85138 + 0x2f84fb8),0);
LAB_02f85000:
      (*(code *)*puVar18)(piVar21,puVar18[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar2;
  }
  if (piVar21 != (int *)0x0) {
    iVar1 = *piVar21;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar2[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f8513c + 0x2f850b0)) {
          puVar18 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_02f850f8;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar21,(code *)**(int **)(iRam02f8513c + 0x2f850b0),0);
LAB_02f850f8:
    (*(code *)*puVar18)(piVar21,puVar18[1]);
  }
  uVar30 = 1;
  func_0x01459844(uVar12);
  uVar31 = func_0x01062280();
  iVar1 = (int)((ulonglong)uVar31 >> 0x20);
  piVar2 = (int *)uVar31;
  if ((bool)uVar30) {
                    /* WARNING: Could not recover jumptable at 0x02f85128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar2 = (int *)(*(code *)((int)__DT_REL + (0x4fe934 - (int)piVar2)))();
    return piVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x02f85134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  *(undefined4 *)(puVar26 + -0x1cc) = 0x2f85124;
  *(int *)(puVar26 + -0x1d0) = iVar3;
  *(int *)(puVar26 + -0x1d4) = iVar15;
  *(int *)(puVar26 + -0x1d8) = extraout_r2_11;
  *(int **)(puVar26 + -0x1dc) = piVar21;
  *(code **)(puVar26 + -0x1e0) = unaff_r7;
  *(undefined4 *)(puVar26 + -0x1e4) = uVar12;
  *(undefined4 *)(puVar26 + -0x1e8) = 0;
  *(int **)(puVar26 + -0x1ec) = piVar9;
  if (*(int *)(extraout_r2_12 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f854f0 + 0x2f8516c));
    func_0x01384978(*(undefined4 *)(iRam02f854f4 + 0x2f85178));
    if (*(int *)(extraout_r2_12 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_12);
    }
  }
  if (piVar2 == (int *)0x0) {
    uVar12 = *(undefined4 *)(iRam02f854f8 + 0x2f85404);
  }
  else {
    if (iVar1 != 0) {
      iVar15 = **(int **)(extraout_r2_12 + 0x1c);
      if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
        iVar15 = func_0x014001f0(iVar15);
      }
      iVar3 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar9[-1] == iVar15) {
            puVar18 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
            goto LAB_02f85208;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar2,iVar15,0);
LAB_02f85208:
      piVar21 = (int *)(*(code *)*puVar18)(piVar2,puVar18[1]);
      do {
        if (piVar21 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar15 = *piVar21;
        uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
        if (uVar7 != 0) {
          piVar2 = (int *)(*(int *)(iVar15 + 0x58) + 4);
          do {
            if (piVar2[-1] == **(int **)(iRam02f85500 + 0x2f85240)) {
              puVar18 = (undefined4 *)(iVar15 + *piVar2 * 8 + 0xc0);
              goto LAB_02f85288;
            }
            uVar7 = uVar7 - 1;
            piVar2 = piVar2 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar21,**(int **)(iRam02f85500 + 0x2f85240),0);
LAB_02f85288:
        piVar2 = (int *)(*(code *)*puVar18)(piVar21,puVar18[1]);
        if (piVar2 == (int *)0x0) {
          iVar1 = 0;
          piVar2 = (int *)0x0;
          goto LAB_02f8536c;
        }
        if (piVar21 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar15 = *(int *)(*(int *)(extraout_r2_12 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
          iVar15 = func_0x014001f0(iVar15);
        }
        iVar3 = *piVar21;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar9[-1] == iVar15) {
              puVar18 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
              goto LAB_02f8531c;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar21,iVar15,0);
LAB_02f8531c:
        (*(code *)*puVar18)(puVar26 + -0x200,piVar21,puVar18[1]);
        uVar12 = *(undefined4 *)(iVar1 + 0x20);
        pcVar16 = *(code **)(iVar1 + 0xc);
        uVar13 = *(undefined4 *)(iVar1 + 0x14);
        *(undefined4 *)(puVar26 + -0x210) = *(undefined4 *)(puVar26 + -0x1f8);
        *(undefined4 *)(puVar26 + -0x20c) = *(undefined4 *)(puVar26 + -500);
        *(undefined4 *)(puVar26 + -0x208) = uVar13;
        iVar15 = (*pcVar16)(uVar12,*(undefined4 *)(puVar26 + -0x1f8),
                            *(undefined4 *)(puVar26 + -0x200),*(undefined4 *)(puVar26 + -0x1fc));
      } while (iVar15 == 0);
      iVar1 = 0;
      goto LAB_02f8536c;
    }
    uVar12 = *(undefined4 *)(iRam02f854fc + 0x2f85410);
  }
  uVar12 = func_0x01384988(uVar12);
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,extraout_r2_12);
  uVar31 = func_0x01384928();
  uVar12 = (undefined4)uVar31;
  if ((int)((ulonglong)uVar31 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar12);
    iVar1 = *piVar2;
    piVar2 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f8536c:
    if (piVar21 != (int *)0x0) {
      iVar15 = *piVar21;
      uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar15 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(iRam02f85504 + 0x2f85384)) {
            puVar18 = (undefined4 *)(iVar15 + *piVar9 * 8 + 0xc0);
            goto LAB_02f853cc;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar21,**(int **)(iRam02f85504 + 0x2f85384),0);
LAB_02f853cc:
      (*(code *)*puVar18)(piVar21,puVar18[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar2;
  }
  if (piVar21 != (int *)0x0) {
    iVar15 = *piVar21;
    uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar15 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar9[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f85508 + 0x2f8547c)) {
          puVar18 = (undefined4 *)(iVar15 + *piVar9 * 8 + 0xc0);
          goto LAB_02f854c4;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar21,(code *)**(int **)(iRam02f85508 + 0x2f8547c),0);
LAB_02f854c4:
    (*(code *)*puVar18)(piVar21,puVar18[1]);
  }
  uVar30 = 1;
  func_0x01459844(uVar12);
  uVar31 = func_0x01062280();
  iVar15 = (int)((ulonglong)uVar31 >> 0x20);
  piVar9 = (int *)uVar31;
  if ((bool)uVar30) {
                    /* WARNING: Could not recover jumptable at 0x02f854f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar2 = (int *)(*(code *)(-0x78000000 - (int)piVar9))();
    return piVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x02f85500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  *(undefined4 *)(puVar26 + -0x214) = 0x2f854f0;
  *(int *)(puVar26 + -0x218) = iVar1;
  *(int *)(puVar26 + -0x21c) = extraout_r2_12;
  *(int **)(puVar26 + -0x220) = piVar21;
  *(code **)(puVar26 + -0x224) = unaff_r7;
  *(undefined4 *)(puVar26 + -0x228) = uVar12;
  *(undefined4 *)(puVar26 + -0x22c) = 0;
  *(int **)(puVar26 + -0x230) = piVar2;
  if (*(int *)(extraout_r2_13 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f858a8 + 0x2f85538));
    func_0x01384978(*(undefined4 *)(iRam02f858ac + 0x2f85544));
    if (*(int *)(extraout_r2_13 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_13);
    }
  }
  if (piVar9 == (int *)0x0) {
    uVar12 = *(undefined4 *)(iRam02f858b0 + 0x2f857bc);
  }
  else {
    if (iVar15 != 0) {
      iVar1 = **(int **)(extraout_r2_13 + 0x1c);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0(iVar1);
      }
      iVar3 = *piVar9;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar1) {
            puVar18 = (undefined4 *)(iVar3 + *piVar2 * 8 + 0xc0);
            goto LAB_02f855d4;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar9,iVar1,0);
LAB_02f855d4:
      piVar9 = (int *)(*(code *)*puVar18)(piVar9,puVar18[1]);
      piVar2 = *(int **)(iRam02f858b8 + 0x2f855f8);
      do {
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar9;
        uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar7 != 0) {
          piVar21 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar21[-1] == *piVar2) {
              puVar18 = (undefined4 *)(iVar1 + *piVar21 * 8 + 0xc0);
              goto LAB_02f85650;
            }
            uVar7 = uVar7 - 1;
            piVar21 = piVar21 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar9,*piVar2,0);
LAB_02f85650:
        piVar21 = (int *)(*(code *)*puVar18)(piVar9,puVar18[1]);
        if (piVar21 == (int *)0x0) {
          iVar1 = 0;
          piVar21 = (int *)0x0;
          goto LAB_02f85724;
        }
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(*(int *)(extraout_r2_13 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar3 = *piVar9;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar1) {
              puVar18 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
              goto LAB_02f856e4;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar9,iVar1,0);
LAB_02f856e4:
        (*(code *)*puVar18)(puVar26 + -0x238,piVar9,puVar18[1]);
        iVar1 = (**(code **)(iVar15 + 0xc))
                          (*(undefined4 *)(iVar15 + 0x20),*(undefined4 *)(puVar26 + -0x238),
                           *(undefined4 *)(puVar26 + -0x234),*(undefined4 *)(iVar15 + 0x14));
      } while (iVar1 == 0);
      iVar1 = 0;
      goto LAB_02f85724;
    }
    uVar12 = *(undefined4 *)(iRam02f858b4 + 0x2f857c8);
  }
  uVar12 = func_0x01384988(uVar12);
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,extraout_r2_13);
  uVar31 = func_0x01384928();
  uVar12 = (undefined4)uVar31;
  if ((int)((ulonglong)uVar31 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar12);
    iVar1 = *piVar2;
    piVar21 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f85724:
    if (piVar9 != (int *)0x0) {
      iVar15 = *piVar9;
      uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar15 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(iRam02f858bc + 0x2f8573c)) {
            puVar18 = (undefined4 *)(iVar15 + *piVar2 * 8 + 0xc0);
            goto LAB_02f85784;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(iRam02f858bc + 0x2f8573c),0);
LAB_02f85784:
      (*(code *)*puVar18)(piVar9,puVar18[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar21;
  }
  if (piVar9 != (int *)0x0) {
    iVar1 = *piVar9;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar2[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f858c0 + 0x2f85834)) {
          puVar18 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_02f8587c;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar9,(code *)**(int **)(iRam02f858c0 + 0x2f85834),0);
LAB_02f8587c:
    (*(code *)*puVar18)(piVar9,puVar18[1]);
  }
  uVar30 = 1;
  func_0x01459844(uVar12);
  uVar31 = func_0x01062280();
  iVar1 = (int)((ulonglong)uVar31 >> 0x20);
  piVar2 = (int *)uVar31;
  if ((bool)uVar30) {
                    /* WARNING: Could not recover jumptable at 0x02f858ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar2 = (int *)(*(code *)(0xbc - (int)piVar2))();
    return piVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x02f858b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  *(undefined4 *)(puVar26 + -0x23c) = 0x2f858a8;
  *(int *)(puVar26 + -0x240) = iVar3;
  *(int *)(puVar26 + -0x244) = extraout_r2_12;
  *(int **)(puVar26 + -0x248) = piVar21;
  *(code **)(puVar26 + -0x24c) = unaff_r7;
  *(undefined4 *)(puVar26 + -0x250) = uVar12;
  *(undefined4 *)(puVar26 + -0x254) = 0;
  *(int **)(puVar26 + -600) = piVar9;
  if (*(int *)(extraout_r2_14 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f85c50 + 0x2f858ec));
    func_0x01384978(*(undefined4 *)(iRam02f85c54 + 0x2f858f8));
    if (*(int *)(extraout_r2_14 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_14);
    }
  }
  if (piVar2 == (int *)0x0) {
    uVar12 = *(undefined4 *)(iRam02f85c58 + 0x2f85b64);
  }
  else {
    if (iVar1 != 0) {
      iVar15 = **(int **)(extraout_r2_14 + 0x1c);
      if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
        iVar15 = func_0x014001f0(iVar15);
      }
      iVar3 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar9[-1] == iVar15) {
            puVar18 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
            goto LAB_02f85988;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar2,iVar15,0);
LAB_02f85988:
      piVar2 = (int *)(*(code *)*puVar18)(piVar2,puVar18[1]);
      piVar9 = *(int **)(iRam02f85c60 + 0x2f859a8);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar15 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
        if (uVar7 != 0) {
          piVar21 = (int *)(*(int *)(iVar15 + 0x58) + 4);
          do {
            if (piVar21[-1] == *piVar9) {
              puVar18 = (undefined4 *)(iVar15 + *piVar21 * 8 + 0xc0);
              goto LAB_02f85a00;
            }
            uVar7 = uVar7 - 1;
            piVar21 = piVar21 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar2,*piVar9,0);
LAB_02f85a00:
        piVar21 = (int *)(*(code *)*puVar18)(piVar2,puVar18[1]);
        if (piVar21 == (int *)0x0) {
          iVar1 = 0;
          piVar21 = (int *)0x0;
          goto LAB_02f85ad0;
        }
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar15 = *(int *)(*(int *)(extraout_r2_14 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
          iVar15 = func_0x014001f0(iVar15);
        }
        iVar3 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar15) {
              puVar18 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
              goto LAB_02f85a94;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar2,iVar15,0);
LAB_02f85a94:
        uVar12 = (*(code *)*puVar18)(piVar2,puVar18[1]);
        iVar15 = (**(code **)(iVar1 + 0xc))
                           (*(undefined4 *)(iVar1 + 0x20),uVar12,*(undefined4 *)(iVar1 + 0x14));
      } while (iVar15 == 0);
      iVar1 = 0;
      goto LAB_02f85ad0;
    }
    uVar12 = *(undefined4 *)(iRam02f85c5c + 0x2f85b70);
  }
  uVar12 = func_0x01384988(uVar12);
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,extraout_r2_14);
  uVar31 = func_0x01384928();
  uVar12 = (undefined4)uVar31;
  if ((int)((ulonglong)uVar31 >> 0x20) == 1) {
    piVar9 = (int *)func_0x0145b008(uVar12);
    iVar1 = *piVar9;
    piVar21 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f85ad0:
    if (piVar2 != (int *)0x0) {
      iVar15 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar15 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(iRam02f85c64 + 0x2f85ae8)) {
            puVar18 = (undefined4 *)(iVar15 + *piVar9 * 8 + 0xc0);
            goto LAB_02f85b30;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f85c64 + 0x2f85ae8),0);
LAB_02f85b30:
      (*(code *)*puVar18)(piVar2,puVar18[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar21;
  }
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar9[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f85c68 + 0x2f85bdc)) {
          puVar18 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_02f85c24;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar2,(code *)**(int **)(iRam02f85c68 + 0x2f85bdc),0);
LAB_02f85c24:
    (*(code *)*puVar18)(piVar2,puVar18[1]);
  }
  uVar30 = 1;
  func_0x01459844(uVar12);
  iVar4 = 0x2f85c50;
  uVar31 = func_0x01062280();
  iVar15 = (int)((ulonglong)uVar31 >> 0x20);
  piVar9 = (int *)uVar31;
  bVar28 = false;
  iVar1 = extraout_r2_15;
  if ((bool)uVar30) {
    iVar1 = 0x3607a3a8;
    iVar4 = 0x200 - (int)piVar9;
    bVar28 = iVar4 == 0;
  }
  bVar29 = false;
  iVar22 = extraout_r2_13;
  if (bVar28) {
    iVar22 = 0x6800000 - iVar15;
    bVar29 = iVar22 == 0;
  }
  bVar28 = false;
  if (bVar29) {
    unaff_r7 = (code *)(0xa0 - extraout_r3_09);
    bVar28 = unaff_r7 == (code *)0x0;
  }
  bVar29 = false;
  if (bVar28) {
    iVar4 = 0x5800 - (int)piVar9;
    bVar29 = iVar4 == 0;
  }
  if (bVar29) {
    iVar1 = 0x3d07a39f;
  }
  *(int *)(puVar26 + -0x25c) = iVar4;
  *(int *)(puVar26 + -0x260) = iVar3;
  *(int *)(puVar26 + -0x264) = extraout_r2_14;
  *(int **)(puVar26 + -0x268) = piVar21;
  *(code **)(puVar26 + -0x26c) = unaff_r7;
  *(undefined4 *)(puVar26 + -0x270) = uVar12;
  *(undefined4 *)(puVar26 + -0x274) = 0;
  *(int **)(puVar26 + -0x278) = piVar2;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f85ff8 + 0x2f85c94));
    func_0x01384978(*(undefined4 *)(iRam02f85ffc + 0x2f85ca0));
    if (*(int *)(iVar1 + 0x1c) == 0) {
      func_0x0140024c(iVar1);
    }
  }
  if (piVar9 == (int *)0x0) {
    uVar12 = *(undefined4 *)(iRam02f86000 + 0x2f85f0c);
  }
  else {
    if (iVar15 != 0) {
      iVar3 = **(int **)(iVar1 + 0x1c);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x014001f0(iVar3);
      }
      iVar4 = *piVar9;
      uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar3) {
            puVar18 = (undefined4 *)(iVar4 + *piVar2 * 8 + 0xc0);
            goto LAB_02f85d30;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar9,iVar3,0);
LAB_02f85d30:
      piVar9 = (int *)(*(code *)*puVar18)(piVar9,puVar18[1]);
      piVar2 = *(int **)(iRam02f86008 + 0x2f85d50);
      do {
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *piVar9;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar21 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar21[-1] == *piVar2) {
              puVar18 = (undefined4 *)(iVar3 + *piVar21 * 8 + 0xc0);
              goto LAB_02f85da8;
            }
            uVar7 = uVar7 - 1;
            piVar21 = piVar21 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar9,*piVar2,0);
LAB_02f85da8:
        piVar21 = (int *)(*(code *)*puVar18)(piVar9,puVar18[1]);
        if (piVar21 == (int *)0x0) {
          iVar1 = 0;
          piVar21 = (int *)0x0;
          goto LAB_02f85e78;
        }
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(*(int *)(iVar1 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x014001f0(iVar3);
        }
        iVar4 = *piVar9;
        uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar3) {
              puVar18 = (undefined4 *)(iVar4 + *piVar10 * 8 + 0xc0);
              goto LAB_02f85e3c;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar9,iVar3,0);
LAB_02f85e3c:
        uVar12 = (*(code *)*puVar18)(piVar9,puVar18[1]);
        iVar3 = (**(code **)(iVar15 + 0xc))
                          (*(undefined4 *)(iVar15 + 0x20),uVar12,*(undefined4 *)(iVar15 + 0x14));
      } while (iVar3 == 0);
      iVar1 = 0;
      goto LAB_02f85e78;
    }
    uVar12 = *(undefined4 *)(iRam02f86004 + 0x2f85f18);
  }
  uVar12 = func_0x01384988(uVar12);
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,iVar1);
  uVar31 = func_0x01384928();
  iVar15 = (int)uVar31;
  if ((int)((ulonglong)uVar31 >> 0x20) != 1) {
    if (piVar9 != (int *)0x0) {
      iVar4 = *piVar9;
      uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          unaff_r7 = (code *)piVar2[-1];
          if (unaff_r7 == (code *)**(int **)(iRam02f86010 + 0x2f85f84)) {
            puVar18 = (undefined4 *)(iVar4 + *piVar2 * 8 + 0xc0);
            goto LAB_02f85fcc;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar9,(code *)**(int **)(iRam02f86010 + 0x2f85f84),0)
      ;
LAB_02f85fcc:
      (*(code *)*puVar18)(piVar9,puVar18[1]);
    }
    uVar30 = 1;
    func_0x01459844(iVar15);
    iVar27 = 0x2f85ff8;
    uVar31 = func_0x01062280();
    iVar5 = (int)((ulonglong)uVar31 >> 0x20);
    piVar2 = (int *)uVar31;
    bVar28 = false;
    iVar4 = extraout_r2_16;
    if ((bool)uVar30) {
      iVar4 = -0x42f85ffd;
      iVar27 = 0x180000 - (int)piVar2;
      bVar28 = iVar27 == 0;
    }
    bVar29 = false;
    if (bVar28) {
      iVar22 = 0xc - iVar5;
      bVar29 = iVar22 == 0;
    }
    bVar28 = false;
    if (bVar29) {
      iVar15 = 0xf800 - extraout_r3_10;
      bVar28 = iVar15 == 0;
    }
    bVar29 = false;
    if (bVar28) {
      iVar27 = (int)&UNK_00b00000 - (int)piVar2;
      bVar29 = iVar27 == 0;
    }
    if (bVar29) {
      iVar4 = -0x2f85fd4;
      iVar5 = -0x2f85ee8;
    }
    *(int *)(puVar26 + -0x27c) = iVar27;
    *(int *)(puVar26 + -0x280) = iVar3;
    *(int *)(puVar26 + -0x284) = iVar22;
    *(int *)(puVar26 + -0x288) = iVar1;
    *(int **)(puVar26 + -0x28c) = piVar21;
    *(code **)(puVar26 + -0x290) = unaff_r7;
    *(int *)(puVar26 + -0x294) = iVar15;
    *(undefined4 *)(puVar26 + -0x298) = 0;
    *(int **)(puVar26 + -0x29c) = piVar9;
    *(int *)(puVar26 + -0x2b4) = iVar5;
    *(undefined4 *)(puVar26 + -0x2a4) = **(undefined4 **)(iRam02f8647c + 0x2f86038);
    piVar9 = *(int **)(iVar4 + 0x1c);
    if (piVar9 == (int *)0x0) {
      func_0x01384978(*(undefined4 *)(iRam02f86480 + 0x2f86054));
      func_0x01384978(*(undefined4 *)(iRam02f86484 + 0x2f86060));
      piVar9 = *(int **)(iVar4 + 0x1c);
      if (piVar9 == (int *)0x0) {
        func_0x0140024c(iVar4);
        piVar9 = *(int **)(iVar4 + 0x1c);
      }
    }
    iVar1 = piVar9[5];
    *(int *)(puVar26 + -0x2b0) = iVar4;
    iVar15 = *(int *)(iVar1 + 0x84);
    uVar7 = iVar15 + 7U & 0xfffffff8;
    puVar17 = puVar26 + (-0x2b8 - uVar7);
    puVar18 = (undefined4 *)(puVar17 + -uVar7);
    iVar1 = (int)puVar18 - uVar7;
    func_0x0145894c(iVar1,iVar15);
    if (piVar2 == (int *)0x0) goto LAB_02f86388;
    if (*(int *)(puVar26 + -0x2b4) == 0) {
      uVar12 = *(undefined4 *)(iRam02f8648c + 0x2f863a0);
      goto LAB_02f8639c;
    }
    iVar3 = *piVar9;
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x014001f0(iVar3);
    }
    iVar4 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar3) {
          puVar20 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
          goto LAB_02f8612c;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar20 = (undefined4 *)func_0x014002dc(piVar2,iVar3,0);
LAB_02f8612c:
    piVar9 = (int *)(*(code *)*puVar20)(piVar2,puVar20[1]);
    do {
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *piVar9;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          unaff_r7 = (code *)piVar2[-1];
          if (unaff_r7 == (code *)**(int **)(iRam02f86490 + 0x2f8615c)) {
            puVar20 = (undefined4 *)(iVar3 + *piVar2 * 8 + 0xc0);
            goto LAB_02f861a4;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar20 = (undefined4 *)func_0x014002dc(piVar9,(code *)**(int **)(iRam02f86490 + 0x2f8615c),0)
      ;
LAB_02f861a4:
      piVar2 = (int *)(*(code *)*puVar20)(piVar9,puVar20[1]);
      if (piVar2 == (int *)0x0) {
        iVar3 = 0;
        piVar2 = (int *)0x0;
        goto LAB_02f862e4;
      }
      if (piVar9 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(*(int *)(*(int *)(puVar26 + -0x2b0) + 0x1c) + 0xc);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x014001f0(iVar3);
      }
      iVar4 = *piVar9;
      uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar7 != 0) {
        piVar21 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar21[-1] == iVar3) {
            iVar3 = iVar4 + *piVar21 * 8 + 0xc0;
            goto LAB_02f8623c;
          }
          uVar7 = uVar7 - 1;
          piVar21 = piVar21 + 2;
        } while (uVar7 != 0);
      }
      iVar3 = func_0x014002dc(piVar9,iVar3,0);
LAB_02f8623c:
      iVar3 = *(int *)(iVar3 + 4);
      *(undefined1 **)(puVar26 + -0x2ac) = puVar17;
      uVar12 = *(undefined4 *)(iVar3 + 4);
      pcVar16 = *(code **)(iVar3 + 8);
      *(undefined1 **)(iVar1 + -8) = puVar17;
      (*pcVar16)(uVar12,iVar3,piVar9,puVar26 + -0x2ac);
      func_0x01458934(iVar1,puVar17,iVar15);
      func_0x01458934(puVar18,iVar1,iVar15);
      puVar6 = *(undefined4 **)(*(int *)(*(int *)(puVar26 + -0x2b0) + 0x1c) + 0x18);
      puVar20 = puVar18;
      if (-1 < *(int *)(*(int *)(*(int *)(*(int *)(puVar26 + -0x2b0) + 0x1c) + 0x14) + 0x14)) {
        puVar20 = (undefined4 *)*puVar18;
      }
      uVar12 = *puVar6;
      unaff_r7 = (code *)puVar6[2];
      *(undefined4 **)(puVar26 + -0x2ac) = puVar20;
      *(undefined1 **)(iVar1 + -8) = puVar26 + -0x2a5;
      (*unaff_r7)(uVar12,puVar6,*(undefined4 *)(puVar26 + -0x2b4),puVar26 + -0x2ac);
    } while (puVar26[-0x2a5] == '\0');
    iVar3 = 0;
LAB_02f862e4:
    do {
      if (piVar9 != (int *)0x0) {
        iVar4 = *piVar9;
        uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar7 != 0) {
          piVar21 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            unaff_r7 = (code *)piVar21[-1];
            if (unaff_r7 == (code *)**(int **)(iRam02f86494 + 0x2f862fc)) {
              puVar18 = (undefined4 *)(iVar4 + *piVar21 * 8 + 0xc0);
              goto LAB_02f86344;
            }
            uVar7 = uVar7 - 1;
            piVar21 = piVar21 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)
                  func_0x014002dc(piVar9,(code *)**(int **)(iRam02f86494 + 0x2f862fc),0);
LAB_02f86344:
        (*(code *)*puVar18)(piVar9,puVar18[1]);
      }
      if (iVar3 != 0) {
        func_0x01384bec(iVar3);
      }
      if (**(int **)(iRam02f86498 + 0x2f86370) == *(int *)(puVar26 + -0x2a4)) {
        return piVar2;
      }
      func_0x0145b028(**(int **)(iRam02f86498 + 0x2f86370));
LAB_02f86388:
      uVar12 = *(undefined4 *)(iRam02f86488 + 0x2f86394);
LAB_02f8639c:
      uVar12 = func_0x01384988(uVar12);
      uVar12 = func_0x04a21c20(uVar12,0);
      func_0x01384aa0(uVar12,*(undefined4 *)(puVar26 + -0x2b0));
      uVar31 = func_0x01384928();
      iVar3 = (int)uVar31;
      if ((int)((ulonglong)uVar31 >> 0x20) != 1) goto LAB_02f863f0;
      piVar2 = (int *)func_0x0145b008(iVar3);
      iVar3 = *piVar2;
      piVar2 = (int *)0x0;
      func_0x0145b0f8();
    } while( true );
  }
  piVar2 = (int *)func_0x0145b008(iVar15);
  iVar1 = *piVar2;
  piVar21 = (int *)0x0;
  func_0x0145b0f8();
LAB_02f85e78:
  if (piVar9 != (int *)0x0) {
    iVar15 = *piVar9;
    uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(int *)(iVar15 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(iRam02f8600c + 0x2f85e90)) {
          puVar18 = (undefined4 *)(iVar15 + *piVar2 * 8 + 0xc0);
          goto LAB_02f85ed8;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(iRam02f8600c + 0x2f85e90),0);
LAB_02f85ed8:
    (*(code *)*puVar18)(piVar9,puVar18[1]);
  }
  if (iVar1 != 0) {
    func_0x01384bec(iVar1);
  }
  return piVar21;
LAB_02f863f0:
  if (piVar9 != (int *)0x0) {
    iVar4 = *piVar9;
    uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar7 != 0) {
      piVar21 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar21[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f8649c + 0x2f86408)) {
          puVar18 = (undefined4 *)(iVar4 + *piVar21 * 8 + 0xc0);
          goto LAB_02f86450;
        }
        uVar7 = uVar7 - 1;
        piVar21 = piVar21 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar9,(code *)**(int **)(iRam02f8649c + 0x2f86408),0);
LAB_02f86450:
    (*(code *)*puVar18)(piVar9,puVar18[1]);
  }
  uVar30 = 1;
  func_0x01459844(iVar3);
  iVar22 = 0x2f8647c;
  uVar31 = func_0x01062280();
  iVar4 = (int)((ulonglong)uVar31 >> 0x20);
  piVar21 = (int *)uVar31;
  bVar28 = false;
  if ((bool)uVar30) {
    iVar4 = -0x2f85cc8;
    iVar22 = 0x28000000 - (int)piVar21;
    bVar28 = iVar22 == 0;
  }
  bVar29 = false;
  iVar5 = iVar1;
  if (bVar28) {
    iVar5 = 0x380 - iVar4;
    bVar29 = iVar5 == 0;
  }
  bVar28 = false;
  if (bVar29) {
    iVar3 = 0x700000 - extraout_r3_11;
    bVar28 = iVar3 == 0;
  }
  bVar29 = false;
  if (bVar28) {
    iVar22 = -0x5c000000 - (int)piVar21;
    bVar29 = iVar22 == 0;
  }
  if (bVar29) {
    iVar4 = -0x2ebe4a4;
  }
  *(int *)(iVar1 + -4) = iVar22;
  *(undefined1 **)(iVar1 + -8) = puVar26 + -0x280;
  *(int *)(iVar1 + -0xc) = iVar15;
  *(int *)(iVar1 + -0x10) = iVar5;
  *(int **)(iVar1 + -0x14) = piVar2;
  *(code **)(iVar1 + -0x18) = unaff_r7;
  *(int *)(iVar1 + -0x1c) = iVar3;
  *(undefined4 *)(iVar1 + -0x20) = 0;
  *(int **)(iVar1 + -0x24) = piVar9;
  if (*(int *)(extraout_r2_17 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f86844 + 0x2f864cc));
    func_0x01384978(*(undefined4 *)(iRam02f86848 + 0x2f864d8));
    if (*(int *)(extraout_r2_17 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_17);
    }
  }
  if (piVar21 == (int *)0x0) {
    uVar12 = *(undefined4 *)(iRam02f8684c + 0x2f86758);
  }
  else {
    if (iVar4 != 0) {
      iVar15 = **(int **)(extraout_r2_17 + 0x1c);
      if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
        iVar15 = func_0x014001f0(iVar15);
      }
      iVar3 = *piVar21;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar15) {
            puVar18 = (undefined4 *)(iVar3 + *piVar2 * 8 + 0xc0);
            goto LAB_02f86568;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)func_0x014002dc(piVar21,iVar15,0);
LAB_02f86568:
      piVar21 = (int *)(*(code *)*puVar18)(piVar21,puVar18[1]);
      piVar2 = *(int **)(iRam02f86854 + 0x2f8658c);
      do {
        if (piVar21 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar15 = *piVar21;
        uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar15 + 0x58) + 4);
          do {
            if (piVar9[-1] == *piVar2) {
              puVar18 = (undefined4 *)(iVar15 + *piVar9 * 8 + 0xc0);
              goto LAB_02f865e4;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar21,*piVar2,0);
LAB_02f865e4:
        piVar9 = (int *)(*(code *)*puVar18)(piVar21,puVar18[1]);
        if (piVar9 == (int *)0x0) {
          iVar1 = 0;
          piVar9 = (int *)0x0;
          goto LAB_02f866c0;
        }
        if (piVar21 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar15 = *(int *)(*(int *)(extraout_r2_17 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar15 + 0xbd) & 1) == 0) {
          iVar15 = func_0x014001f0(iVar15);
        }
        iVar3 = *piVar21;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar15) {
              puVar18 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
              goto LAB_02f86678;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar18 = (undefined4 *)func_0x014002dc(piVar21,iVar15,0);
LAB_02f86678:
        (*(code *)*puVar18)(iVar1 + -0x30,piVar21,puVar18[1]);
        uVar12 = *(undefined4 *)(iVar4 + 0x20);
        pcVar16 = *(code **)(iVar4 + 0xc);
        *(undefined4 *)(iVar1 + -0x38) = *(undefined4 *)(iVar4 + 0x14);
        iVar15 = (*pcVar16)(uVar12,*(undefined4 *)(iVar1 + -0x30),*(undefined4 *)(iVar1 + -0x2c),
                            *(undefined4 *)(iVar1 + -0x28));
      } while (iVar15 == 0);
      iVar1 = 0;
      goto LAB_02f866c0;
    }
    uVar12 = *(undefined4 *)(iRam02f86850 + 0x2f86764);
  }
  uVar12 = func_0x01384988(uVar12);
  uVar12 = func_0x04a21c20(uVar12,0);
  func_0x01384aa0(uVar12,extraout_r2_17);
  uVar31 = func_0x01384928();
  iVar15 = (int)uVar31;
  if ((int)((ulonglong)uVar31 >> 0x20) != 1) {
    if (piVar21 != (int *)0x0) {
      iVar3 = *piVar21;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          unaff_r7 = (code *)piVar9[-1];
          if (unaff_r7 == (code *)**(int **)(iRam02f8685c + 0x2f867d0)) {
            puVar18 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
            goto LAB_02f86818;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar18 = (undefined4 *)
                func_0x014002dc(piVar21,(code *)**(int **)(iRam02f8685c + 0x2f867d0),0);
LAB_02f86818:
      (*(code *)*puVar18)(piVar21,puVar18[1]);
    }
    uVar30 = 1;
    func_0x01459844(iVar15);
    iVar22 = 0x2f86844;
    uVar31 = func_0x01062280();
    pcVar16 = (code *)((ulonglong)uVar31 >> 0x20);
    iVar3 = (int)uVar31;
    bVar28 = false;
    if ((bool)uVar30) {
      pcVar16 = (code *)0xfd07d7b4;
      iVar22 = 10 - iVar3;
      bVar28 = iVar22 == 0;
    }
    bVar29 = false;
    if (bVar28) {
      iVar5 = 0x74000 - (int)pcVar16;
      bVar29 = iVar5 == 0;
    }
    uVar31 = CONCAT44(extraout_r2_18,iVar5);
    bVar28 = false;
    if (bVar29) {
      iVar15 = -0x54000000 - extraout_r3_12;
      bVar28 = iVar15 == 0;
    }
    bVar29 = false;
    if (bVar28) {
      iVar22 = 0x74 - iVar3;
      bVar29 = iVar22 == 0;
    }
    if (bVar29) {
      pcVar16 = (code *)0xfd07979c;
    }
    uVar32 = CONCAT44(pcVar16,iVar3);
    *(int *)(iVar1 + -0x3c) = iVar22;
    *(int **)(iVar1 + -0x40) = piVar2;
    *(code **)(iVar1 + -0x44) = unaff_r7;
    *(int *)(iVar1 + -0x48) = iVar15;
    *(undefined4 *)(iVar1 + -0x4c) = 0;
    *(int **)(iVar1 + -0x50) = piVar21;
    pcVar19 = (code *)(iVar1 + -0x58);
    piVar2 = *(int **)(iVar1 + -0x38);
    if (piVar2[7] == 0) {
      func_0x0140024c(piVar2);
    }
    uVar30 = iVar3 == 0;
    if ((bool)uVar30) {
      uVar12 = func_0x01384988(*(undefined4 *)(iRam02f868e0 + 0x2f868cc));
      uVar12 = func_0x04a21c20(uVar12,0);
      func_0x01384aa0(uVar12,piVar2);
      uVar31 = func_0x01384928();
      iVar15 = (int)((ulonglong)uVar31 >> 0x20);
      if ((bool)uVar30) {
        iVar5 = -iVar15;
      }
      *(undefined4 *)(iVar1 + -0x5c) = 0x2f868e0;
      *(int *)(iVar1 + -0x60) = iVar4;
      *(int *)(iVar1 + -100) = iVar5;
      *(int **)(iVar1 + -0x68) = piVar2;
      *(code **)(iVar1 + -0x6c) = pcVar16;
      *(int *)(iVar1 + -0x70) = extraout_r2_18;
      *(int *)(iVar1 + -0x74) = extraout_r3_12;
      *(undefined4 *)(iVar1 + -0x78) = 0;
      iVar4 = iVar1 + -0x60;
      piVar2 = *(int **)(iRam02f869dc + 0x2f86908);
      *(int *)(iVar1 + -0x80) = *piVar2;
      iVar3 = *(int *)(extraout_r2_19 + 0x1c);
      *(int *)(iVar1 + -0x90) = iVar15;
      if (iVar3 == 0) {
        func_0x0140024c(extraout_r2_19);
        iVar3 = *(int *)(extraout_r2_19 + 0x1c);
      }
      pcVar19 = (code *)((iVar1 + -0x90) - (*(int *)(*(int *)(iVar3 + 4) + 0x84) + 7U & 0xfffffff8))
      ;
      uVar30 = (int)uVar31 == 0;
      pcVar16 = pcVar19;
      if (!(bool)uVar30) {
        iVar22 = iVar1 + -0x90;
        if (*(int *)(*(int *)(iVar3 + 4) + 0x14) < 0) {
          iVar22 = iVar15;
        }
        func_0x01458934(pcVar19,iVar22);
        puVar18 = *(undefined4 **)(iVar3 + 8);
        iVar22 = *(int *)(*(int *)(iVar3 + 4) + 0x14);
        uVar12 = *puVar18;
        *(int *)(iVar1 + -0x8c) = (int)uVar31;
        if (-1 < iVar22) {
          pcVar16 = *(code **)pcVar19;
        }
        *(code **)(iVar1 + -0x88) = pcVar16;
        pcVar16 = (code *)puVar18[2];
        *(int *)(pcVar19 + -8) = iVar1 + -0x84;
        (*pcVar16)(uVar12,puVar18,0,iVar1 + -0x8c);
        uVar30 = *piVar2 == *(int *)(iVar1 + -0x80);
        if ((bool)uVar30) {
          return *(int **)(iVar1 + -0x84);
        }
        func_0x0145b028(*(int **)(iVar1 + -0x84));
      }
      uVar12 = func_0x01384988(*(undefined4 *)(iRam02f869e0 + 0x2f869c8));
      uVar12 = func_0x04a21c20(uVar12,0);
      func_0x01384aa0(uVar12,extraout_r2_19);
      iVar27 = 0x2f869dc;
      uVar32 = func_0x01384928();
      iVar1 = extraout_r2_20;
      iVar22 = extraout_r3_13;
      iVar5 = extraout_r2_19;
      if ((bool)uVar30) {
        uVar32 = CONCAT44(0x9d07961c,(int)uVar32);
        uVar31 = CONCAT44(iVar15,0x62fc69e4);
      }
    }
    else {
      *(undefined4 *)(iVar1 + -0x58) = *(undefined4 *)(piVar2[7] + 8);
      iVar27 = 0x2f868b8;
      iVar1 = extraout_r2_18;
      iVar22 = extraout_r3_12;
      iVar5 = extraout_r3_12;
    }
    *(int *)(pcVar19 + -4) = iVar27;
    *(int *)(pcVar19 + -8) = iVar4;
    *(int *)(pcVar19 + -0xc) = (int)uVar31;
    *(int **)(pcVar19 + -0x10) = piVar2;
    *(code **)(pcVar19 + -0x14) = pcVar16;
    *(int *)(pcVar19 + -0x18) = (int)((ulonglong)uVar31 >> 0x20);
    *(int *)(pcVar19 + -0x1c) = iVar5;
    *(int *)(pcVar19 + -0x20) = iVar3;
    iVar15 = *(int *)pcVar19;
    piVar2 = *(int **)(iVar15 + 0x1c);
    if (piVar2 == (int *)0x0) {
      func_0x0140024c(iVar15);
      piVar2 = *(int **)(iVar15 + 0x1c);
    }
    if ((*(ushort *)(*piVar2 + 0xbd) & 1) == 0) {
      func_0x014001f0();
    }
    piVar2 = (int *)func_0x01384be4();
    func_0x03200f40(piVar2,0xfffffffe,*(undefined4 *)(*(int *)(iVar15 + 0x1c) + 4));
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    piVar2[8] = (int)uVar32;
    piVar2[0xc] = (int)((ulonglong)uVar32 >> 0x20);
    piVar2[0xd] = iVar1;
    piVar2[0xe] = iVar22;
    return piVar2;
  }
  piVar2 = (int *)func_0x0145b008(iVar15);
  iVar1 = *piVar2;
  piVar9 = (int *)0x0;
  func_0x0145b0f8();
LAB_02f866c0:
  if (piVar21 != (int *)0x0) {
    iVar15 = *piVar21;
    uVar7 = (uint)*(ushort *)(iVar15 + 0xb6);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(int *)(iVar15 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(iRam02f86858 + 0x2f866d8)) {
          puVar18 = (undefined4 *)(iVar15 + *piVar2 * 8 + 0xc0);
          goto LAB_02f86720;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar7 != 0);
    }
    puVar18 = (undefined4 *)func_0x014002dc(piVar21,**(int **)(iRam02f86858 + 0x2f866d8),0);
LAB_02f86720:
    (*(code *)*puVar18)(piVar21,puVar18[1]);
  }
  if (iVar1 != 0) {
    func_0x01384bec(iVar1);
  }
  return piVar9;
}



// ===== FAT.ConfHelper.<>c__DisplayClass2_0$$.ctor RVA 0x1c0f390 =====

void FUN_01c1f390(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.ConfHelper$$_EnsureResMap RVA 0x1c0f398 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c1f398(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar2 = (char *)(_UNK_01c1f464 + 0x1c1f3a8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c1f468 + 0x1c1f3bc));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xd12,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xd12,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar3 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar6,uVar5,&uStack_30,uVar3,0,0);
    return;
  }
  piVar4 = *(int **)(_UNK_01c1f46c + 0x1c1f410);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  if (**(int **)(iVar1 + 0x5c) != 0) {
    return;
  }
  uVar3 = func_0x02c41808(0);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  **(undefined4 **)(iVar1 + 0x5c) = uVar3;
  return;
}



// ===== FAT.ConfHelper$$GetUpdatePath RVA 0x1c0f470 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_01c1f470(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_01c1f600 + 0x1c1f490);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c1f604 + 0x1c1f4a8));
    func_0x01384978(*(undefined4 *)(_UNK_01c1f608 + 0x1c1f4b4));
    func_0x01384978(*(undefined4 *)(_UNK_01c1f60c + 0x1c1f4c0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xda1,0);
  if (iVar1 == 0) {
    uVar2 = func_0x0244fb1c(param_1,param_4,0);
    *param_2 = 0;
    piVar4 = *(int **)(_UNK_01c1f610 + 0x1c1f540);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    FUN_01c1f398();
    iVar1 = **(int **)(*piVar4 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02c41580(iVar1,uVar2,0);
    iVar1 = func_0x01489db8(uVar2,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_01c1f614 + 0x1c1f59c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar2 = func_0x02c38af0(uVar2,0,0,0);
      iVar1 = func_0x01489db8(uVar2,0);
      if (iVar1 == 0) {
        *param_2 = 1;
        return uVar2;
      }
    }
    uVar2 = **(undefined4 **)(**(int **)(_UNK_01c1f618 + 0x1c1f5e0) + 0x5c);
  }
  else {
    iVar1 = func_0x0229f13c(0xda1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021b095c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.ConfHelper$$GetBuiltinPath RVA 0x1c0f61c =====

/* WARNING: Removing unreachable block (ram,0x02c3d690) */
/* WARNING: Removing unreachable block (ram,0x02c3d6a0) */
/* WARNING: Removing unreachable block (ram,0x02c3d6a8) */
/* WARNING: Removing unreachable block (ram,0x02c3d6b8) */
/* WARNING: Removing unreachable block (ram,0x02c3d6bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c1f61c(undefined4 param_1,undefined1 *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  
  pcVar4 = (char *)(_UNK_01c1f7b4 + 0x1c1f63c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c1f7b8 + 0x1c1f654));
    func_0x01384978(*(undefined4 *)(_UNK_01c1f7bc + 0x1c1f660));
    func_0x01384978(*(undefined4 *)(_UNK_01c1f7c0 + 0x1c1f66c));
    func_0x01384978(*(undefined4 *)(_UNK_01c1f7c4 + 0x1c1f678));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xf01,0);
  if (iVar1 == 0) {
    uVar2 = func_0x0244fb1c(param_1,param_4,0);
    *param_2 = 0;
    if (*(int *)(**(int **)(_UNK_01c1f7c8 + 0x1c1f6fc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x02c51d28(0);
    if (param_3 == 0) {
      puVar3 = *(undefined4 **)(**(int **)(_UNK_01c1f7cc + 0x1c1f740) + 0x5c);
    }
    else {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      puVar3 = (undefined4 *)(iVar1 + 0x1c);
    }
    uVar6 = *puVar3;
    iVar1 = func_0x01489db8(uVar6,0);
    if (iVar1 == 0) {
      uVar2 = func_0x0244f604(uVar6,**(undefined4 **)(_UNK_01c1f7d0 + 0x1c1f770),uVar2,0);
    }
    if (*(int *)(**(int **)(_UNK_01c1f7d4 + 0x1c1f788) + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar4 = (char *)(_UNK_02c3d518 + 0x2c3d4cc);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02c3d51c + 0x2c3d4e0),0,param_3 ^ 1,0);
      *pcVar4 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_02c3d520 + 0x2c3d4f4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar4 = (char *)(_UNK_02c3d710 + 0x2c3d53c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02c3d714 + 0x2c3d550),0,param_3 ^ 1);
      func_0x01384978(*(undefined4 *)(_UNK_02c3d718 + 0x2c3d55c));
      func_0x01384978(*(undefined4 *)(_UNK_02c3d71c + 0x2c3d568));
      *pcVar4 = '\x01';
    }
    piVar5 = *(int **)(_UNK_02c3d720 + 0x2c3d57c);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar5;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x04682fd8(iVar1,0,0);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar5;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (*(int *)(**(int **)(_UNK_02c3d724 + 0x2c3d5d8) + 0x74) == 0) {
      func_0x01384ab4(**(int **)(_UNK_02c3d724 + 0x2c3d5d8));
    }
    uVar6 = func_0x02455d24(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0467ad0c(iVar1,uVar6,0);
    iVar1 = **(int **)(*piVar5 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0467ad0c(iVar1,**(undefined4 **)(_UNK_02c3d728 + 0x2c3d644),0);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar5;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0467ad0c(iVar1,uVar2,0);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar5;
    }
    piVar5 = (int *)**(undefined4 **)(iVar1 + 0x5c);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
                    /* WARNING: Could not recover jumptable at 0x02c3d70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar5 + 0xd8))(piVar5,*(undefined4 *)(*piVar5 + 0xdc));
    return;
  }
  iVar1 = func_0x0229f13c(0xf01,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x021b095c(iVar1,param_1,param_2,param_3,param_4,0);
  return;
}



// ===== FAT.ConfHelper$$GetTableLoadPath RVA 0x1c0f7d8 =====

/* WARNING: Removing unreachable block (ram,0x02c3d690) */
/* WARNING: Removing unreachable block (ram,0x02c3d6a0) */
/* WARNING: Removing unreachable block (ram,0x02c3d6a8) */
/* WARNING: Removing unreachable block (ram,0x02c3d6b8) */
/* WARNING: Removing unreachable block (ram,0x02c3d6bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_01c1f7d8(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_01c1fa00 + 0x1c1f7f8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c1fa04 + 0x1c1f810));
    func_0x01384978(*(undefined4 *)(_UNK_01c1fa08 + 0x1c1f81c));
    func_0x01384978(*(undefined4 *)(_UNK_01c1fa0c + 0x1c1f828));
    func_0x01384978(*(undefined4 *)(_UNK_01c1fa10 + 0x1c1f834));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xd11,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xd11,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021b095c(iVar1,param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  uVar2 = func_0x0244fb1c(param_1,param_4,0);
  *param_2 = 0;
  piVar5 = *(int **)(_UNK_01c1fa14 + 0x1c1f8b8);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  FUN_01c1f398();
  iVar1 = **(int **)(*piVar5 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x02c41580(iVar1,uVar2,0);
  iVar1 = func_0x01489db8(uVar3,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01c1fa18 + 0x1c1f914) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar3 = func_0x02c38af0(uVar3,0,0,0);
    iVar1 = func_0x01489db8(uVar3,0);
    if (iVar1 == 0) {
      *param_2 = 1;
      return uVar3;
    }
  }
  if (*(int *)(**(int **)(_UNK_01c1fa1c + 0x1c1f958) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x02c51d28(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar3 = *(undefined4 *)(iVar1 + 0x1c);
  iVar1 = func_0x01489db8(uVar3,0);
  if (iVar1 == 0) {
    uVar2 = func_0x0244f604(uVar3,**(undefined4 **)(_UNK_01c1fa20 + 0x1c1f9ac),uVar2,0);
  }
  if (*(int *)(**(int **)(_UNK_01c1fa24 + 0x1c1f9c4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar4 = (char *)(_UNK_02c3d518 + 0x2c3d4cc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c3d51c + 0x2c3d4e0),0,0,0);
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02c3d520 + 0x2c3d4f4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar4 = (char *)(_UNK_02c3d710 + 0x2c3d53c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c3d714 + 0x2c3d550),0,0);
    func_0x01384978(*(undefined4 *)(_UNK_02c3d718 + 0x2c3d55c));
    func_0x01384978(*(undefined4 *)(_UNK_02c3d71c + 0x2c3d568));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_02c3d720 + 0x2c3d57c);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x04682fd8(iVar1,0,0);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (*(int *)(**(int **)(_UNK_02c3d724 + 0x2c3d5d8) + 0x74) == 0) {
    func_0x01384ab4(**(int **)(_UNK_02c3d724 + 0x2c3d5d8));
  }
  uVar3 = func_0x02455d24(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0467ad0c(iVar1,uVar3,0);
  iVar1 = **(int **)(*piVar5 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0467ad0c(iVar1,**(undefined4 **)(_UNK_02c3d728 + 0x2c3d644),0);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0467ad0c(iVar1,uVar2,0);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  piVar5 = (int *)**(undefined4 **)(iVar1 + 0x5c);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x02c3d70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*piVar5 + 0xd8))(piVar5,*(undefined4 *)(*piVar5 + 0xdc));
  return uVar2;
}



// ===== FAT.ConfHelper$$_DebugPrintRes RVA 0x1c0fa28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c1fa28(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar4 = (char *)(_UNK_01c1fe5c + 0x1c1fa40);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c1fe60 + 0x1c1fa54));
    func_0x01384978(*(undefined4 *)(_UNK_01c1fe64 + 0x1c1fa60));
    func_0x01384978(*(undefined4 *)(_UNK_01c1fe68 + 0x1c1fa6c));
    func_0x01384978(*(undefined4 *)(_UNK_01c1fe6c + 0x1c1fa78));
    func_0x01384978(*(undefined4 *)(_UNK_01c1fe70 + 0x1c1fa84));
    func_0x01384978(*(undefined4 *)(_UNK_01c1fe74 + 0x1c1fa90));
    func_0x01384978(*(undefined4 *)(_UNK_01c1fe78 + 0x1c1fa9c));
    func_0x01384978(*(undefined4 *)(_UNK_01c1fe7c + 0x1c1faa8));
    func_0x01384978(*(undefined4 *)(_UNK_01c1fe80 + 0x1c1fab4));
    func_0x01384978(*(undefined4 *)(_UNK_01c1fe84 + 0x1c1fac0));
    func_0x01384978(*(undefined4 *)(_UNK_01c1fe88 + 0x1c1facc));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x91d2,0);
  if (iVar1 == 0) {
    piVar6 = *(int **)(_UNK_01c1fe8c + 0x1c1fb40);
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar6;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450014(iVar1,0);
    iVar1 = *(int *)(*(int *)(*piVar6 + 0x5c) + 4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450d44(iVar1,**(undefined4 **)(_UNK_01c1fe90 + 0x1c1fb9c),0);
    iVar1 = *(int *)(*(int *)(*piVar6 + 0x5c) + 4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450d44(iVar1,**(undefined4 **)(_UNK_01c1fe94 + 0x1c1fbcc),0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244faf8(&uStack_58,iVar1,**(undefined4 **)(_UNK_01c1fe98 + 0x1c1fc04));
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    puVar9 = *(undefined4 **)(_UNK_01c1fe9c + 0x1c1fc30);
    puVar8 = *(undefined4 **)(_UNK_01c1fea0 + 0x1c1fc38);
    while (iVar1 = func_0x01477ae8(&uStack_40,*puVar9), uVar7 = uStack_34, iVar1 != 0) {
      iVar2 = *piVar6;
      iVar1 = (int)uStack_30;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar6;
      }
      iVar5 = *(int *)(*(int *)(iVar2 + 0x5c) + 4);
      iVar2 = func_0x01384a00(**(undefined4 **)(_UNK_01c1fea4 + 0x1c1fc7c),5);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = *(uint *)(iVar2 + 0xc);
      if (uVar3 == 0) {
        func_0x01384bf4();
        uVar3 = *(uint *)(iVar2 + 0xc);
      }
      *(undefined4 *)(iVar2 + 0x10) = uVar7;
      uVar7 = *puVar8;
      if (uVar3 < 2) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar2 + 0x14) = uVar7;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar3 = *(uint *)(iVar2 + 0xc);
      uVar7 = *(undefined4 *)(iVar1 + 8);
      if (uVar3 < 3) {
        func_0x01384bf4();
        uVar3 = *(uint *)(iVar2 + 0xc);
      }
      *(undefined4 *)(iVar2 + 0x18) = uVar7;
      uVar7 = *puVar8;
      if (uVar3 < 4) {
        func_0x01384bf4();
        uVar3 = *(uint *)(iVar2 + 0xc);
      }
      *(undefined4 *)(iVar2 + 0x1c) = uVar7;
      uVar7 = *(undefined4 *)(iVar1 + 0xc);
      if (uVar3 < 5) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar2 + 0x20) = uVar7;
      uVar7 = func_0x0245088c(iVar2,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      piVar6 = *(int **)(_UNK_01c1fea8 + 0x1c1fd48);
      func_0x02450064(iVar5,uVar7,0);
    }
    func_0x0244fafc(&uStack_40,**(undefined4 **)(_UNK_01c1feac + 0x1c1fd58));
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar6;
    }
    puVar8 = *(undefined4 **)(_UNK_01c1feb8 + 0x1c1fd84);
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450d44(iVar1,*puVar8,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x91d2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ConfHelper$$FixFilePath RVA 0x1c0fec0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01c1fec0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01c20034 + 0x1c1fed4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c20038 + 0x1c1fee8));
    func_0x01384978(*(undefined4 *)(_UNK_01c2003c + 0x1c1fef4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xe21,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xe21,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2,0,0);
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return iVar1;
  }
  iVar1 = func_0x01489db8(param_1,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02451184(param_1,**(undefined4 **)(_UNK_01c20040 + 0x1c1ff70),0);
    if (iVar1 == 0) {
      piVar5 = *(int **)(_UNK_01c20044 + 0x1c1ff94);
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar5;
      }
      iVar1 = func_0x01489db8(*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8),0);
      if (iVar1 == 0) {
        iVar1 = *piVar5;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar5;
        }
        uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8);
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02451184(param_1,uVar6,0);
        if (iVar1 != 0) {
          return param_1;
        }
      }
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar5;
      }
      iVar1 = (*(code *)&SUB_046634e0)(*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8),param_1,0);
      return iVar1;
    }
  }
  return param_1;
}



// ===== FAT.ConfHelper$$AsyncRegisterConf RVA 0x1c10048 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c20048(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01c20138 + 0x1c20064);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c2013c + 0x1c20078));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_40 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  iVar1 = func_0x0229f06c(0x91d3,0);
  if (iVar1 == 0) {
    func_0x02450bfc(&uStack_50,0);
    uStack_40 = 0xffffffff;
    uVar3 = **(undefined4 **)(_UNK_01c20140 + 0x1c20124);
    puVar2 = (undefined4 *)((uint)&uStack_40 | 4);
    *puVar2 = uStack_50;
    puVar2[1] = uStack_4c;
    puVar2[2] = uStack_48;
    puVar2[3] = uStack_44;
    uStack_2c = param_1;
    uStack_28 = param_2;
    func_0x02f541ec(puVar2,&uStack_40,uVar3);
  }
  else {
    iVar1 = func_0x0229f13c(0x91d3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ConfHelper$$AsyncLoadConfBytes RVA 0x1c10144 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c20144(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01c20234 + 0x1c20160);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c20238 + 0x1c20174));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_40 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  iVar1 = func_0x0229f06c(0xe36,0);
  if (iVar1 == 0) {
    func_0x02450bfc(&uStack_50,0);
    uStack_40 = 0xffffffff;
    uVar3 = **(undefined4 **)(_UNK_01c2023c + 0x1c20220);
    puVar2 = (undefined4 *)((uint)&uStack_40 | 4);
    *puVar2 = uStack_50;
    puVar2[1] = uStack_4c;
    puVar2[2] = uStack_48;
    puVar2[3] = uStack_44;
    uStack_2c = param_1;
    uStack_28 = param_2;
    func_0x02f540d4(puVar2,&uStack_40,uVar3);
  }
  else {
    iVar1 = func_0x0229f13c(0xe36,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ConfHelper$$ConvertLangStrToConfName RVA 0x1c10240 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c20240(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01c20404 + 0x1c20254);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c20408 + 0x1c20268));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x91d6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x91d6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar4,0,0);
    uVar8 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return uVar8;
  }
  iVar1 = func_0x01489db8(param_1,0);
  if (iVar1 != 0) {
    return 0;
  }
  piVar2 = (int *)func_0x01384be4(**(undefined4 **)(_UNK_01c2040c + 0x1c202dc));
  uVar6 = 0;
  func_0x02450004(piVar2,0);
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244f8e4(param_1,0x5f,0,0);
  while( true ) {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar6) break;
    if (*(uint *)(iVar1 + 0xc) <= uVar6) {
      func_0x01384bf4();
    }
    iVar7 = *(int *)(iVar1 + 0x10 + uVar6 * 4);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x024512e4(iVar7,0,1,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x024512f4(iVar3,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    func_0x02450064(piVar2,uVar8,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x02451304(iVar7,1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    func_0x02450064(piVar2,uVar8,0);
    uVar6 = uVar6 + 1;
  }
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x01c20400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
  return uVar8;
}



// ===== FAT.ConfHelper$$get_ActiveDataManifestFiles RVA 0x1c10410 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c20410(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar2 = (char *)(_UNK_01c204a8 + 0x1c20420);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c204ac + 0x1c20434));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x91d7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x91d7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar2 = (char *)(_UNK_02265df8 + 0x2265d28);
    if (*pcVar2 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02265dfc + 0x2265d3c),0);
      *pcVar2 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar6,uVar4,&uStack_30,uVar5,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02265e00 + 0x2265de8));
    return uVar5;
  }
  piVar3 = *(int **)(_UNK_01c204b0 + 0x1c20488);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xc);
}



// ===== FAT.ConfHelper$$IsValidData RVA 0x1c104b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c204b4(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_01c205ac + 0x1c204c8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c205b0 + 0x1c204dc));
    func_0x01384978(*(undefined4 *)(_UNK_01c205b4 + 0x1c204e8));
    func_0x01384978(*(undefined4 *)(_UNK_01c205b8 + 0x1c204f4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xe35,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xe35,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  piVar5 = *(int **)(_UNK_01c205bc + 0x1c2054c);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xc);
  if (iVar1 != 0) {
    uVar7 = func_0x0244fb1c(param_1,**(undefined4 **)(_UNK_01c205c0 + 0x1c20580),0);
    uVar2 = func_0x03e209cc(iVar1,uVar7,
                            *(undefined4 *)
                             (*(int *)(*(int *)(**(int **)(_UNK_01c205c4 + 0x1c20598) + 0x10) + 0x60
                                      ) + 0x84));
    return ~uVar2 >> 0x1f;
  }
  return 0;
}



// ===== FAT.ConfHelper$$GetActiveResDataManifestPath RVA 0x1c105c8 =====

/* WARNING: Removing unreachable block (ram,0x02c3d690) */
/* WARNING: Removing unreachable block (ram,0x02c3d6a0) */
/* WARNING: Removing unreachable block (ram,0x02c3d6a8) */
/* WARNING: Removing unreachable block (ram,0x02c3d6b8) */
/* WARNING: Removing unreachable block (ram,0x02c3d6bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c205c8(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01c206e8 + 0x1c205e0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c206ec + 0x1c205f4));
    func_0x01384978(*(undefined4 *)(_UNK_01c206f0 + 0x1c20600));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xe1e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xe1e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_021b2e68 + 0x21b2d2c);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021b2e6c + 0x21b2d40),param_1,param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_28 = uStack_40;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    func_0x01485238(&uStack_38,0,0);
    func_0x01485238(&uStack_38,0,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x014852b8(&uStack_38,0,0);
    func_0x014852b8(&uStack_38,1,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar4 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar7,uVar4,&uStack_38,uVar3,2,0);
    uVar1 = func_0x0245496c(&uStack_38,0,0);
    *param_1 = uVar1;
    uVar1 = func_0x0245496c(&uStack_38,1,0);
    *param_2 = uVar1;
    uVar4 = func_0x02f5db90(&uStack_38,2,**(undefined4 **)(_UNK_021b2e70 + 0x21b2e58));
    return uVar4;
  }
  *param_1 = 0;
  *param_2 = 0;
  piVar8 = *(int **)(_UNK_01c206f4 + 0x1c20668);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x01384ab4();
  }
  puVar6 = *(undefined4 **)(_UNK_01c206f8 + 0x1c20690);
  uVar4 = func_0x02c38af0(*puVar6,0,0,0);
  iVar2 = func_0x0145b0d8(uVar4,0);
  if (iVar2 == 0) {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar4 = *puVar6;
    pcVar5 = (char *)(_UNK_02c3d518 + 0x2c3d4cc);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02c3d51c + 0x2c3d4e0),0,0,0);
      *pcVar5 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_02c3d520 + 0x2c3d4f4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar5 = (char *)(_UNK_02c3d710 + 0x2c3d53c);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02c3d714 + 0x2c3d550),0,0);
      func_0x01384978(*(undefined4 *)(_UNK_02c3d718 + 0x2c3d55c));
      func_0x01384978(*(undefined4 *)(_UNK_02c3d71c + 0x2c3d568));
      *pcVar5 = '\x01';
    }
    piVar8 = *(int **)(_UNK_02c3d720 + 0x2c3d57c);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar8;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x04682fd8(iVar2,0,0);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar8;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (*(int *)(**(int **)(_UNK_02c3d724 + 0x2c3d5d8) + 0x74) == 0) {
      func_0x01384ab4(**(int **)(_UNK_02c3d724 + 0x2c3d5d8));
    }
    uVar3 = func_0x02455d24(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0467ad0c(iVar2,uVar3,0);
    iVar2 = **(int **)(*piVar8 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0467ad0c(iVar2,**(undefined4 **)(_UNK_02c3d728 + 0x2c3d644),0);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar8;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0467ad0c(iVar2,uVar4,0);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar8;
    }
    piVar8 = (int *)**(undefined4 **)(iVar2 + 0x5c);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
                    /* WARNING: Could not recover jumptable at 0x02c3d70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*piVar8 + 0xd8))(piVar8,*(undefined4 *)(*piVar8 + 0xdc));
    return uVar4;
  }
  *param_1 = 1;
  *param_2 = 1;
  return uVar4;
}



// ===== FAT.ConfHelper$$AsyncLoadText RVA 0x1c106fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c206fc(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_01c20834 + 0x1c2071c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c20838 + 0x1c20730));
    func_0x01384978(*(undefined4 *)(_UNK_01c2083c + 0x1c2073c));
    func_0x01384978(*(undefined4 *)(_UNK_01c20840 + 0x1c20748));
    *pcVar2 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_3c = uStack_4c;
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_4c;
  uStack_2c = uStack_48;
  uStack_28 = uStack_44;
  iVar1 = func_0x0229f06c(0xe1f,0);
  if (iVar1 == 0) {
    uStack_44 = 0;
    uStack_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_4c = 0;
    uStack_40 = param_2;
    uStack_3c = param_3;
    if (*(int *)(**(int **)(_UNK_01c20844 + 0x1c207d4) + 0x1c) == 0) {
      func_0x0140024c();
    }
    func_0x01c21c64(&uStack_50);
    func_0x01c02cec(&uStack_60,(uint)&uStack_50 | 4,**(undefined4 **)(_UNK_01c20848 + 0x1c20814));
  }
  else {
    iVar1 = func_0x0229f13c(0xe1f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021b2e74(&uStack_60,iVar1,param_2,param_3,0);
  }
  *(undefined4 *)(param_1 + 1) = uStack_58;
  *param_1 = uStack_60;
  return;
}



// ===== FAT.ConfHelper$$AsyncLoadActiveResDataManifest RVA 0x1c1084c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c2084c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar2 = (char *)(_UNK_01c20948 + 0x1c20868);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c2094c + 0x1c2087c));
    *pcVar2 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_2c = 0;
  uStack_28 = uStack_34;
  uStack_24 = uStack_30;
  iVar1 = func_0x0229f06c(0xe1c,0);
  if (iVar1 == 0) {
    uStack_38 = 0xffffffff;
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_2c = param_2;
    if (*(int *)(**(int **)(_UNK_01c20950 + 0x1c208f8) + 0x1c) == 0) {
      func_0x0140024c();
    }
    func_0x01c20cf4(&uStack_38);
    func_0x019dd7dc(&uStack_40,(uint)&uStack_38 | 4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xe1c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021b2fd8(&uStack_40,iVar1,param_2,0);
  }
  *param_1 = uStack_40;
  param_1[1] = uStack_3c;
  return;
}



// ===== FAT.ConfHelper$$ParseResDataManifestToMap RVA 0x1c10954 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01c20954(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_01c20a24 + 0x1c20968);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c20a28 + 0x1c2097c));
    func_0x01384978(*(undefined4 *)(_UNK_01c20a2c + 0x1c20988));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xe23,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xe23,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021abcbc + 0x21abbdc);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021abcc0 + 0x21abbf0),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021abcc4 + 0x21abcac));
    return iVar1;
  }
  iVar1 = func_0x01489db8(param_1,0);
  if (iVar1 != 0) {
    return 0;
  }
  if (*(int *)(**(int **)(_UNK_01c20a30 + 0x1c209fc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = **(int **)(_UNK_01c20a34 + 0x1c20a18);
  if ((*(int *)(iVar1 + 0x1c) == 0) &&
     (func_0x01384978(*(undefined4 *)(_UNK_02fec85c + 0x2fec814)), *(int *)(iVar1 + 0x1c) == 0)) {
    func_0x0140024c(iVar1);
  }
  if (*(int *)(**(int **)(_UNK_02fec860 + 0x2fec834) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  puVar2 = *(undefined4 **)(iVar1 + 0x1c);
  if (puVar2 == (undefined4 *)0x0) {
    func_0x01384978(*(undefined4 *)(_UNK_02fecb00 + 0x2feca1c));
    func_0x01384978(*(undefined4 *)(_UNK_02fecb04 + 0x2feca28));
    puVar2 = *(undefined4 **)(iVar1 + 0x1c);
    if (puVar2 == (undefined4 *)0x0) {
      func_0x0140024c(iVar1);
      puVar2 = *(undefined4 **)(iVar1 + 0x1c);
    }
  }
  uVar6 = *puVar2;
  if (*(int *)(**(int **)(_UNK_02fecb08 + 0x2feca4c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar6 = func_0x04836854(uVar6,0);
  if (*(int *)(**(int **)(_UNK_02fecb0c + 0x2feca7c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar7 = 0;
  iVar5 = func_0x048c5644(param_1,uVar6,0,0);
  iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 4);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  if ((iVar5 != 0) && (iVar7 = func_0x01384ab8(iVar5,iVar1), iVar7 == 0)) {
    func_0x01384fb4(iVar5,iVar1);
    iVar7 = 0;
  }
  return iVar7;
}



// ===== FAT.ConfHelper$$.cctor RVA 0x1c10a38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c20a38(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01c20ac0 + 0x1c20a48);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c20ac4 + 0x1c20a5c));
    func_0x01384978(*(undefined4 *)(_UNK_01c20ac8 + 0x1c20a68));
    func_0x01384978(*(undefined4 *)(_UNK_01c20acc + 0x1c20a74));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01c20ad0 + 0x1c20a88));
  func_0x02450004(uVar1,0);
  iVar2 = *(int *)(**(int **)(_UNK_01c20ad4 + 0x1c20aa4) + 0x5c);
  puVar3 = *(undefined4 **)(_UNK_01c20ad8 + 0x1c20ab4);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  *(undefined4 *)(iVar2 + 8) = *puVar3;
  return;
}



// ===== FAT.ConfHelper.<>c__DisplayClass2_0$$<CheckUpdateAndRefreshResMap>b__0 RVA 0x1c10adc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c20adc(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(_UNK_01c20bcc + 0x1c20af8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c20bd0 + 0x1c20b0c));
    func_0x01384978(*(undefined4 *)(_UNK_01c20bd4 + 0x1c20b18));
    func_0x01384978(*(undefined4 *)(_UNK_01c20bd8 + 0x1c20b24));
    func_0x01384978(*(undefined4 *)(_UNK_01c20bdc + 0x1c20b30));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x02451314(iVar3,param_2,**(undefined4 **)(_UNK_01c20be0 + 0x1c20b58));
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02451318(iVar3,param_2,**(undefined4 **)(_UNK_01c20be4 + 0x1c20b88));
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar1 = *(undefined4 *)(iVar3 + 0xc);
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    uVar1 = (*(code *)&SUB_0467129c)(uVar1,*(undefined4 *)(param_3 + 0xc),0);
    return uVar1;
  }
  return 1;
}



// ===== FAT.ConfHelper.<>c__DisplayClass2_0$$<CheckUpdateAndRefreshResMap>b__1 RVA 0x1c10be8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c20be8(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(_UNK_01c20cd8 + 0x1c20c04);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c20cdc + 0x1c20c18));
    func_0x01384978(*(undefined4 *)(_UNK_01c20ce0 + 0x1c20c24));
    func_0x01384978(*(undefined4 *)(_UNK_01c20ce4 + 0x1c20c30));
    func_0x01384978(*(undefined4 *)(_UNK_01c20ce8 + 0x1c20c3c));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x02451314(iVar3,param_2,**(undefined4 **)(_UNK_01c20cec + 0x1c20c64));
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02451318(iVar3,param_2,**(undefined4 **)(_UNK_01c20cf0 + 0x1c20c94));
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar1 = *(undefined4 *)(iVar3 + 0xc);
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    uVar1 = (*(code *)&SUB_0467129c)(uVar1,*(undefined4 *)(param_3 + 0xc),0);
    return uVar1;
  }
  return 1;
}



// ===== FAT.ConfHelper.<AsyncLoadActiveResDataManifest>d__22$$MoveNext RVA 0x1c10cf4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c20cf4(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  undefined8 uStack_48;
  int iStack_40;
  undefined8 uStack_38;
  int iStack_30;
  undefined8 uStack_28;
  int iStack_20;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  
  pcVar8 = (char *)(_UNK_01c21410 + 0x1c20d0c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c21414 + 0x1c20d20));
    func_0x01384978(*(undefined4 *)(_UNK_01c21418 + 0x1c20d2c));
    func_0x01384978(*(undefined4 *)(_UNK_01c2141c + 0x1c20d38));
    func_0x01384978(*(undefined4 *)(_UNK_01c21420 + 0x1c20d44));
    func_0x01384978(*(undefined4 *)(_UNK_01c21424 + 0x1c20d50));
    func_0x01384978(*(undefined4 *)(_UNK_01c21428 + 0x1c20d5c));
    *pcVar8 = '\x01';
  }
  uStack_19 = 0;
  uStack_1a = 0;
  uStack_28 = 0;
  iStack_20 = 0;
  uStack_38 = 0;
  iStack_30 = 0;
  if (*param_1 == 0) {
    uStack_28 = *(undefined8 *)(param_1 + 4);
    *param_1 = -1;
    iStack_20 = param_1[6];
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
LAB_01c20e44:
    piVar9 = (int *)uStack_28;
    if ((int *)uStack_28 == (int *)0x0) {
      uVar2 = uStack_28._4_4_;
    }
    else {
      sVar1 = (short)iStack_20;
      iVar3 = *(int *)(**(int **)(_UNK_01c21458 + 0x1c20e5c) + 0x10);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x014001f0();
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 0x14);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x014001f0(iVar3);
      }
      iVar4 = *piVar9;
      uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar3) {
            puVar5 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
            goto LAB_01c20ff4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar9,iVar3,0);
LAB_01c20ff4:
      uVar2 = (*(code *)*puVar5)(piVar9,(int)sVar1,puVar5[1]);
    }
    iVar3 = func_0x01489db8(uVar2,0);
    piVar9 = *(int **)(_UNK_01c2145c + 0x1c2102c);
    iVar4 = *piVar9;
    if (iVar3 == 0) {
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar2 = FUN_01c20954(uVar2);
      *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0xc) = uVar2;
      goto LAB_01c21074;
    }
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar4 = *piVar9;
    }
  }
  else {
    piVar9 = *(int **)(_UNK_01c2142c + 0x1c20da0);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar2 = FUN_01c205c8(&uStack_19,&uStack_1a);
    iVar3 = func_0x01489db8(uVar2,0);
    if (iVar3 == 0) {
      if (*(int *)(**(int **)(_UNK_01c21430 + 0x1c20ddc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar3 = func_0x0245032c(param_1 + 3,0);
      if (iVar3 == 0) {
        iVar3 = param_1[3];
        if (*(int *)(*piVar9 + 0x74) == 0) {
          func_0x01384ab4();
        }
        FUN_01c206fc(&uStack_48,uVar2,iVar3);
        iStack_30 = iStack_40;
        uStack_38 = uStack_48;
        if ((*(ushort *)(*(int *)(**(int **)(_UNK_01c21440 + 0x1c20f18) + 0x10) + 0xbd) & 1) == 0) {
          func_0x014001f0();
        }
        iStack_20 = iStack_30;
        uStack_28 = uStack_38;
        if ((*(byte *)(*(int *)(**(int **)(_UNK_01c21444 + 0x1c20f40) + 0x10) + 0xbd) & 1) == 0) {
          func_0x014001f0();
        }
        pcVar8 = (char *)(_UNK_01c21448 + 0x1c20f70);
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01c2144c + 0x1c20f84));
          *pcVar8 = '\x01';
        }
        piVar9 = (int *)uStack_28;
        if ((int *)uStack_28 != (int *)0x0) {
          iVar3 = *(int *)uStack_28;
          uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
          sVar1 = (short)iStack_20;
          if (uVar6 != 0) {
            piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar7[-1] == **(int **)(_UNK_01c21450 + 0x1c20fa8)) {
                puVar5 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
                goto LAB_01c2112c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined4 *)
                   func_0x014002dc((int *)uStack_28,**(int **)(_UNK_01c21450 + 0x1c20fa8),0);
LAB_01c2112c:
          iVar3 = (*(code *)*puVar5)(piVar9,(int)sVar1,puVar5[1]);
          if (iVar3 == 0) {
            uVar2 = **(undefined4 **)(_UNK_01c21454 + 0x1c21158);
            *param_1 = 0;
            param_1[6] = iStack_20;
            *(undefined8 *)(param_1 + 4) = uStack_28;
            func_0x01c3c010(param_1 + 1,&uStack_28,param_1,uVar2);
            return;
          }
        }
        goto LAB_01c20e44;
      }
    }
    iVar4 = *piVar9;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar4 = *piVar9;
    }
  }
  *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0xc) = 0;
LAB_01c21074:
  iVar3 = _UNK_01c21434;
  *param_1 = -2;
  if (*(char *)(iVar3 + 0x1c21088) == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c21438 + 0x1c2109c));
    *(char *)(iVar3 + 0x1c21088) = '\x01';
  }
  piVar9 = (int *)param_1[1];
  if (piVar9 != (int *)0x0) {
    iVar3 = *piVar9;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01c2143c + 0x1c210c0)) {
          puVar5 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xd0);
          goto LAB_01c21108;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01c2143c + 0x1c210c0),2);
LAB_01c21108:
    (*(code *)*puVar5)(piVar9,puVar5[1]);
  }
  return;
}



// ===== FAT.ConfHelper.<AsyncLoadActiveResDataManifest>d__22$$SetStateMachine RVA 0x1c11490 =====

void FUN_01c21490(int param_1,undefined4 param_2)

{
  (*(code *)&UNK_04f6eae8)(param_1 + 4,param_2,0);
  return;
}



// ===== FAT.ConfHelper.<AsyncLoadConfBytes>d__12$$MoveNext RVA 0x1c1149c =====

/* WARNING: Removing unreachable block (ram,0x01c218c4) */
/* WARNING: Removing unreachable block (ram,0x01c218d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c2149c(uint *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  pcVar6 = (char *)(_UNK_01c21bfc + 0x1c214b4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c21c00 + 0x1c214c8));
    func_0x01384978(*(undefined4 *)(_UNK_01c21c04 + 0x1c214d4));
    func_0x01384978(*(undefined4 *)(_UNK_01c21c08 + 0x1c214e0));
    func_0x01384978(*(undefined4 *)(_UNK_01c21c0c + 0x1c214ec));
    func_0x01384978(*(undefined4 *)(_UNK_01c21c10 + 0x1c214f8));
    func_0x01384978(*(undefined4 *)(_UNK_01c21c14 + 0x1c21504));
    func_0x01384978(*(undefined4 *)(_UNK_01c21c18 + 0x1c21510));
    *pcVar6 = '\x01';
  }
  uVar10 = *param_1;
  uStack_24 = 0;
  uStack_28 = 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
    uStack_28 = param_1[8];
    uStack_24 = param_1[9];
    *param_1 = 0xffffffff;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  else {
    uVar7 = param_1[5];
    if (*(int *)(**(int **)(_UNK_01c21c1c + 0x1c2153c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar1 = FUN_01c1fec0(uVar7);
    uVar7 = func_0x0245131c(uVar1,0);
    param_1[7] = uVar7;
    if (uVar7 == 0) {
      func_0x01384bf0();
    }
    uVar1 = func_0x0245132c(uVar7,0);
    func_0x0245133c(&uStack_30,uVar1,0);
    uStack_24 = uStack_2c;
    uStack_28 = uStack_30;
    iVar2 = func_0x0245134c(&uStack_28,0);
    if (iVar2 == 0) {
      puVar4 = *(undefined4 **)(_UNK_01c21c20 + 0x1c215cc);
      param_1[8] = uStack_28;
      param_1[9] = uStack_24;
      uVar1 = *puVar4;
      *param_1 = 0;
      func_0x02f50d80(param_1 + 1,&uStack_28,param_1,uVar1);
      return;
    }
  }
  func_0x01489bb8(&uStack_28,0);
  uVar7 = param_1[7];
  if (uVar7 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0245135c(uVar7,0);
  uVar7 = param_1[7];
  if (iVar2 == 1) {
    if (uVar7 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0245136c(uVar7,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0245137c(iVar2,0);
    if (iVar2 == 0) {
      uVar7 = param_1[6];
      if (uVar7 != 0) {
        iVar9 = **(int **)(_UNK_01c21c24 + 0x1c217d4);
        iVar2 = *(int *)(iVar9 + 0x1c);
        if (iVar2 == 0) {
          func_0x0140024c(iVar9);
          iVar2 = *(int *)(iVar9 + 0x1c);
        }
        iVar2 = *(int *)(iVar2 + 8);
        if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = func_0x014001f0();
        }
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
        if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = func_0x014001f0();
        }
        (**(code **)(uVar7 + 0xc))
                  (*(undefined4 *)(uVar7 + 0x20),**(undefined4 **)(iVar2 + 0x5c),
                   *(undefined4 *)(uVar7 + 0x14));
      }
    }
    else {
      uVar7 = param_1[7];
      if (uVar7 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0245136c(uVar7,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar1 = func_0x0245137c(iVar2,0);
      uVar1 = func_0x024437c8(uVar1,0);
      uVar7 = param_1[6];
      if (uVar7 != 0) {
        (**(code **)(uVar7 + 0xc))
                  (*(undefined4 *)(uVar7 + 0x20),uVar1,*(undefined4 *)(uVar7 + 0x14));
      }
    }
  }
  else {
    if (uVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = func_0x0245135c(uVar7,0);
    uVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01c21c28 + 0x1c2170c),&uStack_30);
    uVar7 = param_1[7];
    if (uVar7 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0245138c(uVar7,0);
    uVar1 = func_0x0244f690(**(undefined4 **)(_UNK_01c21c2c + 0x1c2174c),uVar1,uVar3,0);
    if (*(int *)(**(int **)(_UNK_01c21c30 + 0x1c21768) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar1,0);
    uVar7 = param_1[6];
    if (uVar7 != 0) {
      (**(code **)(uVar7 + 0xc))(*(undefined4 *)(uVar7 + 0x20),0,*(undefined4 *)(uVar7 + 0x14));
    }
  }
  if ((0x7fffffff < uVar10) && (piVar8 = (int *)param_1[7], piVar8 != (int *)0x0)) {
    iVar2 = *piVar8;
    uVar10 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar10 != 0) {
      piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01c21c34 + 0x1c21864)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
          goto LAB_01c218ac;
        }
        uVar10 = uVar10 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_01c21c34 + 0x1c21864),0);
LAB_01c218ac:
    (*(code *)*puVar4)(piVar8,puVar4[1]);
  }
  param_1[7] = 0;
  *param_1 = 0xfffffffe;
  func_0x01485678(param_1 + 1,0);
  return;
}



// ===== FAT.ConfHelper.<AsyncLoadConfBytes>d__12$$SetStateMachine RVA 0x1c11c58 =====

void FUN_01c21c58(int param_1,undefined4 param_2)

{
  (*(code *)&UNK_04738144)(param_1 + 4,param_2,0);
  return;
}



// ===== FAT.ConfHelper.<AsyncLoadText>d__21$$MoveNext RVA 0x1c11c64 =====

/* WARNING: Removing unreachable block (ram,0x01c22188) */
/* WARNING: Removing unreachable block (ram,0x01c22170) */
/* WARNING: Removing unreachable block (ram,0x01c2218c) */
/* WARNING: Removing unreachable block (ram,0x01c221e0) */
/* WARNING: Removing unreachable block (ram,0x01c221e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c21c64(uint *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  char *pcVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined8 uStack_40;
  uint uStack_38;
  undefined8 uStack_30;
  uint uStack_28;
  
  pcVar8 = (char *)(_UNK_01c22608 + 0x1c21c7c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c2260c + 0x1c21c90));
    func_0x01384978(*(undefined4 *)(_UNK_01c22610 + 0x1c21c9c));
    func_0x01384978(*(undefined4 *)(_UNK_01c22614 + 0x1c21ca8));
    func_0x01384978(*(undefined4 *)(_UNK_01c22618 + 0x1c21cb4));
    func_0x01384978(*(undefined4 *)(_UNK_01c2261c + 0x1c21cc0));
    func_0x01384978(*(undefined4 *)(_UNK_01c22620 + 0x1c21ccc));
    func_0x01384978(*(undefined4 *)(_UNK_01c22624 + 0x1c21cd8));
    func_0x01384978(*(undefined4 *)(_UNK_01c22628 + 0x1c21ce4));
    func_0x01384978(*(undefined4 *)(_UNK_01c2262c + 0x1c21cf0));
    func_0x01384978(*(undefined4 *)(_UNK_01c22630 + 0x1c21cfc));
    func_0x01384978(*(undefined4 *)(_UNK_01c22634 + 0x1c21d08));
    *pcVar8 = '\x01';
  }
  uVar11 = *param_1;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (uVar11 == 0) {
    uStack_30 = *(undefined8 *)(param_1 + 8);
    uVar11 = 0xffffffff;
    uStack_28 = param_1[10];
    *param_1 = 0xffffffff;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[10] = 0;
  }
  else {
    uVar9 = 0;
    iVar2 = func_0x01489db8(param_1[4],0);
    if (iVar2 != 0) goto LAB_01c221f4;
    if (*(int *)(**(int **)(_UNK_01c22638 + 0x1c21d5c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar9 = 0;
    iVar2 = func_0x0245032c(param_1 + 5,0);
    if (iVar2 != 0) goto LAB_01c221f4;
    iVar2 = func_0x0145b0d8(param_1[4],0);
    uVar9 = param_1[4];
    if (iVar2 != 0) {
      uVar9 = func_0x0245139c(uVar9,0);
      goto LAB_01c221f4;
    }
    if (*(int *)(**(int **)(_UNK_01c2263c + 0x1c22010) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar9 = FUN_01c1fec0(uVar9);
    param_1[6] = uVar9;
    uVar9 = func_0x0245131c(uVar9,0);
    param_1[7] = uVar9;
    if (uVar9 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0245132c(uVar9,0);
    func_0x024513bc(&uStack_50,uVar4,param_1[5],0);
    uStack_40 = CONCAT44(uStack_4c,uStack_50);
    uStack_38 = uStack_48;
    if ((*(ushort *)(*(int *)(**(int **)(_UNK_01c22640 + 0x1c2207c) + 0x10) + 0xbd) & 1) == 0) {
      func_0x014001f0();
    }
    uStack_28 = uStack_38;
    uStack_30 = uStack_40;
    if ((*(byte *)(*(int *)(**(int **)(_UNK_01c22644 + 0x1c220a4) + 0x10) + 0xbd) & 1) == 0) {
      func_0x014001f0();
    }
    pcVar8 = (char *)(_UNK_01c22648 + 0x1c220d4);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01c2264c + 0x1c220e8));
      *pcVar8 = '\x01';
    }
    piVar10 = (int *)uStack_30;
    if ((int *)uStack_30 != (int *)0x0) {
      iVar2 = *(int *)uStack_30;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      sVar1 = (short)uStack_28;
      if (uVar9 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_01c22650 + 0x1c2210c)) {
            puVar6 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_01c222c4;
          }
          uVar9 = uVar9 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined4 *)
               func_0x014002dc((int *)uStack_30,**(int **)(_UNK_01c22650 + 0x1c2210c),0);
LAB_01c222c4:
      iVar2 = (*(code *)*puVar6)(piVar10,(int)sVar1,puVar6[1]);
      if (iVar2 == 0) {
        uVar4 = **(undefined4 **)(_UNK_01c22654 + 0x1c222f0);
        *param_1 = 0;
        param_1[10] = uStack_28;
        *(undefined8 *)(param_1 + 8) = uStack_30;
        func_0x01c3c134(param_1 + 1,&uStack_30,param_1,uVar4);
        return;
      }
    }
  }
  piVar10 = (int *)uStack_30;
  if ((int *)uStack_30 != (int *)0x0) {
    sVar1 = (short)uStack_28;
    iVar2 = *(int *)(**(int **)(_UNK_01c22658 + 0x1c21df0) + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x014001f0();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x14);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x014001f0(iVar2);
    }
    iVar5 = *piVar10;
    uVar9 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar9 != 0) {
      piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar2) {
          puVar6 = (undefined4 *)(iVar5 + *piVar7 * 8 + 0xc0);
          goto LAB_01c21e74;
        }
        uVar9 = uVar9 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar10,iVar2,0);
LAB_01c21e74:
    (*(code *)*puVar6)(piVar10,(int)sVar1,puVar6[1]);
  }
  uVar9 = param_1[7];
  if (uVar9 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0245135c(uVar9,0);
  uVar9 = param_1[7];
  if (iVar2 == 1) {
    if (uVar9 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0245136c(uVar9,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar9 = func_0x024513ac(iVar2,0);
  }
  else {
    if (uVar9 == 0) {
      func_0x01384bf0();
    }
    uStack_50 = func_0x0245135c(uVar9,0);
    uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_01c2265c + 0x1c21f18),&uStack_50);
    uVar9 = param_1[7];
    if (uVar9 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0245138c(uVar9,0);
    uVar4 = func_0x02450228(**(undefined4 **)(_UNK_01c22660 + 0x1c21f5c),uVar4,uVar3,param_1[6],0);
    if (*(int *)(**(int **)(_UNK_01c22664 + 0x1c21f7c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar4,0);
    uVar9 = 0;
  }
  if ((0x7fffffff < uVar11) && (piVar10 = (int *)param_1[7], piVar10 != (int *)0x0)) {
    iVar2 = *piVar10;
    uVar11 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar11 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01c22668 + 0x1c21fc8)) {
          puVar6 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_01c22158;
        }
        uVar11 = uVar11 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_01c22668 + 0x1c21fc8),0);
LAB_01c22158:
    (*(code *)*puVar6)(piVar10,puVar6[1]);
  }
LAB_01c221f4:
  piVar10 = (int *)param_1[1];
  *param_1 = 0xfffffffe;
  if (piVar10 == (int *)0x0) {
    param_1[3] = uVar9;
  }
  else {
    iVar2 = *(int *)(**(int **)(_UNK_01c22688 + 0x1c22214) + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x014001f0();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 4);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x014001f0(iVar2);
    }
    iVar5 = *piVar10;
    uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar11 != 0) {
      piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar2) {
          puVar6 = (undefined4 *)(iVar5 + *piVar7 * 8 + 0xd0);
          goto LAB_01c2229c;
        }
        uVar11 = uVar11 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar10,iVar2,2);
LAB_01c2229c:
    (*(code *)*puVar6)(piVar10,uVar9,puVar6[1]);
  }
  return;
}



// ===== FAT.ConfHelper.<AsyncLoadText>d__21$$SetStateMachine RVA 0x1c12690 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01c22690(int param_1,undefined4 param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01c226e0 + 0x1c226a8);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c226e4 + 0x1c226bc));
    *pcVar1 = '\x01';
  }
  return CONCAT44(param_2,param_1 + 4);
}



// ===== FAT.ConfHelper.<AsyncRegisterConf>d__11$$MoveNext RVA 0x1c126ec =====

/* WARNING: Removing unreachable block (ram,0x01c22b14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c226ec(uint *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  undefined8 uVar11;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  pcVar7 = (char *)(_UNK_01c22ed0 + 0x1c22704);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c22ed4 + 0x1c22718));
    func_0x01384978(*(undefined4 *)(_UNK_01c22ed8 + 0x1c22724));
    func_0x01384978(*(undefined4 *)(_UNK_01c22edc + 0x1c22730));
    func_0x01384978(*(undefined4 *)(_UNK_01c22ee0 + 0x1c2273c));
    func_0x01384978(*(undefined4 *)(_UNK_01c22ee4 + 0x1c22748));
    func_0x01384978(*(undefined4 *)(_UNK_01c22ee8 + 0x1c22754));
    func_0x01384978(*(undefined4 *)(_UNK_01c22eec + 0x1c22760));
    func_0x01384978(*(undefined4 *)(_UNK_01c22ef0 + 0x1c2276c));
    func_0x01384978(*(undefined4 *)(_UNK_01c22ef4 + 0x1c22778));
    *pcVar7 = '\x01';
  }
  uVar10 = *param_1;
  uStack_2c = 0;
  uStack_30 = 0;
  if (uVar10 == 0) {
    uVar10 = 0xffffffff;
    uStack_30 = param_1[8];
    uStack_2c = param_1[9];
    *param_1 = 0xffffffff;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  else {
    uVar8 = param_1[5];
    if (*(int *)(**(int **)(_UNK_01c22ef8 + 0x1c227a4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    FUN_01c1fec0(uVar8);
    uVar1 = FUN_01c1fec0(param_1[5]);
    uVar8 = func_0x0245131c(uVar1,0);
    param_1[7] = uVar8;
    if (uVar8 == 0) {
      func_0x01384bf0();
    }
    uVar1 = func_0x0245132c(uVar8,0);
    func_0x0245133c(&uStack_38,uVar1,0);
    uStack_2c = uStack_34;
    uStack_30 = uStack_38;
    iVar2 = func_0x0245134c(&uStack_30,0);
    if (iVar2 == 0) {
      puVar5 = *(undefined4 **)(_UNK_01c22efc + 0x1c2283c);
      param_1[8] = uStack_30;
      param_1[9] = uStack_2c;
      uVar1 = *puVar5;
      *param_1 = 0;
      func_0x02f51024(param_1 + 1,&uStack_30,param_1,uVar1);
      return;
    }
  }
  func_0x01489bb8(&uStack_30,0);
  uVar8 = param_1[7];
  if (uVar8 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0245135c(uVar8,0);
  uVar8 = param_1[7];
  if (iVar2 == 1) {
    if (uVar8 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0245136c(uVar8,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar11 = func_0x0245137c(iVar2,0);
    iVar2 = (int)((ulonglong)uVar11 >> 0x20);
    iVar4 = (int)uVar11;
    if (iVar4 != 0) {
      iVar2 = *(int *)(iVar4 + 0xc);
    }
    if (iVar4 != 0 && iVar2 != 0) {
      iVar4 = func_0x024437c8(iVar4,0);
      if (iVar4 == 0) {
        uVar1 = func_0x0244fb1c(**(undefined4 **)(_UNK_01c22f08 + 0x1c22b64),param_1[5],0);
        if (*(int *)(**(int **)(_UNK_01c22f0c + 0x1c22b80) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2874(uVar1,0);
        uVar8 = param_1[6];
        iVar2 = 0xb;
        if (uVar8 != 0) {
          (**(code **)(uVar8 + 0xc))(*(undefined4 *)(uVar8 + 0x20),0,*(undefined4 *)(uVar8 + 0x14));
        }
      }
      else {
        uVar8 = param_1[6];
        iVar2 = 0x12;
        if (uVar8 != 0) {
          uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01c22f10 + 0x1c22ac0));
          func_0x024513cc(uVar1,iVar4,0);
          (**(code **)(uVar8 + 0xc))
                    (*(undefined4 *)(uVar8 + 0x20),uVar1,*(undefined4 *)(uVar8 + 0x14));
        }
      }
    }
    else {
      uVar1 = func_0x0244fb1c(**(undefined4 **)(_UNK_01c22f00 + 0x1c22900),param_1[5],0);
      if (*(int *)(**(int **)(_UNK_01c22f04 + 0x1c2291c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar1,0);
      uVar8 = param_1[6];
      iVar2 = 0xb;
      if (uVar8 != 0) {
        (**(code **)(uVar8 + 0xc))(*(undefined4 *)(uVar8 + 0x20),0,*(undefined4 *)(uVar8 + 0x14));
      }
    }
  }
  else {
    if (uVar8 == 0) {
      func_0x01384bf0();
    }
    uStack_38 = func_0x0245135c(uVar8,0);
    uVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01c22f14 + 0x1c2298c),&uStack_38);
    uVar8 = param_1[7];
    if (uVar8 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0245138c(uVar8,0);
    uVar1 = func_0x0244f690(**(undefined4 **)(_UNK_01c22f18 + 0x1c229cc),uVar1,uVar3,0);
    if (*(int *)(**(int **)(_UNK_01c22f1c + 0x1c229e8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar1,0);
    uVar8 = param_1[6];
    iVar2 = 0x12;
    if (uVar8 != 0) {
      (**(code **)(uVar8 + 0xc))(*(undefined4 *)(uVar8 + 0x20),0,*(undefined4 *)(uVar8 + 0x14));
    }
  }
  if ((0x7fffffff < uVar10) && (piVar9 = (int *)param_1[7], piVar9 != (int *)0x0)) {
    iVar4 = *piVar9;
    uVar10 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar10 != 0) {
      piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01c22f20 + 0x1c22a54)) {
          puVar5 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xc0);
          goto LAB_01c22afc;
        }
        uVar10 = uVar10 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_01c22f20 + 0x1c22a54),0);
LAB_01c22afc:
    (*(code *)*puVar5)(piVar9,puVar5[1]);
  }
  if (iVar2 != 0x12) {
    if (iVar2 == 0xb) goto LAB_01c22b3c;
    if (iVar2 != 0) {
      return;
    }
  }
  param_1[7] = 0;
LAB_01c22b3c:
  *param_1 = 0xfffffffe;
  func_0x01485678(param_1 + 1,0);
  return;
}



// ===== FAT.ConfHelper.<AsyncRegisterConf>d__11$$SetStateMachine RVA 0x1c12f44 =====

void FUN_01c22f44(int param_1,undefined4 param_2)

{
  (*(code *)&UNK_04738144)(param_1 + 4,param_2,0);
  return;
}



// ===== FAT.ConfHelper$$AsyncLoadConf<object> RVA 0x2f58728 =====

void FUN_02f68728(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(int *)(param_3 + 0x1c) == 0) {
    func_0x0140024c(param_3);
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_40 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  func_0x04738100(&uStack_50,0);
  puVar1 = (undefined4 *)((uint)&uStack_40 | 4);
  *puVar1 = uStack_50;
  puVar1[1] = uStack_4c;
  puVar1[2] = uStack_48;
  puVar1[3] = uStack_44;
  uStack_40 = 0xffffffff;
  uStack_2c = param_1;
  uStack_28 = param_2;
  func_0x02f53a74(*(int *)(param_3 + 0x1c),&uStack_40,*(undefined4 *)(*(int *)(param_3 + 0x1c) + 8))
  ;
  return;
}



// ===== FAT.ConfHelper$$AsyncLoadConf<__Il2CppFullySharedGenericType> RVA 0x2f587bc =====

void FUN_02f687bc(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(int *)(param_3 + 0x1c) == 0) {
    func_0x0140024c(param_3);
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_40 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  func_0x04738100(&uStack_50,0);
  puVar1 = (undefined4 *)((uint)&uStack_40 | 4);
  iVar2 = *(int *)(param_3 + 0x1c);
  *puVar1 = uStack_50;
  puVar1[1] = uStack_4c;
  puVar1[2] = uStack_48;
  puVar1[3] = uStack_44;
  uStack_40 = 0xffffffff;
  uStack_2c = param_1;
  uStack_28 = param_2;
  (*(code *)**(undefined4 **)(iVar2 + 8))(puVar1,&uStack_40);
  return;
}



// ===== FAT.ConfHelper.<AsyncLoadConf>d__13<object>$$MoveNext RVA 0x31f1fd0 =====

/* WARNING: Removing unreachable block (ram,0x032024b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03201fd0(uint *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  pcVar6 = (char *)(_UNK_0320280c + 0x3201fec);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_03202810 + 0x3202000));
    func_0x01384978(*(undefined4 *)(_UNK_03202814 + 0x320200c));
    func_0x01384978(*(undefined4 *)(_UNK_03202818 + 0x3202018));
    func_0x01384978(*(undefined4 *)(_UNK_0320281c + 0x3202024));
    func_0x01384978(*(undefined4 *)(_UNK_03202820 + 0x3202030));
    func_0x01384978(*(undefined4 *)(_UNK_03202824 + 0x320203c));
    func_0x01384978(*(undefined4 *)(_UNK_03202828 + 0x3202048));
    *pcVar6 = '\x01';
  }
  uVar9 = *param_1;
  uStack_2c = 0;
  uStack_30 = 0;
  if (uVar9 == 0) {
    uVar9 = 0xffffffff;
    uStack_30 = param_1[8];
    uStack_2c = param_1[9];
    *param_1 = 0xffffffff;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  else {
    uVar7 = param_1[5];
    if (*(int *)(**(int **)(_UNK_0320282c + 0x3202074) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar1 = FUN_01c1fec0(uVar7,0);
    uVar7 = func_0x0245131c(uVar1,0);
    param_1[7] = uVar7;
    if (uVar7 == 0) {
      func_0x01384bf0();
    }
    uVar1 = func_0x0245132c(uVar7,0);
    func_0x04f7313c(&uStack_38,uVar1,0);
    uStack_2c = uStack_34;
    uStack_30 = uStack_38;
    iVar2 = func_0x04f73a64(&uStack_30,0);
    if (iVar2 == 0) {
      param_1[9] = uStack_2c;
      param_1[8] = uStack_30;
      iVar2 = *(int *)(param_2 + 0x10);
      *param_1 = 0;
      if ((*(byte *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0();
      }
      func_0x02f505f0(param_1 + 1,&uStack_30,param_1,*(undefined4 *)(*(int *)(iVar2 + 0x60) + 4));
      return;
    }
  }
  func_0x04f73a88(&uStack_30,0);
  uVar7 = param_1[7];
  if (uVar7 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0245135c(uVar7,0);
  if (iVar2 == 1) {
    uVar7 = param_1[7];
    if (uVar7 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0245136c(uVar7,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar10 = func_0x0245137c(iVar2,0);
    iVar2 = (int)((ulonglong)uVar10 >> 0x20);
    iVar3 = (int)uVar10;
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 0xc);
    }
    if (iVar3 != 0 && iVar2 != 0) {
      iVar2 = func_0x024437c8(iVar3,0);
      if (iVar2 == 0) {
        uVar1 = func_0x046634e0(**(undefined4 **)(_UNK_03202838 + 0x320235c),param_1[5],0);
        if (*(int *)(**(int **)(_UNK_0320283c + 0x3202378) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2874(uVar1,0);
        uVar7 = param_1[6];
        iVar2 = 0xb;
        if (uVar7 != 0) {
          if ((*(ushort *)(*(int *)(param_2 + 0x10) + 0xbd) & 1) == 0) {
            func_0x014001f0();
          }
          (**(code **)(uVar7 + 0xc))(*(undefined4 *)(uVar7 + 0x20),0,*(undefined4 *)(uVar7 + 0x14));
        }
      }
      else {
        iVar3 = *(int *)(param_2 + 0x10);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x014001f0();
        }
        piVar8 = (int *)func_0x02d921e0(*(undefined4 *)(*(int *)(iVar3 + 0x60) + 0x18));
        uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_03202840 + 0x32022dc));
        func_0x044c2a88(uVar1,iVar2,0);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar8;
        uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar7 != 0) {
          piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_03202844 + 0x320230c)) {
              puVar4 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
              goto LAB_032023e4;
            }
            uVar7 = uVar7 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_03202844 + 0x320230c),0);
LAB_032023e4:
        (*(code *)*puVar4)(piVar8,uVar1,puVar4[1]);
        uVar7 = param_1[6];
        iVar2 = 0x12;
        if (uVar7 != 0) {
          if ((*(ushort *)(*(int *)(param_2 + 0x10) + 0xbd) & 1) == 0) {
            func_0x014001f0();
          }
          (**(code **)(uVar7 + 0xc))
                    (*(undefined4 *)(uVar7 + 0x20),piVar8,*(undefined4 *)(uVar7 + 0x14));
        }
      }
    }
    else {
      uVar1 = func_0x046634e0(**(undefined4 **)(_UNK_03202830 + 0x32021dc),param_1[5],0);
      if (*(int *)(**(int **)(_UNK_03202834 + 0x32021f8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar1,0);
      uVar7 = param_1[6];
      iVar2 = 0xb;
      if (uVar7 != 0) {
        if ((*(ushort *)(*(int *)(param_2 + 0x10) + 0xbd) & 1) == 0) {
          func_0x014001f0();
        }
        (**(code **)(uVar7 + 0xc))(*(undefined4 *)(uVar7 + 0x20),0,*(undefined4 *)(uVar7 + 0x14));
      }
    }
  }
  else {
    uVar7 = param_1[6];
    iVar2 = 0x12;
    if (uVar7 != 0) {
      if ((*(ushort *)(*(int *)(param_2 + 0x10) + 0xbd) & 1) == 0) {
        func_0x014001f0();
      }
      (**(code **)(uVar7 + 0xc))(*(undefined4 *)(uVar7 + 0x20),0,*(undefined4 *)(uVar7 + 0x14));
    }
  }
  if ((0x7fffffff < uVar9) && (piVar8 = (int *)param_1[7], piVar8 != (int *)0x0)) {
    iVar3 = *piVar8;
    uVar9 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar9 != 0) {
      piVar5 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_03202848 + 0x3202458)) {
          puVar4 = (undefined4 *)(iVar3 + *piVar5 * 8 + 0xc0);
          goto LAB_032024a0;
        }
        uVar9 = uVar9 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_03202848 + 0x3202458),0);
LAB_032024a0:
    (*(code *)*puVar4)(piVar8,puVar4[1]);
  }
  if (iVar2 != 0x12) {
    if (iVar2 == 0xb) goto LAB_032024e0;
    if (iVar2 != 0) {
      return;
    }
  }
  param_1[7] = 0;
LAB_032024e0:
  *param_1 = 0xfffffffe;
  func_0x0473821c(param_1 + 1,0);
  return;
}



// ===== FAT.ConfHelper.<AsyncLoadConf>d__13<object>$$SetStateMachine RVA 0x31f286c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0320286c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) goto LAB_047381bc;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = func_0x03409d30(*(undefined4 *)(_UNK_04738210 + 0x4738174));
    uVar1 = func_0x04874ecc(uVar1,0);
    func_0x03409d30(*(undefined4 *)(_UNK_04738214 + 0x473818c));
    uVar2 = func_0x03409cd0();
    func_0x04824950(uVar2,uVar1,0);
    uVar1 = func_0x03409d30(*(undefined4 *)(_UNK_04738218 + 0x47381ac));
    do {
      func_0x03409d8c(uVar2,uVar1);
      func_0x03409d9c();
LAB_047381bc:
      func_0x03409d30(*(undefined4 *)(_UNK_04738204 + 0x47381c8));
      uVar2 = func_0x03409cd0();
      uVar1 = func_0x03409d30(*(undefined4 *)(_UNK_04738208 + 0x47381dc));
      func_0x04785e24(uVar2,uVar1,0);
      uVar1 = func_0x03409d30(*(undefined4 *)(_UNK_0473820c + 0x47381f8));
    } while( true );
  }
  *(int *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.ConfHelper.<AsyncLoadConf>d__13<__Il2CppFullySharedGenericType>$$MoveNext RVA 0x31f2878 =====

/* WARNING: Removing unreachable block (ram,0x032032ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03202878(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  ushort uVar10;
  int *piVar11;
  int iVar12;
  undefined1 *puVar13;
  char *pcVar14;
  code *pcVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  undefined1 uVar19;
  undefined8 uVar20;
  int aiStack_60 [2];
  int iStack_58;
  undefined1 *puStack_54;
  int *piStack_50;
  uint uStack_4c;
  int iStack_48;
  int *piStack_44;
  int *piStack_40;
  uint uStack_3c;
  int *piStack_38;
  uint uStack_34;
  int iStack_2c;
  
  pcVar14 = (char *)(iRam0320359c + 0x320289c);
  iStack_2c = **(int **)(iRam032035a0 + 0x32028a0);
  if (*pcVar14 == '\0') {
    func_0x01384978(*(undefined4 *)(iRam032035a4 + 0x32028bc));
    func_0x01384978(*(undefined4 *)(iRam032035a8 + 0x32028c8));
    func_0x01384978(*(undefined4 *)(iRam032035ac + 0x32028d4));
    func_0x01384978(*(undefined4 *)(iRam032035b0 + 0x32028e0));
    func_0x01384978(*(undefined4 *)(iRam032035b4 + 0x32028ec));
    func_0x01384978(*(undefined4 *)(iRam032035b8 + 0x32028f8));
    *pcVar14 = '\x01';
  }
  piVar16 = (int *)(param_2 + 0x10);
  iVar1 = *piVar16;
  uVar10 = *(ushort *)(iVar1 + 0xbd);
  iVar2 = iVar1;
  piStack_44 = piVar16;
  if ((uVar10 & 1) == 0) {
    iVar2 = func_0x014001f0();
    iVar1 = *piVar16;
    uVar10 = *(ushort *)(iVar1 + 0xbd);
  }
  iStack_48 = *(int *)(*(int *)(*(int *)(iVar2 + 0x60) + 0x10) + 0x84);
  if ((uVar10 & 1) == 0) {
    iVar1 = func_0x014001f0();
  }
  iVar2 = *(int *)(*(int *)(iVar1 + 0x60) + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x014001f0();
  }
  iVar1 = iStack_48;
  iVar12 = (int)&iStack_58 - (*(int *)(iVar2 + 0x84) + 0xfU & 0xfffffff8);
  uVar17 = iStack_48 + 7U & 0xfffffff8;
  piStack_50 = (int *)(iVar12 - uVar17);
  iVar2 = (int)piStack_50 - uVar17;
  uStack_34 = 0;
  piStack_38 = (int *)0x0;
  func_0x0145894c(iVar2,iStack_48);
  pcVar3 = (code *)(iVar2 - uVar17);
  puStack_54 = pcVar3;
  func_0x0145894c(pcVar3,iVar1);
  uStack_4c = *param_1;
  if (uStack_4c == 0) {
    piStack_38 = (int *)param_1[8];
    uStack_34 = param_1[9];
    uStack_4c = 0xffffffff;
    *param_1 = 0xffffffff;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  else {
    uVar17 = param_1[5];
    if (*(int *)(**(int **)(iRam032035bc + 0x32029dc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar4 = FUN_01c1fec0(uVar17,0);
    pcVar5 = (code *)func_0x0245131c(uVar4,0);
    param_1[7] = (uint)pcVar5;
    if (pcVar5 == (code *)0x0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0245132c(pcVar5,0);
    func_0x04f7313c(&piStack_40,uVar4,0);
    uStack_34 = uStack_3c;
    piStack_38 = piStack_40;
    iVar1 = func_0x04f73a64(&piStack_38,0);
    if (iVar1 == 0) {
      param_1[8] = (uint)piStack_38;
      param_1[9] = uStack_34;
      iVar1 = *piStack_44;
      *param_1 = 0;
      uVar10 = *(ushort *)(iVar1 + 0xbd);
      iVar2 = iVar1;
      if ((uVar10 & 1) == 0) {
        iVar2 = func_0x014001f0();
        iVar1 = *piStack_44;
        uVar10 = *(ushort *)(iVar1 + 0xbd);
      }
      pcVar15 = (code *)**(undefined4 **)(*(int *)(iVar2 + 0x60) + 4);
      if ((uVar10 & 1) == 0) {
        iVar1 = func_0x014001f0();
      }
      (*pcVar15)(param_1 + 1,&piStack_38,param_1,*(undefined4 *)(*(int *)(iVar1 + 0x60) + 4));
      goto LAB_032031b4;
    }
  }
  func_0x04f73a88(&piStack_38,0);
  pcVar5 = (code *)param_1[7];
  if (pcVar5 == (code *)0x0) {
    func_0x01384bf0();
  }
  iVar18 = func_0x0245135c(pcVar5,0);
  iVar1 = iStack_48;
  puVar13 = puStack_54;
  if (iVar18 == 1) {
    uVar17 = param_1[7];
    if (uVar17 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (code *)func_0x0245136c(uVar17,0);
    if (pcVar5 == (code *)0x0) {
      func_0x01384bf0();
    }
    uVar20 = func_0x0245137c(pcVar5,0);
    iVar1 = (int)((ulonglong)uVar20 >> 0x20);
    iVar18 = (int)uVar20;
    if (iVar18 != 0) {
      iVar1 = *(int *)(iVar18 + 0xc);
    }
    if (iVar18 != 0 && iVar1 != 0) {
      iVar1 = func_0x024437c8(iVar18,0);
      if (iVar1 == 0) {
        uVar4 = func_0x046634e0(**(undefined4 **)(iRam032035cc + 0x3202df0),param_1[5],0);
        if (*(int *)(**(int **)(iRam032035d0 + 0x3202e0c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar12 = 0;
        func_0x028c2874(uVar4,0);
        iVar2 = iStack_48;
        puVar13 = puStack_54;
        uVar17 = param_1[6];
        iVar18 = 0xb;
        if (uVar17 != 0) {
          func_0x0145894c(puStack_54,iStack_48);
          func_0x01458934(piStack_50,puVar13,iVar2);
          iVar1 = *piStack_44;
          uVar10 = *(ushort *)(iVar1 + 0xbd);
          iVar2 = iVar1;
          if ((uVar10 & 1) == 0) {
            iVar2 = func_0x014001f0();
            iVar1 = *piStack_44;
            uVar10 = *(ushort *)(iVar1 + 0xbd);
          }
          uVar4 = **(undefined4 **)(*(int *)(iVar2 + 0x60) + 0x14);
          iVar2 = iVar1;
          if ((uVar10 & 1) == 0) {
            iVar2 = func_0x014001f0();
            iVar1 = *piStack_44;
            uVar10 = *(ushort *)(iVar1 + 0xbd);
          }
          pcVar5 = *(code **)(*(int *)(iVar2 + 0x60) + 0x14);
          if ((uVar10 & 1) == 0) {
            iVar1 = func_0x014001f0();
          }
          pcVar15 = *(code **)(pcVar5 + 8);
          piStack_40 = piStack_50;
          if (-1 < *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 0x10) + 0x14)) {
            piStack_40 = (int *)*piStack_50;
          }
          *(int **)(pcVar3 + -8) = piStack_40;
          (*pcVar15)(uVar4,pcVar5,uVar17,&piStack_40);
        }
      }
      else {
        iVar6 = *piStack_44;
        uVar10 = *(ushort *)(iVar6 + 0xbd);
        iVar18 = iVar6;
        if ((uVar10 & 1) == 0) {
          iVar18 = func_0x014001f0();
          iVar6 = *piStack_44;
          uVar10 = *(ushort *)(iVar6 + 0xbd);
        }
        uVar4 = **(undefined4 **)(*(int *)(iVar18 + 0x60) + 0x18);
        if ((uVar10 & 1) == 0) {
          iVar6 = func_0x014001f0();
        }
        iVar18 = *(int *)(*(int *)(iVar6 + 0x60) + 0x18);
        piStack_40 = piStack_50;
        pcVar5 = *(code **)(iVar18 + 8);
        *(int **)(pcVar3 + -8) = piStack_50;
        (*pcVar5)(uVar4,iVar18,0,&piStack_40);
        func_0x01458934(iVar2,piStack_50,iStack_48);
        piVar16 = (int *)func_0x01384be4(**(undefined4 **)(iRam032035d4 + 0x3202ef4));
        func_0x044c2a88(piVar16,iVar1,0);
        iVar1 = *piStack_44;
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0();
        }
        pcVar5 = *(code **)(*(int *)(iVar1 + 0x60) + 0x10);
        if ((*(ushort *)(pcVar5 + 0xbd) & 1) == 0) {
          pcVar5 = (code *)func_0x014001f0(pcVar5);
        }
        iVar1 = *piStack_44;
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0();
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x60) + 0x1c);
        piStack_40 = piVar16;
        *(int ***)(pcVar3 + -8) = &piStack_40;
        *(int **)(pcVar3 + -4) = piVar16;
        func_0x01385938(pcVar5,uVar4,iVar12,iVar2);
        uVar17 = param_1[6];
        iVar18 = 0x12;
        iVar12 = 0;
        if (uVar17 != 0) {
          func_0x01458934(piStack_50,iVar2,iStack_48);
          iVar1 = *piStack_44;
          uVar10 = *(ushort *)(iVar1 + 0xbd);
          iVar2 = iVar1;
          if ((uVar10 & 1) == 0) {
            iVar2 = func_0x014001f0();
            iVar1 = *piStack_44;
            uVar10 = *(ushort *)(iVar1 + 0xbd);
          }
          uVar4 = **(undefined4 **)(*(int *)(iVar2 + 0x60) + 0x14);
          iVar2 = iVar1;
          if ((uVar10 & 1) == 0) {
            iVar2 = func_0x014001f0();
            iVar1 = *piStack_44;
            uVar10 = *(ushort *)(iVar1 + 0xbd);
          }
          iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 0x14);
          if ((uVar10 & 1) == 0) {
            iVar1 = func_0x014001f0();
          }
          pcVar5 = *(code **)(iVar2 + 8);
          piStack_40 = piStack_50;
          if (-1 < *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 0x10) + 0x14)) {
            piStack_40 = (int *)*piStack_50;
          }
          *(int **)(pcVar3 + -8) = piStack_40;
          (*pcVar5)(uVar4,iVar2,uVar17,&piStack_40);
        }
      }
    }
    else {
      uVar4 = func_0x046634e0(**(undefined4 **)(iRam032035c4 + 0x3202b48),param_1[5],0);
      if (*(int *)(**(int **)(iRam032035c8 + 0x3202b64) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar12 = 0;
      func_0x028c2874(uVar4,0);
      iVar2 = iStack_48;
      puVar13 = puStack_54;
      uVar17 = param_1[6];
      iVar18 = 0xb;
      if (uVar17 != 0) {
        func_0x0145894c(puStack_54,iStack_48);
        func_0x01458934(piStack_50,puVar13,iVar2);
        iVar1 = *piStack_44;
        uVar10 = *(ushort *)(iVar1 + 0xbd);
        iVar2 = iVar1;
        if ((uVar10 & 1) == 0) {
          iVar2 = func_0x014001f0();
          iVar1 = *piStack_44;
          uVar10 = *(ushort *)(iVar1 + 0xbd);
        }
        uVar4 = **(undefined4 **)(*(int *)(iVar2 + 0x60) + 0x14);
        iVar2 = iVar1;
        if ((uVar10 & 1) == 0) {
          iVar2 = func_0x014001f0();
          iVar1 = *piStack_44;
          uVar10 = *(ushort *)(iVar1 + 0xbd);
        }
        pcVar5 = *(code **)(*(int *)(iVar2 + 0x60) + 0x14);
        if ((uVar10 & 1) == 0) {
          iVar1 = func_0x014001f0();
        }
        pcVar15 = *(code **)(pcVar5 + 8);
        piStack_40 = piStack_50;
        if (-1 < *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 0x10) + 0x14)) {
          piStack_40 = (int *)*piStack_50;
        }
        *(int **)(pcVar3 + -8) = piStack_40;
        (*pcVar15)(uVar4,pcVar5,uVar17,&piStack_40);
      }
    }
  }
  else {
    uVar17 = param_1[6];
    iVar18 = 0x12;
    iVar12 = 0;
    if (uVar17 != 0) {
      func_0x0145894c(puStack_54,iStack_48);
      func_0x01458934(piStack_50,puVar13,iVar1);
      iVar1 = *piStack_44;
      uVar10 = *(ushort *)(iVar1 + 0xbd);
      iVar2 = iVar1;
      if ((uVar10 & 1) == 0) {
        iVar2 = func_0x014001f0();
        iVar1 = *piStack_44;
        uVar10 = *(ushort *)(iVar1 + 0xbd);
      }
      uVar4 = **(undefined4 **)(*(int *)(iVar2 + 0x60) + 0x14);
      iVar2 = iVar1;
      if ((uVar10 & 1) == 0) {
        iVar2 = func_0x014001f0();
        iVar1 = *piStack_44;
        uVar10 = *(ushort *)(iVar1 + 0xbd);
      }
      pcVar5 = *(code **)(*(int *)(iVar2 + 0x60) + 0x14);
      if ((uVar10 & 1) == 0) {
        iVar1 = func_0x014001f0();
      }
      pcVar15 = *(code **)(pcVar5 + 8);
      piStack_40 = piStack_50;
      if (-1 < *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 0x10) + 0x14)) {
        piStack_40 = (int *)*piStack_50;
      }
      *(int **)(pcVar3 + -8) = piStack_40;
      (*pcVar15)(uVar4,pcVar5,uVar17,&piStack_40);
    }
  }
LAB_032030f0:
  if ((0x7fffffff < uStack_4c) && (piVar16 = (int *)param_1[7], piVar16 != (int *)0x0)) {
    iVar2 = *piVar16;
    uVar17 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar17 != 0) {
      piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        pcVar5 = (code *)piVar11[-1];
        if (pcVar5 == (code *)**(int **)(iRam032035d8 + 0x3203118)) {
          puVar7 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
          goto LAB_03203160;
        }
        uVar17 = uVar17 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar17 != 0);
    }
    puVar7 = (undefined4 *)func_0x014002dc(piVar16,(code *)**(int **)(iRam032035d8 + 0x3203118),0);
LAB_03203160:
    (*(code *)*puVar7)(piVar16,puVar7[1]);
  }
  if (iVar12 != 0) {
    func_0x01384bec(iVar12);
  }
  if (iVar18 != 0x12) {
    if (iVar18 == 0xb) goto LAB_032031a0;
    if (iVar18 != 0) goto LAB_032031b4;
  }
  param_1[7] = 0;
LAB_032031a0:
  *param_1 = 0xfffffffe;
  func_0x0473821c(param_1 + 1,0);
  param_1 = param_1 + 1;
LAB_032031b4:
  do {
    if (**(int **)(iRam032035c0 + 0x32031c0) == iStack_2c) {
      return;
    }
    uVar20 = func_0x0145b028();
    iVar2 = (int)((ulonglong)uVar20 >> 0x20);
    uVar4 = (undefined4)uVar20;
    if (iVar2 == 1) {
      piVar16 = (int *)func_0x0145b008(uVar4);
      iVar12 = *piVar16;
      iVar18 = 0;
      func_0x0145b0f8();
      goto LAB_032030f0;
    }
    puVar13 = (undefined1 *)0x0;
    if ((0x7fffffff < uStack_4c) && (piVar16 = (int *)param_1[7], piVar16 != (int *)0x0)) {
      iVar1 = *piVar16;
      uVar17 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar17 != 0) {
        piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          pcVar5 = (code *)piVar11[-1];
          if (pcVar5 == (code *)**(int **)(iRam032035dc + 0x320328c)) {
            puVar7 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
            goto LAB_032032d4;
          }
          uVar17 = uVar17 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar17 != 0);
      }
      puVar7 = (undefined4 *)func_0x014002dc(piVar16,(code *)**(int **)(iRam032035dc + 0x320328c),0)
      ;
LAB_032032d4:
      (*(code *)*puVar7)(piVar16,puVar7[1]);
    }
    if (iVar2 == 1) break;
    uVar19 = iVar2 == 1;
    if (!(bool)uVar19) goto LAB_03203590;
    puVar7 = (undefined4 *)func_0x0145b008(uVar4);
    uVar4 = func_0x01384988(*(undefined4 *)(iRam032035f0 + 0x3203530));
    iVar2 = func_0x01385078(uVar4,*(undefined4 *)*puVar7);
    uVar19 = iVar2 == 0;
    if ((bool)uVar19) {
      puVar9 = (undefined4 *)func_0x0145b108(4);
      iVar2 = iRam032035f4;
      *puVar9 = *puVar7;
      uVar4 = func_0x0145b118(puVar9,iVar2 + 0x3203584,0);
      goto LAB_03203588;
    }
    uVar4 = *puVar7;
    func_0x0145b0f8();
    *param_1 = 0xfffffffe;
    func_0x047383b0(param_1 + 1,uVar4,0);
    param_1 = param_1 + 1;
  } while( true );
  puVar7 = (undefined4 *)func_0x0145b008(uVar4);
  uVar4 = func_0x01384988(*(undefined4 *)(iRam032035e0 + 0x3203314));
  iVar2 = func_0x01385078(uVar4,*(undefined4 *)*puVar7);
  uVar19 = iVar2 == 0;
  if ((bool)uVar19) {
    puVar9 = (undefined4 *)func_0x0145b108(4);
    iVar2 = iRam032035f8;
    *puVar9 = *puVar7;
    uVar4 = func_0x0145b118(puVar9,iVar2 + 0x32034d0,0);
LAB_03203588:
    uVar20 = CONCAT44(puVar7,uVar4);
    func_0x0145b0f8();
LAB_03203590:
    pcVar15 = (code *)((ulonglong)uVar20 >> 0x20);
    func_0x01459844((int)uVar20);
    uVar20 = func_0x02457a84();
    iVar2 = (int)((ulonglong)uVar20 >> 0x20);
    if ((bool)uVar19 && (int)uVar20 == 0x7500) {
      pcVar15 = pcVar5 + -0x3c000000;
      puVar13 = &stack0xfafffcc1;
      pcVar3 = pcVar5 + -0x300000;
    }
    piVar16 = (int *)((int)uVar20 + 8);
    *(undefined4 *)(pcVar3 + -4) = 0x320359c;
    *(undefined1 **)(pcVar3 + -8) = &stack0xfffffff8;
    *(code **)(pcVar3 + -0xc) = pcVar15;
    *(undefined1 **)(pcVar3 + -0x10) = puVar13;
    if (iVar2 == 0) goto LAB_047381bc;
    if (*piVar16 != 0) {
      uVar4 = func_0x03409d30(*(undefined4 *)(_UNK_04738210 + 0x4738174));
      uVar4 = func_0x04874ecc(uVar4,0);
      func_0x03409d30(*(undefined4 *)(_UNK_04738214 + 0x473818c));
      uVar8 = func_0x03409cd0();
      func_0x04824950(uVar8,uVar4,0);
      uVar4 = func_0x03409d30(*(undefined4 *)(_UNK_04738218 + 0x47381ac));
      do {
        func_0x03409d8c(uVar8,uVar4);
        func_0x03409d9c();
LAB_047381bc:
        func_0x03409d30(*(undefined4 *)(_UNK_04738204 + 0x47381c8));
        uVar8 = func_0x03409cd0();
        uVar4 = func_0x03409d30(*(undefined4 *)(_UNK_04738208 + 0x47381dc));
        func_0x04785e24(uVar8,uVar4,0);
        uVar4 = func_0x03409d30(*(undefined4 *)(_UNK_0473820c + 0x47381f8));
      } while( true );
    }
    *piVar16 = iVar2;
    return;
  }
  piVar16 = (int *)*puVar7;
  func_0x0145b0f8();
  if (piVar16 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar4 = (**(code **)(*piVar16 + 0xe8))(piVar16,*(undefined4 *)(*piVar16 + 0xec));
  uVar17 = param_1[5];
  pcVar5 = (code *)func_0x01384988(*(undefined4 *)(iRam032035e4 + 0x3203364));
  uVar8 = func_0x01384988(*(undefined4 *)(iRam032035e8 + 0x3203374));
  *(undefined4 *)(pcVar3 + -8) = 0;
  uVar4 = func_0x046722b4(pcVar5,uVar4,uVar8,uVar17);
  iVar2 = func_0x01384988(*(undefined4 *)(iRam032035ec + 0x32033a8));
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2944(uVar4,0);
  iVar2 = iStack_48;
  puVar13 = puStack_54;
  uVar17 = param_1[6];
  if (uVar17 != 0) {
    func_0x0145894c(puStack_54,iStack_48);
    func_0x01458934(piStack_50,puVar13,iVar2);
    iVar1 = *piStack_44;
    uVar10 = *(ushort *)(iVar1 + 0xbd);
    iVar2 = iVar1;
    if ((uVar10 & 1) == 0) {
      iVar2 = func_0x014001f0();
      iVar1 = *piStack_44;
      uVar10 = *(ushort *)(iVar1 + 0xbd);
    }
    uVar4 = **(undefined4 **)(*(int *)(iVar2 + 0x60) + 0x14);
    iVar2 = iVar1;
    if ((uVar10 & 1) == 0) {
      iVar2 = func_0x014001f0();
      iVar1 = *piStack_44;
      uVar10 = *(ushort *)(iVar1 + 0xbd);
    }
    pcVar5 = *(code **)(*(int *)(iVar2 + 0x60) + 0x14);
    if ((uVar10 & 1) == 0) {
      iVar1 = func_0x014001f0();
    }
    pcVar15 = *(code **)(pcVar5 + 8);
    if (-1 < *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 0x10) + 0x14)) {
      piStack_50 = (int *)*piStack_50;
    }
    piStack_40 = piStack_50;
    *(int **)(pcVar3 + -8) = piStack_50;
    (*pcVar15)(uVar4,pcVar5,uVar17,&piStack_40);
  }
  goto LAB_032031a0;
}



// ===== FAT.ConfHelper.<AsyncLoadConf>d__13<__Il2CppFullySharedGenericType>$$SetStateMachine RVA 0x31f35fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032035fc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) goto LAB_047381bc;
  if (*(int *)(param_1 + 8) != 0) {
    uVar1 = func_0x03409d30(*(undefined4 *)(_UNK_04738210 + 0x4738174));
    uVar1 = func_0x04874ecc(uVar1,0);
    func_0x03409d30(*(undefined4 *)(_UNK_04738214 + 0x473818c));
    uVar2 = func_0x03409cd0();
    func_0x04824950(uVar2,uVar1,0);
    uVar1 = func_0x03409d30(*(undefined4 *)(_UNK_04738218 + 0x47381ac));
    do {
      func_0x03409d8c(uVar2,uVar1);
      func_0x03409d9c();
LAB_047381bc:
      func_0x03409d30(*(undefined4 *)(_UNK_04738204 + 0x47381c8));
      uVar2 = func_0x03409cd0();
      uVar1 = func_0x03409d30(*(undefined4 *)(_UNK_04738208 + 0x47381dc));
      func_0x04785e24(uVar2,uVar1,0);
      uVar1 = func_0x03409d30(*(undefined4 *)(_UNK_0473820c + 0x47381f8));
    } while( true );
  }
  *(int *)(param_1 + 8) = param_2;
  return;
}

