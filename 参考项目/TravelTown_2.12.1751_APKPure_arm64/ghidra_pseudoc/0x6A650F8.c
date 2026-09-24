/* Ghidra 12.1.2 native pseudocode; RVA 0x6A650F8; Merger.MergeBoard.Systems.AnyItemMergeSystem.PerformMerge; status ok */


void Merger_MergeBoard_Systems_AnyItemMergeSystem__PerformMerge
               (long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000007e2a69c & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c16b0);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0782fe78);
    func_0x03280a18(PTR_DAT_07830a10);
    func_0x03280a18(PTR_DAT_0782fea8);
    func_0x03280a18(PTR_DAT_07830a18);
    func_0x03280a18(PTR_DAT_07830a20);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a69c = 1;
  }
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  auVar2 = ZEXT816(0);
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar5 = (long *)func_0x06b866a8(*(long *)(param_1 + 0x20),*param_2,*param_3,0);
    uVar7 = 0;
    if (plVar5 != (long *)0x0) {
      lVar10 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07779820) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06b65210;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_07779820,0);
LAB_06b65210:
      uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
    puVar4 = PTR_DAT_07830a20;
    puVar3 = PTR_DAT_07830a10;
    auVar2._8_8_ = auStack_90._8_8_;
    auVar2._0_8_ = auStack_90._0_8_;
    plVar5 = *(long **)(param_1 + 0x18);
    if (plVar5 != (long *)0x0) {
      lVar10 = *plVar5;
      uVar1 = *(undefined4 *)(param_2 + 1);
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_077c16b0) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_06b65294;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_077c16b0,1);
LAB_06b65294:
      uVar7 = (*(code *)*puVar6)(plVar5,uVar7,uVar1,2,0,0,puVar6[1]);
      uStack_a8 = param_4[1];
      uStack_b0 = *param_4;
      uStack_98 = param_4[3];
      uStack_a0 = param_4[2];
      uStack_80 = uStack_b0;
      uStack_78 = uStack_a8;
      uStack_70 = uStack_a0;
      uStack_68 = uStack_98;
      func_0x03ec5690(&uStack_80,uVar7,0,*(undefined8 *)puVar4);
      uStack_c8 = param_4[1];
      uStack_d0 = *param_4;
      uStack_b8 = param_4[3];
      uStack_c0 = param_4[2];
      func_0x06b98e60(&uStack_d0,uVar7,0,0);
      uStack_e8 = param_4[1];
      uStack_f0 = *param_4;
      uStack_d8 = param_4[3];
      uStack_e0 = param_4[2];
      func_0x06b98f6c(&uStack_f0,*param_2,0);
      uStack_108 = param_4[1];
      uStack_110 = *param_4;
      uStack_f8 = param_4[3];
      uStack_100 = param_4[2];
      func_0x06b98f6c(&uStack_110,*param_3,0);
      lVar13 = param_4[2];
      lVar10 = func_0x03280ca0(*(undefined8 *)puVar3);
      func_0x06b9a9dc(lVar10,0);
      auStack_90 = func_0x0578e2a8(0);
      uVar8 = func_0x0579043c(auStack_90,0);
      auVar2 = auStack_90;
      if (lVar10 != 0) {
        *(undefined8 *)(lVar10 + 0x10) = uVar8;
        func_0x032809c4();
        *(undefined8 *)(lVar10 + 0x18) = *param_2;
        func_0x032809c4();
        *(undefined8 *)(lVar10 + 0x20) = *param_3;
        func_0x032809c4();
        *(undefined8 *)(lVar10 + 0x28) = uVar7;
        func_0x032809c4((undefined8 *)(lVar10 + 0x28),uVar7);
        *(undefined4 *)(lVar10 + 0x30) = *(undefined4 *)(param_2 + 1);
        puVar4 = PTR_DAT_0782fe78;
        puVar3 = PTR_DAT_0774f158;
        auVar2 = auStack_90;
        if (lVar13 != 0) {
          func_0x03ec33e4(lVar13,lVar10,*(undefined8 *)PTR_DAT_07830a18);
          uVar8 = *(undefined8 *)puVar3;
          lVar10 = param_4[2];
          uVar8 = func_0x06ba3134(uVar7,*(undefined8 *)(param_1 + 0x10),uVar8,uVar8,uVar8,0);
          uVar9 = func_0x03280ca0(*(undefined8 *)puVar4);
          func_0x06b9a828(uVar9,uVar7,uVar8,0);
          auVar2 = auStack_90;
          if (lVar10 != 0) {
            func_0x03ec33e4(lVar10,uVar9,*(undefined8 *)PTR_DAT_0782fea8);
            return;
          }
        }
      }
    }
  }
  auStack_90 = auVar2;
  func_0x03280cac();
  return;
}

