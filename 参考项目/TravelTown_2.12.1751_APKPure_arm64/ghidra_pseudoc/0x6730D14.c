/* Ghidra 12.1.2 native pseudocode; RVA 0x6730D14; Merger.Game.Views.BoardItem.BoardItemView2.RemoveBehaviour; status ok */

/* WARNING: Possible PIC construction at 0x0336f524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0336fabc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0336fc5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0336fc7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06830740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06830958: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0336fc80) */
/* WARNING: Removing unreachable block (ram,0x0336fcb4) */
/* WARNING: Removing unreachable block (ram,0x0336fcc4) */
/* WARNING: Removing unreachable block (ram,0x0336fccc) */
/* WARNING: Removing unreachable block (ram,0x0336fcf4) */
/* WARNING: Removing unreachable block (ram,0x0336fcd8) */
/* WARNING: Removing unreachable block (ram,0x0336fce4) */
/* WARNING: Removing unreachable block (ram,0x0336fd00) */
/* WARNING: Removing unreachable block (ram,0x0336fd18) */
/* WARNING: Removing unreachable block (ram,0x0336fd28) */
/* WARNING: Removing unreachable block (ram,0x0336fd30) */
/* WARNING: Removing unreachable block (ram,0x0336fd58) */
/* WARNING: Removing unreachable block (ram,0x0336fd3c) */
/* WARNING: Removing unreachable block (ram,0x0336fd48) */
/* WARNING: Removing unreachable block (ram,0x0336fd68) */
/* WARNING: Removing unreachable block (ram,0x0336fc60) */
/* WARNING: Removing unreachable block (ram,0x0336fac0) */
/* WARNING: Removing unreachable block (ram,0x0336fac8) */
/* WARNING: Removing unreachable block (ram,0x0336fae0) */
/* WARNING: Removing unreachable block (ram,0x0336fae8) */
/* WARNING: Removing unreachable block (ram,0x0336fc30) */
/* WARNING: Removing unreachable block (ram,0x0336faf4) */
/* WARNING: Removing unreachable block (ram,0x0336fb00) */
/* WARNING: Removing unreachable block (ram,0x0336fc40) */
/* WARNING: Removing unreachable block (ram,0x06830744) */

void Merger_Game_Views_BoardItem_BoardItemView2__RemoveBehaviour
               (ulong param_1,long *param_2,long *param_3,ulong param_4,long *param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  code **ppcVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  code *pcVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  int *piVar24;
  undefined8 uVar25;
  long *plVar26;
  long *plVar27;
  undefined8 *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  code *pcStack_90;
  long *plStack_88;
  ulong uStack_80;
  long *plStack_78;
  undefined8 auStack_70 [2];
  ulong uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  puVar12 = (undefined8 *)auStack_40;
  plVar26 = (long *)(param_4 & 0xffffffff);
  plVar17 = param_3;
  uVar23 = param_4;
  if ((bRam0000000007e28980 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d850);
    func_0x03280a18(PTR_DAT_0780d828);
    func_0x03280a18(PTR_DAT_07779720);
    func_0x03280a18(PTR_DAT_0774e4e0);
    func_0x03280a18(PTR_DAT_07779740);
    bRam0000000007e28980 = 1;
  }
  puVar6 = PTR_DAT_0780d828;
  lStack_38 = 0;
  plVar27 = (long *)0x7e28000;
  if (*(long *)(param_1 + 0x90) != 0) {
    plVar17 = *(long **)PTR_DAT_0780d850;
    func_0x04fe4278(*(long *)(param_1 + 0x90),param_3);
    plVar27 = (long *)puVar6;
    if ((param_4 & 1) != 0) {
      if (param_2 == (long *)0x0) goto LAB_06831020;
      lVar20 = *param_2;
      uVar22 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar22 != 0) {
        piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == *(long *)puVar6) {
            puVar14 = (undefined8 *)(lVar20 + (long)(*piVar24 + 2) * 0x10 + 0x138);
            goto LAB_06830e04;
          }
          uVar22 = uVar22 - 1;
          piVar24 = piVar24 + 4;
        } while (uVar22 != 0);
      }
      plVar17 = (long *)0x2;
      puVar14 = (undefined8 *)func_0x03256b10(param_2);
