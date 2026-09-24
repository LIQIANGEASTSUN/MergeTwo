/* Ghidra 12.1.2 native pseudocode; RVA 0x666E140; MergeEngine.ECS.Systems.Board.MergeSystem.OnVerifyMergeConfirmed; status ok */

/* WARNING: Possible PIC construction at 0x0676e1c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0676e1c8) */
/* WARNING: Removing unreachable block (ram,0x0676e1d0) */
/* WARNING: Removing unreachable block (ram,0x0676e1ec) */
/* WARNING: Removing unreachable block (ram,0x0676e0a4) */

ulong MergeEngine_ECS_Systems_Board_MergeSystem__OnVerifyMergeConfirmed
                (long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  code **ppcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long unaff_x20;
  long *plVar14;
  long unaff_x21;
  long unaff_x30;
  undefined1 auVar15 [16];
  code *pcStack_50;
  long lStack_30;
  
  lVar12 = param_3;
  lStack_30 = unaff_x20;
  if ((*(long *)(param_1 + 0x68) != 0) && (*(long *)(*(long *)(param_1 + 0x68) + 0x88) != 0)) {
    lVar12 = 0;
    lVar7 = func_0x06a02444();
    lStack_30 = param_3;
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (lVar8 = *(long *)(*(long *)(param_1 + 0x68) + 0x88), unaff_x21 = lVar7, lVar8 != 0)) {
      lVar8 = func_0x06a02444(lVar8,param_3,0);
      ppcVar2 = (code **)&lStack_30;
      param_4 = 0;
      lVar12 = lVar8;
      lStack_30 = unaff_x30;
      if ((bRam0000000007e28112 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077e6888);
        bRam0000000007e28112 = 1;
      }
      puVar1 = PTR_DAT_077e6888;
      if ((lVar7 != 0) &&
         (uVar3 = func_0x03ced81c(lVar7,*(undefined8 *)PTR_DAT_077e6888), lVar8 != 0)) {
        uVar4 = func_0x03ced81c(lVar8,*(undefined8 *)puVar1);
        uVar5 = MergeEngine_ECS_Systems_Board_MergeSystem__TryMergeItems
                          (param_1,uVar3,uVar4,*(undefined8 *)(lVar8 + 0x30));
        return (ulong)((uVar5 & 1) != 0);
      }
      uVar3 = 0x676e0ec;
      auVar15 = func_0x03280cac();
      goto SUB_0676e0ec;
    }
  }
  param_1 = unaff_x21;
  auVar15 = func_0x03280cac();
  lVar7 = auVar15._8_8_;
  ppcVar2 = &pcStack_50;
  pcStack_50 = MergeEngine_ECS_Systems_Board_MergeSystem__TryMergeItems;
  uVar3 = 0x676e1c8;
  lVar8 = lVar12;
SUB_0676e0ec:
  lVar11 = auVar15._8_8_;
  lVar6 = auVar15._0_8_;
  *(undefined8 *)((long)ppcVar2 + -0x20) = uVar3;
  *(long *)((long)ppcVar2 + -0x18) = param_1;
  *(long *)((long)ppcVar2 + -0x10) = lVar8;
  *(undefined8 *)((long)ppcVar2 + -8) = param_4;
  uVar5 = func_0x06770014();
  if ((uVar5 != 0) || (uVar5 = func_0x06770128(lVar6,lVar11,lVar12), uVar5 != 0)) {
    return uVar5;
  }
  *(undefined8 *)((long)ppcVar2 + -0x30) = *(undefined8 *)((long)ppcVar2 + -0x20);
  *(long *)((long)ppcVar2 + -0x20) = lVar7;
  *(undefined8 *)((long)ppcVar2 + -0x18) = *(undefined8 *)((long)ppcVar2 + -0x18);
  *(undefined8 *)((long)ppcVar2 + -0x10) = *(undefined8 *)((long)ppcVar2 + -0x10);
  *(undefined8 *)((long)ppcVar2 + -8) = *(undefined8 *)((long)ppcVar2 + -8);
  if ((bRam0000000007e2811d & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2811d = 1;
  }
  uVar5 = func_0x0636f334(lVar11,lVar12,*(undefined8 *)(lVar6 + 0x40),0);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (lVar11 != 0) {
    lVar7 = lVar11;
    if (*(int *)(lVar11 + 0x28) != 3) {
      lVar7 = lVar12;
      lVar12 = lVar11;
    }
    if (((lVar12 != 0) &&
        (lVar12 = func_0x03ced81c(lVar12,*(undefined8 *)PTR_DAT_0777bf98), lVar12 != 0)) &&
       (plVar14 = *(long **)(lVar6 + 0x40), plVar14 != (long *)0x0)) {
      lVar8 = *plVar14;
      uVar3 = *(undefined8 *)(lVar12 + 0x30);
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar9 = (undefined8 *)(lVar8 + (long)(*piVar13 + 0xd) * 0x10 + 0x138);
            goto LAB_06770338;
          }
          uVar5 = uVar5 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0777a498,0xd);
LAB_06770338:
      uVar5 = (*(code *)*puVar9)(plVar14,uVar3,puVar9[1]);
      if (lVar7 != 0) {
        uVar10 = func_0x055ea870(*(undefined8 *)(lVar12 + 0x30),*(undefined8 *)(lVar7 + 0x30),0);
        if (uVar5 == 0) {
          return 0;
        }
        if ((uVar10 & 1) == 0) {
          return 0;
        }
        return uVar5;
      }
    }
  }
  uVar5 = func_0x03280cac();
  return uVar5;
}

