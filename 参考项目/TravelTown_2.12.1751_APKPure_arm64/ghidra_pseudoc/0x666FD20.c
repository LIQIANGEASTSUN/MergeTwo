/* Ghidra 12.1.2 native pseudocode; RVA 0x666FD20; MergeEngine.ECS.Systems.Board.MergeSystem.CanMergeSame; status ok */

ulong MergeEngine_ECS_Systems_Board_MergeSystem__CanMergeSame
                (long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long extraout_x1;
  long lVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  lVar9 = param_3;
  if ((bRam0000000007e28117 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e28117 = 1;
  }
  puVar2 = PTR_DAT_0777bf98;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x28) != 0) {
      return 0;
    }
    if (param_3 != 0) {
      if (*(int *)(param_3 + 0x28) != 0) {
        return 0;
      }
      lVar4 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_0777bf98);
      if (lVar4 != 0) {
        uVar12 = *(undefined8 *)(lVar4 + 0x30);
        lVar4 = func_0x03ced81c(param_3,*(undefined8 *)puVar2);
        if (lVar4 != 0) {
          lVar9 = 0;
          uVar5 = func_0x055ea870(uVar12,*(undefined8 *)(lVar4 + 0x30));
          if ((uVar5 & 1) == 0) {
            return 0;
          }
          plVar11 = *(long **)(param_1 + 0x40);
          lVar4 = func_0x03ced81c(param_2,*(undefined8 *)puVar2);
          if ((lVar4 != 0) && (plVar11 != (long *)0x0)) {
            lVar9 = *plVar11;
            uVar12 = *(undefined8 *)(lVar4 + 0x30);
            uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar5 != 0) {
              piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777a498) {
                  puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
                  goto LAB_0676fe44;
                }
                uVar5 = uVar5 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar5 != 0);
            }
            puVar6 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777a498,0xd);
LAB_0676fe44:
            lVar9 = (*(code *)*puVar6)(plVar11,uVar12,puVar6[1]);
            return (ulong)(lVar9 != 0);
          }
        }
      }
    }
  }
  func_0x03280cac();
  lVar4 = lVar9;
  if ((bRam0000000007e28118 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e638);
    bRam0000000007e28118 = 1;
  }
  puVar2 = PTR_DAT_0777e638;
  if ((extraout_x1 != 0) &&
     (lVar7 = func_0x03ced81c(extraout_x1,*(undefined8 *)PTR_DAT_0777e638), lVar7 != 0)) {
    uVar5 = func_0x069fd7ac(lVar7,0);
    if ((uVar5 & 1) == 0) {
      if ((lVar9 == 0) || (lVar9 = func_0x03ced81c(lVar9,*(undefined8 *)puVar2), lVar9 == 0))
      goto LAB_0676fef4;
      uVar3 = func_0x069fd7ac(lVar9,0);
      uVar3 = uVar3 ^ 1;
    }
    else {
      uVar3 = 0;
    }
    return (ulong)(uVar3 & 1);
  }
LAB_0676fef4:
  auVar13 = func_0x03280cac();
  lVar9 = lVar4;
  if ((bRam0000000007e28119 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e638);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e28119 = 1;
  }
  plVar11 = *(long **)(auVar13._0_8_ + 0x40);
  if (plVar11 != (long *)0x0) {
    lVar9 = *plVar11;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0x14) * 0x10 + 0x138);
          goto LAB_0676ff9c;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777a498,0x14);
LAB_0676ff9c:
    lVar9 = puVar6[1];
    uVar12 = (*(code *)*puVar6)(plVar11,lVar4);
    if ((auVar13._8_8_ != 0) &&
       (lVar4 = func_0x03ced81c(auVar13._8_8_,*(undefined8 *)PTR_DAT_0777e638), lVar4 != 0)) {
      if ((*(char *)(lVar4 + 0x32) == '\0') ||
         ((uVar5 = func_0x06b1d910(uVar12,0), (uVar5 & 1) == 0 &&
          (uVar5 = func_0x06b1d9c4(uVar12,0), (uVar5 & 1) == 0)))) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
      return uVar5;
    }
  }
  auVar13 = func_0x03280cac();
  lVar4 = auVar13._8_8_;
  if ((bRam0000000007e2811b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e2811b = 1;
  }
  lVar7 = *(long *)(auVar13._0_8_ + 0x40);
  uVar5 = func_0x0636efd0(lVar4,lVar9,lVar7,0);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x28) != 0) {
      lVar4 = lVar9;
    }
    if (((lVar4 != 0) &&
        (lVar9 = func_0x03ced81c(lVar4,*(undefined8 *)PTR_DAT_0777bf98), lVar9 != 0)) &&
       (plVar11 = *(long **)(auVar13._0_8_ + 0x40), plVar11 != (long *)0x0)) {
      lVar4 = *plVar11;
      uVar12 = *(undefined8 *)(lVar9 + 0x30);
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
            goto LAB_067700fc;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777a498,0xd);
LAB_067700fc:
      uVar5 = (*(code *)*puVar6)(plVar11,uVar12,puVar6[1]);
      if (uVar5 == 0) {
        return 0;
      }
      return uVar5;
    }
  }
  auVar13 = func_0x03280cac();
  lVar9 = lVar7;
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
    if (lVar7 != 0) {
      if (iVar1 == 3) {
        return 0;
      }
      if ((*(uint *)(lVar7 + 0x28) & 0xfffffffe) == 2) {
        return 0;
      }
      plVar11 = *(long **)(auVar13._0_8_ + 0x40);
      lVar4 = func_0x03ced81c(lVar7,*(undefined8 *)PTR_DAT_0777bf98);
      if ((lVar4 != 0) && (plVar11 != (long *)0x0)) {
        lVar9 = *plVar11;
        uVar12 = *(undefined8 *)(lVar4 + 0x30);
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
              goto LAB_06770228;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777a498,0xd);
LAB_06770228:
                    /* WARNING: Could not recover jumptable at 0x06770240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)*puVar6)(plVar11,uVar12,puVar6[1]);
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
  uVar5 = func_0x0636f334(lVar4,lVar9,*(undefined8 *)(auVar13._0_8_ + 0x40),0);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (lVar4 != 0) {
    lVar7 = lVar4;
    if (*(int *)(lVar4 + 0x28) != 3) {
      lVar7 = lVar9;
      lVar9 = lVar4;
    }
    if (((lVar9 != 0) &&
        (lVar9 = func_0x03ced81c(lVar9,*(undefined8 *)PTR_DAT_0777bf98), lVar9 != 0)) &&
       (plVar11 = *(long **)(auVar13._0_8_ + 0x40), plVar11 != (long *)0x0)) {
      lVar4 = *plVar11;
      uVar12 = *(undefined8 *)(lVar9 + 0x30);
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777a498) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar10 + 0xd) * 0x10 + 0x138);
            goto LAB_06770338;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777a498,0xd);
LAB_06770338:
      uVar5 = (*(code *)*puVar6)(plVar11,uVar12,puVar6[1]);
      if (lVar7 != 0) {
        uVar8 = func_0x055ea870(*(undefined8 *)(lVar9 + 0x30),*(undefined8 *)(lVar7 + 0x30),0);
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

