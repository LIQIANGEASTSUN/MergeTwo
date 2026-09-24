/* Ghidra 12.1.2 bounded pseudocode; RVA 0x666E140; bound 104 bytes; MergeEngine.ECS.Systems.Board.MergeSystem.OnVerifyMergeConfirmed; status ok */


/* WARNING: Possible PIC construction at 0x0676e098: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0676e09c) */
/* WARNING: Removing unreachable block (ram,0x0676e0c8) */
/* WARNING: Removing unreachable block (ram,0x0676e0a0) */
/* WARNING: Removing unreachable block (ram,0x0676e0d0) */
/* WARNING: Removing unreachable block (ram,0x0676e0a4) */
/* WARNING: Removing unreachable block (ram,0x0676e0d4) */

ulong MergeEngine_ECS_Systems_Board_MergeSystem__OnVerifyMergeConfirmed
                (long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  undefined *puVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_30 [8];
  
  puVar2 = &stack0xffffffffffffffe0;
  lVar9 = param_3;
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x68) + 0x88), unaff_x19 = param_1, lVar5 != 0)) {
    lVar9 = 0;
    lVar5 = func_0x06a02444(lVar5,param_2,0);
    unaff_x20 = param_3;
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0x68) + 0x88), unaff_x21 = lVar5, lVar6 != 0)) {
      unaff_x20 = func_0x06a02444(lVar6,param_3,0);
      puVar2 = auStack_30;
      unaff_x19 = 0;
      lVar9 = unaff_x20;
      if ((bRam0000000007e28112 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077e6888);
        bRam0000000007e28112 = 1;
      }
      unaff_x23 = PTR_DAT_077e6888;
      if ((lVar5 == 0) ||
         (uVar3 = func_0x03ced81c(lVar5,*(undefined8 *)PTR_DAT_077e6888), unaff_x20 == 0)) {
        auVar13 = func_0x03280cac();
        lVar6 = auVar13._8_8_;
        lVar5 = auVar13._0_8_;
        uVar4 = MergeEngine_ECS_Systems_Board_MergeSystem__GetAnyItemOnlyResult();
        if ((uVar4 != 0) ||
           (uVar4 = MergeEngine_ECS_Systems_Board_MergeSystem__GetSameItemResult(lVar5,lVar6,lVar9),
           uVar4 != 0)) {
          return uVar4;
        }
        if ((bRam0000000007e2811d & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777bf98);
          func_0x03280a18(PTR_DAT_0777a498);
          bRam0000000007e2811d = 1;
        }
        uVar4 = func_0x0636f334(lVar6,lVar9,*(undefined8 *)(lVar5 + 0x40),0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        if (lVar6 != 0) {
          lVar1 = lVar6;
          if (*(int *)(lVar6 + 0x28) != 3) {
            lVar1 = lVar9;
            lVar9 = lVar6;
          }
          if (((lVar9 != 0) &&
              (lVar9 = func_0x03ced81c(lVar9,*(undefined8 *)PTR_DAT_0777bf98), lVar9 != 0)) &&
             (plVar11 = *(long **)(lVar5 + 0x40), plVar11 != (long *)0x0)) {
            lVar5 = *plVar11;
            uVar3 = *(undefined8 *)(lVar9 + 0x30);
            uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar4 != 0) {
              piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777a498) {
                  puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
                  goto LAB_06770338;
                }
                uVar4 = uVar4 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar4 != 0);
            }
            puVar7 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777a498,0xd);
LAB_06770338:
            uVar4 = (*(code *)*puVar7)(plVar11,uVar3,puVar7[1]);
            if (lVar1 != 0) {
              uVar8 = func_0x055ea870(*(undefined8 *)(lVar9 + 0x30),*(undefined8 *)(lVar1 + 0x30),0)
              ;
              if (uVar4 == 0) {
                return 0;
              }
              if ((uVar8 & 1) == 0) {
                return 0;
              }
              return uVar4;
            }
          }
        }
        uVar4 = func_0x03280cac();
        return uVar4;
      }
      lVar9 = func_0x03ced81c(unaff_x20,*(undefined8 *)unaff_x23);
      param_4 = *(undefined8 *)(unaff_x20 + 0x30);
      puVar12 = &UNK_0676e09c;
      unaff_x21 = param_1;
      unaff_x22 = uVar3;
      goto code_r0x0676e1a8;
    }
  }
  puVar12 = &UNK_0676e1a8;
  auVar13 = func_0x03280cac();
  uVar3 = auVar13._8_8_;
  param_1 = auVar13._0_8_;
code_r0x0676e1a8:
  *(undefined **)(puVar2 + -0x30) = puVar12;
  *(undefined **)(puVar2 + -0x28) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x22;
  *(long *)(puVar2 + -0x18) = unaff_x21;
  *(long *)(puVar2 + -0x10) = unaff_x20;
  *(long *)(puVar2 + -8) = unaff_x19;
  lVar5 = MergeEngine_ECS_Systems_Board_MergeSystem__GetResultItem();
  if (lVar5 != 0) {
    MergeEngine_ECS_Systems_Board_MergeSystem__Merge(param_1,uVar3,lVar9,param_4,lVar5,0);
  }
  return (ulong)(lVar5 != 0);
}

