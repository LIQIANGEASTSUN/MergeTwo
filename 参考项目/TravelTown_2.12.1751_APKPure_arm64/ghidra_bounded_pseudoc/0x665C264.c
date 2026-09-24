/* Ghidra 12.1.2 bounded pseudocode; RVA 0x665C264; bound 1124 bytes; MergeEngine.ECS.Systems.Board.BoardInteractionSystem.BoardViewDestroyed; status ok */


/* WARNING: Possible PIC construction at 0x0675c7b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675c8b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675c8d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675cb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0675cbfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0675cb54) */
/* WARNING: Removing unreachable block (ram,0x0675cb60) */
/* WARNING: Removing unreachable block (ram,0x0675c8dc) */
/* WARNING: Removing unreachable block (ram,0x0675c8e4) */
/* WARNING: Removing unreachable block (ram,0x0675c968) */
/* WARNING: Removing unreachable block (ram,0x0675c988) */
/* WARNING: Removing unreachable block (ram,0x0675c99c) */
/* WARNING: Removing unreachable block (ram,0x0675c9dc) */
/* WARNING: Removing unreachable block (ram,0x0675ca04) */
/* WARNING: Removing unreachable block (ram,0x0675ca48) */
/* WARNING: Removing unreachable block (ram,0x0675ca50) */
/* WARNING: Removing unreachable block (ram,0x0675ca60) */
/* WARNING: Removing unreachable block (ram,0x0675cad8) */
/* WARNING: Removing unreachable block (ram,0x0675caf8) */
/* WARNING: Removing unreachable block (ram,0x0675cb14) */
/* WARNING: Removing unreachable block (ram,0x0675cafc) */
/* WARNING: Removing unreachable block (ram,0x0675caec) */
/* WARNING: Removing unreachable block (ram,0x0675cb0c) */
/* WARNING: Removing unreachable block (ram,0x0675caf4) */
/* WARNING: Removing unreachable block (ram,0x0675cb1c) */
/* WARNING: Removing unreachable block (ram,0x0675cb20) */
/* WARNING: Removing unreachable block (ram,0x0675cb68) */
/* WARNING: Removing unreachable block (ram,0x0675cb6c) */
/* WARNING: Removing unreachable block (ram,0x0675cb74) */
/* WARNING: Removing unreachable block (ram,0x0675cb7c) */
/* WARNING: Removing unreachable block (ram,0x0675cb98) */
/* WARNING: Removing unreachable block (ram,0x0675cba0) */
/* WARNING: Removing unreachable block (ram,0x0675cb8c) */
/* WARNING: Removing unreachable block (ram,0x0675cb90) */
/* WARNING: Removing unreachable block (ram,0x0675cb2c) */
/* WARNING: Removing unreachable block (ram,0x0675cb30) */
/* WARNING: Removing unreachable block (ram,0x0675cbb4) */
/* WARNING: Removing unreachable block (ram,0x0675cb3c) */
/* WARNING: Removing unreachable block (ram,0x0675cb40) */
/* WARNING: Removing unreachable block (ram,0x0675cbb8) */
/* WARNING: Removing unreachable block (ram,0x0675cbd0) */
/* WARNING: Removing unreachable block (ram,0x0675cbd8) */
/* WARNING: Removing unreachable block (ram,0x0675cbf0) */
/* WARNING: Removing unreachable block (ram,0x0675c9a0) */
/* WARNING: Removing unreachable block (ram,0x0675c9cc) */
/* WARNING: Removing unreachable block (ram,0x0675c9c0) */
/* WARNING: Removing unreachable block (ram,0x0675c8fc) */
/* WARNING: Removing unreachable block (ram,0x0675c914) */
/* WARNING: Removing unreachable block (ram,0x0675c91c) */
/* WARNING: Removing unreachable block (ram,0x0675c944) */
/* WARNING: Removing unreachable block (ram,0x0675c928) */
/* WARNING: Removing unreachable block (ram,0x0675c934) */
/* WARNING: Removing unreachable block (ram,0x0675c954) */
/* WARNING: Removing unreachable block (ram,0x0675c8b8) */
/* WARNING: Removing unreachable block (ram,0x0675c7b4) */
/* WARNING: Removing unreachable block (ram,0x0675c7d8) */
/* WARNING: Removing unreachable block (ram,0x0675c824) */
/* WARNING: Removing unreachable block (ram,0x0675cc00) */

