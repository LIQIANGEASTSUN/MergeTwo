/* Ghidra 12.1.2 native pseudocode; RVA 0x45330D4; MergeEngine.ECS.Systems.Items.Producers.SpawningItemsSystem<object>.SpawnAt; status ok */

/* WARNING: Possible PIC construction at 0x046333ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04633908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04633938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04633970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04633a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04633a5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04633e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04633f04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04633974) */
/* WARNING: Removing unreachable block (ram,0x04633980) */
/* WARNING: Removing unreachable block (ram,0x04633978) */
/* WARNING: Removing unreachable block (ram,0x04633984) */
/* WARNING: Removing unreachable block (ram,0x0463398c) */
/* WARNING: Removing unreachable block (ram,0x046339a0) */
/* WARNING: Removing unreachable block (ram,0x046339a8) */
/* WARNING: Removing unreachable block (ram,0x046339b4) */
/* WARNING: Removing unreachable block (ram,0x046339bc) */
/* WARNING: Removing unreachable block (ram,0x046339d0) */
/* WARNING: Removing unreachable block (ram,0x046339f0) */
/* WARNING: Removing unreachable block (ram,0x04633a0c) */
/* WARNING: Removing unreachable block (ram,0x04633a10) */
/* WARNING: Removing unreachable block (ram,0x04633a34) */
/* WARNING: Removing unreachable block (ram,0x04633a50) */
/* WARNING: Removing unreachable block (ram,0x046339f8) */
/* WARNING: Removing unreachable block (ram,0x04633a00) */
/* WARNING: Removing unreachable block (ram,0x0463393c) */
/* WARNING: Removing unreachable block (ram,0x04633940) */
/* WARNING: Removing unreachable block (ram,0x04633954) */
/* WARNING: Removing unreachable block (ram,0x0463394c) */
/* WARNING: Removing unreachable block (ram,0x04633958) */
/* WARNING: Removing unreachable block (ram,0x0463390c) */
/* WARNING: Removing unreachable block (ram,0x04633914) */
/* WARNING: Removing unreachable block (ram,0x0463392c) */
/* WARNING: Removing unreachable block (ram,0x046333b0) */
/* WARNING: Removing unreachable block (ram,0x04633f08) */

long * MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___SpawnAt
                 (long param_1,undefined8 param_2,long *param_3,long param_4,long param_5,
                 uint param_6,undefined8 param_7,long param_8,long param_9)

