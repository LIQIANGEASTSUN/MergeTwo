/* Ghidra 12.1.2 native pseudocode; RVA 0x67862E8; MergeEngine.ECS.Systems.Board.SplitSystem.CreateEntityAt; status ok */


void MergeEngine_ECS_Systems_Board_SplitSystem__CreateEntityAt
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long extraout_x1;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_0777e5d0;
  if ((bRam0000000007e28d16 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a940);
    func_0x03280a18(PTR_DAT_0777e5b8);
    func_0x03280a18(PTR_DAT_0777e5c0);
    func_0x03280a18(PTR_DAT_0777e5d0);
    bRam0000000007e28d16 = 1;
  }
  uStack_38 = 0;
  func_0x0437ba9c(&uStack_38,0x100,*(undefined8 *)puVar1);
  lVar5 = 0;
  lVar2 = func_0x06a13bc8(param_2,uStack_38,0,0,0);
  plVar8 = *(long **)(param_1 + 0x18);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0777e5b8) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_068863dc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777e5b8,0);
LAB_068863dc:
    lVar4 = (*(code *)*puVar3)(plVar8,param_3,lVar2,puVar3[1]);
    plVar8 = *(long **)(param_1 + 0x10);
    lVar5 = lVar2;
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0777e5c0) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
            goto LAB_06886454;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_0777e5c0,5);
LAB_06886454:
      lVar5 = puVar3[1];
      (*(code *)*puVar3)(plVar8,lVar4);
      if (lVar4 != 0) {
        func_0x03d20d84(lVar4,*(undefined8 *)PTR_DAT_0777a940);
        return;
      }
    }
  }
  func_0x03280cac();
  if ((bRam0000000007e28d17 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    bRam0000000007e28d17 = 1;
  }
  puVar1 = PTR_DAT_0777bf98;
  if (extraout_x1 != 0) {
    lVar2 = func_0x03ced81c(extraout_x1,*(undefined8 *)PTR_DAT_0777bf98);
    if (((lVar5 != 0) && (lVar5 = func_0x03ced81c(lVar5,*(undefined8 *)puVar1), lVar5 != 0)) &&
       (lVar2 != 0)) {
      *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(lVar5 + 0x50);
      return;
    }
  }
  func_0x03280cac();
  return;
}

