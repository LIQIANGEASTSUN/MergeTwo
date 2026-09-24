/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8108C; Merger.MergeBoard.Logic.ItemInteractionAffordabilityChecker.CanAfford; status ok */


/* WARNING: Possible PIC construction at 0x06b81104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b81108) */
/* WARNING: Removing unreachable block (ram,0x06b8110c) */

ulong Merger_MergeBoard_Logic_ItemInteractionAffordabilityChecker__CanAfford
                (long param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((bRam0000000007e2a761 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fb10);
    bRam0000000007e2a761 = 1;
  }
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (param_2 == 0) {
    auVar13 = func_0x03280cac();
    pbVar7 = auVar13._8_8_;
    param_1 = auVar13._0_8_;
  }
  else {
    param_3 = *(undefined8 **)PTR_DAT_0782fb10;
    uVar3 = func_0x03d1f018(param_2,&uStack_50);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    pbVar7 = (byte *)&uStack_80;
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    uStack_60 = uStack_30;
  }
  if ((bRam0000000007e2a763 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07773688);
    func_0x03280a18(PTR_DAT_07779818);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e2a763 = 1;
  }
  if ((*pbVar7 & 1) == 0) {
    return 1;
  }
  plVar10 = *(long **)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(pbVar7 + 4);
  if (*(int *)(*(long *)PTR_DAT_077730b8 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  plVar4 = (long *)func_0x0624cb20(uVar1,0);
  if (plVar4 != (long *)0x0) {
    lVar8 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07779818) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06b81234;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    param_3 = (undefined8 *)0x0;
    puVar5 = (undefined8 *)func_0x03256b10(plVar4);
LAB_06b81234:
    uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar10 != (long *)0x0) {
      lVar8 = *plVar10;
      uVar1 = *(undefined4 *)(pbVar7 + 8);
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07773688) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 0xe) * 0x10 + 0x138);
            goto LAB_06b812a4;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_07773688,0xe);
LAB_06b812a4:
                    /* WARNING: Could not recover jumptable at 0x06b812bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)*puVar5)(plVar10,uVar6,uVar1,puVar5[1]);
      return uVar3;
    }
  }
  auVar13 = func_0x03280cac();
  uStack_100 = 0x6b812c4;
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
  uStack_108 = 0;
  if ((*(byte *)(param_3 + 3) & 1) == 0) {
    uVar3 = 1;
  }
  else {
    if (auVar13._8_8_ == 0) {
LAB_06b81620:
      auVar13 = func_0x03280cac();
      puVar2 = PTR_DAT_077730b8;
      if ((bRam0000000007e2a762 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07773688);
        func_0x03280a18(PTR_DAT_077730b8);
        bRam0000000007e2a762 = 1;
      }
      plVar10 = *(long **)(auVar13._0_8_ + 0x10);
      uVar1 = *(undefined4 *)(auVar13._8_8_ + 4);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar6 = func_0x0624cb20(uVar1,0);
      if (plVar10 == (long *)0x0) {
        uVar3 = func_0x03280cac();
        return uVar3;
      }
      lVar8 = *plVar10;
      uVar1 = *(undefined4 *)(auVar13._8_8_ + 8);
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07773688) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_06b816f4;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_07773688,2);
LAB_06b816f4:
                    /* WARNING: Could not recover jumptable at 0x06b81720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)*puVar5)(plVar10,uVar6,uVar1,0,0,0,1,puVar5[1]);
      return uVar3;
    }
    uVar3 = func_0x03d1ecb4(auVar13._8_8_,&uStack_108,*(undefined8 *)PTR_DAT_0777a4f8);
    if ((uVar3 & 1) == 0) {
      uVar3 = func_0x03ce83d8(param_3[4],*(undefined8 *)PTR_DAT_07826868);
      if ((uVar3 & 1) == 0) {
        plVar10 = *(long **)(auVar13._0_8_ + 0x18);
        if (plVar10 == (long *)0x0) goto LAB_06b81620;
        lVar8 = *plVar10;
        uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077c07b8) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_06b81488;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_077c07b8,1);
LAB_06b81488:
        uVar6 = (*(code *)*puVar5)(plVar10,puVar5[1]);
        puVar2 = PTR_DAT_07831b08;
        lVar8 = *(long *)PTR_DAT_07831b08;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          func_0x03280b8c(lVar8);
          lVar8 = *(long *)puVar2;
        }
        lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
        if (lVar11 == 0) {
          if (*(int *)(lVar8 + 0xe0) == 0) {
            func_0x03280b8c(lVar8);
            lVar8 = *(long *)puVar2;
          }
          uVar12 = **(undefined8 **)(lVar8 + 0xb8);
          lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077c1d40);
          func_0x05355fbc(lVar11,uVar12,*(undefined8 *)PTR_DAT_07831af8,0);
          plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
          *plVar10 = lVar11;
          func_0x032809c4(plVar10,lVar11);
        }
        uVar6 = func_0x03d872a8(uVar6,lVar11,*(undefined8 *)PTR_DAT_077c1d38);
        lVar8 = *(long *)puVar2;
        if (*(int *)(lVar8 + 0xe0) == 0) {
          func_0x03280b8c(lVar8);
          lVar8 = *(long *)puVar2;
        }
        lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
        if (lVar11 == 0) {
          if (*(int *)(lVar8 + 0xe0) == 0) {
            func_0x03280b8c(lVar8);
            lVar8 = *(long *)puVar2;
          }
          uVar12 = **(undefined8 **)(lVar8 + 0xb8);
          lVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07831af0);
          func_0x053569b8(lVar11,uVar12,*(undefined8 *)PTR_DAT_07831b00,0);
          plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
          *plVar10 = lVar11;
          func_0x032809c4(plVar10,lVar11);
        }
        uVar6 = func_0x03d50a94(uVar6,lVar11,*(undefined8 *)PTR_DAT_07831ae8);
        uVar6 = func_0x03d5ffd0(uVar6,*(undefined8 *)PTR_DAT_0774ea58);
        uStack_188 = param_3[1];
        uStack_190 = *param_3;
        uStack_178 = param_3[3];
        uStack_180 = param_3[2];
        uStack_170 = param_3[4];
        lVar8 = func_0x06b9859c(&uStack_190,uVar6,0);
        uVar3 = (ulong)(lVar8 != 0);
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uStack_110 = param_3[4];
      uStack_128 = param_3[1];
      uStack_130 = *param_3;
      uStack_118 = param_3[3];
      uStack_120 = param_3[2];
      uVar6 = func_0x06b86b60(&uStack_108,0);
      uStack_158 = uStack_128;
      uStack_160 = uStack_130;
      uStack_148 = uStack_118;
      uStack_150 = uStack_120;
      uStack_140 = uStack_110;
      lVar8 = func_0x06b9868c(&uStack_160,uVar6,0);
      if (lVar8 == 0) goto LAB_06b81620;
      uVar3 = (ulong)(0 < *(int *)(lVar8 + 0x18));
    }
  }
  return uVar3;
}

