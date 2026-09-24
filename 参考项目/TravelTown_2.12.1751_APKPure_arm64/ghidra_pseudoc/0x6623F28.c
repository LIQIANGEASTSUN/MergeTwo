/* Ghidra 12.1.2 native pseudocode; RVA 0x6623F28; Merger.Game.ViewModel.BoardUIViewModel.RegisterRewardTargets; status ok */


long Merger_Game_ViewModel_BoardUIViewModel__RegisterRewardTargets(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  
  puVar1 = PTR_DAT_077730b8;
  if ((bRam0000000007e27dc3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077726c0);
    func_0x03280a18(PTR_DAT_0777efc0);
    func_0x03280a18(PTR_DAT_077730b8);
    bRam0000000007e27dc3 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar3 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x1b8);
  if (lVar3 != 0) {
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar10 = 0;
      uVar6 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar10) goto LAB_067240dc;
        func_0x06212e98(param_1,*(undefined8 *)(lVar3 + 0x20 + uVar10 * 8),param_2,0,0);
        uVar6 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    plVar8 = *(long **)(param_1 + 0xd8);
    if (plVar8 != (long *)0x0) {
      lVar3 = *plVar8;
      uVar10 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar10 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_077726c0) {
            puVar4 = (undefined8 *)(lVar3 + (long)(*piVar7 + 5) * 0x10 + 0x138);
            goto LAB_06724048;
          }
          uVar10 = uVar10 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_077726c0,5);
LAB_06724048:
      lVar3 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x20) == 0) {
          lVar3 = *(long *)puVar1;
          if (*(int *)(lVar3 + 0xe0) == 0) {
            func_0x03280b8c();
            lVar3 = *(long *)puVar1;
          }
          lVar9 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x1b0);
          if (lVar9 == 0) goto LAB_062130b4;
          if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
            uVar10 = 0;
            uVar6 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
            do {
              if (uVar6 <= uVar10) goto LAB_067240dc;
              lVar3 = func_0x06212bc0(param_1,*(undefined8 *)(lVar9 + 0x20 + uVar10 * 8),param_2,3,0
                                     );
              uVar6 = (ulong)*(uint *)(lVar9 + 0x18);
              uVar10 = uVar10 + 1;
            } while ((long)uVar10 < (long)(int)*(uint *)(lVar9 + 0x18));
          }
        }
        return lVar3;
      }
    }
  }
LAB_062130b4:
  lVar3 = func_0x03280cac();
  puVar2 = PTR_DAT_07828a38;
  puVar1 = PTR_DAT_07828a30;
  if ((bRam0000000007e29c54 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07828a38,0);
    func_0x03280a18(PTR_DAT_07828a30);
    bRam0000000007e29c54 = 1;
  }
  uVar5 = func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x053bfe40(uVar5,*(undefined8 *)puVar2);
  *(undefined8 *)(lVar3 + 0x60) = uVar5;
  func_0x032809c4((undefined8 *)(lVar3 + 0x60),uVar5);
  return lVar3;
LAB_067240dc:
  func_0x03280cb4();
  goto LAB_062130b4;
}

