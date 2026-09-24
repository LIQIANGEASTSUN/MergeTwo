/* Ghidra 12.1.2 native pseudocode; RVA 0x6793788; MergeEngine.ECS.Systems.Items.TimeCycleSystem.CheckCooldownState; status ok */


ulong MergeEngine_ECS_Systems_Items_TimeCycleSystem__CheckCooldownState
                (undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
                long *param_6)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  long *extraout_x1;
  long *extraout_x1_00;
  long *plVar18;
  long lVar19;
  int *piVar20;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar21;
  long *unaff_x22;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *unaff_x23;
  long *plVar25;
  long lVar26;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined8 unaff_x29;
  code *unaff_x30;
  double dVar27;
  undefined8 uVar28;
  double extraout_d0;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  double unaff_d8;
  double unaff_d9;
  undefined1 auVar34 [16];
  
  auVar34._8_8_ = param_2;
  auVar34._0_8_ = param_1;
  do {
    uVar17 = auVar34._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x29;
    *(code **)((long)register0x00000008 + -0x58) = unaff_x30;
    *(undefined **)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x26;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(long **)((long)register0x00000008 + -8) = unaff_x19;
    unaff_x25 = (long *)0x7e28000;
    plVar25 = (long *)((ulong)param_3 & 0xffffffff);
    unaff_x24 = (long *)(auVar34._8_8_ & 0xffffffff);
    uVar13 = uVar17;
    plVar23 = param_4;
    plVar18 = param_5;
    plVar24 = param_6;
    if ((bRam0000000007e28d77 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07810590);
      func_0x03280a18(PTR_DAT_07810598);
      func_0x03280a18(PTR_DAT_0777e5a8);
      func_0x03280a18(PTR_DAT_07810578);
      func_0x03280a18(PTR_DAT_07810580);
      func_0x03280a18(PTR_DAT_077e6600);
      func_0x03280a18(PTR_DAT_0777e498);
      func_0x03280a18(PTR_DAT_07809778);
      func_0x03280a18(PTR_DAT_0777e4a0);
      func_0x03280a18(PTR_DAT_077512a8);
      func_0x03280a18(PTR_DAT_07751420);
      func_0x03280a18(PTR_DAT_078105a0);
      func_0x03280a18(PTR_DAT_078105a8);
      uVar13 = func_0x03280a18(PTR_DAT_07778fa0);
      bRam0000000007e28d77 = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    plVar21 = param_6;
    plVar22 = param_5;
    if (auVar34._8_4_ < 2) {
      if (((uint)param_3 & 0xfffffffe) != 2) {
        return uVar13;
      }
      lVar19 = *(long *)(uVar17 + 0x28);
      param_4 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07810598);
      func_0x0688cf40(param_4,0);
      uVar17 = 0;
      if (lVar19 != 0) {
        uVar17 = func_0x03ea4d6c(lVar19,param_4,*(undefined8 *)PTR_DAT_078105a8);
        return uVar17;
      }
    }
    else {
      if (1 < auVar34._8_4_ - 2) {
        return uVar13;
      }
      if (1 < (uint)param_3) {
        return uVar13;
      }
      if (param_6 != (long *)0x0) {
        lVar19 = *param_6;
        lVar26 = *(long *)PTR_DAT_0777e5a8;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)(lVar26 + 0x20)) {
              lVar19 = lVar19 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar26 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_06893958;
            }
            uVar13 = uVar13 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar13 != 0);
        }
        lVar19 = func_0x03256b10(param_6);
LAB_06893958:
        lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar26);
        plVar25 = (long *)(**(code **)(lVar19 + 8))(param_6,lVar19);
        lVar19 = *param_6;
        lVar26 = *(long *)PTR_DAT_07810578;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)(lVar26 + 0x20)) {
              lVar19 = lVar19 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar26 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_068939d4;
            }
            uVar13 = uVar13 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar13 != 0);
        }
        lVar19 = func_0x03256b10(param_6);
LAB_068939d4:
        lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar26);
        unaff_x24 = (long *)(**(code **)(lVar19 + 8))(param_6,lVar19);
        if (unaff_x24 == (long *)0x0) {
          lVar19 = *param_6;
          lVar26 = *(long *)PTR_DAT_07810580;
          uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar13 != 0) {
            piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)(lVar26 + 0x20)) {
                lVar19 = lVar19 + (long)(int)(*piVar20 + (uint)*(ushort *)(lVar26 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_06893a54;
              }
              uVar13 = uVar13 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar13 != 0);
          }
          lVar19 = func_0x03256b10(param_6);
LAB_06893a54:
          lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),lVar26);
          unaff_x24 = (long *)(**(code **)(lVar19 + 8))(param_6,lVar19);
        }
        lVar19 = *param_6;
        lVar26 = *(long *)(uVar17 + 0x58);
        unaff_x26 = *(long *)PTR_DAT_077e6600;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar13 != 0) {
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)(unaff_x26 + 0x20)) {
              lVar19 = lVar19 + (long)(int)(*piVar20 + (uint)*(ushort *)(unaff_x26 + 0x50)) * 0x10 +
                       0x138;
              goto LAB_06893ad4;
            }
            uVar13 = uVar13 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar13 != 0);
        }
        lVar19 = func_0x03256b10(param_6);
LAB_06893ad4:
        lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),unaff_x26);
        uVar14 = (**(code **)(lVar19 + 8))(param_6,lVar19);
        unaff_x25 = (long *)0x0;
        if (lVar26 != 0) {
          unaff_x25 = (long *)MergeEngine_ECS_Systems_Items_SkipCooldownSystem__GetSkipCooldownPrice
                                        (lVar26,uVar14,unaff_x24);
          unaff_x28 = PTR_DAT_0777e498;
          lVar19 = *param_6;
          uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar13 != 0) {
            piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777e498) {
                puVar15 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_06893b5c;
              }
              uVar13 = uVar13 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar13 != 0);
          }
          puVar15 = (undefined8 *)func_0x03256b10(param_6,*(long *)PTR_DAT_0777e498,0);
