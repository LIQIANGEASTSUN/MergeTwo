/* Ghidra 12.1.2 native pseudocode; RVA 0x679E684; MergeEngine.ECS.Systems.Items.Producers.LowLevelItemProduce.LowLevelItemProduceByOrder.TryGetProduceData; status ok */


/* WARNING: Possible PIC construction at 0x0689e984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0689ea84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0689e988) */
/* WARNING: Removing unreachable block (ram,0x0689e98c) */
/* WARNING: Removing unreachable block (ram,0x0689e9b8) */
/* WARNING: Removing unreachable block (ram,0x0689ec4c) */
/* WARNING: Removing unreachable block (ram,0x0689e9bc) */
/* WARNING: Removing unreachable block (ram,0x0689e9d4) */
/* WARNING: Removing unreachable block (ram,0x0689ec40) */
/* WARNING: Removing unreachable block (ram,0x0689e9e8) */
/* WARNING: Removing unreachable block (ram,0x0689ec54) */
/* WARNING: Removing unreachable block (ram,0x0689e9f0) */
/* WARNING: Removing unreachable block (ram,0x0689ea0c) */
/* WARNING: Removing unreachable block (ram,0x0689ea14) */
/* WARNING: Removing unreachable block (ram,0x0689ea48) */
/* WARNING: Removing unreachable block (ram,0x0689ea20) */
/* WARNING: Removing unreachable block (ram,0x0689ea2c) */
/* WARNING: Removing unreachable block (ram,0x0689ea58) */
/* WARNING: Removing unreachable block (ram,0x0689ea88) */
/* WARNING: Removing unreachable block (ram,0x0689ec5c) */
/* WARNING: Removing unreachable block (ram,0x0689ea90) */
/* WARNING: Removing unreachable block (ram,0x0689eaa8) */
/* WARNING: Removing unreachable block (ram,0x0689eab0) */
/* WARNING: Removing unreachable block (ram,0x0689ead8) */
/* WARNING: Removing unreachable block (ram,0x0689eabc) */
/* WARNING: Removing unreachable block (ram,0x0689eac8) */
/* WARNING: Removing unreachable block (ram,0x0689eae4) */
/* WARNING: Removing unreachable block (ram,0x0689ec64) */
/* WARNING: Removing unreachable block (ram,0x0689eaf8) */
/* WARNING: Removing unreachable block (ram,0x0689ec6c) */
/* WARNING: Removing unreachable block (ram,0x0689eb1c) */
/* WARNING: Removing unreachable block (ram,0x0689eb34) */
/* WARNING: Removing unreachable block (ram,0x0689eb3c) */
/* WARNING: Removing unreachable block (ram,0x0689eb64) */
/* WARNING: Removing unreachable block (ram,0x0689eb48) */
/* WARNING: Removing unreachable block (ram,0x0689eb54) */
/* WARNING: Removing unreachable block (ram,0x0689eb70) */
/* WARNING: Removing unreachable block (ram,0x0689eba0) */
/* WARNING: Removing unreachable block (ram,0x0689eba4) */
/* WARNING: Removing unreachable block (ram,0x0689ebc0) */
/* WARNING: Removing unreachable block (ram,0x0689ebc4) */
/* WARNING: Removing unreachable block (ram,0x0689ebc8) */
/* WARNING: Removing unreachable block (ram,0x0689ec3c) */

