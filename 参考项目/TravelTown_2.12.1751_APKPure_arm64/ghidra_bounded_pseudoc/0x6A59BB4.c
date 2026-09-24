/* Ghidra 12.1.2 bounded pseudocode; RVA 0x6A59BB4; bound 3640 bytes; Merger.MergeBoardQueue.Logic.BoardQueueProcessor.Process; status ok */


/* WARNING: Removing unreachable block (ram,0x06b5a754) */
/* WARNING: Removing unreachable block (ram,0x06b5a81c) */
/* WARNING: Removing unreachable block (ram,0x06b5a830) */
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
/* WARNING: Removing unreachable block (ram,0x06b5a8bc) */
/* WARNING: Removing unreachable block (ram,0x06b5a8d0) */
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
/* WARNING: Removing unreachable block (ram,0x06b5a47c) */
/* WARNING: Removing unreachable block (ram,0x06b5a2a4) */
/* WARNING: Removing unreachable block (ram,0x06b5a0b8) */

void Merger_MergeBoardQueue_Logic_BoardQueueProcessor__Process
               (long param_1,long *param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  ushort uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x22;
  undefined *unaff_x23;
  undefined *puVar15;
  undefined *puVar16;
  long *unaff_x24;
  undefined *unaff_x25;
  undefined *puVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  undefined1 auStack_f0 [8];
  ulong uStack_e8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long *plStack_b0;
  undefined *puStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  code *pcStack_80;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
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
  plVar5 = (long *)0x7e2a000;
  puVar15 = unaff_x23;
  puVar18 = unaff_x25;
  if ((param_2 == (long *)0x0) ||
     (plVar3 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_07830208),
     plVar3 == (long *)0x0)) goto LAB_06b5a678;
  lVar10 = *plVar3;
  uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_078301f0) {
        puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_06b59d34;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  param_3 = 0;
  puVar4 = (undefined8 *)func_0x03256b10(plVar3);
LAB_06b59d34:
  unaff_x24 = (long *)PTR_DAT_0774e8c8;
  plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
  puVar15 = PTR_DAT_078301f8;
  puVar16 = PTR_DAT_0774e8e0;
  if (plVar5 != (long *)0x0) {
    do {
      lVar10 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar16) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06b59dac;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      param_3 = 0;
      puVar4 = (undefined8 *)func_0x03256b10(plVar5);
LAB_06b59dac:
      uVar13 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar13 & 1) == 0) goto LAB_06b59e24;
      lVar10 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar15) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06b59e08;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      param_3 = 0;
      puVar4 = (undefined8 *)func_0x03256b10(plVar5);
LAB_06b59e08:
      (*(code *)*puVar4)(plVar5,puVar4[1]);
      Merger_MergeBoardQueue_Logic_BoardQueueProcessor__DequeueFinished(param_1);
    } while( true );
  }
  goto LAB_06b5a684;
LAB_06b59e24:
  plVar3 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    lVar10 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06b59e74;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    param_3 = 0;
    puVar4 = (undefined8 *)func_0x03256b10(plVar5);
LAB_06b59e74:
    (*(code *)*puVar4)(plVar5,puVar4[1]);
  }
  plVar6 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_07830210);
  unaff_x22 = plVar3;
  if (plVar6 == (long *)0x0) goto LAB_06b5a678;
  lVar10 = *plVar6;
  uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_078301e8) {
        puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_06b59ef4;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  param_3 = 0;
  puVar4 = (undefined8 *)func_0x03256b10(plVar6);
LAB_06b59ef4:
  plVar5 = (long *)(*(code *)*puVar4)(plVar6,puVar4[1]);
  puVar17 = PTR_DAT_07830200;
  puVar16 = PTR_DAT_077c0f10;
  puVar18 = PTR_DAT_0774e8e0;
  if (plVar5 != (long *)0x0) {
LAB_06b59f20:
    lVar10 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar18) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06b59f6c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    param_3 = 0;
    puVar4 = (undefined8 *)func_0x03256b10(plVar5);
LAB_06b59f6c:
    uVar13 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar13 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_06b5a0ac;
      lVar10 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 == 0) goto LAB_06b5a084;
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      goto LAB_06b5a06c;
    }
    lVar10 = *plVar5;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar17) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06b59fc8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    param_3 = 0;
    puVar4 = (undefined8 *)func_0x03256b10(plVar5);
LAB_06b59fc8:
    lVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if (lVar10 != 0) {
      plVar3 = *(long **)(param_1 + 0x10);
      if (plVar3 == (long *)0x0) goto LAB_06b5a668;
      lVar11 = *plVar3;
      puVar15 = *(undefined **)(lVar10 + 0x20);
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar16) {
            puVar4 = (undefined8 *)(lVar11 + (long)(*piVar14 + 4) * 0x10 + 0x138);
            goto LAB_06b5a034;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar3,*(long *)puVar16,4);
