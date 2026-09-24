/* Ghidra 12.1.2 native pseudocode; RVA 0x666E020; MergeEngine.ECS.Systems.Board.MergeSystem.PerformTryCombineItems; status ok */

ulong MergeEngine_ECS_Systems_Board_MergeSystem__PerformTryCombineItems
                (undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  uint uVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  
  lVar6 = param_3;
  if ((bRam0000000007e28112 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e6888);
    bRam0000000007e28112 = 1;
  }
  puVar2 = PTR_DAT_077e6888;
  if ((param_2 != 0) &&
     (uVar3 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_077e6888), param_3 != 0)) {
    uVar4 = func_0x03ced81c(param_3,*(undefined8 *)puVar2);
    uVar5 = MergeEngine_ECS_Systems_Board_MergeSystem__TryMergeItems
                      (param_1,uVar3,uVar4,*(undefined8 *)(param_3 + 0x30));
    if ((uVar5 & 1) == 0) {
      uVar12 = 0;
    }
    else if (param_4 == 0) {
      uVar12 = 1;
    }
    else {
      uVar12 = 1;
      (**(code **)(param_4 + 0x18))
                (*(undefined8 *)(param_4 + 0x40),1,1,0,*(undefined8 *)(param_4 + 0x28));
    }
    return (ulong)uVar12;
  }
  auVar14 = func_0x03280cac();
  lVar9 = auVar14._8_8_;
  lVar10 = auVar14._0_8_;
  uVar5 = func_0x06770014();
  if ((uVar5 != 0) || (uVar5 = func_0x06770128(lVar10,lVar9,lVar6), uVar5 != 0)) {
    return uVar5;
  }
  if ((bRam0000000007e2811d & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2811d = 1;
  }
  uVar5 = func_0x0636f334(lVar9,lVar6,*(undefined8 *)(lVar10 + 0x40),0);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (lVar9 != 0) {
    lVar1 = lVar9;
    if (*(int *)(lVar9 + 0x28) != 3) {
      lVar1 = lVar6;
      lVar6 = lVar9;
    }
    if (((lVar6 != 0) &&
        (lVar6 = func_0x03ced81c(lVar6,*(undefined8 *)PTR_DAT_0777bf98), lVar6 != 0)) &&
       (plVar13 = *(long **)(lVar10 + 0x40), plVar13 != (long *)0x0)) {
      lVar10 = *plVar13;
      uVar3 = *(undefined8 *)(lVar6 + 0x30);
      uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar11 + 0xd) * 0x10 + 0x138);
            goto LAB_06770338;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)func_0x03256b10(plVar13,*(long *)PTR_DAT_0777a498,0xd);
LAB_06770338:
      uVar5 = (*(code *)*puVar7)(plVar13,uVar3,puVar7[1]);
      if (lVar1 != 0) {
        uVar8 = func_0x055ea870(*(undefined8 *)(lVar6 + 0x30),*(undefined8 *)(lVar1 + 0x30),0);
        if (uVar5 == 0) {
          return 0;
        }
        if ((uVar8 & 1) == 0) {
          return 0;
        }
        return uVar5;
      }
    }
  }
  uVar5 = func_0x03280cac();
  return uVar5;
}