ulong MergeEngine_ECS_Systems_Items_Producers_LowLevelItemProduce_LowLevelItemProduceByOrder__TryGetProduceData
                (long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *unaff_x23;
  undefined *puVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  uint uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  puVar13 = param_3;
  if ((bRam0000000007e28dca & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f430);
    func_0x03280a18(PTR_DAT_077da3c8);
    func_0x03280a18(PTR_DAT_077c4718);
    func_0x03280a18(PTR_DAT_077c4720);
    func_0x03280a18(PTR_DAT_077da3d0);
    func_0x03280a18(PTR_DAT_077da3d8);
    func_0x03280a18(PTR_DAT_077c4728);
    func_0x03280a18(PTR_DAT_077d67e0);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777ab60);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_077c4730);
    func_0x03280a18(PTR_DAT_077da3e8);
    func_0x03280a18(PTR_DAT_07810998);
    func_0x03280a18(PTR_DAT_0774ee08);
    func_0x03280a18(PTR_DAT_077d76c8);
    func_0x03280a18(PTR_DAT_0777e278);
    func_0x03280a18(PTR_DAT_078109b8);
    bRam0000000007e28dca = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_a0 = 0;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  *param_3 = 0;
  func_0x032809c4(param_3,0);
  uVar9 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  if ((int)uVar9 == 0) {
    return uVar9;
  }
  uVar9 = func_0x0689d1b8(param_1,param_2);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  plVar17 = (long *)param_1[9];
  if (plVar17 != (long *)0x0) {
    lVar14 = *plVar17;
    unaff_x23 = *(undefined8 **)PTR_DAT_077d67e0;
    uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
    puVar13 = (undefined8 *)(ulong)*(ushort *)(unaff_x23 + 10);
    if (uVar9 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == unaff_x23[4]) {
          lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(unaff_x23 + 10)) * 0x10 + 0x138
          ;
          goto LAB_0689e848;
        }
        uVar9 = uVar9 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar9 != 0);
    }
    lVar14 = func_0x03256b10(plVar17);
LAB_0689e848:
    lVar14 = func_0x03280b88(*(undefined8 *)(lVar14 + 8),unaff_x23);
    lVar14 = (**(code **)(lVar14 + 8))(plVar17,lVar14);
    if ((lVar14 != 0) && (*(long *)(lVar14 + 0x50) != 0)) {
      func_0x04145068(&uStack_b8,*(long *)(lVar14 + 0x50),*(undefined8 *)PTR_DAT_077c4730);
      puVar5 = PTR_DAT_077da3d0;
      puVar4 = PTR_DAT_077d76c8;
      puVar3 = PTR_DAT_077c4720;
      puVar2 = PTR_DAT_0776f430;
      uStack_bc = 0;
      uStack_78 = uStack_b0;
      uStack_80 = uStack_b8;
      plStack_70 = plStack_a8;
      unaff_x23 = (undefined8 *)PTR_DAT_077da3e8;
      puVar19 = PTR_DAT_0777e278;
      while (uVar9 = func_0x051159b4(&uStack_80,*(undefined8 *)puVar3), plVar17 = plStack_70,
            (uVar9 & 1) != 0) {
        if (plStack_70 == (long *)0x0) {
          func_0x03280cac();
          plVar17 = (long *)0x0;
          goto LAB_0689ed24;
        }
        if ((((char)plStack_70[10] == '\0') &&
            (uVar9 = func_0x04d0e0dc(plStack_70[7],*(undefined8 *)puVar2), (uVar9 & 1) == 0)) &&
           (uVar9 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400)),
           (uVar9 & 1) == 0)) {
          lVar14 = *plVar17;
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
            lVar14 = (**(code **)(lVar14 + 0x198))(plVar17,*(undefined8 *)(lVar14 + 0x1a0));
            if (lVar14 == 0) goto LAB_0689ed54;
            func_0x04145068(&uStack_b8,lVar14,*unaff_x23);
            uStack_98 = uStack_b0;
            uStack_a0 = uStack_b8;
            plStack_90 = plStack_a8;
            uVar9 = func_0x051159b4(&uStack_a0,*(undefined8 *)puVar5);
            plVar17 = plStack_90;
            if ((uVar9 & 1) != 0) goto SUB_0689ee04;
            func_0x051159b0(&uStack_a0,*(undefined8 *)PTR_DAT_077da3c8);
            unaff_x23 = (undefined8 *)PTR_DAT_077da3e8;
            puVar19 = PTR_DAT_0777e278;
          }
        }
      }
      iVar6 = 9;
      func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_077c4718);
      goto LAB_0689ecf0;
    }
  }
