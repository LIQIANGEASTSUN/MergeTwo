/* Ghidra 12.1.2 native pseudocode; RVA 0x6A58000; Merger.MergeBoardQueue.Services.MergeBoardQueueOperationTrackingService.TrackEnqueueItemOperation; status ok */


void Merger_MergeBoardQueue_Services_MergeBoardQueueOperationTrackingService__TrackEnqueueItemOperation
               (long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  undefined8 unaff_x19;
  long *plVar17;
  undefined *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined *unaff_x28;
  ulong unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar18 [16];
  
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = param_1;
  if ((bRam0000000007e2a605 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c1e10);
    bRam0000000007e2a605 = 1;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  puVar12 = *(undefined **)PTR_DAT_077c1e10;
  puVar6 = (undefined1 *)register0x00000008;
  do {
    plVar17 = auVar18._0_8_;
    *(ulong *)(puVar6 + -0x60) = unaff_x29;
    *(undefined8 *)(puVar6 + -0x58) = unaff_x30;
    *(undefined **)(puVar6 + -0x50) = unaff_x28;
    *(undefined8 *)(puVar6 + -0x48) = unaff_x27;
    *(undefined8 *)(puVar6 + -0x40) = unaff_x26;
    *(undefined **)(puVar6 + -0x38) = unaff_x25;
    *(undefined **)(puVar6 + -0x30) = unaff_x24;
    *(long **)(puVar6 + -0x28) = unaff_x23;
    *(undefined8 *)(puVar6 + -0x20) = unaff_x22;
    *(undefined8 *)(puVar6 + -0x18) = unaff_x21;
    *(undefined **)(puVar6 + -0x10) = unaff_x20;
    *(undefined8 *)(puVar6 + -8) = unaff_x19;
    unaff_x23 = (long *)0x7e2a000;
    plVar11 = param_3;
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
    lVar7 = 0;
    unaff_x24 = puVar12;
    if (auVar18._8_8_ != 0) {
      func_0x03d1b250(puVar6 + -0x90,auVar18._8_8_,*(undefined8 *)PTR_DAT_0777a488);
      unaff_x23 = *(long **)(puVar6 + -0x88);
      unaff_x25 = *(undefined **)(puVar6 + -0x80);
      unaff_x26 = *(undefined8 *)(puVar6 + -0x78);
      uVar1 = *(uint *)(puVar6 + -0x70);
      unaff_x29 = (ulong)uVar1;
      unaff_x27 = *(undefined8 *)(puVar6 + -0x68);
      lVar7 = func_0x03280ca0(*(undefined8 *)puVar4);
      func_0x06b9aecc(lVar7,0);
      unaff_x28 = puVar4;
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)PTR_DAT_0777e5f8;
        func_0x032809c4();
        puVar5 = PTR_DAT_077c1e18;
        puVar4 = PTR_DAT_0777aa98;
        if (param_3 != (long *)0x0) {
          lVar13 = *param_3;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07779820) {
                puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_06b58244;
              }
              uVar14 = uVar14 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
          }
          plVar11 = (long *)0x0;
          puVar8 = (undefined8 *)func_0x03256b10(param_3);
LAB_06b58244:
          uVar9 = (*(code *)*puVar8)(param_3,puVar8[1]);
          *(undefined8 *)(lVar7 + 0x28) = uVar9;
          func_0x032809c4();
          *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)puVar5;
          func_0x032809c4();
          lVar13 = func_0x03280ca0(*(undefined8 *)puVar4);
          func_0x06a30df4(lVar13,0);
          puVar3 = PTR_DAT_0777a4a8;
          puVar2 = PTR_DAT_0777a4a0;
          param_3 = (long *)0x0;
          unaff_x20 = puVar5;
          unaff_x28 = puVar4;
          if (lVar13 != 0) {
            *(long *)(lVar13 + 0x30) = (long)unaff_x23;
            func_0x032809c4((long *)(lVar13 + 0x30),unaff_x23);
            *(undefined8 *)(lVar13 + 0x38) = unaff_x27;
            *(long *)(lVar7 + 0x20) = lVar13;
            func_0x032809c4((long *)(lVar7 + 0x20),lVar13);
            *(long *)(lVar7 + 0x30) = (long)unaff_x23;
            func_0x032809c4((long *)(lVar7 + 0x30),unaff_x23);
            *(undefined **)(lVar7 + 0x38) = unaff_x25;
            *(undefined8 *)(lVar7 + 0x68) = unaff_x26;
            *(undefined8 *)(puVar6 + -0x90) = *(undefined8 *)puVar2;
            *(undefined8 *)(puVar6 + -0x88) = 0xffffffffffffffff;
            *(uint *)(puVar6 + -0x80) = uVar1;
            uVar9 = func_0x057cd6e4(puVar6 + -0x90,0);
            *(undefined8 *)(lVar7 + 0x60) = uVar9;
            func_0x032809c4();
            uVar9 = func_0x03280ca0(*(undefined8 *)puVar3);
            plVar11 = (long *)0x0;
            func_0x06b9aed4(uVar9,0xffffffff);
            *(undefined8 *)(lVar7 + 0x98) = uVar9;
            func_0x032809c4((undefined8 *)(lVar7 + 0x98),uVar9);
            param_3 = (long *)plVar17[5];
            unaff_x23 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_077c1e00);
            func_0x04143c38(unaff_x23,*(undefined8 *)PTR_DAT_077c1df8);
            unaff_x20 = puVar2;
            unaff_x28 = puVar3;
            if (unaff_x23 != (long *)0x0) {
              lVar13 = unaff_x23[2];
              lVar15 = *(long *)PTR_DAT_077c1de8;
              *(int *)((long)unaff_x23 + 0x1c) = *(int *)((long)unaff_x23 + 0x1c) + 1;
              if (lVar13 != 0) {
                uVar1 = *(uint *)(unaff_x23 + 3);
                if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                  *(uint *)(unaff_x23 + 3) = uVar1 + 1;
                  plVar10 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar10 = lVar7;
                  func_0x032809c4(plVar10,lVar7);
                }
                else {
                  plVar11 = *(long **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
                  func_0x0414446c(unaff_x23,lVar7);
                }
                puVar5 = PTR_DAT_077c1dc0;
                puVar4 = PTR_DAT_077c1db8;
                unaff_x20 = puVar12;
                if (param_3 != (long *)0x0) {
                  lVar7 = *param_3;
                  lVar13 = *(long *)PTR_DAT_077c1dd8;
                  uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar14 != 0) {
                    piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x20)) {
                        lVar7 = lVar7 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x50)) *
                                        0x10 + 0x138;
                        goto LAB_06b5842c;
                      }
                      uVar14 = uVar14 - 1;
                      piVar16 = piVar16 + 4;
                    } while (uVar14 != 0);
                  }
                  lVar7 = func_0x03256b10(param_3);
