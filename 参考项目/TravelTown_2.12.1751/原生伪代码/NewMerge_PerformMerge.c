// NewMerge_PerformMerge RVA 0x6A7170C
// 06b7170c


void target_NewMerge_PerformMerge
               (long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
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
  
  if ((bRam0000000007e2a6e8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c16b0);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0782fe78);
    func_0x03280a18(PTR_DAT_07830a10);
    func_0x03280a18(PTR_DAT_0782fea8);
    func_0x03280a18(PTR_DAT_07830a18);
    func_0x03280a18(PTR_DAT_07830a20);
    func_0x03280a18(PTR_DAT_07808148);
    bRam0000000007e2a6e8 = 1;
  }
  puVar3 = PTR_DAT_0777a498;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  plVar12 = *(long **)(param_1 + 0x10);
  auVar2 = ZEXT816(0);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar13 = param_2[4];
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xd) * 0x10 + 0x138);
          goto LAB_06b71820;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0777a498,0xd);
LAB_06b71820:
    plVar12 = (long *)(*(code *)*puVar7)(plVar12,uVar13,puVar7[1]);
    if (plVar12 == (long *)0x0) {
      uVar13 = 0;
    }
    else {
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07779820) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06b71894;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_07779820,0);
LAB_06b71894:
      uVar13 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    }
    puVar5 = PTR_DAT_07830a20;
    puVar4 = PTR_DAT_07808148;
    auVar2._8_8_ = auStack_90._8_8_;
    auVar2._0_8_ = auStack_90._0_8_;
    plVar12 = *(long **)(param_1 + 0x18);
    if (plVar12 != (long *)0x0) {
      lVar9 = *plVar12;
      uVar1 = *(undefined4 *)(param_2 + 1);
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_077c16b0) {
            puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_06b71918;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_077c16b0,1);
LAB_06b71918:
      uVar13 = (*(code *)*puVar7)(plVar12,uVar13,uVar1,2,0,0,puVar7[1]);
      uStack_a8 = param_4[1];
      uStack_b0 = *param_4;
      uStack_98 = param_4[3];
      uStack_a0 = param_4[2];
      uStack_80 = uStack_b0;
      uStack_78 = uStack_a8;
      uStack_70 = uStack_a0;
      uStack_68 = uStack_98;
      func_0x03ec5690(&uStack_80,uVar13,0,*(undefined8 *)puVar5);
      uStack_c8 = param_4[1];
      uStack_d0 = *param_4;
      uStack_b8 = param_4[3];
      uStack_c0 = param_4[2];
      func_0x06b98e60(&uStack_d0,uVar13,0,0);
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
      uVar8 = func_0x06ba3134(uVar13,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)puVar4,
                              param_2[4],param_3[4],0);
      puVar4 = PTR_DAT_07830a10;
      auVar2._8_8_ = auStack_90._8_8_;
      auVar2._0_8_ = auStack_90._0_8_;
      plVar12 = *(long **)(param_1 + 0x10);
      if (plVar12 != (long *)0x0) {
        lVar9 = *plVar12;
        uVar15 = param_2[4];
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x19) * 0x10 + 0x138);
              goto LAB_06b71a30;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)func_0x03256b10(plVar12,*(long *)puVar3,0x19);
LAB_06b71a30:
        uVar6 = (*(code *)*puVar7)(plVar12,uVar15,puVar7[1]);
        lVar14 = param_4[2];
        lVar9 = func_0x03280ca0(*(undefined8 *)puVar4);
        func_0x06b9a9dc(lVar9,0);
        auStack_90 = func_0x0578e2a8(0);
        uVar15 = func_0x0579043c(auStack_90,0);
        auVar2 = auStack_90;
        if (lVar9 != 0) {
          *(undefined8 *)(lVar9 + 0x10) = uVar15;
          func_0x032809c4();
          *(undefined8 *)(lVar9 + 0x18) = *param_2;
          func_0x032809c4();
          *(undefined8 *)(lVar9 + 0x20) = *param_3;
          func_0x032809c4();
          *(undefined8 *)(lVar9 + 0x28) = uVar13;
          func_0x032809c4((undefined8 *)(lVar9 + 0x28),uVar13);
          *(undefined4 *)(lVar9 + 0x30) = uVar1;
          *(undefined4 *)(lVar9 + 0x40) = uVar6;
          puVar3 = PTR_DAT_0782fe78;
          auVar2 = auStack_90;
          if (lVar14 != 0) {
            func_0x03ec33e4(lVar14,lVar9,*(undefined8 *)PTR_DAT_07830a18);
            lVar9 = param_4[2];
            uVar15 = func_0x03280ca0(*(undefined8 *)puVar3);
            func_0x06b9a828(uVar15,uVar13,uVar8,0);
            auVar2 = auStack_90;
            if (lVar9 != 0) {
              func_0x03ec33e4(lVar9,uVar15,*(undefined8 *)PTR_DAT_0782fea8);
              return;
            }
          }
        }
      }
    }
  }
  auStack_90 = auVar2;
  func_0x03280cac();
  return;
}

