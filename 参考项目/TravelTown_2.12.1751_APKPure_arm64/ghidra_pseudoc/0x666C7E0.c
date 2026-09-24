/* Ghidra 12.1.2 native pseudocode; RVA 0x666C7E0; MergeEngine.ECS.Systems.Board.GenericTokensStateSystem.LoadState; status ok */


/* WARNING: Possible PIC construction at 0x0676c9f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0676c9fc) */

ulong MergeEngine_ECS_Systems_Board_GenericTokensStateSystem__LoadState
                (long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long *plVar20;
  long *plVar21;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  undefined8 extraout_d0;
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  ulong uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  plVar21 = (long *)0x7e28000;
  if ((bRam0000000007e280f9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07808010);
    func_0x03280a18(PTR_DAT_07808018);
    func_0x03280a18(PTR_DAT_07808020);
    func_0x03280a18(PTR_DAT_07773688);
    func_0x03280a18(PTR_DAT_07808028);
    func_0x03280a18(PTR_DAT_07773138);
    func_0x03280a18(PTR_DAT_07771798);
    bRam0000000007e280f9 = 1;
  }
  puVar8 = PTR_DAT_07808018;
  puVar7 = PTR_DAT_07808010;
  puVar6 = PTR_DAT_07773688;
  puVar5 = PTR_DAT_07773138;
  puVar4 = PTR_DAT_07771798;
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x18) == 0)) {
LAB_0676ca38:
    auVar23 = func_0x03280cac();
    lVar17 = auVar23._0_8_;
    if (auVar23._8_4_ == 1) {
      plVar12 = (long *)func_0x072ce910(lVar17);
      lVar14 = *plVar12;
      func_0x072ce920();
      uVar11 = func_0x051159b0(&uStack_80,*unaff_x23);
      if (lVar14 == 0) {
        return uVar11;
      }
      func_0x03280ca4(lVar14);
    }
    plVar20 = (long *)0x0;
    func_0x051159b0(&uStack_80,*unaff_x23);
    func_0x03365958(lVar17);
    func_0x03280ca4(0);
    uVar11 = 0x676cabc;
    auVar22 = func_0x02f09514();
    plVar12 = auVar22._8_8_;
    param_1 = auVar22._0_8_;
  }
  else {
    func_0x04145068(&uStack_98,*(long *)(param_2 + 0x18),*(undefined8 *)PTR_DAT_07808028);
    uStack_78 = uStack_90;
    uStack_80 = uStack_98;
    lStack_70 = lStack_88;
    do {
      do {
        uVar11 = func_0x051159b4(&uStack_80,*(undefined8 *)puVar8);
        lVar17 = lStack_70;
        if ((uVar11 & 1) == 0) {
          uVar11 = func_0x051159b0(&uStack_80,*(undefined8 *)puVar7);
          return uVar11;
        }
        if (lStack_70 == 0) {
          func_0x03280cac();
LAB_0676ca30:
          func_0x03280cac();
LAB_0676ca34:
          func_0x03280cac();
          unaff_x23 = (undefined8 *)puVar7;
          goto LAB_0676ca38;
        }
        param_3 = *(long *)(lStack_70 + 0x10);
        plVar12 = (long *)func_0x03280ca0(*(undefined8 *)puVar4);
        func_0x045cb4ac(plVar12,0xb,param_3,*(undefined8 *)puVar5);
        plVar21 = *(long **)(param_1 + 0x48);
        if (plVar21 == (long *)0x0) goto LAB_0676ca30;
        lVar16 = *plVar21;
        lVar14 = *(long *)puVar6;
        uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar11 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar14) {
              puVar13 = (undefined8 *)(lVar16 + (long)(*piVar19 + 8) * 0x10 + 0x138);
              goto LAB_0676c95c;
            }
            uVar11 = uVar11 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar11 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar21,lVar14,8);
LAB_0676c95c:
        param_3 = puVar13[1];
        uVar11 = (*(code *)*puVar13)(plVar21,plVar12);
      } while ((uVar11 & 1) == 0);
      plVar21 = *(long **)(param_1 + 0x48);
      if (plVar21 == (long *)0x0) goto LAB_0676ca34;
      lVar16 = *plVar21;
      unaff_x22 = (ulong)*(uint *)(lVar17 + 0x18);
      lVar14 = *(long *)puVar6;
      uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar11 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar14) {
            puVar13 = (undefined8 *)(lVar16 + (long)(*piVar19 + 9) * 0x10 + 0x138);
            goto LAB_0676c9cc;
          }
          uVar11 = uVar11 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar11 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar21,lVar14,9);