LAB_06893b5c:
          uVar14 = (*(code *)*puVar15)(param_6,puVar15[1]);
          uVar13 = func_0x064a73dc(uVar17,uVar14,0);
          if ((uVar13 & 1) == 0) {
            unaff_x26 = *(long *)(uVar17 + 0x28);
            unaff_x27 = (undefined *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07810598);
            func_0x0688cf40(unaff_x27,1);
            if (((unaff_x26 != 0) &&
                (func_0x03ea4d6c(unaff_x26,unaff_x27,*(undefined8 *)PTR_DAT_078105a8),
                plVar25 != (long *)0x0)) && (*(long *)(uVar17 + 0x50) != 0)) {
              unaff_x26 = *(long *)(uVar17 + 0x28);
              plVar25 = (long *)plVar25[7];
              uVar13 = func_0x067675f0(*(long *)(uVar17 + 0x50),0);
              lVar33 = param_5[1];
              lVar31 = *param_5;
              lVar26 = param_5[3];
              lVar19 = param_5[2];
              unaff_x27 = (undefined *)(uVar13 & 0xffffffff);
              *(long *)((long)register0x00000008 + -0x70) = param_5[4];
              *(long *)((long)register0x00000008 + -0x88) = lVar33;
              *(long *)((long)register0x00000008 + -0x90) = lVar31;
              *(long *)((long)register0x00000008 + -0x78) = lVar26;
              *(long *)((long)register0x00000008 + -0x80) = lVar19;
              if (unaff_x24 == (long *)0x0) {
                uVar29 = *(undefined8 *)((long)register0x00000008 + -0x88);
                uVar28 = *(undefined8 *)((long)register0x00000008 + -0x90);
                uVar32 = *(undefined8 *)((long)register0x00000008 + -0x78);
                uVar30 = *(undefined8 *)((long)register0x00000008 + -0x80);
                uVar14 = *(undefined8 *)((long)register0x00000008 + -0x70);
                plVar22 = (long *)0x0;
                *(undefined8 *)((long)register0x00000008 + -0xe8) = uVar29;
                *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar28;
                *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar32;
                *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar30;
                *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar14;
              }
              else {
                *(undefined8 *)((long)register0x00000008 + -0xb8) =
                     *(undefined8 *)((long)register0x00000008 + -0x88);
                *(undefined8 *)((long)register0x00000008 + -0xc0) =
                     *(undefined8 *)((long)register0x00000008 + -0x90);
                *(undefined8 *)((long)register0x00000008 + -0xa8) =
                     *(undefined8 *)((long)register0x00000008 + -0x78);
                *(undefined8 *)((long)register0x00000008 + -0xb0) =
                     *(undefined8 *)((long)register0x00000008 + -0x80);
                *(undefined8 *)((long)register0x00000008 + -0xa0) =
                     *(undefined8 *)((long)register0x00000008 + -0x70);
                lVar19 = *unaff_x24;
                uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
                if (uVar13 != 0) {
                  piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_07809778) {
                      puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 4) * 0x10 + 0x138);
                      goto LAB_06893c6c;
                    }
                    uVar13 = uVar13 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar13 != 0);
                }
                puVar15 = (undefined8 *)func_0x03256b10(unaff_x24,*(long *)PTR_DAT_07809778,4);
LAB_06893c6c:
                lVar19 = (*(code *)*puVar15)(unaff_x24,puVar15[1]);
                if (lVar19 == 0) {
                  uVar29 = *(undefined8 *)((long)register0x00000008 + -0xb8);
                  uVar28 = *(undefined8 *)((long)register0x00000008 + -0xc0);
                  uVar32 = *(undefined8 *)((long)register0x00000008 + -0xa8);
                  uVar30 = *(undefined8 *)((long)register0x00000008 + -0xb0);
                  uVar14 = *(undefined8 *)((long)register0x00000008 + -0xa0);
                  plVar22 = (long *)0x0;
                }
                else {
                  uVar1 = *(undefined1 *)(lVar19 + 0x10);
                  *(undefined2 *)((long)register0x00000008 + -0x90) = 0;
                  func_0x04377614((undefined1 *)((long)register0x00000008 + -0x90),uVar1,
                                  *(undefined8 *)PTR_DAT_07751420);
                  uVar29 = *(undefined8 *)((long)register0x00000008 + -0xb8);
                  uVar28 = *(undefined8 *)((long)register0x00000008 + -0xc0);
                  uVar32 = *(undefined8 *)((long)register0x00000008 + -0xa8);
                  uVar30 = *(undefined8 *)((long)register0x00000008 + -0xb0);
                  uVar14 = *(undefined8 *)((long)register0x00000008 + -0xa0);
                  plVar22 = (long *)(ulong)(0xff < *(ushort *)((long)register0x00000008 + -0x90));
                }
              }
              *(undefined8 *)((long)register0x00000008 + -0x118) = uVar29;
              *(undefined8 *)((long)register0x00000008 + -0x120) = uVar28;
              *(undefined8 *)((long)register0x00000008 + -0x108) = uVar32;
              *(undefined8 *)((long)register0x00000008 + -0x110) = uVar30;
              *(undefined8 *)((long)register0x00000008 + -0x100) = uVar14;
              unaff_x24 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07810590);
              plVar23 = (long *)((long)register0x00000008 + -0x90);
              *(undefined8 *)((long)register0x00000008 + -0x88) =
                   *(undefined8 *)((long)register0x00000008 + -0x118);
              *(undefined8 *)((long)register0x00000008 + -0x90) =
                   *(undefined8 *)((long)register0x00000008 + -0x120);
              *(undefined8 *)((long)register0x00000008 + -0x78) =
                   *(undefined8 *)((long)register0x00000008 + -0x108);
              *(undefined8 *)((long)register0x00000008 + -0x80) =
                   *(undefined8 *)((long)register0x00000008 + -0x110);
              *(undefined8 *)((long)register0x00000008 + -0x70) =
                   *(undefined8 *)((long)register0x00000008 + -0x100);
              plVar18 = plVar25;
              plVar24 = plVar22;
              func_0x0686a7d0(unaff_x24,param_4,unaff_x27);
              if (unaff_x26 != 0) {
                func_0x03ea4d6c(unaff_x26,unaff_x24,*(undefined8 *)PTR_DAT_078105a0);
                goto LAB_06893d24;
              }
            }
          }
          else {
LAB_06893d24:
            lVar19 = *param_6;
            uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar13 != 0) {
              piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)unaff_x28) {
                  puVar15 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_06893d70;
                }
                uVar13 = uVar13 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar13 != 0);
            }
            puVar15 = (undefined8 *)func_0x03256b10(param_6,*(long *)unaff_x28,0);
