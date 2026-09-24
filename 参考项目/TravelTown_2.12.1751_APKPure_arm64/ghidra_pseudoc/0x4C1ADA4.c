/* Ghidra 12.1.2 native pseudocode; RVA 0x4C1ADA4; MergeEngine.ECS.Systems.State.Board.BoardQueueStateSystem<object>.GetItemEntityData; status ok */

undefined8
MergeEngine_ECS_Systems_State_Board_BoardQueueStateSystem_object___GetItemEntityData
          (long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_48;
  
  if ((bRam0000000007e1af1a & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e5b8);
    func_0x03280a18(PTR_DAT_077803d0);
    func_0x03280a18(PTR_DAT_0777e548);
    func_0x03280a18(PTR_DAT_0777e5d0);
    bRam0000000007e1af1a = 1;
  }
  puVar1 = PTR_DAT_0777e5d0;
  if (param_3 == 0) {
LAB_04d1ae98:
    uVar2 = 0;
  }
  else {
    uVar2 = func_0x06a05088(0);
    uStack_48 = 0;
    func_0x0437ba9c(&uStack_48,0x20,*(undefined8 *)puVar1);
    uVar2 = func_0x06a13bc8(uVar2,uStack_48,0,0,0);
    if ((param_1 == 0) || (plVar8 = *(long **)(param_1 + 0x18), plVar8 == (long *)0x0))
    goto LAB_04d1af94;
    lVar9 = *(long *)PTR_DAT_0777e5b8;
    if (param_2 == 0) {
      lVar3 = 0;
    }
    else {
      uVar10 = *(undefined8 *)PTR_DAT_0777e548;
      lVar3 = func_0x03280b90(param_2,uVar10);
      if (lVar3 == 0) {
        func_0x03281048(param_2,uVar10);
        goto LAB_04d1ae98;
      }
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar9) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04d1aef0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar8,lVar9,0);
LAB_04d1aef0:
    uVar2 = (*(code *)*puVar4)(plVar8,lVar3,uVar2,puVar4[1]);
    plVar8 = *(long **)(param_1 + 0x58);
    if (plVar8 == (long *)0x0) {
LAB_04d1af94:
      lVar9 = func_0x03280cac();
      if ((bRam0000000007e1af1b & 1) == 0) {
        func_0x03280a18(PTR_DAT_0777a608);
        bRam0000000007e1af1b = 1;
      }
      if (*(long *)(lVar9 + 0x50) == 0) {
        uVar2 = func_0x03280cac();
        return uVar2;
      }
      lVar3 = func_0x064819c0(*(long *)(lVar9 + 0x50),0);
      lVar9 = 0;
      if ((lVar3 != 0) && (lVar9 = 0, *(long *)(lVar3 + 0x20) != 0)) {
        lVar9 = func_0x06472e74(*(long *)(lVar3 + 0x20),0);
      }
      if ((lVar9 != 0) && (*(int *)(lVar9 + 0x10) != 0)) {
        return 0;
      }
      return 1;
    }
    lVar9 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_077803d0) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04d1af64;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_077803d0,0);
LAB_04d1af64:
    (*(code *)*puVar4)(plVar8,uVar2,param_3,puVar4[1]);
  }
  return uVar2;
}

