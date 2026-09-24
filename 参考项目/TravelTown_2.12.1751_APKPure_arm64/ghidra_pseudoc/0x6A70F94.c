/* Ghidra 12.1.2 native pseudocode; RVA 0x6A70F94; Merger.MergeBoard.Systems.KillSystem.RemoveTempComponents; status ok */


/* WARNING: Removing unreachable block (ram,0x06b71118) */

void Merger_MergeBoard_Systems_KillSystem__RemoveTempComponents(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *unaff_x21;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000007e2a6e6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831298);
    func_0x03280a18(PTR_DAT_0776d918);
    func_0x03280a18(PTR_DAT_078312a0);
    func_0x03280a18(PTR_DAT_078312a8);
    func_0x03280a18(PTR_DAT_0776d948);
    func_0x03280a18(PTR_DAT_078312b0);
    func_0x03280a18(PTR_DAT_0776d968);
    func_0x03280a18(PTR_DAT_0776d988);
    func_0x03280a18(PTR_DAT_078312b8);
    func_0x03280a18(PTR_DAT_078312c0);
    bRam0000000007e2a6e6 = 1;
  }
  puVar3 = PTR_DAT_078312a8;
  puVar9 = (undefined8 *)PTR_DAT_078312a0;
  puVar2 = PTR_DAT_0776d988;
  puVar1 = PTR_DAT_0776d948;
  puVar10 = (undefined8 *)PTR_DAT_0776d918;
  uStack_50 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_58 = 0;
  lStack_60 = 0;
  lStack_80 = 0;
  puVar4 = (undefined8 *)0x7e2a000;
  if (*(long *)(param_2 + 0x18) == 0) goto LAB_06b711a0;
  func_0x04fe31ac(&uStack_b8,*(long *)(param_2 + 0x18),*(undefined8 *)PTR_DAT_07831298);
  uStack_68 = uStack_b0;
  uStack_70 = uStack_b8;
  lStack_58 = lStack_a0;
  lStack_60 = lStack_a8;
  uStack_50 = uStack_98;
  do {
    uVar5 = func_0x0515fbd0(&uStack_70,*(undefined8 *)puVar3);
    lVar8 = lStack_60;
    if ((uVar5 & 1) == 0) {
      func_0x0515fcf0(&uStack_70,*puVar9);
      return;
    }
    if (lStack_58 == 0) goto LAB_06b7119c;
    func_0x053c09a8(&uStack_b8,lStack_58,*(undefined8 *)puVar2);
    uStack_88 = uStack_b0;
    uStack_90 = uStack_b8;
    lStack_80 = lStack_a8;
    while (uVar5 = func_0x05115444(&uStack_90,*(undefined8 *)puVar1), (uVar5 & 1) != 0) {
      if (lVar8 == 0) {
        auVar11 = func_0x03280cac();
        param_2 = 0;
        while( true ) {
          uVar7 = auVar11._0_8_;
          func_0x05115440(&uStack_90,*puVar10);
          if (param_2 == 0) break;
          func_0x03280ca4(param_2);
          func_0x03280ca4(param_2);
LAB_06b7119c:
          func_0x03280cac();
          puVar4 = puVar9;
          unaff_x21 = puVar10;
LAB_06b711a0:
          puVar10 = unaff_x21;
          puVar9 = puVar4;
          auVar11 = func_0x03280cac();
        }
        if (auVar11._8_4_ == 1) {
          plVar6 = (long *)func_0x072ce910();
          lVar8 = *plVar6;
          func_0x072ce920();
          func_0x0515fcf0(&uStack_70,*puVar9);
          if (lVar8 == 0) {
            return;
          }
          uVar7 = func_0x03280ca4(lVar8);
        }
        func_0x0515fcf0(&uStack_70,*puVar9);
        func_0x03365958(uVar7);
        func_0x03280ca4(0);
        func_0x02f09514();
        return;
      }
      func_0x06014f5c(lVar8,lStack_80,0);
    }
    param_2 = 0;
    func_0x05115440(&uStack_90,*puVar10);
  } while( true );
}