LAB_06893d70:
            uVar14 = (*(code *)*puVar15)(param_6,puVar15[1]);
            plVar22 = (long *)func_0x06389f5c(uVar14,0);
            lVar19 = *param_6;
            plVar25 = *(long **)(uVar17 + 0x60);
            uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar13 != 0) {
              piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)unaff_x28) {
                  puVar15 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_06893dd8;
                }
                uVar13 = uVar13 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar13 != 0);
            }
            puVar15 = (undefined8 *)func_0x03256b10(param_6,*(long *)unaff_x28,0);
LAB_06893dd8:
            plVar16 = (long *)(*(code *)*puVar15)(param_6,puVar15[1]);
            if (plVar25 != (long *)0x0) {
              lVar19 = *plVar25;
              uVar13 = (ulong)*(ushort *)(lVar19 + 0x12e);
              unaff_x24 = *(long **)PTR_DAT_07778fa0;
              if (uVar13 != 0) {
                piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777e4a0) {
                    puVar15 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_06893e4c;
                  }
                  uVar13 = uVar13 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar13 != 0);
              }
              puVar15 = (undefined8 *)func_0x03256b10(plVar25,*(long *)PTR_DAT_0777e4a0,0);
LAB_06893e4c:
              plVar24 = (long *)puVar15[1];
              plVar23 = plVar16;
              plVar18 = plVar22;
              uVar14 = (*(code *)*puVar15)(plVar25,unaff_x24,param_4);
              plVar21 = plVar16;
              if (*(long *)(uVar17 + 0x40) != 0) {
                uVar17 = func_0x068b94a0(*(long *)(uVar17 + 0x40),uVar14,0,0);
                return uVar17;
              }
            }
          }
        }
      }
    }
    func_0x03280cac();
    *(code **)((long)register0x00000008 + -0x140) =
         MergeEngine_ECS_Systems_Items_TimeCycleSystem__SkipCooldownEntirely;
    *(long **)((long)register0x00000008 + -0x130) = param_4;
    *(ulong *)((long)register0x00000008 + -0x128) = uVar17;
    param_4 = plVar23;
    param_5 = plVar18;
    param_6 = plVar24;
    if ((bRam0000000007e28d75 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777a600);
      bRam0000000007e28d75 = 1;
      param_4 = plVar23;
      param_5 = plVar18;
      param_6 = plVar24;
    }
    puVar4 = PTR_DAT_0777a600;
    if (extraout_x1 != (long *)0x0) {
      lVar19 = *extraout_x1;
      uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar17 == 0) goto LAB_06893f10;
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      break;
    }
    unaff_x20 = func_0x03280cac();
    *(double *)((long)register0x00000008 + -0x180) = unaff_d9;
    *(double *)((long)register0x00000008 + -0x178) = unaff_d8;
    *(code **)((long)register0x00000008 + -0x170) =
         MergeEngine_ECS_Systems_Items_TimeCycleSystem__ProcessCycle;
    *(long **)((long)register0x00000008 + -0x168) = plVar25;
    *(long **)((long)register0x00000008 + -0x160) = plVar22;
    *(long **)((long)register0x00000008 + -0x158) = plVar21;
    *(undefined8 *)((long)register0x00000008 + -0x150) = 0x7e28000;
    *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
    if ((bRam0000000007e28d76 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777a600);
      func_0x03280a18(PTR_DAT_0774ee08);
      bRam0000000007e28d76 = 1;
    }
    puVar4 = PTR_DAT_0777a600;
    if (extraout_x1_00 == (long *)0x0) {
      uVar17 = func_0x03280cac();
      puVar4 = PTR_DAT_078105b0;
      *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0x689456c;
      *(undefined8 *)((long)register0x00000008 + -0x198) = 0x7e28000;
      *(long *)((long)register0x00000008 + -400) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
      if ((bRam0000000007e28d78 & 1) == 0) {
        func_0x03280a18(PTR_DAT_078105b0);
        bRam0000000007e28d78 = 1;
      }
      uVar14 = *(undefined8 *)puVar4;
      return uVar17;
    }
    lVar19 = *extraout_x1_00;
    uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar17 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777a600) {
          puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_06894060;
        }
        uVar17 = uVar17 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)PTR_DAT_0777a600,1);
LAB_06894060:
    iVar9 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
    if (iVar9 == 0) {
      lVar19 = *extraout_x1_00;
      uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar17 != 0) {
        piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
            puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 10) * 0x10 + 0x138);
            goto LAB_06894540;
          }
          uVar17 = uVar17 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar17 != 0);
      }
      puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,10);
LAB_06894540:
      uVar17 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
      if (0 < (int)uVar17) {
        return uVar17;
      }
    }
    lVar19 = *extraout_x1_00;
    uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar17 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
          puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 10) * 0x10 + 0x138);
          goto LAB_06894100;
        }
        uVar17 = uVar17 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,10);
LAB_06894100:
    iVar9 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
    lVar19 = *extraout_x1_00;
    uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar17 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
          puVar15 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_0689415c;
        }
        uVar17 = uVar17 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,0);
LAB_0689415c:
    iVar10 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
    lVar19 = *extraout_x1_00;
    uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar17 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
          puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 0xb) * 0x10 + 0x138);
          goto LAB_068941bc;
        }
        uVar17 = uVar17 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,0xb);
