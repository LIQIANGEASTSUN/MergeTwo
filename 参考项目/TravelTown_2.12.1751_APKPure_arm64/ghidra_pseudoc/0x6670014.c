/* Ghidra 12.1.2 native pseudocode; RVA 0x6670014; MergeEngine.ECS.Systems.Board.MergeSystem.GetAnyItemOnlyResult; status ok */

long MergeEngine_ECS_Systems_Board_MergeSystem__GetAnyItemOnlyResult
               (long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  if ((bRam0000000007e2811b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2811b = 1;
  }
  lVar6 = *(long *)(param_1 + 0x40);
  uVar3 = func_0x0636efd0(param_2,param_3,lVar6,0);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x28) != 0) {
      param_2 = param_3;
    }
    if (((param_2 != 0) &&
        (lVar4 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_0777bf98), lVar4 != 0)) &&
       (plVar8 = *(long **)(param_1 + 0x40), plVar8 != (long *)0x0)) {
      lVar6 = *plVar8;
      uVar9 = *(undefined8 *)(lVar4 + 0x30);
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
            goto LAB_067700fc;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777a498,0xd);
LAB_067700fc:
      lVar6 = (*(code *)*puVar5)(plVar8,uVar9,puVar5[1]);
      if (lVar6 == 0) {
        return 0;
      }
      return lVar6;
    }
  }
  auVar10 = func_0x03280cac();
  lVar4 = lVar6;
  if ((bRam0000000007e2811c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2811c = 1;
  }
  if (auVar10._8_8_ != 0) {
    iVar2 = *(int *)(auVar10._8_8_ + 0x28);
    if (iVar2 == 2) {
      return 0;
    }
    if (lVar6 != 0) {
      if (iVar2 == 3) {
        return 0;
      }
      if ((*(uint *)(lVar6 + 0x28) & 0xfffffffe) == 2) {
        return 0;
      }
      plVar8 = *(long **)(auVar10._0_8_ + 0x40);
      lVar6 = func_0x03ced81c(lVar6,*(undefined8 *)PTR_DAT_0777bf98);
      if ((lVar6 != 0) && (plVar8 != (long *)0x0)) {
        lVar4 = *plVar8;
        uVar9 = *(undefined8 *)(lVar6 + 0x30);
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
              goto LAB_06770228;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777a498,0xd);
LAB_06770228:
                    /* WARNING: Could not recover jumptable at 0x06770240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar6 = (*(code *)*puVar5)(plVar8,uVar9,puVar5[1]);
        return lVar6;
      }
    }
  }
  auVar10 = func_0x03280cac();
  lVar6 = auVar10._8_8_;
  if ((bRam0000000007e2811d & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2811d = 1;
  }
  uVar3 = func_0x0636f334(lVar6,lVar4,*(undefined8 *)(auVar10._0_8_ + 0x40),0);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (lVar6 != 0) {
    lVar1 = lVar6;
    if (*(int *)(lVar6 + 0x28) != 3) {
      lVar1 = lVar4;
      lVar4 = lVar6;
    }
    if (((lVar4 != 0) &&
        (lVar6 = func_0x03ced81c(lVar4,*(undefined8 *)PTR_DAT_0777bf98), lVar6 != 0)) &&
       (plVar8 = *(long **)(auVar10._0_8_ + 0x40), plVar8 != (long *)0x0)) {
      lVar4 = *plVar8;
      uVar9 = *(undefined8 *)(lVar6 + 0x30);
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
            goto LAB_06770338;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777a498,0xd);
LAB_06770338:
      lVar4 = (*(code *)*puVar5)(plVar8,uVar9,puVar5[1]);
      if (lVar1 != 0) {
        uVar3 = func_0x055ea870(*(undefined8 *)(lVar6 + 0x30),*(undefined8 *)(lVar1 + 0x30),0);
        if (lVar4 == 0) {
          return 0;
        }
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        return lVar4;
      }
    }
  }
  lVar6 = func_0x03280cac();
  return lVar6;
}

