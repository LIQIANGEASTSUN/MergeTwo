/* Ghidra 12.1.2 native pseudocode; RVA 0x6741344; Merger.Game.Views.Board.BoardQueueView.Awake; status ok */


/* WARNING: Possible PIC construction at 0x06841514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0684155c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06841714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06841814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068418bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067b2e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03e90250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x067b2e98) */
/* WARNING: Removing unreachable block (ram,0x068418c0) */
/* WARNING: Removing unreachable block (ram,0x068418c8) */
/* WARNING: Removing unreachable block (ram,0x068418ec) */
/* WARNING: Removing unreachable block (ram,0x068418f0) */
/* WARNING: Removing unreachable block (ram,0x06841908) */
/* WARNING: Removing unreachable block (ram,0x06841818) */
/* WARNING: Removing unreachable block (ram,0x06841820) */
/* WARNING: Removing unreachable block (ram,0x06841840) */
/* WARNING: Removing unreachable block (ram,0x06841868) */
/* WARNING: Removing unreachable block (ram,0x0684186c) */
/* WARNING: Removing unreachable block (ram,0x06841918) */
/* WARNING: Removing unreachable block (ram,0x06841880) */
/* WARNING: Removing unreachable block (ram,0x06841888) */
/* WARNING: Removing unreachable block (ram,0x06841898) */
/* WARNING: Removing unreachable block (ram,0x068418ac) */
/* WARNING: Removing unreachable block (ram,0x068418b0) */
/* WARNING: Removing unreachable block (ram,0x06841718) */
/* WARNING: Removing unreachable block (ram,0x06841734) */
/* WARNING: Removing unreachable block (ram,0x06841518) */
/* WARNING: Removing unreachable block (ram,0x06841528) */
/* WARNING: Removing unreachable block (ram,0x0684152c) */
/* WARNING: Removing unreachable block (ram,0x06841560) */
/* WARNING: Removing unreachable block (ram,0x06841594) */
/* WARNING: Removing unreachable block (ram,0x068415d8) */
/* WARNING: Removing unreachable block (ram,0x0684161c) */
/* WARNING: Removing unreachable block (ram,0x06841660) */
/* WARNING: Removing unreachable block (ram,0x06841680) */
/* WARNING: Removing unreachable block (ram,0x068416c0) */
/* WARNING: Removing unreachable block (ram,0x04d0ebe8) */
/* WARNING: Removing unreachable block (ram,0x04d0ec28) */
/* WARNING: Removing unreachable block (ram,0x04d0e98c) */
/* WARNING: Removing unreachable block (ram,0x04d0e9ac) */
/* WARNING: Removing unreachable block (ram,0x04d0e9d4) */
/* WARNING: Removing unreachable block (ram,0x04d0e9e0) */
/* WARNING: Removing unreachable block (ram,0x04d0e9fc) */
/* WARNING: Removing unreachable block (ram,0x04d0e9e4) */
/* WARNING: Removing unreachable block (ram,0x04d0ea00) */
/* WARNING: Removing unreachable block (ram,0x04d0ea18) */
/* WARNING: Removing unreachable block (ram,0x04d0e9f8) */
/* WARNING: Removing unreachable block (ram,0x04d0ea2c) */
/* WARNING: Removing unreachable block (ram,0x04d0ea58) */
/* WARNING: Removing unreachable block (ram,0x04d0ea6c) */
/* WARNING: Removing unreachable block (ram,0x04d0ea78) */
/* WARNING: Removing unreachable block (ram,0x04d0ea90) */
/* WARNING: Removing unreachable block (ram,0x04d0eacc) */
/* WARNING: Removing unreachable block (ram,0x04d0eaf4) */
/* WARNING: Removing unreachable block (ram,0x04d0eb08) */
/* WARNING: Removing unreachable block (ram,0x04d0eb14) */
/* WARNING: Removing unreachable block (ram,0x04d0eb2c) */
/* WARNING: Removing unreachable block (ram,0x04d0eb68) */
/* WARNING: Removing unreachable block (ram,0x04d0eb3c) */
/* WARNING: Removing unreachable block (ram,0x04d0eb58) */
/* WARNING: Removing unreachable block (ram,0x04d0eaa0) */
/* WARNING: Removing unreachable block (ram,0x04d0eabc) */
/* WARNING: Removing unreachable block (ram,0x04d0ec0c) */
/* WARNING: Removing unreachable block (ram,0x06841540) */
/* WARNING: Removing unreachable block (ram,0x06841548) */
/* WARNING: Removing unreachable block (ram,0x06841554) */
/* WARNING: Removing unreachable block (ram,0x03e90254) */
/* WARNING: Removing unreachable block (ram,0x067b2e7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong Merger_Game_Views_Board_BoardQueueView__Awake
                (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  code *UNRECOVERED_JUMPTABLE;
  int **ppiVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined *puVar25;
  ulong unaff_x24;
  undefined8 unaff_x26;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulong auStack_320 [18];
  undefined1 auStack_290 [8];
  int *piStack_288;
  long alStack_280 [2];
  undefined1 auStack_270 [8];
  long alStack_268 [9];
  int *piStack_220;
  long lStack_218;
  uint uStack_20c;
  long lStack_208;
  undefined1 auStack_200 [8];
  ulong auStack_1f8 [11];
  int *piStack_1a0;
  long lStack_198;
  int iStack_18c;
  long lStack_188;
  undefined8 uStack_f0;
  undefined8 uStack_c0;
  undefined8 uStack_a0;
  long lStack_98;
  
  puVar25 = PTR_DAT_0780dee0;
  puVar11 = PTR_DAT_077751a8;
  puVar1 = &stack0xffffffffffffffc0;
  if ((bRam0000000007e28a5e & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0528);
    func_0x03280a18(PTR_DAT_07772690);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_077c0530);
    func_0x03280a18(PTR_DAT_0780dee8);
    func_0x03280a18(PTR_DAT_0780def0);
    func_0x03280a18(PTR_DAT_077726a0);
    func_0x03280a18(PTR_DAT_0780def8);
    func_0x03280a18(PTR_DAT_0780df00);
    func_0x03280a18(PTR_DAT_0780df08);
    func_0x03280a18(PTR_DAT_0780df10);
    func_0x03280a18(PTR_DAT_0780df18);
    func_0x03280a18(PTR_DAT_0780df20);
    func_0x03280a18(PTR_DAT_0780dee0);
    func_0x03280a18(PTR_DAT_0777e9f8);
    func_0x03280a18(PTR_DAT_077751b0);
    func_0x03280a18(PTR_DAT_077751a8);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0780ded8);
    bRam0000000007e28a5e = 1;
  }
  puVar24 = PTR_DAT_077751b0;
  func_0x05369b94(param_3,*(undefined8 *)puVar25);
  lVar10 = *(long *)puVar11;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar10 = *(long *)puVar11;
  }
  puVar25 = PTR_DAT_0780df20;
  puVar11 = PTR_DAT_0777e9f8;
  uVar23 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x120);
  if (*(int *)(*(long *)puVar24 + 0xe0) == 0) {
    func_0x03280b8c(*(long *)puVar24);
  }
  uVar23 = func_0x03e3dee0(uVar23,*(undefined8 *)puVar11);
  *(undefined8 *)(param_3 + 0x68) = uVar23;
  func_0x032809c4();
  uVar23 = func_0x03cecf70(param_3,*(undefined8 *)puVar25);
  *(undefined8 *)(param_3 + 0x70) = uVar23;
  func_0x032809c4((undefined8 *)(param_3 + 0x70),uVar23);
  if ((*(long *)(param_3 + 0x58) != 0) &&
     (puVar11 = (undefined *)func_0x06fdbed0(*(long *)(param_3 + 0x58),0),
     puVar11 != (undefined *)0x0)) {
    uVar3 = 0;
    puVar24 = PTR_DAT_0774e4e0;
    uVar23 = 0x6841518;
    goto SUB_06fdf26c;
  }
  param_3 = func_0x03280cac();
  lVar10 = func_0x069aaf28(param_3,0);
  if (lVar10 == 0) {
    param_3 = func_0x03280cac();
  }
  else {
    uVar26 = func_0x06fe9880(lVar10,0);
    *(undefined4 *)(param_3 + 0x78) = uVar26;
    *(undefined4 *)(param_3 + 0x7c) = param_2;
  }
  puVar1 = &stack0xffffffffffffff70;
  if ((bRam0000000007e28a66 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0777a5d0);
    func_0x03280a18(PTR_DAT_0780ded8);
    bRam0000000007e28a66 = 1;
  }
  func_0x068424a8(param_3);
  puVar24 = (undefined *)0x7e28000;
  if (*(long *)(param_3 + 0x28) != 0) {
    lVar10 = func_0x0674b454(*(long *)(param_3 + 0x28),0);
    puVar24 = *(undefined **)(param_3 + 0x38);
    if (lVar10 == 0) {
      if (puVar24 != (undefined *)0x0) {
        func_0x069b649c(puVar24,0);
        goto LAB_068417f0;
      }
    }
    else if ((*(long *)(param_3 + 0x28) != 0) &&
            (uVar23 = func_0x0674b454(*(long *)(param_3 + 0x28),0), puVar24 != (undefined *)0x0)) {
      func_0x069acef8(puVar24,uVar23,0);
LAB_068417f0:
      puVar11 = (undefined *)func_0x06841248(param_3);
      uVar3 = func_0x068412f0(param_3);
      puVar24 = puVar11;
      if (puVar11 != (undefined *)0x0) {
        uVar3 = uVar3 & 1;
        uVar23 = 0x6841818;
        goto SUB_06fdf26c;
      }
    }
  }
  uVar12 = func_0x03280cac();
  uStack_a0 = 0x684192c;
  lStack_98 = param_3;
  uVar23 = func_0x06fdbed0(uVar12,0);
  ppiVar16 = (int **)0x1;
  func_0x067b2ca0(uVar23,0,0x1f9,1,0);
  if ((*(long *)(uVar12 + 0x58) != 0) &&
     (puVar11 = (undefined *)func_0x06fdbed0(*(long *)(uVar12 + 0x58),0),
     puVar11 != (undefined *)0x0)) {
    uVar3 = 0;
    puVar1 = &stack0xffffffffffffff70;
    param_3 = lStack_98;
    uVar23 = uStack_a0;
SUB_06fdf26c:
    *(undefined8 *)(puVar1 + -0x20) = uVar23;
    *(undefined **)(puVar1 + -0x18) = puVar25;
    *(undefined **)(puVar1 + -0x10) = puVar24;
    *(long *)(puVar1 + -8) = param_3;
    if (pcRam0000000007e2fbf0 == (code *)0x0) {
      pcRam0000000007e2fbf0 = (code *)func_0x032809dc(&UNK_017b3eb2);
    }
                    /* WARNING: Could not recover jumptable at 0x06fdf2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (*pcRam0000000007e2fbf0)(puVar11,uVar3);
    return uVar12;
  }
  uVar23 = func_0x03280cac();
  lVar10 = func_0x06fdbed0(uVar23,0);
  uVar15 = 0;
  uStack_c0 = 0x6841978;
  if ((bRam0000000007e283fd & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809f58);
    func_0x03280a18(PTR_DAT_07809138);
    func_0x03280a18(PTR_DAT_07809140);
    bRam0000000007e283fd = 1;
  }
  lVar13 = *(long *)PTR_DAT_07809138;
  if ((*(long *)(lVar13 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar13 + 0x38) == 0)) {
    func_0x03256878(lVar13);
  }
  if (lVar10 != 0) {
    puVar4 = (undefined *)func_0x03dc9518(lVar10,**(undefined8 **)(lVar13 + 0x38));
    puVar11 = PTR_DAT_0774e4e0;
    if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)PTR_DAT_0774e4e0);
    }
    uVar15 = func_0x06fdeb74(puVar4,0,0);
    if ((uVar15 & 1) == 0) {
      return uVar15;
    }
    puVar6 = &uStack_a0;
    if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
      func_0x03280b8c();
      puVar6 = &uStack_a0;
    }
SUB_06fe41c8:
    puVar11 = PTR_DAT_0774e4e0;
    *(undefined8 *)((long)puVar6 + -0x20) = uStack_c0;
    *(undefined **)((long)puVar6 + -0x18) = puVar25;
    *(undefined **)((long)puVar6 + -0x10) = puVar24;
    *(ulong *)((long)puVar6 + -8) = uVar12;
    if ((bRam0000000007e2fdd8 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e4e0,0);
      bRam0000000007e2fdd8 = 1;
    }
    if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    if (pcRam0000000007e2fdd0 == (code *)0x0) {
      pcRam0000000007e2fdd0 = (code *)func_0x032809dc(&UNK_017a679f);
    }
                    /* WARNING: Could not recover jumptable at 0x06fe423c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (*pcRam0000000007e2fdd0)(0,puVar4);
    return uVar12;
  }
  auVar27 = func_0x03280cac();
  lVar10 = auVar27._8_8_;
  uStack_f0 = 0x3e901b8;
  if ((*(long *)(lVar10 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar10 + 0x38) == 0)) {
    func_0x03256878(lVar10);
  }
  if ((auVar27._0_8_ != 0) &&
     (uVar12 = func_0x03dc9f70(auVar27._0_8_,**(undefined8 **)(lVar10 + 0x38)), uVar12 != 0)) {
    if ((int)*(ulong *)(uVar12 + 0x18) < 1) {
      return uVar12;
    }
    puVar25 = (undefined *)0x0;
    if ((*(ulong *)(uVar12 + 0x18) & 0xffffffff) != 0) {
      puVar4 = *(undefined **)(uVar12 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uStack_c0 = 0x3e90254;
      puVar6 = &uStack_f0;
      puVar24 = puVar4;
      goto SUB_06fe41c8;
    }
    func_0x03280cb4();
  }
  auVar27 = func_0x03280cac();
  lVar10 = auVar27._8_8_;
  plVar5 = auVar27._0_8_;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (plVar5 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    lVar17 = *plVar5;
    uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar12 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar13) {
          puVar6 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_03e90304;
        }
        uVar12 = uVar12 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar12 != 0);
    }
    uVar15 = 0;
    puVar6 = (undefined8 *)func_0x03256b10(plVar5);
LAB_03e90304:
    iVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (iVar2 != 0) {
      lVar13 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      lVar17 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar12 != 0) {
        piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar13) {
            puVar6 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_03e90378;
          }
          uVar12 = uVar12 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar13,0);
LAB_03e90378:
      iVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      lVar13 = **(long **)(lVar10 + 0x38);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      lVar17 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar12 != 0) {
        piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar13) {
            puVar6 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_03e903f0;
          }
          uVar12 = uVar12 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar13,0);
LAB_03e903f0:
      uVar12 = (*(code *)*puVar6)(plVar5,iVar2 + -1,puVar6[1]);
      lVar13 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      lVar17 = *plVar5;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar15 != 0) {
        piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar13) {
            puVar6 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_03e90468;
          }
          uVar15 = uVar15 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar15 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar13,0);
LAB_03e90468:
      iVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      lVar10 = **(long **)(lVar10 + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      lVar13 = *plVar5;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar10) {
            puVar6 = (undefined8 *)(lVar13 + (long)(*piVar22 + 4) * 0x10 + 0x138);
            goto LAB_03e904e0;
          }
          uVar15 = uVar15 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar15 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar10,4);
LAB_03e904e0:
      (*(code *)*puVar6)(plVar5,iVar2 + -1,puVar6[1]);
      return uVar12 & 0xffffffff;
    }
  }
  func_0x03280a2c(PTR_DAT_0774efe0);
  uVar23 = func_0x03280ca0();
  func_0x05796364(uVar23,0);
  auVar27 = func_0x03280b7c(uVar23,lVar10);
  lVar10 = auVar27._8_8_;
  plVar5 = auVar27._0_8_;
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03256878(lVar10);
  }
  if (plVar5 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar13 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    lVar17 = *plVar5;
    uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar12 != 0) {
      piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar13) {
          puVar6 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_03e905b4;
        }
        uVar12 = uVar12 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar12 != 0);
    }
    uVar15 = 0;
    puVar6 = (undefined8 *)func_0x03256b10(plVar5);
LAB_03e905b4:
    iVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (iVar2 != 0) {
      lVar13 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      lVar17 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar12 != 0) {
        piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar13) {
            puVar6 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_03e90628;
          }
          uVar12 = uVar12 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar13,0);
LAB_03e90628:
      iVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      lVar13 = **(long **)(lVar10 + 0x38);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      lVar17 = *plVar5;
      uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar12 != 0) {
        piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar13) {
            puVar6 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_03e906a0;
          }
          uVar12 = uVar12 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar13,0);
LAB_03e906a0:
      uVar12 = (*(code *)*puVar6)(plVar5,iVar2 + -1,puVar6[1]);
      lVar13 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      lVar17 = *plVar5;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar15 != 0) {
        piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar13) {
            puVar6 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_03e90718;
          }
          uVar15 = uVar15 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar15 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar13,0);
LAB_03e90718:
      iVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      lVar10 = **(long **)(lVar10 + 0x38);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      lVar13 = *plVar5;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar10) {
            puVar6 = (undefined8 *)(lVar13 + (long)(*piVar22 + 4) * 0x10 + 0x138);
            goto LAB_03e90790;
          }
          uVar15 = uVar15 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar15 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar10,4);
LAB_03e90790:
      (*(code *)*puVar6)(plVar5,iVar2 + -1,puVar6[1]);
      return uVar12;
    }
  }
  func_0x03280a2c(PTR_DAT_0774efe0);
  uVar23 = func_0x03280ca0();
  func_0x05796364(uVar23,0);
  auVar27 = func_0x03280b7c(uVar23,lVar10);
  uVar23 = auVar27._8_8_;
  plVar5 = auVar27._0_8_;
  lVar10 = tpidr_el0;
  lStack_188 = *(long *)(lVar10 + 0x28);
  lVar13 = *(long *)(uVar15 + 0x38);
  if (lVar13 == 0) {
    func_0x03256878(uVar15);
    lVar13 = *(long *)(uVar15 + 0x38);
  }
  uVar12 = (ulong)*(uint *)(*(long *)(lVar13 + 0x20) + 0xfc);
  lVar17 = -(uVar12 + 0xf & 0x1fffffff0);
  lVar20 = (long)&piStack_1a0 + lVar17;
  if (plVar5 == (long *)0x0) {
    func_0x03280cac();
LAB_03e90ae0:
    func_0x03280a2c(PTR_DAT_0774efe0);
    uVar23 = func_0x03280ca0();
    func_0x05796364(uVar23,0);
    func_0x03280b7c(uVar23,uVar15);
  }
  else {
    lVar13 = *(long *)(lVar13 + 8);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    lVar18 = *plVar5;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar13) {
          puVar6 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_03e908a4;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar13,0);
LAB_03e908a4:
    iVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (iVar2 == 0) goto LAB_03e90ae0;
    lVar13 = *(long *)(*(long *)(uVar15 + 0x38) + 8);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    lVar18 = *plVar5;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar13) {
          puVar6 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_03e90918;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar13,0);
LAB_03e90918:
    uVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    unaff_x24 = (ulong)uVar3;
    lVar13 = **(long **)(uVar15 + 0x38);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    iStack_18c = uVar3 - 1;
    lVar18 = *plVar5;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar13) {
          lVar13 = lVar18 + (long)*piVar22 * 0x10 + 0x138;
          goto LAB_03e90994;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    lVar13 = func_0x03256b10(plVar5,lVar13,0);
LAB_03e90994:
    piStack_1a0 = &iStack_18c;
    lVar13 = *(long *)(lVar13 + 8);
    ppiVar16 = &piStack_1a0;
    lStack_198 = lVar20;
    (**(code **)(lVar13 + 0x10))(*(undefined8 *)(lVar13 + 8),lVar13,plVar5,ppiVar16,lVar20);
    lVar13 = *(long *)(*(long *)(uVar15 + 0x38) + 8);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    lVar18 = *plVar5;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar13) {
          puVar6 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_03e90a18;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar13,0);
LAB_03e90a18:
    uVar3 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    puVar6 = (undefined8 *)(uVar15 + 0x38);
    uVar15 = (ulong)uVar3;
    lVar13 = *(long *)*puVar6;
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    lVar18 = *plVar5;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar13) {
          puVar6 = (undefined8 *)(lVar18 + (long)(*piVar22 + 4) * 0x10 + 0x138);
          goto LAB_03e90a90;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar13,4);
LAB_03e90a90:
    (*(code *)*puVar6)(plVar5,uVar3 - 1,puVar6[1]);
    uVar21 = func_0x072ce970(uVar23,lVar20,uVar12);
    if (*(long *)(lVar10 + 0x28) == lStack_188) {
      return uVar21;
    }
  }
  auVar27 = func_0x072ce990();
  lVar13 = auVar27._8_8_;
  plVar7 = auVar27._0_8_;
  *(undefined8 *)((long)auStack_1f8 + lVar17 + 0x38) = 0x3e90b0c;
  *(long **)((long)auStack_1f8 + lVar17 + 0x48) = plVar5;
  *(undefined8 *)((long)auStack_1f8 + lVar17 + 0x50) = uVar23;
  if (*(long *)(lVar13 + 0x38) == 0) {
    func_0x03256878(lVar13);
  }
  if (plVar7 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar18 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c(lVar18);
    }
    lVar19 = *plVar7;
    uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar18) {
          puVar6 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_03e90b94;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar7,lVar18,0);
LAB_03e90b94:
    iVar2 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if (iVar2 != 0) {
      lVar10 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      lVar17 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar12 != 0) {
        piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar10) {
            puVar6 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_03e90c08;
          }
          uVar12 = uVar12 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar7,lVar10,0);
LAB_03e90c08:
      iVar2 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (iVar2 == 1) {
        lVar10 = **(long **)(lVar13 + 0x38);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
        }
        lVar13 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar12 != 0) {
          piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar10) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_03e90cd4;
            }
            uVar12 = uVar12 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar7,lVar10,0);
LAB_03e90cd4:
        UNRECOVERED_JUMPTABLE = (code *)*puVar6;
        uVar23 = puVar6[1];
        uVar26 = 0;
      }
      else {
        lVar10 = (*(long **)(lVar13 + 0x38))[1];
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
        }
        lVar17 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar12 != 0) {
          piVar22 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar10) {
              puVar6 = (undefined8 *)(lVar17 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_03e90cf0;
            }
            uVar12 = uVar12 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar7,lVar10,0);
LAB_03e90cf0:
        uVar26 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        uVar26 = func_0x06fd9864(0,uVar26,0);
        lVar10 = **(long **)(lVar13 + 0x38);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
        }
        lVar13 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar12 != 0) {
          piVar22 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar10) {
              puVar6 = (undefined8 *)(lVar13 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_03e90d74;
            }
            uVar12 = uVar12 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar7,lVar10,0);
LAB_03e90d74:
        UNRECOVERED_JUMPTABLE = (code *)*puVar6;
        uVar23 = puVar6[1];
      }
                    /* WARNING: Could not recover jumptable at 0x03e90d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (*UNRECOVERED_JUMPTABLE)(plVar7,uVar26,uVar23);
      return uVar12;
    }
  }
  func_0x03280a2c(PTR_DAT_07756308);
  uVar23 = func_0x03280ca0();
  uVar8 = func_0x03280a2c(PTR_DAT_0777b3b8);
  uVar21 = 0;
  func_0x05791bcc(uVar23,uVar8);
  auVar27 = func_0x03280b7c(uVar23,lVar13);
  uVar8 = auVar27._8_8_;
  plVar5 = auVar27._0_8_;
  *(undefined1 **)(auStack_200 + lVar17) = &stack0xfffffffffffffe80;
  *(undefined8 *)((long)auStack_1f8 + lVar17) = 0x3e90dcc;
  *(ulong *)((long)auStack_1f8 + lVar17 + 8) = unaff_x24;
  *(ulong *)((long)auStack_1f8 + lVar17 + 0x10) = uVar15;
  *(long *)((long)auStack_1f8 + lVar17 + 0x18) = lVar20;
  *(ulong *)((long)auStack_1f8 + lVar17 + 0x20) = uVar12;
  *(long *)((long)auStack_1f8 + lVar17 + 0x28) = lVar13;
  *(undefined8 *)((long)auStack_1f8 + lVar17 + 0x30) = uVar23;
  lVar13 = tpidr_el0;
  *(undefined8 *)((long)&lStack_208 + lVar17) = *(undefined8 *)(lVar13 + 0x28);
  lVar20 = *(long *)(uVar21 + 0x38);
  if (lVar20 == 0) {
    func_0x03256878(uVar21);
    lVar20 = *(long *)(uVar21 + 0x38);
  }
  uVar12 = (ulong)*(uint *)(*(long *)(lVar20 + 0x20) + 0xfc);
  lVar18 = (long)&piStack_220 + (lVar17 - (uVar12 + 0xf & 0x1fffffff0));
  if (plVar5 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar20 = *(long *)(lVar20 + 8);
    if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
      lVar20 = func_0x0325681c(lVar20);
    }
    lVar19 = *plVar5;
    uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar15 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar20) {
          puVar6 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_03e90e90;
        }
        uVar15 = uVar15 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar20,0);
LAB_03e90e90:
    iVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (iVar2 != 0) {
      lVar20 = *(long *)(*(long *)(uVar21 + 0x38) + 8);
      if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
        lVar20 = func_0x0325681c(lVar20);
      }
      lVar19 = *plVar5;
      uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar15 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == lVar20) {
            puVar6 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_03e90f04;
          }
          uVar15 = uVar15 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar15 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar20,0);
LAB_03e90f04:
      iVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (iVar2 == 1) {
        lVar20 = **(long **)(uVar21 + 0x38);
        if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = func_0x0325681c(lVar20);
        }
        *(undefined4 *)((long)&uStack_20c + lVar17) = 0;
        lVar19 = *plVar5;
        uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar15 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar20) goto LAB_03e91044;
            uVar15 = uVar15 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar15 != 0);
        }
      }
      else {
        lVar20 = (*(long **)(uVar21 + 0x38))[1];
        if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = func_0x0325681c(lVar20);
        }
        lVar19 = *plVar5;
        uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar15 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar20) {
              puVar6 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_03e90fc8;
            }
            uVar15 = uVar15 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar15 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar5,lVar20,0);
LAB_03e90fc8:
        uVar26 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        uVar3 = func_0x06fd9864(0,uVar26,0);
        puVar6 = (undefined8 *)(uVar21 + 0x38);
        uVar21 = (ulong)uVar3;
        lVar20 = *(long *)*puVar6;
        if ((*(byte *)(lVar20 + 0x135) & 1) == 0) {
          lVar20 = func_0x0325681c(lVar20);
        }
        *(uint *)((long)&uStack_20c + lVar17) = uVar3;
        lVar19 = *plVar5;
        uVar15 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar15 != 0) {
          piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == lVar20) goto LAB_03e91044;
            uVar15 = uVar15 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar15 != 0);
        }
      }
      lVar20 = func_0x03256b10(plVar5,lVar20,0);
      goto LAB_03e91050;
    }
  }
  func_0x03280a2c(PTR_DAT_07756308);
  uVar8 = func_0x03280ca0();
  uVar23 = func_0x03280a2c(PTR_DAT_0777b3b8);
  uVar15 = 0;
  func_0x05791bcc(uVar8,uVar23);
  func_0x03280b7c(uVar8,uVar21);
LAB_03e910e8:
  auVar27 = func_0x072ce990();
  plVar7 = auVar27._0_8_;
  *(undefined1 **)(lVar18 + -0x50) = auStack_200 + lVar17;
  *(undefined8 *)(lVar18 + -0x48) = 0x3e910ec;
  *(undefined8 *)(lVar18 + -0x40) = unaff_x26;
  *(long *)(lVar18 + -0x38) = lVar10;
  *(long *)(lVar18 + -0x30) = lVar13;
  *(ulong *)(lVar18 + -0x28) = uVar21;
  *(long *)(lVar18 + -0x20) = lVar18;
  *(ulong *)(lVar18 + -0x18) = uVar12;
  *(long **)(lVar18 + -0x10) = plVar5;
  *(undefined8 *)(lVar18 + -8) = uVar8;
  lVar10 = tpidr_el0;
  *(undefined8 *)(lVar18 + -0x58) = *(undefined8 *)(lVar10 + 0x28);
  lVar13 = *(long *)(uVar15 + 0x38);
  if (lVar13 == 0) {
    func_0x03256878(uVar15);
    lVar13 = *(long *)(uVar15 + 0x38);
  }
  uVar21 = (ulong)*(uint *)(*(long *)(lVar13 + 0x18) + 0xfc);
  uVar12 = uVar21 + 0xf & 0x1fffffff0;
  lVar17 = (lVar18 + -0x70) - uVar12;
  lVar20 = lVar17 - uVar12;
  func_0x072ce9a0(lVar20,0,uVar21);
  if (plVar7 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar13 = *(long *)(lVar13 + 8);
    if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
      lVar13 = func_0x0325681c(lVar13);
    }
    lVar19 = *plVar7;
    uVar12 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar12 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == lVar13) {
          puVar6 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_03e911d0;
        }
        uVar12 = uVar12 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar7,lVar13,0);
LAB_03e911d0:
    iVar2 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if (iVar2 == 0) {
      func_0x072ce9a0(lVar20,0,uVar21);
      func_0x072ce970(lVar17,lVar20,uVar21);
    }
    else {
      ppiVar16 = (int **)(lVar18 + -0x68);
      puVar6 = *(undefined8 **)(*(long *)(uVar15 + 0x38) + 0x20);
      uVar23 = *puVar6;
      *(long **)(lVar18 + -0x68) = plVar7;
      *(long *)(lVar18 + -0x60) = lVar17;
      (*(code *)puVar6[2])(uVar23,puVar6,0,ppiVar16,lVar17);
    }
    uVar12 = func_0x072ce970(auVar27._8_8_,lVar17,uVar21);
    if (*(long *)(lVar10 + 0x28) == *(long *)(lVar18 + -0x58)) {
      return uVar12;
    }
  }
  auVar28 = func_0x072ce990();
  lVar10 = auVar28._8_8_;
  *(undefined8 *)(lVar20 + -0x20) = 0x3e9126c;
  *(ulong *)(lVar20 + -0x10) = uVar21;
  *(long *)(lVar20 + -8) = auVar27._8_8_;
  if ((*(long *)(lVar10 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar10 + 0x38) == 0)) {
    func_0x03256878(lVar10);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
  *(undefined8 *)(lVar20 + -0x30) = *(undefined8 *)(lVar20 + -0x20);
  *(ulong *)(lVar20 + -0x20) = uVar15;
  *(long *)(lVar20 + -0x18) = lVar17;
  *(undefined8 *)(lVar20 + -0x10) = *(undefined8 *)(lVar20 + -0x10);
  *(undefined8 *)(lVar20 + -8) = *(undefined8 *)(lVar20 + -8);
  if (*(long *)(lVar10 + 0x38) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0777a9b0);
    if (*(long *)(lVar10 + 0x38) == 0) {
      func_0x03256878(lVar10);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x06fe39b4(auVar28._0_8_,*(undefined8 *)PTR_DAT_0777a9b0,0);
  lVar13 = func_0x06fe3dd4(auVar28._0_8_,0);
  lVar17 = **(long **)(lVar10 + 0x38);
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    lVar17 = func_0x0325681c(lVar17);
  }
  if (lVar13 == 0) {
LAB_03e3cc18:
    uVar12 = 0;
  }
  else {
    uVar12 = func_0x03280b90(lVar13,lVar17);
    if (uVar12 == 0) {
      func_0x03281048(lVar13,lVar17);
      goto LAB_03e3cc18;
    }
  }
  uVar15 = func_0x06fe04ec(uVar12,0,0);
  if ((uVar15 & 1) == 0) {
    return uVar12;
  }
  func_0x03280a2c(PTR_DAT_0777a9b8);
  uVar23 = func_0x03280ca0();
  uVar8 = func_0x03280a2c(PTR_DAT_0777a9c0);
  uVar14 = 0;
  func_0x06fe0874(uVar23,uVar8,0);
  auVar27 = func_0x03280b7c(uVar23,lVar10);
  *(undefined8 *)(lVar20 + -0x60) = 0x3e3cc80;
  *(ulong *)(lVar20 + -0x50) = uVar12;
  *(long *)(lVar20 + -0x48) = lVar13;
  *(undefined8 *)(lVar20 + -0x40) = uVar23;
  *(long *)(lVar20 + -0x38) = lVar10;
  if (ppiVar16[7] == (int *)0x0) {
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_0777a9b0);
    if (ppiVar16[7] == (int *)0x0) {
      func_0x03256878(ppiVar16);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x06fe39b4(auVar27._0_8_,*(undefined8 *)PTR_DAT_0777a9b0,0);
  lVar10 = func_0x06fe4bb8(auVar27._0_8_,auVar27._8_8_,uVar14,0);
  lVar13 = *(long *)ppiVar16[7];
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c(lVar13);
  }
  if (lVar10 != 0) {
    uVar12 = func_0x03280b90(lVar10,lVar13);
    if (uVar12 != 0) goto LAB_03e3cd58;
    func_0x03281048(lVar10,lVar13);
  }
  uVar12 = 0;
LAB_03e3cd58:
  uVar15 = func_0x06fe04ec(uVar12,0,0);
  if ((uVar15 & 1) == 0) {
    return uVar12;
  }
  func_0x03280a2c(PTR_DAT_0777a9b8);
  uVar23 = func_0x03280ca0();
  uVar8 = func_0x03280a2c(PTR_DAT_0777a9c0);
  lVar13 = 0;
  func_0x06fe0874(uVar23,uVar8);
  auVar27 = func_0x03280b7c(uVar23,ppiVar16);
  *(undefined8 *)(lVar20 + -0x80) = 0x3e3cdbc;
  *(long *)(lVar20 + -0x78) = lVar10;
  *(undefined8 *)(lVar20 + -0x70) = uVar23;
  *(int ***)(lVar20 + -0x68) = ppiVar16;
  if ((*(long *)(lVar13 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar13 + 0x38) == 0)) {
    func_0x03256878(lVar13);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar10 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
  *(undefined8 *)(lVar20 + -0x90) = *(undefined8 *)(lVar20 + -0x80);
  *(ulong *)(lVar20 + -0x80) = uVar12;
  *(undefined8 *)(lVar20 + -0x78) = *(undefined8 *)(lVar20 + -0x78);
  *(undefined8 *)(lVar20 + -0x70) = *(undefined8 *)(lVar20 + -0x70);
  *(undefined8 *)(lVar20 + -0x68) = *(undefined8 *)(lVar20 + -0x68);
  if ((*(long *)(lVar10 + 0x38) == 0) &&
     (func_0x03280a18(PTR_DAT_0774e4e0), *(long *)(lVar10 + 0x38) == 0)) {
    func_0x03256878(lVar10);
  }
  if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar13 = func_0x06fe3fe0(auVar27._0_8_,auVar27._8_8_,0,0);
  lVar10 = **(long **)(lVar10 + 0x38);
  if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = func_0x0325681c(lVar10);
  }
  if (lVar13 != 0) {
    uVar12 = func_0x03280b90(lVar13,lVar10);
    if (uVar12 != 0) {
      return uVar12;
    }
    func_0x03281048(lVar13,lVar10);
  }
  return 0;
LAB_03e91044:
  lVar20 = lVar19 + (long)*piVar22 * 0x10 + 0x138;
LAB_03e91050:
  *(long *)((long)&piStack_220 + lVar17) = (long)&uStack_20c + lVar17;
  *(long *)((long)&lStack_218 + lVar17) = lVar18;
  lVar20 = *(long *)(lVar20 + 8);
  ppiVar16 = (int **)((long)&piStack_220 + lVar17);
  (**(code **)(lVar20 + 0x10))(*(undefined8 *)(lVar20 + 8),lVar20,plVar5,ppiVar16,lVar18);
  uVar15 = uVar12;
  uVar9 = func_0x072ce970(uVar8,lVar18);
  if (*(long *)(lVar13 + 0x28) == *(long *)((long)&lStack_208 + lVar17)) {
    return uVar9;
  }
  goto LAB_03e910e8;
}