LAB_068941bc:
    (*(code *)*puVar15)(extraout_x1_00,iVar10 + iVar9,puVar15[1]);
    lVar19 = *extraout_x1_00;
    uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar17 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
          puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 10) * 0x10 + 0x138);
          goto LAB_0689421c;
        }
        uVar17 = uVar17 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,10);
LAB_0689421c:
    puVar3 = PTR_DAT_0774ee08;
    uVar11 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
    lVar19 = *extraout_x1_00;
    uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar17 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
          puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 0xe) * 0x10 + 0x138);
          goto LAB_06894284;
        }
        uVar17 = uVar17 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,0xe);
LAB_06894284:
    uVar12 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar3);
    }
    uVar11 = func_0x05797580(uVar11,uVar12,0);
    lVar19 = *extraout_x1_00;
    uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar17 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
          puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 0xb) * 0x10 + 0x138);
          goto LAB_0689430c;
        }
        uVar17 = uVar17 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,0xb);
LAB_0689430c:
    param_3 = (long *)puVar15[1];
    (*(code *)*puVar15)(extraout_x1_00,uVar11);
    lVar19 = *extraout_x1_00;
    uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar17 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
          puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_0689436c;
        }
        uVar17 = uVar17 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar17 != 0);
    }
    param_3 = (long *)0x1;
    puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00);
LAB_0689436c:
    iVar9 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
    lVar19 = *extraout_x1_00;
    uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar17 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
          puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 7) * 0x10 + 0x138);
          goto LAB_068943cc;
        }
        uVar17 = uVar17 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar17 != 0);
    }
    param_3 = (long *)0x7;
    puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00);
LAB_068943cc:
    (*(code *)*puVar15)((double)iVar9,extraout_x1_00,puVar15[1]);
    lVar19 = *extraout_x1_00;
    uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar17 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
          puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 10) * 0x10 + 0x138);
          goto LAB_0689442c;
        }
        uVar17 = uVar17 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar17 != 0);
    }
    param_3 = (long *)0xa;
    puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00);
LAB_0689442c:
    iVar9 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
    lVar19 = *extraout_x1_00;
    uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar17 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
          puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 0xe) * 0x10 + 0x138);
          goto LAB_0689448c;
        }
        uVar17 = uVar17 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar17 != 0);
    }
    param_3 = (long *)0xe;
    puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00);
LAB_0689448c:
    iVar10 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
    if (iVar10 <= iVar9) {
      lVar19 = *extraout_x1_00;
      uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar17 == 0) goto LAB_068944f0;
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      goto LAB_068944d8;
    }
    unaff_x22 = *(long **)((long)register0x00000008 + -0x160);
    unaff_x23 = *(long **)((long)register0x00000008 + -0x168);
    unaff_d9 = *(double *)((long)register0x00000008 + -0x180);
    *(double *)((long)register0x00000008 + -0x1b0) = unaff_d9;
    *(undefined8 *)((long)register0x00000008 + -0x1a8) =
         *(undefined8 *)((long)register0x00000008 + -0x178);
    *(undefined8 *)((long)register0x00000008 + -0x1a0) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -400) =
         *(undefined8 *)((long)register0x00000008 + -0x170);
    *(undefined **)((long)register0x00000008 + -0x188) = unaff_x27;
    *(long *)((long)register0x00000008 + -0x180) = unaff_x26;
    *(long **)((long)register0x00000008 + -0x178) = unaff_x25;
    *(long **)((long)register0x00000008 + -0x170) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x168) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x160) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x158) =
         *(undefined8 *)((long)register0x00000008 + -0x158);
    *(undefined8 *)((long)register0x00000008 + -0x150) =
         *(undefined8 *)((long)register0x00000008 + -0x150);
    *(undefined8 *)((long)register0x00000008 + -0x148) =
         *(undefined8 *)((long)register0x00000008 + -0x148);
    if ((bRam0000000007e28d74 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07810570);
      func_0x03280a18(PTR_DAT_0777e5a8);
      func_0x03280a18(PTR_DAT_07810578);
      func_0x03280a18(PTR_DAT_07810580);
      func_0x03280a18(PTR_DAT_0777e498);
      func_0x03280a18(PTR_DAT_07809778);
      func_0x03280a18(PTR_DAT_0777a498);
      func_0x03280a18(PTR_DAT_0777e4a0);
      func_0x03280a18(PTR_DAT_0777a600);
      func_0x03280a18(PTR_DAT_077512a8);
      func_0x03280a18(PTR_DAT_07751420);
      func_0x03280a18(PTR_DAT_07810588);
      func_0x03280a18(PTR_DAT_07778fa0);
      bRam0000000007e28d74 = 1;
    }
    puVar4 = PTR_DAT_0777a600;
    *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x220) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x250) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x280) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x208) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x210) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x200) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x238) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x240) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x228) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x230) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x268) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x270) = 0;
    *(undefined8 *)((long)register0x00000008 + -600) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x298) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x2a0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x288) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x290) = 0;
    unaff_x19 = extraout_x1_00;
    unaff_x21 = (long *)0x7e28000;
    unaff_d8 = extraout_d0;
    if (extraout_x1_00 != (long *)0x0) {
      lVar19 = *extraout_x1_00;
      uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar17 != 0) {
        piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777a600) {
            puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 0xc) * 0x10 + 0x138);
            goto LAB_068928c4;
          }
          uVar17 = uVar17 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar17 != 0);
      }
      puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)PTR_DAT_0777a600,0xc);
LAB_068928c4:
      iVar9 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
      lVar19 = *extraout_x1_00;
      uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar17 != 0) {
        piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
            puVar15 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_06892920;
          }
          uVar17 = uVar17 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar17 != 0);
      }
      puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,0);
LAB_06892920:
      iVar6 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
      lVar19 = *extraout_x1_00;
      iVar10 = 0;
      if (iVar6 != 0) {
        iVar10 = iVar9 / iVar6;
      }
      uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar17 != 0) {
        piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
            puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 9) * 0x10 + 0x138);
            goto LAB_06892980;
          }
          uVar17 = uVar17 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar17 != 0);
      }
      puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,9);
