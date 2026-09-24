/* Ghidra 12.1.2 native pseudocode; RVA 0x6AD3834; Merger.MergeBoard.PowerBoost.Commands.MergeBoardPowerBoostedItemLandedCommand.Execute; status ok */


long * Merger_MergeBoard_PowerBoost_Commands_MergeBoardPowerBoostedItemLandedCommand__Execute
                 (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  long alStack_90 [6];
  
  if ((bRam0000000007e2aab9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0ec8);
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_077da8d8);
    func_0x03280a18(PTR_DAT_0774ea58);
    func_0x03280a18(PTR_DAT_0777db38);
    func_0x03280a18(PTR_DAT_077da8e0);
    func_0x03280a18(PTR_DAT_077c0858);
    func_0x03280a18(PTR_DAT_077c1e40);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_0777a590);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_077c1d88);
    func_0x03280a18(PTR_DAT_0774ecc0);
    func_0x03280a18(PTR_DAT_0774ecb8);
    func_0x03280a18(PTR_DAT_077bf848);
    func_0x03280a18(PTR_DAT_078342e0);
    func_0x03280a18(PTR_DAT_078342e8);
    bRam0000000007e2aab9 = 1;
  }
  if ((param_2 == 0) || (plVar14 = *(long **)(param_2 + 0x20), plVar14 == (long *)0x0))
  goto LAB_06bd409c;
  lVar9 = *plVar14;
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_077c0858) {
        puVar6 = (undefined8 *)(lVar9 + (long)(*piVar13 + 3) * 0x10 + 0x138);
        goto LAB_06bd39a8;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_077c0858,3);
LAB_06bd39a8:
  plVar14 = (long *)(*(code *)*puVar6)(plVar14,puVar6[1]);
  puVar3 = PTR_DAT_0777a590;
  if (*(int *)(param_2 + 0x28) != 0) {
    return plVar14;
  }
  plVar15 = *(long **)(param_1 + 0x30);
  if (plVar15 == (long *)0x0) goto LAB_06bd409c;
  lVar9 = *plVar15;
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777a590) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_06bd3a3c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777a590,0);
LAB_06bd3a3c:
  plVar15 = (long *)(*(code *)*puVar6)(plVar15,puVar6[1]);
  puVar1 = PTR_DAT_0777a488;
  if (plVar14 == (long *)0x0) {
    return plVar15;
  }
  if (((ulong)plVar15 & 1) == 0) {
    return plVar15;
  }
  if (*(long *)(param_2 + 0x18) == 0) goto LAB_06bd409c;
  func_0x03d1b250(alStack_90,*(long *)(param_2 + 0x18),*(undefined8 *)PTR_DAT_0777a488);
  lVar9 = alStack_90[0];
  puVar2 = PTR_DAT_0777a498;
  plVar15 = *(long **)(param_1 + 0x40);
  if (plVar15 == (long *)0x0) goto LAB_06bd409c;
  lVar10 = *plVar15;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777a498) {
        puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 9) * 0x10 + 0x138);
        goto LAB_06bd3ad0;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777a498,9);
LAB_06bd3ad0:
  plVar15 = (long *)(*(code *)*puVar6)(plVar15,lVar9,puVar6[1]);
  if ((*(long *)(param_2 + 0x10) == 0) ||
     (func_0x03d1b250(alStack_90,*(long *)(param_2 + 0x10),*(undefined8 *)puVar1),
     plVar15 == (long *)0x0)) goto LAB_06bd409c;
  lVar10 = *plVar15;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777e548) {
        puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x1a) * 0x10 + 0x138);
        goto LAB_06bd3b5c;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_0777e548,0x1a);
LAB_06bd3b5c:
  lVar10 = (*(code *)*puVar6)(plVar15,puVar6[1]);
  if ((lVar10 == 0) || (lVar10 = func_0x06110918(lVar10,0), puVar1 = PTR_DAT_078342e8, lVar10 == 0))
  {
LAB_06bd3c2c:
    lVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0774ecb8);
    func_0x04143c38(lVar10,*(undefined8 *)PTR_DAT_0774ecc0);
  }
  else {
    lVar7 = *(long *)PTR_DAT_078342e8;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar7 = *(long *)puVar1;
    }
    lVar16 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar16 == 0) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar7 = *(long *)puVar1;
      }
      uVar18 = **(undefined8 **)(lVar7 + 0xb8);
      lVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077da8e0);
      func_0x053569b8(lVar16,uVar18,*(undefined8 *)PTR_DAT_078342e0,0);
      plVar15 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar15 = lVar16;
      func_0x032809c4(plVar15,lVar16);
    }
    uVar18 = func_0x03d50a94(lVar10,lVar16,*(undefined8 *)PTR_DAT_077da8d8);
    lVar10 = func_0x03d5ffd0(uVar18,*(undefined8 *)PTR_DAT_0774ea58);
    if (lVar10 == 0) goto LAB_06bd3c2c;
  }
  plVar15 = *(long **)(param_1 + 0x30);
  if (plVar15 != (long *)0x0) {
    lVar7 = *plVar15;
    plVar17 = *(long **)(param_1 + 0x40);
    uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_06bd3cac;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar15,*(long *)puVar3,2);