LAB_0689ed24:
  auVar22._8_4_ = (int)unaff_x23;
  auVar22._0_8_ = plVar17;
  func_0x03280cac();
  puVar19 = (undefined *)0x0;
  goto LAB_0689ed2c;
LAB_0689ed54:
  while( true ) {
    auVar22 = func_0x03280cac();
LAB_0689ed2c:
    uVar10 = auVar22._0_8_;
    func_0x051159b0(&uStack_a0,*(undefined8 *)PTR_DAT_077da3c8);
    if (puVar19 == (undefined *)0x0) break;
    func_0x03280ca4(puVar19);
    func_0x03280ca4(puVar19);
  }
  if (auVar22._8_4_ == 1) {
    plVar17 = (long *)func_0x072ce910(uVar10);
    lVar14 = *plVar17;
    func_0x072ce920();
    func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_077c4718);
    if (lVar14 == 0) {
      iVar6 = 0;
LAB_0689ecf0:
      return (ulong)(uStack_bc & iVar6 == 8);
    }
    uVar10 = func_0x03280ca4(lVar14);
    param_2 = puVar13;
  }
  else {
    lVar14 = 0;
    param_2 = puVar13;
  }
  func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_077c4718);
  if (lVar14 == 0) {
    func_0x03365958(uVar10);
  }
  func_0x03280ca4(lVar14);
  auVar21 = func_0x02f09514();
  param_1 = auVar21._0_8_;
  plVar17 = auVar21._8_8_;
SUB_0689ee04:
  if ((bRam0000000007e28dcb & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0777e278);
    bRam0000000007e28dcb = 1;
  }
  puVar2 = PTR_DAT_0777a498;
  if (plVar17 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0777e278 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar17 + 0x130)) &&
       (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0777e278))
    {
      plVar18 = (long *)param_1[2];
      if (plVar18 == (long *)0x0) {
SUB_057da5fc:
        uVar9 = func_0x03280cac();
        return uVar9;
      }
      lVar14 = *plVar18;
      plVar17 = (long *)plVar17[8];
      uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar9 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar13 = (undefined8 *)(lVar14 + (long)(*piVar16 + 0x14) * 0x10 + 0x138);
            goto LAB_0689ef10;
          }
          uVar9 = uVar9 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar9 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_0777a498,0x14);
LAB_0689ef10:
      plVar18 = (long *)(*(code *)*puVar13)(plVar18,param_2,puVar13[1]);
      if (plVar18 == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        lVar14 = *plVar18;
        uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar9 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0777e548) {
              puVar13 = (undefined8 *)(lVar14 + (long)(*piVar16 + 0x1b) * 0x10 + 0x138);
              goto LAB_0689ef88;
            }
            uVar9 = uVar9 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar9 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_0777e548,0x1b);
LAB_0689ef88:
        plVar11 = (long *)(*(code *)*puVar13)(plVar18,puVar13[1]);
        uVar10 = 0;
        if (plVar11 != (long *)0x0) {
          lVar14 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07779820) {
                puVar13 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0689eff0;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_07779820,0);
LAB_0689eff0:
          uVar10 = (*(code *)*puVar13)(plVar11,puVar13[1]);
        }
      }
      if (plVar17 == (long *)0x0) goto SUB_057da5fc;
      lVar14 = *plVar17;
      uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar9 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0777e548) {
            puVar13 = (undefined8 *)(lVar14 + (long)(*piVar16 + 0x1b) * 0x10 + 0x138);
            goto LAB_0689f05c;
          }
          uVar9 = uVar9 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar9 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_0777e548,0x1b);
LAB_0689f05c:
      plVar11 = (long *)(*(code *)*puVar13)(plVar17,puVar13[1]);
      if (plVar11 == (long *)0x0) {
        uVar12 = 0;
      }
      else {
        lVar14 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar9 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar13 = (undefined8 *)(lVar14 + (long)(*piVar16 + 0x11) * 0x10 + 0x138);
              goto LAB_0689f0d8;
            }
            uVar9 = uVar9 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar9 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777c248,0x11);
