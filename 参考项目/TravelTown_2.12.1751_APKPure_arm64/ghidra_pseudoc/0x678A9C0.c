/* Ghidra 12.1.2 native pseudocode; RVA 0x678A9C0; MergeEngine.ECS.Systems.Items.BoardTileLevelUnlockSystem.SendBoardOperation; status ok */

void MergeEngine_ECS_Systems_Items_BoardTileLevelUnlockSystem__SendBoardOperation
               (long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  if ((bRam0000000007e28d38 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777aa98);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_078102f0);
    func_0x03280a18(PTR_DAT_077ce978);
    func_0x03280a18(PTR_DAT_07778fa0);
    bRam0000000007e28d38 = 1;
  }
  plVar10 = *(long **)(param_1 + 0x48);
  if (plVar10 != (long *)0x0) {
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x14) * 0x10 + 0x138);
          goto LAB_0688aa98;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0777a498,0x14);
LAB_0688aa98:
    uVar3 = (*(code *)*puVar2)(plVar10,param_2,puVar2[1]);
    if ((param_2 != 0) && (plVar10 = *(long **)(param_1 + 0x40), plVar10 != (long *)0x0)) {
      lVar6 = *plVar10;
      uVar9 = *(undefined8 *)(param_2 + 0x10);
      uVar12 = *(undefined8 *)PTR_DAT_07778fa0;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      uVar11 = *(undefined8 *)PTR_DAT_077ce978;
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0777e4a0) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0688ab28;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0777e4a0,0);
LAB_0688ab28:
      lVar6 = (*(code *)*puVar2)(plVar10,uVar12,uVar3,uVar9,uVar11,puVar2[1]);
      puVar1 = PTR_DAT_078102f0;
      if (param_3 < 1) {
        lVar4 = 0;
      }
      else {
        lVar4 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aa98);
        func_0x06a30df4(lVar4,0);
        lVar5 = func_0x03280ca0(*(undefined8 *)puVar1);
        func_0x06a30f60(lVar5,0);
        if ((lVar5 == 0) || (*(undefined1 *)(lVar5 + 0x10) = 1, lVar4 == 0)) goto LAB_0688abf0;
        *(long *)(lVar4 + 0x10) = lVar5;
        func_0x032809c4((long *)(lVar4 + 0x10),lVar5);
      }
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x20) = lVar4;
        func_0x032809c4((long *)(lVar6 + 0x20),lVar4);
        lVar4 = *(long *)(param_1 + 0x60);
        if (lVar4 != 0) {
          uVar3 = 0;
          uVar9 = 0;
          if ((bRam0000000007e28edd & 1) == 0) {
            func_0x03280a18(PTR_DAT_07802f60);
            func_0x03280a18(PTR_DAT_07807698);
            bRam0000000007e28edd = 1;
          }
          plVar10 = *(long **)(lVar4 + 0x40);
          if (plVar10 != (long *)0x0) {
            lVar4 = *plVar10;
            lVar5 = *(long *)PTR_DAT_07802f60;
            uVar3 = *(undefined8 *)PTR_DAT_07807698;
            uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)(lVar5 + 0x20)) {
                  lVar4 = lVar4 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_068b9554;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            lVar4 = func_0x03256b10(plVar10);
LAB_068b9554:
            lVar4 = func_0x03280b88(*(undefined8 *)(lVar4 + 8),lVar5);
                    /* WARNING: Could not recover jumptable at 0x068b9588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar4 + 8))(plVar10,uVar3,lVar6,0,0,lVar4);
            return;
          }
          auVar13 = func_0x03280cac();
          uVar11 = uVar3;
          if ((bRam0000000007e28ede & 1) == 0) {
            func_0x03280a18(PTR_DAT_07802f60);
            func_0x03280a18(PTR_DAT_07811878);
            bRam0000000007e28ede = 1;
          }
          plVar10 = *(long **)(auVar13._0_8_ + 0x40);
          if (plVar10 != (long *)0x0) {
            lVar6 = *plVar10;
            lVar4 = *(long *)PTR_DAT_07802f60;
            uVar9 = *(undefined8 *)PTR_DAT_07811878;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)(lVar4 + 0x20)) {
                  lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar4 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_068b9644;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            lVar6 = func_0x03256b10(plVar10);
LAB_068b9644:
            lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar4);
                    /* WARNING: Could not recover jumptable at 0x068b9678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar6 + 8))(plVar10,uVar9,auVar13._8_8_,0,uVar3,lVar6);
            return;
          }
          auVar13 = func_0x03280cac();
          uVar3 = uVar11;
          if ((bRam0000000007e28edf & 1) == 0) {
            func_0x03280a18(PTR_DAT_07802f60);
            func_0x03280a18(PTR_DAT_0776b160);
            bRam0000000007e28edf = 1;
          }
          plVar10 = *(long **)(auVar13._0_8_ + 0x40);
          if (plVar10 != (long *)0x0) {
            lVar6 = *plVar10;
            lVar4 = *(long *)PTR_DAT_07802f60;
            uVar3 = *(undefined8 *)PTR_DAT_0776b160;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)(lVar4 + 0x20)) {
                  lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar4 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_068b9734;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            lVar6 = func_0x03256b10(plVar10);
LAB_068b9734:
            lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar4);
                    /* WARNING: Could not recover jumptable at 0x068b9768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar6 + 8))(plVar10,uVar3,auVar13._8_8_,0,uVar11,lVar6);
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
            lVar6 = *plVar10;
            lVar4 = *(long *)PTR_DAT_07802f60;
            uVar3 = *(undefined8 *)PTR_DAT_07811880;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)(lVar4 + 0x20)) {
                  lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar4 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_068b9820;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            lVar6 = func_0x03256b10(plVar10);
LAB_068b9820:
            lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar4);
                    /* WARNING: Could not recover jumptable at 0x068b9854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar6 + 8))(plVar10,uVar3,auVar13._8_8_,0,0,lVar6);
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
            lVar6 = *plVar10;
            lVar4 = *(long *)PTR_DAT_07802f60;
            uVar3 = *(undefined8 *)PTR_DAT_07811888;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)(lVar4 + 0x20)) {
                  lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar4 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_068b990c;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            lVar6 = func_0x03256b10(plVar10);
LAB_068b990c:
            lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar4);
                    /* WARNING: Could not recover jumptable at 0x068b9940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar6 + 8))(plVar10,uVar3,auVar13._8_8_,0,0,lVar6);
            return;
          }
          auVar13 = func_0x03280cac();
          puVar1 = PTR_DAT_0777aa98;
          uVar11 = uVar3;
          uVar12 = uVar9;
          if ((bRam0000000007e28ee2 & 1) == 0) {
            func_0x03280a18(PTR_DAT_0777aa98);
            func_0x03280a18(PTR_DAT_07802f60);
            func_0x03280a18(PTR_DAT_07811888);
            bRam0000000007e28ee2 = 1;
          }
          lVar6 = func_0x03280ca0(*(undefined8 *)puVar1);
          func_0x06a30df4(lVar6,0);
          if (lVar6 != 0) {
            *(undefined8 *)(lVar6 + 0x30) = uVar3;
            func_0x032809c4((undefined8 *)(lVar6 + 0x30),uVar3);
            *(undefined8 *)(lVar6 + 0x38) = uVar9;
            plVar10 = *(long **)(auVar13._0_8_ + 0x40);
            if (plVar10 != (long *)0x0) {
              lVar4 = *plVar10;
              lVar5 = *(long *)PTR_DAT_07802f60;
              uVar3 = *(undefined8 *)PTR_DAT_07811888;
              uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)(lVar5 + 0x20)) {
                    lVar4 = lVar4 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 +
                            0x138;
                    goto LAB_068b9a48;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              lVar4 = func_0x03256b10(plVar10);
LAB_068b9a48:
              lVar4 = func_0x03280b88(*(undefined8 *)(lVar4 + 8),lVar5);
                    /* WARNING: Could not recover jumptable at 0x068b9a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar4 + 8))(plVar10,uVar3,auVar13._8_8_,0,lVar6,lVar4);
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
          lVar6 = func_0x03280ca0(*(undefined8 *)puVar1);
          func_0x06a30df4(lVar6,0);
          if (lVar6 != 0) {
            *(undefined8 *)(lVar6 + 0x30) = uVar11;
            func_0x032809c4((undefined8 *)(lVar6 + 0x30),uVar11);
            *(undefined8 *)(lVar6 + 0x38) = uVar12;
            plVar10 = *(long **)(auVar13._0_8_ + 0x40);
            if (plVar10 != (long *)0x0) {
              lVar4 = *plVar10;
              lVar5 = *(long *)PTR_DAT_07802f60;
              uVar3 = *(undefined8 *)PTR_DAT_077c1e10;
              uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)(lVar5 + 0x20)) {
                    lVar4 = lVar4 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 +
                            0x138;
                    goto LAB_068b9b88;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              lVar4 = func_0x03256b10(plVar10);
LAB_068b9b88:
              lVar4 = func_0x03280b88(*(undefined8 *)(lVar4 + 8),lVar5);
                    /* WARNING: Could not recover jumptable at 0x068b9bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar4 + 8))(plVar10,uVar3,auVar13._8_8_,0,lVar6,lVar4);
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
            lVar6 = *plVar10;
            lVar4 = *(long *)PTR_DAT_07802f60;
            uVar3 = *(undefined8 *)PTR_DAT_077d7510;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)(lVar4 + 0x20)) {
                  lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar4 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_068b9c78;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            lVar6 = func_0x03256b10(plVar10);
LAB_068b9c78:
            lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar4);
                    /* WARNING: Could not recover jumptable at 0x068b9cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar6 + 8))(plVar10,uVar3,auVar13._8_8_,0,0,lVar6);
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
            lVar6 = *plVar10;
            lVar4 = *(long *)PTR_DAT_07802f60;
            uVar3 = *(undefined8 *)PTR_DAT_07811890;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)(lVar4 + 0x20)) {
                  lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar4 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_068b9d64;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            lVar6 = func_0x03256b10(plVar10);
LAB_068b9d64:
            lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar4);
                    /* WARNING: Could not recover jumptable at 0x068b9d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar6 + 8))(plVar10,uVar3,auVar13._8_8_,0,0,lVar6);
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
            lVar6 = *plVar10;
            lVar4 = *(long *)PTR_DAT_0777ab08;
            uVar3 = *(undefined8 *)PTR_DAT_07811898;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)(lVar4 + 0x20)) {
                  lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar4 + 0x50)) * 0x10 +
                          0x138;
                  goto LAB_068b9e50;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            lVar6 = func_0x03256b10(plVar10);
LAB_068b9e50:
            lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar4);
                    /* WARNING: Could not recover jumptable at 0x068b9e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar6 + 8))(plVar10,uVar3,auVar13._8_8_,0,lVar6);
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
          lVar6 = *plVar10;
          lVar4 = *(long *)PTR_DAT_07802f60;
          uVar3 = *(undefined8 *)PTR_DAT_078118a0;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)(lVar4 + 0x20)) {
                lVar6 = lVar6 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar4 + 0x50)) * 0x10 +
                        0x138;
                goto LAB_068b9f38;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          lVar6 = func_0x03256b10(plVar10);
LAB_068b9f38:
          lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar4);
                    /* WARNING: Could not recover jumptable at 0x068b9f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar6 + 8))(plVar10,uVar3,auVar13._8_8_,0,0,lVar6);
          return;
        }
      }
    }
  }
LAB_0688abf0:
  func_0x03280cac();
  return;
}

