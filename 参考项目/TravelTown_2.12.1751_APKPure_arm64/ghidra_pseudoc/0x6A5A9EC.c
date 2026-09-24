/* Ghidra 12.1.2 native pseudocode; RVA 0x6A5A9EC; Merger.MergeBoardQueue.Logic.BoardQueueProcessor.DequeueFinished; status ok */


void Merger_MergeBoardQueue_Logic_BoardQueueProcessor__DequeueFinished
               (long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_90 [8];
  ulong uStack_88;
  undefined8 uStack_60;
  
  if ((bRam0000000007e2a61e & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0f10);
    bRam0000000007e2a61e = 1;
  }
  plVar14 = *(long **)(param_1 + 0x10);
  if (plVar14 == (long *)0x0) {
    auVar15 = func_0x03280cac();
    lVar11 = auVar15._8_8_;
    lVar9 = auVar15._0_8_;
    uStack_60 = 0x6b5aa90;
    uVar12 = param_3;
    uVar8 = param_4;
    if ((bRam0000000007e2a620 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777a488);
      func_0x03280a18(PTR_DAT_077c0f10);
      func_0x03280a18(PTR_DAT_078304a8);
      bRam0000000007e2a620 = 1;
    }
    if (lVar11 != 0) {
      func_0x03d1b250(auStack_90,lVar11,*(undefined8 *)PTR_DAT_0777a488);
      plVar14 = *(long **)(lVar9 + 0x10);
      uVar6 = func_0x06b59b14(lVar9);
      if (plVar14 != (long *)0x0) {
        lVar10 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_077c0f10) {
              puVar5 = (undefined8 *)(lVar10 + (long)(*piVar13 + 6) * 0x10 + 0x138);
              goto LAB_06b5ab78;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_077c0f10,6);
LAB_06b5ab78:
        (*(code *)*puVar5)(plVar14,param_3,uStack_88,uVar6,0,param_4 & 0xffffffff,puVar5[1]);
        plVar14 = *(long **)(lVar9 + 0x20);
        uVar12 = uStack_88;
        uVar8 = uVar6;
        if (plVar14 != (long *)0x0) {
          lVar10 = *plVar14;
          lVar9 = *(long *)PTR_DAT_078304a8;
          uVar2 = *(ushort *)(lVar10 + 0x12e);
          uVar12 = (ulong)uVar2;
          if ((int)param_4 == 9) {
            if (uVar2 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar9) {
                  iVar1 = *piVar13 + 1;
LAB_06b5ac38:
                  puVar5 = (undefined8 *)(lVar10 + (long)iVar1 * 0x10 + 0x138);
                  goto LAB_06b5ac3c;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            uVar7 = 1;
          }
          else {
            if (uVar2 != 0) {
              piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar9) {
                  iVar1 = *piVar13;
                  goto LAB_06b5ac38;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            uVar7 = 0;
          }
          puVar5 = (undefined8 *)func_0x03256b10(plVar14,lVar9,uVar7);
LAB_06b5ac3c:
          (*(code *)*puVar5)(plVar14,lVar11,param_3,puVar5[1]);
          return;
        }
      }
    }
    auVar15 = func_0x03280cac();
    puVar4 = PTR_DAT_0774e908;
    puVar3 = PTR_DAT_0774e900;
    if ((bRam0000000007e2a61f & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e908);
      func_0x03280a18(PTR_DAT_0774ea10);
      func_0x03280a18(PTR_DAT_0774e900);
      func_0x03280a18(PTR_DAT_07773688);
      func_0x03280a18(PTR_DAT_077730b8);
      func_0x03280a18(PTR_DAT_07780650);
      bRam0000000007e2a61f = 1;
    }
    lVar9 = func_0x03280ca0(*(undefined8 *)puVar3);
    func_0x04fe1fa4(lVar9,*(undefined8 *)puVar4);
    puVar3 = PTR_DAT_077730b8;
    if (lVar9 != 0) {
      func_0x04fe2d68(lVar9,*(undefined8 *)PTR_DAT_07780650,auVar15._8_8_,
                      *(undefined8 *)PTR_DAT_0774ea10);
      plVar14 = *(long **)(auVar15._0_8_ + 0x18);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar7 = func_0x0624cb20(uVar12 & 0xffffffff,0);
      if (plVar14 != (long *)0x0) {
        lVar11 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07773688) {
              puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 3) * 0x10 + 0x138);
              goto LAB_06b5adbc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_07773688,3);
LAB_06b5adbc:
                    /* WARNING: Could not recover jumptable at 0x06b5adec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar5)(plVar14,uVar7,uVar8 & 0xffffffff,0,8,lVar9,1,puVar5[1]);
        return;
      }
    }
    func_0x03280cac();
    return;
  }
  lVar9 = *plVar14;
  uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_077c0f10) {
        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar13 + 3) * 0x10 + 0x138);
        goto LAB_06b5aa78;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_077c0f10,3);
LAB_06b5aa78:
                    /* WARNING: Could not recover jumptable at 0x06b5aa88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar14,puVar5[1]);
  return;
}

