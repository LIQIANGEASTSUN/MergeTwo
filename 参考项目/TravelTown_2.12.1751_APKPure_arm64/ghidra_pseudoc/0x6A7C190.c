/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7C190; Merger.MergeBoard.Services.MergeBoardOperationTrackingService.ApplyEnhancers; status ok */


long Merger_MergeBoard_Services_MergeBoardOperationTrackingService__ApplyEnhancers
               (long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  
  puVar2 = PTR_DAT_078318d0;
  if ((bRam0000000007e2a72e & 1) == 0) {
    func_0x03280a18(PTR_DAT_078318d0);
    func_0x03280a18(PTR_DAT_078318d8);
    bRam0000000007e2a72e = 1;
  }
  uVar4 = func_0x03ce83d8(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_078318d8;
  if ((uVar4 & 1) == 0) {
    lVar10 = *(long *)(param_1 + 0x58);
    if (lVar10 == 0) {
LAB_06b7c2a4:
      lVar10 = func_0x03280cac();
      puVar2 = PTR_DAT_07811860;
      if ((bRam0000000007e2a72f & 1) == 0) {
        func_0x03280a18(PTR_DAT_07811860);
        bRam0000000007e2a72f = 1;
      }
      lVar6 = *(long *)puVar2;
      lVar7 = *(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x48);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x0325681c(lVar7);
      }
      uVar3 = func_0x03280ca0(lVar7);
      func_0x04d176c4(uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x50));
      *(undefined8 *)(lVar10 + 0x28) = uVar3;
      func_0x032809c4((undefined8 *)(lVar10 + 0x28),uVar3);
      return lVar10;
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
        lVar7 = *plVar9;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06b7c268;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar9,*(long *)puVar2,0);
LAB_06b7c268:
        param_2 = (*(code *)*puVar5)(plVar9,param_2,puVar5[1]);
        uVar1 = *(uint *)(lVar10 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar1);
    }
  }
  return param_2;
}

