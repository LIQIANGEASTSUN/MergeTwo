/* Ghidra 12.1.2 bounded pseudocode; RVA 0x666D9B0; bound 132 bytes; MergeEngine.ECS.Systems.Board.MergeSystem.CanCombineItems; status ok */


ulong MergeEngine_ECS_Systems_Board_MergeSystem__CanCombineItems
                (long param_1,long param_2,long param_3)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  int *piVar15;
  long unaff_x19;
  undefined8 uVar16;
  long unaff_x20;
  long unaff_x21;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined *unaff_x30;
  undefined1 auVar17 [16];
  
  puVar7 = &stack0xffffffffffffffd0;
  lVar12 = param_3;
  if ((bRam0000000007e2810e & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e6888);
    bRam0000000007e2810e = 1;
  }
  puVar5 = PTR_DAT_077e6888;
  puVar6 = (undefined *)0x7e28000;
  if ((param_2 == 0) ||
     (lVar11 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_077e6888), puVar6 = puVar5,
     param_3 == 0)) {
    unaff_x22 = puVar6;
    unaff_x30 = &LAB_0676da34;
    auVar17 = func_0x03280cac();
    lVar11 = auVar17._8_8_;
    lVar8 = auVar17._0_8_;
  }
  else {
    lVar12 = func_0x03ced81c(param_3,*(undefined8 *)puVar5);
    puVar7 = (undefined1 *)register0x00000008;
    lVar8 = param_1;
    param_1 = unaff_x19;
    param_3 = unaff_x20;
    param_2 = unaff_x21;
  }
  *(undefined **)(puVar7 + -0x20) = unaff_x30;
  *(long *)(puVar7 + -0x18) = param_2;
  *(long *)(puVar7 + -0x10) = param_3;
  *(long *)(puVar7 + -8) = param_1;
  if (((((lVar11 != 0) && (lVar12 != 0)) &&
       (uVar13 = func_0x0676fe64(lVar8,lVar11,lVar12), (uVar13 & 1) != 0)) &&
      ((uVar13 = func_0x0676fef8(lVar8,lVar11,lVar12), (uVar13 & 1) != 0 &&
       (uVar13 = func_0x0676fef8(lVar8,lVar12,lVar11), (uVar13 & 1) != 0)))) &&
     ((uVar13 = func_0x0676fd20(lVar8,lVar11,lVar12), (uVar13 & 1) != 0 ||
      (uVar13 = func_0x0636efd0(lVar11,lVar12,*(undefined8 *)(lVar8 + 0x40),0), (uVar13 & 1) != 0)))
     ) {
    return 1;
  }
  plVar14 = *(long **)(lVar8 + 0x40);
  *(undefined8 *)(puVar7 + -0x30) = *(undefined8 *)(puVar7 + -0x20);
  *(undefined8 *)(puVar7 + -0x28) = unaff_x23;
  *(undefined **)(puVar7 + -0x20) = unaff_x22;
  *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar7 + -0x18);
  *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
  *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
  if ((bRam0000000007e25418 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98,lVar12,plVar14,0);
    func_0x03280a18(PTR_DAT_0777e638);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e25418 = 1;
  }
  puVar5 = PTR_DAT_0777e638;
  if (((lVar11 != 0) && (lVar12 != 0)) &&
     ((*(int *)(lVar11 + 0x28) == 3 || (*(int *)(lVar12 + 0x28) == 3)))) {
    lVar8 = func_0x03ced81c(lVar11,*(undefined8 *)PTR_DAT_0777e638);
    lVar9 = func_0x03ced81c(lVar12,*(undefined8 *)puVar5);
    if (((lVar8 == 0) || (uVar13 = func_0x069fd714(lVar8,0), (uVar13 & 1) == 0)) &&
       ((lVar9 == 0 || (uVar13 = func_0x069fd714(lVar9,0), (uVar13 & 1) == 0)))) {
      iVar2 = *(int *)(lVar11 + 0x28);
      lVar8 = lVar12;
      if (iVar2 != 3) {
        lVar8 = lVar11;
      }
      lVar8 = func_0x03ced81c(lVar8,*(undefined8 *)PTR_DAT_0777bf98);
      if (lVar8 != 0) {
        if (iVar2 != 3) {
          lVar11 = lVar12;
        }
        uVar13 = func_0x055ea870(*(undefined8 *)(lVar8 + 0x30),*(undefined8 *)(lVar11 + 0x30),0);
        if ((uVar13 & 1) == 0) {
          return 0;
        }
        if (plVar14 != (long *)0x0) {
          lVar12 = *plVar14;
          uVar16 = *(undefined8 *)(lVar8 + 0x30);
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0777a498) {
                puVar10 = (undefined8 *)(lVar12 + (long)(*piVar15 + 0xd) * 0x10 + 0x138);
                goto code_r0x0636f4ac;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0777a498,0xd);
code_r0x0636f4ac:
          lVar12 = (*(code *)*puVar10)(plVar14,uVar16,puVar10[1]);
          return (ulong)(lVar12 != 0);
        }
      }
      func_0x03280cac();
      puVar5 = PTR_DAT_077e64f0;
      *(undefined **)(puVar7 + -0x50) = &UNK_0636f4cc;
      *(long *)(puVar7 + -0x40) = lVar12;
      *(long **)(puVar7 + -0x38) = plVar14;
      if ((bRam0000000007e25419 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077e64f0);
        bRam0000000007e25419 = 1;
      }
      uVar16 = func_0x03280ca0(*(undefined8 *)puVar5);
      func_0x057da5fc(uVar16,0);
      **(undefined8 **)(*(long *)puVar5 + 0xb8) = uVar16;
      uVar13 = *(ulong *)(*(long *)puVar5 + 0xb8);
      if (iRam00000000080486b8 != 0) {
        puVar1 = (ulong *)((uVar13 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << (uVar13 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return uVar13;
    }
  }
  return 0;
}