LAB_06b5a034:
      param_3 = puVar4[1];
      (*(code *)*puVar4)(plVar3,puVar15);
      goto LAB_06b59f20;
    }
    func_0x03280cac();
LAB_06b5a668:
    func_0x03280cac();
    puVar16 = puVar15;
    puVar17 = puVar18;
LAB_06b5a66c:
    func_0x03280cac();
    plVar6 = plVar5;
    puVar15 = puVar16;
LAB_06b5a670:
    func_0x03280cac();
LAB_06b5a674:
    func_0x03280cac();
    plVar5 = plVar6;
    unaff_x22 = plVar3;
    puVar18 = puVar17;
    goto LAB_06b5a678;
  }
  goto LAB_06b5a688;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_06b5a06c:
    if (*(long *)(piVar14 + -2) == *unaff_x24) {
      puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_06b5a0a0;
    }
  }
LAB_06b5a084:
  param_3 = 0;
  puVar4 = (undefined8 *)func_0x03256b10(plVar5);
LAB_06b5a0a0:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_06b5a0ac:
  puVar15 = (undefined *)0x7;
  unaff_x22 = (long *)0x0;
  plVar3 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_078304a0);
  if (plVar3 == (long *)0x0) goto LAB_06b5a678;
  lVar10 = *plVar3;
  uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07830460) {
        puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_06b5a12c;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  param_3 = 0;
  puVar4 = (undefined8 *)func_0x03256b10(plVar3);
LAB_06b5a12c:
  plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
  puVar17 = PTR_DAT_07830480;
  puVar16 = PTR_DAT_0774e8e0;
  if (plVar5 != (long *)0x0) {
    do {
      lVar10 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar16) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06b5a19c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      param_3 = 0;
      puVar4 = (undefined8 *)func_0x03256b10(plVar5);
LAB_06b5a19c:
      uVar13 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar13 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_06b5a298;
        lVar10 = *plVar5;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 == 0) goto LAB_06b5a270;
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_06b5a258;
      }
      lVar10 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar17) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06b5a1f8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      param_3 = 0;
      puVar4 = (undefined8 *)func_0x03256b10(plVar5);
LAB_06b5a1f8:
      lVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      plVar3 = (long *)0x0;
      if (lVar10 == 0) goto LAB_06b5a66c;
      Merger_MergeBoardQueue_Logic_BoardQueueProcessor__Enqueue
                (param_1,*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)(lVar10 + 0x20),9);
      param_3 = (ulong)*(uint *)(lVar10 + 0x30);
      param_4 = (ulong)*(uint *)(lVar10 + 0x34);
      Merger_MergeBoardQueue_Logic_BoardQueueProcessor__GrantSellPriceResource
                (param_1,*(undefined8 *)(lVar10 + 0x28));
    } while( true );
  }
  goto LAB_06b5a68c;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_06b5a258:
    if (*(long *)(piVar14 + -2) == *unaff_x24) {
      puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_06b5a28c;
    }
  }
LAB_06b5a270:
  param_3 = 0;
  puVar4 = (undefined8 *)func_0x03256b10(plVar5);
LAB_06b5a28c:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_06b5a298:
  puVar15 = (undefined *)0xa;
  unaff_x22 = (long *)0x0;
  plVar3 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_07830498);
  puVar18 = puVar17;
  if (plVar3 == (long *)0x0) goto LAB_06b5a678;
  lVar10 = *plVar3;
  uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07830470) {
        puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_06b5a318;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  param_3 = 0;
  puVar4 = (undefined8 *)func_0x03256b10(plVar3);
LAB_06b5a318:
  plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
  puVar16 = PTR_DAT_07830488;
  plVar3 = (long *)PTR_DAT_0774e8e0;
  if (plVar5 != (long *)0x0) {
    do {
      lVar10 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *plVar3) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06b5a388;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      param_3 = 0;
      puVar4 = (undefined8 *)func_0x03256b10(plVar5);
LAB_06b5a388:
      uVar13 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar13 & 1) == 0) {
        unaff_x22 = (long *)0x0;
        puVar15 = (undefined *)0xd;
        if (plVar5 == (long *)0x0) goto LAB_06b5a470;
        lVar10 = *plVar5;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 == 0) goto LAB_06b5a448;
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_06b5a430;
      }
      lVar10 = *plVar5;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar16) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06b5a3e4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      param_3 = 0;
      puVar4 = (undefined8 *)func_0x03256b10(plVar5);
