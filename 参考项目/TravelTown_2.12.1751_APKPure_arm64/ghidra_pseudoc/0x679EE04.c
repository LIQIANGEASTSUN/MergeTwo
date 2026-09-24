/* Ghidra 12.1.2 native pseudocode; RVA 0x679EE04; MergeEngine.ECS.Systems.Items.Producers.LowLevelItemProduce.LowLevelItemProduceByOrder.ShouldSpawnLowLevelItem; status ok */


ulong MergeEngine_ECS_Systems_Items_Producers_LowLevelItemProduce_LowLevelItemProduceByOrder__ShouldSpawnLowLevelItem
                (long param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  long *plVar15;
  double dVar16;
  
  if ((bRam0000000007e28dcb & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0777e278);
    bRam0000000007e28dcb = 1;
  }
  puVar2 = PTR_DAT_0777a498;
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0777e278 + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0777e278))
    {
      plVar15 = *(long **)(param_1 + 0x10);
      if (plVar15 == (long *)0x0) {
SUB_057da5fc:
        uVar12 = func_0x03280cac();
        return uVar12;
      }
      lVar10 = *plVar15;
      plVar14 = (long *)param_2[8];
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x14) * 0x10 + 0x138);
            goto LAB_0689ef10;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777a498,0x14);
LAB_0689ef10:
      plVar15 = (long *)(*(code *)*puVar6)(plVar15,param_3,puVar6[1]);
      if (plVar15 == (long *)0x0) {
        uVar8 = 0;
      }
      else {
        lVar10 = *plVar15;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777e548) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x1b) * 0x10 + 0x138);
              goto LAB_0689ef88;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777e548,0x1b);
LAB_0689ef88:
        plVar7 = (long *)(*(code *)*puVar6)(plVar15,puVar6[1]);
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          lVar10 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07779820) {
                puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0689eff0;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_07779820,0);
LAB_0689eff0:
          uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
      }
      if (plVar14 == (long *)0x0) goto SUB_057da5fc;
      lVar10 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777e548) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x1b) * 0x10 + 0x138);
            goto LAB_0689f05c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0777e548,0x1b);
LAB_0689f05c:
      plVar7 = (long *)(*(code *)*puVar6)(plVar14,puVar6[1]);
      if (plVar7 == (long *)0x0) {
        uVar9 = 0;
      }
      else {
        lVar10 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x11) * 0x10 + 0x138);
              goto LAB_0689f0d8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0777c248,0x11);
LAB_0689f0d8:
        plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar7 == (long *)0x0) {
          uVar9 = 0;
        }
        else {
          lVar10 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07779820) {
                puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0689f154;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_07779820,0);
LAB_0689f154:
          uVar9 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
      }
      uVar12 = func_0x055f7004(uVar8,uVar9,0);
      if ((uVar12 & 1) == 0) {
        plVar7 = *(long **)(param_1 + 0x10);
        if (plVar7 == (long *)0x0) goto SUB_057da5fc;
        lVar11 = *plVar7;
        lVar10 = *(long *)puVar2;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x18) * 0x10 + 0x138);
              goto LAB_0689f1cc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar7,lVar10,0x18);
LAB_0689f1cc:
        uVar12 = (*(code *)*puVar6)(plVar7,plVar14,plVar15,puVar6[1]);
        if ((uVar12 & 1) != 0) {
          plVar15 = *(long **)(param_1 + 0x10);
          if (plVar15 == (long *)0x0) goto SUB_057da5fc;
          lVar11 = *plVar15;
          lVar10 = *(long *)puVar2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x22) * 0x10 + 0x138);
                goto LAB_0689f23c;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)func_0x03256b10(plVar15,lVar10,0x22);
LAB_0689f23c:
          iVar3 = (*(code *)*puVar6)(plVar15,plVar14,puVar6[1]);
          lVar10 = func_0x0689ce90(param_1);
          if (lVar10 == 0) goto SUB_057da5fc;
          iVar4 = func_0x062b1fc8(lVar10,0);
          if (cRam0000000007e24624 == '\0') {
            func_0x03280a18(PTR_DAT_0774ee08);
            cRam0000000007e24624 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          dVar16 = (double)func_0x05797280((double)iVar4,0x4000000000000000,0);
          iVar4 = -0x80000000;
          if ((float)dVar16 != INFINITY) {
            iVar4 = (int)dVar16;
          }
          if (iVar4 < 2) {
            iVar4 = 1;
          }
          if (iVar3 < iVar4) {
            lVar10 = func_0x0689e2fc(param_1);
            puVar2 = PTR_DAT_07779820;
            lVar11 = *plVar14;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07779820) {
                  puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0689f340;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07779820,0);
LAB_0689f340:
            uVar8 = (*(code *)*puVar6)(plVar14,puVar6[1]);
            if (lVar10 == 0) goto SUB_057da5fc;
            uVar12 = func_0x0676af0c(lVar10,uVar8,0);
            if ((uVar12 & 1) == 0) {
              lVar10 = func_0x0689e3dc(param_1);
              lVar11 = *plVar14;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                    puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_0689f3dc;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar2,0);
LAB_0689f3dc:
              uVar8 = (*(code *)*puVar6)(plVar14,puVar6[1]);
              if (lVar10 == 0) goto SUB_057da5fc;
              uVar5 = func_0x06380fb0(lVar10,uVar8,0);
              uVar5 = uVar5 ^ 1;
              goto LAB_0689f368;
            }
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_0689f368:
  return (ulong)(uVar5 & 1);
}

