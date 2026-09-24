/* Ghidra 12.1.2 native pseudocode; RVA 0x67392BC; Merger.Game.Views.BoardItem.ViewBehaviours.LockBehaviour.InstantiateBlockerItem; status ok */


undefined8
Merger_Game_Views_BoardItem_ViewBehaviours_LockBehaviour__InstantiateBlockerItem
          (long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  
  puVar1 = PTR_DAT_0774e4e0;
  if ((bRam0000000007e289ec & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d990);
    func_0x03280a18(PTR_DAT_0780dbf0);
    func_0x03280a18(PTR_DAT_0774e4e0);
    bRam0000000007e289ec = 1;
  }
  plVar9 = param_1 + 9;
  lVar10 = *plVar9;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar3 = func_0x06fdeb74(lVar10,0,0);
  if ((uVar3 & 1) != 0) {
    lVar10 = *plVar9;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      func_0x03280b8c();
    }
    func_0x06fe41c8(lVar10,0);
    *plVar9 = 0;
    func_0x032809c4(plVar9,0);
  }
  puVar2 = PTR_DAT_0780dbf0;
  uVar4 = func_0x069aaf28(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c(*(long *)puVar1);
  }
  lVar10 = func_0x03e3cdbc(param_2,uVar4,*(undefined8 *)puVar2);
  param_1[9] = lVar10;
  func_0x032809c4(plVar9,lVar10);
  if (param_1[9] != 0) {
    *(long *)(param_1[9] + 0x28) = param_1[7];
    func_0x032809c4();
                    /* WARNING: Could not recover jumptable at 0x068393f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
    return uVar4;
  }
  lVar10 = func_0x03280cac();
  puVar1 = PTR_DAT_0774e4e0;
  if ((bRam0000000007e289ed & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d990);
    func_0x03280a18(PTR_DAT_077c1d88);
    func_0x03280a18(PTR_DAT_0774e4e0);
    bRam0000000007e289ed = 1;
  }
  uVar4 = *(undefined8 *)(lVar10 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar3 = func_0x06fdeb74(uVar4,0,0);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (*(long *)(lVar10 + 0x48) != 0) {
    if (*(long *)(*(long *)(lVar10 + 0x48) + 0x58) == 0) {
      return 0;
    }
    plVar9 = *(long **)(lVar10 + 0x38);
    if (plVar9 != (long *)0x0) {
      lVar7 = *plVar9;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_077c1d88) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar8 + 6) * 0x10 + 0x138);
            goto LAB_068394e4;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar9,*(long *)PTR_DAT_077c1d88,6);
LAB_068394e4:
      lVar7 = (*(code *)*puVar5)(plVar9,puVar5[1]);
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      }
      if (*(long *)(lVar10 + 0x48) != 0) {
        func_0x038ee7ac(*(undefined8 *)(*(long *)(lVar10 + 0x48) + 0x58),0);
        return 1;
      }
    }
  }
  uVar4 = func_0x03280cac();
  puVar1 = PTR_DAT_0780d9a0;
  if ((bRam0000000007e289a9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0780d9a0);
    bRam0000000007e289a9 = 1;
  }
  puVar2 = PTR_DAT_0774e4e0;
  uVar6 = *(undefined8 *)puVar1;
  if ((bRam0000000007e2fb28 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e4e0,0);
    bRam0000000007e2fb28 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  return uVar4;
}

