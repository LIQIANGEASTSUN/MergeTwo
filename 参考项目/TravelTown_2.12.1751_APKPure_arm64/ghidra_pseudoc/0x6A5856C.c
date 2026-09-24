/* Ghidra 12.1.2 native pseudocode; RVA 0x6A5856C; Merger.MergeBoardQueue.Services.MergeBoardQueueOperationTrackingService.TrackEnqueueItemOperationFromUndoSell; status ok */


void Merger_MergeBoardQueue_Services_MergeBoardQueueOperationTrackingService__TrackEnqueueItemOperationFromUndoSell
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  long *unaff_x19;
  undefined *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined *unaff_x28;
  ulong unaff_x29;
  code *unaff_x30;
  undefined1 auVar16 [16];
  
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  do {
    plVar15 = auVar16._0_8_;
    *(code **)((long)register0x00000008 + -0x30) = unaff_x30;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined **)((long)register0x00000008 + -0x10) = unaff_x20;
    *(long **)((long)register0x00000008 + -8) = unaff_x19;
    if ((bRam0000000007e2a606 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07811888);
      bRam0000000007e2a606 = 1;
    }
    if (plVar15[5] == 0) {
      return;
    }
    puVar10 = *(undefined **)PTR_DAT_07811888;
    unaff_x20 = *(undefined **)((long)register0x00000008 + -0x10);
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined **)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x38) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined **)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    unaff_x23 = (long *)0x7e2a000;
    plVar9 = param_3;
    if ((bRam0000000007e2a607 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777a488);
      func_0x03280a18(PTR_DAT_0777aa98);
      func_0x03280a18(PTR_DAT_077c1dd8);
      func_0x03280a18(PTR_DAT_07830308);
      func_0x03280a18(PTR_DAT_07779820);
      func_0x03280a18(PTR_DAT_0777a4a0);
      func_0x03280a18(PTR_DAT_077c1de0);
      func_0x03280a18(PTR_DAT_077c1de8);
      func_0x03280a18(PTR_DAT_077c1df8);
      func_0x03280a18(PTR_DAT_077c1dc0);
      func_0x03280a18(PTR_DAT_077c1e00);
      func_0x03280a18(PTR_DAT_077c1db8);
      func_0x03280a18(PTR_DAT_07830300);
      func_0x03280a18(PTR_DAT_0777a4a8);
      func_0x03280a18(PTR_DAT_0777e5f8);
      func_0x03280a18(PTR_DAT_077c1e18);
      bRam0000000007e2a607 = 1;
    }
    puVar4 = PTR_DAT_07830300;
    unaff_x21 = 0;
    unaff_x22 = param_3;
    unaff_x24 = puVar10;
    if (auVar16._8_8_ != 0) {
      func_0x03d1b250((undefined1 *)((long)register0x00000008 + -0x90),auVar16._8_8_,
                      *(undefined8 *)PTR_DAT_0777a488);
      unaff_x23 = *(long **)((long)register0x00000008 + -0x88);
      unaff_x25 = *(undefined **)((long)register0x00000008 + -0x80);
      unaff_x26 = *(undefined8 *)((long)register0x00000008 + -0x78);
      uVar1 = *(uint *)((long)register0x00000008 + -0x70);
      unaff_x29 = (ulong)uVar1;
      unaff_x27 = *(undefined8 *)((long)register0x00000008 + -0x68);
      unaff_x21 = func_0x03280ca0(*(undefined8 *)puVar4);
      func_0x06b9aecc(unaff_x21,0);
      unaff_x28 = puVar4;
      if (unaff_x21 != 0) {
        *(undefined8 *)(unaff_x21 + 0x10) = *(undefined8 *)PTR_DAT_0777e5f8;
        func_0x032809c4();
        puVar5 = PTR_DAT_077c1e18;
        puVar4 = PTR_DAT_0777aa98;
        if (param_3 != (long *)0x0) {
          lVar11 = *param_3;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07779820) {
                puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_06b58244;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          plVar9 = (long *)0x0;
          puVar6 = (undefined8 *)func_0x03256b10(param_3);
LAB_06b58244:
          uVar7 = (*(code *)*puVar6)(param_3,puVar6[1]);
          *(undefined8 *)(unaff_x21 + 0x28) = uVar7;
          func_0x032809c4();
          *(undefined8 *)(unaff_x21 + 0x18) = *(undefined8 *)puVar5;
          func_0x032809c4();
          lVar11 = func_0x03280ca0(*(undefined8 *)puVar4);
          func_0x06a30df4(lVar11,0);
          puVar3 = PTR_DAT_0777a4a8;
          puVar2 = PTR_DAT_0777a4a0;
          unaff_x22 = (long *)0x0;
          unaff_x20 = puVar5;
          unaff_x28 = puVar4;
          if (lVar11 != 0) {
            *(long *)(lVar11 + 0x30) = (long)unaff_x23;
            func_0x032809c4((long *)(lVar11 + 0x30),unaff_x23);
            *(undefined8 *)(lVar11 + 0x38) = unaff_x27;
            *(long *)(unaff_x21 + 0x20) = lVar11;
            func_0x032809c4((long *)(unaff_x21 + 0x20),lVar11);
            *(long *)(unaff_x21 + 0x30) = (long)unaff_x23;
            func_0x032809c4((long *)(unaff_x21 + 0x30),unaff_x23);
            *(undefined **)(unaff_x21 + 0x38) = unaff_x25;
            *(undefined8 *)(unaff_x21 + 0x68) = unaff_x26;
            *(undefined8 *)((long)register0x00000008 + -0x90) = *(undefined8 *)puVar2;
            *(undefined8 *)((long)register0x00000008 + -0x88) = 0xffffffffffffffff;
            *(uint *)((long)register0x00000008 + -0x80) = uVar1;
            uVar7 = func_0x057cd6e4((undefined1 *)((long)register0x00000008 + -0x90),0);
            *(undefined8 *)(unaff_x21 + 0x60) = uVar7;
            func_0x032809c4();
            uVar7 = func_0x03280ca0(*(undefined8 *)puVar3);
            plVar9 = (long *)0x0;
            func_0x06b9aed4(uVar7,0xffffffff);
            *(undefined8 *)(unaff_x21 + 0x98) = uVar7;
            func_0x032809c4((undefined8 *)(unaff_x21 + 0x98),uVar7);
            unaff_x22 = (long *)plVar15[5];
            unaff_x23 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077c1e00);
            func_0x04143c38(unaff_x23,*(undefined8 *)PTR_DAT_077c1df8);
            unaff_x20 = puVar2;
            unaff_x28 = puVar3;
            if (unaff_x23 != (long *)0x0) {
              lVar11 = unaff_x23[2];
              lVar13 = *(long *)PTR_DAT_077c1de8;
              *(int *)((long)unaff_x23 + 0x1c) = *(int *)((long)unaff_x23 + 0x1c) + 1;
              if (lVar11 != 0) {
                uVar1 = *(uint *)(unaff_x23 + 3);
                if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(unaff_x23 + 3) = uVar1 + 1;
                  plVar8 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar8 = unaff_x21;
                  func_0x032809c4(plVar8,unaff_x21);
                }
                else {
                  plVar9 = *(long **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
                  func_0x0414446c(unaff_x23,unaff_x21);
                }
                puVar5 = PTR_DAT_077c1dc0;
                puVar4 = PTR_DAT_077c1db8;
                unaff_x20 = puVar10;
                if (unaff_x22 != (long *)0x0) {
                  lVar11 = *unaff_x22;
                  lVar13 = *(long *)PTR_DAT_077c1dd8;
                  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar12 != 0) {
                    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)(lVar13 + 0x20)) {
                        lVar11 = lVar11 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar13 + 0x50)) *
                                          0x10 + 0x138;
                        goto LAB_06b5842c;
                      }
                      uVar12 = uVar12 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar12 != 0);
                  }
                  lVar11 = func_0x03256b10(unaff_x22);
