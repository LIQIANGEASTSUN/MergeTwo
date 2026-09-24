/* Ghidra 12.1.2 native pseudocode; RVA 0x678C6E4; MergeEngine.ECS.Systems.Items.ConsumableDropSystem.TrySpawnConsumableFor; status ok */


/* WARNING: Possible PIC construction at 0x0688caf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0688caf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
MergeEngine_ECS_Systems_Items_ConsumableDropSystem__TrySpawnConsumableFor
          (long param_1,long param_2,undefined8 *param_3,undefined8 param_4,undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  ulong unaff_x23;
  long *unaff_x24;
  undefined *unaff_x25;
  undefined1 auVar15 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long *plStack_80;
  ulong uStack_78;
  long *plStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_48;
  
  puVar9 = param_3;
  if ((bRam0000000007e28d4c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777e638);
    func_0x03280a18(PTR_DAT_0777a940);
    func_0x03280a18(PTR_DAT_0777ff50);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07773068);
    bRam0000000007e28d4c = 1;
  }
  uStack_48 = 0;
  *param_3 = 0;
  func_0x032809c4(param_3,0);
  if (*(char *)(param_1 + 0x30) == '\0') {
    return 0;
  }
  plVar14 = (long *)0x7e28000;
  if (((*(long *)(param_1 + 0x58) != 0) &&
      (lVar11 = *(long *)(*(long *)(param_1 + 0x58) + 0x28), lVar11 != 0)) &&
     (plVar14 = *(long **)(param_1 + 0x50), plVar14 != (long *)0x0)) {
    lVar10 = *plVar14;
    uVar3 = *(uint *)(lVar11 + 0x20);
    unaff_x23 = (ulong)uVar3;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777ff50) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 10) * 0x10 + 0x138);
          goto LAB_0688c7fc;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)0xa;
    puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0777ff50,10);
LAB_0688c7fc:
    lVar11 = (*(code *)*puVar5)(plVar14,puVar5[1]);
    if (lVar11 != 0) {
      if ((int)uVar3 < *(int *)(lVar11 + 0xec)) {
        return 0;
      }
      lVar11 = func_0x0688c69c(param_1);
      if (lVar11 != 0) {
        uVar12 = func_0x06759dc0(lVar11,0);
        if ((uVar12 & 1) != 0) {
          return 0;
        }
        plVar14 = (long *)0x0;
        if (param_2 != 0) {
          param_2 = func_0x03d20d84(param_2,*(undefined8 *)PTR_DAT_0777a940);
          if (param_2 == 0) {
            return 0;
          }
          lVar11 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_0777e638);
          if (lVar11 != 0) {
            uVar12 = func_0x069fd714(lVar11,0);
            if ((uVar12 & 1) != 0) {
              return 0;
            }
            lVar11 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_0777bf98);
            puVar1 = PTR_DAT_0777a498;
            plVar14 = (long *)0x0;
            if ((lVar11 != 0) && (plVar14 = *(long **)(param_1 + 0x40), plVar14 != (long *)0x0)) {
              lVar10 = *plVar14;
              unaff_x23 = *(ulong *)(lVar11 + 0x30);
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777a498) {
                    puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 4) * 0x10 + 0x138);
                    goto LAB_0688c914;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0777a498,4);
LAB_0688c914:
              puVar9 = (undefined8 *)puVar5[1];
              plVar6 = (long *)(*(code *)*puVar5)(plVar14,unaff_x23,puVar9);
              puVar2 = PTR_DAT_0777c248;
              if (plVar6 != (long *)0x0) {
                lVar11 = *plVar6;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777c248) {
                      puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                      goto LAB_0688c984;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                puVar9 = (undefined8 *)0x3;
                puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0777c248,3);
LAB_0688c984:
                uVar12 = (*(code *)*puVar5)(plVar6,puVar5[1]);
                if ((uVar12 & 1) == 0) {
                  return 0;
                }
                unaff_x24 = *(long **)(param_1 + 0x40);
                plVar14 = plVar6;
                unaff_x25 = puVar2;
                if (unaff_x24 != (long *)0x0) {
                  lVar11 = *unaff_x24;
                  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                        puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x19) * 0x10 + 0x138);
                        goto LAB_0688c9ec;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar5 = (undefined8 *)func_0x03256b10(unaff_x24,*(long *)puVar1,0x19);
LAB_0688c9ec:
                  puVar9 = (undefined8 *)puVar5[1];
                  uVar3 = (*(code *)*puVar5)(unaff_x24,unaff_x23,puVar9);
                  lVar11 = *plVar6;
                  unaff_x23 = (ulong)uVar3;
                  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                        puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 5) * 0x10 + 0x138);
                        goto LAB_0688ca50;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar9 = (undefined8 *)0x5;
                  puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar2,5);
LAB_0688ca50:
                  iVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
                  if ((int)uVar3 < iVar4) {
                    return 0;
                  }
                  lVar11 = *plVar6;
                  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                        puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 6) * 0x10 + 0x138);
                        goto LAB_0688cab4;
                      }
                      uVar12 = uVar12 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar9 = (undefined8 *)0x6;
                  puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar2,6);
LAB_0688cab4:
                  uVar12 = (*(code *)*puVar5)(plVar6,puVar5[1]);
                  plVar6 = (long *)(uVar12 & 0xffffffff);
                  lVar11 = func_0x0688c69c(param_1);
                  plVar14 = plVar6;
                  if (lVar11 != 0) {
                    puVar9 = (undefined8 *)
                             func_0x06769c6c(lVar11,*(undefined8 *)(param_2 + 0x30),0,0);
                    param_4 = *(undefined8 *)(param_2 + 0x30);
                    param_5 = &uStack_48;
                    uStack_90 = 0x688caf8;
                    lVar11 = param_1;
                    goto SUB_0688cb14;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uStack_90 = 0x688cb14;
  auVar15 = func_0x03280cac();
  plVar6 = auVar15._8_8_;
  lVar11 = auVar15._0_8_;
SUB_0688cb14:
  puVar1 = PTR_DAT_077730b8;
  puStack_88 = unaff_x25;
  plStack_80 = unaff_x24;
  uStack_78 = unaff_x23;
  plStack_70 = plVar14;
  lStack_68 = param_2;
  lStack_60 = param_1;
  puStack_58 = param_3;
  if ((bRam0000000007e28d4d & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cc678);
    func_0x03280a18(PTR_DAT_0777e5b8);
    func_0x03280a18(PTR_DAT_0777e5c0);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_077730f8);
    func_0x03280a18(PTR_DAT_07779818);
    func_0x03280a18(PTR_DAT_0777e510);
    func_0x03280a18(PTR_DAT_0777e5d0);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e28d4d = 1;
  }
  *param_5 = 0;
  func_0x032809c4(param_5,0);
  plVar14 = *(long **)(lVar11 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  plVar6 = (long *)func_0x0624cb20((ulong)plVar6 & 0xffffffff,0);
  if (plVar6 != (long *)0x0) {
    lVar10 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07779818) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0688cc50;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_07779818,0);
LAB_0688cc50:
    uVar7 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if (plVar14 != (long *)0x0) {
      lVar10 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_077730f8) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0688ccb8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_077730f8,0);
LAB_0688ccb8:
      plVar14 = (long *)(*(code *)*puVar5)(plVar14,uVar7,puVar5[1]);
      if (plVar14 != (long *)0x0) {
        lVar10 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777c248) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0688cd24;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0777c248,0);
LAB_0688cd24:
        lVar10 = (*(code *)*puVar5)(plVar14,puVar5[1]);
        puVar1 = PTR_DAT_0777e5d0;
        if (lVar10 != 0) {
          uVar7 = func_0x0414419c(lVar10,0,*(undefined8 *)PTR_DAT_0777e510);
          uStack_98 = 0;
          func_0x0437ba9c(&uStack_98,4,*(undefined8 *)puVar1);
          uVar8 = func_0x06a13bc8(puVar9,uStack_98,0,0,0);
          plVar14 = *(long **)(lVar11 + 0x18);
          if (plVar14 != (long *)0x0) {
            lVar10 = *plVar14;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777e5b8) {
                  puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0688cde0;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0777e5b8,0);
LAB_0688cde0:
            uVar8 = (*(code *)*puVar5)(plVar14,uVar7,uVar8,puVar5[1]);
            *param_5 = uVar8;
            func_0x032809c4(param_5,uVar8);
            plVar14 = *(long **)(lVar11 + 0x10);
            if (plVar14 != (long *)0x0) {
              lVar10 = *plVar14;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777e5c0) {
                    puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 5) * 0x10 + 0x138);
                    goto LAB_0688ce68;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0777e5c0,5);
LAB_0688ce68:
              (*(code *)*puVar5)(plVar14,uVar8,puVar5[1]);
              plVar14 = (long *)func_0x0688c69c(lVar11);
              if ((plVar14 != (long *)0x0) &&
                 (plVar14 = (long *)(**(code **)(*plVar14 + 0x208))
                                              (plVar14,*(undefined8 *)(*plVar14 + 0x210)),
                 plVar14 != (long *)0x0)) {
                lVar11 = *plVar14;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_077cc678) {
                      puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x1a) * 0x10 + 0x138);
                      goto LAB_0688cef4;
                    }
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_077cc678,0x1a);
LAB_0688cef4:
                (*(code *)*puVar5)(_UNK_017be738,plVar14,puVar9,param_4,puVar9,7,puVar5[1]);
                return uVar7;
              }
            }
          }
        }
      }
    }
  }
  uVar7 = func_0x03280cac();
  return uVar7;
}

