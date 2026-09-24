/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7C02C; Merger.MergeBoard.Services.MergeBoardOperationTrackingService.CreateClientMessageNotification; status ok */


long Merger_MergeBoard_Services_MergeBoardOperationTrackingService__CreateClientMessageNotification
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  
  puVar2 = PTR_DAT_077ce588;
  if ((bRam0000000007e2a72c & 1) == 0) {
    func_0x03280a18(PTR_DAT_077ce588);
    bRam0000000007e2a72c = 1;
  }
  lVar4 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x06a30c58(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = param_2;
    func_0x032809c4((undefined8 *)(lVar4 + 0x10),param_2);
    *(undefined8 *)(lVar4 + 0x18) = param_3;
    func_0x032809c4((undefined8 *)(lVar4 + 0x18),param_3);
    *(undefined8 *)(lVar4 + 0x20) = param_4;
    func_0x032809c4((undefined8 *)(lVar4 + 0x20),param_4);
    *(undefined8 *)(lVar4 + 0x28) = param_5;
    func_0x032809c4((undefined8 *)(lVar4 + 0x28),param_5);
    return lVar4;
  }
  auVar12 = func_0x03280cac();
  if ((bRam0000000007e2a72d & 1) == 0) {
    func_0x03280a18(PTR_DAT_077797d8);
    bRam0000000007e2a72d = 1;
  }
  plVar9 = *(long **)(auVar12._0_8_ + 0x30);
  if (plVar9 == (long *)0x0) {
    auVar12 = func_0x03280cac();
    puVar2 = PTR_DAT_078318d0;
    lVar4 = auVar12._8_8_;
    if ((bRam0000000007e2a72e & 1) == 0) {
      func_0x03280a18(PTR_DAT_078318d0);
      func_0x03280a18(PTR_DAT_078318d8);
      bRam0000000007e2a72e = 1;
    }
    uVar7 = func_0x03ce83d8(*(undefined8 *)(auVar12._0_8_ + 0x58),*(undefined8 *)puVar2);
    puVar2 = PTR_DAT_078318d8;
    if ((uVar7 & 1) == 0) {
      lVar10 = *(long *)(auVar12._0_8_ + 0x58);
      if (lVar10 == 0) {
LAB_06b7c2a4:
        lVar4 = func_0x03280cac();
        puVar2 = PTR_DAT_07811860;
        if ((bRam0000000007e2a72f & 1) == 0) {
          func_0x03280a18(PTR_DAT_07811860);
          bRam0000000007e2a72f = 1;
        }
        lVar6 = *(long *)puVar2;
        lVar10 = *(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x48);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = func_0x0325681c(lVar10);
        }
        uVar3 = func_0x03280ca0(lVar10);
        func_0x04d176c4(uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x50));
        *(undefined8 *)(lVar4 + 0x28) = uVar3;
        func_0x032809c4((undefined8 *)(lVar4 + 0x28),uVar3);
        return lVar4;
      }
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (0 < (int)uVar1) {
        uVar11 = 0;
        do {
          if (uVar1 <= uVar11) {
            func_0x03280cb4();
            goto LAB_06b7c2a4;
          }
          plVar9 = *(long **)(lVar10 + (long)(int)uVar11 * 8 + 0x20);
          if (plVar9 == (long *)0x0) goto LAB_06b7c2a4;
          lVar6 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_06b7c268;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)func_0x03256b10(plVar9,*(long *)puVar2,0);
LAB_06b7c268:
          lVar4 = (*(code *)*puVar5)(plVar9,lVar4,puVar5[1]);
          uVar1 = *(uint *)(lVar10 + 0x18);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar1);
      }
    }
    return lVar4;
  }
  lVar4 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_077797d8) {
        puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_06b7c174;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_077797d8,0);
LAB_06b7c174:
                    /* WARNING: Could not recover jumptable at 0x06b7c188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar4 = (*(code *)*puVar5)(plVar9,auVar12._8_8_,puVar5[1]);
  return lVar4;
}

