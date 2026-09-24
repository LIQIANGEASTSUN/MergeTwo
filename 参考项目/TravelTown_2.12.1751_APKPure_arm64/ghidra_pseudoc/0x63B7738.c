/* Ghidra 12.1.2 native pseudocode; RVA 0x63B7738; MergeEngine.ECS.Systems.Timing.TimeSystem.ProcessComponents; status ok */


ulong MergeEngine_ECS_Systems_Timing_TimeSystem__ProcessComponents(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *unaff_x22;
  long *plVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [12];
  
  if ((bRam0000000007e26202 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_077f1ad0);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_077f1ad8);
    func_0x03280a18(PTR_DAT_077f1ac8);
    bRam0000000007e26202 = 1;
  }
  plVar12 = (long *)PTR_DAT_0774e8c8;
  plVar3 = (long *)0x0;
  puVar10 = (undefined *)0x7e26000;
  if (param_2 != 0) {
    plVar3 = (long *)func_0x04545bc8(param_2,*(undefined8 *)PTR_DAT_077f1ad8);
    puVar2 = PTR_DAT_077f1ad0;
    puVar10 = PTR_DAT_077f1ac8;
    puVar1 = PTR_DAT_0774e8e0;
    puVar11 = (undefined *)0x7e26000;
    if (plVar3 != (long *)0x0) {
      do {
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_064b7838;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(plVar3,*(long *)puVar1,0);
LAB_064b7838:
        uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar8 & 1) == 0) {
          puVar11 = (undefined *)0x0;
          goto LAB_064b7928;
        }
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_064b7894;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(plVar3,*(long *)puVar2,0);
LAB_064b7894:
        lVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if (lVar7 == 0) goto LAB_064b79a4;
        if (*(char *)(lVar7 + 0x28) == '\0') {
          dVar14 = *(double *)(lVar7 + 0x20);
        }
        else {
          dVar14 = 0.0;
          *(undefined8 *)(lVar7 + 0x20) = 0;
          *(undefined1 *)(lVar7 + 0x28) = 0;
        }
        fVar13 = (float)func_0x06fe7f44(0);
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          func_0x03280b8c();
        }
        if (cRam0000000007e26266 == '\0') {
          func_0x03280a18(puVar10);
          cRam0000000007e26266 = '\x01';
        }
        lVar5 = *(long *)puVar10;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          func_0x03280b8c();
          lVar5 = *(long *)puVar10;
        }
        *(double *)(lVar7 + 0x20) = dVar14 + **(double **)(lVar5 + 0xb8) * (double)fVar13;
      } while( true );
    }
    goto LAB_064b79ac;
  }
LAB_064b79a8:
  plVar12 = unaff_x22;
  func_0x03280cac();
  puVar11 = puVar10;
LAB_064b79ac:
  func_0x03280cac();
  while( true ) {
    auVar15 = func_0x03280ca4(puVar11);
    if (auVar15._8_4_ != 1) break;
    puVar4 = (undefined8 *)func_0x072ce910();
    puVar11 = (undefined *)*puVar4;
    uVar8 = func_0x072ce920();
LAB_064b7928:
    if (plVar3 != (long *)0x0) {
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *plVar12) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_064b7978;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar3,*plVar12,0);
LAB_064b7978:
      uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
    if (puVar11 == (undefined *)0x0) {
      return uVar8;
    }
  }
  if (plVar3 != (long *)0x0) {
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *plVar12) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_064b7a44;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar3,*plVar12,0);
LAB_064b7a44:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  func_0x03365958(auVar15._0_8_);
  func_0x03280ca4(0);
  uVar8 = func_0x02f09514();
  puVar10 = PTR_DAT_077f1ae0;
  if ((bRam0000000007e26203 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077f1ae0);
    bRam0000000007e26203 = 1;
  }
  uVar6 = *(undefined8 *)puVar10;
  return uVar8;
LAB_064b79a4:
  func_0x03280cac();
  unaff_x22 = plVar12;
  goto LAB_064b79a8;
}

