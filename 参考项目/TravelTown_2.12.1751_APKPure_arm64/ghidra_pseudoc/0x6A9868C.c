/* Ghidra 12.1.2 native pseudocode; RVA 0x6A9868C; Merger.MergeBoard.Extensions.InteractionComponentExtensions.FindReadyCombinations; status ok */


/* WARNING: Removing unreachable block (ram,0x06b988bc) */

undefined1  [16]
Merger_MergeBoard_Extensions_InteractionComponentExtensions__FindReadyCombinations
          (long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar3 = PTR_DAT_077cf4f0;
  puVar2 = PTR_DAT_077cf4e8;
  lVar13 = 0x7e2a000;
  if ((bRam0000000007e2a825 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07750ca0);
    func_0x03280a18(PTR_DAT_077cd970);
    func_0x03280a18(PTR_DAT_077cd978);
    func_0x03280a18(PTR_DAT_07750ca8);
    func_0x03280a18(PTR_DAT_07750cb0);
    func_0x03280a18(PTR_DAT_077cd980);
    func_0x03280a18(PTR_DAT_077e6518);
    func_0x03280a18(PTR_DAT_07750cc0);
    func_0x03280a18(PTR_DAT_077cd9a0);
    func_0x03280a18(PTR_DAT_0777de68);
    func_0x03280a18(PTR_DAT_0774f350);
    func_0x03280a18(PTR_DAT_077cf4e8);
    func_0x03280a18(PTR_DAT_07751a50);
    func_0x03280a18(PTR_DAT_077cf4f0);
    func_0x03280a18(PTR_DAT_0774ecb8);
    bRam0000000007e2a825 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  auVar15._0_8_ = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x04143c38(auVar15._0_8_,*(undefined8 *)puVar2);
  puVar6 = PTR_DAT_077cd978;
  puVar5 = PTR_DAT_0777de68;
  puVar4 = PTR_DAT_07750cc0;
  puVar3 = PTR_DAT_07750ca8;
  puVar2 = PTR_DAT_0774f350;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_06b989ec;
  func_0x04145068(&uStack_b8,*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_077cd9a0);
  uStack_78 = uStack_b0;
  uStack_80 = uStack_b8;
  lStack_70 = lStack_a8;
  while (uVar8 = func_0x051159b4(&uStack_80,*(undefined8 *)puVar6), lVar7 = lStack_70,
        (uVar8 & 1) != 0) {
    if (lStack_70 == 0) goto LAB_06b989d0;
    lVar13 = func_0x06b284a4(lStack_70,0);
    lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0774ecb8);
    func_0x04143d60(lVar9,lVar13,*(undefined8 *)puVar2);
    if (param_2 == 0) goto LAB_06b989d4;
    func_0x04145068(&uStack_b8,param_2,*(undefined8 *)puVar4);
    uStack_98 = uStack_b0;
    uStack_a0 = uStack_b8;
    lStack_90 = lStack_a8;
    while (uVar8 = func_0x051159b4(&uStack_a0,*(undefined8 *)puVar3), (uVar8 & 1) != 0) {
      if (lVar9 == 0) {
        auVar16 = func_0x03280cac();
        goto LAB_06b989f0;
      }
      func_0x04145af8(lVar9,lStack_90,*(undefined8 *)puVar5);
    }
    lVar13 = 0;
    func_0x051159b0(&uStack_a0,*(undefined8 *)PTR_DAT_07750ca0);
    if (lVar9 == 0) goto LAB_06b989e0;
    if (*(int *)(lVar9 + 0x18) == 0) {
      if (auVar15._0_8_ == 0) goto LAB_06b989e4;
      lVar9 = *(long *)(auVar15._0_8_ + 0x10);
      lVar12 = *(long *)PTR_DAT_077e6518;
      *(int *)(auVar15._0_8_ + 0x1c) = *(int *)(auVar15._0_8_ + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_06b989e8;
      uVar1 = *(uint *)(auVar15._0_8_ + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(auVar15._0_8_ + 0x18) = uVar1 + 1;
        plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
        *plVar10 = lVar7;
        func_0x032809c4(plVar10,lVar7);
      }
      else {
        func_0x0414446c(auVar15._0_8_,lVar7,
                        *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_077cd970);
  uVar11 = extraout_x1;
LAB_06b98978:
  auVar15._8_8_ = uVar11;
  return auVar15;
LAB_06b989e8:
  while( true ) {
    func_0x03280cac();
LAB_06b989ec:
    auVar16 = func_0x03280cac();
LAB_06b989f0:
    uVar11 = auVar16._0_8_;
    func_0x051159b0(&uStack_a0,*(undefined8 *)PTR_DAT_07750ca0);
    if (lVar13 == 0) break;
    func_0x03280ca4(lVar13);
LAB_06b989d0:
    func_0x03280cac();
LAB_06b989d4:
    func_0x03280cac();
    func_0x03280ca4(lVar13);
LAB_06b989e0:
    func_0x03280cac();
LAB_06b989e4:
    func_0x03280cac();
  }
  if (auVar16._8_4_ == 1) {
    plVar10 = (long *)func_0x072ce910();
    lVar13 = *plVar10;
    func_0x072ce920();
    func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_077cd970);
    uVar11 = extraout_x1_00;
    if (lVar13 == 0) goto LAB_06b98978;
    uVar11 = func_0x03280ca4(lVar13);
  }
  func_0x051159b0(&uStack_80,*(undefined8 *)PTR_DAT_077cd970);
  func_0x03365958(uVar11);
  func_0x03280ca4(0);
  auVar14._0_8_ = func_0x02f09514();
  auVar14._8_8_ = 0;
  return auVar14;
}