LAB_0676c9cc:
      (*(code *)*puVar13)(plVar21,plVar12,unaff_x22,0,0x1e,puVar13[1]);
      param_3 = *(long *)(lVar17 + 0x20);
    } while (param_3 == 0);
    uVar11 = 0x676c9fc;
    lVar17 = param_1;
    plVar20 = plVar12;
  }
  uStack_c0 = unaff_x22;
  plStack_b8 = plVar21;
  plStack_b0 = plVar20;
  lStack_a8 = lVar17;
  if ((bRam0000000007e280fa & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cea48);
    func_0x03280a18(PTR_DAT_0777cfc0);
    bRam0000000007e280fa = 1;
  }
  plVar21 = *(long **)(param_1 + 0x58);
  if (plVar21 != (long *)0x0) {
    lVar17 = *plVar21;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_077cea48) {
          puVar13 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_0676cb64;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar13 = (undefined8 *)func_0x03256b10(plVar21,*(long *)PTR_DAT_077cea48,0);
LAB_0676cb64:
    plVar21 = (long *)(*(code *)*puVar13)(plVar21,plVar12,puVar13[1]);
    if (plVar21 != (long *)0x0) {
      if (param_3 == 0) goto LAB_0676cc30;
      lVar17 = *plVar21;
      iVar3 = *(int *)(param_3 + 0x20);
      uVar1 = *(undefined4 *)(param_3 + 0x18);
      uVar2 = *(undefined4 *)(param_3 + 0x1c);
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_0777cfc0) {
            puVar13 = (undefined8 *)(lVar17 + (long)(*piVar19 + 4) * 0x10 + 0x138);
            goto LAB_0676cbe4;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar13 = (undefined8 *)func_0x03256b10(plVar21,*(long *)PTR_DAT_0777cfc0,4);
LAB_0676cbe4:
      (*(code *)*puVar13)((double)iVar3,plVar21,uVar1,uVar2,puVar13[1]);
    }
    lVar17 = func_0x0676c728(param_1);
    if ((param_3 != 0) && (lVar17 != 0)) {
      uVar15 = *(undefined8 *)(param_3 + 0x10);
      if ((bRam0000000007e27144 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07787220,plVar12,uVar15,0);
        func_0x03280a18(PTR_DAT_07779818);
        bRam0000000007e27144 = 1;
      }
      if (plVar12 != (long *)0x0) {
        lVar14 = *plVar12;
        uVar18 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_07779818) {
              puVar13 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_065eb424;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar13 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_07779818,0);
LAB_065eb424:
        uVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if (*(long *)(lVar17 + 0x78) != 0) {
          func_0x04fb92ac(*(long *)(lVar17 + 0x78),uVar10,uVar15,*(undefined8 *)PTR_DAT_07787220);
          uVar15 = func_0x06606604(lVar17,uVar10);
          lVar17 = *(long *)(lVar17 + 0x60);
          if (lVar17 != 0) {
            uStack_c0 = uVar11;
            if ((bRam0000000007e23873 & 1) == 0) {
              func_0x03280a18(PTR_DAT_077d0230,uVar10,0);
              func_0x03280a18(PTR_DAT_07773770);
              bRam0000000007e23873 = 1;
            }
            lVar17 = *(long *)(lVar17 + 0x28);
            if ((lVar17 == 0) ||
               (uVar11 = func_0x04fe2cfc(lVar17,uVar10,*(undefined8 *)PTR_DAT_077d0230), uVar11 == 0
               )) {
              uVar11 = func_0x03280cac();
              return uVar11;
            }
            lVar17 = *(long *)PTR_DAT_07773770;
            puVar9 = &uStack_c0;
            plStack_b8 = (long *)uStack_c0;
            plVar21 = (long *)func_0x03fbac14(*(undefined8 *)
                                               (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x20));
            if (plVar21 == (long *)0x0) {
              plVar21 = (long *)0x4321780;
              uVar11 = func_0x03280cac();
              *(undefined8 *)(uVar11 + 0x20) = extraout_d0;
            }
            else {
              uVar18 = (**(code **)(*plVar21 + 0x1b8))
                                 (*(undefined8 *)(uVar11 + 0x20),uVar15,plVar21,
                                  *(undefined8 *)(*plVar21 + 0x1c0));
              if ((uVar18 & 1) != 0) {
                return uVar18;
              }
              *(undefined8 *)(uVar11 + 0x20) = uVar15;
              puVar9 = (ulong *)auStack_a0;
              lVar17 = lStack_a8;
              plVar21 = plStack_b8;
            }
            *(long **)((long)puVar9 + -0x10) = plVar21;
            *(long *)((long)puVar9 + -8) = lVar17;
            lVar17 = *(long *)(uVar11 + 0x10);
            uVar18 = uVar11;
            if (lVar17 != 0) {
              uVar18 = (**(code **)(lVar17 + 0x18))
                                 (*(undefined8 *)(uVar11 + 0x20),*(undefined8 *)(lVar17 + 0x40),
                                  *(undefined8 *)(lVar17 + 0x28));
            }
            lVar17 = *(long *)(uVar11 + 0x18);
            if (lVar17 == 0) {
              return uVar18;
            }
                    /* WARNING: Could not recover jumptable at 0x04d0e47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar11 = (**(code **)(lVar17 + 0x18))
                               (*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
            return uVar11;
          }
        }
      }
      uVar11 = func_0x03280cac();
      puVar4 = PTR_DAT_077fbae8;
      if ((bRam0000000007e27053 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077fbae8);
        bRam0000000007e27053 = 1;
      }
      uVar15 = *(undefined8 *)puVar4;
      return uVar11;
    }
  }
LAB_0676cc30:
  uVar11 = func_0x03280cac();
  puVar4 = PTR_DAT_07808030;
  if ((bRam0000000007e280fb & 1) == 0) {
    func_0x03280a18(PTR_DAT_07808030);
    bRam0000000007e280fb = 1;
  }
  uVar15 = *(undefined8 *)puVar4;
  return uVar11;
}

