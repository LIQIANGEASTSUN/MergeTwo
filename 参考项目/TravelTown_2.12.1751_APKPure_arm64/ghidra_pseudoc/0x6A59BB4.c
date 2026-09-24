/* Ghidra 12.1.2 native pseudocode; RVA 0x6A59BB4; Merger.MergeBoardQueue.Logic.BoardQueueProcessor.Process; status ok */


/* WARNING: Possible PIC construction at 0x06b59e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b5a404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b5a5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b5a21c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b5a5e0) */
/* WARNING: Removing unreachable block (ram,0x06b5a408) */
/* WARNING: Removing unreachable block (ram,0x06b59e1c) */
/* WARNING: Removing unreachable block (ram,0x06b5a220) */
/* WARNING: Removing unreachable block (ram,0x06b5a754) */
/* WARNING: Removing unreachable block (ram,0x06b5a834) */
/* WARNING: Removing unreachable block (ram,0x06b5a848) */
/* WARNING: Removing unreachable block (ram,0x06b5a858) */
/* WARNING: Removing unreachable block (ram,0x06b5a860) */
/* WARNING: Removing unreachable block (ram,0x06b5a888) */
/* WARNING: Removing unreachable block (ram,0x06b5a86c) */
/* WARNING: Removing unreachable block (ram,0x06b5a878) */
/* WARNING: Removing unreachable block (ram,0x06b5a894) */
/* WARNING: Removing unreachable block (ram,0x06b5a8a0) */
/* WARNING: Removing unreachable block (ram,0x06b5a8a4) */
/* WARNING: Removing unreachable block (ram,0x06b5a8d4) */
/* WARNING: Removing unreachable block (ram,0x06b5a8e8) */
/* WARNING: Removing unreachable block (ram,0x06b5a8f8) */
/* WARNING: Removing unreachable block (ram,0x06b5a900) */
/* WARNING: Removing unreachable block (ram,0x06b5a928) */
/* WARNING: Removing unreachable block (ram,0x06b5a90c) */
/* WARNING: Removing unreachable block (ram,0x06b5a918) */
/* WARNING: Removing unreachable block (ram,0x06b5a934) */
/* WARNING: Removing unreachable block (ram,0x06b5a940) */
/* WARNING: Removing unreachable block (ram,0x06b5a944) */
/* WARNING: Removing unreachable block (ram,0x06b5a968) */
/* WARNING: Removing unreachable block (ram,0x06b5a97c) */
/* WARNING: Removing unreachable block (ram,0x06b5a98c) */
/* WARNING: Removing unreachable block (ram,0x06b5a994) */
/* WARNING: Removing unreachable block (ram,0x06b5a9bc) */
/* WARNING: Removing unreachable block (ram,0x06b5a9a0) */
/* WARNING: Removing unreachable block (ram,0x06b5a9ac) */
/* WARNING: Removing unreachable block (ram,0x06b5a9c8) */
/* WARNING: Removing unreachable block (ram,0x06b5a9d4) */
/* WARNING: Removing unreachable block (ram,0x06b5a958) */
/* WARNING: Removing unreachable block (ram,0x06b5a8bc) */
/* WARNING: Removing unreachable block (ram,0x06b5a8d0) */
/* WARNING: Removing unreachable block (ram,0x06b5a81c) */
/* WARNING: Removing unreachable block (ram,0x06b5a830) */
/* WARNING: Removing unreachable block (ram,0x06b5a47c) */
/* WARNING: Removing unreachable block (ram,0x06b5a2a4) */
/* WARNING: Removing unreachable block (ram,0x06b5a0b8) */