LAB_06b5842c:
                  lVar7 = func_0x03280b88(*(undefined8 *)(lVar7 + 8),lVar13);
                  plVar11 = unaff_x23;
                  lVar7 = (**(code **)(lVar7 + 8))(param_3,puVar12,unaff_x23,0,lVar7);
                  plVar17 = (long *)plVar17[5];
                  unaff_x20 = (undefined *)func_0x03280ca0(*(undefined8 *)puVar4);
                  func_0x04143c38(unaff_x20,*(undefined8 *)puVar5);
                  unaff_x24 = puVar5;
                  unaff_x25 = puVar4;
                  if (unaff_x20 != (undefined *)0x0) {
                    lVar13 = *(long *)(unaff_x20 + 0x10);
                    lVar15 = *(long *)PTR_DAT_077c1de0;
                    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                    if (lVar13 != 0) {
                      uVar1 = *(uint *)(unaff_x20 + 0x18);
                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                        plVar10 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar10 = lVar7;
                        func_0x032809c4(plVar10,lVar7);
                      }
                      else {
                        plVar11 = *(long **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
                        func_0x0414446c(unaff_x20,lVar7);
                      }
                      if (plVar17 != (long *)0x0) {
                        lVar7 = *plVar17;
                        uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
                        if (uVar14 == 0) goto LAB_06b58518;
                        piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                        break;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    auVar18 = func_0x03280cac();
    *(undefined8 *)(puVar6 + -0xc0) = 0x6b5856c;
    *(long **)(puVar6 + -0xb0) = param_3;
    *(long *)(puVar6 + -0xa8) = lVar7;
    *(undefined **)(puVar6 + -0xa0) = unaff_x20;
    *(long **)(puVar6 + -0x98) = plVar17;
    if ((bRam0000000007e2a606 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07811888);
      bRam0000000007e2a606 = 1;
    }
    if (*(long *)(auVar18._0_8_ + 0x28) == 0) {
      return;
    }
    puVar12 = *(undefined **)PTR_DAT_07811888;
    unaff_x20 = *(undefined **)(puVar6 + -0xa0);
    unaff_x19 = *(undefined8 *)(puVar6 + -0x98);
    unaff_x22 = *(undefined8 *)(puVar6 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar6 + -0xa8);
    unaff_x30 = *(undefined8 *)(puVar6 + -0xc0);
    puVar6 = puVar6 + -0x90;
    param_3 = plVar11;
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_07830308) {
      puVar8 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_06b58534;
    }
  }
LAB_06b58518:
  puVar8 = (undefined8 *)func_0x03256b10(plVar17,*(long *)PTR_DAT_07830308,0);
LAB_06b58534:
  (*(code *)*puVar8)(plVar17,unaff_x20,0,puVar8[1]);
  return;
}

