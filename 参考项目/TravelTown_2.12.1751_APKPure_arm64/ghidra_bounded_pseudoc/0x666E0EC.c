/* Ghidra 12.1.2 bounded pseudocode; RVA 0x666E0EC; bound 84 bytes; MergeEngine.ECS.Systems.Board.MergeSystem.GetResultItem; status ok */


long MergeEngine_ECS_Systems_Board_MergeSystem__GetResultItem
               (long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  
  lVar1 = MergeEngine_ECS_Systems_Board_MergeSystem__GetAnyItemOnlyResult();
  if ((lVar1 != 0) || (lVar1 = func_0x06770128(param_1,param_2,param_3), lVar1 != 0)) {
    return lVar1;
  }
  if ((bRam0000000007e2811d & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2811d = 1;
  }
  uVar2 = func_0x0636f334(param_2,param_3,*(undefined8 *)(param_1 + 0x40),0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (param_2 != 0) {
    lVar1 = param_2;
    if (*(int *)(param_2 + 0x28) != 3) {
      lVar1 = param_3;
      param_3 = param_2;
    }
    if (((param_3 != 0) &&
        (lVar3 = func_0x03ced81c(param_3,*(undefined8 *)PTR_DAT_0777bf98), lVar3 != 0)) &&
       (plVar7 = *(long **)(param_1 + 0x40), plVar7 != (long *)0x0)) {
      lVar5 = *plVar7;
      uVar8 = *(undefined8 *)(lVar3 + 0x30);
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
            goto code_r0x06770338;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0777a498,0xd);
code_r0x06770338:
      lVar5 = (*(code *)*puVar4)(plVar7,uVar8,puVar4[1]);
      if (lVar1 != 0) {
        uVar2 = func_0x055ea870(*(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(lVar1 + 0x30),0);
        if (lVar5 == 0) {
          return 0;
        }
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        return lVar5;
      }
    }
  }
  lVar1 = func_0x03280cac();
  return lVar1;
}

