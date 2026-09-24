/* Ghidra 12.1.2 native pseudocode; RVA 0x4C195DC; MergeEngine.ECS.Systems.State.Board.BoardItemsStateSystem<object>.ValidateTimeCycleComponent; status ok */

void MergeEngine_ECS_Systems_State_Board_BoardItemsStateSystem_object___ValidateTimeCycleComponent
               (long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  if ((bRam0000000007e1af09 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07780468);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_07780470);
    func_0x03280a18(PTR_DAT_07778fa0);
    bRam0000000007e1af09 = 1;
  }
  if (param_2 != 0) {
    lVar2 = func_0x03d20d84(param_2,*(undefined8 *)PTR_DAT_07780468);
    if ((lVar2 == 0) || (*(char *)(lVar2 + 0x65) == '\0')) {
      return;
    }
    plVar10 = *(long **)(param_1 + 0x60);
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x14) * 0x10 + 0x138);
            goto LAB_04d196d8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0777a498,0x14);
LAB_04d196d8:
      uVar4 = (*(code *)*puVar3)(plVar10,lVar2,puVar3[1]);
      plVar10 = *(long **)(param_1 + 0x68);
      if (plVar10 != (long *)0x0) {
        lVar2 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
        uVar11 = *(undefined8 *)PTR_DAT_07778fa0;
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0777e4a0) {
              puVar3 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_04d19754;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0777e4a0,0);
