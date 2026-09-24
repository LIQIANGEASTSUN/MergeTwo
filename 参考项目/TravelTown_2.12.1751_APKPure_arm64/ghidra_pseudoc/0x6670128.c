/* Ghidra 12.1.2 native pseudocode; RVA 0x6670128; MergeEngine.ECS.Systems.Board.MergeSystem.GetSameItemResult; status ok */

long MergeEngine_ECS_Systems_Board_MergeSystem__GetSameItemResult
               (long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  lVar4 = param_3;
  if ((bRam0000000007e2811c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2811c = 1;
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x28) == 2) {
      return 0;
    }
    if (param_3 != 0) {
      if (*(int *)(param_2 + 0x28) == 3) {
        return 0;
      }
      if ((*(uint *)(param_3 + 0x28) & 0xfffffffe) == 2) {
        return 0;
      }
      plVar7 = *(long **)(param_1 + 0x40);
      lVar2 = func_0x03ced81c(param_3,*(undefined8 *)PTR_DAT_0777bf98);
      if ((lVar2 != 0) && (plVar7 != (long *)0x0)) {
        lVar4 = *plVar7;
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
              goto LAB_06770228;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0777a498,0xd);
LAB_06770228:
                    /* WARNING: Could not recover jumptable at 0x06770240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar4 = (*(code *)*puVar3)(plVar7,uVar8,puVar3[1]);
        return lVar4;
      }
    }
  }
  auVar9 = func_0x03280cac();
  lVar2 = auVar9._8_8_;
  if ((bRam0000000007e2811d & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2811d = 1;
  }
  uVar5 = func_0x0636f334(lVar2,lVar4,*(undefined8 *)(auVar9._0_8_ + 0x40),0);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (lVar2 != 0) {
    lVar1 = lVar2;
    if (*(int *)(lVar2 + 0x28) != 3) {
      lVar1 = lVar4;
      lVar4 = lVar2;
    }
    if (((lVar4 != 0) &&
        (lVar4 = func_0x03ced81c(lVar4,*(undefined8 *)PTR_DAT_0777bf98), lVar4 != 0)) &&
       (plVar7 = *(long **)(auVar9._0_8_ + 0x40), plVar7 != (long *)0x0)) {
      lVar2 = *plVar7;
      uVar8 = *(undefined8 *)(lVar4 + 0x30);
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 0xd) * 0x10 + 0x138);
            goto LAB_06770338;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0777a498,0xd);
LAB_06770338:
      lVar2 = (*(code *)*puVar3)(plVar7,uVar8,puVar3[1]);
      if (lVar1 != 0) {
        uVar5 = func_0x055ea870(*(undefined8 *)(lVar4 + 0x30),*(undefined8 *)(lVar1 + 0x30),0);
        if (lVar2 == 0) {
          return 0;
        }
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        return lVar2;
      }
    }
  }
  lVar4 = func_0x03280cac();
  return lVar4;
}

