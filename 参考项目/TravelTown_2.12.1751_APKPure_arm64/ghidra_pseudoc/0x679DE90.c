/* Ghidra 12.1.2 native pseudocode; RVA 0x679DE90; MergeEngine.ECS.Systems.Items.Producers.LowLevelItemProduce.LowLevelItemProduceByBoardState.TryPeekLocalSpawnedItem; status ok */


/* WARNING: Possible PIC construction at 0x0689e288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0689e074: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0689e28c) */
/* WARNING: Removing unreachable block (ram,0x0689e078) */
/* WARNING: Removing unreachable block (ram,0x0689e2a0) */

void MergeEngine_ECS_Systems_Items_Producers_LowLevelItemProduce_LowLevelItemProduceByBoardState__TryPeekLocalSpawnedItem
               (long param_1,undefined4 param_2,long *param_3,undefined8 *param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined1 auVar17 [12];
  
  plVar8 = param_3;
  puVar11 = param_4;
  if ((bRam0000000007e28dc8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a978);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_078109b0);
    func_0x03280a18(PTR_DAT_0774e5d8);
    bRam0000000007e28dc8 = 1;
  }
  uVar12 = SUB84(plVar8,0);
  if (param_3 != (long *)0x0) {
    lVar13 = *param_3;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0777a978) {
          puVar7 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_0689df50;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    uVar12 = 1;
    puVar7 = (undefined8 *)func_0x03256b10(param_3);
LAB_0689df50:
    lVar13 = (*(code *)*puVar7)(param_3,puVar7[1]);
    if (lVar13 != 0) {
      lVar13 = func_0x060ea5f4(lVar13,0);
      if ((lVar13 == 0) || (plVar8 = *(long **)(lVar13 + 0x10), plVar8 == (long *)0x0)) {
LAB_0689df88:
        lVar13 = **(long **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
      }
      else {
        lVar13 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
        if (lVar13 == 0) goto LAB_0689df88;
      }
      uVar15 = func_0x055f7aac(lVar13,0);
      puVar4 = PTR_DAT_0777a498;
      if ((uVar15 & 1) != 0) {
LAB_0689e068:
        *param_4 = 0;
        goto SUB_032809c4;
      }
      plVar8 = *(long **)(param_1 + 0x10);
      if (plVar8 != (long *)0x0) {
        lVar14 = *plVar8;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 8) * 0x10 + 0x138);
              goto LAB_0689e00c;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777a498,8);
LAB_0689e00c:
        uVar12 = (undefined4)puVar7[1];
        uVar15 = (*(code *)*puVar7)(plVar8,lVar13);
        if ((uVar15 & 1) == 0) goto LAB_0689e068;
        plVar8 = *(long **)(param_1 + 0x10);
        if (plVar8 != (long *)0x0) {
          lVar14 = *plVar8;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 9) * 0x10 + 0x138);
                goto LAB_0689e090;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar7 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar4,9);
LAB_0689e090:
          uVar12 = (undefined4)puVar7[1];
          uVar9 = (*(code *)*puVar7)(plVar8,lVar13);
          plVar8 = *(long **)(param_1 + 0x10);
          if (plVar8 != (long *)0x0) {
            lVar14 = *plVar8;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                  puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 0xf) * 0x10 + 0x138);
                  goto LAB_0689e0fc;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar7 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar4,0xf);
LAB_0689e0fc:
            puVar11 = (undefined8 *)puVar7[1];
            uVar12 = param_2;
            uVar10 = (*(code *)*puVar7)(plVar8,lVar13);
            plVar8 = *(long **)(param_1 + 0x10);
            if (plVar8 != (long *)0x0) {
              lVar14 = *plVar8;
              uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                    puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 0x22) * 0x10 + 0x138);
                    goto LAB_0689e16c;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar7 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar4,0x22);
LAB_0689e16c:
              uVar12 = (undefined4)puVar7[1];
              uVar5 = (*(code *)*puVar7)(plVar8,uVar9);
              plVar8 = *(long **)(param_1 + 0x10);
              if (plVar8 != (long *)0x0) {
                lVar14 = *plVar8;
                uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                      puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 0x22) * 0x10 + 0x138);
                      goto LAB_0689e1d8;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar7 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar4,0x22);
LAB_0689e1d8:
                uVar12 = (undefined4)puVar7[1];
                uVar6 = (*(code *)*puVar7)(plVar8,uVar10);
                plVar8 = *(long **)(param_1 + 0x10);
                if (plVar8 != (long *)0x0) {
                  lVar14 = *plVar8;
                  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  if (uVar15 != 0) {
                    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                        puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 4) * 0x10 + 0x138);
                        goto LAB_0689e244;
                      }
                      uVar15 = uVar15 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar15 != 0);
                  }
                  puVar11 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar4,4);
LAB_0689e244:
                  uVar9 = (*(code *)*puVar11)(plVar8,lVar13,puVar11[1]);
                  lVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078109b0);
                  func_0x057da5fc(lVar13,0);
                  *(undefined4 *)(lVar13 + 0x10) = uVar5;
                  *(undefined4 *)(lVar13 + 0x14) = uVar6;
                  param_4 = (undefined8 *)(lVar13 + 0x18);
                  *param_4 = uVar9;
                  goto SUB_032809c4;
                }
              }
            }
          }
        }
      }
    }
  }
  auVar17 = func_0x03280cac();
  lVar13 = auVar17._0_8_;
  func_0x057da5fc(lVar13,0);
  param_4 = (undefined8 *)(lVar13 + 0x18);
  *param_4 = puVar11;
  *(int *)(lVar13 + 0x10) = auVar17._8_4_;
  *(undefined4 *)(lVar13 + 0x14) = uVar12;
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)param_4 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)param_4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