LAB_06bd3cac:
    uVar4 = (*(code *)*puVar6)(plVar15,puVar6[1]);
    if (plVar17 != (long *)0x0) {
      lVar16 = *plVar17;
      lVar7 = *(long *)puVar2;
      uVar12 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar16 + (long)(*piVar13 + 0xc) * 0x10 + 0x138);
            goto LAB_06bd3d10;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar17,lVar7,0xc);
LAB_06bd3d10:
      plVar15 = (long *)(*(code *)*puVar6)(plVar17,alStack_90[0],uVar4,puVar6[1]);
      lVar7 = 0;
      if (plVar15 != (long *)0x0) {
        lVar7 = *plVar15;
        uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07779820) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_06bd3d80;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_07779820,0);
LAB_06bd3d80:
        lVar7 = (*(code *)*puVar6)(plVar15,puVar6[1]);
      }
      plVar15 = *(long **)(param_1 + 0x40);
      lVar16 = alStack_90[0];
      if (lVar7 != 0) {
        lVar16 = lVar7;
      }
      if (plVar15 != (long *)0x0) {
        lVar11 = *plVar15;
        lVar7 = *(long *)puVar2;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar7) {
              puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0x21) * 0x10 + 0x138);
              goto LAB_06bd3dec;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar15,lVar7,0x21);
LAB_06bd3dec:
        plVar15 = (long *)(*(code *)*puVar6)(plVar15,lVar10,alStack_90[0],lVar16,puVar6[1]);
        if (((ulong)plVar15 & 1) == 0) {
          return plVar15;
        }
        plVar15 = *(long **)(param_1 + 0x30);
        if (plVar15 != (long *)0x0) {
          lVar10 = *plVar15;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 4) * 0x10 + 0x138);
                goto LAB_06bd3e60;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)func_0x03256b10(plVar15,*(long *)puVar3,4);
LAB_06bd3e60:
          uVar12 = (*(code *)*puVar6)(plVar15,puVar6[1]);
          if ((uVar12 & 1) == 0) {
            uVar5 = 0;
          }
          else {
            plVar15 = *(long **)(param_1 + 0x30);
            if (plVar15 == (long *)0x0) goto LAB_06bd409c;
            lVar10 = *plVar15;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                  puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 5) * 0x10 + 0x138);
                  goto LAB_06bd3ed0;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar6 = (undefined8 *)func_0x03256b10(plVar15,*(long *)puVar3,5);
LAB_06bd3ed0:
            uVar5 = (*(code *)*puVar6)(plVar15,lVar9,puVar6[1]);
          }
          puVar3 = PTR_DAT_077c1d88;
          lVar9 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_077c1d88) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0x53) * 0x10 + 0x138);
                goto LAB_06bd3f3c;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_077c1d88,0x53);
LAB_06bd3f3c:
          (*(code *)*puVar6)(plVar14,uVar5 & 1,puVar6[1]);
          lVar9 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0x55) * 0x10 + 0x138);
                goto LAB_06bd3f9c;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar3,0x55);
LAB_06bd3f9c:
          (*(code *)*puVar6)(plVar14,1,puVar6[1]);
          if (*(long *)(param_2 + 0x10) != 0) {
            plVar14 = *(long **)(param_1 + 0x38);
            uVar4 = func_0x03d1ae90(*(long *)(param_2 + 0x10),*(undefined8 *)PTR_DAT_077c0ec8);
            if (plVar14 != (long *)0x0) {
              lVar9 = *plVar14;
              uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_077c1e40) {
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_06bd4024;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar6 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_077c1e40,0);
LAB_06bd4024:
              uVar18 = (*(code *)*puVar6)(plVar14,uVar4,puVar6[1]);
              lVar9 = *(long *)(param_1 + 0x20);
              uVar4 = 0x1b;
              if ((uVar5 & 1) == 0) {
                uVar4 = 0x10;
              }
              uVar8 = func_0x03280ca0(0x10,*(undefined8 *)PTR_DAT_0777db38);
              func_0x0686b2ac(uVar8,uVar18,uVar4,0,1,8,0);
              if (lVar9 != 0) {
                plVar14 = (long *)func_0x03ea4d6c(lVar9,uVar8,*(undefined8 *)PTR_DAT_077bf848);
                return plVar14;
              }
            }
          }
        }
      }
    }
  }
LAB_06bd409c:
  plVar14 = (long *)func_0x03280cac();
  puVar3 = PTR_DAT_078342f0;
  if ((bRam0000000007e2aaba & 1) == 0) {
    func_0x03280a18(PTR_DAT_078342f0);
    bRam0000000007e2aaba = 1;
  }
  uVar18 = *(undefined8 *)puVar3;
  return plVar14;
}

