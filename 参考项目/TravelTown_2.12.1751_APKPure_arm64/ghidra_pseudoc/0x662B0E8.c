/* Ghidra 12.1.2 native pseudocode; RVA 0x662B0E8; Merger.Game.ViewModel.InventoryItemsViewModel.GetItemUUID; status ok */


/* WARNING: Possible PIC construction at 0x06955388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0695538c) */
/* WARNING: Removing unreachable block (ram,0x0695542c) */
/* WARNING: Removing unreachable block (ram,0x069553a4) */
/* WARNING: Removing unreachable block (ram,0x069553f8) */
/* WARNING: Removing unreachable block (ram,0x069553fc) */

long * Merger_Game_ViewModel_InventoryItemsViewModel__GetItemUUID
                 (long param_1,undefined4 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  
  if ((bRam0000000007e27e34 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07806898);
    bRam0000000007e27e34 = 1;
  }
  plVar14 = *(long **)(param_1 + 0xd0);
  if (plVar14 != (long *)0x0) {
    lVar10 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07806898) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 7) * 0x10 + 0x138);
          goto LAB_0672b178;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07806898,7);
LAB_0672b178:
                    /* WARNING: Could not recover jumptable at 0x0672b190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar14 = (long *)(*(code *)*puVar5)(plVar14,param_2,0,puVar5[1]);
    return plVar14;
  }
  lVar10 = func_0x03280cac();
  if ((bRam0000000007e27e35 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f240);
    func_0x03280a18(PTR_DAT_0774e758);
    func_0x03280a18(PTR_DAT_0774e4d8);
    func_0x03280a18(PTR_DAT_0776f248);
    func_0x03280a18(PTR_DAT_07806898);
    func_0x03280a18(PTR_DAT_07771ec0);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_07800c90);
    func_0x03280a18(PTR_DAT_078069a0);
    func_0x03280a18(PTR_DAT_078069a8);
    func_0x03280a18(PTR_DAT_078069b0);
    func_0x03280a18(PTR_DAT_0776fb48);
    func_0x03280a18(PTR_DAT_07771f40);
    bRam0000000007e27e35 = 1;
  }
  puVar1 = PTR_DAT_07806898;
  plVar14 = *(long **)(lVar10 + 0xd0);
  uVar6 = 0;
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07806898) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0672b2b8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    param_3 = 0;
    puVar5 = (undefined8 *)func_0x03256b10(plVar14);
LAB_0672b2b8:
    uVar3 = (*(code *)*puVar5)(plVar14,puVar5[1]);
    puVar2 = PTR_DAT_07771f40;
    plVar14 = *(long **)(lVar10 + 0xd0);
    uVar6 = 0;
    if (plVar14 != (long *)0x0) {
      lVar11 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 4) * 0x10 + 0x138);
            goto LAB_0672b328;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar1,4);
LAB_0672b328:
      param_3 = (*(code *)*puVar5)(plVar14,puVar5[1]);
      param_3 = param_3 & 0xffffffff;
      uVar6 = func_0x03280ca0(*(undefined8 *)puVar2);
      func_0x06b21870(uVar6,uVar3,param_3,0,0);
      plVar14 = *(long **)(lVar10 + 0xd0);
      if (plVar14 != (long *)0x0) {
        lVar11 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto LAB_0672b3b4;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar1,2);
LAB_0672b3b4:
        iVar4 = (*(code *)*puVar5)(plVar14,puVar5[1]);
        lVar11 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 6) * 0x10 + 0x138);
              goto LAB_0672b414;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar1,6);
LAB_0672b414:
        puVar2 = PTR_DAT_078069a0;
        puVar1 = PTR_DAT_0774e758;
        plVar14 = (long *)(*(code *)*puVar5)(plVar14,iVar4 + -1,0,puVar5[1]);
        uVar7 = 0;
        if (plVar14 != (long *)0x0) {
          lVar11 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07779820) {
                puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_0672b494;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07779820,0);
LAB_0672b494:
          uVar7 = (*(code *)*puVar5)(plVar14,puVar5[1]);
        }
        param_3 = *(ulong *)(lVar10 + 0xd0);
        uVar8 = func_0x03280ca0(*(undefined8 *)puVar1);
        func_0x056ed730(uVar8,lVar10,*(undefined8 *)puVar2,0);
        uVar12 = func_0x067266a8(lVar10,uVar6,param_3,uVar7,uVar8);
        if ((uVar12 & 1) != 0) {
          uVar6 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0774e4d8);
          func_0x057ced5c(uVar6,0);
          if (*(int *)(*(long *)PTR_DAT_0776fb48 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          puVar1 = PTR_DAT_0776f8e0;
          if ((bRam0000000007e2945c & 1) == 0) {
            func_0x03280a18(PTR_DAT_0776f248,0);
            func_0x03280a18(PTR_DAT_0776f8e0);
            bRam0000000007e2945c = 1;
          }
          plVar14 = (long *)func_0x03280ca0(*(undefined8 *)puVar1);
          func_0x05ac10bc(plVar14,0);
          if (plVar14 != (long *)0x0) {
            lVar10 = *plVar14;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0776f248) {
                  puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 4) * 0x10 + 0x138);
                  goto LAB_06955084;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0776f248,4);
LAB_06955084:
            (*(code *)*puVar5)(plVar14,uVar6,puVar5[1]);
            return plVar14;
          }
          func_0x03280cac();
          puVar1 = PTR_DAT_0776fb48;
          if ((bRam0000000007e2945d & 1) == 0) {
            func_0x03280a18(PTR_DAT_0776f248);
            func_0x03280a18(PTR_DAT_07771ec0);
            func_0x03280a18(PTR_DAT_0776fb48);
            bRam0000000007e2945d = 1;
          }
          lVar10 = *(long *)puVar1;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar10 = *(long *)puVar1;
          }
          plVar14 = (long *)**(undefined8 **)(lVar10 + 0xb8);
          if (plVar14 == (long *)0x0) {
LAB_06955224:
            auVar15 = func_0x03280cac();
            plVar9 = auVar15._8_8_;
            plVar14 = auVar15._0_8_;
            if ((bRam0000000007e2945e & 1) == 0) {
              func_0x03280a18(PTR_DAT_0776f248);
              bRam0000000007e2945e = 1;
            }
            if (plVar9 != (long *)0x0) {
              lVar10 = *plVar9;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0776f248) {
                    puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 10) * 0x10 + 0x138);
                    goto LAB_069552b4;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar5 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_0776f248,10);
LAB_069552b4:
              iVar4 = (*(code *)*puVar5)(plVar9,puVar5[1]);
              if (iVar4 == 2) {
                if (plVar14 != (long *)0x0) {
                  (**(code **)(*plVar14 + 0x278))(plVar14,plVar9,*(undefined8 *)(*plVar14 + 0x280));
                  return (long *)0x1;
                }
                func_0x03280cac();
                puVar1 = PTR_DAT_07817470;
                if ((bRam0000000007e2945f & 1) == 0) {
                  func_0x03280a18(PTR_DAT_07771708);
                  func_0x03280a18(PTR_DAT_0777da58);
                  func_0x03280a18(PTR_DAT_0776f8e0);
                  func_0x03280a18(PTR_DAT_07817478);
                  func_0x03280a18(PTR_DAT_07817470);
                  bRam0000000007e2945f = 1;
                }
                plVar14 = (long *)func_0x03280ca0(*(undefined8 *)puVar1);
                return plVar14;
              }
            }
            return (long *)0x0;
          }
          lVar10 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0776f248) {
                puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 10) * 0x10 + 0x138);
                goto LAB_06955168;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0776f248,10);
LAB_06955168:
          iVar4 = (*(code *)*puVar5)(plVar14,puVar5[1]);
          if (iVar4 != 0) {
            lVar10 = *(long *)puVar1;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              func_0x03280b8c();
              lVar10 = *(long *)puVar1;
            }
            plVar14 = (long *)**(undefined8 **)(lVar10 + 0xb8);
            if (plVar14 == (long *)0x0) goto LAB_06955224;
            lVar10 = *plVar14;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07771ec0) {
                  puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_069551f0;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07771ec0,1);
LAB_069551f0:
            (*(code *)*puVar5)(plVar14,puVar5[1]);
          }
          lVar10 = *(long *)puVar1;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar10 = *(long *)puVar1;
          }
          return (long *)**(undefined8 **)(lVar10 + 0xb8);
        }
        plVar14 = *(long **)(lVar10 + 0xd8);
        if (plVar14 != (long *)0x0) {
          lVar11 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07800c90) {
                puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 3) * 0x10 + 0x138);
                goto LAB_0672b590;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07800c90,3);
LAB_0672b590:
          plVar14 = (long *)(*(code *)*puVar5)(plVar14,uVar6,puVar5[1]);
          uVar7 = func_0x03280ca0(*(undefined8 *)puVar1);
          param_3 = *(ulong *)PTR_DAT_078069a8;
          func_0x056ed730(uVar7,lVar10,param_3,0);
          puVar1 = PTR_DAT_07771ec0;
          uVar6 = 0;
          if (plVar14 != (long *)0x0) {
            lVar11 = *plVar14;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07771ec0) {
                  puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0672b624;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07771ec0,0);
LAB_0672b624:
            plVar14 = (long *)(*(code *)*puVar5)(plVar14,uVar7,puVar5[1]);
            uVar7 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0776f240);
            param_3 = *(ulong *)PTR_DAT_078069b0;
            func_0x054221d4(uVar7,lVar10,param_3,0);
            uVar6 = 0;
            if (plVar14 != (long *)0x0) {
              lVar10 = *plVar14;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0776f248) {
                    puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_0672b6c4;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0776f248,1);
LAB_0672b6c4:
              param_3 = puVar5[1];
              lVar10 = (*(code *)*puVar5)(plVar14,uVar7);
              if (lVar10 == 0) {
                return (long *)0x0;
              }
              uVar6 = *(undefined8 *)puVar1;
              plVar14 = (long *)func_0x03280b90(lVar10,uVar6);
              if (plVar14 != (long *)0x0) {
                return plVar14;
              }
              goto LAB_0672b704;
            }
          }
        }
      }
    }
  }
  func_0x03280cac();
LAB_0672b704:
  auVar15 = func_0x03281048(lVar10,uVar6);
  if ((bRam0000000007e27e36 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07806898);
    bRam0000000007e27e36 = 1;
  }
  plVar14 = *(long **)(auVar15._0_8_ + 0xd0);
  if (plVar14 == (long *)0x0) {
    plVar14 = (long *)func_0x03280cac();
    puVar2 = PTR_DAT_07828a38;
    puVar1 = PTR_DAT_07828a30;
    if ((bRam0000000007e29c54 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07828a38,0);
      func_0x03280a18(PTR_DAT_07828a30);
      bRam0000000007e29c54 = 1;
    }
    lVar10 = func_0x03280ca0(*(undefined8 *)puVar1);
    func_0x053bfe40(lVar10,*(undefined8 *)puVar2);
    plVar14[0xc] = lVar10;
    func_0x032809c4(plVar14 + 0xc,lVar10);
    return plVar14;
  }
  lVar10 = *plVar14;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07806898) {
        puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 8) * 0x10 + 0x138);
        goto LAB_0672b7a8;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07806898,8);
LAB_0672b7a8:
                    /* WARNING: Could not recover jumptable at 0x0672b7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar14 = (long *)(*(code *)*puVar5)(plVar14,auVar15._8_8_ & 0xffffffff,param_3 & 0xffffffff,
                                       puVar5[1]);
  return plVar14;
}

