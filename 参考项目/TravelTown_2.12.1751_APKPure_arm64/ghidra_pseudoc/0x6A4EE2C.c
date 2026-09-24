/* Ghidra 12.1.2 native pseudocode; RVA 0x6A4EE2C; Merger.MergeBoard.Utils.SpawningItemsUtils.TryReplaceWithBoosted; status ok */


long * Merger_MergeBoard_Utils_SpawningItemsUtils__TryReplaceWithBoosted
                 (long *param_1,long param_2,long param_3,long *param_4,long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *extraout_x8;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [80];
  undefined1 auStack_100 [80];
  undefined8 uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long alStack_90 [6];
  
  if ((bRam0000000007e2a5ae & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_07774a48);
    func_0x03280a18(PTR_DAT_0777e518);
    func_0x03280a18(PTR_DAT_0777e520);
    func_0x03280a18(PTR_DAT_0774ea58);
    func_0x03280a18(PTR_DAT_0777e528);
    func_0x03280a18(PTR_DAT_0777e530);
    func_0x03280a18(PTR_DAT_0777e538);
    func_0x03280a18(PTR_DAT_0777e540);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777a590);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0777e4e8);
    func_0x03280a18(PTR_DAT_0777e4f0);
    func_0x03280a18(PTR_DAT_0782ff70);
    func_0x03280a18(PTR_DAT_0782ff78);
    func_0x03280a18(PTR_DAT_0782ff68);
    func_0x03280a18(PTR_DAT_0777e550);
    bRam0000000007e2a5ae = 1;
  }
  if ((param_2 == 0) ||
     (func_0x03d1b250(alStack_90,param_2,*(undefined8 *)PTR_DAT_0777a488), puVar1 = PTR_DAT_0777a590
     , param_5 == (long *)0x0)) goto LAB_06b4f578;
  lVar9 = *param_5;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777a590) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_06b4efc0;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)func_0x03256b10(param_5,*(long *)PTR_DAT_0777a590,0);
LAB_06b4efc0:
  uVar10 = (*(code *)*puVar6)(param_5,puVar6[1]);
  if ((uVar10 & 1) != 0) {
    lVar9 = *param_5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_06b4f020;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(param_5,*(long *)puVar1,1);
LAB_06b4f020:
    uVar10 = (*(code *)*puVar6)(param_5,puVar6[1]);
    if ((uVar10 & 1) != 0) {
      lVar9 = *param_5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
            goto LAB_06b4f080;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(param_5,*(long *)puVar1,5);
LAB_06b4f080:
      uVar10 = (*(code *)*puVar6)(param_5,alStack_90[0],puVar6[1]);
      puVar2 = PTR_DAT_0782ff68;
      if ((uVar10 & 1) != 0) {
        param_2 = alStack_90[0];
        if (param_3 != 0) {
          uVar12 = *(undefined8 *)(param_3 + 0x58);
          lVar9 = *(long *)PTR_DAT_0782ff68;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar9 = *(long *)puVar2;
          }
          lVar13 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
          if (lVar13 == 0) {
            if (*(int *)(lVar9 + 0xe0) == 0) {
              func_0x03280b8c();
              lVar9 = *(long *)puVar2;
            }
            uVar15 = **(undefined8 **)(lVar9 + 0xb8);
            lVar13 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777e538);
            func_0x053569b8(lVar13,uVar15,*(undefined8 *)PTR_DAT_0782ff70,0);
            plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
            *plVar7 = lVar13;
            func_0x032809c4(plVar7,lVar13);
          }
          lVar9 = func_0x03d50a94(uVar12,lVar13,*(undefined8 *)PTR_DAT_0777e518);
          lVar13 = *(long *)puVar2;
          param_2 = *(long *)(param_3 + 0x50);
          if (*(int *)(lVar13 + 0xe0) == 0) {
            func_0x03280b8c(lVar13);
            lVar13 = *(long *)puVar2;
          }
          lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
          if (lVar14 == 0) {
            if (*(int *)(lVar13 + 0xe0) == 0) {
              func_0x03280b8c(lVar13);
              lVar13 = *(long *)puVar2;
            }
            uVar12 = **(undefined8 **)(lVar13 + 0xb8);
            lVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777e540);
            func_0x053569b8(lVar14,uVar12,*(undefined8 *)PTR_DAT_0782ff78,0);
            plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
            *plVar7 = lVar14;
            func_0x032809c4(plVar7,lVar14);
          }
          uVar12 = func_0x03d50a94(param_2,lVar14,*(undefined8 *)PTR_DAT_0777e520);
          uVar12 = func_0x03d6049c(lVar9,uVar12,*(undefined8 *)PTR_DAT_0777e528);
          uVar12 = func_0x03d3c654(uVar12,*(undefined8 *)PTR_DAT_07774a48);
          lVar13 = func_0x03d5ffd0(uVar12,*(undefined8 *)PTR_DAT_0774ea58);
          param_3 = lVar9;
          if ((param_1 != (long *)0x0) &&
             (plVar7 = (long *)param_1[2], param_3 = lVar13, plVar7 != (long *)0x0)) {
            param_2 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
            lVar9 = *param_5;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                  puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                  goto LAB_06b4f27c;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined8 *)func_0x03256b10(param_5,*(long *)puVar1,2);
LAB_06b4f27c:
            uVar5 = (*(code *)*puVar6)(param_5,puVar6[1]);
            puVar1 = PTR_DAT_0777a498;
            if (param_4 != (long *)0x0) {
              lVar9 = *param_4;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777a498) {
                    puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xf) * 0x10 + 0x138);
                    goto LAB_06b4f2e8;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar6 = (undefined8 *)func_0x03256b10(param_4,*(long *)PTR_DAT_0777a498,0xf);
