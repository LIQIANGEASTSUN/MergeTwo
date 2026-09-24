/* Ghidra 12.1.2 native pseudocode; RVA 0x6697430; Merger.Game.Views.BoardView.SetItem; status ok */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Merger_Game_Views_BoardView__SetItem(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined *puVar12;
  undefined8 unaff_x23;
  undefined8 unaff_x30;
  undefined8 unaff_d8;
  undefined1 auVar13 [16];
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    plVar8 = param_3;
    if ((bRam0000000007e282d4 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077c0858);
      func_0x03280a18(PTR_DAT_07809280);
      func_0x03280a18(PTR_DAT_07809530);
      bRam0000000007e282d4 = 1;
    }
    lVar9 = param_1;
    puVar12 = (undefined *)0x7e28000;
    if (*(long *)(param_1 + 0x130) != 0) {
      plVar8 = param_3;
      func_0x0475450c(*(long *)(param_1 + 0x130),param_2,param_3,*(undefined8 *)PTR_DAT_07809530);
      puVar2 = PTR_DAT_077c0858;
      if (*(long *)(param_1 + 0x120) != 0) {
        plVar8 = *(long **)PTR_DAT_07809280;
        lVar4 = func_0x047544b8(*(long *)(param_1 + 0x120),param_2);
        if (param_3 == (long *)0x0) {
          uVar6 = 0;
        }
        else {
          lVar9 = *param_3;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
                goto LAB_0679752c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          plVar8 = (long *)0x3;
          puVar5 = (undefined8 *)func_0x03256b10(param_3);
LAB_0679752c:
          uVar6 = (*(code *)*puVar5)(param_3,puVar5[1]);
        }
        lVar9 = 0;
        puVar12 = puVar2;
        if (lVar4 != 0) break;
      }
    }
    auVar13 = func_0x03280cac();
    uVar7 = auVar13._8_8_;
    param_1 = auVar13._0_8_;
    puVar3 = (undefined8 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0x67975d0;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x50) = puVar12;
    *(long *)((long)register0x00000008 + -0x48) = lVar9;
    *(long **)((long)register0x00000008 + -0x40) = param_3;
    *(long **)((long)register0x00000008 + -0x38) = param_2;
    param_3 = (long *)Merger_Game_Views_BoardView__GetItemAtPosition();
    uVar6 = Merger_Game_Views_BoardView__GetItemAtPosition(param_1,plVar8);
    uVar1 = _UNK_017be88c;
    func_0x067971c4(_UNK_017be88c,param_1,uVar7,plVar8,7);
    func_0x067971c4(uVar1,param_1,plVar8,uVar7,7);
    Merger_Game_Views_BoardView__SetItem(param_1,uVar7,uVar6);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x40);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x38);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x50);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x48);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x58);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    unaff_d8 = *puVar3;
    param_2 = plVar8;
  } while( true );
  *(undefined8 *)(lVar4 + 0x28) = uVar6;
  func_0x032809c4((undefined8 *)(lVar4 + 0x28));
  if (param_3 == (long *)0x0) {
    return;
  }
  lVar9 = *param_3;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
        goto LAB_067975b0;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)func_0x03256b10(param_3,*(long *)puVar2,2);
LAB_067975b0:
                    /* WARNING: Could not recover jumptable at 0x067975c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(param_3,param_2,puVar5[1]);
  return;
}