void Merger_MergeBoardQueue_Logic_BoardQueueProcessor__Process
               (long param_1,long *param_2,ulong param_3,undefined *param_4)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x22;
  undefined *unaff_x23;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  long *unaff_x24;
  undefined *unaff_x25;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined8 auStack_80 [2];
  long *plStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  puVar7 = (undefined8 *)auStack_60;
  if ((bRam0000000007e2a61d & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0f10);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_07830460);
    func_0x03280a18(PTR_DAT_078301e8);
    func_0x03280a18(PTR_DAT_07830468);
    func_0x03280a18(PTR_DAT_078301f0);
    func_0x03280a18(PTR_DAT_07830470);
    func_0x03280a18(PTR_DAT_07830478);
    func_0x03280a18(PTR_DAT_078301f8);
    func_0x03280a18(PTR_DAT_07830480);
    func_0x03280a18(PTR_DAT_07830488);
    func_0x03280a18(PTR_DAT_07830200);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_07830490);
    func_0x03280a18(PTR_DAT_07830498);
    func_0x03280a18(PTR_DAT_07830208);
    func_0x03280a18(PTR_DAT_07830210);
    func_0x03280a18(PTR_DAT_078304a0);
    bRam0000000007e2a61d = 1;
  }
  plVar6 = (long *)0x7e2a000;
  puVar15 = unaff_x23;
  puVar10 = unaff_x25;
  if ((param_2 == (long *)0x0) ||
     (plVar4 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_07830208),
     plVar4 == (long *)0x0)) goto LAB_06b5a678;
  lVar11 = *plVar4;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_078301f0) {
        puVar5 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_06b59d34;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  param_3 = 0;
  puVar5 = (undefined8 *)func_0x03256b10(plVar4);
LAB_06b59d34:
  unaff_x24 = (long *)PTR_DAT_0774e8c8;
  plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  puVar15 = PTR_DAT_078301f8;
  plVar4 = (long *)PTR_DAT_0774e8e0;
  if (plVar6 == (long *)0x0) {
LAB_06b5a684:
    puVar15 = unaff_x23;
    func_0x03280cac();
    unaff_x25 = puVar10;
LAB_06b5a688:
    puVar10 = unaff_x25;
    func_0x03280cac();
    goto LAB_06b5a68c;
  }
  lVar11 = *plVar6;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0774e8e0) {
        puVar5 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_06b59dac;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  param_3 = 0;
  puVar5 = (undefined8 *)func_0x03256b10(plVar6);
LAB_06b59dac:
  uVar13 = (*(code *)*puVar5)(plVar6,puVar5[1]);
  if ((uVar13 & 1) == 0) {
    plVar4 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      lVar11 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x24) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06b59e74;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      param_3 = 0;
      puVar5 = (undefined8 *)func_0x03256b10(plVar6);
LAB_06b59e74:
      (*(code *)*puVar5)(plVar6,puVar5[1]);
    }
    plVar8 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_07830210);
    unaff_x22 = plVar4;
    if (plVar8 == (long *)0x0) goto LAB_06b5a678;
    lVar11 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_078301e8) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06b59ef4;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    param_3 = 0;
    puVar5 = (undefined8 *)func_0x03256b10(plVar8);
LAB_06b59ef4:
    plVar6 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
    puVar3 = PTR_DAT_07830200;
    puVar16 = PTR_DAT_077c0f10;
    puVar10 = PTR_DAT_0774e8e0;
    if (plVar6 != (long *)0x0) {
LAB_06b59f20:
      lVar11 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar10) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06b59f6c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      param_3 = 0;
      puVar5 = (undefined8 *)func_0x03256b10(plVar6);
LAB_06b59f6c:
      uVar13 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar13 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_06b5a0ac;
        lVar11 = *plVar6;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 == 0) goto LAB_06b5a084;
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_06b5a06c;
      }
      lVar11 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06b59fc8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      param_3 = 0;
      puVar5 = (undefined8 *)func_0x03256b10(plVar6);
LAB_06b59fc8:
      lVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if (lVar11 != 0) {
        plVar4 = *(long **)(param_1 + 0x10);
        if (plVar4 == (long *)0x0) goto LAB_06b5a668;
        lVar12 = *plVar4;
        puVar15 = *(undefined **)(lVar11 + 0x20);
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar16) {
              puVar5 = (undefined8 *)(lVar12 + (long)(*piVar14 + 4) * 0x10 + 0x138);
              goto LAB_06b5a034;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar4,*(long *)puVar16,4);
LAB_06b5a034:
        param_3 = puVar5[1];
        (*(code *)*puVar5)(plVar4,puVar15);
        goto LAB_06b59f20;
      }
      func_0x03280cac();
LAB_06b5a668:
      func_0x03280cac();
      plVar8 = plVar6;
      puVar16 = puVar15;
      unaff_x25 = puVar10;
      goto LAB_06b5a66c;
    }
    goto LAB_06b5a688;
  }
  lVar11 = *plVar6;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar15) {
        puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_06b59e08;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  param_3 = 0;
  puVar7 = (undefined8 *)func_0x03256b10(plVar6);
LAB_06b59e08:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  uVar18 = 0x6b59e1c;
  lVar11 = param_1;
  plStack_70 = param_2;
  plVar8 = plVar6;
  puVar16 = puVar15;
  goto SUB_06b5a9ec;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_06b5a06c:
    if (*(long *)(piVar14 + -2) == *unaff_x24) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_06b5a0a0;
    }
  }
LAB_06b5a084:
  param_3 = 0;
  puVar5 = (undefined8 *)func_0x03256b10(plVar6);
