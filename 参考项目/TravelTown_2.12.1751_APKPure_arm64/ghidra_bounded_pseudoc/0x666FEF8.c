/* Ghidra 12.1.2 bounded pseudocode; RVA 0x666FEF8; bound 284 bytes; MergeEngine.ECS.Systems.Board.MergeSystem.ItemsNotMeteorLocked; status ok */


long MergeEngine_ECS_Systems_Board_MergeSystem__ItemsNotMeteorLocked
               (long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  
  lVar6 = param_3;
  if ((bRam0000000007e28119 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e638);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e28119 = 1;
  }
  plVar9 = *(long **)(param_1 + 0x40);
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x14) * 0x10 + 0x138);
          goto LAB_0676ff9c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_0777a498,0x14);
LAB_0676ff9c:
    lVar6 = puVar2[1];
    uVar3 = (*(code *)*puVar2)(plVar9,param_3);
    if ((param_2 != 0) &&
       (lVar4 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_0777e638), lVar4 != 0)) {
      if ((*(char *)(lVar4 + 0x32) == '\0') ||
         ((uVar7 = func_0x06b1d910(uVar3,0), (uVar7 & 1) == 0 &&
          (uVar7 = func_0x06b1d9c4(uVar3,0), (uVar7 & 1) == 0)))) {
        lVar6 = 1;
      }
      else {
        lVar6 = 0;
      }
      return lVar6;
    }
  }
  auVar10 = func_0x03280cac();
  lVar4 = auVar10._8_8_;
  if ((bRam0000000007e2811b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2811b = 1;
  }
  lVar5 = *(long *)(auVar10._0_8_ + 0x40);
  uVar7 = func_0x0636efd0(lVar4,lVar6,lVar5,0);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x28) != 0) {
      lVar4 = lVar6;
    }
    if (((lVar4 != 0) &&
        (lVar6 = func_0x03ced81c(lVar4,*(undefined8 *)PTR_DAT_0777bf98), lVar6 != 0)) &&
       (plVar9 = *(long **)(auVar10._0_8_ + 0x40), plVar9 != (long *)0x0)) {
      lVar4 = *plVar9;
      uVar3 = *(undefined8 *)(lVar6 + 0x30);
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar8 + 0xd) * 0x10 + 0x138);
            goto LAB_067700fc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_0777a498,0xd);
LAB_067700fc:
      lVar6 = (*(code *)*puVar2)(plVar9,uVar3,puVar2[1]);
      if (lVar6 == 0) {
        return 0;
      }
      return lVar6;
    }
  }
  auVar10 = func_0x03280cac();
  lVar6 = lVar5;
  if ((bRam0000000007e2811c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2811c = 1;
  }
  if (auVar10._8_8_ != 0) {
    iVar1 = *(int *)(auVar10._8_8_ + 0x28);
    if (iVar1 == 2) {
      return 0;
    }
    if (lVar5 != 0) {
      if (iVar1 == 3) {
        return 0;
      }
      if ((*(uint *)(lVar5 + 0x28) & 0xfffffffe) == 2) {
        return 0;
      }
      plVar9 = *(long **)(auVar10._0_8_ + 0x40);
      lVar4 = func_0x03ced81c(lVar5,*(undefined8 *)PTR_DAT_0777bf98);
      if ((lVar4 != 0) && (plVar9 != (long *)0x0)) {
        lVar6 = *plVar9;
        uVar3 = *(undefined8 *)(lVar4 + 0x30);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xd) * 0x10 + 0x138);
              goto LAB_06770228;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar2 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_0777a498,0xd);
LAB_06770228:
                    /* WARNING: Could not recover jumptable at 0x06770240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar6 = (*(code *)*puVar2)(plVar9,uVar3,puVar2[1]);
        return lVar6;
      }
    }
  }
  auVar10 = func_0x03280cac();
  lVar4 = auVar10._8_8_;
  if ((bRam0000000007e2811d & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2811d = 1;
  }
  uVar7 = func_0x0636f334(lVar4,lVar6,*(undefined8 *)(auVar10._0_8_ + 0x40),0);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  if (lVar4 != 0) {
    lVar5 = lVar4;
    if (*(int *)(lVar4 + 0x28) != 3) {
      lVar5 = lVar6;
      lVar6 = lVar4;
    }
    if (((lVar6 != 0) &&
        (lVar6 = func_0x03ced81c(lVar6,*(undefined8 *)PTR_DAT_0777bf98), lVar6 != 0)) &&
       (plVar9 = *(long **)(auVar10._0_8_ + 0x40), plVar9 != (long *)0x0)) {
      lVar4 = *plVar9;
      uVar3 = *(undefined8 *)(lVar6 + 0x30);
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar8 + 0xd) * 0x10 + 0x138);
            goto LAB_06770338;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_0777a498,0xd);
LAB_06770338:
      lVar4 = (*(code *)*puVar2)(plVar9,uVar3,puVar2[1]);
      if (lVar5 != 0) {
        uVar7 = func_0x055ea870(*(undefined8 *)(lVar6 + 0x30),*(undefined8 *)(lVar5 + 0x30),0);
        if (lVar4 == 0) {
          return 0;
        }
        if ((uVar7 & 1) == 0) {
          return 0;
        }
        return lVar4;
      }
    }
  }
  lVar6 = func_0x03280cac();
  return lVar6;
}

