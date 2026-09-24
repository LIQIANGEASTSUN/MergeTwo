/* Ghidra 12.1.2 native pseudocode; RVA 0x6A77400; Merger.MergeBoard.Systems.TimeDurationSystem.Tick; status ok */


void Merger_MergeBoard_Systems_TimeDurationSystem__Tick(undefined8 param_1,double *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  double *extraout_x1;
  double dVar12;
  int *piVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  undefined1 auVar18 [12];
  double dStack_190;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  char cStack_170;
  undefined4 uStack_16f;
  undefined3 uStack_16b;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  undefined4 uStack_b8;
  undefined3 uStack_b4;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  undefined4 auStack_78 [2];
  
  lVar14 = 0x7e2a000;
  if ((bRam0000000007e2a70d & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07831600);
    func_0x03280a18(PTR_DAT_07830c10);
    func_0x03280a18(PTR_DAT_07830c18);
    func_0x03280a18(PTR_DAT_0777a560);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07831608);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_07831610);
    func_0x03280a18(PTR_DAT_07831618);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0774ee08);
    func_0x03280a18(PTR_DAT_07831620);
    func_0x03280a18(PTR_DAT_07831628);
    func_0x03280a18(PTR_DAT_07831630);
    func_0x03280a18(PTR_DAT_078315b8);
    func_0x03280a18(PTR_DAT_07831638);
    func_0x03280a18(PTR_DAT_07831640);
    bRam0000000007e2a70d = 1;
  }
  auStack_78[0] = 0;
  dStack_88 = 0.0;
  dStack_90 = 0.0;
  dStack_98 = 0.0;
  dStack_a0 = 0.0;
  dStack_c8 = 0.0;
  dStack_d0 = 0.0;
  dStack_d8 = 0.0;
  dStack_e0 = 0.0;
  if (param_2[1] != 0.0) {
    uVar7 = func_0x03ec4ed4(param_2[1],auStack_78,*(undefined8 *)PTR_DAT_078315b8);
    uVar5 = auStack_78[0];
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    fVar15 = (float)func_0x05797460(0,uVar5,0);
    dStack_118 = param_2[1];
    dStack_120 = *param_2;
    dStack_108 = param_2[3];
    dStack_110 = param_2[2];
    uVar8 = func_0x03d1a64c(*(undefined8 *)PTR_DAT_07831600);
    lVar14 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe68);
    func_0x06015d08(lVar14,0,*(undefined8 *)PTR_DAT_0782fe48,0);
    dStack_188 = dStack_118;
    dStack_190 = dStack_120;
    dStack_178 = dStack_108;
    dStack_180 = dStack_110;
    func_0x03e65be4(&dStack_100,&dStack_190,uVar8,lVar14,*(undefined8 *)PTR_DAT_07831630);
    puVar1 = PTR_DAT_07831640;
    dStack_88 = (double)uStack_e8;
    dStack_90 = (double)uStack_f0;
    dStack_98 = dStack_f8;
    dStack_a0 = dStack_100;
    lVar9 = *(long *)PTR_DAT_07831640;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar9 = *(long *)puVar1;
    }
    param_2 = *(double **)(*(long *)(lVar9 + 0xb8) + 8);
    if (param_2 == (double *)0x0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar9 = *(long *)puVar1;
      }
      lVar14 = **(long **)(lVar9 + 0xb8);
      param_2 = (double *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07831608);
      func_0x05351080(param_2,lVar14,*(undefined8 *)PTR_DAT_07831638,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar10 = (long)param_2;
      func_0x032809c4(plVar10,param_2);
    }
    func_0x04490d50(&dStack_190,&dStack_a0,param_2,*(undefined8 *)PTR_DAT_07831628);
    dStack_98 = dStack_188;
    dStack_a0 = dStack_190;
    dStack_88 = dStack_178;
    dStack_90 = dStack_180;
    plVar10 = (long *)func_0x04490da8(&dStack_a0,*(undefined8 *)PTR_DAT_07831620);
    if (plVar10 != (long *)0x0) {
      lVar9 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_07831610) {
            puVar11 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06b77720;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_07831610,0);