void MergeEngine_ECS_Systems_Board_BoardInteractionSystem__BoardViewDestroyed(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *unaff_x23;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar5 = PTR_DAT_07807988;
  puVar4 = PTR_DAT_07807960;
  if ((bRam0000000007e28077 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077711d0);
    func_0x03280a18(PTR_DAT_077f1500);
    func_0x03280a18(PTR_DAT_07807958);
    func_0x03280a18(PTR_DAT_07807960);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_07807968);
    func_0x03280a18(PTR_DAT_07807970);
    func_0x03280a18(PTR_DAT_07807978);
    func_0x03280a18(PTR_DAT_07807980);
    func_0x03280a18(PTR_DAT_07807988);
    func_0x03280a18(PTR_DAT_07807998);
    func_0x03280a18(PTR_DAT_07807800);
    func_0x03280a18(PTR_DAT_077cc678);
    bRam0000000007e28077 = 1;
  }
  plVar14 = *(long **)(param_1 + 0xd0);
  uVar8 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x0542d8c0(uVar8,param_1,*(undefined8 *)puVar5,0);
  puVar7 = PTR_DAT_07807980;
  puVar6 = PTR_DAT_077f1500;
  puVar5 = PTR_DAT_077cc678;
  puStack_60 = puVar4;
  puStack_68 = unaff_x23;
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_077cc678) {
          puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_0675c3c4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_077cc678,1);
LAB_0675c3c4:
    (*(code *)*puVar9)(plVar14,uVar8,puVar9[1]);
    plVar14 = *(long **)(param_1 + 0xd0);
    uVar8 = func_0x03280ca0(*(undefined8 *)puVar6);
    func_0x0541dfd8(uVar8,param_1,*(undefined8 *)puVar7,0);
    puVar7 = PTR_DAT_07807968;
    puVar4 = PTR_DAT_077711d0;
    puStack_60 = puVar6;
    puStack_68 = puVar5;
    if (plVar14 != (long *)0x0) {
      lVar11 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
            puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 3) * 0x10 + 0x138);
            goto LAB_0675c458;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar5,3);
LAB_0675c458:
      (*(code *)*puVar9)(plVar14,uVar8,puVar9[1]);
      plVar14 = *(long **)(param_1 + 0xd0);
      uVar8 = func_0x03280ca0(*(undefined8 *)puVar4);
      func_0x05426724(uVar8,param_1,*(undefined8 *)puVar7,0);
      puVar7 = PTR_DAT_07807978;
      puVar4 = PTR_DAT_07807958;
      if (plVar14 != (long *)0x0) {
        lVar11 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 5) * 0x10 + 0x138);
              goto LAB_0675c4ec;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar5,5);
LAB_0675c4ec:
        (*(code *)*puVar9)(plVar14,uVar8,puVar9[1]);
        plVar14 = *(long **)(param_1 + 0xd0);
        uVar8 = func_0x03280ca0(*(undefined8 *)puVar4);
        func_0x04059d3c(uVar8,param_1,*(undefined8 *)puVar7,0);
        puVar7 = PTR_DAT_07807970;
        puVar4 = PTR_DAT_0774e758;
        if (plVar14 != (long *)0x0) {
          lVar11 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
                puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 7) * 0x10 + 0x138);
                goto LAB_0675c580;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar5,7);
LAB_0675c580:
          (*(code *)*puVar9)(plVar14,uVar8,puVar9[1]);
          plVar14 = *(long **)(param_1 + 0xd0);
          uVar8 = func_0x03280ca0(*(undefined8 *)puVar4);
          func_0x056ed730(uVar8,param_1,*(undefined8 *)puVar7,0);
          puVar4 = PTR_DAT_07807998;
          if (plVar14 != (long *)0x0) {
            lVar11 = *plVar14;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
                  puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 9) * 0x10 + 0x138);
                  goto LAB_0675c60c;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar9 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar5,9);
