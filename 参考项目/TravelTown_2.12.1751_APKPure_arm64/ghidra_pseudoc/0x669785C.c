/* Ghidra 12.1.2 native pseudocode; RVA 0x669785C; Merger.Game.Views.BoardView.Jump; status ok */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Merger_Game_Views_BoardView__Jump(float param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  if ((bRam0000000007e282d6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078095c8);
    bRam0000000007e282d6 = 1;
  }
  if (param_3 != (long *)0x0) {
    lVar9 = *param_3;
    lVar12 = *(long *)PTR_DAT_078095c8;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)(lVar12 + 0x20)) {
          lVar9 = lVar9 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
          goto LAB_067978f0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    lVar9 = func_0x03256b10(param_3);
LAB_067978f0:
    lVar9 = func_0x03280b88(*(undefined8 *)(lVar9 + 8),lVar12);
    lVar9 = (**(code **)(lVar9 + 8))(param_3,lVar9);
    puVar3 = PTR_DAT_0780d9c0;
    puVar2 = PTR_DAT_0780d9b8;
    if (lVar9 != 0) {
      if ((bRam0000000007e289e6 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0780d9c0,0);
        func_0x03280a18(PTR_DAT_0776b8b8);
        func_0x03280a18(PTR_DAT_0780dbe0);
        func_0x03280a18(PTR_DAT_0776bc20);
        func_0x03280a18(PTR_DAT_077804d8);
        func_0x03280a18(PTR_DAT_0777dd88);
        func_0x03280a18(PTR_DAT_0780d9b8);
        bRam0000000007e289e6 = 1;
      }
      puVar1 = PTR_DAT_0776b8b8;
      uVar6 = func_0x04d18968(lVar9,*(undefined8 *)puVar2,*(undefined8 *)puVar3);
      lVar12 = *(long *)(lVar9 + 0x48);
      if (lVar12 != 0) {
        func_0x038eedf4(lVar12,1,0);
      }
      *(undefined1 *)(lVar9 + 0x41) = 1;
      puVar5 = PTR_DAT_0780dbe0;
      puVar4 = PTR_DAT_077804d8;
      puVar3 = PTR_DAT_0777dd88;
      puVar2 = PTR_DAT_0776bc20;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar7 = func_0x038ec838(0);
      uVar8 = func_0x038d939c(0x42480000,param_1 / 3.0,uVar6,0,0);
      uVar8 = func_0x03ed23d4(uVar8,9,*(undefined8 *)puVar3);
      uVar7 = func_0x038f9d28(uVar7,uVar8,0);
      uVar6 = func_0x038d939c(0,param_1 * _UNK_017be65c,uVar6,0,0);
      uVar6 = func_0x03ed23d4(uVar6,8,*(undefined8 *)puVar3);
      uVar6 = func_0x038f9d28(uVar7,uVar6,0);
      *(undefined8 *)(lVar9 + 0x48) = uVar6;
      func_0x032809c4((long *)(lVar9 + 0x48),uVar6);
      lVar12 = *(long *)(lVar9 + 0x48);
      uVar6 = func_0x03280ca0(*(undefined8 *)puVar2);
      func_0x038e9b78(uVar6,lVar9,*(undefined8 *)puVar5,0);
      uVar7 = *(undefined8 *)puVar4;
      if ((lVar12 != 0) && (*(char *)(lVar12 + 0xe8) != '\0')) {
        *(undefined8 *)(lVar12 + 0x80) = uVar6;
        func_0x032809c4((undefined8 *)(lVar12 + 0x80),uVar6,uVar7);
      }
      return lVar12;
    }
  }
  auVar13 = func_0x03280cac();
  lVar9 = *(long *)(auVar13._0_8_ + 0x70);
  if ((lVar9 != 0) && (func_0x06fe9490(lVar9,0), auVar13._8_8_ != 0)) {
    lVar9 = func_0x06fe9764(auVar13._8_8_,0);
    return lVar9;
  }
  lVar9 = func_0x03280cac();
  return lVar9;
}

