/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7D5FC; Merger.MergeBoard.Models.ItemsDiscoveryModel.RebuildRewardPendingIds; status ok */


undefined1  [16] Merger_MergeBoard_Models_ItemsDiscoveryModel__RebuildRewardPendingIds(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x23;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  
  puVar2 = PTR_DAT_0774ecc0;
  puVar13 = (undefined8 *)PTR_DAT_0774ecb8;
  if ((bRam0000000007e2a740 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831948);
    func_0x03280a18(PTR_DAT_07831950);
    func_0x03280a18(PTR_DAT_07831958);
    func_0x03280a18(PTR_DAT_07831960);
    func_0x03280a18(PTR_DAT_07831968);
    func_0x03280a18(PTR_DAT_07831970);
    func_0x03280a18(PTR_DAT_0774ecc8);
    func_0x03280a18(PTR_DAT_0774ecc0);
    func_0x03280a18(PTR_DAT_0774ecb8);
    func_0x03280a18(PTR_DAT_077f3870);
    bRam0000000007e2a740 = 1;
  }
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
  lVar6 = func_0x03280ca0(*puVar13);
  func_0x04143c38(lVar6,*(undefined8 *)puVar2);
  puVar4 = PTR_DAT_07831958;
  puVar12 = (undefined8 *)PTR_DAT_07831950;
  puVar3 = PTR_DAT_077f3870;
  puVar2 = PTR_DAT_0774ecc8;
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x04fe31ac(&uStack_98,*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_07831948);
    uStack_68 = uStack_90;
    uStack_70 = uStack_98;
    lStack_58 = lStack_80;
    uStack_60 = uStack_88;
    uStack_50 = uStack_78;
LAB_06b7d720:
    uVar7 = func_0x0515fbd0(&uStack_70,*(undefined8 *)puVar4);
    unaff_x23 = (undefined8 *)puVar3;
    if ((uVar7 & 1) == 0) {
      func_0x0515fcf0(&uStack_70,*puVar12);
      goto LAB_06b7d7b0;
    }
    if (lStack_58 != 0) goto code_r0x06b7d738;
    func_0x03280cac();
    goto LAB_06b7d7e4;
  }
LAB_06b7d7f4:
  do {
    auVar15 = func_0x03280cac();
    puVar12 = auVar15._0_8_;
    if (auVar15._8_4_ != 1) {
LAB_06b7d83c:
      func_0x0515fcf0(&uStack_70,*puVar13);
      func_0x03365958(puVar12);
      func_0x03280ca4(0);
      auVar14._0_8_ = func_0x02f09514();
      puVar5 = PTR_DAT_07831980;
      puVar4 = PTR_DAT_07831978;
      puVar3 = PTR_DAT_077e9350;
      puVar2 = PTR_DAT_077e9348;
      if ((bRam0000000007e2a741 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07831980);
        func_0x03280a18(PTR_DAT_07831978);
        func_0x03280a18(PTR_DAT_077e9350);
        func_0x03280a18(PTR_DAT_077e9348);
        bRam0000000007e2a741 = 1;
      }
      uVar9 = func_0x03280ca0(*(undefined8 *)puVar4);
      func_0x04fe1fa4(uVar9,*(undefined8 *)puVar5);
      *(undefined8 *)(auVar14._0_8_ + 0x28) = uVar9;
      func_0x032809c4((undefined8 *)(auVar14._0_8_ + 0x28),uVar9);
      uVar9 = func_0x03280ca0(*(undefined8 *)puVar2);
      func_0x0442b5e0(uVar9,*(undefined8 *)puVar3);
      *(undefined8 *)(auVar14._0_8_ + 0x30) = uVar9;
      func_0x032809c4((undefined8 *)(auVar14._0_8_ + 0x30),uVar9);
      auVar14._8_8_ = 0;
      return auVar14;
    }
    plVar8 = (long *)func_0x072ce910(puVar12);
    lVar10 = *plVar8;
    func_0x072ce920();
    func_0x0515fcf0(&uStack_70,*puVar13);
    if (lVar10 != 0) {
      func_0x03280ca4(lVar10);
      goto LAB_06b7d83c;
    }
LAB_06b7d7b0:
    puVar13 = puVar12;
    if (*(long *)(param_1 + 0x30) != 0) {
      auVar14 = func_0x0442b8f0(*(long *)(param_1 + 0x30),lVar6,*unaff_x23);
      return auVar14;
    }
  } while( true );
code_r0x06b7d738:
  if (*(int *)(lStack_58 + 0x10) == 2) {
    if (lVar6 == 0) {
LAB_06b7d7e4:
      func_0x03280cac();
    }
    else {
      lVar10 = *(long *)(lVar6 + 0x10);
      lVar11 = *(long *)puVar2;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar10 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uStack_60;
          func_0x032809c4();
        }
        else {
          func_0x0414446c(lVar6,uStack_60,
                          *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_06b7d720;
      }
    }
    func_0x03280cac();
    puVar13 = puVar12;
    goto LAB_06b7d7f4;
  }
  goto LAB_06b7d720;
}