LAB_06b4f2e8:
              plVar7 = (long *)(*(code *)*puVar6)(param_4,param_2,uVar5,puVar6[1]);
              if (plVar7 == (long *)0x0) {
                return param_1;
              }
              lVar9 = *param_1;
              bVar4 = *(byte *)(*(long *)PTR_DAT_0777e530 + 0x130);
              if ((*(byte *)(lVar9 + 0x130) < bVar4) ||
                 (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar4 * 8 + -8) !=
                  *(long *)PTR_DAT_0777e530)) {
                bVar4 = *(byte *)(*(long *)PTR_DAT_0777e550 + 0x130);
                if ((*(byte *)(lVar9 + 0x130) < bVar4) ||
                   (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar4 * 8 + -8) !=
                    *(long *)PTR_DAT_0777e550)) {
                  plVar8 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_0777e4e8);
                  func_0x06b29aa4(plVar8,0);
                }
                else {
                  plVar8 = (long *)func_0x03280ca0();
                  func_0x06b29a84(plVar8,0);
                  param_5 = (long *)0x0;
                  if (plVar8 == (long *)0x0) goto LAB_06b4f578;
                  *(undefined4 *)((long)plVar8 + 0x24) = *(undefined4 *)((long)param_1 + 0x24);
                  *(char *)(plVar8 + 5) = (char)param_1[5];
                  *(undefined1 *)((long)plVar8 + 0x29) = *(undefined1 *)((long)param_1 + 0x29);
                }
              }
              else {
                plVar8 = (long *)func_0x03280ca0();
                func_0x06b29a94(plVar8,0);
                param_5 = (long *)0x0;
                if (plVar8 == (long *)0x0) goto LAB_06b4f578;
                *(undefined4 *)((long)plVar8 + 0x24) = *(undefined4 *)((long)param_1 + 0x24);
              }
              puVar2 = PTR_DAT_07779820;
              lVar9 = *plVar7;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07779820) {
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_06b4f44c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar6 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_07779820,0);
LAB_06b4f44c:
              uVar12 = (*(code *)*puVar6)(plVar7,puVar6[1]);
              lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777e4f0);
              func_0x06104718(lVar9,uVar12,0);
              param_5 = (long *)0x0;
              if (plVar8 != (long *)0x0) {
                plVar8[2] = lVar9;
                func_0x032809c4(plVar8 + 2,lVar9);
                *(undefined1 *)((long)plVar8 + 0x21) = *(undefined1 *)((long)param_1 + 0x21);
                *(char *)(plVar8 + 4) = (char)param_1[4];
                lVar9 = *plVar7;
                uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar10 != 0) {
                  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                      goto LAB_06b4f4f4;
                    }
                    uVar10 = uVar10 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 != 0);
                }
                puVar6 = (undefined8 *)func_0x03256b10(plVar7,*(long *)puVar2,0);