LAB_06892980:
      (*(code *)*puVar15)(extraout_x1_00,iVar10,puVar15[1]);
      lVar19 = *extraout_x1_00;
      uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar17 != 0) {
        piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
            puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 8) * 0x10 + 0x138);
            goto LAB_068929e0;
          }
          uVar17 = uVar17 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar17 != 0);
      }
      puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,8);
LAB_068929e0:
      iVar9 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
      lVar19 = *extraout_x1_00;
      uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar17 != 0) {
        piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
            puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 2) * 0x10 + 0x138);
            goto LAB_06892a40;
          }
          uVar17 = uVar17 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar17 != 0);
      }
      puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,2);
LAB_06892a40:
      iVar10 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
      if (iVar10 <= iVar9) {
        lVar19 = *extraout_x1_00;
        uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
              puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 3) * 0x10 + 0x138);
              goto LAB_06892aa4;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,3);
LAB_06892aa4:
        iVar9 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
        if (0 < iVar9) {
          lVar19 = *extraout_x1_00;
          uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar17 == 0) goto LAB_06892ae8;
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          goto LAB_06892ad0;
        }
      }
      func_0x060d57ac((undefined1 *)((long)register0x00000008 + -0x210),extraout_x1_00,0);
      lVar19 = *extraout_x1_00;
      uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar17 != 0) {
        piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
            puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 0xf) * 0x10 + 0x138);
            goto LAB_06892b58;
          }
          uVar17 = uVar17 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar17 != 0);
      }
      puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,0xf);
LAB_06892b58:
      uVar7 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
      lVar19 = *extraout_x1_00;
      uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar17 != 0) {
        piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
            puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 6) * 0x10 + 0x138);
            goto LAB_06892bb8;
          }
          uVar17 = uVar17 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar17 != 0);
      }
      puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,6);
LAB_06892bb8:
      dVar27 = (double)(*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
      lVar26 = *extraout_x1_00;
      lVar19 = *(long *)puVar4;
      uVar2 = *(ushort *)(lVar26 + 0x12e);
      uVar17 = (ulong)uVar2;
      unaff_x24 = (long *)puVar4;
      if (dVar27 <= extraout_d0) {
        if (uVar2 != 0) {
          piVar20 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar19) {
              puVar15 = (undefined8 *)(lVar26 + (long)(*piVar20 + 6) * 0x10 + 0x138);
              goto LAB_06892cb8;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,lVar19,6);
LAB_06892cb8:
        unaff_d9 = (double)(*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
        lVar19 = *extraout_x1_00;
        uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
              puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 7) * 0x10 + 0x138);
              goto LAB_06892d78;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,7);
LAB_06892d78:
        (*(code *)*puVar15)(0,extraout_x1_00,puVar15[1]);
        lVar19 = *extraout_x1_00;
        uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
              puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 10) * 0x10 + 0x138);
              goto LAB_06892e48;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,10);
LAB_06892e48:
        unaff_d8 = extraout_d0 - unaff_d9;
        uVar14 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
        if ((int)uVar14 == 0) {
          uVar8 = MergeEngine_ECS_Systems_Items_TimeCycleSystem__SkipCooldownEntirely
                            (uVar14,extraout_x1_00);
          unaff_x22 = (long *)(ulong)(~uVar8 & 1);
        }
        else {
          unaff_x22 = (long *)0x0;
        }
        MergeEngine_ECS_Systems_Items_TimeCycleSystem__ProcessCycle
                  (unaff_d8,unaff_x20,extraout_x1_00);
        lVar19 = *extraout_x1_00;
        uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
              puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 0xf) * 0x10 + 0x138);
              goto LAB_06892ed4;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,0xf);
LAB_06892ed4:
        uVar17 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
        bVar5 = false;
        if (uVar7 != (uint)uVar17) {
          lVar19 = *extraout_x1_00;
          uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar17 != 0) {
            piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 0xf) * 0x10 + 0x138);
                goto LAB_068931a4;
              }
              uVar17 = uVar17 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar17 != 0);
          }
          puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,0xf);
LAB_068931a4:
          uVar17 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
          bVar5 = (int)uVar17 == 3;
        }
        if (!bVar5 && (int)unaff_x22 == 0) {
          return uVar17;
        }
        lVar19 = *extraout_x1_00;
        unaff_x21 = *(long **)PTR_DAT_0777e5a8;
        uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
        param_3 = (long *)(ulong)*(ushort *)(unaff_x21 + 10);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == unaff_x21[4]) {
              lVar19 = lVar19 + (long)(int)(*piVar20 + (uint)*(ushort *)(unaff_x21 + 10)) * 0x10 +
                       0x138;
              goto LAB_06893220;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        lVar19 = func_0x03256b10(extraout_x1_00);
LAB_06893220:
        lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),unaff_x21);
        lVar19 = (**(code **)(lVar19 + 8))(extraout_x1_00,lVar19);
        puVar4 = PTR_DAT_0777e498;
        unaff_x19 = extraout_x1_00;
        if (lVar19 != 0) {
          lVar26 = *extraout_x1_00;
          unaff_x21 = *(long **)(lVar19 + 0x38);
          uVar17 = (ulong)*(ushort *)(lVar26 + 0x12e);
          if (uVar17 != 0) {
            piVar20 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777e498) {
                puVar15 = (undefined8 *)(lVar26 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_06893298;
              }
              uVar17 = uVar17 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar17 != 0);
          }
          puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)PTR_DAT_0777e498,0);
