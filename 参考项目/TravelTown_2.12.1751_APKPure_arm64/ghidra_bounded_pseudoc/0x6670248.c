/* Ghidra 12.1.2 bounded pseudocode; RVA 0x6670248; bound 316 bytes; MergeEngine.ECS.Systems.Board.MergeSystem.GetSpecificItemResult; status ok */


long MergeEngine_ECS_Systems_Board_MergeSystem__GetSpecificItemResult
               (long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if ((bRam0000000007e2811d & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2811d = 1;
  }
  uVar1 = func_0x0636f334(param_2,param_3,*(undefined8 *)(param_1 + 0x40),0);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (param_2 != 0) {
    lVar4 = param_2;
    if (*(int *)(param_2 + 0x28) != 3) {
      lVar4 = param_3;
      param_3 = param_2;
    }
    if (((param_3 != 0) &&
        (lVar2 = func_0x03ced81c(param_3,*(undefined8 *)PTR_DAT_0777bf98), lVar2 != 0)) &&
       (plVar7 = *(long **)(param_1 + 0x40), plVar7 != (long *)0x0)) {
      lVar5 = *plVar7;
      uVar8 = *(undefined8 *)(lVar2 + 0x30);
      uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
            goto LAB_06770338;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0777a498,0xd);
LAB_06770338:
      lVar5 = (*(code *)*puVar3)(plVar7,uVar8,puVar3[1]);
      if (lVar4 != 0) {
        uVar1 = func_0x055ea870(*(undefined8 *)(lVar2 + 0x30),*(undefined8 *)(lVar4 + 0x30),0);
        if (lVar5 == 0) {
          return 0;
        }
        if ((uVar1 & 1) == 0) {
          return 0;
        }
        return lVar5;
      }
    }
  }
  lVar4 = func_0x03280cac();
  return lVar4;
}