LAB_06b4f4f4:
                uVar12 = (*(code *)*puVar6)(plVar7,puVar6[1]);
                lVar9 = *param_4;
                uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar10 != 0) {
                  piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                      puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x21) * 0x10 + 0x138);
                      goto LAB_06b4f554;
                    }
                    uVar10 = uVar10 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar10 != 0);
                }
                puVar6 = (undefined8 *)func_0x03256b10(param_4,*(long *)puVar1,0x21);
LAB_06b4f554:
                bVar4 = (*(code *)*puVar6)(param_4,lVar13,uVar12,param_2,puVar6[1]);
                *(byte *)((long)plVar8 + 0x22) = bVar4 & 1;
                return plVar8;
              }
            }
          }
        }
LAB_06b4f578:
        auVar16 = func_0x03280cac();
        plVar8 = auVar16._0_8_;
        uStack_b0 = 0x6b4f57c;
        plVar7 = plVar8;
        plStack_a8 = param_5;
        plStack_a0 = param_1;
        plStack_98 = param_4;
        if ((bRam0000000007e2a5ad & 1) == 0) {
          plVar7 = (long *)func_0x03280a18(PTR_DAT_0782ff38);
          bRam0000000007e2a5ad = 1;
        }
        if (0 < *(int *)((long)plVar8 + 0x34)) {
          *(int *)((long)plVar8 + 0x34) = *(int *)((long)plVar8 + 0x34) + -1;
          *(int *)(plVar8 + 7) = (int)plVar8[7] + 1;
          *(int *)((long)plVar8 + 0x44) = *(int *)((long)plVar8 + 0x44) + 1;
          func_0x072ce970(auStack_150,plVar8,0x50);
          if (auVar16._8_8_ == 0) {
            func_0x03280cac();
            puVar3 = PTR_DAT_0782ff88;
            puVar2 = PTR_DAT_0782ff80;
            puVar1 = PTR_DAT_0774e478;
            uStack_180 = 0x6b4f628;
            uStack_168 = 0x7e2a000;
            lStack_178 = param_2;
            lStack_170 = param_3;
            auStack_160 = auVar16;
            if ((bRam0000000007e2a5af & 1) == 0) {
              func_0x03280a18(PTR_DAT_0774e478);
              func_0x03280a18(PTR_DAT_0782ff88);
              func_0x03280a18(PTR_DAT_0782ff80);
              bRam0000000007e2a5af = 1;
            }
            uStack_198 = 0;
            uStack_190 = 0;
            uStack_188 = 0;
            uVar12 = func_0x03280afc(*(undefined8 *)puVar1,0xb11);
            func_0x056b2284(uVar12,*(undefined8 *)puVar2,0);
            uStack_1a0 = uVar12;
            func_0x032809c4(&uStack_1a0,uVar12);
            uVar12 = func_0x03280afc(*(undefined8 *)puVar1,0x87d);
            func_0x056b2284(uVar12,*(undefined8 *)puVar3,0);
            uStack_198 = uVar12;
            plVar7 = (long *)func_0x032809c4(&uStack_198,uVar12);
            uStack_188 = uStack_188 & 0xffffffffffffff00;
            extraout_x8[1] = uStack_198;
            *extraout_x8 = uStack_1a0;
            extraout_x8[3] = uStack_188;
            extraout_x8[2] = 0x1e0000001e;
            return plVar7;
          }
          uVar12 = *(undefined8 *)PTR_DAT_0782ff38;
          func_0x072ce970(auStack_100,auStack_150,0x50);
          plVar7 = (long *)func_0x03d1dcc8(auVar16._8_8_,auStack_100,uVar12);
        }
        return plVar7;
      }
    }
  }
  return param_1;
}