{
  ulong *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  plVar15 = param_3;
  if ((bRam0000000007e1912f & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776dcd8);
    func_0x03280a18(PTR_DAT_0777aa98);
    func_0x03280a18(PTR_DAT_0777e480);
    func_0x03280a18(PTR_DAT_0777e488);
    func_0x03280a18(PTR_DAT_0777e490);
    func_0x03280a18(PTR_DAT_0777e498);
    func_0x03280a18(PTR_DAT_0777a978);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777e4a0);
    func_0x03280a18(PTR_DAT_0777a600);
    func_0x03280a18(PTR_DAT_0777e4a8);
    func_0x03280a18(PTR_DAT_07750da0);
    func_0x03280a18(PTR_DAT_0777e4b0);
    func_0x03280a18(PTR_DAT_077798f0);
    func_0x03280a18(PTR_DAT_0777e4b8);
    func_0x03280a18(PTR_DAT_0777e4c0);
    func_0x03280a18(PTR_DAT_0774e5d8);
    func_0x03280a18(PTR_DAT_0777e4c8);
    func_0x03280a18(PTR_DAT_0777e4d0);
    func_0x03280a18(PTR_DAT_0777e4d8);
    func_0x03280a18(PTR_DAT_07778fa0);
    bRam0000000007e1912f = 1;
  }
  lStack_68 = 0;
  if (param_3 != (long *)0x0) {
    lVar16 = *param_3;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777a978) {
          puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_04633280;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    plVar15 = (long *)0x1;
    puVar12 = (undefined8 *)func_0x03256b10(param_3);
LAB_04633280:
    lVar16 = (*(code *)*puVar12)(param_3,puVar12[1]);
    if (lVar16 != 0) {
      uVar17 = func_0x060e8960(lVar16,0);
      if ((uVar17 & 1) == 0) {
        if (param_4 == 0) goto LAB_04633ecc;
        plVar15 = *(long **)(param_4 + 0x70);
        MergeEngine_ECS_Systems_Items_Producers_SpawningItemsSystem_object___RefillQueueFor
                  (uVar17,param_3);
      }
      lVar16 = *param_3;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777e498) {
            puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_04633300;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      plVar15 = (long *)0x0;
      puVar12 = (undefined8 *)func_0x03256b10(param_3);
LAB_04633300:
      uVar13 = (*(code *)*puVar12)(param_3,puVar12[1]);
      puVar7 = PTR_DAT_07750da0;
      if (param_1 != 0) {
        uVar17 = func_0x064a73dc(param_1,uVar13,0);
        plVar14 = (long *)func_0x04633f3c(param_1,param_4,param_3,param_7,param_8,&lStack_68,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(param_9 + 0x20) + 0xc0) + 0x10));
        lVar16 = lStack_68;
        puVar8 = PTR_DAT_0777e490;
        if (param_8 == 0) {
          func_0x04635cc4(param_1,plVar14,param_2,param_3,param_4,param_5,lStack_68,0,
                          *(undefined8 *)(*(long *)(*(long *)(param_9 + 0x20) + 0xc0) + 0x20));
          puVar7 = PTR_DAT_0777a600;
          if ((uVar17 & 1) == 0) {
            lVar16 = *param_3;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777a600) {
                  puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 10) * 0x10 + 0x138);
                  goto LAB_04633458;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_0777a600,10);
LAB_04633458:
            iVar9 = (*(code *)*puVar12)(param_3,puVar12[1]);
            lVar16 = *param_3;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)puVar7) {
                  puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 0xb) * 0x10 + 0x138);
                  goto LAB_046334b8;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar7,0xb);
LAB_046334b8:
            (*(code *)*puVar12)(param_3,iVar9 + -1,puVar12[1]);
            puVar7 = PTR_DAT_0777a600;
            lVar16 = *param_3;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777a600) {
                  puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 0xc) * 0x10 + 0x138);
                  goto LAB_04633520;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_0777a600,0xc);
LAB_04633520:
            iVar9 = (*(code *)*puVar12)(param_3,puVar12[1]);
            lVar16 = *param_3;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)puVar7) {
                  puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 0xd) * 0x10 + 0x138);
                  goto LAB_04633580;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar7,0xd);
LAB_04633580:
            (*(code *)*puVar12)(param_3,iVar9 + 1,puVar12[1]);
            puVar7 = PTR_DAT_0777a600;
            lVar16 = *param_3;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777a600) {
                  puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 0x14) * 0x10 + 0x138);
                  goto LAB_046335e8;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_0777a600,0x14);
LAB_046335e8:
            iVar9 = (*(code *)*puVar12)(param_3,puVar12[1]);
            lVar16 = *param_3;
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)puVar7) {
                  puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 0x15) * 0x10 + 0x138);
                  goto LAB_04633648;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar7,0x15);
LAB_04633648:
            (*(code *)*puVar12)(param_3,iVar9 + 1,puVar12[1]);
          }
          puVar7 = PTR_DAT_0777e488;
          lVar20 = *(long *)puVar8;
          lVar16 = *param_3;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)(lVar20 + 0x20)) {
                lVar16 = lVar16 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar20 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_046336c0;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          lVar16 = func_0x03256b10(param_3);
LAB_046336c0:
          lVar16 = func_0x03280b88(*(undefined8 *)(lVar16 + 8),lVar20);
          lVar16 = (**(code **)(lVar16 + 8))(param_3,lVar16);
          lVar21 = *(long *)puVar7;
          lVar20 = *param_3;
          uVar17 = (ulong)*(ushort *)(lVar20 + 0x12e);
          plVar15 = (long *)(ulong)*(ushort *)(lVar21 + 0x50);
          if (uVar17 != 0) {
            piVar19 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)(lVar21 + 0x20)) {
                lVar20 = lVar20 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar21 + 0x50)) * 0x10 +
                         0x138;
                goto LAB_04633734;
              }
              uVar17 = uVar17 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar17 != 0);
          }
          lVar20 = func_0x03256b10(param_3);
