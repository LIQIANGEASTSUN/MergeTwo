/* Ghidra 12.1.2 native pseudocode; RVA 0x3BD9D68; Merger.Game.Views.BoardItem.BoardItemView2.AttachBehaviourFromPrefab<object>; status ok */


long Merger_Game_Views_BoardItem_BoardItemView2__AttachBehaviourFromPrefab_object_
               (undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar10;
  undefined1 *unaff_x21;
  undefined8 uVar11;
  long *plVar12;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined *unaff_x24;
  code *unaff_x30;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = param_1;
  do {
    *(code **)((long)register0x00000008 + -0x30) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    lVar2 = param_4;
    if (*(long *)(param_4 + 0x38) == 0) {
      func_0x03280a18(PTR_DAT_07779748);
      func_0x03280a18(PTR_DAT_0774e4e0);
      func_0x03280a18(PTR_DAT_0774e558);
      if (*(long *)(param_4 + 0x38) == 0) {
        func_0x03256878(param_4);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar1 = func_0x03e3cdbc(auVar13._8_8_,param_3,*(undefined8 *)PTR_DAT_07779748);
    if (lVar1 != 0) {
      lVar2 = func_0x03dc9518(lVar1,**(undefined8 **)(param_4 + 0x38));
      uVar11 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x10);
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)PTR_DAT_0774e558);
      }
      uVar11 = func_0x057a51c4(uVar11,0);
      func_0x068309d0(auVar13._0_8_,lVar2,uVar11,0,1,0);
      return lVar2;
    }
    auVar14 = func_0x03280cac();
    lVar1 = auVar14._8_8_;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0x3cd9e68;
    *(undefined1 **)((long)register0x00000008 + -0x48) = param_3;
    *(long *)((long)register0x00000008 + -0x40) = param_4;
    *(long *)((long)register0x00000008 + -0x38) = auVar13._0_8_;
    puVar6 = *(undefined8 **)(lVar1 + 0x38);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x03280a18(PTR_DAT_07779750);
      func_0x03280a18(PTR_DAT_0774e558);
      puVar6 = *(undefined8 **)(lVar1 + 0x38);
      if (puVar6 == (undefined8 *)0x0) {
        func_0x03256878(lVar1);
        puVar6 = *(undefined8 **)(lVar1 + 0x38);
      }
    }
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
    lVar10 = *(long *)(auVar14._0_8_ + 0x90);
    uVar11 = *puVar6;
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar3 = func_0x057a51c4(uVar11,0);
    if (lVar10 != 0) {
      func_0x04fe48b0(lVar10,uVar3,(undefined1 *)((long)register0x00000008 + -0x58),
                      *(undefined8 *)PTR_DAT_07779750);
      uVar11 = *(undefined8 *)((long)register0x00000008 + -0x58);
      lVar2 = *(long *)(*(long *)(lVar1 + 0x38) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = func_0x0325681c(lVar2);
      }
      lVar2 = func_0x03280b90(uVar11,lVar2);
      lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = func_0x0325681c(lVar1);
      }
      if (lVar2 != 0) {
        lVar10 = func_0x03280b90(lVar2,lVar1);
        if (lVar10 != 0) {
          return lVar10;
        }
        func_0x03281048(lVar2,lVar1);
      }
      return 0;
    }
    auVar14 = func_0x03280cac();
    lVar10 = auVar14._8_8_;
    plVar4 = auVar14._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3cd9f80;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    *(long *)((long)register0x00000008 + -0x68) = lVar1;
    plVar7 = *(long **)(lVar10 + 0x38);
    if (plVar7 == (long *)0x0) {
      func_0x03256878(lVar10);
      plVar7 = *(long **)(lVar10 + 0x38);
    }
    lVar1 = func_0x03280b88(*(undefined8 *)
                             (*plVar4 + (ulong)*(ushort *)(*plVar7 + 0x50) * 0x10 + 0x140));
    lVar1 = (**(code **)(lVar1 + 8))(plVar4,lVar1);
    if (lVar1 != 0) {
      return lVar1;
    }
    puVar5 = *(undefined1 **)(*(long *)(lVar10 + 0x38) + 0x10);
    *(undefined8 *)((long)register0x00000008 + -0xa0) =
         *(undefined8 *)((long)register0x00000008 + -0x80);
    *(undefined **)((long)register0x00000008 + -0x90) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x88) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x80) = auVar13._8_8_;
    *(undefined8 *)((long)register0x00000008 + -0x78) = uVar11;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x68);
    plVar7 = *(long **)(puVar5 + 0x38);
    unaff_x21 = puVar5;
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
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    plVar12 = (long *)plVar4[0x11];
    unaff_x23 = *plVar7;
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    plVar7 = (long *)func_0x057a51c4(unaff_x23,0);
    if ((plVar7 != (long *)0x0) &&
       (lVar1 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0)),
       plVar12 != (long *)0x0)) {
      lVar2 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07779720) {
            puVar6 = (undefined8 *)(lVar2 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_03cd9ac8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_07779720,1);
LAB_03cd9ac8:
      lVar2 = puVar6[1];
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x98);
      (*(code *)*puVar6)(plVar12,lVar1);
      lVar10 = *(long *)((long)register0x00000008 + -0x98);
      unaff_x23 = lVar1;
      if (lVar10 == 0) {
        plVar12 = (long *)**(undefined8 **)(puVar5 + 0x38);
        if (*(int *)(*(long *)unaff_x24 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        plVar7 = (long *)func_0x057a51c4(plVar12,0);
        if (plVar7 != (long *)0x0) {
          uVar11 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
          plVar12 = (long *)func_0x055ea7a0(*(undefined8 *)PTR_DAT_07779728,uVar11,0);
          if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
            func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
          }
          lVar2 = *(long *)PTR_DAT_07779738;
          unaff_x21 = (undefined1 *)0x0;
          func_0x0556c434(plVar12,*(undefined8 *)PTR_DAT_077503b8,0,lVar2,
                          *(undefined8 *)PTR_DAT_07779730,0,0);
          lVar10 = *(long *)((long)register0x00000008 + -0x98);
          if (lVar10 != 0) goto LAB_03cd9b94;
        }
      }
      else {
LAB_03cd9b94:
        if (plVar4[0x10] != 0) {
          unaff_x23 = *(long *)(lVar10 + 0x20);
          unaff_x21 = *(undefined1 **)PTR_DAT_07779718;
          plVar7 = (long *)func_0x04fe2cfc(plVar4[0x10],*(undefined8 *)(lVar10 + 0x18));
          if (*(long *)((long)register0x00000008 + -0x98) != 0) {
            if (*(int *)(*(long *)((long)register0x00000008 + -0x98) + 0x28) != 1) {
              lVar2 = Merger_Game_Views_BoardItem_BoardItemView2__AttachBehaviourFromPrefab_object_
                                (plVar4,unaff_x23,plVar7,
                                 *(undefined8 *)(*(long *)(puVar5 + 0x38) + 8));
LAB_03cd9c20:
              func_0x0683105c(plVar4,0);
              return lVar2;
            }
            plVar12 = plVar7;
            if (unaff_x23 != 0) {
              lVar2 = plVar4[0x16];
              uVar11 = func_0x06fe368c(unaff_x23,0);
              uVar11 = func_0x055ee6c0(lVar2,uVar11,0);
              lVar2 = Merger_Game_Views_BoardItem_BoardItemView2__AttachBehaviourFromPool_object_
                                (plVar4,uVar11,plVar7,
                                 *(undefined8 *)(*(long *)(puVar5 + 0x38) + 0x18));
              goto LAB_03cd9c20;
            }
          }
        }
      }
    }
    auVar13 = func_0x03280cac();
    unaff_x22 = auVar13._8_8_;
    unaff_x19 = auVar13._0_8_;
    *(code **)((long)register0x00000008 + -0xd0) =
         Merger_Game_Views_BoardItem_BoardItemView2__AttachBehaviourFromPool_object_;
    *(long **)((long)register0x00000008 + -0xc0) = plVar12;
    *(undefined1 **)((long)register0x00000008 + -0xb8) = puVar5;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 1;
    *(long **)((long)register0x00000008 + -0xa8) = plVar4;
    param_3 = unaff_x21;
    param_4 = lVar2;
    if (*(long *)(lVar2 + 0x38) == 0) {
      func_0x03280a18(PTR_DAT_07779740);
      func_0x03280a18(PTR_DAT_0774e558);
      if (*(long *)(lVar2 + 0x38) == 0) {
        func_0x03256878(lVar2);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_07779740 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar1 = func_0x069572f4(unaff_x22,0);
    unaff_x20 = lVar2;
    if (lVar1 != 0) {
      param_3 = (undefined1 *)0x1;
      param_4 = 0;
      puVar5 = (undefined1 *)func_0x06957fd0(lVar1,unaff_x21);
      if (puVar5 != (undefined1 *)0x0) {
        unaff_x20 = func_0x03dc9518(puVar5,**(undefined8 **)(lVar2 + 0x38));
        unaff_x22 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x10);
        if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)PTR_DAT_0774e558);
        }
        param_3 = (undefined1 *)func_0x057a51c4(unaff_x22,0);
        param_4 = 0;
        func_0x068309d0(unaff_x19,unaff_x20,param_3,0,1,0);
        lVar2 = func_0x06fdf130(puVar5,0);
        unaff_x21 = puVar5;
        if (lVar2 != 0) {
          func_0x06fed5b8(lVar2,0);
          return unaff_x20;
        }
      }
    }
    unaff_x30 = Merger_Game_Views_BoardItem_BoardItemView2__AttachBehaviourFromPrefab_object_;
    auVar13 = func_0x03280cac();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xd0);
  } while( true );
}