LAB_06b77720:
      param_2 = (double *)(*(code *)*puVar11)(plVar10,puVar11[1]);
      puVar4 = PTR_DAT_07831618;
      puVar3 = PTR_DAT_07830c10;
      puVar2 = PTR_DAT_0777a560;
      puVar1 = PTR_DAT_0774e8e0;
      if (param_2 == (double *)0x0) goto LAB_06b779a4;
LAB_06b77768:
      dVar12 = *param_2;
      uVar7 = (ulong)*(ushort *)((long)dVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)((long)dVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar11 = (undefined8 *)((long)dVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06b777b4;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar1,0);
LAB_06b777b4:
      uVar7 = (*(code *)*puVar11)(param_2,puVar11[1]);
      if ((uVar7 & 1) == 0) {
        lVar14 = 0;
        goto LAB_06b77910;
      }
      dVar12 = *param_2;
      uVar7 = (ulong)*(ushort *)((long)dVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)((long)dVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
            puVar11 = (undefined8 *)((long)dVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06b77810;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar4,0);
LAB_06b77810:
      (*(code *)*puVar11)(&dStack_190,param_2,puVar11[1]);
      dVar17 = dStack_188;
      dVar12 = dStack_190;
      dStack_f8 = dStack_178;
      dStack_100 = dStack_180;
      dStack_a8 = dStack_178;
      dStack_b0 = dStack_180;
      uStack_b8 = uStack_16f;
      uStack_b4 = uStack_16b;
      fVar16 = fVar15;
      if (cStack_170 != '\0') {
        fVar16 = (float)func_0x06fd6310(0);
      }
      if (dVar12 != 0.0) {
        dStack_180 = dStack_a8;
        dStack_188 = dStack_b0;
        dStack_178 = (double)((ulong)CONCAT34(uStack_b4,uStack_b8) << 8);
        dStack_190 = dVar17 - (double)fVar16;
        func_0x03d1dda0(dVar12,&dStack_190,*(undefined8 *)puVar3);
        uVar6 = func_0x03d1fe34(dVar12,&dStack_e0,*(undefined8 *)puVar2);
        if ((dVar17 - (double)fVar16 <= 0.0) && (((uVar6 ^ 1) & 1) == 0)) {
          dStack_c8 = (double)CONCAT71(dStack_c8._1_7_,1);
          dStack_188 = dStack_d8;
          dStack_190 = dStack_e0;
          dStack_178 = dStack_c8;
          dStack_180 = dStack_d0;
          func_0x03d1de74(dVar12,&dStack_190,*(undefined8 *)PTR_DAT_07830c18);
        }
        goto LAB_06b77768;
      }
      func_0x03280cac();
      lVar14 = 0;
    }
  }
  func_0x03280cac();
LAB_06b779a4:
  func_0x03280cac();
  while( true ) {
    auVar18 = func_0x03280ca4(lVar14);
    if (auVar18._8_4_ != 1) break;
    plVar10 = (long *)func_0x072ce910(auVar18._0_8_);
    lVar14 = *plVar10;
    func_0x072ce920();
LAB_06b77910:
    if (param_2 != (double *)0x0) {
      dVar12 = *param_2;
      uVar7 = (ulong)*(ushort *)((long)dVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)((long)dVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar11 = (undefined8 *)((long)dVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_06b77968;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar11 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b77968:
      (*(code *)*puVar11)(param_2,puVar11[1]);
    }
    if (lVar14 == 0) {
      return;
    }
  }
  if (param_2 != (double *)0x0) {
    dVar12 = *param_2;
    uVar7 = (ulong)*(ushort *)((long)dVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)((long)dVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0774e8c8) {
          puVar11 = (undefined8 *)((long)dVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_06b77a50;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_0774e8c8,0);
LAB_06b77a50:
    (*(code *)*puVar11)(param_2,puVar11[1]);
  }
  func_0x03365958(auVar18._0_8_);
  func_0x03280ca4(0);
  dVar12 = (double)func_0x02f09514();
  dVar17 = *extraout_x1;
  if (*(char *)(extraout_x1 + 3) == '\0') {
    *extraout_x1 = dVar17 - dVar12;
  }
  else {
    fVar15 = (float)func_0x06fd6310(0);
    *extraout_x1 = dVar17 - (double)fVar15;
    *(undefined1 *)(extraout_x1 + 3) = 0;
  }
  return;
}

