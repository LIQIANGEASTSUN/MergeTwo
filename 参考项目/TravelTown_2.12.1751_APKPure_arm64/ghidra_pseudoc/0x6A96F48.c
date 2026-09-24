/* Ghidra 12.1.2 native pseudocode; RVA 0x6A96F48; Merger.MergeBoard.Factories.MergeBoardItemsEntityFactory.CreateExpandableComponent; status ok */


ulong Merger_MergeBoard_Factories_MergeBoardItemsEntityFactory__CreateExpandableComponent
                (undefined8 *param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uStack_110;
  ulong uStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000007e2a80a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e598);
    func_0x03280a18(PTR_DAT_07830c18);
    func_0x03280a18(PTR_DAT_07832560);
    func_0x03280a18(PTR_DAT_077cd968);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0774e6b0);
    func_0x03280a18(PTR_DAT_0782fe88);
    func_0x03280a18(PTR_DAT_077cf5c8);
    func_0x03280a18(PTR_DAT_078266a8);
    func_0x03280a18(PTR_DAT_077cf5c0);
    func_0x03280a18(PTR_DAT_07832568);
    bRam0000000007e2a80a = 1;
  }
  puVar1 = PTR_DAT_07779820;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  lStack_a8 = 0;
  lStack_b0 = 0;
  lStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (param_4 != (long *)0x0) {
    lVar6 = *param_4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0777e548) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_06b97088;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(param_4,*(long *)PTR_DAT_0777e548,2);
LAB_06b97088:
    lVar6 = (*(code *)*puVar3)(param_4,puVar3[1]);
    lVar7 = *param_4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06b970e4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(param_4,*(long *)puVar1,0);
LAB_06b970e4:
    uVar4 = (*(code *)*puVar3)(param_4,puVar3[1]);
    puVar2 = PTR_DAT_07832568;
    puVar1 = PTR_DAT_0774e598;
    if (lVar6 != 0) {
      uStack_60 = CONCAT44(uStack_60._4_4_,*(undefined4 *)(lVar6 + 0x14));
      uVar5 = func_0x03280b94(*(undefined8 *)PTR_DAT_0774e6b0,&uStack_60);
      uVar4 = func_0x055f7edc(*(undefined8 *)puVar2,uVar4,uVar5,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        func_0x03280b8c(*(long *)puVar1);
      }
      func_0x06fa9a68(uVar4,0);
      lStack_a8 = 0;
      lStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
      uStack_c0 = CONCAT44(*(undefined4 *)(lVar6 + 0x14),*(undefined4 *)(lVar6 + 0x14));
      uStack_b8 = (ulong)CONCAT15(*(undefined1 *)(lVar6 + 0x36),*(undefined5 *)(lVar6 + 0x30));
      if ((*(long *)(lVar6 + 0x20) == 0) ||
         (lVar7 = func_0x03d5ffd0(*(long *)(lVar6 + 0x20),*(undefined8 *)PTR_DAT_077cd968),
         lVar7 == 0)) {
        puVar1 = PTR_DAT_077cf5c8;
        lVar7 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cf5c0);
        func_0x04143c38(lVar7,*(undefined8 *)puVar1);
      }
      lStack_b0 = lVar7;
      func_0x032809c4(&lStack_b0,lVar7);
      if ((*(long *)(lVar6 + 0x28) == 0) ||
         (lVar7 = func_0x03d5ffd0(*(long *)(lVar6 + 0x28),*(undefined8 *)PTR_DAT_07832560),
         lVar7 == 0)) {
        puVar1 = PTR_DAT_0782fe88;
        lVar7 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078266a8);
        func_0x04143c38(lVar7,*(undefined8 *)puVar1);
      }
      lStack_a8 = lVar7;
      func_0x032809c4(&lStack_a8,lVar7);
      uStack_a0 = CONCAT71(uStack_a0._1_7_,*(undefined1 *)(lVar6 + 0x35));
      uStack_a0 = CONCAT44(*(undefined4 *)(lVar6 + 0x38),(undefined4)uStack_a0);
      lStack_98 = *(long *)(lVar6 + 0x50);
      uVar8 = func_0x032809c4(&lStack_98);
      lVar6 = lStack_98;
      uStack_88 = uStack_b8;
      uStack_90 = uStack_c0;
      lStack_78 = lStack_a8;
      lStack_80 = lStack_b0;
      uStack_70 = uStack_a0;
      if (lStack_98 != 0) {
        uStack_f0 = uStack_a0;
        lStack_e8 = lStack_98;
        uStack_108 = uStack_b8;
        uStack_110 = uStack_c0;
        lStack_f8 = lStack_a8;
        lStack_100 = lStack_b0;
        func_0x06b97304(&uStack_e0,uVar8,param_3,&uStack_110);
        if (param_3 == 0) goto LAB_06b972f0;
        uStack_58 = uStack_d8;
        uStack_60 = uStack_e0;
        uStack_48 = uStack_c8;
        uStack_50 = uStack_d0;
        uVar8 = func_0x03d1de74(param_3,&uStack_60,*(undefined8 *)PTR_DAT_07830c18);
      }
      param_1[1] = uStack_88;
      *param_1 = uStack_90;
      param_1[3] = lStack_78;
      param_1[2] = lStack_80;
      param_1[4] = uStack_70;
      param_1[5] = lVar6;
      return uVar8;
    }
  }
LAB_06b972f0:
  lVar6 = func_0x03280cac();
  return (ulong)(*(long *)(lVar6 + 0x28) != 0);
}

