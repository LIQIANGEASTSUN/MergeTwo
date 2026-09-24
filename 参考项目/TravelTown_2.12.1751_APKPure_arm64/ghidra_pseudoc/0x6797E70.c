/* Ghidra 12.1.2 native pseudocode; RVA 0x6797E70; MergeEngine.ECS.Systems.Items.ToolsRequiredByBuildingsHelper.FindToolsNeededByUpgrade; status ok */


/* WARNING: Possible PIC construction at 0x06897fbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x068982c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06897fc0) */
/* WARNING: Removing unreachable block (ram,0x06897fc8) */
/* WARNING: Removing unreachable block (ram,0x06898084) */
/* WARNING: Removing unreachable block (ram,0x06897fcc) */
/* WARNING: Removing unreachable block (ram,0x06898088) */
/* WARNING: Removing unreachable block (ram,0x06897fe4) */
/* WARNING: Removing unreachable block (ram,0x0689800c) */
/* WARNING: Removing unreachable block (ram,0x06897ff4) */
/* WARNING: Removing unreachable block (ram,0x068982c8) */
/* WARNING: Removing unreachable block (ram,0x068982cc) */
/* WARNING: Removing unreachable block (ram,0x0689830c) */
/* WARNING: Removing unreachable block (ram,0x06898324) */
/* WARNING: Removing unreachable block (ram,0x0689832c) */
/* WARNING: Removing unreachable block (ram,0x06898354) */
/* WARNING: Removing unreachable block (ram,0x06898338) */
/* WARNING: Removing unreachable block (ram,0x06898344) */
/* WARNING: Removing unreachable block (ram,0x06898364) */
/* WARNING: Removing unreachable block (ram,0x06898374) */
/* WARNING: Removing unreachable block (ram,0x06898388) */
/* WARNING: Removing unreachable block (ram,0x068983a0) */
/* WARNING: Removing unreachable block (ram,0x068983bc) */
/* WARNING: Removing unreachable block (ram,0x068983d8) */
/* WARNING: Removing unreachable block (ram,0x068983e0) */
/* WARNING: Removing unreachable block (ram,0x06898408) */
/* WARNING: Removing unreachable block (ram,0x068983ec) */
/* WARNING: Removing unreachable block (ram,0x068983f8) */
/* WARNING: Removing unreachable block (ram,0x06898418) */
/* WARNING: Removing unreachable block (ram,0x068984e8) */
/* WARNING: Removing unreachable block (ram,0x068984f0) */
/* WARNING: Removing unreachable block (ram,0x06898428) */
/* WARNING: Removing unreachable block (ram,0x0689844c) */
/* WARNING: Removing unreachable block (ram,0x06898474) */
/* WARNING: Removing unreachable block (ram,0x068984f4) */
/* WARNING: Removing unreachable block (ram,0x06898518) */
/* WARNING: Removing unreachable block (ram,0x06898528) */
/* WARNING: Removing unreachable block (ram,0x06898588) */
/* WARNING: Removing unreachable block (ram,0x068985f4) */
/* WARNING: Removing unreachable block (ram,0x0689858c) */
/* WARNING: Removing unreachable block (ram,0x06898590) */
/* WARNING: Removing unreachable block (ram,0x068985b8) */
/* WARNING: Removing unreachable block (ram,0x068985fc) */
/* WARNING: Removing unreachable block (ram,0x068985c8) */
/* WARNING: Removing unreachable block (ram,0x068985d0) */
/* WARNING: Removing unreachable block (ram,0x068985e8) */
/* WARNING: Removing unreachable block (ram,0x06898484) */
/* WARNING: Removing unreachable block (ram,0x0689852c) */
/* WARNING: Removing unreachable block (ram,0x0689848c) */
/* WARNING: Removing unreachable block (ram,0x06898534) */
/* WARNING: Removing unreachable block (ram,0x06898648) */
/* WARNING: Removing unreachable block (ram,0x06898490) */
/* WARNING: Removing unreachable block (ram,0x068986dc) */

