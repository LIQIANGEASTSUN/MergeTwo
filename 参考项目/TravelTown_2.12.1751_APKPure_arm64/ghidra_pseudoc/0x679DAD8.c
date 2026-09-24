/* Ghidra 12.1.2 native pseudocode; RVA 0x679DAD8; MergeEngine.ECS.Systems.Items.Producers.LowLevelItemProduce.LowLevelItemProduceByBoardState.TryPeekRemoteSpawnedItem; status ok */


/* WARNING: Possible PIC construction at 0x0689de5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0689e288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0689e074: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0689e28c) */
/* WARNING: Removing unreachable block (ram,0x0689de60) */
/* WARNING: Removing unreachable block (ram,0x0689e078) */
/* WARNING: Removing unreachable block (ram,0x0689e2a0) */

undefined8 *
MergeEngine_ECS_Systems_Items_Producers_LowLevelItemProduce_LowLevelItemProduceByBoardState__TryPeekRemoteSpawnedItem
          (long param_1,uint param_2,long *param_3,undefined8 *param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  long *plVar22;
  long *plVar23;
  double dVar24;
  undefined1 auVar25 [12];
  
  plVar22 = (long *)(ulong)param_2;
  plVar16 = param_3;
  puVar14 = param_4;
  if ((bRam0000000007e28dc7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4f8);
    func_0x03280a18(PTR_DAT_0774ee08);
    func_0x03280a18(PTR_DAT_078109b0);
    bRam0000000007e28dc7 = 1;
  }
  plVar23 = *(long **)(param_1 + 0x48);
  if (plVar23 != (long *)0x0) {
    lVar17 = *plVar23;
    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777e4f8) {
          puVar11 = (undefined8 *)(lVar17 + (long)(*piVar21 + 1) * 0x10 + 0x138);
          goto LAB_0689dba0;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_0777e4f8,1);
LAB_0689dba0:
    puVar14 = (undefined8 *)puVar11[1];
    uVar12 = (*(code *)*puVar11)(plVar23,param_3);
    uVar20 = func_0x055f7aac(uVar12,0);
    puVar5 = PTR_DAT_0777a498;
    if ((uVar20 & 1) != 0) {
LAB_0689dc80:
      *param_4 = 0;
      func_0x032809c4(param_4,0);
      return (undefined8 *)0x0;
    }
    plVar23 = *(long **)(param_1 + 0x10);
    plVar16 = plVar22;
    if (plVar23 != (long *)0x0) {
      lVar17 = *plVar23;
      uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar11 = (undefined8 *)(lVar17 + (long)(*piVar21 + 8) * 0x10 + 0x138);
            goto LAB_0689dc24;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_0777a498,8);
LAB_0689dc24:
      plVar16 = (long *)puVar11[1];
      uVar20 = (*(code *)*puVar11)(plVar23,uVar12);
      if ((uVar20 & 1) == 0) goto LAB_0689dc80;
      plVar22 = *(long **)(param_1 + 0x10);
      if (plVar22 != (long *)0x0) {
        lVar17 = *plVar22;
        uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
              puVar11 = (undefined8 *)(lVar17 + (long)(*piVar21 + 9) * 0x10 + 0x138);
              goto LAB_0689dca8;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(plVar22,*(long *)puVar5,9);
LAB_0689dca8:
        plVar16 = (long *)puVar11[1];
        uVar13 = (*(code *)*puVar11)(plVar22,uVar12);
        plVar22 = *(long **)(param_1 + 0x10);
        if (plVar22 != (long *)0x0) {
          lVar17 = *plVar22;
          uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
                puVar11 = (undefined8 *)(lVar17 + (long)(*piVar21 + 0x22) * 0x10 + 0x138);
                goto LAB_0689dd14;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar11 = (undefined8 *)func_0x03256b10(plVar22,*(long *)puVar5,0x22);
LAB_0689dd14:
          iVar6 = (*(code *)*puVar11)(plVar22,uVar13,puVar11[1]);
          if (cRam0000000007e24624 == '\0') {
            func_0x03280a18(PTR_DAT_0774ee08);
            cRam0000000007e24624 = '\x01';
          }
          puVar4 = PTR_DAT_0774ee08;
          if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          dVar24 = (double)func_0x05797280((double)(int)param_2,0x4000000000000000,0);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          iVar7 = -0x80000000;
          if ((float)dVar24 != INFINITY) {
            iVar7 = (int)dVar24;
          }
          iVar7 = func_0x05797438(1,iVar7,0);
          plVar16 = (long *)0x0;
          uVar8 = func_0x05797438(0,iVar6 - iVar7);
          plVar22 = *(long **)(param_1 + 0x10);
          if (plVar22 != (long *)0x0) {
            lVar17 = *plVar22;
            uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar20 != 0) {
              piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
                  puVar14 = (undefined8 *)(lVar17 + (long)(*piVar21 + 4) * 0x10 + 0x138);
                  goto LAB_0689de18;
                }
                uVar20 = uVar20 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar20 != 0);
            }
            puVar14 = (undefined8 *)func_0x03256b10(plVar22,*(long *)puVar5,4);
LAB_0689de18:
            uVar12 = (*(code *)*puVar14)(plVar22,uVar12,puVar14[1]);
            lVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078109b0);
            func_0x057da5fc(lVar17,0);
            *(undefined4 *)(lVar17 + 0x10) = uVar8;
            *(int *)(lVar17 + 0x14) = iVar6;
            puVar14 = (undefined8 *)(lVar17 + 0x18);
            *puVar14 = uVar12;
            goto SUB_032809c4;
          }
        }
      }
    }
  }
  auVar25 = func_0x03280cac();
  lVar17 = auVar25._0_8_;
  plVar22 = plVar16;
  puVar11 = puVar14;
  if ((bRam0000000007e28dc8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a978);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_078109b0);
    func_0x03280a18(PTR_DAT_0774e5d8);
    bRam0000000007e28dc8 = 1;
  }
  uVar8 = SUB84(plVar22,0);
  if (plVar16 != (long *)0x0) {
    lVar18 = *plVar16;
    uVar20 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777a978) {
          puVar15 = (undefined8 *)(lVar18 + (long)(*piVar21 + 1) * 0x10 + 0x138);
          goto LAB_0689df50;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    uVar8 = 1;
    puVar15 = (undefined8 *)func_0x03256b10(plVar16);
LAB_0689df50:
    lVar18 = (*(code *)*puVar15)(plVar16,puVar15[1]);
    if (lVar18 != 0) {
      lVar18 = func_0x060ea5f4(lVar18,0);
      if (((lVar18 == 0) || (plVar16 = *(long **)(lVar18 + 0x10), plVar16 == (long *)0x0)) ||
         (lVar18 = (**(code **)(*plVar16 + 0x1c8))(plVar16,*(undefined8 *)(*plVar16 + 0x1d0)),
         lVar18 == 0)) {
        lVar18 = **(long **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
      }
      uVar20 = func_0x055f7aac(lVar18,0);
      puVar5 = PTR_DAT_0777a498;
      if ((uVar20 & 1) != 0) {
LAB_0689e068:
        *puVar14 = 0;
        goto SUB_032809c4;
      }
      plVar16 = *(long **)(lVar17 + 0x10);
      if (plVar16 != (long *)0x0) {
        lVar19 = *plVar16;
        uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar20 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar15 = (undefined8 *)(lVar19 + (long)(*piVar21 + 8) * 0x10 + 0x138);
              goto LAB_0689e00c;
            }
            uVar20 = uVar20 - 1;
            piVar21 = piVar21 + 4;
          } while (uVar20 != 0);
        }
        puVar15 = (undefined8 *)func_0x03256b10(plVar16,*(long *)PTR_DAT_0777a498,8);
LAB_0689e00c:
        uVar8 = (undefined4)puVar15[1];
        uVar20 = (*(code *)*puVar15)(plVar16,lVar18);
        if ((uVar20 & 1) == 0) goto LAB_0689e068;
        plVar16 = *(long **)(lVar17 + 0x10);
        if (plVar16 != (long *)0x0) {
          lVar19 = *plVar16;
          uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar20 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
                puVar14 = (undefined8 *)(lVar19 + (long)(*piVar21 + 9) * 0x10 + 0x138);
                goto LAB_0689e090;
              }
              uVar20 = uVar20 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar20 != 0);
          }
          puVar14 = (undefined8 *)func_0x03256b10(plVar16,*(long *)puVar5,9);
