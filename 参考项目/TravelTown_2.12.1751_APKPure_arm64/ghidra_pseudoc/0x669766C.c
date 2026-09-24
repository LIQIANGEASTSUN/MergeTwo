/* Ghidra 12.1.2 native pseudocode; RVA 0x669766C; Merger.Game.Views.BoardView.SlideItem; status ok */


/* WARNING: Possible PIC construction at 0x06797264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067973ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06797620: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x067973b0) */
/* WARNING: Removing unreachable block (ram,0x067973c4) */
/* WARNING: Removing unreachable block (ram,0x067973cc) */
/* WARNING: Removing unreachable block (ram,0x067973f4) */
/* WARNING: Removing unreachable block (ram,0x067973d8) */
/* WARNING: Removing unreachable block (ram,0x067973e4) */
/* WARNING: Removing unreachable block (ram,0x06797404) */
/* WARNING: Removing unreachable block (ram,0x06797268) */
/* WARNING: Removing unreachable block (ram,0x0679726c) */
/* WARNING: Removing unreachable block (ram,0x067972a8) */
/* WARNING: Removing unreachable block (ram,0x0679742c) */
/* WARNING: Removing unreachable block (ram,0x067972e4) */
/* WARNING: Removing unreachable block (ram,0x0679731c) */
/* WARNING: Removing unreachable block (ram,0x06797324) */
/* WARNING: Removing unreachable block (ram,0x0679734c) */
/* WARNING: Removing unreachable block (ram,0x06797330) */
/* WARNING: Removing unreachable block (ram,0x0679733c) */
/* WARNING: Removing unreachable block (ram,0x06797358) */
/* WARNING: Removing unreachable block (ram,0x06797624) */
/* WARNING: Removing unreachable block (ram,0x06797430) */
/* WARNING: Removing unreachable block (ram,0x06797454) */
/* WARNING: Removing unreachable block (ram,0x06797480) */
/* WARNING: Removing unreachable block (ram,0x06797488) */
/* WARNING: Removing unreachable block (ram,0x067974a8) */
/* WARNING: Removing unreachable block (ram,0x067974c8) */
/* WARNING: Removing unreachable block (ram,0x06797510) */
/* WARNING: Removing unreachable block (ram,0x067974d0) */
/* WARNING: Removing unreachable block (ram,0x067974e0) */
/* WARNING: Removing unreachable block (ram,0x067974e8) */
/* WARNING: Removing unreachable block (ram,0x0679751c) */
/* WARNING: Removing unreachable block (ram,0x067974f4) */
/* WARNING: Removing unreachable block (ram,0x06797500) */
/* WARNING: Removing unreachable block (ram,0x0679752c) */
/* WARNING: Removing unreachable block (ram,0x0679753c) */
/* WARNING: Removing unreachable block (ram,0x067975cc) */
/* WARNING: Removing unreachable block (ram,0x06797540) */
/* WARNING: Removing unreachable block (ram,0x06797590) */
/* WARNING: Removing unreachable block (ram,0x06797550) */
/* WARNING: Removing unreachable block (ram,0x06797560) */
/* WARNING: Removing unreachable block (ram,0x06797568) */
/* WARNING: Removing unreachable block (ram,0x067975a0) */
/* WARNING: Removing unreachable block (ram,0x06797574) */
/* WARNING: Removing unreachable block (ram,0x06797580) */
/* WARNING: Removing unreachable block (ram,0x067975b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Merger_Game_Views_BoardView__SlideItem
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *extraout_x1;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  float fVar15;
  undefined1 auVar16 [16];
  
  if ((bRam0000000007e282d5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0858);
    func_0x03280a18(PTR_DAT_07809280);
    func_0x03280a18(PTR_DAT_07809568);
    bRam0000000007e282d5 = 1;
  }
  if ((*(long *)(param_3 + 0x120) != 0) &&
     (lVar6 = func_0x047544b8(*(long *)(param_3 + 0x120),param_5,*(undefined8 *)PTR_DAT_07809280),
     lVar6 != 0)) {
    uVar7 = func_0x069aaf28(lVar6,0);
    if ((*(long *)(param_3 + 0x130) != 0) &&
       (plVar8 = (long *)func_0x047544b8(*(long *)(param_3 + 0x130),param_4,
                                         *(undefined8 *)PTR_DAT_07809568), puVar2 = PTR_DAT_077c0858
       , plVar8 != (long *)0x0)) {
      lVar6 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_077c0858) {
            puVar9 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0679777c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)func_0x03256b10(plVar8,*(long *)PTR_DAT_077c0858,0);
LAB_0679777c:
      lVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (lVar6 != 0) {
        uVar10 = func_0x06feb6b4(lVar6,*(undefined8 *)(param_3 + 0x70),1,0);
        Merger_Game_Views_BoardView__Jump(param_1,uVar10,plVar8);
        uVar7 = Merger_Game_Views_BoardView__GetBoardCellPositionInBoardContainer(param_3,uVar7);
        lVar6 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_06797808;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar8,*(long *)puVar2,0);
LAB_06797808:
        lVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if (lVar6 != 0) {
          func_0x06fe97f4(uVar7,param_2,lVar6,0);
          puVar2 = PTR_DAT_078095b8;
          if ((bRam0000000007e282d7 & 1) == 0) {
            func_0x03280a18(param_1,PTR_DAT_077c0858,param_4,param_6,param_7);
            func_0x03280a18(PTR_DAT_0776bc20);
            func_0x03280a18(PTR_DAT_0777dd80);
            func_0x03280a18(PTR_DAT_078094e8);
            func_0x03280a18(PTR_DAT_078095c0);
            func_0x03280a18(PTR_DAT_078095b8);
            bRam0000000007e282d7 = 1;
          }
          lVar6 = func_0x03280ca0(*(undefined8 *)puVar2);
          return lVar6;
        }
      }
    }
  }
  fVar15 = (float)func_0x03280cac();
  if ((bRam0000000007e282d6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078095c8);
    bRam0000000007e282d6 = 1;
  }
  if (extraout_x1 != (long *)0x0) {
    lVar6 = *extraout_x1;
    lVar14 = *(long *)PTR_DAT_078095c8;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)(lVar14 + 0x20)) {
          lVar6 = lVar6 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar14 + 0x50)) * 0x10 + 0x138;
          goto LAB_067978f0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    lVar6 = func_0x03256b10(extraout_x1);
LAB_067978f0:
    lVar6 = func_0x03280b88(*(undefined8 *)(lVar6 + 8),lVar14);
    lVar6 = (**(code **)(lVar6 + 8))(extraout_x1,lVar6);
    puVar3 = PTR_DAT_0780d9c0;
    puVar2 = PTR_DAT_0780d9b8;
    if (lVar6 != 0) {
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
      uVar7 = func_0x04d18968(lVar6,*(undefined8 *)puVar2,*(undefined8 *)puVar3);
      lVar14 = *(long *)(lVar6 + 0x48);
      if (lVar14 != 0) {
        func_0x038eedf4(lVar14,1,0);
      }
      *(undefined1 *)(lVar6 + 0x41) = 1;
      puVar5 = PTR_DAT_0780dbe0;
      puVar4 = PTR_DAT_077804d8;
      puVar3 = PTR_DAT_0777dd88;
      puVar2 = PTR_DAT_0776bc20;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      uVar10 = func_0x038ec838(0);
      uVar11 = func_0x038d939c(0x42480000,fVar15 / 3.0,uVar7,0,0);
      uVar11 = func_0x03ed23d4(uVar11,9,*(undefined8 *)puVar3);
      uVar10 = func_0x038f9d28(uVar10,uVar11,0);
      uVar7 = func_0x038d939c(0,fVar15 * _UNK_017be65c,uVar7,0,0);
      uVar7 = func_0x03ed23d4(uVar7,8,*(undefined8 *)puVar3);
      uVar7 = func_0x038f9d28(uVar10,uVar7,0);
      *(undefined8 *)(lVar6 + 0x48) = uVar7;
      func_0x032809c4((long *)(lVar6 + 0x48),uVar7);
      lVar14 = *(long *)(lVar6 + 0x48);
      uVar7 = func_0x03280ca0(*(undefined8 *)puVar2);
      func_0x038e9b78(uVar7,lVar6,*(undefined8 *)puVar5,0);
      uVar10 = *(undefined8 *)puVar4;
      if ((lVar14 != 0) && (*(char *)(lVar14 + 0xe8) != '\0')) {
        *(undefined8 *)(lVar14 + 0x80) = uVar7;
        func_0x032809c4((undefined8 *)(lVar14 + 0x80),uVar7,uVar10);
      }
      return lVar14;
    }
  }
  auVar16 = func_0x03280cac();
  lVar6 = *(long *)(auVar16._0_8_ + 0x70);
  if ((lVar6 != 0) && (func_0x06fe9490(lVar6,0), auVar16._8_8_ != 0)) {
    lVar6 = func_0x06fe9764(auVar16._8_8_,0);
    return lVar6;
  }
  lVar6 = func_0x03280cac();
  return lVar6;
}

