/* Ghidra 12.1.2 native pseudocode; RVA 0x6A30C5C; Merger.MergeBoard.ViewModel.BoardItemBehavioursHandlerViewModel.AttachDefaultBehaviours; status ok */


/* WARNING: Possible PIC construction at 0x06b30d64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b30d84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b30da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b30dc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b30de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03cd9c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03cd9c1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b30de8) */
/* WARNING: Removing unreachable block (ram,0x06b30dc8) */
/* WARNING: Removing unreachable block (ram,0x06b30da8) */
/* WARNING: Removing unreachable block (ram,0x06b30d88) */
/* WARNING: Removing unreachable block (ram,0x06b30d68) */
/* WARNING: Removing unreachable block (ram,0x03cd9c04) */
/* WARNING: Removing unreachable block (ram,0x03cd9c20) */
/* WARNING: Removing unreachable block (ram,0x03cd9c28) */
/* WARNING: Removing unreachable block (ram,0x03cd9c34) */

ulong Merger_MergeBoard_ViewModel_BoardItemBehavioursHandlerViewModel__AttachDefaultBehaviours
                (undefined8 param_1,long *param_2,undefined8 *param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *extraout_x1;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  undefined *puVar14;
  uint uVar15;
  long *plVar16;
  long *plVar17;
  int iVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined1 auVar22 [12];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  puVar2 = &stack0xffffffffffffffa0;
  if ((bRam0000000007e2a488 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f380);
    func_0x03280a18(PTR_DAT_0782f388);
    func_0x03280a18(PTR_DAT_0782f390);
    func_0x03280a18(PTR_DAT_0782f398);
    func_0x03280a18(PTR_DAT_0782f3a0);
    func_0x03280a18(PTR_DAT_0782f3a8);
    func_0x03280a18(PTR_DAT_0782f3b0);
    func_0x03280a18(PTR_DAT_0782f3b8);
    func_0x03280a18(PTR_DAT_0782f3c0);
    func_0x03280a18(PTR_DAT_0782f3c8);
    bRam0000000007e2a488 = 1;
  }
  if (param_2 != (long *)0x0) {
    plVar8 = *(long **)PTR_DAT_0782f398;
    uVar6 = 0;
    uVar21 = 0x6b30d68;
    plVar7 = param_2;
    puVar3 = PTR_DAT_0782f3a0;
    puVar14 = PTR_DAT_0782f3a8;
    puVar5 = PTR_DAT_0782f3b0;
    puVar19 = PTR_DAT_0782f3c8;
    puVar20 = PTR_DAT_0782f3c0;
    do {
      puVar1 = puVar2 + -0x40;
      *(undefined8 *)(puVar2 + -0x40) = uVar21;
      *(undefined **)(puVar2 + -0x30) = puVar20;
      *(undefined **)(puVar2 + -0x28) = puVar19;
      *(undefined **)(puVar2 + -0x20) = puVar5;
      *(undefined **)(puVar2 + -0x18) = puVar14;
      *(undefined **)(puVar2 + -0x10) = puVar3;
      *(long **)(puVar2 + -8) = plVar7;
      plVar9 = (long *)plVar8[7];
      plVar7 = plVar8;
      if (plVar9 == (long *)0x0) {
        func_0x03280a18(PTR_DAT_0776dcd8);
        func_0x03280a18(PTR_DAT_07779718);
        func_0x03280a18(PTR_DAT_07779720);
        func_0x03280a18(PTR_DAT_0774e558);
        func_0x03280a18(PTR_DAT_07779728);
        func_0x03280a18(PTR_DAT_07779730);
        func_0x03280a18(PTR_DAT_07779738);
        func_0x03280a18(PTR_DAT_077503b8);
        plVar9 = (long *)plVar8[7];
        if (plVar9 == (long *)0x0) {
          func_0x03256878(plVar8);
          plVar9 = (long *)plVar8[7];
        }
      }
      puVar20 = PTR_DAT_0774e558;
      *(undefined8 *)(puVar2 + -0x38) = 0;
      plVar16 = (long *)param_2[0x11];
      puVar19 = (undefined *)*plVar9;
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      plVar9 = (long *)func_0x057a51c4(puVar19,0);
      if ((plVar9 == (long *)0x0) ||
         (puVar3 = (undefined *)
                   (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0)),
         plVar16 == (long *)0x0)) {
LAB_03cd9c4c:
        plVar9 = plVar7;
        uVar21 = 0x3cd9c50;
        auVar23 = func_0x03280cac();
SUB_03cd9c50:
        plVar17 = auVar23._8_8_;
        puVar1 = puVar2 + -0x70;
        *(undefined8 *)(puVar2 + -0x70) = uVar21;
        *(long **)(puVar2 + -0x60) = plVar16;
        *(long **)(puVar2 + -0x58) = plVar8;
        *(ulong *)(puVar2 + -0x50) = uVar6;
        *(long **)(puVar2 + -0x48) = param_2;
        plVar7 = plVar9;
        uVar11 = param_4;
        if (*(long *)(param_4 + 0x38) == 0) {
          func_0x03280a18(PTR_DAT_07779740);
          func_0x03280a18(PTR_DAT_0774e558);
          if (*(long *)(param_4 + 0x38) == 0) {
            func_0x03256878(param_4);
          }
        }
        if (*(int *)(*(long *)PTR_DAT_07779740 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        lVar10 = func_0x069572f4(plVar17,0);
        uVar6 = param_4;
        plVar8 = plVar9;
        if (lVar10 != 0) {
          plVar7 = (long *)0x1;
          uVar11 = 0;
          plVar9 = (long *)func_0x06957fd0(lVar10,plVar9);
          if (plVar9 != (long *)0x0) {
            uVar6 = func_0x03dc9518(plVar9,**(undefined8 **)(param_4 + 0x38));
            plVar17 = *(long **)(*(long *)(param_4 + 0x38) + 0x10);
            if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
              func_0x03280b8c(*(long *)PTR_DAT_0774e558);
            }
            plVar7 = (long *)func_0x057a51c4(plVar17,0);
            uVar11 = 0;
            func_0x068309d0(auVar23._0_8_,uVar6,plVar7,0,1,0);
            lVar10 = func_0x06fdf130(plVar9,0);
            plVar8 = plVar9;
            if (lVar10 != 0) {
              func_0x06fed5b8(lVar10,0);
              return uVar6;
            }
          }
        }
        plVar9 = plVar7;
        uVar21 = 0x3cd9d68;
        auVar24 = func_0x03280cac();
        param_2 = auVar23._0_8_;
      }
      else {
        lVar10 = *plVar16;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07779720) {
              puVar4 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_03cd9ac8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(plVar16,*(long *)PTR_DAT_07779720,1);
LAB_03cd9ac8:
        param_4 = puVar4[1];
        plVar7 = (long *)(puVar2 + -0x38);
        (*(code *)*puVar4)(plVar16,puVar3);
        lVar10 = *(long *)(puVar2 + -0x38);
        puVar19 = puVar3;
        if (lVar10 == 0) {
          plVar16 = *(long **)plVar8[7];
          if (*(int *)(*(long *)puVar20 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          plVar9 = (long *)func_0x057a51c4(plVar16,0);
          if (plVar9 != (long *)0x0) {
            uVar21 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
            plVar16 = (long *)func_0x055ea7a0(*(undefined8 *)PTR_DAT_07779728,uVar21,0);
            if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
              func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
            }
            param_4 = *(ulong *)PTR_DAT_07779738;
            plVar7 = (long *)0x0;
            func_0x0556c434(plVar16,*(undefined8 *)PTR_DAT_077503b8,0,param_4,
                            *(undefined8 *)PTR_DAT_07779730,0,0);
            lVar10 = *(long *)(puVar2 + -0x38);
            if (lVar10 != 0) goto LAB_03cd9b94;
          }
          goto LAB_03cd9c4c;
        }
LAB_03cd9b94:
        if (param_2[0x10] == 0) goto LAB_03cd9c4c;
        puVar19 = *(undefined **)(lVar10 + 0x20);
        auVar24._8_8_ = puVar19;
        auVar24._0_8_ = param_2;
        plVar7 = *(long **)PTR_DAT_07779718;
        plVar9 = (long *)func_0x04fe2cfc(param_2[0x10],*(undefined8 *)(lVar10 + 0x18));
        if (*(long *)(puVar2 + -0x38) == 0) goto LAB_03cd9c4c;
        if (*(int *)(*(long *)(puVar2 + -0x38) + 0x28) == 1) {
          plVar16 = plVar9;
          if (puVar19 == (undefined *)0x0) goto LAB_03cd9c4c;
          puVar20 = (undefined *)param_2[0x16];
          uVar21 = func_0x06fe368c(puVar19,0);
          uVar21 = func_0x055ee6c0(puVar20,uVar21,0);
          auVar23._8_8_ = uVar21;
          auVar23._0_8_ = param_2;
          param_4 = *(ulong *)(plVar8[7] + 0x18);
          uVar21 = 0x3cd9c04;
          goto SUB_03cd9c50;
        }
        uVar11 = *(ulong *)(plVar8[7] + 8);
        uVar21 = 0x3cd9c20;
        plVar17 = plVar9;
      }
      puVar5 = auVar24._8_8_;
      *(undefined8 *)(puVar1 + -0x30) = uVar21;
      *(long **)(puVar1 + -0x20) = plVar17;
      *(long **)(puVar1 + -0x18) = plVar8;
      *(ulong *)(puVar1 + -0x10) = uVar6;
      *(long **)(puVar1 + -8) = param_2;
      param_4 = uVar11;
      if (*(long *)(uVar11 + 0x38) == 0) {
        func_0x03280a18(PTR_DAT_07779748);
        func_0x03280a18(PTR_DAT_0774e4e0);
        func_0x03280a18(PTR_DAT_0774e558);
        if (*(long *)(uVar11 + 0x38) == 0) {
          func_0x03256878(uVar11);
        }
      }
      if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar10 = func_0x03e3cdbc(puVar5,plVar9,*(undefined8 *)PTR_DAT_07779748);
      if (lVar10 != 0) {
        uVar6 = func_0x03dc9518(lVar10,**(undefined8 **)(uVar11 + 0x38));
        uVar21 = *(undefined8 *)(*(long *)(uVar11 + 0x38) + 0x10);
        if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)PTR_DAT_0774e558);
        }
        uVar21 = func_0x057a51c4(uVar21,0);
        func_0x068309d0(auVar24._0_8_,uVar6,uVar21,0,1,0);
        return uVar6;
      }
      auVar23 = func_0x03280cac();
      lVar10 = auVar23._8_8_;
      puVar2 = puVar1 + -0x60;
      *(undefined8 *)(puVar1 + -0x50) = 0x3cd9e68;
      *(long **)(puVar1 + -0x48) = plVar9;
      *(ulong *)(puVar1 + -0x40) = uVar11;
      *(long *)(puVar1 + -0x38) = auVar24._0_8_;
      puVar4 = *(undefined8 **)(lVar10 + 0x38);
      if (puVar4 == (undefined8 *)0x0) {
        func_0x03280a18(PTR_DAT_07779750);
        func_0x03280a18(PTR_DAT_0774e558);
        puVar4 = *(undefined8 **)(lVar10 + 0x38);
        if (puVar4 == (undefined8 *)0x0) {
          func_0x03256878(lVar10);
          puVar4 = *(undefined8 **)(lVar10 + 0x38);
        }
      }
      *(undefined8 *)(puVar1 + -0x58) = 0;
      lVar13 = *(long *)(auVar23._0_8_ + 0x90);
      puVar14 = (undefined *)*puVar4;
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar21 = func_0x057a51c4(puVar14,0);
      if (lVar13 != 0) {
        func_0x04fe48b0(lVar13,uVar21,puVar1 + -0x58,*(undefined8 *)PTR_DAT_07779750);
        uVar21 = *(undefined8 *)(puVar1 + -0x58);
        lVar13 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          lVar13 = func_0x0325681c(lVar13);
        }
        lVar13 = func_0x03280b90(uVar21,lVar13);
        lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
        }
        if (lVar13 != 0) {
          uVar6 = func_0x03280b90(lVar13,lVar10);
          if (uVar6 != 0) {
            return uVar6;
          }
          func_0x03281048(lVar13,lVar10);
        }
        return 0;
      }
      auVar24 = func_0x03280cac();
      lVar13 = auVar24._8_8_;
      param_2 = auVar24._0_8_;
      *(undefined8 *)(puVar1 + -0x80) = 0x3cd9f80;
      *(undefined8 *)(puVar1 + -0x70) = 0;
      *(long *)(puVar1 + -0x68) = lVar10;
      plVar7 = *(long **)(lVar13 + 0x38);
      if (plVar7 == (long *)0x0) {
        func_0x03256878(lVar13);
        plVar7 = *(long **)(lVar13 + 0x38);
      }
      lVar10 = func_0x03280b88(*(undefined8 *)
                                (*param_2 + (ulong)*(ushort *)(*plVar7 + 0x50) * 0x10 + 0x140));
      uVar6 = (**(code **)(lVar10 + 8))(param_2,lVar10);
      if (uVar6 != 0) {
        return uVar6;
      }
      puVar3 = *(undefined **)(puVar1 + -0x70);
      plVar7 = *(long **)(puVar1 + -0x68);
      uVar6 = 1;
      plVar8 = *(long **)(*(long *)(lVar13 + 0x38) + 0x10);
      uVar21 = *(undefined8 *)(puVar1 + -0x80);
    } while( true );
  }
  func_0x03280cac();
  lVar10 = 0x7e2a000;
  if ((bRam0000000007e2a48a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077806f8);
    func_0x03280a18(PTR_DAT_07780700);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0780dd88);
    bRam0000000007e2a48a = 1;
  }
  if (extraout_x1 == (long *)0x0) {
LAB_06b31074:
    *param_3 = 0;
    func_0x032809c4(param_3,0);
    uVar15 = 0;
LAB_06b31088:
    return (ulong)uVar15;
  }
  lVar13 = *extraout_x1;
  uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar6 != 0) {
    piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_077806f8) {
        puVar4 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_06b30ed4;
      }
      uVar6 = uVar6 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)func_0x03256b10(extraout_x1,*(long *)PTR_DAT_077806f8,0);
