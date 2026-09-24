/* Ghidra 12.1.2 native pseudocode; RVA 0x6666E38; MergeEngine.ECS.Systems.Board.ResourcesRefillingStateSystem.LoadState; status ok */


/* WARNING: Possible PIC construction at 0x06767000: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06767004) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong MergeEngine_ECS_Systems_Board_ResourcesRefillingStateSystem__LoadState
                (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 **ppuVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 extraout_d0;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  uint uStack_54;
  
  if ((bRam0000000007e280c1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07807cf0);
    func_0x03280a18(PTR_DAT_0774e598);
    func_0x03280a18(PTR_DAT_077bf988);
    func_0x03280a18(PTR_DAT_0774f758);
    func_0x03280a18(PTR_DAT_077fbaa8);
    func_0x03280a18(PTR_DAT_077fbab0);
    func_0x03280a18(PTR_DAT_077fbab8);
    func_0x03280a18(PTR_DAT_077fbac0);
    func_0x03280a18(PTR_DAT_077730b8);
    func_0x03280a18(PTR_DAT_07807cf8);
    func_0x03280a18(PTR_DAT_07807d00);
    func_0x03280a18(PTR_DAT_07807d08);
    func_0x03280a18(PTR_DAT_07807d10);
    bRam0000000007e280c1 = 1;
  }
  puVar9 = PTR_DAT_07807d08;
  puVar8 = PTR_DAT_077fbab0;
  puVar7 = PTR_DAT_077fbaa8;
  puVar6 = PTR_DAT_077bf988;
  puVar5 = PTR_DAT_077730b8;
  puVar4 = PTR_DAT_0774f758;
  puVar3 = PTR_DAT_0774e598;
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_54 = 0;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar17 = *(long *)(*(long *)(param_1 + 0x40) + 0x20), lVar17 != 0)) {
    lVar17 = *(long *)(lVar17 + 0x20);
    if (lVar17 == 0) {
      if (*(int *)(*(long *)PTR_DAT_0774e598 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar13 = func_0x06faa078(*(undefined8 *)PTR_DAT_07807d10,0);
      return uVar13;
    }
    lVar17 = *(long *)(lVar17 + 0x18);
    if (lVar17 != 0) {
      func_0x04145068(&uStack_98,lVar17,*(undefined8 *)PTR_DAT_077fbac0);
      uStack_78 = uStack_90;
      uStack_80 = uStack_98;
      lStack_70 = lStack_88;
      while( true ) {
        uVar13 = func_0x051159b4(&uStack_80,*(undefined8 *)puVar8);
        lVar17 = lStack_70;
        if ((uVar13 & 1) == 0) {
          uVar13 = func_0x051159b0(&uStack_80,*(undefined8 *)puVar7);
          return uVar13;
        }
        unaff_x22 = (undefined8 *)puVar7;
        if (lStack_70 == 0) {
          func_0x03280cac();
          goto LAB_06767094;
        }
        unaff_x21 = *(ulong *)(lStack_70 + 0x10);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar13 = func_0x03d22ecc(unaff_x21,1,&uStack_54,*(undefined8 *)puVar6);
        if ((uVar13 & 1) != 0) break;
        param_3 = 0;
        uVar15 = func_0x055ea7a0(*(undefined8 *)puVar9,*(undefined8 *)(lVar17 + 0x10));
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        func_0x06faa078(uVar15,0);
      }
      unaff_x21 = (ulong)uStack_54;
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      plVar14 = (long *)func_0x0624cb20(unaff_x21,0);
      puVar22 = (undefined8 *)0x6767004;
      lVar18 = param_1;
      lVar20 = lVar17;
      goto SUB_06767118;
    }
  }
LAB_06767094:
  auVar25 = func_0x03280cac();
  lVar18 = auVar25._0_8_;
  lVar17 = param_3;
  if (auVar25._8_4_ == 1) {
    plVar14 = (long *)func_0x072ce910(lVar18);
    lVar17 = *plVar14;
    func_0x072ce920();
    uVar13 = func_0x051159b0(&uStack_80,*unaff_x22);
    if (lVar17 == 0) {
      return uVar13;
    }
    func_0x03280ca4(lVar17);
    lVar17 = param_3;
  }
  lVar20 = 0;
  func_0x051159b0(&uStack_80,*unaff_x22);
  func_0x03365958(lVar18);
  func_0x03280ca4(0);
  puVar22 = (undefined8 *)0x6767118;
  auVar24 = func_0x02f09514();
  plVar14 = auVar24._8_8_;
  param_1 = auVar24._0_8_;
SUB_06767118:
  puStack_c0 = unaff_x22;
  puStack_b8 = (undefined8 *)unaff_x21;
  lStack_b0 = lVar20;
  lStack_a8 = lVar18;
  if ((bRam0000000007e280c2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cea48);
    func_0x03280a18(PTR_DAT_0777cfc0);
    bRam0000000007e280c2 = 1;
  }
  plVar21 = *(long **)(param_1 + 0x48);
  if (plVar21 != (long *)0x0) {
    lVar18 = *plVar21;
    uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
    if (uVar13 != 0) {
      piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_077cea48) {
          puVar16 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_067671c0;
        }
        uVar13 = uVar13 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar13 != 0);
    }
    puVar16 = (undefined8 *)func_0x03256b10(plVar21,*(long *)PTR_DAT_077cea48,0);
LAB_067671c0:
    plVar21 = (long *)(*(code *)*puVar16)(plVar21,plVar14,puVar16[1]);
    if ((lVar17 != 0) && (plVar21 != (long *)0x0)) {
      lVar18 = *plVar21;
      uVar1 = *(undefined4 *)(lVar17 + 0x24);
      uVar2 = *(undefined4 *)(lVar17 + 0x28);
      uVar13 = (ulong)*(ushort *)(lVar18 + 0x12e);
      dVar23 = (double)*(int *)(lVar17 + 0x20) / _UNK_017806f0;
      if (uVar13 != 0) {
        piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777cfc0) {
            puVar16 = (undefined8 *)(lVar18 + (long)(*piVar19 + 4) * 0x10 + 0x138);
            goto LAB_0676724c;
          }
          uVar13 = uVar13 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar13 != 0);
      }
      puVar16 = (undefined8 *)func_0x03256b10(plVar21,*(long *)PTR_DAT_0777cfc0,4);
LAB_0676724c:
      (*(code *)*puVar16)(dVar23,plVar21,uVar2,uVar1,puVar16[1]);
      lVar18 = *(long *)(param_1 + 0x50);
      if (lVar18 != 0) {
        uVar15 = *(undefined8 *)(lVar17 + 0x18);
        if ((bRam0000000007e27144 & 1) == 0) {
          func_0x03280a18(PTR_DAT_07787220,plVar14,uVar15,0);
          func_0x03280a18(PTR_DAT_07779818);
          bRam0000000007e27144 = 1;
        }
        if (plVar14 != (long *)0x0) {
          lVar17 = *plVar14;
          uVar13 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar13 != 0) {
            piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_07779818) {
                puVar16 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_065eb424;
              }
              uVar13 = uVar13 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar13 != 0);
          }
          puVar16 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07779818,0);
LAB_065eb424:
          uVar12 = (*(code *)*puVar16)(plVar14,puVar16[1]);
          if (*(long *)(lVar18 + 0x78) != 0) {
            func_0x04fb92ac(*(long *)(lVar18 + 0x78),uVar12,uVar15,*(undefined8 *)PTR_DAT_07787220);
            uVar15 = func_0x06606604(lVar18,uVar12);
            lVar17 = *(long *)(lVar18 + 0x60);
            if (lVar17 != 0) {
              puStack_c0 = puVar22;
              if ((bRam0000000007e23873 & 1) == 0) {
                func_0x03280a18(PTR_DAT_077d0230,uVar12,0);
                func_0x03280a18(PTR_DAT_07773770);
                bRam0000000007e23873 = 1;
              }
              lVar17 = *(long *)(lVar17 + 0x28);
              if ((lVar17 == 0) ||
                 (uVar13 = func_0x04fe2cfc(lVar17,uVar12,*(undefined8 *)PTR_DAT_077d0230),
                 uVar13 == 0)) {
                uVar13 = func_0x03280cac();
                return uVar13;
              }
              lVar17 = *(long *)PTR_DAT_07773770;
              ppuVar10 = &puStack_c0;
              puStack_b8 = puStack_c0;
              plVar14 = (long *)func_0x03fbac14(*(undefined8 *)
                                                 (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x20)
                                               );
              if (plVar14 == (long *)0x0) {
                puVar22 = (undefined8 *)0x4321780;
                uVar13 = func_0x03280cac();
                *(undefined8 *)(uVar13 + 0x20) = extraout_d0;
              }
              else {
                uVar11 = (**(code **)(*plVar14 + 0x1b8))
                                   (*(undefined8 *)(uVar13 + 0x20),uVar15,plVar14,
                                    *(undefined8 *)(*plVar14 + 0x1c0));
                if ((uVar11 & 1) != 0) {
                  return uVar11;
                }
                *(undefined8 *)(uVar13 + 0x20) = uVar15;
                ppuVar10 = (undefined8 **)auStack_a0;
                lVar17 = lStack_a8;
                puVar22 = puStack_b8;
              }
              *(undefined8 **)((long)ppuVar10 + -0x10) = puVar22;
              *(long *)((long)ppuVar10 + -8) = lVar17;
              lVar17 = *(long *)(uVar13 + 0x10);
              uVar11 = uVar13;
              if (lVar17 != 0) {
                uVar11 = (**(code **)(lVar17 + 0x18))
                                   (*(undefined8 *)(uVar13 + 0x20),*(undefined8 *)(lVar17 + 0x40),
                                    *(undefined8 *)(lVar17 + 0x28));
              }
              lVar17 = *(long *)(uVar13 + 0x18);
              if (lVar17 == 0) {
                return uVar11;
              }
                    /* WARNING: Could not recover jumptable at 0x04d0e47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar13 = (**(code **)(lVar17 + 0x18))
                                 (*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
              return uVar13;
            }
          }
        }
        uVar13 = func_0x03280cac();
        puVar3 = PTR_DAT_077fbae8;
        if ((bRam0000000007e27053 & 1) == 0) {
          func_0x03280a18(PTR_DAT_077fbae8);
          bRam0000000007e27053 = 1;
        }
        uVar15 = *(undefined8 *)puVar3;
        return uVar13;
      }
    }
  }
  uVar13 = func_0x03280cac();
  puVar3 = PTR_DAT_07807d18;
  if ((bRam0000000007e280c3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07807d18);
    bRam0000000007e280c3 = 1;
  }
  uVar15 = *(undefined8 *)puVar3;
  return uVar13;
}