LAB_06893298:
          uVar14 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
          param_3 = (long *)0x0;
          uVar17 = func_0x064a73dc(unaff_x20,uVar14);
          unaff_x27 = puVar4;
          if ((uVar17 & 1) == 0) {
            lVar19 = *extraout_x1_00;
            unaff_x22 = *(long **)PTR_DAT_07810578;
            uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
            param_3 = (long *)(ulong)*(ushort *)(unaff_x22 + 10);
            if (uVar17 != 0) {
              piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == unaff_x22[4]) {
                  lVar19 = lVar19 + (long)(int)(*piVar20 + (uint)*(ushort *)(unaff_x22 + 10)) * 0x10
                           + 0x138;
                  goto LAB_06893314;
                }
                uVar17 = uVar17 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar17 != 0);
            }
            lVar19 = func_0x03256b10(extraout_x1_00);
LAB_06893314:
            lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),unaff_x22);
            unaff_x24 = (long *)(**(code **)(lVar19 + 8))(extraout_x1_00,lVar19);
            if (unaff_x24 == (long *)0x0) {
              lVar19 = *extraout_x1_00;
              unaff_x22 = *(long **)PTR_DAT_07810580;
              uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
              param_3 = (long *)(ulong)*(ushort *)(unaff_x22 + 10);
              if (uVar17 != 0) {
                piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == unaff_x22[4]) {
                    lVar19 = lVar19 + (long)(int)(*piVar20 + (uint)*(ushort *)(unaff_x22 + 10)) *
                                      0x10 + 0x138;
                    goto LAB_06893394;
                  }
                  uVar17 = uVar17 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar17 != 0);
              }
              lVar19 = func_0x03256b10(extraout_x1_00);
LAB_06893394:
              lVar19 = func_0x03280b88(*(undefined8 *)(lVar19 + 8),unaff_x22);
              unaff_x24 = (long *)(**(code **)(lVar19 + 8))(extraout_x1_00,lVar19);
            }
            unaff_x23 = *(long **)(unaff_x20 + 0x68);
            unaff_x19 = extraout_x1_00;
            if (unaff_x23 != (long *)0x0) {
              lVar19 = *unaff_x23;
              unaff_x22 = *(long **)(unaff_x20 + 0x28);
              uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar17 != 0) {
                piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777a498) {
                    puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 0x14) * 0x10 + 0x138);
                    goto LAB_06893418;
                  }
                  uVar17 = uVar17 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar17 != 0);
              }
              puVar15 = (undefined8 *)func_0x03256b10(unaff_x23,*(long *)PTR_DAT_0777a498,0x14);
LAB_06893418:
              param_3 = (long *)puVar15[1];
              plVar23 = (long *)(*(code *)*puVar15)(unaff_x23,extraout_x1_00);
              unaff_x19 = extraout_x1_00;
              if (*(long *)(unaff_x20 + 0x50) != 0) {
                uVar17 = func_0x067675f0(*(long *)(unaff_x20 + 0x50),0);
                unaff_x25 = (long *)(uVar17 & 0xffffffff);
                *(undefined8 *)((long)register0x00000008 + -0x1d8) =
                     *(undefined8 *)((long)register0x00000008 + -0x208);
                *(undefined8 *)((long)register0x00000008 + -0x1e0) =
                     *(undefined8 *)((long)register0x00000008 + -0x210);
                *(undefined8 *)((long)register0x00000008 + -0x1c8) =
                     *(undefined8 *)((long)register0x00000008 + -0x1f8);
                *(undefined8 *)((long)register0x00000008 + -0x1d0) =
                     *(undefined8 *)((long)register0x00000008 + -0x200);
                *(undefined8 *)((long)register0x00000008 + -0x1c0) =
                     *(undefined8 *)((long)register0x00000008 + -0x1f0);
                if (unaff_x24 == (long *)0x0) {
                  uVar29 = *(undefined8 *)((long)register0x00000008 + -0x1d8);
                  uVar28 = *(undefined8 *)((long)register0x00000008 + -0x1e0);
                  uVar32 = *(undefined8 *)((long)register0x00000008 + -0x1c8);
                  uVar30 = *(undefined8 *)((long)register0x00000008 + -0x1d0);
                  uVar14 = *(undefined8 *)((long)register0x00000008 + -0x1c0);
                  *(undefined8 *)((long)register0x00000008 + -0x268) = uVar29;
                  *(undefined8 *)((long)register0x00000008 + -0x270) = uVar28;
                  *(undefined8 *)((long)register0x00000008 + -600) = uVar32;
                  *(undefined8 *)((long)register0x00000008 + -0x260) = uVar30;
                  *(undefined8 *)((long)register0x00000008 + -0x250) = uVar14;
                }
                else {
                  *(undefined8 *)((long)register0x00000008 + -0x238) =
                       *(undefined8 *)((long)register0x00000008 + -0x1d8);
                  *(undefined8 *)((long)register0x00000008 + -0x240) =
                       *(undefined8 *)((long)register0x00000008 + -0x1e0);
                  *(undefined8 *)((long)register0x00000008 + -0x228) =
                       *(undefined8 *)((long)register0x00000008 + -0x1c8);
                  *(undefined8 *)((long)register0x00000008 + -0x230) =
                       *(undefined8 *)((long)register0x00000008 + -0x1d0);
                  *(undefined8 *)((long)register0x00000008 + -0x220) =
                       *(undefined8 *)((long)register0x00000008 + -0x1c0);
                  lVar19 = *unaff_x24;
                  uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
                  if (uVar17 != 0) {
                    piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_07809778) {
                        puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 4) * 0x10 + 0x138);
                        goto LAB_068934d4;
                      }
                      uVar17 = uVar17 - 1;
                      piVar20 = piVar20 + 4;
                    } while (uVar17 != 0);
                  }
                  puVar15 = (undefined8 *)func_0x03256b10(unaff_x24,*(long *)PTR_DAT_07809778,4);