LAB_06830e04:
      (*(code *)*puVar14)(param_2,puVar14[1]);
    }
    if (param_3 != (long *)0x0) {
      plVar26 = *(long **)(param_1 + 0x88);
      plVar15 = (long *)(**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
      if (plVar26 != (long *)0x0) {
        lVar20 = *plVar26;
        uVar23 = (ulong)*(ushort *)(lVar20 + 0x12e);
        if (uVar23 != 0) {
          piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
          do {
            if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_07779720) {
              puVar14 = (undefined8 *)(lVar20 + (long)(*piVar24 + 1) * 0x10 + 0x138);
              goto LAB_06830e88;
            }
            uVar23 = uVar23 - 1;
            piVar24 = piVar24 + 4;
          } while (uVar23 != 0);
        }
        puVar14 = (undefined8 *)func_0x03256b10(plVar26,*(long *)PTR_DAT_07779720,1);
LAB_06830e88:
        uVar23 = puVar14[1];
        plVar17 = &lStack_38;
        uVar22 = (*(code *)*puVar14)(plVar26,plVar15);
        puVar7 = PTR_DAT_0774e4e0;
        param_3 = plVar15;
        if ((uVar22 & 1) == 0) {
LAB_06830f4c:
          if (param_2 != (long *)0x0) {
            lVar20 = *param_2;
            uVar23 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar23 != 0) {
              piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)puVar6) {
                  puVar12 = (undefined8 *)(lVar20 + (long)(*piVar24 + 3) * 0x10 + 0x138);
                  goto LAB_06830fa8;
                }
                uVar23 = uVar23 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar23 != 0);
            }
            puVar12 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar6,3);
LAB_06830fa8:
            uVar16 = (*(code *)*puVar12)(param_2,puVar12[1]);
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              func_0x03280b8c(*(long *)puVar7);
            }
            func_0x06fe41c8(uVar16,0);
            return;
          }
        }
        else if (lStack_38 != 0) {
          if (*(int *)(lStack_38 + 0x28) != 1) goto LAB_06830f4c;
          if (*(long *)(lStack_38 + 0x20) != 0) {
            uVar25 = *(undefined8 *)(param_1 + 0xb0);
            uVar16 = func_0x06fe368c(*(long *)(lStack_38 + 0x20),0);
            plVar17 = (long *)0x0;
            param_1 = func_0x055ee6c0(uVar25,uVar16);
            if (*(int *)(*(long *)PTR_DAT_07779740 + 0xe0) == 0) {
              func_0x03280b8c(*(long *)PTR_DAT_07779740);
            }
            lVar20 = func_0x069572f4(param_1,0);
            if (param_2 != (long *)0x0) {
              lVar21 = *param_2;
              uVar22 = (ulong)*(ushort *)(lVar21 + 0x12e);
              if (uVar22 != 0) {
                piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar24 + -2) == *(long *)puVar6) {
                    puVar14 = (undefined8 *)(lVar21 + (long)(*piVar24 + 3) * 0x10 + 0x138);
                    goto LAB_06830fec;
                  }
                  uVar22 = uVar22 - 1;
                  piVar24 = piVar24 + 4;
                } while (uVar22 != 0);
              }
              plVar17 = (long *)0x3;
              puVar14 = (undefined8 *)func_0x03256b10(param_2);
