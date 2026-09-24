/* Ghidra 12.1.2 native pseudocode; RVA 0x6A3BBB8; Merger.MergeBoard.View.Layout.MergeBoardLayout.GetTransformForPosition; status ok */


long Merger_MergeBoard_View_Layout_MergeBoardLayout__GetTransformForPosition
               (float param_1,float param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *unaff_x22;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [12];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  fVar9 = param_2;
  if ((bRam0000000007e2a547 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f5e0);
    func_0x03280a18(PTR_DAT_0782f770);
    func_0x03280a18(PTR_DAT_0782f5e8);
    func_0x03280a18(PTR_DAT_0782f5f0);
    func_0x03280a18(PTR_DAT_0782f5f8);
    func_0x03280a18(PTR_DAT_0782f608);
    bRam0000000007e2a547 = 1;
  }
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  if (*(long *)(param_3 + 0x30) != 0) {
    iVar4 = func_0x04f35808(*(long *)(param_3 + 0x30),*(undefined8 *)PTR_DAT_0782f770);
    puVar3 = PTR_DAT_0782f5f0;
    puVar2 = PTR_DAT_0782f5e8;
    if (iVar4 == 0) {
      return 0;
    }
    if (*(long *)(param_3 + 0x30) != 0) {
      func_0x04f35f90(&uStack_a0,*(long *)(param_3 + 0x30),*(undefined8 *)PTR_DAT_0782f5e0);
      puVar1 = PTR_DAT_0774ee08;
      param_3 = 0;
      fVar10 = 3.4028235e+38;
      while( true ) {
        uVar5 = func_0x05147e9c(&uStack_a0,*(undefined8 *)puVar3);
        lVar7 = lStack_88;
        if ((uVar5 & 1) == 0) {
          func_0x05147fc0(&uStack_a0,*(undefined8 *)puVar2);
          return param_3;
        }
        if (lStack_88 == 0) break;
        fVar8 = (float)func_0x06fe9aec(lStack_88,0);
        if (cRam0000000007e136da == '\0') {
          func_0x03280a18(puVar1);
          cRam0000000007e136da = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        fVar9 = (param_2 - fVar9) * (param_2 - fVar9);
        fVar8 = SQRT((param_1 - fVar8) * (param_1 - fVar8) + fVar9);
        if (fVar8 < fVar10) {
          param_3 = lVar7;
          fVar10 = fVar8;
        }
      }
      func_0x03280cac();
      unaff_x22 = (undefined8 *)puVar2;
    }
  }
  auVar11 = func_0x03280cac();
  if (auVar11._8_4_ == 1) {
    plVar6 = (long *)func_0x072ce910(auVar11._0_8_);
    lVar7 = *plVar6;
    func_0x072ce920();
    func_0x05147fc0(&uStack_a0,*unaff_x22);
    if (lVar7 == 0) {
      return param_3;
    }
    func_0x03280ca4(lVar7);
  }
  func_0x05147fc0(&uStack_a0,*unaff_x22);
  func_0x03365958(auVar11._0_8_);
  func_0x03280ca4(0);
  auVar11 = func_0x02f09514();
  lVar7 = func_0x057da5fc(auVar11._0_8_,0);
  *(int *)(auVar11._0_8_ + 0x10) = auVar11._8_4_;
  return lVar7;
}