LAB_06b5a0a0:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_06b5a0ac:
  puVar15 = (undefined *)0x7;
  unaff_x22 = (long *)0x0;
  plVar4 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_078304a0);
  if (plVar4 == (long *)0x0) goto LAB_06b5a678;
  lVar11 = *plVar4;
  uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07830460) {
        puVar5 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_06b5a12c;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  param_3 = 0;
  puVar5 = (undefined8 *)func_0x03256b10(plVar4);
LAB_06b5a12c:
  plVar8 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  unaff_x25 = PTR_DAT_07830480;
  puVar16 = PTR_DAT_0774e8e0;
  plVar6 = plVar8;
  if (plVar8 == (long *)0x0) {
LAB_06b5a68c:
    func_0x03280cac();
    unaff_x25 = puVar10;
LAB_06b5a690:
    func_0x03280cac();
  }
  else {
    lVar11 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0774e8e0) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06b5a19c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    param_3 = 0;
    puVar5 = (undefined8 *)func_0x03256b10(plVar8);
LAB_06b5a19c:
    uVar13 = (*(code *)*puVar5)(plVar8,puVar5[1]);
    lVar11 = param_1;
    if ((uVar13 & 1) != 0) {
      lVar12 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)unaff_x25) {
            puVar5 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06b5a1f8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      param_3 = 0;
      puVar5 = (undefined8 *)func_0x03256b10(plVar8);
LAB_06b5a1f8:
      plVar4 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
      if (plVar4 != (long *)0x0) {
        lVar12 = plVar4[2];
        param_3 = plVar4[4];
        param_4 = (undefined *)0x9;
        uVar18 = 0x6b5a220;
        goto SUB_06b5aa90;
      }
LAB_06b5a66c:
      func_0x03280cac();
      puVar15 = puVar16;
LAB_06b5a670:
      func_0x03280cac();
LAB_06b5a674:
      func_0x03280cac();
      plVar6 = plVar8;
      unaff_x22 = plVar4;
      puVar10 = unaff_x25;
LAB_06b5a678:
      func_0x03280cac();
      func_0x03280ca4(unaff_x22);
      unaff_x23 = puVar15;
      goto LAB_06b5a684;
    }
    if (plVar8 != (long *)0x0) {
      lVar12 = *plVar8;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x24) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06b5a28c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      param_3 = 0;
      puVar7 = (undefined8 *)func_0x03256b10(plVar8);
LAB_06b5a28c:
      (*(code *)*puVar7)(plVar8,puVar7[1]);
    }
    puVar15 = (undefined *)0xa;
    unaff_x22 = (long *)0x0;
    plVar4 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_07830498);
    puVar10 = unaff_x25;
    if (plVar4 == (long *)0x0) goto LAB_06b5a678;
    lVar12 = *plVar4;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07830470) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06b5a318;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    param_3 = 0;
    puVar7 = (undefined8 *)func_0x03256b10(plVar4);
LAB_06b5a318:
    plVar6 = (long *)(*(code *)*puVar7)(plVar4,puVar7[1]);
    puVar16 = PTR_DAT_07830488;
    plVar4 = (long *)PTR_DAT_0774e8e0;
    if (plVar6 == (long *)0x0) goto LAB_06b5a690;
    lVar12 = *plVar6;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0774e8e0) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06b5a388;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    param_3 = 0;
    puVar7 = (undefined8 *)func_0x03256b10(plVar6);
LAB_06b5a388:
    uVar13 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar13 & 1) != 0) {
      lVar12 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar16) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06b5a3e4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      param_3 = 0;
      puVar7 = (undefined8 *)func_0x03256b10(plVar6);
LAB_06b5a3e4:
      lVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      plVar8 = plVar6;
      puVar15 = puVar16;
      if (lVar9 != 0) {
        lVar12 = *(long *)(lVar9 + 0x10);
        param_3 = *(ulong *)(lVar9 + 0x20);
        param_4 = (undefined *)0x0;
        uVar18 = 0x6b5a408;
        puVar7 = (undefined8 *)auStack_60;
        goto SUB_06b5aa90;
      }
      goto LAB_06b5a670;
    }
    unaff_x22 = (long *)0x0;
    puVar15 = (undefined *)0xd;
    if (plVar6 != (long *)0x0) {
      lVar12 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x24) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06b5a464;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      param_3 = 0;
      puVar7 = (undefined8 *)func_0x03256b10(plVar6);
LAB_06b5a464:
      (*(code *)*puVar7)(plVar6,puVar7[1]);
    }
    plVar4 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_07830490);
    if (plVar4 == (long *)0x0) goto LAB_06b5a678;
    lVar12 = *plVar4;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07830468) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06b5a4f0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    param_3 = 0;
    puVar7 = (undefined8 *)func_0x03256b10(plVar4);
