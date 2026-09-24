/* Ghidra 12.1.2 native pseudocode; RVA 0x3BD9990; Merger.Game.Views.BoardItem.BoardItemView2.AttachBehaviour<object>; status ok */


/* WARNING: Possible PIC construction at 0x03cd9c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03cd9c1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x03cd9c04) */
/* WARNING: Removing unreachable block (ram,0x03cd9c20) */
/* WARNING: Removing unreachable block (ram,0x03cd9c28) */
/* WARNING: Removing unreachable block (ram,0x03cd9c34) */

ulong Merger_Game_Views_BoardItem_BoardItemView2__AttachBehaviour_object_
                (long *param_1,ulong param_2,long *param_3,ulong param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long *plVar11;
  long *plVar12;
  long unaff_x23;
  undefined *unaff_x24;
  undefined8 unaff_x30;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  do {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x30;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    plVar7 = (long *)param_3[7];
    param_2 = param_2 & 0xffffffff;
    plVar6 = param_3;
    if (plVar7 == (long *)0x0) {
      func_0x03280a18(PTR_DAT_0776dcd8);
      func_0x03280a18(PTR_DAT_07779718);
      func_0x03280a18(PTR_DAT_07779720);
      func_0x03280a18(PTR_DAT_0774e558);
      func_0x03280a18(PTR_DAT_07779728);
      func_0x03280a18(PTR_DAT_07779730);
      func_0x03280a18(PTR_DAT_07779738);
      func_0x03280a18(PTR_DAT_077503b8);
      plVar7 = (long *)param_3[7];
      if (plVar7 == (long *)0x0) {
        func_0x03256878(param_3);
        plVar7 = (long *)param_3[7];
      }
    }
    unaff_x24 = PTR_DAT_0774e558;
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    plVar11 = (long *)param_1[0x11];
    unaff_x23 = *plVar7;
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    plVar7 = (long *)func_0x057a51c4(unaff_x23,0);
    if ((plVar7 == (long *)0x0) ||
       (lVar2 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0)),
       plVar11 == (long *)0x0)) {
LAB_03cd9c4c:
      plVar7 = plVar6;
      uVar4 = 0x3cd9c50;
      auVar13 = func_0x03280cac();
SUB_03cd9c50:
      plVar12 = auVar13._8_8_;
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x70);
      *(undefined8 *)((long)register0x00000008 + -0x70) = uVar4;
      *(long **)((long)register0x00000008 + -0x60) = plVar11;
      *(long **)((long)register0x00000008 + -0x58) = param_3;
      *(ulong *)((long)register0x00000008 + -0x50) = param_2;
      *(long **)((long)register0x00000008 + -0x48) = param_1;
      plVar6 = plVar7;
      uVar9 = param_4;
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
      lVar2 = func_0x069572f4(plVar12,0);
      param_2 = param_4;
      param_3 = plVar7;
      if (lVar2 != 0) {
        plVar6 = (long *)0x1;
        uVar9 = 0;
        plVar7 = (long *)func_0x06957fd0(lVar2,plVar7);
        if (plVar7 != (long *)0x0) {
          param_2 = func_0x03dc9518(plVar7,**(undefined8 **)(param_4 + 0x38));
          plVar12 = *(long **)(*(long *)(param_4 + 0x38) + 0x10);
          if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
            func_0x03280b8c(*(long *)PTR_DAT_0774e558);
          }
          plVar6 = (long *)func_0x057a51c4(plVar12,0);
          uVar9 = 0;
          func_0x068309d0(auVar13._0_8_,param_2,plVar6,0,1,0);
          lVar2 = func_0x06fdf130(plVar7,0);
          param_3 = plVar7;
          if (lVar2 != 0) {
            func_0x06fed5b8(lVar2,0);
            return param_2;
          }
        }
      }
      plVar7 = plVar6;
      uVar4 = 0x3cd9d68;
      auVar14 = func_0x03280cac();
      param_1 = auVar13._0_8_;
    }
    else {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07779720) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_03cd9ac8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_07779720,1);
