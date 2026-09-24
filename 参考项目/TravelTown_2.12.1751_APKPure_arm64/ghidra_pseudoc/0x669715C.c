/* Ghidra 12.1.2 native pseudocode; RVA 0x669715C; Merger.Game.Views.BoardView.MoveItem; status ok */


/* WARNING: Possible PIC construction at 0x067971a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06797648: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x067971a8) */
/* WARNING: Removing unreachable block (ram,0x0679764c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Merger_Game_Views_BoardView__MoveItem(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long *unaff_x23;
  undefined8 uVar12;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  undefined1 auVar13 [16];
  
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = param_1;
  uVar3 = Merger_Game_Views_BoardView__GetItemAtPosition();
  func_0x067971c4(_UNK_017be88c,param_1,param_2,param_3,7);
  plVar6 = (long *)0x0;
  uVar12 = 0x67971a8;
  puVar2 = &stack0xffffffffffffffd0;
  do {
    uVar10 = auVar13._8_8_;
    lVar7 = auVar13._0_8_;
    *(undefined8 *)(puVar2 + -0x30) = uVar12;
    *(undefined8 *)(puVar2 + -0x20) = uVar3;
    *(undefined1 (*) [16])(puVar2 + -0x18) = auVar13;
    *(long **)(puVar2 + -8) = param_3;
    param_3 = plVar6;
    if ((bRam0000000007e282d4 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077c0858);
      func_0x03280a18(PTR_DAT_07809280);
      func_0x03280a18(PTR_DAT_07809530);
      bRam0000000007e282d4 = 1;
    }
    puVar11 = (undefined *)0x7e28000;
    if (*(long *)(lVar7 + 0x130) != 0) {
      param_3 = plVar6;
      func_0x0475450c(*(long *)(lVar7 + 0x130),uVar10,plVar6,*(undefined8 *)PTR_DAT_07809530);
      puVar1 = PTR_DAT_077c0858;
      if (*(long *)(lVar7 + 0x120) != 0) {
        param_3 = *(long **)PTR_DAT_07809280;
        lVar4 = func_0x047544b8(*(long *)(lVar7 + 0x120),uVar10);
        if (plVar6 == (long *)0x0) {
          uVar3 = 0;
        }
        else {
          lVar7 = *plVar6;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                goto LAB_0679752c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          param_3 = (long *)0x3;
          puVar5 = (undefined8 *)func_0x03256b10(plVar6);
LAB_0679752c:
          uVar3 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        }
        lVar7 = 0;
        puVar11 = puVar1;
        if (lVar4 != 0) break;
      }
    }
    auVar13 = func_0x03280cac();
    uVar12 = auVar13._0_8_;
    *(ulong *)(puVar2 + -0x70) = CONCAT44(unaff_00005104,unaff_s8);
    *(undefined8 *)(puVar2 + -0x60) = 0x67975d0;
    *(long **)(puVar2 + -0x58) = unaff_x23;
    *(undefined **)(puVar2 + -0x50) = puVar11;
    *(long *)(puVar2 + -0x48) = lVar7;
    *(long **)(puVar2 + -0x40) = plVar6;
    *(undefined8 *)(puVar2 + -0x38) = uVar10;
    uVar3 = Merger_Game_Views_BoardView__GetItemAtPosition();
    plVar6 = (long *)Merger_Game_Views_BoardView__GetItemAtPosition(uVar12,param_3);
    unaff_s8 = _UNK_017be88c;
    unaff_00005104 = 0;
    func_0x067971c4(_UNK_017be88c,uVar12,auVar13._8_8_,param_3,7);
    func_0x067971c4(unaff_s8,uVar12,param_3,auVar13._8_8_,7);
    uVar12 = 0x679764c;
    puVar2 = puVar2 + -0x70;
    unaff_x23 = plVar6;
  } while( true );
  *(undefined8 *)(lVar4 + 0x28) = uVar3;
  func_0x032809c4((undefined8 *)(lVar4 + 0x28));
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar7 = *plVar6;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_067975b0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar1,2);
LAB_067975b0:
                    /* WARNING: Could not recover jumptable at 0x067975c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar6,uVar10,puVar5[1]);
  return;
}

