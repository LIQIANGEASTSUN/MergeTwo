/* Ghidra 12.1.2 native pseudocode; RVA 0x679D894; MergeEngine.ECS.Systems.Items.Producers.LowLevelItemProduce.LowLevelItemProduceByBoardState.TryResolveSpawnedItemSettings; status ok */


/* WARNING: Possible PIC construction at 0x0689e274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0689e298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0689e2d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0689e29c) */
/* WARNING: Removing unreachable block (ram,0x0689e278) */
/* WARNING: Removing unreachable block (ram,0x0689e2dc) */
/* WARNING: Removing unreachable block (ram,0x032809c4) */
/* WARNING: Removing unreachable block (ram,0x03281be4) */
/* WARNING: Removing unreachable block (ram,0x032f7084) */
/* WARNING: Removing unreachable block (ram,0x032f7090) */
/* WARNING: Removing unreachable block (ram,0x032f70b8) */
/* WARNING: Removing unreachable block (ram,0x032f70c0) */
/* WARNING: Removing unreachable block (ram,0x032f70c8) */

ulong MergeEngine_ECS_Systems_Items_Producers_LowLevelItemProduce_LowLevelItemProduceByBoardState__TryResolveSpawnedItemSettings
                (long param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  undefined1 auVar15 [16];
  
  puVar9 = param_3;
  if ((bRam0000000007e28dc6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078109a8);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e28dc6 = 1;
  }
  plVar13 = *(long **)(param_1 + 0x10);
  if (plVar13 != (long *)0x0) {
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x14) * 0x10 + 0x138);
          goto LAB_0689d938;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_0777a498,0x14);
LAB_0689d938:
    puVar9 = (undefined8 *)puVar6[1];
    uVar7 = (*(code *)*puVar6)(plVar13,param_2);
    if (param_2 != (long *)0x0) {
      lVar10 = *param_2;
      lVar14 = *(long *)PTR_DAT_078109a8;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      puVar9 = (undefined8 *)(ulong)*(ushort *)(lVar14 + 0x50);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)(lVar14 + 0x20)) {
            lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar14 + 0x50)) * 0x10 +
                     0x138;
            goto LAB_0689d9ac;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      lVar10 = func_0x03256b10(param_2);
LAB_0689d9ac:
      lVar10 = func_0x03280b88(*(undefined8 *)(lVar10 + 8),lVar14);
      lVar10 = (**(code **)(lVar10 + 8))(param_2,lVar10);
      if (lVar10 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = *(undefined4 *)(lVar10 + 0x50);
      }
      lVar10 = func_0x0689ce90(param_1);
      if (lVar10 != 0) {
        uVar2 = func_0x062b61b0(lVar10,uVar2,uVar7,0);
        uVar11 = func_0x0689cd04(param_1);
        if (((uVar11 & 1) != 0) &&
           (uVar11 = func_0x0689dad8(param_1,uVar2,uVar7,param_3), (uVar11 & 1) != 0)) {
          return 1;
        }
        if ((bRam0000000007e28dc8 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777a978);
          func_0x03280a18(PTR_DAT_0777a498);
          func_0x03280a18(PTR_DAT_078109b0);
          func_0x03280a18(PTR_DAT_0774e5d8);
          bRam0000000007e28dc8 = 1;
        }
        if (param_2 != (long *)0x0) {
          lVar10 = *param_2;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777a978) {
                puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_0689df50;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar9 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0777a978,1);
LAB_0689df50:
          lVar10 = (*(code *)*puVar9)(param_2,puVar9[1]);
          if (lVar10 != 0) {
            lVar10 = func_0x060ea5f4(lVar10,0);
            if (((lVar10 == 0) || (plVar13 = *(long **)(lVar10 + 0x10), plVar13 == (long *)0x0)) ||
               (lVar10 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0)),
               lVar10 == 0)) {
              lVar10 = **(long **)(*(long *)PTR_DAT_0774e5d8 + 0xb8);
            }
            uVar11 = func_0x055f7aac(lVar10,0);
            puVar1 = PTR_DAT_0777a498;
            if ((uVar11 & 1) != 0) {
LAB_0689e068:
              *param_3 = 0;
              func_0x032809c4(param_3,0);
              return 0;
            }
            plVar13 = *(long **)(param_1 + 0x10);
            if (plVar13 != (long *)0x0) {
              lVar14 = *plVar13;
              uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0777a498) {
                    puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 8) * 0x10 + 0x138);
                    goto LAB_0689e00c;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar9 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_0777a498,8);
