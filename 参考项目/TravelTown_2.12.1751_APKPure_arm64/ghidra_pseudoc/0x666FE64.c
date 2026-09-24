/* Ghidra 12.1.2 native pseudocode; RVA 0x666FE64; MergeEngine.ECS.Systems.Board.MergeSystem.ItemsNotMergeLocked; status ok */

ulong MergeEngine_ECS_Systems_Board_MergeSystem__ItemsNotMergeLocked
                (undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  
  lVar8 = param_3;
  if ((bRam0000000007e28118 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e638);
    bRam0000000007e28118 = 1;
  }
  puVar2 = PTR_DAT_0777e638;
  if ((param_2 != 0) &&
     (lVar4 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_0777e638), lVar4 != 0)) {
    uVar5 = func_0x069fd7ac(lVar4,0);
    if ((uVar5 & 1) == 0) {
      if ((param_3 == 0) || (lVar4 = func_0x03ced81c(param_3,*(undefined8 *)puVar2), lVar4 == 0))
      goto LAB_0676fef4;
      uVar3 = func_0x069fd7ac(lVar4,0);
      uVar3 = uVar3 ^ 1;
    }
    else {
      uVar3 = 0;
    }
    return (ulong)(uVar3 & 1);
  }
LAB_0676fef4:
  auVar13 = func_0x03280cac();
  lVar4 = lVar8;
  if ((bRam0000000007e28119 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e638);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e28119 = 1;
  }
  plVar12 = *(long **)(auVar13._0_8_ + 0x40);
  if (plVar12 != (long *)0x0) {
    lVar4 = *plVar12;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 0x14) * 0x10 + 0x138);
          goto LAB_0676ff9c;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0777a498,0x14);
LAB_0676ff9c:
    lVar4 = puVar6[1];
    uVar7 = (*(code *)*puVar6)(plVar12,lVar8);
    if ((auVar13._8_8_ != 0) &&
       (lVar8 = func_0x03ced81c(auVar13._8_8_,*(undefined8 *)PTR_DAT_0777e638), lVar8 != 0)) {
      if ((*(char *)(lVar8 + 0x32) == '\0') ||
         ((uVar5 = func_0x06b1d910(uVar7,0), (uVar5 & 1) == 0 &&
          (uVar5 = func_0x06b1d9c4(uVar7,0), (uVar5 & 1) == 0)))) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      return uVar5;
    }
  }
  auVar13 = func_0x03280cac();
  lVar8 = auVar13._8_8_;
  if ((bRam0000000007e2811b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2811b = 1;
  }
  lVar10 = *(long *)(auVar13._0_8_ + 0x40);
  uVar5 = func_0x0636efd0(lVar8,lVar4,lVar10,0);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x28) != 0) {
      lVar8 = lVar4;
    }
    if (((lVar8 != 0) &&
        (lVar8 = func_0x03ced81c(lVar8,*(undefined8 *)PTR_DAT_0777bf98), lVar8 != 0)) &&
       (plVar12 = *(long **)(auVar13._0_8_ + 0x40), plVar12 != (long *)0x0)) {
      lVar4 = *plVar12;
      uVar7 = *(undefined8 *)(lVar8 + 0x30);
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 0xd) * 0x10 + 0x138);
            goto LAB_067700fc;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0777a498,0xd);
LAB_067700fc:
      uVar5 = (*(code *)*puVar6)(plVar12,uVar7,puVar6[1]);
      if (uVar5 == 0) {
        return 0;
      }
      return uVar5;
    }
  }
  auVar13 = func_0x03280cac();
  lVar8 = lVar10;
  if ((bRam0000000007e2811c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2811c = 1;
  }
  if (auVar13._8_8_ != 0) {
    iVar1 = *(int *)(auVar13._8_8_ + 0x28);
    if (iVar1 == 2) {
      return 0;
    }
    if (lVar10 != 0) {
      if (iVar1 == 3) {
        return 0;
      }
      if ((*(uint *)(lVar10 + 0x28) & 0xfffffffe) == 2) {
        return 0;
      }
      plVar12 = *(long **)(auVar13._0_8_ + 0x40);
      lVar4 = func_0x03ced81c(lVar10,*(undefined8 *)PTR_DAT_0777bf98);
      if ((lVar4 != 0) && (plVar12 != (long *)0x0)) {
        lVar8 = *plVar12;
        uVar7 = *(undefined8 *)(lVar4 + 0x30);
        uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar5 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0xd) * 0x10 + 0x138);
              goto LAB_06770228;
            }
            uVar5 = uVar5 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0777a498,0xd);
LAB_06770228:
                    /* WARNING: Could not recover jumptable at 0x06770240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)*puVar6)(plVar12,uVar7,puVar6[1]);
        return uVar5;
      }
    }
  }
  auVar13 = func_0x03280cac();
  lVar4 = auVar13._8_8_;
  if ((bRam0000000007e2811d & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2811d = 1;
  }
  uVar5 = func_0x0636f334(lVar4,lVar8,*(undefined8 *)(auVar13._0_8_ + 0x40),0);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (lVar4 != 0) {
    lVar10 = lVar4;
    if (*(int *)(lVar4 + 0x28) != 3) {
      lVar10 = lVar8;
      lVar8 = lVar4;
    }
    if (((lVar8 != 0) &&
        (lVar8 = func_0x03ced81c(lVar8,*(undefined8 *)PTR_DAT_0777bf98), lVar8 != 0)) &&
       (plVar12 = *(long **)(auVar13._0_8_ + 0x40), plVar12 != (long *)0x0)) {
      lVar4 = *plVar12;
      uVar7 = *(undefined8 *)(lVar8 + 0x30);
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 0xd) * 0x10 + 0x138);
            goto LAB_06770338;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0777a498,0xd);
LAB_06770338:
      uVar5 = (*(code *)*puVar6)(plVar12,uVar7,puVar6[1]);
      if (lVar10 != 0) {
        uVar9 = func_0x055ea870(*(undefined8 *)(lVar8 + 0x30),*(undefined8 *)(lVar10 + 0x30),0);
        if (uVar5 == 0) {
          return 0;
        }
        if ((uVar9 & 1) == 0) {
          return 0;
        }
        return uVar5;
      }
    }
  }
  uVar5 = func_0x03280cac();
  return uVar5;
}