undefined1  [16]
MergeEngine_ECS_Systems_Items_ToolsRequiredByBuildingsHelper__FindToolsNeededByUpgrade
          (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar9;
  undefined8 extraout_x1_03;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x25;
  undefined8 *puVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  puVar1 = PTR_DAT_07810760;
  puVar2 = (undefined8 *)PTR_DAT_07810758;
  uVar10 = param_3;
  if ((bRam0000000007e28d9a & 1) == 0) {
    func_0x03280a18(PTR_DAT_077eb750);
    func_0x03280a18(PTR_DAT_077eb758);
    func_0x03280a18(PTR_DAT_077eb760);
    func_0x03280a18(PTR_DAT_07810768);
    func_0x03280a18(PTR_DAT_077eb770);
    func_0x03280a18(PTR_DAT_07810770);
    func_0x03280a18(PTR_DAT_07810760);
    func_0x03280a18(PTR_DAT_07810778);
    func_0x03280a18(PTR_DAT_07810780);
    func_0x03280a18(PTR_DAT_07810758);
    bRam0000000007e28d9a = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  lStack_60 = 0;
  lVar5 = func_0x03280ca0(*puVar2);
  func_0x04143c38(lVar5,*(undefined8 *)puVar1);
  puVar12 = (undefined8 *)PTR_DAT_07810780;
  puVar13 = (undefined8 *)PTR_DAT_07810770;
  puVar1 = PTR_DAT_077eb758;
  puVar14 = (undefined8 *)PTR_DAT_077eb750;
  puVar3 = (undefined8 *)0x7e28000;
  if (param_2 == 0) goto LAB_0689808c;
  func_0x04145068(&uStack_88,param_2,*(undefined8 *)PTR_DAT_077eb770);
  uStack_68 = uStack_80;
  uStack_70 = uStack_88;
  lStack_60 = lStack_78;
  uVar6 = func_0x051159b4(&uStack_70,*(undefined8 *)puVar1);
  lVar11 = lStack_60;
  if ((uVar6 & 1) == 0) {
    func_0x051159b0(&uStack_70,*puVar14);
    uVar8 = extraout_x1;
    do {
      puVar2 = puVar12;
      puVar3 = puVar13;
      unaff_x25 = puVar14;
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) == 0) {
          uVar10 = 0;
LAB_06898068:
          auVar17._8_8_ = uVar8;
          auVar17._0_8_ = uVar10;
          return auVar17;
        }
        func_0x04145fb4(lVar5,*puVar13);
        uVar10 = *puVar12;
        auVar17 = func_0x0414419c(lVar5,0,uVar10);
        uVar8 = auVar17._8_8_;
        if (auVar17._0_8_ != 0) {
          uVar10 = *(undefined8 *)(auVar17._0_8_ + 0x10);
          goto LAB_06898068;
        }
      }
LAB_0689808c:
      puVar14 = unaff_x25;
      puVar13 = puVar3;
      puVar12 = puVar2;
      param_3 = uVar10;
      auVar15 = func_0x03280cac();
      if (auVar15._8_4_ != 1) goto LAB_068980d0;
      plVar7 = (long *)func_0x072ce910(auVar15._0_8_);
      lVar11 = *plVar7;
      func_0x072ce920();
      func_0x051159b0(&uStack_70,*puVar14);
      uVar8 = extraout_x1_00;
      uVar10 = param_3;
    } while (lVar11 == 0);
    func_0x03280ca4(lVar11);
LAB_068980d0:
    func_0x051159b0(&uStack_70,*puVar14);
    func_0x03365958(auVar15._0_8_);
    func_0x03280ca4(0);
    auVar17 = func_0x02f09514();
    param_1 = auVar17._0_8_;
    lVar11 = auVar17._8_8_;
  }
  uVar10 = 0x7e28000;
  if ((bRam0000000007e28d9b & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810788);
    func_0x03280a18(PTR_DAT_0777ff80);
    func_0x03280a18(PTR_DAT_07810790);
    func_0x03280a18(PTR_DAT_07780070);
    func_0x03280a18(PTR_DAT_07780078);
    func_0x03280a18(PTR_DAT_0777ff68);
    func_0x03280a18(PTR_DAT_0777ff88);
    func_0x03280a18(PTR_DAT_07779f88);
    func_0x03280a18(PTR_DAT_0777ff98);
    func_0x03280a18(PTR_DAT_07779f90);
    func_0x03280a18(PTR_DAT_07779f98);
    func_0x03280a18(PTR_DAT_0777ffa8);
    func_0x03280a18(PTR_DAT_077dbb50);
    func_0x03280a18(PTR_DAT_077dbb30);
    func_0x03280a18(PTR_DAT_077dbb28);
    func_0x03280a18(PTR_DAT_077eba10);
    func_0x03280a18(PTR_DAT_077cfad0);
    func_0x03280a18(PTR_DAT_0777ffb8);
    func_0x03280a18(PTR_DAT_0777ffc0);
    func_0x03280a18(PTR_DAT_07779fa0);
    func_0x03280a18(PTR_DAT_077ee0d0);
    param_1 = func_0x03280a18(PTR_DAT_077edf88);
    bRam0000000007e28d9b = 1;
  }
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  if (lVar11 != 0) {
    iVar4 = func_0x06454364(lVar11,0);
    uVar10 = 0;
    uVar9 = extraout_x1_01;
    if (iVar4 != 3) {
      iVar4 = func_0x06454364(lVar11,0);
      uVar10 = 0;
      uVar9 = extraout_x1_02;
      if (iVar4 != 4) {
        uVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0777ff68);
        func_0x04f5a798(uVar10,param_3,*(undefined8 *)PTR_DAT_07810790);
        auVar16._0_8_ = func_0x03280ca0(*(undefined8 *)PTR_DAT_07810788);
        auVar16._8_8_ = 0;
        return auVar16;
      }
    }
LAB_06898610:
    auVar18._8_8_ = uVar9;
    auVar18._0_8_ = uVar10;
    return auVar18;
  }
  func_0x03280cac(param_1);
  uVar8 = func_0x03280cac();
  func_0x051159b0(&uStack_110,*(undefined8 *)PTR_DAT_07779f88);
  do {
    func_0x03365958(uVar8);
    auVar15 = func_0x03280ca4(0);
    uVar8 = auVar15._0_8_;
    if (auVar15._8_4_ == 1) {
      plVar7 = (long *)func_0x072ce910(uVar8);
      lVar5 = *plVar7;
      func_0x072ce920();
      func_0x0514ec68(&uStack_130,*(undefined8 *)PTR_DAT_0777ff88);
      uVar9 = extraout_x1_03;
      if (lVar5 == 0) goto LAB_06898610;
      func_0x03280ca4(lVar5);
    }
    func_0x0514ec68(&uStack_130,*(undefined8 *)PTR_DAT_0777ff88);
  } while( true );
}

