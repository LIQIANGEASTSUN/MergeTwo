/* Ghidra 12.1.2 native pseudocode; RVA 0x6A812C4; Merger.MergeBoard.Logic.ItemInteractionAffordabilityChecker.CanAffordItemInteractionCost; status ok */


ulong Merger_MergeBoard_Logic_ItemInteractionAffordabilityChecker__CanAffordItemInteractionCost
                (long param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000007e2a764 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826868);
    func_0x03280a18(PTR_DAT_0777a4f8);
    func_0x03280a18(PTR_DAT_07831ae8);
    func_0x03280a18(PTR_DAT_0774ea58);
    func_0x03280a18(PTR_DAT_077c1d38);
    func_0x03280a18(PTR_DAT_07831af0);
    func_0x03280a18(PTR_DAT_077c1d40);
    func_0x03280a18(PTR_DAT_077c07b8);
    func_0x03280a18(PTR_DAT_077cda58);
    func_0x03280a18(PTR_DAT_07831af8);
    func_0x03280a18(PTR_DAT_07831b00);
    func_0x03280a18(PTR_DAT_07831b08);
    bRam0000000007e2a764 = 1;
  }
  uStack_38 = 0;
  if ((*(byte *)(param_3 + 3) & 1) == 0) {
    uVar3 = 1;
  }
  else {
    if (param_2 == 0) {
LAB_06b81620:
      auVar11 = func_0x03280cac();
      puVar2 = PTR_DAT_077730b8;
      if ((bRam0000000007e2a762 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07773688);
        func_0x03280a18(PTR_DAT_077730b8);
        bRam0000000007e2a762 = 1;
      }
      plVar8 = *(long **)(auVar11._0_8_ + 0x10);
      uVar1 = *(undefined4 *)(auVar11._8_8_ + 4);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar4 = func_0x0624cb20(uVar1,0);
      if (plVar8 == (long *)0x0) {
        uVar3 = func_0x03280cac();
        return uVar3;
      }
      lVar5 = *plVar8;
      uVar1 = *(undefined4 *)(auVar11._8_8_ + 8);
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07773688) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_06b816f4;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_07773688,2);
LAB_06b816f4:
                    /* WARNING: Could not recover jumptable at 0x06b81720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)*puVar6)(plVar8,uVar4,uVar1,0,0,0,1,puVar6[1]);
      return uVar3;
    }
    uVar3 = func_0x03d1ecb4(param_2,&uStack_38,*(undefined8 *)PTR_DAT_0777a4f8);
    if ((uVar3 & 1) == 0) {
      uVar3 = func_0x03ce83d8(param_3[4],*(undefined8 *)PTR_DAT_07826868);
      if ((uVar3 & 1) == 0) {
        plVar8 = *(long **)(param_1 + 0x18);
        if (plVar8 == (long *)0x0) goto LAB_06b81620;
        lVar5 = *plVar8;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_077c07b8) {
              puVar6 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_06b81488;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_077c07b8,1);
LAB_06b81488:
        uVar4 = (*(code *)*puVar6)(plVar8,puVar6[1]);
        puVar2 = PTR_DAT_07831b08;
        lVar5 = *(long *)PTR_DAT_07831b08;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          func_0x03280b8c(lVar5);
          lVar5 = *(long *)puVar2;
        }
        lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar9 == 0) {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            func_0x03280b8c(lVar5);
            lVar5 = *(long *)puVar2;
          }
          uVar10 = **(undefined8 **)(lVar5 + 0xb8);
          lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077c1d40);
          func_0x05355fbc(lVar9,uVar10,*(undefined8 *)PTR_DAT_07831af8,0);
          plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          *plVar8 = lVar9;
          func_0x032809c4(plVar8,lVar9);
        }
        uVar4 = func_0x03d872a8(uVar4,lVar9,*(undefined8 *)PTR_DAT_077c1d38);
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          func_0x03280b8c(lVar5);
          lVar5 = *(long *)puVar2;
        }
        lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
        if (lVar9 == 0) {
          if (*(int *)(lVar5 + 0xe0) == 0) {
            func_0x03280b8c(lVar5);
            lVar5 = *(long *)puVar2;
          }
          uVar10 = **(undefined8 **)(lVar5 + 0xb8);
          lVar9 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831af0);
          func_0x053569b8(lVar9,uVar10,*(undefined8 *)PTR_DAT_07831b00,0);
          plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
          *plVar8 = lVar9;
          func_0x032809c4(plVar8,lVar9);
        }
        uVar4 = func_0x03d50a94(uVar4,lVar9,*(undefined8 *)PTR_DAT_07831ae8);
        uVar4 = func_0x03d5ffd0(uVar4,*(undefined8 *)PTR_DAT_0774ea58);
        uStack_b8 = param_3[1];
        uStack_c0 = *param_3;
        uStack_a8 = param_3[3];
        uStack_b0 = param_3[2];
        uStack_a0 = param_3[4];
        lVar5 = func_0x06b9859c(&uStack_c0,uVar4,0);
        uVar3 = (ulong)(lVar5 != 0);
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uStack_40 = param_3[4];
      uStack_58 = param_3[1];
      uStack_60 = *param_3;
      uStack_48 = param_3[3];
      uStack_50 = param_3[2];
      uVar4 = func_0x06b86b60(&uStack_38,0);
      uStack_88 = uStack_58;
      uStack_90 = uStack_60;
      uStack_78 = uStack_48;
      uStack_80 = uStack_50;
      uStack_70 = uStack_40;
      lVar5 = func_0x06b9868c(&uStack_90,uVar4,0);
      if (lVar5 == 0) goto LAB_06b81620;
      uVar3 = (ulong)(0 < *(int *)(lVar5 + 0x18));
    }
  }
  return uVar3;
}