LAB_068934d4:
                  lVar19 = (*(code *)*puVar15)(unaff_x24,puVar15[1]);
                  if (lVar19 == 0) {
                    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x238);
                    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x240);
                    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x228);
                    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x230);
                    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x220);
                    unaff_x24 = (long *)0x0;
                  }
                  else {
                    uVar1 = *(undefined1 *)(lVar19 + 0x10);
                    *(undefined2 *)((long)register0x00000008 + -0x1e0) = 0;
                    func_0x04377614((undefined1 *)((long)register0x00000008 + -0x1e0),uVar1,
                                    *(undefined8 *)PTR_DAT_07751420);
                    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x238);
                    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x240);
                    uVar32 = *(undefined8 *)((long)register0x00000008 + -0x228);
                    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x230);
                    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x220);
                    unaff_x24 = (long *)(ulong)(0xff < *(ushort *)
                                                        ((long)register0x00000008 + -0x1e0));
                  }
                }
                *(undefined8 *)((long)register0x00000008 + -0x298) = uVar29;
                *(undefined8 *)((long)register0x00000008 + -0x2a0) = uVar28;
                *(undefined8 *)((long)register0x00000008 + -0x288) = uVar32;
                *(undefined8 *)((long)register0x00000008 + -0x290) = uVar30;
                *(undefined8 *)((long)register0x00000008 + -0x280) = uVar14;
                unaff_x26 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07810570);
                param_4 = (long *)((long)register0x00000008 + -0x1e0);
                param_6 = (long *)((ulong)unaff_x24 & 0xffffffff);
                *(undefined8 *)((long)register0x00000008 + -0x1d8) =
                     *(undefined8 *)((long)register0x00000008 + -0x298);
                *(undefined8 *)((long)register0x00000008 + -0x1e0) =
                     *(undefined8 *)((long)register0x00000008 + -0x2a0);
                *(undefined8 *)((long)register0x00000008 + -0x1c8) =
                     *(undefined8 *)((long)register0x00000008 + -0x288);
                *(undefined8 *)((long)register0x00000008 + -0x1d0) =
                     *(undefined8 *)((long)register0x00000008 + -0x290);
                *(undefined8 *)((long)register0x00000008 + -0x1c0) =
                     *(undefined8 *)((long)register0x00000008 + -0x280);
                param_3 = unaff_x25;
                param_5 = unaff_x21;
                func_0x0686a7d0(unaff_x26,plVar23);
                unaff_x19 = extraout_x1_00;
                unaff_x23 = plVar23;
                if (unaff_x22 != (long *)0x0) {
                  param_3 = *(long **)PTR_DAT_07810588;
                  func_0x03ea4d6c(unaff_x22,unaff_x26);
                  goto LAB_0689358c;
                }
              }
            }
          }
          else {
LAB_0689358c:
            lVar19 = *extraout_x1_00;
            uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar17 != 0) {
              piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                  puVar15 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_068935d8;
                }
                uVar17 = uVar17 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar17 != 0);
            }
            param_3 = (long *)0x0;
            puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00);
LAB_068935d8:
            uVar14 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
            plVar23 = (long *)func_0x06389f5c(uVar14,0);
            plVar24 = *(long **)(unaff_x20 + 0x68);
            unaff_x23 = (long *)0x0;
            unaff_x19 = extraout_x1_00;
            if (plVar24 != (long *)0x0) {
              lVar19 = *plVar24;
              unaff_x22 = *(long **)(unaff_x20 + 0x60);
              uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar17 != 0) {
                piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777a498) {
                    puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 0x14) * 0x10 + 0x138);
                    goto LAB_06893654;
                  }
                  uVar17 = uVar17 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar17 != 0);
              }
              puVar15 = (undefined8 *)func_0x03256b10(plVar24,*(long *)PTR_DAT_0777a498,0x14);
LAB_06893654:
              param_3 = (long *)puVar15[1];
              unaff_x23 = (long *)(*(code *)*puVar15)(plVar24,extraout_x1_00);
              lVar19 = *extraout_x1_00;
              uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
              if (uVar17 != 0) {
                piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
                    puVar15 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_068936b4;
                  }
                  uVar17 = uVar17 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar17 != 0);
              }
              param_3 = (long *)0x0;
              puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00);
LAB_068936b4:
              plVar24 = (long *)(*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
              unaff_x19 = extraout_x1_00;
              unaff_x21 = plVar23;
              if (unaff_x22 != (long *)0x0) {
                lVar19 = *unaff_x22;
                uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
                unaff_x24 = *(long **)PTR_DAT_07778fa0;
                if (uVar17 != 0) {
                  piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777e4a0) {
                      puVar15 = (undefined8 *)(lVar19 + (long)*piVar20 * 0x10 + 0x138);
                      goto LAB_06893728;
                    }
                    uVar17 = uVar17 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar17 != 0);
                }
                puVar15 = (undefined8 *)func_0x03256b10(unaff_x22,*(long *)PTR_DAT_0777e4a0,0);
LAB_06893728:
                param_6 = (long *)puVar15[1];
                param_3 = unaff_x23;
                param_4 = plVar24;
                param_5 = plVar23;
                uVar14 = (*(code *)*puVar15)(unaff_x22,unaff_x24);
                unaff_x19 = plVar24;
                if (*(long *)(unaff_x20 + 0x40) != 0) {
                  uVar17 = func_0x068b94a0(*(long *)(unaff_x20 + 0x40),uVar14,0,0);
                  return uVar17;
                }
              }
            }
          }
        }
      }
      else {
        if (uVar2 != 0) {
          piVar20 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar19) {
              puVar15 = (undefined8 *)(lVar26 + (long)(*piVar20 + 10) * 0x10 + 0x138);
              goto LAB_06892c50;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,lVar19,10);
LAB_06892c50:
        iVar9 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
        lVar19 = *extraout_x1_00;
        uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
        uVar8 = 1;
        if (0 < iVar9) {
          uVar8 = 2;
        }
        unaff_x22 = (long *)(ulong)uVar8;
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
              puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 0x10) * 0x10 + 0x138);
              goto LAB_06892d18;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,0x10);
LAB_06892d18:
        param_3 = (long *)puVar15[1];
        (*(code *)*puVar15)(extraout_x1_00,unaff_x22);
        lVar19 = *extraout_x1_00;
        uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
              puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 0xf) * 0x10 + 0x138);
              goto LAB_06892dd8;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        param_3 = (long *)0xf;
        puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00);
