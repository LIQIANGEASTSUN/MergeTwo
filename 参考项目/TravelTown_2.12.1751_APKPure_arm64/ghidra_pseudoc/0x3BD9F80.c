/* Ghidra 12.1.2 native pseudocode; RVA 0x3BD9F80; Merger.Game.Views.BoardItem.BoardItemView2.GetOrAttachBehaviour<object>; status ok */


long Merger_Game_Views_BoardItem_BoardItemView2__GetOrAttachBehaviour_object_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  long *plVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long *plVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long *plVar13;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined *unaff_x24;
  code *unaff_x30;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  do {
    lVar1 = auVar14._8_8_;
    plVar6 = auVar14._0_8_;
    *(code **)((long)register0x00000008 + -0x20) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(long *)((long)register0x00000008 + -8) = unaff_x19;
    plVar10 = *(long **)(lVar1 + 0x38);
    if (plVar10 == (long *)0x0) {
      func_0x03256878(lVar1);
      plVar10 = *(long **)(lVar1 + 0x38);
    }
    lVar7 = func_0x03280b88(*(undefined8 *)
                             (*plVar6 + (ulong)*(ushort *)(*plVar10 + 0x50) * 0x10 + 0x140));
    lVar7 = (**(code **)(lVar7 + 8))(plVar6,lVar7);
    if (lVar7 != 0) {
      return lVar7;
    }
    puVar9 = *(undefined1 **)(*(long *)(lVar1 + 0x38) + 0x10);
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    plVar10 = *(long **)(puVar9 + 0x38);
    puVar8 = puVar9;
    if (plVar10 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_0776dcd8);
      func_0x03280a18(PTR_DAT_07779718);
      func_0x03280a18(PTR_DAT_07779720);
      func_0x03280a18(PTR_DAT_0774e558);
      func_0x03280a18(PTR_DAT_07779728);
      func_0x03280a18(PTR_DAT_07779730);
      func_0x03280a18(PTR_DAT_07779738);
      func_0x03280a18(PTR_DAT_077503b8);
      plVar10 = *(long **)(puVar9 + 0x38);
      if (plVar10 == (long *)0x0) {
        func_0x03256878(puVar9);
        plVar10 = *(long **)(puVar9 + 0x38);
      }
    }
    unaff_x24 = PTR_DAT_0774e558;
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    plVar13 = (long *)plVar6[0x11];
    unaff_x23 = *plVar10;
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    plVar10 = (long *)func_0x057a51c4(unaff_x23,0);
    if ((plVar10 != (long *)0x0) &&
       (lVar1 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0)),
       plVar13 != (long *)0x0)) {
      lVar7 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07779720) {
            puVar2 = (undefined8 *)(lVar7 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_03cd9ac8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar2 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_07779720,1);
LAB_03cd9ac8:
      param_4 = puVar2[1];
      puVar8 = (undefined1 *)((long)register0x00000008 + -0x38);
      (*(code *)*puVar2)(plVar13,lVar1);
      lVar7 = *(long *)((long)register0x00000008 + -0x38);
      unaff_x23 = lVar1;
      if (lVar7 == 0) {
        plVar13 = (long *)**(undefined8 **)(puVar9 + 0x38);
        if (*(int *)(*(long *)unaff_x24 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        plVar10 = (long *)func_0x057a51c4(plVar13,0);
        if (plVar10 != (long *)0x0) {
          uVar3 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
          plVar13 = (long *)func_0x055ea7a0(*(undefined8 *)PTR_DAT_07779728,uVar3,0);
          if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
            func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
          }
          param_4 = *(long *)PTR_DAT_07779738;
          puVar8 = (undefined1 *)0x0;
          func_0x0556c434(plVar13,*(undefined8 *)PTR_DAT_077503b8,0,param_4,
                          *(undefined8 *)PTR_DAT_07779730,0,0);
          lVar7 = *(long *)((long)register0x00000008 + -0x38);
          if (lVar7 != 0) goto LAB_03cd9b94;
        }
      }
      else {
LAB_03cd9b94:
        if (plVar6[0x10] != 0) {
          unaff_x23 = *(long *)(lVar7 + 0x20);
          puVar8 = *(undefined1 **)PTR_DAT_07779718;
          plVar10 = (long *)func_0x04fe2cfc(plVar6[0x10],*(undefined8 *)(lVar7 + 0x18));
          if (*(long *)((long)register0x00000008 + -0x38) != 0) {
            if (*(int *)(*(long *)((long)register0x00000008 + -0x38) + 0x28) != 1) {
              lVar1 = Merger_Game_Views_BoardItem_BoardItemView2__AttachBehaviourFromPrefab_object_
                                (plVar6,unaff_x23,plVar10,
                                 *(undefined8 *)(*(long *)(puVar9 + 0x38) + 8));
LAB_03cd9c20:
              func_0x0683105c(plVar6,0);
              return lVar1;
            }
            plVar13 = plVar10;
            if (unaff_x23 != 0) {
              lVar1 = plVar6[0x16];
              uVar3 = func_0x06fe368c(unaff_x23,0);
              uVar3 = func_0x055ee6c0(lVar1,uVar3,0);
              lVar1 = Merger_Game_Views_BoardItem_BoardItemView2__AttachBehaviourFromPool_object_
                                (plVar6,uVar3,plVar10,
                                 *(undefined8 *)(*(long *)(puVar9 + 0x38) + 0x18));
              goto LAB_03cd9c20;
            }
          }
        }
      }
    }
    auVar14 = func_0x03280cac();
    uVar3 = auVar14._8_8_;
    *(code **)((long)register0x00000008 + -0x70) =
         Merger_Game_Views_BoardItem_BoardItemView2__AttachBehaviourFromPool_object_;
    *(long **)((long)register0x00000008 + -0x60) = plVar13;
    *(undefined1 **)((long)register0x00000008 + -0x58) = puVar9;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 1;
    *(long **)((long)register0x00000008 + -0x48) = plVar6;
    puVar9 = puVar8;
    lVar1 = param_4;
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
    lVar4 = func_0x069572f4(uVar3,0);
    lVar7 = param_4;
    if (lVar4 != 0) {
      puVar9 = (undefined1 *)0x1;
      lVar1 = 0;
      puVar5 = (undefined1 *)func_0x06957fd0(lVar4,puVar8);
      if (puVar5 != (undefined1 *)0x0) {
        lVar7 = func_0x03dc9518(puVar5,**(undefined8 **)(param_4 + 0x38));
        uVar3 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x10);
        if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)PTR_DAT_0774e558);
        }
        puVar9 = (undefined1 *)func_0x057a51c4(uVar3,0);
        lVar1 = 0;
        func_0x068309d0(auVar14._0_8_,lVar7,puVar9,0,1,0);
        lVar4 = func_0x06fdf130(puVar5,0);
        puVar8 = puVar5;
        if (lVar4 != 0) {
          func_0x06fed5b8(lVar4,0);
          return lVar7;
        }
      }
    }
    auVar15 = func_0x03280cac();
    unaff_x22 = auVar15._8_8_;
    *(code **)((long)register0x00000008 + -0xa0) =
         Merger_Game_Views_BoardItem_BoardItemView2__AttachBehaviourFromPrefab_object_;
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar3;
    *(undefined1 **)((long)register0x00000008 + -0x88) = puVar8;
    *(long *)((long)register0x00000008 + -0x80) = lVar7;
    *(long *)((long)register0x00000008 + -0x78) = auVar14._0_8_;
    param_4 = lVar1;
    if (*(long *)(lVar1 + 0x38) == 0) {
      func_0x03280a18(PTR_DAT_07779748);
      func_0x03280a18(PTR_DAT_0774e4e0);
      func_0x03280a18(PTR_DAT_0774e558);
      if (*(long *)(lVar1 + 0x38) == 0) {
        func_0x03256878(lVar1);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar7 = func_0x03e3cdbc(unaff_x22,puVar9,*(undefined8 *)PTR_DAT_07779748);
    if (lVar7 != 0) {
      lVar7 = func_0x03dc9518(lVar7,**(undefined8 **)(lVar1 + 0x38));
      uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0x38) + 0x10);
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)PTR_DAT_0774e558);
      }
      uVar3 = func_0x057a51c4(uVar3,0);
      func_0x068309d0(auVar15._0_8_,lVar7,uVar3,0,1,0);
      return lVar7;
    }
    auVar14 = func_0x03280cac();
    unaff_x19 = auVar14._8_8_;
    *(code **)((long)register0x00000008 + -0xc0) =
         Merger_Game_Views_BoardItem_BoardItemView2__GetBehaviour_object_;
    *(undefined1 **)((long)register0x00000008 + -0xb8) = puVar9;
    *(long *)((long)register0x00000008 + -0xb0) = lVar1;
    *(long *)((long)register0x00000008 + -0xa8) = auVar15._0_8_;
    puVar2 = *(undefined8 **)(unaff_x19 + 0x38);
    if (puVar2 == (undefined8 *)0x0) {
      func_0x03280a18(PTR_DAT_07779750);
      func_0x03280a18(PTR_DAT_0774e558);
      puVar2 = *(undefined8 **)(unaff_x19 + 0x38);
      if (puVar2 == (undefined8 *)0x0) {
        func_0x03256878(unaff_x19);
        puVar2 = *(undefined8 **)(unaff_x19 + 0x38);
      }
    }
    *(undefined8 *)((long)register0x00000008 + -200) = 0;
    lVar1 = *(long *)(auVar14._0_8_ + 0x90);
    unaff_x21 = *puVar2;
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar3 = func_0x057a51c4(unaff_x21,0);
    if (lVar1 != 0) {
      func_0x04fe48b0(lVar1,uVar3,(undefined1 *)((long)register0x00000008 + -200),
                      *(undefined8 *)PTR_DAT_07779750);
      uVar3 = *(undefined8 *)((long)register0x00000008 + -200);
      lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = func_0x0325681c(lVar1);
      }
      lVar1 = func_0x03280b90(uVar3,lVar1);
      lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x0325681c(lVar7);
      }
      if (lVar1 != 0) {
        lVar4 = func_0x03280b90(lVar1,lVar7);
        if (lVar4 != 0) {
          return lVar4;
        }
        func_0x03281048(lVar1,lVar7);
      }
      return 0;
    }
    unaff_x30 = Merger_Game_Views_BoardItem_BoardItemView2__GetOrAttachBehaviour_object_;
    auVar14 = func_0x03280cac();
    unaff_x20 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
  } while( true );
}