LAB_06b5a3e4:
      lVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      plVar6 = plVar5;
      puVar15 = puVar16;
      if (lVar10 == 0) goto LAB_06b5a670;
      param_3 = *(ulong *)(lVar10 + 0x20);
      param_4 = 0;
      Merger_MergeBoardQueue_Logic_BoardQueueProcessor__Enqueue
                (param_1,*(undefined8 *)(lVar10 + 0x10));
    } while( true );
  }
  goto LAB_06b5a690;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_06b5a430:
    if (*(long *)(piVar14 + -2) == *unaff_x24) {
      puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_06b5a464;
    }
  }
LAB_06b5a448:
  param_3 = 0;
  puVar4 = (undefined8 *)func_0x03256b10(plVar5);
LAB_06b5a464:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_06b5a470:
  plVar3 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_07830490);
  if (plVar3 != (long *)0x0) {
    lVar10 = *plVar3;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07830468) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06b5a4f0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    param_3 = 0;
    puVar4 = (undefined8 *)func_0x03256b10(plVar3);
LAB_06b5a4f0:
    param_2 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    plVar3 = (long *)PTR_DAT_07830478;
    plVar6 = (long *)PTR_DAT_0774e8e0;
    if (param_2 != (long *)0x0) {
      do {
        lVar10 = *param_2;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *plVar6) {
              puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_06b5a560;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        param_3 = 0;
        puVar4 = (undefined8 *)func_0x03256b10(param_2);
LAB_06b5a560:
        uVar13 = (*(code *)*puVar4)(param_2,puVar4[1]);
        if ((uVar13 & 1) == 0) {
          param_1 = 0;
          goto LAB_06b5a5e8;
        }
        lVar10 = *param_2;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *plVar3) {
              puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_06b5a5bc;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        param_3 = 0;
        puVar4 = (undefined8 *)func_0x03256b10(param_2);
LAB_06b5a5bc:
        lVar10 = (*(code *)*puVar4)(param_2,puVar4[1]);
        if (lVar10 == 0) goto LAB_06b5a674;
        param_3 = *(ulong *)(lVar10 + 0x20);
        param_4 = 0;
        Merger_MergeBoardQueue_Logic_BoardQueueProcessor__Enqueue
                  (param_1,*(undefined8 *)(lVar10 + 0x10));
      } while( true );
    }
    goto LAB_06b5a694;
  }
LAB_06b5a678:
  func_0x03280cac();
  func_0x03280ca4(unaff_x22);
  unaff_x23 = puVar15;
LAB_06b5a684:
  puVar15 = unaff_x23;
  func_0x03280cac();
  unaff_x25 = puVar18;
LAB_06b5a688:
  puVar18 = unaff_x25;
  func_0x03280cac();
LAB_06b5a68c:
  func_0x03280cac();
  puVar17 = puVar18;
LAB_06b5a690:
  func_0x03280cac();
