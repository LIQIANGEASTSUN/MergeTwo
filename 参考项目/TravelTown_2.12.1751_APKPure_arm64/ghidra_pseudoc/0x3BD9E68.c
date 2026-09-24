/* Ghidra 12.1.2 native pseudocode; RVA 0x3BD9E68; Merger.Game.Views.BoardItem.BoardItemView2.GetBehaviour<object>; status ok */


long Merger_Game_Views_BoardItem_BoardItemView2__GetBehaviour_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 unaff_x19;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined1 *unaff_x21;
  undefined8 uVar12;
  long *plVar13;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined *unaff_x24;
  code *unaff_x30;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long *plVar3;
  
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = param_1;
  auVar14._8_8_ = unaff_x22;
  auVar14._0_8_ = unaff_x19;
  do {
    lVar10 = auVar15._8_8_;
    *(code **)((long)register0x00000008 + -0x20) = unaff_x30;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(long *)((long)register0x00000008 + -8) = auVar14._0_8_;
    puVar6 = *(undefined8 **)(lVar10 + 0x38);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x03280a18(PTR_DAT_07779750);
      func_0x03280a18(PTR_DAT_0774e558);
      puVar6 = *(undefined8 **)(lVar10 + 0x38);
      if (puVar6 == (undefined8 *)0x0) {
        func_0x03256878(lVar10);
        puVar6 = *(undefined8 **)(lVar10 + 0x38);
      }
    }
    *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
    lVar11 = *(long *)(auVar15._0_8_ + 0x90);
    uVar12 = *puVar6;
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar1 = func_0x057a51c4(uVar12,0);
    if (lVar11 != 0) {
      func_0x04fe48b0(lVar11,uVar1,(undefined1 *)((long)register0x00000008 + -0x28),
                      *(undefined8 *)PTR_DAT_07779750);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0x28);
      lVar11 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = func_0x0325681c(lVar11);
      }
      lVar11 = func_0x03280b90(uVar12,lVar11);
      lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = func_0x0325681c(lVar10);
      }
      if (lVar11 != 0) {
        lVar2 = func_0x03280b90(lVar11,lVar10);
        if (lVar2 != 0) {
          return lVar2;
        }
        func_0x03281048(lVar11,lVar10);
      }
      return 0;
    }
    auVar15 = func_0x03280cac();
    lVar11 = auVar15._8_8_;
    plVar3 = auVar15._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0x3cd9f80;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(long *)((long)register0x00000008 + -0x38) = lVar10;
    plVar7 = *(long **)(lVar11 + 0x38);
    if (plVar7 == (long *)0x0) {
      func_0x03256878(lVar11);
      plVar7 = *(long **)(lVar11 + 0x38);
    }
    lVar10 = func_0x03280b88(*(undefined8 *)
                              (*plVar3 + (ulong)*(ushort *)(*plVar7 + 0x50) * 0x10 + 0x140));
    lVar10 = (**(code **)(lVar10 + 8))(plVar3,lVar10);
    if (lVar10 != 0) {
      return lVar10;
    }
    puVar5 = *(undefined1 **)(*(long *)(lVar11 + 0x38) + 0x10);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0x50);
    *(undefined **)((long)register0x00000008 + -0x60) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x50) = auVar14._8_8_;
    *(undefined8 *)((long)register0x00000008 + -0x48) = uVar12;
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)((long)register0x00000008 + -0x38);
    plVar7 = *(long **)(puVar5 + 0x38);
    puVar4 = puVar5;
    if (plVar7 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_0776dcd8);
      func_0x03280a18(PTR_DAT_07779718);
      func_0x03280a18(PTR_DAT_07779720);
      func_0x03280a18(PTR_DAT_0774e558);
      func_0x03280a18(PTR_DAT_07779728);
      func_0x03280a18(PTR_DAT_07779730);
      func_0x03280a18(PTR_DAT_07779738);
      func_0x03280a18(PTR_DAT_077503b8);
      plVar7 = *(long **)(puVar5 + 0x38);
      if (plVar7 == (long *)0x0) {
        func_0x03256878(puVar5);
        plVar7 = *(long **)(puVar5 + 0x38);
      }
    }
    unaff_x24 = PTR_DAT_0774e558;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    plVar13 = (long *)plVar3[0x11];
    unaff_x23 = *plVar7;
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    plVar7 = (long *)func_0x057a51c4(unaff_x23,0);
    if ((plVar7 != (long *)0x0) &&
       (lVar10 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0)),
       plVar13 != (long *)0x0)) {
      lVar11 = *plVar13;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07779720) {
            puVar6 = (undefined8 *)(lVar11 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_03cd9ac8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_07779720,1);
LAB_03cd9ac8:
      param_4 = puVar6[1];
      puVar4 = (undefined1 *)((long)register0x00000008 + -0x68);
      (*(code *)*puVar6)(plVar13,lVar10);
      lVar11 = *(long *)((long)register0x00000008 + -0x68);
      unaff_x23 = lVar10;
      if (lVar11 == 0) {
        plVar13 = (long *)**(undefined8 **)(puVar5 + 0x38);
        if (*(int *)(*(long *)unaff_x24 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        plVar7 = (long *)func_0x057a51c4(plVar13,0);
        if (plVar7 != (long *)0x0) {
          uVar12 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
          plVar13 = (long *)func_0x055ea7a0(*(undefined8 *)PTR_DAT_07779728,uVar12,0);
          if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
            func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
          }
          param_4 = *(long *)PTR_DAT_07779738;
          puVar4 = (undefined1 *)0x0;
          func_0x0556c434(plVar13,*(undefined8 *)PTR_DAT_077503b8,0,param_4,
                          *(undefined8 *)PTR_DAT_07779730,0,0);
          lVar11 = *(long *)((long)register0x00000008 + -0x68);
          if (lVar11 != 0) goto LAB_03cd9b94;
        }
      }
      else {
LAB_03cd9b94:
        if (plVar3[0x10] != 0) {
          unaff_x23 = *(long *)(lVar11 + 0x20);
          puVar4 = *(undefined1 **)PTR_DAT_07779718;
          plVar7 = (long *)func_0x04fe2cfc(plVar3[0x10],*(undefined8 *)(lVar11 + 0x18));
          if (*(long *)((long)register0x00000008 + -0x68) != 0) {
            if (*(int *)(*(long *)((long)register0x00000008 + -0x68) + 0x28) != 1) {
              lVar10 = Merger_Game_Views_BoardItem_BoardItemView2__AttachBehaviourFromPrefab_object_
                                 (plVar3,unaff_x23,plVar7,
                                  *(undefined8 *)(*(long *)(puVar5 + 0x38) + 8));
LAB_03cd9c20:
              func_0x0683105c(plVar3,0);
              return lVar10;
            }
            plVar13 = plVar7;
            if (unaff_x23 != 0) {
              lVar10 = plVar3[0x16];
              uVar12 = func_0x06fe368c(unaff_x23,0);
              uVar12 = func_0x055ee6c0(lVar10,uVar12,0);
              lVar10 = Merger_Game_Views_BoardItem_BoardItemView2__AttachBehaviourFromPool_object_
                                 (plVar3,uVar12,plVar7,
                                  *(undefined8 *)(*(long *)(puVar5 + 0x38) + 0x18));
              goto LAB_03cd9c20;
            }
          }
        }
      }
    }
    auVar15 = func_0x03280cac();
    uVar12 = auVar15._8_8_;
    *(code **)((long)register0x00000008 + -0xa0) =
         Merger_Game_Views_BoardItem_BoardItemView2__AttachBehaviourFromPool_object_;
    *(long **)((long)register0x00000008 + -0x90) = plVar13;
    *(undefined1 **)((long)register0x00000008 + -0x88) = puVar5;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 1;
    *(long **)((long)register0x00000008 + -0x78) = plVar3;
    unaff_x21 = puVar4;
    unaff_x20 = param_4;
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
    lVar11 = func_0x069572f4(uVar12,0);
    lVar10 = param_4;
    if (lVar11 != 0) {
      unaff_x21 = (undefined1 *)0x1;
      unaff_x20 = 0;
      puVar5 = (undefined1 *)func_0x06957fd0(lVar11,puVar4);
      if (puVar5 != (undefined1 *)0x0) {
        lVar10 = func_0x03dc9518(puVar5,**(undefined8 **)(param_4 + 0x38));
        uVar12 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x10);
        if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)PTR_DAT_0774e558);
        }
        unaff_x21 = (undefined1 *)func_0x057a51c4(uVar12,0);
        unaff_x20 = 0;
        func_0x068309d0(auVar15._0_8_,lVar10,unaff_x21,0,1,0);
        lVar11 = func_0x06fdf130(puVar5,0);
        puVar4 = puVar5;
        if (lVar11 != 0) {
          func_0x06fed5b8(lVar11,0);
          return lVar10;
        }
      }
    }
    auVar14 = func_0x03280cac();
    *(code **)((long)register0x00000008 + -0xd0) =
         Merger_Game_Views_BoardItem_BoardItemView2__AttachBehaviourFromPrefab_object_;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar12;
    *(undefined1 **)((long)register0x00000008 + -0xb8) = puVar4;
    *(long *)((long)register0x00000008 + -0xb0) = lVar10;
    *(long *)((long)register0x00000008 + -0xa8) = auVar15._0_8_;
    param_4 = unaff_x20;
    if (*(long *)(unaff_x20 + 0x38) == 0) {
      func_0x03280a18(PTR_DAT_07779748);
      func_0x03280a18(PTR_DAT_0774e4e0);
      func_0x03280a18(PTR_DAT_0774e558);
      if (*(long *)(unaff_x20 + 0x38) == 0) {
        func_0x03256878(unaff_x20);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar10 = func_0x03e3cdbc(auVar14._8_8_,unaff_x21,*(undefined8 *)PTR_DAT_07779748);
    if (lVar10 != 0) {
      lVar10 = func_0x03dc9518(lVar10,**(undefined8 **)(unaff_x20 + 0x38));
      uVar12 = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x10);
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)PTR_DAT_0774e558);
      }
      uVar12 = func_0x057a51c4(uVar12,0);
      func_0x068309d0(auVar14._0_8_,lVar10,uVar12,0,1,0);
      return lVar10;
    }
    unaff_x30 = Merger_Game_Views_BoardItem_BoardItemView2__GetBehaviour_object_;
    auVar15 = func_0x03280cac();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
  } while( true );
}

