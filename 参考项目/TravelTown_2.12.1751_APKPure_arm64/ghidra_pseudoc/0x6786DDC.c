/* Ghidra 12.1.2 native pseudocode; RVA 0x6786DDC; MergeEngine.ECS.Systems.Board.StackingSystem.GetStackingState; status ok */


bool MergeEngine_ECS_Systems_Board_StackingSystem__GetStackingState(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  ulong uStack_18;
  
  if ((bRam0000000007e28d1c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0776f9f0);
    func_0x03280a18(PTR_DAT_0777e470);
    func_0x03280a18(PTR_DAT_077c8e78);
    func_0x03280a18(PTR_DAT_077628d8);
    func_0x03280a18(PTR_DAT_07750da0);
    func_0x03280a18(PTR_DAT_077628e8);
    bRam0000000007e28d1c = 1;
  }
  plVar7 = *(long **)(param_1 + 0x58);
  uVar4 = 0;
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0777e470) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_06886ea4;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_0777e470,3);
LAB_06886ea4:
    uVar4 = (*(code *)*puVar2)(plVar7,puVar2[1]);
  }
  plVar7 = *(long **)(param_1 + 0x50);
  if (plVar7 == (long *)0x0) {
    bVar1 = false;
  }
  else {
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_077c8e78) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06886f18;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_077c8e78,0);
LAB_06886f18:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    bVar1 = false;
    if (lVar3 != 0) {
      uStack_18 = 0;
      func_0x0437b6e0(&uStack_18,*(undefined4 *)(lVar3 + 0x20),*(undefined8 *)PTR_DAT_07750da0);
      bVar1 = false;
      if (((uVar4 & 0xff) != 0) && ((uStack_18 & 0xff) != 0)) {
        bVar1 = (int)(uVar4 >> 0x20) <= (int)(uStack_18 >> 0x20);
      }
    }
  }
  return bVar1;
}

