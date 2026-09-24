
undefined8
Recovered_LockedBoardSlotChecker_GetSameIdNeighbours_0x02C8C31C(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined8 uStack_38;
  
  puVar5 = PTR_DAT_063f9f08;
  puVar4 = PTR_DAT_063f9f00;
  if ((bRam0000000006812fd3 & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063f9ed8);
    func_0x02ad6de0(PTR_DAT_063f9f08);
    func_0x02ad6de0(PTR_DAT_063f9f00);
    bRam0000000006812fd3 = 1;
  }
  uStack_38 = 0;
  uVar6 = func_0x02ad7078(*(undefined8 *)puVar4);
  func_0x03c285c8(uVar6,*(undefined8 *)puVar5);
  uStack_38 = uVar6;
  func_0x02ad6d8c(&uStack_38,uVar6);
  puVar4 = PTR_DAT_063f9ed8;
  plVar13 = *(long **)(param_1 + 0x10);
  if (plVar13 != (long *)0x0) {
    lVar8 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_063f9ed8) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_02d8c404;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)func_0x02b0e364(plVar13,*(long *)PTR_DAT_063f9ed8,1);
LAB_02d8c404:
    lVar8 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    plVar13 = *(long **)(param_1 + 0x10);
    if (plVar13 == (long *)0x0) goto LAB_02d8c5c4;
    lVar9 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar12 + 4) * 0x10 + 0x138);
          goto LAB_02d8c46c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)func_0x02b0e364(plVar13,*(long *)puVar4,4);
LAB_02d8c46c:
    lVar9 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    if ((param_2 == 0) || (lVar10 = *(long *)(param_2 + 0x58), lVar10 == 0)) goto LAB_02d8c5c4;
    uVar1 = *(uint *)(lVar10 + 0x20);
    uVar2 = *(uint *)(lVar10 + 0x24);
    uVar3 = uVar1 - 1;
    if (-1 < (int)uVar3) {
      if (lVar8 == 0) goto LAB_02d8c5c4;
      if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_02d8c5c8;
      lVar10 = *(long *)(lVar8 + (ulong)uVar3 * 8 + 0x20);
      if (lVar10 == 0) goto LAB_02d8c5c4;
      if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_02d8c5c8;
      func_0x02d8c5cc(param_2,*(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20),&uStack_38);
    }
    if (lVar9 == 0) goto LAB_02d8c5c4;
    uVar3 = uVar1 + 1;
    if ((int)uVar3 < *(int *)(lVar9 + 0x18)) {
      if (lVar8 == 0) goto LAB_02d8c5c4;
      if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_02d8c5c8;
      lVar10 = *(long *)(lVar8 + (long)(int)uVar3 * 8 + 0x20);
      if (lVar10 == 0) goto LAB_02d8c5c4;
      if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_02d8c5c8;
      func_0x02d8c5cc(param_2,*(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20),&uStack_38);
    }
    uVar3 = uVar2 + 1;
    lVar10 = lVar8 + (long)(int)uVar1 * 8;
    if ((int)uVar3 < *(int *)(lVar9 + 0x1c)) {
      if (lVar8 == 0) goto LAB_02d8c5c4;
      if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_02d8c5c8;
      lVar9 = *(long *)(lVar10 + 0x20);
      if (lVar9 == 0) goto LAB_02d8c5c4;
      if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_02d8c5c8;
      func_0x02d8c5cc(param_2,*(undefined8 *)(lVar9 + (long)(int)uVar3 * 8 + 0x20),&uStack_38);
    }
    uVar2 = uVar2 - 1;
    if ((int)uVar2 < 0) {
      return uStack_38;
    }
    if (lVar8 != 0) {
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = *(long *)(lVar10 + 0x20);
        if (lVar8 == 0) goto LAB_02d8c5c4;
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          func_0x02d8c5cc(param_2,*(undefined8 *)(lVar8 + (ulong)uVar2 * 8 + 0x20),&uStack_38);
          return uStack_38;
        }
      }
LAB_02d8c5c8:
                    /* WARNING: Subroutine does not return */
      BoundsThrowHelper();
    }
  }
LAB_02d8c5c4:
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