LAB_06b5a694:
  func_0x03280cac();
  plVar6 = plVar5;
  plVar3 = unaff_x22;
  while( true ) {
    auVar20 = func_0x03280ca4(param_1);
    uStack_58 = auVar20._0_8_;
    if (auVar20._8_4_ != 1) break;
    plVar5 = (long *)func_0x072ce910(uStack_58);
    param_1 = *plVar5;
    func_0x072ce920();
LAB_06b5a5e8:
    if (param_2 != (long *)0x0) {
      lVar10 = *param_2;
      uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_06b5a638;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      param_3 = 0;
      puVar4 = (undefined8 *)func_0x03256b10(param_2);
LAB_06b5a638:
      (*(code *)*puVar4)(param_2,puVar4[1]);
    }
    if (param_1 == 0) {
      return;
    }
  }
  if (param_2 != (long *)0x0) {
    lVar10 = *param_2;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_06b5a744;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    param_3 = 0;
    puVar4 = (undefined8 *)func_0x03256b10(param_2);
LAB_06b5a744:
    (*(code *)*puVar4)(param_2,puVar4[1]);
  }
  func_0x03365958(uStack_58);
  func_0x03280ca4(plVar3);
  lVar10 = func_0x02f09514();
  pcStack_80 = Merger_MergeBoardQueue_Logic_BoardQueueProcessor__DequeueFinished;
  uStack_68 = 0;
  plStack_70 = param_2;
  if ((bRam0000000007e2a61e & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0f10);
    bRam0000000007e2a61e = 1;
  }
  plVar5 = *(long **)(lVar10 + 0x10);
  if (plVar5 == (long *)0x0) {
    auVar19 = func_0x03280cac();
    lVar11 = auVar19._8_8_;
    lVar10 = auVar19._0_8_;
    pcStack_c0 = Merger_MergeBoardQueue_Logic_BoardQueueProcessor__Enqueue;
    uStack_90 = 0x7e2a000;
    uVar13 = param_3;
    uVar9 = param_4;
    puStack_b8 = puVar17;
    plStack_b0 = unaff_x24;
    puStack_a8 = puVar15;
    plStack_a0 = plVar3;
    plStack_98 = plVar6;
    plStack_88 = plVar5;
    if ((bRam0000000007e2a620 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777a488);
      func_0x03280a18(PTR_DAT_077c0f10);
      func_0x03280a18(PTR_DAT_078304a8);
      bRam0000000007e2a620 = 1;
    }
    if (lVar11 != 0) {
      func_0x03d1b250(auStack_f0,lVar11,*(undefined8 *)PTR_DAT_0777a488);
      plVar5 = *(long **)(lVar10 + 0x10);
      uVar7 = func_0x06b59b14(lVar10);
      if (plVar5 != (long *)0x0) {
        lVar12 = *plVar5;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_077c0f10) {
              puVar4 = (undefined8 *)(lVar12 + (long)(*piVar14 + 6) * 0x10 + 0x138);
              goto LAB_06b5ab78;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_077c0f10,6);
LAB_06b5ab78:
        (*(code *)*puVar4)(plVar5,param_3,uStack_e8,uVar7,0,param_4 & 0xffffffff,puVar4[1]);
        plVar5 = *(long **)(lVar10 + 0x20);
        uVar13 = uStack_e8;
        uVar9 = uVar7;
        if (plVar5 != (long *)0x0) {
          lVar12 = *plVar5;
          lVar10 = *(long *)PTR_DAT_078304a8;
          uVar2 = *(ushort *)(lVar12 + 0x12e);
          uVar13 = (ulong)uVar2;
          if ((int)param_4 == 9) {
            if (uVar2 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar10) {
                  iVar1 = *piVar14 + 1;
LAB_06b5ac38:
                  puVar4 = (undefined8 *)(lVar12 + (long)iVar1 * 0x10 + 0x138);
                  goto LAB_06b5ac3c;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            uVar8 = 1;
          }
          else {
            if (uVar2 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar10) {
                  iVar1 = *piVar14;
                  goto LAB_06b5ac38;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            uVar8 = 0;
          }
          puVar4 = (undefined8 *)func_0x03256b10(plVar5,lVar10,uVar8);
LAB_06b5ac3c:
          (*(code *)*puVar4)(plVar5,lVar11,param_3,puVar4[1]);
          return;
        }
      }
    }
    auVar19 = func_0x03280cac();
    puVar15 = PTR_DAT_0774e908;
    puVar18 = PTR_DAT_0774e900;
    if ((bRam0000000007e2a61f & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e908);
      func_0x03280a18(PTR_DAT_0774ea10);
      func_0x03280a18(PTR_DAT_0774e900);
      func_0x03280a18(PTR_DAT_07773688);
      func_0x03280a18(PTR_DAT_077730b8);
      func_0x03280a18(PTR_DAT_07780650);
      bRam0000000007e2a61f = 1;
    }
    lVar10 = func_0x03280ca0(*(undefined8 *)puVar18);
    func_0x04fe1fa4(lVar10,*(undefined8 *)puVar15);
    puVar18 = PTR_DAT_077730b8;
    if (lVar10 != 0) {
      func_0x04fe2d68(lVar10,*(undefined8 *)PTR_DAT_07780650,auVar19._8_8_,
                      *(undefined8 *)PTR_DAT_0774ea10);
      plVar5 = *(long **)(auVar19._0_8_ + 0x18);
      if (*(int *)(*(long *)puVar18 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar8 = func_0x0624cb20(uVar13 & 0xffffffff,0);
      if (plVar5 != (long *)0x0) {
        lVar11 = *plVar5;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07773688) {
              puVar4 = (undefined8 *)(lVar11 + (long)(*piVar14 + 3) * 0x10 + 0x138);
              goto LAB_06b5adbc;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_07773688,3);
LAB_06b5adbc:
                    /* WARNING: Could not recover jumptable at 0x06b5adec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar4)(plVar5,uVar8,uVar9 & 0xffffffff,0,8,lVar10,1,puVar4[1]);
        return;
      }
    }
    func_0x03280cac();
    return;
  }
  lVar10 = *plVar5;
  uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_077c0f10) {
        puVar4 = (undefined8 *)(lVar10 + (long)(*piVar14 + 3) * 0x10 + 0x138);
        goto LAB_06b5aa78;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar4 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_077c0f10,3);
LAB_06b5aa78:
                    /* WARNING: Could not recover jumptable at 0x06b5aa88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return;
}