LAB_0689e090:
          uVar8 = (undefined4)puVar14[1];
          uVar12 = (*(code *)*puVar14)(plVar16,lVar18);
          plVar16 = *(long **)(lVar17 + 0x10);
          if (plVar16 != (long *)0x0) {
            lVar19 = *plVar16;
            uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar20 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
                  puVar14 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0xf) * 0x10 + 0x138);
                  goto LAB_0689e0fc;
                }
                uVar20 = uVar20 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar20 != 0);
            }
            puVar14 = (undefined8 *)func_0x03256b10(plVar16,*(long *)puVar5,0xf);
LAB_0689e0fc:
            puVar11 = (undefined8 *)puVar14[1];
            uVar8 = auVar25._8_4_;
            uVar13 = (*(code *)*puVar14)(plVar16,lVar18);
            plVar16 = *(long **)(lVar17 + 0x10);
            if (plVar16 != (long *)0x0) {
              lVar19 = *plVar16;
              uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar20 != 0) {
                piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
                    puVar14 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0x22) * 0x10 + 0x138);
                    goto LAB_0689e16c;
                  }
                  uVar20 = uVar20 - 1;
                  piVar21 = piVar21 + 4;
                } while (uVar20 != 0);
              }
              puVar14 = (undefined8 *)func_0x03256b10(plVar16,*(long *)puVar5,0x22);