LAB_06b30ed4:
  plVar7 = (long *)(*(code *)*puVar4)(extraout_x1,puVar4[1]);
  puVar20 = PTR_DAT_0780dd88;
  puVar19 = PTR_DAT_07780700;
  puVar3 = PTR_DAT_0774e8e0;
  if (plVar7 == (long *)0x0) {
LAB_06b310a4:
    func_0x03280cac();
    goto LAB_06b310a8;
  }
  do {
    lVar10 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06b30f4c;
        }
        uVar6 = uVar6 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar7,*(long *)puVar3,0);
LAB_06b30f4c:
    uVar6 = (*(code *)*puVar4)(plVar7,puVar4[1]);
    if ((uVar6 & 1) == 0) {
      uVar15 = 0;
      iVar18 = 6;
      goto joined_r0x06b31000;
    }
    lVar10 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar19) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06b30fa8;
        }
        uVar6 = uVar6 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar7,*(long *)puVar19,0);
LAB_06b30fa8:
    lVar10 = (*(code *)*puVar4)(plVar7,puVar4[1]);
    if (lVar10 == 0) {
      func_0x03280cac();
      lVar10 = 0;
      goto LAB_06b310a4;
    }
    uVar6 = func_0x055ea870(*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)puVar20,0);
  } while ((uVar6 & 1) == 0);
  *param_3 = *(undefined8 *)(lVar10 + 0x18);
  func_0x032809c4(param_3);
  uVar15 = 1;
  iVar18 = 5;
