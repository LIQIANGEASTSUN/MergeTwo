/* Ghidra 12.1.2 native pseudocode; RVA 0x4C189EC; Merger.Game.Views.BoardItem.ViewBehaviours.BoardItemViewBehaviourBase<TViewModel>.Merger.Game.Views.BoardItem.ViewBehaviours.IBoardItemViewBehaviour.get_gameObject; status ok */


/* WARNING: Possible PIC construction at 0x04d18e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04d19104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x04d18e9c) */
/* WARNING: Removing unreachable block (ram,0x04d19108) */
/* WARNING: Removing unreachable block (ram,0x04d1911c) */
/* WARNING: Removing unreachable block (ram,0x04d19130) */
/* WARNING: Removing unreachable block (ram,0x04d19138) */
/* WARNING: Removing unreachable block (ram,0x04d1913c) */
/* WARNING: Removing unreachable block (ram,0x04d19154) */

long Merger_Game_Views_BoardItem_ViewBehaviours_BoardItemViewBehaviourBase_TViewModel___Merger_Game_Views_BoardItem_ViewBehaviours_IBoardItemViewBehaviour_get_gameObject
               (long param_1,undefined8 param_2,long *param_3,ulong param_4,long param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long extraout_x1;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  long *plVar23;
  long *plVar24;
  long *unaff_x22;
  undefined8 uVar25;
  long *unaff_x23;
  long *plVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  undefined8 auStack_140 [2];
  long *plStack_130;
  long lStack_128;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_80;
  undefined8 auStack_40 [2];
  
  if (param_1 != 0) {
    if (pcRam0000000007e2fb00 == (code *)0x0) {
      pcRam0000000007e2fb00 = (code *)func_0x032809dc(&UNK_017a6720);
    }
                    /* WARNING: Could not recover jumptable at 0x06fdbf08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar12 = (*pcRam0000000007e2fb00)(param_1);
    return lVar12;
  }
  auVar28 = func_0x03280cac();
  plVar17 = auVar28._8_8_;
  lVar12 = auVar28._0_8_;
  auStack_40[0] = 0x4d18a00;
  plVar24 = (long *)0x7e1a000;
  if ((bRam0000000007e1af03 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e5b0);
    func_0x03280a18(PTR_DAT_0777e498);
    func_0x03280a18(PTR_DAT_0777e5c0);
    func_0x03280a18(PTR_DAT_077803e0);
    bRam0000000007e1af03 = 1;
  }
  if (plVar17 != (long *)0x0) {
    lVar18 = *plVar17;
    plVar24 = *(long **)(lVar12 + 0x70);
    unaff_x22 = *(long **)PTR_DAT_0777e5b0;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
    param_3 = (long *)(ulong)*(ushort *)(unaff_x22 + 10);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == unaff_x22[4]) {
          lVar18 = lVar18 + (long)(int)(*piVar22 + (uint)*(ushort *)(unaff_x22 + 10)) * 0x10 + 0x138
          ;
          goto LAB_04d18abc;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    lVar18 = func_0x03256b10(plVar17);
LAB_04d18abc:
    lVar18 = func_0x03280b88(*(undefined8 *)(lVar18 + 8),unaff_x22);
    uVar9 = (**(code **)(lVar18 + 8))(plVar17,lVar18);
    if (plVar24 != (long *)0x0) {
      param_5 = 1;
      param_3 = *(long **)PTR_DAT_077803e0;
      param_4 = 0;
      (**(code **)(*plVar24 + 0x218))(plVar24,uVar9);
      if (lVar12 != 0) {
        lVar18 = *plVar17;
        plVar23 = *(long **)(lVar12 + 0x10);
        uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar21 != 0) {
          piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0777e498) {
              puVar10 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
              goto LAB_04d18b64;
            }
            uVar21 = uVar21 - 1;
            piVar22 = piVar22 + 4;
          } while (uVar21 != 0);
        }
        param_3 = (long *)0x0;
        puVar10 = (undefined8 *)func_0x03256b10(plVar17);
LAB_04d18b64:
        uVar9 = (*(code *)*puVar10)(plVar17,puVar10[1]);
        lVar12 = 0;
        if (plVar23 != (long *)0x0) {
          lVar12 = *plVar23;
          uVar21 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0777e5c0) {
                puVar10 = (undefined8 *)(lVar12 + (long)(*piVar22 + 6) * 0x10 + 0x138);
                goto LAB_04d18bd0;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar10 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_0777e5c0,6);
LAB_04d18bd0:
                    /* WARNING: Could not recover jumptable at 0x04d18be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar12 = (*(code *)*puVar10)(plVar23,uVar9,puVar10[1]);
          return lVar12;
        }
      }
    }
  }
  auVar28 = func_0x03280cac();
  lVar18 = auVar28._8_8_;
  uStack_80 = 0x4d18bf0;
  if ((bRam0000000007e1af04 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077803e8);
    func_0x03280a18(PTR_DAT_07780390);
    func_0x03280a18(PTR_DAT_077803f0);
    func_0x03280a18(PTR_DAT_077803f8);
    bRam0000000007e1af04 = 1;
  }
  if (auVar28._0_8_ == 0) {
    auVar28 = func_0x03280cac();
    puVar10 = auVar28._8_8_;
    lVar12 = auVar28._0_8_;
    uStack_b0 = 0x4d18db0;
    plVar17 = param_3;
    uVar21 = param_4;
    if ((bRam0000000007e1af05 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780400);
      func_0x03280a18(PTR_DAT_07780408);
      func_0x03280a18(PTR_DAT_07780410);
      func_0x03280a18(PTR_DAT_07780418);
      bRam0000000007e1af05 = 1;
    }
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    if ((puVar10 == (undefined8 *)0x0) || (lVar12 == 0)) {
LAB_04d18ec0:
      param_3 = plVar17;
      auVar29 = func_0x03280cac();
      if (auVar29._8_4_ == 1) {
        plVar17 = (long *)func_0x072ce910(auVar29._0_8_);
        lVar18 = *plVar17;
        func_0x072ce920();
        lVar12 = func_0x051159b0(&uStack_c8,*puVar10);
        if (lVar18 == 0) {
          return lVar12;
        }
        func_0x03280ca4(lVar18);
      }
      func_0x051159b0(&uStack_c8,*puVar10);
      func_0x03365958(auVar29._0_8_);
      func_0x03280ca4(0);
      uVar9 = 0x4d18f2c;
      auVar28 = func_0x02f09514();
    }
    else {
      plVar17 = (long *)puVar10[3];
      uVar21 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
      func_0x054974a4(lVar12,param_3);
      puVar2 = PTR_DAT_07780408;
      puVar8 = PTR_DAT_07780400;
      if (puVar10[3] == 0) goto LAB_04d18ec0;
      func_0x04145068(&uStack_c8,puVar10[3],*(undefined8 *)PTR_DAT_07780418);
      uVar21 = func_0x051159b4(&uStack_c8,*(undefined8 *)puVar2);
      auVar28._8_8_ = uStack_b8;
      auVar28._0_8_ = lVar12;
      if ((uVar21 & 1) == 0) {
        lVar12 = func_0x051159b0(&uStack_c8,*(undefined8 *)puVar8);
        return lVar12;
      }
      param_5 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30);
      uVar21 = 0;
      uVar9 = 0x4d18e9c;
    }
    unaff_x22 = auVar28._8_8_;
    plVar23 = auVar28._0_8_;
    plVar24 = (long *)(uVar21 & 0xffffffff);
    plVar17 = param_3;
    uStack_110 = uVar9;
    if ((bRam0000000007e1af06 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780420);
      func_0x03280a18(PTR_DAT_0777a940);
      func_0x03280a18(PTR_DAT_0777e5a0);
      func_0x03280a18(PTR_DAT_077803d0);
      bRam0000000007e1af06 = 1;
    }
    lStack_118 = 0;
    if (param_3 == (long *)0x0) {
      if (plVar23 != (long *)0x0) {
        param_3 = (long *)(**(code **)(*plVar23 + 0x228))(plVar23,*(undefined8 *)(*plVar23 + 0x230))
        ;
        uVar9 = func_0x06a13bc8(0,0,0,0,0);
        goto LAB_04d18ff4;
      }
LAB_04d191a0:
      uVar9 = 0x4d191a4;
      func_0x03280cac();
      lVar12 = extraout_x1;
      unaff_x23 = param_3;
    }
    else {
      plVar17 = (long *)0x0;
      uVar9 = func_0x06a13bc8(0,0,0,0,0);
      if (plVar23 == (long *)0x0) goto LAB_04d191a0;
LAB_04d18ff4:
      puVar8 = PTR_DAT_0777a940;
      plVar17 = unaff_x22;
      uVar21 = func_0x05497634(plVar23,param_3,unaff_x22,uVar9,&lStack_118,
                               *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x48));
      param_3 = (long *)(uVar21 & 0xffffffff);
      if (unaff_x22 == (long *)0x0) {
LAB_04d1905c:
        if ((plVar23[0xe] == 0) ||
           ((uVar9 = func_0x06764880(plVar23[0xe],0), lStack_118 == 0 ||
            (lVar12 = func_0x03d20d84(lStack_118,*(undefined8 *)puVar8), lVar12 == 0))))
        goto LAB_04d191a0;
        *(undefined8 *)(lVar12 + 0x30) = uVar9;
      }
      else {
        bVar1 = *(byte *)(*(long *)PTR_DAT_07780420 + 0x130);
        if ((*(byte *)(*unaff_x22 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)PTR_DAT_07780420)) goto LAB_04d1905c;
        if (lStack_118 == 0) goto LAB_04d191a0;
        uVar9 = func_0x03d20d84(lStack_118,*(undefined8 *)puVar8);
        plVar17 = (long *)unaff_x22[0x15];
        MergeEngine_ECS_Systems_State_StateSystemBase_TStatePayload___TryLoadComponent_object__object_
                  (plVar23,uVar9,plVar17,
                   *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x50));
      }
      lVar12 = lStack_118;
      plVar26 = (long *)plVar23[0xb];
      if (plVar26 == (long *)0x0) goto LAB_04d191a0;
      lVar18 = *plVar26;
      uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_077803d0) {
            puVar10 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_04d190ec;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar26,*(long *)PTR_DAT_077803d0,0);
LAB_04d190ec:
      plVar17 = unaff_x22;
      (*(code *)*puVar10)(plVar26,lVar12,unaff_x22,puVar10[1]);
      uVar9 = 0x4d19108;
      lVar12 = lStack_118;
      unaff_x23 = param_3;
    }
    auStack_140[0] = uVar9;
    plStack_130 = plVar23;
    lStack_128 = param_5;
    if ((bRam0000000007e1af07 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780428);
      func_0x03280a18(PTR_DAT_0777a960);
      func_0x03280a18(PTR_DAT_07780430);
      func_0x03280a18(PTR_DAT_07780438);
      bRam0000000007e1af07 = 1;
    }
    if (lVar12 != 0) {
      lVar18 = func_0x03d20d84(lVar12,*(undefined8 *)PTR_DAT_0777a960);
      lVar12 = 0;
      if (((lVar18 != 0) &&
          (lVar12 = MergeEngine_ECS_Components_Items_ComponentBase__GetComponent_object_
                              (lVar18,*(undefined8 *)PTR_DAT_07780428), lVar12 != 0)) &&
         (0 < *(int *)(lVar12 + 0x74))) {
        *(undefined4 *)(lVar12 + 0x44) = 2;
      }
      return lVar12;
    }
    auVar28 = func_0x03280cac();
    if ((bRam0000000007e1af08 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07780440);
      func_0x03280a18(PTR_DAT_07780448);
      func_0x03280a18(PTR_DAT_07780450);
      func_0x03280a18(PTR_DAT_07780458);
      func_0x03280a18(PTR_DAT_0777f910);
      func_0x03280a18(PTR_DAT_07780460);
      bRam0000000007e1af08 = 1;
    }
    if ((*(byte *)(*(long *)(*(long *)(plVar17[4] + 0xc0) + 0x70) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x04c1d590(lVar12,*(undefined8 *)(*(long *)(plVar17[4] + 0xc0) + 0x78));
    puVar3 = PTR_DAT_07780458;
    puVar2 = PTR_DAT_07780440;
    puVar8 = PTR_DAT_0777f910;
    if (lVar12 == 0) {
LAB_04d195d8:
      auVar28 = func_0x03280cac();
      lVar18 = auVar28._8_8_;
      lVar12 = auVar28._0_8_;
      if ((bRam0000000007e1af09 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07780468);
        func_0x03280a18(PTR_DAT_0777a498);
        func_0x03280a18(PTR_DAT_0777e4a0);
        func_0x03280a18(PTR_DAT_07780470);
        func_0x03280a18(PTR_DAT_07778fa0);
        bRam0000000007e1af09 = 1;
      }
      if (lVar18 != 0) {
        lVar19 = func_0x03d20d84(lVar18,*(undefined8 *)PTR_DAT_07780468);
        if ((lVar19 == 0) || (*(char *)(lVar19 + 0x65) == '\0')) {
          return lVar19;
        }
        plVar17 = *(long **)(lVar12 + 0x60);
        if (plVar17 != (long *)0x0) {
          lVar11 = *plVar17;
          uVar21 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar21 != 0) {
            piVar22 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0777a498) {
                puVar10 = (undefined8 *)(lVar11 + (long)(*piVar22 + 0x14) * 0x10 + 0x138);
                goto LAB_04d196d8;
              }
              uVar21 = uVar21 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar21 != 0);
          }
          puVar10 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_0777a498,0x14);
LAB_04d196d8:
          uVar9 = (*(code *)*puVar10)(plVar17,lVar19,puVar10[1]);
          plVar17 = *(long **)(lVar12 + 0x68);
          if (plVar17 != (long *)0x0) {
            lVar19 = *plVar17;
            uVar21 = (ulong)*(ushort *)(lVar19 + 0x12e);
            uVar25 = *(undefined8 *)PTR_DAT_07778fa0;
            if (uVar21 != 0) {
              piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_0777e4a0) {
                  puVar10 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
                  goto LAB_04d19754;
                }
                uVar21 = uVar21 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar21 != 0);
            }
            puVar10 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_0777e4a0,0);
LAB_04d19754:
            uVar9 = (*(code *)*puVar10)(plVar17,uVar25,uVar9,lVar18,0,puVar10[1]);
            lVar12 = *(long *)(lVar12 + 0x78);
            if (lVar12 != 0) {
              uVar25 = 0;
              uVar15 = 0;
              if ((bRam0000000007e28edd & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_07807698);
                bRam0000000007e28edd = 1;
              }
              plVar17 = *(long **)(lVar12 + 0x40);
              if (plVar17 != (long *)0x0) {
                lVar12 = *plVar17;
                lVar18 = *(long *)PTR_DAT_07802f60;
                uVar25 = *(undefined8 *)PTR_DAT_07807698;
                uVar21 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar21 != 0) {
                  piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == *(long *)(lVar18 + 0x20)) {
                      lVar12 = lVar12 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar18 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9554;
                    }
                    uVar21 = uVar21 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar21 != 0);
                }
                lVar12 = func_0x03256b10(plVar17);
LAB_068b9554:
                lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar12 = (**(code **)(lVar12 + 8))(plVar17,uVar25,uVar9,0,0,lVar12);
                return lVar12;
              }
              auVar28 = func_0x03280cac();
              uVar9 = uVar25;
              if ((bRam0000000007e28ede & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_07811878);
                bRam0000000007e28ede = 1;
              }
              plVar17 = *(long **)(auVar28._0_8_ + 0x40);
              if (plVar17 != (long *)0x0) {
                lVar12 = *plVar17;
                lVar18 = *(long *)PTR_DAT_07802f60;
                uVar9 = *(undefined8 *)PTR_DAT_07811878;
                uVar21 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar21 != 0) {
                  piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == *(long *)(lVar18 + 0x20)) {
                      lVar12 = lVar12 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar18 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9644;
                    }
                    uVar21 = uVar21 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar21 != 0);
                }
                lVar12 = func_0x03256b10(plVar17);
LAB_068b9644:
                lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar12 = (**(code **)(lVar12 + 8))(plVar17,uVar9,auVar28._8_8_,0,uVar25,lVar12);
                return lVar12;
              }
              auVar28 = func_0x03280cac();
              uVar25 = uVar9;
              if ((bRam0000000007e28edf & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_0776b160);
                bRam0000000007e28edf = 1;
              }
              plVar17 = *(long **)(auVar28._0_8_ + 0x40);
              if (plVar17 != (long *)0x0) {
                lVar12 = *plVar17;
                lVar18 = *(long *)PTR_DAT_07802f60;
                uVar25 = *(undefined8 *)PTR_DAT_0776b160;
                uVar21 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar21 != 0) {
                  piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == *(long *)(lVar18 + 0x20)) {
                      lVar12 = lVar12 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar18 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9734;
                    }
                    uVar21 = uVar21 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar21 != 0);
                }
                lVar12 = func_0x03256b10(plVar17);
LAB_068b9734:
                lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar12 = (**(code **)(lVar12 + 8))(plVar17,uVar25,auVar28._8_8_,0,uVar9,lVar12);
                return lVar12;
              }
              auVar28 = func_0x03280cac();
              if ((bRam0000000007e28ee0 & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_07811880);
                bRam0000000007e28ee0 = 1;
              }
              plVar17 = *(long **)(auVar28._0_8_ + 0x40);
              if (plVar17 != (long *)0x0) {
                lVar12 = *plVar17;
                lVar18 = *(long *)PTR_DAT_07802f60;
                uVar9 = *(undefined8 *)PTR_DAT_07811880;
                uVar21 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar21 != 0) {
                  piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == *(long *)(lVar18 + 0x20)) {
                      lVar12 = lVar12 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar18 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9820;
                    }
                    uVar21 = uVar21 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar21 != 0);
                }
                lVar12 = func_0x03256b10(plVar17);
LAB_068b9820:
                lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar12 = (**(code **)(lVar12 + 8))(plVar17,uVar9,auVar28._8_8_,0,0,lVar12);
                return lVar12;
              }
              auVar28 = func_0x03280cac();
              if ((bRam0000000007e28ee1 & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_07811888);
                bRam0000000007e28ee1 = 1;
              }
              plVar17 = *(long **)(auVar28._0_8_ + 0x40);
              if (plVar17 != (long *)0x0) {
                lVar12 = *plVar17;
                lVar18 = *(long *)PTR_DAT_07802f60;
                uVar9 = *(undefined8 *)PTR_DAT_07811888;
                uVar21 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar21 != 0) {
                  piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == *(long *)(lVar18 + 0x20)) {
                      lVar12 = lVar12 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar18 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b990c;
                    }
                    uVar21 = uVar21 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar21 != 0);
                }
                lVar12 = func_0x03256b10(plVar17);
LAB_068b990c:
                lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar12 = (**(code **)(lVar12 + 8))(plVar17,uVar9,auVar28._8_8_,0,0,lVar12);
                return lVar12;
              }
              auVar28 = func_0x03280cac();
              puVar8 = PTR_DAT_0777aa98;
              uVar9 = uVar25;
              uVar16 = uVar15;
              if ((bRam0000000007e28ee2 & 1) == 0) {
                func_0x03280a18(PTR_DAT_0777aa98);
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_07811888);
                bRam0000000007e28ee2 = 1;
              }
              lVar12 = func_0x03280ca0(*(undefined8 *)puVar8);
              func_0x06a30df4(lVar12,0);
              if (lVar12 != 0) {
                *(undefined8 *)(lVar12 + 0x30) = uVar25;
                func_0x032809c4((undefined8 *)(lVar12 + 0x30),uVar25);
                *(undefined8 *)(lVar12 + 0x38) = uVar15;
                plVar17 = *(long **)(auVar28._0_8_ + 0x40);
                if (plVar17 != (long *)0x0) {
                  lVar18 = *plVar17;
                  lVar19 = *(long *)PTR_DAT_07802f60;
                  uVar9 = *(undefined8 *)PTR_DAT_07811888;
                  uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
                  if (uVar21 != 0) {
                    piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == *(long *)(lVar19 + 0x20)) {
                        lVar18 = lVar18 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar19 + 0x50)) *
                                          0x10 + 0x138;
                        goto LAB_068b9a48;
                      }
                      uVar21 = uVar21 - 1;
                      piVar22 = piVar22 + 4;
                    } while (uVar21 != 0);
                  }
                  lVar18 = func_0x03256b10(plVar17);
LAB_068b9a48:
                  lVar18 = func_0x03280b88(*(undefined8 *)(lVar18 + 8),lVar19);
                    /* WARNING: Could not recover jumptable at 0x068b9a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  lVar12 = (**(code **)(lVar18 + 8))(plVar17,uVar9,auVar28._8_8_,0,lVar12,lVar18);
                  return lVar12;
                }
              }
              auVar28 = func_0x03280cac();
              puVar8 = PTR_DAT_0777aa98;
              if ((bRam0000000007e28ee3 & 1) == 0) {
                func_0x03280a18(PTR_DAT_0777aa98);
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_077c1e10);
                bRam0000000007e28ee3 = 1;
              }
              lVar12 = func_0x03280ca0(*(undefined8 *)puVar8);
              func_0x06a30df4(lVar12,0);
              if (lVar12 != 0) {
                *(undefined8 *)(lVar12 + 0x30) = uVar9;
                func_0x032809c4((undefined8 *)(lVar12 + 0x30),uVar9);
                *(undefined8 *)(lVar12 + 0x38) = uVar16;
                plVar17 = *(long **)(auVar28._0_8_ + 0x40);
                if (plVar17 != (long *)0x0) {
                  lVar18 = *plVar17;
                  lVar19 = *(long *)PTR_DAT_07802f60;
                  uVar9 = *(undefined8 *)PTR_DAT_077c1e10;
                  uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
                  if (uVar21 != 0) {
                    piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == *(long *)(lVar19 + 0x20)) {
                        lVar18 = lVar18 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar19 + 0x50)) *
                                          0x10 + 0x138;
                        goto LAB_068b9b88;
                      }
                      uVar21 = uVar21 - 1;
                      piVar22 = piVar22 + 4;
                    } while (uVar21 != 0);
                  }
                  lVar18 = func_0x03256b10(plVar17);
LAB_068b9b88:
                  lVar18 = func_0x03280b88(*(undefined8 *)(lVar18 + 8),lVar19);
                    /* WARNING: Could not recover jumptable at 0x068b9bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  lVar12 = (**(code **)(lVar18 + 8))(plVar17,uVar9,auVar28._8_8_,0,lVar12,lVar18);
                  return lVar12;
                }
              }
              auVar28 = func_0x03280cac();
              if ((bRam0000000007e28ee4 & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_077d7510);
                bRam0000000007e28ee4 = 1;
              }
              plVar17 = *(long **)(auVar28._0_8_ + 0x40);
              if (plVar17 != (long *)0x0) {
                lVar12 = *plVar17;
                lVar18 = *(long *)PTR_DAT_07802f60;
                uVar9 = *(undefined8 *)PTR_DAT_077d7510;
                uVar21 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar21 != 0) {
                  piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == *(long *)(lVar18 + 0x20)) {
                      lVar12 = lVar12 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar18 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9c78;
                    }
                    uVar21 = uVar21 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar21 != 0);
                }
                lVar12 = func_0x03256b10(plVar17);
LAB_068b9c78:
                lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar12 = (**(code **)(lVar12 + 8))(plVar17,uVar9,auVar28._8_8_,0,0,lVar12);
                return lVar12;
              }
              auVar28 = func_0x03280cac();
              if ((bRam0000000007e28ee5 & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_07811890);
                bRam0000000007e28ee5 = 1;
              }
              plVar17 = *(long **)(auVar28._0_8_ + 0x40);
              if (plVar17 != (long *)0x0) {
                lVar12 = *plVar17;
                lVar18 = *(long *)PTR_DAT_07802f60;
                uVar9 = *(undefined8 *)PTR_DAT_07811890;
                uVar21 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar21 != 0) {
                  piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == *(long *)(lVar18 + 0x20)) {
                      lVar12 = lVar12 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar18 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9d64;
                    }
                    uVar21 = uVar21 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar21 != 0);
                }
                lVar12 = func_0x03256b10(plVar17);
LAB_068b9d64:
                lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar12 = (**(code **)(lVar12 + 8))(plVar17,uVar9,auVar28._8_8_,0,0,lVar12);
                return lVar12;
              }
              auVar28 = func_0x03280cac();
              if ((bRam0000000007e28ee6 & 1) == 0) {
                func_0x03280a18(PTR_DAT_0777ab08);
                func_0x03280a18(PTR_DAT_07811898);
                bRam0000000007e28ee6 = 1;
              }
              plVar17 = *(long **)(auVar28._0_8_ + 0x40);
              if (plVar17 != (long *)0x0) {
                lVar12 = *plVar17;
                lVar18 = *(long *)PTR_DAT_0777ab08;
                uVar9 = *(undefined8 *)PTR_DAT_07811898;
                uVar21 = (ulong)*(ushort *)(lVar12 + 0x12e);
                if (uVar21 != 0) {
                  piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == *(long *)(lVar18 + 0x20)) {
                      lVar12 = lVar12 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar18 + 0x50)) *
                                        0x10 + 0x138;
                      goto LAB_068b9e50;
                    }
                    uVar21 = uVar21 - 1;
                    piVar22 = piVar22 + 4;
                  } while (uVar21 != 0);
                }
                lVar12 = func_0x03256b10(plVar17);
LAB_068b9e50:
                lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                lVar12 = (**(code **)(lVar12 + 8))(plVar17,uVar9,auVar28._8_8_,0,lVar12);
                return lVar12;
              }
              auVar28 = func_0x03280cac();
              if ((bRam0000000007e28ee7 & 1) == 0) {
                func_0x03280a18(PTR_DAT_07802f60);
                func_0x03280a18(PTR_DAT_078118a0);
                bRam0000000007e28ee7 = 1;
              }
              plVar17 = *(long **)(auVar28._0_8_ + 0x40);
              if (plVar17 == (long *)0x0) {
                lVar12 = func_0x03280cac();
                return lVar12;
              }
              lVar12 = *plVar17;
              lVar18 = *(long *)PTR_DAT_07802f60;
              uVar9 = *(undefined8 *)PTR_DAT_078118a0;
              uVar21 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar21 != 0) {
                piVar22 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar22 + -2) == *(long *)(lVar18 + 0x20)) {
                    lVar12 = lVar12 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar18 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_068b9f38;
                  }
                  uVar21 = uVar21 - 1;
                  piVar22 = piVar22 + 4;
                } while (uVar21 != 0);
              }
              lVar12 = func_0x03256b10(plVar17);
LAB_068b9f38:
              lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),lVar18);
                    /* WARNING: Could not recover jumptable at 0x068b9f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              lVar12 = (**(code **)(lVar12 + 8))(plVar17,uVar9,auVar28._8_8_,0,0,lVar12);
              return lVar12;
            }
          }
        }
      }
      lVar12 = func_0x03280cac();
      return lVar12;
    }
    puVar10 = (undefined8 *)(lVar12 + 0x10);
    *puVar10 = auVar28._8_8_;
    func_0x032809c4(puVar10,auVar28._8_8_);
    uVar25 = *puVar10;
    uVar9 = func_0x03280ca0(*(undefined8 *)puVar8);
    param_4 = 0;
    func_0x05355fbc(uVar9,lVar12,*(undefined8 *)(*(long *)(plVar17[4] + 0xc0) + 0x80));
    uVar9 = func_0x03d872a8(uVar25,uVar9,*(undefined8 *)puVar3);
    uVar21 = func_0x03d281a8(uVar9,*(undefined8 *)puVar2);
    if ((uVar21 & 1) != 0) {
      lVar12 = *(long *)(auVar28._0_8_ + 0x70);
      if (lVar12 == 0) goto LAB_04d195d8;
      func_0x06768f84(lVar12,uVar9,0);
    }
    uVar9 = *puVar10;
    lVar12 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar12 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
    if (lVar12 == 0) {
      lVar12 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c();
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar12 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c();
      }
      uVar25 = **(undefined8 **)(lVar12 + 0xb8);
      lVar12 = func_0x03280ca0(*(undefined8 *)puVar8);
      param_4 = 0;
      func_0x05355fbc(lVar12,uVar25,*(undefined8 *)(*(long *)(plVar17[4] + 0xc0) + 0x88));
      lVar19 = *(long *)(plVar17[4] + 0xc0);
      lVar18 = *(long *)(lVar19 + 0x10);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c();
        lVar19 = *(long *)(plVar17[4] + 0xc0);
      }
      *(long *)(*(long *)(lVar18 + 0xb8) + 0x10) = lVar12;
      lVar18 = *(long *)(lVar19 + 0x10);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar18 + 0xb8) + 0x10,lVar12);
    }
    uVar9 = func_0x03d872a8(uVar9,lVar12,*(undefined8 *)puVar3);
    lVar12 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      func_0x03280b8c(lVar12);
    }
    lVar12 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    puVar2 = PTR_DAT_07780450;
    puVar8 = PTR_DAT_07780448;
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
    if (lVar12 == 0) {
      lVar12 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c();
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar12 = *(long *)(*(long *)(plVar17[4] + 0xc0) + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c();
      }
      uVar25 = **(undefined8 **)(lVar12 + 0xb8);
      lVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07780460);
      param_4 = 0;
      func_0x053569b8(lVar12,uVar25,*(undefined8 *)(*(long *)(plVar17[4] + 0xc0) + 0x90));
      lVar19 = *(long *)(plVar17[4] + 0xc0);
      lVar18 = *(long *)(lVar19 + 0x10);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c();
        lVar19 = *(long *)(plVar17[4] + 0xc0);
      }
      *(long *)(*(long *)(lVar18 + 0xb8) + 0x18) = lVar12;
      lVar18 = *(long *)(lVar19 + 0x10);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar18 + 0xb8) + 0x18,lVar12);
    }
    lVar11 = *(long *)puVar8;
    lVar18 = func_0x03d50a94(uVar9,lVar12);
    lVar19 = *(long *)puVar2;
    lVar12 = 0x7e1a000;
    puVar4 = auStack_140;
    uStack_80 = 0x4d19248;
    plVar17 = (long *)0x0;
  }
  else {
    uVar9 = MergeEngine_ECS_Systems_SystemBase__GetComponents_object_
                      (auVar28._0_8_,*(undefined8 *)PTR_DAT_077803f8);
    lVar19 = *(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    if (*(int *)(lVar19 + 0xe0) == 0) {
      func_0x03280b8c(lVar19);
    }
    lVar19 = *(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    puVar2 = PTR_DAT_077803e8;
    puVar8 = PTR_DAT_07780390;
    lVar19 = *(long *)(*(long *)(lVar19 + 0xb8) + 8);
    if (lVar19 == 0) {
      lVar19 = *(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      if (*(int *)(lVar19 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar19 = *(long *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c();
      }
      uVar25 = **(undefined8 **)(lVar19 + 0xb8);
      lVar19 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077803f0);
      param_4 = 0;
      func_0x053569b8(lVar19,uVar25,
                      *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x18));
      lVar20 = *(long *)(*(long *)(lVar18 + 0x20) + 0xc0);
      lVar11 = *(long *)(lVar20 + 0x10);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c();
        lVar20 = *(long *)(*(long *)(lVar18 + 0x20) + 0xc0);
      }
      *(long *)(*(long *)(lVar11 + 0xb8) + 8) = lVar19;
      lVar18 = *(long *)(lVar20 + 0x10);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = func_0x0325681c();
      }
      func_0x032809c4(*(long *)(lVar18 + 0xb8) + 8,lVar19);
    }
    lVar11 = *(long *)puVar2;
    lVar18 = func_0x03d50a94(uVar9,lVar19);
    lVar19 = *(long *)puVar8;
    puVar4 = auStack_40;
  }
  *(undefined8 *)((long)puVar4 + -0x20) = uStack_80;
  *(long *)((long)puVar4 + -0x10) = lVar12;
  *(long **)((long)puVar4 + -8) = plVar17;
  if (*(long *)(lVar19 + 0x38) == 0) {
    func_0x03256878(lVar19);
  }
  if (lVar18 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar19 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x04143d60(lVar12,lVar18,*(undefined8 *)(*(long *)(lVar19 + 0x38) + 0x10));
    return lVar12;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar28 = func_0x03280b7c(uVar9,lVar19);
  lVar12 = auVar28._8_8_;
  *(undefined8 *)((long)puVar4 + -0x40) = 0x3d6004c;
  *(undefined8 *)((long)puVar4 + -0x30) = 0;
  *(long *)((long)puVar4 + -0x28) = lVar19;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar28._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar18 = func_0x03280ca0();
    func_0x0419ce74(lVar18,auVar28._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar18;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar28 = func_0x03280b7c(uVar9,lVar12);
  lVar18 = auVar28._8_8_;
  *(undefined8 *)((long)puVar4 + -0x60) = 0x3d600c8;
  *(undefined8 *)((long)puVar4 + -0x50) = 0;
  *(long *)((long)puVar4 + -0x48) = lVar12;
  if (*(long *)(lVar18 + 0x38) == 0) {
    func_0x03256878(lVar18);
  }
  if (auVar28._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x041c2810(lVar12,auVar28._0_8_,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x10));
    return lVar12;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar28 = func_0x03280b7c(uVar9,lVar18);
  lVar12 = auVar28._8_8_;
  *(undefined8 *)((long)puVar4 + -0x80) = 0x3d60144;
  *(undefined8 *)((long)puVar4 + -0x70) = 0;
  *(long *)((long)puVar4 + -0x68) = lVar18;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar28._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar18 = func_0x03280ca0();
    func_0x041ddb58(lVar18,auVar28._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar18;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar28 = func_0x03280b7c(uVar9,lVar12);
  lVar18 = auVar28._8_8_;
  *(undefined8 *)((long)puVar4 + -0xa0) = 0x3d601c0;
  *(undefined8 *)((long)puVar4 + -0x90) = 0;
  *(long *)((long)puVar4 + -0x88) = lVar12;
  if (*(long *)(lVar18 + 0x38) == 0) {
    func_0x03256878(lVar18);
  }
  if (auVar28._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    func_0x041e617c(lVar12,auVar28._0_8_,*(undefined8 *)(*(long *)(lVar18 + 0x38) + 0x10));
    return lVar12;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar28 = func_0x03280b7c(uVar9,lVar18);
  lVar12 = auVar28._8_8_;
  *(undefined8 *)((long)puVar4 + -0xc0) = 0x3d6023c;
  *(undefined8 *)((long)puVar4 + -0xb0) = 0;
  *(long *)((long)puVar4 + -0xa8) = lVar18;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar28._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar18 = func_0x03280ca0();
    func_0x041e8ba0(lVar18,auVar28._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar18;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar28 = func_0x03280b7c(uVar9,lVar12);
  lVar18 = auVar28._8_8_;
  *(undefined8 *)((long)puVar4 + -0xe0) = 0x3d602b8;
  *(undefined8 *)((long)puVar4 + -0xd0) = 0;
  *(long *)((long)puVar4 + -200) = lVar12;
  if (*(long *)(lVar18 + 0x38) == 0) {
    func_0x03256878(lVar18);
  }
  if (auVar28._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar18 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    (*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x38) + 0x10))(lVar12,auVar28._0_8_);
    return lVar12;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar28 = func_0x03280b7c(uVar9,lVar18);
  lVar12 = auVar28._8_8_;
  *(undefined8 *)((long)puVar4 + -0x100) = 0x3d60338;
  *(undefined8 *)((long)puVar4 + -0xf0) = 0;
  *(long *)((long)puVar4 + -0xe8) = lVar18;
  if (*(long *)(lVar12 + 0x38) == 0) {
    func_0x03256878(lVar12);
  }
  if (auVar28._0_8_ != 0) {
    if ((*(byte *)(*(long *)(*(long *)(lVar12 + 0x38) + 8) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar18 = func_0x03280ca0();
    func_0x0420cec8(lVar18,auVar28._0_8_,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x10));
    return lVar18;
  }
  uVar9 = func_0x03280a2c(PTR_DAT_07774b08);
  uVar9 = func_0x05ac7464(uVar9,0);
  auVar28 = func_0x03280b7c(uVar9,lVar12);
  *(undefined8 *)((long)puVar4 + -0x120) = 0x3d603b4;
  *(long **)((long)puVar4 + -0x118) = plVar24;
  *(undefined8 *)((long)puVar4 + -0x110) = 0;
  *(long *)((long)puVar4 + -0x108) = lVar12;
  lVar12 = lVar11;
  if (*(long *)(lVar11 + 0x38) == 0) {
    func_0x03256878(lVar11);
  }
  puVar8 = PTR_DAT_07779d10;
  if ((auVar28._0_8_ == 0) || (puVar8 = PTR_DAT_07779d18, auVar28._8_8_ == 0)) {
    uVar9 = func_0x03280a2c(puVar8);
    uVar9 = func_0x05ac7464(uVar9,0);
    auVar27 = func_0x03280b7c(uVar9,lVar11);
    *(undefined8 *)((long)puVar4 + -0x140) = 0x3d60428;
    *(undefined1 (*) [16])((long)puVar4 + -0x138) = auVar28;
    *(long *)((long)puVar4 + -0x128) = lVar11;
    lVar18 = lVar12;
    if (*(long *)(lVar12 + 0x38) == 0) {
      func_0x03256878(lVar12);
    }
    puVar8 = PTR_DAT_07779d10;
    if ((auVar27._0_8_ != 0) && (puVar8 = PTR_DAT_07779d18, auVar27._8_8_ != 0)) {
      lVar18 = *(long *)((long)puVar4 + -0x128);
      uVar21 = *(ulong *)(*(long *)(lVar12 + 0x38) + 8);
      uVar25 = 0;
      puVar6 = (undefined1 *)((long)puVar4 + -0x120);
      uVar9 = *(undefined8 *)((long)puVar4 + -0x140);
      auVar28 = *(undefined1 (*) [16])((long)puVar4 + -0x138);
      goto LAB_03d60730;
    }
    uVar9 = func_0x03280a2c(puVar8);
    uVar9 = func_0x05ac7464(uVar9,0);
    auVar28 = func_0x03280b7c(uVar9,lVar12);
    *(undefined8 *)((long)puVar4 + -0x160) = 0x3d6049c;
    *(undefined1 (*) [16])((long)puVar4 + -0x158) = auVar27;
    *(long *)((long)puVar4 + -0x148) = lVar12;
    lVar12 = lVar18;
    if (*(long *)(lVar18 + 0x38) == 0) {
      func_0x03256878(lVar18);
    }
    puVar8 = PTR_DAT_07779d10;
    if ((auVar28._0_8_ == 0) || (puVar8 = PTR_DAT_07779d18, auVar28._8_8_ == 0)) {
      uVar9 = func_0x03280a2c(puVar8);
      uVar9 = func_0x05ac7464(uVar9,0);
      auVar27 = func_0x03280b7c(uVar9,lVar18);
      *(undefined8 *)((long)puVar4 + -0x180) = 0x3d60510;
      *(undefined1 (*) [16])((long)puVar4 + -0x178) = auVar28;
      *(long *)((long)puVar4 + -0x168) = lVar18;
      lVar18 = lVar12;
      if (*(long *)(lVar12 + 0x38) == 0) {
        func_0x03256878(lVar12);
      }
      puVar8 = PTR_DAT_07779d10;
      if ((auVar27._0_8_ != 0) && (puVar8 = PTR_DAT_07779d18, auVar27._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d6055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar12 + 0x38) + 8))
                           (auVar27._0_8_,auVar27._8_8_,0);
        return lVar12;
      }
      uVar9 = func_0x03280a2c(puVar8);
      uVar9 = func_0x05ac7464(uVar9,0);
      auVar28 = func_0x03280b7c(uVar9,lVar12);
      *(undefined8 *)((long)puVar4 + -0x1b0) = 0x3d60588;
      *(long **)((long)puVar4 + -0x1a0) = unaff_x22;
      *(undefined1 (*) [16])((long)puVar4 + -0x198) = auVar27;
      *(long *)((long)puVar4 + -0x188) = lVar12;
      lVar12 = lVar18;
      uVar21 = param_4;
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
      puVar8 = PTR_DAT_07779d10;
      if ((auVar28._0_8_ == 0) || (puVar8 = PTR_DAT_07779d18, auVar28._8_8_ == 0)) {
        uVar9 = func_0x03280a2c(puVar8);
        uVar9 = func_0x05ac7464(uVar9,0);
        auVar27 = func_0x03280b7c(uVar9,param_4);
        puVar5 = (undefined1 *)((long)puVar4 + -0x1e0);
        *(undefined8 *)((long)puVar4 + -0x1e0) = 0x3d60608;
        *(undefined1 (*) [16])((long)puVar4 + -0x1d0) = auVar28;
        *(long *)((long)puVar4 + -0x1c0) = lVar18;
        *(ulong *)((long)puVar4 + -0x1b8) = param_4;
        lVar18 = lVar12;
        uVar14 = uVar21;
        if (*(long *)(uVar21 + 0x38) == 0) {
          func_0x03256878(uVar21);
        }
        puVar8 = PTR_DAT_07779d10;
        if ((auVar27._0_8_ != 0) && (puVar8 = PTR_DAT_07779d18, auVar27._8_8_ != 0)) {
                    /* WARNING: Could not recover jumptable at 0x03d60660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar12 = (*(code *)**(undefined8 **)(*(long *)(uVar21 + 0x38) + 0x10))
                             (auVar27._0_8_,auVar27._8_8_,lVar12);
          return lVar12;
        }
        uVar9 = func_0x03280a2c(puVar8);
        uVar25 = func_0x05ac7464(uVar9,0);
        uVar9 = 0x3d6068c;
        auVar28 = func_0x03280b7c(uVar25,uVar21);
        goto LAB_03d6068c;
      }
      uVar14 = *(ulong *)(*(long *)(param_4 + 0x38) + 0x10);
      uVar25 = *(undefined8 *)((long)puVar4 + -0x188);
      unaff_x22 = *(long **)((long)puVar4 + -0x1a0);
      auVar27 = *(undefined1 (*) [16])((long)puVar4 + -0x198);
      puVar7 = (undefined1 *)((long)puVar4 + -0x180);
      uVar9 = *(undefined8 *)((long)puVar4 + -0x1b0);
    }
    else {
      uVar25 = *(undefined8 *)((long)puVar4 + -0x148);
      uVar14 = *(ulong *)(*(long *)(lVar18 + 0x38) + 8);
      lVar18 = 0;
      puVar7 = (undefined1 *)((long)puVar4 + -0x140);
      uVar9 = *(undefined8 *)((long)puVar4 + -0x160);
      auVar27 = *(undefined1 (*) [16])((long)puVar4 + -0x158);
    }
  }
  else {
    lVar12 = *(long *)((long)puVar4 + -0x110);
    uVar21 = *(ulong *)((long)puVar4 + -0x108);
    uVar14 = *(ulong *)(*(long *)(lVar11 + 0x38) + 8);
    lVar18 = 0;
    puVar5 = (undefined1 *)((long)puVar4 + -0x100);
    uVar9 = *(undefined8 *)((long)puVar4 + -0x120);
    auVar27._8_8_ = *(undefined8 *)((long)puVar4 + -0x118);
    auVar27._0_8_ = unaff_x22;
LAB_03d6068c:
    puVar6 = puVar5 + -0x30;
    *(undefined8 *)(puVar5 + -0x30) = uVar9;
    *(undefined1 (*) [16])(puVar5 + -0x20) = auVar27;
    *(long *)(puVar5 + -0x10) = lVar12;
    *(ulong *)(puVar5 + -8) = uVar21;
    plVar17 = *(long **)(uVar14 + 0x38);
    uVar21 = uVar14;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(uVar14);
      plVar17 = *(long **)(uVar14 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    uVar25 = *(undefined8 *)(*(long *)(uVar14 + 0x38) + 8);
    func_0x0531dbd0(lVar12,0xfffffffe);
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 0x38) = auVar28._0_8_;
      func_0x032809c4((undefined8 *)(lVar12 + 0x38),auVar28._0_8_);
      *(undefined8 *)(lVar12 + 0x48) = auVar28._8_8_;
      func_0x032809c4((undefined8 *)(lVar12 + 0x48),auVar28._8_8_);
      *(long *)(lVar12 + 0x28) = lVar18;
      func_0x032809c4((long *)(lVar12 + 0x28),lVar18);
      return lVar12;
    }
    uVar9 = 0x3d60730;
    auVar27 = func_0x03280cac();
    unaff_x22 = (long *)0x0;
LAB_03d60730:
    puVar7 = puVar6 + -0x30;
    *(undefined8 *)(puVar6 + -0x30) = uVar9;
    *(long **)(puVar6 + -0x20) = unaff_x22;
    *(undefined1 (*) [16])(puVar6 + -0x18) = auVar28;
    *(long *)(puVar6 + -8) = lVar18;
    plVar17 = *(long **)(uVar21 + 0x38);
    uVar14 = uVar21;
    if (plVar17 == (long *)0x0) {
      func_0x03256878(uVar21);
      plVar17 = *(long **)(uVar21 + 0x38);
    }
    if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    lVar18 = *(long *)(*(long *)(uVar21 + 0x38) + 8);
    func_0x0531e428(lVar12,0xfffffffe);
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 0x38) = auVar27._0_8_;
      func_0x032809c4((undefined8 *)(lVar12 + 0x38),auVar27._0_8_);
      *(undefined8 *)(lVar12 + 0x48) = auVar27._8_8_;
      func_0x032809c4((undefined8 *)(lVar12 + 0x48),auVar27._8_8_);
      *(undefined8 *)(lVar12 + 0x28) = uVar25;
      func_0x032809c4((undefined8 *)(lVar12 + 0x28),uVar25);
      return lVar12;
    }
    uVar9 = 0x3d607d4;
    auVar28 = func_0x03280cac();
    unaff_x22 = (long *)0x0;
  }
  *(undefined8 *)(puVar7 + -0x30) = uVar9;
  *(long **)(puVar7 + -0x20) = unaff_x22;
  *(undefined1 (*) [16])(puVar7 + -0x18) = auVar27;
  *(undefined8 *)(puVar7 + -8) = uVar25;
  plVar17 = *(long **)(uVar14 + 0x38);
  uVar21 = uVar14;
  if (plVar17 == (long *)0x0) {
    func_0x03256878(uVar14);
    plVar17 = *(long **)(uVar14 + 0x38);
  }
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar12 = func_0x03280ca0();
  uVar9 = *(undefined8 *)(*(long *)(uVar14 + 0x38) + 8);
  func_0x0531ec78(lVar12,0xfffffffe);
  if (lVar12 != 0) {
    *(undefined8 *)(lVar12 + 0x40) = auVar28._0_8_;
    func_0x032809c4((undefined8 *)(lVar12 + 0x40),auVar28._0_8_);
    *(undefined8 *)(lVar12 + 0x50) = auVar28._8_8_;
    func_0x032809c4((undefined8 *)(lVar12 + 0x50),auVar28._8_8_);
    *(long *)(lVar12 + 0x30) = lVar18;
    func_0x032809c4((long *)(lVar12 + 0x30),lVar18);
    return lVar12;
  }
  auVar27 = func_0x03280cac();
  lVar12 = auVar27._0_8_;
  *(undefined8 *)(puVar7 + -0x60) = 0x3d60878;
  *(long **)(puVar7 + -0x58) = unaff_x23;
  *(undefined8 *)(puVar7 + -0x50) = 0;
  *(undefined1 (*) [16])(puVar7 + -0x48) = auVar28;
  *(long *)(puVar7 + -0x38) = lVar18;
  plVar17 = *(long **)(uVar21 + 0x38);
  if (plVar17 == (long *)0x0) {
    func_0x03256878(uVar21);
    plVar17 = *(long **)(uVar21 + 0x38);
  }
  if ((*(byte *)(*plVar17 + 0x135) & 1) == 0) {
    func_0x0325681c();
  }
  lVar18 = func_0x03280ca0();
  puVar10 = *(undefined8 **)(*(long *)(uVar21 + 0x38) + 8);
  (*(code *)*puVar10)(lVar18,0xfffffffe);
  if (lVar18 != 0) {
    func_0x02f17738(lVar18,*(long *)(**(long **)(uVar21 + 0x38) + 0x80) + 0xc0,lVar12);
    func_0x02f17738(lVar18,*(long *)(**(long **)(uVar21 + 0x38) + 0x80) + 0x100,auVar27._8_8_);
    func_0x02f17738(lVar18,*(long *)(**(long **)(uVar21 + 0x38) + 0x80) + 0x80,uVar9);
    return lVar18;
  }
  auVar28 = func_0x03280cac();
  lVar18 = auVar28._8_8_;
  plVar17 = auVar28._0_8_;
  *(undefined8 *)(puVar7 + -0x90) = 0x3d60944;
  *(undefined8 *)(puVar7 + -0x88) = 0;
  *(undefined1 (*) [16])(puVar7 + -0x80) = auVar27;
  *(ulong *)(puVar7 + -0x70) = uVar21;
  *(undefined8 *)(puVar7 + -0x68) = uVar9;
  puVar13 = puVar10;
  if (puVar10[7] == 0) {
    func_0x03256878(puVar10);
  }
  puVar8 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar8 = PTR_DAT_077799b8, lVar18 == 0)) {
    uVar9 = func_0x03280a2c(puVar8);
    uVar9 = func_0x05ac7464(uVar9,0);
    func_0x03280b7c(uVar9,puVar10);
LAB_03d60c04:
    func_0x03281048(plVar17);
    lVar19 = 0;
  }
  else {
    lVar19 = *(long *)(puVar10[7] + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    lVar11 = *plVar17;
    bVar1 = *(byte *)(lVar11 + 0x130);
    if ((*(byte *)(lVar19 + 0x130) <= bVar1) &&
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19)) {
      lVar19 = *(long *)(puVar10[7] + 0x10);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
        lVar11 = *plVar17;
        bVar1 = *(byte *)(lVar11 + 0x130);
      }
      if ((*(byte *)(lVar19 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19))
      {
        lVar19 = *(long *)(puVar10[7] + 0x10);
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = func_0x0325681c(lVar19);
          lVar11 = *plVar17;
          bVar1 = *(byte *)(lVar11 + 0x130);
        }
        if ((*(byte *)(lVar19 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar12 = (**(code **)(lVar11 + 0x228))(plVar17,lVar18,*(undefined8 *)(lVar11 + 0x230));
          return lVar12;
        }
      }
      goto LAB_03d60c04;
    }
    lVar12 = *(long *)(puVar10[7] + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c(lVar12);
    }
    lVar12 = func_0x03280b90(plVar17,lVar12);
    if (lVar12 == 0) {
      lVar12 = *(long *)(puVar10[7] + 0x38);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) != lVar12
         )) {
        if ((*(byte *)(*(long *)(puVar10[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar12 = func_0x03280ca0();
        func_0x04b68fa4(lVar12,plVar17,lVar18,*(undefined8 *)(puVar10[7] + 0x58));
        return lVar12;
      }
      if ((*(byte *)(*(long *)(puVar10[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar12 = func_0x03280ca0();
      lVar19 = *(long *)(puVar10[7] + 0x38);
      if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
        lVar19 = func_0x0325681c(lVar19);
      }
      if ((*(byte *)(lVar19 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8 + -8) == lVar19
         )) {
        func_0x04b713b0(lVar12,plVar17,lVar18,*(undefined8 *)(puVar10[7] + 0x48));
        return lVar12;
      }
      goto LAB_03d60c04;
    }
    if ((*(byte *)(*(long *)(puVar10[7] + 0x28) + 0x135) & 1) == 0) {
      func_0x0325681c();
    }
    lVar12 = func_0x03280ca0();
    lVar19 = *(long *)(puVar10[7] + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c(lVar19);
    }
    lVar11 = func_0x03280b90(plVar17,lVar19);
    if (lVar11 != 0) {
      func_0x04b66610(lVar12,lVar11,lVar18,*(undefined8 *)(puVar10[7] + 0x30));
      return lVar12;
    }
  }
  auVar27 = func_0x03281048(plVar17,lVar19);
  lVar18 = auVar27._8_8_;
  plVar17 = auVar27._0_8_;
  *(undefined8 *)(puVar7 + -0xc0) = 0x3d60c18;
  *(long *)(puVar7 + -0xb8) = lVar19;
  *(long *)(puVar7 + -0xb0) = lVar12;
  *(undefined8 **)(puVar7 + -0xa8) = puVar10;
  *(undefined1 (*) [16])(puVar7 + -0xa0) = auVar28;
  if (puVar13[7] == 0) {
    func_0x03256878(puVar13);
  }
  puVar8 = PTR_DAT_07774b08;
  if ((plVar17 == (long *)0x0) || (puVar8 = PTR_DAT_077799b8, lVar18 == 0)) {
    uVar9 = func_0x03280a2c(puVar8);
    uVar9 = func_0x05ac7464(uVar9,0);
    func_0x03280b7c(uVar9,puVar13);
  }
  else {
    lVar12 = *(long *)(puVar13[7] + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    lVar11 = *plVar17;
    bVar1 = *(byte *)(lVar11 + 0x130);
    if ((bVar1 < *(byte *)(lVar12 + 0x130)) ||
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) != lVar12)) {
      lVar12 = *(long *)(puVar13[7] + 0x20);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
      }
      lVar12 = func_0x03280b90(plVar17,lVar12);
      if (lVar12 != 0) {
        if ((*(byte *)(*(long *)(puVar13[7] + 0x28) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar12 = func_0x03280ca0();
        lVar19 = *(long *)(puVar13[7] + 0x20);
        if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
          lVar19 = func_0x0325681c(lVar19);
        }
        lVar11 = func_0x03280b90(plVar17,lVar19);
        if (lVar11 != 0) {
          func_0x04b667e0(lVar12,lVar11,lVar18,*(undefined8 *)(puVar13[7] + 0x30));
          return lVar12;
        }
        goto LAB_03d60ee0;
      }
      lVar12 = *(long *)(puVar13[7] + 0x38);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c();
      }
      if ((*(byte *)(*plVar17 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) != lVar12
         )) {
        if ((*(byte *)(*(long *)(puVar13[7] + 0x50) + 0x135) & 1) == 0) {
          func_0x0325681c();
        }
        lVar12 = func_0x03280ca0();
        func_0x04b693d0(lVar12,plVar17,lVar18,*(undefined8 *)(puVar13[7] + 0x58));
        return lVar12;
      }
      if ((*(byte *)(*(long *)(puVar13[7] + 0x40) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      lVar12 = func_0x03280ca0();
      lVar11 = *(long *)(puVar13[7] + 0x38);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      if ((*(byte *)(lVar11 + 0x130) <= *(byte *)(*plVar17 + 0x130)) &&
         (*(long *)(*(long *)(*plVar17 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) == lVar11
         )) {
        func_0x04b715c8(lVar12,plVar17,lVar18,*(undefined8 *)(puVar13[7] + 0x48));
        return lVar12;
      }
    }
    else {
      lVar12 = *(long *)(puVar13[7] + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = func_0x0325681c(lVar12);
        lVar11 = *plVar17;
        bVar1 = *(byte *)(lVar11 + 0x130);
      }
      if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
         (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12))
      {
        lVar12 = *(long *)(puVar13[7] + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = func_0x0325681c(lVar12);
          lVar11 = *plVar17;
          bVar1 = *(byte *)(lVar11 + 0x130);
        }
        if ((*(byte *)(lVar12 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12
           )) {
                    /* WARNING: Could not recover jumptable at 0x03d60e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar12 = (**(code **)(lVar11 + 0x228))(plVar17,lVar18,*(undefined8 *)(lVar11 + 0x230));
          return lVar12;
        }
      }
    }
  }
  func_0x03281048(plVar17);
LAB_03d60ee0:
  lVar12 = func_0x03281048(plVar17,lVar19);
  *(undefined8 *)(puVar7 + -0xe0) = 0x3d60eec;
  *(undefined1 (*) [16])(puVar7 + -0xd0) = auVar27;
  lVar18 = *(long *)(lVar12 + 0x20);
  if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = func_0x0325681c();
  }
  lVar18 = *(long *)(*(long *)(lVar18 + 0xc0) + 0x10);
  if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
    lVar18 = func_0x0325681c();
  }
  lVar18 = **(long **)(lVar18 + 0xb8);
  func_0x03280ab0();
  if (lVar18 == 0) {
    lVar18 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
      lVar18 = func_0x0325681c();
    }
    lVar18 = func_0x0522166c(*(undefined8 *)(*(long *)(lVar18 + 0xc0) + 0x18));
    func_0x03280ab0();
    lVar19 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 0x10);
    if ((*(byte *)(lVar19 + 0x135) & 1) == 0) {
      lVar19 = func_0x0325681c();
    }
    **(long **)(lVar19 + 0xb8) = lVar18;
    lVar12 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = func_0x0325681c();
    }
    func_0x032809c4(*(undefined8 *)(lVar12 + 0xb8),lVar18);
  }
  return lVar18;
}

