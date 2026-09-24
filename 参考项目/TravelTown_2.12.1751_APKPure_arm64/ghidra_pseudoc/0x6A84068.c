/* Ghidra 12.1.2 native pseudocode; RVA 0x6A84068; Merger.MergeBoard.Logic.ToolSpawnHandler.GenerateRandomToolItemFromWeights; status ok */


ulong Merger_MergeBoard_Logic_ToolSpawnHandler__GenerateRandomToolItemFromWeights
                (long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  int extraout_w1;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  
  puVar2 = PTR_DAT_07831bb0;
  if ((bRam0000000007e2a777 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077800e8);
    func_0x03280a18(PTR_DAT_0777c248);
    func_0x03280a18(PTR_DAT_077800d0);
    func_0x03280a18(PTR_DAT_0777e510);
    func_0x03280a18(PTR_DAT_07831bd8);
    func_0x03280a18(PTR_DAT_07831be0);
    func_0x03280a18(PTR_DAT_07831bb0);
    func_0x03280a18(PTR_DAT_077800f8);
    func_0x03280a18(PTR_DAT_07780100);
    bRam0000000007e2a777 = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar4 = *(long *)puVar2;
  }
  lVar10 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
  if (lVar10 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar4 = *(long *)puVar2;
    }
    uVar11 = **(undefined8 **)(lVar4 + 0xb8);
    lVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
    func_0x0535ad68(lVar10,uVar11,*(undefined8 *)PTR_DAT_07831bd8,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar5 = lVar10;
    func_0x032809c4(plVar5,lVar10);
    lVar4 = *(long *)puVar2;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_07780100;
  lVar12 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x20);
  if (lVar12 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar4 = *(long *)puVar2;
    }
    uVar11 = **(undefined8 **)(lVar4 + 0xb8);
    lVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077800e8);
    func_0x0535ad68(lVar12,uVar11,*(undefined8 *)PTR_DAT_07831be0,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    *plVar5 = lVar12;
    func_0x032809c4(plVar5,lVar12);
  }
  lVar4 = func_0x03f372e4(param_2,lVar10,lVar12,*(undefined8 *)puVar1);
  plVar5 = *(long **)(param_1 + 0x38);
  if (plVar5 != (long *)0x0) {
    lVar10 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077800d0) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06b8427c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_077800d0,0);
LAB_06b8427c:
    uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((lVar4 != 0) &&
       (iVar3 = func_0x04a44654(lVar4,uVar11,*(undefined8 *)PTR_DAT_077800f8),
       param_3 != (long *)0x0)) {
      lVar4 = *param_3;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0777c248) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06b84300;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_0777c248,0);
LAB_06b84300:
      lVar4 = (*(code *)*puVar6)(param_3,puVar6[1]);
      if (lVar4 != 0) {
        uVar7 = iVar3 - 1;
        uVar11 = *(undefined8 *)PTR_DAT_0777e510;
        if (*(uint *)(lVar4 + 0x18) <= uVar7) {
          func_0x057b8434(0);
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 == 0) {
          func_0x03280cac();
        }
        else if (uVar7 < *(uint *)(lVar4 + 0x18)) {
          return *(ulong *)(lVar4 + (long)(int)uVar7 * 8 + 0x20);
        }
        auVar14 = func_0x03280cb4();
        uVar7 = auVar14._8_4_;
        lVar4 = auVar14._0_8_;
        if (*(uint *)(lVar4 + 0x18) <= uVar7) {
          func_0x057b8434(0);
        }
        lVar10 = *(long *)(lVar4 + 0x10);
        if (lVar10 == 0) {
          func_0x03280cac();
        }
        else if (uVar7 < *(uint *)(lVar10 + 0x18)) {
          puVar6 = (undefined8 *)(lVar10 + (long)(int)uVar7 * 8 + 0x20);
          *puVar6 = uVar11;
          uVar8 = func_0x032809c4(puVar6,uVar11);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          return uVar8;
        }
        auVar13 = func_0x03280cb4();
        lVar4 = *(long *)(auVar13._8_8_ + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = func_0x0325681c(lVar4);
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = func_0x0325681c(lVar4);
        }
        lVar4 = func_0x03280b90(auVar13._0_8_,lVar4);
        if (lVar4 == 0) {
          uVar8 = (ulong)(auVar13._0_8_ == 0);
        }
        else {
          uVar8 = 1;
        }
        return uVar8;
      }
    }
  }
  func_0x03280cac();
  return (ulong)(uint)(1 << (ulong)(extraout_w1 - 1U & 0x1f));
}