LAB_04633734:
          lVar20 = func_0x03280b88(*(undefined8 *)(lVar20 + 8),lVar21);
          lVar20 = (**(code **)(lVar20 + 8))(param_3,lVar20);
          if ((lVar16 != 0) && (lVar20 != 0)) {
            *(undefined1 *)(lVar20 + 0x31) = 1;
          }
          plVar22 = *(long **)(param_1 + 0x48);
          if (plVar22 != (long *)0x0) {
            lVar21 = *plVar22;
            uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777a498) {
                  puVar12 = (undefined8 *)(lVar21 + (long)(*piVar19 + 0x14) * 0x10 + 0x138);
                  goto LAB_046337c4;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)func_0x03256b10(plVar22,*(long *)PTR_DAT_0777a498,0x14);
LAB_046337c4:
            plVar15 = (long *)puVar12[1];
            plVar22 = (long *)(*(code *)*puVar12)(plVar22,param_3);
            if (lVar16 != 0) {
              *(undefined1 *)(lVar16 + 0x50) = 0;
            }
            lVar16 = *param_3;
            plVar23 = *(long **)(param_1 + 0x50);
            uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
            if (uVar17 != 0) {
              piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777e498) {
                  puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_04633838;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            plVar15 = (long *)0x0;
            puVar12 = (undefined8 *)func_0x03256b10(param_3);
LAB_04633838:
            uVar13 = (*(code *)*puVar12)(param_3,puVar12[1]);
            if (plVar23 != (long *)0x0) {
              lVar16 = *plVar23;
              uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
              uVar24 = *(undefined8 *)PTR_DAT_07778fa0;
              if (uVar17 != 0) {
                piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777e4a0) {
                    puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                    goto LAB_046338ac;
                  }
                  uVar17 = uVar17 - 1;
                  piVar19 = piVar19 + 4;
                } while (uVar17 != 0);
              }
              puVar12 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_0777e4a0,0);
LAB_046338ac:
              plVar15 = plVar22;
              uVar13 = (*(code *)*puVar12)(plVar23,uVar24,plVar22,uVar13,0,puVar12[1]);
              if (lStack_68 == 0) {
                if ((param_5 != 0) && (lVar16 = *(long *)(param_5 + 0x10), lVar16 != 0)) {
                  lVar21 = *(long *)(lVar16 + 0x10);
                  lVar18 = *(long *)PTR_DAT_0777e4a8;
                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                  if (lVar21 != 0) {
                    uVar3 = *(uint *)(lVar16 + 0x18);
                    if (uVar3 < *(uint *)(lVar21 + 0x18)) {
                      *(uint *)(lVar16 + 0x18) = uVar3 + 1;
                      puVar12 = (undefined8 *)(lVar21 + (long)(int)uVar3 * 8 + 0x20);
                      *puVar12 = uVar13;
                      func_0x032809c4(puVar12,uVar13);
                    }
                    else {
                      func_0x0414446c(lVar16,uVar13,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                    }
                    puVar7 = PTR_DAT_0777a600;
                    lVar16 = *param_3;
                    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
                    if (uVar17 != 0) {
                      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777a600) {
                          puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
                          goto LAB_04633b28;
                        }
                        uVar17 = uVar17 - 1;
                        piVar19 = piVar19 + 4;
                      } while (uVar17 != 0);
                    }
                    puVar12 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_0777a600,0);
LAB_04633b28:
                    puVar8 = PTR_DAT_0777e480;
                    iVar9 = (*(code *)*puVar12)(param_3,puVar12[1]);
                    lVar21 = *param_3;
                    lVar16 = *(long *)puVar7;
                    uVar2 = *(ushort *)(lVar21 + 0x12e);
                    uVar17 = (ulong)uVar2;
                    if (iVar9 < 1) {
                      if (uVar2 != 0) {
                        piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar19 + -2) == lVar16) {
                            puVar12 = (undefined8 *)(lVar21 + (long)(*piVar19 + 9) * 0x10 + 0x138);
                            goto LAB_04633cb4;
                          }
                          uVar17 = uVar17 - 1;
                          piVar19 = piVar19 + 4;
                        } while (uVar17 != 0);
                      }
                      puVar12 = (undefined8 *)func_0x03256b10(param_3,lVar16,9);