LAB_06830fec:
              uVar16 = (*(code *)*puVar14)(param_2,puVar14[1]);
              param_1 = 0;
              if (lVar20 != 0) {
                func_0x0695808c(lVar20,uVar16,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_06831020:
  auVar5._8_8_ = param_3;
  auVar5._0_8_ = plVar26;
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = plVar26;
  auVar28 = func_0x03280cac();
  uStack_50 = 0x6831024;
  lVar20 = *(long *)(auVar28._0_8_ + 0x48);
  auVar28._8_8_ = auVar28._8_8_;
  auVar28._0_8_ = lVar20;
  uVar16 = uStack_50;
  if (lVar20 == 0) {
    plVar15 = (long *)func_0x03280cac();
    uStack_60 = 0x6831040;
    plStack_58 = param_2;
    func_0x0678eacc(plVar15,0);
    puVar12 = auStack_70;
    auStack_70[0] = uStack_60;
    uStack_60 = param_1;
    if ((bRam0000000007e28981 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0780d7c0);
      func_0x03280a18(PTR_DAT_0774e4e0);
      func_0x03280a18(PTR_DAT_0780d7c8);
      bRam0000000007e28981 = 1;
    }
    puVar6 = PTR_DAT_0774e4e0;
    if (*(char *)((long)plVar15 + 0xa1) == '\0') {
      return;
    }
    lVar20 = func_0x03280b88(*(undefined8 *)
                              (*plVar15 +
                               (ulong)*(ushort *)(*(long *)PTR_DAT_0780d7c0 + 0x50) * 0x10 + 0x140))
    ;
    param_1 = (**(code **)(lVar20 + 8))(plVar15,lVar20);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)puVar6);
    }
    uVar23 = func_0x06fdeb74(param_1,0,0);
    if ((uVar23 & 1) == 0) {
      return;
    }
    if ((param_1 == 0) || (*(long *)(param_1 + 0x48) == 0)) {
      plVar17 = (long *)func_0x03280cac();
      ppcVar11 = &pcStack_90;
      pcStack_90 = Merger_Game_Views_BoardItem_BoardItemView2__Dispose;
      plStack_88 = param_3;
      uStack_80 = param_1;
      plStack_78 = plVar15;
      lVar20 = func_0x069aaf28(plVar17,0);
      plVar15 = (long *)0x7e16000;
      if (cRam0000000007e16829 == '\0') {
        func_0x03280a18(PTR_DAT_077500e8);
        cRam0000000007e16829 = '\x01';
      }
      if (lVar20 == 0) {
        pcVar18 = (code *)0x68307cc;
        plVar13 = (long *)func_0x03280cac();
        uVar23 = 0;
      }
      else {
        func_0x06feb448(*(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 8),
                        *(undefined4 *)(*(long *)(*(long *)PTR_DAT_077500e8 + 0xb8) + 0xc),0,lVar20,
                        0);
        ppcVar11 = (code **)auStack_70;
        plVar13 = plVar17;
        plVar17 = plStack_78;
        uVar23 = uStack_80;
        plVar15 = plStack_88;
        pcVar18 = pcStack_90;
      }
      puVar10 = PTR_DAT_0780d7f0;
      puVar9 = PTR_DAT_0780d7e8;
      puVar8 = PTR_DAT_0780d7e0;
      puVar7 = PTR_DAT_0780d7d8;
      puVar6 = PTR_DAT_0780d7d0;
      *(code **)((long)ppcVar11 + -0x40) = pcVar18;
      *(undefined8 *)((long)ppcVar11 + -0x38) = unaff_x25;
      *(undefined8 **)((long)ppcVar11 + -0x30) = unaff_x24;
      *(long **)((long)ppcVar11 + -0x28) = plVar27;
      *(long **)((long)ppcVar11 + -0x20) = plVar26;
      *(long **)((long)ppcVar11 + -0x18) = plVar15;
      *(ulong *)((long)ppcVar11 + -0x10) = uVar23;
      *(long **)((long)ppcVar11 + -8) = plVar17;
      if ((bRam0000000007e28982 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0780d7f8);
        func_0x03280a18(PTR_DAT_0780d7d8);
        func_0x03280a18(PTR_DAT_0780d7e8);
        func_0x03280a18(PTR_DAT_0780d7e0);
        func_0x03280a18(PTR_DAT_0780d7d0);
        func_0x03280a18(PTR_DAT_0780d800);
        func_0x03280a18(PTR_DAT_0780d808);
        func_0x03280a18(PTR_DAT_0780d810);
        func_0x03280a18(PTR_DAT_0780d818);
        func_0x03280a18(PTR_DAT_0780d7f0);
        bRam0000000007e28982 = 1;
      }
      lVar20 = plVar13[0x12];
      uVar16 = func_0x03280ca0(*(undefined8 *)puVar6);
      uVar22 = 0;
      func_0x0534d2a4(uVar16,plVar13,*(undefined8 *)puVar7);
      uVar16 = func_0x03d85c08(lVar20,uVar16,*(undefined8 *)puVar8);
      lVar20 = func_0x03d5afd0(uVar16,*(undefined8 *)puVar9);
      lVar21 = *(long *)puVar10;
      uVar23 = plVar13[0x12];
      if (*(int *)(lVar21 + 0xe0) == 0) {
        func_0x03280b8c(lVar21);
        lVar21 = *(long *)puVar10;
      }
      puVar12 = *(undefined8 **)(*(long *)(lVar21 + 0xb8) + 8);
      if (puVar12 != (undefined8 *)0x0) {
        puVar14 = *(undefined8 **)PTR_DAT_0780d810;
        func_0x03e0ea40(uVar23,puVar12);
        if (lVar20 != 0) {
          if (0 < (int)*(ulong *)(lVar20 + 0x18)) {
            uVar23 = 0;
            uVar19 = *(ulong *)(lVar20 + 0x18) & 0xffffffff;
            puVar12 = (undefined8 *)(lVar20 + 0x28);
            do {
              if (uVar19 <= uVar23) {
                func_0x03280cb4();
                goto LAB_068309cc;
              }
              puVar14 = (undefined8 *)puVar12[-1];
              uVar22 = 0;
              Merger_Game_Views_BoardItem_BoardItemView2__RemoveBehaviour(plVar13,*puVar12);
              uVar19 = (ulong)*(uint *)(lVar20 + 0x18);
              uVar23 = uVar23 + 1;
              puVar12 = puVar12 + 2;
            } while ((long)uVar23 < (long)(int)*(uint *)(lVar20 + 0x18));
          }
          return;
        }
LAB_068309cc:
        auVar28 = func_0x03280cac();
        plVar17 = auVar28._8_8_;
        lVar21 = auVar28._0_8_;
        *(code **)((long)ppcVar11 + -0x80) =
             Merger_Game_Views_BoardItem_BoardItemView2__RegisterBehaviour;
        *(undefined **)((long)ppcVar11 + -0x70) = puVar10;
        *(undefined **)((long)ppcVar11 + -0x68) = puVar8;
        *(undefined8 **)((long)ppcVar11 + -0x60) = puVar12;
        *(ulong *)((long)ppcVar11 + -0x58) = uVar23;
        *(long *)((long)ppcVar11 + -0x50) = lVar20;
        *(long **)((long)ppcVar11 + -0x48) = plVar13;
        if ((bRam0000000007e2897f & 1) == 0) {
          func_0x03280a18(PTR_DAT_0780d820);
          func_0x03280a18(PTR_DAT_0776d970);
          func_0x03280a18(PTR_DAT_0780d828);
          bRam0000000007e2897f = 1;
        }
        if (*(long *)(lVar21 + 0x90) != 0) {
          func_0x04fe2d7c(*(long *)(lVar21 + 0x90),puVar14,plVar17,*(undefined8 *)PTR_DAT_0780d820);
          if ((uVar22 & 1) != 0) {
            if (*(long *)(lVar21 + 0x98) == 0) goto LAB_06830b04;
            func_0x053c1024(*(long *)(lVar21 + 0x98),puVar14,*(undefined8 *)PTR_DAT_0776d970);
          }
          if (((ulong)param_5 & 1) == 0) {
            return;
          }
          if (plVar17 != (long *)0x0) {
            lVar20 = *plVar17;
            uVar16 = *(undefined8 *)(lVar21 + 0x30);
            uVar23 = (ulong)*(ushort *)(lVar20 + 0x12e);
            if (uVar23 != 0) {
              piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0780d828) {
                  puVar12 = (undefined8 *)(lVar20 + (long)*piVar24 * 0x10 + 0x138);
                  goto LAB_06830ae0;
                }
                uVar23 = uVar23 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar23 != 0);
            }
            puVar12 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_0780d828,0);
LAB_06830ae0:
                    /* WARNING: Could not recover jumptable at 0x06830b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar12)(plVar17,uVar16,lVar21,puVar12[1]);
            return;
          }
        }
LAB_06830b04:
        lVar20 = func_0x03280cac();
        *(code **)((long)ppcVar11 + -0xb0) =
             Merger_Game_Views_BoardItem_BoardItemView2__PointerClicked;
        *(ulong *)((long)ppcVar11 + -0xa8) = uVar22 & 0xffffffff;
        *(undefined8 **)((long)ppcVar11 + -0xa0) = puVar14;
        *(ulong *)((long)ppcVar11 + -0x98) = (ulong)param_5 & 0xffffffff;
        *(undefined1 (*) [16])((long)ppcVar11 + -0x90) = auVar28;
        if ((bRam0000000007e2897e & 1) == 0) {
          func_0x03280a18(PTR_DAT_0780d7a8);
          func_0x03280a18(PTR_DAT_0780d830);
          func_0x03280a18(PTR_DAT_0780d838);
          func_0x03280a18(PTR_DAT_0780d840);
          func_0x03280a18(PTR_DAT_0780d828);
          func_0x03280a18(PTR_DAT_0780d848);
          bRam0000000007e2897e = 1;
        }
        *(undefined8 *)((long)ppcVar11 + -0xd0) = 0;
        *(undefined8 *)((long)ppcVar11 + -200) = 0;
        *(undefined8 *)((long)ppcVar11 + -0xc0) = 0;
        if ((*(long *)(lVar20 + 0x90) != 0) &&
           (lVar21 = func_0x04fe2bac(*(long *)(lVar20 + 0x90),*(undefined8 *)PTR_DAT_0780d7a8),
           puVar8 = PTR_DAT_0780d838, puVar7 = PTR_DAT_0780d830, puVar6 = PTR_DAT_0780d828,
           lVar21 != 0)) {
          func_0x04816768((undefined1 *)((long)ppcVar11 + -0xe8),lVar21,
                          *(undefined8 *)PTR_DAT_0780d848);
          *(undefined8 *)((long)ppcVar11 + -200) = *(undefined8 *)((long)ppcVar11 + -0xe0);
          *(undefined8 *)((long)ppcVar11 + -0xd0) = *(undefined8 *)((long)ppcVar11 + -0xe8);
          *(undefined8 *)((long)ppcVar11 + -0xc0) = *(undefined8 *)((long)ppcVar11 + -0xd8);
          while( true ) {
            uVar23 = func_0x05160714((undefined1 *)((long)ppcVar11 + -0xd0),*(undefined8 *)puVar8);
            if ((uVar23 & 1) == 0) {
              func_0x05160710((undefined1 *)((long)ppcVar11 + -0xd0),*(undefined8 *)puVar7);
              goto LAB_06830c6c;
            }
            plVar17 = *(long **)((long)ppcVar11 + -0xc0);
            if (plVar17 == (long *)0x0) break;
            lVar21 = *plVar17;
            uVar23 = (ulong)*(ushort *)(lVar21 + 0x12e);
            if (uVar23 != 0) {
              piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)puVar6) {
                  puVar12 = (undefined8 *)(lVar21 + (long)(*piVar24 + 4) * 0x10 + 0x138);
                  goto LAB_06830c40;
                }
                uVar23 = uVar23 - 1;
                piVar24 = piVar24 + 4;
              } while (uVar23 != 0);
            }
            puVar12 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar6,4);
LAB_06830c40:
            uVar23 = (*(code *)*puVar12)(plVar17,puVar12[1]);
            if ((uVar23 & 1) != 0) {
              func_0x05160710((undefined1 *)((long)ppcVar11 + -0xd0),*(undefined8 *)puVar7);
              return;
            }
          }
          func_0x03280cac();
          puVar14 = (undefined8 *)puVar7;
        }
        auVar29 = func_0x03280cac();
        if (auVar29._8_4_ == 1) {
          plVar17 = (long *)func_0x072ce910(auVar29._0_8_);
          lVar21 = *plVar17;
          func_0x072ce920();
          func_0x05160710((undefined1 *)((long)ppcVar11 + -0xd0),*puVar14);
          if (lVar21 == 0) {
LAB_06830c6c:
            func_0x0678ebfc(lVar20,0);
            return;
          }
          func_0x03280ca4(lVar21);
        }
        func_0x05160710((undefined1 *)((long)ppcVar11 + -0xd0),*puVar14);
        func_0x03365958(auVar29._0_8_);
        func_0x03280ca4(0);
        lVar20 = func_0x02f09514();
        *(undefined1 *)(lVar20 + 0xa1) = 1;
        return;
      }
      if (*(int *)(lVar21 + 0xe0) == 0) {
        func_0x03280b8c(lVar21);
        lVar21 = *(long *)puVar10;
      }
      uVar25 = **(undefined8 **)(lVar21 + 0xb8);
      uVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0780d7f8);
      func_0x0541a7c0(uVar16,uVar25,*(undefined8 *)PTR_DAT_0780d818,0);
      unaff_x24 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
      *unaff_x24 = uVar16;
      goto SUB_032809c4;
    }
    auVar28._8_8_ = *(undefined8 *)PTR_DAT_0780d7c8;
    auVar28._0_8_ = *(long *)(param_1 + 0x48);
    plVar17 = (long *)0x0;
    uVar23 = 0;
    param_5 = (long *)0x0;
    param_2 = plVar15;
    uVar16 = 0x6830744;
    auVar5 = auVar4;
  }
  while( true ) {
    auVar4 = auVar28;
    plVar15 = param_5;
    uVar22 = uVar23;
    plVar26 = plVar17;
    puVar6 = PTR_DAT_0774e4e0;
    uVar25 = auVar4._8_8_;
    lVar20 = auVar4._0_8_;
    *(undefined8 *)((long)puVar12 + -0x40) = uVar16;
    *(undefined8 *)((long)puVar12 + -0x38) = unaff_x25;
    *(undefined8 **)((long)puVar12 + -0x30) = unaff_x24;
    *(long **)((long)puVar12 + -0x28) = plVar27;
    *(undefined1 (*) [16])((long)puVar12 + -0x20) = auVar5;
    *(ulong *)((long)puVar12 + -0x10) = param_1;
    *(long **)((long)puVar12 + -8) = param_2;
    if ((bRam0000000007e13480 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e938);
      func_0x03280a18(PTR_DAT_0774e4e0);
      func_0x03280a18(PTR_DAT_0774e940);
      func_0x03280a18(PTR_DAT_0774e948);
      func_0x03280a18(PTR_DAT_0774e950);
      bRam0000000007e13480 = 1;
    }
    uVar16 = func_0x06fdbed0(lVar20,0);
    lVar21 = *(long *)puVar6;
    if (*(int *)(lVar21 + 0xe0) == 0) {
      func_0x03280b8c(lVar21);
    }
    uVar23 = func_0x06fe04ec(uVar16,0,0);
    if ((uVar23 & 1) != 0) {
      uVar16 = func_0x055ea7a0(*(undefined8 *)PTR_DAT_0774e940,uVar25,0);
      goto LAB_0336f594;
    }
    uVar16 = *(undefined8 *)(lVar20 + 0x20);
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar23 = func_0x06fe04ec(uVar16,0,0);
    if ((uVar23 & 1) != 0) {
      uVar16 = func_0x06fdbed0(lVar20,0);
      puVar12 = (undefined8 *)PTR_DAT_0774e950;
      goto LAB_0336f580;
    }
    unaff_x24 = (undefined8 *)(lVar20 + 0x40);
    plVar17 = (long *)*unaff_x24;
    if (plVar17 != (long *)0x0) {
      lVar20 = *plVar17;
      uVar23 = (ulong)*(ushort *)(lVar20 + 0x12e);
      if (uVar23 == 0) goto LAB_0336f4ec;
      piVar24 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      goto LAB_0336f4d4;
    }
    lVar21 = func_0x06fdbed0(lVar20,0);
    if (lVar21 != 0) break;
    auVar28 = func_0x03280cac();
    unaff_x25 = 0;
    puVar12 = (undefined8 *)((long)puVar12 + -0x40);
    plVar17 = (long *)0x0;
    uVar23 = 0;
    param_5 = (long *)0x0;
    param_2 = plVar15;
    param_1 = uVar22;
    plVar27 = plVar26;
    uVar16 = 0x336f5f4;
    auVar5 = auVar4;
  }
  uVar23 = func_0x06fdf2ec(lVar21,0);
  if ((uVar23 & 1) == 0) {
    uVar16 = func_0x06fdbed0(lVar20,0);
    puVar12 = (undefined8 *)PTR_DAT_0774e948;
LAB_0336f580:
    uVar16 = func_0x055ee6c0(*puVar12,uVar16,0);
LAB_0336f594:
    func_0x033b2064(uVar16,0,0,0);
    if (uVar22 != 0) {
      (**(code **)(uVar22 + 0x18))(*(undefined8 *)(uVar22 + 0x40),*(undefined8 *)(uVar22 + 0x28));
    }
    if (plVar15 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0336f5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar15[3])(plVar15[8],plVar15[5]);
      return;
    }
    return;
  }
  *(undefined8 *)((long)puVar12 + -0x50) = *(undefined8 *)((long)puVar12 + -0x40);
  *(undefined8 *)((long)puVar12 + -0x40) = unaff_x26;
  *(undefined8 *)((long)puVar12 + -0x38) = *(undefined8 *)((long)puVar12 + -0x38);
  *(undefined8 *)((long)puVar12 + -0x30) = *(undefined8 *)((long)puVar12 + -0x30);
  *(undefined8 *)((long)puVar12 + -0x28) = *(undefined8 *)((long)puVar12 + -0x28);
  *(undefined8 *)((long)puVar12 + -0x20) = *(undefined8 *)((long)puVar12 + -0x20);
  *(undefined8 *)((long)puVar12 + -0x18) = *(undefined8 *)((long)puVar12 + -0x18);
  *(undefined8 *)((long)puVar12 + -0x10) = *(undefined8 *)((long)puVar12 + -0x10);
  *(undefined8 *)((long)puVar12 + -8) = *(undefined8 *)((long)puVar12 + -8);
  if ((bRam0000000007e13486 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e960);
    func_0x03280a18(PTR_DAT_0774e968);
    func_0x03280a18(PTR_DAT_0774e970);
    func_0x03280a18(PTR_DAT_0774e978);
    func_0x03280a18(PTR_DAT_0774e598);
    func_0x03280a18(PTR_DAT_0774e938);
    func_0x03280a18(PTR_DAT_0774e980);
    func_0x03280a18(PTR_DAT_0774e988);
    func_0x03280a18(PTR_DAT_0774e990);
    func_0x03280a18(PTR_DAT_0774e998);
    bRam0000000007e13486 = 1;
  }
  if (*(long *)(lVar20 + 0x20) == 0) goto LAB_0336fd8c;
  plVar17 = (long *)func_0x0336e92c(*(long *)(lVar20 + 0x20),uVar25);
  if (plVar17 == (long *)0x0) {
    uVar16 = func_0x055f7538(*(undefined8 *)PTR_DAT_0774e990,uVar25,*(undefined8 *)PTR_DAT_0774e998,
                             0);
    if (*(int *)(*(long *)PTR_DAT_0774e598 + 0xe0) == 0) {
      func_0x03280b8c(*(long *)PTR_DAT_0774e598);
    }
    func_0x06fa8580(uVar16,0);
    if (uVar22 != 0) {
      (**(code **)(uVar22 + 0x18))(*(undefined8 *)(uVar22 + 0x40),*(undefined8 *)(uVar22 + 0x28));
    }
    goto joined_r0x0336fb74;
  }
  uVar23 = (**(code **)(*plVar17 + 0x1e8))(plVar17,*(undefined8 *)(*plVar17 + 0x1f0));
  if ((uVar23 & 1) != 0) {
    lVar21 = func_0x03390e30(0);
    if (lVar21 != 0) {
      *(undefined4 *)(lVar21 + 0x10) = 0;
      lVar21 = func_0x033b7208(plVar17,0,0);
      if (lVar21 != 0) {
        if (*(int *)(lVar21 + 0x18) != 0) {
          func_0x033705c8(lVar20);
          func_0x0336f604(lVar20);
          if (*(int *)(*(long *)PTR_DAT_0774e978 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          func_0x0338d498(0);
          uVar16 = func_0x0336f274(lVar20);
          uVar25 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0774e970);
          func_0x0338c180(uVar25,uVar16,0);
          unaff_x24 = (undefined8 *)(lVar20 + 0x40);
          *unaff_x24 = uVar25;
          goto SUB_032809c4;
        }
        if (plVar26 == (long *)0x0) goto joined_r0x0336fb74;
        pcVar18 = (code *)plVar26[3];
        lVar20 = plVar26[8];
        lVar21 = plVar26[5];
        goto LAB_0336fc04;
      }
    }
LAB_0336fd8c:
    auVar28 = func_0x03280cac();
    unaff_x24 = (undefined8 *)(auVar28._0_8_ + 0x20);
    *unaff_x24 = auVar28._8_8_;
SUB_032809c4:
    if (iRam00000000080486b8 != 0) {
      puVar1 = (ulong *)(((ulong)unaff_x24 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)unaff_x24 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  uVar16 = func_0x055f7538(*(undefined8 *)PTR_DAT_0774e990,uVar25,*(undefined8 *)PTR_DAT_0774e988,0)
  ;
  if (*(int *)(*(long *)PTR_DAT_0774e598 + 0xe0) == 0) {
    func_0x03280b8c(*(long *)PTR_DAT_0774e598);
  }
  func_0x06fa8580(uVar16,0);
  if (uVar22 == 0) goto joined_r0x0336fb74;
  pcVar18 = *(code **)(uVar22 + 0x18);
  lVar20 = *(long *)(uVar22 + 0x40);
  lVar21 = *(long *)(uVar22 + 0x28);
LAB_0336fc04:
  (*pcVar18)(lVar20,lVar21);
joined_r0x0336fb74:
  if (plVar15 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0336fc2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar15[3])(plVar15[8],plVar15[5]);
    return;
  }
  return;
  while( true ) {
    uVar23 = uVar23 - 1;
    piVar24 = piVar24 + 4;
    if (uVar23 == 0) break;
LAB_0336f4d4:
    if (*(long *)(piVar24 + -2) == *(long *)PTR_DAT_0774e938) {
      puVar12 = (undefined8 *)(lVar20 + (long)(*piVar24 + 9) * 0x10 + 0x138);
      goto LAB_0336f50c;
    }
  }
LAB_0336f4ec:
  puVar12 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_0774e938,9);
LAB_0336f50c:
  (*(code *)*puVar12)(plVar17,puVar12[1]);
  *unaff_x24 = 0;
  goto SUB_032809c4;
}