LAB_06b5a4f0:
    param_2 = (long *)(*(code *)*puVar7)(plVar4,puVar7[1]);
    plVar4 = (long *)PTR_DAT_07830478;
    plVar8 = (long *)PTR_DAT_0774e8e0;
    if (param_2 != (long *)0x0) {
      lVar12 = *param_2;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_0774e8e0) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06b5a560;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      param_3 = 0;
      puVar7 = (undefined8 *)func_0x03256b10(param_2);
LAB_06b5a560:
      uVar13 = (*(code *)*puVar7)(param_2,puVar7[1]);
      if ((uVar13 & 1) == 0) {
        param_1 = 0;
        goto LAB_06b5a5e8;
      }
      lVar12 = *param_2;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *plVar4) {
            puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06b5a5bc;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      param_3 = 0;
      puVar7 = (undefined8 *)func_0x03256b10(param_2);
LAB_06b5a5bc:
      lVar9 = (*(code *)*puVar7)(param_2,puVar7[1]);
      if (lVar9 != 0) {
        lVar12 = *(long *)(lVar9 + 0x10);
        param_3 = *(ulong *)(lVar9 + 0x20);
        param_4 = (undefined *)0x0;
        uVar18 = 0x6b5a5e0;
        puVar7 = (undefined8 *)auStack_60;
        puVar16 = puVar15;
        goto SUB_06b5aa90;
      }
      goto LAB_06b5a674;
    }
  }
  func_0x03280cac();
  plVar8 = plVar6;
  plVar4 = unaff_x22;
  while( true ) {
    auVar20 = func_0x03280ca4(param_1);
    uStack_58 = auVar20._0_8_;
    if (auVar20._8_4_ != 1) break;
    plVar6 = (long *)func_0x072ce910(uStack_58);
    param_1 = *plVar6;
    func_0x072ce920();
LAB_06b5a5e8:
    if (param_2 != (long *)0x0) {
      lVar11 = *param_2;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x24) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06b5a638;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      param_3 = 0;
      puVar7 = (undefined8 *)func_0x03256b10(param_2);
LAB_06b5a638:
      (*(code *)*puVar7)(param_2,puVar7[1]);
    }
    if (param_1 == 0) {
      return;
    }
  }
  lVar11 = 0;
  if (param_2 != (long *)0x0) {
    lVar12 = *param_2;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06b5a744;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    param_3 = 0;
    puVar7 = (undefined8 *)func_0x03256b10(param_2);
LAB_06b5a744:
    (*(code *)*puVar7)(param_2,puVar7[1]);
  }
  func_0x03365958(uStack_58);
  func_0x03280ca4(plVar4);
  uVar18 = 0x6b5a9ec;
  param_1 = func_0x02f09514();
  plStack_70 = param_2;
  puVar16 = puVar15;
SUB_06b5a9ec:
  puVar7 = auStack_80;
  param_2 = (long *)0x7e2a000;
  auStack_80[0] = uVar18;
  lStack_68 = lVar11;
  if ((bRam0000000007e2a61e & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0f10);
    bRam0000000007e2a61e = 1;
  }
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 != (long *)0x0) {
    lVar11 = *plVar6;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_077c0f10) {
          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar14 + 3) * 0x10 + 0x138);
          goto LAB_06b5aa78;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_077c0f10,3);
