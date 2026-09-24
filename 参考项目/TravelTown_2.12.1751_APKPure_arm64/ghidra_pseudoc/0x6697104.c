/* Ghidra 12.1.2 native pseudocode; RVA 0x6697104; Merger.Game.Views.BoardView.IsPlayingOutAnimation; status ok */


/* WARNING: Possible PIC construction at 0x067971a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06797648: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x067971a8) */
/* WARNING: Removing unreachable block (ram,0x0679764c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Merger_Game_Views_BoardView__IsPlayingOutAnimation
                (long param_1,undefined8 param_2,long *param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  ulong unaff_x22;
  long *plVar23;
  long *unaff_x23;
  int iVar24;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  undefined1 auVar25 [16];
  int iStack_88;
  int iStack_84;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  if ((bRam0000000007e282d3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078095b0);
    bRam0000000007e282d3 = 1;
  }
  lVar10 = *(long *)(param_1 + 0x108);
  if (lVar10 == 0) {
    auVar25 = func_0x03280cac();
    uVar13 = Merger_Game_Views_BoardView__GetItemAtPosition();
    func_0x067971c4(_UNK_017be88c,auVar25._0_8_,auVar25._8_8_,param_3,7);
    plVar23 = (long *)0x0;
    uVar16 = 0x67971a8;
    puVar3 = &stack0xffffffffffffffb0;
    do {
      uVar7 = auVar25._8_8_;
      lVar10 = auVar25._0_8_;
      *(undefined8 *)(puVar3 + -0x30) = uVar16;
      *(undefined8 *)(puVar3 + -0x20) = uVar13;
      *(undefined1 (*) [16])(puVar3 + -0x18) = auVar25;
      *(long **)(puVar3 + -8) = param_3;
      param_3 = plVar23;
      if ((bRam0000000007e282d4 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077c0858);
        func_0x03280a18(PTR_DAT_07809280);
        func_0x03280a18(PTR_DAT_07809530);
        bRam0000000007e282d4 = 1;
      }
      puVar8 = (undefined *)0x7e28000;
      if (*(long *)(lVar10 + 0x130) != 0) {
        param_3 = plVar23;
        func_0x0475450c(*(long *)(lVar10 + 0x130),uVar7,plVar23,*(undefined8 *)PTR_DAT_07809530);
        puVar2 = PTR_DAT_077c0858;
        if (*(long *)(lVar10 + 0x120) != 0) {
          param_3 = *(long **)PTR_DAT_07809280;
          lVar14 = func_0x047544b8(*(long *)(lVar10 + 0x120),uVar7);
          if (plVar23 == (long *)0x0) {
            uVar13 = 0;
          }
          else {
            lVar10 = *plVar23;
            uVar18 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar18 != 0) {
              piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
                  puVar6 = (undefined8 *)(lVar10 + (long)(*piVar21 + 3) * 0x10 + 0x138);
                  goto LAB_0679752c;
                }
                uVar18 = uVar18 - 1;
                piVar21 = piVar21 + 4;
              } while (uVar18 != 0);
            }
            param_3 = (long *)0x3;
            puVar6 = (undefined8 *)func_0x03256b10(plVar23);
LAB_0679752c:
            uVar13 = (*(code *)*puVar6)(plVar23,puVar6[1]);
          }
          lVar10 = 0;
          puVar8 = puVar2;
          if (lVar14 != 0) goto code_r0x06797540;
        }
      }
      auVar25 = func_0x03280cac();
      uVar16 = auVar25._0_8_;
      *(ulong *)(puVar3 + -0x70) = CONCAT44(unaff_00005104,unaff_s8);
      *(undefined8 *)(puVar3 + -0x60) = 0x67975d0;
      *(long **)(puVar3 + -0x58) = unaff_x23;
      *(undefined **)(puVar3 + -0x50) = puVar8;
      *(long *)(puVar3 + -0x48) = lVar10;
      *(long **)(puVar3 + -0x40) = plVar23;
      *(undefined8 *)(puVar3 + -0x38) = uVar7;
      uVar13 = Merger_Game_Views_BoardView__GetItemAtPosition();
      plVar23 = (long *)Merger_Game_Views_BoardView__GetItemAtPosition(uVar16,param_3);
      unaff_s8 = _UNK_017be88c;
      unaff_00005104 = 0;
      func_0x067971c4(_UNK_017be88c,uVar16,auVar25._8_8_,param_3,7);
      func_0x067971c4(unaff_s8,uVar16,param_3,auVar25._8_8_,7);
      uVar16 = 0x679764c;
      puVar3 = puVar3 + -0x70;
      unaff_x23 = plVar23;
    } while( true );
  }
  lVar14 = *(long *)PTR_DAT_078095b0;
  if (*(long *)(lVar10 + 0x10) == 0) {
    return 0;
  }
  uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0xb0);
  uVar4 = func_0x053b2c6c();
  iVar12 = (int)uVar13;
  lVar15 = *(long *)(lVar10 + 0x10);
  if (lVar15 != 0) {
    uVar5 = *(uint *)(lVar15 + 0x18);
    unaff_x22 = (ulong)uVar4;
    iVar24 = 0;
    if (uVar5 != 0) {
      iVar24 = (int)uVar4 / (int)uVar5;
    }
    uVar1 = uVar4 - iVar24 * uVar5;
    if (uVar1 < uVar5) {
      uVar5 = *(int *)(lVar15 + (long)(int)uVar1 * 4 + 0x20) - 1;
      if ((int)uVar5 < 0) {
        return 0;
      }
      lVar15 = *(long *)(lVar10 + 0x18);
      if (lVar15 == 0) goto LAB_053af034;
      uVar16 = *(undefined8 *)(lVar15 + 0x18);
      iVar24 = 0;
      while (iVar12 = (int)uVar13, uVar5 < (uint)uVar16) {
        if (*(uint *)(lVar15 + (ulong)uVar5 * 0x10 + 0x20) == uVar4) {
          plVar23 = *(long **)(lVar10 + 0x30);
          if (plVar23 == (long *)0x0) goto LAB_053af034;
          lVar11 = *(long *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x20);
          uVar16 = *(undefined8 *)(lVar15 + (ulong)uVar5 * 0x10 + 0x28);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = func_0x0325681c(lVar11);
          }
          lVar17 = *plVar23;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 != 0) {
            piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == lVar11) {
                puVar6 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
                goto LAB_053aef90;
              }
              uVar18 = uVar18 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar18 != 0);
          }
          puVar6 = (undefined8 *)func_0x03256b10(plVar23,lVar11,0);
LAB_053aef90:
          param_4 = puVar6[1];
          uVar13 = param_2;
          uVar18 = (*(code *)*puVar6)(plVar23,uVar16);
          if ((uVar18 & 1) != 0) {
            return 1;
          }
          uVar16 = *(undefined8 *)(lVar15 + 0x18);
        }
        if ((int)(uint)uVar16 <= iVar24) goto LAB_053aeff8;
        if ((uint)uVar16 <= uVar5) break;
        uVar5 = *(uint *)(lVar15 + (ulong)uVar5 * 0x10 + 0x24);
        iVar24 = iVar24 + 1;
        if ((int)uVar5 < 0) {
          return 0;
        }
      }
    }
    func_0x03280cb4();
LAB_053aeff8:
    func_0x03280a2c(PTR_DAT_0774efe0);
    lVar10 = func_0x03280ca0();
    uVar13 = func_0x03280a2c(PTR_DAT_077825d8);
    iVar12 = 0;
    func_0x057963c0(lVar10,uVar13);
    func_0x03280b7c(lVar10,lVar14);
  }
LAB_053af034:
  auVar25 = func_0x03280cac();
  lVar15 = auVar25._8_8_;
  uVar18 = auVar25._0_8_;
  iVar24 = *(int *)(uVar18 + 0x20);
  uVar13 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 200);
  uStack_80 = unaff_x22;
  uStack_78 = param_2;
  lStack_70 = lVar10;
  lStack_68 = lVar14;
  if (lVar15 == 0) {
LAB_053b0f68:
    func_0x03280a2c(PTR_DAT_0774e5b0);
    uVar16 = func_0x03280ca0();
    uVar7 = func_0x03280a2c(PTR_DAT_077776b8);
    lVar10 = 0;
    func_0x056e7310(uVar16,uVar7);
  }
  else {
    if (iVar12 < 0) {
      iStack_84 = iVar12;
      uVar16 = func_0x03280a2c(PTR_DAT_0774e6b0);
      lVar10 = func_0x03280b94(uVar16,&iStack_84);
      func_0x03280a2c(PTR_DAT_077517e8);
      uVar16 = func_0x03280ca0();
      puVar8 = PTR_DAT_077776c0;
    }
    else {
      if (-1 < iVar24) {
        if ((iVar12 <= *(int *)(lVar15 + 0x18)) && (iVar24 <= *(int *)(lVar15 + 0x18) - iVar12)) {
          if ((0 < iVar24) && (iVar22 = *(int *)(uVar18 + 0x24), 0 < iVar22)) {
            lVar10 = 0;
            uVar19 = 0;
            iVar20 = 0;
            do {
              lVar14 = *(long *)(uVar18 + 0x18);
              if (lVar14 == 0) {
LAB_053b0f64:
                func_0x03280cac();
                goto LAB_053b0f68;
              }
              if (*(uint *)(lVar14 + 0x18) <= uVar19) {
LAB_053b0f60:
                func_0x03280cb4();
                goto LAB_053b0f64;
              }
              if (-1 < *(int *)(lVar14 + lVar10 + 0x20)) {
                uVar4 = iVar20 + iVar12;
                if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_053b0f60;
                iVar20 = iVar20 + 1;
                *(undefined8 *)(lVar15 + (long)(int)uVar4 * 8 + 0x20) =
                     *(undefined8 *)(lVar14 + lVar10 + 0x28);
                iVar22 = *(int *)(uVar18 + 0x24);
              }
              if (iVar24 <= iVar20) {
                return uVar18;
              }
              uVar19 = uVar19 + 1;
              lVar10 = lVar10 + 0x10;
            } while ((long)uVar19 < (long)iVar22);
          }
          return uVar18;
        }
        func_0x03280a2c(PTR_DAT_0774e6e8);
        uVar16 = func_0x03280ca0();
        uVar7 = func_0x03280a2c(PTR_DAT_0777b030);
        lVar10 = 0;
        func_0x056ede60(uVar16,uVar7);
        goto LAB_053b1088;
      }
      iStack_88 = iVar24;
      uVar16 = func_0x03280a2c(PTR_DAT_0774e6b0);
      lVar10 = func_0x03280b94(uVar16,&iStack_88);
      func_0x03280a2c(PTR_DAT_077517e8);
      uVar16 = func_0x03280ca0();
      puVar8 = PTR_DAT_077598c8;
    }
    uVar7 = func_0x03280a2c(puVar8);
    uVar9 = func_0x03280a2c(PTR_DAT_077825f0);
    func_0x056ebf98(uVar16,uVar7,lVar10,uVar9,0);
  }
LAB_053b1088:
  auVar25 = func_0x03280b7c(uVar16,uVar13);
  lVar15 = auVar25._8_8_;
  lVar14 = auVar25._0_8_;
  if (lVar15 == 0) {
LAB_053b1160:
    func_0x03280a2c(PTR_DAT_0774e5b0);
    uVar13 = func_0x03280ca0();
    uVar16 = func_0x03280a2c(PTR_DAT_07779588);
    func_0x056e7310(uVar13,uVar16,0);
    lVar10 = func_0x03280b7c(uVar13,lVar10);
    return *(ulong *)(lVar10 + 0x30);
  }
  if (*(int *)(lVar14 + 0x24) < 1) {
    uVar4 = 0;
  }
  else {
    lVar11 = 0;
    uVar18 = 0;
    uVar4 = 0;
    do {
      lVar17 = *(long *)(lVar14 + 0x18);
      if (lVar17 == 0) {
        func_0x03280cac();
LAB_053b115c:
        func_0x03280cb4();
        goto LAB_053b1160;
      }
      if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_053b115c;
      if (-1 < *(int *)(lVar17 + lVar11 + 0x20)) {
        uVar13 = *(undefined8 *)(lVar17 + lVar11 + 0x28);
        uVar19 = (**(code **)(lVar15 + 0x18))
                           (*(undefined8 *)(lVar15 + 0x40),uVar13,*(undefined8 *)(lVar15 + 0x28));
        if ((uVar19 & 1) != 0) {
          uVar5 = func_0x053af04c(lVar14,uVar13,
                                  *(undefined8 *)
                                   (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x148));
          uVar4 = uVar4 + (uVar5 & 1);
        }
      }
      uVar18 = uVar18 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((long)uVar18 < (long)*(int *)(lVar14 + 0x24));
  }
  return (ulong)uVar4;
code_r0x06797540:
  *(undefined8 *)(lVar14 + 0x28) = uVar13;
  uVar18 = func_0x032809c4((undefined8 *)(lVar14 + 0x28));
  if (plVar23 == (long *)0x0) {
    return uVar18;
  }
  lVar10 = *plVar23;
  uVar18 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar18 != 0) {
    piVar21 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)puVar2) {
        puVar6 = (undefined8 *)(lVar10 + (long)(*piVar21 + 2) * 0x10 + 0x138);
        goto LAB_067975b0;
      }
      uVar18 = uVar18 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar18 != 0);
  }
  puVar6 = (undefined8 *)func_0x03256b10(plVar23,*(long *)puVar2,2);
LAB_067975b0:
                    /* WARNING: Could not recover jumptable at 0x067975c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar18 = (*(code *)*puVar6)(plVar23,uVar7,puVar6[1]);
  return uVar18;
}