LAB_04d19754:
        uVar4 = (*(code *)*puVar3)(plVar10,uVar11,uVar4,param_2,0,puVar3[1]);
        lVar2 = *(long *)(param_1 + 0x78);
        if (lVar2 != 0) {
          uVar11 = 0;
          uVar5 = 0;
          if ((bRam0000000007e28edd & 1) == 0) {
            func_0x03280a18(PTR_DAT_07802f60);
            func_0x03280a18(PTR_DAT_07807698);
            bRam0000000007e28edd = 1;
          }
          plVar10 = *(long **)(lVar2 + 0x40);
          if (plVar10 != (long *)0x0) {
            lVar2 = *plVar10;
            lVar7 = *(long *)PTR_DAT_07802f60;
            uVar11 = *(undefined8 *)PTR_DAT_07807698;
            uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar2 = lVar2 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_068b9554;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            lVar2 = func_0x03256b10(plVar10);
LAB_068b9554:
            lVar2 = func_0x03280b88(*(undefined8 *)(lVar2 + 8),lVar7);
                    /* WARNING: Could not recover jumptable at 0x068b9588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar2 + 8))(plVar10,uVar11,uVar4,0,0,lVar2);
            return;
          }
          auVar13 = func_0x03280cac();
          uVar4 = uVar11;
          if ((bRam0000000007e28ede & 1) == 0) {
            func_0x03280a18(PTR_DAT_07802f60);
            func_0x03280a18(PTR_DAT_07811878);
            bRam0000000007e28ede = 1;
          }
          plVar10 = *(long **)(auVar13._0_8_ + 0x40);
          if (plVar10 != (long *)0x0) {
            lVar2 = *plVar10;
            lVar7 = *(long *)PTR_DAT_07802f60;
            uVar4 = *(undefined8 *)PTR_DAT_07811878;
            uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar2 = lVar2 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_068b9644;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            lVar2 = func_0x03256b10(plVar10);
LAB_068b9644:
            lVar2 = func_0x03280b88(*(undefined8 *)(lVar2 + 8),lVar7);
                    /* WARNING: Could not recover jumptable at 0x068b9678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar2 + 8))(plVar10,uVar4,auVar13._8_8_,0,uVar11,lVar2);
            return;
          }
          auVar13 = func_0x03280cac();
          uVar11 = uVar4;
          if ((bRam0000000007e28edf & 1) == 0) {
            func_0x03280a18(PTR_DAT_07802f60);
            func_0x03280a18(PTR_DAT_0776b160);
            bRam0000000007e28edf = 1;
          }
          plVar10 = *(long **)(auVar13._0_8_ + 0x40);
          if (plVar10 != (long *)0x0) {
            lVar2 = *plVar10;
            lVar7 = *(long *)PTR_DAT_07802f60;
            uVar11 = *(undefined8 *)PTR_DAT_0776b160;
            uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar2 = lVar2 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_068b9734;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            lVar2 = func_0x03256b10(plVar10);
LAB_068b9734:
            lVar2 = func_0x03280b88(*(undefined8 *)(lVar2 + 8),lVar7);
                    /* WARNING: Could not recover jumptable at 0x068b9768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar2 + 8))(plVar10,uVar11,auVar13._8_8_,0,uVar4,lVar2);
            return;
          }
          auVar13 = func_0x03280cac();
          if ((bRam0000000007e28ee0 & 1) == 0) {
            func_0x03280a18(PTR_DAT_07802f60);
            func_0x03280a18(PTR_DAT_07811880);
            bRam0000000007e28ee0 = 1;
          }
          plVar10 = *(long **)(auVar13._0_8_ + 0x40);
          if (plVar10 != (long *)0x0) {
            lVar2 = *plVar10;
            lVar7 = *(long *)PTR_DAT_07802f60;
            uVar4 = *(undefined8 *)PTR_DAT_07811880;
            uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar2 = lVar2 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_068b9820;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            lVar2 = func_0x03256b10(plVar10);
LAB_068b9820:
            lVar2 = func_0x03280b88(*(undefined8 *)(lVar2 + 8),lVar7);
                    /* WARNING: Could not recover jumptable at 0x068b9854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar2 + 8))(plVar10,uVar4,auVar13._8_8_,0,0,lVar2);
            return;
          }
          auVar13 = func_0x03280cac();
          if ((bRam0000000007e28ee1 & 1) == 0) {
            func_0x03280a18(PTR_DAT_07802f60);
            func_0x03280a18(PTR_DAT_07811888);
            bRam0000000007e28ee1 = 1;
          }
          plVar10 = *(long **)(auVar13._0_8_ + 0x40);
          if (plVar10 != (long *)0x0) {
            lVar2 = *plVar10;
            lVar7 = *(long *)PTR_DAT_07802f60;
            uVar4 = *(undefined8 *)PTR_DAT_07811888;
            uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar2 = lVar2 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_068b990c;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            lVar2 = func_0x03256b10(plVar10);
LAB_068b990c:
            lVar2 = func_0x03280b88(*(undefined8 *)(lVar2 + 8),lVar7);
                    /* WARNING: Could not recover jumptable at 0x068b9940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar2 + 8))(plVar10,uVar4,auVar13._8_8_,0,0,lVar2);
            return;
          }
          auVar13 = func_0x03280cac();
          puVar1 = PTR_DAT_0777aa98;
          uVar4 = uVar11;
          uVar6 = uVar5;
          if ((bRam0000000007e28ee2 & 1) == 0) {
            func_0x03280a18(PTR_DAT_0777aa98);
            func_0x03280a18(PTR_DAT_07802f60);
            func_0x03280a18(PTR_DAT_07811888);
            bRam0000000007e28ee2 = 1;
          }
          lVar2 = func_0x03280ca0(*(undefined8 *)puVar1);
          func_0x06a30df4(lVar2,0);
          if (lVar2 != 0) {
            *(undefined8 *)(lVar2 + 0x30) = uVar11;
            func_0x032809c4((undefined8 *)(lVar2 + 0x30),uVar11);
            *(undefined8 *)(lVar2 + 0x38) = uVar5;
            plVar10 = *(long **)(auVar13._0_8_ + 0x40);
            if (plVar10 != (long *)0x0) {
              lVar7 = *plVar10;
              lVar12 = *(long *)PTR_DAT_07802f60;
              uVar4 = *(undefined8 *)PTR_DAT_07811888;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)(lVar12 + 0x20)) {
                    lVar7 = lVar7 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 +
                            0x138;
                    goto LAB_068b9a48;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              lVar7 = func_0x03256b10(plVar10);
LAB_068b9a48:
              lVar7 = func_0x03280b88(*(undefined8 *)(lVar7 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x068b9a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar7 + 8))(plVar10,uVar4,auVar13._8_8_,0,lVar2,lVar7);
              return;
            }
          }
          auVar13 = func_0x03280cac();
          puVar1 = PTR_DAT_0777aa98;
          if ((bRam0000000007e28ee3 & 1) == 0) {
            func_0x03280a18(PTR_DAT_0777aa98);
            func_0x03280a18(PTR_DAT_07802f60);
            func_0x03280a18(PTR_DAT_077c1e10);
            bRam0000000007e28ee3 = 1;
          }
          lVar2 = func_0x03280ca0(*(undefined8 *)puVar1);
          func_0x06a30df4(lVar2,0);
          if (lVar2 != 0) {
            *(undefined8 *)(lVar2 + 0x30) = uVar4;
            func_0x032809c4((undefined8 *)(lVar2 + 0x30),uVar4);
            *(undefined8 *)(lVar2 + 0x38) = uVar6;
            plVar10 = *(long **)(auVar13._0_8_ + 0x40);
            if (plVar10 != (long *)0x0) {
              lVar7 = *plVar10;
              lVar12 = *(long *)PTR_DAT_07802f60;
              uVar4 = *(undefined8 *)PTR_DAT_077c1e10;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)(lVar12 + 0x20)) {
                    lVar7 = lVar7 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 +
                            0x138;
                    goto LAB_068b9b88;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              lVar7 = func_0x03256b10(plVar10);
LAB_068b9b88:
              lVar7 = func_0x03280b88(*(undefined8 *)(lVar7 + 8),lVar12);
                    /* WARNING: Could not recover jumptable at 0x068b9bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar7 + 8))(plVar10,uVar4,auVar13._8_8_,0,lVar2,lVar7);
              return;
            }
          }
          auVar13 = func_0x03280cac();
          if ((bRam0000000007e28ee4 & 1) == 0) {
            func_0x03280a18(PTR_DAT_07802f60);
            func_0x03280a18(PTR_DAT_077d7510);
            bRam0000000007e28ee4 = 1;
          }
          plVar10 = *(long **)(auVar13._0_8_ + 0x40);
          if (plVar10 != (long *)0x0) {
            lVar2 = *plVar10;
            lVar7 = *(long *)PTR_DAT_07802f60;
            uVar4 = *(undefined8 *)PTR_DAT_077d7510;
            uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar2 = lVar2 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_068b9c78;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            lVar2 = func_0x03256b10(plVar10);
LAB_068b9c78:
            lVar2 = func_0x03280b88(*(undefined8 *)(lVar2 + 8),lVar7);
                    /* WARNING: Could not recover jumptable at 0x068b9cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar2 + 8))(plVar10,uVar4,auVar13._8_8_,0,0,lVar2);
            return;
          }
          auVar13 = func_0x03280cac();
          if ((bRam0000000007e28ee5 & 1) == 0) {
            func_0x03280a18(PTR_DAT_07802f60);
            func_0x03280a18(PTR_DAT_07811890);
            bRam0000000007e28ee5 = 1;
          }
          plVar10 = *(long **)(auVar13._0_8_ + 0x40);
          if (plVar10 != (long *)0x0) {
            lVar2 = *plVar10;
            lVar7 = *(long *)PTR_DAT_07802f60;
            uVar4 = *(undefined8 *)PTR_DAT_07811890;
            uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar2 = lVar2 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_068b9d64;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            lVar2 = func_0x03256b10(plVar10);
LAB_068b9d64:
            lVar2 = func_0x03280b88(*(undefined8 *)(lVar2 + 8),lVar7);
                    /* WARNING: Could not recover jumptable at 0x068b9d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar2 + 8))(plVar10,uVar4,auVar13._8_8_,0,0,lVar2);
            return;
          }
          auVar13 = func_0x03280cac();
          if ((bRam0000000007e28ee6 & 1) == 0) {
            func_0x03280a18(PTR_DAT_0777ab08);
            func_0x03280a18(PTR_DAT_07811898);
            bRam0000000007e28ee6 = 1;
          }
          plVar10 = *(long **)(auVar13._0_8_ + 0x40);
          if (plVar10 != (long *)0x0) {
            lVar2 = *plVar10;
            lVar7 = *(long *)PTR_DAT_0777ab08;
            uVar4 = *(undefined8 *)PTR_DAT_07811898;
            uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)(lVar7 + 0x20)) {
                  lVar2 = lVar2 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_068b9e50;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            lVar2 = func_0x03256b10(plVar10);
LAB_068b9e50:
            lVar2 = func_0x03280b88(*(undefined8 *)(lVar2 + 8),lVar7);
                    /* WARNING: Could not recover jumptable at 0x068b9e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar2 + 8))(plVar10,uVar4,auVar13._8_8_,0,lVar2);
            return;
          }
          auVar13 = func_0x03280cac();
          if ((bRam0000000007e28ee7 & 1) == 0) {
            func_0x03280a18(PTR_DAT_07802f60);
            func_0x03280a18(PTR_DAT_078118a0);
            bRam0000000007e28ee7 = 1;
          }
          plVar10 = *(long **)(auVar13._0_8_ + 0x40);
          if (plVar10 == (long *)0x0) {
            func_0x03280cac();
            return;
          }
          lVar2 = *plVar10;
          lVar7 = *(long *)PTR_DAT_07802f60;
          uVar4 = *(undefined8 *)PTR_DAT_078118a0;
          uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)(lVar7 + 0x20)) {
                lVar2 = lVar2 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_068b9f38;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          lVar2 = func_0x03256b10(plVar10);
LAB_068b9f38:
          lVar2 = func_0x03280b88(*(undefined8 *)(lVar2 + 8),lVar7);
                    /* WARNING: Could not recover jumptable at 0x068b9f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar2 + 8))(plVar10,uVar4,auVar13._8_8_,0,0,lVar2);
          return;
        }
      }
    }
  }
  func_0x03280cac();
  return;
}