LAB_06b5842c:
                  lVar11 = func_0x03280b88(*(undefined8 *)(lVar11 + 8),lVar13);
                  plVar9 = unaff_x23;
                  unaff_x21 = (**(code **)(lVar11 + 8))(unaff_x22,puVar10,unaff_x23,0,lVar11);
                  plVar15 = (long *)plVar15[5];
                  unaff_x20 = (undefined *)func_0x03280ca0(*(undefined8 *)puVar4);
                  func_0x04143c38(unaff_x20,*(undefined8 *)puVar5);
                  unaff_x24 = puVar5;
                  unaff_x25 = puVar4;
                  if (unaff_x20 != (undefined *)0x0) {
                    lVar11 = *(long *)(unaff_x20 + 0x10);
                    lVar13 = *(long *)PTR_DAT_077c1de0;
                    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                    if (lVar11 != 0) {
                      uVar1 = *(uint *)(unaff_x20 + 0x18);
                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                        plVar8 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar8 = unaff_x21;
                        func_0x032809c4(plVar8,unaff_x21);
                      }
                      else {
                        plVar9 = *(long **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70);
                        func_0x0414446c(unaff_x20,unaff_x21);
                      }
                      if (plVar15 != (long *)0x0) break;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    unaff_x30 = 
    Merger_MergeBoardQueue_Services_MergeBoardQueueOperationTrackingService__TrackEnqueueItemOperationFromUndoSell
    ;
    auVar16 = func_0x03280cac();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
    param_3 = plVar9;
    unaff_x19 = plVar15;
  } while( true );
  lVar11 = *plVar15;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_07830308) {
        puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_06b58534;
      }
      uVar12 = uVar12 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)func_0x03256b10(plVar15,*(long *)PTR_DAT_07830308,0);
LAB_06b58534:
  (*(code *)*puVar6)(plVar15,unaff_x20,0,puVar6[1]);
  return;
}

