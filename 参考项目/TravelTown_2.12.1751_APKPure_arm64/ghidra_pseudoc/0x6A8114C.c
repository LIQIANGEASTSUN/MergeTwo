/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8114C; Merger.MergeBoard.Logic.ItemInteractionAffordabilityChecker.CanAffordResourceInteractionCost; status ok */


ulong Merger_MergeBoard_Logic_ItemInteractionAffordabilityChecker__CanAffordResourceInteractionCost
                (long param_1,byte *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000007e2a763 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07773688);
    func_0x03280a18(PTR_DAT_07779818);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e2a763 = 1;
  }
  if ((*param_2 & 1) == 0) {
    return 1;
  }
  plVar9 = *(long **)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 4);
  if (*(int *)(*(long *)PTR_DAT_077730b8 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  plVar3 = (long *)func_0x0624cb20(uVar1,0);
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07779818) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06b81234;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    param_3 = (undefined8 *)0x0;
    puVar4 = (undefined8 *)func_0x03256b10(plVar3);
LAB_06b81234:
    uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar1 = *(undefined4 *)(param_2 + 8);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07773688) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_06b812a4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_07773688,0xe);
LAB_06b812a4:
                    /* WARNING: Could not recover jumptable at 0x06b812bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)*puVar4)(plVar9,uVar5,uVar1,puVar4[1]);
      return uVar7;
    }
  }
  auVar12 = func_0x03280cac();
  uStack_50 = 0x6b812c4;
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
  uStack_58 = 0;
  if ((*(byte *)(param_3 + 3) & 1) == 0) {
    uVar7 = 1;
  }
  else {
    if (auVar12._8_8_ == 0) {
LAB_06b81620:
      auVar12 = func_0x03280cac();
      puVar2 = PTR_DAT_077730b8;
      if ((bRam0000000007e2a762 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07773688);
        func_0x03280a18(PTR_DAT_077730b8);
        bRam0000000007e2a762 = 1;
      }
      plVar9 = *(long **)(auVar12._0_8_ + 0x10);
      uVar1 = *(undefined4 *)(auVar12._8_8_ + 4);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar5 = func_0x0624cb20(uVar1,0);
      if (plVar9 == (long *)0x0) {
        uVar7 = func_0x03280cac();
        return uVar7;
      }
      lVar6 = *plVar9;
      uVar1 = *(undefined4 *)(auVar12._8_8_ + 8);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07773688) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_06b816f4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_07773688,2);
LAB_06b816f4:
                    /* WARNING: Could not recover jumptable at 0x06b81720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)*puVar4)(plVar9,uVar5,uVar1,0,0,0,1,puVar4[1]);
      return uVar7;
    }
    uVar7 = func_0x03d1ecb4(auVar12._8_8_,&uStack_58,*(undefined8 *)PTR_DAT_0777a4f8);
    if ((uVar7 & 1) == 0) {
      uVar7 = func_0x03ce83d8(param_3[4],*(undefined8 *)PTR_DAT_07826868);
      if ((uVar7 & 1) == 0) {
        plVar9 = *(long **)(auVar12._0_8_ + 0x18);
        if (plVar9 == (long *)0x0) goto LAB_06b81620;
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_077c07b8) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_06b81488;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_077c07b8,1);
LAB_06b81488:
        uVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
        puVar2 = PTR_DAT_07831b08;
        lVar6 = *(long *)PTR_DAT_07831b08;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          func_0x03280b8c(lVar6);
          lVar6 = *(long *)puVar2;
        }
        lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        if (lVar10 == 0) {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            func_0x03280b8c(lVar6);
            lVar6 = *(long *)puVar2;
          }
          uVar11 = **(undefined8 **)(lVar6 + 0xb8);
          lVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077c1d40);
          func_0x05355fbc(lVar10,uVar11,*(undefined8 *)PTR_DAT_07831af8,0);
          plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          *plVar9 = lVar10;
          func_0x032809c4(plVar9,lVar10);
        }
        uVar5 = func_0x03d872a8(uVar5,lVar10,*(undefined8 *)PTR_DAT_077c1d38);
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe0) == 0) {
          func_0x03280b8c(lVar6);
          lVar6 = *(long *)puVar2;
        }
        lVar10 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
        if (lVar10 == 0) {
          if (*(int *)(lVar6 + 0xe0) == 0) {
            func_0x03280b8c(lVar6);
            lVar6 = *(long *)puVar2;
          }
          uVar11 = **(undefined8 **)(lVar6 + 0xb8);
          lVar10 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831af0);
          func_0x053569b8(lVar10,uVar11,*(undefined8 *)PTR_DAT_07831b00,0);
          plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
          *plVar9 = lVar10;
          func_0x032809c4(plVar9,lVar10);
        }
        uVar5 = func_0x03d50a94(uVar5,lVar10,*(undefined8 *)PTR_DAT_07831ae8);
        uVar5 = func_0x03d5ffd0(uVar5,*(undefined8 *)PTR_DAT_0774ea58);
        uStack_d8 = param_3[1];
        uStack_e0 = *param_3;
        uStack_c8 = param_3[3];
        uStack_d0 = param_3[2];
        uStack_c0 = param_3[4];
        lVar6 = func_0x06b9859c(&uStack_e0,uVar5,0);
        uVar7 = (ulong)(lVar6 != 0);
      }
      else {
        uVar7 = 0;
      }
    }
    else {
      uStack_60 = param_3[4];
      uStack_78 = param_3[1];
      uStack_80 = *param_3;
      uStack_68 = param_3[3];
      uStack_70 = param_3[2];
      uVar5 = func_0x06b86b60(&uStack_58,0);
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      uStack_90 = uStack_60;
      lVar6 = func_0x06b9868c(&uStack_b0,uVar5,0);
      if (lVar6 == 0) goto LAB_06b81620;
      uVar7 = (ulong)(0 < *(int *)(lVar6 + 0x18));
    }
  }
  return uVar7;
}

