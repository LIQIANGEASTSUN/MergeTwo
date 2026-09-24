/* Ghidra 12.1.2 native pseudocode; RVA 0x66672DC; MergeEngine.ECS.Systems.Board.BoardResourceStateSystem.LoadState; status ok */


undefined1  [16] MergeEngine_ECS_Systems_Board_BoardResourceStateSystem__LoadState(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *unaff_x21;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  if ((bRam0000000007e280c4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07807d20);
    func_0x03280a18(PTR_DAT_0774e598);
    func_0x03280a18(PTR_DAT_077bf988);
    func_0x03280a18(PTR_DAT_0774f758);
    func_0x03280a18(PTR_DAT_077c16c8);
    func_0x03280a18(PTR_DAT_077c16d0);
    func_0x03280a18(PTR_DAT_077c16d8);
    func_0x03280a18(PTR_DAT_077c16e0);
    func_0x03280a18(PTR_DAT_07807d28);
    func_0x03280a18(PTR_DAT_07807d30);
    func_0x03280a18(PTR_DAT_07807d38);
    func_0x03280a18(PTR_DAT_07807d40);
    bRam0000000007e280c4 = 1;
  }
  puVar6 = PTR_DAT_07807d38;
  puVar5 = PTR_DAT_077c16d0;
  puVar4 = PTR_DAT_077c16c8;
  puVar3 = PTR_DAT_077bf988;
  puVar2 = PTR_DAT_0774f758;
  puVar1 = PTR_DAT_0774e598;
  uStack_70 = 0;
  uStack_68 = 0;
  lStack_60 = 0;
  uStack_74 = 0;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar9 = *(long *)(*(long *)(param_1 + 0x40) + 0x20), lVar9 != 0)) {
    lVar9 = *(long *)(lVar9 + 0x20);
    if (lVar9 == 0) {
      if (*(int *)(*(long *)PTR_DAT_0774e598 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      auVar11 = func_0x06faa078(*(undefined8 *)PTR_DAT_07807d40,0);
      return auVar11;
    }
    lVar9 = *(long *)(lVar9 + 0x18);
    if (lVar9 != 0) {
      func_0x04145068(&uStack_90,lVar9,*(undefined8 *)PTR_DAT_077c16e0);
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_60 = lStack_80;
      while( true ) {
        uVar7 = func_0x051159b4(&uStack_70,*(undefined8 *)puVar5);
        lVar9 = lStack_60;
        if ((uVar7 & 1) == 0) {
          auVar11 = func_0x051159b0(&uStack_70,*(undefined8 *)puVar4);
          return auVar11;
        }
        if (lStack_60 == 0) break;
        uVar10 = *(undefined8 *)(lStack_60 + 0x10);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        uVar7 = func_0x03d22ecc(uVar10,1,&uStack_74,*(undefined8 *)puVar3);
        if ((uVar7 & 1) == 0) {
          uVar10 = func_0x055ea7a0(*(undefined8 *)puVar6,*(undefined8 *)(lVar9 + 0x10),0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            func_0x03280b8c();
          }
          func_0x06faa078(uVar10,0);
        }
        else {
          if (*(long *)(param_1 + 0x48) == 0) goto LAB_0676750c;
          func_0x065eb774(*(long *)(param_1 + 0x48),uStack_74,*(undefined4 *)(lVar9 + 0x18),0,0x1e,0
                         );
        }
      }
      func_0x03280cac();
LAB_0676750c:
      func_0x03280cac();
      unaff_x21 = (undefined8 *)puVar4;
    }
  }
  auVar12 = func_0x03280cac();
  if (auVar12._8_4_ == 1) {
    plVar8 = (long *)func_0x072ce910(auVar12._0_8_);
    lVar9 = *plVar8;
    func_0x072ce920();
    auVar11 = func_0x051159b0(&uStack_70,*unaff_x21);
    if (lVar9 == 0) {
      return auVar11;
    }
    func_0x03280ca4(lVar9);
  }
  func_0x051159b0(&uStack_70,*unaff_x21);
  func_0x03365958(auVar12._0_8_);
  func_0x03280ca4(0);
  auVar11._0_8_ = func_0x02f09514();
  puVar1 = PTR_DAT_07807d48;
  if ((bRam0000000007e280c5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07807d48);
    bRam0000000007e280c5 = 1;
  }
  uVar10 = *(undefined8 *)puVar1;
  auVar11._8_8_ = 0;
  return auVar11;
}

