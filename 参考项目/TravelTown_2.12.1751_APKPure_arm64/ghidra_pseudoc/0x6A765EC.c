/* Ghidra 12.1.2 native pseudocode; RVA 0x6A765EC; Merger.MergeBoard.Systems.TimeCycleSystem.Tick; status ok */


void Merger_MergeBoard_Systems_TimeCycleSystem__Tick(undefined8 param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 auStack_220 [80];
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
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
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  float afStack_68 [2];
  
  plVar12 = (long *)0x7e2a000;
  if ((bRam0000000007e2a708 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831570);
    func_0x03280a18(PTR_DAT_07831578);
    func_0x03280a18(PTR_DAT_07831580);
    func_0x03280a18(PTR_DAT_0782ff38);
    func_0x03280a18(PTR_DAT_07831588);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_07831590);
    func_0x03280a18(PTR_DAT_07831598);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_078315a0);
    func_0x03280a18(PTR_DAT_078315a8);
    func_0x03280a18(PTR_DAT_078315b0);
    func_0x03280a18(PTR_DAT_078315b8);
    func_0x03280a18(PTR_DAT_078315c0);
    func_0x03280a18(PTR_DAT_078315c8);
    bRam0000000007e2a708 = 1;
  }
  afStack_68[0] = 0.0;
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  if (param_2[1] != 0) {
    uVar6 = func_0x03ec4ed4(param_2[1],afStack_68,*(undefined8 *)PTR_DAT_078315b8);
    if ((uVar6 & 1) == 0) {
      return;
    }
    lStack_f8 = param_2[1];
    lStack_100 = *param_2;
    lStack_e8 = param_2[3];
    lStack_f0 = param_2[2];
    uVar7 = func_0x03d19e10(*(undefined8 *)PTR_DAT_07831570);
    lStack_1a8 = lStack_f8;
    lStack_1b0 = lStack_100;
    lStack_198 = lStack_e8;
    lStack_1a0 = lStack_f0;
    func_0x03e64d84(&lStack_150,&lStack_1b0,uVar7,0,*(undefined8 *)PTR_DAT_078315b0);
    puVar1 = PTR_DAT_078315c8;
    lStack_88 = uStack_148;
    lStack_90 = lStack_150;
    lStack_78 = uStack_138;
    lStack_80 = uStack_140;
    lVar8 = *(long *)PTR_DAT_078315c8;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar8 = *(long *)puVar1;
    }
    plVar12 = *(long **)(*(long *)(lVar8 + 0xb8) + 8);
    if (plVar12 == (long *)0x0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar8 = *(long *)puVar1;
      }
      uVar7 = **(undefined8 **)(lVar8 + 0xb8);
      plVar12 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07831588);
      func_0x0534f70c(plVar12,uVar7,*(undefined8 *)PTR_DAT_078315c0,0);
      plVar9 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar9 = (long)plVar12;
      func_0x032809c4(plVar9,plVar12);
    }
    param_3 = *(long *)PTR_DAT_078315a8;
    func_0x04487a3c(&lStack_1b0,&lStack_90,plVar12);
    lStack_88 = lStack_1a8;
    lStack_90 = lStack_1b0;
    lStack_78 = lStack_198;
    lStack_80 = lStack_1a0;
    plVar9 = (long *)func_0x04487a94(&lStack_90,*(undefined8 *)PTR_DAT_078315a0);
    if (plVar9 != (long *)0x0) {
      lVar8 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_07831590) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06b7686c;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      param_3 = 0;
      puVar10 = (undefined8 *)func_0x03256b10(plVar9);
LAB_06b7686c:
      plVar12 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      puVar5 = PTR_DAT_07831598;
      puVar4 = PTR_DAT_07831580;
      puVar3 = PTR_DAT_07831578;
      puVar2 = PTR_DAT_0782ff38;
      puVar1 = PTR_DAT_0774e8e0;
      if (plVar12 == (long *)0x0) goto LAB_06b76adc;