LAB_0689e00c:
              uVar11 = (*(code *)*puVar9)(plVar13,lVar10,puVar9[1]);
              if ((uVar11 & 1) == 0) goto LAB_0689e068;
              plVar13 = *(long **)(param_1 + 0x10);
              if (plVar13 != (long *)0x0) {
                lVar14 = *plVar13;
                uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                      puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 9) * 0x10 + 0x138);
                      goto LAB_0689e090;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar9 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar1,9);
LAB_0689e090:
                uVar7 = (*(code *)*puVar9)(plVar13,lVar10,puVar9[1]);
                plVar13 = *(long **)(param_1 + 0x10);
                if (plVar13 != (long *)0x0) {
                  lVar14 = *plVar13;
                  uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
                  if (uVar11 != 0) {
                    piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                        puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0xf) * 0x10 + 0x138);
                        goto LAB_0689e0fc;
                      }
                      uVar11 = uVar11 - 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar11 != 0);
                  }
                  puVar9 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar1,0xf);
LAB_0689e0fc:
                  uVar8 = (*(code *)*puVar9)(plVar13,lVar10,uVar2,puVar9[1]);
                  plVar13 = *(long **)(param_1 + 0x10);
                  if (plVar13 != (long *)0x0) {
                    lVar14 = *plVar13;
                    uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
                    if (uVar11 != 0) {
                      piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                          puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x22) * 0x10 + 0x138);
                          goto LAB_0689e16c;
                        }
                        uVar11 = uVar11 - 1;
                        piVar12 = piVar12 + 4;
                      } while (uVar11 != 0);
                    }
                    puVar9 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar1,0x22);
LAB_0689e16c:
                    (*(code *)*puVar9)(plVar13,uVar7,puVar9[1]);
                    plVar13 = *(long **)(param_1 + 0x10);
                    if (plVar13 != (long *)0x0) {
                      lVar14 = *plVar13;
                      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
                      if (uVar11 != 0) {
                        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                            puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 0x22) * 0x10 + 0x138)
                            ;
                            goto LAB_0689e1d8;
                          }
                          uVar11 = uVar11 - 1;
                          piVar12 = piVar12 + 4;
                        } while (uVar11 != 0);
                      }
                      puVar9 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar1,0x22);
LAB_0689e1d8:
                      (*(code *)*puVar9)(plVar13,uVar8,puVar9[1]);
                      plVar13 = *(long **)(param_1 + 0x10);
                      if (plVar13 != (long *)0x0) {
                        lVar14 = *plVar13;
                        uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
                        if (uVar11 != 0) {
                          piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                              puVar9 = (undefined8 *)(lVar14 + (long)(*piVar12 + 4) * 0x10 + 0x138);
                              goto LAB_0689e244;
                            }
                            uVar11 = uVar11 - 1;
                            piVar12 = piVar12 + 4;
                          } while (uVar11 != 0);
                        }
                        puVar9 = (undefined8 *)func_0x03256b10(plVar13,*(long *)puVar1,4);
LAB_0689e244:
                        (*(code *)*puVar9)(plVar13,lVar10,puVar9[1]);
                        uVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078109b0);
                        return uVar11;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar11 = func_0x03280cac();
        return uVar11;
      }
    }
  }
  auVar15 = func_0x03280cac();
  uVar7 = auVar15._8_8_;
  lVar10 = func_0x0689e2fc();
  if (lVar10 != 0) {
    iVar3 = func_0x0676b038(lVar10,uVar7,0);
    lVar10 = func_0x0689e3dc(auVar15._0_8_);
    if ((lVar10 != 0) && (iVar4 = func_0x06381150(lVar10,uVar7,0), puVar9 != (undefined8 *)0x0)) {
      iVar5 = func_0x06a04a20(puVar9,uVar7,0);
      return (ulong)(uint)(iVar4 + iVar3 + iVar5);
    }
  }
  uVar11 = func_0x03280cac();
  return uVar11;
}

