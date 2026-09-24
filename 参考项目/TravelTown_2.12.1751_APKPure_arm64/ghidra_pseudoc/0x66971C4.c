/* Ghidra 12.1.2 native pseudocode; RVA 0x66971C4; Merger.Game.Views.BoardView.SlideItem; status ok */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Merger_Game_Views_BoardView__SlideItem
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,long *param_5
               ,ulong param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  undefined *puVar17;
  code *pcVar18;
  undefined1 auVar19 [16];
  
  puVar17 = PTR_DAT_078095b8;
  puVar6 = &stack0xffffffffffffffa0;
  param_6 = param_6 & 0xffffffff;
  plVar12 = param_5;
  if ((bRam0000000007e282d7 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c0858);
    func_0x03280a18(PTR_DAT_0776bc20);
    func_0x03280a18(PTR_DAT_0777dd80);
    func_0x03280a18(PTR_DAT_078094e8);
    func_0x03280a18(PTR_DAT_078095c0);
    func_0x03280a18(PTR_DAT_078095b8);
    bRam0000000007e282d7 = 1;
  }
  lVar7 = func_0x03280ca0(*(undefined8 *)puVar17);
  func_0x057da5fc(lVar7,0);
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x10) = param_3;
    func_0x032809c4((long *)(lVar7 + 0x10),param_3);
    *(long **)(lVar7 + 0x18) = param_5;
    plVar12 = *(long **)(param_3 + 0x70);
    uVar8 = Merger_Game_Views_BoardView__PrepareItemToSlide(param_3,param_4);
    *(undefined8 *)(lVar7 + 0x20) = uVar8;
    func_0x032809c4();
    if (*(long *)(param_3 + 0x128) != 0) {
      plVar12 = *(long **)PTR_DAT_078094e8;
      uVar8 = func_0x047544b8(*(long *)(param_3 + 0x128),*(undefined8 *)(lVar7 + 0x18));
      param_4 = (undefined8 *)(lVar7 + 0x28);
      *param_4 = uVar8;
      func_0x032809c4(param_4,uVar8);
      uVar8 = Merger_Game_Views_BoardView__GetBoardCellPositionInBoardContainer(param_3,*param_4);
      puVar4 = PTR_DAT_078095c0;
      puVar3 = PTR_DAT_077c0858;
      puVar2 = PTR_DAT_0777dd80;
      puVar17 = PTR_DAT_0776bc20;
      plVar16 = *(long **)(lVar7 + 0x20);
      param_3 = 0;
      if (plVar16 != (long *)0x0) {
        lVar13 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_077c0858) {
              puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_06797358;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar16,*(long *)PTR_DAT_077c0858,0);
LAB_06797358:
        uVar10 = (*(code *)*puVar9)(plVar16,puVar9[1]);
        uVar8 = Merger_Game_Views_BoardView__SlideGameObject
                          (uVar8,param_2,param_1,uVar10,uVar10,param_6);
        uVar10 = func_0x03280ca0(*(undefined8 *)puVar17);
        func_0x038e9b78(uVar10,lVar7,*(undefined8 *)puVar4,0);
        uVar8 = func_0x03ed1c24(uVar8,uVar10,*(undefined8 *)puVar2);
        lVar7 = *plVar16;
        uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar7 + (long)(*piVar15 + 10) * 0x10 + 0x138);
              goto LAB_06797404;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar16,*(long *)puVar3,10);
