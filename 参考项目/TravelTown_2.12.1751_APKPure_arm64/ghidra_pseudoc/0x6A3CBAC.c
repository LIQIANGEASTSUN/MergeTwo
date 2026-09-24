/* Ghidra 12.1.2 native pseudocode; RVA 0x6A3CBAC; Merger.MergeBoard.View.MergeBoardView.RemoveInactiveItems; status ok */


undefined1  [16]
Merger_MergeBoard_View_MergeBoardView__RemoveInactiveItems(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *unaff_x23;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000007e2a505 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0ec8);
    func_0x03280a18(PTR_DAT_0782f790);
    func_0x03280a18(PTR_DAT_0782f798);
    func_0x03280a18(PTR_DAT_0782f7a0);
    func_0x03280a18(PTR_DAT_0782f7a8);
    func_0x03280a18(PTR_DAT_077c1d90);
    func_0x03280a18(PTR_DAT_0779bc18);
    func_0x03280a18(PTR_DAT_0782f7b0);
    bRam0000000007e2a505 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  lStack_88 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar6 = func_0x03d5fa00(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48),
                              *(undefined8 *)PTR_DAT_0782f790), puVar5 = PTR_DAT_0782f7a0,
     puVar4 = PTR_DAT_0782f798, puVar3 = PTR_DAT_077c1d90, puVar1 = PTR_DAT_077c0ec8,
     puVar2 = PTR_DAT_0779bc18, lVar6 != 0)) {
    func_0x05518678(&uStack_b0,lVar6,*(undefined8 *)PTR_DAT_0782f7b0);
    uStack_68 = uStack_a8;
    uStack_70 = uStack_b0;
    uStack_58 = uStack_98;
    uStack_60 = uStack_a0;
    while( true ) {
      uVar7 = func_0x051022e4(&uStack_70,*(undefined8 *)puVar5);
      if ((uVar7 & 1) == 0) {
        auVar12 = func_0x051022e0(&uStack_70,*(undefined8 *)puVar4);
        return auVar12;
      }
      uStack_78 = uStack_58;
      uStack_80 = uStack_60;
      func_0x054de1a0(&uStack_80,&lStack_88,&uStack_90,*(undefined8 *)puVar3);
      lVar6 = lStack_88;
      uVar10 = uStack_90;
      if (lStack_88 == 0) break;
      uVar8 = func_0x03d1ae90(lStack_88,*(undefined8 *)puVar1);
      auVar12._8_8_ = uVar8;
      auVar12._0_8_ = uVar8;
      if (param_2 == 0) goto LAB_06b3cd50;
      uVar7 = func_0x0411a010(param_2,uVar8,*(undefined8 *)puVar2);
      if ((uVar7 & 1) == 0) {
        func_0x06b3a754(param_1,lVar6,uVar10);
      }
    }
    auVar12 = func_0x03280cac();
LAB_06b3cd50:
    func_0x03280cac(auVar12._0_8_,auVar12._8_8_);
    unaff_x23 = (undefined8 *)puVar4;
  }
  auVar13 = func_0x03280cac();
  if (auVar13._8_4_ == 1) {
    plVar9 = (long *)func_0x072ce910(auVar13._0_8_);
    lVar6 = *plVar9;
    func_0x072ce920();
    auVar12 = func_0x051022e0(&uStack_70,*unaff_x23);
    if (lVar6 == 0) {
      return auVar12;
    }
    func_0x03280ca4(lVar6);
  }
  func_0x051022e0(&uStack_70,*unaff_x23);
  func_0x03365958(auVar13._0_8_);
  func_0x03280ca4(0);
  auVar11._0_8_ = func_0x02f09514();
  puVar3 = PTR_DAT_0782f6e8;
  puVar1 = PTR_DAT_0782f6e0;
  puVar2 = PTR_DAT_0782f618;
  if ((bRam0000000007e2a506 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f6e8);
    func_0x03280a18(PTR_DAT_0782f6e0);
    func_0x03280a18(PTR_DAT_0782f618);
    bRam0000000007e2a506 = 1;
  }
  uVar10 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x04f34d5c(uVar10,*(undefined8 *)puVar3);
  *(undefined8 *)(auVar11._0_8_ + 0x80) = uVar10;
  func_0x032809c4((undefined8 *)(auVar11._0_8_ + 0x80),uVar10);
  puVar1 = PTR_DAT_0774e4e0;
  uVar10 = *(undefined8 *)puVar2;
  if ((bRam0000000007e2fb28 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0,0);
    bRam0000000007e2fb28 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  auVar11._8_8_ = 0;
  return auVar11;
}