LAB_0689e16c:
              uVar8 = (undefined4)puVar14[1];
              uVar9 = (*(code *)*puVar14)(plVar16,uVar12);
              plVar16 = *(long **)(lVar17 + 0x10);
              if (plVar16 != (long *)0x0) {
                lVar19 = *plVar16;
                uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar20 != 0) {
                  piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
                      puVar14 = (undefined8 *)(lVar19 + (long)(*piVar21 + 0x22) * 0x10 + 0x138);
                      goto LAB_0689e1d8;
                    }
                    uVar20 = uVar20 - 1;
                    piVar21 = piVar21 + 4;
                  } while (uVar20 != 0);
                }
                puVar14 = (undefined8 *)func_0x03256b10(plVar16,*(long *)puVar5,0x22);
LAB_0689e1d8:
                uVar8 = (undefined4)puVar14[1];
                uVar10 = (*(code *)*puVar14)(plVar16,uVar13);
                plVar16 = *(long **)(lVar17 + 0x10);
                if (plVar16 != (long *)0x0) {
                  lVar17 = *plVar16;
                  uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar20 != 0) {
                    piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
                        puVar14 = (undefined8 *)(lVar17 + (long)(*piVar21 + 4) * 0x10 + 0x138);
                        goto LAB_0689e244;
                      }
                      uVar20 = uVar20 - 1;
                      piVar21 = piVar21 + 4;
                    } while (uVar20 != 0);
                  }
                  puVar14 = (undefined8 *)func_0x03256b10(plVar16,*(long *)puVar5,4);
LAB_0689e244:
                  uVar12 = (*(code *)*puVar14)(plVar16,lVar18,puVar14[1]);
                  lVar17 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078109b0);
                  func_0x057da5fc(lVar17,0);
                  *(undefined4 *)(lVar17 + 0x10) = uVar9;
                  *(undefined4 *)(lVar17 + 0x14) = uVar10;
                  puVar14 = (undefined8 *)(lVar17 + 0x18);
                  *puVar14 = uVar12;
                  goto SUB_032809c4;
                }
              }
            }
          }
        }
      }
    }
  }
  auVar25 = func_0x03280cac();
  lVar17 = auVar25._0_8_;
  func_0x057da5fc(lVar17,0);
  puVar14 = (undefined8 *)(lVar17 + 0x18);
  *puVar14 = puVar11;
  *(int *)(lVar17 + 0x10) = auVar25._8_4_;
  *(undefined4 *)(lVar17 + 0x14) = uVar8;
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar14 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar14 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return puVar14;
}