LAB_03cd9ac8:
      param_4 = puVar3[1];
      plVar6 = (long *)((long)register0x00000008 + -0x38);
      (*(code *)*puVar3)(plVar11,lVar2);
      lVar8 = *(long *)((long)register0x00000008 + -0x38);
      unaff_x23 = lVar2;
      if (lVar8 == 0) {
        plVar11 = *(long **)param_3[7];
        if (*(int *)(*(long *)unaff_x24 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        plVar7 = (long *)func_0x057a51c4(plVar11,0);
        if (plVar7 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
          plVar11 = (long *)func_0x055ea7a0(*(undefined8 *)PTR_DAT_07779728,uVar4,0);
          if (*(int *)(*(long *)PTR_DAT_0776dcd8 + 0xe0) == 0) {
            func_0x03280b8c(*(long *)PTR_DAT_0776dcd8);
          }
          param_4 = *(ulong *)PTR_DAT_07779738;
          plVar6 = (long *)0x0;
          func_0x0556c434(plVar11,*(undefined8 *)PTR_DAT_077503b8,0,param_4,
                          *(undefined8 *)PTR_DAT_07779730,0,0);
          lVar8 = *(long *)((long)register0x00000008 + -0x38);
          if (lVar8 != 0) goto LAB_03cd9b94;
        }
        goto LAB_03cd9c4c;
      }
LAB_03cd9b94:
      if (param_1[0x10] == 0) goto LAB_03cd9c4c;
      unaff_x23 = *(long *)(lVar8 + 0x20);
      auVar14._8_8_ = unaff_x23;
      auVar14._0_8_ = param_1;
      plVar6 = *(long **)PTR_DAT_07779718;
      plVar7 = (long *)func_0x04fe2cfc(param_1[0x10],*(undefined8 *)(lVar8 + 0x18));
      if (*(long *)((long)register0x00000008 + -0x38) == 0) goto LAB_03cd9c4c;
      if (*(int *)(*(long *)((long)register0x00000008 + -0x38) + 0x28) == 1) {
        plVar11 = plVar7;
        if (unaff_x23 == 0) goto LAB_03cd9c4c;
        unaff_x24 = (undefined *)param_1[0x16];
        uVar4 = func_0x06fe368c(unaff_x23,0);
        uVar4 = func_0x055ee6c0(unaff_x24,uVar4,0);
        auVar13._8_8_ = uVar4;
        auVar13._0_8_ = param_1;
        param_4 = *(ulong *)(param_3[7] + 0x18);
        uVar4 = 0x3cd9c04;
        goto SUB_03cd9c50;
      }
      uVar9 = *(ulong *)(param_3[7] + 8);
      uVar4 = 0x3cd9c20;
      plVar12 = plVar7;
    }
    unaff_x22 = auVar14._8_8_;
    *(undefined8 *)(puVar1 + -0x30) = uVar4;
    *(long **)(puVar1 + -0x20) = plVar12;
    *(long **)(puVar1 + -0x18) = param_3;
    *(ulong *)(puVar1 + -0x10) = param_2;
    *(long **)(puVar1 + -8) = param_1;
    param_4 = uVar9;
    if (*(long *)(uVar9 + 0x38) == 0) {
      func_0x03280a18(PTR_DAT_07779748);
      func_0x03280a18(PTR_DAT_0774e4e0);
      func_0x03280a18(PTR_DAT_0774e558);
      if (*(long *)(uVar9 + 0x38) == 0) {
        func_0x03256878(uVar9);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_0774e4e0 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    lVar2 = func_0x03e3cdbc(unaff_x22,plVar7,*(undefined8 *)PTR_DAT_07779748);
    if (lVar2 != 0) {
      uVar5 = func_0x03dc9518(lVar2,**(undefined8 **)(uVar9 + 0x38));
      uVar4 = *(undefined8 *)(*(long *)(uVar9 + 0x38) + 0x10);
      if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)PTR_DAT_0774e558);
      }
      uVar4 = func_0x057a51c4(uVar4,0);
      func_0x068309d0(auVar14._0_8_,uVar5,uVar4,0,1,0);
      return uVar5;
    }
    auVar13 = func_0x03280cac();
    lVar2 = auVar13._8_8_;
    register0x00000008 = (BADSPACEBASE *)(puVar1 + -0x60);
    *(undefined8 *)(puVar1 + -0x50) = 0x3cd9e68;
    *(long **)(puVar1 + -0x48) = plVar7;
    *(ulong *)(puVar1 + -0x40) = uVar9;
    *(long *)(puVar1 + -0x38) = auVar14._0_8_;
    puVar3 = *(undefined8 **)(lVar2 + 0x38);
    if (puVar3 == (undefined8 *)0x0) {
      func_0x03280a18(PTR_DAT_07779750);
      func_0x03280a18(PTR_DAT_0774e558);
      puVar3 = *(undefined8 **)(lVar2 + 0x38);
      if (puVar3 == (undefined8 *)0x0) {
        func_0x03256878(lVar2);
        puVar3 = *(undefined8 **)(lVar2 + 0x38);
      }
    }
    *(undefined8 *)(puVar1 + -0x58) = 0;
    lVar8 = *(long *)(auVar13._0_8_ + 0x90);
    unaff_x21 = *puVar3;
    if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    uVar4 = func_0x057a51c4(unaff_x21,0);
    if (lVar8 != 0) {
      func_0x04fe48b0(lVar8,uVar4,puVar1 + -0x58,*(undefined8 *)PTR_DAT_07779750);
      uVar4 = *(undefined8 *)(puVar1 + -0x58);
      lVar8 = *(long *)(*(long *)(lVar2 + 0x38) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c(lVar8);
      }
      lVar8 = func_0x03280b90(uVar4,lVar8);
      lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = func_0x0325681c(lVar2);
      }
      if (lVar8 != 0) {
        uVar9 = func_0x03280b90(lVar8,lVar2);
        if (uVar9 != 0) {
          return uVar9;
        }
        func_0x03281048(lVar8,lVar2);
      }
      return 0;
    }
    auVar14 = func_0x03280cac();
    lVar8 = auVar14._8_8_;
    param_1 = auVar14._0_8_;
    *(undefined8 *)(puVar1 + -0x80) = 0x3cd9f80;
    *(undefined8 *)(puVar1 + -0x70) = 0;
    *(long *)(puVar1 + -0x68) = lVar2;
    plVar6 = *(long **)(lVar8 + 0x38);
    if (plVar6 == (long *)0x0) {
      func_0x03256878(lVar8);
      plVar6 = *(long **)(lVar8 + 0x38);
    }
    lVar2 = func_0x03280b88(*(undefined8 *)
                             (*param_1 + (ulong)*(ushort *)(*plVar6 + 0x50) * 0x10 + 0x140));
    uVar9 = (**(code **)(lVar2 + 8))(param_1,lVar2);
    if (uVar9 != 0) {
      return uVar9;
    }
    unaff_x20 = *(undefined8 *)(puVar1 + -0x70);
    unaff_x19 = *(undefined8 *)(puVar1 + -0x68);
    param_2 = 1;
    param_3 = *(long **)(*(long *)(lVar8 + 0x38) + 0x10);
    unaff_x30 = *(undefined8 *)(puVar1 + -0x80);
  } while( true );
}

