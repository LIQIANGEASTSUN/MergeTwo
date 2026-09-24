/* Ghidra 12.1.2 native pseudocode; RVA 0x67393F8; Merger.Game.Views.BoardItem.ViewBehaviours.LockBehaviour.TryConsumeTap; status ok */


undefined8 Merger_Game_Views_BoardItem_ViewBehaviours_LockBehaviour__TryConsumeTap(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  
  puVar1 = PTR_DAT_0774e4e0;
  if ((bRam0000000007e289ed & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d990);
    func_0x03280a18(PTR_DAT_077c1d88);
    func_0x03280a18(PTR_DAT_0774e4e0);
    bRam0000000007e289ed = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar3 = func_0x06fdeb74(uVar8,0,0);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    if (*(long *)(*(long *)(param_1 + 0x48) + 0x58) == 0) {
      return 0;
    }
    plVar9 = *(long **)(param_1 + 0x38);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_077c1d88) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 6) * 0x10 + 0x138);
            goto LAB_068394e4;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_077c1d88,6);
LAB_068394e4:
      lVar6 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        func_0x038ee7ac(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x58),0);
        return 1;
      }
    }
  }
  uVar8 = func_0x03280cac();
  puVar1 = PTR_DAT_0780d9a0;
  if ((bRam0000000007e289a9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d9a0);
    bRam0000000007e289a9 = 1;
  }
  puVar2 = PTR_DAT_0774e4e0;
  uVar5 = *(undefined8 *)puVar1;
  if ((bRam0000000007e2fb28 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0,0);
    bRam0000000007e2fb28 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  return uVar8;
}