LAB_0675c60c:
            (*(code *)*puVar9)(plVar14,uVar8,puVar9[1]);
            plVar14 = (long *)func_0x0675b4d8(param_1);
            uVar8 = func_0x03280ca0(*(undefined8 *)puVar6);
            func_0x0541dfd8(uVar8,param_1,*(undefined8 *)puVar4,0);
            puStack_68 = puVar4;
            if (plVar14 != (long *)0x0) {
              lVar11 = *plVar14;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07807800) {
                    puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_0675c6a4;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar9 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07807800,1);
LAB_0675c6a4:
                    /* WARNING: Could not recover jumptable at 0x0675c6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar9)(plVar14,uVar8,puVar9[1]);
              return;
            }
          }
        }
      }
    }
  }
  lVar11 = func_0x03280cac();
  puVar5 = PTR_DAT_07807910;
  puVar4 = PTR_DAT_078078f0;
  puStack_70 = &UNK_0675c6c8;
  uStack_58 = uVar8;
  uStack_50 = 0;
  lStack_48 = param_1;
  if ((bRam0000000007e28078 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078078e8);
    func_0x03280a18(PTR_DAT_078078f0);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_07807900);
    func_0x03280a18(PTR_DAT_07807908);
    func_0x03280a18(PTR_DAT_07807910);
    func_0x03280a18(PTR_DAT_078079a0);
    func_0x03280a18(PTR_DAT_078079a8);
    func_0x03280a18(PTR_DAT_078079b0);
    bRam0000000007e28078 = 1;
  }
  lVar15 = *(long *)(lVar11 + 0xa0);
  uVar8 = func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x054221d4(uVar8,lVar11,*(undefined8 *)puVar5,0);
  puVar4 = PTR_DAT_0774e758;
  puStack_80 = (undefined *)lVar15;
  lStack_78 = lVar11;
  if (lVar15 != 0) {
    lVar11 = *(long *)PTR_DAT_078079b0;
    puStack_90 = &UNK_0675c7b4;
    lVar10 = *(long *)(lVar11 + 0x38);
    uStack_88 = uVar8;
    if (lVar10 == 0) {
      func_0x03256878(lVar11);
      lVar10 = *(long *)(lVar11 + 0x38);
    }
    lVar11 = *(long *)(lVar10 + 8);
    puStack_a0 = puStack_90;
    puStack_90 = puVar4;
    puVar9 = *(undefined8 **)(lVar11 + 0x38);
    if (puVar9 == (undefined8 *)0x0) {
      func_0x03280a18(PTR_DAT_0774e558);
      puVar9 = *(undefined8 **)(lVar11 + 0x38);
      if (puVar9 == (undefined8 *)0x0) {
        func_0x03256878(lVar11);
        puVar9 = *(undefined8 **)(lVar11 + 0x38);
      }
    }
    uVar16 = *puVar9;
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar16 = func_0x057a51c4(uVar16,0);
    puStack_90 = puStack_a0;
    puStack_a0 = (undefined *)0x0;
    uStack_98 = 0;
    func_0x072a6c4c(&puStack_a0,uVar16,0,0,1,0);
    func_0x07286e40(lVar15,puStack_a0,uStack_98,uVar8,1);
    return;
  }
  lVar11 = func_0x03280cac();
  puStack_80 = &UNK_0675c84c;
  uVar12 = func_0x0675b618();
  if ((uVar12 & 1) != 0) {
    puStack_90 = puStack_80;
    if ((bRam0000000007e2807a & 1) == 0) {
      puStack_80 = (undefined *)lVar15;
      func_0x03280a18(PTR_DAT_077cc678);
      func_0x03280a18(PTR_DAT_078079b8);
      bRam0000000007e2807a = 1;
    }
    puVar9 = (undefined8 *)(lVar11 + 0x60);
    *puVar9 = 0;
    if (iRam00000000080486b8 != 0) {
      puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  return;
}