LAB_06892dd8:
        uVar11 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
        plVar23 = *(long **)(unaff_x20 + 0x68);
        unaff_x19 = extraout_x1_00;
        unaff_x21 = (long *)(ulong)uVar7;
        unaff_x23 = (long *)0x0;
        if (plVar23 != (long *)0x0) goto code_r0x06892dec;
      }
    }
    unaff_x30 = MergeEngine_ECS_Systems_Items_TimeCycleSystem__CheckCooldownState;
    auVar34 = func_0x03280cac();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x2d0);
  } while( true );
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar20 = piVar20 + 4;
    if (uVar17 == 0) break;
    if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777a600) {
      puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 3) * 0x10 + 0x138);
      goto LAB_06893f30;
    }
  }
LAB_06893f10:
  puVar15 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)PTR_DAT_0777a600,3);
LAB_06893f30:
  iVar9 = (*(code *)*puVar15)(extraout_x1,puVar15[1]);
  if (iVar9 == 0) {
    lVar19 = *extraout_x1;
    uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar17 != 0) {
      piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
          puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_06893f98;
        }
        uVar17 = uVar17 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)puVar4,1);
LAB_06893f98:
    iVar9 = (*(code *)*puVar15)(extraout_x1,puVar15[1]);
    uVar17 = (ulong)(iVar9 == 0);
  }
  else {
    uVar17 = 0;
  }
  return uVar17;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar20 = piVar20 + 4;
    if (uVar17 == 0) break;
LAB_068944d8:
    if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
      puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 0x10) * 0x10 + 0x138);
      goto LAB_06894510;
    }
  }
LAB_068944f0:
  puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,0x10);
LAB_06894510:
                    /* WARNING: Could not recover jumptable at 0x0689452c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar17 = (*(code *)*puVar15)(extraout_x1_00,3,puVar15[1]);
  return uVar17;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar20 = piVar20 + 4;
    if (uVar17 == 0) break;
LAB_06892ad0:
    if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
      puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 3) * 0x10 + 0x138);
      goto LAB_06893050;
    }
  }
LAB_06892ae8:
  puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,3);
LAB_06893050:
  iVar9 = (*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
  lVar19 = *extraout_x1_00;
  uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar17 != 0) {
    piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
        puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 5) * 0x10 + 0x138);
        goto LAB_068930b0;
      }
      uVar17 = uVar17 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar17 != 0);
  }
  puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,5);
LAB_068930b0:
  (*(code *)*puVar15)((double)iVar9,extraout_x1_00,puVar15[1]);
  lVar19 = *extraout_x1_00;
  uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar17 != 0) {
    piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
        puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 0xd) * 0x10 + 0x138);
        goto LAB_06893110;
      }
      uVar17 = uVar17 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar17 != 0);
  }
  puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,0xd);
LAB_06893110:
  (*(code *)*puVar15)(extraout_x1_00,0,puVar15[1]);
  lVar19 = *extraout_x1_00;
  uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar17 != 0) {
    piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
        puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 0xb) * 0x10 + 0x138);
        goto LAB_06893170;
      }
      uVar17 = uVar17 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar17 != 0);
  }
  puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,0xb);
LAB_06893170:
  (*(code *)*puVar15)(extraout_x1_00,0,puVar15[1]);
  uVar17 = MergeEngine_ECS_Systems_Items_TimeCycleSystem__ProcessDelay
                     (extraout_d0,unaff_x20,extraout_x1_00);
  return uVar17;
code_r0x06892dec:
  lVar19 = *plVar23;
  uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar17 != 0) {
    piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)PTR_DAT_0777a498) {
        puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 0x14) * 0x10 + 0x138);
        goto LAB_06892f40;
      }
      uVar17 = uVar17 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar17 != 0);
  }
  puVar15 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_0777a498,0x14);
LAB_06892f40:
  uVar14 = (*(code *)*puVar15)(plVar23,extraout_x1_00,puVar15[1]);
  *(undefined8 *)((long)register0x00000008 + -0x2c8) =
       *(undefined8 *)((long)register0x00000008 + -0x208);
  *(undefined8 *)((long)register0x00000008 + -0x2d0) =
       *(undefined8 *)((long)register0x00000008 + -0x210);
  *(undefined8 *)((long)register0x00000008 + -0x2b8) =
       *(undefined8 *)((long)register0x00000008 + -0x1f8);
  *(undefined8 *)((long)register0x00000008 + -0x2c0) =
       *(undefined8 *)((long)register0x00000008 + -0x200);
  *(undefined8 *)((long)register0x00000008 + -0x2b0) =
       *(undefined8 *)((long)register0x00000008 + -0x1f0);
  MergeEngine_ECS_Systems_Items_TimeCycleSystem__CheckCooldownState
            (unaff_x20,(long *)(ulong)uVar7,uVar11,uVar14,
             (undefined1 *)((long)register0x00000008 + -0x2d0),extraout_x1_00);
  lVar19 = *extraout_x1_00;
  uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar17 != 0) {
    piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
        puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 6) * 0x10 + 0x138);
        goto LAB_06892fcc;
      }
      uVar17 = uVar17 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar17 != 0);
  }
  puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,6);
LAB_06892fcc:
  dVar27 = (double)(*(code *)*puVar15)(extraout_x1_00,puVar15[1]);
  lVar19 = *extraout_x1_00;
  uVar17 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar17 != 0) {
    piVar20 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
        puVar15 = (undefined8 *)(lVar19 + (long)(*piVar20 + 7) * 0x10 + 0x138);
        goto LAB_0689302c;
      }
      uVar17 = uVar17 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar17 != 0);
  }
  puVar15 = (undefined8 *)func_0x03256b10(extraout_x1_00,*(long *)puVar4,7);
LAB_0689302c:
  uVar17 = (*(code *)*puVar15)(dVar27 - extraout_d0,extraout_x1_00,puVar15[1]);
  return uVar17;
}