LAB_04633cb4:
                      (*(code *)*puVar12)(param_3,0,puVar12[1]);
                      uStack_80 = *(undefined8 *)PTR_DAT_077798f0;
                      uStack_70 = 0x13;
                      uStack_78 = 0xffffffffffffffff;
                      uVar13 = func_0x057cd6e4(&uStack_80,0);
                      if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
                        func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
                      }
                      func_0x0556c434(*(undefined8 *)PTR_DAT_0777e4d8,uVar13,0,
                                      *(undefined8 *)PTR_DAT_0777e4c8,
                                      *(undefined8 *)PTR_DAT_0777e4d0,0,0);
                    }
                    else {
                      if (uVar2 != 0) {
                        piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar19 + -2) == lVar16) {
                            puVar12 = (undefined8 *)(lVar21 + (long)(*piVar19 + 0xc) * 0x10 + 0x138)
                            ;
                            goto LAB_04633bc8;
                          }
                          uVar17 = uVar17 - 1;
                          piVar19 = piVar19 + 4;
                        } while (uVar17 != 0);
                      }
                      puVar12 = (undefined8 *)func_0x03256b10(param_3,lVar16,0xc);
LAB_04633bc8:
                      iVar9 = (*(code *)*puVar12)(param_3,puVar12[1]);
                      lVar21 = *param_3;
                      lVar16 = *(long *)puVar7;
                      uVar17 = (ulong)*(ushort *)(lVar21 + 0x12e);
                      if (uVar17 != 0) {
                        piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar19 + -2) == lVar16) {
                            puVar12 = (undefined8 *)(lVar21 + (long)*piVar19 * 0x10 + 0x138);
                            goto LAB_04633c24;
                          }
                          uVar17 = uVar17 - 1;
                          piVar19 = piVar19 + 4;
                        } while (uVar17 != 0);
                      }
                      puVar12 = (undefined8 *)func_0x03256b10(param_3,lVar16,0);
LAB_04633c24:
                      iVar10 = (*(code *)*puVar12)(param_3,puVar12[1]);
                      lVar16 = *param_3;
                      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
                      iVar4 = 0;
                      if (iVar10 != 0) {
                        iVar4 = (iVar9 + -1) / iVar10;
                      }
                      if (uVar17 != 0) {
                        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777a600) {
                            puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 9) * 0x10 + 0x138);
                            goto LAB_04633c90;
                          }
                          uVar17 = uVar17 - 1;
                          piVar19 = piVar19 + 4;
                        } while (uVar17 != 0);
                      }
                      puVar12 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_0777a600,9);