joined_r0x06b31000:
  lVar10 = 0;
  do {
    if (plVar7 != (long *)0x0) {
      lVar13 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar4 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06b31058;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b31058:
      (*(code *)*puVar4)(plVar7,puVar4[1]);
    }
    if (lVar10 == 0) {
      if ((iVar18 == 0) || (iVar18 == 6)) goto LAB_06b31074;
      goto LAB_06b31088;
    }
LAB_06b310a8:
    auVar22 = func_0x03280ca4(lVar10);
    if (auVar22._8_4_ != 1) break;
    plVar8 = (long *)func_0x072ce910(auVar22._0_8_);
    lVar10 = *plVar8;
    func_0x072ce920();
    iVar18 = 0;
    uVar15 = 0;
  } while( true );
  if (plVar7 != (long *)0x0) {
    lVar10 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06b31154;
        }
        uVar6 = uVar6 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b31154:
    (*(code *)*puVar4)(plVar7,puVar4[1]);
  }
  func_0x03365958(auVar22._0_8_);
  func_0x03280ca4(0);
  uVar6 = func_0x02f09514();
  puVar3 = PTR_DAT_0782f3d0;
  if ((bRam0000000007e2a48b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f3d0);
    bRam0000000007e2a48b = 1;
  }
  *(undefined8 *)(uVar6 + 0x90) = *(undefined8 *)puVar3;
  func_0x032809c4();
  puVar19 = PTR_DAT_07828a38;
  puVar3 = PTR_DAT_07828a30;
  if ((bRam0000000007e29c54 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07828a38,0);
    func_0x03280a18(PTR_DAT_07828a30);
    bRam0000000007e29c54 = 1;
  }
  uVar21 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x053bfe40(uVar21,*(undefined8 *)puVar19);
  *(undefined8 *)(uVar6 + 0x60) = uVar21;
  func_0x032809c4((undefined8 *)(uVar6 + 0x60),uVar21);
  return uVar6;
}

