/* Ghidra 12.1.2 native pseudocode; RVA 0x3BD9C50; Merger.Game.Views.BoardItem.BoardItemView2.AttachBehaviourFromPool<object>; status ok */


/* WARNING: Possible PIC construction at 0x03cd9c1c: Changing call to branch */

long Merger_Game_Views_BoardItem_BoardItemView2__AttachBehaviourFromPool_object_
               (undefined8 param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar11;
  long unaff_x23;
  undefined *unaff_x24;
  code *unaff_x30;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
code_r0x03cd9c50:
  plVar11 = auVar14._8_8_;
  *(code **)((long)register0x00000008 + -0x30) = unaff_x30;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x10) = unaff_x20;
  *(long **)((long)register0x00000008 + -8) = unaff_x19;
  plVar6 = param_3;
  lVar7 = param_4;
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
  lVar2 = func_0x069572f4(plVar11,0);
  unaff_x20 = param_4;
  unaff_x21 = param_3;
  if (lVar2 != 0) {
    plVar6 = (long *)0x1;
    lVar7 = 0;
    plVar3 = (long *)func_0x06957fd0(lVar2,param_3);
    if (plVar3 != (long *)0x0) {
      unaff_x20 = func_0x03dc9518(plVar3,**(undefined8 **)(param_4 + 0x38));
      plVar11 = *(long **)(*(long *)(param_4 + 0x38) + 0x10);
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)PTR_DAT_0774e558);
      }
      plVar6 = (long *)func_0x057a51c4(plVar11,0);
      lVar7 = 0;
      func_0x068309d0(auVar14._0_8_,unaff_x20,plVar6,0,1,0);
      lVar2 = func_0x06fdf130(plVar3,0);
      unaff_x21 = plVar3;
      if (lVar2 != 0) {
        func_0x06fed5b8(lVar2,0);
        return unaff_x20;
      }
    }
  }
  uVar12 = 0x3cd9d68;
  auVar13 = func_0x03280cac();
  puVar1 = (undefined1 *)((long)register0x00000008 + -0x30);
  unaff_x19 = auVar14._0_8_;
  do {
    *(undefined8 *)(puVar1 + -0x30) = uVar12;
    *(long **)(puVar1 + -0x20) = plVar11;
    *(long **)(puVar1 + -0x18) = unaff_x21;
    *(long *)(puVar1 + -0x10) = unaff_x20;
    *(long **)(puVar1 + -8) = unaff_x19;
    param_4 = lVar7;
    if (*(long *)(lVar7 + 0x38) == 0) {
      func_0x03280a18(PTR_DAT_07779748);
      func_0x03280a18(PTR_DAT_0774e4e0);
      func_0x03280a18(PTR_DAT_0774e558);
      if (*(long *)(lVar7 + 0x38) == 0) {
        func_0x03256878(lVar7);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar2 = func_0x03e3cdbc(auVar13._8_8_,plVar6,*(undefined8 *)PTR_DAT_07779748);
    if (lVar2 != 0) {
      lVar2 = func_0x03dc9518(lVar2,**(undefined8 **)(lVar7 + 0x38));
      uVar12 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + 0x10);
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)PTR_DAT_0774e558);
      }
      uVar12 = func_0x057a51c4(uVar12,0);
      func_0x068309d0(auVar13._0_8_,lVar2,uVar12,0,1,0);
      return lVar2;
    }
    auVar14 = func_0x03280cac();
    lVar2 = auVar14._8_8_;
    *(undefined8 *)(puVar1 + -0x50) = 0x3cd9e68;
    *(long **)(puVar1 + -0x48) = plVar6;
    *(long *)(puVar1 + -0x40) = lVar7;
    *(long *)(puVar1 + -0x38) = auVar13._0_8_;
    puVar8 = *(undefined8 **)(lVar2 + 0x38);
    if (puVar8 == (undefined8 *)0x0) {
      func_0x03280a18(PTR_DAT_07779750);
      func_0x03280a18(PTR_DAT_0774e558);
      puVar8 = *(undefined8 **)(lVar2 + 0x38);
      if (puVar8 == (undefined8 *)0x0) {
        func_0x03256878(lVar2);
        puVar8 = *(undefined8 **)(lVar2 + 0x38);
      }
    }
    *(undefined8 *)(puVar1 + -0x58) = 0;
    lVar7 = *(long *)(auVar14._0_8_ + 0x90);
    uVar12 = *puVar8;
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar4 = func_0x057a51c4(uVar12,0);
    if (lVar7 != 0) {
      func_0x04fe48b0(lVar7,uVar4,puVar1 + -0x58,*(undefined8 *)PTR_DAT_07779750);
      uVar12 = *(undefined8 *)(puVar1 + -0x58);
      lVar7 = *(long *)(*(long *)(lVar2 + 0x38) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x0325681c(lVar7);
      }
      lVar7 = func_0x03280b90(uVar12,lVar7);
      lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = func_0x0325681c(lVar2);
      }
      if (lVar7 != 0) {
        lVar5 = func_0x03280b90(lVar7,lVar2);
        if (lVar5 != 0) {
          return lVar5;
        }
        func_0x03281048(lVar7,lVar2);
      }
      return 0;
    }
    auVar14 = func_0x03280cac();
    lVar7 = auVar14._8_8_;
    unaff_x19 = auVar14._0_8_;
    *(undefined8 *)(puVar1 + -0x80) = 0x3cd9f80;
    *(undefined8 *)(puVar1 + -0x70) = 0;
    *(long *)(puVar1 + -0x68) = lVar2;
    plVar6 = *(long **)(lVar7 + 0x38);
    if (plVar6 == (long *)0x0) {
      func_0x03256878(lVar7);
      plVar6 = *(long **)(lVar7 + 0x38);
    }
    lVar2 = func_0x03280b88(*(undefined8 *)
                             (*unaff_x19 + (ulong)*(ushort *)(*plVar6 + 0x50) * 0x10 + 0x140));
    lVar2 = (**(code **)(lVar2 + 8))(unaff_x19,lVar2);
    if (lVar2 != 0) {
      return lVar2;
    }
    unaff_x21 = *(long **)(*(long *)(lVar7 + 0x38) + 0x10);
    register0x00000008 = (BADSPACEBASE *)(puVar1 + -0xa0);
    *(undefined8 *)(puVar1 + -0xa0) = *(undefined8 *)(puVar1 + -0x80);
    *(undefined **)(puVar1 + -0x90) = unaff_x24;
    *(long *)(puVar1 + -0x88) = unaff_x23;
    *(long *)(puVar1 + -0x80) = auVar13._8_8_;
    *(undefined8 *)(puVar1 + -0x78) = uVar12;
    *(undefined8 *)(puVar1 + -0x70) = *(undefined8 *)(puVar1 + -0x70);
    *(undefined8 *)(puVar1 + -0x68) = *(undefined8 *)(puVar1 + -0x68);
    plVar6 = (long *)unaff_x21[7];
    unaff_x20 = 1;
    param_3 = unaff_x21;
    if (plVar6 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_0776dcd8);
      func_0x03280a18(PTR_DAT_07779718);
      func_0x03280a18(PTR_DAT_07779720);
      func_0x03280a18(PTR_DAT_0774e558);
      func_0x03280a18(PTR_DAT_07779728);
      func_0x03280a18(PTR_DAT_07779730);
      func_0x03280a18(PTR_DAT_07779738);
      func_0x03280a18(PTR_DAT_077503b8);
      plVar6 = (long *)unaff_x21[7];
      if (plVar6 == (long *)0x0) {
        func_0x03256878(unaff_x21);
        plVar6 = (long *)unaff_x21[7];
      }
    }
    unaff_x24 = PTR_DAT_0774e558;
    *(undefined8 *)(puVar1 + -0x98) = 0;
    unaff_x22 = (long *)unaff_x19[0x11];
    unaff_x23 = *plVar6;
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    plVar6 = (long *)func_0x057a51c4(unaff_x23,0);
    if ((plVar6 == (long *)0x0) ||
       (lVar7 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
       unaff_x22 == (long *)0x0)) goto LAB_03cd9c4c;
    lVar2 = *unaff_x22;
    uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07779720) {
          puVar8 = (undefined8 *)(lVar2 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_03cd9ac8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)func_0x03256b10(unaff_x22,*(long *)PTR_DAT_07779720,1);
LAB_03cd9ac8:
    param_4 = puVar8[1];
    param_3 = (long *)(puVar1 + -0x98);
    (*(code *)*puVar8)(unaff_x22,lVar7);
    lVar2 = *(long *)(puVar1 + -0x98);
    unaff_x23 = lVar7;
    if (lVar2 == 0) {
      unaff_x22 = *(long **)unaff_x21[7];
      if (*(int *)(*(long *)unaff_x24 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      plVar6 = (long *)func_0x057a51c4(unaff_x22,0);
      if (plVar6 == (long *)0x0) goto LAB_03cd9c4c;
      uVar12 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      unaff_x22 = (long *)func_0x055ea7a0(*(undefined8 *)PTR_DAT_07779728,uVar12,0);
      if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
      }
      param_4 = *(long *)PTR_DAT_07779738;
      param_3 = (long *)0x0;
      func_0x0556c434(unaff_x22,*(undefined8 *)PTR_DAT_077503b8,0,param_4,
                      *(undefined8 *)PTR_DAT_07779730,0,0);
      lVar2 = *(long *)(puVar1 + -0x98);
      if (lVar2 == 0) goto LAB_03cd9c4c;
    }
    if (unaff_x19[0x10] == 0) goto LAB_03cd9c4c;
    unaff_x23 = *(long *)(lVar2 + 0x20);
    auVar13._8_8_ = unaff_x23;
    auVar13._0_8_ = unaff_x19;
    param_3 = *(long **)PTR_DAT_07779718;
    plVar6 = (long *)func_0x04fe2cfc(unaff_x19[0x10],*(undefined8 *)(lVar2 + 0x18));
    if (*(long *)(puVar1 + -0x98) == 0) goto LAB_03cd9c4c;
    if (*(int *)(*(long *)(puVar1 + -0x98) + 0x28) == 1) break;
    lVar7 = *(long *)(unaff_x21[7] + 8);
    uVar12 = 0x3cd9c20;
    puVar1 = puVar1 + -0xa0;
    plVar11 = plVar6;
  } while( true );
  unaff_x22 = plVar6;
  if (unaff_x23 != 0) {
    lVar7 = unaff_x19[0x16];
    uVar12 = func_0x06fe368c(unaff_x23,0);
    uVar12 = func_0x055ee6c0(lVar7,uVar12,0);
    lVar7 = Merger_Game_Views_BoardItem_BoardItemView2__AttachBehaviourFromPool_object_
                      (unaff_x19,uVar12,plVar6,*(undefined8 *)(unaff_x21[7] + 0x18));
    func_0x0683105c(unaff_x19,0);
    return lVar7;
  }
LAB_03cd9c4c:
  unaff_x30 = Merger_Game_Views_BoardItem_BoardItemView2__AttachBehaviourFromPool_object_;
  auVar14 = func_0x03280cac();
  goto code_r0x03cd9c50;
}