LAB_04633c90:
                      (*(code *)*puVar12)(param_3,iVar4,puVar12[1]);
                    }
                    func_0x04635260(param_1,param_3,lVar20,plVar22,plVar14,param_7,0,
                                    *(undefined8 *)
                                     (*(long *)(*(long *)(param_9 + 0x20) + 0xc0) + 0x30));
                    lVar20 = *(long *)puVar8;
                    lVar16 = *param_3;
                    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
                    plVar15 = (long *)(ulong)*(ushort *)(lVar20 + 0x50);
                    if (uVar17 != 0) {
                      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar19 + -2) == *(long *)(lVar20 + 0x20)) {
                          lVar16 = lVar16 + (long)(int)(*piVar19 + (uint)*(ushort *)(lVar20 + 0x50))
                                            * 0x10 + 0x138;
                          goto LAB_04633dc8;
                        }
                        uVar17 = uVar17 - 1;
                        piVar19 = piVar19 + 4;
                      } while (uVar17 != 0);
                    }
                    lVar16 = func_0x03256b10(param_3);
LAB_04633dc8:
                    lVar16 = func_0x03280b88(*(undefined8 *)(lVar16 + 8),lVar20);
                    lVar16 = (**(code **)(lVar16 + 8))(param_3,lVar16);
                    if (lVar16 != 0) {
                      lVar20 = func_0x0463588c(lVar16,param_3,plVar22,plVar14);
                      plVar15 = (long *)(lVar16 + 0x68);
                      *plVar15 = lVar20;
                      goto SUB_032809c4;
                    }
                    if ((param_6 & 1) == 0) {
                      return plVar14;
                    }
                    if ((plVar14 != (long *)0x0) &&
                       (plVar23 = (long *)plVar14[2], plVar23 != (long *)0x0)) {
                      lVar16 = *(long *)(param_1 + 0x28);
                      uVar13 = (**(code **)(*plVar23 + 0x1e8))
                                         (plVar23,*(undefined8 *)(*plVar23 + 0x1f0));
                      if ((*(long *)(param_1 + 0x60) != 0) &&
                         (lVar20 = func_0x06a02324(*(long *)(param_1 + 0x60),0), lVar20 != 0)) {
                        uVar11 = func_0x044f554c(lVar20,*(undefined8 *)PTR_DAT_0777e4b0);
                        uVar24 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777e4c0);
                        func_0x060f3da8(uVar24,param_3,plVar22,uVar13,uVar11,0);
                        plVar15 = plVar22;
                        if (lVar16 != 0) {
                          func_0x03ea4d6c(lVar16,uVar24,*(undefined8 *)PTR_DAT_0777e4b8);
                          return plVar14;
                        }
                      }
                    }
                  }
                }
              }
              else {
                lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777aa98);
                func_0x06a30df4(lVar16,0);
                if ((lStack_68 != 0) && (lVar16 != 0)) {
                  plVar15 = (long *)(lVar16 + 0x20);
                  *plVar15 = *(long *)(lStack_68 + 0x20);
                  goto SUB_032809c4;
                }
              }
            }
          }
        }
        else {
          plVar15 = *(long **)puVar7;
          uStack_80 = 0;
          func_0x0437b6e0(&uStack_80,*(undefined4 *)(param_8 + 0x18));
          lVar20 = lStack_68;
          if (lVar16 != 0) {
            *(undefined8 *)(lVar16 + 0x48) = uStack_80;
            lVar16 = func_0x04634608(param_1,param_3);
            if (lVar20 != 0) {
              plVar15 = (long *)(lVar20 + 0x50);
              *plVar15 = lVar16;
              goto SUB_032809c4;
            }
          }
        }
      }
    }
  }
LAB_04633ecc:
  auVar25 = func_0x03280cac();
  lVar16 = auVar25._8_8_;
  if ((lVar16 == 0) || (plVar15 == (long *)0x0)) {
    return auVar25._0_8_;
  }
  plVar15[2] = *(long *)(lVar16 + 0x10);
  *(undefined1 *)(plVar15 + 3) = *(undefined1 *)(lVar16 + 0x18);
  plVar15 = plVar15 + 4;
  *plVar15 = *(long *)(lVar16 + 0x20);
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)plVar15 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar15 >> 0xc & 0x3f);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  return plVar15;
}