LAB_0689f0d8:
        plVar11 = (long *)(*(code *)*puVar13)(plVar11,puVar13[1]);
        if (plVar11 == (long *)0x0) {
          uVar12 = 0;
        }
        else {
          lVar14 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07779820) {
                puVar13 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_0689f154;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_07779820,0);
LAB_0689f154:
          uVar12 = (*(code *)*puVar13)(plVar11,puVar13[1]);
        }
      }
      uVar9 = func_0x055f7004(uVar10,uVar12,0);
      if ((uVar9 & 1) == 0) {
        plVar11 = (long *)param_1[2];
        if (plVar11 == (long *)0x0) goto SUB_057da5fc;
        lVar15 = *plVar11;
        lVar14 = *(long *)puVar2;
        uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar9 != 0) {
          piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar14) {
              puVar13 = (undefined8 *)(lVar15 + (long)(*piVar16 + 0x18) * 0x10 + 0x138);
              goto LAB_0689f1cc;
            }
            uVar9 = uVar9 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar9 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar11,lVar14,0x18);
LAB_0689f1cc:
        uVar9 = (*(code *)*puVar13)(plVar11,plVar17,plVar18,puVar13[1]);
        if ((uVar9 & 1) != 0) {
          plVar18 = (long *)param_1[2];
          if (plVar18 == (long *)0x0) goto SUB_057da5fc;
          lVar15 = *plVar18;
          lVar14 = *(long *)puVar2;
          uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar14) {
                puVar13 = (undefined8 *)(lVar15 + (long)(*piVar16 + 0x22) * 0x10 + 0x138);
                goto LAB_0689f23c;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          puVar13 = (undefined8 *)func_0x03256b10(plVar18,lVar14,0x22);
LAB_0689f23c:
          iVar6 = (*(code *)*puVar13)(plVar18,plVar17,puVar13[1]);
          lVar14 = func_0x0689ce90(param_1);
          if (lVar14 == 0) goto SUB_057da5fc;
          iVar7 = func_0x062b1fc8(lVar14,0);
          if (cRam0000000007e24624 == '\0') {
            func_0x03280a18(PTR_DAT_0774ee08);
            cRam0000000007e24624 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          dVar20 = (double)func_0x05797280((double)iVar7,0x4000000000000000,0);
          iVar7 = -0x80000000;
          if ((float)dVar20 != INFINITY) {
            iVar7 = (int)dVar20;
          }
          if (iVar7 < 2) {
            iVar7 = 1;
          }
          if (iVar6 < iVar7) {
            lVar14 = func_0x0689e2fc(param_1);
            puVar2 = PTR_DAT_07779820;
            lVar15 = *plVar17;
            uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar9 != 0) {
              piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07779820) {
                  puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_0689f340;
                }
                uVar9 = uVar9 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar9 != 0);
            }
            puVar13 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_07779820,0);
LAB_0689f340:
            uVar10 = (*(code *)*puVar13)(plVar17,puVar13[1]);
            if (lVar14 == 0) goto SUB_057da5fc;
            uVar9 = func_0x0676af0c(lVar14,uVar10,0);
            if ((uVar9 & 1) == 0) {
              lVar14 = func_0x0689e3dc(param_1);
              lVar15 = *plVar17;
              uVar9 = (ulong)*(ushort *)(lVar15 + 0x12e);
              if (uVar9 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
                    puVar13 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_0689f3dc;
                  }
                  uVar9 = uVar9 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar9 != 0);
              }
              puVar13 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar2,0);
LAB_0689f3dc:
              uVar10 = (*(code *)*puVar13)(plVar17,puVar13[1]);
              if (lVar14 == 0) goto SUB_057da5fc;
              uVar8 = func_0x06380fb0(lVar14,uVar10,0);
              uVar8 = uVar8 ^ 1;
              goto LAB_0689f368;
            }
          }
        }
      }
    }
  }
  uVar8 = 0;
LAB_0689f368:
  return (ulong)(uVar8 & 1);
}