LAB_06b768b0:
      lVar8 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06b768fc;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      param_3 = 0;
      puVar10 = (undefined8 *)func_0x03256b10(plVar12);
LAB_06b768fc:
      uVar6 = (*(code *)*puVar10)(plVar12,puVar10[1]);
      if ((uVar6 & 1) == 0) {
        param_2 = (long *)0x0;
        goto LAB_06b76a4c;
      }
      lVar8 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06b76958;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar12,*(long *)puVar5,0);
LAB_06b76958:
      (*(code *)*puVar10)(&lStack_1b0,plVar12,puVar10[1]);
      lVar8 = lStack_1b0;
      func_0x072ce970(&lStack_150,&lStack_1a8,0x50);
      func_0x072ce970(&uStack_e0,&lStack_150,0x50);
      lStack_1c8 = param_2[1];
      lStack_1d0 = *param_2;
      lStack_1b8 = param_2[3];
      lStack_1c0 = param_2[2];
      if ((char)uStack_98 == '\0') {
        lStack_1b0 = lStack_1d0;
        lStack_1a8 = lStack_1c8;
        lStack_1a0 = lStack_1c0;
        lStack_198 = lStack_1b8;
        func_0x06b76be4((double)afStack_68[0],param_1,&lStack_1b0,&uStack_e0,lVar8);
      }
      else {
        uStack_98 = uStack_98 & 0xffffffffffffff00;
      }
      param_3 = 0x50;
      func_0x072ce970(auStack_220,&uStack_e0);
      if (lVar8 != 0) {
        param_3 = *(long *)puVar2;
        func_0x072ce970(&lStack_1b0,auStack_220,0x50);
        func_0x03d1dcc8(lVar8,&lStack_1b0);
        if (((uStack_b0._4_4_ < 1) || (uStack_98._2_1_ != '\0')) ||
           (uVar6 = func_0x06b9c478(&uStack_e0,0), (uVar6 & 1) != 0)) {
          param_3 = *(long *)puVar4;
          func_0x03d1caf0(lVar8,0);
        }
        else {
          func_0x03d1c2d0(lVar8,*(undefined8 *)puVar3);
        }
        goto LAB_06b768b0;
      }
      func_0x03280cac();
    }
  }
  func_0x03280cac();
LAB_06b76adc:
  func_0x03280cac();
  while( true ) {
    auVar14 = func_0x03280ca4(param_2);
    if (auVar14._8_4_ != 1) break;
    param_2 = (long *)func_0x072ce910(auVar14._0_8_);
    param_2 = (long *)*param_2;
    func_0x072ce920();
LAB_06b76a4c:
    if (plVar12 != (long *)0x0) {
      lVar8 = *plVar12;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06b76aa4;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      param_3 = 0;
      puVar10 = (undefined8 *)func_0x03256b10(plVar12);
LAB_06b76aa4:
      (*(code *)*puVar10)(plVar12,puVar10[1]);
    }
    if (param_2 == (long *)0x0) {
      return;
    }
  }
  if (plVar12 != (long *)0x0) {
    lVar8 = *plVar12;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar10 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06b76b8c;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    param_3 = 0;
    puVar10 = (undefined8 *)func_0x03256b10(plVar12);
LAB_06b76b8c:
    (*(code *)*puVar10)(plVar12,puVar10[1]);
  }
  func_0x03365958(auVar14._0_8_);
  func_0x03280ca4(0);
  auVar13 = func_0x02f09514();
  puVar10 = auVar13._8_8_;
  uStack_240 = 0x6b76bb0;
  if (*(char *)(param_3 + 0x48) == '\0') {
    uStack_258 = puVar10[1];
    uStack_260 = *puVar10;
    uStack_248 = puVar10[3];
    uStack_250 = puVar10[2];
    func_0x06b76be4(auVar13._0_8_,&uStack_260);
  }
  else {
    *(undefined1 *)(param_3 + 0x48) = 0;
  }
  return;
}

