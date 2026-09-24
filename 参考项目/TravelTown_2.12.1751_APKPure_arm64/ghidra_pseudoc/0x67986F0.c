/* Ghidra 12.1.2 native pseudocode; RVA 0x67986F0; MergeEngine.ECS.Systems.Items.ToolsRequiredByBuildingsHelper.GetRequiredToolsForStage; status ok */


undefined1  [16]
MergeEngine_ECS_Systems_Items_ToolsRequiredByBuildingsHelper__GetRequiredToolsForStage
          (undefined8 param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar7;
  undefined8 extraout_x1_01;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar3 = PTR_DAT_078107a0;
  puVar2 = PTR_DAT_07810798;
  if ((bRam0000000007e28d9c & 1) == 0) {
    func_0x03280a18(PTR_DAT_07779f88);
    func_0x03280a18(PTR_DAT_07779f90);
    func_0x03280a18(PTR_DAT_07779f98);
    func_0x03280a18(PTR_DAT_077cfad0);
    func_0x03280a18(PTR_DAT_077cc5a0);
    func_0x03280a18(PTR_DAT_078107a8);
    func_0x03280a18(PTR_DAT_07779fa0);
    func_0x03280a18(PTR_DAT_078107a0);
    func_0x03280a18(PTR_DAT_07810798);
    bRam0000000007e28d9c = 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  auVar15._0_8_ = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x04143c38(auVar15._0_8_,*(undefined8 *)puVar3);
  if (param_2 != (long *)0x0) {
    lVar8 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_077cfad0) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_0689880c;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_077cfad0,2);
LAB_0689880c:
    plVar6 = (long *)(*(code *)*puVar5)(param_2,puVar5[1]);
    puVar2 = PTR_DAT_077cc5a0;
    if (plVar6 != (long *)0x0) {
      lVar8 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_077cc5a0) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06898874;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_077cc5a0,0);
LAB_06898874:
      iVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      uVar7 = extraout_x1;
      if (iVar4 != 1) goto LAB_068989bc;
      lVar8 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar12 + 5) * 0x10 + 0x138);
            goto LAB_068988d8;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar2,5);
LAB_068988d8:
      lVar8 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if (lVar8 != 0) {
        func_0x04145068(&uStack_68,lVar8,*(undefined8 *)PTR_DAT_07779fa0);
        puVar3 = PTR_DAT_078107a8;
        puVar2 = PTR_DAT_07779f90;
        uStack_48 = uStack_60;
        uStack_50 = uStack_68;
        lStack_40 = lStack_58;
LAB_0689891c:
        uVar10 = func_0x051159b4(&uStack_50,*(undefined8 *)puVar2);
        lVar8 = lStack_40;
        if ((uVar10 & 1) != 0) {
          if (lStack_40 != 0) goto code_r0x06898934;
          func_0x03280cac();
          goto LAB_068989d8;
        }
        func_0x051159b0(&uStack_50,*(undefined8 *)PTR_DAT_07779f88);
        uVar7 = extraout_x1_00;
        goto LAB_068989bc;
      }
    }
  }
LAB_068989e0:
  auVar13 = func_0x03280cac();
  if (auVar13._8_4_ == 1) {
    plVar6 = (long *)func_0x072ce910(auVar13._0_8_);
    lVar8 = *plVar6;
    func_0x072ce920();
    func_0x051159b0(&uStack_50,*(undefined8 *)PTR_DAT_07779f88);
    uVar7 = extraout_x1_01;
    if (lVar8 == 0) {
LAB_068989bc:
      auVar15._8_8_ = uVar7;
      return auVar15;
    }
    func_0x03280ca4(lVar8);
  }
  func_0x051159b0(&uStack_50,*(undefined8 *)PTR_DAT_07779f88);
  func_0x03365958(auVar13._0_8_);
  func_0x03280ca4(0);
  auVar14._0_8_ = func_0x02f09514();
  auVar14._8_8_ = 0;
  return auVar14;
code_r0x06898934:
  uVar10 = func_0x06b2a800(lStack_40,0);
  if ((uVar10 & 1) != 0) {
    if (auVar15._0_8_ == 0) {
LAB_068989d8:
      func_0x03280cac();
    }
    else {
      lVar9 = *(long *)(auVar15._0_8_ + 0x10);
      lVar11 = *(long *)puVar3;
      *(int *)(auVar15._0_8_ + 0x1c) = *(int *)(auVar15._0_8_ + 0x1c) + 1;
      if (lVar9 != 0) {
        uVar1 = *(uint *)(auVar15._0_8_ + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(auVar15._0_8_ + 0x18) = uVar1 + 1;
          plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
          *plVar6 = lVar8;
          func_0x032809c4(plVar6,lVar8);
        }
        else {
          func_0x0414446c(auVar15._0_8_,lVar8,
                          *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_0689891c;
      }
    }
    func_0x03280cac();
    goto LAB_068989e0;
  }
  goto LAB_0689891c;
}