LAB_06797404:
                    /* WARNING: Could not recover jumptable at 0x06797428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar9)(plVar16,uVar8,puVar9[1]);
        return;
      }
    }
  }
  pcVar18 = Merger_Game_Views_BoardView__SetItem;
  auVar19 = func_0x03280cac();
  do {
    uVar8 = auVar19._8_8_;
    lVar13 = auVar19._0_8_;
    *(code **)(puVar6 + -0x30) = pcVar18;
    *(undefined8 **)(puVar6 + -0x20) = param_4;
    *(long *)(puVar6 + -0x18) = lVar7;
    *(long *)(puVar6 + -0x10) = param_3;
    *(ulong *)(puVar6 + -8) = param_6;
    plVar16 = plVar12;
    if ((bRam0000000007e282d4 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077c0858);
      func_0x03280a18(PTR_DAT_07809280);
      func_0x03280a18(PTR_DAT_07809530);
      bRam0000000007e282d4 = 1;
    }
    puVar17 = (undefined *)0x7e28000;
    if (*(long *)(lVar13 + 0x130) != 0) {
      plVar16 = plVar12;
      func_0x0475450c(*(long *)(lVar13 + 0x130),uVar8,plVar12,*(undefined8 *)PTR_DAT_07809530);
      puVar2 = PTR_DAT_077c0858;
      if (*(long *)(lVar13 + 0x120) != 0) {
        plVar16 = *(long **)PTR_DAT_07809280;
        lVar7 = func_0x047544b8(*(long *)(lVar13 + 0x120),uVar8);
        if (plVar12 == (long *)0x0) {
          uVar10 = 0;
        }
        else {
          lVar13 = *plVar12;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 3) * 0x10 + 0x138);
                goto LAB_0679752c;
              }
              uVar14 = uVar14 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar14 != 0);
          }
          plVar16 = (long *)0x3;
          puVar9 = (undefined8 *)func_0x03256b10(plVar12);
LAB_0679752c:
          uVar10 = (*(code *)*puVar9)(plVar12,puVar9[1]);
        }
        lVar13 = 0;
        puVar17 = puVar2;
        if (lVar7 != 0) break;
      }
    }
    auVar19 = func_0x03280cac();
    uVar11 = auVar19._8_8_;
    uVar10 = auVar19._0_8_;
    auVar19._8_8_ = plVar16;
    auVar19._0_8_ = uVar10;
    puVar5 = (undefined8 *)(puVar6 + -0x70);
    *(undefined8 *)(puVar6 + -0x70) = param_1;
    *(undefined8 *)(puVar6 + -0x60) = 0x67975d0;
    *(long **)(puVar6 + -0x58) = param_5;
    *(undefined **)(puVar6 + -0x50) = puVar17;
    *(long *)(puVar6 + -0x48) = lVar13;
    *(long **)(puVar6 + -0x40) = plVar12;
    *(undefined8 *)(puVar6 + -0x38) = uVar8;
    plVar12 = (long *)Merger_Game_Views_BoardView__GetItemAtPosition();
    uVar8 = Merger_Game_Views_BoardView__GetItemAtPosition(uVar10,plVar16);
    uVar1 = _UNK_017be88c;
    Merger_Game_Views_BoardView__SlideItem(_UNK_017be88c,uVar10,uVar11,plVar16,7);
    Merger_Game_Views_BoardView__SlideItem(uVar1,uVar10,plVar16,uVar11,7);
    Merger_Game_Views_BoardView__SetItem(uVar10,uVar11,uVar8);
    param_3 = *(long *)(puVar6 + -0x40);
    param_6 = *(ulong *)(puVar6 + -0x38);
    param_4 = *(undefined8 **)(puVar6 + -0x50);
    lVar7 = *(long *)(puVar6 + -0x48);
    pcVar18 = *(code **)(puVar6 + -0x60);
    param_5 = *(long **)(puVar6 + -0x58);
    puVar6 = puVar6 + -0x30;
    param_1 = *puVar5;
  } while( true );
  *(undefined8 *)(lVar7 + 0x28) = uVar10;
  func_0x032809c4((undefined8 *)(lVar7 + 0x28));
  if (plVar12 == (long *)0x0) {
    return;
  }
  lVar7 = *plVar12;
  uVar14 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
        puVar9 = (undefined8 *)(lVar7 + (long)(*piVar15 + 2) * 0x10 + 0x138);
        goto LAB_067975b0;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar9 = (undefined8 *)func_0x03256b10(plVar12,*(long *)puVar2,2);
LAB_067975b0:
                    /* WARNING: Could not recover jumptable at 0x067975c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar9)(plVar12,uVar8,puVar9[1]);
  return;
}

