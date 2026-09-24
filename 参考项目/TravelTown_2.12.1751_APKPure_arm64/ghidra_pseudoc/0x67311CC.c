/* Ghidra 12.1.2 native pseudocode; RVA 0x67311CC; Merger.Game.Views.BoardItem.BoardItemView2.UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize; status ok */

/* WARNING: Possible PIC construction at 0x05a514a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x05a514d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x05a514a8) */
/* WARNING: Removing unreachable block (ram,0x05a514dc) */
/* WARNING: Removing unreachable block (ram,0x05a514ec) */
/* WARNING: Removing unreachable block (ram,0x05a514f0) */
/* WARNING: Removing unreachable block (ram,0x05a51930) */
/* WARNING: Removing unreachable block (ram,0x05a51944) */

void Merger_Game_Views_BoardItem_BoardItemView2__UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
               (long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  int *piVar12;
  uint uVar13;
  long unaff_x19;
  long unaff_x20;
  uint *puVar14;
  uint *puVar15;
  uint *unaff_x21;
  long unaff_x22;
  uint *puVar16;
  long unaff_x23;
  long unaff_x24;
  int iVar17;
  undefined8 uVar18;
  long unaff_x25;
  long *unaff_x26;
  undefined *unaff_x27;
  long *unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar19 [16];
  
  puVar10 = PTR_DAT_077a08b8;
  if ((bRam0000000007e28985 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077a08b8);
    bRam0000000007e28985 = 1;
  }
  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  puVar10 = PTR_DAT_077a08b8;
  if ((bRam0000000007e1f7d6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077a08b8,(uint *)(param_1 + 0xb8),0,0);
    bRam0000000007e1f7d6 = 1;
  }
  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar9 = 0;
  puVar10 = (undefined *)0x0;
  lVar11 = 0;
  puVar2 = (undefined1 *)register0x00000008;
  puVar15 = (uint *)(param_1 + 0xb8);
SUB_05a508f0:
  do {
    puVar1 = PTR_DAT_0774e4e0;
    *(undefined8 *)(puVar2 + -0x60) = unaff_x29;
    *(undefined8 *)(puVar2 + -0x58) = unaff_x30;
    *(long **)(puVar2 + -0x50) = unaff_x28;
    *(undefined **)(puVar2 + -0x48) = unaff_x27;
    *(long **)(puVar2 + -0x40) = unaff_x26;
    *(long *)(puVar2 + -0x38) = unaff_x25;
    *(long *)(puVar2 + -0x30) = unaff_x24;
    *(long *)(puVar2 + -0x28) = unaff_x23;
    *(long *)(puVar2 + -0x20) = unaff_x22;
    *(uint **)(puVar2 + -0x18) = unaff_x21;
    *(long *)(puVar2 + -0x10) = unaff_x20;
    *(long *)(puVar2 + -8) = unaff_x19;
    puVar16 = (uint *)0x7e1f000;
    if ((bRam0000000007e1f7d7 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777b490);
      func_0x03280a18(PTR_DAT_0777b4b0);
      func_0x03280a18(PTR_DAT_077a2758);
      func_0x03280a18(PTR_DAT_0777b4b8);
      func_0x03280a18(PTR_DAT_0777b4c0);
      func_0x03280a18(PTR_DAT_0777b498);
      func_0x03280a18(PTR_DAT_077a1d18);
      func_0x03280a18(PTR_DAT_0774e598);
      func_0x03280a18(PTR_DAT_0777df68);
      func_0x03280a18(PTR_DAT_077a26a0);
      func_0x03280a18(PTR_DAT_077a26a8);
      func_0x03280a18(PTR_DAT_0774e8c8);
      func_0x03280a18(PTR_DAT_077a2760);
      func_0x03280a18(PTR_DAT_077a2768);
      func_0x03280a18(PTR_DAT_077a2770);
      func_0x03280a18(PTR_DAT_07750198);
      func_0x03280a18(PTR_DAT_077a10b8);
      func_0x03280a18(PTR_DAT_07751a50);
      func_0x03280a18(PTR_DAT_0774e7a8);
      func_0x03280a18(PTR_DAT_0774e7c0);
      func_0x03280a18(PTR_DAT_0774e4e0);
      func_0x03280a18(PTR_DAT_0777b458);
      func_0x03280a18(PTR_DAT_077a2778);
      func_0x03280a18(PTR_DAT_077812c0);
      func_0x03280a18(PTR_DAT_0774e6b8);
      func_0x03280a18(PTR_DAT_07779c18);
      func_0x03280a18(PTR_DAT_0774e558);
      func_0x03280a18(PTR_DAT_077a2780);
      func_0x03280a18(PTR_DAT_077a08b8);
      func_0x03280a18(PTR_DAT_07781200);
      func_0x03280a18(PTR_DAT_077a2788);
      func_0x03280a18(PTR_DAT_077a2790);
      func_0x03280a18(PTR_DAT_077a2798);
      func_0x03280a18(PTR_DAT_077a27a0);
      bRam0000000007e1f7d7 = 1;
    }
    lVar4 = *(long *)puVar1;
    *(undefined8 *)(puVar2 + -0x68) = 0;
    *(undefined8 *)(puVar2 + -0x88) = 0;
    *(undefined8 *)(puVar2 + -0x90) = 0;
    *(undefined8 *)(puVar2 + -0x78) = 0;
    *(undefined8 *)(puVar2 + -0x80) = 0;
    *(undefined8 *)(puVar2 + -0xa8) = 0;
    *(undefined8 *)(puVar2 + -0xb0) = 0;
    *(undefined8 *)(puVar2 + -0x98) = 0;
    *(undefined8 *)(puVar2 + -0xa0) = 0;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar5 = func_0x06fe04ec(param_1,0,0);
    if ((uVar5 & 1) != 0) {
      func_0x03280a2c(PTR_DAT_0774e5b0);
      unaff_x19 = func_0x03280ca0();
      uVar18 = func_0x03280a2c(PTR_DAT_077a26d0);
      func_0x056e7310(unaff_x19,uVar18,0);
      uVar18 = func_0x03280a2c(PTR_DAT_077a27a8);
      func_0x03280b7c(unaff_x19,uVar18);
      goto LAB_05a5154c;
    }
    if ((lVar11 == 0) && ((int)puVar10 != 0)) {
      lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0774e7a8);
      func_0x04143c38(lVar11,*(undefined8 *)PTR_DAT_07750198);
    }
    unaff_x28 = (long *)PTR_DAT_077a08b8;
    puVar16 = puVar15 + 2;
    unaff_x26 = *(long **)puVar16;
    if (((unaff_x26 != (long *)0x0) && (unaff_x26[3] != 0)) &&
       ((*(long *)(puVar15 + 0xe) == 0 || (*(int *)(*(long *)(puVar15 + 0xe) + 0x18) == 0)))) {
      uVar13 = *puVar15;
      if (uVar13 == 2) {
        unaff_x19 = 2;
        if ((int)unaff_x26[3] == 0) goto LAB_05a515c0;
        bVar3 = (char)unaff_x26[4] == '{';
        uVar13 = (uint)bVar3;
        if (*(int *)(*(long *)PTR_DAT_0777b458 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar18 = func_0x05a2f658(unaff_x26,1,0);
        *(uint *)(puVar2 + -0xe0) = (uint)bVar3;
        *(undefined8 *)(puVar2 + -0xf0) = *(undefined8 *)PTR_DAT_077a1d18;
        *(undefined8 *)(puVar2 + -0xe8) = 0xffffffffffffffff;
        uVar6 = func_0x057cd6e4(puVar2 + -0xf0,0);
        uVar18 = func_0x055f7acc(*(undefined8 *)PTR_DAT_077a27a0,uVar6,
                                 *(undefined8 *)PTR_DAT_077a2798,uVar18,0);
        if (*(int *)(*(long *)PTR_DAT_0774e598 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        func_0x06fa8580(uVar18,0);
      }
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      func_0x05a5194c(param_1,puVar16,puVar15 + 4,uVar13,lVar9);
      uVar18 = *(undefined8 *)(puVar15 + 10);
      uVar6 = *(undefined8 *)(puVar15 + 0xc);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      func_0x05a52858(param_1,uVar6,uVar18);
      return;
    }
    if (lVar9 == 0) {
      if (*(int *)(*(long *)PTR_DAT_0777b4c0 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      unaff_x19 = func_0x04d3744c(*(undefined8 *)PTR_DAT_0777b4b0);
      lVar9 = func_0x04d37d00(unaff_x19,*(undefined8 *)PTR_DAT_0777b4b8);
      if (lVar9 == 0) goto LAB_05a5157c;
      unaff_x26 = (long *)func_0x05a1f534(lVar9,0);
      if (*(int *)(*(long *)PTR_DAT_077812c0 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar18 = func_0x05a31174(0);
      if (unaff_x26 == (long *)0x0) goto LAB_05a51580;
      func_0x05a31500(unaff_x26,uVar18,0);
      uVar5 = func_0x0539a8b0(*(undefined8 *)PTR_DAT_077a26a0);
      if ((uVar5 & 1) == 0) {
        lVar4 = func_0x05a1f534(lVar9,0);
        if (lVar4 == 0) goto LAB_05a51588;
        lVar4 = func_0x05a1f8d8(lVar4,0);
        if (lVar4 == 0) goto LAB_05a5158c;
        func_0x05a31a4c(lVar4,0,0);
        lVar4 = func_0x05a1f534(lVar9,0);
        if (lVar4 == 0) goto LAB_05a51598;
        lVar4 = func_0x05a1f8d8(lVar4,0);
        if (lVar4 == 0) goto LAB_05a515a0;
        func_0x05a31a10(lVar4,0,0);
        lVar4 = func_0x05a1f534(lVar9,0);
        if (lVar4 == 0) goto LAB_05a515a8;
        lVar4 = func_0x05a1f8d8(lVar4,0);
        if (*(int *)(*(long *)PTR_DAT_0777df68 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar18 = func_0x059e9ba0(0);
        unaff_x26 = (long *)0x0;
        if (lVar4 == 0) goto LAB_05a515b0;
        func_0x05a31928(lVar4,uVar18,0);
      }
      else {
        lVar4 = func_0x05a1f534(lVar9,0);
        if (lVar4 == 0) goto LAB_05a51584;
        unaff_x26 = (long *)func_0x05a1f8d8(lVar4,0);
        puVar1 = PTR_DAT_077a26a8;
        lVar4 = func_0x0539a8d4(*(undefined8 *)PTR_DAT_077a26a8);
        if (lVar4 == 0) goto LAB_05a51590;
        if (unaff_x26 == (long *)0x0) goto LAB_05a51594;
        func_0x05a31a4c(unaff_x26,*(undefined4 *)(lVar4 + 0x28),0);
        lVar4 = func_0x05a1f534(lVar9,0);
        if (lVar4 == 0) goto LAB_05a5159c;
        unaff_x26 = (long *)func_0x05a1f8d8(lVar4,0);
        lVar4 = func_0x0539a8d4(*(undefined8 *)puVar1);
        if (lVar4 == 0) goto LAB_05a515a4;
        if (unaff_x26 == (long *)0x0) goto LAB_05a515ac;
        func_0x05a31a10(unaff_x26,*(undefined4 *)(lVar4 + 0x24),0);
        lVar4 = func_0x05a1f534(lVar9,0);
        if (lVar4 == 0) goto LAB_05a515b4;
        unaff_x26 = (long *)func_0x05a1f8d8(lVar4,0);
        lVar4 = func_0x0539a8d4(*(undefined8 *)puVar1);
        if (lVar4 == 0) goto LAB_05a515b8;
        uVar18 = func_0x059e9ea8(lVar4,0);
        if (unaff_x26 == (long *)0x0) goto LAB_05a515bc;
        func_0x05a31928(unaff_x26,uVar18,0);
      }
    }
    else {
      unaff_x19 = 0;
    }
    unaff_x27 = PTR_DAT_077a2760;
    plVar7 = (long *)func_0x03280b90(param_1,*(undefined8 *)PTR_DAT_077a2760);
    unaff_x26 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar12 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)unaff_x27) {
            puVar8 = (undefined8 *)(lVar4 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05a50ee8;
          }
          uVar5 = uVar5 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar7,*(long *)unaff_x27,0);
LAB_05a50ee8:
      unaff_x26 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (unaff_x26 != (long *)0x0) {
        if (lVar9 == 0) goto LAB_05a51574;
        lVar4 = func_0x05a1f534(lVar9,0);
        if (lVar4 == 0) goto LAB_05a51578;
        func_0x05a31500(lVar4,unaff_x26,0);
      }
    }
    if ((int)puVar10 != 0) {
LAB_05a50f50:
      *(long *)(puVar2 + -0x68) = lVar11;
      puVar14 = puVar15;
      if (*puVar15 != 2) goto LAB_05a5132c;
      unaff_x26 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077a2778);
      func_0x05a03e9c(unaff_x26,lVar9,0);
      if (*(int *)(*(long *)PTR_DAT_0777b498 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      plVar7 = (long *)func_0x04d3744c(*(undefined8 *)PTR_DAT_0777b490);
      if (plVar7 == (long *)0x0) goto LAB_05a51554;
      if (plVar7[3] == 0) goto LAB_05a51558;
      func_0x05a4bdc4(plVar7[3],*(undefined8 *)(puVar2 + -0x68));
      if (lVar9 == 0) goto LAB_05a5155c;
      *(long *)(lVar9 + 0x50) = plVar7[3];
      func_0x032809c4();
      if (unaff_x26 == (long *)0x0) goto LAB_05a51568;
      func_0x05a04774(unaff_x26,*(undefined8 *)(puVar15 + 0xe),0);
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      func_0x05a52af0(param_1,unaff_x26);
      puVar10 = (undefined *)0x0;
      iVar17 = 0x1a;
      lVar11 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar5 == 0) goto LAB_05a51048;
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    puVar10 = *(undefined **)(puVar15 + 8);
    if (*(int *)(*(long *)PTR_DAT_077a2780 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar5 = func_0x05a63100(puVar10,0);
    puVar1 = PTR_DAT_077a2770;
    if ((uVar5 & 1) != 0) {
LAB_05a50f4c:
      lVar11 = *(long *)(puVar15 + 4);
      goto LAB_05a50f50;
    }
    lVar11 = func_0x03280b90(*(undefined8 *)(puVar15 + 8),*(undefined8 *)PTR_DAT_077a2770);
    if (lVar11 == 0) {
      if (*(long *)(puVar15 + 8) == 0) goto LAB_05a515c8;
      puVar10 = (undefined *)func_0x057dadc4(*(long *)(puVar15 + 8),0);
      unaff_x26 = (long *)PTR_DAT_0774e558;
      uVar18 = *(undefined8 *)PTR_DAT_0774e7c0;
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar18 = func_0x057a51c4(uVar18,0);
      uVar5 = func_0x057afc3c(puVar10,uVar18,0);
      if ((uVar5 & 1) != 0) {
        lVar11 = func_0x03280afc(*(undefined8 *)PTR_DAT_0774e6b8,5);
        if (lVar11 == 0) goto LAB_05a515cc;
        if (*(int *)(lVar11 + 0x18) == 0) goto LAB_05a515d0;
        *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_07781200;
        func_0x032809c4();
        if (*(long *)(puVar15 + 8) == 0) goto LAB_05a515d4;
        uVar18 = func_0x057dadc4(*(long *)(puVar15 + 8),0);
        if (*(int *)(*(long *)PTR_DAT_07779c18 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar18 = func_0x05a435ec(uVar18);
        if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_05a515d8;
        *(undefined8 *)(lVar11 + 0x28) = uVar18;
        func_0x032809c4();
        if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_05a515dc;
        *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_077a2790;
        func_0x032809c4();
        uVar18 = *(undefined8 *)PTR_DAT_077a2768;
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        func_0x057a51c4(uVar18,0);
        uVar18 = func_0x05a435ec();
        if (*(uint *)(lVar11 + 0x18) < 4) goto LAB_05a515e0;
        *(undefined8 *)(lVar11 + 0x38) = uVar18;
        func_0x032809c4();
        if (*(uint *)(lVar11 + 0x18) < 5) goto LAB_05a515e4;
        *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)PTR_DAT_077a2788;
        func_0x032809c4();
        puVar10 = (undefined *)func_0x055f7bd4(lVar11,0);
        if (*(int *)(*(long *)PTR_DAT_0774e598 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        func_0x06fa8580(puVar10,0);
      }
      goto LAB_05a50f4c;
    }
    unaff_x25 = *(long *)(puVar15 + 8);
    if (((unaff_x25 == param_1) && (*(long *)(puVar15 + 0xc) != 0)) &&
       (puVar10 = puVar1, 0 < *(int *)(*(long *)(puVar15 + 0xc) + 0x18))) goto LAB_05a50f4c;
    lVar11 = func_0x03280b90(unaff_x25,*(undefined8 *)puVar1);
    if (lVar11 == 0) {
      do {
        func_0x03280cac();
LAB_05a515c8:
        func_0x03280cac();
LAB_05a515cc:
        func_0x03280cac();
LAB_05a515d0:
        func_0x03280cb4();
LAB_05a515d4:
        func_0x03280cac();
LAB_05a515d8:
        func_0x03280cb4();
LAB_05a515dc:
        func_0x03280cb4();
LAB_05a515e0:
        func_0x03280cb4();
LAB_05a515e4:
        auVar19 = func_0x03280cb4();
LAB_05a51834:
        puVar10 = auVar19._0_8_;
        if (auVar19._8_4_ == 1) {
          plVar7 = (long *)func_0x072ce910(puVar10);
          param_1 = *plVar7;
          func_0x072ce920();
LAB_05a513c0:
          if (unaff_x19 != 0) {
            if (*(int *)(*(long *)PTR_DAT_0777b4c0 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            func_0x04d377b8(unaff_x19,*(undefined8 *)PTR_DAT_077a2758);
          }
          if (param_1 == 0) {
            return;
          }
LAB_05a5154c:
          func_0x03280ca4(param_1);
LAB_05a51554:
          func_0x03280cac();
LAB_05a51558:
          func_0x03280cac();
LAB_05a5155c:
          func_0x03280cac();
        }
        else {
          if (unaff_x19 != 0) {
            if (*(int *)(*(long *)PTR_DAT_0777b4c0 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            func_0x04d377b8(unaff_x19,*(undefined8 *)PTR_DAT_077a2758);
          }
          func_0x03365958(puVar10);
          auVar19 = func_0x03280ca4(0);
          if (auVar19._8_4_ != 1) goto LAB_05a518c4;
          puVar8 = (undefined8 *)func_0x072ce910(auVar19._0_8_);
          puVar10 = (undefined *)*puVar8;
          func_0x072ce920();
          param_1 = 0;
          iVar17 = 0;
LAB_05a5110c:
          if (unaff_x26 != (long *)0x0) {
            lVar11 = *unaff_x26;
            uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar5 == 0) {
LAB_05a51148:
              puVar8 = (undefined8 *)func_0x03256b10(unaff_x26,*(long *)PTR_DAT_0774e8c8,0);
            }
            else {
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              while (*(long *)(piVar12 + -2) != *(long *)PTR_DAT_0774e8c8) {
                uVar5 = uVar5 - 1;
                piVar12 = piVar12 + 4;
                if (uVar5 == 0) goto LAB_05a51148;
              }
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            }
            (*(code *)*puVar8)(unaff_x26,puVar8[1]);
          }
          if (puVar10 == (undefined *)0x0) {
            puVar14 = puVar15;
            if (iVar17 == 0x1a) {
LAB_05a51398:
              puVar15 = *(uint **)(puVar14 + 10);
              lVar9 = *(long *)(puVar14 + 0xc);
              if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                func_0x03280b8c();
              }
              func_0x05a52858(param_1,lVar9,puVar15);
            }
            else if (iVar17 == 0) {
LAB_05a5132c:
              if ((*(long *)puVar16 == 0) || (*(long *)(*(long *)puVar16 + 0x18) == 0)) {
                puVar16 = (uint *)(ulong)*puVar14;
                if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                func_0x05a53ab4(param_1,puVar14 + 6,puVar2 + -0x68,puVar16,lVar9);
              }
              else {
                puVar10 = (undefined *)(ulong)*puVar14;
                if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                  func_0x03280b8c();
                }
                func_0x05a5194c(param_1,puVar16,puVar2 + -0x68,puVar10,lVar9);
              }
              goto LAB_05a51398;
            }
            param_1 = 0;
            goto LAB_05a513c0;
          }
        }
        func_0x03280ca4(puVar10);
LAB_05a51568:
        func_0x03280cac();
        func_0x03280ca4(puVar10);
LAB_05a51574:
        func_0x03280cac();
LAB_05a51578:
        func_0x03280cac();
LAB_05a5157c:
        func_0x03280cac();
LAB_05a51580:
        func_0x03280cac();
LAB_05a51584:
        func_0x03280cac();
LAB_05a51588:
        func_0x03280cac();
LAB_05a5158c:
        func_0x03280cac();
LAB_05a51590:
        func_0x03280cac();
LAB_05a51594:
        func_0x03280cac();
LAB_05a51598:
        func_0x03280cac();
LAB_05a5159c:
        func_0x03280cac();
LAB_05a515a0:
        func_0x03280cac();
LAB_05a515a4:
        func_0x03280cac();
LAB_05a515a8:
        func_0x03280cac();
LAB_05a515ac:
        func_0x03280cac();
LAB_05a515b0:
        func_0x03280cac();
LAB_05a515b4:
        func_0x03280cac();
LAB_05a515b8:
        func_0x03280cac();
LAB_05a515bc:
        func_0x03280cac();
LAB_05a515c0:
        func_0x03280cb4();
      } while( true );
    }
    unaff_x24 = *(long *)puVar1;
    plVar7 = (long *)func_0x03280b90(unaff_x25,unaff_x24);
    lVar11 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == unaff_x24) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_05a51438;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(plVar7,unaff_x24,0);
LAB_05a51438:
    (*(code *)*puVar8)(puVar2 + -0xf0,plVar7,puVar8[1]);
    *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(puVar2 + -0xe8);
    *(undefined8 *)(puVar2 + -0xb0) = *(undefined8 *)(puVar2 + -0xf0);
    *(undefined8 *)(puVar2 + -0x98) = *(undefined8 *)(puVar2 + -0xd8);
    *(undefined8 *)(puVar2 + -0xa0) = *(undefined8 *)(puVar2 + -0xe0);
    *(undefined8 *)(puVar2 + -0x88) = *(undefined8 *)(puVar2 + -200);
    *(undefined8 *)(puVar2 + -0x90) = *(undefined8 *)(puVar2 + -0xd0);
    *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0xb8);
    *(undefined8 *)(puVar2 + -0x80) = *(undefined8 *)(puVar2 + -0xc0);
    unaff_x20 = param_1;
    unaff_x21 = puVar15;
    unaff_x22 = lVar9;
    if (((*(long *)(puVar2 + -0xa8) == 0) || (*(long *)(puVar2 + -0x78) == 0)) ||
       (*(long *)(puVar2 + -0x80) == 0)) {
      lVar11 = *(long *)(puVar15 + 4);
      lVar4 = *unaff_x28;
    }
    else {
      lVar11 = *(long *)(puVar15 + 4);
      lVar4 = *unaff_x28;
      if (*(long *)(puVar2 + -0xa0) != 0) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          func_0x03280b8c(lVar4);
        }
        puVar15 = (uint *)(puVar2 + -0xb0);
        puVar10 = (undefined *)0x1;
        unaff_x30 = 0x5a514a8;
        puVar2 = puVar2 + -0x100;
        unaff_x23 = lVar11;
        goto SUB_05a508f0;
      }
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x03280b8c(lVar4);
    }
    puVar10 = (undefined *)0x1;
    unaff_x30 = 0x5a514dc;
    puVar2 = puVar2 + -0x100;
    unaff_x23 = lVar11;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar12 = piVar12 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_05a510ec;
    }
  }
LAB_05a51048:
  puVar8 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0774e8c8,0);
LAB_05a510ec:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  goto LAB_05a5110c;
LAB_05a518c4:
  if (unaff_x26 != (long *)0x0) {
    lVar11 = *unaff_x26;
    uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_05a51920;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(unaff_x26,*(long *)PTR_DAT_0774e8c8,0);
LAB_05a51920:
    (*(code *)*puVar8)(unaff_x26,puVar8[1]);
  }
  goto LAB_05a51834;
}

