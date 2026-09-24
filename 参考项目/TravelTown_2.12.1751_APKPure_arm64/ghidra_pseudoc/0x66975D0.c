/* Ghidra 12.1.2 native pseudocode; RVA 0x66975D0; Merger.Game.Views.BoardView.SwapItems; status ok */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Merger_Game_Views_BoardView__SwapItems(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined1 auVar11 [16];
  
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  do {
    plVar7 = param_3;
    uVar6 = auVar11._8_8_;
    lVar8 = auVar11._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d8;
    *(code **)((long)register0x00000008 + -0x30) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x10) = unaff_x20;
    *(long **)((long)register0x00000008 + -8) = unaff_x19;
    unaff_x20 = (long *)Merger_Game_Views_BoardView__GetItemAtPosition();
    uVar5 = Merger_Game_Views_BoardView__GetItemAtPosition(lVar8,plVar7);
    uVar1 = _UNK_017be88c;
    Merger_Game_Views_BoardView__SlideItem(_UNK_017be88c,lVar8,uVar6,plVar7,7);
    Merger_Game_Views_BoardView__SlideItem(uVar1,lVar8,plVar7,uVar6,7);
    Merger_Game_Views_BoardView__SetItem(lVar8,uVar6,uVar5);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x28);
    unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    param_3 = unaff_x20;
    if ((bRam0000000007e282d4 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077c0858);
      func_0x03280a18(PTR_DAT_07809280);
      func_0x03280a18(PTR_DAT_07809530);
      bRam0000000007e282d4 = 1;
    }
    unaff_x22 = (undefined *)0x7e28000;
    if (*(long *)(lVar8 + 0x130) != 0) {
      param_3 = unaff_x20;
      func_0x0475450c(*(long *)(lVar8 + 0x130),plVar7,unaff_x20,*(undefined8 *)PTR_DAT_07809530);
      puVar2 = PTR_DAT_077c0858;
      if (*(long *)(lVar8 + 0x120) != 0) {
        param_3 = *(long **)PTR_DAT_07809280;
        lVar3 = func_0x047544b8(*(long *)(lVar8 + 0x120),plVar7);
        if (unaff_x20 == (long *)0x0) {
          uVar5 = 0;
        }
        else {
          lVar8 = *unaff_x20;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                goto LAB_0679752c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          param_3 = (long *)0x3;
          puVar4 = (undefined8 *)func_0x03256b10(unaff_x20);
LAB_0679752c:
          uVar5 = (*(code *)*puVar4)(unaff_x20,puVar4[1]);
        }
        lVar8 = 0;
        unaff_x22 = puVar2;
        if (lVar3 != 0) break;
      }
    }
    unaff_x30 = Merger_Game_Views_BoardView__SwapItems;
    auVar11 = func_0x03280cac();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_x19 = plVar7;
    unaff_x21 = lVar8;
  } while( true );
  *(undefined8 *)(lVar3 + 0x28) = uVar5;
  func_0x032809c4((undefined8 *)(lVar3 + 0x28));
  if (unaff_x20 == (long *)0x0) {
    return;
  }
  lVar8 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
        puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
        goto LAB_067975b0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)func_0x03256b10(unaff_x20,*(long *)puVar2,2);
LAB_067975b0:
                    /* WARNING: Could not recover jumptable at 0x067975c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(unaff_x20,plVar7,puVar4[1]);
  return;
}