LAB_06b5aa78:
                    /* WARNING: Could not recover jumptable at 0x06b5aa88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar7)(plVar6,puVar7[1]);
    return;
  }
  uVar18 = 0x6b5aa90;
  auVar19 = func_0x03280cac();
  lVar12 = auVar19._8_8_;
  param_1 = auVar19._0_8_;
  lVar11 = 0;
SUB_06b5aa90:
  *(undefined8 *)((long)puVar7 + -0x40) = uVar18;
  *(undefined **)((long)puVar7 + -0x38) = unaff_x25;
  *(long **)((long)puVar7 + -0x30) = unaff_x24;
  *(undefined **)((long)puVar7 + -0x28) = puVar16;
  *(long **)((long)puVar7 + -0x20) = plVar4;
  *(long **)((long)puVar7 + -0x18) = plVar8;
  *(long **)((long)puVar7 + -0x10) = param_2;
  *(long *)((long)puVar7 + -8) = lVar11;
  uVar17 = 0x7e2a000;
  uVar13 = param_3;
  puVar10 = param_4;
  if ((bRam0000000007e2a620 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_077c0f10);
    func_0x03280a18(PTR_DAT_078304a8);
    bRam0000000007e2a620 = 1;
  }
  if (lVar12 != 0) {
    func_0x03d1b250((undefined1 *)((long)puVar7 + -0x70),lVar12,*(undefined8 *)PTR_DAT_0777a488);
    uVar17 = *(ulong *)((long)puVar7 + -0x68);
    unaff_x24 = *(long **)(param_1 + 0x10);
    puVar15 = (undefined *)func_0x06b59b14(param_1);
    if (unaff_x24 != (long *)0x0) {
      lVar11 = *unaff_x24;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_077c0f10) {
            puVar5 = (undefined8 *)(lVar11 + (long)(*piVar14 + 6) * 0x10 + 0x138);
            goto LAB_06b5ab78;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(unaff_x24,*(long *)PTR_DAT_077c0f10,6);
LAB_06b5ab78:
      uVar13 = uVar17;
      puVar10 = puVar15;
      (*(code *)*puVar5)(unaff_x24,param_3,uVar17,puVar15,0,(ulong)param_4 & 0xffffffff,puVar5[1]);
      plVar6 = *(long **)(param_1 + 0x20);
      param_1 = 0;
      unaff_x25 = puVar15;
      if (plVar6 != (long *)0x0) {
        lVar9 = *plVar6;
        lVar11 = *(long *)PTR_DAT_078304a8;
        uVar2 = *(ushort *)(lVar9 + 0x12e);
        uVar13 = (ulong)uVar2;
        if ((int)param_4 == 9) {
          if (uVar2 != 0) {
            piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                iVar1 = *piVar14 + 1;
LAB_06b5ac38:
                puVar7 = (undefined8 *)(lVar9 + (long)iVar1 * 0x10 + 0x138);
                goto LAB_06b5ac3c;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          uVar18 = 1;
        }
        else {
          if (uVar2 != 0) {
            piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                iVar1 = *piVar14;
                goto LAB_06b5ac38;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          uVar18 = 0;
        }
        puVar7 = (undefined8 *)func_0x03256b10(plVar6,lVar11,uVar18);
LAB_06b5ac3c:
        (*(code *)*puVar7)(plVar6,lVar12,param_3,puVar7[1]);
        return;
      }
    }
  }
  auVar19 = func_0x03280cac();
  puVar16 = PTR_DAT_0774e908;
  puVar15 = PTR_DAT_0774e900;
  *(undefined8 *)((long)puVar7 + -0xb0) = 0x6b5ac6c;
  *(undefined **)((long)puVar7 + -0xa8) = unaff_x25;
  *(long **)((long)puVar7 + -0xa0) = unaff_x24;
  *(ulong *)((long)puVar7 + -0x98) = uVar17;
  *(long *)((long)puVar7 + -0x90) = param_1;
  *(ulong *)((long)puVar7 + -0x88) = (ulong)param_4 & 0xffffffff;
  *(long *)((long)puVar7 + -0x80) = lVar12;
  *(ulong *)((long)puVar7 + -0x78) = param_3;
  if ((bRam0000000007e2a61f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e908);
    func_0x03280a18(PTR_DAT_0774ea10);
    func_0x03280a18(PTR_DAT_0774e900);
    func_0x03280a18(PTR_DAT_07773688);
    func_0x03280a18(PTR_DAT_077730b8);
    func_0x03280a18(PTR_DAT_07780650);
    bRam0000000007e2a61f = 1;
  }
  lVar11 = func_0x03280ca0(*(undefined8 *)puVar15);
  func_0x04fe1fa4(lVar11,*(undefined8 *)puVar16);
  puVar15 = PTR_DAT_077730b8;
  if (lVar11 != 0) {
    func_0x04fe2d68(lVar11,*(undefined8 *)PTR_DAT_07780650,auVar19._8_8_,
                    *(undefined8 *)PTR_DAT_0774ea10);
    plVar6 = *(long **)(auVar19._0_8_ + 0x18);
    if (*(int *)(*(long *)puVar15 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar18 = func_0x0624cb20(uVar13 & 0xffffffff,0);
    if (plVar6 != (long *)0x0) {
      lVar12 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07773688) {
            puVar7 = (undefined8 *)(lVar12 + (long)(*piVar14 + 3) * 0x10 + 0x138);
            goto LAB_06b5adbc;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_07773688,3);
LAB_06b5adbc:
                    /* WARNING: Could not recover jumptable at 0x06b5adec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar7)(plVar6,uVar18,(ulong)puVar10 & 0xffffffff,0,8,lVar11,1,puVar7[1]);
      return;
    }
  }
  func_0x03280cac();
  return;
}

